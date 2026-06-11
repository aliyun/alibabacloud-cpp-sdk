// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PRIVATELINK20200415_HPP_
#define ALIBABACLOUD_PRIVATELINK20200415_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Privatelink20200415Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Privatelink20200415.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an account ID to the whitelist of an endpoint service.
       *
       * @description - Before you add an account ID to the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - You cannot repeatedly call the **AddUserToVpcEndpointService** operation to add the ID of an Alibaba Cloud account to the whitelist of an endpoint service within a specified period of time.
       *
       * @param request AddUserToVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToVpcEndpointServiceResponse
       */
      Models::AddUserToVpcEndpointServiceResponse addUserToVpcEndpointServiceWithOptions(const Models::AddUserToVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an account ID to the whitelist of an endpoint service.
       *
       * @description - Before you add an account ID to the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - You cannot repeatedly call the **AddUserToVpcEndpointService** operation to add the ID of an Alibaba Cloud account to the whitelist of an endpoint service within a specified period of time.
       *
       * @param request AddUserToVpcEndpointServiceRequest
       * @return AddUserToVpcEndpointServiceResponse
       */
      Models::AddUserToVpcEndpointServiceResponse addUserToVpcEndpointService(const Models::AddUserToVpcEndpointServiceRequest &request);

      /**
       * @summary Adds a zone to an endpoint.
       *
       * @description - **AddZoneToVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the state of the zone.
       *   - If the zone is in the **Creating** state, the zone is being added.
       *   - If the zone is in the Wait state, the zone is added.
       * - You cannot repeatedly call the **AddZoneToVpcEndpoint** operation to add a zone to an endpoint within a specified period of time.
       *
       * @param request AddZoneToVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddZoneToVpcEndpointResponse
       */
      Models::AddZoneToVpcEndpointResponse addZoneToVpcEndpointWithOptions(const Models::AddZoneToVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a zone to an endpoint.
       *
       * @description - **AddZoneToVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the state of the zone.
       *   - If the zone is in the **Creating** state, the zone is being added.
       *   - If the zone is in the Wait state, the zone is added.
       * - You cannot repeatedly call the **AddZoneToVpcEndpoint** operation to add a zone to an endpoint within a specified period of time.
       *
       * @param request AddZoneToVpcEndpointRequest
       * @return AddZoneToVpcEndpointResponse
       */
      Models::AddZoneToVpcEndpointResponse addZoneToVpcEndpoint(const Models::AddZoneToVpcEndpointRequest &request);

      /**
       * @summary Adds a service resource to an endpoint service.
       *
       * @description - Before you add a service resource to an endpoint service, ensure that the endpoint service is in the **Active** state. Call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **AttachResourceToVpcEndpointService** operation does not support concurrently adding service resources to the same endpoint service instance.
       *
       * @param request AttachResourceToVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachResourceToVpcEndpointServiceResponse
       */
      Models::AttachResourceToVpcEndpointServiceResponse attachResourceToVpcEndpointServiceWithOptions(const Models::AttachResourceToVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a service resource to an endpoint service.
       *
       * @description - Before you add a service resource to an endpoint service, ensure that the endpoint service is in the **Active** state. Call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **AttachResourceToVpcEndpointService** operation does not support concurrently adding service resources to the same endpoint service instance.
       *
       * @param request AttachResourceToVpcEndpointServiceRequest
       * @return AttachResourceToVpcEndpointServiceResponse
       */
      Models::AttachResourceToVpcEndpointServiceResponse attachResourceToVpcEndpointService(const Models::AttachResourceToVpcEndpointServiceRequest &request);

      /**
       * @summary Associates an endpoint with a security group.
       *
       * @description - **AttachSecurityGroupToVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) operation to query the state of the endpoint.
       *   - If the endpoint is in the **Pending** state, the endpoint is being associated with the security group.
       *   - If the endpoint is in the **Active** state, the endpoint is associated with the security group.
       * - You cannot repeatedly call the **AttachSecurityGroupToVpcEndpoint** operation to associate an endpoint with a security group within a specified period of time.
       *
       * @param request AttachSecurityGroupToVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachSecurityGroupToVpcEndpointResponse
       */
      Models::AttachSecurityGroupToVpcEndpointResponse attachSecurityGroupToVpcEndpointWithOptions(const Models::AttachSecurityGroupToVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an endpoint with a security group.
       *
       * @description - **AttachSecurityGroupToVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) operation to query the state of the endpoint.
       *   - If the endpoint is in the **Pending** state, the endpoint is being associated with the security group.
       *   - If the endpoint is in the **Active** state, the endpoint is associated with the security group.
       * - You cannot repeatedly call the **AttachSecurityGroupToVpcEndpoint** operation to associate an endpoint with a security group within a specified period of time.
       *
       * @param request AttachSecurityGroupToVpcEndpointRequest
       * @return AttachSecurityGroupToVpcEndpointResponse
       */
      Models::AttachSecurityGroupToVpcEndpointResponse attachSecurityGroupToVpcEndpoint(const Models::AttachSecurityGroupToVpcEndpointRequest &request);

      /**
       * @summary Modifies a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Queries whether PrivateLink is activated.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckProductOpenResponse
       */
      Models::CheckProductOpenResponse checkProductOpenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether PrivateLink is activated.
       *
       * @return CheckProductOpenResponse
       */
      Models::CheckProductOpenResponse checkProductOpen();

      /**
       * @summary Creates an endpoint.
       *
       * @description **CreateVpcEndpoint** is an asynchronous operation. After you send the request, the system returns an instance ID and starts creating the endpoint in the background. You can call [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/469349.html) to check the endpoint\\"s creation status:
       * - **Creating**: The endpoint is being created.
       * - **Active**: The endpoint is available.
       *
       * @param request CreateVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpointWithOptions(const Models::CreateVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint.
       *
       * @description **CreateVpcEndpoint** is an asynchronous operation. After you send the request, the system returns an instance ID and starts creating the endpoint in the background. You can call [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/469349.html) to check the endpoint\\"s creation status:
       * - **Creating**: The endpoint is being created.
       * - **Active**: The endpoint is available.
       *
       * @param request CreateVpcEndpointRequest
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpoint(const Models::CreateVpcEndpointRequest &request);

      /**
       * @summary Creates an endpoint service by calling the CreateVpcEndpointService operation.
       *
       * @description - Before you create an endpoint service, make sure that you have created a load balancer resource that supports PrivateLink. For more information, see [Create a load balancer instance](https://help.aliyun.com/document_detail/174064.html).
       * - **CreateVpcEndpointService** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The endpoint service is not created at the time the request is returned. You can call [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) to query the creation status of the endpoint service:
       *      - If the endpoint service is in the **Creating** state, the endpoint service is being created.
       *      - If the endpoint service is in the **Active** state, the endpoint service is created.
       *
       * @param request CreateVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcEndpointServiceResponse
       */
      Models::CreateVpcEndpointServiceResponse createVpcEndpointServiceWithOptions(const Models::CreateVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint service by calling the CreateVpcEndpointService operation.
       *
       * @description - Before you create an endpoint service, make sure that you have created a load balancer resource that supports PrivateLink. For more information, see [Create a load balancer instance](https://help.aliyun.com/document_detail/174064.html).
       * - **CreateVpcEndpointService** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The endpoint service is not created at the time the request is returned. You can call [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) to query the creation status of the endpoint service:
       *      - If the endpoint service is in the **Creating** state, the endpoint service is being created.
       *      - If the endpoint service is in the **Active** state, the endpoint service is created.
       *
       * @param request CreateVpcEndpointServiceRequest
       * @return CreateVpcEndpointServiceResponse
       */
      Models::CreateVpcEndpointServiceResponse createVpcEndpointService(const Models::CreateVpcEndpointServiceRequest &request);

      /**
       * @summary Deletes an endpoint.
       *
       * @description - Before you delete an endpoint, make sure that all zones associated with the endpoint have been deleted.
       * - **DeleteVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and deletes the endpoint in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/469349.html) operation to query the status of the endpoint.
       *   - If the endpoint status is **Deleting**, the endpoint is being deleted.
       *   - If the endpoint cannot be queried, the endpoint has been deleted.
       *
       * @param request DeleteVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpointWithOptions(const Models::DeleteVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint.
       *
       * @description - Before you delete an endpoint, make sure that all zones associated with the endpoint have been deleted.
       * - **DeleteVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and deletes the endpoint in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/469349.html) operation to query the status of the endpoint.
       *   - If the endpoint status is **Deleting**, the endpoint is being deleted.
       *   - If the endpoint cannot be queried, the endpoint has been deleted.
       *
       * @param request DeleteVpcEndpointRequest
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpoint(const Models::DeleteVpcEndpointRequest &request);

      /**
       * @summary Deletes an endpoint service.
       *
       * @description - Before you delete an endpoint service, you must disconnect the endpoint from the endpoint service and remove the service resources.
       * - **DeleteVpcEndpointService** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to check whether the endpoint service is deleted.
       *   - If the endpoint service is in the **Deleting** state, the endpoint service is being deleted.
       *   - If the endpoint service cannot be queried, the endpoint service is deleted.
       * - You cannot repeatedly call the **DeleteVpcEndpointService** operation to delete an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
       *
       * @param request DeleteVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcEndpointServiceResponse
       */
      Models::DeleteVpcEndpointServiceResponse deleteVpcEndpointServiceWithOptions(const Models::DeleteVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint service.
       *
       * @description - Before you delete an endpoint service, you must disconnect the endpoint from the endpoint service and remove the service resources.
       * - **DeleteVpcEndpointService** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to check whether the endpoint service is deleted.
       *   - If the endpoint service is in the **Deleting** state, the endpoint service is being deleted.
       *   - If the endpoint service cannot be queried, the endpoint service is deleted.
       * - You cannot repeatedly call the **DeleteVpcEndpointService** operation to delete an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
       *
       * @param request DeleteVpcEndpointServiceRequest
       * @return DeleteVpcEndpointServiceResponse
       */
      Models::DeleteVpcEndpointServiceResponse deleteVpcEndpointService(const Models::DeleteVpcEndpointServiceRequest &request);

      /**
       * @summary Calls the DescribeRegions operation to query the list of regions supported by PrivateLink.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeRegions operation to query the list of regions supported by PrivateLink.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the zones supported by PrivateLink in a specified region. In cross-region scenarios, the supported zones on the endpoint side and the endpoint service side are independent of each other. This operation allows you to query the supported zones for the endpoint side and the endpoint service side separately.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones supported by PrivateLink in a specified region. In cross-region scenarios, the supported zones on the endpoint side and the endpoint service side are independent of each other. This operation allows you to query the supported zones for the endpoint side and the endpoint service side separately.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Removes a service resource from an endpoint service.
       *
       * @description - Before you remove a service resource from an endpoint service, make sure that the endpoint service is in the **Active** status. Call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **DetachResourceFromVpcEndpointService** operation does not support the concurrent removal of service resources from the same endpoint service instance.
       *
       * @param request DetachResourceFromVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachResourceFromVpcEndpointServiceResponse
       */
      Models::DetachResourceFromVpcEndpointServiceResponse detachResourceFromVpcEndpointServiceWithOptions(const Models::DetachResourceFromVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a service resource from an endpoint service.
       *
       * @description - Before you remove a service resource from an endpoint service, make sure that the endpoint service is in the **Active** status. Call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **DetachResourceFromVpcEndpointService** operation does not support the concurrent removal of service resources from the same endpoint service instance.
       *
       * @param request DetachResourceFromVpcEndpointServiceRequest
       * @return DetachResourceFromVpcEndpointServiceResponse
       */
      Models::DetachResourceFromVpcEndpointServiceResponse detachResourceFromVpcEndpointService(const Models::DetachResourceFromVpcEndpointServiceRequest &request);

      /**
       * @summary Disassociates an endpoint from a security group.
       *
       * @description - **DetachSecurityGroupFromVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) to check whether the endpoint is disassociated from the security group.
       *   - If the endpoint is in the **Pending** state, the endpoint is being disassociated from the security group.
       *   - If you cannot query the endpoint in the security group, the endpoint is disassociated from the security group.
       * - You cannot repeatedly call the **DetachSecurityGroupFromVpcEndpoint** operation to disassociate an endpoint from a security group within a specified period of time.
       *
       * @param request DetachSecurityGroupFromVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachSecurityGroupFromVpcEndpointResponse
       */
      Models::DetachSecurityGroupFromVpcEndpointResponse detachSecurityGroupFromVpcEndpointWithOptions(const Models::DetachSecurityGroupFromVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an endpoint from a security group.
       *
       * @description - **DetachSecurityGroupFromVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) to check whether the endpoint is disassociated from the security group.
       *   - If the endpoint is in the **Pending** state, the endpoint is being disassociated from the security group.
       *   - If you cannot query the endpoint in the security group, the endpoint is disassociated from the security group.
       * - You cannot repeatedly call the **DetachSecurityGroupFromVpcEndpoint** operation to disassociate an endpoint from a security group within a specified period of time.
       *
       * @param request DetachSecurityGroupFromVpcEndpointRequest
       * @return DetachSecurityGroupFromVpcEndpointResponse
       */
      Models::DetachSecurityGroupFromVpcEndpointResponse detachSecurityGroupFromVpcEndpoint(const Models::DetachSecurityGroupFromVpcEndpointRequest &request);

      /**
       * @summary Rejects a connection request from an endpoint.
       *
       * @description - **DisableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
       *   - If the endpoint connection is in the **Disconnecting** state, the endpoint is being disconnected from the endpoint service.
       *   - If the endpoint connection is in the **Disconnected** state, the endpoint is disconnected from the endpoint service.
       * - You cannot repeatedly call the **DisableVpcEndpointConnection** operation to allow an endpoint service to reject a connection request from an endpoint within a specified period of time.
       *
       * @param request DisableVpcEndpointConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVpcEndpointConnectionResponse
       */
      Models::DisableVpcEndpointConnectionResponse disableVpcEndpointConnectionWithOptions(const Models::DisableVpcEndpointConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rejects a connection request from an endpoint.
       *
       * @description - **DisableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
       *   - If the endpoint connection is in the **Disconnecting** state, the endpoint is being disconnected from the endpoint service.
       *   - If the endpoint connection is in the **Disconnected** state, the endpoint is disconnected from the endpoint service.
       * - You cannot repeatedly call the **DisableVpcEndpointConnection** operation to allow an endpoint service to reject a connection request from an endpoint within a specified period of time.
       *
       * @param request DisableVpcEndpointConnectionRequest
       * @return DisableVpcEndpointConnectionResponse
       */
      Models::DisableVpcEndpointConnectionResponse disableVpcEndpointConnection(const Models::DisableVpcEndpointConnectionRequest &request);

      /**
       * @summary Closes connections in an endpoint zone.
       *
       * @description - You can call this operation only when the state of the endpoint is **Connected** and the state of the zone associated with the endpoint is **Connected** or **Migrated**.
       * - **DisableVpcEndpointZoneConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the status of the task.
       *   - If the zone is in the **Disconnecting** state, the task is running.
       *   - If the zone is in the **Disconnected** state, the task is successful.
       * - You cannot repeatedly call the **DisableVpcEndpointZoneConnection** operation to allow an endpoint service to reject a connection request from the endpoint in the zone within a specified period of time.
       *
       * @param request DisableVpcEndpointZoneConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVpcEndpointZoneConnectionResponse
       */
      Models::DisableVpcEndpointZoneConnectionResponse disableVpcEndpointZoneConnectionWithOptions(const Models::DisableVpcEndpointZoneConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes connections in an endpoint zone.
       *
       * @description - You can call this operation only when the state of the endpoint is **Connected** and the state of the zone associated with the endpoint is **Connected** or **Migrated**.
       * - **DisableVpcEndpointZoneConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the status of the task.
       *   - If the zone is in the **Disconnecting** state, the task is running.
       *   - If the zone is in the **Disconnected** state, the task is successful.
       * - You cannot repeatedly call the **DisableVpcEndpointZoneConnection** operation to allow an endpoint service to reject a connection request from the endpoint in the zone within a specified period of time.
       *
       * @param request DisableVpcEndpointZoneConnectionRequest
       * @return DisableVpcEndpointZoneConnectionResponse
       */
      Models::DisableVpcEndpointZoneConnectionResponse disableVpcEndpointZoneConnection(const Models::DisableVpcEndpointZoneConnectionRequest &request);

      /**
       * @summary Calls the EnableVpcEndpointConnection operation, and the endpoint service accepts the connection request from the endpoint.
       *
       * @description - **EnableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the endpoint service connection is not yet established, and the connection task is still being run in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the status of the endpoint service connection:
       *     - If the connection is in the **Connecting** state, the endpoint service connection is being established.
       *     - If the connection is in the **Connected** state, the endpoint service connection is established.
       * - The **EnableVpcEndpointConnection** operation does not support concurrently accepting endpoint connection requests under the same Alibaba Cloud account (primary account).
       *
       * @param request EnableVpcEndpointConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcEndpointConnectionResponse
       */
      Models::EnableVpcEndpointConnectionResponse enableVpcEndpointConnectionWithOptions(const Models::EnableVpcEndpointConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the EnableVpcEndpointConnection operation, and the endpoint service accepts the connection request from the endpoint.
       *
       * @description - **EnableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the endpoint service connection is not yet established, and the connection task is still being run in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the status of the endpoint service connection:
       *     - If the connection is in the **Connecting** state, the endpoint service connection is being established.
       *     - If the connection is in the **Connected** state, the endpoint service connection is established.
       * - The **EnableVpcEndpointConnection** operation does not support concurrently accepting endpoint connection requests under the same Alibaba Cloud account (primary account).
       *
       * @param request EnableVpcEndpointConnectionRequest
       * @return EnableVpcEndpointConnectionResponse
       */
      Models::EnableVpcEndpointConnectionResponse enableVpcEndpointConnection(const Models::EnableVpcEndpointConnectionRequest &request);

      /**
       * @summary Allows connections to endpoint zones.
       *
       * @description - You can call this operation only when the state of the endpoint is **Connected** and the state of the associated zone is **Disconnected**.
       * - **EnableVpcEndpointZoneConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the endpoint service accepts a connection request from the endpoint in the associated zone.
       *   - If the zone is in the **Connecting** state, the endpoint service is accepting the connection request from the endpoint.
       *   - If the zone is in the **Connected** state, the endpoint service has accepted the connection request from the endpoint.
       * - You cannot repeatedly call the **EnableVpcEndpointZoneConnection** operation to allow an endpoint service to accept a connection request from an endpoint in the associated zone within a specified period of time.
       *
       * @param request EnableVpcEndpointZoneConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcEndpointZoneConnectionResponse
       */
      Models::EnableVpcEndpointZoneConnectionResponse enableVpcEndpointZoneConnectionWithOptions(const Models::EnableVpcEndpointZoneConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allows connections to endpoint zones.
       *
       * @description - You can call this operation only when the state of the endpoint is **Connected** and the state of the associated zone is **Disconnected**.
       * - **EnableVpcEndpointZoneConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the endpoint service accepts a connection request from the endpoint in the associated zone.
       *   - If the zone is in the **Connecting** state, the endpoint service is accepting the connection request from the endpoint.
       *   - If the zone is in the **Connected** state, the endpoint service has accepted the connection request from the endpoint.
       * - You cannot repeatedly call the **EnableVpcEndpointZoneConnection** operation to allow an endpoint service to accept a connection request from an endpoint in the associated zone within a specified period of time.
       *
       * @param request EnableVpcEndpointZoneConnectionRequest
       * @return EnableVpcEndpointZoneConnectionResponse
       */
      Models::EnableVpcEndpointZoneConnectionResponse enableVpcEndpointZoneConnection(const Models::EnableVpcEndpointZoneConnectionRequest &request);

      /**
       * @summary Use `GetVpcEndpointAttribute` to query the attributes of a specified endpoint.
       *
       * @param request GetVpcEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcEndpointAttributeResponse
       */
      Models::GetVpcEndpointAttributeResponse getVpcEndpointAttributeWithOptions(const Models::GetVpcEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use `GetVpcEndpointAttribute` to query the attributes of a specified endpoint.
       *
       * @param request GetVpcEndpointAttributeRequest
       * @return GetVpcEndpointAttributeResponse
       */
      Models::GetVpcEndpointAttributeResponse getVpcEndpointAttribute(const Models::GetVpcEndpointAttributeRequest &request);

      /**
       * @summary Call `GetVpcEndpointServiceAttribute` to retrieve the properties of an endpoint service in your account.
       *
       * @param request GetVpcEndpointServiceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcEndpointServiceAttributeResponse
       */
      Models::GetVpcEndpointServiceAttributeResponse getVpcEndpointServiceAttributeWithOptions(const Models::GetVpcEndpointServiceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `GetVpcEndpointServiceAttribute` to retrieve the properties of an endpoint service in your account.
       *
       * @param request GetVpcEndpointServiceAttributeRequest
       * @return GetVpcEndpointServiceAttributeResponse
       */
      Models::GetVpcEndpointServiceAttributeResponse getVpcEndpointServiceAttribute(const Models::GetVpcEndpointServiceAttributeRequest &request);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @description - You must specify **ResourceId.N** or **Tag.N** in the request to specify the object that you want to query.
       * - **Tag.N** is a resource tag that consists of a key-value pair (Tag.N.Key and Tag.N.Value). If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * - If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * - If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @description - You must specify **ResourceId.N** or **Tag.N** in the request to specify the object that you want to query.
       * - **Tag.N** is a resource tag that consists of a key-value pair (Tag.N.Key and Tag.N.Value). If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * - If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * - If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries endpoint connections by calling the ListVpcEndpointConnections operation.
       *
       * @param request ListVpcEndpointConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointConnectionsResponse
       */
      Models::ListVpcEndpointConnectionsResponse listVpcEndpointConnectionsWithOptions(const Models::ListVpcEndpointConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries endpoint connections by calling the ListVpcEndpointConnections operation.
       *
       * @param request ListVpcEndpointConnectionsRequest
       * @return ListVpcEndpointConnectionsResponse
       */
      Models::ListVpcEndpointConnectionsResponse listVpcEndpointConnections(const Models::ListVpcEndpointConnectionsRequest &request);

      /**
       * @summary Queries the security group that is associated with an endpoint.
       *
       * @param request ListVpcEndpointSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointSecurityGroupsResponse
       */
      Models::ListVpcEndpointSecurityGroupsResponse listVpcEndpointSecurityGroupsWithOptions(const Models::ListVpcEndpointSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security group that is associated with an endpoint.
       *
       * @param request ListVpcEndpointSecurityGroupsRequest
       * @return ListVpcEndpointSecurityGroupsResponse
       */
      Models::ListVpcEndpointSecurityGroupsResponse listVpcEndpointSecurityGroups(const Models::ListVpcEndpointSecurityGroupsRequest &request);

      /**
       * @summary Queries the service resources that are added to an endpoint service.
       *
       * @param request ListVpcEndpointServiceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServiceResourcesResponse
       */
      Models::ListVpcEndpointServiceResourcesResponse listVpcEndpointServiceResourcesWithOptions(const Models::ListVpcEndpointServiceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service resources that are added to an endpoint service.
       *
       * @param request ListVpcEndpointServiceResourcesRequest
       * @return ListVpcEndpointServiceResourcesResponse
       */
      Models::ListVpcEndpointServiceResourcesResponse listVpcEndpointServiceResources(const Models::ListVpcEndpointServiceResourcesRequest &request);

      /**
       * @summary Queries the whitelist of an endpoint service.
       *
       * @param request ListVpcEndpointServiceUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServiceUsersResponse
       */
      Models::ListVpcEndpointServiceUsersResponse listVpcEndpointServiceUsersWithOptions(const Models::ListVpcEndpointServiceUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of an endpoint service.
       *
       * @param request ListVpcEndpointServiceUsersRequest
       * @return ListVpcEndpointServiceUsersResponse
       */
      Models::ListVpcEndpointServiceUsersResponse listVpcEndpointServiceUsers(const Models::ListVpcEndpointServiceUsersRequest &request);

      /**
       * @summary Call the ListVpcEndpointServices operation to query the endpoint services owned by your account.
       *
       * @param request ListVpcEndpointServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServicesResponse
       */
      Models::ListVpcEndpointServicesResponse listVpcEndpointServicesWithOptions(const Models::ListVpcEndpointServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListVpcEndpointServices operation to query the endpoint services owned by your account.
       *
       * @param request ListVpcEndpointServicesRequest
       * @return ListVpcEndpointServicesResponse
       */
      Models::ListVpcEndpointServicesResponse listVpcEndpointServices(const Models::ListVpcEndpointServicesRequest &request);

      /**
       * @summary Call the ListVpcEndpointServicesByEndUser operation to retrieve a list of endpoint services for which the current account is whitelisted. This list includes services that you can connect to by creating new endpoints, as well as services that are already connected to your existing ones.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUserWithOptions(const Models::ListVpcEndpointServicesByEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListVpcEndpointServicesByEndUser operation to retrieve a list of endpoint services for which the current account is whitelisted. This list includes services that you can connect to by creating new endpoints, as well as services that are already connected to your existing ones.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUser(const Models::ListVpcEndpointServicesByEndUserRequest &request);

      /**
       * @summary Call the ListVpcEndpointZones operation to query the zones of an endpoint.
       *
       * @param request ListVpcEndpointZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointZonesResponse
       */
      Models::ListVpcEndpointZonesResponse listVpcEndpointZonesWithOptions(const Models::ListVpcEndpointZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListVpcEndpointZones operation to query the zones of an endpoint.
       *
       * @param request ListVpcEndpointZonesRequest
       * @return ListVpcEndpointZonesResponse
       */
      Models::ListVpcEndpointZonesResponse listVpcEndpointZones(const Models::ListVpcEndpointZonesRequest &request);

      /**
       * @summary The `ListVpcEndpoints` operation lists endpoints.
       *
       * @param request ListVpcEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpointsWithOptions(const Models::ListVpcEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The `ListVpcEndpoints` operation lists endpoints.
       *
       * @param request ListVpcEndpointsRequest
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpoints(const Models::ListVpcEndpointsRequest &request);

      /**
       * @summary Activates PrivateLink.
       *
       * @param request OpenPrivateLinkServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPrivateLinkServiceResponse
       */
      Models::OpenPrivateLinkServiceResponse openPrivateLinkServiceWithOptions(const Models::OpenPrivateLinkServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates PrivateLink.
       *
       * @param request OpenPrivateLinkServiceRequest
       * @return OpenPrivateLinkServiceResponse
       */
      Models::OpenPrivateLinkServiceResponse openPrivateLinkService(const Models::OpenPrivateLinkServiceRequest &request);

      /**
       * @summary Removes an account ID from the whitelist of an endpoint service.
       *
       * @description - Before you remove an account ID from the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - You cannot repeatedly call the **RemoveUserFromVpcEndpointService** operation to remove the ID of an Alibaba Cloud account from the whitelist of an endpoint service within a specified period of time.
       *
       * @param request RemoveUserFromVpcEndpointServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromVpcEndpointServiceResponse
       */
      Models::RemoveUserFromVpcEndpointServiceResponse removeUserFromVpcEndpointServiceWithOptions(const Models::RemoveUserFromVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an account ID from the whitelist of an endpoint service.
       *
       * @description - Before you remove an account ID from the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - You cannot repeatedly call the **RemoveUserFromVpcEndpointService** operation to remove the ID of an Alibaba Cloud account from the whitelist of an endpoint service within a specified period of time.
       *
       * @param request RemoveUserFromVpcEndpointServiceRequest
       * @return RemoveUserFromVpcEndpointServiceResponse
       */
      Models::RemoveUserFromVpcEndpointServiceResponse removeUserFromVpcEndpointService(const Models::RemoveUserFromVpcEndpointServiceRequest &request);

      /**
       * @summary Deletes a zone of an endpoint.
       *
       * @description - **RemoveZoneFromVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the zone of the endpoint is deleted.
       *   - If the zone of the endpoint is in the **Deleting** state, the zone is being deleted.
       *   - If the zone cannot be queried, the zone is deleted.
       * - You cannot repeatedly call the **RemoveZoneFromVpcEndpoint** operation to delete a zone of an endpoint within a specified period of time.
       *
       * @param request RemoveZoneFromVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveZoneFromVpcEndpointResponse
       */
      Models::RemoveZoneFromVpcEndpointResponse removeZoneFromVpcEndpointWithOptions(const Models::RemoveZoneFromVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a zone of an endpoint.
       *
       * @description - **RemoveZoneFromVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the zone of the endpoint is deleted.
       *   - If the zone of the endpoint is in the **Deleting** state, the zone is being deleted.
       *   - If the zone cannot be queried, the zone is deleted.
       * - You cannot repeatedly call the **RemoveZoneFromVpcEndpoint** operation to delete a zone of an endpoint within a specified period of time.
       *
       * @param request RemoveZoneFromVpcEndpointRequest
       * @return RemoveZoneFromVpcEndpointResponse
       */
      Models::RemoveZoneFromVpcEndpointResponse removeZoneFromVpcEndpoint(const Models::RemoveZoneFromVpcEndpointRequest &request);

      /**
       * @summary Adds tags to resources. You can call this API operation to add tags to one or more endpoints or endpoint services.
       *
       * @description > You can add up to 20 tags to an instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources. You can call this API operation to add tags to one or more endpoints or endpoint services.
       *
       * @description > You can add up to 20 tags to an instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from one or more endpoints or endpoint services at a time.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from one or more endpoints or endpoint services at a time.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary The `UpdateVpcEndpointAttribute` operation modifies the properties of an endpoint.
       *
       * @description The **UpdateVpcEndpointAttribute** operation cannot be called concurrently to modify endpoint properties for the same Alibaba Cloud main account.
       *
       * @param request UpdateVpcEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcEndpointAttributeResponse
       */
      Models::UpdateVpcEndpointAttributeResponse updateVpcEndpointAttributeWithOptions(const Models::UpdateVpcEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The `UpdateVpcEndpointAttribute` operation modifies the properties of an endpoint.
       *
       * @description The **UpdateVpcEndpointAttribute** operation cannot be called concurrently to modify endpoint properties for the same Alibaba Cloud main account.
       *
       * @param request UpdateVpcEndpointAttributeRequest
       * @return UpdateVpcEndpointAttributeResponse
       */
      Models::UpdateVpcEndpointAttributeResponse updateVpcEndpointAttribute(const Models::UpdateVpcEndpointAttributeRequest &request);

      /**
       * @summary Calls the UpdateVpcEndpointConnectionAttribute operation to modify the attributes of an endpoint connection.
       *
       * @description The **UpdateVpcEndpointConnectionAttribute** operation does not support concurrent modifications of the endpoint connection bandwidth within the same Alibaba Cloud account (primary account).
       *
       * @param request UpdateVpcEndpointConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcEndpointConnectionAttributeResponse
       */
      Models::UpdateVpcEndpointConnectionAttributeResponse updateVpcEndpointConnectionAttributeWithOptions(const Models::UpdateVpcEndpointConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateVpcEndpointConnectionAttribute operation to modify the attributes of an endpoint connection.
       *
       * @description The **UpdateVpcEndpointConnectionAttribute** operation does not support concurrent modifications of the endpoint connection bandwidth within the same Alibaba Cloud account (primary account).
       *
       * @param request UpdateVpcEndpointConnectionAttributeRequest
       * @return UpdateVpcEndpointConnectionAttributeResponse
       */
      Models::UpdateVpcEndpointConnectionAttributeResponse updateVpcEndpointConnectionAttribute(const Models::UpdateVpcEndpointConnectionAttributeRequest &request);

      /**
       * @summary The UpdateVpcEndpointServiceAttribute operation modifies the attributes of an endpoint service.
       *
       * @description - Before you modify the attributes of an endpoint service, ensure that the service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check the status of the endpoint service.
       * - The **UpdateVpcEndpointServiceAttribute** operation does not support concurrent modifications to the attributes of an endpoint service within the same Alibaba Cloud account (root user).
       *
       * @param request UpdateVpcEndpointServiceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcEndpointServiceAttributeResponse
       */
      Models::UpdateVpcEndpointServiceAttributeResponse updateVpcEndpointServiceAttributeWithOptions(const Models::UpdateVpcEndpointServiceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpdateVpcEndpointServiceAttribute operation modifies the attributes of an endpoint service.
       *
       * @description - Before you modify the attributes of an endpoint service, ensure that the service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check the status of the endpoint service.
       * - The **UpdateVpcEndpointServiceAttribute** operation does not support concurrent modifications to the attributes of an endpoint service within the same Alibaba Cloud account (root user).
       *
       * @param request UpdateVpcEndpointServiceAttributeRequest
       * @return UpdateVpcEndpointServiceAttributeResponse
       */
      Models::UpdateVpcEndpointServiceAttributeResponse updateVpcEndpointServiceAttribute(const Models::UpdateVpcEndpointServiceAttributeRequest &request);

      /**
       * @summary The UpdateVpcEndpointServiceResourceAttribute operation enables or disables automatic allocation for a service resource of an endpoint service.
       *
       * @description - Before you modify the properties of a service resource, ensure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **UpdateVpcEndpointServiceResourceAttribute** operation does not support concurrent modifications to the properties of service resources that belong to the same endpoint service.
       *
       * @param request UpdateVpcEndpointServiceResourceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcEndpointServiceResourceAttributeResponse
       */
      Models::UpdateVpcEndpointServiceResourceAttributeResponse updateVpcEndpointServiceResourceAttributeWithOptions(const Models::UpdateVpcEndpointServiceResourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpdateVpcEndpointServiceResourceAttribute operation enables or disables automatic allocation for a service resource of an endpoint service.
       *
       * @description - Before you modify the properties of a service resource, ensure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
       * - The **UpdateVpcEndpointServiceResourceAttribute** operation does not support concurrent modifications to the properties of service resources that belong to the same endpoint service.
       *
       * @param request UpdateVpcEndpointServiceResourceAttributeRequest
       * @return UpdateVpcEndpointServiceResourceAttributeResponse
       */
      Models::UpdateVpcEndpointServiceResourceAttributeResponse updateVpcEndpointServiceResourceAttribute(const Models::UpdateVpcEndpointServiceResourceAttributeRequest &request);

      /**
       * @summary Modifies a service resource of a zone to which an endpoint connection belongs.
       *
       * @description ### Prerequisites
       * By default, the feature of modifying a service resource of a zone to which an endpoint connection belongs is unavailable. To use this feature, log on to the [Quota Center console](https://quotas.console.aliyun.com/white-list-products/privatelink/quotas). Click Whitelist Quotas in the left-side navigation pane and click PrivateLink in the Networking section. On the page that appears, search for `privatelink_whitelist/svc_res_mgt_uat` and click Apply in the Actions column.
       * ### Usage notes
       * - If the endpoint connection is in the **Disconnected** state, you can manually allocate the service resource in the zone.
       * - If the endpoint connection is in the **Connected** state, you can manually migrate the service resource in the zone. In this case, the connection might be interrupted.
       * - **UpdateVpcEndpointZoneConnectionResourceAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check whether the service resource is modified.
       *   - If the endpoint service is in the **Pending** state, the service resource is being modified.
       *   - If the endpoint service is in the **Active** state, the service resource is modified.
       * - You cannot repeatedly call the **UpdateVpcEndpointZoneConnectionResourceAttribute** operation to modify a service resource in the zone to which an endpoint connection belongs within a specified period of time.
       *
       * @param request UpdateVpcEndpointZoneConnectionResourceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcEndpointZoneConnectionResourceAttributeResponse
       */
      Models::UpdateVpcEndpointZoneConnectionResourceAttributeResponse updateVpcEndpointZoneConnectionResourceAttributeWithOptions(const Models::UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a service resource of a zone to which an endpoint connection belongs.
       *
       * @description ### Prerequisites
       * By default, the feature of modifying a service resource of a zone to which an endpoint connection belongs is unavailable. To use this feature, log on to the [Quota Center console](https://quotas.console.aliyun.com/white-list-products/privatelink/quotas). Click Whitelist Quotas in the left-side navigation pane and click PrivateLink in the Networking section. On the page that appears, search for `privatelink_whitelist/svc_res_mgt_uat` and click Apply in the Actions column.
       * ### Usage notes
       * - If the endpoint connection is in the **Disconnected** state, you can manually allocate the service resource in the zone.
       * - If the endpoint connection is in the **Connected** state, you can manually migrate the service resource in the zone. In this case, the connection might be interrupted.
       * - **UpdateVpcEndpointZoneConnectionResourceAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check whether the service resource is modified.
       *   - If the endpoint service is in the **Pending** state, the service resource is being modified.
       *   - If the endpoint service is in the **Active** state, the service resource is modified.
       * - You cannot repeatedly call the **UpdateVpcEndpointZoneConnectionResourceAttribute** operation to modify a service resource in the zone to which an endpoint connection belongs within a specified period of time.
       *
       * @param request UpdateVpcEndpointZoneConnectionResourceAttributeRequest
       * @return UpdateVpcEndpointZoneConnectionResourceAttributeResponse
       */
      Models::UpdateVpcEndpointZoneConnectionResourceAttributeResponse updateVpcEndpointZoneConnectionResourceAttribute(const Models::UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
