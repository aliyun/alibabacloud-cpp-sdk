// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EFLOCONTROLLER20221215_HPP_
#define ALIBABACLOUD_EFLOCONTROLLER20221215_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EfloController20221215Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EfloController20221215.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Approves an O\\&M operation.
       *
       * @param request ApproveOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveOperationResponse
       */
      Models::ApproveOperationResponse approveOperationWithOptions(const Models::ApproveOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves an O\\&M operation.
       *
       * @param request ApproveOperationRequest
       * @return ApproveOperationResponse
       */
      Models::ApproveOperationResponse approveOperation(const Models::ApproveOperationRequest &request);

      /**
       * @summary 修改节点的节点组
       *
       * @param tmpReq ChangeNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeNodeGroupResponse
       */
      Models::ChangeNodeGroupResponse changeNodeGroupWithOptions(const Models::ChangeNodeGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改节点的节点组
       *
       * @param request ChangeNodeGroupRequest
       * @return ChangeNodeGroupResponse
       */
      Models::ChangeNodeGroupResponse changeNodeGroup(const Models::ChangeNodeGroupRequest &request);

      /**
       * @summary 节点规格变配
       *
       * @param tmpReq ChangeNodeTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeNodeTypesResponse
       */
      Models::ChangeNodeTypesResponse changeNodeTypesWithOptions(const Models::ChangeNodeTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 节点规格变配
       *
       * @param request ChangeNodeTypesRequest
       * @return ChangeNodeTypesResponse
       */
      Models::ChangeNodeTypesResponse changeNodeTypes(const Models::ChangeNodeTypesRequest &request);

      /**
       * @summary Moves a resource from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Disconnect Connection
       *
       * @param request CloseSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseSessionResponse
       */
      Models::CloseSessionResponse closeSessionWithOptions(const Models::CloseSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disconnect Connection
       *
       * @param request CloseSessionRequest
       * @return CloseSessionResponse
       */
      Models::CloseSessionResponse closeSession(const Models::CloseSessionRequest &request);

      /**
       * @summary Create a large-scale computing cluster
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a large-scale computing cluster
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a diagnostics task.
       *
       * @param tmpReq CreateDiagnosticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticTaskResponse
       */
      Models::CreateDiagnosticTaskResponse createDiagnosticTaskWithOptions(const Models::CreateDiagnosticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostics task.
       *
       * @param request CreateDiagnosticTaskRequest
       * @return CreateDiagnosticTaskResponse
       */
      Models::CreateDiagnosticTaskResponse createDiagnosticTask(const Models::CreateDiagnosticTaskRequest &request);

      /**
       * @summary Creates a network test task.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param tmpReq CreateNetTestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetTestTaskResponse
       */
      Models::CreateNetTestTaskResponse createNetTestTaskWithOptions(const Models::CreateNetTestTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network test task.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request CreateNetTestTaskRequest
       * @return CreateNetTestTaskResponse
       */
      Models::CreateNetTestTaskResponse createNetTestTask(const Models::CreateNetTestTaskRequest &request);

      /**
       * @summary Create Node Group under Cluster
       *
       * @param tmpReq CreateNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeGroupResponse
       */
      Models::CreateNodeGroupResponse createNodeGroupWithOptions(const Models::CreateNodeGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Node Group under Cluster
       *
       * @param request CreateNodeGroupRequest
       * @return CreateNodeGroupResponse
       */
      Models::CreateNodeGroupResponse createNodeGroup(const Models::CreateNodeGroupRequest &request);

      /**
       * @summary Creates a Web Terminal session.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request CreateSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSessionWithOptions(const Models::CreateSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Web Terminal session.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request CreateSessionRequest
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSession(const Models::CreateSessionRequest &request);

      /**
       * @summary Creates a virtual storage channel (VSC).
       *
       * @param request CreateVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVscResponse
       */
      Models::CreateVscResponse createVscWithOptions(const Models::CreateVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual storage channel (VSC).
       *
       * @param request CreateVscRequest
       * @return CreateVscResponse
       */
      Models::CreateVscResponse createVsc(const Models::CreateVscRequest &request);

      /**
       * @summary Deletes a Lingjun cluster.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Lingjun cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary 删除一个未使用超节点
       *
       * @param request DeleteHyperNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHyperNodeResponse
       */
      Models::DeleteHyperNodeResponse deleteHyperNodeWithOptions(const Models::DeleteHyperNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个未使用超节点
       *
       * @param request DeleteHyperNodeRequest
       * @return DeleteHyperNodeResponse
       */
      Models::DeleteHyperNodeResponse deleteHyperNode(const Models::DeleteHyperNodeRequest &request);

      /**
       * @summary 删除一个未使用节点
       *
       * @param request DeleteNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNodeWithOptions(const Models::DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个未使用节点
       *
       * @param request DeleteNodeRequest
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNode(const Models::DeleteNodeRequest &request);

      /**
       * @summary 删除节点分组
       *
       * @param request DeleteNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodeGroupResponse
       */
      Models::DeleteNodeGroupResponse deleteNodeGroupWithOptions(const Models::DeleteNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除节点分组
       *
       * @param request DeleteNodeGroupRequest
       * @return DeleteNodeGroupResponse
       */
      Models::DeleteNodeGroupResponse deleteNodeGroup(const Models::DeleteNodeGroupRequest &request);

      /**
       * @summary Deletes a virtual storage channel (VSC).
       *
       * @param request DeleteVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVscWithOptions(const Models::DeleteVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual storage channel (VSC).
       *
       * @param request DeleteVscRequest
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVsc(const Models::DeleteVscRequest &request);

      /**
       * @summary Queries information about a Lingjun cluster.
       *
       * @param request DescribeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeClusterWithOptions(const Models::DescribeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Lingjun cluster.
       *
       * @param request DescribeClusterRequest
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeCluster(const Models::DescribeClusterRequest &request);

      /**
       * @summary Queries the results of a diagnostic task.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request DescribeDiagnosticResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticResultResponse
       */
      Models::DescribeDiagnosticResultResponse describeDiagnosticResultWithOptions(const Models::DescribeDiagnosticResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a diagnostic task.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request DescribeDiagnosticResultRequest
       * @return DescribeDiagnosticResultResponse
       */
      Models::DescribeDiagnosticResultResponse describeDiagnosticResult(const Models::DescribeDiagnosticResultRequest &request);

      /**
       * @summary 查询节点列表
       *
       * @param request DescribeHyperNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHyperNodeResponse
       */
      Models::DescribeHyperNodeResponse describeHyperNodeWithOptions(const Models::DescribeHyperNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询节点列表
       *
       * @param request DescribeHyperNodeRequest
       * @return DescribeHyperNodeResponse
       */
      Models::DescribeHyperNodeResponse describeHyperNode(const Models::DescribeHyperNodeRequest &request);

      /**
       * @summary Queries the execution list and status of O\\&M Assistant commands.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution list and status of O\\&M Assistant commands.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Query Network Test Result
       *
       * @param request DescribeNetTestResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetTestResultResponse
       */
      Models::DescribeNetTestResultResponse describeNetTestResultWithOptions(const Models::DescribeNetTestResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Network Test Result
       *
       * @param request DescribeNetTestResultRequest
       * @return DescribeNetTestResultResponse
       */
      Models::DescribeNetTestResultResponse describeNetTestResult(const Models::DescribeNetTestResultRequest &request);

      /**
       * @summary Queries a list of nodes.
       *
       * @param request DescribeNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeResponse
       */
      Models::DescribeNodeResponse describeNodeWithOptions(const Models::DescribeNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes.
       *
       * @param request DescribeNodeRequest
       * @return DescribeNodeResponse
       */
      Models::DescribeNodeResponse describeNode(const Models::DescribeNodeRequest &request);

      /**
       * @summary 查询节点分组
       *
       * @param request DescribeNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeGroupResponse
       */
      Models::DescribeNodeGroupResponse describeNodeGroupWithOptions(const Models::DescribeNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询节点分组
       *
       * @param request DescribeNodeGroupRequest
       * @return DescribeNodeGroupResponse
       */
      Models::DescribeNodeGroupResponse describeNodeGroup(const Models::DescribeNodeGroupRequest &request);

      /**
       * @summary 创建Web Terminal会话
       *
       * @param request DescribeNodeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeTypeResponse
       */
      Models::DescribeNodeTypeResponse describeNodeTypeWithOptions(const Models::DescribeNodeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Web Terminal会话
       *
       * @param request DescribeNodeTypeRequest
       * @return DescribeNodeTypeResponse
       */
      Models::DescribeNodeTypeResponse describeNodeType(const Models::DescribeNodeTypeRequest &request);

      /**
       * @summary Queries a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the files that are sent by an O\\&M assistant and the status of the files.
       *
       * @param request DescribeSendFileResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResultsWithOptions(const Models::DescribeSendFileResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the files that are sent by an O\\&M assistant and the status of the files.
       *
       * @param request DescribeSendFileResultsRequest
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResults(const Models::DescribeSendFileResultsRequest &request);

      /**
       * @summary Queries the details of a task.
       *
       * @param request DescribeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTaskWithOptions(const Models::DescribeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a task.
       *
       * @param request DescribeTaskRequest
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTask(const Models::DescribeTaskRequest &request);

      /**
       * @summary Queries information about a virtual storage channel (VSC).
       *
       * @param request DescribeVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVscResponse
       */
      Models::DescribeVscResponse describeVscWithOptions(const Models::DescribeVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a virtual storage channel (VSC).
       *
       * @param request DescribeVscRequest
       * @return DescribeVscResponse
       */
      Models::DescribeVscResponse describeVsc(const Models::DescribeVscRequest &request);

      /**
       * @summary Queries a list of zones.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of zones.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Cluster Scaling
       *
       * @param tmpReq ExtendClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExtendClusterResponse
       */
      Models::ExtendClusterResponse extendClusterWithOptions(const Models::ExtendClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cluster Scaling
       *
       * @param request ExtendClusterRequest
       * @return ExtendClusterResponse
       */
      Models::ExtendClusterResponse extendCluster(const Models::ExtendClusterRequest &request);

      /**
       * @summary 集群下的主机分组列表，分组下的主机列表
       *
       * @param request ListClusterHyperNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterHyperNodesResponse
       */
      Models::ListClusterHyperNodesResponse listClusterHyperNodesWithOptions(const Models::ListClusterHyperNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集群下的主机分组列表，分组下的主机列表
       *
       * @param request ListClusterHyperNodesRequest
       * @return ListClusterHyperNodesResponse
       */
      Models::ListClusterHyperNodesResponse listClusterHyperNodes(const Models::ListClusterHyperNodesRequest &request);

      /**
       * @summary Queries a list of nodes in a cluster.
       *
       * @param request ListClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterNodesResponse
       */
      Models::ListClusterNodesResponse listClusterNodesWithOptions(const Models::ListClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes in a cluster.
       *
       * @param request ListClusterNodesRequest
       * @return ListClusterNodesResponse
       */
      Models::ListClusterNodesResponse listClusterNodes(const Models::ListClusterNodesRequest &request);

      /**
       * @summary Queries a list of clusters.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of clusters.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary List of Diagnostic Tasks
       *
       * @param request ListDiagnosticResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosticResultsResponse
       */
      Models::ListDiagnosticResultsResponse listDiagnosticResultsWithOptions(const Models::ListDiagnosticResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of Diagnostic Tasks
       *
       * @param request ListDiagnosticResultsRequest
       * @return ListDiagnosticResultsResponse
       */
      Models::ListDiagnosticResultsResponse listDiagnosticResults(const Models::ListDiagnosticResultsRequest &request);

      /**
       * @summary 可用rack物理机列表
       *
       * @param request ListFreeHyperNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFreeHyperNodesResponse
       */
      Models::ListFreeHyperNodesResponse listFreeHyperNodesWithOptions(const Models::ListFreeHyperNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可用rack物理机列表
       *
       * @param request ListFreeHyperNodesRequest
       * @return ListFreeHyperNodesResponse
       */
      Models::ListFreeHyperNodesResponse listFreeHyperNodes(const Models::ListFreeHyperNodesRequest &request);

      /**
       * @summary Queries a list of nodes that are not used.
       *
       * @param request ListFreeNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFreeNodesResponse
       */
      Models::ListFreeNodesResponse listFreeNodesWithOptions(const Models::ListFreeNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes that are not used.
       *
       * @param request ListFreeNodesRequest
       * @return ListFreeNodesResponse
       */
      Models::ListFreeNodesResponse listFreeNodes(const Models::ListFreeNodesRequest &request);

      /**
       * @summary 机器列表
       *
       * @param request ListHyperNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHyperNodesResponse
       */
      Models::ListHyperNodesResponse listHyperNodesWithOptions(const Models::ListHyperNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器列表
       *
       * @param request ListHyperNodesRequest
       * @return ListHyperNodesResponse
       */
      Models::ListHyperNodesResponse listHyperNodes(const Models::ListHyperNodesRequest &request);

      /**
       * @summary Lists available images.
       *
       * @param request ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists available images.
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary Query machine network configuration using HPNZone and machine type
       *
       * @param tmpReq ListMachineNetworkInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMachineNetworkInfoResponse
       */
      Models::ListMachineNetworkInfoResponse listMachineNetworkInfoWithOptions(const Models::ListMachineNetworkInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query machine network configuration using HPNZone and machine type
       *
       * @param request ListMachineNetworkInfoRequest
       * @return ListMachineNetworkInfoResponse
       */
      Models::ListMachineNetworkInfoResponse listMachineNetworkInfo(const Models::ListMachineNetworkInfoRequest &request);

      /**
       * @summary Queries a list of instance types that are available to users.
       *
       * @param request ListMachineTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMachineTypesResponse
       */
      Models::ListMachineTypesResponse listMachineTypesWithOptions(const Models::ListMachineTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instance types that are available to users.
       *
       * @param request ListMachineTypesRequest
       * @return ListMachineTypesResponse
       */
      Models::ListMachineTypesResponse listMachineTypes(const Models::ListMachineTypesRequest &request);

      /**
       * @summary Lists the results of network test results.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request ListNetTestResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetTestResultsResponse
       */
      Models::ListNetTestResultsResponse listNetTestResultsWithOptions(const Models::ListNetTestResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the results of network test results.
       *
       * @description The API creates a session, returns the frontend endpoint, and starts a periodic task to track the session status.
       *
       * @param request ListNetTestResultsRequest
       * @return ListNetTestResultsResponse
       */
      Models::ListNetTestResultsResponse listNetTestResults(const Models::ListNetTestResultsRequest &request);

      /**
       * @summary Queries node groups in a cluster.
       *
       * @param request ListNodeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeGroupsResponse
       */
      Models::ListNodeGroupsResponse listNodeGroupsWithOptions(const Models::ListNodeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries node groups in a cluster.
       *
       * @param request ListNodeGroupsRequest
       * @return ListNodeGroupsResponse
       */
      Models::ListNodeGroupsResponse listNodeGroups(const Models::ListNodeGroupsRequest &request);

      /**
       * @summary 查询系统日志
       *
       * @param request ListSyslogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSyslogsResponse
       */
      Models::ListSyslogsResponse listSyslogsWithOptions(const Models::ListSyslogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询系统日志
       *
       * @param request ListSyslogsRequest
       * @return ListSyslogsResponse
       */
      Models::ListSyslogsResponse listSyslogs(const Models::ListSyslogsRequest &request);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Query the cluster types available to the user
       *
       * @param request ListUserClusterTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserClusterTypesResponse
       */
      Models::ListUserClusterTypesResponse listUserClusterTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the cluster types available to the user
       *
       * @return ListUserClusterTypesResponse
       */
      Models::ListUserClusterTypesResponse listUserClusterTypes();

      /**
       * @summary Queries a list of virtual storage channels (VSC).
       *
       * @param tmpReq ListVscsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVscsResponse
       */
      Models::ListVscsResponse listVscsWithOptions(const Models::ListVscsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of virtual storage channels (VSC).
       *
       * @param request ListVscsRequest
       * @return ListVscsResponse
       */
      Models::ListVscsResponse listVscs(const Models::ListVscsRequest &request);

      /**
       * @summary Restarts nodes.
       *
       * @param tmpReq RebootNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootNodesResponse
       */
      Models::RebootNodesResponse rebootNodesWithOptions(const Models::RebootNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts nodes.
       *
       * @param request RebootNodesRequest
       * @return RebootNodesResponse
       */
      Models::RebootNodesResponse rebootNodes(const Models::RebootNodesRequest &request);

      /**
       * @summary Reinstall a node.
       *
       * @param tmpReq ReimageNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReimageNodesResponse
       */
      Models::ReimageNodesResponse reimageNodesWithOptions(const Models::ReimageNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstall a node.
       *
       * @param request ReimageNodesRequest
       * @return ReimageNodesResponse
       */
      Models::ReimageNodesResponse reimageNodes(const Models::ReimageNodesRequest &request);

      /**
       * @summary 节点异常问题上报
       *
       * @param tmpReq ReportNodesStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportNodesStatusResponse
       */
      Models::ReportNodesStatusResponse reportNodesStatusWithOptions(const Models::ReportNodesStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 节点异常问题上报
       *
       * @param request ReportNodesStatusRequest
       * @return ReportNodesStatusResponse
       */
      Models::ReportNodesStatusResponse reportNodesStatus(const Models::ReportNodesStatusRequest &request);

      /**
       * @summary Runs a Shell script on one or more Lingjun nodes.
       *
       * @param tmpReq RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a Shell script on one or more Lingjun nodes.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Sends a file to one or more Lingjun nodes.
       *
       * @param tmpReq SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a file to one or more Lingjun nodes.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Scales in a cluster.
       *
       * @param tmpReq ShrinkClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShrinkClusterResponse
       */
      Models::ShrinkClusterResponse shrinkClusterWithOptions(const Models::ShrinkClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in a cluster.
       *
       * @param request ShrinkClusterRequest
       * @return ShrinkClusterResponse
       */
      Models::ShrinkClusterResponse shrinkCluster(const Models::ShrinkClusterRequest &request);

      /**
       * @summary Stops the O\\&M assistant command execution.
       *
       * @param tmpReq StopInvocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocationWithOptions(const Models::StopInvocationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the O\\&M assistant command execution.
       *
       * @param request StopInvocationRequest
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocation(const Models::StopInvocationRequest &request);

      /**
       * @summary Stops nodes.
       *
       * @param tmpReq StopNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopNodesResponse
       */
      Models::StopNodesResponse stopNodesWithOptions(const Models::StopNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops nodes.
       *
       * @param request StopNodesRequest
       * @return StopNodesResponse
       */
      Models::StopNodesResponse stopNodes(const Models::StopNodesRequest &request);

      /**
       * @summary Tags resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tags resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes a custom tag from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom tag from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Update Node Group
       *
       * @param request UpdateNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeGroupResponse
       */
      Models::UpdateNodeGroupResponse updateNodeGroupWithOptions(const Models::UpdateNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Node Group
       *
       * @param request UpdateNodeGroupRequest
       * @return UpdateNodeGroupResponse
       */
      Models::UpdateNodeGroupResponse updateNodeGroup(const Models::UpdateNodeGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
