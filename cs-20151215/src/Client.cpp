#include <darabonba/Core.hpp>
#include <alibabacloud/CS20151215.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::CS20151215::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace CS20151215
{

AlibabaCloud::CS20151215::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "cs.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "cs.aliyuncs.com"},
    {"cn-beijing-gov-1" , "cs.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "cs.aliyuncs.com"},
    {"cn-edge-1" , "cs.aliyuncs.com"},
    {"cn-fujian" , "cs.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "cs.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "cs.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "cs.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "cs.aliyuncs.com"},
    {"cn-qingdao-nebula" , "cs.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "cs.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "cs.aliyuncs.com"},
    {"cn-shanghai-inner" , "cs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "cs.aliyuncs.com"},
    {"cn-shenzhen-inner" , "cs.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "cs.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "cs.aliyuncs.com"},
    {"cn-wuhan" , "cs.aliyuncs.com"},
    {"cn-yushanfang" , "cs.aliyuncs.com"},
    {"cn-zhangbei" , "cs.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "cs.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "cs.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "cs.aliyuncs.com"},
    {"eu-west-1-oxs" , "cs.aliyuncs.com"},
    {"rus-west-1-pop" , "cs.aliyuncs.com"},
    {"us-west-1" , "cs.us-west-1.aliyuncs.com"},
    {"us-southeast-1" , "cs.us-southeast-1.aliyuncs.com"},
    {"us-east-1" , "cs.us-east-1.aliyuncs.com"},
    {"na-south-1" , "cs.na-south-1.aliyuncs.com"},
    {"me-east-1" , "cs.me-east-1.aliyuncs.com"},
    {"me-central-1" , "cs.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "cs.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "cs.eu-central-1.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "cs.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "cs.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu-gic-1" , "cs.cn-wulanchabu-gic-1.aliyuncs.com"},
    {"cn-wulanchabu" , "cs.cn-wulanchabu.aliyuncs.com"},
    {"cn-wuhan-lr" , "cs.cn-wuhan-lr.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "cs.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "cs.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "cs.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "cs.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "cs.cn-qingdao.aliyuncs.com"},
    {"cn-nanjing" , "cs.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "cs.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "cs.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "cs.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-heyuan" , "cs.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "cs.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "cs.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "cs.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "cs.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "cs.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "cs.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "cs.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "cs.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-5" , "cs.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "cs.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "cs.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "cs.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "cs.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "cs.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "cs.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster. You can call the AttachInstances operation to add ECS instances to an ACK cluster as worker nodes after purchasing the instances, or to re-add node instances to a node pool after they are removed.
 *
 * @description Before you invoke this operation, read [Limits](https://help.aliyun.com/document_detail/86919.html) to make sure that the ECS instances to be added meet the requirements.
 *
 * @param request AttachInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachInstancesResponse
 */
AttachInstancesResponse Client::attachInstancesWithOptions(const string &ClusterId, const AttachInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCpuPolicy()) {
    body["cpu_policy"] = request.getCpuPolicy();
  }

  if (!!request.hasFormatDisk()) {
    body["format_disk"] = request.getFormatDisk();
  }

  if (!!request.hasImageId()) {
    body["image_id"] = request.getImageId();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
  }

  if (!!request.hasIsEdgeWorker()) {
    body["is_edge_worker"] = request.getIsEdgeWorker();
  }

  if (!!request.hasKeepInstanceName()) {
    body["keep_instance_name"] = request.getKeepInstanceName();
  }

  if (!!request.hasKeyPair()) {
    body["key_pair"] = request.getKeyPair();
  }

  if (!!request.hasNodepoolId()) {
    body["nodepool_id"] = request.getNodepoolId();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  if (!!request.hasRdsInstances()) {
    body["rds_instances"] = request.getRdsInstances();
  }

  if (!!request.hasRuntime()) {
    body["runtime"] = request.getRuntime();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasUserData()) {
    body["user_data"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AttachInstances"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/attach")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachInstancesResponse>();
}

/**
 * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster. You can call the AttachInstances operation to add ECS instances to an ACK cluster as worker nodes after purchasing the instances, or to re-add node instances to a node pool after they are removed.
 *
 * @description Before you invoke this operation, read [Limits](https://help.aliyun.com/document_detail/86919.html) to make sure that the ECS instances to be added meet the requirements.
 *
 * @param request AttachInstancesRequest
 * @return AttachInstancesResponse
 */
AttachInstancesResponse Client::attachInstances(const string &ClusterId, const AttachInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return attachInstancesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Adds existing ECS instances to a node pool in an ACK cluster. You can call this operation to add existing ECS instances as worker nodes to an ACK cluster or to re-add node instances to a node pool after they have been removed.
 *
 * @param request AttachInstancesToNodePoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachInstancesToNodePoolResponse
 */
AttachInstancesToNodePoolResponse Client::attachInstancesToNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const AttachInstancesToNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFormatDisk()) {
    body["format_disk"] = request.getFormatDisk();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
  }

  if (!!request.hasKeepInstanceName()) {
    body["keep_instance_name"] = request.getKeepInstanceName();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AttachInstancesToNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId) , "/attach")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachInstancesToNodePoolResponse>();
}

/**
 * @summary Adds existing ECS instances to a node pool in an ACK cluster. You can call this operation to add existing ECS instances as worker nodes to an ACK cluster or to re-add node instances to a node pool after they have been removed.
 *
 * @param request AttachInstancesToNodePoolRequest
 * @return AttachInstancesToNodePoolResponse
 */
AttachInstancesToNodePoolResponse Client::attachInstancesToNodePool(const string &ClusterId, const string &NodepoolId, const AttachInstancesToNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return attachInstancesToNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI CancelClusterUpgrade is deprecated
 *
 * @summary Cancels the upgrade of an ACK cluster that is in the upgrading state.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelClusterUpgradeResponse
 */
CancelClusterUpgradeResponse Client::cancelClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelClusterUpgrade"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/upgrade/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelClusterUpgradeResponse>();
}

/**
 * @deprecated OpenAPI CancelClusterUpgrade is deprecated
 *
 * @summary Cancels the upgrade of an ACK cluster that is in the upgrading state.
 *
 * @return CancelClusterUpgradeResponse
 */
CancelClusterUpgradeResponse Client::cancelClusterUpgrade(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

/**
 * @deprecated OpenAPI CancelComponentUpgrade is deprecated
 *
 * @summary Cancels the upgrade of a cluster component.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelComponentUpgradeResponse
 */
CancelComponentUpgradeResponse Client::cancelComponentUpgradeWithOptions(const string &clusterId, const string &componentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelComponentUpgrade"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/components/" , Darabonba::Encode::Encoder::percentEncode(componentId) , "/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelComponentUpgradeResponse>();
}

/**
 * @deprecated OpenAPI CancelComponentUpgrade is deprecated
 *
 * @summary Cancels the upgrade of a cluster component.
 *
 * @return CancelComponentUpgradeResponse
 */
CancelComponentUpgradeResponse Client::cancelComponentUpgrade(const string &clusterId, const string &componentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelComponentUpgradeWithOptions(clusterId, componentId, headers, runtime);
}

/**
 * @summary Cancels an existing but unexecuted automated O&M task execution plan by calling CancelOperationPlan.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelOperationPlanResponse
 */
CancelOperationPlanResponse Client::cancelOperationPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelOperationPlan"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/operation/plans/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelOperationPlanResponse>();
}

/**
 * @summary Cancels an existing but unexecuted automated O&M task execution plan by calling CancelOperationPlan.
 *
 * @return CancelOperationPlanResponse
 */
CancelOperationPlanResponse Client::cancelOperationPlan(const string &planId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelOperationPlanWithOptions(planId, headers, runtime);
}

/**
 * @summary Cancels the execution of a cluster task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary Cancels the execution of a cluster task.
 *
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary Queries the log configuration of control plane components for an ACK managed cluster. Control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the CheckControlPlaneLogEnable operation to query the current log configuration of control plane components, including the log retention period and the components from which logs are collected.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckControlPlaneLogEnableResponse
 */
CheckControlPlaneLogEnableResponse Client::checkControlPlaneLogEnableWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckControlPlaneLogEnable"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/controlplanelog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckControlPlaneLogEnableResponse>();
}

/**
 * @summary Queries the log configuration of control plane components for an ACK managed cluster. Control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the CheckControlPlaneLogEnable operation to query the current log configuration of control plane components, including the log retention period and the components from which logs are collected.
 *
 * @return CheckControlPlaneLogEnableResponse
 */
CheckControlPlaneLogEnableResponse Client::checkControlPlaneLogEnable(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkControlPlaneLogEnableWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Checks whether the current service account has been granted the specified service role permissions. Container Service for Kubernetes (ACK) can call other cloud services (such as ECS, OSS, NAS, and SLB) that are associated with service roles only after the corresponding role permissions are granted.
 *
 * @param request CheckServiceRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceRoleResponse
 */
CheckServiceRoleResponse Client::checkServiceRoleWithOptions(const CheckServiceRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoles()) {
    body["roles"] = request.getRoles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckServiceRole"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ram/check-service-role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceRoleResponse>();
}

/**
 * @summary Checks whether the current service account has been granted the specified service role permissions. Container Service for Kubernetes (ACK) can call other cloud services (such as ECS, OSS, NAS, and SLB) that are associated with service roles only after the corresponding role permissions are granted.
 *
 * @param request CheckServiceRoleRequest
 * @return CheckServiceRoleResponse
 */
CheckServiceRoleResponse Client::checkServiceRole(const CheckServiceRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkServiceRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Cleans up KubeConfig credentials and RBAC permissions that have been issued to a specified user in a specified cluster. You can call this operation to revoke authorization for KubeConfig credentials that pose security risks.
 *
 * @description > 1. You must have the permission to manage Container Service for Kubernetes (ACK) (AliyunCSFullAccess). 
 * > 2. Cleaning up permissions of an Alibaba Cloud account is not supported.
 * > 3. Cleaning up the permissions of the user who performs this operation is not supported.
 *
 * @param request CleanClusterUserPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CleanClusterUserPermissionsResponse
 */
CleanClusterUserPermissionsResponse Client::cleanClusterUserPermissionsWithOptions(const string &ClusterId, const string &Uid, const CleanClusterUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CleanClusterUserPermissions"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cluster/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/user/" , Darabonba::Encode::Encoder::percentEncode(Uid) , "/permissions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CleanClusterUserPermissionsResponse>();
}

/**
 * @summary Cleans up KubeConfig credentials and RBAC permissions that have been issued to a specified user in a specified cluster. You can call this operation to revoke authorization for KubeConfig credentials that pose security risks.
 *
 * @description > 1. You must have the permission to manage Container Service for Kubernetes (ACK) (AliyunCSFullAccess). 
 * > 2. Cleaning up permissions of an Alibaba Cloud account is not supported.
 * > 3. Cleaning up the permissions of the user who performs this operation is not supported.
 *
 * @param request CleanClusterUserPermissionsRequest
 * @return CleanClusterUserPermissionsResponse
 */
CleanClusterUserPermissionsResponse Client::cleanClusterUserPermissions(const string &ClusterId, const string &Uid, const CleanClusterUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cleanClusterUserPermissionsWithOptions(ClusterId, Uid, request, headers, runtime);
}

/**
 * @summary Cleans up KubeConfig credentials and revokes RBAC permissions for a specified user. If you want to clean up KubeConfig credentials and revoke authorization for risky users such as those who have left the organization or whose accounts have been frozen, call CleanUserPermissions to clean up the issued KubeConfig credentials and RBAC permissions for the specified user.
 *
 * @description >- You must have full access permissions on Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 * >- Cleaning up permissions of an Alibaba Cloud account is not supported.
 * >- Cleaning up the permissions of the user who performs this operation is not supported.
 *
 * @param tmpReq CleanUserPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CleanUserPermissionsResponse
 */
CleanUserPermissionsResponse Client::cleanUserPermissionsWithOptions(const string &Uid, const CleanUserPermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CleanUserPermissionsShrinkRequest request = CleanUserPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClusterIds()) {
    request.setClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterIds(), "ClusterIds", "simple"));
  }

  json query = {};
  if (!!request.hasClusterIdsShrink()) {
    query["ClusterIds"] = request.getClusterIdsShrink();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CleanUserPermissions"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/users/" , Darabonba::Encode::Encoder::percentEncode(Uid) , "/permissions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CleanUserPermissionsResponse>();
}

/**
 * @summary Cleans up KubeConfig credentials and revokes RBAC permissions for a specified user. If you want to clean up KubeConfig credentials and revoke authorization for risky users such as those who have left the organization or whose accounts have been frozen, call CleanUserPermissions to clean up the issued KubeConfig credentials and RBAC permissions for the specified user.
 *
 * @description >- You must have full access permissions on Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 * >- Cleaning up permissions of an Alibaba Cloud account is not supported.
 * >- Cleaning up the permissions of the user who performs this operation is not supported.
 *
 * @param request CleanUserPermissionsRequest
 * @return CleanUserPermissionsResponse
 */
CleanUserPermissionsResponse Client::cleanUserPermissions(const string &Uid, const CleanUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cleanUserPermissionsWithOptions(Uid, request, headers, runtime);
}

/**
 * @summary Creates a self-healing rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @param request CreateAutoRepairPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoRepairPolicyResponse
 */
CreateAutoRepairPolicyResponse Client::createAutoRepairPolicyWithOptions(const string &clusterId, const CreateAutoRepairPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasResourceSubType()) {
    body["resource_sub_type"] = request.getResourceSubType();
  }

  if (!!request.hasResourceType()) {
    body["resource_type"] = request.getResourceType();
  }

  if (!!request.hasRules()) {
    body["rules"] = request.getRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAutoRepairPolicy"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/auto_repair_policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoRepairPolicyResponse>();
}

/**
 * @summary Creates a self-healing rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @param request CreateAutoRepairPolicyRequest
 * @return CreateAutoRepairPolicyResponse
 */
CreateAutoRepairPolicyResponse Client::createAutoRepairPolicy(const string &clusterId, const CreateAutoRepairPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAutoRepairPolicyWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Creates an elastic scaling configuration that allows the system to automatically increase or decrease compute resources based on the configured scaling rules to meet the workload demands of your cluster. During the creation procedure, you can specify scaling metrics and thresholds, scale-out order, cool-down period, and more.
 *
 * @param request CreateAutoscalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoscalingConfigResponse
 */
CreateAutoscalingConfigResponse Client::createAutoscalingConfigWithOptions(const string &ClusterId, const CreateAutoscalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCoolDownDuration()) {
    body["cool_down_duration"] = request.getCoolDownDuration();
  }

  if (!!request.hasDaemonsetEvictionForNodes()) {
    body["daemonset_eviction_for_nodes"] = request.getDaemonsetEvictionForNodes();
  }

  if (!!request.hasExpander()) {
    body["expander"] = request.getExpander();
  }

  if (!!request.hasGpuUtilizationThreshold()) {
    body["gpu_utilization_threshold"] = request.getGpuUtilizationThreshold();
  }

  if (!!request.hasMaxGracefulTerminationSec()) {
    body["max_graceful_termination_sec"] = request.getMaxGracefulTerminationSec();
  }

  if (!!request.hasMinReplicaCount()) {
    body["min_replica_count"] = request.getMinReplicaCount();
  }

  if (!!request.hasPriorities()) {
    body["priorities"] = request.getPriorities();
  }

  if (!!request.hasRecycleNodeDeletionEnabled()) {
    body["recycle_node_deletion_enabled"] = request.getRecycleNodeDeletionEnabled();
  }

  if (!!request.hasScaleDownEnabled()) {
    body["scale_down_enabled"] = request.getScaleDownEnabled();
  }

  if (!!request.hasScaleUpFromZero()) {
    body["scale_up_from_zero"] = request.getScaleUpFromZero();
  }

  if (!!request.hasScalerType()) {
    body["scaler_type"] = request.getScalerType();
  }

  if (!!request.hasScanInterval()) {
    body["scan_interval"] = request.getScanInterval();
  }

  if (!!request.hasSkipNodesWithLocalStorage()) {
    body["skip_nodes_with_local_storage"] = request.getSkipNodesWithLocalStorage();
  }

  if (!!request.hasSkipNodesWithSystemPods()) {
    body["skip_nodes_with_system_pods"] = request.getSkipNodesWithSystemPods();
  }

  if (!!request.hasUnneededDuration()) {
    body["unneeded_duration"] = request.getUnneededDuration();
  }

  if (!!request.hasUtilizationThreshold()) {
    body["utilization_threshold"] = request.getUtilizationThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAutoscalingConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cluster/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/autoscale/config/")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoscalingConfigResponse>();
}

/**
 * @summary Creates an elastic scaling configuration that allows the system to automatically increase or decrease compute resources based on the configured scaling rules to meet the workload demands of your cluster. During the creation procedure, you can specify scaling metrics and thresholds, scale-out order, cool-down period, and more.
 *
 * @param request CreateAutoscalingConfigRequest
 * @return CreateAutoscalingConfigResponse
 */
CreateAutoscalingConfigResponse Client::createAutoscalingConfig(const string &ClusterId, const CreateAutoscalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAutoscalingConfigWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can create ACK clusters through OpenAPI, including ACK managed clusters, ACK Serverless clusters, ACK Edge clusters, and registered clusters. When creating a cluster, you will configure the cluster information, cluster components, and ACK-related cloud resources.
 *
 * @description ### Generate OpenAPI request parameters through the console
 * When calling the CreateCluster API to create a cluster, if the API call fails due to incorrect request parameter combinations, you can generate the required request parameter combinations through the console. Follow these steps:
 * 1. Log in to the [Container Service management console](https://csnew.console.aliyun.com) and choose **Clusters** in the left navigation pane.
 * 1. On the **Clusters** page, click **Cluster Template**.
 * 1. In the dialog box, select the cluster type to create, click Create, and then configure the cluster information on the cluster configuration page.
 * 1. After the configuration is complete, on the **Confirm Configuration** page, click **Equivalent Code** in the upper-right corner. The dialog box will display the parameter combinations required for creating the cluster, which you can copy and use.
 * >Notice: Starting from July 4, 2026, some request parameters will no longer take effect. For change details and alternative parameter descriptions, see [Announcement on OpenAPI parameter changes and API deprecation for ACK cluster management](https://help.aliyun.com/document_detail/2932733.html).</notice>
 *
 * @param request CreateClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessControlList()) {
    body["access_control_list"] = request.getAccessControlList();
  }

  if (!!request.hasAddons()) {
    body["addons"] = request.getAddons();
  }

  if (!!request.hasApiAudiences()) {
    body["api_audiences"] = request.getApiAudiences();
  }

  if (!!request.hasAuditLogConfig()) {
    body["audit_log_config"] = request.getAuditLogConfig();
  }

  if (!!request.hasAutoMode()) {
    body["auto_mode"] = request.getAutoMode();
  }

  if (!!request.hasAutoRenew()) {
    body["auto_renew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    body["auto_renew_period"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasChargeType()) {
    body["charge_type"] = request.getChargeType();
  }

  if (!!request.hasCisEnabled()) {
    body["cis_enabled"] = request.getCisEnabled();
  }

  if (!!request.hasCloudMonitorFlags()) {
    body["cloud_monitor_flags"] = request.getCloudMonitorFlags();
  }

  if (!!request.hasClusterDomain()) {
    body["cluster_domain"] = request.getClusterDomain();
  }

  if (!!request.hasClusterSpec()) {
    body["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    body["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasContainerCidr()) {
    body["container_cidr"] = request.getContainerCidr();
  }

  if (!!request.hasControlPlaneConfig()) {
    body["control_plane_config"] = request.getControlPlaneConfig();
  }

  if (!!request.hasControlPlaneEndpointsConfig()) {
    body["control_plane_endpoints_config"] = request.getControlPlaneEndpointsConfig();
  }

  if (!!request.hasControlplaneLogComponents()) {
    body["controlplane_log_components"] = request.getControlplaneLogComponents();
  }

  if (!!request.hasControlplaneLogProject()) {
    body["controlplane_log_project"] = request.getControlplaneLogProject();
  }

  if (!!request.hasControlplaneLogTtl()) {
    body["controlplane_log_ttl"] = request.getControlplaneLogTtl();
  }

  if (!!request.hasCpuPolicy()) {
    body["cpu_policy"] = request.getCpuPolicy();
  }

  if (!!request.hasCustomSan()) {
    body["custom_san"] = request.getCustomSan();
  }

  if (!!request.hasDeletionProtection()) {
    body["deletion_protection"] = request.getDeletionProtection();
  }

  if (!!request.hasDisableRollback()) {
    body["disable_rollback"] = request.getDisableRollback();
  }

  if (!!request.hasEnableRrsa()) {
    body["enable_rrsa"] = request.getEnableRrsa();
  }

  if (!!request.hasEncryptionProviderKey()) {
    body["encryption_provider_key"] = request.getEncryptionProviderKey();
  }

  if (!!request.hasEndpointPublicAccess()) {
    body["endpoint_public_access"] = request.getEndpointPublicAccess();
  }

  if (!!request.hasExtraSans()) {
    body["extra_sans"] = request.getExtraSans();
  }

  if (!!request.hasFormatDisk()) {
    body["format_disk"] = request.getFormatDisk();
  }

  if (!!request.hasImageId()) {
    body["image_id"] = request.getImageId();
  }

  if (!!request.hasImageType()) {
    body["image_type"] = request.getImageType();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
  }

  if (!!request.hasIpStack()) {
    body["ip_stack"] = request.getIpStack();
  }

  if (!!request.hasIsEnterpriseSecurityGroup()) {
    body["is_enterprise_security_group"] = request.getIsEnterpriseSecurityGroup();
  }

  if (!!request.hasKeepInstanceName()) {
    body["keep_instance_name"] = request.getKeepInstanceName();
  }

  if (!!request.hasKeyPair()) {
    body["key_pair"] = request.getKeyPair();
  }

  if (!!request.hasKubernetesVersion()) {
    body["kubernetes_version"] = request.getKubernetesVersion();
  }

  if (!!request.hasLoadBalancerId()) {
    body["load_balancer_id"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerSpec()) {
    body["load_balancer_spec"] = request.getLoadBalancerSpec();
  }

  if (!!request.hasLoggingType()) {
    body["logging_type"] = request.getLoggingType();
  }

  if (!!request.hasLoginPassword()) {
    body["login_password"] = request.getLoginPassword();
  }

  if (!!request.hasMaintenanceWindow()) {
    body["maintenance_window"] = request.getMaintenanceWindow();
  }

  if (!!request.hasMasterAutoRenew()) {
    body["master_auto_renew"] = request.getMasterAutoRenew();
  }

  if (!!request.hasMasterAutoRenewPeriod()) {
    body["master_auto_renew_period"] = request.getMasterAutoRenewPeriod();
  }

  if (!!request.hasMasterCount()) {
    body["master_count"] = request.getMasterCount();
  }

  if (!!request.hasMasterInstanceChargeType()) {
    body["master_instance_charge_type"] = request.getMasterInstanceChargeType();
  }

  if (!!request.hasMasterInstanceTypes()) {
    body["master_instance_types"] = request.getMasterInstanceTypes();
  }

  if (!!request.hasMasterPeriod()) {
    body["master_period"] = request.getMasterPeriod();
  }

  if (!!request.hasMasterPeriodUnit()) {
    body["master_period_unit"] = request.getMasterPeriodUnit();
  }

  if (!!request.hasMasterSystemDiskCategory()) {
    body["master_system_disk_category"] = request.getMasterSystemDiskCategory();
  }

  if (!!request.hasMasterSystemDiskPerformanceLevel()) {
    body["master_system_disk_performance_level"] = request.getMasterSystemDiskPerformanceLevel();
  }

  if (!!request.hasMasterSystemDiskSize()) {
    body["master_system_disk_size"] = request.getMasterSystemDiskSize();
  }

  if (!!request.hasMasterSystemDiskSnapshotPolicyId()) {
    body["master_system_disk_snapshot_policy_id"] = request.getMasterSystemDiskSnapshotPolicyId();
  }

  if (!!request.hasMasterVswitchIds()) {
    body["master_vswitch_ids"] = request.getMasterVswitchIds();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNatGateway()) {
    body["nat_gateway"] = request.getNatGateway();
  }

  if (!!request.hasNodeCidrMask()) {
    body["node_cidr_mask"] = request.getNodeCidrMask();
  }

  if (!!request.hasNodeNameMode()) {
    body["node_name_mode"] = request.getNodeNameMode();
  }

  if (!!request.hasNodePortRange()) {
    body["node_port_range"] = request.getNodePortRange();
  }

  if (!!request.hasNodepools()) {
    body["nodepools"] = request.getNodepools();
  }

  if (!!request.hasNumOfNodes()) {
    body["num_of_nodes"] = request.getNumOfNodes();
  }

  if (!!request.hasOperationPolicy()) {
    body["operation_policy"] = request.getOperationPolicy();
  }

  if (!!request.hasOsType()) {
    body["os_type"] = request.getOsType();
  }

  if (!!request.hasPeriod()) {
    body["period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["period_unit"] = request.getPeriodUnit();
  }

  if (!!request.hasPlatform()) {
    body["platform"] = request.getPlatform();
  }

  if (!!request.hasPodVswitchIds()) {
    body["pod_vswitch_ids"] = request.getPodVswitchIds();
  }

  if (!!request.hasProfile()) {
    body["profile"] = request.getProfile();
  }

  if (!!request.hasProxyMode()) {
    body["proxy_mode"] = request.getProxyMode();
  }

  if (!!request.hasRdsInstances()) {
    body["rds_instances"] = request.getRdsInstances();
  }

  if (!!request.hasRegionId()) {
    body["region_id"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["resource_group_id"] = request.getResourceGroupId();
  }

  if (!!request.hasRrsaConfig()) {
    body["rrsa_config"] = request.getRrsaConfig();
  }

  if (!!request.hasRuntime()) {
    body["runtime"] = request.getRuntime();
  }

  if (!!request.hasSecurityGroupId()) {
    body["security_group_id"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityHardeningOs()) {
    body["security_hardening_os"] = request.getSecurityHardeningOs();
  }

  if (!!request.hasServiceAccountIssuer()) {
    body["service_account_issuer"] = request.getServiceAccountIssuer();
  }

  if (!!request.hasServiceCidr()) {
    body["service_cidr"] = request.getServiceCidr();
  }

  if (!!request.hasServiceDiscoveryTypes()) {
    body["service_discovery_types"] = request.getServiceDiscoveryTypes();
  }

  if (!!request.hasSnatEntry()) {
    body["snat_entry"] = request.getSnatEntry();
  }

  if (!!request.hasSocEnabled()) {
    body["soc_enabled"] = request.getSocEnabled();
  }

  if (!!request.hasSshFlags()) {
    body["ssh_flags"] = request.getSshFlags();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaints()) {
    body["taints"] = request.getTaints();
  }

  if (!!request.hasTimeoutMins()) {
    body["timeout_mins"] = request.getTimeoutMins();
  }

  if (!!request.hasTimezone()) {
    body["timezone"] = request.getTimezone();
  }

  if (!!request.hasUserCa()) {
    body["user_ca"] = request.getUserCa();
  }

  if (!!request.hasUserData()) {
    body["user_data"] = request.getUserData();
  }

  if (!!request.hasVpcid()) {
    body["vpcid"] = request.getVpcid();
  }

  if (!!request.hasVswitchIds()) {
    body["vswitch_ids"] = request.getVswitchIds();
  }

  if (!!request.hasWorkerAutoRenew()) {
    body["worker_auto_renew"] = request.getWorkerAutoRenew();
  }

  if (!!request.hasWorkerAutoRenewPeriod()) {
    body["worker_auto_renew_period"] = request.getWorkerAutoRenewPeriod();
  }

  if (!!request.hasWorkerDataDisks()) {
    body["worker_data_disks"] = request.getWorkerDataDisks();
  }

  if (!!request.hasWorkerInstanceChargeType()) {
    body["worker_instance_charge_type"] = request.getWorkerInstanceChargeType();
  }

  if (!!request.hasWorkerInstanceTypes()) {
    body["worker_instance_types"] = request.getWorkerInstanceTypes();
  }

  if (!!request.hasWorkerPeriod()) {
    body["worker_period"] = request.getWorkerPeriod();
  }

  if (!!request.hasWorkerPeriodUnit()) {
    body["worker_period_unit"] = request.getWorkerPeriodUnit();
  }

  if (!!request.hasWorkerSystemDiskCategory()) {
    body["worker_system_disk_category"] = request.getWorkerSystemDiskCategory();
  }

  if (!!request.hasWorkerSystemDiskPerformanceLevel()) {
    body["worker_system_disk_performance_level"] = request.getWorkerSystemDiskPerformanceLevel();
  }

  if (!!request.hasWorkerSystemDiskSize()) {
    body["worker_system_disk_size"] = request.getWorkerSystemDiskSize();
  }

  if (!!request.hasWorkerSystemDiskSnapshotPolicyId()) {
    body["worker_system_disk_snapshot_policy_id"] = request.getWorkerSystemDiskSnapshotPolicyId();
  }

  if (!!request.hasWorkerVswitchIds()) {
    body["worker_vswitch_ids"] = request.getWorkerVswitchIds();
  }

  if (!!request.hasZoneId()) {
    body["zone_id"] = request.getZoneId();
  }

  if (!!request.hasZoneIds()) {
    body["zone_ids"] = request.getZoneIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary You can create ACK clusters through OpenAPI, including ACK managed clusters, ACK Serverless clusters, ACK Edge clusters, and registered clusters. When creating a cluster, you will configure the cluster information, cluster components, and ACK-related cloud resources.
 *
 * @description ### Generate OpenAPI request parameters through the console
 * When calling the CreateCluster API to create a cluster, if the API call fails due to incorrect request parameter combinations, you can generate the required request parameter combinations through the console. Follow these steps:
 * 1. Log in to the [Container Service management console](https://csnew.console.aliyun.com) and choose **Clusters** in the left navigation pane.
 * 1. On the **Clusters** page, click **Cluster Template**.
 * 1. In the dialog box, select the cluster type to create, click Create, and then configure the cluster information on the cluster configuration page.
 * 1. After the configuration is complete, on the **Confirm Configuration** page, click **Equivalent Code** in the upper-right corner. The dialog box will display the parameter combinations required for creating the cluster, which you can copy and use.
 * >Notice: Starting from July 4, 2026, some request parameters will no longer take effect. For change details and alternative parameter descriptions, see [Announcement on OpenAPI parameter changes and API deprecation for ACK cluster management](https://help.aliyun.com/document_detail/2932733.html).</notice>
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Initiates a cluster diagnosis.
 *
 * @param request CreateClusterDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterDiagnosisResponse
 */
CreateClusterDiagnosisResponse Client::createClusterDiagnosisWithOptions(const string &clusterId, const CreateClusterDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTarget()) {
    body["target"] = request.getTarget();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateClusterDiagnosis"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterDiagnosisResponse>();
}

/**
 * @summary Initiates a cluster diagnosis.
 *
 * @param request CreateClusterDiagnosisRequest
 * @return CreateClusterDiagnosisResponse
 */
CreateClusterDiagnosisResponse Client::createClusterDiagnosis(const string &clusterId, const CreateClusterDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterDiagnosisWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Creates a cluster inspection configuration.
 *
 * @param request CreateClusterInspectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterInspectConfigResponse
 */
CreateClusterInspectConfigResponse Client::createClusterInspectConfigWithOptions(const string &clusterId, const CreateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisabledCheckItems()) {
    body["disabledCheckItems"] = request.getDisabledCheckItems();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasRecurrence()) {
    body["recurrence"] = request.getRecurrence();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateClusterInspectConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectConfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterInspectConfigResponse>();
}

/**
 * @summary Creates a cluster inspection configuration.
 *
 * @param request CreateClusterInspectConfigRequest
 * @return CreateClusterInspectConfigResponse
 */
CreateClusterInspectConfigResponse Client::createClusterInspectConfig(const string &clusterId, const CreateClusterInspectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterInspectConfigWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary A node pool is a logical collection of nodes that share the same attributes. Node pools allow unified management and operations, such as node upgrades and elastic scaling. You can further use the automated O&M capabilities of node pools, including automatic OS CVE vulnerability patching, automatic faulty node recovery, and automatic kubelet and containerd version upgrades, to reduce O&M costs. You can call CreateClusterNodePool to create a node pool for a cluster.
 *
 * @param request CreateClusterNodePoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterNodePoolResponse
 */
CreateClusterNodePoolResponse Client::createClusterNodePoolWithOptions(const string &ClusterId, const CreateClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoMode()) {
    body["auto_mode"] = request.getAutoMode();
  }

  if (!!request.hasAutoScaling()) {
    body["auto_scaling"] = request.getAutoScaling();
  }

  if (!!request.hasCount()) {
    body["count"] = request.getCount();
  }

  if (!!request.hasEfloNodeGroup()) {
    body["eflo_node_group"] = request.getEfloNodeGroup();
  }

  if (!!request.hasHostNetwork()) {
    body["host_network"] = request.getHostNetwork();
  }

  if (!!request.hasInterconnectConfig()) {
    body["interconnect_config"] = request.getInterconnectConfig();
  }

  if (!!request.hasInterconnectMode()) {
    body["interconnect_mode"] = request.getInterconnectMode();
  }

  if (!!request.hasIntranet()) {
    body["intranet"] = request.getIntranet();
  }

  if (!!request.hasKubernetesConfig()) {
    body["kubernetes_config"] = request.getKubernetesConfig();
  }

  if (!!request.hasManagement()) {
    body["management"] = request.getManagement();
  }

  if (!!request.hasMaxNodes()) {
    body["max_nodes"] = request.getMaxNodes();
  }

  if (!!request.hasNodeComponents()) {
    body["node_components"] = request.getNodeComponents();
  }

  if (!!request.hasNodeConfig()) {
    body["node_config"] = request.getNodeConfig();
  }

  if (!!request.hasNodepoolInfo()) {
    body["nodepool_info"] = request.getNodepoolInfo();
  }

  if (!!request.hasScalingGroup()) {
    body["scaling_group"] = request.getScalingGroup();
  }

  if (!!request.hasTeeConfig()) {
    body["tee_config"] = request.getTeeConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateClusterNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterNodePoolResponse>();
}

/**
 * @summary A node pool is a logical collection of nodes that share the same attributes. Node pools allow unified management and operations, such as node upgrades and elastic scaling. You can further use the automated O&M capabilities of node pools, including automatic OS CVE vulnerability patching, automatic faulty node recovery, and automatic kubelet and containerd version upgrades, to reduce O&M costs. You can call CreateClusterNodePool to create a node pool for a cluster.
 *
 * @param request CreateClusterNodePoolRequest
 * @return CreateClusterNodePoolResponse
 */
CreateClusterNodePoolResponse Client::createClusterNodePool(const string &ClusterId, const CreateClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterNodePoolWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI CreateKubernetesTrigger is deprecated
 *
 * @summary Creates a trigger for an application.
 *
 * @param request CreateKubernetesTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKubernetesTriggerResponse
 */
CreateKubernetesTriggerResponse Client::createKubernetesTriggerWithOptions(const CreateKubernetesTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasProjectId()) {
    body["project_id"] = request.getProjectId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKubernetesTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/triggers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKubernetesTriggerResponse>();
}

/**
 * @deprecated OpenAPI CreateKubernetesTrigger is deprecated
 *
 * @summary Creates a trigger for an application.
 *
 * @param request CreateKubernetesTriggerRequest
 * @return CreateKubernetesTriggerResponse
 */
CreateKubernetesTriggerResponse Client::createKubernetesTrigger(const CreateKubernetesTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKubernetesTriggerWithOptions(request, headers, runtime);
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can use these templates to automate the deployment and cluster management of resources, such as Pods, Services, Deployments, ConfigMaps, and PersistentVolumes. You can invoke the CreateTemplate operation to create an orchestration template.
 *
 * @param request CreateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
  }

  if (!!request.hasTemplateType()) {
    body["template_type"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can use these templates to automate the deployment and cluster management of resources, such as Pods, Services, Deployments, ConfigMaps, and PersistentVolumes. You can invoke the CreateTemplate operation to create an orchestration template.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Configures a trigger for a cluster application. The trigger redeploys pods when specified conditions are met.
 *
 * @description > Creating a trigger only supports pod redeployment.
 *
 * @param request CreateTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTriggerWithOptions(const string &clusterId, const CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasProjectId()) {
    body["project_id"] = request.getProjectId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/triggers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTriggerResponse>();
}

/**
 * @summary Configures a trigger for a cluster application. The trigger redeploys pods when specified conditions are met.
 *
 * @description > Creating a trigger only supports pod redeployment.
 *
 * @param request CreateTriggerRequest
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTrigger(const string &clusterId, const CreateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTriggerWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Deletes alert contacts from ACK.
 *
 * @param tmpReq DeleteAlertContactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContactWithOptions(const DeleteAlertContactRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAlertContactShrinkRequest request = DeleteAlertContactShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactIds()) {
    request.setContactIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactIds(), "contact_ids", "json"));
  }

  json query = {};
  if (!!request.hasContactIdsShrink()) {
    query["contact_ids"] = request.getContactIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContact"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alert/contacts")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactResponse>();
}

/**
 * @summary Deletes alert contacts from ACK.
 *
 * @param request DeleteAlertContactRequest
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContact(const DeleteAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlertContactWithOptions(request, headers, runtime);
}

/**
 * @summary Delete ACK alert contact group
 *
 * @param tmpReq DeleteAlertContactGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroupWithOptions(const DeleteAlertContactGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAlertContactGroupShrinkRequest request = DeleteAlertContactGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactGroupIds()) {
    request.setContactGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactGroupIds(), "contact_group_ids", "json"));
  }

  json query = {};
  if (!!request.hasContactGroupIdsShrink()) {
    query["contact_group_ids"] = request.getContactGroupIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContactGroup"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alert/contact_groups")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactGroupResponse>();
}

/**
 * @summary Delete ACK alert contact group
 *
 * @param request DeleteAlertContactGroupRequest
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroup(const DeleteAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlertContactGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an automatic fault recovery rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoRepairPolicyResponse
 */
DeleteAutoRepairPolicyResponse Client::deleteAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoRepairPolicy"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/auto_repair_policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoRepairPolicyResponse>();
}

/**
 * @summary Deletes an automatic fault recovery rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @return DeleteAutoRepairPolicyResponse
 */
DeleteAutoRepairPolicyResponse Client::deleteAutoRepairPolicy(const string &clusterId, const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAutoRepairPolicyWithOptions(clusterId, policyId, headers, runtime);
}

/**
 * @summary If you no longer need a cluster, delete the cluster and choose whether to delete or retain the associated resources. Before you delete a cluster, manually clean up workloads (Deployments, StatefulSets, Jobs, and CronJobs). Otherwise, the cluster deletion may fail.
 *
 * @description Risk notice:
 * - Subscription ECS instances, Lingjun compute nodes, and other subscription resources in the cluster cannot be subject to automatic release. To avoid unnecessary billing, perform manual release of these resources. For more information, refer to Cluster deletion and node release rules.
 * - Subscription APIServer SLB resources cannot be subject to automatic release. To avoid unnecessary billing, perform manual release of these resources.
 * - VPCs, vSwitches, security groups, and RAM roles that are used by other resources cannot be deleted and are retained by default. Perform manual release of these resources.
 * - Elastic Container Instances (ECIs) created through virtual nodes are subject to automatic release.
 * - Some cloud resources created through the cluster are not subject to automatic release when the cluster is deleted. These resources continue to incur billing after the cluster is deleted. Release or retain them as needed. These resources include: Simple Log Service (SLS) projects automatically created by the cluster, and cloud disks purchased through dynamic storage volumes.
 *
 * @param tmpReq DeleteClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const string &ClusterId, const DeleteClusterRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteClusterShrinkRequest request = DeleteClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteOptions()) {
    request.setDeleteOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteOptions(), "delete_options", "json"));
  }

  if (!!tmpReq.hasRetainResources()) {
    request.setRetainResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRetainResources(), "retain_resources", "json"));
  }

  json query = {};
  if (!!request.hasDeleteOptionsShrink()) {
    query["delete_options"] = request.getDeleteOptionsShrink();
  }

  if (!!request.hasKeepSlb()) {
    query["keep_slb"] = request.getKeepSlb();
  }

  if (!!request.hasRetainAllResources()) {
    query["retain_all_resources"] = request.getRetainAllResources();
  }

  if (!!request.hasRetainResourcesShrink()) {
    query["retain_resources"] = request.getRetainResourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary If you no longer need a cluster, delete the cluster and choose whether to delete or retain the associated resources. Before you delete a cluster, manually clean up workloads (Deployments, StatefulSets, Jobs, and CronJobs). Otherwise, the cluster deletion may fail.
 *
 * @description Risk notice:
 * - Subscription ECS instances, Lingjun compute nodes, and other subscription resources in the cluster cannot be subject to automatic release. To avoid unnecessary billing, perform manual release of these resources. For more information, refer to Cluster deletion and node release rules.
 * - Subscription APIServer SLB resources cannot be subject to automatic release. To avoid unnecessary billing, perform manual release of these resources.
 * - VPCs, vSwitches, security groups, and RAM roles that are used by other resources cannot be deleted and are retained by default. Perform manual release of these resources.
 * - Elastic Container Instances (ECIs) created through virtual nodes are subject to automatic release.
 * - Some cloud resources created through the cluster are not subject to automatic release when the cluster is deleted. These resources continue to incur billing after the cluster is deleted. Release or retain them as needed. These resources include: Simple Log Service (SLS) projects automatically created by the cluster, and cloud disks purchased through dynamic storage volumes.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const string &ClusterId, const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Deletes a cluster inspection configuration.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterInspectConfigResponse
 */
DeleteClusterInspectConfigResponse Client::deleteClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClusterInspectConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectConfig")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterInspectConfigResponse>();
}

/**
 * @summary Deletes a cluster inspection configuration.
 *
 * @return DeleteClusterInspectConfigResponse
 */
DeleteClusterInspectConfigResponse Client::deleteClusterInspectConfig(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Deletes a node pool that is no longer in use. When a node pool is deleted, all pods on the nodes are deleted, which may trigger descheduling. If descheduling cannot be performed, your services may be affected. Make sure that the cluster has sufficient resources for descheduling.
 *
 * @param request DeleteClusterNodepoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterNodepoolResponse
 */
DeleteClusterNodepoolResponse Client::deleteClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const DeleteClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClusterNodepool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterNodepoolResponse>();
}

/**
 * @summary Deletes a node pool that is no longer in use. When a node pool is deleted, all pods on the nodes are deleted, which may trigger descheduling. If descheduling cannot be performed, your services may be affected. Make sure that the cluster has sufficient resources for descheduling.
 *
 * @param request DeleteClusterNodepoolRequest
 * @return DeleteClusterNodepoolResponse
 */
DeleteClusterNodepoolResponse Client::deleteClusterNodepool(const string &ClusterId, const string &NodepoolId, const DeleteClusterNodepoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterNodepoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @summary When you no longer need cluster nodes to continue working, you can call the DeleteClusterNodes operation to remove nodes from the cluster. When removing nodes, you can choose whether to simultaneously release the ECS instances and whether to automatically drain the nodes.
 *
 * @description - When removing nodes, use this API or the [Container Service console](https://cs.console.aliyun.com) to perform standardized operations. Do not manually remove nodes by using the `kubectl delete node` command.
 * - Do not directly release nodes, remove instances in the ECS or ESS console (or through related APIs), or allow nodes to be passively released due to the expiration of subscription instances. In these cases, the nodes will be directly shut down and automatically removed from the Container Service management console.
 * - If the node pool has a desired number of nodes configured, the node pool will automatically scale out other instances according to the corresponding configuration to always maintain the node count at the desired number.
 * - Removing nodes involves Pod migration, which may affect your business. Perform this operation during off-peak hours. Unexpected risks may exist during the operation, so back up relevant data in advance.
 * - When removing nodes, ACK performs a drain operation. Ensure that the resources on other nodes in the cluster are sufficient to prevent business Pods from being unable to be scheduled.
 * - Check the node affinity rules and scheduling policies of the Pods on the nodes to be removed to ensure that Pods can still be scheduled to other nodes after node removal.
 *
 * @param request DeleteClusterNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterNodesResponse
 */
DeleteClusterNodesResponse Client::deleteClusterNodesWithOptions(const string &ClusterId, const DeleteClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDrainNode()) {
    body["drain_node"] = request.getDrainNode();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.getNodes();
  }

  if (!!request.hasReleaseNode()) {
    body["release_node"] = request.getReleaseNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteClusterNodes"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterNodesResponse>();
}

/**
 * @summary When you no longer need cluster nodes to continue working, you can call the DeleteClusterNodes operation to remove nodes from the cluster. When removing nodes, you can choose whether to simultaneously release the ECS instances and whether to automatically drain the nodes.
 *
 * @description - When removing nodes, use this API or the [Container Service console](https://cs.console.aliyun.com) to perform standardized operations. Do not manually remove nodes by using the `kubectl delete node` command.
 * - Do not directly release nodes, remove instances in the ECS or ESS console (or through related APIs), or allow nodes to be passively released due to the expiration of subscription instances. In these cases, the nodes will be directly shut down and automatically removed from the Container Service management console.
 * - If the node pool has a desired number of nodes configured, the node pool will automatically scale out other instances according to the corresponding configuration to always maintain the node count at the desired number.
 * - Removing nodes involves Pod migration, which may affect your business. Perform this operation during off-peak hours. Unexpected risks may exist during the operation, so back up relevant data in advance.
 * - When removing nodes, ACK performs a drain operation. Ensure that the resources on other nodes in the cluster are sufficient to prevent business Pods from being unable to be scheduled.
 * - Check the node affinity rules and scheduling policies of the Pods on the nodes to be removed to ensure that Pods can still be scheduled to other nodes after node removal.
 *
 * @param request DeleteClusterNodesRequest
 * @return DeleteClusterNodesResponse
 */
DeleteClusterNodesResponse Client::deleteClusterNodes(const string &ClusterId, const DeleteClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
 *
 * @summary Deletes an application trigger by trigger ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKubernetesTriggerResponse
 */
DeleteKubernetesTriggerResponse Client::deleteKubernetesTriggerWithOptions(const string &Id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKubernetesTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/triggers/revoke/" , Darabonba::Encode::Encoder::percentEncode(Id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKubernetesTriggerResponse>();
}

/**
 * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
 *
 * @summary Deletes an application trigger by trigger ID.
 *
 * @return DeleteKubernetesTriggerResponse
 */
DeleteKubernetesTriggerResponse Client::deleteKubernetesTrigger(const string &Id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKubernetesTriggerWithOptions(Id, headers, runtime);
}

/**
 * @summary Deletes a policy rule instance from a specified cluster.
 *
 * @param request DeletePolicyInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyInstanceResponse
 */
DeletePolicyInstanceResponse Client::deletePolicyInstanceWithOptions(const string &clusterId, const string &policyName, const DeletePolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["instance_name"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyInstance"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policies/" , Darabonba::Encode::Encoder::percentEncode(policyName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyInstanceResponse>();
}

/**
 * @summary Deletes a policy rule instance from a specified cluster.
 *
 * @param request DeletePolicyInstanceRequest
 * @return DeletePolicyInstanceResponse
 */
DeletePolicyInstanceResponse Client::deletePolicyInstance(const string &clusterId, const string &policyName, const DeletePolicyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

/**
 * @summary Deletes an orchestration template when you no longer need it.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes an orchestration template when you no longer need it.
 *
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(TemplateId, headers, runtime);
}

/**
 * @summary Deletes an application trigger when it is no longer needed.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTriggerWithOptions(const string &clusterId, const string &Id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/triggers/" , Darabonba::Encode::Encoder::percentEncode(Id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTriggerResponse>();
}

/**
 * @summary Deletes an application trigger when it is no longer needed.
 *
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTrigger(const string &clusterId, const string &Id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTriggerWithOptions(clusterId, Id, headers, runtime);
}

/**
 * @summary Deploys a policy instance in a specified namespace of a specified cluster. You can select a security policy type in an ACK cluster, configure the governance action (alerting or blocking) and the namespace scope for the policy instance to create and deploy a policy instance.
 *
 * @param request DeployPolicyInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployPolicyInstanceResponse
 */
DeployPolicyInstanceResponse Client::deployPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const DeployPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasNamespaces()) {
    body["namespaces"] = request.getNamespaces();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeployPolicyInstance"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policies/" , Darabonba::Encode::Encoder::percentEncode(policyName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployPolicyInstanceResponse>();
}

/**
 * @summary Deploys a policy instance in a specified namespace of a specified cluster. You can select a security policy type in an ACK cluster, configure the governance action (alerting or blocking) and the namespace scope for the policy instance to create and deploy a policy instance.
 *
 * @param request DeployPolicyInstanceRequest
 * @return DeployPolicyInstanceResponse
 */
DeployPolicyInstanceResponse Client::deployPolicyInstance(const string &clusterId, const string &policyName, const DeployPolicyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

/**
 * @summary You can call the DescribeAddon operation to query information about a specified component based on parameters such as region, cluster type, cluster subtype (profile), cluster version, and component name. The returned information includes whether the component is managed, component category, supported custom parameter schema, compatible OS architectures, and the minimum cluster version required by the component version.
 *
 * @param request DescribeAddonRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonResponse
 */
DescribeAddonResponse Client::describeAddonWithOptions(const string &addonName, const DescribeAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasClusterSpec()) {
    query["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasClusterVersion()) {
    query["cluster_version"] = request.getClusterVersion();
  }

  if (!!request.hasProfile()) {
    query["profile"] = request.getProfile();
  }

  if (!!request.hasRegionId()) {
    query["region_id"] = request.getRegionId();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddon"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons/" , Darabonba::Encode::Encoder::percentEncode(addonName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonResponse>();
}

/**
 * @summary You can call the DescribeAddon operation to query information about a specified component based on parameters such as region, cluster type, cluster subtype (profile), cluster version, and component name. The returned information includes whether the component is managed, component category, supported custom parameter schema, compatible OS architectures, and the minimum cluster version required by the component version.
 *
 * @param request DescribeAddonRequest
 * @return DescribeAddonResponse
 */
DescribeAddonResponse Client::describeAddon(const string &addonName, const DescribeAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAddonWithOptions(addonName, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeAddons is deprecated
 *
 * @summary Queries the details of all components supported by the platform.
 *
 * @param request DescribeAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonsResponse
 */
DescribeAddonsResponse Client::describeAddonsWithOptions(const DescribeAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterProfile()) {
    query["cluster_profile"] = request.getClusterProfile();
  }

  if (!!request.hasClusterSpec()) {
    query["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasClusterVersion()) {
    query["cluster_version"] = request.getClusterVersion();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddons"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/components/metadata")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonsResponse>();
}

/**
 * @deprecated OpenAPI DescribeAddons is deprecated
 *
 * @summary Queries the details of all components supported by the platform.
 *
 * @param request DescribeAddonsRequest
 * @return DescribeAddonsResponse
 */
DescribeAddonsResponse Client::describeAddons(const DescribeAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAddonsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries an auto-repair rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoRepairPolicyResponse
 */
DescribeAutoRepairPolicyResponse Client::describeAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoRepairPolicy"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/auto_repair_policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoRepairPolicyResponse>();
}

/**
 * @summary Queries an auto-repair rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned.
 *
 * @return DescribeAutoRepairPolicyResponse
 */
DescribeAutoRepairPolicyResponse Client::describeAutoRepairPolicy(const string &clusterId, const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAutoRepairPolicyWithOptions(clusterId, policyId, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
 *
 * @summary Calls DescribeClusterAddonInstance to query information about an installed cluster component, such as its version, status, and configuration.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAddonInstanceResponse
 */
DescribeClusterAddonInstanceResponse Client::describeClusterAddonInstanceWithOptions(const string &ClusterID, const string &AddonName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAddonInstance"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterID) , "/components/" , Darabonba::Encode::Encoder::percentEncode(AddonName) , "/instance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAddonInstanceResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
 *
 * @summary Calls DescribeClusterAddonInstance to query information about an installed cluster component, such as its version, status, and configuration.
 *
 * @return DescribeClusterAddonInstanceResponse
 */
DescribeClusterAddonInstanceResponse Client::describeClusterAddonInstance(const string &ClusterID, const string &AddonName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonInstanceWithOptions(ClusterID, AddonName, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterAddonMetadata is deprecated
 *
 * @summary Queries the version information of a specified component that can be used in a specific cluster, including the component version and configurable parameters.
 *
 * @param request DescribeClusterAddonMetadataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAddonMetadataResponse
 */
DescribeClusterAddonMetadataResponse Client::describeClusterAddonMetadataWithOptions(const string &clusterId, const string &componentId, const DescribeClusterAddonMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAddonMetadata"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/components/" , Darabonba::Encode::Encoder::percentEncode(componentId) , "/metadata")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAddonMetadataResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterAddonMetadata is deprecated
 *
 * @summary Queries the version information of a specified component that can be used in a specific cluster, including the component version and configurable parameters.
 *
 * @param request DescribeClusterAddonMetadataRequest
 * @return DescribeClusterAddonMetadataResponse
 */
DescribeClusterAddonMetadataResponse Client::describeClusterAddonMetadata(const string &clusterId, const string &componentId, const DescribeClusterAddonMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonMetadataWithOptions(clusterId, componentId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a cluster component by calling DescribeClusterAddonUpgradeStatus.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAddonUpgradeStatusResponse
 */
DescribeClusterAddonUpgradeStatusResponse Client::describeClusterAddonUpgradeStatusWithOptions(const string &ClusterId, const string &ComponentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAddonUpgradeStatus"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/" , Darabonba::Encode::Encoder::percentEncode(ComponentId) , "/upgradestatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAddonUpgradeStatusResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a cluster component by calling DescribeClusterAddonUpgradeStatus.
 *
 * @return DescribeClusterAddonUpgradeStatusResponse
 */
DescribeClusterAddonUpgradeStatusResponse Client::describeClusterAddonUpgradeStatus(const string &ClusterId, const string &ComponentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonUpgradeStatusWithOptions(ClusterId, ComponentId, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterAddonsUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a component by component name.
 *
 * @param tmpReq DescribeClusterAddonsUpgradeStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAddonsUpgradeStatusResponse
 */
DescribeClusterAddonsUpgradeStatusResponse Client::describeClusterAddonsUpgradeStatusWithOptions(const string &ClusterId, const DescribeClusterAddonsUpgradeStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeClusterAddonsUpgradeStatusShrinkRequest request = DescribeClusterAddonsUpgradeStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponentIds()) {
    request.setComponentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponentIds(), "componentIds", "json"));
  }

  json query = {};
  if (!!request.hasComponentIdsShrink()) {
    query["componentIds"] = request.getComponentIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAddonsUpgradeStatus"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/upgradestatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAddonsUpgradeStatusResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterAddonsUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a component by component name.
 *
 * @param request DescribeClusterAddonsUpgradeStatusRequest
 * @return DescribeClusterAddonsUpgradeStatusResponse
 */
DescribeClusterAddonsUpgradeStatusResponse Client::describeClusterAddonsUpgradeStatus(const string &ClusterId, const DescribeClusterAddonsUpgradeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonsUpgradeStatusWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
 *
 * @summary Queries the details of all installed components in a cluster by cluster ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAddonsVersionResponse
 */
DescribeClusterAddonsVersionResponse Client::describeClusterAddonsVersionWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAddonsVersion"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/version")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAddonsVersionResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
 *
 * @summary Queries the details of all installed components in a cluster by cluster ID.
 *
 * @return DescribeClusterAddonsVersionResponse
 */
DescribeClusterAddonsVersionResponse Client::describeClusterAddonsVersion(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonsVersionWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary If you need to add existing ECS instances to an ACK cluster as worker nodes, or re-add node instances to a node pool after they are removed, ACK allows you to manually add existing nodes to a node pool. Calls the DescribeClusterAttachScripts operation to obtain the script for adding existing nodes.
 *
 * @param request DescribeClusterAttachScriptsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAttachScriptsResponse
 */
DescribeClusterAttachScriptsResponse Client::describeClusterAttachScriptsWithOptions(const string &ClusterId, const DescribeClusterAttachScriptsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArch()) {
    body["arch"] = request.getArch();
  }

  if (!!request.hasExpired()) {
    body["expired"] = request.getExpired();
  }

  if (!!request.hasFormatDisk()) {
    body["format_disk"] = request.getFormatDisk();
  }

  if (!!request.hasKeepInstanceName()) {
    body["keep_instance_name"] = request.getKeepInstanceName();
  }

  if (!!request.hasNodepoolId()) {
    body["nodepool_id"] = request.getNodepoolId();
  }

  if (!!request.hasOneTimeToken()) {
    body["one_time_token"] = request.getOneTimeToken();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasRdsInstances()) {
    body["rds_instances"] = request.getRdsInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeClusterAttachScripts"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/attachscript")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAttachScriptsResponse>();
}

/**
 * @summary If you need to add existing ECS instances to an ACK cluster as worker nodes, or re-add node instances to a node pool after they are removed, ACK allows you to manually add existing nodes to a node pool. Calls the DescribeClusterAttachScripts operation to obtain the script for adding existing nodes.
 *
 * @param request DescribeClusterAttachScriptsRequest
 * @return DescribeClusterAttachScriptsResponse
 */
DescribeClusterAttachScriptsResponse Client::describeClusterAttachScripts(const string &ClusterId, const DescribeClusterAttachScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAttachScriptsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can call the DescribeClusterDetail API to query the detailed information of a specified cluster by cluster ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterDetailResponse
 */
DescribeClusterDetailResponse Client::describeClusterDetailWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterDetail"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterDetailResponse>();
}

/**
 * @summary You can call the DescribeClusterDetail API to query the detailed information of a specified cluster by cluster ID.
 *
 * @return DescribeClusterDetailResponse
 */
DescribeClusterDetailResponse Client::describeClusterDetail(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterDetailWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, addon installation, and cluster upgrade. You can call the DescribeClusterEvents operation to retrieve the list of events that occurred in a specified cluster and query event details, including the event level, event status, and event time.
 *
 * @param request DescribeClusterEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterEventsResponse
 */
DescribeClusterEventsResponse Client::describeClusterEventsWithOptions(const string &ClusterId, const DescribeClusterEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["max_results"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["next_token"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["task_id"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterEvents"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterEventsResponse>();
}

/**
 * @summary Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, addon installation, and cluster upgrade. You can call the DescribeClusterEvents operation to retrieve the list of events that occurred in a specified cluster and query event details, including the event level, event status, and event time.
 *
 * @param request DescribeClusterEventsRequest
 * @return DescribeClusterEventsResponse
 */
DescribeClusterEventsResponse Client::describeClusterEvents(const string &ClusterId, const DescribeClusterEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterEventsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Retrieves the log data of a cluster for root cause analysis and tracing when cluster issues occur.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterLogsResponse
 */
DescribeClusterLogsResponse Client::describeClusterLogsWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterLogs"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterLogsResponse>();
}

/**
 * @summary Retrieves the log data of a cluster for root cause analysis and tracing when cluster issues occur.
 *
 * @return DescribeClusterLogsResponse
 */
DescribeClusterLogsResponse Client::describeClusterLogs(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterLogsWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Queries the configuration of a specified node pool in a cluster by node pool ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNodePoolDetailResponse
 */
DescribeClusterNodePoolDetailResponse Client::describeClusterNodePoolDetailWithOptions(const string &ClusterId, const string &NodepoolId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNodePoolDetail"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNodePoolDetailResponse>();
}

/**
 * @summary Queries the configuration of a specified node pool in a cluster by node pool ID.
 *
 * @return DescribeClusterNodePoolDetailResponse
 */
DescribeClusterNodePoolDetailResponse Client::describeClusterNodePoolDetail(const string &ClusterId, const string &NodepoolId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterNodePoolDetailWithOptions(ClusterId, NodepoolId, headers, runtime);
}

/**
 * @summary Queries the list of all node pools in a cluster.
 *
 * @param request DescribeClusterNodePoolsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNodePoolsResponse
 */
DescribeClusterNodePoolsResponse Client::describeClusterNodePoolsWithOptions(const string &ClusterId, const DescribeClusterNodePoolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodepoolName()) {
    query["NodepoolName"] = request.getNodepoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNodePools"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNodePoolsResponse>();
}

/**
 * @summary Queries the list of all node pools in a cluster.
 *
 * @param request DescribeClusterNodePoolsRequest
 * @return DescribeClusterNodePoolsResponse
 */
DescribeClusterNodePoolsResponse Client::describeClusterNodePools(const string &ClusterId, const DescribeClusterNodePoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterNodePoolsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Queries the list of nodes that meet the specified conditions in a cluster.
 *
 * @param request DescribeClusterNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNodesResponse
 */
DescribeClusterNodesResponse Client::describeClusterNodesWithOptions(const string &ClusterId, const DescribeClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["instanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasNodeIps()) {
    query["nodeIps"] = request.getNodeIps();
  }

  if (!!request.hasNodeLabels()) {
    query["nodeLabels"] = request.getNodeLabels();
  }

  if (!!request.hasNodeNames()) {
    query["nodeNames"] = request.getNodeNames();
  }

  if (!!request.hasNodepoolId()) {
    query["nodepool_id"] = request.getNodepoolId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasState()) {
    query["state"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNodes"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNodesResponse>();
}

/**
 * @summary Queries the list of nodes that meet the specified conditions in a cluster.
 *
 * @param request DescribeClusterNodesRequest
 * @return DescribeClusterNodesResponse
 */
DescribeClusterNodesResponse Client::describeClusterNodes(const string &ClusterId, const DescribeClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary When you use Container Service for Kubernetes (ACK), you also use resources from other associated Alibaba Cloud services. You can call the DescribeClusterResources operation to query the associated resources of a specified cluster, such as VPCs and SLBs. To query node pool or node resources, call the DescribeClusterNodePools or DescribeClusterNodes operation.
 *
 * @param request DescribeClusterResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterResourcesResponse
 */
DescribeClusterResourcesResponse Client::describeClusterResourcesWithOptions(const string &ClusterId, const DescribeClusterResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWithAddonResources()) {
    query["with_addon_resources"] = request.getWithAddonResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterResources"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterResourcesResponse>();
}

/**
 * @summary When you use Container Service for Kubernetes (ACK), you also use resources from other associated Alibaba Cloud services. You can call the DescribeClusterResources operation to query the associated resources of a specified cluster, such as VPCs and SLBs. To query node pool or node resources, call the DescribeClusterNodePools or DescribeClusterNodes operation.
 *
 * @param request DescribeClusterResourcesRequest
 * @return DescribeClusterResourcesResponse
 */
DescribeClusterResourcesResponse Client::describeClusterResources(const string &ClusterId, const DescribeClusterResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterResourcesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Queries the task list of a cluster by calling the DescribeClusterTasks operation.
 *
 * @param request DescribeClusterTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterTasksResponse
 */
DescribeClusterTasksResponse Client::describeClusterTasksWithOptions(const string &clusterId, const DescribeClusterTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["max_results"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["next_token"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterTasks"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterTasksResponse>();
}

/**
 * @summary Queries the task list of a cluster by calling the DescribeClusterTasks operation.
 *
 * @param request DescribeClusterTasksRequest
 * @return DescribeClusterTasksResponse
 */
DescribeClusterTasksResponse Client::describeClusterTasks(const string &clusterId, const DescribeClusterTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterTasksWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary KubeConfig is used to configure access credentials for ACK clusters on the client. It contains identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you must first connect to the cluster by using KubeConfig. You can invoke the DescribeClusterUserKubeconfig operation to query the KubeConfig of a specified cluster.
 *
 * @description - The default validity period of the certificate issued by KubeConfig is 3 years. Within 180 days before the certificate expires, you can obtain a rotated and refreshed KubeConfig by using the Container Service console or the DescribeClusterUserKubeconfig operation. The new KubeConfig certificate is valid for 3 years. The old KubeConfig credential remains valid until the certificate expires. Obtain the rotated credential promptly based on the KubeConfig expiration time displayed in the console or returned by the operation.
 * - Properly manage the KubeConfig credentials of your cluster and revoke them when they are no longer needed to avoid security risks such as sensitive data leakage caused by KubeConfig exposure.
 *
 * @param request DescribeClusterUserKubeconfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterUserKubeconfigResponse
 */
DescribeClusterUserKubeconfigResponse Client::describeClusterUserKubeconfigWithOptions(const string &ClusterId, const DescribeClusterUserKubeconfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasTemporaryDurationMinutes()) {
    query["TemporaryDurationMinutes"] = request.getTemporaryDurationMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterUserKubeconfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/user_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterUserKubeconfigResponse>();
}

/**
 * @summary KubeConfig is used to configure access credentials for ACK clusters on the client. It contains identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you must first connect to the cluster by using KubeConfig. You can invoke the DescribeClusterUserKubeconfig operation to query the KubeConfig of a specified cluster.
 *
 * @description - The default validity period of the certificate issued by KubeConfig is 3 years. Within 180 days before the certificate expires, you can obtain a rotated and refreshed KubeConfig by using the Container Service console or the DescribeClusterUserKubeconfig operation. The new KubeConfig certificate is valid for 3 years. The old KubeConfig credential remains valid until the certificate expires. Obtain the rotated credential promptly based on the KubeConfig expiration time displayed in the console or returned by the operation.
 * - Properly manage the KubeConfig credentials of your cluster and revoke them when they are no longer needed to avoid security risks such as sensitive data leakage caused by KubeConfig exposure.
 *
 * @param request DescribeClusterUserKubeconfigRequest
 * @return DescribeClusterUserKubeconfigResponse
 */
DescribeClusterUserKubeconfigResponse Client::describeClusterUserKubeconfig(const string &ClusterId, const DescribeClusterUserKubeconfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterUserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusterV2UserKubeconfig is deprecated
 *
 * @summary Retrieves the kubeconfig file for a cluster.
 *
 * @param request DescribeClusterV2UserKubeconfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterV2UserKubeconfigResponse
 */
DescribeClusterV2UserKubeconfigResponse Client::describeClusterV2UserKubeconfigWithOptions(const string &ClusterId, const DescribeClusterV2UserKubeconfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasTemporaryDurationMinutes()) {
    query["TemporaryDurationMinutes"] = request.getTemporaryDurationMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterV2UserKubeconfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/user_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterV2UserKubeconfigResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusterV2UserKubeconfig is deprecated
 *
 * @summary Retrieves the kubeconfig file for a cluster.
 *
 * @param request DescribeClusterV2UserKubeconfigRequest
 * @return DescribeClusterV2UserKubeconfigResponse
 */
DescribeClusterV2UserKubeconfigResponse Client::describeClusterV2UserKubeconfig(const string &ClusterId, const DescribeClusterV2UserKubeconfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterV2UserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can call the DescribeClusterVuls operation to query the details of security vulnerabilities in a cluster by cluster ID, including vulnerability names, types, and severity levels. Regularly scan your cluster for security vulnerabilities to improve cluster security.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterVulsResponse
 */
DescribeClusterVulsResponse Client::describeClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterVuls"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/vuls")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterVulsResponse>();
}

/**
 * @summary You can call the DescribeClusterVuls operation to query the details of security vulnerabilities in a cluster by cluster ID, including vulnerability names, types, and severity levels. Regularly scan your cluster for security vulnerabilities to improve cluster security.
 *
 * @return DescribeClusterVulsResponse
 */
DescribeClusterVulsResponse Client::describeClusterVuls(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterVulsWithOptions(clusterId, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeClusters is deprecated
 *
 * @summary View all clusters created in Container Service (including Swarm and Kubernetes clusters).
 *
 * @param request DescribeClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClustersResponse
 */
DescribeClustersResponse Client::describeClustersWithOptions(const DescribeClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["clusterType"] = request.getClusterType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    query["resource_group_id"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusters"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClustersResponse>();
}

/**
 * @deprecated OpenAPI DescribeClusters is deprecated
 *
 * @summary View all clusters created in Container Service (including Swarm and Kubernetes clusters).
 *
 * @param request DescribeClustersRequest
 * @return DescribeClustersResponse
 */
DescribeClustersResponse Client::describeClusters(const DescribeClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClustersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all clusters in a specified region.
 *
 * @param request DescribeClustersForRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClustersForRegionResponse
 */
DescribeClustersForRegionResponse Client::describeClustersForRegionWithOptions(const string &regionId, const DescribeClustersForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasClusterSpec()) {
    query["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasProfile()) {
    query["profile"] = request.getProfile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClustersForRegion"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions/" , Darabonba::Encode::Encoder::percentEncode(regionId) , "/clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClustersForRegionResponse>();
}

/**
 * @summary Queries all clusters in a specified region.
 *
 * @param request DescribeClustersForRegionRequest
 * @return DescribeClustersForRegionResponse
 */
DescribeClustersForRegionResponse Client::describeClustersForRegion(const string &regionId, const DescribeClustersForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClustersForRegionWithOptions(regionId, request, headers, runtime);
}

/**
 * @summary You can invoke the DescribeClustersV1 operation to query the list of ACK clusters that meet conditional criteria (such as cluster type and cluster specification) under the current account.
 *
 * @param request DescribeClustersV1Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClustersV1Response
 */
DescribeClustersV1Response Client::describeClustersV1WithOptions(const DescribeClustersV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasClusterSpec()) {
    query["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasProfile()) {
    query["profile"] = request.getProfile();
  }

  if (!!request.hasRegionId()) {
    query["region_id"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClustersV1"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClustersV1Response>();
}

/**
 * @summary You can invoke the DescribeClustersV1 operation to query the list of ACK clusters that meet conditional criteria (such as cluster type and cluster specification) under the current account.
 *
 * @param request DescribeClustersV1Request
 * @return DescribeClustersV1Response
 */
DescribeClustersV1Response Client::describeClustersV1(const DescribeClustersV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClustersV1WithOptions(request, headers, runtime);
}

/**
 * @summary Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, addon installation, and cluster upgrade. You can call the DescribeEvents operation to query the details of a specific type of event, including the event level, event status, and event time.
 *
 * @param request DescribeEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["max_results"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["next_token"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvents"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsResponse>();
}

/**
 * @summary Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, addon installation, and cluster upgrade. You can call the DescribeEvents operation to query the details of a specific type of event, including the event level, event status, and event time.
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeEventsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all events in a specified region.
 *
 * @param request DescribeEventsForRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsForRegionResponse
 */
DescribeEventsForRegionResponse Client::describeEventsForRegionWithOptions(const string &regionId, const DescribeEventsForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["max_results"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["next_token"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventsForRegion"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions/" , Darabonba::Encode::Encoder::percentEncode(regionId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsForRegionResponse>();
}

/**
 * @summary Queries all events in a specified region.
 *
 * @param request DescribeEventsForRegionRequest
 * @return DescribeEventsForRegionResponse
 */
DescribeEventsForRegionResponse Client::describeEventsForRegion(const string &regionId, const DescribeEventsForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeEventsForRegionWithOptions(regionId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI DescribeExternalAgent is deprecated
 *
 * @summary Queries the agent configuration for a registered cluster by cluster ID.
 *
 * @description For more information about cluster registration, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
 *
 * @param request DescribeExternalAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExternalAgentResponse
 */
DescribeExternalAgentResponse Client::describeExternalAgentWithOptions(const string &ClusterId, const DescribeExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentMode()) {
    query["AgentMode"] = request.getAgentMode();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExternalAgent"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/external/agent/deployment")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExternalAgentResponse>();
}

/**
 * @deprecated OpenAPI DescribeExternalAgent is deprecated
 *
 * @summary Queries the agent configuration for a registered cluster by cluster ID.
 *
 * @description For more information about cluster registration, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
 *
 * @param request DescribeExternalAgentRequest
 * @return DescribeExternalAgentResponse
 */
DescribeExternalAgentResponse Client::describeExternalAgent(const string &ClusterId, const DescribeExternalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeExternalAgentWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can call the DescribeKubernetesVersionMetadata operation to query detailed information about Kubernetes versions, including version information, release dates and expiration dates, compatible operating systems, and container runtimes.
 *
 * @param request DescribeKubernetesVersionMetadataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKubernetesVersionMetadataResponse
 */
DescribeKubernetesVersionMetadataResponse Client::describeKubernetesVersionMetadataWithOptions(const DescribeKubernetesVersionMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasKubernetesVersion()) {
    query["KubernetesVersion"] = request.getKubernetesVersion();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasProfile()) {
    query["Profile"] = request.getProfile();
  }

  if (!!request.hasQueryUpgradableVersion()) {
    query["QueryUpgradableVersion"] = request.getQueryUpgradableVersion();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRuntime()) {
    query["runtime"] = request.getRuntime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKubernetesVersionMetadata"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/metadata/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKubernetesVersionMetadataResponse>();
}

/**
 * @summary You can call the DescribeKubernetesVersionMetadata operation to query detailed information about Kubernetes versions, including version information, release dates and expiration dates, compatible operating systems, and container runtimes.
 *
 * @param request DescribeKubernetesVersionMetadataRequest
 * @return DescribeKubernetesVersionMetadataResponse
 */
DescribeKubernetesVersionMetadataResponse Client::describeKubernetesVersionMetadata(const DescribeKubernetesVersionMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeKubernetesVersionMetadataWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the security vulnerability details of a node pool by node pool ID by calling the DescribeNodePoolVuls operation. The details include vulnerability names and severity levels. Regularly scan node pools for security vulnerabilities to improve cluster security.
 *
 * @param request DescribeNodePoolVulsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodePoolVulsResponse
 */
DescribeNodePoolVulsResponse Client::describeNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const DescribeNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNecessity()) {
    query["necessity"] = request.getNecessity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNodePoolVuls"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodepoolId) , "/vuls")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodePoolVulsResponse>();
}

/**
 * @summary Queries the security vulnerability details of a node pool by node pool ID by calling the DescribeNodePoolVuls operation. The details include vulnerability names and severity levels. Regularly scan node pools for security vulnerabilities to improve cluster security.
 *
 * @param request DescribeNodePoolVulsRequest
 * @return DescribeNodePoolVulsResponse
 */
DescribeNodePoolVulsResponse Client::describeNodePoolVuls(const string &clusterId, const string &nodepoolId, const DescribeNodePoolVulsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNodePoolVulsWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

/**
 * @summary ACK cluster container security policies provide a comprehensive built-in rule library that includes Compliance, Infra, K8s-general, and PSP categories to ensure the secure operation of containers in production environments. You can call the DescribePolicies operation to query the list of policy governance rule libraries.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePoliciesResponse
 */
DescribePoliciesResponse Client::describePoliciesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicies"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePoliciesResponse>();
}

/**
 * @summary ACK cluster container security policies provide a comprehensive built-in rule library that includes Compliance, Infra, K8s-general, and PSP categories to ensure the secure operation of containers in production environments. You can call the DescribePolicies operation to query the list of policy governance rule libraries.
 *
 * @return DescribePoliciesResponse
 */
DescribePoliciesResponse Client::describePolicies() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePoliciesWithOptions(headers, runtime);
}

/**
 * @summary ACK cluster container security policies provide a rich set of built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call the DescribePolicyDetails operation to query the details of a specified policy governance rule, such as the rule template description, governance action, and governance severity level.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyDetailsResponse
 */
DescribePolicyDetailsResponse Client::describePolicyDetailsWithOptions(const string &policyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyDetails"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/policies/" , Darabonba::Encode::Encoder::percentEncode(policyName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyDetailsResponse>();
}

/**
 * @summary ACK cluster container security policies provide a rich set of built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call the DescribePolicyDetails operation to query the details of a specified policy governance rule, such as the rule template description, governance action, and governance severity level.
 *
 * @return DescribePolicyDetailsResponse
 */
DescribePolicyDetailsResponse Client::describePolicyDetails(const string &policyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyDetailsWithOptions(policyName, headers, runtime);
}

/**
 * @summary ACK cluster container security policies provide a rich set of built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call the DescribePolicyGovernanceInCluster operation to query detailed policy governance information for a specified cluster, such as the count of enabled policies at different severity levels, policy governance audit logs, and interception and alert details.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyGovernanceInClusterResponse
 */
DescribePolicyGovernanceInClusterResponse Client::describePolicyGovernanceInClusterWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyGovernanceInCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policygovernance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyGovernanceInClusterResponse>();
}

/**
 * @summary ACK cluster container security policies provide a rich set of built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call the DescribePolicyGovernanceInCluster operation to query detailed policy governance information for a specified cluster, such as the count of enabled policies at different severity levels, policy governance audit logs, and interception and alert details.
 *
 * @return DescribePolicyGovernanceInClusterResponse
 */
DescribePolicyGovernanceInClusterResponse Client::describePolicyGovernanceInCluster(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyGovernanceInClusterWithOptions(clusterId, headers, runtime);
}

/**
 * @summary You can select a security policy type in an ACK cluster, configure the related enforcement actions and scope, and create and deploy a policy instance. You can call the DescribePolicyInstances operation to retrieve the details of specified policy instances in a cluster, such as the policy description and governance level.
 *
 * @param request DescribePolicyInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyInstancesResponse
 */
DescribePolicyInstancesResponse Client::describePolicyInstancesWithOptions(const string &clusterId, const DescribePolicyInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["instance_name"] = request.getInstanceName();
  }

  if (!!request.hasPolicyName()) {
    query["policy_name"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyInstances"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyInstancesResponse>();
}

/**
 * @summary You can select a security policy type in an ACK cluster, configure the related enforcement actions and scope, and create and deploy a policy instance. You can call the DescribePolicyInstances operation to retrieve the details of specified policy instances in a cluster, such as the policy description and governance level.
 *
 * @param request DescribePolicyInstancesRequest
 * @return DescribePolicyInstancesResponse
 */
DescribePolicyInstancesResponse Client::describePolicyInstances(const string &clusterId, const DescribePolicyInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyInstancesWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Queries the deployment status of policy instances for different policy types in a cluster, including the number of enabled instances for each policy rule and the number of enabled policy types at different governance levels.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyInstancesStatusResponse
 */
DescribePolicyInstancesStatusResponse Client::describePolicyInstancesStatusWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyInstancesStatus"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policies/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyInstancesStatusResponse>();
}

/**
 * @summary Queries the deployment status of policy instances for different policy types in a cluster, including the number of enabled instances for each policy rule and the number of enabled policy types at different governance levels.
 *
 * @return DescribePolicyInstancesStatusResponse
 */
DescribePolicyInstancesStatusResponse Client::describePolicyInstancesStatus(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyInstancesStatusWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Queries the list of regions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["clusterType"] = request.getClusterType();
  }

  if (!!request.hasProfile()) {
    query["profile"] = request.getProfile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the list of regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries whether deletion protection is enabled for a specified resource in a cluster. Resources that support deletion protection include namespaces and services.
 *
 * @param request DescribeResourcesDeleteProtectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourcesDeleteProtectionResponse
 */
DescribeResourcesDeleteProtectionResponse Client::describeResourcesDeleteProtectionWithOptions(const string &ClusterId, const string &ResourceType, const DescribeResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasResources()) {
    query["resources"] = request.getResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourcesDeleteProtection"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceType) , "/protection")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourcesDeleteProtectionResponse>();
}

/**
 * @summary Queries whether deletion protection is enabled for a specified resource in a cluster. Resources that support deletion protection include namespaces and services.
 *
 * @param request DescribeResourcesDeleteProtectionRequest
 * @return DescribeResourcesDeleteProtectionResponse
 */
DescribeResourcesDeleteProtectionResponse Client::describeResourcesDeleteProtection(const string &ClusterId, const string &ResourceType, const DescribeResourcesDeleteProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourcesDeleteProtectionWithOptions(ClusterId, ResourceType, request, headers, runtime);
}

/**
 * @summary As a cluster permission management administrator, you can use an Alibaba Cloud account to issue KubeConfig credentials that contain identity information for a specified Resource Access Management (RAM) user or RAM role within the account. These credentials are used to connect to ACK clusters. You can invoke the DescribeSubaccountK8sClusterUserConfig operation to issue or retrieve the KubeConfig for any RAM user or role within the account.
 *
 * @description This operation can be called only by an Alibaba Cloud account.
 *
 * @param request DescribeSubaccountK8sClusterUserConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubaccountK8sClusterUserConfigResponse
 */
DescribeSubaccountK8sClusterUserConfigResponse Client::describeSubaccountK8sClusterUserConfigWithOptions(const string &ClusterId, const string &Uid, const DescribeSubaccountK8sClusterUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasTemporaryDurationMinutes()) {
    query["TemporaryDurationMinutes"] = request.getTemporaryDurationMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubaccountK8sClusterUserConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(Uid) , "/user_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubaccountK8sClusterUserConfigResponse>();
}

/**
 * @summary As a cluster permission management administrator, you can use an Alibaba Cloud account to issue KubeConfig credentials that contain identity information for a specified Resource Access Management (RAM) user or RAM role within the account. These credentials are used to connect to ACK clusters. You can invoke the DescribeSubaccountK8sClusterUserConfig operation to issue or retrieve the KubeConfig for any RAM user or role within the account.
 *
 * @description This operation can be called only by an Alibaba Cloud account.
 *
 * @param request DescribeSubaccountK8sClusterUserConfigRequest
 * @return DescribeSubaccountK8sClusterUserConfigResponse
 */
DescribeSubaccountK8sClusterUserConfigResponse Client::describeSubaccountK8sClusterUserConfig(const string &ClusterId, const string &Uid, const DescribeSubaccountK8sClusterUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSubaccountK8sClusterUserConfigWithOptions(ClusterId, Uid, request, headers, runtime);
}

/**
 * @summary Queries the details of a cluster task, such as the task type, running status, and running stage.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskInfoResponse
 */
DescribeTaskInfoResponse Client::describeTaskInfoWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskInfo"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskInfoResponse>();
}

/**
 * @summary Queries the details of a cluster task, such as the task type, running status, and running stage.
 *
 * @return DescribeTaskInfoResponse
 */
DescribeTaskInfoResponse Client::describeTaskInfo(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTaskInfoWithOptions(taskId, headers, runtime);
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can call the DescribeTemplateAttribute operation to query the details of a specified orchestration template, including access permissions, YAML content, and labels.
 *
 * @param request DescribeTemplateAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateAttributeResponse
 */
DescribeTemplateAttributeResponse Client::describeTemplateAttributeWithOptions(const string &TemplateId, const DescribeTemplateAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateType()) {
    query["template_type"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateAttribute"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateAttributeResponse>();
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can call the DescribeTemplateAttribute operation to query the details of a specified orchestration template, including access permissions, YAML content, and labels.
 *
 * @param request DescribeTemplateAttributeRequest
 * @return DescribeTemplateAttributeResponse
 */
DescribeTemplateAttributeResponse Client::describeTemplateAttribute(const string &TemplateId, const DescribeTemplateAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTemplateAttributeWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can call the DescribeTemplates operation to retrieve a list of created orchestration templates and query detailed information about the templates, including access permissions, YAML content, and tags.
 *
 * @param request DescribeTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplatesWithOptions(const DescribeTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["page_num"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasTemplateType()) {
    query["template_type"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplates"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatesResponse>();
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. You can call the DescribeTemplates operation to retrieve a list of created orchestration templates and query detailed information about the templates, including access permissions, YAML content, and tags.
 *
 * @param request DescribeTemplatesRequest
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const DescribeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries triggers that meet the specified conditions.
 *
 * @param request DescribeTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTriggerResponse
 */
DescribeTriggerResponse Client::describeTriggerWithOptions(const string &clusterId, const DescribeTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/triggers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTriggerResponse>();
}

/**
 * @summary Queries triggers that meet the specified conditions.
 *
 * @param request DescribeTriggerRequest
 * @return DescribeTriggerResponse
 */
DescribeTriggerResponse Client::describeTrigger(const string &clusterId, const DescribeTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTriggerWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary In ACK clusters, you can use Kubernetes namespaces to achieve logically isolated permissions and resources for cluster users. Users who are granted RBAC permissions only for a specified namespace cannot access resources in other namespaces of the cluster. You can invoke the DescribeUserClusterNamespaces operation to query the namespaces for which the current Resource Access Management (RAM) user or role has been granted RBAC access permissions in a specified ACK cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserClusterNamespacesResponse
 */
DescribeUserClusterNamespacesResponse Client::describeUserClusterNamespacesWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserClusterNamespaces"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/namespaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserClusterNamespacesResponse>();
}

/**
 * @summary In ACK clusters, you can use Kubernetes namespaces to achieve logically isolated permissions and resources for cluster users. Users who are granted RBAC permissions only for a specified namespace cannot access resources in other namespaces of the cluster. You can invoke the DescribeUserClusterNamespaces operation to query the namespaces for which the current Resource Access Management (RAM) user or role has been granted RBAC access permissions in a specified ACK cluster.
 *
 * @return DescribeUserClusterNamespacesResponse
 */
DescribeUserClusterNamespacesResponse Client::describeUserClusterNamespaces(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserClusterNamespacesWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary In ACK clusters, you can create and assign different access permissions to different Resource Access Management (RAM) users or roles to ensure secure access control and resource isolation. You can invoke the DescribeUserPermission operation to query the details of cluster permissions granted to a RAM user or role, including accessible resources, permission scope, preset role types, and permission sources.
 *
 * @description **Before you begin**:
 * - If the account that invokes this API operation is a Resource Access Management (RAM) user or RAM role, the API operation returns only the permissions for clusters in which the calling account has RBAC administrator permissions. To list permissions for all clusters, the calling account must have RBAC administrator permissions on all clusters.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserPermissionResponse
 */
DescribeUserPermissionResponse Client::describeUserPermissionWithOptions(const string &uid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserPermission"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/permissions/users/" , Darabonba::Encode::Encoder::percentEncode(uid))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserPermissionResponse>();
}

/**
 * @summary In ACK clusters, you can create and assign different access permissions to different Resource Access Management (RAM) users or roles to ensure secure access control and resource isolation. You can invoke the DescribeUserPermission operation to query the details of cluster permissions granted to a RAM user or role, including accessible resources, permission scope, preset role types, and permission sources.
 *
 * @description **Before you begin**:
 * - If the account that invokes this API operation is a Resource Access Management (RAM) user or RAM role, the API operation returns only the permissions for clusters in which the calling account has RBAC administrator permissions. To list permissions for all clusters, the calling account must have RBAC administrator permissions on all clusters.
 *
 * @return DescribeUserPermissionResponse
 */
DescribeUserPermissionResponse Client::describeUserPermission(const string &uid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserPermissionWithOptions(uid, headers, runtime);
}

/**
 * @summary Queries the quotas of ACK clusters, node pools, and nodes. To increase a quota, go to Quota Center to submit a request.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserQuotaResponse
 */
DescribeUserQuotaResponse Client::describeUserQuotaWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserQuota"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/quota")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserQuotaResponse>();
}

/**
 * @summary Queries the quotas of ACK clusters, node pools, and nodes. To increase a quota, go to Quota Center to submit a request.
 *
 * @return DescribeUserQuotaResponse
 */
DescribeUserQuotaResponse Client::describeUserQuota() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserQuotaWithOptions(headers, runtime);
}

/**
 * @summary Alibaba Cloud security products periodically scan ECS nodes for security vulnerabilities and provide corresponding remediation suggestions and methods. Some CVE fixes may require node restarts. Ensure that the cluster has sufficient nodes for drain operations. You can call the FixNodePoolVuls operation to fix node security vulnerabilities in a specified cluster node pool and improve the security of cluster nodes.
 *
 * @description - CVE compatibility is ensured by Security Center. Make sure that you have activated the Ultimate edition of Security Center or [purchased vulnerability fixing (pay-as-you-go)](https://help.aliyun.com/document_detail/42308.html).
 * - Some CVE fixes require node restarts. Container Service drains the node before restarting it. Ensure that the cluster has sufficient spare node resources for draining. For example, scale out the node pool in advance.
 * - Pay attention to the compatibility between your applications and CVEs. CVE fixes are performed in batches. During the CVE fix process, you can pause or cancel the task. After you pause or cancel the task, batches that have already been dispatched continue to run until completion. Batches that have not been dispatched are paused or canceled.
 *
 * @param request FixNodePoolVulsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FixNodePoolVulsResponse
 */
FixNodePoolVulsResponse Client::fixNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const FixNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRestart()) {
    body["auto_restart"] = request.getAutoRestart();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.getNodes();
  }

  if (!!request.hasRolloutPolicy()) {
    body["rollout_policy"] = request.getRolloutPolicy();
  }

  if (!!request.hasVuls()) {
    body["vuls"] = request.getVuls();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FixNodePoolVuls"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodepoolId) , "/vuls/fix")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FixNodePoolVulsResponse>();
}

/**
 * @summary Alibaba Cloud security products periodically scan ECS nodes for security vulnerabilities and provide corresponding remediation suggestions and methods. Some CVE fixes may require node restarts. Ensure that the cluster has sufficient nodes for drain operations. You can call the FixNodePoolVuls operation to fix node security vulnerabilities in a specified cluster node pool and improve the security of cluster nodes.
 *
 * @description - CVE compatibility is ensured by Security Center. Make sure that you have activated the Ultimate edition of Security Center or [purchased vulnerability fixing (pay-as-you-go)](https://help.aliyun.com/document_detail/42308.html).
 * - Some CVE fixes require node restarts. Container Service drains the node before restarting it. Ensure that the cluster has sufficient spare node resources for draining. For example, scale out the node pool in advance.
 * - Pay attention to the compatibility between your applications and CVEs. CVE fixes are performed in batches. During the CVE fix process, you can pause or cancel the task. After you pause or cancel the task, batches that have already been dispatched continue to run until completion. Batches that have not been dispatched are paused or canceled.
 *
 * @param request FixNodePoolVulsRequest
 * @return FixNodePoolVulsResponse
 */
FixNodePoolVulsResponse Client::fixNodePoolVuls(const string &clusterId, const string &nodepoolId, const FixNodePoolVulsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return fixNodePoolVulsWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified component instance in a cluster, including the version, parameter settings, and logging feature status of the component instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterAddonInstanceResponse
 */
GetClusterAddonInstanceResponse Client::getClusterAddonInstanceWithOptions(const string &clusterId, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterAddonInstance"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/addon_instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterAddonInstanceResponse>();
}

/**
 * @summary Queries the details of a specified component instance in a cluster, including the version, parameter settings, and logging feature status of the component instance.
 *
 * @return GetClusterAddonInstanceResponse
 */
GetClusterAddonInstanceResponse Client::getClusterAddonInstance(const string &clusterId, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterAddonInstanceWithOptions(clusterId, instanceName, headers, runtime);
}

/**
 * @summary Queries whether the API server audit feature is enabled for a cluster and retrieves the Simple Log Service (SLS) project that stores the API server audit logs.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterAuditProjectResponse
 */
GetClusterAuditProjectResponse Client::getClusterAuditProjectWithOptions(const string &clusterid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterAuditProject"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterid) , "/audit")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterAuditProjectResponse>();
}

/**
 * @summary Queries whether the API server audit feature is enabled for a cluster and retrieves the Simple Log Service (SLS) project that stores the API server audit logs.
 *
 * @return GetClusterAuditProjectResponse
 */
GetClusterAuditProjectResponse Client::getClusterAuditProject(const string &clusterid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterAuditProjectWithOptions(clusterid, headers, runtime);
}

/**
 * @summary The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. You can call the GetClusterCheck operation to query information about a specified check task based on the cluster ID and check task ID, such as the check status, specific check items, and check creation and completion time.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterCheckResponse
 */
GetClusterCheckResponse Client::getClusterCheckWithOptions(const string &clusterId, const string &checkId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterCheck"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/checks/" , Darabonba::Encode::Encoder::percentEncode(checkId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterCheckResponse>();
}

/**
 * @summary The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. You can call the GetClusterCheck operation to query information about a specified check task based on the cluster ID and check task ID, such as the check status, specific check items, and check creation and completion time.
 *
 * @return GetClusterCheckResponse
 */
GetClusterCheckResponse Client::getClusterCheck(const string &clusterId, const string &checkId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterCheckWithOptions(clusterId, checkId, headers, runtime);
}

/**
 * @summary Retrieves the diagnostic check items of a cluster.
 *
 * @param request GetClusterDiagnosisCheckItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterDiagnosisCheckItemsResponse
 */
GetClusterDiagnosisCheckItemsResponse Client::getClusterDiagnosisCheckItemsWithOptions(const string &clusterId, const string &diagnosisId, const GetClusterDiagnosisCheckItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterDiagnosisCheckItems"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/diagnosis/" , Darabonba::Encode::Encoder::percentEncode(diagnosisId) , "/check_items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterDiagnosisCheckItemsResponse>();
}

/**
 * @summary Retrieves the diagnostic check items of a cluster.
 *
 * @param request GetClusterDiagnosisCheckItemsRequest
 * @return GetClusterDiagnosisCheckItemsResponse
 */
GetClusterDiagnosisCheckItemsResponse Client::getClusterDiagnosisCheckItems(const string &clusterId, const string &diagnosisId, const GetClusterDiagnosisCheckItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterDiagnosisCheckItemsWithOptions(clusterId, diagnosisId, request, headers, runtime);
}

/**
 * @summary Retrieves the diagnosis result of a cluster.
 *
 * @param request GetClusterDiagnosisResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterDiagnosisResultResponse
 */
GetClusterDiagnosisResultResponse Client::getClusterDiagnosisResultWithOptions(const string &clusterId, const string &diagnosisId, const GetClusterDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterDiagnosisResult"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/diagnosis/" , Darabonba::Encode::Encoder::percentEncode(diagnosisId) , "/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterDiagnosisResultResponse>();
}

/**
 * @summary Retrieves the diagnosis result of a cluster.
 *
 * @param request GetClusterDiagnosisResultRequest
 * @return GetClusterDiagnosisResultResponse
 */
GetClusterDiagnosisResultResponse Client::getClusterDiagnosisResult(const string &clusterId, const string &diagnosisId, const GetClusterDiagnosisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterDiagnosisResultWithOptions(clusterId, diagnosisId, request, headers, runtime);
}

/**
 * @summary Retrieves the inspection configuration of a cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterInspectConfigResponse
 */
GetClusterInspectConfigResponse Client::getClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterInspectConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterInspectConfigResponse>();
}

/**
 * @summary Retrieves the inspection configuration of a cluster.
 *
 * @return GetClusterInspectConfigResponse
 */
GetClusterInspectConfigResponse Client::getClusterInspectConfig(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Retrieves the details of a cluster inspection report.
 *
 * @param request GetClusterInspectReportDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterInspectReportDetailResponse
 */
GetClusterInspectReportDetailResponse Client::getClusterInspectReportDetailWithOptions(const string &clusterId, const string &reportId, const GetClusterInspectReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.getCategory();
  }

  if (!!request.hasEnableFilter()) {
    query["enableFilter"] = request.getEnableFilter();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.getLevel();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasTargetType()) {
    query["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterInspectReportDetail"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectReports/" , Darabonba::Encode::Encoder::percentEncode(reportId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterInspectReportDetailResponse>();
}

/**
 * @summary Retrieves the details of a cluster inspection report.
 *
 * @param request GetClusterInspectReportDetailRequest
 * @return GetClusterInspectReportDetailResponse
 */
GetClusterInspectReportDetailResponse Client::getClusterInspectReportDetail(const string &clusterId, const string &reportId, const GetClusterInspectReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterInspectReportDetailWithOptions(clusterId, reportId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetKubernetesTrigger is deprecated
 *
 * @summary Queries the triggers of an application by application name.
 *
 * @param request GetKubernetesTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKubernetesTriggerResponse
 */
GetKubernetesTriggerResponse Client::getKubernetesTriggerWithOptions(const string &ClusterId, const GetKubernetesTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKubernetesTrigger"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/triggers/" , Darabonba::Encode::Encoder::percentEncode(ClusterId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKubernetesTriggerResponse>();
}

/**
 * @deprecated OpenAPI GetKubernetesTrigger is deprecated
 *
 * @summary Queries the triggers of an application by application name.
 *
 * @param request GetKubernetesTriggerRequest
 * @return GetKubernetesTriggerResponse
 */
GetKubernetesTriggerResponse Client::getKubernetesTrigger(const string &ClusterId, const GetKubernetesTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKubernetesTriggerWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a cluster by cluster ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUpgradeStatusResponse
 */
GetUpgradeStatusResponse Client::getUpgradeStatusWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUpgradeStatus"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/upgrade/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUpgradeStatusResponse>();
}

/**
 * @deprecated OpenAPI GetUpgradeStatus is deprecated
 *
 * @summary Queries the upgrade status of a cluster by cluster ID.
 *
 * @return GetUpgradeStatusResponse
 */
GetUpgradeStatusResponse Client::getUpgradeStatus(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUpgradeStatusWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary By default, Resource Access Management (RAM) users or roles that are not cluster creators and have not been granted access permissions across all cluster dimensions do not have any RBAC permissions in a cluster. You can invoke the GrantPermissions operation to update the RBAC access permissions of a RAM user or role, including accessible resources, permission scope, and preset role types, to better manage cluster management security and access control.
 *
 * @description - If the account that invokes this API operation is a RAM user, make sure that the account has been granted the permission to modify the RBAC authorization information of other Resource Access Management (RAM) users or RAM roles. Otherwise, the API operation returns the `StatusForbidden` or `ForbiddenGrantPermissions` fault. For more information, see [Grant RBAC permissions to a RAM user](https://help.aliyun.com/document_detail/119035.html).
 * - The operation of fully updating the RBAC authorization information of a RAM user or RAM role overwrites the existing cluster permissions of the target RAM user or RAM role. Include all permission configurations that you want to grant to the target RAM user or RAM role in the request.
 *
 * @param request GrantPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantPermissionsResponse
 */
GrantPermissionsResponse Client::grantPermissionsWithOptions(const string &uid, const GrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "GrantPermissions"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/permissions/users/" , Darabonba::Encode::Encoder::percentEncode(uid))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantPermissionsResponse>();
}

/**
 * @summary By default, Resource Access Management (RAM) users or roles that are not cluster creators and have not been granted access permissions across all cluster dimensions do not have any RBAC permissions in a cluster. You can invoke the GrantPermissions operation to update the RBAC access permissions of a RAM user or role, including accessible resources, permission scope, and preset role types, to better manage cluster management security and access control.
 *
 * @description - If the account that invokes this API operation is a RAM user, make sure that the account has been granted the permission to modify the RBAC authorization information of other Resource Access Management (RAM) users or RAM roles. Otherwise, the API operation returns the `StatusForbidden` or `ForbiddenGrantPermissions` fault. For more information, see [Grant RBAC permissions to a RAM user](https://help.aliyun.com/document_detail/119035.html).
 * - The operation of fully updating the RBAC authorization information of a RAM user or RAM role overwrites the existing cluster permissions of the target RAM user or RAM role. Include all permission configurations that you want to grant to the target RAM user or RAM role in the request.
 *
 * @param request GrantPermissionsRequest
 * @return GrantPermissionsResponse
 */
GrantPermissionsResponse Client::grantPermissions(const string &uid, const GrantPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantPermissionsWithOptions(uid, request, headers, runtime);
}

/**
 * @summary To enhance Kubernetes capabilities, ACK clusters support various components, such as managed core components, application components, logging and monitoring components, networking components, storage components, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
 *
 * @param request InstallClusterAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallClusterAddonsResponse
 */
InstallClusterAddonsResponse Client::installClusterAddonsWithOptions(const string &ClusterId, const InstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "InstallClusterAddons"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallClusterAddonsResponse>();
}

/**
 * @summary To enhance Kubernetes capabilities, ACK clusters support various components, such as managed core components, application components, logging and monitoring components, networking components, storage components, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
 *
 * @param request InstallClusterAddonsRequest
 * @return InstallClusterAddonsResponse
 */
InstallClusterAddonsResponse Client::installClusterAddons(const string &ClusterId, const InstallClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Installs components on nodes. You can configure and specify nodes on which to install components.
 *
 * @param request InstallNodePoolComponentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallNodePoolComponentsResponse
 */
InstallNodePoolComponentsResponse Client::installNodePoolComponentsWithOptions(const string &clusterId, const string &nodePoolId, const InstallNodePoolComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponents()) {
    body["components"] = request.getComponents();
  }

  if (!!request.hasNodeNames()) {
    body["nodeNames"] = request.getNodeNames();
  }

  if (!!request.hasRollingPolicy()) {
    body["rollingPolicy"] = request.getRollingPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallNodePoolComponents"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodePoolId) , "/components")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallNodePoolComponentsResponse>();
}

/**
 * @summary Installs components on nodes. You can configure and specify nodes on which to install components.
 *
 * @param request InstallNodePoolComponentsRequest
 * @return InstallNodePoolComponentsResponse
 */
InstallNodePoolComponentsResponse Client::installNodePoolComponents(const string &clusterId, const string &nodePoolId, const InstallNodePoolComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installNodePoolComponentsWithOptions(clusterId, nodePoolId, request, headers, runtime);
}

/**
 * @summary Queries the list of available components based on specified parameters such as region, cluster type, cluster subtype (profile), and cluster version. You can also retrieve detailed component information, including whether a component is managed, the schema of supported custom parameters, and compatible operating system architectures.
 *
 * @param request ListAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddonsWithOptions(const ListAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasClusterSpec()) {
    query["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasClusterVersion()) {
    query["cluster_version"] = request.getClusterVersion();
  }

  if (!!request.hasProfile()) {
    query["profile"] = request.getProfile();
  }

  if (!!request.hasRegionId()) {
    query["region_id"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddons"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonsResponse>();
}

/**
 * @summary Queries the list of available components based on specified parameters such as region, cluster type, cluster subtype (profile), and cluster version. You can also retrieve detailed component information, including whether a component is managed, the schema of supported custom parameters, and compatible operating system architectures.
 *
 * @param request ListAddonsRequest
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddons(const ListAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAddonsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of auto-repair policies.
 *
 * @description >Notice: This API is not yet available. Stay tuned.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoRepairPoliciesResponse
 */
ListAutoRepairPoliciesResponse Client::listAutoRepairPoliciesWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoRepairPolicies"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/auto_repair_policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoRepairPoliciesResponse>();
}

/**
 * @summary Retrieves the list of auto-repair policies.
 *
 * @description >Notice: This API is not yet available. Stay tuned.
 *
 * @return ListAutoRepairPoliciesResponse
 */
ListAutoRepairPoliciesResponse Client::listAutoRepairPolicies(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAutoRepairPoliciesWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Queries the list of resources contained in an installed cluster component instance, including Kubernetes cluster resources and Helm release instances.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterAddonInstanceResourcesResponse
 */
ListClusterAddonInstanceResourcesResponse Client::listClusterAddonInstanceResourcesWithOptions(const string &clusterId, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterAddonInstanceResources"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/addon_instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterAddonInstanceResourcesResponse>();
}

/**
 * @summary Queries the list of resources contained in an installed cluster component instance, including Kubernetes cluster resources and Helm release instances.
 *
 * @return ListClusterAddonInstanceResourcesResponse
 */
ListClusterAddonInstanceResourcesResponse Client::listClusterAddonInstanceResources(const string &clusterId, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterAddonInstanceResourcesWithOptions(clusterId, instanceName, headers, runtime);
}

/**
 * @summary Lists the component instances installed in a specified cluster and queries related information about the component instances, such as the component version and status.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterAddonInstancesResponse
 */
ListClusterAddonInstancesResponse Client::listClusterAddonInstancesWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterAddonInstances"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/addon_instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterAddonInstancesResponse>();
}

/**
 * @summary Lists the component instances installed in a specified cluster and queries related information about the component instances, such as the component version and status.
 *
 * @return ListClusterAddonInstancesResponse
 */
ListClusterAddonInstancesResponse Client::listClusterAddonInstances(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterAddonInstancesWithOptions(clusterId, headers, runtime);
}

/**
 * @summary The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. You can call the ListClusterChecks operation to query the list of cluster checks and related information by cluster ID, such as check type, status, creation time, and completion time.
 *
 * @param request ListClusterChecksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterChecksResponse
 */
ListClusterChecksResponse Client::listClusterChecksWithOptions(const string &clusterId, const ListClusterChecksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTarget()) {
    query["target"] = request.getTarget();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterChecks"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/checks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterChecksResponse>();
}

/**
 * @summary The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. You can call the ListClusterChecks operation to query the list of cluster checks and related information by cluster ID, such as check type, status, creation time, and completion time.
 *
 * @param request ListClusterChecksRequest
 * @return ListClusterChecksResponse
 */
ListClusterChecksResponse Client::listClusterChecks(const string &clusterId, const ListClusterChecksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterChecksWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of cluster inspection reports.
 *
 * @param request ListClusterInspectReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterInspectReportsResponse
 */
ListClusterInspectReportsResponse Client::listClusterInspectReportsWithOptions(const string &clusterId, const ListClusterInspectReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterInspectReports"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectReports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterInspectReportsResponse>();
}

/**
 * @summary Retrieves a list of cluster inspection reports.
 *
 * @param request ListClusterInspectReportsRequest
 * @return ListClusterInspectReportsResponse
 */
ListClusterInspectReportsResponse Client::listClusterInspectReports(const string &clusterId, const ListClusterInspectReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterInspectReportsWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Queries the list and status of KubeConfigs that have been issued to users in a specified cluster. You can call this operation to view the access control status of the current cluster.
 *
 * @description > - To call this operation, you must have the ram:ListUsers and ram:ListRoles permissions.
 * > - To call this operation, you must have full access to Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 *
 * @param request ListClusterKubeconfigStatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterKubeconfigStatesResponse
 */
ListClusterKubeconfigStatesResponse Client::listClusterKubeconfigStatesWithOptions(const string &ClusterId, const ListClusterKubeconfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudServiceKubeConfig()) {
    query["cloudServiceKubeConfig"] = request.getCloudServiceKubeConfig();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterKubeconfigStates"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/kubeconfig/states")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterKubeconfigStatesResponse>();
}

/**
 * @summary Queries the list and status of KubeConfigs that have been issued to users in a specified cluster. You can call this operation to view the access control status of the current cluster.
 *
 * @description > - To call this operation, you must have the ram:ListUsers and ram:ListRoles permissions.
 * > - To call this operation, you must have full access to Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 *
 * @param request ListClusterKubeconfigStatesRequest
 * @return ListClusterKubeconfigStatesResponse
 */
ListClusterKubeconfigStatesResponse Client::listClusterKubeconfigStates(const string &ClusterId, const ListClusterKubeconfigStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterKubeconfigStatesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of automated O&M execution plans.
 *
 * @param request ListOperationPlansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationPlansResponse
 */
ListOperationPlansResponse Client::listOperationPlansWithOptions(const ListOperationPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationPlans"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/operation/plans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationPlansResponse>();
}

/**
 * @summary Retrieves a list of automated O&M execution plans.
 *
 * @param request ListOperationPlansRequest
 * @return ListOperationPlansResponse
 */
ListOperationPlansResponse Client::listOperationPlans(const ListOperationPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOperationPlansWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the most recent 100 automated O&M execution plans in a specified region. When features such as cluster intelligent managed mode (Auto Mode), automatic cluster upgrade, or node pool automated O&M are enabled, you can call this operation to query the O&M plans automatically generated by the system and their execution status, such as cluster upgrades and node pool CVE fixes.
 *
 * @param request ListOperationPlansForRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationPlansForRegionResponse
 */
ListOperationPlansForRegionResponse Client::listOperationPlansForRegionWithOptions(const string &regionId, const ListOperationPlansForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasState()) {
    query["state"] = request.getState();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationPlansForRegion"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions/" , Darabonba::Encode::Encoder::percentEncode(regionId) , "/operation/plans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationPlansForRegionResponse>();
}

/**
 * @summary Queries the most recent 100 automated O&M execution plans in a specified region. When features such as cluster intelligent managed mode (Auto Mode), automatic cluster upgrade, or node pool automated O&M are enabled, you can call this operation to query the O&M plans automatically generated by the system and their execution status, such as cluster upgrades and node pool CVE fixes.
 *
 * @param request ListOperationPlansForRegionRequest
 * @return ListOperationPlansForRegionResponse
 */
ListOperationPlansForRegionResponse Client::listOperationPlansForRegion(const string &regionId, const ListOperationPlansForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOperationPlansForRegionWithOptions(regionId, request, headers, runtime);
}

/**
 * @summary You can add tag key-value pairs to clusters so that cluster developers or O&M engineers can classify and manage clusters more flexibly, and better support requirements such as monitoring, cost analysis, and multi-tenant data isolation. You can call the ListTagResources operation to obtain a list of resource tags and query detailed tag information, such as key-value pairs and associated clusters.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "resource_ids", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["next_token"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["region_id"] = request.getRegionId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["resource_ids"] = request.getResourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["resource_type"] = request.getResourceType();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary You can add tag key-value pairs to clusters so that cluster developers or O&M engineers can classify and manage clusters more flexibly, and better support requirements such as monitoring, cost analysis, and multi-tenant data isolation. You can call the ListTagResources operation to obtain a list of resource tags and query detailed tag information, such as key-value pairs and associated clusters.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the KubeConfig status list of all clusters for the current user. If you want to view the KubeConfig issuance status of each cluster for the current user, you can call this operation to retrieve the KubeConfig status list of all clusters.
 *
 * @description > To call this operation, you must have full access permissions on Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 *
 * @param request ListUserKubeConfigStatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserKubeConfigStatesResponse
 */
ListUserKubeConfigStatesResponse Client::listUserKubeConfigStatesWithOptions(const string &Uid, const ListUserKubeConfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserKubeConfigStates"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/users/" , Darabonba::Encode::Encoder::percentEncode(Uid) , "/kubeconfig/states")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserKubeConfigStatesResponse>();
}

/**
 * @summary Queries the KubeConfig status list of all clusters for the current user. If you want to view the KubeConfig issuance status of each cluster for the current user, you can call this operation to retrieve the KubeConfig status list of all clusters.
 *
 * @description > To call this operation, you must have full access permissions on Container Service for Kubernetes (ACK) (AliyunCSFullAccess).
 *
 * @param request ListUserKubeConfigStatesRequest
 * @return ListUserKubeConfigStatesResponse
 */
ListUserKubeConfigStatesResponse Client::listUserKubeConfigStates(const string &Uid, const ListUserKubeConfigStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserKubeConfigStatesWithOptions(Uid, request, headers, runtime);
}

/**
 * @summary ACK ACK clusters are an evolution of ACK Basic clusters, inheriting all the advantages of managed clusters, such as managed control planes and high-availability control planes. ACK ACK clusters further enhance cluster reliability, security, and scheduling capabilities, and support SLAs with compensation standards. ACK ACK clusters are suitable for enterprise customers who run large-scale workloads in production environments and have high requirements for stability and security. You can call the MigrateCluster operation to migrate an ACK Basic cluster to an ACK ACK cluster.
 *
 * @description After you migrate an ACK managed Basic cluster to an ACK managed Pro cluster, a [cluster management fee](https://help.aliyun.com/document_detail/462278.html) charged by ACK is added. Billing for other cloud resources remains unchanged.
 *
 * @param request MigrateClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateClusterResponse
 */
MigrateClusterResponse Client::migrateClusterWithOptions(const string &clusterId, const MigrateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOssBucketEndpoint()) {
    body["oss_bucket_endpoint"] = request.getOssBucketEndpoint();
  }

  if (!!request.hasOssBucketName()) {
    body["oss_bucket_name"] = request.getOssBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MigrateCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/migrate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateClusterResponse>();
}

/**
 * @summary ACK ACK clusters are an evolution of ACK Basic clusters, inheriting all the advantages of managed clusters, such as managed control planes and high-availability control planes. ACK ACK clusters further enhance cluster reliability, security, and scheduling capabilities, and support SLAs with compensation standards. ACK ACK clusters are suitable for enterprise customers who run large-scale workloads in production environments and have high requirements for stability and security. You can call the MigrateCluster operation to migrate an ACK Basic cluster to an ACK ACK cluster.
 *
 * @description After you migrate an ACK managed Basic cluster to an ACK managed Pro cluster, a [cluster management fee](https://help.aliyun.com/document_detail/462278.html) charged by ACK is added. Billing for other cloud resources remains unchanged.
 *
 * @param request MigrateClusterRequest
 * @return MigrateClusterResponse
 */
MigrateClusterResponse Client::migrateCluster(const string &clusterId, const MigrateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateClusterWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Modifies a self-healing rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @param request ModifyAutoRepairPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoRepairPolicyResponse
 */
ModifyAutoRepairPolicyResponse Client::modifyAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const ModifyAutoRepairPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRules()) {
    body["rules"] = request.getRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAutoRepairPolicy"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/auto_repair_policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoRepairPolicyResponse>();
}

/**
 * @summary Modifies a self-healing rule.
 *
 * @description >Notice: This API is not yet available. Stay tuned..
 *
 * @param request ModifyAutoRepairPolicyRequest
 * @return ModifyAutoRepairPolicyResponse
 */
ModifyAutoRepairPolicyResponse Client::modifyAutoRepairPolicy(const string &clusterId, const string &policyId, const ModifyAutoRepairPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAutoRepairPolicyWithOptions(clusterId, policyId, request, headers, runtime);
}

/**
 * @summary You can call the ModifyCluster operation to modify the configuration of an ACK cluster.
 *
 * @description <notice>Starting from July 04, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For details about the changes, see [Announcement on Changes to ACK Cluster Management OpenAPI Parameters and OpenAPI Deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
 *
 * @param request ModifyClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterResponse
 */
ModifyClusterResponse Client::modifyClusterWithOptions(const string &ClusterId, const ModifyClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessControlList()) {
    body["access_control_list"] = request.getAccessControlList();
  }

  if (!!request.hasApiServerCustomCertSans()) {
    body["api_server_custom_cert_sans"] = request.getApiServerCustomCertSans();
  }

  if (!!request.hasApiServerEip()) {
    body["api_server_eip"] = request.getApiServerEip();
  }

  if (!!request.hasApiServerEipId()) {
    body["api_server_eip_id"] = request.getApiServerEipId();
  }

  if (!!request.hasClusterName()) {
    body["cluster_name"] = request.getClusterName();
  }

  if (!!request.hasClusterSpec()) {
    body["cluster_spec"] = request.getClusterSpec();
  }

  if (!!request.hasControlPlaneConfig()) {
    body["control_plane_config"] = request.getControlPlaneConfig();
  }

  if (!!request.hasControlPlaneEndpointsConfig()) {
    body["control_plane_endpoints_config"] = request.getControlPlaneEndpointsConfig();
  }

  if (!!request.hasDeletionProtection()) {
    body["deletion_protection"] = request.getDeletionProtection();
  }

  if (!!request.hasEnableRrsa()) {
    body["enable_rrsa"] = request.getEnableRrsa();
  }

  if (!!request.hasIngressDomainRebinding()) {
    body["ingress_domain_rebinding"] = request.getIngressDomainRebinding();
  }

  if (!!request.hasIngressLoadbalancerId()) {
    body["ingress_loadbalancer_id"] = request.getIngressLoadbalancerId();
  }

  if (!!request.hasInstanceDeletionProtection()) {
    body["instance_deletion_protection"] = request.getInstanceDeletionProtection();
  }

  if (!!request.hasMaintenanceWindow()) {
    body["maintenance_window"] = request.getMaintenanceWindow();
  }

  if (!!request.hasOperationPolicy()) {
    body["operation_policy"] = request.getOperationPolicy();
  }

  if (!!request.hasResourceGroupId()) {
    body["resource_group_id"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["security_group_id"] = request.getSecurityGroupId();
  }

  if (!!request.hasSystemEventsLogging()) {
    body["system_events_logging"] = request.getSystemEventsLogging();
  }

  if (!!request.hasTimezone()) {
    body["timezone"] = request.getTimezone();
  }

  if (!!request.hasVswitchIds()) {
    body["vswitch_ids"] = request.getVswitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterResponse>();
}

/**
 * @summary You can call the ModifyCluster operation to modify the configuration of an ACK cluster.
 *
 * @description <notice>Starting from July 04, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For details about the changes, see [Announcement on Changes to ACK Cluster Management OpenAPI Parameters and OpenAPI Deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
 *
 * @param request ModifyClusterRequest
 * @return ModifyClusterResponse
 */
ModifyClusterResponse Client::modifyCluster(const string &ClusterId, const ModifyClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Modifies the configuration of an installed cluster component instance. Modifying configurations may affect your services. Evaluate the impact before performing this operation during off-peak hours and back up relevant data in advance.
 *
 * @description You can call this API operation to modify the configuration of common clusters components and the control plane parameter settings of ACK Pro clusters:
 * - To query the configurable parameters of common components, call the DescribeClusterAddonMetadata API operation. For details, see [Query cluster component version metadata](https://help.aliyun.com/document_detail/2667944.html).
 * - For the configurable control plane parameter settings of ACK Pro clusters, see [Customize control plane parameters of ACK Pro clusters](https://help.aliyun.com/document_detail/199588.html).
 * Modifying configurations may cause the component to be redeployed and restarted. Evaluate the impact before performing this operation.
 *
 * @param request ModifyClusterAddonRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterAddonResponse
 */
ModifyClusterAddonResponse Client::modifyClusterAddonWithOptions(const string &clusterId, const string &componentId, const ModifyClusterAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterAddon"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/components/" , Darabonba::Encode::Encoder::percentEncode(componentId) , "/config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterAddonResponse>();
}

/**
 * @summary Modifies the configuration of an installed cluster component instance. Modifying configurations may affect your services. Evaluate the impact before performing this operation during off-peak hours and back up relevant data in advance.
 *
 * @description You can call this API operation to modify the configuration of common clusters components and the control plane parameter settings of ACK Pro clusters:
 * - To query the configurable parameters of common components, call the DescribeClusterAddonMetadata API operation. For details, see [Query cluster component version metadata](https://help.aliyun.com/document_detail/2667944.html).
 * - For the configurable control plane parameter settings of ACK Pro clusters, see [Customize control plane parameters of ACK Pro clusters](https://help.aliyun.com/document_detail/199588.html).
 * Modifying configurations may cause the component to be redeployed and restarted. Evaluate the impact before performing this operation.
 *
 * @param request ModifyClusterAddonRequest
 * @return ModifyClusterAddonResponse
 */
ModifyClusterAddonResponse Client::modifyClusterAddon(const string &clusterId, const string &componentId, const ModifyClusterAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterAddonWithOptions(clusterId, componentId, request, headers, runtime);
}

/**
 * @summary You can call the ModifyClusterNodePool API to update the configuration of a target node pool by specifying its node pool ID.
 *
 * @param request ModifyClusterNodePoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterNodePoolResponse
 */
ModifyClusterNodePoolResponse Client::modifyClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const ModifyClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoScaling()) {
    body["auto_scaling"] = request.getAutoScaling();
  }

  if (!!request.hasConcurrency()) {
    body["concurrency"] = request.getConcurrency();
  }

  if (!!request.hasKubernetesConfig()) {
    body["kubernetes_config"] = request.getKubernetesConfig();
  }

  if (!!request.hasManagement()) {
    body["management"] = request.getManagement();
  }

  if (!!request.hasNodepoolInfo()) {
    body["nodepool_info"] = request.getNodepoolInfo();
  }

  if (!!request.hasScalingGroup()) {
    body["scaling_group"] = request.getScalingGroup();
  }

  if (!!request.hasTeeConfig()) {
    body["tee_config"] = request.getTeeConfig();
  }

  if (!!request.hasUpdateNodes()) {
    body["update_nodes"] = request.getUpdateNodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterNodePoolResponse>();
}

/**
 * @summary You can call the ModifyClusterNodePool API to update the configuration of a target node pool by specifying its node pool ID.
 *
 * @param request ModifyClusterNodePoolRequest
 * @return ModifyClusterNodePoolResponse
 */
ModifyClusterNodePoolResponse Client::modifyClusterNodePool(const string &ClusterId, const string &NodepoolId, const ModifyClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @summary You can add tag key-value pairs to clusters so that cluster developers or O&M engineers can categorize and manage clusters more flexibly, and better support requirements such as monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify cluster tags.
 *
 * @description - This operation performs a full update. When you call this operation, specify all target tags as input parameters to avoid losing existing tags. To perform an incremental update, use [TagResources to bind tags to a cluster](https://help.aliyun.com/document_detail/2667969.html).
 *
 * @param request ModifyClusterTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterTagsResponse
 */
ModifyClusterTagsResponse Client::modifyClusterTagsWithOptions(const string &ClusterId, const ModifyClusterTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterTags"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterTagsResponse>();
}

/**
 * @summary You can add tag key-value pairs to clusters so that cluster developers or O&M engineers can categorize and manage clusters more flexibly, and better support requirements such as monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify cluster tags.
 *
 * @description - This operation performs a full update. When you call this operation, specify all target tags as input parameters to avoid losing existing tags. To perform an incremental update, use [TagResources to bind tags to a cluster](https://help.aliyun.com/document_detail/2667969.html).
 *
 * @param request ModifyClusterTagsRequest
 * @return ModifyClusterTagsResponse
 */
ModifyClusterTagsResponse Client::modifyClusterTags(const string &ClusterId, const ModifyClusterTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterTagsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can call the ModifyNodePoolNodeConfig operation to modify the node configuration in a cluster node pool, such as kubelet configuration and node rolling update configuration. Modifying node configuration changes the node configuration in batches and restarts kubelet, which may affect node operations and workload operations. We recommend that you perform this operation during off-peak hours.
 *
 * @description > ACK allows you to modify the kubelet configuration of nodes in a node pool. After the modification is complete, the changes automatically take effect on the nodes in the node pool, and newly added nodes in the node pool also use the new configuration.
 *
 * @param request ModifyNodePoolNodeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodePoolNodeConfigResponse
 */
ModifyNodePoolNodeConfigResponse Client::modifyNodePoolNodeConfigWithOptions(const string &ClusterId, const string &NodepoolId, const ModifyNodePoolNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContainerdConfig()) {
    body["containerd_config"] = request.getContainerdConfig();
  }

  if (!!request.hasKubeletConfig()) {
    body["kubelet_config"] = request.getKubeletConfig();
  }

  if (!!request.hasNodeNames()) {
    body["node_names"] = request.getNodeNames();
  }

  if (!!request.hasOsConfig()) {
    body["os_config"] = request.getOsConfig();
  }

  if (!!request.hasRollingPolicy()) {
    body["rolling_policy"] = request.getRollingPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyNodePoolNodeConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId) , "/node_config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodePoolNodeConfigResponse>();
}

/**
 * @summary You can call the ModifyNodePoolNodeConfig operation to modify the node configuration in a cluster node pool, such as kubelet configuration and node rolling update configuration. Modifying node configuration changes the node configuration in batches and restarts kubelet, which may affect node operations and workload operations. We recommend that you perform this operation during off-peak hours.
 *
 * @description > ACK allows you to modify the kubelet configuration of nodes in a node pool. After the modification is complete, the changes automatically take effect on the nodes in the node pool, and newly added nodes in the node pool also use the new configuration.
 *
 * @param request ModifyNodePoolNodeConfigRequest
 * @return ModifyNodePoolNodeConfigResponse
 */
ModifyNodePoolNodeConfigResponse Client::modifyNodePoolNodeConfig(const string &ClusterId, const string &NodepoolId, const ModifyNodePoolNodeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyNodePoolNodeConfigWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @summary Updates a policy rule instance in a specified cluster. You can modify the governance action (alert or block) and the scope of namespaces to which the policy instance applies.
 *
 * @param request ModifyPolicyInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyInstanceResponse
 */
ModifyPolicyInstanceResponse Client::modifyPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const ModifyPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasInstanceName()) {
    body["instance_name"] = request.getInstanceName();
  }

  if (!!request.hasNamespaces()) {
    body["namespaces"] = request.getNamespaces();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyPolicyInstance"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/policies/" , Darabonba::Encode::Encoder::percentEncode(policyName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyInstanceResponse>();
}

/**
 * @summary Updates a policy rule instance in a specified cluster. You can modify the governance action (alert or block) and the scope of namespaces to which the policy instance applies.
 *
 * @param request ModifyPolicyInstanceRequest
 * @return ModifyPolicyInstanceResponse
 */
ModifyPolicyInstanceResponse Client::modifyPolicyInstance(const string &clusterId, const string &policyName, const ModifyPolicyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

/**
 * @summary When you use Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
 *
 * @description - An Alibaba Cloud account can activate ACK.
 * - A Resource Access Management (RAM) user that has the AdministratorAccess permission can activate the service.
 *
 * @param request OpenAckServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenAckServiceResponse
 */
OpenAckServiceResponse Client::openAckServiceWithOptions(const OpenAckServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenAckService"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/service/open")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenAckServiceResponse>();
}

/**
 * @summary When you use Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
 *
 * @description - An Alibaba Cloud account can activate ACK.
 * - A Resource Access Management (RAM) user that has the AdministratorAccess permission can activate the service.
 *
 * @param request OpenAckServiceRequest
 * @return OpenAckServiceResponse
 */
OpenAckServiceResponse Client::openAckService(const OpenAckServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openAckServiceWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI PauseClusterUpgrade is deprecated
 *
 * @summary Pauses a cluster upgrade.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseClusterUpgradeResponse
 */
PauseClusterUpgradeResponse Client::pauseClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseClusterUpgrade"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/upgrade/pause")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseClusterUpgradeResponse>();
}

/**
 * @deprecated OpenAPI PauseClusterUpgrade is deprecated
 *
 * @summary Pauses a cluster upgrade.
 *
 * @return PauseClusterUpgradeResponse
 */
PauseClusterUpgradeResponse Client::pauseClusterUpgrade(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

/**
 * @deprecated OpenAPI PauseComponentUpgrade is deprecated
 *
 * @summary Pauses a component upgrade.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseComponentUpgradeResponse
 */
PauseComponentUpgradeResponse Client::pauseComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseComponentUpgrade"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterid) , "/components/" , Darabonba::Encode::Encoder::percentEncode(componentid) , "/pause")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseComponentUpgradeResponse>();
}

/**
 * @deprecated OpenAPI PauseComponentUpgrade is deprecated
 *
 * @summary Pauses a component upgrade.
 *
 * @return PauseComponentUpgradeResponse
 */
PauseComponentUpgradeResponse Client::pauseComponentUpgrade(const string &clusterid, const string &componentid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

/**
 * @summary You can call the PauseTask operation to pause a running cluster task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseTaskResponse
 */
PauseTaskResponse Client::pauseTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseTask"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/pause")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseTaskResponse>();
}

/**
 * @summary You can call the PauseTask operation to pause a running cluster task.
 *
 * @return PauseTaskResponse
 */
PauseTaskResponse Client::pauseTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseTaskWithOptions(taskId, headers, runtime);
}

/**
 * @deprecated OpenAPI RemoveClusterNodes is deprecated
 *
 * @summary 移除集群节点
 *
 * @param request RemoveClusterNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClusterNodesResponse
 */
RemoveClusterNodesResponse Client::removeClusterNodesWithOptions(const string &ClusterId, const RemoveClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDrainNode()) {
    body["drain_node"] = request.getDrainNode();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.getNodes();
  }

  if (!!request.hasReleaseNode()) {
    body["release_node"] = request.getReleaseNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveClusterNodes"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodes/remove")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveClusterNodesResponse>();
}

/**
 * @deprecated OpenAPI RemoveClusterNodes is deprecated
 *
 * @summary 移除集群节点
 *
 * @param request RemoveClusterNodesRequest
 * @return RemoveClusterNodesResponse
 */
RemoveClusterNodesResponse Client::removeClusterNodes(const string &ClusterId, const RemoveClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Removes nodes from a node pool in a cluster and adjusts the expected number of nodes. When removing nodes, you can specify whether to release the associated ECS instances and whether to drain the nodes. Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours and back up your data in advance.
 *
 * @description - Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours.
 * - Unexpected risks may occur during the operation. Back up your data in advance.
 * - During the operation, the nodes being removed are set to the unschedulable state in the background.
 * - This operation removes only worker nodes, not master nodes.
 *  - Even if you choose to release nodes (nodes for which `release_node` is set to `true`), subscription nodes are not released. After removing the nodes, release them in the [ECS console](https://ecs.console.aliyun.com/).
 *
 * @param tmpReq RemoveNodePoolNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveNodePoolNodesResponse
 */
RemoveNodePoolNodesResponse Client::removeNodePoolNodesWithOptions(const string &ClusterId, const string &NodepoolId, const RemoveNodePoolNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveNodePoolNodesShrinkRequest request = RemoveNodePoolNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "instance_ids", "json"));
  }

  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "nodes", "json"));
  }

  json query = {};
  if (!!request.hasConcurrency()) {
    query["concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDrainNode()) {
    query["drain_node"] = request.getDrainNode();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["instance_ids"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasNodesShrink()) {
    query["nodes"] = request.getNodesShrink();
  }

  if (!!request.hasReleaseNode()) {
    query["release_node"] = request.getReleaseNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveNodePoolNodes"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId) , "/nodes")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveNodePoolNodesResponse>();
}

/**
 * @summary Removes nodes from a node pool in a cluster and adjusts the expected number of nodes. When removing nodes, you can specify whether to release the associated ECS instances and whether to drain the nodes. Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours and back up your data in advance.
 *
 * @description - Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours.
 * - Unexpected risks may occur during the operation. Back up your data in advance.
 * - During the operation, the nodes being removed are set to the unschedulable state in the background.
 * - This operation removes only worker nodes, not master nodes.
 *  - Even if you choose to release nodes (nodes for which `release_node` is set to `true`), subscription nodes are not released. After removing the nodes, release them in the [ECS console](https://ecs.console.aliyun.com/).
 *
 * @param request RemoveNodePoolNodesRequest
 * @return RemoveNodePoolNodesResponse
 */
RemoveNodePoolNodesResponse Client::removeNodePoolNodes(const string &ClusterId, const string &NodepoolId, const RemoveNodePoolNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeNodePoolNodesWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @summary Repairs nodes in a cluster node pool.
 *
 * @param request RepairClusterNodePoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RepairClusterNodePoolResponse
 */
RepairClusterNodePoolResponse Client::repairClusterNodePoolWithOptions(const string &clusterId, const string &nodepoolId, const RepairClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRestart()) {
    body["auto_restart"] = request.getAutoRestart();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.getNodes();
  }

  if (!!request.hasOperations()) {
    body["operations"] = request.getOperations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RepairClusterNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodepoolId) , "/repair")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RepairClusterNodePoolResponse>();
}

/**
 * @summary Repairs nodes in a cluster node pool.
 *
 * @param request RepairClusterNodePoolRequest
 * @return RepairClusterNodePoolResponse
 */
RepairClusterNodePoolResponse Client::repairClusterNodePool(const string &clusterId, const string &nodepoolId, const RepairClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return repairClusterNodePoolWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
 *
 * @summary Calls ResumeComponentUpgrade to restart a paused component upgrade task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeComponentUpgradeResponse
 */
ResumeComponentUpgradeResponse Client::resumeComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeComponentUpgrade"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterid) , "/components/" , Darabonba::Encode::Encoder::percentEncode(componentid) , "/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeComponentUpgradeResponse>();
}

/**
 * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
 *
 * @summary Calls ResumeComponentUpgrade to restart a paused component upgrade task.
 *
 * @return ResumeComponentUpgradeResponse
 */
ResumeComponentUpgradeResponse Client::resumeComponentUpgrade(const string &clusterid, const string &componentid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

/**
 * @summary Resumes a paused cluster task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeTaskResponse
 */
ResumeTaskResponse Client::resumeTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeTask"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeTaskResponse>();
}

/**
 * @summary Resumes a paused cluster task.
 *
 * @return ResumeTaskResponse
 */
ResumeTaskResponse Client::resumeTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeTaskWithOptions(taskId, headers, runtime);
}

/**
 * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
 *
 * @summary Resumes the upgrade of a cluster that is in the upgrade-paused state based on the cluster ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeUpgradeClusterResponse
 */
ResumeUpgradeClusterResponse Client::resumeUpgradeClusterWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeUpgradeCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/upgrade/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeUpgradeClusterResponse>();
}

/**
 * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
 *
 * @summary Resumes the upgrade of a cluster that is in the upgrade-paused state based on the cluster ID.
 *
 * @return ResumeUpgradeClusterResponse
 */
ResumeUpgradeClusterResponse Client::resumeUpgradeCluster(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeUpgradeClusterWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary If you want to revoke the cluster KubeConfig credential owned by the currently logged-on Alibaba Cloud account or Resource Access Management (RAM) user, you can call the RevokeK8sClusterKubeConfig operation to revoke it. After the revocation succeeds, the cluster generates a new KubeConfig, and the original KubeConfig becomes invalid.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeK8sClusterKubeConfigResponse
 */
RevokeK8sClusterKubeConfigResponse Client::revokeK8sClusterKubeConfigWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeK8sClusterKubeConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/certs")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeK8sClusterKubeConfigResponse>();
}

/**
 * @summary If you want to revoke the cluster KubeConfig credential owned by the currently logged-on Alibaba Cloud account or Resource Access Management (RAM) user, you can call the RevokeK8sClusterKubeConfig operation to revoke it. After the revocation succeeds, the cluster generates a new KubeConfig, and the original KubeConfig becomes invalid.
 *
 * @return RevokeK8sClusterKubeConfigResponse
 */
RevokeK8sClusterKubeConfigResponse Client::revokeK8sClusterKubeConfig(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeK8sClusterKubeConfigWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary The intelligent O&M platform for containers provides a wide range of Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. Before an upgrade, migration, or installation operation is performed, the platform automatically triggers a check. You can perform the change operation only after the check is passed. You can also manually call the RunClusterCheck operation to perform a cluster check. Periodically check and maintain your clusters to prevent security risks.
 *
 * @param request RunClusterCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunClusterCheckResponse
 */
RunClusterCheckResponse Client::runClusterCheckWithOptions(const string &clusterId, const RunClusterCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasTarget()) {
    body["target"] = request.getTarget();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunClusterCheck"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/checks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunClusterCheckResponse>();
}

/**
 * @summary The intelligent O&M platform for containers provides a wide range of Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. Before an upgrade, migration, or installation operation is performed, the platform automatically triggers a check. You can perform the change operation only after the check is passed. You can also manually call the RunClusterCheck operation to perform a cluster check. Periodically check and maintain your clusters to prevent security risks.
 *
 * @param request RunClusterCheckRequest
 * @return RunClusterCheckResponse
 */
RunClusterCheckResponse Client::runClusterCheck(const string &clusterId, const RunClusterCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runClusterCheckWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Initiates a cluster inspection and creates an inspection report.
 *
 * @param request RunClusterInspectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunClusterInspectResponse
 */
RunClusterInspectResponse Client::runClusterInspectWithOptions(const string &clusterId, const RunClusterInspectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunClusterInspect"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectReports")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunClusterInspectResponse>();
}

/**
 * @summary Initiates a cluster inspection and creates an inspection report.
 *
 * @param request RunClusterInspectRequest
 * @return RunClusterInspectResponse
 */
RunClusterInspectResponse Client::runClusterInspect(const string &clusterId, const RunClusterInspectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runClusterInspectWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary 执行节点上的运维操作
 *
 * @param request RunNodeOperationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNodeOperationResponse
 */
RunNodeOperationResponse Client::runNodeOperationWithOptions(const string &clusterId, const string &nodepoolId, const string &nodeName, const RunNodeOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperationAction()) {
    body["operationAction"] = request.getOperationAction();
  }

  if (!!request.hasOperationArgs()) {
    body["operationArgs"] = request.getOperationArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunNodeOperation"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodepoolId) , "/nodes/" , Darabonba::Encode::Encoder::percentEncode(nodeName) , "/operation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunNodeOperationResponse>();
}

/**
 * @summary 执行节点上的运维操作
 *
 * @param request RunNodeOperationRequest
 * @return RunNodeOperationResponse
 */
RunNodeOperationResponse Client::runNodeOperation(const string &clusterId, const string &nodepoolId, const string &nodeName, const RunNodeOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runNodeOperationWithOptions(clusterId, nodepoolId, nodeName, request, headers, runtime);
}

/**
 * @summary Scales out a node pool by adding nodes to ensure that the number of nodes is sufficient to support your workloads.
 *
 * @param request ScaleClusterNodePoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleClusterNodePoolResponse
 */
ScaleClusterNodePoolResponse Client::scaleClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const ScaleClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCount()) {
    body["count"] = request.getCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScaleClusterNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleClusterNodePoolResponse>();
}

/**
 * @summary Scales out a node pool by adding nodes to ensure that the number of nodes is sufficient to support your workloads.
 *
 * @param request ScaleClusterNodePoolRequest
 * @return ScaleClusterNodePoolResponse
 */
ScaleClusterNodePoolResponse Client::scaleClusterNodePool(const string &ClusterId, const string &NodepoolId, const ScaleClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

/**
 * @summary 扩容Kubernetes集群
 *
 * @param request ScaleOutClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleOutClusterResponse
 */
ScaleOutClusterResponse Client::scaleOutClusterWithOptions(const string &ClusterId, const ScaleOutClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudMonitorFlags()) {
    body["cloud_monitor_flags"] = request.getCloudMonitorFlags();
  }

  if (!!request.hasCount()) {
    body["count"] = request.getCount();
  }

  if (!!request.hasCpuPolicy()) {
    body["cpu_policy"] = request.getCpuPolicy();
  }

  if (!!request.hasImageId()) {
    body["image_id"] = request.getImageId();
  }

  if (!!request.hasKeyPair()) {
    body["key_pair"] = request.getKeyPair();
  }

  if (!!request.hasLoginPassword()) {
    body["login_password"] = request.getLoginPassword();
  }

  if (!!request.hasRdsInstances()) {
    body["rds_instances"] = request.getRdsInstances();
  }

  if (!!request.hasRuntime()) {
    body["runtime"] = request.getRuntime();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaints()) {
    body["taints"] = request.getTaints();
  }

  if (!!request.hasUserData()) {
    body["user_data"] = request.getUserData();
  }

  if (!!request.hasVswitchIds()) {
    body["vswitch_ids"] = request.getVswitchIds();
  }

  if (!!request.hasWorkerAutoRenew()) {
    body["worker_auto_renew"] = request.getWorkerAutoRenew();
  }

  if (!!request.hasWorkerAutoRenewPeriod()) {
    body["worker_auto_renew_period"] = request.getWorkerAutoRenewPeriod();
  }

  if (!!request.hasWorkerDataDisks()) {
    body["worker_data_disks"] = request.getWorkerDataDisks();
  }

  if (!!request.hasWorkerInstanceChargeType()) {
    body["worker_instance_charge_type"] = request.getWorkerInstanceChargeType();
  }

  if (!!request.hasWorkerInstanceTypes()) {
    body["worker_instance_types"] = request.getWorkerInstanceTypes();
  }

  if (!!request.hasWorkerPeriod()) {
    body["worker_period"] = request.getWorkerPeriod();
  }

  if (!!request.hasWorkerPeriodUnit()) {
    body["worker_period_unit"] = request.getWorkerPeriodUnit();
  }

  if (!!request.hasWorkerSystemDiskCategory()) {
    body["worker_system_disk_category"] = request.getWorkerSystemDiskCategory();
  }

  if (!!request.hasWorkerSystemDiskSize()) {
    body["worker_system_disk_size"] = request.getWorkerSystemDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScaleOutCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleOutClusterResponse>();
}

/**
 * @summary 扩容Kubernetes集群
 *
 * @param request ScaleOutClusterRequest
 * @return ScaleOutClusterResponse
 */
ScaleOutClusterResponse Client::scaleOutCluster(const string &ClusterId, const ScaleOutClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleOutClusterWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary You can call the ScanClusterVuls operation to scan for potential security vulnerabilities in an ACK cluster, including container workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows operating system vulnerabilities. Regularly scan your cluster for security vulnerabilities to improve cluster security.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScanClusterVulsResponse
 */
ScanClusterVulsResponse Client::scanClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScanClusterVuls"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/vuls/scan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScanClusterVulsResponse>();
}

/**
 * @summary You can call the ScanClusterVuls operation to scan for potential security vulnerabilities in an ACK cluster, including container workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows operating system vulnerabilities. Regularly scan your cluster for security vulnerabilities to improve cluster security.
 *
 * @return ScanClusterVulsResponse
 */
ScanClusterVulsResponse Client::scanClusterVuls(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scanClusterVulsWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Starts a specified alert rule.
 *
 * @param request StartAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlertWithOptions(const string &ClusterId, const StartAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertRuleGroupName()) {
    body["alert_rule_group_name"] = request.getAlertRuleGroupName();
  }

  if (!!request.hasAlertRuleName()) {
    body["alert_rule_name"] = request.getAlertRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartAlert"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alert/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/alert_rule/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAlertResponse>();
}

/**
 * @summary Starts a specified alert rule.
 *
 * @param request StartAlertRequest
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlert(const string &ClusterId, const StartAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startAlertWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Stops alert rules in the ACK alert center. You can stop an entire alert rule group or a single alert rule.
 *
 * @param request StopAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlertWithOptions(const string &ClusterId, const StopAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertRuleGroupName()) {
    body["alert_rule_group_name"] = request.getAlertRuleGroupName();
  }

  if (!!request.hasAlertRuleName()) {
    body["alert_rule_name"] = request.getAlertRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopAlert"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alert/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/alert_rule/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAlertResponse>();
}

/**
 * @summary Stops alert rules in the ACK alert center. You can stop an entire alert rule group or a single alert rule.
 *
 * @param request StopAlertRequest
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlert(const string &ClusterId, const StopAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopAlertWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Synchronizes a cluster node pool, including node pool metadata and information about the nodes in the node pool.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncClusterNodePoolResponse
 */
SyncClusterNodePoolResponse Client::syncClusterNodePoolWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncClusterNodePool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/sync_nodepools")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncClusterNodePoolResponse>();
}

/**
 * @summary Synchronizes a cluster node pool, including node pool metadata and information about the nodes in the node pool.
 *
 * @return SyncClusterNodePoolResponse
 */
SyncClusterNodePoolResponse Client::syncClusterNodePool(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncClusterNodePoolWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Adds tag key-value pairs to clusters so that cluster developers or O&M engineers can categorize and manage clusters more flexibly, and better support monitoring, cost analysis, and tenant isolation requirements. You can call the TagResources operation to attach tags to clusters.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["region_id"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    body["resource_ids"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["resource_type"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tag key-value pairs to clusters so that cluster developers or O&M engineers can categorize and manage clusters more flexibly, and better support monitoring, cost analysis, and tenant isolation requirements. You can call the TagResources operation to attach tags to clusters.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Uninstalls specified components from a cluster when they are no longer needed, with the option to delete associated Alibaba Cloud resources.
 *
 * @param request UnInstallClusterAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnInstallClusterAddonsResponse
 */
UnInstallClusterAddonsResponse Client::unInstallClusterAddonsWithOptions(const string &ClusterId, const UnInstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.getAddons())}
  }));
  Params params = Params(json({
    {"action" , "UnInstallClusterAddons"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnInstallClusterAddonsResponse>();
}

/**
 * @summary Uninstalls specified components from a cluster when they are no longer needed, with the option to delete associated Alibaba Cloud resources.
 *
 * @param request UnInstallClusterAddonsRequest
 * @return UnInstallClusterAddonsResponse
 */
UnInstallClusterAddonsResponse Client::unInstallClusterAddons(const string &ClusterId, const UnInstallClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unInstallClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Deletes resource tags when you no longer need the tag key-value pairs for a cluster. You can call the UntagResources operation to delete resource tags.
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "resource_ids", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKeys(), "tag_keys", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["region_id"] = request.getRegionId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["resource_ids"] = request.getResourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["resource_type"] = request.getResourceType();
  }

  if (!!request.hasTagKeysShrink()) {
    query["tag_keys"] = request.getTagKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Deletes resource tags when you no longer need the tag key-value pairs for a cluster. You can call the UntagResources operation to delete resource tags.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary When you need to record Kubernetes API requests and their results to trace cluster operation history or troubleshoot cluster issues, you can invoke the UpdateClusterAuditLogConfig operation to enable or shutdown the audit log feature for a specified ACK cluster and update the audit log configuration.
 *
 * @description Before you use this operation, make sure that you fully understand the billing methods and pricing of <props="china">[Simple Log Service](https://www.aliyun.com/price/product#/sls/detail/sls)<props="intl">[Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
 *
 * @param request UpdateClusterAuditLogConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterAuditLogConfigResponse
 */
UpdateClusterAuditLogConfigResponse Client::updateClusterAuditLogConfigWithOptions(const string &clusterid, const UpdateClusterAuditLogConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisable()) {
    body["disable"] = request.getDisable();
  }

  if (!!request.hasSlsProjectName()) {
    body["sls_project_name"] = request.getSlsProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateClusterAuditLogConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterid) , "/audit_log")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterAuditLogConfigResponse>();
}

/**
 * @summary When you need to record Kubernetes API requests and their results to trace cluster operation history or troubleshoot cluster issues, you can invoke the UpdateClusterAuditLogConfig operation to enable or shutdown the audit log feature for a specified ACK cluster and update the audit log configuration.
 *
 * @description Before you use this operation, make sure that you fully understand the billing methods and pricing of <props="china">[Simple Log Service](https://www.aliyun.com/price/product#/sls/detail/sls)<props="intl">[Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
 *
 * @param request UpdateClusterAuditLogConfigRequest
 * @return UpdateClusterAuditLogConfigResponse
 */
UpdateClusterAuditLogConfigResponse Client::updateClusterAuditLogConfig(const string &clusterid, const UpdateClusterAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateClusterAuditLogConfigWithOptions(clusterid, request, headers, runtime);
}

/**
 * @summary Updates the cluster inspection configuration.
 *
 * @param request UpdateClusterInspectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterInspectConfigResponse
 */
UpdateClusterInspectConfigResponse Client::updateClusterInspectConfigWithOptions(const string &clusterId, const UpdateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisabledCheckItems()) {
    body["disabledCheckItems"] = request.getDisabledCheckItems();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasScheduleTime()) {
    body["scheduleTime"] = request.getScheduleTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateClusterInspectConfig"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/inspectConfig")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterInspectConfigResponse>();
}

/**
 * @summary Updates the cluster inspection configuration.
 *
 * @param request UpdateClusterInspectConfigRequest
 * @return UpdateClusterInspectConfigResponse
 */
UpdateClusterInspectConfigResponse Client::updateClusterInspectConfig(const string &clusterId, const UpdateClusterInspectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateClusterInspectConfigWithOptions(clusterId, request, headers, runtime);
}

/**
 * @summary Updates the contact group for an alert rule set in an ACK cluster.
 *
 * @param request UpdateContactGroupForAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContactGroupForAlertResponse
 */
UpdateContactGroupForAlertResponse Client::updateContactGroupForAlertWithOptions(const string &ClusterId, const UpdateContactGroupForAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertRuleGroupName()) {
    body["alert_rule_group_name"] = request.getAlertRuleGroupName();
  }

  if (!!request.hasContactGroupIds()) {
    body["contact_group_ids"] = request.getContactGroupIds();
  }

  if (!!request.hasCrName()) {
    body["cr_name"] = request.getCrName();
  }

  if (!!request.hasNamespace()) {
    body["namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateContactGroupForAlert"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alert/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/alert_rule/contact_groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContactGroupForAlertResponse>();
}

/**
 * @summary Updates the contact group for an alert rule set in an ACK cluster.
 *
 * @param request UpdateContactGroupForAlertRequest
 * @return UpdateContactGroupForAlertResponse
 */
UpdateContactGroupForAlertResponse Client::updateContactGroupForAlert(const string &ClusterId, const UpdateContactGroupForAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContactGroupForAlertWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary ACK managed clusters support collecting control plane component logs and delivering them to your Simple Log Service (SLS) Log Project. Control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, Cloud Controller Manager, and other core components. You can call the UpdateControlPlaneLog operation to modify the control plane component log configuration, such as the log retention period and the components from which logs are collected.
 *
 * @param request UpdateControlPlaneLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateControlPlaneLogResponse
 */
UpdateControlPlaneLogResponse Client::updateControlPlaneLogWithOptions(const string &ClusterId, const UpdateControlPlaneLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliuid()) {
    body["aliuid"] = request.getAliuid();
  }

  if (!!request.hasComponents()) {
    body["components"] = request.getComponents();
  }

  if (!!request.hasLogProject()) {
    body["log_project"] = request.getLogProject();
  }

  if (!!request.hasLogTtl()) {
    body["log_ttl"] = request.getLogTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateControlPlaneLog"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/controlplanelog")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateControlPlaneLogResponse>();
}

/**
 * @summary ACK managed clusters support collecting control plane component logs and delivering them to your Simple Log Service (SLS) Log Project. Control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, Cloud Controller Manager, and other core components. You can call the UpdateControlPlaneLog operation to modify the control plane component log configuration, such as the log retention period and the components from which logs are collected.
 *
 * @param request UpdateControlPlaneLogRequest
 * @return UpdateControlPlaneLogResponse
 */
UpdateControlPlaneLogResponse Client::updateControlPlaneLog(const string &ClusterId, const UpdateControlPlaneLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateControlPlaneLogWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary The default expiration time of the KubeConfig issued by an ACK cluster is 3 years. You can use an Alibaba Cloud account to customize the configuration by invoking the UpdateK8sClusterUserConfigExpire operation to specify the expiration time (1 to 876,000 hours) of the KubeConfig issued to a Resource Access Management (RAM) user or role in an ACK cluster.
 *
 * @description - This operation can be called only by an Alibaba Cloud account.
 * - If you revoke the KubeConfig credential used in the cluster, the custom expiration time configured for the KubeConfig of the cluster is also reset. You must call this operation to reconfigure the expiration time.
 *
 * @param request UpdateK8sClusterUserConfigExpireRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sClusterUserConfigExpireResponse
 */
UpdateK8sClusterUserConfigExpireResponse Client::updateK8sClusterUserConfigExpireWithOptions(const string &ClusterId, const UpdateK8sClusterUserConfigExpireRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpireHour()) {
    body["expire_hour"] = request.getExpireHour();
  }

  if (!!request.hasUser()) {
    body["user"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateK8sClusterUserConfigExpire"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/k8s/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/user_config/expire")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sClusterUserConfigExpireResponse>();
}

/**
 * @summary The default expiration time of the KubeConfig issued by an ACK cluster is 3 years. You can use an Alibaba Cloud account to customize the configuration by invoking the UpdateK8sClusterUserConfigExpire operation to specify the expiration time (1 to 876,000 hours) of the KubeConfig issued to a Resource Access Management (RAM) user or role in an ACK cluster.
 *
 * @description - This operation can be called only by an Alibaba Cloud account.
 * - If you revoke the KubeConfig credential used in the cluster, the custom expiration time configured for the KubeConfig of the cluster is also reset. You must call this operation to reconfigure the expiration time.
 *
 * @param request UpdateK8sClusterUserConfigExpireRequest
 * @return UpdateK8sClusterUserConfigExpireResponse
 */
UpdateK8sClusterUserConfigExpireResponse Client::updateK8sClusterUserConfigExpire(const string &ClusterId, const UpdateK8sClusterUserConfigExpireRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sClusterUserConfigExpireWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Updates the Secret encryption at rest configuration for a specified cluster by cluster ID.
 *
 * @description * While enabling or disabling encryption at rest and after the feature is enabled, do not disable or delete the KMS key used by this feature in the KMS console or through OpenAPI. Otherwise, the cluster API Server becomes unavailable, which prevents normal retrieval of objects such as Secrets and ServiceAccounts and affects the normal operation of business applications. For more information, see [Encrypt Secrets at rest by using China KMS](https://help.aliyun.com/document_detail/177372.html).
 * * The user or role that calls this API operation must be granted additional cluster RBAC permissions (O&M engineer or administrator permissions). Otherwise, the ForbiddenUpdateKMSState error code is returned.
 * * After this API operation is successfully called, the cluster status changes to updating. After the update is complete, the cluster status changes back to running. After a change is complete for a cluster, wait at least 5 minutes before calling this API operation again. Otherwise, HTTP status code 409 is returned.
 *
 * @param request UpdateKMSEncryptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKMSEncryptionResponse
 */
UpdateKMSEncryptionResponse Client::updateKMSEncryptionWithOptions(const string &ClusterId, const UpdateKMSEncryptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisableEncryption()) {
    body["disable_encryption"] = request.getDisableEncryption();
  }

  if (!!request.hasKmsKeyId()) {
    body["kms_key_id"] = request.getKmsKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKMSEncryption"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/kms")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKMSEncryptionResponse>();
}

/**
 * @summary Updates the Secret encryption at rest configuration for a specified cluster by cluster ID.
 *
 * @description * While enabling or disabling encryption at rest and after the feature is enabled, do not disable or delete the KMS key used by this feature in the KMS console or through OpenAPI. Otherwise, the cluster API Server becomes unavailable, which prevents normal retrieval of objects such as Secrets and ServiceAccounts and affects the normal operation of business applications. For more information, see [Encrypt Secrets at rest by using China KMS](https://help.aliyun.com/document_detail/177372.html).
 * * The user or role that calls this API operation must be granted additional cluster RBAC permissions (O&M engineer or administrator permissions). Otherwise, the ForbiddenUpdateKMSState error code is returned.
 * * After this API operation is successfully called, the cluster status changes to updating. After the update is complete, the cluster status changes back to running. After a change is complete for a cluster, wait at least 5 minutes before calling this API operation again. Otherwise, HTTP status code 409 is returned.
 *
 * @param request UpdateKMSEncryptionRequest
 * @return UpdateKMSEncryptionResponse
 */
UpdateKMSEncryptionResponse Client::updateKMSEncryption(const string &ClusterId, const UpdateKMSEncryptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKMSEncryptionWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Updates a node component.
 *
 * @param request UpdateNodePoolComponentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodePoolComponentResponse
 */
UpdateNodePoolComponentResponse Client::updateNodePoolComponentWithOptions(const string &clusterId, const string &nodepoolId, const UpdateNodePoolComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDisableRolling()) {
    body["disableRolling"] = request.getDisableRolling();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNodeNames()) {
    body["nodeNames"] = request.getNodeNames();
  }

  if (!!request.hasRollingPolicy()) {
    body["rollingPolicy"] = request.getRollingPolicy();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateNodePoolComponent"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(clusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(nodepoolId) , "/component")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodePoolComponentResponse>();
}

/**
 * @summary Updates a node component.
 *
 * @param request UpdateNodePoolComponentRequest
 * @return UpdateNodePoolComponentResponse
 */
UpdateNodePoolComponentResponse Client::updateNodePoolComponent(const string &clusterId, const string &nodepoolId, const UpdateNodePoolComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNodePoolComponentWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

/**
 * @summary Updates the deletion protection status of a specified resource. Currently supported resource types include namespaces and services.
 * You can call this operation to enable deletion protection for namespaces or services that involve critical business or sensitive data to avoid maintenance costs caused by accidental deletion.
 *
 * @description Before calling this operation, install or upgrade the security policy component for the cluster. For more information, see [Enable security policy management](https://help.aliyun.com/document_detail/359818.html).
 *
 * @param request UpdateResourcesDeleteProtectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourcesDeleteProtectionResponse
 */
UpdateResourcesDeleteProtectionResponse Client::updateResourcesDeleteProtectionWithOptions(const string &ClusterId, const UpdateResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasNamespace()) {
    body["namespace"] = request.getNamespace();
  }

  if (!!request.hasResourceType()) {
    body["resource_type"] = request.getResourceType();
  }

  if (!!request.hasResources()) {
    body["resources"] = request.getResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourcesDeleteProtection"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/resources/protection")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourcesDeleteProtectionResponse>();
}

/**
 * @summary Updates the deletion protection status of a specified resource. Currently supported resource types include namespaces and services.
 * You can call this operation to enable deletion protection for namespaces or services that involve critical business or sensitive data to avoid maintenance costs caused by accidental deletion.
 *
 * @description Before calling this operation, install or upgrade the security policy component for the cluster. For more information, see [Enable security policy management](https://help.aliyun.com/document_detail/359818.html).
 *
 * @param request UpdateResourcesDeleteProtectionRequest
 * @return UpdateResourcesDeleteProtectionResponse
 */
UpdateResourcesDeleteProtectionResponse Client::updateResourcesDeleteProtection(const string &ClusterId, const UpdateResourcesDeleteProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourcesDeleteProtectionWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. Calls the UpdateTemplate operation to update an orchestration template configuration.
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &TemplateId, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
  }

  if (!!request.hasTemplateType()) {
    body["template_type"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner, specifying how applications should run or be configured. Calls the UpdateTemplate operation to update an orchestration template configuration.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &TemplateId, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary In an ACK cluster, non-cluster creators, Resource Access Management (RAM) users, and RAM roles have no RBAC permissions by default. You can invoke the UpdateUserPermissions operation to update the RBAC access permissions of a RAM user or role, including accessible resources, permission scope, and preset role types, to better manage cluster management and secure access control.
 *
 * @description You can update the cluster authorization information of a target Resource Access Management (RAM) user or RAM role by using full update or incremental update. A full update overwrites all existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role. An incremental update includes add and delete operations. Only the cluster authorization information included in the request is changed, and other cluster permissions of the RAM user or RAM role are not affected.
 *
 * @param request UpdateUserPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserPermissionsResponse
 */
UpdateUserPermissionsResponse Client::updateUserPermissionsWithOptions(const string &uid, const UpdateUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMode()) {
    query["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserPermissions"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/permissions/users/" , Darabonba::Encode::Encoder::percentEncode(uid) , "/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserPermissionsResponse>();
}

/**
 * @summary In an ACK cluster, non-cluster creators, Resource Access Management (RAM) users, and RAM roles have no RBAC permissions by default. You can invoke the UpdateUserPermissions operation to update the RBAC access permissions of a RAM user or role, including accessible resources, permission scope, and preset role types, to better manage cluster management and secure access control.
 *
 * @description You can update the cluster authorization information of a target Resource Access Management (RAM) user or RAM role by using full update or incremental update. A full update overwrites all existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role. An incremental update includes add and delete operations. Only the cluster authorization information included in the request is changed, and other cluster permissions of the RAM user or RAM role are not affected.
 *
 * @param request UpdateUserPermissionsRequest
 * @return UpdateUserPermissionsResponse
 */
UpdateUserPermissionsResponse Client::updateUserPermissions(const string &uid, const UpdateUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserPermissionsWithOptions(uid, request, headers, runtime);
}

/**
 * @summary To avoid potential security and stability risks of expired cluster versions and to use new features of the latest cluster versions, upgrade your clusters in accordance with the ACK cluster version release schedule. You can call the UpgradeCluster operation to manually upgrade a cluster.
 *
 * @description After you successfully call the UpgradeCluster operation, the API returns the `task_id` of the upgrade task. You can manage the task by calling the following task API operations:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
 * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html).
 * >Notice: Starting July 4, 2026, the request parameters rolling_policy and rolling_policy.max_parallelism will no longer take effect. Use [UpgradeClusterNodepool](https://help.aliyun.com/document_detail/2667922.html) to upgrade worker nodes instead. For more information about the changes, see [Notice on changes to ACK cluster management OpenAPI request and response parameters and OpenAPI deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>.
 *
 * @param request UpgradeClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClusterResponse
 */
UpgradeClusterResponse Client::upgradeClusterWithOptions(const string &ClusterId, const UpgradeClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentName()) {
    body["component_name"] = request.getComponentName();
  }

  if (!!request.hasMasterOnly()) {
    body["master_only"] = request.getMasterOnly();
  }

  if (!!request.hasNextVersion()) {
    body["next_version"] = request.getNextVersion();
  }

  if (!!request.hasRollingPolicy()) {
    body["rolling_policy"] = request.getRollingPolicy();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpgradeCluster"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/upgrade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClusterResponse>();
}

/**
 * @summary To avoid potential security and stability risks of expired cluster versions and to use new features of the latest cluster versions, upgrade your clusters in accordance with the ACK cluster version release schedule. You can call the UpgradeCluster operation to manually upgrade a cluster.
 *
 * @description After you successfully call the UpgradeCluster operation, the API returns the `task_id` of the upgrade task. You can manage the task by calling the following task API operations:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
 * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html).
 * >Notice: Starting July 4, 2026, the request parameters rolling_policy and rolling_policy.max_parallelism will no longer take effect. Use [UpgradeClusterNodepool](https://help.aliyun.com/document_detail/2667922.html) to upgrade worker nodes instead. For more information about the changes, see [Notice on changes to ACK cluster management OpenAPI request and response parameters and OpenAPI deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>.
 *
 * @param request UpgradeClusterRequest
 * @return UpgradeClusterResponse
 */
UpgradeClusterResponse Client::upgradeCluster(const string &ClusterId, const UpgradeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeClusterWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Upgrades the versions of cluster component instances so that you can benefit from the feature optimizations in the new versions.
 *
 * @description - Upgrading cluster component instance versions may affect your services. Assess the impact before performing the upgrade during off-peak hours, and back up relevant data in advance.
 * - Before upgrading a component, refer to [Component release notes](https://help.aliyun.com/document_detail/176087.html) to learn about the changes and their impact for the specified component.
 * - Upgrade components one at a time. Confirm that one component has been upgraded successfully before upgrading the next one.
 *
 * @param request UpgradeClusterAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClusterAddonsResponse
 */
UpgradeClusterAddonsResponse Client::upgradeClusterAddonsWithOptions(const string &ClusterId, const UpgradeClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpgradeClusterAddons"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/components/upgrade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClusterAddonsResponse>();
}

/**
 * @summary Upgrades the versions of cluster component instances so that you can benefit from the feature optimizations in the new versions.
 *
 * @description - Upgrading cluster component instance versions may affect your services. Assess the impact before performing the upgrade during off-peak hours, and back up relevant data in advance.
 * - Before upgrading a component, refer to [Component release notes](https://help.aliyun.com/document_detail/176087.html) to learn about the changes and their impact for the specified component.
 * - Upgrade components one at a time. Confirm that one component has been upgraded successfully before upgrading the next one.
 *
 * @param request UpgradeClusterAddonsRequest
 * @return UpgradeClusterAddonsResponse
 */
UpgradeClusterAddonsResponse Client::upgradeClusterAddons(const string &ClusterId, const UpgradeClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Upgrades the kubelet version (recommended to match the control plane version), operating system version, or container runtime version of a specified cluster node pool.
 *
 * @description Upgrades the Kubernetes version, operating system version, or container runtime version of nodes in a specified cluster node pool. After you call the UpgradeClusterNodepool operation, the API returns a task_id for the upgrade task. You can manage the task by calling the following task API operations:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
 * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html).
 *
 * @param request UpgradeClusterNodepoolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClusterNodepoolResponse
 */
UpgradeClusterNodepoolResponse Client::upgradeClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const UpgradeClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["image_id"] = request.getImageId();
  }

  if (!!request.hasKubernetesVersion()) {
    body["kubernetes_version"] = request.getKubernetesVersion();
  }

  if (!!request.hasNodeNames()) {
    body["node_names"] = request.getNodeNames();
  }

  if (!!request.hasRollingPolicy()) {
    body["rolling_policy"] = request.getRollingPolicy();
  }

  if (!!request.hasRuntimeType()) {
    body["runtime_type"] = request.getRuntimeType();
  }

  if (!!request.hasRuntimeVersion()) {
    body["runtime_version"] = request.getRuntimeVersion();
  }

  if (!!request.hasUseReplace()) {
    body["use_replace"] = request.getUseReplace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpgradeClusterNodepool"},
    {"version" , "2015-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/nodepools/" , Darabonba::Encode::Encoder::percentEncode(NodepoolId) , "/upgrade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClusterNodepoolResponse>();
}

/**
 * @summary Upgrades the kubelet version (recommended to match the control plane version), operating system version, or container runtime version of a specified cluster node pool.
 *
 * @description Upgrades the Kubernetes version, operating system version, or container runtime version of nodes in a specified cluster node pool. After you call the UpgradeClusterNodepool operation, the API returns a task_id for the upgrade task. You can manage the task by calling the following task API operations:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
 * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html).
 *
 * @param request UpgradeClusterNodepoolRequest
 * @return UpgradeClusterNodepoolResponse
 */
UpgradeClusterNodepoolResponse Client::upgradeClusterNodepool(const string &ClusterId, const string &NodepoolId, const UpgradeClusterNodepoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeClusterNodepoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace CS20151215