#include <darabonba/Core.hpp>
#include <alibabacloud/EfloController20221215.hpp>
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
using namespace AlibabaCloud::EfloController20221215::Models;
namespace AlibabaCloud
{
namespace EfloController20221215
{

AlibabaCloud::EfloController20221215::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eflo-controller", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Approves an O\\&M operation.
 *
 * @param request ApproveOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveOperationResponse
 */
ApproveOperationResponse Client::approveOperationWithOptions(const ApproveOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.getOperationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApproveOperation"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveOperationResponse>();
}

/**
 * @summary Approves an O\\&M operation.
 *
 * @param request ApproveOperationRequest
 * @return ApproveOperationResponse
 */
ApproveOperationResponse Client::approveOperation(const ApproveOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveOperationWithOptions(request, runtime);
}

/**
 * @summary 修改节点的节点组
 *
 * @param tmpReq ChangeNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeNodeGroupResponse
 */
ChangeNodeGroupResponse Client::changeNodeGroupWithOptions(const ChangeNodeGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChangeNodeGroupShrinkRequest request = ChangeNodeGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "json"));
  }

  json query = {};
  if (!!request.hasIgnoreFailedNodeTasks()) {
    query["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasTargetNodeGroupId()) {
    query["TargetNodeGroupId"] = request.getTargetNodeGroupId();
  }

  json body = {};
  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.getNodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeNodeGroup"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeNodeGroupResponse>();
}

/**
 * @summary 修改节点的节点组
 *
 * @param request ChangeNodeGroupRequest
 * @return ChangeNodeGroupResponse
 */
ChangeNodeGroupResponse Client::changeNodeGroup(const ChangeNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeNodeGroupWithOptions(request, runtime);
}

/**
 * @summary 节点规格变配
 *
 * @param tmpReq ChangeNodeTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeNodeTypesResponse
 */
ChangeNodeTypesResponse Client::changeNodeTypesWithOptions(const ChangeNodeTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChangeNodeTypesShrinkRequest request = ChangeNodeTypesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeIds()) {
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIds(), "NodeIds", "json"));
  }

  json body = {};
  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.getNodeIdsShrink();
  }

  if (!!request.hasNodeType()) {
    body["NodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeNodeTypes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeNodeTypesResponse>();
}

/**
 * @summary 节点规格变配
 *
 * @param request ChangeNodeTypesRequest
 * @return ChangeNodeTypesResponse
 */
ChangeNodeTypesResponse Client::changeNodeTypes(const ChangeNodeTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeNodeTypesWithOptions(request, runtime);
}

/**
 * @summary Moves a resource from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2022-12-15"},
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
 * @summary Moves a resource from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Disconnect Connection
 *
 * @param request CloseSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseSessionResponse
 */
CloseSessionResponse Client::closeSessionWithOptions(const CloseSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSessionToken()) {
    body["SessionToken"] = request.getSessionToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CloseSession"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseSessionResponse>();
}

/**
 * @summary Disconnect Connection
 *
 * @param request CloseSessionRequest
 * @return CloseSessionResponse
 */
CloseSessionResponse Client::closeSession(const CloseSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeSessionWithOptions(request, runtime);
}

/**
 * @summary Create a large-scale computing cluster
 *
 * @param tmpReq CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClusterShrinkRequest request = CreateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

  if (!!tmpReq.hasNetworks()) {
    request.setNetworksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworks(), "Networks", "json"));
  }

  if (!!tmpReq.hasNimizVSwitches()) {
    request.setNimizVSwitchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNimizVSwitches(), "NimizVSwitches", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeGroups(), "NodeGroups", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasClusterDescription()) {
    body["ClusterDescription"] = request.getClusterDescription();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasComponentsShrink()) {
    body["Components"] = request.getComponentsShrink();
  }

  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.getHpnZone();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasNetworksShrink()) {
    body["Networks"] = request.getNetworksShrink();
  }

  if (!!request.hasNimizVSwitchesShrink()) {
    body["NimizVSwitches"] = request.getNimizVSwitchesShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.getNodeGroupsShrink();
  }

  if (!!request.hasOpenEniJumboFrame()) {
    body["OpenEniJumboFrame"] = request.getOpenEniJumboFrame();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Create a large-scale computing cluster
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a diagnostics task.
 *
 * @param tmpReq CreateDiagnosticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnosticTaskResponse
 */
CreateDiagnosticTaskResponse Client::createDiagnosticTaskWithOptions(const CreateDiagnosticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDiagnosticTaskShrinkRequest request = CreateDiagnosticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAiJobLogInfo()) {
    request.setAiJobLogInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAiJobLogInfo(), "AiJobLogInfo", "json"));
  }

  if (!!tmpReq.hasNodeIds()) {
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIds(), "NodeIds", "simple"));
  }

  json body = {};
  if (!!request.hasAiJobLogInfoShrink()) {
    body["AiJobLogInfo"] = request.getAiJobLogInfoShrink();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDiagnosticType()) {
    body["DiagnosticType"] = request.getDiagnosticType();
  }

  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.getNodeIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDiagnosticTask"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiagnosticTaskResponse>();
}

