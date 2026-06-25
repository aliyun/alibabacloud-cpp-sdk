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
       * @param request CommitServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitServiceResponse
       */
      Models::CommitServiceResponse commitServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::CommitServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commits the Worker0 container in the custom container service and deploys the container as a new image.
       *
       * @param request CommitServiceRequest
       * @return CommitServiceResponse
       */
      Models::CommitServiceResponse commitService(const string &ClusterId, const string &ServiceName, const Models::CommitServiceRequest &request);

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
       * @summary Creates a single dynamic parameter in a specified service.
       *
       * @description ## Description
       * - This API creates a new dynamic parameter by sending a POST request to a specified path.
       * - The dynamic parameter name (`ConfigKey`) can contain letters, digits, periods (.), underscores (_), hyphens (-), and forward slashes (/). The maximum length is 100 characters.
       * - The request body must include the dynamic parameter value (`Value`).
       * - If successful, the API returns the new dynamic parameter\\"s name (`Key`), value (`Value`), creation time, and update time.
       *
       * @param request CreateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfigWithOptions(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::CreateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a single dynamic parameter in a specified service.
       *
       * @description ## Description
       * - This API creates a new dynamic parameter by sending a POST request to a specified path.
       * - The dynamic parameter name (`ConfigKey`) can contain letters, digits, periods (.), underscores (_), hyphens (-), and forward slashes (/). The maximum length is 100 characters.
       * - The request body must include the dynamic parameter value (`Value`).
       * - If successful, the API returns the new dynamic parameter\\"s name (`Key`), value (`Value`), creation time, and update time.
       *
       * @param request CreateConfigRequest
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfig(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::CreateConfigRequest &request);

      /**
       * @summary Creates a fault injection task.
       *
       * @description **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request CreateFaultInjectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaultInjectionResponse
       */
      Models::CreateFaultInjectionResponse createFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::CreateFaultInjectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fault injection task.
       *
       * @description **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
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
       * @summary Creates an internal endpoint for a private gateway.
       *
       * @description **Make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS) before you use this operation.**
       *
       * @param request CreateGatewayIntranetLinkedVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayIntranetLinkedVpcResponse
       */
      Models::CreateGatewayIntranetLinkedVpcResponse createGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const Models::CreateGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an internal endpoint for a private gateway.
       *
       * @description **Make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS) before you use this operation.**
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
       * @summary Creates a service group.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing of Elastic Algorithm Service (EAS) and its [pricing](https://help.aliyun.com/document_detail/144261.html).**.
       *
       * @param request CreateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service group.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing of Elastic Algorithm Service (EAS) and its [pricing](https://help.aliyun.com/document_detail/144261.html).**.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Create a new resource group.
       *
       * @description **Before calling this API, make sure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request CreateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new resource group.
       *
       * @description **Before calling this API, make sure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      /**
       * @summary Creates machine instances in a dedicated resource group.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and&#x20;**[**pricing**](https://help.aliyun.com/document_detail/144261.html)**&#x20;of Elastic Algorithm Service (EAS).**
       *
       * @param request CreateResourceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceInstancesResponse
       */
      Models::CreateResourceInstancesResponse createResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const Models::CreateResourceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates machine instances in a dedicated resource group.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and&#x20;**[**pricing**](https://help.aliyun.com/document_detail/144261.html)**&#x20;of Elastic Algorithm Service (EAS).**
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
       * @summary Creates a scheduled auto scaling rule for a service.
       *
       * @param request CreateServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceCronScalerResponse
       */
      Models::CreateServiceCronScalerResponse createServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::CreateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled auto scaling rule for a service.
       *
       * @param request CreateServiceCronScalerRequest
       * @return CreateServiceCronScalerResponse
       */
      Models::CreateServiceCronScalerResponse createServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::CreateServiceCronScalerRequest &request);

      /**
       * @summary Call this operation to obtain a token and a WebSocket URL for logging on to a container.
       *
       * @param request CreateServiceInstanceTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceInstanceTokenResponse
       */
      Models::CreateServiceInstanceTokenResponse createServiceInstanceTokenWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::CreateServiceInstanceTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to obtain a token and a WebSocket URL for logging on to a container.
       *
       * @param request CreateServiceInstanceTokenRequest
       * @return CreateServiceInstanceTokenResponse
       */
      Models::CreateServiceInstanceTokenResponse createServiceInstanceToken(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::CreateServiceInstanceTokenRequest &request);

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
       * @summary Creates a service rollout.
       *
       * @description ## Usage notes
       * - **Mutually exclusive strategies**: You can use either the `Partition` or the `Batch` strategy, but not both.
       * - **Request rate limit**: Up to 100 requests per second.
       * - **Authorization**: This operation requires the `eas:CreateServiceRollout` permission.
       * - **ARN**: `acs:eas:{#regionId}:{#accountId}:service/{#ServiceName}`.
       * - **Pause a rollout**: To pause the service rollout, set the `Paused` parameter to `true`. You can then resume or cancel the rollout by calling the `UpdateServiceRollout` operation.
       * - **Monitoring and rollback**: Monitor service metrics during the service rollout to promptly identify and resolve issues. To perform a rollback, you can adjust the `Partition` value or delete the rollout strategy.
       *
       * @param request CreateServiceRolloutRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceRolloutResponse
       */
      Models::CreateServiceRolloutResponse createServiceRolloutWithOptions(const string &ClusterId, const string &ServiceName, const Models::CreateServiceRolloutRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service rollout.
       *
       * @description ## Usage notes
       * - **Mutually exclusive strategies**: You can use either the `Partition` or the `Batch` strategy, but not both.
       * - **Request rate limit**: Up to 100 requests per second.
       * - **Authorization**: This operation requires the `eas:CreateServiceRollout` permission.
       * - **ARN**: `acs:eas:{#regionId}:{#accountId}:service/{#ServiceName}`.
       * - **Pause a rollout**: To pause the service rollout, set the `Paused` parameter to `true`. You can then resume or cancel the rollout by calling the `UpdateServiceRollout` operation.
       * - **Monitoring and rollback**: Monitor service metrics during the service rollout to promptly identify and resolve issues. To perform a rollback, you can adjust the `Partition` value or delete the rollout strategy.
       *
       * @param request CreateServiceRolloutRequest
       * @return CreateServiceRolloutResponse
       */
      Models::CreateServiceRolloutResponse createServiceRollout(const string &ClusterId, const string &ServiceName, const Models::CreateServiceRolloutRequest &request);

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
       * @param request DeleteBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBenchmarkTaskResponse
       */
      Models::DeleteBenchmarkTaskResponse deleteBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const Models::DeleteBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stress testing task.
       *
       * @param request DeleteBenchmarkTaskRequest
       * @return DeleteBenchmarkTaskResponse
       */
      Models::DeleteBenchmarkTaskResponse deleteBenchmarkTask(const string &ClusterId, const string &TaskName, const Models::DeleteBenchmarkTaskRequest &request);

      /**
       * @summary Deletes a single dynamic parameter for a specified service.
       *
       * @description ## Request
       * This API deletes a specific configuration by its region ID, configuration type, service name, and configuration key. Ensure all parameter values are accurate to avoid accidentally deleting critical configurations.
       *
       * @param request DeleteConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfigWithOptions(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::DeleteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a single dynamic parameter for a specified service.
       *
       * @description ## Request
       * This API deletes a specific configuration by its region ID, configuration type, service name, and configuration key. Ensure all parameter values are accurate to avoid accidentally deleting critical configurations.
       *
       * @param request DeleteConfigRequest
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfig(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::DeleteConfigRequest &request);

      /**
       * @summary Deletes a fault injection task.
       *
       * @description **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request DeleteFaultInjectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaultInjectionResponse
       */
      Models::DeleteFaultInjectionResponse deleteFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType, const Models::DeleteFaultInjectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fault injection task.
       *
       * @description **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request DeleteFaultInjectionRequest
       * @return DeleteFaultInjectionResponse
       */
      Models::DeleteFaultInjectionResponse deleteFaultInjection(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType, const Models::DeleteFaultInjectionRequest &request);

      /**
       * @summary Deletes a private gateway.
       *
       * @param request DeleteGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a private gateway.
       *
       * @param request DeleteGatewayRequest
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayRequest &request);

      /**
       * @summary Deletes an internal endpoint of a private gateway.
       *
       * @param request DeleteGatewayIntranetLinkedVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayIntranetLinkedVpcResponse
       */
      Models::DeleteGatewayIntranetLinkedVpcResponse deleteGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal endpoint of a private gateway.
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
       * @summary Deletes gateway labels.
       *
       * @description **Before you call this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) for Elastic Algorithm Service (EAS).**
       *
       * @param tmpReq DeleteGatewayLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayLabelResponse
       */
      Models::DeleteGatewayLabelResponse deleteGatewayLabelWithOptions(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes gateway labels.
       *
       * @description **Before you call this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) for Elastic Algorithm Service (EAS).**
       *
       * @param request DeleteGatewayLabelRequest
       * @return DeleteGatewayLabelResponse
       */
      Models::DeleteGatewayLabelResponse deleteGatewayLabel(const string &ClusterId, const string &GatewayId, const Models::DeleteGatewayLabelRequest &request);

      /**
       * @summary Deletes a service group.
       *
       * @param request DeleteGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const string &ClusterId, const string &GroupName, const Models::DeleteGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const string &ClusterId, const string &GroupName, const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes a resource group that contains no resources or instances.
       *
       * @param request DeleteResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group that contains no resources or instances.
       *
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceRequest &request);

      /**
       * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
       *
       * @param request DeleteResourceDLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceDLinkResponse
       */
      Models::DeleteResourceDLinkResponse deleteResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceDLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
       *
       * @param request DeleteResourceDLinkRequest
       * @return DeleteResourceDLinkResponse
       */
      Models::DeleteResourceDLinkResponse deleteResourceDLink(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceDLinkRequest &request);

      /**
       * @summary Deletes instance tags from a resource group.
       *
       * @param tmpReq DeleteResourceInstanceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceInstanceLabelResponse
       */
      Models::DeleteResourceInstanceLabelResponse deleteResourceInstanceLabelWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceInstanceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes instance tags from a resource group.
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
       * @param request DeleteResourceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceLogResponse
       */
      Models::DeleteResourceLogResponse deleteResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the LogShipper feature of Log Service for a dedicated resource group.
       *
       * @param request DeleteResourceLogRequest
       * @return DeleteResourceLogResponse
       */
      Models::DeleteResourceLogResponse deleteResourceLog(const string &ClusterId, const string &ResourceId, const Models::DeleteResourceLogRequest &request);

      /**
       * @summary Deletes a service.
       *
       * @param request DeleteServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service.
       *
       * @param request DeleteServiceRequest
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceRequest &request);

      /**
       * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
       *
       * @param request DeleteServiceAutoScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceAutoScalerResponse
       */
      Models::DeleteServiceAutoScalerResponse deleteServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
       *
       * @param request DeleteServiceAutoScalerRequest
       * @return DeleteServiceAutoScalerResponse
       */
      Models::DeleteServiceAutoScalerResponse deleteServiceAutoScaler(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceAutoScalerRequest &request);

      /**
       * @summary Disables the Cronscaler feature for a service.
       *
       * @param request DeleteServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceCronScalerResponse
       */
      Models::DeleteServiceCronScalerResponse deleteServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Cronscaler feature for a service.
       *
       * @param request DeleteServiceCronScalerRequest
       * @return DeleteServiceCronScalerResponse
       */
      Models::DeleteServiceCronScalerResponse deleteServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceCronScalerRequest &request);

      /**
       * @summary Restarts specified instances of a service.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and&#x20;**[**pricing**](https://help.aliyun.com/document_detail/144261.html)**&#x20;of Elastic Algorithm Service (EAS).**
       *
       * @param request DeleteServiceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts specified instances of a service.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and&#x20;**[**pricing**](https://help.aliyun.com/document_detail/144261.html)**&#x20;of Elastic Algorithm Service (EAS).**
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Deletes a service label.
       *
       * @param tmpReq DeleteServiceLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceLabelResponse
       */
      Models::DeleteServiceLabelResponse deleteServiceLabelWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service label.
       *
       * @param request DeleteServiceLabelRequest
       * @return DeleteServiceLabelResponse
       */
      Models::DeleteServiceLabelResponse deleteServiceLabel(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceLabelRequest &request);

      /**
       * @summary Disables the traffic mirroring feature for a service.
       *
       * @param request DeleteServiceMirrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceMirrorResponse
       */
      Models::DeleteServiceMirrorResponse deleteServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the traffic mirroring feature for a service.
       *
       * @param request DeleteServiceMirrorRequest
       * @return DeleteServiceMirrorResponse
       */
      Models::DeleteServiceMirrorResponse deleteServiceMirror(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceMirrorRequest &request);

      /**
       * @summary Deletes a service rollout.
       *
       * @description ## 请求说明
       * - **不可恢复**：删除操作不可撤销，请谨慎操作。
       * - **不自动回退**：删除策略不会回退已更新的副本。
       * - **停止发布**：正在进行的发布会立即停止。
       * - **状态保留**：已更新的副本保持新版本，未更新的保持旧版本。
       * - 删除后，后续服务更新将采用默认的滚动更新方式。
       * - 在删除前，请确认要删除的服务名称和地域，并了解当前发布状态（可以通过调用`DescribeServiceRollout`接口获取）。
       * - 如果需要回退版本，请在删除策略后通过重新创建策略或直接更新服务镜像来实现。
       *
       * @param request DeleteServiceRolloutRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceRolloutResponse
       */
      Models::DeleteServiceRolloutResponse deleteServiceRolloutWithOptions(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceRolloutRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service rollout.
       *
       * @description ## 请求说明
       * - **不可恢复**：删除操作不可撤销，请谨慎操作。
       * - **不自动回退**：删除策略不会回退已更新的副本。
       * - **停止发布**：正在进行的发布会立即停止。
       * - **状态保留**：已更新的副本保持新版本，未更新的保持旧版本。
       * - 删除后，后续服务更新将采用默认的滚动更新方式。
       * - 在删除前，请确认要删除的服务名称和地域，并了解当前发布状态（可以通过调用`DescribeServiceRollout`接口获取）。
       * - 如果需要回退版本，请在删除策略后通过重新创建策略或直接更新服务镜像来实现。
       *
       * @param request DeleteServiceRolloutRequest
       * @return DeleteServiceRolloutResponse
       */
      Models::DeleteServiceRolloutResponse deleteServiceRollout(const string &ClusterId, const string &ServiceName, const Models::DeleteServiceRolloutRequest &request);

      /**
       * @summary Deletes a virtual resource group that contains no resources or instances.
       *
       * @param request DeleteVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualResourceResponse
       */
      Models::DeleteVirtualResourceResponse deleteVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const Models::DeleteVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual resource group that contains no resources or instances.
       *
       * @param request DeleteVirtualResourceRequest
       * @return DeleteVirtualResourceResponse
       */
      Models::DeleteVirtualResourceResponse deleteVirtualResource(const string &ClusterId, const string &VirtualResourceId, const Models::DeleteVirtualResourceRequest &request);

      /**
       * @summary Queries details about the configurations of a stress testing task.
       *
       * @param request DescribeBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBenchmarkTaskResponse
       */
      Models::DescribeBenchmarkTaskResponse describeBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const Models::DescribeBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the configurations of a stress testing task.
       *
       * @param request DescribeBenchmarkTaskRequest
       * @return DescribeBenchmarkTaskResponse
       */
      Models::DescribeBenchmarkTaskResponse describeBenchmarkTask(const string &ClusterId, const string &TaskName, const Models::DescribeBenchmarkTaskRequest &request);

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
       * @param request DescribeGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewayResponse
       */
      Models::DescribeGatewayResponse describeGatewayWithOptions(const string &ClusterId, const string &GatewayId, const Models::DescribeGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a private gateway.
       *
       * @param request DescribeGatewayRequest
       * @return DescribeGatewayResponse
       */
      Models::DescribeGatewayResponse describeGateway(const string &ClusterId, const string &GatewayId, const Models::DescribeGatewayRequest &request);

      /**
       * @summary Queries the information about a service group.
       *
       * @param request DescribeGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroupWithOptions(const string &ClusterId, const string &GroupName, const Models::DescribeGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service group.
       *
       * @param request DescribeGroupRequest
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroup(const string &ClusterId, const string &GroupName, const Models::DescribeGroupRequest &request);

      /**
       * @summary Obtains a list of endpoints of service groups.
       *
       * @param request DescribeGroupEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupEndpointsResponse
       */
      Models::DescribeGroupEndpointsResponse describeGroupEndpointsWithOptions(const string &ClusterId, const string &GroupName, const Models::DescribeGroupEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of endpoints of service groups.
       *
       * @param request DescribeGroupEndpointsRequest
       * @return DescribeGroupEndpointsResponse
       */
      Models::DescribeGroupEndpointsResponse describeGroupEndpoints(const string &ClusterId, const string &GroupName, const Models::DescribeGroupEndpointsRequest &request);

      /**
       * @summary Returns a list of available machine specifications.
       *
       * @param tmpReq DescribeMachineSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMachineSpecResponse
       */
      Models::DescribeMachineSpecResponse describeMachineSpecWithOptions(const Models::DescribeMachineSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of available machine specifications.
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
       * @summary Retrieves the details of a resource group.
       *
       * @param request DescribeResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceResponse
       */
      Models::DescribeResourceResponse describeResourceWithOptions(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a resource group.
       *
       * @param request DescribeResourceRequest
       * @return DescribeResourceResponse
       */
      Models::DescribeResourceResponse describeResource(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceRequest &request);

      /**
       * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
       *
       * @param request DescribeResourceDLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceDLinkResponse
       */
      Models::DescribeResourceDLinkResponse describeResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceDLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
       *
       * @param request DescribeResourceDLinkRequest
       * @return DescribeResourceDLinkResponse
       */
      Models::DescribeResourceDLinkResponse describeResourceDLink(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceDLinkRequest &request);

      /**
       * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
       *
       * @param request DescribeResourceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogResponse
       */
      Models::DescribeResourceLogResponse describeResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
       *
       * @param request DescribeResourceLogRequest
       * @return DescribeResourceLogResponse
       */
      Models::DescribeResourceLogResponse describeResourceLog(const string &ClusterId, const string &ResourceId, const Models::DescribeResourceLogRequest &request);

      /**
       * @summary Queries the details about a service.
       *
       * @param request DescribeServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceResponse
       */
      Models::DescribeServiceResponse describeServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a service.
       *
       * @param request DescribeServiceRequest
       * @return DescribeServiceResponse
       */
      Models::DescribeServiceResponse describeService(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceRequest &request);

      /**
       * @summary Queries information about the Autoscaler configurations of a service.
       *
       * @param request DescribeServiceAutoScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAutoScalerResponse
       */
      Models::DescribeServiceAutoScalerResponse describeServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Autoscaler configurations of a service.
       *
       * @param request DescribeServiceAutoScalerRequest
       * @return DescribeServiceAutoScalerResponse
       */
      Models::DescribeServiceAutoScalerResponse describeServiceAutoScaler(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceAutoScalerRequest &request);

      /**
       * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
       *
       * @param request DescribeServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceCronScalerResponse
       */
      Models::DescribeServiceCronScalerResponse describeServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
       *
       * @param request DescribeServiceCronScalerRequest
       * @return DescribeServiceCronScalerResponse
       */
      Models::DescribeServiceCronScalerResponse describeServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceCronScalerRequest &request);

      /**
       * @summary Queries the diagnostics details of a service.
       *
       * @param request DescribeServiceDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceDiagnosisResponse
       */
      Models::DescribeServiceDiagnosisResponse describeServiceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostics details of a service.
       *
       * @param request DescribeServiceDiagnosisRequest
       * @return DescribeServiceDiagnosisResponse
       */
      Models::DescribeServiceDiagnosisResponse describeServiceDiagnosis(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceDiagnosisRequest &request);

      /**
       * @summary Retrieves a list of service endpoints.
       *
       * @param request DescribeServiceEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceEndpointsResponse
       */
      Models::DescribeServiceEndpointsResponse describeServiceEndpointsWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of service endpoints.
       *
       * @param request DescribeServiceEndpointsRequest
       * @return DescribeServiceEndpointsResponse
       */
      Models::DescribeServiceEndpointsResponse describeServiceEndpoints(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEndpointsRequest &request);

      /**
       * @summary Queries recent deployment events for a specified service.
       *
       * @param request DescribeServiceEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceEventResponse
       */
      Models::DescribeServiceEventResponse describeServiceEventWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries recent deployment events for a specified service.
       *
       * @param request DescribeServiceEventRequest
       * @return DescribeServiceEventResponse
       */
      Models::DescribeServiceEventResponse describeServiceEvent(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceEventRequest &request);

      /**
       * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
       *
       * @param request DescribeServiceInstanceDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceInstanceDiagnosisResponse
       */
      Models::DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::DescribeServiceInstanceDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
       *
       * @param request DescribeServiceInstanceDiagnosisRequest
       * @return DescribeServiceInstanceDiagnosisResponse
       */
      Models::DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosis(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::DescribeServiceInstanceDiagnosisRequest &request);

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
       * @param request DescribeServiceMirrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceMirrorResponse
       */
      Models::DescribeServiceMirrorResponse describeServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the traffic mirroring settings of a service.
       *
       * @param request DescribeServiceMirrorRequest
       * @return DescribeServiceMirrorResponse
       */
      Models::DescribeServiceMirrorResponse describeServiceMirror(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceMirrorRequest &request);

      /**
       * @summary Retrieves the details of a service rollout.
       *
       * @description ## 请求说明
       * - 该接口用于查询特定服务的发布策略（Rollout）配置和当前执行状态。
       * - 返回的信息包括但不限于发布策略的具体参数、当前发布进度等。
       * - 请求时需提供`ClusterId`和服务名称`ServiceName`作为路径参数。
       * - 注意，请求速率限制为每秒最多100次。
       * - 如果服务不存在或未创建发布策略，调用此接口将返回错误。
       * - 返回的状态是实时查询的结果，可能会随时间而变化，请根据实际需要调整轮询间隔。
       *
       * @param request DescribeServiceRolloutRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceRolloutResponse
       */
      Models::DescribeServiceRolloutResponse describeServiceRolloutWithOptions(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceRolloutRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a service rollout.
       *
       * @description ## 请求说明
       * - 该接口用于查询特定服务的发布策略（Rollout）配置和当前执行状态。
       * - 返回的信息包括但不限于发布策略的具体参数、当前发布进度等。
       * - 请求时需提供`ClusterId`和服务名称`ServiceName`作为路径参数。
       * - 注意，请求速率限制为每秒最多100次。
       * - 如果服务不存在或未创建发布策略，调用此接口将返回错误。
       * - 返回的状态是实时查询的结果，可能会随时间而变化，请根据实际需要调整轮询间隔。
       *
       * @param request DescribeServiceRolloutRequest
       * @return DescribeServiceRolloutResponse
       */
      Models::DescribeServiceRolloutResponse describeServiceRollout(const string &ClusterId, const string &ServiceName, const Models::DescribeServiceRolloutRequest &request);

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
       * @summary Queries the details of a virtual resource group.
       *
       * @param request DescribeVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualResourceResponse
       */
      Models::DescribeVirtualResourceResponse describeVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const Models::DescribeVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a virtual resource group.
       *
       * @param request DescribeVirtualResourceRequest
       * @return DescribeVirtualResourceResponse
       */
      Models::DescribeVirtualResourceResponse describeVirtualResource(const string &ClusterId, const string &VirtualResourceId, const Models::DescribeVirtualResourceRequest &request);

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
       * @summary Lists all deployed stress testing tasks.
       *
       * @param request ListBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBenchmarkTaskResponse
       */
      Models::ListBenchmarkTaskResponse listBenchmarkTaskWithOptions(const Models::ListBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all deployed stress testing tasks.
       *
       * @param request ListBenchmarkTaskRequest
       * @return ListBenchmarkTaskResponse
       */
      Models::ListBenchmarkTaskResponse listBenchmarkTask(const Models::ListBenchmarkTaskRequest &request);

      /**
       * @summary Retrieves a list of dynamic parameters for a specified service.
       *
       * @description ## Description
       * - `ClusterId` specifies the service\\"s region.
       * - `ConfigType` specifies the configuration type. Only `service` is supported.
       * - `Name` specifies the service name.
       * - Use the `Page` and `PageSize` parameters to paginate the results.
       * - The response contains the details of the dynamic parameters and pagination information.
       *
       * @param request ListConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigsWithOptions(const string &ClusterId, const string &ConfigType, const string &Name, const Models::ListConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of dynamic parameters for a specified service.
       *
       * @description ## Description
       * - `ClusterId` specifies the service\\"s region.
       * - `ConfigType` specifies the configuration type. Only `service` is supported.
       * - `Name` specifies the service name.
       * - Use the `Page` and `PageSize` parameters to paginate the results.
       * - The response contains the details of the dynamic parameters and pagination information.
       *
       * @param request ListConfigsRequest
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigs(const string &ClusterId, const string &ConfigType, const string &Name, const Models::ListConfigsRequest &request);

      /**
       * @summary Lists private gateways.
       *
       * @param tmpReq ListGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGatewayWithOptions(const Models::ListGatewayRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists private gateways.
       *
       * @param request ListGatewayRequest
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGateway(const Models::ListGatewayRequest &request);

      /**
       * @summary Lists the custom domain names for a private gateway.
       *
       * @param request ListGatewayDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayDomainsResponse
       */
      Models::ListGatewayDomainsResponse listGatewayDomainsWithOptions(const string &ClusterId, const string &GatewayId, const Models::ListGatewayDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the custom domain names for a private gateway.
       *
       * @param request ListGatewayDomainsRequest
       * @return ListGatewayDomainsResponse
       */
      Models::ListGatewayDomainsResponse listGatewayDomains(const string &ClusterId, const string &GatewayId, const Models::ListGatewayDomainsRequest &request);

      /**
       * @summary Lists the internal access endpoints of a private gateway.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request ListGatewayIntranetLinkedVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetLinkedVpcResponse
       */
      Models::ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the internal access endpoints of a private gateway.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request ListGatewayIntranetLinkedVpcRequest
       * @return ListGatewayIntranetLinkedVpcResponse
       */
      Models::ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcRequest &request);

      /**
       * @summary Lists the VPC peering connections for a gateway\\"s private network endpoint.
       *
       * @param request ListGatewayIntranetLinkedVpcPeerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetLinkedVpcPeerResponse
       */
      Models::ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcPeerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the VPC peering connections for a gateway\\"s private network endpoint.
       *
       * @param request ListGatewayIntranetLinkedVpcPeerRequest
       * @return ListGatewayIntranetLinkedVpcPeerResponse
       */
      Models::ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const Models::ListGatewayIntranetLinkedVpcPeerRequest &request);

      /**
       * @summary Obtains the zones supported by a gateway within an intranet.
       *
       * @param request ListGatewayIntranetSupportedZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIntranetSupportedZoneResponse
       */
      Models::ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZoneWithOptions(const string &GatewayId, const string &ClusterId, const Models::ListGatewayIntranetSupportedZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the zones supported by a gateway within an intranet.
       *
       * @param request ListGatewayIntranetSupportedZoneRequest
       * @return ListGatewayIntranetSupportedZoneResponse
       */
      Models::ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZone(const string &GatewayId, const string &ClusterId, const Models::ListGatewayIntranetSupportedZoneRequest &request);

      /**
       * @summary Lists created service groups.
       *
       * @param tmpReq ListGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists created service groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Lists the service workers of a resource instance.
       *
       * @param request ListResourceInstanceWorkerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceInstanceWorkerResponse
       */
      Models::ListResourceInstanceWorkerResponse listResourceInstanceWorkerWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceName, const Models::ListResourceInstanceWorkerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the service workers of a resource instance.
       *
       * @param request ListResourceInstanceWorkerRequest
       * @return ListResourceInstanceWorkerResponse
       */
      Models::ListResourceInstanceWorkerResponse listResourceInstanceWorker(const string &ClusterId, const string &ResourceId, const string &InstanceName, const Models::ListResourceInstanceWorkerRequest &request);

      /**
       * @summary Lists the instances in a specified dedicated resource group.
       *
       * @param tmpReq ListResourceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceInstancesResponse
       */
      Models::ListResourceInstancesResponse listResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const Models::ListResourceInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instances in a specified dedicated resource group.
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
       * @summary Lists the resource groups for the current user.
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the resource groups for the current user.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Queries the containers of a service.
       *
       * @param request ListServiceContainersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceContainersResponse
       */
      Models::ListServiceContainersResponse listServiceContainersWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::ListServiceContainersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the containers of a service.
       *
       * @param request ListServiceContainersRequest
       * @return ListServiceContainersResponse
       */
      Models::ListServiceContainersResponse listServiceContainers(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::ListServiceContainersRequest &request);

      /**
       * @summary Retrieves fault injection information.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request ListServiceInstanceFaultInjectionInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceFaultInjectionInfoResponse
       */
      Models::ListServiceInstanceFaultInjectionInfoResponse listServiceInstanceFaultInjectionInfoWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::ListServiceInstanceFaultInjectionInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves fault injection information.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request ListServiceInstanceFaultInjectionInfoRequest
       * @return ListServiceInstanceFaultInjectionInfoResponse
       */
      Models::ListServiceInstanceFaultInjectionInfoResponse listServiceInstanceFaultInjectionInfo(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::ListServiceInstanceFaultInjectionInfoRequest &request);

      /**
       * @summary Lists the instances of a specified service.
       *
       * @description **Ensure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS) before you call this operation.**
       *
       * @param request ListServiceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const Models::ListServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instances of a specified service.
       *
       * @description **Ensure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS) before you call this operation.**
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
       * @summary Queries the virtual resource groups for the current user.
       *
       * @param request ListVirtualResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualResourceResponse
       */
      Models::ListVirtualResourceResponse listVirtualResourceWithOptions(const Models::ListVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual resource groups for the current user.
       *
       * @param request ListVirtualResourceRequest
       * @return ListVirtualResourceResponse
       */
      Models::ListVirtualResourceResponse listVirtualResource(const Models::ListVirtualResourceRequest &request);

      /**
       * @summary Migrates instances to a specified resource group.
       *
       * @param request MigrateResourceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateResourceInstanceResponse
       */
      Models::MigrateResourceInstanceResponse migrateResourceInstanceWithOptions(const string &ClusterId, const string &ResourceId, const Models::MigrateResourceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates instances to a specified resource group.
       *
       * @param request MigrateResourceInstanceRequest
       * @return MigrateResourceInstanceResponse
       */
      Models::MigrateResourceInstanceResponse migrateResourceInstance(const string &ClusterId, const string &ResourceId, const Models::MigrateResourceInstanceRequest &request);

      /**
       * @summary Resets tenant configurations.
       *
       * @param request ReinstallTenantAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstallTenantAddonResponse
       */
      Models::ReinstallTenantAddonResponse reinstallTenantAddonWithOptions(const string &ClusterId, const string &TenantAddonName, const Models::ReinstallTenantAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets tenant configurations.
       *
       * @param request ReinstallTenantAddonRequest
       * @return ReinstallTenantAddonResponse
       */
      Models::ReinstallTenantAddonResponse reinstallTenantAddon(const string &ClusterId, const string &TenantAddonName, const Models::ReinstallTenantAddonRequest &request);

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
       * @param request RestartServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartServiceResponse
       */
      Models::RestartServiceResponse restartServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::RestartServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a service.
       *
       * @param request RestartServiceRequest
       * @return RestartServiceResponse
       */
      Models::RestartServiceResponse restartService(const string &ClusterId, const string &ServiceName, const Models::RestartServiceRequest &request);

      /**
       * @summary Scales a service.
       *
       * @param request ScaleServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleServiceResponse
       */
      Models::ScaleServiceResponse scaleServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::ScaleServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales a service.
       *
       * @param request ScaleServiceRequest
       * @return ScaleServiceResponse
       */
      Models::ScaleServiceResponse scaleService(const string &ClusterId, const string &ServiceName, const Models::ScaleServiceRequest &request);

      /**
       * @summary Starts a stress testing task.
       *
       * @param request StartBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBenchmarkTaskResponse
       */
      Models::StartBenchmarkTaskResponse startBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const Models::StartBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a stress testing task.
       *
       * @param request StartBenchmarkTaskRequest
       * @return StartBenchmarkTaskResponse
       */
      Models::StartBenchmarkTaskResponse startBenchmarkTask(const string &ClusterId, const string &TaskName, const Models::StartBenchmarkTaskRequest &request);

      /**
       * @summary Starts a service.
       *
       * @param request StartServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartServiceResponse
       */
      Models::StartServiceResponse startServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::StartServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a service.
       *
       * @param request StartServiceRequest
       * @return StartServiceResponse
       */
      Models::StartServiceResponse startService(const string &ClusterId, const string &ServiceName, const Models::StartServiceRequest &request);

      /**
       * @summary Stops a stress testing task.
       *
       * @param request StopBenchmarkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBenchmarkTaskResponse
       */
      Models::StopBenchmarkTaskResponse stopBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const Models::StopBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stress testing task.
       *
       * @param request StopBenchmarkTaskRequest
       * @return StopBenchmarkTaskResponse
       */
      Models::StopBenchmarkTaskResponse stopBenchmarkTask(const string &ClusterId, const string &TaskName, const Models::StopBenchmarkTaskRequest &request);

      /**
       * @summary Stops a running service.
       *
       * @param request StopServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopServiceResponse
       */
      Models::StopServiceResponse stopServiceWithOptions(const string &ClusterId, const string &ServiceName, const Models::StopServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running service.
       *
       * @param request StopServiceRequest
       * @return StopServiceResponse
       */
      Models::StopServiceResponse stopService(const string &ClusterId, const string &ServiceName, const Models::StopServiceRequest &request);

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
       * @summary Updates a dynamic parameter for a specific cluster and service.
       *
       * @description ## Request
       * Use this API to update a dynamic parameter by providing its `ClusterId`, `ConfigType`, `Name`, and `ConfigKey`. The request body must contain the new parameter value in the `Value` field. Ensure you provide the correct path parameters to avoid errors.
       *
       * @param request UpdateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfigWithOptions(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::UpdateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dynamic parameter for a specific cluster and service.
       *
       * @description ## Request
       * Use this API to update a dynamic parameter by providing its `ClusterId`, `ConfigType`, `Name`, and `ConfigKey`. The request body must contain the new parameter value in the `Value` field. Ensure you provide the correct path parameters to avoid errors.
       *
       * @param request UpdateConfigRequest
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfig(const string &ClusterId, const string &ConfigType, const string &Name, const string &ConfigKey, const Models::UpdateConfigRequest &request);

      /**
       * @summary Updates a private gateway.
       *
       * @param request UpdateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGatewayWithOptions(const string &GatewayId, const string &ClusterId, const Models::UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a private gateway.
       *
       * @param request UpdateGatewayRequest
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGateway(const string &GatewayId, const string &ClusterId, const Models::UpdateGatewayRequest &request);

      /**
       * @summary Adds a gateway label or updates an existing one.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request UpdateGatewayLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayLabelResponse
       */
      Models::UpdateGatewayLabelResponse updateGatewayLabelWithOptions(const string &ClusterId, const string &GatewayId, const Models::UpdateGatewayLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a gateway label or updates an existing one.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request UpdateGatewayLabelRequest
       * @return UpdateGatewayLabelResponse
       */
      Models::UpdateGatewayLabelResponse updateGatewayLabel(const string &ClusterId, const string &GatewayId, const Models::UpdateGatewayLabelRequest &request);

      /**
       * @summary Updates specific fields of a service group.
       *
       * @param request UpdateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const string &ClusterId, const string &GroupName, const Models::UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates specific fields of a service group.
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
       * @summary Updates the scheduling status of an instance in a dedicated resource group.
       *
       * @param request UpdateResourceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceInstanceResponse
       */
      Models::UpdateResourceInstanceResponse updateResourceInstanceWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceId, const Models::UpdateResourceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the scheduling status of an instance in a dedicated resource group.
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
       * @summary Updates the scheduled auto scaling configuration for a service.
       *
       * @param request UpdateServiceCronScalerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceCronScalerResponse
       */
      Models::UpdateServiceCronScalerResponse updateServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the scheduled auto scaling configuration for a service.
       *
       * @param request UpdateServiceCronScalerRequest
       * @return UpdateServiceCronScalerResponse
       */
      Models::UpdateServiceCronScalerResponse updateServiceCronScaler(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceCronScalerRequest &request);

      /**
       * @summary Updates the properties of a service instance. This operation applies only to fencing service instances.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
       *
       * @param request UpdateServiceInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceResponse
       */
      Models::UpdateServiceInstanceResponse updateServiceInstanceWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const Models::UpdateServiceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of a service instance. This operation applies only to fencing service instances.
       *
       * @description **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).**
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
       * @summary Updates a service rollout.
       *
       * @description ## Usage notes
       * - **Provide at least one parameter**: Specify at least one of the `Partition`, `Batch`, or `Paused` parameters.
       * - **Mutually exclusive strategies**: You cannot specify both the `Partition` and `Batch` parameters in the same request.
       * - **Immediate effect**: Updates take effect immediately and affect ongoing service rollouts.
       * - **Rollback**: You can perform a rollback by increasing the `Partition` value. However, this is not an automatic process, and you must manually update the service image.
       * - **Pause does not affect parameters**: Pausing a rollout does not change the configured `Partition` or `Batch` parameters. It only suspends the current rollout strategy.
       *
       * @param request UpdateServiceRolloutRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceRolloutResponse
       */
      Models::UpdateServiceRolloutResponse updateServiceRolloutWithOptions(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceRolloutRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service rollout.
       *
       * @description ## Usage notes
       * - **Provide at least one parameter**: Specify at least one of the `Partition`, `Batch`, or `Paused` parameters.
       * - **Mutually exclusive strategies**: You cannot specify both the `Partition` and `Batch` parameters in the same request.
       * - **Immediate effect**: Updates take effect immediately and affect ongoing service rollouts.
       * - **Rollback**: You can perform a rollback by increasing the `Partition` value. However, this is not an automatic process, and you must manually update the service image.
       * - **Pause does not affect parameters**: Pausing a rollout does not change the configured `Partition` or `Batch` parameters. It only suspends the current rollout strategy.
       *
       * @param request UpdateServiceRolloutRequest
       * @return UpdateServiceRolloutResponse
       */
      Models::UpdateServiceRolloutResponse updateServiceRollout(const string &ClusterId, const string &ServiceName, const Models::UpdateServiceRolloutRequest &request);

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
