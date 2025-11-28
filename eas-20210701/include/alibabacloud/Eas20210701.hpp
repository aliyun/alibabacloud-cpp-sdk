// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EAS20210701_HPP_
#define ALIBABACLOUD_EAS20210701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eas20210701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eas20210701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Binds a custom domain name to a private gateway.
       *
       * @param tmpReq AttachGatewayDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachGatewayDomainResponse
       */
      Models::AttachGatewayDomainResponse attachGatewayDomainWithOptions(const string &ClusterId, const string &GatewayId, const Models::AttachGatewayDomainRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a custom domain name to a private gateway.
       *
       * @param request AttachGatewayDomainRequest
       * @return AttachGatewayDomainResponse
       */
      Models::AttachGatewayDomainResponse attachGatewayDomain(const string &ClusterId, const string &GatewayId, const Models::AttachGatewayDomainRequest &request);

      /**
       * @summary Clones a service.
       *
       * @param tmpReq CloneServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneServiceResponse
       */
      Models::CloneServiceResponse cloneServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::CloneServiceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a service.
       *
       * @param request CloneServiceRequest
       * @return CloneServiceResponse
       */
      Models::CloneServiceResponse cloneService(const string &ClusterId, const string &ServiceName, const Models::CloneServiceRequest &request);

      /**
       * @summary Commits the Worker0 container in the custom container service and deploys the container as a new image.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitServiceResponse
       */
      Models::CommitServiceResponse commitServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commits the Worker0 container in the custom container service and deploys the container as a new image.
       *
       * @return CommitServiceResponse
       */
      Models::CommitServiceResponse commitService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Creates an access control list (ACL) for a private gateway. The IP CIDR blocks added to the ACL can access the private gateway.
       *
       * @param tmpReq CreateAclPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclPolicyResponse
       */
      Models::CreateAclPolicyResponse createAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const Models::CreateAclPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control list (ACL) for a private gateway. The IP CIDR blocks added to the ACL can access the private gateway.
       *
       * @param request CreateAclPolicyRequest
       * @return CreateAclPolicyResponse
       */
      Models::CreateAclPolicyResponse createAclPolicy(const string &ClusterId, const string &GatewayId, const Models::CreateAclPolicyRequest &request);

      /**
       * @summary Creates an application service to obtain the inference capabilities of large models.
       *
       * @param request CreateAppServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppServiceResponse
       */
      Models::CreateAppServiceResponse createAppServiceWithOptions(const Models::CreateAppServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application service to obtain the inference capabilities of large models.
       *
       * @param request CreateAppServiceRequest
       * @return CreateAppServiceResponse
       */
      Models::CreateAppServiceResponse createAppService(const Models::CreateAppServiceRequest &request);

      /**
       * @summary Creates a stress testing task.
       *
       * @param request CreateBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBenchmarkTaskResponse
       */
      Models::CreateBenchmarkTaskResponse createBenchmarkTaskWithOptions(const Models::CreateBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stress testing task.
       *
       * @param request CreateBenchmarkTaskRequest
       * @return CreateBenchmarkTaskResponse
       */
      Models::CreateBenchmarkTaskResponse createBenchmarkTask(const Models::CreateBenchmarkTaskRequest &request);

      /**
       * @summary 创建故障注入任务
       *
       * @param request CreateFaultInjectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaultInjectionResponse
       */
      Models::CreateFaultInjectionResponse createFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::CreateFaultInjectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建故障注入任务
       *
       * @param request CreateFaultInjectionRequest
       * @return CreateFaultInjectionResponse
       */
      Models::CreateFaultInjectionResponse createFaultInjection(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::CreateFaultInjectionRequest &request);

      /**
       * @summary Creates a gateway.
       *
       * @param request CreateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGatewayWithOptions(const Models::CreateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a gateway.
       *
       * @param request CreateGatewayRequest
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGateway(const Models::CreateGatewayRequest &request);

      /**
       * @summary Creates an internal endpoint of a private gateway.
       *
       * @param request CreateGatewayIntranetLinkedVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayIntranetLinkedVpcResponse
       */
      Models::CreateGatewayIntranetLinkedVpcResponse createGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const Models::CreateGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an internal endpoint of a private gateway.
       *
       * @param request CreateGatewayIntranetLinkedVpcRequest
       * @return CreateGatewayIntranetLinkedVpcResponse
       */
      Models::CreateGatewayIntranetLinkedVpcResponse createGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId, const Models::CreateGatewayIntranetLinkedVpcRequest &request);

      /**
       * @summary Creates a VPC peering connection on an internal endpoint of a gateway.
       *
       * @param tmpReq CreateGatewayIntranetLinkedVpcPeerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayIntranetLinkedVpcPeerResponse
       */
      Models::CreateGatewayIntranetLinkedVpcPeerResponse createGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const Models::CreateGatewayIntranetLinkedVpcPeerRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC peering connection on an internal endpoint of a gateway.
       *
       * @param request CreateGatewayIntranetLinkedVpcPeerRequest
       * @return CreateGatewayIntranetLinkedVpcPeerResponse
       */
      Models::CreateGatewayIntranetLinkedVpcPeerResponse createGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const Models::CreateGatewayIntranetLinkedVpcPeerRequest &request);

      /**
       * @summary Creates a resource group.
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
       *
       * @param request CreateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      /**
       * @summary Creates instances in a dedicated resource group.
       *
       * @param request CreateResourceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceInstancesResponse
       */
      Models::CreateResourceInstancesResponse createResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const Models::CreateResourceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates instances in a dedicated resource group.
       *
       * @param request CreateResourceInstancesRequest
       * @return CreateResourceInstancesResponse
       */
      Models::CreateResourceInstancesResponse createResourceInstances(const string &ClusterId, const string &ResourceId, const Models::CreateResourceInstancesRequest &request);

      /**
       * @summary Enables the LogShipper feature of Log Service for a resource group.
       *
       * @param request CreateResourceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceLogResponse
       */
      Models::CreateResourceLogResponse createResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const Models::CreateResourceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the LogShipper feature of Log Service for a resource group.
       *
       * @param request CreateResourceLogRequest
       * @return CreateResourceLogResponse
       */
      Models::CreateResourceLogResponse createResourceLog(const string &ClusterId, const string &ResourceId, const Models::CreateResourceLogRequest &request);

      /**
       * @summary Creates a model service in Elastic Algorithm Service (EAS).
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
       *
       * @param tmpReq CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const Models::CreateServiceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model service in Elastic Algorithm Service (EAS).
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const Models::CreateServiceRequest &request);

      /**
       * @summary Enables the Autoscaler feature and creates an Autoscaler controller for a service.
       *
       * @param request CreateServiceAutoScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceAutoScalerResponse
       */
      Models::CreateServiceAutoScalerResponse createServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::CreateServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Autoscaler feature and creates an Autoscaler controller for a service.
       *
       * @param request CreateServiceAutoScalerRequest
       * @return CreateServiceAutoScalerResponse
       */
      Models::CreateServiceAutoScalerResponse createServiceAutoScaler(const string &ClusterId, const string &ServiceName, const Models::CreateServiceAutoScalerRequest &request);

      /**
       * @summary Enables the Cron Horizontal Pod Autoscaler (CronHPA) feature for a service.
       *
       * @param request CreateServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceCronScalerResponse
       */
      Models::CreateServiceCronScalerResponse createServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::CreateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Cron Horizontal Pod Autoscaler (CronHPA) feature for a service.
       *
       * @param request CreateServiceCronScalerRequest
       * @return CreateServiceCronScalerResponse
       */
      Models::CreateServiceCronScalerResponse createServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::CreateServiceCronScalerRequest &request);

      /**
       * @summary Enables the traffic mirroring feature for a service. After the feature is enabled, requests received by the service can be mirrored to another service.
       *
       * @param request CreateServiceMirrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceMirrorResponse
       */
      Models::CreateServiceMirrorResponse createServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const Models::CreateServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the traffic mirroring feature for a service. After the feature is enabled, requests received by the service can be mirrored to another service.
       *
       * @param request CreateServiceMirrorRequest
       * @return CreateServiceMirrorResponse
       */
      Models::CreateServiceMirrorResponse createServiceMirror(const string &ClusterId, const string &ServiceName, const Models::CreateServiceMirrorRequest &request);

      /**
       * @summary Creates a virtual resource group.
       *
       * @param request CreateVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualResourceResponse
       */
      Models::CreateVirtualResourceResponse createVirtualResourceWithOptions(const Models::CreateVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual resource group.
       *
       * @param request CreateVirtualResourceRequest
       * @return CreateVirtualResourceResponse
       */
      Models::CreateVirtualResourceResponse createVirtualResource(const Models::CreateVirtualResourceRequest &request);

      /**
       * @summary Deletes an access control list (ACL) for a private gateway. The IP CIDR block that is deleted from the ACL cannot access the private gateway.
       *
       * @param tmpReq DeleteAclPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclPolicyResponse
       */
      Models::DeleteAclPolicyResponse deleteAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteAclPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL) for a private gateway. The IP CIDR block that is deleted from the ACL cannot access the private gateway.
       *
       * @param request DeleteAclPolicyRequest
       * @return DeleteAclPolicyResponse
       */
      Models::DeleteAclPolicyResponse deleteAclPolicy(const string &ClusterId, const string &GatewayId, const Models::DeleteAclPolicyRequest &request);

      /**
       * @summary Deletes a stress testing task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBenchmarkTaskResponse
       */
      Models::DeleteBenchmarkTaskResponse deleteBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stress testing task.
       *
       * @return DeleteBenchmarkTaskResponse
       */
      Models::DeleteBenchmarkTaskResponse deleteBenchmarkTask(const string &ClusterId, const string &TaskName);

      /**
       * @summary 删除故障注入任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaultInjectionResponse
       */
      Models::DeleteFaultInjectionResponse deleteFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除故障注入任务
       *
       * @return DeleteFaultInjectionResponse
       */
      Models::DeleteFaultInjectionResponse deleteFaultInjection(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType);

      /**
       * @summary Deletes a private gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a private gateway.
       *
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const string &ClusterId, const string &GatewayId);

      /**
       * @summary 删除网关内网访问端点
       *
       * @param request DeleteGatewayIntranetLinkedVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayIntranetLinkedVpcResponse
       */
      Models::DeleteGatewayIntranetLinkedVpcResponse deleteGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网关内网访问端点
       *
       * @param request DeleteGatewayIntranetLinkedVpcRequest
       * @return DeleteGatewayIntranetLinkedVpcResponse
       */
      Models::DeleteGatewayIntranetLinkedVpcResponse deleteGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayIntranetLinkedVpcRequest &request);

      /**
       * @summary Deletes a VPC peering connection from an internal endpoint of a gateway.
       *
       * @param tmpReq DeleteGatewayIntranetLinkedVpcPeerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayIntranetLinkedVpcPeerResponse
       */
      Models::DeleteGatewayIntranetLinkedVpcPeerResponse deleteGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayIntranetLinkedVpcPeerRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPC peering connection from an internal endpoint of a gateway.
       *
       * @param request DeleteGatewayIntranetLinkedVpcPeerRequest
       * @return DeleteGatewayIntranetLinkedVpcPeerResponse
       */
      Models::DeleteGatewayIntranetLinkedVpcPeerResponse deleteGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayIntranetLinkedVpcPeerRequest &request);

      /**
       * @summary Deletes a resource group that contains no resources or instances.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group that contains no resources or instances.
       *
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceDLinkResponse
       */
      Models::DeleteResourceDLinkResponse deleteResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
       *
       * @return DeleteResourceDLinkResponse
       */
      Models::DeleteResourceDLinkResponse deleteResourceDLink(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Deletes the tags of an instance in a resource group.
       *
       * @param tmpReq DeleteResourceInstanceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceInstanceLabelResponse
       */
      Models::DeleteResourceInstanceLabelResponse deleteResourceInstanceLabelWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceInstanceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the tags of an instance in a resource group.
       *
       * @param request DeleteResourceInstanceLabelRequest
       * @return DeleteResourceInstanceLabelResponse
       */
      Models::DeleteResourceInstanceLabelResponse deleteResourceInstanceLabel(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceInstanceLabelRequest &request);

      /**
       * @summary Deletes instances in a dedicated resource group. You can delete only pay-as-you-go instances as a regular user.
       *
       * @param request DeleteResourceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceInstancesResponse
       */
      Models::DeleteResourceInstancesResponse deleteResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes instances in a dedicated resource group. You can delete only pay-as-you-go instances as a regular user.
       *
       * @param request DeleteResourceInstancesRequest
       * @return DeleteResourceInstancesResponse
       */
      Models::DeleteResourceInstancesResponse deleteResourceInstances(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceInstancesRequest &request);

      /**
       * @summary Disables the LogShipper feature of Log Service for a dedicated resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceLogResponse
       */
      Models::DeleteResourceLogResponse deleteResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the LogShipper feature of Log Service for a dedicated resource group.
       *
       * @return DeleteResourceLogResponse
       */
      Models::DeleteResourceLogResponse deleteResourceLog(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Deletes a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service.
       *
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceAutoScalerResponse
       */
      Models::DeleteServiceAutoScalerResponse deleteServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
       *
       * @return DeleteServiceAutoScalerResponse
       */
      Models::DeleteServiceAutoScalerResponse deleteServiceAutoScaler(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Disables the Cronscaler feature for a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceCronScalerResponse
       */
      Models::DeleteServiceCronScalerResponse deleteServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Cronscaler feature for a service.
       *
       * @return DeleteServiceCronScalerResponse
       */
      Models::DeleteServiceCronScalerResponse deleteServiceCronScaler(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Restarts the instances of a service.
       *
       * @param request DeleteServiceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the instances of a service.
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Deletes existing service tags.
       *
       * @param tmpReq DeleteServiceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceLabelResponse
       */
      Models::DeleteServiceLabelResponse deleteServiceLabelWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes existing service tags.
       *
       * @param request DeleteServiceLabelRequest
       * @return DeleteServiceLabelResponse
       */
      Models::DeleteServiceLabelResponse deleteServiceLabel(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceLabelRequest &request);

      /**
       * @summary Disables the traffic mirroring feature for a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceMirrorResponse
       */
      Models::DeleteServiceMirrorResponse deleteServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the traffic mirroring feature for a service.
       *
       * @return DeleteServiceMirrorResponse
       */
      Models::DeleteServiceMirrorResponse deleteServiceMirror(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Deletes a virtual resource group that contains no resources or instances.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualResourceResponse
       */
      Models::DeleteVirtualResourceResponse deleteVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual resource group that contains no resources or instances.
       *
       * @return DeleteVirtualResourceResponse
       */
      Models::DeleteVirtualResourceResponse deleteVirtualResource(const string &ClusterId, const string &VirtualResourceId);

      /**
       * @summary Queries details about the configurations of a stress testing task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBenchmarkTaskResponse
       */
      Models::DescribeBenchmarkTaskResponse describeBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the configurations of a stress testing task.
       *
       * @return DescribeBenchmarkTaskResponse
       */
      Models::DescribeBenchmarkTaskResponse describeBenchmarkTask(const string &ClusterId, const string &TaskName);

      /**
       * @summary Queries the report of a stress testing task.
       *
       * @param request DescribeBenchmarkTaskReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBenchmarkTaskReportResponse
       */
      Models::DescribeBenchmarkTaskReportResponse describeBenchmarkTaskReportWithOptions(const string &ClusterId, const string &TaskName, const Models::DescribeBenchmarkTaskReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the report of a stress testing task.
       *
       * @param request DescribeBenchmarkTaskReportRequest
       * @return DescribeBenchmarkTaskReportResponse
       */
      Models::DescribeBenchmarkTaskReportResponse describeBenchmarkTaskReport(const string &ClusterId, const string &TaskName, const Models::DescribeBenchmarkTaskReportRequest &request);

      /**
       * @summary Queries the details of a private gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewayResponse
       */
      Models::DescribeGatewayResponse describeGatewayWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a private gateway.
       *
       * @return DescribeGatewayResponse
       */
      Models::DescribeGatewayResponse describeGateway(const string &ClusterId, const string &GatewayId);

      /**
       * @summary Queries the information about a service group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroupWithOptions(const string &ClusterId, const string &GroupName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service group.
       *
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroup(const string &ClusterId, const string &GroupName);

      /**
       * @summary Obtains a list of endpoints of service groups.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupEndpointsResponse
       */
      Models::DescribeGroupEndpointsResponse describeGroupEndpointsWithOptions(const string &ClusterId, const string &GroupName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of endpoints of service groups.
       *
       * @return DescribeGroupEndpointsResponse
       */
      Models::DescribeGroupEndpointsResponse describeGroupEndpoints(const string &ClusterId, const string &GroupName);

      /**
       * @summary Queries a list of instance types for an available instance in a shared resource group.
       *
       * @param tmpReq DescribeMachineSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMachineSpecResponse
       */
      Models::DescribeMachineSpecResponse describeMachineSpecWithOptions(const Models::DescribeMachineSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instance types for an available instance in a shared resource group.
       *
       * @param request DescribeMachineSpecRequest
       * @return DescribeMachineSpecResponse
       */
      Models::DescribeMachineSpecResponse describeMachineSpec(const Models::DescribeMachineSpecRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries the information about a resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceResponse
       */
      Models::DescribeResourceResponse describeResourceWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a resource group.
       *
       * @return DescribeResourceResponse
       */
      Models::DescribeResourceResponse describeResource(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceDLinkResponse
       */
      Models::DescribeResourceDLinkResponse describeResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
       *
       * @return DescribeResourceDLinkResponse
       */
      Models::DescribeResourceDLinkResponse describeResourceDLink(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogResponse
       */
      Models::DescribeResourceLogResponse describeResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
       *
       * @return DescribeResourceLogResponse
       */
      Models::DescribeResourceLogResponse describeResourceLog(const string &ClusterId, const string &ResourceId);

      /**
       * @summary Queries the details about a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceResponse
       */
      Models::DescribeServiceResponse describeServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a service.
       *
       * @return DescribeServiceResponse
       */
      Models::DescribeServiceResponse describeService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Queries information about the Autoscaler configurations of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAutoScalerResponse
       */
      Models::DescribeServiceAutoScalerResponse describeServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Autoscaler configurations of a service.
       *
       * @return DescribeServiceAutoScalerResponse
       */
      Models::DescribeServiceAutoScalerResponse describeServiceAutoScaler(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceCronScalerResponse
       */
      Models::DescribeServiceCronScalerResponse describeServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
       *
       * @return DescribeServiceCronScalerResponse
       */
      Models::DescribeServiceCronScalerResponse describeServiceCronScaler(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Queries the diagnostics details of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceDiagnosisResponse
       */
      Models::DescribeServiceDiagnosisResponse describeServiceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostics details of a service.
       *
       * @return DescribeServiceDiagnosisResponse
       */
      Models::DescribeServiceDiagnosisResponse describeServiceDiagnosis(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Obtains a list of service endpoints.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceEndpointsResponse
       */
      Models::DescribeServiceEndpointsResponse describeServiceEndpointsWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of service endpoints.
       *
       * @return DescribeServiceEndpointsResponse
       */
      Models::DescribeServiceEndpointsResponse describeServiceEndpoints(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Queries information about recent service deployment events.
       *
       * @param request DescribeServiceEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceEventResponse
       */
      Models::DescribeServiceEventResponse describeServiceEventWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about recent service deployment events.
       *
       * @param request DescribeServiceEventRequest
       * @return DescribeServiceEventResponse
       */
      Models::DescribeServiceEventResponse describeServiceEvent(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEventRequest &request);

      /**
       * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceInstanceDiagnosisResponse
       */
      Models::DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
       *
       * @return DescribeServiceInstanceDiagnosisResponse
       */
      Models::DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosis(const string &ClusterId, const string &ServiceName, const string &InstanceName);

      /**
       * @summary Queries the information about the logs of a service.
       *
       * @param request DescribeServiceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLogResponse
       */
      Models::DescribeServiceLogResponse describeServiceLogWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the logs of a service.
       *
       * @param request DescribeServiceLogRequest
       * @return DescribeServiceLogResponse
       */
      Models::DescribeServiceLogResponse describeServiceLog(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceLogRequest &request);

      /**
       * @summary Queries details about the traffic mirroring settings of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMirrorResponse
       */
      Models::DescribeServiceMirrorResponse describeServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the traffic mirroring settings of a service.
       *
       * @return DescribeServiceMirrorResponse
       */
      Models::DescribeServiceMirrorResponse describeServiceMirror(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Obtains the logon-free URL of the service.
       *
       * @param request DescribeServiceSignedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceSignedUrlResponse
       */
      Models::DescribeServiceSignedUrlResponse describeServiceSignedUrlWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the logon-free URL of the service.
       *
       * @param request DescribeServiceSignedUrlRequest
       * @return DescribeServiceSignedUrlResponse
       */
      Models::DescribeServiceSignedUrlResponse describeServiceSignedUrl(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceSignedUrlRequest &request);

      /**
       * @summary Queries the historical prices of preemptible instances. For more information about preemptible instances, see Create and use preemptible instances.
       *
       * @param request DescribeSpotDiscountHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotDiscountHistoryResponse
       */
      Models::DescribeSpotDiscountHistoryResponse describeSpotDiscountHistoryWithOptions(const Models::DescribeSpotDiscountHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical prices of preemptible instances. For more information about preemptible instances, see Create and use preemptible instances.
       *
       * @param request DescribeSpotDiscountHistoryRequest
       * @return DescribeSpotDiscountHistoryResponse
       */
      Models::DescribeSpotDiscountHistoryResponse describeSpotDiscountHistory(const Models::DescribeSpotDiscountHistoryRequest &request);

      /**
       * @summary Views the details of a virtual resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualResourceResponse
       */
      Models::DescribeVirtualResourceResponse describeVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views the details of a virtual resource group.
       *
       * @return DescribeVirtualResourceResponse
       */
      Models::DescribeVirtualResourceResponse describeVirtualResource(const string &ClusterId, const string &VirtualResourceId);

      /**
       * @summary Unbinds a custom domain name from a private gateway.
       *
       * @param tmpReq DetachGatewayDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGatewayDomainResponse
       */
      Models::DetachGatewayDomainResponse detachGatewayDomainWithOptions(const string &ClusterId, const string &GatewayId, const Models::DetachGatewayDomainRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a custom domain name from a private gateway.
       *
       * @param request DetachGatewayDomainRequest
       * @return DetachGatewayDomainResponse
       */
      Models::DetachGatewayDomainResponse detachGatewayDomain(const string &ClusterId, const string &GatewayId, const Models::DetachGatewayDomainRequest &request);

      /**
       * @summary Switches a container service to development mode or exits development mode.
       *
       * @param request DevelopServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DevelopServiceResponse
       */
      Models::DevelopServiceResponse developServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::DevelopServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a container service to development mode or exits development mode.
       *
       * @param request DevelopServiceRequest
       * @return DevelopServiceResponse
       */
      Models::DevelopServiceResponse developService(const string &ClusterId, const string &ServiceName, const Models::DevelopServiceRequest &request);

      /**
       * @summary Queries access control lists (ACLs) created for a private gateway.
       *
       * @param request ListAclPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAclPolicyResponse
       */
      Models::ListAclPolicyResponse listAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const Models::ListAclPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control lists (ACLs) created for a private gateway.
       *
       * @param request ListAclPolicyRequest
       * @return ListAclPolicyResponse
       */
      Models::ListAclPolicyResponse listAclPolicy(const string &ClusterId, const string &GatewayId, const Models::ListAclPolicyRequest &request);

      /**
       * @summary Queries a list of stress testing tasks that are created by the current user.
       *
       * @param request ListBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBenchmarkTaskResponse
       */
      Models::ListBenchmarkTaskResponse listBenchmarkTaskWithOptions(const Models::ListBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of stress testing tasks that are created by the current user.
       *
       * @param request ListBenchmarkTaskRequest
       * @return ListBenchmarkTaskResponse
       */
      Models::ListBenchmarkTaskResponse listBenchmarkTask(const Models::ListBenchmarkTaskRequest &request);

      /**
       * @summary Queries a list of private gateways.
       *
       * @param request ListGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGatewayWithOptions(const Models::ListGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of private gateways.
       *
       * @param request ListGatewayRequest
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGateway(const Models::ListGatewayRequest &request);

      /**
       * @summary Queries a list of custom domain names of a private gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayDomainsResponse
       */
      Models::ListGatewayDomainsResponse listGatewayDomainsWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom domain names of a private gateway.
       *
       * @return ListGatewayDomainsResponse
       */
      Models::ListGatewayDomainsResponse listGatewayDomains(const string &ClusterId, const string &GatewayId);

      /**
       * @summary Queries a list of the internal endpoints of a private gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetLinkedVpcResponse
       */
      Models::ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the internal endpoints of a private gateway.
       *
       * @return ListGatewayIntranetLinkedVpcResponse
       */
      Models::ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId);

      /**
       * @summary Obtains a list of all VPC peering connections on internal endpoint of a gateway.
       *
       * @param request ListGatewayIntranetLinkedVpcPeerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetLinkedVpcPeerResponse
       */
      Models::ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcPeerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of all VPC peering connections on internal endpoint of a gateway.
       *
       * @param request ListGatewayIntranetLinkedVpcPeerRequest
       * @return ListGatewayIntranetLinkedVpcPeerResponse
       */
      Models::ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcPeerRequest &request);

      /**
       * @summary Obtains the zones supported by a gateway within an intranet.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetSupportedZoneResponse
       */
      Models::ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZoneWithOptions(const string &GatewayId, const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the zones supported by a gateway within an intranet.
       *
       * @return ListGatewayIntranetSupportedZoneResponse
       */
      Models::ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZone(const string &GatewayId, const string &ClusterId);

      /**
       * @summary Queries created service groups.
       *
       * @param request ListGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created service groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries a list of workers in a resource group.
       *
       * @param request ListResourceInstanceWorkerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceInstanceWorkerResponse
       */
      Models::ListResourceInstanceWorkerResponse listResourceInstanceWorkerWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceName, const Models::ListResourceInstanceWorkerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workers in a resource group.
       *
       * @param request ListResourceInstanceWorkerRequest
       * @return ListResourceInstanceWorkerResponse
       */
      Models::ListResourceInstanceWorkerResponse listResourceInstanceWorker(const string &ClusterId, const string &ResourceId, const string &InstanceName, const Models::ListResourceInstanceWorkerRequest &request);

      /**
       * @summary Queries a list of instances in a dedicated resource group.
       *
       * @param tmpReq ListResourceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceInstancesResponse
       */
      Models::ListResourceInstancesResponse listResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const Models::ListResourceInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances in a dedicated resource group.
       *
       * @param request ListResourceInstancesRequest
       * @return ListResourceInstancesResponse
       */
      Models::ListResourceInstancesResponse listResourceInstances(const string &ClusterId, const string &ResourceId, const Models::ListResourceInstancesRequest &request);

      /**
       * @deprecated OpenAPI ListResourceServices is deprecated
       *
       * @summary Queries a list of services that are deployed in the dedicated resource group.
       *
       * @param request ListResourceServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceServicesResponse
       */
      Models::ListResourceServicesResponse listResourceServicesWithOptions(const string &ClusterId, const string &ResourceId, const Models::ListResourceServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListResourceServices is deprecated
       *
       * @summary Queries a list of services that are deployed in the dedicated resource group.
       *
       * @param request ListResourceServicesRequest
       * @return ListResourceServicesResponse
       */
      Models::ListResourceServicesResponse listResourceServices(const string &ClusterId, const string &ResourceId, const Models::ListResourceServicesRequest &request);

      /**
       * @summary Queries a list of dedicated resource groups for the current user.
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of dedicated resource groups for the current user.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Queries the containers of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceContainersResponse
       */
      Models::ListServiceContainersResponse listServiceContainersWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the containers of a service.
       *
       * @return ListServiceContainersResponse
       */
      Models::ListServiceContainersResponse listServiceContainers(const string &ClusterId, const string &ServiceName, const string &InstanceName);

      /**
       * @summary 获取故障注入信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceFaultInjectionInfoResponse
       */
      Models::ListServiceInstanceFaultInjectionInfoResponse listServiceInstanceFaultInjectionInfoWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取故障注入信息
       *
       * @return ListServiceInstanceFaultInjectionInfoResponse
       */
      Models::ListServiceInstanceFaultInjectionInfoResponse listServiceInstanceFaultInjectionInfo(const string &ClusterId, const string &ServiceName, const string &InstanceName);

      /**
       * @summary Queries instances of a service.
       *
       * @param request ListServiceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const Models::ListServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances of a service.
       *
       * @param request ListServiceInstancesRequest
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstances(const string &ClusterId, const string &ServiceName, const Models::ListServiceInstancesRequest &request);

      /**
       * @summary Queries the information about the historical versions of a service.
       *
       * @param request ListServiceVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceVersionsResponse
       */
      Models::ListServiceVersionsResponse listServiceVersionsWithOptions(const string &ClusterId, const string &ServiceName, const Models::ListServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the historical versions of a service.
       *
       * @param request ListServiceVersionsRequest
       * @return ListServiceVersionsResponse
       */
      Models::ListServiceVersionsResponse listServiceVersions(const string &ClusterId, const string &ServiceName, const Models::ListServiceVersionsRequest &request);

      /**
       * @summary Lists services.
       *
       * @param tmpReq ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary Queries a list of tenant plug-ins.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantAddonsResponse
       */
      Models::ListTenantAddonsResponse listTenantAddonsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tenant plug-ins.
       *
       * @return ListTenantAddonsResponse
       */
      Models::ListTenantAddonsResponse listTenantAddons();

      /**
       * @summary Queries a list of virtual resource groups for the current user.
       *
       * @param request ListVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualResourceResponse
       */
      Models::ListVirtualResourceResponse listVirtualResourceWithOptions(const Models::ListVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of virtual resource groups for the current user.
       *
       * @param request ListVirtualResourceRequest
       * @return ListVirtualResourceResponse
       */
      Models::ListVirtualResourceResponse listVirtualResource(const Models::ListVirtualResourceRequest &request);

      /**
       * @summary Migrates resource group instances.
       *
       * @param request MigrateResourceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateResourceInstanceResponse
       */
      Models::MigrateResourceInstanceResponse migrateResourceInstanceWithOptions(const string &ClusterId, const string &ResourceId, const Models::MigrateResourceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates resource group instances.
       *
       * @param request MigrateResourceInstanceRequest
       * @return MigrateResourceInstanceResponse
       */
      Models::MigrateResourceInstanceResponse migrateResourceInstance(const string &ClusterId, const string &ResourceId, const Models::MigrateResourceInstanceRequest &request);

      /**
       * @summary Resets tenant configurations.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstallTenantAddonResponse
       */
      Models::ReinstallTenantAddonResponse reinstallTenantAddonWithOptions(const string &ClusterId, const string &TenantAddonName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets tenant configurations.
       *
       * @return ReinstallTenantAddonResponse
       */
      Models::ReinstallTenantAddonResponse reinstallTenantAddon(const string &ClusterId, const string &TenantAddonName);

      /**
       * @summary Switch the traffic state or weight of the service.
       *
       * @param request ReleaseServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseServiceResponse
       */
      Models::ReleaseServiceResponse releaseServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::ReleaseServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switch the traffic state or weight of the service.
       *
       * @param request ReleaseServiceRequest
       * @return ReleaseServiceResponse
       */
      Models::ReleaseServiceResponse releaseService(const string &ClusterId, const string &ServiceName, const Models::ReleaseServiceRequest &request);

      /**
       * @summary Restarts a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartServiceResponse
       */
      Models::RestartServiceResponse restartServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a service.
       *
       * @return RestartServiceResponse
       */
      Models::RestartServiceResponse restartService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Starts a stress testing task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBenchmarkTaskResponse
       */
      Models::StartBenchmarkTaskResponse startBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a stress testing task.
       *
       * @return StartBenchmarkTaskResponse
       */
      Models::StartBenchmarkTaskResponse startBenchmarkTask(const string &ClusterId, const string &TaskName);

      /**
       * @summary Starts a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartServiceResponse
       */
      Models::StartServiceResponse startServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a service.
       *
       * @return StartServiceResponse
       */
      Models::StartServiceResponse startService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Stops a stress testing task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBenchmarkTaskResponse
       */
      Models::StopBenchmarkTaskResponse stopBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stress testing task.
       *
       * @return StopBenchmarkTaskResponse
       */
      Models::StopBenchmarkTaskResponse stopBenchmarkTask(const string &ClusterId, const string &TaskName);

      /**
       * @summary Stops a running service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopServiceResponse
       */
      Models::StopServiceResponse stopServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running service.
       *
       * @return StopServiceResponse
       */
      Models::StopServiceResponse stopService(const string &ClusterId, const string &ServiceName);

      /**
       * @summary Updates an application service.
       *
       * @param request UpdateAppServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppServiceResponse
       */
      Models::UpdateAppServiceResponse updateAppServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateAppServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application service.
       *
       * @param request UpdateAppServiceRequest
       * @return UpdateAppServiceResponse
       */
      Models::UpdateAppServiceResponse updateAppService(const string &ClusterId, const string &ServiceName, const Models::UpdateAppServiceRequest &request);

      /**
       * @summary Updates a stress testing task.
       *
       * @param request UpdateBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBenchmarkTaskResponse
       */
      Models::UpdateBenchmarkTaskResponse updateBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const Models::UpdateBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stress testing task.
       *
       * @param request UpdateBenchmarkTaskRequest
       * @return UpdateBenchmarkTaskResponse
       */
      Models::UpdateBenchmarkTaskResponse updateBenchmarkTask(const string &ClusterId, const string &TaskName, const Models::UpdateBenchmarkTaskRequest &request);

      /**
       * @summary Update a private gateway.
       *
       * @param request UpdateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGatewayWithOptions(const string &GatewayId, const string &ClusterId, const Models::UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a private gateway.
       *
       * @param request UpdateGatewayRequest
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGateway(const string &GatewayId, const string &ClusterId, const Models::UpdateGatewayRequest &request);

      /**
       * @summary Updates the specific fields of a service group.
       *
       * @param request UpdateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const string &ClusterId, const string &GroupName, const Models::UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specific fields of a service group.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const string &ClusterId, const string &GroupName, const Models::UpdateGroupRequest &request);

      /**
       * @summary Updates the information about a dedicated resource group. Only the name of a dedicated resource group can be updated.
       *
       * @param request UpdateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a dedicated resource group. Only the name of a dedicated resource group can be updated.
       *
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceRequest &request);

      /**
       * @summary Updates the configurations of a virtual private cloud (VPC) direct connection for a dedicated resource group.
       *
       * @param request UpdateResourceDLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceDLinkResponse
       */
      Models::UpdateResourceDLinkResponse updateResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceDLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a virtual private cloud (VPC) direct connection for a dedicated resource group.
       *
       * @param request UpdateResourceDLinkRequest
       * @return UpdateResourceDLinkResponse
       */
      Models::UpdateResourceDLinkResponse updateResourceDLink(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceDLinkRequest &request);

      /**
       * @summary Updates the service scheduling status of an instance in a dedicated resource group.
       *
       * @param request UpdateResourceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceInstanceResponse
       */
      Models::UpdateResourceInstanceResponse updateResourceInstanceWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceId, const Models::UpdateResourceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the service scheduling status of an instance in a dedicated resource group.
       *
       * @param request UpdateResourceInstanceRequest
       * @return UpdateResourceInstanceResponse
       */
      Models::UpdateResourceInstanceResponse updateResourceInstance(const string &ClusterId, const string &ResourceId, const string &InstanceId, const Models::UpdateResourceInstanceRequest &request);

      /**
       * @summary Updates the tag of an instance in a resource group.
       *
       * @param tmpReq UpdateResourceInstanceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceInstanceLabelResponse
       */
      Models::UpdateResourceInstanceLabelResponse updateResourceInstanceLabelWithOptions(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceInstanceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tag of an instance in a resource group.
       *
       * @param request UpdateResourceInstanceLabelRequest
       * @return UpdateResourceInstanceLabelResponse
       */
      Models::UpdateResourceInstanceLabelResponse updateResourceInstanceLabel(const string &ClusterId, const string &ResourceId, const Models::UpdateResourceInstanceLabelRequest &request);

      /**
       * @summary Updates a model or processor of a service. If only the metadata.instance field is updated, manual scaling can be performed.
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model or processor of a service. If only the metadata.instance field is updated, manual scaling can be performed.
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceRequest &request);

      /**
       * @summary Updates the Autoscaler configurations of a service.
       *
       * @param request UpdateServiceAutoScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceAutoScalerResponse
       */
      Models::UpdateServiceAutoScalerResponse updateServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Autoscaler configurations of a service.
       *
       * @param request UpdateServiceAutoScalerRequest
       * @return UpdateServiceAutoScalerResponse
       */
      Models::UpdateServiceAutoScalerResponse updateServiceAutoScaler(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceAutoScalerRequest &request);

      /**
       * @summary Updates the Cron Horizontal Pod Autoscaler (CronHPA) settings of a service.
       *
       * @param request UpdateServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceCronScalerResponse
       */
      Models::UpdateServiceCronScalerResponse updateServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Cron Horizontal Pod Autoscaler (CronHPA) settings of a service.
       *
       * @param request UpdateServiceCronScalerRequest
       * @return UpdateServiceCronScalerResponse
       */
      Models::UpdateServiceCronScalerResponse updateServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceCronScalerRequest &request);

      /**
       * @summary Updates attributes of service instances. Only isolation can be performed for service instances.
       *
       * @param request UpdateServiceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceResponse
       */
      Models::UpdateServiceInstanceResponse updateServiceInstanceWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::UpdateServiceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates attributes of service instances. Only isolation can be performed for service instances.
       *
       * @param request UpdateServiceInstanceRequest
       * @return UpdateServiceInstanceResponse
       */
      Models::UpdateServiceInstanceResponse updateServiceInstance(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::UpdateServiceInstanceRequest &request);

      /**
       * @summary Adds service tags or updates existing service tags.
       *
       * @param request UpdateServiceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceLabelResponse
       */
      Models::UpdateServiceLabelResponse updateServiceLabelWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds service tags or updates existing service tags.
       *
       * @param request UpdateServiceLabelRequest
       * @return UpdateServiceLabelResponse
       */
      Models::UpdateServiceLabelResponse updateServiceLabel(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceLabelRequest &request);

      /**
       * @summary Updates the traffic mirroring configurations of a service.
       *
       * @param request UpdateServiceMirrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceMirrorResponse
       */
      Models::UpdateServiceMirrorResponse updateServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the traffic mirroring configurations of a service.
       *
       * @param request UpdateServiceMirrorRequest
       * @return UpdateServiceMirrorResponse
       */
      Models::UpdateServiceMirrorResponse updateServiceMirror(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceMirrorRequest &request);

      /**
       * @summary Updates the safety lock of a service to minimize misoperations on the service.
       *
       * @param request UpdateServiceSafetyLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceSafetyLockResponse
       */
      Models::UpdateServiceSafetyLockResponse updateServiceSafetyLockWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceSafetyLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the safety lock of a service to minimize misoperations on the service.
       *
       * @param request UpdateServiceSafetyLockRequest
       * @return UpdateServiceSafetyLockResponse
       */
      Models::UpdateServiceSafetyLockResponse updateServiceSafetyLock(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceSafetyLockRequest &request);

      /**
       * @summary Updates the version of a service or rolls back the service to a specific version.
       *
       * @param request UpdateServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceVersionResponse
       */
      Models::UpdateServiceVersionResponse updateServiceVersionWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version of a service or rolls back the service to a specific version.
       *
       * @param request UpdateServiceVersionRequest
       * @return UpdateServiceVersionResponse
       */
      Models::UpdateServiceVersionResponse updateServiceVersion(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceVersionRequest &request);

      /**
       * @summary Updates the information about a virtual resource group.
       *
       * @param request UpdateVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualResourceResponse
       */
      Models::UpdateVirtualResourceResponse updateVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const Models::UpdateVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a virtual resource group.
       *
       * @param request UpdateVirtualResourceRequest
       * @return UpdateVirtualResourceResponse
       */
      Models::UpdateVirtualResourceResponse updateVirtualResource(const string &ClusterId, const string &VirtualResourceId, const Models::UpdateVirtualResourceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
