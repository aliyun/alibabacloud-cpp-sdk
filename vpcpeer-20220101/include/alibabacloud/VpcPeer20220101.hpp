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
       * @summary Accepts a virtual private cloud (VPC) peering connection request.
       *
       * @description *   For a cross-account VPC peering connection, the connection is activated only after the accepter VPC accepts the connection request.
       * *   **AcceptVpcPeerConnection** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the operation in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of the task.
       *     *   If a VPC peering connection is in the **Updating** state, the VPC peering connection is being activated.
       *     *   If a VPC peering connection is in the **Activated** state, the VPC peering connection is activated.
       * *   You cannot repeatedly call the **AcceptVpcPeerConnection** operation within a specific period of time.
       *
       * @param request AcceptVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptVpcPeerConnectionResponse
       */
      Models::AcceptVpcPeerConnectionResponse acceptVpcPeerConnectionWithOptions(const Models::AcceptVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts a virtual private cloud (VPC) peering connection request.
       *
       * @description *   For a cross-account VPC peering connection, the connection is activated only after the accepter VPC accepts the connection request.
       * *   **AcceptVpcPeerConnection** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the operation in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of the task.
       *     *   If a VPC peering connection is in the **Updating** state, the VPC peering connection is being activated.
       *     *   If a VPC peering connection is in the **Activated** state, the VPC peering connection is activated.
       * *   You cannot repeatedly call the **AcceptVpcPeerConnection** operation within a specific period of time.
       *
       * @param request AcceptVpcPeerConnectionRequest
       * @return AcceptVpcPeerConnectionResponse
       */
      Models::AcceptVpcPeerConnectionResponse acceptVpcPeerConnection(const Models::AcceptVpcPeerConnectionRequest &request);

      /**
       * @summary Creates a VPC peering connection
       *
       * @description Before you create a VPC peering connection, take note of the following items:
       * *   **CreateVpcPeerConnection** is an asynchronous operation. After a request is sent, the system returns an **instance ID** and runs the task in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426095.html) to query the status of the task.
       *     *   If the VPC peering connection is in the **Creating** state, the VPC peering connection is being created.
       *     *   If the VPC peering connection is in the **Activated** state, the VPC peering connection is created.
       *     *   If the VPC peering connection is in the **Accepting** state, it is a cross-account connection. The connection needs to be accepted on the accepter side.
       * *   You cannot repeatedly call **CreateVpcPeerConnection** within the specified period of time.
       * When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for you.
       *
       * @param request CreateVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcPeerConnectionResponse
       */
      Models::CreateVpcPeerConnectionResponse createVpcPeerConnectionWithOptions(const Models::CreateVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC peering connection
       *
       * @description Before you create a VPC peering connection, take note of the following items:
       * *   **CreateVpcPeerConnection** is an asynchronous operation. After a request is sent, the system returns an **instance ID** and runs the task in the background. You can call [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426095.html) to query the status of the task.
       *     *   If the VPC peering connection is in the **Creating** state, the VPC peering connection is being created.
       *     *   If the VPC peering connection is in the **Activated** state, the VPC peering connection is created.
       *     *   If the VPC peering connection is in the **Accepting** state, it is a cross-account connection. The connection needs to be accepted on the accepter side.
       * *   You cannot repeatedly call **CreateVpcPeerConnection** within the specified period of time.
       * When you create a VPC peering connection, the system automatically activates Cloud Data Transfer (CDT) for you.
       *
       * @param request CreateVpcPeerConnectionRequest
       * @return CreateVpcPeerConnectionResponse
       */
      Models::CreateVpcPeerConnectionResponse createVpcPeerConnection(const Models::CreateVpcPeerConnectionRequest &request);

      /**
       * @summary 删除VPC对等连接
       *
       * @description *   You can delete VPC peering connections. After you delete a VPC peering connection, your service is affected. Proceed with caution.
       *     *   If you forcefully delete a VPC peering connection, the system deletes the routes that point to the VPC peering connection from the VPC route table.
       *     *   If you do not forcefully delete a VPC peering connection, the system does not delete these routes. You must manually delete them.
       * *   The **DeleteVpcPeerConnection** operation is asynchronous. After you send a request, the system returns **RequestId**, but the operation is still being performed in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of a VPC peering connection.
       *     *   If a VPC peering connection is in the **Deleting** state, it is being deleted.
       *     *   If a VPC peering connection is in the **Deleted** state, it is deleted.
       * *   You cannot repeatedly call the **DeleteVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request DeleteVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcPeerConnectionResponse
       */
      Models::DeleteVpcPeerConnectionResponse deleteVpcPeerConnectionWithOptions(const Models::DeleteVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除VPC对等连接
       *
       * @description *   You can delete VPC peering connections. After you delete a VPC peering connection, your service is affected. Proceed with caution.
       *     *   If you forcefully delete a VPC peering connection, the system deletes the routes that point to the VPC peering connection from the VPC route table.
       *     *   If you do not forcefully delete a VPC peering connection, the system does not delete these routes. You must manually delete them.
       * *   The **DeleteVpcPeerConnection** operation is asynchronous. After you send a request, the system returns **RequestId**, but the operation is still being performed in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of a VPC peering connection.
       *     *   If a VPC peering connection is in the **Deleting** state, it is being deleted.
       *     *   If a VPC peering connection is in the **Deleted** state, it is deleted.
       * *   You cannot repeatedly call the **DeleteVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request DeleteVpcPeerConnectionRequest
       * @return DeleteVpcPeerConnectionResponse
       */
      Models::DeleteVpcPeerConnectionResponse deleteVpcPeerConnection(const Models::DeleteVpcPeerConnectionRequest &request);

      /**
       * @summary Queries the details of a virtual private cloud (VPC) peering connection.
       *
       * @param request GetVpcPeerConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPeerConnectionAttributeResponse
       */
      Models::GetVpcPeerConnectionAttributeResponse getVpcPeerConnectionAttributeWithOptions(const Models::GetVpcPeerConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a virtual private cloud (VPC) peering connection.
       *
       * @param request GetVpcPeerConnectionAttributeRequest
       * @return GetVpcPeerConnectionAttributeResponse
       */
      Models::GetVpcPeerConnectionAttributeResponse getVpcPeerConnectionAttribute(const Models::GetVpcPeerConnectionAttributeRequest &request);

      /**
       * @summary Queries tags that are added to Virtual Private Cloud (VPC) peering connections.
       *
       * @description *   Set **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object to be queried.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you set only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you set only **Tag.N.Value**, an error message is returned.
       * *   If you set **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags that are added to Virtual Private Cloud (VPC) peering connections.
       *
       * @description *   Set **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object to be queried.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you set only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you set only **Tag.N.Value**, an error message is returned.
       * *   If you set **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries virtual private cloud (VPC) peering connections.
       *
       * @param tmpReq ListVpcPeerConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcPeerConnectionsResponse
       */
      Models::ListVpcPeerConnectionsResponse listVpcPeerConnectionsWithOptions(const Models::ListVpcPeerConnectionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual private cloud (VPC) peering connections.
       *
       * @param request ListVpcPeerConnectionsRequest
       * @return ListVpcPeerConnectionsResponse
       */
      Models::ListVpcPeerConnectionsResponse listVpcPeerConnections(const Models::ListVpcPeerConnectionsRequest &request);

      /**
       * @summary Modifies the description or name of a virtual private cloud (VPC) peering connection.
       *
       * @description *   The **ModifyVpcPeerConnection** operation is asynchronous. After you send a request, the system returns **RequestId**, but the operation is still being performed in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of a VPC peering connection.
       *     *   If a VPC peering connection is in the **Updating** state, the VPC peering connection is being modified.
       *     *   If a VPC peering connection is in the **Activated** state, the VPC peering connection is modified.
       * *   You cannot repeatedly call the **ModifyVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request ModifyVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcPeerConnectionResponse
       */
      Models::ModifyVpcPeerConnectionResponse modifyVpcPeerConnectionWithOptions(const Models::ModifyVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description or name of a virtual private cloud (VPC) peering connection.
       *
       * @description *   The **ModifyVpcPeerConnection** operation is asynchronous. After you send a request, the system returns **RequestId**, but the operation is still being performed in the background. You can call the [GetVpcPeerConnectionAttribute](https://help.aliyun.com/document_detail/426100.html) operation to query the status of a VPC peering connection.
       *     *   If a VPC peering connection is in the **Updating** state, the VPC peering connection is being modified.
       *     *   If a VPC peering connection is in the **Activated** state, the VPC peering connection is modified.
       * *   You cannot repeatedly call the **ModifyVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request ModifyVpcPeerConnectionRequest
       * @return ModifyVpcPeerConnectionResponse
       */
      Models::ModifyVpcPeerConnectionResponse modifyVpcPeerConnection(const Models::ModifyVpcPeerConnectionRequest &request);

      /**
       * @summary Moves a Virtual Private Cloud (VPC) peering connection from one resource group to another.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a Virtual Private Cloud (VPC) peering connection from one resource group to another.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary 拒绝VPC对等连接
       *
       * @description *   An acceptor VPC can reject a connection request from the requester VPC of a cross-account VPC peering connection. After the connection request is rejected, the VPC peering connection enters the **Rejected** state.
       * *   You cannot repeatedly call the **RejectVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request RejectVpcPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectVpcPeerConnectionResponse
       */
      Models::RejectVpcPeerConnectionResponse rejectVpcPeerConnectionWithOptions(const Models::RejectVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拒绝VPC对等连接
       *
       * @description *   An acceptor VPC can reject a connection request from the requester VPC of a cross-account VPC peering connection. After the connection request is rejected, the VPC peering connection enters the **Rejected** state.
       * *   You cannot repeatedly call the **RejectVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
       *
       * @param request RejectVpcPeerConnectionRequest
       * @return RejectVpcPeerConnectionResponse
       */
      Models::RejectVpcPeerConnectionResponse rejectVpcPeerConnection(const Models::RejectVpcPeerConnectionRequest &request);

      /**
       * @summary Creates tags and adds them to a virtual private cloud (VPC) peering connection.
       *
       * @description Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following limits:
       * *   The keys of tags that are added to the same instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   For the same account and region, tags added to different VPC peering connections are shared.
       *     For example, if a tag is added to a VPC peering connection, the tag can also be added to other VPC peering connections within the same account and region. You can modify the key and the value of a tag or remove a tag from an instance. After you delete an instance, all tags that are added to the instance are deleted.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds them to a virtual private cloud (VPC) peering connection.
       *
       * @description Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following limits:
       * *   The keys of tags that are added to the same instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   For the same account and region, tags added to different VPC peering connections are shared.
       *     For example, if a tag is added to a VPC peering connection, the tag can also be added to other VPC peering connections within the same account and region. You can modify the key and the value of a tag or remove a tag from an instance. After you delete an instance, all tags that are added to the instance are deleted.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from specified Virtual Private Cloud (VPC) peering connections.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified Virtual Private Cloud (VPC) peering connections.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
