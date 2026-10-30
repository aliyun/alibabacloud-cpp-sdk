// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VPCPEER20220101_HPP_
#define ALIBABACLOUD_VPCPEER20220101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/VpcPeer20220101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/VpcPeer20220101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Accepts a VPC peering connection request.
       *
       * @description - For a cross-account VPC peering connection, the VPC peering connection instance is activated only after the acceptor accepts the connection request.
       * - The **AcceptVpcPeerConnection** operation is asynchronous. After you call this operation, the system returns a **RequestId**, but the VPC peering connection instance is not immediately activated. The activation task is still running in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) to query the status of the VPC peering connection instance.
       *     - If the VPC peering connection instance is in the **Updating** state, the instance is being activated.
       *     - If the VPC peering connection instance is in the **Activated** state, the instance is activated.
       * - You cannot call the **AcceptVpcPeerConnection** operation to concurrently accept requests for the same VPC peering connection instance.
       *
       * @param request AcceptVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptVpcPeerConnectionResponse
       */
      Models::AcceptVpcPeerConnectionResponse acceptVpcPeerConnectionWithOptions(const Models::AcceptVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts a VPC peering connection request.
       *
       * @description - For a cross-account VPC peering connection, the VPC peering connection instance is activated only after the acceptor accepts the connection request.
       * - The **AcceptVpcPeerConnection** operation is asynchronous. After you call this operation, the system returns a **RequestId**, but the VPC peering connection instance is not immediately activated. The activation task is still running in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) to query the status of the VPC peering connection instance.
       *     - If the VPC peering connection instance is in the **Updating** state, the instance is being activated.
       *     - If the VPC peering connection instance is in the **Activated** state, the instance is activated.
       * - You cannot call the **AcceptVpcPeerConnection** operation to concurrently accept requests for the same VPC peering connection instance.
       *
       * @param request AcceptVpcPeerConnectionRequest
       * @return AcceptVpcPeerConnectionResponse
       */
      Models::AcceptVpcPeerConnectionResponse acceptVpcPeerConnection(const Models::AcceptVpcPeerConnectionRequest &request);

      /**
       * @summary Invokes the CreateVpcPeerConnection operation to create a VPC peering connection.
       *
       * @description Before you create a VPC peering connection, take note of the following items:
       * - **CreateVpcPeerConnection** is an asynchronous operation. After you call this operation, the system returns an **InstanceId**, but the VPC peering connection is not created yet and the creation task is still running in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426095.html) to query the status of the VPC peering connection.
       *     - If the VPC peering connection is in the **Creating** state, the VPC peering connection is being created.    
       *     - If the VPC peering connection is in the **Activated** state, the VPC peering connection is created.
       *     - If the VPC peering connection is in the **Accepting** state, the VPC peering connection is created across accounts and must be accepted by the acceptor.
       * - You cannot call the **CreateVpcPeerConnection** operation to concurrently create VPC peering connections in the same VPC.
       * <props="china">When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for non-cross-border data transfer and cross-border data transfer.
       * <props="intl">When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for non-cross-border data transfer.
       *
       * @param request CreateVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcPeerConnectionResponse
       */
      Models::CreateVpcPeerConnectionResponse createVpcPeerConnectionWithOptions(const Models::CreateVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateVpcPeerConnection operation to create a VPC peering connection.
       *
       * @description Before you create a VPC peering connection, take note of the following items:
       * - **CreateVpcPeerConnection** is an asynchronous operation. After you call this operation, the system returns an **InstanceId**, but the VPC peering connection is not created yet and the creation task is still running in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426095.html) to query the status of the VPC peering connection.
       *     - If the VPC peering connection is in the **Creating** state, the VPC peering connection is being created.    
       *     - If the VPC peering connection is in the **Activated** state, the VPC peering connection is created.
       *     - If the VPC peering connection is in the **Accepting** state, the VPC peering connection is created across accounts and must be accepted by the acceptor.
       * - You cannot call the **CreateVpcPeerConnection** operation to concurrently create VPC peering connections in the same VPC.
       * <props="china">When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for non-cross-border data transfer and cross-border data transfer.
       * <props="intl">When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for non-cross-border data transfer.
       *
       * @param request CreateVpcPeerConnectionRequest
       * @return CreateVpcPeerConnectionResponse
       */
      Models::CreateVpcPeerConnectionResponse createVpcPeerConnection(const Models::CreateVpcPeerConnectionRequest &request);

      /**
       * @summary Deletes a VPC peering connection instance.
       *
       * @description - You can delete a VPC peering connection instance. After the instance is deleted, your services will be interrupted. Perform this operation only when it does not affect your services.
       *     - If you choose to force delete the instance, the system deletes the route entry that points to the VPC peering connection instance from the VPC routing table.
       *     - If you do not choose to force delete the instance, the system does not delete the route entry that points to the VPC peering connection instance from the VPC routing table. You must manually delete the route entry.
       * - The **DeleteVpcPeerConnection** operation is asynchronous. After you call the operation, the system returns a **RequestId**, but the VPC peering connection instance is not immediately deleted. The deletion task is still running in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/2523294.html) operation to query the status of the VPC peering connection instance.
       *     - If the VPC peering connection instance is in the **Deleting** state, the instance is being deleted.
       *     - If the VPC peering connection instance is in the **Deleted** state, the instance is deleted.
       * - You cannot call the **DeleteVpcPeerConnection** operation to concurrently delete the same VPC peering connection instance.
       *
       * @param request DeleteVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcPeerConnectionResponse
       */
      Models::DeleteVpcPeerConnectionResponse deleteVpcPeerConnectionWithOptions(const Models::DeleteVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPC peering connection instance.
       *
       * @description - You can delete a VPC peering connection instance. After the instance is deleted, your services will be interrupted. Perform this operation only when it does not affect your services.
       *     - If you choose to force delete the instance, the system deletes the route entry that points to the VPC peering connection instance from the VPC routing table.
       *     - If you do not choose to force delete the instance, the system does not delete the route entry that points to the VPC peering connection instance from the VPC routing table. You must manually delete the route entry.
       * - The **DeleteVpcPeerConnection** operation is asynchronous. After you call the operation, the system returns a **RequestId**, but the VPC peering connection instance is not immediately deleted. The deletion task is still running in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/2523294.html) operation to query the status of the VPC peering connection instance.
       *     - If the VPC peering connection instance is in the **Deleting** state, the instance is being deleted.
       *     - If the VPC peering connection instance is in the **Deleted** state, the instance is deleted.
       * - You cannot call the **DeleteVpcPeerConnection** operation to concurrently delete the same VPC peering connection instance.
       *
       * @param request DeleteVpcPeerConnectionRequest
       * @return DeleteVpcPeerConnectionResponse
       */
      Models::DeleteVpcPeerConnectionResponse deleteVpcPeerConnection(const Models::DeleteVpcPeerConnectionRequest &request);

      /**
       * @summary Queries the details of a specified VPC peering connection.
       *
       * @param request GetVpcPeerConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPeerConnectionAttributeResponse
       */
      Models::GetVpcPeerConnectionAttributeResponse getVpcPeerConnectionAttributeWithOptions(const Models::GetVpcPeerConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified VPC peering connection.
       *
       * @param request GetVpcPeerConnectionAttributeRequest
       * @return GetVpcPeerConnectionAttributeResponse
       */
      Models::GetVpcPeerConnectionAttributeResponse getVpcPeerConnectionAttribute(const Models::GetVpcPeerConnectionAttributeRequest &request);

      /**
       * @summary Queries the tags bound to VPC peering connections.
       *
       * @description - Specify at least one of the **ResourceId.N** and **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) parameters in the request to determine the resources to query.
       * - **Tag.N** is the tag of the resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is reported.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, the **ResourceId.N** parameter must match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned resources contain all the specified key-value pairs.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to VPC peering connections.
       *
       * @description - Specify at least one of the **ResourceId.N** and **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) parameters in the request to determine the resources to query.
       * - **Tag.N** is the tag of the resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is reported.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, the **ResourceId.N** parameter must match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned resources contain all the specified key-value pairs.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the details of VPC peering connections.
       *
       * @param tmpReq ListVpcPeerConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcPeerConnectionsResponse
       */
      Models::ListVpcPeerConnectionsResponse listVpcPeerConnectionsWithOptions(const Models::ListVpcPeerConnectionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of VPC peering connections.
       *
       * @param request ListVpcPeerConnectionsRequest
       * @return ListVpcPeerConnectionsResponse
       */
      Models::ListVpcPeerConnectionsResponse listVpcPeerConnections(const Models::ListVpcPeerConnectionsRequest &request);

      /**
       * @summary Modifies the name or description of a VPC peering connection.
       *
       * @description - **ModifyVpcPeerConnection** is an asynchronous operation. The system returns a **RequestId**, but the VPC peering connection is not immediately modified. The modification task continues in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) to query the status of the VPC peering connection.
       *     - If the VPC peering connection is in the **Updating** state, it is being modified.
       *     - If the VPC peering connection is in the **Activated** state, the modification is complete.
       * - **ModifyVpcPeerConnection** does not support concurrent modifications to the name and description of the same VPC peering connection.
       *
       * @param request ModifyVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcPeerConnectionResponse
       */
      Models::ModifyVpcPeerConnectionResponse modifyVpcPeerConnectionWithOptions(const Models::ModifyVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a VPC peering connection.
       *
       * @description - **ModifyVpcPeerConnection** is an asynchronous operation. The system returns a **RequestId**, but the VPC peering connection is not immediately modified. The modification task continues in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) to query the status of the VPC peering connection.
       *     - If the VPC peering connection is in the **Updating** state, it is being modified.
       *     - If the VPC peering connection is in the **Activated** state, the modification is complete.
       * - **ModifyVpcPeerConnection** does not support concurrent modifications to the name and description of the same VPC peering connection.
       *
       * @param request ModifyVpcPeerConnectionRequest
       * @return ModifyVpcPeerConnectionResponse
       */
      Models::ModifyVpcPeerConnectionResponse modifyVpcPeerConnection(const Models::ModifyVpcPeerConnectionRequest &request);

      /**
       * @summary Modifies the resource group of a VPC peering connection.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group of a VPC peering connection.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Rejects a request for a VPC peering connection.
       *
       * @description - For a cross-account VPC peering connection instance, the acceptor can reject the connection request. A VPC peering connection instance whose connection request is rejected enters the **Rejected** state.
       * - **RejectVpcPeerConnection** does not support concurrent requests to reject the same peering connection instance.
       *
       * @param request RejectVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectVpcPeerConnectionResponse
       */
      Models::RejectVpcPeerConnectionResponse rejectVpcPeerConnectionWithOptions(const Models::RejectVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rejects a request for a VPC peering connection.
       *
       * @description - For a cross-account VPC peering connection instance, the acceptor can reject the connection request. A VPC peering connection instance whose connection request is rejected enters the **Rejected** state.
       * - **RejectVpcPeerConnection** does not support concurrent requests to reject the same peering connection instance.
       *
       * @param request RejectVpcPeerConnectionRequest
       * @return RejectVpcPeerConnectionResponse
       */
      Models::RejectVpcPeerConnectionResponse rejectVpcPeerConnection(const Models::RejectVpcPeerConnectionRequest &request);

      /**
       * @summary Creates and attaches tags to one or more specified VPC peering connections.
       *
       * @description Tags are labels that you assign to instances. Instance tag consists of a key-value pair. Take note of the following limits on tags: 
       * - The key of instance tag on an instance must be unique.
       * - Tags must be attached to instances. Unattached tags are not supported.
       * - Tag information is not shared across regions. 
       *     For example, tags created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - Within the same account and region, tag information is shared across different VPC peering connections. 
       *        For example, if a tag is attached to a VPC peering connection within the same account and region, you can directly select and attach this tag to other VPC peering connections on the Edit Tags page without manually entering the key-value pair. You can modify the key and value of a tag, or delete the tag from an instance at any time. If an instance is deleted, all tags attached to the instance are also deleted.
       * - You can attach up to 20 tags to a single instance. Before attaching tags, Alibaba Cloud verifies the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to one or more specified VPC peering connections.
       *
       * @description Tags are labels that you assign to instances. Instance tag consists of a key-value pair. Take note of the following limits on tags: 
       * - The key of instance tag on an instance must be unique.
       * - Tags must be attached to instances. Unattached tags are not supported.
       * - Tag information is not shared across regions. 
       *     For example, tags created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - Within the same account and region, tag information is shared across different VPC peering connections. 
       *        For example, if a tag is attached to a VPC peering connection within the same account and region, you can directly select and attach this tag to other VPC peering connections on the Edit Tags page without manually entering the key-value pair. You can modify the key and value of a tag, or delete the tag from an instance at any time. If an instance is deleted, all tags attached to the instance are also deleted.
       * - You can attach up to 20 tags to a single instance. Before attaching tags, Alibaba Cloud verifies the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from specified VPC peering connections.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified VPC peering connections.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
