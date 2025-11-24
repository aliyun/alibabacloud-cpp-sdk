// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SERVICEMESH20200111_HPP_
#define ALIBABACLOUD_SERVICEMESH20200111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Servicemesh20200111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Servicemesh20200111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a cluster to an ASM instance.
       *
       * @param request AddClusterIntoServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClusterIntoServiceMeshResponse
       */
      Models::AddClusterIntoServiceMeshResponse addClusterIntoServiceMeshWithOptions(const Models::AddClusterIntoServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a cluster to an ASM instance.
       *
       * @param request AddClusterIntoServiceMeshRequest
       * @return AddClusterIntoServiceMeshResponse
       */
      Models::AddClusterIntoServiceMeshResponse addClusterIntoServiceMesh(const Models::AddClusterIntoServiceMeshRequest &request);

      /**
       * @deprecated OpenAPI AddVMIntoServiceMesh is deprecated
       *
       * @summary Adds a virtual machine (VM) to a Service Mesh (ASM) instance.
       *
       * @param request AddVMIntoServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVMIntoServiceMeshResponse
       */
      Models::AddVMIntoServiceMeshResponse addVMIntoServiceMeshWithOptions(const Models::AddVMIntoServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddVMIntoServiceMesh is deprecated
       *
       * @summary Adds a virtual machine (VM) to a Service Mesh (ASM) instance.
       *
       * @param request AddVMIntoServiceMeshRequest
       * @return AddVMIntoServiceMeshResponse
       */
      Models::AddVMIntoServiceMeshResponse addVMIntoServiceMesh(const Models::AddVMIntoServiceMeshRequest &request);

      /**
       * @summary Creates a Service Mesh (ASM) gateway.
       *
       * @param request CreateASMGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateASMGatewayResponse
       */
      Models::CreateASMGatewayResponse createASMGatewayWithOptions(const Models::CreateASMGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Service Mesh (ASM) gateway.
       *
       * @param request CreateASMGatewayRequest
       * @return CreateASMGatewayResponse
       */
      Models::CreateASMGatewayResponse createASMGateway(const Models::CreateASMGatewayRequest &request);

      /**
       * @summary Creates a secret for a Service Mesh (ASM) gateway.
       *
       * @param request CreateGatewaySecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewaySecretResponse
       */
      Models::CreateGatewaySecretResponse createGatewaySecretWithOptions(const Models::CreateGatewaySecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a secret for a Service Mesh (ASM) gateway.
       *
       * @param request CreateGatewaySecretRequest
       * @return CreateGatewaySecretResponse
       */
      Models::CreateGatewaySecretResponse createGatewaySecret(const Models::CreateGatewaySecretRequest &request);

      /**
       * @summary Adds domain names for a Service Mesh (ASM) gateway.
       *
       * @param request CreateIstioGatewayDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIstioGatewayDomainsResponse
       */
      Models::CreateIstioGatewayDomainsResponse createIstioGatewayDomainsWithOptions(const Models::CreateIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds domain names for a Service Mesh (ASM) gateway.
       *
       * @param request CreateIstioGatewayDomainsRequest
       * @return CreateIstioGatewayDomainsResponse
       */
      Models::CreateIstioGatewayDomainsResponse createIstioGatewayDomains(const Models::CreateIstioGatewayDomainsRequest &request);

      /**
       * @summary Creates a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param tmpReq CreateIstioGatewayRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIstioGatewayRoutesResponse
       */
      Models::CreateIstioGatewayRoutesResponse createIstioGatewayRoutesWithOptions(const Models::CreateIstioGatewayRoutesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request CreateIstioGatewayRoutesRequest
       * @return CreateIstioGatewayRoutesResponse
       */
      Models::CreateIstioGatewayRoutesResponse createIstioGatewayRoutes(const Models::CreateIstioGatewayRoutesRequest &request);

      /**
       * @summary Creates a Service Mesh (ASM) instance.
       *
       * @param request CreateServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceMeshResponse
       */
      Models::CreateServiceMeshResponse createServiceMeshWithOptions(const Models::CreateServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Service Mesh (ASM) instance.
       *
       * @param request CreateServiceMeshRequest
       * @return CreateServiceMeshResponse
       */
      Models::CreateServiceMeshResponse createServiceMesh(const Models::CreateServiceMeshRequest &request);

      /**
       * @summary Creates a lane.
       *
       * @param request CreateSwimLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSwimLaneResponse
       */
      Models::CreateSwimLaneResponse createSwimLaneWithOptions(const Models::CreateSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lane.
       *
       * @param request CreateSwimLaneRequest
       * @return CreateSwimLaneResponse
       */
      Models::CreateSwimLaneResponse createSwimLane(const Models::CreateSwimLaneRequest &request);

      /**
       * @summary Creates a lane group.
       *
       * @param request CreateSwimLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSwimLaneGroupResponse
       */
      Models::CreateSwimLaneGroupResponse createSwimLaneGroupWithOptions(const Models::CreateSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lane group.
       *
       * @param request CreateSwimLaneGroupRequest
       * @return CreateSwimLaneGroupResponse
       */
      Models::CreateSwimLaneGroupResponse createSwimLaneGroup(const Models::CreateSwimLaneGroupRequest &request);

      /**
       * @summary 创建Waypoint
       *
       * @param request CreateWaypointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaypointResponse
       */
      Models::CreateWaypointResponse createWaypointWithOptions(const Models::CreateWaypointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Waypoint
       *
       * @param request CreateWaypointRequest
       * @return CreateWaypointResponse
       */
      Models::CreateWaypointResponse createWaypoint(const Models::CreateWaypointRequest &request);

      /**
       * @summary Deletes a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayRouteResponse
       */
      Models::DeleteGatewayRouteResponse deleteGatewayRouteWithOptions(const Models::DeleteGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteGatewayRouteRequest
       * @return DeleteGatewayRouteResponse
       */
      Models::DeleteGatewayRouteResponse deleteGatewayRoute(const Models::DeleteGatewayRouteRequest &request);

      /**
       * @summary Deletes a secret for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteGatewaySecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewaySecretResponse
       */
      Models::DeleteGatewaySecretResponse deleteGatewaySecretWithOptions(const Models::DeleteGatewaySecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a secret for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteGatewaySecretRequest
       * @return DeleteGatewaySecretResponse
       */
      Models::DeleteGatewaySecretResponse deleteGatewaySecret(const Models::DeleteGatewaySecretRequest &request);

      /**
       * @summary Deletes one or more domain names for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteIstioGatewayDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIstioGatewayDomainsResponse
       */
      Models::DeleteIstioGatewayDomainsResponse deleteIstioGatewayDomainsWithOptions(const Models::DeleteIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more domain names for a Service Mesh (ASM) gateway.
       *
       * @param request DeleteIstioGatewayDomainsRequest
       * @return DeleteIstioGatewayDomainsResponse
       */
      Models::DeleteIstioGatewayDomainsResponse deleteIstioGatewayDomains(const Models::DeleteIstioGatewayDomainsRequest &request);

      /**
       * @summary Deletes a Service Mesh (ASM) instance.
       *
       * @param request DeleteServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceMeshResponse
       */
      Models::DeleteServiceMeshResponse deleteServiceMeshWithOptions(const Models::DeleteServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Service Mesh (ASM) instance.
       *
       * @param request DeleteServiceMeshRequest
       * @return DeleteServiceMeshResponse
       */
      Models::DeleteServiceMeshResponse deleteServiceMesh(const Models::DeleteServiceMeshRequest &request);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimLaneResponse
       */
      Models::DeleteSwimLaneResponse deleteSwimLaneWithOptions(const Models::DeleteSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimLaneRequest
       * @return DeleteSwimLaneResponse
       */
      Models::DeleteSwimLaneResponse deleteSwimLane(const Models::DeleteSwimLaneRequest &request);

      /**
       * @summary Deletes a lane group. If a lane group is deleted, the lanes in the group and the traffic routing rules attached to the lanes are deleted.
       *
       * @param request DeleteSwimLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimLaneGroupResponse
       */
      Models::DeleteSwimLaneGroupResponse deleteSwimLaneGroupWithOptions(const Models::DeleteSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane group. If a lane group is deleted, the lanes in the group and the traffic routing rules attached to the lanes are deleted.
       *
       * @param request DeleteSwimLaneGroupRequest
       * @return DeleteSwimLaneGroupResponse
       */
      Models::DeleteSwimLaneGroupResponse deleteSwimLaneGroup(const Models::DeleteSwimLaneGroupRequest &request);

      /**
       * @summary 删除Waypoint资源
       *
       * @param request DeleteWaypointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaypointResponse
       */
      Models::DeleteWaypointResponse deleteWaypointWithOptions(const Models::DeleteWaypointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Waypoint资源
       *
       * @param request DeleteWaypointRequest
       * @return DeleteWaypointResponse
       */
      Models::DeleteWaypointResponse deleteWaypoint(const Models::DeleteWaypointRequest &request);

      /**
       * @summary Queries the information about imported services on a Service Mesh (ASM) gateway.
       *
       * @param request DescribeASMGatewayImportedServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeASMGatewayImportedServicesResponse
       */
      Models::DescribeASMGatewayImportedServicesResponse describeASMGatewayImportedServicesWithOptions(const Models::DescribeASMGatewayImportedServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about imported services on a Service Mesh (ASM) gateway.
       *
       * @param request DescribeASMGatewayImportedServicesRequest
       * @return DescribeASMGatewayImportedServicesResponse
       */
      Models::DescribeASMGatewayImportedServicesResponse describeASMGatewayImportedServices(const Models::DescribeASMGatewayImportedServicesRequest &request);

      /**
       * @summary Queries the versions of the Cloud Controller Manager (CCM) component.
       *
       * @param request DescribeCCMVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCCMVersionResponse
       */
      Models::DescribeCCMVersionResponse describeCCMVersionWithOptions(const Models::DescribeCCMVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of the Cloud Controller Manager (CCM) component.
       *
       * @param request DescribeCCMVersionRequest
       * @return DescribeCCMVersionResponse
       */
      Models::DescribeCCMVersionResponse describeCCMVersion(const Models::DescribeCCMVersionRequest &request);

      /**
       * @summary Queries the network connectivity between clusters that are deployed across virtual private clouds (VPCs) in a Service Mesh (ASM) instance.
       *
       * @param request DescribeCensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCensWithOptions(const Models::DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network connectivity between clusters that are deployed across virtual private clouds (VPCs) in a Service Mesh (ASM) instance.
       *
       * @param request DescribeCensRequest
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCens(const Models::DescribeCensRequest &request);

      /**
       * @summary Queries the information about Grafana dashboards of a cluster in a Service Mesh (ASM) instance.
       *
       * @param request DescribeClusterGrafanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterGrafanaResponse
       */
      Models::DescribeClusterGrafanaResponse describeClusterGrafanaWithOptions(const Models::DescribeClusterGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Grafana dashboards of a cluster in a Service Mesh (ASM) instance.
       *
       * @param request DescribeClusterGrafanaRequest
       * @return DescribeClusterGrafanaResponse
       */
      Models::DescribeClusterGrafanaResponse describeClusterGrafana(const Models::DescribeClusterGrafanaRequest &request);

      /**
       * @summary Queries the public endpoint of the Prometheus service that is used to monitor a cluster in an Alibaba Cloud Service Mesh (ASM) instance.
       *
       * @param request DescribeClusterPrometheusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterPrometheusResponse
       */
      Models::DescribeClusterPrometheusResponse describeClusterPrometheusWithOptions(const Models::DescribeClusterPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the public endpoint of the Prometheus service that is used to monitor a cluster in an Alibaba Cloud Service Mesh (ASM) instance.
       *
       * @param request DescribeClusterPrometheusRequest
       * @return DescribeClusterPrometheusResponse
       */
      Models::DescribeClusterPrometheusResponse describeClusterPrometheus(const Models::DescribeClusterPrometheusRequest &request);

      /**
       * @summary Queries the information about clusters in a Service Mesh (ASM) instance.
       *
       * @param request DescribeClustersInServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersInServiceMeshResponse
       */
      Models::DescribeClustersInServiceMeshResponse describeClustersInServiceMeshWithOptions(const Models::DescribeClustersInServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about clusters in a Service Mesh (ASM) instance.
       *
       * @param request DescribeClustersInServiceMeshRequest
       * @return DescribeClustersInServiceMeshResponse
       */
      Models::DescribeClustersInServiceMeshResponse describeClustersInServiceMesh(const Models::DescribeClustersInServiceMeshRequest &request);

      /**
       * @summary Queries the common YAML templates of Istio resources used by Service Mesh (ASM) instances.
       *
       * @param request DescribeCrTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrTemplatesResponse
       */
      Models::DescribeCrTemplatesResponse describeCrTemplatesWithOptions(const Models::DescribeCrTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the common YAML templates of Istio resources used by Service Mesh (ASM) instances.
       *
       * @param request DescribeCrTemplatesRequest
       * @return DescribeCrTemplatesResponse
       */
      Models::DescribeCrTemplatesResponse describeCrTemplates(const Models::DescribeCrTemplatesRequest &request);

      /**
       * @summary DescribeEipResources
       *
       * @param request DescribeEipResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipResourcesResponse
       */
      Models::DescribeEipResourcesResponse describeEipResourcesWithOptions(const Models::DescribeEipResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeEipResources
       *
       * @param request DescribeEipResourcesRequest
       * @return DescribeEipResourcesResponse
       */
      Models::DescribeEipResourcesResponse describeEipResources(const Models::DescribeEipResourcesRequest &request);

      /**
       * @summary Queries the detailed information about a secret of a Service Mesh (ASM) gateway.
       *
       * @param request DescribeGatewaySecretDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewaySecretDetailsResponse
       */
      Models::DescribeGatewaySecretDetailsResponse describeGatewaySecretDetailsWithOptions(const Models::DescribeGatewaySecretDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a secret of a Service Mesh (ASM) gateway.
       *
       * @param request DescribeGatewaySecretDetailsRequest
       * @return DescribeGatewaySecretDetailsResponse
       */
      Models::DescribeGatewaySecretDetailsResponse describeGatewaySecretDetails(const Models::DescribeGatewaySecretDetailsRequest &request);

      /**
       * @summary Queries the access log dashboards of a cluster on the data plane.
       *
       * @param request DescribeGuestClusterAccessLogDashboardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGuestClusterAccessLogDashboardsResponse
       */
      Models::DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboardsWithOptions(const Models::DescribeGuestClusterAccessLogDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access log dashboards of a cluster on the data plane.
       *
       * @param request DescribeGuestClusterAccessLogDashboardsRequest
       * @return DescribeGuestClusterAccessLogDashboardsResponse
       */
      Models::DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboards(const Models::DescribeGuestClusterAccessLogDashboardsRequest &request);

      /**
       * @summary Queries a list of the namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeGuestClusterNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGuestClusterNamespacesResponse
       */
      Models::DescribeGuestClusterNamespacesResponse describeGuestClusterNamespacesWithOptions(const Models::DescribeGuestClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeGuestClusterNamespacesRequest
       * @return DescribeGuestClusterNamespacesResponse
       */
      Models::DescribeGuestClusterNamespacesResponse describeGuestClusterNamespaces(const Models::DescribeGuestClusterNamespacesRequest &request);

      /**
       * @summary Queries a list of the pods in a specified namespace of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeGuestClusterPodsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGuestClusterPodsResponse
       */
      Models::DescribeGuestClusterPodsResponse describeGuestClusterPodsWithOptions(const Models::DescribeGuestClusterPodsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the pods in a specified namespace of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeGuestClusterPodsRequest
       * @return DescribeGuestClusterPodsResponse
       */
      Models::DescribeGuestClusterPodsResponse describeGuestClusterPods(const Models::DescribeGuestClusterPodsRequest &request);

      /**
       * @summary Queries the details of the imported services on a Service Mesh (ASM) gateway.
       *
       * @param request DescribeImportedServicesDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportedServicesDetailResponse
       */
      Models::DescribeImportedServicesDetailResponse describeImportedServicesDetailWithOptions(const Models::DescribeImportedServicesDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the imported services on a Service Mesh (ASM) gateway.
       *
       * @param request DescribeImportedServicesDetailRequest
       * @return DescribeImportedServicesDetailResponse
       */
      Models::DescribeImportedServicesDetailResponse describeImportedServicesDetail(const Models::DescribeImportedServicesDetailRequest &request);

      /**
       * @summary Queries a list of the domain names that are exposed by a Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIstioGatewayDomainsResponse
       */
      Models::DescribeIstioGatewayDomainsResponse describeIstioGatewayDomainsWithOptions(const Models::DescribeIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the domain names that are exposed by a Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayDomainsRequest
       * @return DescribeIstioGatewayDomainsResponse
       */
      Models::DescribeIstioGatewayDomainsResponse describeIstioGatewayDomains(const Models::DescribeIstioGatewayDomainsRequest &request);

      /**
       * @summary Queries the detailed information about a routing rule of an Alibaba Cloud Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayRouteDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIstioGatewayRouteDetailResponse
       */
      Models::DescribeIstioGatewayRouteDetailResponse describeIstioGatewayRouteDetailWithOptions(const Models::DescribeIstioGatewayRouteDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a routing rule of an Alibaba Cloud Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayRouteDetailRequest
       * @return DescribeIstioGatewayRouteDetailResponse
       */
      Models::DescribeIstioGatewayRouteDetailResponse describeIstioGatewayRouteDetail(const Models::DescribeIstioGatewayRouteDetailRequest &request);

      /**
       * @summary Queries the routing rules for a Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIstioGatewayRoutesResponse
       */
      Models::DescribeIstioGatewayRoutesResponse describeIstioGatewayRoutesWithOptions(const Models::DescribeIstioGatewayRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routing rules for a Service Mesh (ASM) gateway.
       *
       * @param request DescribeIstioGatewayRoutesRequest
       * @return DescribeIstioGatewayRoutesResponse
       */
      Models::DescribeIstioGatewayRoutesResponse describeIstioGatewayRoutes(const Models::DescribeIstioGatewayRoutesRequest &request);

      /**
       * @summary 获取ASM网格网络分区设置
       *
       * @param request DescribeMeshMultiClusterNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeshMultiClusterNetworkResponse
       */
      Models::DescribeMeshMultiClusterNetworkResponse describeMeshMultiClusterNetworkWithOptions(const Models::DescribeMeshMultiClusterNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ASM网格网络分区设置
       *
       * @param request DescribeMeshMultiClusterNetworkRequest
       * @return DescribeMeshMultiClusterNetworkResponse
       */
      Models::DescribeMeshMultiClusterNetworkResponse describeMeshMultiClusterNetwork(const Models::DescribeMeshMultiClusterNetworkRequest &request);

      /**
       * @summary Queries basic information about a Service Mesh (ASM) instance.
       *
       * @param request DescribeMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetadataResponse
       */
      Models::DescribeMetadataResponse describeMetadataWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic information about a Service Mesh (ASM) instance.
       *
       * @return DescribeMetadataResponse
       */
      Models::DescribeMetadataResponse describeMetadata();

      /**
       * @summary Queries the configurations of sidecar proxies at the namespace level.
       *
       * @param request DescribeNamespaceScopeSidecarConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespaceScopeSidecarConfigResponse
       */
      Models::DescribeNamespaceScopeSidecarConfigResponse describeNamespaceScopeSidecarConfigWithOptions(const Models::DescribeNamespaceScopeSidecarConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of sidecar proxies at the namespace level.
       *
       * @param request DescribeNamespaceScopeSidecarConfigRequest
       * @return DescribeNamespaceScopeSidecarConfigResponse
       */
      Models::DescribeNamespaceScopeSidecarConfigResponse describeNamespaceScopeSidecarConfig(const Models::DescribeNamespaceScopeSidecarConfigRequest &request);

      /**
       * @summary Queries the instance types of nodes on the data plane and whether the instance types support Multi-Buffer acceleration.
       *
       * @param request DescribeNodesInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodesInstanceTypeResponse
       */
      Models::DescribeNodesInstanceTypeResponse describeNodesInstanceTypeWithOptions(const Models::DescribeNodesInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types of nodes on the data plane and whether the instance types support Multi-Buffer acceleration.
       *
       * @param request DescribeNodesInstanceTypeRequest
       * @return DescribeNodesInstanceTypeResponse
       */
      Models::DescribeNodesInstanceTypeResponse describeNodesInstanceType(const Models::DescribeNodesInstanceTypeRequest &request);

      /**
       * @summary Queries the Server Load Balancer (SLB) instances that can be reused.
       *
       * @param request DescribeReusableSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReusableSlbResponse
       */
      Models::DescribeReusableSlbResponse describeReusableSlbWithOptions(const Models::DescribeReusableSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Server Load Balancer (SLB) instances that can be reused.
       *
       * @param request DescribeReusableSlbRequest
       * @return DescribeReusableSlbResponse
       */
      Models::DescribeReusableSlbResponse describeReusableSlb(const Models::DescribeReusableSlbRequest &request);

      /**
       * @summary Queries the check results of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshAdditionalStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshAdditionalStatusResponse
       */
      Models::DescribeServiceMeshAdditionalStatusResponse describeServiceMeshAdditionalStatusWithOptions(const Models::DescribeServiceMeshAdditionalStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check results of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshAdditionalStatusRequest
       * @return DescribeServiceMeshAdditionalStatusResponse
       */
      Models::DescribeServiceMeshAdditionalStatusResponse describeServiceMeshAdditionalStatus(const Models::DescribeServiceMeshAdditionalStatusRequest &request);

      /**
       * @summary Queries the clusters that can be added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshClustersResponse
       */
      Models::DescribeServiceMeshClustersResponse describeServiceMeshClustersWithOptions(const Models::DescribeServiceMeshClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clusters that can be added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshClustersRequest
       * @return DescribeServiceMeshClustersResponse
       */
      Models::DescribeServiceMeshClustersResponse describeServiceMeshClusters(const Models::DescribeServiceMeshClustersRequest &request);

      /**
       * @summary Queries the details of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshDetailResponse
       */
      Models::DescribeServiceMeshDetailResponse describeServiceMeshDetailWithOptions(const Models::DescribeServiceMeshDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshDetailRequest
       * @return DescribeServiceMeshDetailResponse
       */
      Models::DescribeServiceMeshDetailResponse describeServiceMeshDetail(const Models::DescribeServiceMeshDetailRequest &request);

      /**
       * @summary Queries the content of the kubeconfig file of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshKubeconfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshKubeconfigResponse
       */
      Models::DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfigWithOptions(const Models::DescribeServiceMeshKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of the kubeconfig file of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshKubeconfigRequest
       * @return DescribeServiceMeshKubeconfigResponse
       */
      Models::DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfig(const Models::DescribeServiceMeshKubeconfigRequest &request);

      /**
       * @summary Queries the logs of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshLogsResponse
       */
      Models::DescribeServiceMeshLogsResponse describeServiceMeshLogsWithOptions(const Models::DescribeServiceMeshLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshLogsRequest
       * @return DescribeServiceMeshLogsResponse
       */
      Models::DescribeServiceMeshLogsResponse describeServiceMeshLogs(const Models::DescribeServiceMeshLogsRequest &request);

      /**
       * @summary Queries the status of proxies on the data plane of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshProxyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshProxyStatusResponse
       */
      Models::DescribeServiceMeshProxyStatusResponse describeServiceMeshProxyStatusWithOptions(const Models::DescribeServiceMeshProxyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of proxies on the data plane of a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshProxyStatusRequest
       * @return DescribeServiceMeshProxyStatusResponse
       */
      Models::DescribeServiceMeshProxyStatusResponse describeServiceMeshProxyStatus(const Models::DescribeServiceMeshProxyStatusRequest &request);

      /**
       * @summary Queries the upgrade details of a Service Mesh (ASM) instance and its ingress gateways.
       *
       * @param request DescribeServiceMeshUpgradeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshUpgradeStatusResponse
       */
      Models::DescribeServiceMeshUpgradeStatusResponse describeServiceMeshUpgradeStatusWithOptions(const Models::DescribeServiceMeshUpgradeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upgrade details of a Service Mesh (ASM) instance and its ingress gateways.
       *
       * @param request DescribeServiceMeshUpgradeStatusRequest
       * @return DescribeServiceMeshUpgradeStatusResponse
       */
      Models::DescribeServiceMeshUpgradeStatusResponse describeServiceMeshUpgradeStatus(const Models::DescribeServiceMeshUpgradeStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeServiceMeshVMs is deprecated
       *
       * @summary Queries the Elastic Compute Service (ECS) instances that reside in the same virtual private cloud (VPC) as a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshVMsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshVMsResponse
       */
      Models::DescribeServiceMeshVMsResponse describeServiceMeshVMsWithOptions(const Models::DescribeServiceMeshVMsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeServiceMeshVMs is deprecated
       *
       * @summary Queries the Elastic Compute Service (ECS) instances that reside in the same virtual private cloud (VPC) as a Service Mesh (ASM) instance.
       *
       * @param request DescribeServiceMeshVMsRequest
       * @return DescribeServiceMeshVMsResponse
       */
      Models::DescribeServiceMeshVMsResponse describeServiceMeshVMs(const Models::DescribeServiceMeshVMsRequest &request);

      /**
       * @summary Queries ASM instances.
       *
       * @param request DescribeServiceMeshesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMeshesResponse
       */
      Models::DescribeServiceMeshesResponse describeServiceMeshesWithOptions(const Models::DescribeServiceMeshesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ASM instances.
       *
       * @param request DescribeServiceMeshesRequest
       * @return DescribeServiceMeshesResponse
       */
      Models::DescribeServiceMeshesResponse describeServiceMeshes(const Models::DescribeServiceMeshesRequest &request);

      /**
       * @summary Queries the update status of a Service Mesh (ASM) instance.
       *
       * @param request DescribeUpgradeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeVersionResponse
       */
      Models::DescribeUpgradeVersionResponse describeUpgradeVersionWithOptions(const Models::DescribeUpgradeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the update status of a Service Mesh (ASM) instance.
       *
       * @param request DescribeUpgradeVersionRequest
       * @return DescribeUpgradeVersionResponse
       */
      Models::DescribeUpgradeVersionResponse describeUpgradeVersion(const Models::DescribeUpgradeVersionRequest &request);

      /**
       * @summary Obtains role-based access control (RBAC) permissions.
       *
       * @param request DescribeUserPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserPermissionsResponse
       */
      Models::DescribeUserPermissionsResponse describeUserPermissionsWithOptions(const Models::DescribeUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains role-based access control (RBAC) permissions.
       *
       * @param request DescribeUserPermissionsRequest
       * @return DescribeUserPermissionsResponse
       */
      Models::DescribeUserPermissionsResponse describeUserPermissions(const Models::DescribeUserPermissionsRequest &request);

      /**
       * @summary Queries the IDs of all RAM users or RAM roles to which a Role-based Access Control (RBAC) role is assigned.
       *
       * @param request DescribeUsersWithPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersWithPermissionsResponse
       */
      Models::DescribeUsersWithPermissionsResponse describeUsersWithPermissionsWithOptions(const Models::DescribeUsersWithPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of all RAM users or RAM roles to which a Role-based Access Control (RBAC) role is assigned.
       *
       * @param request DescribeUsersWithPermissionsRequest
       * @return DescribeUsersWithPermissionsResponse
       */
      Models::DescribeUsersWithPermissionsResponse describeUsersWithPermissions(const Models::DescribeUsersWithPermissionsRequest &request);

      /**
       * @deprecated OpenAPI DescribeVMsInServiceMesh is deprecated
       *
       * @summary Queries the virtual machines (VMs) that are added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeVMsInServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVMsInServiceMeshResponse
       */
      Models::DescribeVMsInServiceMeshResponse describeVMsInServiceMeshWithOptions(const Models::DescribeVMsInServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVMsInServiceMesh is deprecated
       *
       * @summary Queries the virtual machines (VMs) that are added to a Service Mesh (ASM) instance.
       *
       * @param request DescribeVMsInServiceMeshRequest
       * @return DescribeVMsInServiceMeshResponse
       */
      Models::DescribeVMsInServiceMeshResponse describeVMsInServiceMesh(const Models::DescribeVMsInServiceMeshRequest &request);

      /**
       * @summary Queries a list of vSwitches that are deployed in a specified virtual private cloud (VPC) in a region.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vSwitches that are deployed in a specified virtual private cloud (VPC) in a region.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries available Service Mesh (ASM) versions when you create an ASM instance.
       *
       * @param request DescribeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVersionsResponse
       */
      Models::DescribeVersionsResponse describeVersionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available Service Mesh (ASM) versions when you create an ASM instance.
       *
       * @return DescribeVersionsResponse
       */
      Models::DescribeVersionsResponse describeVersions();

      /**
       * @summary Queries the virtual private clouds (VPCs) that are available in a specified region.
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual private clouds (VPCs) that are available in a specified region.
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Obtains a certificate issued by a certificate authority (CA).
       *
       * @param request GetCaCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCaCertResponse
       */
      Models::GetCaCertResponse getCaCertWithOptions(const Models::GetCaCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a certificate issued by a certificate authority (CA).
       *
       * @param request GetCaCertRequest
       * @return GetCaCertResponse
       */
      Models::GetCaCertResponse getCaCert(const Models::GetCaCertRequest &request);

      /**
       * @summary Queries a list of workloads specified by a label selector.
       *
       * @param tmpReq GetDeploymentBySelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentBySelectorResponse
       */
      Models::GetDeploymentBySelectorResponse getDeploymentBySelectorWithOptions(const Models::GetDeploymentBySelectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workloads specified by a label selector.
       *
       * @param request GetDeploymentBySelectorRequest
       * @return GetDeploymentBySelectorResponse
       */
      Models::GetDeploymentBySelectorResponse getDeploymentBySelector(const Models::GetDeploymentBySelectorRequest &request);

      /**
       * @summary Queries the Grafana dashboard URL from Application Real-Time Monitoring Service (ARMS).
       *
       * @param request GetGrafanaDashboardUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGrafanaDashboardUrlResponse
       */
      Models::GetGrafanaDashboardUrlResponse getGrafanaDashboardUrlWithOptions(const Models::GetGrafanaDashboardUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Grafana dashboard URL from Application Real-Time Monitoring Service (ARMS).
       *
       * @param request GetGrafanaDashboardUrlRequest
       * @return GetGrafanaDashboardUrlResponse
       */
      Models::GetGrafanaDashboardUrlResponse getGrafanaDashboardUrl(const Models::GetGrafanaDashboardUrlRequest &request);

      /**
       * @summary 描述ServiceEndpoints信息
       *
       * @param request GetRegisteredServiceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegisteredServiceEndpointsResponse
       */
      Models::GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpointsWithOptions(const Models::GetRegisteredServiceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述ServiceEndpoints信息
       *
       * @param request GetRegisteredServiceEndpointsRequest
       * @return GetRegisteredServiceEndpointsResponse
       */
      Models::GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpoints(const Models::GetRegisteredServiceEndpointsRequest &request);

      /**
       * @param request GetRegisteredServiceNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegisteredServiceNamespacesResponse
       */
      Models::GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespacesWithOptions(const Models::GetRegisteredServiceNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRegisteredServiceNamespacesRequest
       * @return GetRegisteredServiceNamespacesResponse
       */
      Models::GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespaces(const Models::GetRegisteredServiceNamespacesRequest &request);

      /**
       * @summary Queries detailed information about a lane.
       *
       * @param request GetSwimLaneDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSwimLaneDetailResponse
       */
      Models::GetSwimLaneDetailResponse getSwimLaneDetailWithOptions(const Models::GetSwimLaneDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about a lane.
       *
       * @param request GetSwimLaneDetailRequest
       * @return GetSwimLaneDetailResponse
       */
      Models::GetSwimLaneDetailResponse getSwimLaneDetail(const Models::GetSwimLaneDetailRequest &request);

      /**
       * @summary Queries a list of all lane groups in an Alibaba Cloud Service Mesh (ASM) instance.
       *
       * @param request GetSwimLaneGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSwimLaneGroupListResponse
       */
      Models::GetSwimLaneGroupListResponse getSwimLaneGroupListWithOptions(const Models::GetSwimLaneGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of all lane groups in an Alibaba Cloud Service Mesh (ASM) instance.
       *
       * @param request GetSwimLaneGroupListRequest
       * @return GetSwimLaneGroupListResponse
       */
      Models::GetSwimLaneGroupListResponse getSwimLaneGroupList(const Models::GetSwimLaneGroupListRequest &request);

      /**
       * @summary Queries a list of all the lanes in a lane group.
       *
       * @param request GetSwimLaneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSwimLaneListResponse
       */
      Models::GetSwimLaneListResponse getSwimLaneListWithOptions(const Models::GetSwimLaneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of all the lanes in a lane group.
       *
       * @param request GetSwimLaneListRequest
       * @return GetSwimLaneListResponse
       */
      Models::GetSwimLaneListResponse getSwimLaneList(const Models::GetSwimLaneListRequest &request);

      /**
       * @deprecated OpenAPI GetVmAppMeshInfo is deprecated
       *
       * @summary Queries the information about VMs that are added to a Service Mesh (ASM) instance.
       *
       * @param request GetVmAppMeshInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVmAppMeshInfoResponse
       */
      Models::GetVmAppMeshInfoResponse getVmAppMeshInfoWithOptions(const Models::GetVmAppMeshInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetVmAppMeshInfo is deprecated
       *
       * @summary Queries the information about VMs that are added to a Service Mesh (ASM) instance.
       *
       * @param request GetVmAppMeshInfoRequest
       * @return GetVmAppMeshInfoResponse
       */
      Models::GetVmAppMeshInfoResponse getVmAppMeshInfo(const Models::GetVmAppMeshInfoRequest &request);

      /**
       * @deprecated OpenAPI GetVmMeta is deprecated
       *
       * @summary Queries the metadata that is required to add a non-containerized application to a Service Mesh (ASM) instance.
       *
       * @param request GetVmMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVmMetaResponse
       */
      Models::GetVmMetaResponse getVmMetaWithOptions(const Models::GetVmMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetVmMeta is deprecated
       *
       * @summary Queries the metadata that is required to add a non-containerized application to a Service Mesh (ASM) instance.
       *
       * @param request GetVmMetaRequest
       * @return GetVmMetaResponse
       */
      Models::GetVmMetaResponse getVmMeta(const Models::GetVmMetaRequest &request);

      /**
       * @summary Grants permissions to a Resource Access Management (RAM) user.
       *
       * @param tmpReq GrantUserPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantUserPermissionsResponse
       */
      Models::GrantUserPermissionsResponse grantUserPermissionsWithOptions(const Models::GrantUserPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a Resource Access Management (RAM) user.
       *
       * @param request GrantUserPermissionsRequest
       * @return GrantUserPermissionsResponse
       */
      Models::GrantUserPermissionsResponse grantUserPermissions(const Models::GrantUserPermissionsRequest &request);

      /**
       * @summary 列举所有服务账号
       *
       * @param request ListServiceAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceAccountsResponse
       */
      Models::ListServiceAccountsResponse listServiceAccountsWithOptions(const Models::ListServiceAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举所有服务账号
       *
       * @param request ListServiceAccountsRequest
       * @return ListServiceAccountsResponse
       */
      Models::ListServiceAccountsResponse listServiceAccounts(const Models::ListServiceAccountsRequest &request);

      /**
       * @summary Queries user tags on a Service Mesh (ASM) instance.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user tags on a Service Mesh (ASM) instance.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the configurations of all waypoint proxies in a namespace of a cluster on the data plane.
       *
       * @param request ListWaypointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaypointsResponse
       */
      Models::ListWaypointsResponse listWaypointsWithOptions(const Models::ListWaypointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of all waypoint proxies in a namespace of a cluster on the data plane.
       *
       * @param request ListWaypointsRequest
       * @return ListWaypointsResponse
       */
      Models::ListWaypointsResponse listWaypoints(const Models::ListWaypointsRequest &request);

      /**
       * @summary ModifyApiServerEipResource
       *
       * @param request ModifyApiServerEipResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiServerEipResourceResponse
       */
      Models::ModifyApiServerEipResourceResponse modifyApiServerEipResourceWithOptions(const Models::ModifyApiServerEipResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyApiServerEipResource
       *
       * @param request ModifyApiServerEipResourceRequest
       * @return ModifyApiServerEipResourceResponse
       */
      Models::ModifyApiServerEipResourceResponse modifyApiServerEipResource(const Models::ModifyApiServerEipResourceRequest &request);

      /**
       * @summary ModifyPilotEipResource
       *
       * @param request ModifyPilotEipResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPilotEipResourceResponse
       */
      Models::ModifyPilotEipResourceResponse modifyPilotEipResourceWithOptions(const Models::ModifyPilotEipResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyPilotEipResource
       *
       * @param request ModifyPilotEipResourceRequest
       * @return ModifyPilotEipResourceResponse
       */
      Models::ModifyPilotEipResourceResponse modifyPilotEipResource(const Models::ModifyPilotEipResourceRequest &request);

      /**
       * @summary Modifies the name of a Service Mesh (ASM) instance.
       *
       * @param request ModifyServiceMeshNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyServiceMeshNameResponse
       */
      Models::ModifyServiceMeshNameResponse modifyServiceMeshNameWithOptions(const Models::ModifyServiceMeshNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a Service Mesh (ASM) instance.
       *
       * @param request ModifyServiceMeshNameRequest
       * @return ModifyServiceMeshNameResponse
       */
      Models::ModifyServiceMeshNameResponse modifyServiceMeshName(const Models::ModifyServiceMeshNameRequest &request);

      /**
       * @summary Recreates a project that is used to store audit logs. After mesh audit is enabled, if you delete the log project that stores audit logs by mistake, you can recreate a project for storing audit logs.
       *
       * @description Before you call this operation, make sure that you understand the billing methods of Simple Log Service. For more information, visit the [pricing page](https://www.alibabacloud.com/zh/pricing-calculator?_p_lc=1\\&spm=a2796.7960336.3034855210.1.44e6b91aaSp2M7#/commodity/vm_intl).
       *
       * @param request ReActivateAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReActivateAuditResponse
       */
      Models::ReActivateAuditResponse reActivateAuditWithOptions(const Models::ReActivateAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recreates a project that is used to store audit logs. After mesh audit is enabled, if you delete the log project that stores audit logs by mistake, you can recreate a project for storing audit logs.
       *
       * @description Before you call this operation, make sure that you understand the billing methods of Simple Log Service. For more information, visit the [pricing page](https://www.alibabacloud.com/zh/pricing-calculator?_p_lc=1\\&spm=a2796.7960336.3034855210.1.44e6b91aaSp2M7#/commodity/vm_intl).
       *
       * @param request ReActivateAuditRequest
       * @return ReActivateAuditResponse
       */
      Models::ReActivateAuditResponse reActivateAudit(const Models::ReActivateAuditRequest &request);

      /**
       * @summary Removes a cluster from a Service Mesh (ASM) instance.
       *
       * @param request RemoveClusterFromServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClusterFromServiceMeshResponse
       */
      Models::RemoveClusterFromServiceMeshResponse removeClusterFromServiceMeshWithOptions(const Models::RemoveClusterFromServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a cluster from a Service Mesh (ASM) instance.
       *
       * @param request RemoveClusterFromServiceMeshRequest
       * @return RemoveClusterFromServiceMeshResponse
       */
      Models::RemoveClusterFromServiceMeshResponse removeClusterFromServiceMesh(const Models::RemoveClusterFromServiceMeshRequest &request);

      /**
       * @deprecated OpenAPI RemoveVMFromServiceMesh is deprecated
       *
       * @summary Removes a virtual machine (VM) from a Service Mesh (ASM) instance.
       *
       * @param request RemoveVMFromServiceMeshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVMFromServiceMeshResponse
       */
      Models::RemoveVMFromServiceMeshResponse removeVMFromServiceMeshWithOptions(const Models::RemoveVMFromServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveVMFromServiceMesh is deprecated
       *
       * @summary Removes a virtual machine (VM) from a Service Mesh (ASM) instance.
       *
       * @param request RemoveVMFromServiceMeshRequest
       * @return RemoveVMFromServiceMeshResponse
       */
      Models::RemoveVMFromServiceMeshResponse removeVMFromServiceMesh(const Models::RemoveVMFromServiceMeshRequest &request);

      /**
       * @summary Revokes the kubeconfig file of a Service Mesh (ASM) instance and generates a new kubeconfig file.
       *
       * @param request RevokeKubeconfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeKubeconfigResponse
       */
      Models::RevokeKubeconfigResponse revokeKubeconfigWithOptions(const Models::RevokeKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the kubeconfig file of a Service Mesh (ASM) instance and generates a new kubeconfig file.
       *
       * @param request RevokeKubeconfigRequest
       * @return RevokeKubeconfigResponse
       */
      Models::RevokeKubeconfigResponse revokeKubeconfig(const Models::RevokeKubeconfigRequest &request);

      /**
       * @summary Adds or modifies user tags on a resource.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies user tags on a resource.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes user tags on a Service Mesh (ASM) instance.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes user tags on a Service Mesh (ASM) instance.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a Service Mesh (ASM) gateway.
       *
       * @param request UpdateASMGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateASMGatewayResponse
       */
      Models::UpdateASMGatewayResponse updateASMGatewayWithOptions(const Models::UpdateASMGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Service Mesh (ASM) gateway.
       *
       * @param request UpdateASMGatewayRequest
       * @return UpdateASMGatewayResponse
       */
      Models::UpdateASMGatewayResponse updateASMGateway(const Models::UpdateASMGatewayRequest &request);

      /**
       * @summary Updates imported services on a Service Mesh (ASM) gateway to import or delete upstream services associated with the gateway.
       *
       * @param request UpdateASMGatewayImportedServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateASMGatewayImportedServicesResponse
       */
      Models::UpdateASMGatewayImportedServicesResponse updateASMGatewayImportedServicesWithOptions(const Models::UpdateASMGatewayImportedServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates imported services on a Service Mesh (ASM) gateway to import or delete upstream services associated with the gateway.
       *
       * @param request UpdateASMGatewayImportedServicesRequest
       * @return UpdateASMGatewayImportedServicesResponse
       */
      Models::UpdateASMGatewayImportedServicesResponse updateASMGatewayImportedServices(const Models::UpdateASMGatewayImportedServicesRequest &request);

      /**
       * @summary Synchronizes namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request UpdateASMNamespaceFromGuestClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateASMNamespaceFromGuestClusterResponse
       */
      Models::UpdateASMNamespaceFromGuestClusterResponse updateASMNamespaceFromGuestClusterWithOptions(const Models::UpdateASMNamespaceFromGuestClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
       *
       * @param request UpdateASMNamespaceFromGuestClusterRequest
       * @return UpdateASMNamespaceFromGuestClusterResponse
       */
      Models::UpdateASMNamespaceFromGuestClusterResponse updateASMNamespaceFromGuestCluster(const Models::UpdateASMNamespaceFromGuestClusterRequest &request);

      /**
       * @summary Modifies the configuration for collecting control plane logs.
       *
       * @param request UpdateControlPlaneLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPlaneLogConfigResponse
       */
      Models::UpdateControlPlaneLogConfigResponse updateControlPlaneLogConfigWithOptions(const Models::UpdateControlPlaneLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration for collecting control plane logs.
       *
       * @param request UpdateControlPlaneLogConfigRequest
       * @return UpdateControlPlaneLogConfigResponse
       */
      Models::UpdateControlPlaneLogConfigResponse updateControlPlaneLogConfig(const Models::UpdateControlPlaneLogConfigRequest &request);

      /**
       * @summary 更新Guest Cluster配置
       *
       * @param request UpdateGuestClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGuestClusterConfigResponse
       */
      Models::UpdateGuestClusterConfigResponse updateGuestClusterConfigWithOptions(const Models::UpdateGuestClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Guest Cluster配置
       *
       * @param request UpdateGuestClusterConfigRequest
       * @return UpdateGuestClusterConfigResponse
       */
      Models::UpdateGuestClusterConfigResponse updateGuestClusterConfig(const Models::UpdateGuestClusterConfigRequest &request);

      /**
       * @summary Updates a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param tmpReq UpdateIstioGatewayRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIstioGatewayRoutesResponse
       */
      Models::UpdateIstioGatewayRoutesResponse updateIstioGatewayRoutesWithOptions(const Models::UpdateIstioGatewayRoutesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request UpdateIstioGatewayRoutesRequest
       * @return UpdateIstioGatewayRoutesResponse
       */
      Models::UpdateIstioGatewayRoutesResponse updateIstioGatewayRoutes(const Models::UpdateIstioGatewayRoutesRequest &request);

      /**
       * @param request UpdateIstioInjectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIstioInjectionConfigResponse
       */
      Models::UpdateIstioInjectionConfigResponse updateIstioInjectionConfigWithOptions(const Models::UpdateIstioInjectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateIstioInjectionConfigRequest
       * @return UpdateIstioInjectionConfigResponse
       */
      Models::UpdateIstioInjectionConfigResponse updateIstioInjectionConfig(const Models::UpdateIstioInjectionConfigRequest &request);

      /**
       * @summary Updates the information about a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request UpdateIstioRouteAdditionalStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIstioRouteAdditionalStatusResponse
       */
      Models::UpdateIstioRouteAdditionalStatusResponse updateIstioRouteAdditionalStatusWithOptions(const Models::UpdateIstioRouteAdditionalStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a routing rule for a Service Mesh (ASM) gateway.
       *
       * @param request UpdateIstioRouteAdditionalStatusRequest
       * @return UpdateIstioRouteAdditionalStatusResponse
       */
      Models::UpdateIstioRouteAdditionalStatusResponse updateIstioRouteAdditionalStatus(const Models::UpdateIstioRouteAdditionalStatusRequest &request);

      /**
       * @summary Updates the settings of whether to enable the Kubernetes API on the data plane to access Istio resources.
       *
       * @param request UpdateMeshCRAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMeshCRAggregationResponse
       */
      Models::UpdateMeshCRAggregationResponse updateMeshCRAggregationWithOptions(const Models::UpdateMeshCRAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of whether to enable the Kubernetes API on the data plane to access Istio resources.
       *
       * @param request UpdateMeshCRAggregationRequest
       * @return UpdateMeshCRAggregationResponse
       */
      Models::UpdateMeshCRAggregationResponse updateMeshCRAggregation(const Models::UpdateMeshCRAggregationRequest &request);

      /**
       * @summary Updates the configuration of a Service Mesh (ASM) instance.
       *
       * @param request UpdateMeshFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMeshFeatureResponse
       */
      Models::UpdateMeshFeatureResponse updateMeshFeatureWithOptions(const Models::UpdateMeshFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Service Mesh (ASM) instance.
       *
       * @param request UpdateMeshFeatureRequest
       * @return UpdateMeshFeatureResponse
       */
      Models::UpdateMeshFeatureResponse updateMeshFeature(const Models::UpdateMeshFeatureRequest &request);

      /**
       * @summary Updates the network configurations of multiple Kubernetes clusters in a Service Mesh (ASM) instance.
       *
       * @param tmpReq UpdateMeshMultiClusterNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMeshMultiClusterNetworkResponse
       */
      Models::UpdateMeshMultiClusterNetworkResponse updateMeshMultiClusterNetworkWithOptions(const Models::UpdateMeshMultiClusterNetworkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the network configurations of multiple Kubernetes clusters in a Service Mesh (ASM) instance.
       *
       * @param request UpdateMeshMultiClusterNetworkRequest
       * @return UpdateMeshMultiClusterNetworkResponse
       */
      Models::UpdateMeshMultiClusterNetworkResponse updateMeshMultiClusterNetwork(const Models::UpdateMeshMultiClusterNetworkRequest &request);

      /**
       * @summary Updates the configurations of sidecar proxies at the namespace level.
       *
       * @param tmpReq UpdateNamespaceScopeSidecarConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceScopeSidecarConfigResponse
       */
      Models::UpdateNamespaceScopeSidecarConfigResponse updateNamespaceScopeSidecarConfigWithOptions(const Models::UpdateNamespaceScopeSidecarConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of sidecar proxies at the namespace level.
       *
       * @param request UpdateNamespaceScopeSidecarConfigRequest
       * @return UpdateNamespaceScopeSidecarConfigResponse
       */
      Models::UpdateNamespaceScopeSidecarConfigResponse updateNamespaceScopeSidecarConfig(const Models::UpdateNamespaceScopeSidecarConfigRequest &request);

      /**
       * @summary Updates the information about a lane.
       *
       * @param request UpdateSwimLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSwimLaneResponse
       */
      Models::UpdateSwimLaneResponse updateSwimLaneWithOptions(const Models::UpdateSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a lane.
       *
       * @param request UpdateSwimLaneRequest
       * @return UpdateSwimLaneResponse
       */
      Models::UpdateSwimLaneResponse updateSwimLane(const Models::UpdateSwimLaneRequest &request);

      /**
       * @summary Updates the information of a lane group.
       *
       * @param request UpdateSwimLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSwimLaneGroupResponse
       */
      Models::UpdateSwimLaneGroupResponse updateSwimLaneGroupWithOptions(const Models::UpdateSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a lane group.
       *
       * @param request UpdateSwimLaneGroupRequest
       * @return UpdateSwimLaneGroupResponse
       */
      Models::UpdateSwimLaneGroupResponse updateSwimLaneGroup(const Models::UpdateSwimLaneGroupRequest &request);

      /**
       * @summary 更新Waypoint
       *
       * @param request UpdateWaypointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaypointResponse
       */
      Models::UpdateWaypointResponse updateWaypointWithOptions(const Models::UpdateWaypointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Waypoint
       *
       * @param request UpdateWaypointRequest
       * @return UpdateWaypointResponse
       */
      Models::UpdateWaypointResponse updateWaypoint(const Models::UpdateWaypointRequest &request);

      /**
       * @summary Upgrades a Service Mesh (ASM) instance to Professional Edition that is commercially released.
       *
       * @param request UpgradeMeshEditionPartiallyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMeshEditionPartiallyResponse
       */
      Models::UpgradeMeshEditionPartiallyResponse upgradeMeshEditionPartiallyWithOptions(const Models::UpgradeMeshEditionPartiallyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a Service Mesh (ASM) instance to Professional Edition that is commercially released.
       *
       * @param request UpgradeMeshEditionPartiallyRequest
       * @return UpgradeMeshEditionPartiallyResponse
       */
      Models::UpgradeMeshEditionPartiallyResponse upgradeMeshEditionPartially(const Models::UpgradeMeshEditionPartiallyRequest &request);

      /**
       * @summary Updates the version of a Service Mesh (ASM) instance.
       *
       * @param request UpgradeMeshVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMeshVersionResponse
       */
      Models::UpgradeMeshVersionResponse upgradeMeshVersionWithOptions(const Models::UpgradeMeshVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version of a Service Mesh (ASM) instance.
       *
       * @param request UpgradeMeshVersionRequest
       * @return UpgradeMeshVersionResponse
       */
      Models::UpgradeMeshVersionResponse upgradeMeshVersion(const Models::UpgradeMeshVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
