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
AcceptVpcPeerConnectionResponse Client::acceptVpcPeerConnectionWithOptions(const AcceptVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
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
AcceptVpcPeerConnectionResponse Client::acceptVpcPeerConnection(const AcceptVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptVpcPeerConnectionWithOptions(request, runtime);
}

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
CreateVpcPeerConnectionResponse Client::createVpcPeerConnectionWithOptions(const CreateVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLinkType()) {
    query["LinkType"] = request.getLinkType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasAcceptingAliUid()) {
    body["AcceptingAliUid"] = request.getAcceptingAliUid();
  }

  if (!!request.hasAcceptingRegionId()) {
    body["AcceptingRegionId"] = request.getAcceptingRegionId();
  }

  if (!!request.hasAcceptingVpcId()) {
    body["AcceptingVpcId"] = request.getAcceptingVpcId();
  }

  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableJumboFrame()) {
    body["EnableJumboFrame"] = request.getEnableJumboFrame();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
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
CreateVpcPeerConnectionResponse Client::createVpcPeerConnection(const CreateVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcPeerConnectionWithOptions(request, runtime);
}

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
DeleteVpcPeerConnectionResponse Client::deleteVpcPeerConnectionWithOptions(const DeleteVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
DeleteVpcPeerConnectionResponse Client::deleteVpcPeerConnection(const DeleteVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcPeerConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified VPC peering connection.
 *
 * @param request GetVpcPeerConnectionAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcPeerConnectionAttributeResponse
 */
GetVpcPeerConnectionAttributeResponse Client::getVpcPeerConnectionAttributeWithOptions(const GetVpcPeerConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
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
 * @summary Queries the details of a specified VPC peering connection.
 *
 * @param request GetVpcPeerConnectionAttributeRequest
 * @return GetVpcPeerConnectionAttributeResponse
 */
GetVpcPeerConnectionAttributeResponse Client::getVpcPeerConnectionAttribute(const GetVpcPeerConnectionAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcPeerConnectionAttributeWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

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
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of VPC peering connections.
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
    request.setVpcIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVpcId(), "VpcId", "simple"));
  }

  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcIdShrink()) {
    body["VpcId"] = request.getVpcIdShrink();
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
 * @summary Queries the details of VPC peering connections.
 *
 * @param request ListVpcPeerConnectionsRequest
 * @return ListVpcPeerConnectionsResponse
 */
ListVpcPeerConnectionsResponse Client::listVpcPeerConnections(const ListVpcPeerConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcPeerConnectionsWithOptions(request, runtime);
}

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
ModifyVpcPeerConnectionResponse Client::modifyVpcPeerConnectionWithOptions(const ModifyVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLinkType()) {
    query["LinkType"] = request.getLinkType();
  }

  json body = {};
  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableJumboFrame()) {
    body["EnableJumboFrame"] = request.getEnableJumboFrame();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
ModifyVpcPeerConnectionResponse Client::modifyVpcPeerConnection(const ModifyVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcPeerConnectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group of a VPC peering connection.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
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
 * @summary Modifies the resource group of a VPC peering connection.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

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
RejectVpcPeerConnectionResponse Client::rejectVpcPeerConnectionWithOptions(const RejectVpcPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    body["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
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
 * @summary Rejects a request for a VPC peering connection.
 *
 * @description - For a cross-account VPC peering connection instance, the acceptor can reject the connection request. A VPC peering connection instance whose connection request is rejected enters the **Rejected** state.
 * - **RejectVpcPeerConnection** does not support concurrent requests to reject the same peering connection instance.
 *
 * @param request RejectVpcPeerConnectionRequest
 * @return RejectVpcPeerConnectionResponse
 */
RejectVpcPeerConnectionResponse Client::rejectVpcPeerConnection(const RejectVpcPeerConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectVpcPeerConnectionWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified VPC peering connections.
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
 * @summary Removes tags from specified VPC peering connections.
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