/**
 * @summary Creates a diagnostics task.
 *
 * @param request CreateDiagnosticTaskRequest
 * @return CreateDiagnosticTaskResponse
 */
CreateDiagnosticTaskResponse Client::createDiagnosticTask(const CreateDiagnosticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiagnosticTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a network test task.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param tmpReq CreateNetTestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetTestTaskResponse
 */
CreateNetTestTaskResponse Client::createNetTestTaskWithOptions(const CreateNetTestTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNetTestTaskShrinkRequest request = CreateNetTestTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommTest()) {
    request.setCommTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommTest(), "CommTest", "json"));
  }

  if (!!tmpReq.hasDelayTest()) {
    request.setDelayTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDelayTest(), "DelayTest", "json"));
  }

  if (!!tmpReq.hasTrafficTest()) {
    request.setTrafficTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrafficTest(), "TrafficTest", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasCommTestShrink()) {
    body["CommTest"] = request.getCommTestShrink();
  }

  if (!!request.hasDelayTestShrink()) {
    body["DelayTest"] = request.getDelayTestShrink();
  }

  if (!!request.hasNetTestType()) {
    body["NetTestType"] = request.getNetTestType();
  }

  if (!!request.hasNetworkMode()) {
    body["NetworkMode"] = request.getNetworkMode();
  }

  if (!!request.hasPort()) {
    body["Port"] = request.getPort();
  }

  if (!!request.hasTrafficTestShrink()) {
    body["TrafficTest"] = request.getTrafficTestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNetTestTask"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetTestTaskResponse>();
}

/**
 * @summary Creates a network test task.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request CreateNetTestTaskRequest
 * @return CreateNetTestTaskResponse
 */
CreateNetTestTaskResponse Client::createNetTestTask(const CreateNetTestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetTestTaskWithOptions(request, runtime);
}

/**
 * @summary Create Node Group under Cluster
 *
 * @param tmpReq CreateNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeGroupResponse
 */
CreateNodeGroupResponse Client::createNodeGroupWithOptions(const CreateNodeGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNodeGroupShrinkRequest request = CreateNodeGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeGroup()) {
    request.setNodeGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeGroup(), "NodeGroup", "json"));
  }

  if (!!tmpReq.hasNodeUnit()) {
    request.setNodeUnitShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeUnit(), "NodeUnit", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroupShrink()) {
    body["NodeGroup"] = request.getNodeGroupShrink();
  }

  if (!!request.hasNodeUnitShrink()) {
    body["NodeUnit"] = request.getNodeUnitShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNodeGroup"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeGroupResponse>();
}

/**
 * @summary Create Node Group under Cluster
 *
 * @param request CreateNodeGroupRequest
 * @return CreateNodeGroupResponse
 */
