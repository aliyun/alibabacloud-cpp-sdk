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
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
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
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasSessionToken()) {
    body["SessionToken"] = request.sessionToken();
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
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.components(), "Components", "json"));
  }

  if (!!tmpReq.hasNetworks()) {
    request.setNetworksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.networks(), "Networks", "json"));
  }

  if (!!tmpReq.hasNimizVSwitches()) {
    request.setNimizVSwitchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nimizVSwitches(), "NimizVSwitches", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeGroups(), "NodeGroups", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasClusterDescription()) {
    body["ClusterDescription"] = request.clusterDescription();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.clusterType();
  }

  if (!!request.hasComponentsShrink()) {
    body["Components"] = request.componentsShrink();
  }

  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.hpnZone();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasNetworksShrink()) {
    body["Networks"] = request.networksShrink();
  }

  if (!!request.hasNimizVSwitchesShrink()) {
    body["NimizVSwitches"] = request.nimizVSwitchesShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.nodeGroupsShrink();
  }

  if (!!request.hasOpenEniJumboFrame()) {
    body["OpenEniJumboFrame"] = request.openEniJumboFrame();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    request.setAiJobLogInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aiJobLogInfo(), "AiJobLogInfo", "json"));
  }

  if (!!tmpReq.hasNodeIds()) {
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIds(), "NodeIds", "simple"));
  }

  json body = {};
  if (!!request.hasAiJobLogInfoShrink()) {
    body["AiJobLogInfo"] = request.aiJobLogInfoShrink();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDiagnosticType()) {
    body["DiagnosticType"] = request.diagnosticType();
  }

  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.nodeIdsShrink();
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
    request.setCommTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commTest(), "CommTest", "json"));
  }

  if (!!tmpReq.hasDelayTest()) {
    request.setDelayTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.delayTest(), "DelayTest", "json"));
  }

  if (!!tmpReq.hasTrafficTest()) {
    request.setTrafficTestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trafficTest(), "TrafficTest", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  if (!!request.hasCommTestShrink()) {
    body["CommTest"] = request.commTestShrink();
  }

  if (!!request.hasDelayTestShrink()) {
    body["DelayTest"] = request.delayTestShrink();
  }

  if (!!request.hasNetTestType()) {
    body["NetTestType"] = request.netTestType();
  }

  if (!!request.hasNetworkMode()) {
    body["NetworkMode"] = request.networkMode();
  }

  if (!!request.hasPort()) {
    body["Port"] = request.port();
  }

  if (!!request.hasTrafficTestShrink()) {
    body["TrafficTest"] = request.trafficTestShrink();
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
    request.setNodeGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeGroup(), "NodeGroup", "json"));
  }

  if (!!tmpReq.hasNodeUnit()) {
    request.setNodeUnitShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeUnit(), "NodeUnit", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroupShrink()) {
    body["NodeGroup"] = request.nodeGroupShrink();
  }

  if (!!request.hasNodeUnitShrink()) {
    body["NodeUnit"] = request.nodeUnitShrink();
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
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasSessionType()) {
    body["SessionType"] = request.sessionType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
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
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVscName()) {
    body["VscName"] = request.vscName();
  }

  if (!!request.hasVscType()) {
    body["VscType"] = request.vscType();
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
    body["ClusterId"] = request.clusterId();
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
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.nodeGroupId();
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
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasVscId()) {
    body["VscId"] = request.vscId();
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
    body["ClusterId"] = request.clusterId();
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
    body["DiagnosticId"] = request.diagnosticId();
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
    body["ContentEncoding"] = request.contentEncoding();
  }

  if (!!request.hasIncludeOutput()) {
    body["IncludeOutput"] = request.includeOutput();
  }

  if (!!request.hasInvokeId()) {
    body["InvokeId"] = request.invokeId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
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
    body["TestId"] = request.testId();
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
    body["NodeId"] = request.nodeId();
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
    body["NodeType"] = request.nodeType();
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
    body["AcceptLanguage"] = request.acceptLanguage();
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
    body["InvokeId"] = request.invokeId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
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
    body["TaskId"] = request.taskId();
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
    body["VscId"] = request.vscId();
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
    body["AcceptLanguage"] = request.acceptLanguage();
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
    request.setIpAllocationPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ipAllocationPolicy(), "IpAllocationPolicy", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeGroups(), "NodeGroups", "json"));
  }

  if (!!tmpReq.hasVpdSubnets()) {
    request.setVpdSubnetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vpdSubnets(), "VpdSubnets", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasIpAllocationPolicyShrink()) {
    body["IpAllocationPolicy"] = request.ipAllocationPolicyShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.nodeGroupsShrink();
  }

  if (!!request.hasVSwitchZoneId()) {
    body["VSwitchZoneId"] = request.vSwitchZoneId();
  }

  if (!!request.hasVpdSubnetsShrink()) {
    body["VpdSubnets"] = request.vpdSubnetsShrink();
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
    query["Tags"] = request.tags();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    query["Tags"] = request.tags();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    body["DiagType"] = request.diagType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    query["Tags"] = request.tags();
  }

  json body = {};
  if (!!request.hasHpnZone()) {
    body["HpnZone"] = request.hpnZone();
  }

  if (!!request.hasMachineType()) {
    body["MachineType"] = request.machineType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOperatingStates()) {
    body["OperatingStates"] = request.operatingStates();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    body["Architecture"] = request.architecture();
  }

  if (!!request.hasImageVersion()) {
    body["ImageVersion"] = request.imageVersion();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
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
    request.setMachineHpnInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.machineHpnInfo(), "MachineHpnInfo", "json"));
  }

  json body = {};
  if (!!request.hasMachineHpnInfoShrink()) {
    body["MachineHpnInfo"] = request.machineHpnInfoShrink();
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
    body["Name"] = request.name();
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
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetTestType()) {
    body["NetTestType"] = request.netTestType();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.nodeGroupId();
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
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIds(), "NodeIds", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.nodeIdsShrink();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVscName()) {
    body["VscName"] = request.vscName();
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
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.nodesShrink();
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
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.nodesShrink();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.userData();
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
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIdList(), "NodeIdList", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommandContent()) {
    body["CommandContent"] = request.commandContent();
  }

  if (!!request.hasCommandId()) {
    body["CommandId"] = request.commandId();
  }

  if (!!request.hasContentEncoding()) {
    body["ContentEncoding"] = request.contentEncoding();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnableParameter()) {
    body["EnableParameter"] = request.enableParameter();
  }

  if (!!request.hasFrequency()) {
    body["Frequency"] = request.frequency();
  }

  if (!!request.hasLauncher()) {
    body["Launcher"] = request.launcher();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.nodeIdListShrink();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRepeatMode()) {
    body["RepeatMode"] = request.repeatMode();
  }

  if (!!request.hasTerminationMode()) {
    body["TerminationMode"] = request.terminationMode();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.username();
  }

  if (!!request.hasWorkingDir()) {
    body["WorkingDir"] = request.workingDir();
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
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIdList(), "NodeIdList", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.contentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFileGroup()) {
    body["FileGroup"] = request.fileGroup();
  }

  if (!!request.hasFileMode()) {
    body["FileMode"] = request.fileMode();
  }

  if (!!request.hasFileOwner()) {
    body["FileOwner"] = request.fileOwner();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.nodeIdListShrink();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.overwrite();
  }

  if (!!request.hasTargetDir()) {
    body["TargetDir"] = request.targetDir();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
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
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeGroups(), "NodeGroups", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.nodeGroupsShrink();
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
    request.setNodeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIdList(), "NodeIdList", "json"));
  }

  json body = {};
  if (!!request.hasInvokeId()) {
    body["InvokeId"] = request.invokeId();
  }

  if (!!request.hasNodeIdListShrink()) {
    body["NodeIdList"] = request.nodeIdListShrink();
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
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodes(), "Nodes", "json"));
  }

  json body = {};
  if (!!request.hasIgnoreFailedNodeTasks()) {
    body["IgnoreFailedNodeTasks"] = request.ignoreFailedNodeTasks();
  }

  if (!!request.hasNodesShrink()) {
    body["Nodes"] = request.nodesShrink();
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
    body["FileSystemMountEnabled"] = request.fileSystemMountEnabled();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasKeyPairName()) {
    body["KeyPairName"] = request.keyPairName();
  }

  if (!!request.hasLoginPassword()) {
    body["LoginPassword"] = request.loginPassword();
  }

  if (!!request.hasNewNodeGroupName()) {
    body["NewNodeGroupName"] = request.newNodeGroupName();
  }

  if (!!request.hasNodeGroupId()) {
    body["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.userData();
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