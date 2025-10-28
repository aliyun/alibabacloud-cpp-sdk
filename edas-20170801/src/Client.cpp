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
 * @summary Terminates a change process and rolls back the application. This operation is applicable to applications that are deployed in Container Service for Kubernetes (ACK) clusters.
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
    query["ChangeOrderId"] = request.changeOrderId();
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
 * @summary Terminates a change process and rolls back the application. This operation is applicable to applications that are deployed in Container Service for Kubernetes (ACK) clusters.
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
    query["ChangeOrderId"] = request.changeOrderId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
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
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
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
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
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
 * @summary Assigns one or more roles to a RAM user.
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
    query["RoleIds"] = request.roleIds();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
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
 * @summary Assigns one or more roles to a RAM user.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasDeployGroupId()) {
    query["DeployGroupId"] = request.deployGroupId();
  }

  if (!!request.hasListenerHealthCheckUrl()) {
    query["ListenerHealthCheckUrl"] = request.listenerHealthCheckUrl();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.slbId();
  }

  if (!!request.hasVForwardingUrlRule()) {
    query["VForwardingUrlRule"] = request.VForwardingUrlRule();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasVServerGroupName()) {
    query["VServerGroupName"] = request.VServerGroupName();
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
 * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServicePortInfos()) {
    query["ServicePortInfos"] = request.servicePortInfos();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.slbId();
  }

  if (!!request.hasSlbProtocol()) {
    query["SlbProtocol"] = request.slbProtocol();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.targetPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
 * @summary Binds a Server Load Balancer (SLB) instance to an application in Enterprise Distributed Application Service (EDAS).
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.slbId();
  }

  if (!!request.hasSlbIp()) {
    query["SlbIp"] = request.slbIp();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
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
 * @summary Binds a Server Load Balancer (SLB) instance to an application in Enterprise Distributed Application Service (EDAS).
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
 * @summary Changes the application instance group for an Elastic Compute Service (ECS) instance in an ECS cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
  }

  if (!!request.hasForceStatus()) {
    query["ForceStatus"] = request.forceStatus();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
 * @summary Changes the application instance group for an Elastic Compute Service (ECS) instance in an ECS cluster.
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
    query["Confirm"] = request.confirm();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
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
 * @summary Converts a Deployment into an application.
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @summary Converts a Deployment into an application.
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
 * @summary Creates an auto scaling policy for an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingBehaviour()) {
    query["ScalingBehaviour"] = request.scalingBehaviour();
  }

  if (!!request.hasScalingRuleEnable()) {
    query["ScalingRuleEnable"] = request.scalingRuleEnable();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.scalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.scalingRuleTimer();
  }

  if (!!request.hasScalingRuleTrigger()) {
    query["ScalingRuleTrigger"] = request.scalingRuleTrigger();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.scalingRuleType();
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
 * @summary Creates an auto scaling policy for an application.
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
    body["Content"] = request.content();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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
    body["ClusterId"] = request.clusterId();
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
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
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
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIngressConf()) {
    query["IngressConf"] = request.ingressConf();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
    body["Base64Encoded"] = request.base64Encoded();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.certId();
  }

  if (!!request.hasCertRegionId()) {
    body["CertRegionId"] = request.certRegionId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasExternalTrafficPolicy()) {
    query["ExternalTrafficPolicy"] = request.externalTrafficPolicy();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasServicePorts()) {
    query["ServicePorts"] = request.servicePorts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Deletes an application.
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
    query["AppId"] = request.appId();
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
 * @summary Deletes an application.
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
 * @summary Deletes an auto scaling policy for an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
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
 * @summary Deletes an auto scaling policy for an application.
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterMemberId()) {
    query["ClusterMemberId"] = request.clusterMemberId();
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
    query["Id"] = request.id();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
    query["EcuId"] = request.ecuId();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
 * @summary Removes a log directory from an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
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
 * @summary Removes a log directory from an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
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
    query["RoleId"] = request.roleId();
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
    query["GroupId"] = request.groupId();
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
    query["LaneId"] = request.laneId();
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
    query["Id"] = request.id();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.regionTag();
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
    query["AppEnv"] = request.appEnv();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBatch()) {
    query["Batch"] = request.batch();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.batchWaitTime();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.buildPackId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.componentIds();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasGray()) {
    query["Gray"] = request.gray();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasReleaseType()) {
    query["ReleaseType"] = request.releaseType();
  }

  if (!!request.hasTrafficControlStrategy()) {
    query["TrafficControlStrategy"] = request.trafficControlStrategy();
  }

  if (!!request.hasWarUrl()) {
    query["WarUrl"] = request.warUrl();
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
 * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasArgs()) {
    query["Args"] = request.args();
  }

  if (!!request.hasBatchTimeout()) {
    query["BatchTimeout"] = request.batchTimeout();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.batchWaitTime();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.buildPackId();
  }

  if (!!request.hasCanaryRuleId()) {
    query["CanaryRuleId"] = request.canaryRuleId();
  }

  if (!!request.hasChangeOrderDesc()) {
    query["ChangeOrderDesc"] = request.changeOrderDesc();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.configMountDescs();
  }

  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.cpuLimit();
  }

  if (!!request.hasCpuRequest()) {
    query["CpuRequest"] = request.cpuRequest();
  }

  if (!!request.hasCustomAffinity()) {
    query["CustomAffinity"] = request.customAffinity();
  }

  if (!!request.hasCustomAgentVersion()) {
    query["CustomAgentVersion"] = request.customAgentVersion();
  }

  if (!!request.hasCustomTolerations()) {
    query["CustomTolerations"] = request.customTolerations();
  }

  if (!!request.hasDeployAcrossNodes()) {
    query["DeployAcrossNodes"] = request.deployAcrossNodes();
  }

  if (!!request.hasDeployAcrossZones()) {
    query["DeployAcrossZones"] = request.deployAcrossZones();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.emptyDirs();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.enableAhas();
  }

  if (!!request.hasEnableEmptyPushReject()) {
    query["EnableEmptyPushReject"] = request.enableEmptyPushReject();
  }

  if (!!request.hasEnableLosslessRule()) {
    query["EnableLosslessRule"] = request.enableLosslessRule();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.envFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.image();
  }

  if (!!request.hasImagePlatforms()) {
    query["ImagePlatforms"] = request.imagePlatforms();
  }

  if (!!request.hasImageTag()) {
    query["ImageTag"] = request.imageTag();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.initContainers();
  }

  if (!!request.hasJDK()) {
    query["JDK"] = request.JDK();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.javaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.limitEphemeralStorage();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.liveness();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.localVolume();
  }

  if (!!request.hasLosslessRuleAligned()) {
    query["LosslessRuleAligned"] = request.losslessRuleAligned();
  }

  if (!!request.hasLosslessRuleDelayTime()) {
    query["LosslessRuleDelayTime"] = request.losslessRuleDelayTime();
  }

  if (!!request.hasLosslessRuleFuncType()) {
    query["LosslessRuleFuncType"] = request.losslessRuleFuncType();
  }

  if (!!request.hasLosslessRuleRelated()) {
    query["LosslessRuleRelated"] = request.losslessRuleRelated();
  }

  if (!!request.hasLosslessRuleWarmupTime()) {
    query["LosslessRuleWarmupTime"] = request.losslessRuleWarmupTime();
  }

  if (!!request.hasMcpuLimit()) {
    query["McpuLimit"] = request.mcpuLimit();
  }

  if (!!request.hasMcpuRequest()) {
    query["McpuRequest"] = request.mcpuRequest();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.memoryLimit();
  }

  if (!!request.hasMemoryRequest()) {
    query["MemoryRequest"] = request.memoryRequest();
  }

  if (!!request.hasMountDescs()) {
    query["MountDescs"] = request.mountDescs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPackageVersionId()) {
    query["PackageVersionId"] = request.packageVersionId();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.pvcMountDescs();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.readiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.requestsEphemeralStorage();
  }

  if (!!request.hasRuntimeClassName()) {
    query["RuntimeClassName"] = request.runtimeClassName();
  }

  if (!!request.hasSidecars()) {
    query["Sidecars"] = request.sidecars();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasStartup()) {
    query["Startup"] = request.startup();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasTerminateGracePeriod()) {
    query["TerminateGracePeriod"] = request.terminateGracePeriod();
  }

  if (!!request.hasTrafficControlStrategy()) {
    query["TrafficControlStrategy"] = request.trafficControlStrategy();
  }

  if (!!request.hasUpdateStrategy()) {
    query["UpdateStrategy"] = request.updateStrategy();
  }

  if (!!request.hasUriEncoding()) {
    query["UriEncoding"] = request.uriEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.useBodyEncoding();
  }

  if (!!request.hasUserBaseImageUrl()) {
    query["UserBaseImageUrl"] = request.userBaseImageUrl();
  }

  if (!!request.hasVolumesStr()) {
    query["VolumesStr"] = request.volumesStr();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  if (!!request.hasWebContainerConfig()) {
    query["WebContainerConfig"] = request.webContainerConfig();
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
 * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasWithNodeInfo()) {
    query["WithNodeInfo"] = request.withNodeInfo();
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
 * @summary Queries the auto scaling policies of an application.
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
    query["AppId"] = request.appId();
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
 * @summary Queries the auto scaling policies of an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
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
    query["AppId"] = request.appId();
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
 * @summary Queries the details about a specified application in an Elastic Compute Service (ECS) cluster.
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
    query["AppId"] = request.appId();
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
 * @summary Queries the details about a specified application in an Elastic Compute Service (ECS) cluster.
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
 * @summary Queries the details about a change process.
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
    query["ChangeOrderId"] = request.changeOrderId();
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
 * @summary Queries the details about a change process.
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
    query["ClusterId"] = request.clusterId();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
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
    query["AppId"] = request.appId();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
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
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
 * @summary Queries the information about applications deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
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
 * @summary Queries the information about applications deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
 * @summary Queries Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes clusters in a specified region.
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
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.regionTag();
  }

  if (!!request.hasSubClusterType()) {
    query["SubClusterType"] = request.subClusterType();
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
 * @summary Queries Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes clusters in a specified region.
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
 * @summary Queries application services that are deployed in a Kubernetes cluster.
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
    query["AppId"] = request.appId();
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
 * @summary Queries application services that are deployed in a Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
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
    query["NamespaceId"] = request.namespaceId();
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
    query["appId"] = request.appId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.group();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.ip();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.registryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
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
    query["appId"] = request.appId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.group();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.ip();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.registryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
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
    query["namespace"] = request._namespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSearchType()) {
    query["searchType"] = request.searchType();
  }

  if (!!request.hasSearchValue()) {
    query["searchValue"] = request.searchValue();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
  }

  if (!!request.hasSide()) {
    query["side"] = request.side();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
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
    query["appId"] = request.appId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.group();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.ip();
  }

  if (!!request.hasMethodController()) {
    query["methodController"] = request.methodController();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPath()) {
    query["path"] = request.path();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.registryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
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
    query["appId"] = request.appId();
  }

  if (!!request.hasGroup()) {
    query["group"] = request.group();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.ip();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasRegistryType()) {
    query["registryType"] = request.registryType();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["serviceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
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
    query["AppId"] = request.appId();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEnableAsm()) {
    query["EnableAsm"] = request.enableAsm();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
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
 * @summary Creates an application in an Elastic Compute Service (ECS) cluster.
 *
 * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation provided by Enterprise Distributed Application Service (EDAS).
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
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.buildPackId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.componentIds();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEcuInfo()) {
    query["EcuInfo"] = request.ecuInfo();
  }

  if (!!request.hasEnablePortCheck()) {
    query["EnablePortCheck"] = request.enablePortCheck();
  }

  if (!!request.hasEnableUrlCheck()) {
    query["EnableUrlCheck"] = request.enableUrlCheck();
  }

  if (!!request.hasHealthCheckUrl()) {
    query["HealthCheckUrl"] = request.healthCheckUrl();
  }

  if (!!request.hasHooks()) {
    query["Hooks"] = request.hooks();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.jdk();
  }

  if (!!request.hasJvmOptions()) {
    query["JvmOptions"] = request.jvmOptions();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasMaxHeapSize()) {
    query["MaxHeapSize"] = request.maxHeapSize();
  }

  if (!!request.hasMaxPermSize()) {
    query["MaxPermSize"] = request.maxPermSize();
  }

  if (!!request.hasMem()) {
    query["Mem"] = request.mem();
  }

  if (!!request.hasMinHeapSize()) {
    query["MinHeapSize"] = request.minHeapSize();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasReservedPortStr()) {
    query["ReservedPortStr"] = request.reservedPortStr();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
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
 * @summary Creates an application in an Elastic Compute Service (ECS) cluster.
 *
 * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation provided by Enterprise Distributed Application Service (EDAS).
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
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasIaasProvider()) {
    query["IaasProvider"] = request.iaasProvider();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasNetworkMode()) {
    query["NetworkMode"] = request.networkMode();
  }

  if (!!request.hasOversoldFactor()) {
    query["OversoldFactor"] = request.oversoldFactor();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
    query["clusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceIds()) {
    query["instanceIds"] = request.instanceIds();
  }

  if (!!request.hasPassword()) {
    query["password"] = request.password();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInitPackageVersionId()) {
    query["InitPackageVersionId"] = request.initPackageVersionId();
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
 * @summary Creates an application in a Container Service for Kubernetes (ACK) cluster or serverless Kubernetes cluster.
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
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasAppConfig()) {
    query["AppConfig"] = request.appConfig();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppTemplateName()) {
    query["AppTemplateName"] = request.appTemplateName();
  }

  if (!!request.hasApplicationDescription()) {
    query["ApplicationDescription"] = request.applicationDescription();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.buildPackId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.configMountDescs();
  }

  if (!!request.hasContainerRegistryId()) {
    query["ContainerRegistryId"] = request.containerRegistryId();
  }

  if (!!request.hasCsClusterId()) {
    query["CsClusterId"] = request.csClusterId();
  }

  if (!!request.hasCustomAffinity()) {
    query["CustomAffinity"] = request.customAffinity();
  }

  if (!!request.hasCustomAgentVersion()) {
    query["CustomAgentVersion"] = request.customAgentVersion();
  }

  if (!!request.hasCustomTolerations()) {
    query["CustomTolerations"] = request.customTolerations();
  }

  if (!!request.hasDeployAcrossNodes()) {
    query["DeployAcrossNodes"] = request.deployAcrossNodes();
  }

  if (!!request.hasDeployAcrossZones()) {
    query["DeployAcrossZones"] = request.deployAcrossZones();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.emptyDirs();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.enableAhas();
  }

  if (!!request.hasEnableAsm()) {
    query["EnableAsm"] = request.enableAsm();
  }

  if (!!request.hasEnableEmptyPushReject()) {
    query["EnableEmptyPushReject"] = request.enableEmptyPushReject();
  }

  if (!!request.hasEnableLosslessRule()) {
    query["EnableLosslessRule"] = request.enableLosslessRule();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.envFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasFeatureConfig()) {
    query["FeatureConfig"] = request.featureConfig();
  }

  if (!!request.hasImagePlatforms()) {
    query["ImagePlatforms"] = request.imagePlatforms();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.initContainers();
  }

  if (!!request.hasInternetSlbId()) {
    query["InternetSlbId"] = request.internetSlbId();
  }

  if (!!request.hasInternetSlbPort()) {
    query["InternetSlbPort"] = request.internetSlbPort();
  }

  if (!!request.hasInternetSlbProtocol()) {
    query["InternetSlbProtocol"] = request.internetSlbProtocol();
  }

  if (!!request.hasInternetTargetPort()) {
    query["InternetTargetPort"] = request.internetTargetPort();
  }

  if (!!request.hasIntranetSlbId()) {
    query["IntranetSlbId"] = request.intranetSlbId();
  }

  if (!!request.hasIntranetSlbPort()) {
    query["IntranetSlbPort"] = request.intranetSlbPort();
  }

  if (!!request.hasIntranetSlbProtocol()) {
    query["IntranetSlbProtocol"] = request.intranetSlbProtocol();
  }

  if (!!request.hasIntranetTargetPort()) {
    query["IntranetTargetPort"] = request.intranetTargetPort();
  }

  if (!!request.hasIsMultilingualApp()) {
    query["IsMultilingualApp"] = request.isMultilingualApp();
  }

  if (!!request.hasJDK()) {
    query["JDK"] = request.JDK();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.javaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasLimitCpu()) {
    query["LimitCpu"] = request.limitCpu();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.limitEphemeralStorage();
  }

  if (!!request.hasLimitMem()) {
    query["LimitMem"] = request.limitMem();
  }

  if (!!request.hasLimitmCpu()) {
    query["LimitmCpu"] = request.limitmCpu();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.liveness();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.localVolume();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasLosslessRuleAligned()) {
    query["LosslessRuleAligned"] = request.losslessRuleAligned();
  }

  if (!!request.hasLosslessRuleDelayTime()) {
    query["LosslessRuleDelayTime"] = request.losslessRuleDelayTime();
  }

  if (!!request.hasLosslessRuleFuncType()) {
    query["LosslessRuleFuncType"] = request.losslessRuleFuncType();
  }

  if (!!request.hasLosslessRuleRelated()) {
    query["LosslessRuleRelated"] = request.losslessRuleRelated();
  }

  if (!!request.hasLosslessRuleWarmupTime()) {
    query["LosslessRuleWarmupTime"] = request.losslessRuleWarmupTime();
  }

  if (!!request.hasMountDescs()) {
    query["MountDescs"] = request.mountDescs();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.pvcMountDescs();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.readiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasRequestsCpu()) {
    query["RequestsCpu"] = request.requestsCpu();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.requestsEphemeralStorage();
  }

  if (!!request.hasRequestsMem()) {
    query["RequestsMem"] = request.requestsMem();
  }

  if (!!request.hasRequestsmCpu()) {
    query["RequestsmCpu"] = request.requestsmCpu();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuntimeClassName()) {
    query["RuntimeClassName"] = request.runtimeClassName();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.secretName();
  }

  if (!!request.hasServiceConfigs()) {
    query["ServiceConfigs"] = request.serviceConfigs();
  }

  if (!!request.hasSidecars()) {
    query["Sidecars"] = request.sidecars();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasStartup()) {
    query["Startup"] = request.startup();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasTerminateGracePeriod()) {
    query["TerminateGracePeriod"] = request.terminateGracePeriod();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  if (!!request.hasUriEncoding()) {
    query["UriEncoding"] = request.uriEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.useBodyEncoding();
  }

  if (!!request.hasUserBaseImageUrl()) {
    query["UserBaseImageUrl"] = request.userBaseImageUrl();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  if (!!request.hasWebContainerConfig()) {
    query["WebContainerConfig"] = request.webContainerConfig();
  }

  if (!!request.hasWorkloadType()) {
    query["WorkloadType"] = request.workloadType();
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
 * @summary Creates an application in a Container Service for Kubernetes (ACK) cluster or serverless Kubernetes cluster.
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
    query["DebugEnable"] = request.debugEnable();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMseInstanceId()) {
    query["MseInstanceId"] = request.mseInstanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  if (!!request.hasRegionTag()) {
    query["RegionTag"] = request.regionTag();
  }

  if (!!request.hasRegistryType()) {
    query["RegistryType"] = request.registryType();
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
    query["ActionData"] = request.actionData();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
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
    query["GroupName"] = request.groupName();
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
    query["AppInfos"] = request.appInfos();
  }

  if (!!request.hasEnableRules()) {
    query["EnableRules"] = request.enableRules();
  }

  if (!!request.hasEntryRules()) {
    query["EntryRules"] = request.entryRules();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasEntryApp()) {
    query["EntryApp"] = request.entryApp();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDoAsync()) {
    query["DoAsync"] = request.doAsync();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
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
 * @summary Queries a list of applications.
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
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasLogicalRegionIdFilter()) {
    query["LogicalRegionIdFilter"] = request.logicalRegionIdFilter();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Queries a list of applications.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
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
 * @summary Queries Enterprise Distributed Application Service (EDAS) Container versions.
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
 * @summary Queries Enterprise Distributed Application Service (EDAS) Container versions.
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
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEcsList()) {
    query["EcsList"] = request.ecsList();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary Queries the services that are consumed by an application.
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
    query["AppId"] = request.appId();
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
 * @summary Queries the services that are consumed by an application.
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
    query["clusterId"] = request.clusterId();
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
 * @summary Queries the instance groups to which an application is deployed.
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
    query["AppId"] = request.appId();
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
 * @summary Queries the instance groups to which an application is deployed.
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
    query["NetworkMode"] = request.networkMode();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
    query["Act"] = request.act();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
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
 * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
    query["AppId"] = request.appId();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.condition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowRelatedApps()) {
    query["ShowRelatedApps"] = request.showRelatedApps();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.condition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    query["ClusterId"] = request.clusterId();
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
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.condition();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowRelatedApps()) {
    query["ShowRelatedApps"] = request.showRelatedApps();
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
 * @summary Queries service methods.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
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
 * @summary Queries service methods.
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
 * @summary Queries the services that are published by an application.
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
    query["AppId"] = request.appId();
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
 * @summary Queries the services that are published by an application.
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
    query["AppId"] = request.appId();
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
 * @summary Queries roles.
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
 * @summary Queries roles.
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
 * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceNum()) {
    query["InstanceNum"] = request.instanceNum();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
  }

  if (!!request.hasMem()) {
    query["Mem"] = request.mem();
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
 * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
 * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
 * @summary Queries Server Load Balancer (SLB) instances.
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
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasSlbType()) {
    query["SlbType"] = request.slbType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * @summary Queries Server Load Balancer (SLB) instances.
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
 * @summary Queries the Resource Access Management (RAM) users.
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
 * @summary Queries the Resource Access Management (RAM) users.
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
    query["GroupId"] = request.groupId();
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
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
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
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
 * @summary Queries custom namespaces.
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
    query["DebugEnable"] = request.debugEnable();
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
 * @summary Queries custom namespaces.
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
 * @summary The HTTP status code returned.
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
 * @summary The HTTP status code returned.
 *
 * @return ListVpcResponse
 */
ListVpcResponse Client::listVpc() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcWithOptions(headers, runtime);
}

/**
 * @summary Migrates an elastic compute unit (ECU) to the default cluster in a specified namespace.
 *
 * @description ## Limits
 * We recommend that you do not call this operation. Instead, we recommend that you call the TransformClusterMember operation. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
 * When you call this operation to import an Elastic Compute Service (ECS) instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
 * ## Terms
 * *   **Namespace**: the logical concept that is used to isolate resources and microservices in Enterprise Distributed Application Service (EDAS). The resources include clusters, ECS instances, and applications. You can use a default or custom namespace. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources or microservices.
 * *   **ECU**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasLogicalRegionId()) {
    query["LogicalRegionId"] = request.logicalRegionId();
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
 * @summary Migrates an elastic compute unit (ECU) to the default cluster in a specified namespace.
 *
 * @description ## Limits
 * We recommend that you do not call this operation. Instead, we recommend that you call the TransformClusterMember operation. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
 * When you call this operation to import an Elastic Compute Service (ECS) instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
 * ## Terms
 * *   **Namespace**: the logical concept that is used to isolate resources and microservices in Enterprise Distributed Application Service (EDAS). The resources include clusters, ECS instances, and applications. You can use a default or custom namespace. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources or microservices.
 * *   **ECU**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
 * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
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
    query["AcceptEULA"] = request.acceptEULA();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInCondition()) {
    query["InCondition"] = request.inCondition();
  }

  if (!!request.hasInCpu()) {
    query["InCpu"] = request.inCpu();
  }

  if (!!request.hasInDuration()) {
    query["InDuration"] = request.inDuration();
  }

  if (!!request.hasInEnable()) {
    query["InEnable"] = request.inEnable();
  }

  if (!!request.hasInInstanceNum()) {
    query["InInstanceNum"] = request.inInstanceNum();
  }

  if (!!request.hasInLoad()) {
    query["InLoad"] = request.inLoad();
  }

  if (!!request.hasInRT()) {
    query["InRT"] = request.inRT();
  }

  if (!!request.hasInStep()) {
    query["InStep"] = request.inStep();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.keyPairName();
  }

  if (!!request.hasMultiAzPolicy()) {
    query["MultiAzPolicy"] = request.multiAzPolicy();
  }

  if (!!request.hasOutCPU()) {
    query["OutCPU"] = request.outCPU();
  }

  if (!!request.hasOutCondition()) {
    query["OutCondition"] = request.outCondition();
  }

  if (!!request.hasOutDuration()) {
    query["OutDuration"] = request.outDuration();
  }

  if (!!request.hasOutEnable()) {
    query["OutEnable"] = request.outEnable();
  }

  if (!!request.hasOutInstanceNum()) {
    query["OutInstanceNum"] = request.outInstanceNum();
  }

  if (!!request.hasOutLoad()) {
    query["OutLoad"] = request.outLoad();
  }

  if (!!request.hasOutRT()) {
    query["OutRT"] = request.outRT();
  }

  if (!!request.hasOutStep()) {
    query["OutStep"] = request.outStep();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasResourceFrom()) {
    query["ResourceFrom"] = request.resourceFrom();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.scalingPolicy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateInstanceId()) {
    query["TemplateInstanceId"] = request.templateInstanceId();
  }

  if (!!request.hasTemplateInstanceName()) {
    query["TemplateInstanceName"] = request.templateInstanceName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
    query["AppId"] = request.appId();
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
    query["EccId"] = request.eccId();
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
    query["LogicalRegionId"] = request.logicalRegionId();
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
    query["LogicalRegionId"] = request.logicalRegionId();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
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
 * @summary Restarts an application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
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
 * @summary Restarts an application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
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
 * @summary Restarts an application that is deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
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
 * @summary Restarts an application that is deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
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
 * @summary Retries a failed process.
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
    query["RetryStatus"] = request.retryStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @summary Retries a failed process.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasBatch()) {
    query["Batch"] = request.batch();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.batchWaitTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasHistoryVersion()) {
    query["HistoryVersion"] = request.historyVersion();
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
    query["ChangeOrderId"] = request.changeOrderId();
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
 * @summary Scales in an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
  }

  if (!!request.hasForceStatus()) {
    query["ForceStatus"] = request.forceStatus();
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
 * @summary Scales in an application.
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
 * @summary Scales out or in an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
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
 * @summary Scales out or in an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasDeployGroup()) {
    query["DeployGroup"] = request.deployGroup();
  }

  if (!!request.hasEcuInfo()) {
    query["EcuInfo"] = request.ecuInfo();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.autoRenewPeriod();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceChargePeriod()) {
    query["InstanceChargePeriod"] = request.instanceChargePeriod();
  }

  if (!!request.hasInstanceChargePeriodUnit()) {
    query["InstanceChargePeriodUnit"] = request.instanceChargePeriodUnit();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasScalingNum()) {
    query["ScalingNum"] = request.scalingNum();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.scalingPolicy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateInstanceId()) {
    query["TemplateInstanceId"] = request.templateInstanceId();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
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
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.componentIds();
  }

  if (!!request.hasConfigMountDescs()) {
    query["ConfigMountDescs"] = request.configMountDescs();
  }

  if (!!request.hasEmptyDirs()) {
    query["EmptyDirs"] = request.emptyDirs();
  }

  if (!!request.hasEnvFroms()) {
    query["EnvFroms"] = request.envFroms();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasJavaStartUpConfig()) {
    query["JavaStartUpConfig"] = request.javaStartUpConfig();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasLimitEphemeralStorage()) {
    query["LimitEphemeralStorage"] = request.limitEphemeralStorage();
  }

  if (!!request.hasLimitMem()) {
    query["LimitMem"] = request.limitMem();
  }

  if (!!request.hasLimitmCpu()) {
    query["LimitmCpu"] = request.limitmCpu();
  }

  if (!!request.hasLocalVolume()) {
    query["LocalVolume"] = request.localVolume();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPvcMountDescs()) {
    query["PvcMountDescs"] = request.pvcMountDescs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasRequestsEphemeralStorage()) {
    query["RequestsEphemeralStorage"] = request.requestsEphemeralStorage();
  }

  if (!!request.hasRequestsMem()) {
    query["RequestsMem"] = request.requestsMem();
  }

  if (!!request.hasRequestsmCpu()) {
    query["RequestsmCpu"] = request.requestsmCpu();
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
 * @summary Starts an application in a Container Service for Kubernetes (ACK) cluster or Serverless Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
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
 * @summary Starts an application in a Container Service for Kubernetes (ACK) cluster or Serverless Kubernetes cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEccInfo()) {
    query["EccInfo"] = request.eccInfo();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEnableAdvancedMonitoring()) {
    query["EnableAdvancedMonitoring"] = request.enableAdvancedMonitoring();
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
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
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
 * @summary Imports or migrates one or more Elastic Compute Service (ECS) instances to a cluster.
 *
 * @description ## Limits
 * When you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
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
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasTargetClusterId()) {
    query["TargetClusterId"] = request.targetClusterId();
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
 * @summary Imports or migrates one or more Elastic Compute Service (ECS) instances to a cluster.
 *
 * @description ## Limits
 * When you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasSlbName()) {
    query["SlbName"] = request.slbName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Unbinds a Server Load Balancer (SLB) instance from an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasDeleteListener()) {
    query["DeleteListener"] = request.deleteListener();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.slbId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Unbinds a Server Load Balancer (SLB) instance from an application.
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
    query["DeleteAll"] = request.deleteAll();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.tagKeys();
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
 * @summary Modifies the information about an account.
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
    query["Email"] = request.email();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
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
 * @summary Modifies the information about an account.
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
 * @summary Modifies the name, description, and owner of an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
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
 * @summary Modifies the name, description, and owner of an application.
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
 * @summary Modifies an auto scaling policy for an application.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingBehaviour()) {
    query["ScalingBehaviour"] = request.scalingBehaviour();
  }

  if (!!request.hasScalingRuleEnable()) {
    query["ScalingRuleEnable"] = request.scalingRuleEnable();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.scalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.scalingRuleTimer();
  }

  if (!!request.hasScalingRuleTrigger()) {
    query["ScalingRuleTrigger"] = request.scalingRuleTrigger();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.scalingRuleType();
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
 * @summary Modifies an auto scaling policy for an application.
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
    body["Content"] = request.content();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasBuildPackId()) {
    query["BuildPackId"] = request.buildPackId();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasContextPath()) {
    query["ContextPath"] = request.contextPath();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasHttpPort()) {
    query["HttpPort"] = request.httpPort();
  }

  if (!!request.hasMaxThreads()) {
    query["MaxThreads"] = request.maxThreads();
  }

  if (!!request.hasURIEncoding()) {
    query["URIEncoding"] = request.URIEncoding();
  }

  if (!!request.hasUseBodyEncoding()) {
    query["UseBodyEncoding"] = request.useBodyEncoding();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasHcURL()) {
    query["hcURL"] = request.hcURL();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasHooks()) {
    query["Hooks"] = request.hooks();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMaxHeapSize()) {
    query["MaxHeapSize"] = request.maxHeapSize();
  }

  if (!!request.hasMaxPermSize()) {
    query["MaxPermSize"] = request.maxPermSize();
  }

  if (!!request.hasMinHeapSize()) {
    query["MinHeapSize"] = request.minHeapSize();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.cpuLimit();
  }

  if (!!request.hasCpuRequest()) {
    query["CpuRequest"] = request.cpuRequest();
  }

  if (!!request.hasEphemeralStorageLimit()) {
    query["EphemeralStorageLimit"] = request.ephemeralStorageLimit();
  }

  if (!!request.hasEphemeralStorageRequest()) {
    query["EphemeralStorageRequest"] = request.ephemeralStorageRequest();
  }

  if (!!request.hasMcpuLimit()) {
    query["McpuLimit"] = request.mcpuLimit();
  }

  if (!!request.hasMcpuRequest()) {
    query["McpuRequest"] = request.mcpuRequest();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.memoryLimit();
  }

  if (!!request.hasMemoryRequest()) {
    query["MemoryRequest"] = request.memoryRequest();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
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
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
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
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIngressConf()) {
    query["IngressConf"] = request.ingressConf();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
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
 * @summary Updates a specified resource in a Kubernetes cluster.
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
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasResourceContent()) {
    body["ResourceContent"] = request.resourceContent();
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
 * @summary Updates a specified resource in a Kubernetes cluster.
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
    body["Base64Encoded"] = request.base64Encoded();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.certId();
  }

  if (!!request.hasCertRegionId()) {
    body["CertRegionId"] = request.certRegionId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasExternalTrafficPolicy()) {
    query["ExternalTrafficPolicy"] = request.externalTrafficPolicy();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasServicePorts()) {
    query["ServicePorts"] = request.servicePorts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Updates the Server Load Balancer (SLB) instance bound to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDisableForceOverride()) {
    query["DisableForceOverride"] = request.disableForceOverride();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServicePortInfos()) {
    query["ServicePortInfos"] = request.servicePortInfos();
  }

  if (!!request.hasSlbName()) {
    query["SlbName"] = request.slbName();
  }

  if (!!request.hasSlbProtocol()) {
    query["SlbProtocol"] = request.slbProtocol();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.targetPort();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Updates the Server Load Balancer (SLB) instance bound to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
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
 * @summary 更新本地设置
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
    query["AppId"] = request.appId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.threshold();
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
 * @summary 更新本地设置
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
    query["ActionData"] = request.actionData();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
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
 * @summary 更新泳道
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
    query["AppInfos"] = request.appInfos();
  }

  if (!!request.hasEnableRules()) {
    query["EnableRules"] = request.enableRules();
  }

  if (!!request.hasEntryRules()) {
    query["EntryRules"] = request.entryRules();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.laneId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
 * @summary 更新泳道
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
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasEntryApp()) {
    query["EntryApp"] = request.entryApp();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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