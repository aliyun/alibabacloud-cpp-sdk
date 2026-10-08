#include <darabonba/Core.hpp>
#include <alibabacloud/Edas20170801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Edas20170801::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Edas20170801
{

AlibabaCloud::Edas20170801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1" , "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "edas.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "edas.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "edas.aliyuncs.com"},
    {"cn-beijing-gov-1" , "edas.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "edas.aliyuncs.com"},
    {"cn-chengdu" , "edas.aliyuncs.com"},
    {"cn-edge-1" , "edas.aliyuncs.com"},
    {"cn-fujian" , "edas.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "edas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "edas.aliyuncs.com"},
    {"cn-hangzhou-finance" , "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "edas.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "edas.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "edas.aliyuncs.com"},
    {"cn-huhehaote" , "edas.aliyuncs.com"},
    {"cn-qingdao-nebula" , "edas.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "edas.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "edas.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "edas.aliyuncs.com"},
    {"cn-shanghai-inner" , "edas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "edas.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "edas.aliyuncs.com"},
    {"cn-shenzhen-inner" , "edas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "edas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "edas.aliyuncs.com"},
    {"cn-wuhan" , "edas.aliyuncs.com"},
    {"cn-yushanfang" , "edas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "edas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "edas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "edas.aliyuncs.com"},
    {"eu-west-1" , "edas.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1-oxs" , "edas.ap-northeast-1.aliyuncs.com"},
    {"me-east-1" , "edas.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "edas.ap-northeast-1.aliyuncs.com"},
    {"us-west-1" , "edas.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("edas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary You can call the AbortAndRollbackChangeOrder operation to stop and roll back a change order for applications in Container Service for Kubernetes (ACK) clusters.
 *
 * @param request AbortAndRollbackChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortAndRollbackChangeOrderResponse
 */
AbortAndRollbackChangeOrderResponse Client::abortAndRollbackChangeOrderWithOptions(const AbortAndRollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.getChangeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortAndRollbackChangeOrder"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/change_order_abort_and_rollback")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortAndRollbackChangeOrderResponse>();
}

/**
 * @summary You can call the AbortAndRollbackChangeOrder operation to stop and roll back a change order for applications in Container Service for Kubernetes (ACK) clusters.
 *
 * @param request AbortAndRollbackChangeOrderRequest
 * @return AbortAndRollbackChangeOrderResponse
 */
AbortAndRollbackChangeOrderResponse Client::abortAndRollbackChangeOrder(const AbortAndRollbackChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return abortAndRollbackChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Terminates a change process.
 *
 * @param request AbortChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortChangeOrderResponse
 */
AbortChangeOrderResponse Client::abortChangeOrderWithOptions(const AbortChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.getChangeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortChangeOrder"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/change_order_abort")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortChangeOrderResponse>();
}

/**
 * @summary Terminates a change process.
 *
 * @param request AbortChangeOrderRequest
 * @return AbortChangeOrderResponse
 */
AbortChangeOrderResponse Client::abortChangeOrder(const AbortChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return abortChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Adds a log directory to an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
 *
 * @param request AddLogPathRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLogPathResponse
 */
AddLogPathResponse Client::addLogPathWithOptions(const AddLogPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddLogPath"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/log/popListLogDirs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddLogPathResponse>();
}

/**
 * @summary Adds a log directory to an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
 *
 * @param request AddLogPathRequest
 * @return AddLogPathResponse
 */
AddLogPathResponse Client::addLogPath(const AddLogPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addLogPathWithOptions(request, headers, runtime);
}

/**
 * @summary Grants a Resource Access Management (RAM) user the permissions on a specified application.
 *
 * @param request AuthorizeApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationResponse
 */
AuthorizeApplicationResponse Client::authorizeApplicationWithOptions(const AuthorizeApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/authorize_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeApplicationResponse>();
}

/**
 * @summary Grants a Resource Access Management (RAM) user the permissions on a specified application.
 *
 * @param request AuthorizeApplicationRequest
 * @return AuthorizeApplicationResponse
 */
AuthorizeApplicationResponse Client::authorizeApplication(const AuthorizeApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return authorizeApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Grants a Resource Access Management (RAM) user the permissions on a resource group.
 *
 * @param request AuthorizeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceGroupResponse
 */
AuthorizeResourceGroupResponse Client::authorizeResourceGroupWithOptions(const AuthorizeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/authorize_res_group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceGroupResponse>();
}

/**
 * @summary Grants a Resource Access Management (RAM) user the permissions on a resource group.
 *
 * @param request AuthorizeResourceGroupRequest
 * @return AuthorizeResourceGroupResponse
 */
AuthorizeResourceGroupResponse Client::authorizeResourceGroup(const AuthorizeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return authorizeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Grant permissions to RAM roles.
 *
 * @param request AuthorizeRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeRoleResponse
 */
AuthorizeRoleResponse Client::authorizeRoleWithOptions(const AuthorizeRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleIds()) {
    query["RoleIds"] = request.getRoleIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/authorize_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeRoleResponse>();
}

/**
 * @summary Grant permissions to RAM roles.
 *
 * @param request AuthorizeRoleRequest
 * @return AuthorizeRoleResponse
 */
AuthorizeRoleResponse Client::authorizeRole(const AuthorizeRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return authorizeRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in an Elastic Compute Service (ECS) cluster.
 *
 * @param request BindEcsSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindEcsSlbResponse
 */
BindEcsSlbResponse Client::bindEcsSlbWithOptions(const BindEcsSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDeployGroupId()) {
    query["DeployGroupId"] = request.getDeployGroupId();
  }

  if (!!request.hasListenerHealthCheckUrl()) {
    query["ListenerHealthCheckUrl"] = request.getListenerHealthCheckUrl();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  if (!!request.hasVForwardingUrlRule()) {
    query["VForwardingUrlRule"] = request.getVForwardingUrlRule();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.getVServerGroupId();
  }

  if (!!request.hasVServerGroupName()) {
    query["VServerGroupName"] = request.getVServerGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindEcsSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/slb/bind_slb")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindEcsSlbResponse>();
}

/**
 * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in an Elastic Compute Service (ECS) cluster.
 *
 * @param request BindEcsSlbRequest
 * @return BindEcsSlbResponse
 */
BindEcsSlbResponse Client::bindEcsSlb(const BindEcsSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindEcsSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Attaches a Server Load Balancer (SLB) instance to an application in a Container Service for Kubernetes cluster.
 *
 * @param request BindK8sSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindK8sSlbResponse
 */
BindK8sSlbResponse Client::bindK8sSlbWithOptions(const BindK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServicePortInfos()) {
    query["ServicePortInfos"] = request.getServicePortInfos();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  if (!!request.hasSlbProtocol()) {
    query["SlbProtocol"] = request.getSlbProtocol();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.getTargetPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindK8sSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_slb_binding")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindK8sSlbResponse>();
}

/**
 * @summary Attaches a Server Load Balancer (SLB) instance to an application in a Container Service for Kubernetes cluster.
 *
 * @param request BindK8sSlbRequest
 * @return BindK8sSlbResponse
 */
BindK8sSlbResponse Client::bindK8sSlb(const BindK8sSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindK8sSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Calls the BindSlb operation to attach a Server Load Balancer (SLB) instance to a specified application.
 *
 * @param request BindSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSlbResponse
 */
BindSlbResponse Client::bindSlbWithOptions(const BindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  if (!!request.hasSlbIp()) {
    query["SlbIp"] = request.getSlbIp();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.getVServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/app/bind_slb_json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSlbResponse>();
}

/**
 * @summary Calls the BindSlb operation to attach a Server Load Balancer (SLB) instance to a specified application.
 *
 * @param request BindSlbRequest
 * @return BindSlbResponse
 */
BindSlbResponse Client::bindSlb(const BindSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Call the ChangeDeployGroup operation to change the group of an ECS instance in an application deployed in an ECS cluster.
 *
 * @param request ChangeDeployGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDeployGroupResponse
 */
ChangeDeployGroupResponse Client::changeDeployGroupWithOptions(const ChangeDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  if (!!request.hasForceStatus()) {
    query["ForceStatus"] = request.getForceStatus();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDeployGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_change_group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDeployGroupResponse>();
}

/**
 * @summary Call the ChangeDeployGroup operation to change the group of an ECS instance in an application deployed in an ECS cluster.
 *
 * @param request ChangeDeployGroupRequest
 * @return ChangeDeployGroupResponse
 */
ChangeDeployGroupResponse Client::changeDeployGroup(const ChangeDeployGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeDeployGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Manually confirms the release of the next batch.
 *
 * @param request ContinuePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuePipelineResponse
 */
ContinuePipelineResponse Client::continuePipelineWithOptions(const ContinuePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfirm()) {
    query["Confirm"] = request.getConfirm();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinuePipeline"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/pipeline_batch_confirm")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinuePipelineResponse>();
}

/**
 * @summary Manually confirms the release of the next batch.
 *
 * @param request ContinuePipelineRequest
 * @return ContinuePipelineResponse
 */
ContinuePipelineResponse Client::continuePipeline(const ContinuePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return continuePipelineWithOptions(request, headers, runtime);
}

/**
 * @summary Converts a Deployment resource into an application.
 *
 * @param request ConvertK8sResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertK8sResourceResponse
 */
ConvertK8sResourceResponse Client::convertK8sResourceWithOptions(const ConvertK8sResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertK8sResource"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/k8s_resource_convert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertK8sResourceResponse>();
}

/**
 * @summary Converts a Deployment resource into an application.
 *
 * @param request ConvertK8sResourceRequest
 * @return ConvertK8sResourceResponse
 */
ConvertK8sResourceResponse Client::convertK8sResource(const ConvertK8sResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return convertK8sResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Call the CreateApplicationScalingRule operation to create an Auto Scaling rule for an application.
 *
 * @param request CreateApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationScalingRuleResponse
 */
CreateApplicationScalingRuleResponse Client::createApplicationScalingRuleWithOptions(const CreateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScalingBehaviour()) {
    query["ScalingBehaviour"] = request.getScalingBehaviour();
  }

  if (!!request.hasScalingRuleEnable()) {
    query["ScalingRuleEnable"] = request.getScalingRuleEnable();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.getScalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.getScalingRuleTimer();
  }

  if (!!request.hasScalingRuleTrigger()) {
    query["ScalingRuleTrigger"] = request.getScalingRuleTrigger();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.getScalingRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/application_scaling_rule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationScalingRuleResponse>();
}

/**
 * @summary Call the CreateApplicationScalingRule operation to create an Auto Scaling rule for an application.
 *
 * @param request CreateApplicationScalingRuleRequest
 * @return CreateApplicationScalingRuleResponse
 */
CreateApplicationScalingRuleResponse Client::createApplicationScalingRule(const CreateApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a configuration template.
 *
 * @param request CreateConfigTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigTemplateResponse
 */
CreateConfigTemplateResponse Client::createConfigTemplateWithOptions(const CreateConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfigTemplate"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/config_template")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigTemplateResponse>();
}

/**
 * @summary Creates a configuration template.
 *
 * @param request CreateConfigTemplateRequest
 * @return CreateConfigTemplateResponse
 */
CreateConfigTemplateResponse Client::createConfigTemplate(const CreateConfigTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConfigTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a command that is used to import instances to a hybrid cloud Elastic Compute Service (ECS) cluster.
 *
 * @description ## Description
 * You must call the CreateIDCImportCommand operation first to generate a command used to import hybrid cloud ECS instances to a hybrid cloud ECS cluster. Then, run this command on the instances to import the instances to the cluster.
 *
 * @param request CreateIDCImportCommandRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIDCImportCommandResponse
 */
CreateIDCImportCommandResponse Client::createIDCImportCommandWithOptions(const CreateIDCImportCommandRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIDCImportCommand"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/create_idc_import_command")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIDCImportCommandResponse>();
}

/**
 * @summary Generates a command that is used to import instances to a hybrid cloud Elastic Compute Service (ECS) cluster.
 *
 * @description ## Description
 * You must call the CreateIDCImportCommand operation first to generate a command used to import hybrid cloud ECS instances to a hybrid cloud ECS cluster. Then, run this command on the instances to import the instances to the cluster.
 *
 * @param request CreateIDCImportCommandRequest
 * @return CreateIDCImportCommandResponse
 */
CreateIDCImportCommandResponse Client::createIDCImportCommand(const CreateIDCImportCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIDCImportCommandWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Kubernetes ConfigMap.
 *
 * @param request CreateK8sConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateK8sConfigMapResponse
 */
CreateK8sConfigMapResponse Client::createK8sConfigMapWithOptions(const CreateK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateK8sConfigMap"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_config_map")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateK8sConfigMapResponse>();
}

/**
 * @summary Creates a Kubernetes ConfigMap.
 *
 * @param request CreateK8sConfigMapRequest
 * @return CreateK8sConfigMapResponse
 */
CreateK8sConfigMapResponse Client::createK8sConfigMap(const CreateK8sConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createK8sConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an Ingress.
 *
 * @param request CreateK8sIngressRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateK8sIngressRuleResponse
 */
CreateK8sIngressRuleResponse Client::createK8sIngressRuleWithOptions(const CreateK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIngressConf()) {
    query["IngressConf"] = request.getIngressConf();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateK8sIngressRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_ingress")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateK8sIngressRuleResponse>();
}

/**
 * @summary Creates an Ingress.
 *
 * @param request CreateK8sIngressRuleRequest
 * @return CreateK8sIngressRuleResponse
 */
CreateK8sIngressRuleResponse Client::createK8sIngressRule(const CreateK8sIngressRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createK8sIngressRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Kubernetes Secret.
 *
 * @param request CreateK8sSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateK8sSecretResponse
 */
CreateK8sSecretResponse Client::createK8sSecretWithOptions(const CreateK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBase64Encoded()) {
    body["Base64Encoded"] = request.getBase64Encoded();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.getCertId();
  }

  if (!!request.hasCertRegionId()) {
    body["CertRegionId"] = request.getCertRegionId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateK8sSecret"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_secret")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateK8sSecretResponse>();
}

/**
 * @summary Creates a Kubernetes Secret.
 *
 * @param request CreateK8sSecretRequest
 * @return CreateK8sSecretResponse
 */
CreateK8sSecretResponse Client::createK8sSecret(const CreateK8sSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createK8sSecretWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an application service in a Kubernetes cluster.
 *
 * @param request CreateK8sServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateK8sServiceResponse
 */
CreateK8sServiceResponse Client::createK8sServiceWithOptions(const CreateK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasExternalTrafficPolicy()) {
    query["ExternalTrafficPolicy"] = request.getExternalTrafficPolicy();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasServicePorts()) {
    query["ServicePorts"] = request.getServicePorts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateK8sService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_service")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateK8sServiceResponse>();
}

/**
 * @summary Creates an application service in a Kubernetes cluster.
 *
 * @param request CreateK8sServiceRequest
 * @return CreateK8sServiceResponse
 */
CreateK8sServiceResponse Client::createK8sService(const CreateK8sServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createK8sServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Call the DeleteApplication operation to delete an application instance.
 *
 * @param request DeleteApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_delete_app")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Call the DeleteApplication operation to delete an application instance.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an Auto Scaling rule for an application.
 *
 * @param request DeleteApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationScalingRuleResponse
 */
DeleteApplicationScalingRuleResponse Client::deleteApplicationScalingRuleWithOptions(const DeleteApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/application_scaling_rule")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationScalingRuleResponse>();
}

/**
 * @summary Deletes an Auto Scaling rule for an application.
 *
 * @param request DeleteApplicationScalingRuleRequest
 * @return DeleteApplicationScalingRuleResponse
 */
DeleteApplicationScalingRuleResponse Client::deleteApplicationScalingRule(const DeleteApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an Elastic Compute Service (ECS) cluster or cancels the import of a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DeleteClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary Deletes an Elastic Compute Service (ECS) cluster or cancels the import of a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Removes an Elastic Compute Service (ECS) instance from a cluster.
 *
 * @param request DeleteClusterMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterMemberResponse
 */
DeleteClusterMemberResponse Client::deleteClusterMemberWithOptions(const DeleteClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterMemberId()) {
    query["ClusterMemberId"] = request.getClusterMemberId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClusterMember"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster_member")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterMemberResponse>();
}

/**
 * @summary Removes an Elastic Compute Service (ECS) instance from a cluster.
 *
 * @param request DeleteClusterMemberRequest
 * @return DeleteClusterMemberResponse
 */
DeleteClusterMemberResponse Client::deleteClusterMember(const DeleteClusterMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteClusterMemberWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a configuration template.
 *
 * @param request DeleteConfigTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigTemplateResponse
 */
DeleteConfigTemplateResponse Client::deleteConfigTemplateWithOptions(const DeleteConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigTemplate"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/config_template")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigTemplateResponse>();
}

/**
 * @summary Deletes a configuration template.
 *
 * @param request DeleteConfigTemplateRequest
 * @return DeleteConfigTemplateResponse
 */
DeleteConfigTemplateResponse Client::deleteConfigTemplate(const DeleteConfigTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an instance group for an application.
 *
 * @param request DeleteDeployGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeployGroupResponse
 */
DeleteDeployGroupResponse Client::deleteDeployGroupWithOptions(const DeleteDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeployGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/deploy_group")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeployGroupResponse>();
}

/**
 * @summary Deletes an instance group for an application.
 *
 * @param request DeleteDeployGroupRequest
 * @return DeleteDeployGroupResponse
 */
DeleteDeployGroupResponse Client::deleteDeployGroup(const DeleteDeployGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeployGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an Elastic Compute Unit (ECU).
 *
 * @param request DeleteEcuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEcuResponse
 */
DeleteEcuResponse Client::deleteEcuWithOptions(const DeleteEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcuId()) {
    query["EcuId"] = request.getEcuId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEcu"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/delete_ecu")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEcuResponse>();
}

/**
 * @summary Deletes an Elastic Compute Unit (ECU).
 *
 * @param request DeleteEcuRequest
 * @return DeleteEcuResponse
 */
DeleteEcuResponse Client::deleteEcu(const DeleteEcuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEcuWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an application from a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DeleteK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteK8sApplicationResponse
 */
DeleteK8sApplicationResponse Client::deleteK8sApplicationWithOptions(const DeleteK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_apps")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteK8sApplicationResponse>();
}

/**
 * @summary Deletes an application from a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DeleteK8sApplicationRequest
 * @return DeleteK8sApplicationResponse
 */
DeleteK8sApplicationResponse Client::deleteK8sApplication(const DeleteK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a Kubernetes ConfigMap.
 *
 * @param request DeleteK8sConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteK8sConfigMapResponse
 */
DeleteK8sConfigMapResponse Client::deleteK8sConfigMapWithOptions(const DeleteK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteK8sConfigMap"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_config_map")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteK8sConfigMapResponse>();
}

/**
 * @summary Deletes a Kubernetes ConfigMap.
 *
 * @param request DeleteK8sConfigMapRequest
 * @return DeleteK8sConfigMapResponse
 */
DeleteK8sConfigMapResponse Client::deleteK8sConfigMap(const DeleteK8sConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteK8sConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an ingress.
 *
 * @param request DeleteK8sIngressRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteK8sIngressRuleResponse
 */
DeleteK8sIngressRuleResponse Client::deleteK8sIngressRuleWithOptions(const DeleteK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteK8sIngressRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_ingress")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteK8sIngressRuleResponse>();
}

/**
 * @summary Deletes an ingress.
 *
 * @param request DeleteK8sIngressRuleRequest
 * @return DeleteK8sIngressRuleResponse
 */
DeleteK8sIngressRuleResponse Client::deleteK8sIngressRule(const DeleteK8sIngressRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteK8sIngressRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a Kubernetes Secret.
 *
 * @param request DeleteK8sSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteK8sSecretResponse
 */
DeleteK8sSecretResponse Client::deleteK8sSecretWithOptions(const DeleteK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteK8sSecret"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_secret")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteK8sSecretResponse>();
}

/**
 * @summary Deletes a Kubernetes Secret.
 *
 * @param request DeleteK8sSecretRequest
 * @return DeleteK8sSecretResponse
 */
DeleteK8sSecretResponse Client::deleteK8sSecret(const DeleteK8sSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteK8sSecretWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an application service from a Kubernetes cluster.
 *
 * @param request DeleteK8sServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteK8sServiceResponse
 */
DeleteK8sServiceResponse Client::deleteK8sServiceWithOptions(const DeleteK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteK8sService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_service")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteK8sServiceResponse>();
}

/**
 * @summary Deletes an application service from a Kubernetes cluster.
 *
 * @param request DeleteK8sServiceRequest
 * @return DeleteK8sServiceResponse
 */
DeleteK8sServiceResponse Client::deleteK8sService(const DeleteK8sServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteK8sServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes resources associated with a log directory. This operation is suitable for applications deployed on Alibaba Cloud Elastic Compute Service (ECS) instances or container orchestration clusters from other cloud providers.
 *
 * @param request DeleteLogPathRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogPathResponse
 */
DeleteLogPathResponse Client::deleteLogPathWithOptions(const DeleteLogPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogPath"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/log/popListLogDirs")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogPathResponse>();
}

/**
 * @summary Deletes resources associated with a log directory. This operation is suitable for applications deployed on Alibaba Cloud Elastic Compute Service (ECS) instances or container orchestration clusters from other cloud providers.
 *
 * @param request DeleteLogPathRequest
 * @return DeleteLogPathResponse
 */
DeleteLogPathResponse Client::deleteLogPath(const DeleteLogPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLogPathWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) role.
 *
 * @param request DeleteRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/delete_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary Deletes a Resource Access Management (RAM) role.
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a service group.
 *
 * @param request DeleteServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceGroupResponse
 */
DeleteServiceGroupResponse Client::deleteServiceGroupWithOptions(const DeleteServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/serviceGroups")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceGroupResponse>();
}

/**
 * @summary Deletes a service group.
 *
 * @param request DeleteServiceGroupRequest
 * @return DeleteServiceGroupResponse
 */
DeleteServiceGroupResponse Client::deleteServiceGroup(const DeleteServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimmingLaneResponse
 */
DeleteSwimmingLaneResponse Client::deleteSwimmingLaneWithOptions(const DeleteSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLaneId()) {
    query["LaneId"] = request.getLaneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSwimmingLane"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lanes")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimmingLaneResponse>();
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimmingLaneRequest
 * @return DeleteSwimmingLaneResponse
 */
DeleteSwimmingLaneResponse Client::deleteSwimmingLane(const DeleteSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified custom namespace.
 *
 * @param request DeleteUserDefineRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserDefineRegionResponse
 */
DeleteUserDefineRegionResponse Client::deleteUserDefineRegionWithOptions(const DeleteUserDefineRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.getRegionTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserDefineRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/user_region_def")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserDefineRegionResponse>();
}

/**
 * @summary Deletes a specified custom namespace.
 *
 * @param request DeleteUserDefineRegionRequest
 * @return DeleteUserDefineRegionResponse
 */
DeleteUserDefineRegionResponse Client::deleteUserDefineRegion(const DeleteUserDefineRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUserDefineRegionWithOptions(request, headers, runtime);
}

/**
 * @summary Deploys an application in an Elastic Compute Service (ECS) cluster.
 *
 * @description > To deploy an application in a Container Service for Kubernetes (ACK) cluster that is imported into Enterprise Distributed Application Service (EDAS), call the DeployK8sApplication operation provided by EDAS. For more information, see [](~~149420~~)DeployK8sApplication.
 *
 * @param request DeployApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplicationWithOptions(const DeployApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppEnv()) {
    query["AppEnv"] = request.getAppEnv();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBatch()) {
    query["Batch"] = request.getBatch();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.getBatchWaitTime();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.getBuildPackId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.getComponentIds();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasGray()) {
    query["Gray"] = request.getGray();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.getPackageVersion();
  }

  if (!!request.hasReleaseType()) {
    query["ReleaseType"] = request.getReleaseType();
  }

  if (!!request.hasTrafficControlStrategy()) {
    query["TrafficControlStrategy"] = request.getTrafficControlStrategy();
  }

  if (!!request.hasWarUrl()) {
    query["WarUrl"] = request.getWarUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_deploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployApplicationResponse>();
}

/**
 * @summary Deploys an application in an Elastic Compute Service (ECS) cluster.
 *
 * @description > To deploy an application in a Container Service for Kubernetes (ACK) cluster that is imported into Enterprise Distributed Application Service (EDAS), call the DeployK8sApplication operation provided by EDAS. For more information, see [](~~149420~~)DeployK8sApplication.
 *
 * @param request DeployApplicationRequest
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplication(const DeployApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request DeployK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployK8sApplicationResponse
 */
DeployK8sApplicationResponse Client::deployK8sApplicationWithOptions(const DeployK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasArgs()) {
    query["Args"] = request.getArgs();
  }

  if (!!request.hasBatchTimeout()) {
    query["BatchTimeout"] = request.getBatchTimeout();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.getBatchWaitTime();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.getBuildPackId();
  }

  if (!!request.hasCanaryRuleId()) {
    query["CanaryRuleId"] = request.getCanaryRuleId();
  }

  if (!!request.hasChangeOrderDesc()) {
    query["ChangeOrderDesc"] = request.getChangeOrderDesc();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.getConfigMountDescs();
  }

  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasCpuRequest()) {
    query["CpuRequest"] = request.getCpuRequest();
  }

  if (!!request.hasCustomAffinity()) {
    query["CustomAffinity"] = request.getCustomAffinity();
  }

  if (!!request.hasCustomAgentVersion()) {
    query["CustomAgentVersion"] = request.getCustomAgentVersion();
  }

  if (!!request.hasCustomTolerations()) {
    query["CustomTolerations"] = request.getCustomTolerations();
  }

  if (!!request.hasDeployAcrossNodes()) {
    query["DeployAcrossNodes"] = request.getDeployAcrossNodes();
  }

  if (!!request.hasDeployAcrossZones()) {
    query["DeployAcrossZones"] = request.getDeployAcrossZones();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.getEdasContainerVersion();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.getEmptyDirs();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.getEnableAhas();
  }

  if (!!request.hasEnableEmptyPushReject()) {
    query["EnableEmptyPushReject"] = request.getEnableEmptyPushReject();
  }

  if (!!request.hasEnableLosslessRule()) {
    query["EnableLosslessRule"] = request.getEnableLosslessRule();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.getEnvFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.getEnvs();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.getImage();
  }

  if (!!request.hasImagePlatforms()) {
    query["ImagePlatforms"] = request.getImagePlatforms();
  }

  if (!!request.hasImageTag()) {
    query["ImageTag"] = request.getImageTag();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.getInitContainers();
  }

  if (!!request.hasJDK()) {
    query["JDK"] = request.getJDK();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.getJavaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.getLimitEphemeralStorage();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.getLiveness();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.getLocalVolume();
  }

  if (!!request.hasLosslessRuleAligned()) {
    query["LosslessRuleAligned"] = request.getLosslessRuleAligned();
  }

  if (!!request.hasLosslessRuleDelayTime()) {
    query["LosslessRuleDelayTime"] = request.getLosslessRuleDelayTime();
  }

  if (!!request.hasLosslessRuleFuncType()) {
    query["LosslessRuleFuncType"] = request.getLosslessRuleFuncType();
  }

  if (!!request.hasLosslessRuleRelated()) {
    query["LosslessRuleRelated"] = request.getLosslessRuleRelated();
  }

  if (!!request.hasLosslessRuleWarmupTime()) {
    query["LosslessRuleWarmupTime"] = request.getLosslessRuleWarmupTime();
  }

  if (!!request.hasMcpuLimit()) {
    query["McpuLimit"] = request.getMcpuLimit();
  }

  if (!!request.hasMcpuRequest()) {
    query["McpuRequest"] = request.getMcpuRequest();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasMemoryRequest()) {
    query["MemoryRequest"] = request.getMemoryRequest();
  }

  if (!!request.hasMountDescs()) {
    query["MountDescs"] = request.getMountDescs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.getNasId();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.getPackageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.getPackageVersion();
  }

  if (!!request.hasPackageVersionId()) {
    query["PackageVersionId"] = request.getPackageVersionId();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.getPostStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.getPreStop();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.getPvcMountDescs();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.getReadiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.getRequestsEphemeralStorage();
  }

  if (!!request.hasRuntimeClassName()) {
    query["RuntimeClassName"] = request.getRuntimeClassName();
  }

  if (!!request.hasSecurityContext()) {
    query["SecurityContext"] = request.getSecurityContext();
  }

  if (!!request.hasSidecars()) {
    query["Sidecars"] = request.getSidecars();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.getSlsConfigs();
  }

  if (!!request.hasStartup()) {
    query["Startup"] = request.getStartup();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTerminateGracePeriod()) {
    query["TerminateGracePeriod"] = request.getTerminateGracePeriod();
  }

  if (!!request.hasTrafficControlStrategy()) {
    query["TrafficControlStrategy"] = request.getTrafficControlStrategy();
  }

  if (!!request.hasUpdateStrategy()) {
    query["UpdateStrategy"] = request.getUpdateStrategy();
  }

  if (!!request.hasUriEncoding()) {
    query["UriEncoding"] = request.getUriEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.getUseBodyEncoding();
  }

  if (!!request.hasUserBaseImageUrl()) {
    query["UserBaseImageUrl"] = request.getUserBaseImageUrl();
  }

  if (!!request.hasVolumesStr()) {
    query["VolumesStr"] = request.getVolumesStr();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.getWebContainer();
  }

  if (!!request.hasWebContainerConfig()) {
    query["WebContainerConfig"] = request.getWebContainerConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_apps")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployK8sApplicationResponse>();
}

/**
 * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request DeployK8sApplicationRequest
 * @return DeployK8sApplicationResponse
 */
DeployK8sApplicationResponse Client::deployK8sApplication(const DeployK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries Kubernetes application instances.
 *
 * @param request DescribeAppInstanceListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstanceListResponse
 */
DescribeAppInstanceListResponse Client::describeAppInstanceListWithOptions(const DescribeAppInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasWithNodeInfo()) {
    query["WithNodeInfo"] = request.getWithNodeInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppInstanceList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/app_instance_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppInstanceListResponse>();
}

/**
 * @summary Queries Kubernetes application instances.
 *
 * @param request DescribeAppInstanceListRequest
 * @return DescribeAppInstanceListResponse
 */
DescribeAppInstanceListResponse Client::describeAppInstanceList(const DescribeAppInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppInstanceListWithOptions(request, headers, runtime);
}

/**
 * @summary Call the DescribeApplicationScalingRules operation to query the scaling rules for an application.
 *
 * @param request DescribeApplicationScalingRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationScalingRulesResponse
 */
DescribeApplicationScalingRulesResponse Client::describeApplicationScalingRulesWithOptions(const DescribeApplicationScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationScalingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/application_scaling_rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationScalingRulesResponse>();
}

/**
 * @summary Call the DescribeApplicationScalingRules operation to query the scaling rules for an application.
 *
 * @param request DescribeApplicationScalingRulesRequest
 * @return DescribeApplicationScalingRulesResponse
 */
DescribeApplicationScalingRulesResponse Client::describeApplicationScalingRules(const DescribeApplicationScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationScalingRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the locality configuration.
 *
 * @description > Currently, only deployment resources can be modified.
 *
 * @param request DescribeLocalitySettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLocalitySettingResponse
 */
DescribeLocalitySettingResponse Client::describeLocalitySettingWithOptions(const DescribeLocalitySettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLocalitySetting"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/applications/locality/setting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLocalitySettingResponse>();
}

/**
 * @summary Queries the locality configuration.
 *
 * @description > Currently, only deployment resources can be modified.
 *
 * @param request DescribeLocalitySettingRequest
 * @return DescribeLocalitySettingResponse
 */
DescribeLocalitySettingResponse Client::describeLocalitySetting(const DescribeLocalitySettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeLocalitySettingWithOptions(request, headers, runtime);
}

/**
 * @summary Disables an auto scaling policy for an application.
 *
 * @param request DisableApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationScalingRuleResponse
 */
DisableApplicationScalingRuleResponse Client::disableApplicationScalingRuleWithOptions(const DisableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/disable_application_scaling_rule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationScalingRuleResponse>();
}

/**
 * @summary Disables an auto scaling policy for an application.
 *
 * @param request DisableApplicationScalingRuleRequest
 * @return DisableApplicationScalingRuleResponse
 */
DisableApplicationScalingRuleResponse Client::disableApplicationScalingRule(const DisableApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Enables an auto scaling policy for an application.
 *
 * @param request EnableApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationScalingRuleResponse
 */
EnableApplicationScalingRuleResponse Client::enableApplicationScalingRuleWithOptions(const EnableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/enable_application_scaling_rule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationScalingRuleResponse>();
}

/**
 * @summary Enables an auto scaling policy for an application.
 *
 * @param request EnableApplicationScalingRuleRequest
 * @return EnableApplicationScalingRuleResponse
 */
EnableApplicationScalingRuleResponse Client::enableApplicationScalingRule(const EnableApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about the Deployment of a Kubernetes application.
 *
 * @param request GetAppDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppDeploymentResponse
 */
GetAppDeploymentResponse Client::getAppDeploymentWithOptions(const GetAppDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppDeployment"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/app_deployment")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppDeploymentResponse>();
}

/**
 * @summary Queries the information about the Deployment of a Kubernetes application.
 *
 * @param request GetAppDeploymentRequest
 * @return GetAppDeploymentResponse
 */
GetAppDeploymentResponse Client::getAppDeployment(const GetAppDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAppDeploymentWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves information about a specified application in an ECS cluster.
 *
 * @param request GetApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/app_info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Retrieves information about a specified application in an ECS cluster.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary You can call the GetChangeOrderInfo operation to view the details of a change process.
 *
 * @param request GetChangeOrderInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChangeOrderInfoResponse
 */
GetChangeOrderInfoResponse Client::getChangeOrderInfoWithOptions(const GetChangeOrderInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.getChangeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChangeOrderInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/change_order_info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChangeOrderInfoResponse>();
}

/**
 * @summary You can call the GetChangeOrderInfo operation to view the details of a change process.
 *
 * @param request GetChangeOrderInfoRequest
 * @return GetChangeOrderInfoResponse
 */
GetChangeOrderInfoResponse Client::getChangeOrderInfo(const GetChangeOrderInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChangeOrderInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a specific cluster.
 *
 * @param request GetClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const GetClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary Queries a specific cluster.
 *
 * @param request GetClusterRequest
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const GetClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Tomcat configuration of an application or an instance group in which an application is deployed.
 *
 * @param request GetContainerConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContainerConfigurationResponse
 */
GetContainerConfigurationResponse Client::getContainerConfigurationWithOptions(const GetContainerConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContainerConfiguration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/container_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContainerConfigurationResponse>();
}

/**
 * @summary Queries the Tomcat configuration of an application or an instance group in which an application is deployed.
 *
 * @param request GetContainerConfigurationRequest
 * @return GetContainerConfigurationResponse
 */
GetContainerConfigurationResponse Client::getContainerConfiguration(const GetContainerConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getContainerConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the configuration of Java startup parameters for an application.
 *
 * @param request GetJavaStartUpConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJavaStartUpConfigResponse
 */
GetJavaStartUpConfigResponse Client::getJavaStartUpConfigWithOptions(const GetJavaStartUpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJavaStartUpConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/java_start_up_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJavaStartUpConfigResponse>();
}

/**
 * @summary Queries the configuration of Java startup parameters for an application.
 *
 * @param request GetJavaStartUpConfigRequest
 * @return GetJavaStartUpConfigResponse
 */
GetJavaStartUpConfigResponse Client::getJavaStartUpConfig(const GetJavaStartUpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJavaStartUpConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Java Virtual Machine (JVM) configuration of an application or an instance group in which an application is deployed.
 *
 * @param request GetJvmConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJvmConfigurationResponse
 */
GetJvmConfigurationResponse Client::getJvmConfigurationWithOptions(const GetJvmConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJvmConfiguration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/app_jvm_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJvmConfigurationResponse>();
}

/**
 * @summary Queries the Java Virtual Machine (JVM) configuration of an application or an instance group in which an application is deployed.
 *
 * @param request GetJvmConfigurationRequest
 * @return GetJvmConfigurationResponse
 */
GetJvmConfigurationResponse Client::getJvmConfiguration(const GetJvmConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJvmConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the precheck result of a Kubernetes application.
 *
 * @param request GetK8sAppPrecheckResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetK8sAppPrecheckResultResponse
 */
GetK8sAppPrecheckResultResponse Client::getK8sAppPrecheckResultWithOptions(const GetK8sAppPrecheckResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetK8sAppPrecheckResult"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/app_precheck")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetK8sAppPrecheckResultResponse>();
}

/**
 * @summary Queries the precheck result of a Kubernetes application.
 *
 * @param request GetK8sAppPrecheckResultRequest
 * @return GetK8sAppPrecheckResultResponse
 */
GetK8sAppPrecheckResultResponse Client::getK8sAppPrecheckResult(const GetK8sAppPrecheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getK8sAppPrecheckResultWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves information about an application deployed in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request GetK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetK8sApplicationResponse
 */
GetK8sApplicationResponse Client::getK8sApplicationWithOptions(const GetK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_application")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetK8sApplicationResponse>();
}

/**
 * @summary Retrieves information about an application deployed in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request GetK8sApplicationRequest
 * @return GetK8sApplicationResponse
 */
GetK8sApplicationResponse Client::getK8sApplication(const GetK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Gets a list of Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes (ASK) clusters.
 *
 * @param request GetK8sClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetK8sClusterResponse
 */
GetK8sClusterResponse Client::getK8sClusterWithOptions(const GetK8sClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.getRegionTag();
  }

  if (!!request.hasSubClusterType()) {
    query["SubClusterType"] = request.getSubClusterType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetK8sCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s_clusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetK8sClusterResponse>();
}

/**
 * @summary Gets a list of Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes (ASK) clusters.
 *
 * @param request GetK8sClusterRequest
 * @return GetK8sClusterResponse
 */
GetK8sClusterResponse Client::getK8sCluster(const GetK8sClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getK8sClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Gets a list of Services for an application in a Kubernetes cluster.
 *
 * @param request GetK8sServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetK8sServicesResponse
 */
GetK8sServicesResponse Client::getK8sServicesWithOptions(const GetK8sServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetK8sServices"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_service")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetK8sServicesResponse>();
}

/**
 * @summary Gets a list of Services for an application in a Kubernetes cluster.
 *
 * @param request GetK8sServicesRequest
 * @return GetK8sServicesResponse
 */
GetK8sServicesResponse Client::getK8sServices(const GetK8sServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getK8sServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Security Token Service (STS) tokens that are required for temporary storage.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPackageStorageCredentialResponse
 */
GetPackageStorageCredentialResponse Client::getPackageStorageCredentialWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPackageStorageCredential"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/package_storage_credential")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPackageStorageCredentialResponse>();
}

/**
 * @summary Queries the Security Token Service (STS) tokens that are required for temporary storage.
 *
 * @return GetPackageStorageCredentialResponse
 */
GetPackageStorageCredentialResponse Client::getPackageStorageCredential() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPackageStorageCredentialWithOptions(headers, runtime);
}

/**
 * @summary Queries scaling rules.
 *
 * @param request GetScalingRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScalingRulesResponse
 */
GetScalingRulesResponse Client::getScalingRulesWithOptions(const GetScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScalingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/scalingRules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScalingRulesResponse>();
}

/**
 * @summary Queries scaling rules.
 *
 * @param request GetScalingRulesRequest
 * @return GetScalingRulesResponse
 */
GetScalingRulesResponse Client::getScalingRules(const GetScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScalingRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the security token information of a namespace. You can call this operation to query information, such as the AccessKey ID, AccessKey secret, tenant ID, and the domain name of Address Server, for the specified namespace.
 *
 * @param request GetSecureTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecureTokenResponse
 */
GetSecureTokenResponse Client::getSecureTokenWithOptions(const GetSecureTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecureToken"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/secure_token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecureTokenResponse>();
}

/**
 * @summary Queries the security token information of a namespace. You can call this operation to query information, such as the AccessKey ID, AccessKey secret, tenant ID, and the domain name of Address Server, for the specified namespace.
 *
 * @param request GetSecureTokenRequest
 * @return GetSecureTokenResponse
 */
GetSecureTokenResponse Client::getSecureToken(const GetSecureTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSecureTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Queries service consumers.
 *
 * @param request GetServiceConsumersPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceConsumersPageResponse
 */
GetServiceConsumersPageResponse Client::getServiceConsumersPageWithOptions(const GetServiceConsumersPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["appId"] = request.getAppId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.getRegistryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceConsumersPage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/api/mseForOam/getServiceConsumersPage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceConsumersPageResponse>();
}

/**
 * @summary Queries service consumers.
 *
 * @param request GetServiceConsumersPageRequest
 * @return GetServiceConsumersPageResponse
 */
GetServiceConsumersPageResponse Client::getServiceConsumersPage(const GetServiceConsumersPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceConsumersPageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries service details.
 *
 * @param request GetServiceDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceDetailResponse
 */
GetServiceDetailResponse Client::getServiceDetailWithOptions(const GetServiceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["appId"] = request.getAppId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.getRegistryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceDetail"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/api/mseForOam/getServiceDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceDetailResponse>();
}

/**
 * @summary Queries service details.
 *
 * @param request GetServiceDetailRequest
 * @return GetServiceDetailResponse
 */
GetServiceDetailResponse Client::getServiceDetail(const GetServiceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries services.
 *
 * @param request GetServiceListPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceListPageResponse
 */
GetServiceListPageResponse Client::getServiceListPageWithOptions(const GetServiceListPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSearchType()) {
    query["searchType"] = request.getSearchType();
  }

  if (!!request.hasSearchValue()) {
    query["searchValue"] = request.getSearchValue();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasSide()) {
    query["side"] = request.getSide();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceListPage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/api/mseForOam/getServiceListPage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceListPageResponse>();
}

/**
 * @summary Queries services.
 *
 * @param request GetServiceListPageRequest
 * @return GetServiceListPageResponse
 */
GetServiceListPageResponse Client::getServiceListPage(const GetServiceListPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceListPageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries service methods.
 *
 * @param request GetServiceMethodPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceMethodPageResponse
 */
GetServiceMethodPageResponse Client::getServiceMethodPageWithOptions(const GetServiceMethodPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["appId"] = request.getAppId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasMethodController()) {
    query["methodController"] = request.getMethodController();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["path"] = request.getPath();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.getRegistryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceMethodPage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/api/mseForOam/getServiceMethodPage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceMethodPageResponse>();
}

/**
 * @summary Queries service methods.
 *
 * @param request GetServiceMethodPageRequest
 * @return GetServiceMethodPageResponse
 */
GetServiceMethodPageResponse Client::getServiceMethodPage(const GetServiceMethodPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceMethodPageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries service providers.
 *
 * @param request GetServiceProvidersPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceProvidersPageResponse
 */
GetServiceProvidersPageResponse Client::getServiceProvidersPageWithOptions(const GetServiceProvidersPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["appId"] = request.getAppId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.getRegistryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceProvidersPage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/api/mseForOam/getServiceProvidersPage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceProvidersPageResponse>();
}

/**
 * @summary Queries service providers.
 *
 * @param request GetServiceProvidersPageRequest
 * @return GetServiceProvidersPageResponse
 */
GetServiceProvidersPageResponse Client::getServiceProvidersPage(const GetServiceProvidersPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceProvidersPageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Tomcat configurations of an application.
 *
 * @description ***
 *
 * @param request GetWebContainerConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWebContainerConfigResponse
 */
GetWebContainerConfigResponse Client::getWebContainerConfigWithOptions(const GetWebContainerConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWebContainerConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/web_container_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWebContainerConfigResponse>();
}

/**
 * @summary Queries the Tomcat configurations of an application.
 *
 * @description ***
 *
 * @param request GetWebContainerConfigRequest
 * @return GetWebContainerConfigResponse
 */
GetWebContainerConfigResponse Client::getWebContainerConfig(const GetWebContainerConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWebContainerConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Imports a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster to Enterprise Distributed Application Service (EDAS).
 *
 * @param request ImportK8sClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportK8sClusterResponse
 */
ImportK8sClusterResponse Client::importK8sClusterWithOptions(const ImportK8sClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEnableAsm()) {
    query["EnableAsm"] = request.getEnableAsm();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportK8sCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/import_k8s_cluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportK8sClusterResponse>();
}

/**
 * @summary Imports a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster to Enterprise Distributed Application Service (EDAS).
 *
 * @param request ImportK8sClusterRequest
 * @return ImportK8sClusterResponse
 */
ImportK8sClusterResponse Client::importK8sCluster(const ImportK8sClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return importK8sClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an application in an ECS cluster.
 *
 * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation.
 *
 * @param request InsertApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertApplicationResponse
 */
InsertApplicationResponse Client::insertApplicationWithOptions(const InsertApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.getBuildPackId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.getComponentIds();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEcuInfo()) {
    query["EcuInfo"] = request.getEcuInfo();
  }

  if (!!request.hasEnablePortCheck()) {
    query["EnablePortCheck"] = request.getEnablePortCheck();
  }

  if (!!request.hasEnableUrlCheck()) {
    query["EnableUrlCheck"] = request.getEnableUrlCheck();
  }

  if (!!request.hasHealthCheckUrl()) {
    query["HealthCheckUrl"] = request.getHealthCheckUrl();
  }

  if (!!request.hasHooks()) {
    query["Hooks"] = request.getHooks();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.getJdk();
  }

  if (!!request.hasJvmOptions()) {
    query["JvmOptions"] = request.getJvmOptions();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasMaxHeapSize()) {
    query["MaxHeapSize"] = request.getMaxHeapSize();
  }

  if (!!request.hasMaxPermSize()) {
    query["MaxPermSize"] = request.getMaxPermSize();
  }

  if (!!request.hasMem()) {
    query["Mem"] = request.getMem();
  }

  if (!!request.hasMinHeapSize()) {
    query["MinHeapSize"] = request.getMinHeapSize();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasReservedPortStr()) {
    query["ReservedPortStr"] = request.getReservedPortStr();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.getWebContainer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_create_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertApplicationResponse>();
}

/**
 * @summary Creates an application in an ECS cluster.
 *
 * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation.
 *
 * @param request InsertApplicationRequest
 * @return InsertApplicationResponse
 */
InsertApplicationResponse Client::insertApplication(const InsertApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a cluster.
 *
 * @param request InsertClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertClusterResponse
 */
InsertClusterResponse Client::insertClusterWithOptions(const InsertClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasIaasProvider()) {
    query["IaasProvider"] = request.getIaasProvider();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasNetworkMode()) {
    query["NetworkMode"] = request.getNetworkMode();
  }

  if (!!request.hasOversoldFactor()) {
    query["OversoldFactor"] = request.getOversoldFactor();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertClusterResponse>();
}

/**
 * @summary Creates a cluster.
 *
 * @param request InsertClusterRequest
 * @return InsertClusterResponse
 */
InsertClusterResponse Client::insertCluster(const InsertClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Imports Elastic Compute Service (ECS) instances into an ECS cluster.
 *
 * @description ##
 * If you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all original data of the ECS instance is deleted. In addition, you must set a logon password for the ECS instance. Make sure that no important data exists on the ECS instance that you want to import or data has been backed up for the ECS instance.
 * > We recommend that you call the InstallAgent operation instead of this operation. For more information, see [InstallAgent](https://help.aliyun.com/document_detail/127023.html).
 *
 * @param request InsertClusterMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertClusterMemberResponse
 */
InsertClusterMemberResponse Client::insertClusterMemberWithOptions(const InsertClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["clusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceIds()) {
    query["instanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPassword()) {
    query["password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertClusterMember"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster_member")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertClusterMemberResponse>();
}

/**
 * @summary Imports Elastic Compute Service (ECS) instances into an ECS cluster.
 *
 * @description ##
 * If you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all original data of the ECS instance is deleted. In addition, you must set a logon password for the ECS instance. Make sure that no important data exists on the ECS instance that you want to import or data has been backed up for the ECS instance.
 * > We recommend that you call the InstallAgent operation instead of this operation. For more information, see [InstallAgent](https://help.aliyun.com/document_detail/127023.html).
 *
 * @param request InsertClusterMemberRequest
 * @return InsertClusterMemberResponse
 */
InsertClusterMemberResponse Client::insertClusterMember(const InsertClusterMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertClusterMemberWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an instance group for a specified application.
 *
 * @param request InsertDeployGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertDeployGroupResponse
 */
InsertDeployGroupResponse Client::insertDeployGroupWithOptions(const InsertDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInitPackageVersionId()) {
    query["InitPackageVersionId"] = request.getInitPackageVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertDeployGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/deploy_group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertDeployGroupResponse>();
}

/**
 * @summary Creates an instance group for a specified application.
 *
 * @param request InsertDeployGroupRequest
 * @return InsertDeployGroupResponse
 */
InsertDeployGroupResponse Client::insertDeployGroup(const InsertDeployGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertDeployGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an application in a Kubernetes cluster or a Serverless Kubernetes cluster.
 *
 * @param request InsertK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertK8sApplicationResponse
 */
InsertK8sApplicationResponse Client::insertK8sApplicationWithOptions(const InsertK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasAppConfig()) {
    query["AppConfig"] = request.getAppConfig();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppTemplateName()) {
    query["AppTemplateName"] = request.getAppTemplateName();
  }

  if (!!request.hasApplicationDescription()) {
    query["ApplicationDescription"] = request.getApplicationDescription();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.getBuildPackId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.getCommandArgs();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.getConfigMountDescs();
  }

  if (!!request.hasContainerRegistryId()) {
    query["ContainerRegistryId"] = request.getContainerRegistryId();
  }

  if (!!request.hasCsClusterId()) {
    query["CsClusterId"] = request.getCsClusterId();
  }

  if (!!request.hasCustomAffinity()) {
    query["CustomAffinity"] = request.getCustomAffinity();
  }

  if (!!request.hasCustomAgentVersion()) {
    query["CustomAgentVersion"] = request.getCustomAgentVersion();
  }

  if (!!request.hasCustomTolerations()) {
    query["CustomTolerations"] = request.getCustomTolerations();
  }

  if (!!request.hasDeployAcrossNodes()) {
    query["DeployAcrossNodes"] = request.getDeployAcrossNodes();
  }

  if (!!request.hasDeployAcrossZones()) {
    query["DeployAcrossZones"] = request.getDeployAcrossZones();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.getEdasContainerVersion();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.getEmptyDirs();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.getEnableAhas();
  }

  if (!!request.hasEnableAsm()) {
    query["EnableAsm"] = request.getEnableAsm();
  }

  if (!!request.hasEnableEmptyPushReject()) {
    query["EnableEmptyPushReject"] = request.getEnableEmptyPushReject();
  }

  if (!!request.hasEnableLosslessRule()) {
    query["EnableLosslessRule"] = request.getEnableLosslessRule();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.getEnvFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.getEnvs();
  }

  if (!!request.hasFeatureConfig()) {
    query["FeatureConfig"] = request.getFeatureConfig();
  }

  if (!!request.hasImagePlatforms()) {
    query["ImagePlatforms"] = request.getImagePlatforms();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.getInitContainers();
  }

  if (!!request.hasInternetSlbId()) {
    query["InternetSlbId"] = request.getInternetSlbId();
  }

  if (!!request.hasInternetSlbPort()) {
    query["InternetSlbPort"] = request.getInternetSlbPort();
  }

  if (!!request.hasInternetSlbProtocol()) {
    query["InternetSlbProtocol"] = request.getInternetSlbProtocol();
  }

  if (!!request.hasInternetTargetPort()) {
    query["InternetTargetPort"] = request.getInternetTargetPort();
  }

  if (!!request.hasIntranetSlbId()) {
    query["IntranetSlbId"] = request.getIntranetSlbId();
  }

  if (!!request.hasIntranetSlbPort()) {
    query["IntranetSlbPort"] = request.getIntranetSlbPort();
  }

  if (!!request.hasIntranetSlbProtocol()) {
    query["IntranetSlbProtocol"] = request.getIntranetSlbProtocol();
  }

  if (!!request.hasIntranetTargetPort()) {
    query["IntranetTargetPort"] = request.getIntranetTargetPort();
  }

  if (!!request.hasIsMultilingualApp()) {
    query["IsMultilingualApp"] = request.getIsMultilingualApp();
  }

  if (!!request.hasJDK()) {
    query["JDK"] = request.getJDK();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.getJavaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasLimitCpu()) {
    query["LimitCpu"] = request.getLimitCpu();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.getLimitEphemeralStorage();
  }

  if (!!request.hasLimitMem()) {
    query["LimitMem"] = request.getLimitMem();
  }

  if (!!request.hasLimitmCpu()) {
    query["LimitmCpu"] = request.getLimitmCpu();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.getLiveness();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.getLocalVolume();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasLosslessRuleAligned()) {
    query["LosslessRuleAligned"] = request.getLosslessRuleAligned();
  }

  if (!!request.hasLosslessRuleDelayTime()) {
    query["LosslessRuleDelayTime"] = request.getLosslessRuleDelayTime();
  }

  if (!!request.hasLosslessRuleFuncType()) {
    query["LosslessRuleFuncType"] = request.getLosslessRuleFuncType();
  }

  if (!!request.hasLosslessRuleRelated()) {
    query["LosslessRuleRelated"] = request.getLosslessRuleRelated();
  }

  if (!!request.hasLosslessRuleWarmupTime()) {
    query["LosslessRuleWarmupTime"] = request.getLosslessRuleWarmupTime();
  }

  if (!!request.hasMountDescs()) {
    query["MountDescs"] = request.getMountDescs();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.getNasId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.getPackageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.getPackageVersion();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.getPostStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.getPreStop();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.getPvcMountDescs();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.getReadiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.getRepoId();
  }

  if (!!request.hasRequestsCpu()) {
    query["RequestsCpu"] = request.getRequestsCpu();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.getRequestsEphemeralStorage();
  }

  if (!!request.hasRequestsMem()) {
    query["RequestsMem"] = request.getRequestsMem();
  }

  if (!!request.hasRequestsmCpu()) {
    query["RequestsmCpu"] = request.getRequestsmCpu();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuntimeClassName()) {
    query["RuntimeClassName"] = request.getRuntimeClassName();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.getSecretName();
  }

  if (!!request.hasSecurityContext()) {
    query["SecurityContext"] = request.getSecurityContext();
  }

  if (!!request.hasServiceConfigs()) {
    query["ServiceConfigs"] = request.getServiceConfigs();
  }

  if (!!request.hasSidecars()) {
    query["Sidecars"] = request.getSidecars();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.getSlsConfigs();
  }

  if (!!request.hasStartup()) {
    query["Startup"] = request.getStartup();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTerminateGracePeriod()) {
    query["TerminateGracePeriod"] = request.getTerminateGracePeriod();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasUriEncoding()) {
    query["UriEncoding"] = request.getUriEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.getUseBodyEncoding();
  }

  if (!!request.hasUserBaseImageUrl()) {
    query["UserBaseImageUrl"] = request.getUserBaseImageUrl();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.getWebContainer();
  }

  if (!!request.hasWebContainerConfig()) {
    query["WebContainerConfig"] = request.getWebContainerConfig();
  }

  if (!!request.hasWorkloadType()) {
    query["WorkloadType"] = request.getWorkloadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/create_k8s_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertK8sApplicationResponse>();
}

/**
 * @summary Creates an application in a Kubernetes cluster or a Serverless Kubernetes cluster.
 *
 * @param request InsertK8sApplicationRequest
 * @return InsertK8sApplicationResponse
 */
InsertK8sApplicationResponse Client::insertK8sApplication(const InsertK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Creates or edits a custom namespace.
 *
 * @param request InsertOrUpdateRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertOrUpdateRegionResponse
 */
InsertOrUpdateRegionResponse Client::insertOrUpdateRegionWithOptions(const InsertOrUpdateRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDebugEnable()) {
    query["DebugEnable"] = request.getDebugEnable();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMseInstanceId()) {
    query["MseInstanceId"] = request.getMseInstanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.getRegionTag();
  }

  if (!!request.hasRegistryType()) {
    query["RegistryType"] = request.getRegistryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertOrUpdateRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/user_region_def")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertOrUpdateRegionResponse>();
}

/**
 * @summary Creates or edits a custom namespace.
 *
 * @param request InsertOrUpdateRegionRequest
 * @return InsertOrUpdateRegionResponse
 */
InsertOrUpdateRegionResponse Client::insertOrUpdateRegion(const InsertOrUpdateRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertOrUpdateRegionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a role.
 *
 * @param request InsertRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertRoleResponse
 */
InsertRoleResponse Client::insertRoleWithOptions(const InsertRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionData()) {
    query["ActionData"] = request.getActionData();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/create_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertRoleResponse>();
}

/**
 * @summary Creates a role.
 *
 * @param request InsertRoleRequest
 * @return InsertRoleResponse
 */
InsertRoleResponse Client::insertRole(const InsertRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a service group.
 *
 * @param request InsertServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertServiceGroupResponse
 */
InsertServiceGroupResponse Client::insertServiceGroupWithOptions(const InsertServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertServiceGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/serviceGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertServiceGroupResponse>();
}

/**
 * @summary Creates a service group.
 *
 * @param request InsertServiceGroupRequest
 * @return InsertServiceGroupResponse
 */
InsertServiceGroupResponse Client::insertServiceGroup(const InsertServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a lane.
 *
 * @param request InsertSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertSwimmingLaneResponse
 */
InsertSwimmingLaneResponse Client::insertSwimmingLaneWithOptions(const InsertSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInfos()) {
    query["AppInfos"] = request.getAppInfos();
  }

  if (!!request.hasEnableRules()) {
    query["EnableRules"] = request.getEnableRules();
  }

  if (!!request.hasEntryRules()) {
    query["EntryRules"] = request.getEntryRules();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertSwimmingLane"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lanes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertSwimmingLaneResponse>();
}

/**
 * @summary Creates a lane.
 *
 * @param request InsertSwimmingLaneRequest
 * @return InsertSwimmingLaneResponse
 */
InsertSwimmingLaneResponse Client::insertSwimmingLane(const InsertSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a lane group.
 *
 * @param request InsertSwimmingLaneGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertSwimmingLaneGroupResponse
 */
InsertSwimmingLaneGroupResponse Client::insertSwimmingLaneGroupWithOptions(const InsertSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasEntryApp()) {
    query["EntryApp"] = request.getEntryApp();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertSwimmingLaneGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lane_groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertSwimmingLaneGroupResponse>();
}

/**
 * @summary Creates a lane group.
 *
 * @param request InsertSwimmingLaneGroupRequest
 * @return InsertSwimmingLaneGroupResponse
 */
InsertSwimmingLaneGroupResponse Client::insertSwimmingLaneGroup(const InsertSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return insertSwimmingLaneGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Uses the Cloud Assistant provided by Elastic Compute Service (ECS) to install Enterprise Distributed Application Service (EDAS) Agent and imports ECS instances to EDAS.
 *
 * @description If you call this operation to import an ECS instance into EDAS, the operating system of the ECS instance is not reinstalled. We recommend that you call this operation to import ECS instances into EDAS.
 *
 * @param request InstallAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAgentResponse
 */
InstallAgentResponse Client::installAgentWithOptions(const InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDoAsync()) {
    query["DoAsync"] = request.getDoAsync();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/ecss/install_agent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAgentResponse>();
}

/**
 * @summary Uses the Cloud Assistant provided by Elastic Compute Service (ECS) to install Enterprise Distributed Application Service (EDAS) Agent and imports ECS instances to EDAS.
 *
 * @description If you call this operation to import an ECS instance into EDAS, the operating system of the ECS instance is not reinstalled. We recommend that you call this operation to import ECS instances into EDAS.
 *
 * @param request InstallAgentRequest
 * @return InstallAgentResponse
 */
InstallAgentResponse Client::installAgent(const InstallAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installAgentWithOptions(request, headers, runtime);
}

/**
 * @summary Queries Alibaba Cloud regions supported by Enterprise Distributed Application Service (EDAS).
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliyunRegionResponse
 */
ListAliyunRegionResponse Client::listAliyunRegionWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAliyunRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/region_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAliyunRegionResponse>();
}

/**
 * @summary Queries Alibaba Cloud regions supported by Enterprise Distributed Application Service (EDAS).
 *
 * @return ListAliyunRegionResponse
 */
ListAliyunRegionResponse Client::listAliyunRegion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAliyunRegionWithOptions(headers, runtime);
}

/**
 * @summary Retrieves the list of applications.
 *
 * @param request ListApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplicationWithOptions(const ListApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasLogicalRegionIdFilter()) {
    query["LogicalRegionIdFilter"] = request.getLogicalRegionIdFilter();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/app_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationResponse>();
}

/**
 * @summary Retrieves the list of applications.
 *
 * @param request ListApplicationRequest
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplication(const ListApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries elastic compute units (ECUs).
 *
 * @param request ListApplicationEcuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationEcuResponse
 */
ListApplicationEcuResponse Client::listApplicationEcuWithOptions(const ListApplicationEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationEcu"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/ecu_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationEcuResponse>();
}

/**
 * @summary Queries elastic compute units (ECUs).
 *
 * @param request ListApplicationEcuRequest
 * @return ListApplicationEcuResponse
 */
ListApplicationEcuResponse Client::listApplicationEcu(const ListApplicationEcuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationEcuWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all permissions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorityResponse
 */
ListAuthorityResponse Client::listAuthorityWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthority"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/authority_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorityResponse>();
}

/**
 * @summary Queries all permissions.
 *
 * @return ListAuthorityResponse
 */
ListAuthorityResponse Client::listAuthority() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorityWithOptions(headers, runtime);
}

/**
 * @summary Calls the ListBuildPack operation to retrieve the list of container versions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBuildPackResponse
 */
ListBuildPackResponse Client::listBuildPackWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBuildPack"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/build_pack_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBuildPackResponse>();
}

/**
 * @summary Calls the ListBuildPack operation to retrieve the list of container versions.
 *
 * @return ListBuildPackResponse
 */
ListBuildPackResponse Client::listBuildPack() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBuildPackWithOptions(headers, runtime);
}

/**
 * @summary Queries clusters.
 *
 * @param request ListClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterResponse
 */
ListClusterResponse Client::listClusterWithOptions(const ListClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterResponse>();
}

/**
 * @summary Queries clusters.
 *
 * @param request ListClusterRequest
 * @return ListClusterResponse
 */
ListClusterResponse Client::listCluster(const ListClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Queries Elastic Compute Service (ECS) instances in a cluster.
 *
 * @param request ListClusterMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterMembersResponse
 */
ListClusterMembersResponse Client::listClusterMembersWithOptions(const ListClusterMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEcsList()) {
    query["EcsList"] = request.getEcsList();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterMembers"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/cluster_member_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterMembersResponse>();
}

/**
 * @summary Queries Elastic Compute Service (ECS) instances in a cluster.
 *
 * @param request ListClusterMembersRequest
 * @return ListClusterMembersResponse
 */
ListClusterMembersResponse Client::listClusterMembers(const ListClusterMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the components that are related to applications in Elastic Compute Service (ECS) clusters.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/components")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary Queries the components that are related to applications in Elastic Compute Service (ECS) clusters.
 *
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComponentsWithOptions(headers, runtime);
}

/**
 * @summary Queries configuration templates.
 *
 * @param request ListConfigTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigTemplatesResponse
 */
ListConfigTemplatesResponse Client::listConfigTemplatesWithOptions(const ListConfigTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigTemplates"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/config_template")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigTemplatesResponse>();
}

/**
 * @summary Queries configuration templates.
 *
 * @param request ListConfigTemplatesRequest
 * @return ListConfigTemplatesResponse
 */
ListConfigTemplatesResponse Client::listConfigTemplates(const ListConfigTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConfigTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries consumed services.
 *
 * @param request ListConsumedServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumedServicesResponse
 */
ListConsumedServicesResponse Client::listConsumedServicesWithOptions(const ListConsumedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConsumedServices"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/listConsumedServices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumedServicesResponse>();
}

/**
 * @summary Queries consumed services.
 *
 * @param request ListConsumedServicesRequest
 * @return ListConsumedServicesResponse
 */
ListConsumedServicesResponse Client::listConsumedServices(const ListConsumedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumedServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Elastic Compute Service (ECS) instances that can be imported to a specified cluster. This operation is applicable to ECS clusters.
 *
 * @param request ListConvertableEcuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConvertableEcuResponse
 */
ListConvertableEcuResponse Client::listConvertableEcuWithOptions(const ListConvertableEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["clusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConvertableEcu"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/convertable_ecu_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConvertableEcuResponse>();
}

/**
 * @summary Queries the Elastic Compute Service (ECS) instances that can be imported to a specified cluster. This operation is applicable to ECS clusters.
 *
 * @param request ListConvertableEcuRequest
 * @return ListConvertableEcuResponse
 */
ListConvertableEcuResponse Client::listConvertableEcu(const ListConvertableEcuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConvertableEcuWithOptions(request, headers, runtime);
}

/**
 * @summary Call the ListDeployGroup operation to obtain a list of deployment groups.
 *
 * @param request ListDeployGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeployGroupResponse
 */
ListDeployGroupResponse Client::listDeployGroupWithOptions(const ListDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeployGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/deploy_group_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeployGroupResponse>();
}

/**
 * @summary Call the ListDeployGroup operation to obtain a list of deployment groups.
 *
 * @param request ListDeployGroupRequest
 * @return ListDeployGroupResponse
 */
ListDeployGroupResponse Client::listDeployGroup(const ListDeployGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeployGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all Elastic Compute Service (ECS) instances that have not been imported to clusters.
 *
 * @param request ListEcsNotInClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEcsNotInClusterResponse
 */
ListEcsNotInClusterResponse Client::listEcsNotInClusterWithOptions(const ListEcsNotInClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkMode()) {
    query["NetworkMode"] = request.getNetworkMode();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEcsNotInCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/ecs_not_in_cluster")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEcsNotInClusterResponse>();
}

/**
 * @summary Queries all Elastic Compute Service (ECS) instances that have not been imported to clusters.
 *
 * @param request ListEcsNotInClusterRequest
 * @return ListEcsNotInClusterResponse
 */
ListEcsNotInClusterResponse Client::listEcsNotInCluster(const ListEcsNotInClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEcsNotInClusterWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the available elastic compute units (ECUs) in a specified namespace.
 *
 * @description ## Terms
 * - **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * - **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
 *
 * @param request ListEcuByRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEcuByRegionResponse
 */
ListEcuByRegionResponse Client::listEcuByRegionWithOptions(const ListEcuByRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAct()) {
    query["Act"] = request.getAct();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEcuByRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/ecu_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEcuByRegionResponse>();
}

/**
 * @summary Queries the available elastic compute units (ECUs) in a specified namespace.
 *
 * @description ## Terms
 * - **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * - **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
 *
 * @param request ListEcuByRegionRequest
 * @return ListEcuByRegionResponse
 */
ListEcuByRegionResponse Client::listEcuByRegion(const ListEcuByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEcuByRegionWithOptions(request, headers, runtime);
}

/**
 * @summary Queries historical deployment packages of an application.
 *
 * @param request ListHistoryDeployVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoryDeployVersionResponse
 */
ListHistoryDeployVersionResponse Client::listHistoryDeployVersionWithOptions(const ListHistoryDeployVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHistoryDeployVersion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/deploy_history_version_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHistoryDeployVersionResponse>();
}

/**
 * @summary Queries historical deployment packages of an application.
 *
 * @param request ListHistoryDeployVersionRequest
 * @return ListHistoryDeployVersionResponse
 */
ListHistoryDeployVersionResponse Client::listHistoryDeployVersion(const ListHistoryDeployVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHistoryDeployVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Queries Kubernetes ConfigMaps.
 *
 * @param request ListK8sConfigMapsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8sConfigMapsResponse
 */
ListK8sConfigMapsResponse Client::listK8sConfigMapsWithOptions(const ListK8sConfigMapsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasShowRelatedApps()) {
    query["ShowRelatedApps"] = request.getShowRelatedApps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8sConfigMaps"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_config_map")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8sConfigMapsResponse>();
}

/**
 * @summary Queries Kubernetes ConfigMaps.
 *
 * @param request ListK8sConfigMapsRequest
 * @return ListK8sConfigMapsResponse
 */
ListK8sConfigMapsResponse Client::listK8sConfigMaps(const ListK8sConfigMapsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listK8sConfigMapsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries ingresses.
 *
 * @param request ListK8sIngressRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8sIngressRulesResponse
 */
ListK8sIngressRulesResponse Client::listK8sIngressRulesWithOptions(const ListK8sIngressRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8sIngressRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_ingress")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8sIngressRulesResponse>();
}

/**
 * @summary Queries ingresses.
 *
 * @param request ListK8sIngressRulesRequest
 * @return ListK8sIngressRulesResponse
 */
ListK8sIngressRulesResponse Client::listK8sIngressRules(const ListK8sIngressRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listK8sIngressRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries namespaces for a Kubernetes cluster.
 *
 * @param request ListK8sNamespacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8sNamespacesResponse
 */
ListK8sNamespacesResponse Client::listK8sNamespacesWithOptions(const ListK8sNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8sNamespaces"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_namespace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8sNamespacesResponse>();
}

/**
 * @summary Queries namespaces for a Kubernetes cluster.
 *
 * @param request ListK8sNamespacesRequest
 * @return ListK8sNamespacesResponse
 */
ListK8sNamespacesResponse Client::listK8sNamespaces(const ListK8sNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listK8sNamespacesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries Kubernetes Secrets.
 *
 * @param request ListK8sSecretsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8sSecretsResponse
 */
ListK8sSecretsResponse Client::listK8sSecretsWithOptions(const ListK8sSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasShowRelatedApps()) {
    query["ShowRelatedApps"] = request.getShowRelatedApps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8sSecrets"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_secret")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8sSecretsResponse>();
}

/**
 * @summary Queries Kubernetes Secrets.
 *
 * @param request ListK8sSecretsRequest
 * @return ListK8sSecretsResponse
 */
ListK8sSecretsResponse Client::listK8sSecrets(const ListK8sSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listK8sSecretsWithOptions(request, headers, runtime);
}

/**
 * @summary You can call the ListMethods operation to query a list of service methods.
 *
 * @param request ListMethodsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMethodsResponse
 */
ListMethodsResponse Client::listMethodsWithOptions(const ListMethodsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMethods"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/list_methods")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMethodsResponse>();
}

/**
 * @summary You can call the ListMethods operation to query a list of service methods.
 *
 * @param request ListMethodsRequest
 * @return ListMethodsResponse
 */
ListMethodsResponse Client::listMethods(const ListMethodsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMethodsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries published services.
 *
 * @param request ListPublishedServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedServicesResponse
 */
ListPublishedServicesResponse Client::listPublishedServicesWithOptions(const ListPublishedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublishedServices"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/listPublishedServices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublishedServicesResponse>();
}

/**
 * @summary Queries published services.
 *
 * @param request ListPublishedServicesRequest
 * @return ListPublishedServicesResponse
 */
ListPublishedServicesResponse Client::listPublishedServices(const ListPublishedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPublishedServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the change processes of an application.
 *
 * @param request ListRecentChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentChangeOrderResponse
 */
ListRecentChangeOrderResponse Client::listRecentChangeOrderWithOptions(const ListRecentChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecentChangeOrder"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/change_order_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentChangeOrderResponse>();
}

/**
 * @summary Queries the change processes of an application.
 *
 * @param request ListRecentChangeOrderRequest
 * @return ListRecentChangeOrderResponse
 */
ListRecentChangeOrderResponse Client::listRecentChangeOrder(const ListRecentChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecentChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Queries resource groups.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupResponse
 */
ListResourceGroupResponse Client::listResourceGroupWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/reg_group_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupResponse>();
}

/**
 * @summary Queries resource groups.
 *
 * @return ListResourceGroupResponse
 */
ListResourceGroupResponse Client::listResourceGroup() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceGroupWithOptions(headers, runtime);
}

/**
 * @summary Queries a list of roles.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoleResponse
 */
ListRoleResponse Client::listRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/role_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoleResponse>();
}

/**
 * @summary Queries a list of roles.
 *
 * @return ListRoleResponse
 */
ListRoleResponse Client::listRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRoleWithOptions(headers, runtime);
}

/**
 * @summary Queries elastic compute units (ECUs) available for scaling out an application in a specified cluster or the cluster where the application is deployed. This operation is applicable to Elastic Compute Service (ECS) clusters.
 *
 * @description ## Terms
 * - **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * - **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
 *
 * @param request ListScaleOutEcuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScaleOutEcuResponse
 */
ListScaleOutEcuResponse Client::listScaleOutEcuWithOptions(const ListScaleOutEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceNum()) {
    query["InstanceNum"] = request.getInstanceNum();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  if (!!request.hasMem()) {
    query["Mem"] = request.getMem();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScaleOutEcu"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/scale_out_ecu_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScaleOutEcuResponse>();
}

/**
 * @summary Queries elastic compute units (ECUs) available for scaling out an application in a specified cluster or the cluster where the application is deployed. This operation is applicable to Elastic Compute Service (ECS) clusters.
 *
 * @description ## Terms
 * - **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * - **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
 *
 * @param request ListScaleOutEcuRequest
 * @return ListScaleOutEcuResponse
 */
ListScaleOutEcuResponse Client::listScaleOutEcu(const ListScaleOutEcuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScaleOutEcuWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the service groups of a High-Speed Service Framework (HSF) application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceGroupsResponse
 */
ListServiceGroupsResponse Client::listServiceGroupsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceGroups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/service/serviceGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceGroupsResponse>();
}

/**
 * @summary Queries the service groups of a High-Speed Service Framework (HSF) application.
 *
 * @return ListServiceGroupsResponse
 */
ListServiceGroupsResponse Client::listServiceGroups() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceGroupsWithOptions(headers, runtime);
}

/**
 * @summary Retrieves a list of SLB instances.
 *
 * @param request ListSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSlbResponse
 */
ListSlbResponse Client::listSlbWithOptions(const ListSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasSlbType()) {
    query["SlbType"] = request.getSlbType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/slb_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSlbResponse>();
}

/**
 * @summary Retrieves a list of SLB instances.
 *
 * @param request ListSlbRequest
 * @return ListSlbResponse
 */
ListSlbResponse Client::listSlb(const ListSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of Resource Access Management (RAM) users.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubAccountResponse
 */
ListSubAccountResponse Client::listSubAccountWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubAccount"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/sub_account_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubAccountResponse>();
}

/**
 * @summary Queries a list of Resource Access Management (RAM) users.
 *
 * @return ListSubAccountResponse
 */
ListSubAccountResponse Client::listSubAccount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubAccountWithOptions(headers, runtime);
}

/**
 * @summary Queries lanes in a lane group.
 *
 * @param request ListSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSwimmingLaneResponse
 */
ListSwimmingLaneResponse Client::listSwimmingLaneWithOptions(const ListSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSwimmingLane"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lanes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSwimmingLaneResponse>();
}

/**
 * @summary Queries lanes in a lane group.
 *
 * @param request ListSwimmingLaneRequest
 * @return ListSwimmingLaneResponse
 */
ListSwimmingLaneResponse Client::listSwimmingLane(const ListSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Queries lane groups.
 *
 * @param request ListSwimmingLaneGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSwimmingLaneGroupResponse
 */
ListSwimmingLaneGroupResponse Client::listSwimmingLaneGroupWithOptions(const ListSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSwimmingLaneGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lane_groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSwimmingLaneGroupResponse>();
}

/**
 * @summary Queries lane groups.
 *
 * @param request ListSwimmingLaneGroupRequest
 * @return ListSwimmingLaneGroupResponse
 */
ListSwimmingLaneGroupResponse Client::listSwimmingLaneGroup(const ListSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSwimmingLaneGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the tags that are added to resources.
 *
 * @param request ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/tag/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are added to resources.
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
 * @summary Queries a list of user-defined namespaces.
 *
 * @param request ListUserDefineRegionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDefineRegionResponse
 */
ListUserDefineRegionResponse Client::listUserDefineRegionWithOptions(const ListUserDefineRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDebugEnable()) {
    query["DebugEnable"] = request.getDebugEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDefineRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/user_region_defs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDefineRegionResponse>();
}

/**
 * @summary Queries a list of user-defined namespaces.
 *
 * @param request ListUserDefineRegionRequest
 * @return ListUserDefineRegionResponse
 */
ListUserDefineRegionResponse Client::listUserDefineRegion(const ListUserDefineRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserDefineRegionWithOptions(request, headers, runtime);
}

/**
 * @summary Queries virtual private clouds (VPCs). This operation is applicable to Elastic Compute Service (ECS) clusters and Kubernetes clusters.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcResponse
 */
ListVpcResponse Client::listVpcWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpc"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/vpc_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcResponse>();
}

/**
 * @summary Queries virtual private clouds (VPCs). This operation is applicable to Elastic Compute Service (ECS) clusters and Kubernetes clusters.
 *
 * @return ListVpcResponse
 */
ListVpcResponse Client::listVpc() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcWithOptions(headers, runtime);
}

/**
 * @summary Migrates an application.
 *
 * @description > For application deployment in a container service Kubernetes cluster imported to Enterprise Distributed Application Service (EDAS), use the DeployK8sApplication operation provided by EDAS. For more information, see [DeployK8sApplication](https://help.aliyun.com/document_detail/149420.html).
 *
 * @param request MigrateApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateApplicationResponse
 */
MigrateApplicationResponse Client::migrateApplicationWithOptions(const MigrateApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["appIds"] = request.getAppIds();
  }

  if (!!request.hasCmd()) {
    query["cmd"] = request.getCmd();
  }

  if (!!request.hasConfig()) {
    query["config"] = request.getConfig();
  }

  if (!!request.hasRawData()) {
    query["rawData"] = request.getRawData();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/migrateK8sApp")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateApplicationResponse>();
}

/**
 * @summary Migrates an application.
 *
 * @description > For application deployment in a container service Kubernetes cluster imported to Enterprise Distributed Application Service (EDAS), use the DeployK8sApplication operation provided by EDAS. For more information, see [DeployK8sApplication](https://help.aliyun.com/document_detail/149420.html).
 *
 * @param request MigrateApplicationRequest
 * @return MigrateApplicationResponse
 */
MigrateApplicationResponse Client::migrateApplication(const MigrateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Transfers an ECU to the default cluster in a specified namespace.
 *
 * @description ## Usage notes
 * This API operation is deprecated. Use the TransformClusterMember operation instead. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
 * This operation imports an Elastic Compute Service (ECS) instance and reinstalls its operating system. This process deletes all data on the instance. You must also reset the logon password. Before you import an instance, back up its data or make sure it contains no important data.
 * ## Terms
 * - **Namespace**: A logical concept in Enterprise Distributed Application Service (EDAS) used to isolate resources and microservices. Resources include clusters, ECS instances, and applications. Namespaces can be default or custom. Each region has one default namespace and can have multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **ECU**: An ECS instance becomes an Elastic Compute Unit (ECU) after it is imported into a cluster.
 * - **ECC**: An ECU in a cluster becomes an Elastic Compute Container (ECC) after it is deployed in an application.
 *
 * @param request MigrateEcuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateEcuResponse
 */
MigrateEcuResponse Client::migrateEcuWithOptions(const MigrateEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateEcu"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/migrate_ecu")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateEcuResponse>();
}

/**
 * @summary Transfers an ECU to the default cluster in a specified namespace.
 *
 * @description ## Usage notes
 * This API operation is deprecated. Use the TransformClusterMember operation instead. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
 * This operation imports an Elastic Compute Service (ECS) instance and reinstalls its operating system. This process deletes all data on the instance. You must also reset the logon password. Before you import an instance, back up its data or make sure it contains no important data.
 * ## Terms
 * - **Namespace**: A logical concept in Enterprise Distributed Application Service (EDAS) used to isolate resources and microservices. Resources include clusters, ECS instances, and applications. Namespaces can be default or custom. Each region has one default namespace and can have multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * - **ECU**: An ECS instance becomes an Elastic Compute Unit (ECU) after it is imported into a cluster.
 * - **ECC**: An ECU in a cluster becomes an Elastic Compute Container (ECC) after it is deployed in an application.
 *
 * @param request MigrateEcuRequest
 * @return MigrateEcuResponse
 */
MigrateEcuResponse Client::migrateEcu(const MigrateEcuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateEcuWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the scaling rule for an application.
 *
 * @param request ModifyScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRuleWithOptions(const ModifyScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptEULA()) {
    query["AcceptEULA"] = request.getAcceptEULA();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInCondition()) {
    query["InCondition"] = request.getInCondition();
  }

  if (!!request.hasInCpu()) {
    query["InCpu"] = request.getInCpu();
  }

  if (!!request.hasInDuration()) {
    query["InDuration"] = request.getInDuration();
  }

  if (!!request.hasInEnable()) {
    query["InEnable"] = request.getInEnable();
  }

  if (!!request.hasInInstanceNum()) {
    query["InInstanceNum"] = request.getInInstanceNum();
  }

  if (!!request.hasInLoad()) {
    query["InLoad"] = request.getInLoad();
  }

  if (!!request.hasInRT()) {
    query["InRT"] = request.getInRT();
  }

  if (!!request.hasInStep()) {
    query["InStep"] = request.getInStep();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasMultiAzPolicy()) {
    query["MultiAzPolicy"] = request.getMultiAzPolicy();
  }

  if (!!request.hasOutCPU()) {
    query["OutCPU"] = request.getOutCPU();
  }

  if (!!request.hasOutCondition()) {
    query["OutCondition"] = request.getOutCondition();
  }

  if (!!request.hasOutDuration()) {
    query["OutDuration"] = request.getOutDuration();
  }

  if (!!request.hasOutEnable()) {
    query["OutEnable"] = request.getOutEnable();
  }

  if (!!request.hasOutInstanceNum()) {
    query["OutInstanceNum"] = request.getOutInstanceNum();
  }

  if (!!request.hasOutLoad()) {
    query["OutLoad"] = request.getOutLoad();
  }

  if (!!request.hasOutRT()) {
    query["OutRT"] = request.getOutRT();
  }

  if (!!request.hasOutStep()) {
    query["OutStep"] = request.getOutStep();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasResourceFrom()) {
    query["ResourceFrom"] = request.getResourceFrom();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.getScalingPolicy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateInstanceId()) {
    query["TemplateInstanceId"] = request.getTemplateInstanceId();
  }

  if (!!request.hasTemplateInstanceName()) {
    query["TemplateInstanceName"] = request.getTemplateInstanceName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.getTemplateVersion();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/scaling_rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScalingRuleResponse>();
}

/**
 * @summary Modifies the scaling rule for an application.
 *
 * @param request ModifyScalingRuleRequest
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRule(const ModifyScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of an application.
 *
 * @param request QueryApplicationStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryApplicationStatusResponse
 */
QueryApplicationStatusResponse Client::queryApplicationStatusWithOptions(const QueryApplicationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryApplicationStatus"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/app_status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryApplicationStatusResponse>();
}

/**
 * @summary Queries the status of an application.
 *
 * @param request QueryApplicationStatusRequest
 * @return QueryApplicationStatusResponse
 */
QueryApplicationStatusResponse Client::queryApplicationStatus(const QueryApplicationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryApplicationStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Queries details about an elastic compute container (ECC). This operation is applicable to Container Service for Kubernetes (ACK) clusters.
 *
 * @param request QueryEccInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEccInfoResponse
 */
QueryEccInfoResponse Client::queryEccInfoWithOptions(const QueryEccInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEccId()) {
    query["EccId"] = request.getEccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEccInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/ecc")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEccInfoResponse>();
}

/**
 * @summary Queries details about an elastic compute container (ECC). This operation is applicable to Container Service for Kubernetes (ACK) clusters.
 *
 * @param request QueryEccInfoRequest
 * @return QueryEccInfoResponse
 */
QueryEccInfoResponse Client::queryEccInfo(const QueryEccInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryEccInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the elastic compute units (ECUs) that can be migrated.
 *
 * @param request QueryMigrateEcuListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMigrateEcuListResponse
 */
QueryMigrateEcuListResponse Client::queryMigrateEcuListWithOptions(const QueryMigrateEcuListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMigrateEcuList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/migrate_ecu_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMigrateEcuListResponse>();
}

/**
 * @summary Queries the elastic compute units (ECUs) that can be migrated.
 *
 * @param request QueryMigrateEcuListRequest
 * @return QueryMigrateEcuListResponse
 */
QueryMigrateEcuListResponse Client::queryMigrateEcuList(const QueryMigrateEcuListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryMigrateEcuListWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the namespaces to which an instance can be migrated.
 *
 * @param request QueryMigrateRegionListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMigrateRegionListResponse
 */
QueryMigrateRegionListResponse Client::queryMigrateRegionListWithOptions(const QueryMigrateRegionListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.getLogicalRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMigrateRegionList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/migrate_region_select")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMigrateRegionListResponse>();
}

/**
 * @summary Queries the namespaces to which an instance can be migrated.
 *
 * @param request QueryMigrateRegionListRequest
 * @return QueryMigrateRegionListResponse
 */
QueryMigrateRegionListResponse Client::queryMigrateRegionList(const QueryMigrateRegionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryMigrateRegionListWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the configurations of different regions that are supported by Enterprise Distributed Application Service (EDAS).
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRegionConfigResponse
 */
QueryRegionConfigResponse Client::queryRegionConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRegionConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/region_config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRegionConfigResponse>();
}

/**
 * @summary Queries the configurations of different regions that are supported by Enterprise Distributed Application Service (EDAS).
 *
 * @return QueryRegionConfigResponse
 */
QueryRegionConfigResponse Client::queryRegionConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryRegionConfigWithOptions(headers, runtime);
}

/**
 * @summary Queries the configuration details of Log Service for an application.
 *
 * @param request QuerySlsLogStoreListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySlsLogStoreListResponse
 */
QuerySlsLogStoreListResponse Client::querySlsLogStoreListWithOptions(const QuerySlsLogStoreListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySlsLogStoreList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/sls/query_sls_log_store_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySlsLogStoreListResponse>();
}

/**
 * @summary Queries the configuration details of Log Service for an application.
 *
 * @param request QuerySlsLogStoreListRequest
 * @return QuerySlsLogStoreListResponse
 */
QuerySlsLogStoreListResponse Client::querySlsLogStoreList(const QuerySlsLogStoreListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySlsLogStoreListWithOptions(request, headers, runtime);
}

/**
 * @summary Resets an application.
 *
 * @param request ResetApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetApplicationResponse
 */
ResetApplicationResponse Client::resetApplicationWithOptions(const ResetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_reset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApplicationResponse>();
}

/**
 * @summary Resets an application.
 *
 * @param request ResetApplicationRequest
 * @return ResetApplicationResponse
 */
ResetApplicationResponse Client::resetApplication(const ResetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Restarts an application. This operation is suitable for applications that are deployed on Elastic Compute Service (ECS) instances.
 *
 * @param request RestartApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartApplicationResponse
 */
RestartApplicationResponse Client::restartApplicationWithOptions(const RestartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartApplicationResponse>();
}

/**
 * @summary Restarts an application. This operation is suitable for applications that are deployed on Elastic Compute Service (ECS) instances.
 *
 * @param request RestartApplicationRequest
 * @return RestartApplicationResponse
 */
RestartApplicationResponse Client::restartApplication(const RestartApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Call the RestartK8sApplication operation to restart an application deployed in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request RestartK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartK8sApplicationResponse
 */
RestartK8sApplicationResponse Client::restartK8sApplicationWithOptions(const RestartK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/restart_k8s_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartK8sApplicationResponse>();
}

/**
 * @summary Call the RestartK8sApplication operation to restart an application deployed in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes (ASK) cluster.
 *
 * @param request RestartK8sApplicationRequest
 * @return RestartK8sApplicationResponse
 */
RestartK8sApplicationResponse Client::restartK8sApplication(const RestartK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Call the RetryChangeOrderTask operation to retry a failed change order task.
 *
 * @param request RetryChangeOrderTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryChangeOrderTaskResponse
 */
RetryChangeOrderTaskResponse Client::retryChangeOrderTaskWithOptions(const RetryChangeOrderTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRetryStatus()) {
    query["RetryStatus"] = request.getRetryStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryChangeOrderTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/task_retry")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryChangeOrderTaskResponse>();
}

/**
 * @summary Call the RetryChangeOrderTask operation to retry a failed change order task.
 *
 * @param request RetryChangeOrderTaskRequest
 * @return RetryChangeOrderTaskResponse
 */
RetryChangeOrderTaskResponse Client::retryChangeOrderTask(const RetryChangeOrderTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryChangeOrderTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Rolls back an application.
 *
 * @param request RollbackApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplicationWithOptions(const RollbackApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBatch()) {
    query["Batch"] = request.getBatch();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.getBatchWaitTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryVersion()) {
    query["HistoryVersion"] = request.getHistoryVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_rollback")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackApplicationResponse>();
}

/**
 * @summary Rolls back an application.
 *
 * @param request RollbackApplicationRequest
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplication(const RollbackApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Terminates an application change process and rolls back the application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
 *
 * @param request RollbackChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackChangeOrderResponse
 */
RollbackChangeOrderResponse Client::rollbackChangeOrderWithOptions(const RollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.getChangeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackChangeOrder"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/changeorder/rollback")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackChangeOrderResponse>();
}

/**
 * @summary Terminates an application change process and rolls back the application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
 *
 * @param request RollbackChangeOrderRequest
 * @return RollbackChangeOrderResponse
 */
RollbackChangeOrderResponse Client::rollbackChangeOrder(const RollbackChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Scales in the instances of an application.
 *
 * @param request ScaleInApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleInApplicationResponse
 */
ScaleInApplicationResponse Client::scaleInApplicationWithOptions(const ScaleInApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  if (!!request.hasForceStatus()) {
    query["ForceStatus"] = request.getForceStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleInApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_scale_in")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleInApplicationResponse>();
}

/**
 * @summary Scales in the instances of an application.
 *
 * @param request ScaleInApplicationRequest
 * @return ScaleInApplicationResponse
 */
ScaleInApplicationResponse Client::scaleInApplication(const ScaleInApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleInApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Scales out or scales down application instances in a Container Service for Kubernetes (K8s) cluster.
 *
 * @param request ScaleK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleK8sApplicationResponse
 */
ScaleK8sApplicationResponse Client::scaleK8sApplicationWithOptions(const ScaleK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_apps")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleK8sApplicationResponse>();
}

/**
 * @summary Scales out or scales down application instances in a Container Service for Kubernetes (K8s) cluster.
 *
 * @param request ScaleK8sApplicationRequest
 * @return ScaleK8sApplicationResponse
 */
ScaleK8sApplicationResponse Client::scaleK8sApplication(const ScaleK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Scales out an application.
 *
 * @param request ScaleOutApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleOutApplicationResponse
 */
ScaleOutApplicationResponse Client::scaleOutApplicationWithOptions(const ScaleOutApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDeployGroup()) {
    query["DeployGroup"] = request.getDeployGroup();
  }

  if (!!request.hasEcuInfo()) {
    query["EcuInfo"] = request.getEcuInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleOutApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_scale_out")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleOutApplicationResponse>();
}

/**
 * @summary Scales out an application.
 *
 * @param request ScaleOutApplicationRequest
 * @return ScaleOutApplicationResponse
 */
ScaleOutApplicationResponse Client::scaleOutApplication(const ScaleOutApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleOutApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Purchases Elastic Compute Service (ECS) instances in the Enterprise Distributed Application Service (EDAS) console and adds the purchased ECS instances to the specified instance group of an application.
 *
 * @description ## Limits
 * Assume that the auto scaling feature is configured and enabled for an application. When an auto scale-in is triggered for the application, the ECS instances that are purchased by calling this operation are removed first.
 *
 * @param request ScaleoutApplicationWithNewInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleoutApplicationWithNewInstancesResponse
 */
ScaleoutApplicationWithNewInstancesResponse Client::scaleoutApplicationWithNewInstancesWithOptions(const ScaleoutApplicationWithNewInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceChargePeriod()) {
    query["InstanceChargePeriod"] = request.getInstanceChargePeriod();
  }

  if (!!request.hasInstanceChargePeriodUnit()) {
    query["InstanceChargePeriodUnit"] = request.getInstanceChargePeriodUnit();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasScalingNum()) {
    query["ScalingNum"] = request.getScalingNum();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.getScalingPolicy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateInstanceId()) {
    query["TemplateInstanceId"] = request.getTemplateInstanceId();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.getTemplateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleoutApplicationWithNewInstances"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/scaling/scale_out")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleoutApplicationWithNewInstancesResponse>();
}

/**
 * @summary Purchases Elastic Compute Service (ECS) instances in the Enterprise Distributed Application Service (EDAS) console and adds the purchased ECS instances to the specified instance group of an application.
 *
 * @description ## Limits
 * Assume that the auto scaling feature is configured and enabled for an application. When an auto scale-in is triggered for the application, the ECS instances that are purchased by calling this operation are removed first.
 *
 * @param request ScaleoutApplicationWithNewInstancesRequest
 * @return ScaleoutApplicationWithNewInstancesResponse
 */
ScaleoutApplicationWithNewInstancesResponse Client::scaleoutApplicationWithNewInstances(const ScaleoutApplicationWithNewInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleoutApplicationWithNewInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Starts an application.
 *
 * @param request StartApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartApplicationResponse
 */
StartApplicationResponse Client::startApplicationWithOptions(const StartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartApplicationResponse>();
}

/**
 * @summary Starts an application.
 *
 * @param request StartApplicationRequest
 * @return StartApplicationResponse
 */
StartApplicationResponse Client::startApplication(const StartApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Starts precheck for Kubernetes application changes.
 *
 * @param request StartK8sAppPrecheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartK8sAppPrecheckResponse
 */
StartK8sAppPrecheckResponse Client::startK8sAppPrecheckWithOptions(const StartK8sAppPrecheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.getComponentIds();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.getConfigMountDescs();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.getEmptyDirs();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.getEnvFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.getEnvs();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.getJavaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.getLimitEphemeralStorage();
  }

  if (!!request.hasLimitMem()) {
    query["LimitMem"] = request.getLimitMem();
  }

  if (!!request.hasLimitmCpu()) {
    query["LimitmCpu"] = request.getLimitmCpu();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.getLocalVolume();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.getPackageUrl();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.getPvcMountDescs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.getRequestsEphemeralStorage();
  }

  if (!!request.hasRequestsMem()) {
    query["RequestsMem"] = request.getRequestsMem();
  }

  if (!!request.hasRequestsmCpu()) {
    query["RequestsmCpu"] = request.getRequestsmCpu();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartK8sAppPrecheck"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/app_precheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartK8sAppPrecheckResponse>();
}

/**
 * @summary Starts precheck for Kubernetes application changes.
 *
 * @param request StartK8sAppPrecheckRequest
 * @return StartK8sAppPrecheckResponse
 */
StartK8sAppPrecheckResponse Client::startK8sAppPrecheck(const StartK8sAppPrecheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startK8sAppPrecheckWithOptions(request, headers, runtime);
}

/**
 * @summary Starts an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes (ASK) cluster.
 *
 * @param request StartK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartK8sApplicationResponse
 */
StartK8sApplicationResponse Client::startK8sApplicationWithOptions(const StartK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/start_k8s_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartK8sApplicationResponse>();
}

/**
 * @summary Starts an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes (ASK) cluster.
 *
 * @param request StartK8sApplicationRequest
 * @return StartK8sApplicationResponse
 */
StartK8sApplicationResponse Client::startK8sApplication(const StartK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Stops an application.
 *
 * @param request StopApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopApplicationResponse
 */
StopApplicationResponse Client::stopApplicationWithOptions(const StopApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.getEccInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopApplicationResponse>();
}

/**
 * @summary Stops an application.
 *
 * @param request StopApplicationRequest
 * @return StopApplicationResponse
 */
StopApplicationResponse Client::stopApplication(const StopApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Stops an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes cluster.
 *
 * @param request StopK8sApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopK8sApplicationResponse
 */
StopK8sApplicationResponse Client::stopK8sApplicationWithOptions(const StopK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopK8sApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/stop_k8s_app")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopK8sApplicationResponse>();
}

/**
 * @summary Stops an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes cluster.
 *
 * @param request StopK8sApplicationRequest
 * @return StopK8sApplicationResponse
 */
StopK8sApplicationResponse Client::stopK8sApplication(const StopK8sApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopK8sApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of the advanced application monitoring feature or configures this feature for an application that is deployed in an Elastic Compute Service (ECS) or Kubernetes cluster.
 *
 * @description To call the SwitchAdvancedMonitoring operation, you must make sure that the version of Enterprise Distributed Application Service (EDAS) SDK for Java or Python is 3.15.2 or later.
 *
 * @param request SwitchAdvancedMonitoringRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchAdvancedMonitoringResponse
 */
SwitchAdvancedMonitoringResponse Client::switchAdvancedMonitoringWithOptions(const SwitchAdvancedMonitoringRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEnableAdvancedMonitoring()) {
    query["EnableAdvancedMonitoring"] = request.getEnableAdvancedMonitoring();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchAdvancedMonitoring"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/monitor/advancedMonitorInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchAdvancedMonitoringResponse>();
}

/**
 * @summary Queries the status of the advanced application monitoring feature or configures this feature for an application that is deployed in an Elastic Compute Service (ECS) or Kubernetes cluster.
 *
 * @description To call the SwitchAdvancedMonitoring operation, you must make sure that the version of Enterprise Distributed Application Service (EDAS) SDK for Java or Python is 3.15.2 or later.
 *
 * @param request SwitchAdvancedMonitoringRequest
 * @return SwitchAdvancedMonitoringResponse
 */
SwitchAdvancedMonitoringResponse Client::switchAdvancedMonitoring(const SwitchAdvancedMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return switchAdvancedMonitoringWithOptions(request, headers, runtime);
}

/**
 * @summary Synchronizes the basic Alibaba Cloud resources that belong to your account to Enterprise Distributed Application Service (EDAS). This operation is applicable to Elastic Compute Service (ECS) clusters.
 *
 * @description If you call this operation to synchronize ECS resource information, all instance data is synchronized from ECS. If you have more than 100 ECS instances, we recommend that you do not frequently call this operation.
 *
 * @param request SynchronizeResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SynchronizeResourceResponse
 */
SynchronizeResourceResponse Client::synchronizeResourceWithOptions(const SynchronizeResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SynchronizeResource"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/pop_sync_resource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SynchronizeResourceResponse>();
}

/**
 * @summary Synchronizes the basic Alibaba Cloud resources that belong to your account to Enterprise Distributed Application Service (EDAS). This operation is applicable to Elastic Compute Service (ECS) clusters.
 *
 * @description If you call this operation to synchronize ECS resource information, all instance data is synchronized from ECS. If you have more than 100 ECS instances, we recommend that you do not frequently call this operation.
 *
 * @param request SynchronizeResourceRequest
 * @return SynchronizeResourceResponse
 */
SynchronizeResourceResponse Client::synchronizeResource(const SynchronizeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return synchronizeResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates tags and adds the tags to resources at a time.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/tag/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates tags and adds the tags to resources at a time.
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
 * @summary Imports or transfers ECS instances.
 *
 * @description ## Limitations
 * Calling this API to import an ECS instance reinstalls its operating system. This process deletes all data on the instance and requires you to reset the logon password. Before you import the instance, back up any important data.
 *
 * @param request TransformClusterMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformClusterMemberResponse
 */
TransformClusterMemberResponse Client::transformClusterMemberWithOptions(const TransformClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasTargetClusterId()) {
    query["TargetClusterId"] = request.getTargetClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformClusterMember"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/resource/transform_cluster_member")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformClusterMemberResponse>();
}

/**
 * @summary Imports or transfers ECS instances.
 *
 * @description ## Limitations
 * Calling this API to import an ECS instance reinstalls its operating system. This process deletes all data on the instance and requires you to reset the logon password. Before you import the instance, back up any important data.
 *
 * @param request TransformClusterMemberRequest
 * @return TransformClusterMemberResponse
 */
TransformClusterMemberResponse Client::transformClusterMember(const TransformClusterMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transformClusterMemberWithOptions(request, headers, runtime);
}

/**
 * @summary Unbinds a Server Load Balancer (SLB) instance from an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request UnbindK8sSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindK8sSlbResponse
 */
UnbindK8sSlbResponse Client::unbindK8sSlbWithOptions(const UnbindK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSlbName()) {
    query["SlbName"] = request.getSlbName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindK8sSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_slb_binding")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindK8sSlbResponse>();
}

/**
 * @summary Unbinds a Server Load Balancer (SLB) instance from an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request UnbindK8sSlbRequest
 * @return UnbindK8sSlbResponse
 */
UnbindK8sSlbResponse Client::unbindK8sSlb(const UnbindK8sSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindK8sSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Call the UnbindSlb operation to detach a Server Load Balancer (SLB) instance.
 *
 * @param request UnbindSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSlbResponse
 */
UnbindSlbResponse Client::unbindSlbWithOptions(const UnbindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDeleteListener()) {
    query["DeleteListener"] = request.getDeleteListener();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/app/unbind_slb_json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSlbResponse>();
}

/**
 * @summary Call the UnbindSlb operation to detach a Server Load Balancer (SLB) instance.
 *
 * @param request UnbindSlbRequest
 * @return UnbindSlbResponse
 */
UnbindSlbResponse Client::unbindSlb(const UnbindSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Removes one or more tags from one or more resources.
 *
 * @param request UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteAll()) {
    query["DeleteAll"] = request.getDeleteAll();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/tag/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes one or more tags from one or more resources.
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
 * @summary Modifies information about an account.
 *
 * @param request UpdateAccountInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountInfoResponse
 */
UpdateAccountInfoResponse Client::updateAccountInfoWithOptions(const UpdateAccountInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccountInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/edit_account_info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountInfoResponse>();
}

/**
 * @summary Modifies information about an account.
 *
 * @param request UpdateAccountInfoRequest
 * @return UpdateAccountInfoResponse
 */
UpdateAccountInfoResponse Client::updateAccountInfo(const UpdateAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAccountInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the basic information such as the description and owner of an application.
 *
 * @param request UpdateApplicationBaseInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationBaseInfoResponse
 */
UpdateApplicationBaseInfoResponse Client::updateApplicationBaseInfoWithOptions(const UpdateApplicationBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationBaseInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/update_app_info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationBaseInfoResponse>();
}

/**
 * @summary Updates the basic information such as the description and owner of an application.
 *
 * @param request UpdateApplicationBaseInfoRequest
 * @return UpdateApplicationBaseInfoResponse
 */
UpdateApplicationBaseInfoResponse Client::updateApplicationBaseInfo(const UpdateApplicationBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationBaseInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Calls the UpdateApplicationScalingRule operation to update the Auto Scaling rule for an application.
 *
 * @param request UpdateApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationScalingRuleResponse
 */
UpdateApplicationScalingRuleResponse Client::updateApplicationScalingRuleWithOptions(const UpdateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScalingBehaviour()) {
    query["ScalingBehaviour"] = request.getScalingBehaviour();
  }

  if (!!request.hasScalingRuleEnable()) {
    query["ScalingRuleEnable"] = request.getScalingRuleEnable();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.getScalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.getScalingRuleTimer();
  }

  if (!!request.hasScalingRuleTrigger()) {
    query["ScalingRuleTrigger"] = request.getScalingRuleTrigger();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.getScalingRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationScalingRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/eam/scale/application_scaling_rule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationScalingRuleResponse>();
}

/**
 * @summary Calls the UpdateApplicationScalingRule operation to update the Auto Scaling rule for an application.
 *
 * @param request UpdateApplicationScalingRuleRequest
 * @return UpdateApplicationScalingRuleResponse
 */
UpdateApplicationScalingRuleResponse Client::updateApplicationScalingRule(const UpdateApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a configuration template.
 *
 * @param request UpdateConfigTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigTemplateResponse
 */
UpdateConfigTemplateResponse Client::updateConfigTemplateWithOptions(const UpdateConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfigTemplate"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/config_template")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigTemplateResponse>();
}

/**
 * @summary Modifies a configuration template.
 *
 * @param request UpdateConfigTemplateRequest
 * @return UpdateConfigTemplateResponse
 */
UpdateConfigTemplateResponse Client::updateConfigTemplate(const UpdateConfigTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConfigTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the Enterprise Distributed Application Service (EDAS) Container version of a High-Speed Service Framework (HSF) application. EDAS Container includes Ali-Tomcat and Pandora.
 *
 * @param request UpdateContainerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContainerResponse
 */
UpdateContainerResponse Client::updateContainerWithOptions(const UpdateContainerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.getBuildPackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContainer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/changeorder/co_update_container")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContainerResponse>();
}

/**
 * @summary Updates the Enterprise Distributed Application Service (EDAS) Container version of a High-Speed Service Framework (HSF) application. EDAS Container includes Ali-Tomcat and Pandora.
 *
 * @param request UpdateContainerRequest
 * @return UpdateContainerResponse
 */
UpdateContainerResponse Client::updateContainer(const UpdateContainerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContainerWithOptions(request, headers, runtime);
}

/**
 * @summary Configures the Tomcat container for an application or application instance group in an Elastic Compute Service (ECS) cluster.
 *
 * @param request UpdateContainerConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContainerConfigurationResponse
 */
UpdateContainerConfigurationResponse Client::updateContainerConfigurationWithOptions(const UpdateContainerConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasContextPath()) {
    query["ContextPath"] = request.getContextPath();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHttpPort()) {
    query["HttpPort"] = request.getHttpPort();
  }

  if (!!request.hasMaxThreads()) {
    query["MaxThreads"] = request.getMaxThreads();
  }

  if (!!request.hasURIEncoding()) {
    query["URIEncoding"] = request.getURIEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.getUseBodyEncoding();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContainerConfiguration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/container_config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContainerConfigurationResponse>();
}

/**
 * @summary Configures the Tomcat container for an application or application instance group in an Elastic Compute Service (ECS) cluster.
 *
 * @param request UpdateContainerConfigurationRequest
 * @return UpdateContainerConfigurationResponse
 */
UpdateContainerConfigurationResponse Client::updateContainerConfiguration(const UpdateContainerConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContainerConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Changes the health check URL for an application.
 *
 * @param request UpdateHealthCheckUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHealthCheckUrlResponse
 */
UpdateHealthCheckUrlResponse Client::updateHealthCheckUrlWithOptions(const UpdateHealthCheckUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasHcURL()) {
    query["hcURL"] = request.getHcURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHealthCheckUrl"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/modify_hc_url")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHealthCheckUrlResponse>();
}

/**
 * @summary Changes the health check URL for an application.
 *
 * @param request UpdateHealthCheckUrlRequest
 * @return UpdateHealthCheckUrlResponse
 */
UpdateHealthCheckUrlResponse Client::updateHealthCheckUrl(const UpdateHealthCheckUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHealthCheckUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Mounts a script to an application or application instance group.
 *
 * @param request UpdateHookConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHookConfigurationResponse
 */
UpdateHookConfigurationResponse Client::updateHookConfigurationWithOptions(const UpdateHookConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHooks()) {
    query["Hooks"] = request.getHooks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHookConfiguration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/app/config_app_hook_json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHookConfigurationResponse>();
}

/**
 * @summary Mounts a script to an application or application instance group.
 *
 * @param request UpdateHookConfigurationRequest
 * @return UpdateHookConfigurationResponse
 */
UpdateHookConfigurationResponse Client::updateHookConfiguration(const UpdateHookConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHookConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Configures the Java virtual machine (JVM) parameters for an application or an instance group where the application is deployed.
 *
 * @param request UpdateJvmConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJvmConfigurationResponse
 */
UpdateJvmConfigurationResponse Client::updateJvmConfigurationWithOptions(const UpdateJvmConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMaxHeapSize()) {
    query["MaxHeapSize"] = request.getMaxHeapSize();
  }

  if (!!request.hasMaxPermSize()) {
    query["MaxPermSize"] = request.getMaxPermSize();
  }

  if (!!request.hasMinHeapSize()) {
    query["MinHeapSize"] = request.getMinHeapSize();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.getOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateJvmConfiguration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/app/app_jvm_config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJvmConfigurationResponse>();
}

/**
 * @summary Configures the Java virtual machine (JVM) parameters for an application or an instance group where the application is deployed.
 *
 * @param request UpdateJvmConfigurationRequest
 * @return UpdateJvmConfigurationResponse
 */
UpdateJvmConfigurationResponse Client::updateJvmConfiguration(const UpdateJvmConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateJvmConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies basic information about an application that is deployed in a Kubernetes cluster.
 *
 * @param request UpdateK8sApplicationBaseInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sApplicationBaseInfoResponse
 */
UpdateK8sApplicationBaseInfoResponse Client::updateK8sApplicationBaseInfoWithOptions(const UpdateK8sApplicationBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateK8sApplicationBaseInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/update_app_basic_info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sApplicationBaseInfoResponse>();
}

/**
 * @summary Modifies basic information about an application that is deployed in a Kubernetes cluster.
 *
 * @param request UpdateK8sApplicationBaseInfoRequest
 * @return UpdateK8sApplicationBaseInfoResponse
 */
UpdateK8sApplicationBaseInfoResponse Client::updateK8sApplicationBaseInfo(const UpdateK8sApplicationBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sApplicationBaseInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the configuration of an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes cluster.
 *
 * @param request UpdateK8sApplicationConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sApplicationConfigResponse
 */
UpdateK8sApplicationConfigResponse Client::updateK8sApplicationConfigWithOptions(const UpdateK8sApplicationConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasCpuRequest()) {
    query["CpuRequest"] = request.getCpuRequest();
  }

  if (!!request.hasEphemeralStorageLimit()) {
    query["EphemeralStorageLimit"] = request.getEphemeralStorageLimit();
  }

  if (!!request.hasEphemeralStorageRequest()) {
    query["EphemeralStorageRequest"] = request.getEphemeralStorageRequest();
  }

  if (!!request.hasMcpuLimit()) {
    query["McpuLimit"] = request.getMcpuLimit();
  }

  if (!!request.hasMcpuRequest()) {
    query["McpuRequest"] = request.getMcpuRequest();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasMemoryRequest()) {
    query["MemoryRequest"] = request.getMemoryRequest();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateK8sApplicationConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_app_configuration")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sApplicationConfigResponse>();
}

/**
 * @summary Updates the configuration of an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes cluster.
 *
 * @param request UpdateK8sApplicationConfigRequest
 * @return UpdateK8sApplicationConfigResponse
 */
UpdateK8sApplicationConfigResponse Client::updateK8sApplicationConfig(const UpdateK8sApplicationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sApplicationConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a Kubernetes ConfigMap.
 *
 * @param request UpdateK8sConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sConfigMapResponse
 */
UpdateK8sConfigMapResponse Client::updateK8sConfigMapWithOptions(const UpdateK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateK8sConfigMap"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_config_map")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sConfigMapResponse>();
}

/**
 * @summary Modifies a Kubernetes ConfigMap.
 *
 * @param request UpdateK8sConfigMapRequest
 * @return UpdateK8sConfigMapResponse
 */
UpdateK8sConfigMapResponse Client::updateK8sConfigMap(const UpdateK8sConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Updates an ingress.
 *
 * @param request UpdateK8sIngressRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sIngressRuleResponse
 */
UpdateK8sIngressRuleResponse Client::updateK8sIngressRuleWithOptions(const UpdateK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIngressConf()) {
    query["IngressConf"] = request.getIngressConf();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateK8sIngressRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_ingress")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sIngressRuleResponse>();
}

/**
 * @summary Updates an ingress.
 *
 * @param request UpdateK8sIngressRuleRequest
 * @return UpdateK8sIngressRuleResponse
 */
UpdateK8sIngressRuleResponse Client::updateK8sIngressRule(const UpdateK8sIngressRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sIngressRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Update Kubernetes resources.
 *
 * @description > You can update only Deployments.
 *
 * @param request UpdateK8sResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sResourceResponse
 */
UpdateK8sResourceResponse Client::updateK8sResourceWithOptions(const UpdateK8sResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasResourceContent()) {
    body["ResourceContent"] = request.getResourceContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateK8sResource"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/oam/update_k8s_resource_config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sResourceResponse>();
}

/**
 * @summary Update Kubernetes resources.
 *
 * @description > You can update only Deployments.
 *
 * @param request UpdateK8sResourceRequest
 * @return UpdateK8sResourceResponse
 */
UpdateK8sResourceResponse Client::updateK8sResource(const UpdateK8sResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a Kubernetes Secret.
 *
 * @param request UpdateK8sSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sSecretResponse
 */
UpdateK8sSecretResponse Client::updateK8sSecretWithOptions(const UpdateK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBase64Encoded()) {
    body["Base64Encoded"] = request.getBase64Encoded();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.getCertId();
  }

  if (!!request.hasCertRegionId()) {
    body["CertRegionId"] = request.getCertRegionId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateK8sSecret"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_secret")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sSecretResponse>();
}

/**
 * @summary Modifies a Kubernetes Secret.
 *
 * @param request UpdateK8sSecretRequest
 * @return UpdateK8sSecretResponse
 */
UpdateK8sSecretResponse Client::updateK8sSecret(const UpdateK8sSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sSecretWithOptions(request, headers, runtime);
}

/**
 * @summary Updates an application service in a Kubernetes cluster.
 *
 * @param request UpdateK8sServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sServiceResponse
 */
UpdateK8sServiceResponse Client::updateK8sServiceWithOptions(const UpdateK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasExternalTrafficPolicy()) {
    query["ExternalTrafficPolicy"] = request.getExternalTrafficPolicy();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasServicePorts()) {
    query["ServicePorts"] = request.getServicePorts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateK8sService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_service")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sServiceResponse>();
}

/**
 * @summary Updates an application service in a Kubernetes cluster.
 *
 * @param request UpdateK8sServiceRequest
 * @return UpdateK8sServiceResponse
 */
UpdateK8sServiceResponse Client::updateK8sService(const UpdateK8sServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Call UpdateK8sSlb to update the Server Load Balancer (SLB) instance attached to a Container Service for Kubernetes application.
 *
 * @param request UpdateK8sSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateK8sSlbResponse
 */
UpdateK8sSlbResponse Client::updateK8sSlbWithOptions(const UpdateK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDisableForceOverride()) {
    query["DisableForceOverride"] = request.getDisableForceOverride();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServicePortInfos()) {
    query["ServicePortInfos"] = request.getServicePortInfos();
  }

  if (!!request.hasSlbName()) {
    query["SlbName"] = request.getSlbName();
  }

  if (!!request.hasSlbProtocol()) {
    query["SlbProtocol"] = request.getSlbProtocol();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.getTargetPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateK8sSlb"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/acs/k8s_slb_binding")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateK8sSlbResponse>();
}

/**
 * @summary Call UpdateK8sSlb to update the Server Load Balancer (SLB) instance attached to a Container Service for Kubernetes application.
 *
 * @param request UpdateK8sSlbRequest
 * @return UpdateK8sSlbResponse
 */
UpdateK8sSlbResponse Client::updateK8sSlb(const UpdateK8sSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateK8sSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a localization configuration.
 *
 * @description > This operation modifies only Deployment resources.
 *
 * @param request UpdateLocalitySettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLocalitySettingResponse
 */
UpdateLocalitySettingResponse Client::updateLocalitySettingWithOptions(const UpdateLocalitySettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLocalitySetting"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/sp/applications/locality/setting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLocalitySettingResponse>();
}

/**
 * @summary Updates a localization configuration.
 *
 * @description > This operation modifies only Deployment resources.
 *
 * @param request UpdateLocalitySettingRequest
 * @return UpdateLocalitySettingResponse
 */
UpdateLocalitySettingResponse Client::updateLocalitySetting(const UpdateLocalitySettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLocalitySettingWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a role.
 *
 * @param request UpdateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionData()) {
    query["ActionData"] = request.getActionData();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/account/edit_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary Modifies a role.
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Configures a Logstore for an application.
 *
 * @param request UpdateSlsLogStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSlsLogStoreResponse
 */
UpdateSlsLogStoreResponse Client::updateSlsLogStoreWithOptions(const UpdateSlsLogStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasConfigs()) {
    body["Configs"] = request.getConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSlsLogStore"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/k8s/sls/update_sls_log_store")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSlsLogStoreResponse>();
}

/**
 * @summary Configures a Logstore for an application.
 *
 * @param request UpdateSlsLogStoreRequest
 * @return UpdateSlsLogStoreResponse
 */
UpdateSlsLogStoreResponse Client::updateSlsLogStore(const UpdateSlsLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSlsLogStoreWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a swimming lane.
 *
 * @param request UpdateSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSwimmingLaneResponse
 */
UpdateSwimmingLaneResponse Client::updateSwimmingLaneWithOptions(const UpdateSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInfos()) {
    query["AppInfos"] = request.getAppInfos();
  }

  if (!!request.hasEnableRules()) {
    query["EnableRules"] = request.getEnableRules();
  }

  if (!!request.hasEntryRules()) {
    query["EntryRules"] = request.getEntryRules();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.getLaneId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSwimmingLane"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lanes")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSwimmingLaneResponse>();
}

/**
 * @summary Updates a swimming lane.
 *
 * @param request UpdateSwimmingLaneRequest
 * @return UpdateSwimmingLaneResponse
 */
UpdateSwimmingLaneResponse Client::updateSwimmingLane(const UpdateSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a lane group.
 *
 * @param request UpdateSwimmingLaneGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSwimmingLaneGroupResponse
 */
UpdateSwimmingLaneGroupResponse Client::updateSwimmingLaneGroupWithOptions(const UpdateSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasEntryApp()) {
    query["EntryApp"] = request.getEntryApp();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSwimmingLaneGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v5/trafficmgnt/swimming_lane_groups")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSwimmingLaneGroupResponse>();
}

/**
 * @summary Updates a lane group.
 *
 * @param request UpdateSwimmingLaneGroupRequest
 * @return UpdateSwimmingLaneGroupResponse
 */
UpdateSwimmingLaneGroupResponse Client::updateSwimmingLaneGroup(const UpdateSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSwimmingLaneGroupWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Edas20170801