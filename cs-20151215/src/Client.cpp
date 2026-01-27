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
    {"rus-west-1-pop" , "cs.aliyuncs.com"}
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
 * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Adds existing nodes to a specific node pool. You can add existing ECS instances to a specific node pool in a Container Service for Kubernetes (ACK) cluster as worker nodes. You can also add removed worker nodes back to the node pool.
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
 * @summary Adds existing nodes to a specific node pool. You can add existing ECS instances to a specific node pool in a Container Service for Kubernetes (ACK) cluster as worker nodes. You can also add removed worker nodes back to the node pool.
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
 * @summary You can call the CancelClusterUpgrade operation to cancel the update of a cluster.
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
 * @summary You can call the CancelClusterUpgrade operation to cancel the update of a cluster.
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
 * @summary You can call the CancelComponentUpgrade operation to cancel the update of a component.
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
 * @summary You can call the CancelComponentUpgrade operation to cancel the update of a component.
 *
 * @return CancelComponentUpgradeResponse
 */
CancelComponentUpgradeResponse Client::cancelComponentUpgrade(const string &clusterId, const string &componentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelComponentUpgradeWithOptions(clusterId, componentId, headers, runtime);
}

/**
 * @summary You can call the CancelOperationPlan operation to cancel a pending auto O\\\\\\\\\\\\&M plan.
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
 * @summary You can call the CancelOperationPlan operation to cancel a pending auto O\\\\\\\\\\\\&M plan.
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
 * @summary Queries the current log configuration of control plane components, including the log retention period and the log collection component. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager.
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
 * @summary Queries the current log configuration of control plane components, including the log retention period and the log collection component. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager.
 *
 * @return CheckControlPlaneLogEnableResponse
 */
