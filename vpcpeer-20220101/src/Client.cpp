#include <darabonba/Core.hpp>
#include <alibabacloud/VpcPeer20220101.hpp>
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
using namespace AlibabaCloud::VpcPeer20220101::Models;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{

AlibabaCloud::VpcPeer20220101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("vpcpeer", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
AcceptVpcPeerConnectionResponse Client::acceptVpcPeerConnectionWithOptions(const AcceptVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AcceptVpcPeerConnection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptVpcPeerConnectionResponse>();
}

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
AcceptVpcPeerConnectionResponse Client::acceptVpcPeerConnection(const AcceptVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptVpcPeerConnectionWithOptions(request, runtime);
}

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
CreateVpcPeerConnectionResponse Client::createVpcPeerConnectionWithOptions(const CreateVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLinkType()) {
    query["LinkType"] = request.linkType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasAcceptingAliUid()) {
    body["AcceptingAliUid"] = request.acceptingAliUid();
  }

  if (!!request.hasAcceptingRegionId()) {
    body["AcceptingRegionId"] = request.acceptingRegionId();
  }

  if (!!request.hasAcceptingVpcId()) {
    body["AcceptingVpcId"] = request.acceptingVpcId();
  }

  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVpcPeerConnection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcPeerConnectionResponse>();
}

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
CreateVpcPeerConnectionResponse Client::createVpcPeerConnection(const CreateVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcPeerConnectionWithOptions(request, runtime);
}

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
DeleteVpcPeerConnectionResponse Client::deleteVpcPeerConnectionWithOptions(const DeleteVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVpcPeerConnection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcPeerConnectionResponse>();
}

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
DeleteVpcPeerConnectionResponse Client::deleteVpcPeerConnection(const DeleteVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcPeerConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a virtual private cloud (VPC) peering connection.
 *
 * @param request GetVpcPeerConnectionAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcPeerConnectionAttributeResponse
 */
GetVpcPeerConnectionAttributeResponse Client::getVpcPeerConnectionAttributeWithOptions(const GetVpcPeerConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVpcPeerConnectionAttribute"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpcPeerConnectionAttributeResponse>();
}

/**
 * @summary Queries the details of a virtual private cloud (VPC) peering connection.
 *
 * @param request GetVpcPeerConnectionAttributeRequest
 * @return GetVpcPeerConnectionAttributeResponse
 */
GetVpcPeerConnectionAttributeResponse Client::getVpcPeerConnectionAttribute(const GetVpcPeerConnectionAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcPeerConnectionAttributeWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

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
    {"version" , "2022-01-01"},
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
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries virtual private cloud (VPC) peering connections.
 *
 * @param tmpReq ListVpcPeerConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcPeerConnectionsResponse
 */
ListVpcPeerConnectionsResponse Client::listVpcPeerConnectionsWithOptions(const ListVpcPeerConnectionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListVpcPeerConnectionsShrinkRequest request = ListVpcPeerConnectionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVpcId()) {
    request.setVpcIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vpcId(), "VpcId", "simple"));
  }

  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcIdShrink()) {
    body["VpcId"] = request.vpcIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVpcPeerConnections"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcPeerConnectionsResponse>();
}

/**
 * @summary Queries virtual private cloud (VPC) peering connections.
 *
 * @param request ListVpcPeerConnectionsRequest
 * @return ListVpcPeerConnectionsResponse
 */
ListVpcPeerConnectionsResponse Client::listVpcPeerConnections(const ListVpcPeerConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcPeerConnectionsWithOptions(request, runtime);
}

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
ModifyVpcPeerConnectionResponse Client::modifyVpcPeerConnectionWithOptions(const ModifyVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLinkType()) {
    query["LinkType"] = request.linkType();
  }

  json body = {};
  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyVpcPeerConnection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcPeerConnectionResponse>();
}

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
ModifyVpcPeerConnectionResponse Client::modifyVpcPeerConnection(const ModifyVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcPeerConnectionWithOptions(request, runtime);
}

/**
 * @summary Moves a Virtual Private Cloud (VPC) peering connection from one resource group to another.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Moves a Virtual Private Cloud (VPC) peering connection from one resource group to another.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

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
RejectVpcPeerConnectionResponse Client::rejectVpcPeerConnectionWithOptions(const RejectVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RejectVpcPeerConnection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectVpcPeerConnectionResponse>();
}

/**
 * @summary 拒绝VPC对等连接
 *
 * @description *   An acceptor VPC can reject a connection request from the requester VPC of a cross-account VPC peering connection. After the connection request is rejected, the VPC peering connection enters the **Rejected** state.
 * *   You cannot repeatedly call the **RejectVpcPeerConnection** operation for the same VPC peering connection within the specified period of time.
 *
 * @param request RejectVpcPeerConnectionRequest
 * @return RejectVpcPeerConnectionResponse
 */
RejectVpcPeerConnectionResponse Client::rejectVpcPeerConnection(const RejectVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectVpcPeerConnectionWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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
    {"action" , "TagResources"},
    {"version" , "2022-01-01"},
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
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified Virtual Private Cloud (VPC) peering connections.
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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
    {"action" , "UnTagResources"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary Removes tags from specified Virtual Private Cloud (VPC) peering connections.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace VpcPeer20220101