CreateNodeGroupResponse Client::createNodeGroup(const CreateNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a Web Terminal session.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request CreateSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSessionWithOptions(const CreateSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSessionType()) {
    body["SessionType"] = request.getSessionType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSession"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionResponse>();
}

/**
 * @summary Creates a Web Terminal session.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request CreateSessionRequest
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSession(const CreateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSessionWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual storage channel (VSC).
 *
 * @param request CreateVscRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVscResponse
 */
CreateVscResponse Client::createVscWithOptions(const CreateVscRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasVscName()) {
    body["VscName"] = request.getVscName();
  }

  if (!!request.hasVscType()) {
    body["VscType"] = request.getVscType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVsc"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVscResponse>();
}

/**
 * @summary Creates a virtual storage channel (VSC).
 *
 * @param request CreateVscRequest
 * @return CreateVscResponse
 */
CreateVscResponse Client::createVsc(const CreateVscRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVscWithOptions(request, runtime);
}

/**
 * @summary Deletes a Lingjun cluster.
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary Deletes a Lingjun cluster.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary 删除一个未使用超节点
 *
 * @param request DeleteHyperNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHyperNodeResponse
 */
DeleteHyperNodeResponse Client::deleteHyperNodeWithOptions(const DeleteHyperNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHyperNodeId()) {
    body["HyperNodeId"] = request.getHyperNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteHyperNode"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHyperNodeResponse>();
}

/**
 * @summary 删除一个未使用超节点
 *
 * @param request DeleteHyperNodeRequest
 * @return DeleteHyperNodeResponse
 */
DeleteHyperNodeResponse Client::deleteHyperNode(const DeleteHyperNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHyperNodeWithOptions(request, runtime);
}

/**
 * @summary 删除一个未使用节点
 *
 * @param request DeleteNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNodeWithOptions(const DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNode"},
    {"version" , "2022-12-15"},
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
 * @summary 删除一个未使用节点
 *
 * @param request DeleteNodeRequest
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNode(const DeleteNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeWithOptions(request, runtime);
}

/**
 * @summary 删除节点分组
 *
 * @param request DeleteNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeGroupResponse
 */
DeleteNodeGroupResponse Client::deleteNodeGroupWithOptions(const DeleteNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNodeGroup"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNodeGroupResponse>();
}

/**
 * @summary 删除节点分组
 *
 * @param request DeleteNodeGroupRequest
 * @return DeleteNodeGroupResponse
 */
DeleteNodeGroupResponse Client::deleteNodeGroup(const DeleteNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual storage channel (VSC).
 *
 * @param request DeleteVscRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVscResponse
 */
DeleteVscResponse Client::deleteVscWithOptions(const DeleteVscRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasVscId()) {
    body["VscId"] = request.getVscId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteVsc"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVscResponse>();
}

/**
 * @summary Deletes a virtual storage channel (VSC).
 *
 * @param request DeleteVscRequest
 * @return DeleteVscResponse
 */
DeleteVscResponse Client::deleteVsc(const DeleteVscRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVscWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Lingjun cluster.
 *
 * @param request DescribeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterResponse
 */
DescribeClusterResponse Client::describeClusterWithOptions(const DescribeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCluster"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterResponse>();
}

/**
 * @summary Queries information about a Lingjun cluster.
 *
 * @param request DescribeClusterRequest
 * @return DescribeClusterResponse
 */
DescribeClusterResponse Client::describeCluster(const DescribeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a diagnostic task.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request DescribeDiagnosticResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosticResultResponse
 */
DescribeDiagnosticResultResponse Client::describeDiagnosticResultWithOptions(const DescribeDiagnosticResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDiagnosticId()) {
    body["DiagnosticId"] = request.getDiagnosticId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosticResult"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosticResultResponse>();
}

/**
 * @summary Queries the results of a diagnostic task.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request DescribeDiagnosticResultRequest
 * @return DescribeDiagnosticResultResponse
 */
DescribeDiagnosticResultResponse Client::describeDiagnosticResult(const DescribeDiagnosticResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosticResultWithOptions(request, runtime);
}

/**
 * @summary 查询节点列表
 *
 * @param request DescribeHyperNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHyperNodeResponse
 */
DescribeHyperNodeResponse Client::describeHyperNodeWithOptions(const DescribeHyperNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHyperNodeId()) {
    body["HyperNodeId"] = request.getHyperNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeHyperNode"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHyperNodeResponse>();
}

/**
 * @summary 查询节点列表
 *
 * @param request DescribeHyperNodeRequest
 * @return DescribeHyperNodeResponse
 */
DescribeHyperNodeResponse Client::describeHyperNode(const DescribeHyperNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHyperNodeWithOptions(request, runtime);
}

/**
 * @summary Queries the execution list and status of O\\&M Assistant commands.
 *
 * @param request DescribeInvocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocationsWithOptions(const DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContentEncoding()) {
    body["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasIncludeOutput()) {
    body["IncludeOutput"] = request.getIncludeOutput();
  }

  if (!!request.hasInvokeId()) {
    body["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeInvocations"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvocationsResponse>();
}

/**
 * @summary Queries the execution list and status of O\\&M Assistant commands.
 *
 * @param request DescribeInvocationsRequest
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocations(const DescribeInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationsWithOptions(request, runtime);
}

/**
 * @summary Query Network Test Result
 *
 * @param request DescribeNetTestResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetTestResultResponse
 */
DescribeNetTestResultResponse Client::describeNetTestResultWithOptions(const DescribeNetTestResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTestId()) {
    body["TestId"] = request.getTestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNetTestResult"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetTestResultResponse>();
}

/**
 * @summary Query Network Test Result
 *
 * @param request DescribeNetTestResultRequest
 * @return DescribeNetTestResultResponse
 */
DescribeNetTestResultResponse Client::describeNetTestResult(const DescribeNetTestResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetTestResultWithOptions(request, runtime);
}

/**
 * @summary Queries a list of nodes.
 *
 * @param request DescribeNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeResponse
 */
DescribeNodeResponse Client::describeNodeWithOptions(const DescribeNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNode"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeResponse>();
}

/**
 * @summary Queries a list of nodes.
 *
 * @param request DescribeNodeRequest
 * @return DescribeNodeResponse
 */
DescribeNodeResponse Client::describeNode(const DescribeNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodeWithOptions(request, runtime);
}

/**
 * @summary 查询节点分组
 *
 * @param request DescribeNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeGroupResponse
 */
DescribeNodeGroupResponse Client::describeNodeGroupWithOptions(const DescribeNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNodeGroup"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeGroupResponse>();
}

/**
 * @summary 查询节点分组
 *
 * @param request DescribeNodeGroupRequest
 * @return DescribeNodeGroupResponse
 */
DescribeNodeGroupResponse Client::describeNodeGroup(const DescribeNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodeGroupWithOptions(request, runtime);
}

/**
 * @summary 创建Web Terminal会话
 *
 * @param request DescribeNodeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeTypeResponse
 */
DescribeNodeTypeResponse Client::describeNodeTypeWithOptions(const DescribeNodeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeType()) {
    body["NodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNodeType"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeTypeResponse>();
}

/**
 * @summary 创建Web Terminal会话
 *
 * @param request DescribeNodeTypeRequest
 * @return DescribeNodeTypeResponse
 */
DescribeNodeTypeResponse Client::describeNodeType(const DescribeNodeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodeTypeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2022-12-15"},
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
 * @summary Queries a list of regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the files that are sent by an O\\&M assistant and the status of the files.
 *
 * @param request DescribeSendFileResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSendFileResultsResponse
 */
DescribeSendFileResultsResponse Client::describeSendFileResultsWithOptions(const DescribeSendFileResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInvokeId()) {
    body["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSendFileResults"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSendFileResultsResponse>();
}

/**
 * @summary Queries the files that are sent by an O\\&M assistant and the status of the files.
 *
 * @param request DescribeSendFileResultsRequest
 * @return DescribeSendFileResultsResponse
 */
DescribeSendFileResultsResponse Client::describeSendFileResults(const DescribeSendFileResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSendFileResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a task.
 *
 * @param request DescribeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTaskWithOptions(const DescribeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeTask"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskResponse>();
}

/**
 * @summary Queries the details of a task.
 *
 * @param request DescribeTaskRequest
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTask(const DescribeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries information about a virtual storage channel (VSC).
 *
 * @param request DescribeVscRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVscResponse
 */
DescribeVscResponse Client::describeVscWithOptions(const DescribeVscRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVscId()) {
    body["VscId"] = request.getVscId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeVsc"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVscResponse>();
}

/**
 * @summary Queries information about a virtual storage channel (VSC).
 *
 * @param request DescribeVscRequest
 * @return DescribeVscResponse
 */
DescribeVscResponse Client::describeVsc(const DescribeVscRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVscWithOptions(request, runtime);
}

/**
 * @summary Queries a list of zones.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2022-12-15"},
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
 * @summary Queries a list of zones.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Cluster Scaling
 *
 * @param tmpReq ExtendClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExtendClusterResponse
 */
ExtendClusterResponse Client::extendClusterWithOptions(const ExtendClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExtendClusterShrinkRequest request = ExtendClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpAllocationPolicy()) {
    request.setIpAllocationPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpAllocationPolicy(), "IpAllocationPolicy", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeGroups(), "NodeGroups", "json"));
  }

  if (!!tmpReq.hasVpdSubnets()) {
    request.setVpdSubnetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVpdSubnets(), "VpdSubnets", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasIpAllocationPolicyShrink()) {
    body["IpAllocationPolicy"] = request.getIpAllocationPolicyShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.getNodeGroupsShrink();
  }

  if (!!request.hasVSwitchZoneId()) {
    body["VSwitchZoneId"] = request.getVSwitchZoneId();
  }

  if (!!request.hasVpdSubnetsShrink()) {
    body["VpdSubnets"] = request.getVpdSubnetsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExtendCluster"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExtendClusterResponse>();
}

/**
 * @summary Cluster Scaling
 *
 * @param request ExtendClusterRequest
 * @return ExtendClusterResponse
 */
ExtendClusterResponse Client::extendCluster(const ExtendClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return extendClusterWithOptions(request, runtime);
}

/**
 * @summary 集群下的主机分组列表，分组下的主机列表
 *
 * @param request ListClusterHyperNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterHyperNodesResponse
 */
ListClusterHyperNodesResponse Client::listClusterHyperNodesWithOptions(const ListClusterHyperNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListClusterHyperNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterHyperNodesResponse>();
}

/**
 * @summary 集群下的主机分组列表，分组下的主机列表
 *
 * @param request ListClusterHyperNodesRequest
 * @return ListClusterHyperNodesResponse
 */
ListClusterHyperNodesResponse Client::listClusterHyperNodes(const ListClusterHyperNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterHyperNodesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of nodes in a cluster.
 *
 * @param request ListClusterNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterNodesResponse
 */
ListClusterNodesResponse Client::listClusterNodesWithOptions(const ListClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasOperatingStates()) {
    body["OperatingStates"] = request.getOperatingStates();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListClusterNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterNodesResponse>();
}

/**
 * @summary Queries a list of nodes in a cluster.
 *
 * @param request ListClusterNodesRequest
 * @return ListClusterNodesResponse
 */
ListClusterNodesResponse Client::listClusterNodes(const ListClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterNodesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of clusters.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries a list of clusters.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary List of Diagnostic Tasks
 *
 * @param request ListDiagnosticResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnosticResultsResponse
 */
ListDiagnosticResultsResponse Client::listDiagnosticResultsWithOptions(const ListDiagnosticResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDiagType()) {
    body["DiagType"] = request.getDiagType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDiagnosticResults"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnosticResultsResponse>();
}

/**
 * @summary List of Diagnostic Tasks
 *
 * @param request ListDiagnosticResultsRequest
 * @return ListDiagnosticResultsResponse
 */
ListDiagnosticResultsResponse Client::listDiagnosticResults(const ListDiagnosticResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDiagnosticResultsWithOptions(request, runtime);
}

/**
 * @summary 可用rack物理机列表
 *
 * @param request ListFreeHyperNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFreeHyperNodesResponse
 */
ListFreeHyperNodesResponse Client::listFreeHyperNodesWithOptions(const ListFreeHyperNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.getHpnZone();
  }

  if (!!request.hasMachineType()) {
    body["MachineType"] = request.getMachineType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFreeHyperNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFreeHyperNodesResponse>();
}

/**
 * @summary 可用rack物理机列表
 *
 * @param request ListFreeHyperNodesRequest
 * @return ListFreeHyperNodesResponse
 */
ListFreeHyperNodesResponse Client::listFreeHyperNodes(const ListFreeHyperNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFreeHyperNodesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of nodes that are not used.
 *
 * @param request ListFreeNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFreeNodesResponse
 */
ListFreeNodesResponse Client::listFreeNodesWithOptions(const ListFreeNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.getHpnZone();
  }

  if (!!request.hasMachineType()) {
    body["MachineType"] = request.getMachineType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOperatingStates()) {
    body["OperatingStates"] = request.getOperatingStates();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFreeNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFreeNodesResponse>();
}

/**
 * @summary Queries a list of nodes that are not used.
 *
 * @param request ListFreeNodesRequest
 * @return ListFreeNodesResponse
 */
ListFreeNodesResponse Client::listFreeNodes(const ListFreeNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFreeNodesWithOptions(request, runtime);
}

/**
 * @summary 机器列表
 *
 * @param tmpReq ListHyperNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHyperNodesResponse
 */
ListHyperNodesResponse Client::listHyperNodesWithOptions(const ListHyperNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHyperNodesShrinkRequest request = ListHyperNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHyperNodeIds()) {
    request.setHyperNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHyperNodeIds(), "HyperNodeIds", "json"));
  }

  if (!!tmpReq.hasOperatingStates()) {
    request.setOperatingStatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperatingStates(), "OperatingStates", "json"));
  }

  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasHyperNodeIdsShrink()) {
    query["HyperNodeIds"] = request.getHyperNodeIdsShrink();
  }

  if (!!request.hasOperatingStatesShrink()) {
    query["OperatingStates"] = request.getOperatingStatesShrink();
  }

  json body = {};
  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.getHpnZone();
  }

  if (!!request.hasHyperNodeId()) {
    body["HyperNodeId"] = request.getHyperNodeId();
  }

  if (!!request.hasMachineType()) {
    body["MachineType"] = request.getMachineType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupName()) {
    body["NodeGroupName"] = request.getNodeGroupName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHyperNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHyperNodesResponse>();
}

/**
 * @summary 机器列表
 *
 * @param request ListHyperNodesRequest
 * @return ListHyperNodesResponse
 */
ListHyperNodesResponse Client::listHyperNodes(const ListHyperNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHyperNodesWithOptions(request, runtime);
}

/**
 * @summary Lists available images.
 *
 * @param request ListImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArchitecture()) {
    body["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasImageVersion()) {
    body["ImageVersion"] = request.getImageVersion();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary Lists available images.
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary Query machine network configuration using HPNZone and machine type
 *
 * @param tmpReq ListMachineNetworkInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMachineNetworkInfoResponse
 */
ListMachineNetworkInfoResponse Client::listMachineNetworkInfoWithOptions(const ListMachineNetworkInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMachineNetworkInfoShrinkRequest request = ListMachineNetworkInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMachineHpnInfo()) {
    request.setMachineHpnInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMachineHpnInfo(), "MachineHpnInfo", "json"));
  }

  json body = {};
  if (!!request.hasMachineHpnInfoShrink()) {
    body["MachineHpnInfo"] = request.getMachineHpnInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMachineNetworkInfo"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMachineNetworkInfoResponse>();
}

/**
 * @summary Query machine network configuration using HPNZone and machine type
 *
 * @param request ListMachineNetworkInfoRequest
 * @return ListMachineNetworkInfoResponse
 */
ListMachineNetworkInfoResponse Client::listMachineNetworkInfo(const ListMachineNetworkInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMachineNetworkInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instance types that are available to users.
 *
 * @param request ListMachineTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMachineTypesResponse
 */
ListMachineTypesResponse Client::listMachineTypesWithOptions(const ListMachineTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMachineTypes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMachineTypesResponse>();
}

/**
 * @summary Queries a list of instance types that are available to users.
 *
 * @param request ListMachineTypesRequest
 * @return ListMachineTypesResponse
 */
ListMachineTypesResponse Client::listMachineTypes(const ListMachineTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMachineTypesWithOptions(request, runtime);
}

/**
 * @summary Lists the results of network test results.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request ListNetTestResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetTestResultsResponse
 */
ListNetTestResultsResponse Client::listNetTestResultsWithOptions(const ListNetTestResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetTestType()) {
    body["NetTestType"] = request.getNetTestType();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNetTestResults"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetTestResultsResponse>();
}

/**
 * @summary Lists the results of network test results.
 *
 * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
 *
 * @param request ListNetTestResultsRequest
 * @return ListNetTestResultsResponse
 */
ListNetTestResultsResponse Client::listNetTestResults(const ListNetTestResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetTestResultsWithOptions(request, runtime);
}

/**
 * @summary Queries node groups in a cluster.
 *
 * @param request ListNodeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeGroupsResponse
 */
ListNodeGroupsResponse Client::listNodeGroupsWithOptions(const ListNodeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodeGroups"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeGroupsResponse>();
}

/**
 * @summary Queries node groups in a cluster.
 *
 * @param request ListNodeGroupsRequest
 * @return ListNodeGroupsResponse
 */
ListNodeGroupsResponse Client::listNodeGroups(const ListNodeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询系统日志
 *
 * @param request ListSyslogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSyslogsResponse
 */
ListSyslogsResponse Client::listSyslogsWithOptions(const ListSyslogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFromTime()) {
    body["FromTime"] = request.getFromTime();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasReverse()) {
    body["Reverse"] = request.getReverse();
  }

  if (!!request.hasToTime()) {
    body["ToTime"] = request.getToTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSyslogs"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSyslogsResponse>();
}

/**
 * @summary 查询系统日志
 *
 * @param request ListSyslogsRequest
 * @return ListSyslogsResponse
 */
ListSyslogsResponse Client::listSyslogs(const ListSyslogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSyslogsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of resources.
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
    {"version" , "2022-12-15"},
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
 * @summary Queries the tags of resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Query the cluster types available to the user
 *
 * @param request ListUserClusterTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserClusterTypesResponse
 */
ListUserClusterTypesResponse Client::listUserClusterTypesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListUserClusterTypes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserClusterTypesResponse>();
}

/**
 * @summary Query the cluster types available to the user
 *
 * @return ListUserClusterTypesResponse
 */
ListUserClusterTypesResponse Client::listUserClusterTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserClusterTypesWithOptions(runtime);
}

/**
 * @summary Queries a list of virtual storage channels (VSC).
 *
 * @param tmpReq ListVscsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVscsResponse
 */
ListVscsResponse Client::listVscsWithOptions(const ListVscsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListVscsShrinkRequest request = ListVscsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeIds()) {
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIds(), "NodeIds", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.getNodeIdsShrink();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasVscName()) {
    body["VscName"] = request.getVscName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVscs"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVscsResponse>();
}

/**
 * @summary Queries a list of virtual storage channels (VSC).
 *
 * @param request ListVscsRequest
 * @return ListVscsResponse
 */
ListVscsResponse Client::listVscs(const ListVscsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVscsWithOptions(request, runtime);
}

/**
 * @summary Restarts nodes.
 *
 * @param tmpReq RebootNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootNodesResponse
 */
RebootNodesResponse Client::rebootNodesWithOptions(const RebootNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RebootNodesShrinkRequest request = RebootNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.getNodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RebootNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootNodesResponse>();
}

/**
 * @summary Restarts nodes.
 *
 * @param request RebootNodesRequest
 * @return RebootNodesResponse
 */
RebootNodesResponse Client::rebootNodes(const RebootNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootNodesWithOptions(request, runtime);
}

/**
 * @summary Reinstall a node.
 *
 * @param tmpReq ReimageNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReimageNodesResponse
 */
ReimageNodesResponse Client::reimageNodesWithOptions(const ReimageNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReimageNodesShrinkRequest request = ReimageNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.getNodesShrink();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReimageNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReimageNodesResponse>();
}

/**
 * @summary Reinstall a node.
 *
 * @param request ReimageNodesRequest
 * @return ReimageNodesResponse
 */
ReimageNodesResponse Client::reimageNodes(const ReimageNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reimageNodesWithOptions(request, runtime);
}

/**
 * @summary 节点异常问题上报
 *
 * @param tmpReq ReportNodesStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportNodesStatusResponse
 */
ReportNodesStatusResponse Client::reportNodesStatusWithOptions(const ReportNodesStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReportNodesStatusShrinkRequest request = ReportNodesStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIssueCategory()) {
    body["IssueCategory"] = request.getIssueCategory();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.getNodesShrink();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReportNodesStatus"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportNodesStatusResponse>();
}

/**
 * @summary 节点异常问题上报
 *
 * @param request ReportNodesStatusRequest
 * @return ReportNodesStatusResponse
 */
ReportNodesStatusResponse Client::reportNodesStatus(const ReportNodesStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportNodesStatusWithOptions(request, runtime);
}

/**
 * @summary Runs a Shell script on one or more Lingjun nodes.
 *
 * @param tmpReq RunCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommandWithOptions(const RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCommandShrinkRequest request = RunCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeIdList()) {
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIdList(), "NodeIdList", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommandContent()) {
    body["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasCommandId()) {
    body["CommandId"] = request.getCommandId();
  }

  if (!!request.hasContentEncoding()) {
    body["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableParameter()) {
    body["EnableParameter"] = request.getEnableParameter();
  }

  if (!!request.hasFrequency()) {
    body["Frequency"] = request.getFrequency();
  }

  if (!!request.hasLauncher()) {
    body["Launcher"] = request.getLauncher();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.getNodeIdListShrink();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRepeatMode()) {
    body["RepeatMode"] = request.getRepeatMode();
  }

  if (!!request.hasTerminationMode()) {
    body["TerminationMode"] = request.getTerminationMode();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.getTimeout();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
  }

  if (!!request.hasWorkingDir()) {
    body["WorkingDir"] = request.getWorkingDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCommand"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCommandResponse>();
}

/**
 * @summary Runs a Shell script on one or more Lingjun nodes.
 *
 * @param request RunCommandRequest
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommand(const RunCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommandWithOptions(request, runtime);
}

/**
 * @summary Sends a file to one or more Lingjun nodes.
 *
 * @param tmpReq SendFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendFileResponse
 */
SendFileResponse Client::sendFileWithOptions(const SendFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendFileShrinkRequest request = SendFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeIdList()) {
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIdList(), "NodeIdList", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFileGroup()) {
    body["FileGroup"] = request.getFileGroup();
  }

  if (!!request.hasFileMode()) {
    body["FileMode"] = request.getFileMode();
  }

  if (!!request.hasFileOwner()) {
    body["FileOwner"] = request.getFileOwner();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.getNodeIdListShrink();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasTargetDir()) {
    body["TargetDir"] = request.getTargetDir();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendFile"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendFileResponse>();
}

/**
 * @summary Sends a file to one or more Lingjun nodes.
 *
 * @param request SendFileRequest
 * @return SendFileResponse
 */
SendFileResponse Client::sendFile(const SendFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendFileWithOptions(request, runtime);
}

/**
 * @summary Scales in a cluster.
 *
 * @param tmpReq ShrinkClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShrinkClusterResponse
 */
ShrinkClusterResponse Client::shrinkClusterWithOptions(const ShrinkClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ShrinkClusterShrinkRequest request = ShrinkClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeGroups(), "NodeGroups", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.getNodeGroupsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ShrinkCluster"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShrinkClusterResponse>();
}

/**
 * @summary Scales in a cluster.
 *
 * @param request ShrinkClusterRequest
 * @return ShrinkClusterResponse
 */
ShrinkClusterResponse Client::shrinkCluster(const ShrinkClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return shrinkClusterWithOptions(request, runtime);
}

/**
 * @summary Stops the O\\&M assistant command execution.
 *
 * @param tmpReq StopInvocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInvocationResponse
 */
StopInvocationResponse Client::stopInvocationWithOptions(const StopInvocationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopInvocationShrinkRequest request = StopInvocationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeIdList()) {
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeIdList(), "NodeIdList", "json"));
  }

  json body = {};
  if (!!request.hasInvokeId()) {
    body["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.getNodeIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopInvocation"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInvocationResponse>();
}

/**
 * @summary Stops the O\\&M assistant command execution.
 *
 * @param request StopInvocationRequest
 * @return StopInvocationResponse
 */
StopInvocationResponse Client::stopInvocation(const StopInvocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInvocationWithOptions(request, runtime);
}

/**
 * @summary Stops nodes.
 *
 * @param tmpReq StopNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopNodesResponse
 */
StopNodesResponse Client::stopNodesWithOptions(const StopNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopNodesShrinkRequest request = StopNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.getIgnoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.getNodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopNodes"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopNodesResponse>();
}

/**
 * @summary Stops nodes.
 *
 * @param request StopNodesRequest
 * @return StopNodesResponse
 */
StopNodesResponse Client::stopNodes(const StopNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopNodesWithOptions(request, runtime);
}

/**
 * @summary Tags resources.
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
    {"version" , "2022-12-15"},
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
 * @summary Tags resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom tag from a resource.
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
    {"version" , "2022-12-15"},
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
 * @summary Deletes a custom tag from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Update Node Group
 *
 * @param request UpdateNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeGroupResponse
 */
UpdateNodeGroupResponse Client::updateNodeGroupWithOptions(const UpdateNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileSystemMountEnabled()) {
    body["FileSystemMountEnabled"] = request.getFileSystemMountEnabled();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeyPairName()) {
    body["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasLoginPassword()) {
    body["LoginPassword"] = request.getLoginPassword();
  }

  if (!!request.hasNewNodeGroupName()) {
    body["NewNodeGroupName"] = request.getNewNodeGroupName();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNodeGroup"},
    {"version" , "2022-12-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeGroupResponse>();
}

/**
 * @summary Update Node Group
 *
 * @param request UpdateNodeGroupRequest
 * @return UpdateNodeGroupResponse
 */
UpdateNodeGroupResponse Client::updateNodeGroup(const UpdateNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EfloController20221215