CheckControlPlaneLogEnableResponse Client::checkControlPlaneLogEnable(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkControlPlaneLogEnableWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Checks whether the specified service roles are granted to Container Service for Kubernetes (ACK) within the current Alibaba Cloud account. ACK can access other cloud services, such as Elastic Compute Service (ECS), Object Storage Service (OSS), File Storage NAS (NAS), and Server Load Balancer (SLB), only after ACK is assigned the required service roles.
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
 * @summary Checks whether the specified service roles are granted to Container Service for Kubernetes (ACK) within the current Alibaba Cloud account. ACK can access other cloud services, such as Elastic Compute Service (ECS), Object Storage Service (OSS), File Storage NAS (NAS), and Server Load Balancer (SLB), only after ACK is assigned the required service roles.
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
 * @summary Deletes kubeconfig files that may pose potential risks from a user and revokes Role-Based Access Control (RBAC) permissions on a cluster.
 *
 * @description > 
 * *   To call this operation, make sure that you have the AliyunCSFullAccess permission.
 * *   You cannot revoke the permissions of an Alibaba Cloud account.
 * *   You cannot revoke the permissions of the account that you use to call this operation.
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
 * @summary Deletes kubeconfig files that may pose potential risks from a user and revokes Role-Based Access Control (RBAC) permissions on a cluster.
 *
 * @description > 
 * *   To call this operation, make sure that you have the AliyunCSFullAccess permission.
 * *   You cannot revoke the permissions of an Alibaba Cloud account.
 * *   You cannot revoke the permissions of the account that you use to call this operation.
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
 * @summary You can call the CleanUserPermissions operation to delete the kubeconfig files of the specified users and revoke the relevant Role-Based Access Control (RBAC) permissions. This API operation is suitable for scenarios where employees have resigned or the accounts of employees are locked.
 *
 * @description > - To call this operation, make sure that you have the AliyunCSFullAccess permission.
 * > - You cannot revoke the permissions of an Alibaba Cloud account.
 * > - You cannot revoke the permissions of the account that you use to call this operation.
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
 * @summary You can call the CleanUserPermissions operation to delete the kubeconfig files of the specified users and revoke the relevant Role-Based Access Control (RBAC) permissions. This API operation is suitable for scenarios where employees have resigned or the accounts of employees are locked.
 *
 * @description > - To call this operation, make sure that you have the AliyunCSFullAccess permission.
 * > - You cannot revoke the permissions of an Alibaba Cloud account.
 * > - You cannot revoke the permissions of the account that you use to call this operation.
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
 * @summary 查询自愈规则
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
 * @summary 查询自愈规则
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
 * @summary Creates a scaling configuration to allow the system to scale resources based on the given scaling rules. When you create a scaling configuration, you can specify the scaling metrics, thresholds, scaling order, and scaling interval.
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
 * @summary Creates a scaling configuration to allow the system to scale resources based on the given scaling rules. When you create a scaling configuration, you can specify the scaling metrics, thresholds, scaling order, and scaling interval.
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
 * @summary Creates a Container Service for Kubernetes (ACK) cluster. For example, you can create an ACK managed cluster, ACK Serverless cluster, ACK Edge cluster, or registered cluster. When you create an ACK cluster, you need to configure the cluster information, components, and cloud resources used by ACK.
 *
 * @description ### [](#-openapi-)Generate API request parameters through the ACK console
 * When calling the CreateCluster operation to create a cluster, if the API call fails due to invalid parameter settings, you can generate valid request parameters through the ACK console. Follow these steps:
 * 1.  Log on to the [ACK console](https://csnew.console.aliyun.com). In the left-side navigation pane, click **Clusters**.
 * 2.  On the **Clusters** page, click **Cluster Templates**.
 * 3.  In the Select Cluster Template dialog box, select the type of cluster you want to create and click Create. Then, configure the cluster parameters.
 * 4.  In the **Confirm** step, click **Generate API Request Parameters**.
 *     The API request parameters are displayed in the API Request Parameters dialog box.
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
 * @summary Creates a Container Service for Kubernetes (ACK) cluster. For example, you can create an ACK managed cluster, ACK Serverless cluster, ACK Edge cluster, or registered cluster. When you create an ACK cluster, you need to configure the cluster information, components, and cloud resources used by ACK.
 *
 * @description ### [](#-openapi-)Generate API request parameters through the ACK console
 * When calling the CreateCluster operation to create a cluster, if the API call fails due to invalid parameter settings, you can generate valid request parameters through the ACK console. Follow these steps:
 * 1.  Log on to the [ACK console](https://csnew.console.aliyun.com). In the left-side navigation pane, click **Clusters**.
 * 2.  On the **Clusters** page, click **Cluster Templates**.
 * 3.  In the Select Cluster Template dialog box, select the type of cluster you want to create and click Create. Then, configure the cluster parameters.
 * 4.  In the **Confirm** step, click **Generate API Request Parameters**.
 *     The API request parameters are displayed in the API Request Parameters dialog box.
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
 * @summary Starts a cluster diagnostic.
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
 * @summary Starts a cluster diagnostic.
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
 * @summary Configures cluster inspection.
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
 * @summary Configures cluster inspection.
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
 * @summary Creates a node pool for a Container Service for Kubernetes (ACK) cluster. You can use node pools to facilitate node management. For example, you can schedule, configure, or maintain nodes by node pool, and enable auto scaling for a node pool. We recommend that you use a managed node pool, which can help automate specific O\\\\\\&M tasks for nodes, such as Common Vulnerabilities and Exposures (CVE) patching and node repair. This reduces your O\\\\\\&M workload.
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
 * @summary Creates a node pool for a Container Service for Kubernetes (ACK) cluster. You can use node pools to facilitate node management. For example, you can schedule, configure, or maintain nodes by node pool, and enable auto scaling for a node pool. We recommend that you use a managed node pool, which can help automate specific O\\\\\\&M tasks for nodes, such as Common Vulnerabilities and Exposures (CVE) patching and node repair. This reduces your O\\\\\\&M workload.
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
 * @summary You can call the CreateKubernetesTrigger operation to create a trigger for an application.
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
 * @summary You can call the CreateKubernetesTrigger operation to create a trigger for an application.
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
 * @summary Creates an orchestration template. An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can use orchestration templates to manage resources in Kubernetes clusters and automate resource deployment, such as pods, Services, Deployments, ConfigMaps, and persistent volumes (PVs).
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
 * @summary Creates an orchestration template. An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can use orchestration templates to manage resources in Kubernetes clusters and automate resource deployment, such as pods, Services, Deployments, ConfigMaps, and persistent volumes (PVs).
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
 * @summary Creates a trigger for an application to redeploy the application pods when specific conditions are met.
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
 * @summary Creates a trigger for an application to redeploy the application pods when specific conditions are met.
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
 * @summary Deletes one or more ACK alert contacts.
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
 * @summary Deletes one or more ACK alert contacts.
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
 * @summary Deletes an ACK alert contact group.
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
 * @summary Deletes an ACK alert contact group.
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
 * @summary 查询自愈规则
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
 * @summary 查询自愈规则
 *
 * @return DeleteAutoRepairPolicyResponse
 */
DeleteAutoRepairPolicyResponse Client::deleteAutoRepairPolicy(const string &clusterId, const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAutoRepairPolicyWithOptions(clusterId, policyId, headers, runtime);
}

/**
 * @summary You can call the DeleteCluster operation to delete a cluster and specify whether to delete or retain the relevant cluster resources. Before you delete a cluster, you must manually delete workloads in the cluster, such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, you may fail to delete the cluster.
 *
 * @description Warning:
 * *   Subscription ECS instances and Lingjun nodes in a cluster cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release the resources. For more information, see \\<a href="{0}" target="_blank">Rules for deleting clusters and releasing nodes\\</a>.
 * *   If the SLB instance of the API server uses the subscription billing method, it cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release it.
 * *   By default, virtual private clouds (VPCs), vSwitches, security groups, and RAM roles are retained if they are used by other resources. To avoid unnecessary costs, we recommend that you manually release the resources.
 * *   Elastic container instances created on virtual nodes are automatically released.
 * *   Some resources created together with a cluster are not automatically released when the cluster is deleted. After the cluster is deleted, you are still charged for the resources. Release or retain the resources based on your actual needs. The resources include Simple Log Service projects automatically created by the cluster and dynamically provisioned disks.
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
 * @summary You can call the DeleteCluster operation to delete a cluster and specify whether to delete or retain the relevant cluster resources. Before you delete a cluster, you must manually delete workloads in the cluster, such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, you may fail to delete the cluster.
 *
 * @description Warning:
 * *   Subscription ECS instances and Lingjun nodes in a cluster cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release the resources. For more information, see \\<a href="{0}" target="_blank">Rules for deleting clusters and releasing nodes\\</a>.
 * *   If the SLB instance of the API server uses the subscription billing method, it cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release it.
 * *   By default, virtual private clouds (VPCs), vSwitches, security groups, and RAM roles are retained if they are used by other resources. To avoid unnecessary costs, we recommend that you manually release the resources.
 * *   Elastic container instances created on virtual nodes are automatically released.
 * *   Some resources created together with a cluster are not automatically released when the cluster is deleted. After the cluster is deleted, you are still charged for the resources. Release or retain the resources based on your actual needs. The resources include Simple Log Service projects automatically created by the cluster and dynamically provisioned disks.
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
 * @summary Deletes cluster inspection configurations.
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
 * @summary Deletes cluster inspection configurations.
 *
 * @return DeleteClusterInspectConfigResponse
 */
DeleteClusterInspectConfigResponse Client::deleteClusterInspectConfig(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

/**
 * @summary null
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
 * @summary null
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
 * @summary Removes nodes from a Container Service for Kubernetes (ACK) cluster when they are no longer required through the DeleteClusterNodes interface. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and drain the nodes.
 *
 * @description *   Use this API or the [ACK console](https://cs.console.aliyun.com) for node removal. Do not remove a node by running the `kubectl delete node` command.
 * *   Never directly release or remove ECS instances through the ECS or Auto Scaling console/APIs. Renew subscription ECS instances before they expire. Violations may cause node termination and removal from the ACK console.
 * *   If a node pool has the Expected Nodes parameter configured, the node pool automatically scales other ECS instances to maintain the expected number of nodes.
 * *   When you remove a node, the pods on the node are migrated to other nodes. To prevent service interruptions, remove nodes during off-peak hours. Unexpected risks may arise during node removal. Back up the data in advance.
 * *   ACK drains the node during node removal. Make sure that other nodes in the cluster have sufficient resources to host the evicted pods.
 * *   To ensure the pods on the node you want to remove can be successfully scheduled to other nodes, check whether the node affinity rules and scheduling policies of the pods meet the requirements.
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
 * @summary Removes nodes from a Container Service for Kubernetes (ACK) cluster when they are no longer required through the DeleteClusterNodes interface. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and drain the nodes.
 *
 * @description *   Use this API or the [ACK console](https://cs.console.aliyun.com) for node removal. Do not remove a node by running the `kubectl delete node` command.
 * *   Never directly release or remove ECS instances through the ECS or Auto Scaling console/APIs. Renew subscription ECS instances before they expire. Violations may cause node termination and removal from the ACK console.
 * *   If a node pool has the Expected Nodes parameter configured, the node pool automatically scales other ECS instances to maintain the expected number of nodes.
 * *   When you remove a node, the pods on the node are migrated to other nodes. To prevent service interruptions, remove nodes during off-peak hours. Unexpected risks may arise during node removal. Back up the data in advance.
 * *   ACK drains the node during node removal. Make sure that other nodes in the cluster have sufficient resources to host the evicted pods.
 * *   To ensure the pods on the node you want to remove can be successfully scheduled to other nodes, check whether the node affinity rules and scheduling policies of the pods meet the requirements.
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
 * @summary You can call the DeleteKubernetesTrigger operation to delete an application trigger by trigger ID
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
 * @summary You can call the DeleteKubernetesTrigger operation to delete an application trigger by trigger ID
 *
 * @return DeleteKubernetesTriggerResponse
 */
DeleteKubernetesTriggerResponse Client::deleteKubernetesTrigger(const string &Id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKubernetesTriggerWithOptions(Id, headers, runtime);
}

/**
 * @summary Deletes policy instances in a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Deletes policy instances in a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Deletes the orchestration templates that you no longer need.
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
 * @summary Deletes the orchestration templates that you no longer need.
 *
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(TemplateId, headers, runtime);
}

/**
 * @summary Deletes an application trigger.
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
 * @summary Deletes an application trigger.
 *
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTrigger(const string &clusterId, const string &Id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTriggerWithOptions(clusterId, Id, headers, runtime);
}

/**
 * @summary Deploys a policy in the specified namespaces of a specific Container Service for Kubernetes (ACK) cluster. You can create and deploy a security policy by specifying the policy type, action of the policy such as alerting or denying, and namespaces to which the policy applies.
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
 * @summary Deploys a policy in the specified namespaces of a specific Container Service for Kubernetes (ACK) cluster. You can create and deploy a security policy by specifying the policy type, action of the policy such as alerting or denying, and namespaces to which the policy applies.
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
 * @summary Queries the information about a component based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, cluster version, and component name. The information includes whether the component is managed, the component type, supported custom parameter schema, compatible operating system architecture, and earliest supported cluster version.
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
 * @summary Queries the information about a component based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, cluster version, and component name. The information includes whether the component is managed, the component type, supported custom parameter schema, compatible operating system architecture, and earliest supported cluster version.
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
 * @summary You can call the DescribeAddons operation to query the details about all components that are supported by Container Service for Kubernetes (ACK).
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
 * @summary You can call the DescribeAddons operation to query the details about all components that are supported by Container Service for Kubernetes (ACK).
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
 * @summary 查询自愈规则
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
 * @summary 查询自愈规则
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
 * @summary You can call the DescribeClusterAddonInstance operation to query the information about a cluster component, including the version, status, and configuration of the component.
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
 * @summary You can call the DescribeClusterAddonInstance operation to query the information about a cluster component, including the version, status, and configuration of the component.
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
 * @summary You can call the DescribeClusterAddonMetadata operation to query the metadata of a component version. The metadata includes the component version and available parameters.
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
 * @summary You can call the DescribeClusterAddonMetadata operation to query the metadata of a component version. The metadata includes the component version and available parameters.
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
 * @summary You can call the DescribeClusterAddonUpgradeStatus operation to query the update progress of a cluster component.
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
 * @summary You can call the DescribeClusterAddonUpgradeStatus operation to query the update progress of a cluster component.
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
 * @summary You can call the DescribeClusterAddonsUpgradeStatus operation to query the update progress of a component by component name.
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
 * @summary You can call the DescribeClusterAddonsUpgradeStatus operation to query the update progress of a component by component name.
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
 * @summary You can call the DescribeClusterAddonsVersion operation to query the details about all components in a cluster by cluster ID.
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
 * @summary You can call the DescribeClusterAddonsVersion operation to query the details about all components in a cluster by cluster ID.
 *
 * @return DescribeClusterAddonsVersionResponse
 */
DescribeClusterAddonsVersionResponse Client::describeClusterAddonsVersion(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterAddonsVersionWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Queries the scripts used to add existing nodes to a Container Service for Kubernetes (ACK) cluster. ACK allows you to manually add existing Elastic Compute Service (ECS) instances to an ACK cluster as worker nodes or re-add worker nodes that you remove from the cluster to a node pool.
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
 * @summary Queries the scripts used to add existing nodes to a Container Service for Kubernetes (ACK) cluster. ACK allows you to manually add existing Elastic Compute Service (ECS) instances to an ACK cluster as worker nodes or re-add worker nodes that you remove from the cluster to a node pool.
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
 * @summary You can call the DescribeClusterDetail operation to query the details of a Container Service for Kubernetes (ACK) cluster by cluster ID.
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
 * @summary You can call the DescribeClusterDetail operation to query the details of a Container Service for Kubernetes (ACK) cluster by cluster ID.
 *
 * @return DescribeClusterDetailResponse
 */
DescribeClusterDetailResponse Client::describeClusterDetail(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterDetailWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Queries events and event details in a Container Service for Kubernetes (ACK) cluster, including the severity level, status, and start time of each event. Events are generated when clusters created, modified, and updated, node pools are created and scaled out, and components are installed.
 *
 * @param request DescribeClusterEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterEventsResponse
 */
DescribeClusterEventsResponse Client::describeClusterEventsWithOptions(const string &ClusterId, const DescribeClusterEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary Queries events and event details in a Container Service for Kubernetes (ACK) cluster, including the severity level, status, and start time of each event. Events are generated when clusters created, modified, and updated, node pools are created and scaled out, and components are installed.
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
 * @summary Queries the cluster log to help analyze cluster issues and locate the cause.
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
 * @summary Queries the cluster log to help analyze cluster issues and locate the cause.
 *
 * @return DescribeClusterLogsResponse
 */
DescribeClusterLogsResponse Client::describeClusterLogs(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterLogsWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary You can call the DescribeClusterNodePoolDetail.html operation to query the details about a node pool in a cluster by node pool ID.
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
 * @summary You can call the DescribeClusterNodePoolDetail.html operation to query the details about a node pool in a cluster by node pool ID.
 *
 * @return DescribeClusterNodePoolDetailResponse
 */
DescribeClusterNodePoolDetailResponse Client::describeClusterNodePoolDetail(const string &ClusterId, const string &NodepoolId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeClusterNodePoolDetailWithOptions(ClusterId, NodepoolId, headers, runtime);
}

/**
 * @summary Queries the information about all node pools in a cluster.
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
 * @summary Queries the information about all node pools in a cluster.
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
 * @summary null
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
 * @summary null
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
 * @summary You can call the DescribeClusterResources operation to query all resources in a cluster by cluster ID.
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
 * @summary You can call the DescribeClusterResources operation to query all resources in a cluster by cluster ID.
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
 * @summary Queries tasks in a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeClusterTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterTasksResponse
 */
DescribeClusterTasksResponse Client::describeClusterTasksWithOptions(const string &clusterId, const DescribeClusterTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Queries tasks in a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Kubeconfig files store identity and authentication information that is used by clients to access Container Service for Kubernetes (ACK) clusters. To use a kubectl client to manage an ACK cluster, you need to use the corresponding kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
 *
 * @description *   The default validity period of a kubeconfig file is 3 years. 180 days before a kubeconfig file expires, you can renew it in the Container Service for Kubernetes (ACK) console or by calling API operations. After a kubeconfig file is renewed, the kubeconfig file is valid for 3 years. The previous kubeconfig file still remains valid until expiration. We recommend that you renew your kubeconfig file at the earliest opportunity.
 * *   We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
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
 * @summary Kubeconfig files store identity and authentication information that is used by clients to access Container Service for Kubernetes (ACK) clusters. To use a kubectl client to manage an ACK cluster, you need to use the corresponding kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
 *
 * @description *   The default validity period of a kubeconfig file is 3 years. 180 days before a kubeconfig file expires, you can renew it in the Container Service for Kubernetes (ACK) console or by calling API operations. After a kubeconfig file is renewed, the kubeconfig file is valid for 3 years. The previous kubeconfig file still remains valid until expiration. We recommend that you renew your kubeconfig file at the earliest opportunity.
 * *   We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
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
 * @summary 获取集群kubeconfig接口
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
 * @summary 获取集群kubeconfig接口
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
 * @summary Queries the security vulnerability details of a cluster by cluster ID. The details include vulnerability name, vulnerability type, and vulnerability severity. We recommend that you scan your cluster on a regular basis to ensure cluster security.
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
 * @summary Queries the security vulnerability details of a cluster by cluster ID. The details include vulnerability name, vulnerability type, and vulnerability severity. We recommend that you scan your cluster on a regular basis to ensure cluster security.
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
 * @summary Queries all the clusters that belong to the current Alibaba Cloud account, including Kubernetes clusters and Swarm clusters.
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
 * @summary Queries all the clusters that belong to the current Alibaba Cloud account, including Kubernetes clusters and Swarm clusters.
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
 * @summary Queries the details about Container Service for Kubernetes (ACK) clusters of specified types or specifications within an account.
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
 * @summary Queries the details about Container Service for Kubernetes (ACK) clusters of specified types or specifications within an account.
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
 * @summary Queries the detailed information about a type of events, including the severity level, status, and time. Events are generated when clusters are created, modified, and updated, node pools are created and scaled out, and components are installed.
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
 * @summary Queries the detailed information about a type of events, including the severity level, status, and time. Events are generated when clusters are created, modified, and updated, node pools are created and scaled out, and components are installed.
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
 * @summary Queries the proxy configurations of a registered cluster by cluster ID.
 *
 * @description For more information, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
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
 * @summary Queries the proxy configurations of a registered cluster by cluster ID.
 *
 * @description For more information, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
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
 * @summary Queries the detailed information about Kubernetes versions, including the version number, release date, expiration date, compatible OSs, and runtime.
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
 * @summary Queries the detailed information about Kubernetes versions, including the version number, release date, expiration date, compatible OSs, and runtime.
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
 * @summary Queries the vulnerability information of a node pool, such as vulnerability names and severity levels, by specifying the ID of the node pool. We recommend that you periodically scan node pools for vulnerabilities to enhance cluster security.
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
 * @summary Queries the vulnerability information of a node pool, such as vulnerability names and severity levels, by specifying the ID of the node pool. We recommend that you periodically scan node pools for vulnerabilities to enhance cluster security.
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
 * @summary Queries a list of security policies. Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment.
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
 * @summary Queries a list of security policies. Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment.
 *
 * @return DescribePoliciesResponse
 */
DescribePoliciesResponse Client::describePolicies() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePoliciesWithOptions(headers, runtime);
}

/**
 * @summary Queries the detailed information about a policy. The information includes the content, action, and severity level of the policy. Container Service for Kubernetes (ACK) provides the following types of predefined security policies: Compliance, Infra, K8s-general, and pod security policy (PSP). These policies ensure that containers are running in the production environment in a secure manner.
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
 * @summary Queries the detailed information about a policy. The information includes the content, action, and severity level of the policy. Container Service for Kubernetes (ACK) provides the following types of predefined security policies: Compliance, Infra, K8s-general, and pod security policy (PSP). These policies ensure that containers are running in the production environment in a secure manner.
 *
 * @return DescribePolicyDetailsResponse
 */
DescribePolicyDetailsResponse Client::describePolicyDetails(const string &policyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyDetailsWithOptions(policyName, headers, runtime);
}

/**
 * @summary Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment. You can call the DescribePolicyGovernanceInCluster operation to query the details of policies for an ACK cluster. For example, you can query the number of policies that are enabled per severity level, the audit logs of policies, and the blocking and alerting information.
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
 * @summary Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment. You can call the DescribePolicyGovernanceInCluster operation to query the details of policies for an ACK cluster. For example, you can query the number of policies that are enabled per severity level, the audit logs of policies, and the blocking and alerting information.
 *
 * @return DescribePolicyGovernanceInClusterResponse
 */
DescribePolicyGovernanceInClusterResponse Client::describePolicyGovernanceInCluster(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyGovernanceInClusterWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Queries the detailed information about policy instances of the specified type in a Container Service for Kubernetes (ACK) cluster, such as the policy description and severity level. You can choose a type of security policy for an ACK cluster, specify the action and applicable scope of the policy, and then create and deploy a policy instance.
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
 * @summary Queries the detailed information about policy instances of the specified type in a Container Service for Kubernetes (ACK) cluster, such as the policy description and severity level. You can choose a type of security policy for an ACK cluster, specify the action and applicable scope of the policy, and then create and deploy a policy instance.
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
 * @summary Queries the deployment of policy instances in the current Container Service for Kubernetes (ACK) cluster, including the number of policy instances of each type and the number of policy types of each severity level.
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
 * @summary Queries the deployment of policy instances in the current Container Service for Kubernetes (ACK) cluster, including the number of policy instances of each type and the number of policy types of each severity level.
 *
 * @return DescribePolicyInstancesStatusResponse
 */
DescribePolicyInstancesStatusResponse Client::describePolicyInstancesStatus(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePolicyInstancesStatusWithOptions(clusterId, headers, runtime);
}

/**
 * @summary 查询地域列表
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
 * @summary 查询地域列表
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
 * @summary Queries whether the deletion protection feature is enabled for the specified resources in the cluster. The resources that you can query include namespaces and Services.
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
 * @summary Queries whether the deletion protection feature is enabled for the specified resources in the cluster. The resources that you can query include namespaces and Services.
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
 * @summary Queries or issues the kubeconfig credentials of a Resource Access Management (RAM) user or RAM role of the account. If you are the permission manager of a Container Service for Kubernetes (ACK) cluster, you can issue the kubeconfig credentials to a specific RAM user or RAM role of the account by using the Alibaba Cloud account. The kubeconfig credentials, which are used to connect to the ACK cluster, contain the identity information about the RAM user or RAM role.
 *
 * @description You can call this operation only by using an Alibaba Cloud account.
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
 * @summary Queries or issues the kubeconfig credentials of a Resource Access Management (RAM) user or RAM role of the account. If you are the permission manager of a Container Service for Kubernetes (ACK) cluster, you can issue the kubeconfig credentials to a specific RAM user or RAM role of the account by using the Alibaba Cloud account. The kubeconfig credentials, which are used to connect to the ACK cluster, contain the identity information about the RAM user or RAM role.
 *
 * @description You can call this operation only by using an Alibaba Cloud account.
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
 * @summary Queries detailed information about a task, such as the task type, status, and progress.
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
 * @summary Queries detailed information about a task, such as the task type, status, and progress.
 *
 * @return DescribeTaskInfoResponse
 */
DescribeTaskInfoResponse Client::describeTaskInfo(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTaskInfoWithOptions(taskId, headers, runtime);
}

/**
 * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
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
 * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
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
 * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
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
 * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
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
 * @summary Queries triggers that match specific conditions.
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
 * @summary Queries triggers that match specific conditions.
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
 * @summary You can use Kubernetes namespaces to limit users from accessing resources in a Container Service for Kubernetes (ACK) cluster. Users that are granted Role-Based Access Control (RBAC) permissions only on one namespace cannot access resources in other namespaces. Queries the RBAC permissions that are granted to the current Resource Access Management (RAM) user or RAM role on an ACK cluster.
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
 * @summary You can use Kubernetes namespaces to limit users from accessing resources in a Container Service for Kubernetes (ACK) cluster. Users that are granted Role-Based Access Control (RBAC) permissions only on one namespace cannot access resources in other namespaces. Queries the RBAC permissions that are granted to the current Resource Access Management (RAM) user or RAM role on an ACK cluster.
 *
 * @return DescribeUserClusterNamespacesResponse
 */
DescribeUserClusterNamespacesResponse Client::describeUserClusterNamespaces(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserClusterNamespacesWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary In an Container Service for Kubernetes (ACK) cluster, you can create and specify different Resource Access Management (RAM) users or roles to have different access permissions. This ensures access control and resource isolation. You can call the DescribeUserPermission operation to query the permissions that are granted to a RAM user or RAM role on ACK clusters, including the resources that are allowed to access, the scope of the permissions, the predefined role, and the permission source.
 *
 * @description **Precautions**:
 * *   If you call this operation as a Resource Access Management (RAM) user or by assuming a RAM role, only the permissions granted on the clusters on which the current account has the role-based access control (RBAC) administrator permissions are returned. If you want to query the permissions on all clusters, you must use an account that has the RBAC administrator permissions on all clusters.
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
 * @summary In an Container Service for Kubernetes (ACK) cluster, you can create and specify different Resource Access Management (RAM) users or roles to have different access permissions. This ensures access control and resource isolation. You can call the DescribeUserPermission operation to query the permissions that are granted to a RAM user or RAM role on ACK clusters, including the resources that are allowed to access, the scope of the permissions, the predefined role, and the permission source.
 *
 * @description **Precautions**:
 * *   If you call this operation as a Resource Access Management (RAM) user or by assuming a RAM role, only the permissions granted on the clusters on which the current account has the role-based access control (RBAC) administrator permissions are returned. If you want to query the permissions on all clusters, you must use an account that has the RBAC administrator permissions on all clusters.
 *
 * @return DescribeUserPermissionResponse
 */
DescribeUserPermissionResponse Client::describeUserPermission(const string &uid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserPermissionWithOptions(uid, headers, runtime);
}

/**
 * @summary Queries quotas related to Container Service for Kubernetes (ACK) clusters, node pools, and nodes. To increase a quota, submit an application in the Quota Center console.
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
 * @summary Queries quotas related to Container Service for Kubernetes (ACK) clusters, node pools, and nodes. To increase a quota, submit an application in the Quota Center console.
 *
 * @return DescribeUserQuotaResponse
 */
DescribeUserQuotaResponse Client::describeUserQuota() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserQuotaWithOptions(headers, runtime);
}

/**
 * @summary Patches node vulnerabilities in a node pool to enhance node security. Cloud Security provided by Alibaba Cloud periodically scans Elastic Compute Service (ECS) instances for vulnerabilities and provides suggestions on how to patch the detected vulnerabilities. Vulnerability patching may require node restarts. Make sure that your cluster has sufficient idle nodes for node draining.
 *
 * @description 1.  The Common Vulnerabilities and Exposures (CVE) patching feature is developed based on Security Center. To use this feature, you must purchase the Security Center Ultimate Edition that supports Container Service for Kubernetes (ACK).
 * 2.  ACK may need to restart nodes to patch certain vulnerabilities. ACK drains a node before the node restarts. Make sure that the ACK cluster has sufficient idle nodes to host the pods evicted from the trained nodes. For example, you can scale out a node pool before you patch vulnerabilities for the nodes in the node pool.
 * 3.  Security Center ensures the compatibility of CVE patches. We recommend that you check the compatibility of a CVE patch with your application before you install the patch. You can pause or cancel a CVE patching task anytime.
 * 4.  CVE patching is a progressive task that consists of multiple batches. After you pause or cancel a CVE patching task, ACK continues to process the dispatched batches. Only the batches that have not been dispatched are paused or canceled.
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
 * @summary Patches node vulnerabilities in a node pool to enhance node security. Cloud Security provided by Alibaba Cloud periodically scans Elastic Compute Service (ECS) instances for vulnerabilities and provides suggestions on how to patch the detected vulnerabilities. Vulnerability patching may require node restarts. Make sure that your cluster has sufficient idle nodes for node draining.
 *
 * @description 1.  The Common Vulnerabilities and Exposures (CVE) patching feature is developed based on Security Center. To use this feature, you must purchase the Security Center Ultimate Edition that supports Container Service for Kubernetes (ACK).
 * 2.  ACK may need to restart nodes to patch certain vulnerabilities. ACK drains a node before the node restarts. Make sure that the ACK cluster has sufficient idle nodes to host the pods evicted from the trained nodes. For example, you can scale out a node pool before you patch vulnerabilities for the nodes in the node pool.
 * 3.  Security Center ensures the compatibility of CVE patches. We recommend that you check the compatibility of a CVE patch with your application before you install the patch. You can pause or cancel a CVE patching task anytime.
 * 4.  CVE patching is a progressive task that consists of multiple batches. After you pause or cancel a CVE patching task, ACK continues to process the dispatched batches. Only the batches that have not been dispatched are paused or canceled.
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
 * @summary You can call the GetClusterAddonInstance operation to query the information of a component instance in a cluster, including the version, configurations, and log status of the component instance.
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
 * @summary You can call the GetClusterAddonInstance operation to query the information of a component instance in a cluster, including the version, configurations, and log status of the component instance.
 *
 * @return GetClusterAddonInstanceResponse
 */
GetClusterAddonInstanceResponse Client::getClusterAddonInstance(const string &clusterId, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterAddonInstanceWithOptions(clusterId, instanceName, headers, runtime);
}

/**
 * @summary You can call the GetClusterAuditProject operation to check whether the cluster has API Server auditing enabled and the corresponding Simple Log Service project that stores API Server audit logs.
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
 * @summary You can call the GetClusterAuditProject operation to check whether the cluster has API Server auditing enabled and the corresponding Simple Log Service project that stores API Server audit logs.
 *
 * @return GetClusterAuditProjectResponse
 */
GetClusterAuditProjectResponse Client::getClusterAuditProject(const string &clusterid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterAuditProjectWithOptions(clusterid, headers, runtime);
}

/**
 * @summary Queries a cluster check task by cluster ID and task ID. You can view the status, check items, creation time, and end time of the task. Container Intelligence Service (CIS) provides a variety of Kubernetes cluster check features, including cluster update check, cluster migration check, component installation check, component update check, and node pool check.
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
 * @summary Queries a cluster check task by cluster ID and task ID. You can view the status, check items, creation time, and end time of the task. Container Intelligence Service (CIS) provides a variety of Kubernetes cluster check features, including cluster update check, cluster migration check, component installation check, component update check, and node pool check.
 *
 * @return GetClusterCheckResponse
 */
GetClusterCheckResponse Client::getClusterCheck(const string &clusterId, const string &checkId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterCheckWithOptions(clusterId, checkId, headers, runtime);
}

/**
 * @summary Queries cluster diagnostic items.
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
 * @summary Queries cluster diagnostic items.
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
 * @summary Queries cluster diagnostic results.
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
 * @summary Queries cluster diagnostic results.
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
 * @summary Retrieves cluster inspection configuration.
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
 * @summary Retrieves cluster inspection configuration.
 *
 * @return GetClusterInspectConfigResponse
 */
GetClusterInspectConfigResponse Client::getClusterInspectConfig(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Obtain the details of the inspection report for the cluster
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
 * @summary Obtain the details of the inspection report for the cluster
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
 * @summary You can call the GetKubernetesTrigger operationto query the triggers of an application by application name.
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
 * @summary You can call the GetKubernetesTrigger operationto query the triggers of an application by application name.
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
 * @summary You can call the GetUpgradeStatus operation to query the update progress of a cluster by cluster ID.
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
 * @summary You can call the GetUpgradeStatus operation to query the update progress of a cluster by cluster ID.
 *
 * @return GetUpgradeStatusResponse
 */
GetUpgradeStatusResponse Client::getUpgradeStatus(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUpgradeStatusWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
 *
 * @description *   If you use a Resource Access Management (RAM) account to call this operation, make sure it has permissions to modify cluster authorization information for other RAM users or RAM roles. Otherwise, the `StatusForbidden` or `ForbiddenGrantPermissions` error code is returned. For more information, see [Use a RAM user to grant RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
 * *   This operation overwrites all existing cluster permissions for the target RAM user or RAM role. You must specify all the permissions you want to grant to the RAM user or RAM role in the request.
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
 * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
 *
 * @description *   If you use a Resource Access Management (RAM) account to call this operation, make sure it has permissions to modify cluster authorization information for other RAM users or RAM roles. Otherwise, the `StatusForbidden` or `ForbiddenGrantPermissions` error code is returned. For more information, see [Use a RAM user to grant RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
 * *   This operation overwrites all existing cluster permissions for the target RAM user or RAM role. You must specify all the permissions you want to grant to the RAM user or RAM role in the request.
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
 * @summary 为了增强Kubernetes能力，ACK集群支持了多种组件，例如托管的核心组件，应用、日志和监控、网络、存储、安全组件等。您可以调用InstallClusterAddons接口，通过组件名称和版本安装组件。
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
 * @summary 为了增强Kubernetes能力，ACK集群支持了多种组件，例如托管的核心组件，应用、日志和监控、网络、存储、安全组件等。您可以调用InstallClusterAddons接口，通过组件名称和版本安装组件。
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
 * @summary 为ACK集群节点池安装节点组件
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
 * @summary 为ACK集群节点池安装节点组件
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
 * @summary Queries the available components based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, and cluster version and queries the detailed information about a component. The information includes whether the component is managed, the supported custom parameter schema, and compatible operating system architecture.
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
 * @summary Queries the available components based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, and cluster version and queries the detailed information about a component. The information includes whether the component is managed, the supported custom parameter schema, and compatible operating system architecture.
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
 * @summary 查询自愈规则
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
 * @summary 查询自愈规则
 *
 * @return ListAutoRepairPoliciesResponse
 */
ListAutoRepairPoliciesResponse Client::listAutoRepairPolicies(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAutoRepairPoliciesWithOptions(clusterId, headers, runtime);
}

/**
 * @summary 获取集群组件实例的资源列表
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
 * @summary 获取集群组件实例的资源列表
 *
 * @return ListClusterAddonInstanceResourcesResponse
 */
ListClusterAddonInstanceResourcesResponse Client::listClusterAddonInstanceResources(const string &clusterId, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterAddonInstanceResourcesWithOptions(clusterId, instanceName, headers, runtime);
}

/**
 * @summary Queries the component instances that are running in the specified cluster and the information about the component instances. The information includes the component version and status.
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
 * @summary Queries the component instances that are running in the specified cluster and the information about the component instances. The information includes the component version and status.
 *
 * @return ListClusterAddonInstancesResponse
 */
ListClusterAddonInstancesResponse Client::listClusterAddonInstances(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterAddonInstancesWithOptions(clusterId, headers, runtime);
}

/**
 * @summary You can call the ListClusterChecks operation to query all the cluster check results of a cluster.
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
 * @summary You can call the ListClusterChecks operation to query all the cluster check results of a cluster.
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
 * @summary Obtains the details of the cluster inspection report.
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
 * @summary Obtains the details of the cluster inspection report.
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
 * @summary Queries the kubeconfig files that are issued to users for the current cluster and the status of the kubeconfig files.
 *
 * @description > - To call this operation, make sure that you have ram:ListUsers and ram:ListRoles permissions.
 * > - To call this operation, make sure that you have the AliyunCSFullAccess permissions.
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
 * @summary Queries the kubeconfig files that are issued to users for the current cluster and the status of the kubeconfig files.
 *
 * @description > - To call this operation, make sure that you have ram:ListUsers and ram:ListRoles permissions.
 * > - To call this operation, make sure that you have the AliyunCSFullAccess permissions.
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
 * @summary Queries the automated maintenance schedules of a cluster.
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
 * @summary Queries the automated maintenance schedules of a cluster.
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
 * @summary 获取单个地域的自动运维执行计划列表
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
 * @summary 获取单个地域的自动运维执行计划列表
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
 * @summary Queries resource labels and the detailed information, such as the key-value pairs of the labels and the clusters to which the labels are added. You can use labels to classify and manage Container Service for Kubernetes (ACK) clusters in order to meet monitoring, cost analysis, and tenant isolation requirements.
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
 * @summary Queries resource labels and the detailed information, such as the key-value pairs of the labels and the clusters to which the labels are added. You can use labels to classify and manage Container Service for Kubernetes (ACK) clusters in order to meet monitoring, cost analysis, and tenant isolation requirements.
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
 * @summary You can call the ListUserKubeConfigStates operation to query the status of the kubeconfig files of all clusters managed by the current user.
 *
 * @description >  To call this operation, make sure that you have the AliyunCSFullAccess permissions.
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
 * @summary You can call the ListUserKubeConfigStates operation to query the status of the kubeconfig files of all clusters managed by the current user.
 *
 * @description >  To call this operation, make sure that you have the AliyunCSFullAccess permissions.
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
 * @summary The Container Service for Kubernetes (ACK) managed Pro cluster type is developed based on the ACK managed Basic cluster type. It inherits all benefits of ACK managed clusters, such as fully-managed control planes and control plane high availability. It further enhances reliability, security, scheduling capabilities, and offers service level agreement (SLA)-backed guarantees, making it ideal for enterprise customers with large-scale production workloads requiring high stability and security. You can call the MigrateCluster operation to migrate an ACK managed Basic cluster to an ACK managed Pro cluster.
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
 * @summary The Container Service for Kubernetes (ACK) managed Pro cluster type is developed based on the ACK managed Basic cluster type. It inherits all benefits of ACK managed clusters, such as fully-managed control planes and control plane high availability. It further enhances reliability, security, scheduling capabilities, and offers service level agreement (SLA)-backed guarantees, making it ideal for enterprise customers with large-scale production workloads requiring high stability and security. You can call the MigrateCluster operation to migrate an ACK managed Basic cluster to an ACK managed Pro cluster.
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
 * @summary 查询自愈规则
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
 * @summary 查询自愈规则
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
 * @summary You can call the ModifyCluster operation to modify the cluster configurations by cluster ID.
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
 * @summary You can call the ModifyCluster operation to modify the cluster configurations by cluster ID.
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
 * @summary Modifies the configuration of a cluster component. This operation may affect your businesses. We recommend that you assess the impact, back up data, and perform the operation during off-peak hours.
 *
 * @description You can call this API operation to modify the component parameters of an ACK Basic cluster or the control plane parameters of an ACK Pro cluster:
 * *   To view the component parameters of an ACK Basic cluster, call the DescribeClusterAddonMetadata API operation. For more information, see [Query the metadata of a cluster component](https://help.aliyun.com/document_detail/2667944.html).
 * *   To view the control plane parameters of an ACK Pro cluster, see [Customize the control plane parameters of an ACK Pro cluster](https://help.aliyun.com/document_detail/199588.html).
 * After you call this operation, the component may be redeployed and restarted. We recommend that you assess the impact before you call this operation.
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
 * @summary Modifies the configuration of a cluster component. This operation may affect your businesses. We recommend that you assess the impact, back up data, and perform the operation during off-peak hours.
 *
 * @description You can call this API operation to modify the component parameters of an ACK Basic cluster or the control plane parameters of an ACK Pro cluster:
 * *   To view the component parameters of an ACK Basic cluster, call the DescribeClusterAddonMetadata API operation. For more information, see [Query the metadata of a cluster component](https://help.aliyun.com/document_detail/2667944.html).
 * *   To view the control plane parameters of an ACK Pro cluster, see [Customize the control plane parameters of an ACK Pro cluster](https://help.aliyun.com/document_detail/199588.html).
 * After you call this operation, the component may be redeployed and restarted. We recommend that you assess the impact before you call this operation.
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
 * @summary You can call the ModifyClusterNodePool operation to modify the configuration of a node pool with the specified node pool ID.
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
 * @summary You can call the ModifyClusterNodePool operation to modify the configuration of a node pool with the specified node pool ID.
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
 * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\\\\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify the labels of a cluster.
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
 * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\\\\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify the labels of a cluster.
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
 * @summary Modifies the configuration of a node pool, such as the kubelet configuration and node rolling update configuration. After you modify the node pool configuration, nodes are batch updated and the kubelet on each node is restarted. This may adversely affect the nodes and workloads. We recommend that you perform this operation during off-peak hours.
 *
 * @description >  Container Service for Kubernetes (ACK) allows you to modify the kubelet configuration of nodes in a node pool. After you modify the kubelet configuration, the new configuration immediately takes effect on existing nodes in the node pool and is automatically applied to newly added nodes.
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
 * @summary Modifies the configuration of a node pool, such as the kubelet configuration and node rolling update configuration. After you modify the node pool configuration, nodes are batch updated and the kubelet on each node is restarted. This may adversely affect the nodes and workloads. We recommend that you perform this operation during off-peak hours.
 *
 * @description >  Container Service for Kubernetes (ACK) allows you to modify the kubelet configuration of nodes in a node pool. After you modify the kubelet configuration, the new configuration immediately takes effect on existing nodes in the node pool and is automatically applied to newly added nodes.
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
 * @summary Updates a policy in a specific Container Service for Kubernetes (ACK) cluster. You can modify the action of the policy such as alerting or denying and namespaces to which the policy applies.
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
 * @summary Updates a policy in a specific Container Service for Kubernetes (ACK) cluster. You can modify the action of the policy such as alerting or denying and namespaces to which the policy applies.
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
 * @summary When using Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
 *
 * @description *   You can activate ACK by using Alibaba Cloud accounts.
 * *   To activate ACK by using RAM users, you need to grant the AdministratorAccess permission to the RAM users.
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
 * @summary When using Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
 *
 * @description *   You can activate ACK by using Alibaba Cloud accounts.
 * *   To activate ACK by using RAM users, you need to grant the AdministratorAccess permission to the RAM users.
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
 * @summary You can call the PauseClusterUpgrade operation to pause the update of a Container Service for Kubernetes (ACK) cluster.
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
 * @summary You can call the PauseClusterUpgrade operation to pause the update of a Container Service for Kubernetes (ACK) cluster.
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
 * @summary You can call the PauseComponentUpgrade operation to pause the update of a component.
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
 * @summary You can call the PauseComponentUpgrade operation to pause the update of a component.
 *
 * @return PauseComponentUpgradeResponse
 */
PauseComponentUpgradeResponse Client::pauseComponentUpgrade(const string &clusterid, const string &componentid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

/**
 * @summary Pauses an on-going task.
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
 * @summary Pauses an on-going task.
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
 * @summary You can call the RemoveClusterNodes operation to remove nodes from a Container Service for Kubernetes (ACK) cluster.
 *
 * @description ****
 * *   When you remove a node, the pods that run on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
 * *   Unknown errors may occur when you remove nodes. Before you remove nodes, back up the data on the nodes.
 * *   Nodes remain in the Unschedulable state when they are being removed.
 * *   You can remove only worker nodes. You cannot remove master nodes.
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
 * @summary You can call the RemoveClusterNodes operation to remove nodes from a Container Service for Kubernetes (ACK) cluster.
 *
 * @description ****
 * *   When you remove a node, the pods that run on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
 * *   Unknown errors may occur when you remove nodes. Before you remove nodes, back up the data on the nodes.
 * *   Nodes remain in the Unschedulable state when they are being removed.
 * *   You can remove only worker nodes. You cannot remove master nodes.
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
 * @summary Removes nodes from a node pool.
 *
 * @description *   When you remove a node, the pods on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
 * *   The operation may have unexpected risks. Back up the data before you perform this operation.
 * *   Nodes remain in the Unschedulable state when they are being removed.
 * *   The system removes only worker nodes. It does not remove master nodes.
 * *   Even if you set the `release_node` parameter to `true`, subscription nodes are not released. You must release the subscription nodes in the [ECS console](https://ecs.console.aliyun.com/) after you remove the nodes.
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
 * @summary Removes nodes from a node pool.
 *
 * @description *   When you remove a node, the pods on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
 * *   The operation may have unexpected risks. Back up the data before you perform this operation.
 * *   Nodes remain in the Unschedulable state when they are being removed.
 * *   The system removes only worker nodes. It does not remove master nodes.
 * *   Even if you set the `release_node` parameter to `true`, subscription nodes are not released. You must release the subscription nodes in the [ECS console](https://ecs.console.aliyun.com/) after you remove the nodes.
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
 * @summary Repairs a node pool.
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
 * @summary Repairs a node pool.
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
 * @summary You can call the ResumeComponentUpgrade operation to resume the update of a component.
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
 * @summary You can call the ResumeComponentUpgrade operation to resume the update of a component.
 *
 * @return ResumeComponentUpgradeResponse
 */
ResumeComponentUpgradeResponse Client::resumeComponentUpgrade(const string &clusterid, const string &componentid) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

/**
 * @summary Resumes a task.
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
 * @summary Resumes a task.
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
 * @summary You can call the ResumeUpgradeCluster operation to resume the update of a cluster by cluster ID.
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
 * @summary You can call the ResumeUpgradeCluster operation to resume the update of a cluster by cluster ID.
 *
 * @return ResumeUpgradeClusterResponse
 */
ResumeUpgradeClusterResponse Client::resumeUpgradeCluster(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeUpgradeClusterWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary You can call the RevokeK8sClusterKubeConfig operation to revoke the kubeconfig file of a cluster that belongs to the current Alibaba Cloud account or RAM user. After the kubeconfig file is revoked, the cluster generates a new kubeconfig file, and the original kubeconfig file becomes invalid.
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
 * @summary You can call the RevokeK8sClusterKubeConfig operation to revoke the kubeconfig file of a cluster that belongs to the current Alibaba Cloud account or RAM user. After the kubeconfig file is revoked, the cluster generates a new kubeconfig file, and the original kubeconfig file becomes invalid.
 *
 * @return RevokeK8sClusterKubeConfigResponse
 */
RevokeK8sClusterKubeConfigResponse Client::revokeK8sClusterKubeConfig(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeK8sClusterKubeConfigWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Container Intelligence Service (CIS) provides a variety of cluster check capabilities to allow you to perform cluster update check, cluster migration check, component installation check, component update check, and node pool check. A precheck is automatically triggered before an update, migration, or installation is performed. You can perform changes only if the cluster passes the precheck. You can also manually call the RunClusterCheck operation to initiate cluster checks. We recommend that you periodically check and maintain your cluster to mitigate potential risks.
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
 * @summary Container Intelligence Service (CIS) provides a variety of cluster check capabilities to allow you to perform cluster update check, cluster migration check, component installation check, component update check, and node pool check. A precheck is automatically triggered before an update, migration, or installation is performed. You can perform changes only if the cluster passes the precheck. You can also manually call the RunClusterCheck operation to initiate cluster checks. We recommend that you periodically check and maintain your cluster to mitigate potential risks.
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
 * @summary Triggers a cluster inspection and generates a report.
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
 * @summary Triggers a cluster inspection and generates a report.
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
 * @summary Scales out a node pool.
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
 * @summary Scales out a node pool.
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
 * @summary You can call the ScaleOutCluster operation to scale out a cluster by cluster ID.
 *
 * @description **
 * ****The ScaleOutCluster API operation is phased out. You must call the node pool-related API operations to manage nodes. If you want to add worker nodes to a Container Service for Kubernetes (ACK) cluster, call the ScaleClusterNodePool API operation. For more information, see [ScaleClusterNodePool](https://help.aliyun.com/document_detail/184928.html).
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
 * @summary You can call the ScaleOutCluster operation to scale out a cluster by cluster ID.
 *
 * @description **
 * ****The ScaleOutCluster API operation is phased out. You must call the node pool-related API operations to manage nodes. If you want to add worker nodes to a Container Service for Kubernetes (ACK) cluster, call the ScaleClusterNodePool API operation. For more information, see [ScaleClusterNodePool](https://help.aliyun.com/document_detail/184928.html).
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
 * @summary Scans for vulnerabilities in a Container Service for Kubernetes (ACK) cluster, including workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows vulnerabilities. We recommend that you scan your cluster on a regular basis to ensure cluster security.
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
 * @summary Scans for vulnerabilities in a Container Service for Kubernetes (ACK) cluster, including workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows vulnerabilities. We recommend that you scan your cluster on a regular basis to ensure cluster security.
 *
 * @return ScanClusterVulsResponse
 */
ScanClusterVulsResponse Client::scanClusterVuls(const string &clusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scanClusterVulsWithOptions(clusterId, headers, runtime);
}

/**
 * @summary Activates the specified alert rule(s).
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
 * @summary Activates the specified alert rule(s).
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
 * @summary You can call the StopAlert operation to disable an alert rule or an alert rule set in the alert center of Container Service for Kubernetes (ACK).
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
 * @summary You can call the StopAlert operation to disable an alert rule or an alert rule set in the alert center of Container Service for Kubernetes (ACK).
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
 * @summary Synchronizes the information about a node pool, including the metadata and node information of the node pool.
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
 * @summary Synchronizes the information about a node pool, including the metadata and node information of the node pool.
 *
 * @return SyncClusterNodePoolResponse
 */
SyncClusterNodePoolResponse Client::syncClusterNodePool(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncClusterNodePoolWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the TagResources operation to add labels to a cluster.
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
 * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the TagResources operation to add labels to a cluster.
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
 * @summary Uninstalls components that you no longer need from a cluster. You must specify the name of the components and specify whether to release associated Alibaba Cloud resources from the cluster.
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
 * @summary Uninstalls components that you no longer need from a cluster. You must specify the name of the components and specify whether to release associated Alibaba Cloud resources from the cluster.
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
 * @summary If you no longer need the labels (key-value pairs) of a cluster, you can call the UntagResources operation to delete the labels.
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
 * @summary If you no longer need the labels (key-value pairs) of a cluster, you can call the UntagResources operation to delete the labels.
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
 * @summary You can call the UpdateClusterAuditLogConfig operation to enable or disable the audit log feature in a Container Service for Kubernetes (ACK) cluster and update the audit log configuration. This operation also allows you to record requests to the Kubernetes API and the responses, which can be used to trace cluster operation history and troubleshoot cluster issues.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and pricing of [Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
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
 * @summary You can call the UpdateClusterAuditLogConfig operation to enable or disable the audit log feature in a Container Service for Kubernetes (ACK) cluster and update the audit log configuration. This operation also allows you to record requests to the Kubernetes API and the responses, which can be used to trace cluster operation history and troubleshoot cluster issues.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and pricing of [Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
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
 * @summary Modifies cluster inspection configurations.
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
 * @summary Modifies cluster inspection configurations.
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
 * @summary You can call the UpdateContactGroupForAlert operation to specify a contact group for an alert rule in an ACK cluster.
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
 * @summary You can call the UpdateContactGroupForAlert operation to specify a contact group for an alert rule in an ACK cluster.
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
 * @summary Modifies the log configurations of control plane components. The configurations include the log retention period and components whose logs that you want to collect. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube-apiserver, kube-scheduler, Kubernetes controller manager, and cloud controller manager (CCM).
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
 * @summary Modifies the log configurations of control plane components. The configurations include the log retention period and components whose logs that you want to collect. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube-apiserver, kube-scheduler, Kubernetes controller manager, and cloud controller manager (CCM).
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
 * @summary Sets the validity period of a kubeconfig file used by a Resource Access Management (RAM) user or RAM role to connect to a Container Service for Kubernetes (ACK) cluster. The validity period ranges from 1 to 876,000 hours. You can call this API operation when you customize configurations by using an Alibaba Cloud account. The default validity period of a kubeconfig file is three years.
 *
 * @description *   You can call this operation only with an Alibaba Cloud account.
 * *   If the kubeconfig file used by your cluster is revoked, the custom validity period of the kubeconfig file is reset. In this case, you need to call this API operation to reconfigure the validity period of the kubeconfig file.
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
 * @summary Sets the validity period of a kubeconfig file used by a Resource Access Management (RAM) user or RAM role to connect to a Container Service for Kubernetes (ACK) cluster. The validity period ranges from 1 to 876,000 hours. You can call this API operation when you customize configurations by using an Alibaba Cloud account. The default validity period of a kubeconfig file is three years.
 *
 * @description *   You can call this operation only with an Alibaba Cloud account.
 * *   If the kubeconfig file used by your cluster is revoked, the custom validity period of the kubeconfig file is reset. In this case, you need to call this API operation to reconfigure the validity period of the kubeconfig file.
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
 * @summary 更新节点组件
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
 * @summary 更新节点组件
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
 * @summary Updates the deletion protection status of the specified resources. You can enable or disable deletion protection for namespaces and Services. You can call this operation to enable deletion protection for namespaces or Services that involve businesses-critical and sensitive data to avoid incurring maintenance costs caused by accidental namespace or Service deletion.
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
 * @summary Updates the deletion protection status of the specified resources. You can enable or disable deletion protection for namespaces and Services. You can call this operation to enable deletion protection for namespaces or Services that involve businesses-critical and sensitive data to avoid incurring maintenance costs caused by accidental namespace or Service deletion.
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
 * @summary Updates the configurations of an orchestration template. An orchestration template defines and describes a group of Container Service for Kubernetes (ACK) resources. An orchestration template describes the configurations of an application or how an application runs in a declarative manner.
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
 * @summary Updates the configurations of an orchestration template. An orchestration template defines and describes a group of Container Service for Kubernetes (ACK) resources. An orchestration template describes the configurations of an application or how an application runs in a declarative manner.
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
 * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
 *
 * @description **Precautions**:
 * *   You can update the permissions of a RAM user or RAM role on a cluster by using full update or incremental update. If you use full update, the existing permissions of the RAM user or RAM role on the cluster are overwritten. You must specify all the permissions that you want to grant to the RAM user or RAM role in the request parameters when you call the operation. If you use incremental update, you can grant permissions to or revoke permissions from the RAM user or RAM role on the cluster. In this case, only the permissions that you specify in the request parameters when you call the operation are granted or revoked, other permissions of the RAM user or RAM role on the cluster are not affected.
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
 * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
 *
 * @description **Precautions**:
 * *   You can update the permissions of a RAM user or RAM role on a cluster by using full update or incremental update. If you use full update, the existing permissions of the RAM user or RAM role on the cluster are overwritten. You must specify all the permissions that you want to grant to the RAM user or RAM role in the request parameters when you call the operation. If you use incremental update, you can grant permissions to or revoke permissions from the RAM user or RAM role on the cluster. In this case, only the permissions that you specify in the request parameters when you call the operation are granted or revoked, other permissions of the RAM user or RAM role on the cluster are not affected.
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
 * @summary Outdated Kubernetes versions may have security and stability issues. We recommend that you update the Kubernetes version of your cluster at the earliest opportunity to enjoy the new features of the new Kubernetes version. You can call the UpgradeCluster operation to manually upgrade a cluster.
 *
 * @description After successfully calling the UpgradeCluster interface, this API returns the `task_id` of the upgrade task. You can manage this operation task by calling the following task APIs:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html) 
 * - [Call ResumeTask to resume a task that has been paused](https://help.aliyun.com/document_detail/2667987.html) 
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
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
 * @summary Outdated Kubernetes versions may have security and stability issues. We recommend that you update the Kubernetes version of your cluster at the earliest opportunity to enjoy the new features of the new Kubernetes version. You can call the UpgradeCluster operation to manually upgrade a cluster.
 *
 * @description After successfully calling the UpgradeCluster interface, this API returns the `task_id` of the upgrade task. You can manage this operation task by calling the following task APIs:
 * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
 * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html) 
 * - [Call ResumeTask to resume a task that has been paused](https://help.aliyun.com/document_detail/2667987.html) 
 * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
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
 * @summary Updates cluster components to use new features and patch vulnerabilities. You must update cluster components one after one and update a component only after the previous one is successfully updated. Before you update a component, we recommend that you read the update notes for each component. Cluster component updates may affect your businesses. Assess the impact, back up data, and perform the update during off-peak hours.
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
 * @summary Updates cluster components to use new features and patch vulnerabilities. You must update cluster components one after one and update a component only after the previous one is successfully updated. Before you update a component, we recommend that you read the update notes for each component. Cluster component updates may affect your businesses. Assess the impact, back up data, and perform the update during off-peak hours.
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
 * @summary You can call the UpgradeClusterNodepool operation to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
 *
 * @description This operation allows you to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
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
 * @summary You can call the UpgradeClusterNodepool operation to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
 *
 * @description This operation allows you to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
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