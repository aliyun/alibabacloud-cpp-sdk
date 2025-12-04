#include <darabonba/Core.hpp>
#include <alibabacloud/Eflo20220530.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Eflo20220530::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Eflo20220530
{

AlibabaCloud::Eflo20220530::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eflo", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Apply for a secondary private IP address for the current Lingjun Elastic Network Interface. You can automatically assign a secondary private IP address.
 *
 * @description Apply for a secondary private IP address for the specified Lingjun Elastic Network Interface.
 * *   If the PrivateIp field is empty, a secondary private IP address is automatically assigned and the unique identifier of the IP address is returned.
 * *   You can use the GetLeniPrivateIpAddress or ListLeniPrivateIpAddresses interface to check whether the secondary private IP address is assigned.
 *
 * @param request AssignLeniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignLeniPrivateIpAddressResponse
 */
AssignLeniPrivateIpAddressResponse Client::assignLeniPrivateIpAddressWithOptions(const AssignLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    body["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssignLeniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignLeniPrivateIpAddressResponse>();
}

/**
 * @summary Apply for a secondary private IP address for the current Lingjun Elastic Network Interface. You can automatically assign a secondary private IP address.
 *
 * @description Apply for a secondary private IP address for the specified Lingjun Elastic Network Interface.
 * *   If the PrivateIp field is empty, a secondary private IP address is automatically assigned and the unique identifier of the IP address is returned.
 * *   You can use the GetLeniPrivateIpAddress or ListLeniPrivateIpAddresses interface to check whether the secondary private IP address is assigned.
 *
 * @param request AssignLeniPrivateIpAddressRequest
 * @return AssignLeniPrivateIpAddressResponse
 */
AssignLeniPrivateIpAddressResponse Client::assignLeniPrivateIpAddress(const AssignLeniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignLeniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Applies for a private secondary IP address for the current LNI. You can also call this operation to assign a secondary MAC address to the current LNI.
 *
 * @description >  Apply for secondary private IP addresses
 * *   By default, each network interface controller can apply for three secondary private IP addresses. If the quota is exceeded, contact the administrator.
 * *   The secondary private IP address is allocated from the Lingjun subnet to which the current network interface controller belongs. The first address and the last two addresses belong to reserved addresses and do not participate in the allocation.
 *
 * @param request AssignPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignPrivateIpAddressResponse
 */
AssignPrivateIpAddressResponse Client::assignPrivateIpAddressWithOptions(const AssignPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssignMac()) {
    body["AssignMac"] = request.assignMac();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    body["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSkipConfig()) {
    body["SkipConfig"] = request.skipConfig();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssignPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignPrivateIpAddressResponse>();
}

/**
 * @summary Applies for a private secondary IP address for the current LNI. You can also call this operation to assign a secondary MAC address to the current LNI.
 *
 * @description >  Apply for secondary private IP addresses
 * *   By default, each network interface controller can apply for three secondary private IP addresses. If the quota is exceeded, contact the administrator.
 * *   The secondary private IP address is allocated from the Lingjun subnet to which the current network interface controller belongs. The first address and the last two addresses belong to reserved addresses and do not participate in the allocation.
 *
 * @param request AssignPrivateIpAddressRequest
 * @return AssignPrivateIpAddressResponse
 */
AssignPrivateIpAddressResponse Client::assignPrivateIpAddress(const AssignPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary When the VPD primary network segment address is not enough to allocate, you can choose to create an additional network segment as the additional network segment of the VPD primary network segment.
 *
 * @description >  **Add a CIDR block**
 * *   The CIDR block cannot start with 0. The subnet mask must be 8 to 28 bits in length.
 * *   The secondary IPv4 CIDR block must not overlap with the primary IPv4 CIDR block of the Lingjun CIDR block and the added secondary IPv4 CIDR block.
 * *   You cannot use 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 as the CIDR block of Lingjun. Example: In the Lingjun CIDR block whose primary IPv4 CIDR block is 192.168.0.0/16, you cannot add the following CIDR blocks as additional IPv4 CIDR blocks. The CIDR block that is in the same range as 192.168.0.0/16. A CIDR block that is larger than 192.168.0.0/16. Example: 192.168.0.0/8. A CIDR block that is smaller than 192.168.0.0/16. Example: 192.168.0.0/24.
 * *   By default, each tenant can create three additional CIDR blocks in each region.
 *
 * @param request AssociateVpdCidrBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateVpdCidrBlockResponse
 */
AssociateVpdCidrBlockResponse Client::associateVpdCidrBlockWithOptions(const AssociateVpdCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSecondaryCidrBlock()) {
    body["SecondaryCidrBlock"] = request.secondaryCidrBlock();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateVpdCidrBlock"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateVpdCidrBlockResponse>();
}

/**
 * @summary When the VPD primary network segment address is not enough to allocate, you can choose to create an additional network segment as the additional network segment of the VPD primary network segment.
 *
 * @description >  **Add a CIDR block**
 * *   The CIDR block cannot start with 0. The subnet mask must be 8 to 28 bits in length.
 * *   The secondary IPv4 CIDR block must not overlap with the primary IPv4 CIDR block of the Lingjun CIDR block and the added secondary IPv4 CIDR block.
 * *   You cannot use 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 as the CIDR block of Lingjun. Example: In the Lingjun CIDR block whose primary IPv4 CIDR block is 192.168.0.0/16, you cannot add the following CIDR blocks as additional IPv4 CIDR blocks. The CIDR block that is in the same range as 192.168.0.0/16. A CIDR block that is larger than 192.168.0.0/16. Example: 192.168.0.0/8. A CIDR block that is smaller than 192.168.0.0/16. Example: 192.168.0.0/24.
 * *   By default, each tenant can create three additional CIDR blocks in each region.
 *
 * @param request AssociateVpdCidrBlockRequest
 * @return AssociateVpdCidrBlockResponse
 */
AssociateVpdCidrBlockResponse Client::associateVpdCidrBlock(const AssociateVpdCidrBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateVpdCidrBlockWithOptions(request, runtime);
}

/**
 * @summary Lingjun ENI is bound to NC.
 *
 * @description This interface is an asynchronous interface. You need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the available state.
 *
 * @param request AttachElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachElasticNetworkInterfaceResponse
 */
AttachElasticNetworkInterfaceResponse Client::attachElasticNetworkInterfaceWithOptions(const AttachElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachElasticNetworkInterfaceResponse>();
}

/**
 * @summary Lingjun ENI is bound to NC.
 *
 * @description This interface is an asynchronous interface. You need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the available state.
 *
 * @param request AttachElasticNetworkInterfaceRequest
 * @return AttachElasticNetworkInterfaceResponse
 */
AttachElasticNetworkInterfaceResponse Client::attachElasticNetworkInterface(const AttachElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Creates an LENI.
 *
 * @param request CreateElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateElasticNetworkInterfaceResponse
 */
CreateElasticNetworkInterfaceResponse Client::createElasticNetworkInterfaceWithOptions(const CreateElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnableJumboFrame()) {
    body["EnableJumboFrame"] = request.enableJumboFrame();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateElasticNetworkInterfaceResponse>();
}

/**
 * @summary Creates an LENI.
 *
 * @param request CreateElasticNetworkInterfaceRequest
 * @return CreateElasticNetworkInterfaceResponse
 */
CreateElasticNetworkInterfaceResponse Client::createElasticNetworkInterface(const CreateElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Create a Lingjun HUB.
 *
 * @description When you call this operation to create a Lingjun HUB, note that:
 * *   Make sure that you have sufficient Lingjun HUB quota.
 * *   This interface is an asynchronous interface. After this interface is called, the system will return the ID of a Lingjun HUB. At this time, the Lingjun HUB instance may not be created yet, and the system background creation task is still in progress. You can call the ListErs or GetEr operation to query the status of the Lingjun HUB.
 *     *   If the status of the Lingjun HUB is Executing, it indicates that it is being created.
 *     *   If the status of the Lingjun HUB is Available, the creation is successful.
 *
 * @param request CreateErRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateErResponse
 */
CreateErResponse Client::createErWithOptions(const CreateErRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasErName()) {
    body["ErName"] = request.erName();
  }

  if (!!request.hasMasterZoneId()) {
    body["MasterZoneId"] = request.masterZoneId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEr"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateErResponse>();
}

/**
 * @summary Create a Lingjun HUB.
 *
 * @description When you call this operation to create a Lingjun HUB, note that:
 * *   Make sure that you have sufficient Lingjun HUB quota.
 * *   This interface is an asynchronous interface. After this interface is called, the system will return the ID of a Lingjun HUB. At this time, the Lingjun HUB instance may not be created yet, and the system background creation task is still in progress. You can call the ListErs or GetEr operation to query the status of the Lingjun HUB.
 *     *   If the status of the Lingjun HUB is Executing, it indicates that it is being created.
 *     *   If the status of the Lingjun HUB is Available, the creation is successful.
 *
 * @param request CreateErRequest
 * @return CreateErResponse
 */
CreateErResponse Client::createEr(const CreateErRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createErWithOptions(request, runtime);
}

/**
 * @summary Create a network instance connection.
 *
 * @description When you call this operation to create a network instance connection, note that:
 * *   Make sure that you have created a Lingjun HUB instance.
 * *   Make sure that you have sufficient quota for network instance connections.
 * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the network instance connection. In this case, the network instance connection may not be created yet, and the system is still creating the network instance in the background. You can query the connection status of a network instance by ListErAttachments or GetErAttachment:
 *     *   If the connection status of the network instance is Executing, the network instance is being created.
 *     *   If the connection status of the network instance is Available, the network instance is created.
 *
 * @param request CreateErAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateErAttachmentResponse
 */
CreateErAttachmentResponse Client::createErAttachmentWithOptions(const CreateErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoReceiveAllRoute()) {
    body["AutoReceiveAllRoute"] = request.autoReceiveAllRoute();
  }

  if (!!request.hasErAttachmentName()) {
    body["ErAttachmentName"] = request.erAttachmentName();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceTenantId()) {
    body["ResourceTenantId"] = request.resourceTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateErAttachment"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateErAttachmentResponse>();
}

/**
 * @summary Create a network instance connection.
 *
 * @description When you call this operation to create a network instance connection, note that:
 * *   Make sure that you have created a Lingjun HUB instance.
 * *   Make sure that you have sufficient quota for network instance connections.
 * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the network instance connection. In this case, the network instance connection may not be created yet, and the system is still creating the network instance in the background. You can query the connection status of a network instance by ListErAttachments or GetErAttachment:
 *     *   If the connection status of the network instance is Executing, the network instance is being created.
 *     *   If the connection status of the network instance is Available, the network instance is created.
 *
 * @param request CreateErAttachmentRequest
 * @return CreateErAttachmentResponse
 */
CreateErAttachmentResponse Client::createErAttachment(const CreateErAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createErAttachmentWithOptions(request, runtime);
}

/**
 * @summary Users can use this API to create routing policy by specifying the network instance connection under Lingjun HUB.
 *
 * @description When you call this operation to create a routing policy, note that:
 * *   Make sure that you have created a Lingjun HUB instance.
 * *   Make sure that you have created a network instance connection.
 * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the routing policy. In this case, the routing policy instance may not be created yet, and the system background creation task is still in progress. You can use ListErRouteMaps or GetErRouteMap to query the status of a routing policy.
 *     *   If the status of the routing policy is Execute, the system is creating the instance.
 *     *   If the status of the routing policy is Available, the creation is successful.
 *
 * @param request CreateErRouteMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateErRouteMapResponse
 */
CreateErRouteMapResponse Client::createErRouteMapWithOptions(const CreateErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasReceptionInstanceId()) {
    body["ReceptionInstanceId"] = request.receptionInstanceId();
  }

  if (!!request.hasReceptionInstanceOwner()) {
    body["ReceptionInstanceOwner"] = request.receptionInstanceOwner();
  }

  if (!!request.hasReceptionInstanceType()) {
    body["ReceptionInstanceType"] = request.receptionInstanceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRouteMapAction()) {
    body["RouteMapAction"] = request.routeMapAction();
  }

  if (!!request.hasRouteMapNum()) {
    body["RouteMapNum"] = request.routeMapNum();
  }

  if (!!request.hasTransmissionInstanceId()) {
    body["TransmissionInstanceId"] = request.transmissionInstanceId();
  }

  if (!!request.hasTransmissionInstanceOwner()) {
    body["TransmissionInstanceOwner"] = request.transmissionInstanceOwner();
  }

  if (!!request.hasTransmissionInstanceType()) {
    body["TransmissionInstanceType"] = request.transmissionInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateErRouteMap"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateErRouteMapResponse>();
}

/**
 * @summary Users can use this API to create routing policy by specifying the network instance connection under Lingjun HUB.
 *
 * @description When you call this operation to create a routing policy, note that:
 * *   Make sure that you have created a Lingjun HUB instance.
 * *   Make sure that you have created a network instance connection.
 * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the routing policy. In this case, the routing policy instance may not be created yet, and the system background creation task is still in progress. You can use ListErRouteMaps or GetErRouteMap to query the status of a routing policy.
 *     *   If the status of the routing policy is Execute, the system is creating the instance.
 *     *   If the status of the routing policy is Available, the creation is successful.
 *
 * @param request CreateErRouteMapRequest
 * @return CreateErRouteMapResponse
 */
CreateErRouteMapResponse Client::createErRouteMap(const CreateErRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createErRouteMapWithOptions(request, runtime);
}

/**
 * @summary Users can use this API to create a Lingjun subnet under the Lingjun network segment.
 *
 * @description When you call this operation to create a Lingjun subnet, note that:
 * *   You have created a Lingjun CIDR block.
 * *   Only one network segment can be specified for a Lingjun subnet.
 * *   The network segment cannot be modified after the Lingjun subnet is created.
 * *   Make sure that you have sufficient Lingjun subnet quota.
 * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun subnet. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListSubnets or GetSubnet operation to query the status of the CIDR block of Lingjun.
 *     *   If the status of the Lingjun subnet is Executed, it indicates that it is being created.
 *     *   If the status of the Lingjun subnet is Available, the creation is successful.
 *
 * @param request CreateSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubnetResponse
 */
CreateSubnetResponse Client::createSubnetWithOptions(const CreateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCidr()) {
    body["Cidr"] = request.cidr();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetName()) {
    body["SubnetName"] = request.subnetName();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSubnet"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubnetResponse>();
}

/**
 * @summary Users can use this API to create a Lingjun subnet under the Lingjun network segment.
 *
 * @description When you call this operation to create a Lingjun subnet, note that:
 * *   You have created a Lingjun CIDR block.
 * *   Only one network segment can be specified for a Lingjun subnet.
 * *   The network segment cannot be modified after the Lingjun subnet is created.
 * *   Make sure that you have sufficient Lingjun subnet quota.
 * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun subnet. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListSubnets or GetSubnet operation to query the status of the CIDR block of Lingjun.
 *     *   If the status of the Lingjun subnet is Executed, it indicates that it is being created.
 *     *   If the status of the Lingjun subnet is Available, the creation is successful.
 *
 * @param request CreateSubnetRequest
 * @return CreateSubnetResponse
 */
CreateSubnetResponse Client::createSubnet(const CreateSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubnetWithOptions(request, runtime);
}

/**
 * @summary You can create a Lingjun connection to connect Lingjun network environment and Alibaba Cloud network environment.
 *
 * @description When you call this operation to create a Lingjun connection, note that:
 * *   When you specify the vccId parameter, the system will configure the purchased Lingjun connection for you. When the default vccId parameter is set, the system will automatically place an order and configure the Lingjun connection for you.
 * *   Make sure that you have called the InitializeVcc operation to grant permissions.
 * *   This interface is an asynchronous interface. After this interface is called, the system will return the Lingjun connection ID, but the Lingjun connection instance may not be created yet, and the system background creation task is still in progress. You can call the ListVccs or GetVcc operation to query the status of the Lingjun connection.
 *     *   If the status of the Lingjun connection is Executed, the Lingjun connection is being created.
 *     *   If the status of the Lingjun connection is Available, the Lingjun connection is created.
 *
 * @param request CreateVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVccResponse
 */
CreateVccResponse Client::createVccWithOptions(const CreateVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessCouldService()) {
    body["AccessCouldService"] = request.accessCouldService();
  }

  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBgpAsn()) {
    body["BgpAsn"] = request.bgpAsn();
  }

  if (!!request.hasBgpCidr()) {
    body["BgpCidr"] = request.bgpCidr();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.cenId();
  }

  if (!!request.hasCenOwnerId()) {
    body["CenOwnerId"] = request.cenOwnerId();
  }

  if (!!request.hasConnectionType()) {
    body["ConnectionType"] = request.connectionType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVccName()) {
    body["VccName"] = request.vccName();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVccResponse>();
}

/**
 * @summary You can create a Lingjun connection to connect Lingjun network environment and Alibaba Cloud network environment.
 *
 * @description When you call this operation to create a Lingjun connection, note that:
 * *   When you specify the vccId parameter, the system will configure the purchased Lingjun connection for you. When the default vccId parameter is set, the system will automatically place an order and configure the Lingjun connection for you.
 * *   Make sure that you have called the InitializeVcc operation to grant permissions.
 * *   This interface is an asynchronous interface. After this interface is called, the system will return the Lingjun connection ID, but the Lingjun connection instance may not be created yet, and the system background creation task is still in progress. You can call the ListVccs or GetVcc operation to query the status of the Lingjun connection.
 *     *   If the status of the Lingjun connection is Executed, the Lingjun connection is being created.
 *     *   If the status of the Lingjun connection is Available, the Lingjun connection is created.
 *
 * @param request CreateVccRequest
 * @return CreateVccResponse
 */
CreateVccResponse Client::createVcc(const CreateVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVccWithOptions(request, runtime);
}

/**
 * @summary Users can use this API to connect Lingjun instance to the Lingjun HUB instance of the target account. After authorization, the target account can be associated with your Lingjun connection by using the authorized Lingjun HUB instance.
 *
 * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
 * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
 * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
 *
 * @param request CreateVccGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVccGrantRuleResponse
 */
CreateVccGrantRuleResponse Client::createVccGrantRuleWithOptions(const CreateVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVccGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVccGrantRuleResponse>();
}

/**
 * @summary Users can use this API to connect Lingjun instance to the Lingjun HUB instance of the target account. After authorization, the target account can be associated with your Lingjun connection by using the authorized Lingjun HUB instance.
 *
 * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
 * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
 * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
 *
 * @param request CreateVccGrantRuleRequest
 * @return CreateVccGrantRuleResponse
 */
CreateVccGrantRuleResponse Client::createVccGrantRule(const CreateVccGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVccGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Create a Lingjun connection route entry.
 *
 * @description When you call this operation to create a VBR route entry, take note of the following items:
 * *   After you call this operation, static route entries and BGP network announcements are created on the VBR to which the Lingjun connection belongs.
 * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entry may not be created yet, and the system still creates the static route entry in the background. You can query the status of VBR static route entries by ListVccRouteEntries or GetVccRouteEntry:
 *     *   If the VBR static route entry is in the Executing state, it indicates that it is being created.
 *     *   If the status of the VBR static route entry is Available, the VBR is created.
 *
 * @param request CreateVccRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVccRouteEntryResponse
 */
CreateVccRouteEntryResponse Client::createVccRouteEntryWithOptions(const CreateVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVccRouteEntry"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVccRouteEntryResponse>();
}

/**
 * @summary Create a Lingjun connection route entry.
 *
 * @description When you call this operation to create a VBR route entry, take note of the following items:
 * *   After you call this operation, static route entries and BGP network announcements are created on the VBR to which the Lingjun connection belongs.
 * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entry may not be created yet, and the system still creates the static route entry in the background. You can query the status of VBR static route entries by ListVccRouteEntries or GetVccRouteEntry:
 *     *   If the VBR static route entry is in the Executing state, it indicates that it is being created.
 *     *   If the status of the VBR static route entry is Available, the VBR is created.
 *
 * @param request CreateVccRouteEntryRequest
 * @return CreateVccRouteEntryResponse
 */
CreateVccRouteEntryResponse Client::createVccRouteEntry(const CreateVccRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVccRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Create a private Lingjun CIDR block. This CIDR block has an independent network environment.
 *
 * @description When you call this operation to create a CIDR block for Lingjun, take note of the following:
 * *   A Lingjun network segment can specify an additional network segment in addition to a main network segment.
 * *   After the Lingjun network segment is created, the network segment cannot be modified.
 * *   Make sure that you have a sufficient quota of Lingjun CIDR blocks.
 * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun network segment. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListVpds or GetVpd operation to query the status of the CIDR block of Lingjun.
 *     *   If the status of the Lingjun CIDR block is Executed, the CIDR block is being created.
 *     *   If the status of the Lingjun CIDR block is Available, the creation is successful.
 *
 * @param request CreateVpdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpdResponse
 */
CreateVpdResponse Client::createVpdWithOptions(const CreateVpdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCidr()) {
    body["Cidr"] = request.cidr();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubnets()) {
    body["Subnets"] = request.subnets();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVpdName()) {
    body["VpdName"] = request.vpdName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVpd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpdResponse>();
}

/**
 * @summary Create a private Lingjun CIDR block. This CIDR block has an independent network environment.
 *
 * @description When you call this operation to create a CIDR block for Lingjun, take note of the following:
 * *   A Lingjun network segment can specify an additional network segment in addition to a main network segment.
 * *   After the Lingjun network segment is created, the network segment cannot be modified.
 * *   Make sure that you have a sufficient quota of Lingjun CIDR blocks.
 * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun network segment. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListVpds or GetVpd operation to query the status of the CIDR block of Lingjun.
 *     *   If the status of the Lingjun CIDR block is Executed, the CIDR block is being created.
 *     *   If the status of the Lingjun CIDR block is Available, the creation is successful.
 *
 * @param request CreateVpdRequest
 * @return CreateVpdResponse
 */
CreateVpdResponse Client::createVpd(const CreateVpdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpdWithOptions(request, runtime);
}

/**
 * @summary Users can use this API to authorize Lingjun HUB instances of the target account. After authorization, the target account can be associated with your Lingjun CIDR block by using the authorized Lingjun HUB instance.
 *
 * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
 * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
 * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
 *
 * @param request CreateVpdGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpdGrantRuleResponse
 */
CreateVpdGrantRuleResponse Client::createVpdGrantRuleWithOptions(const CreateVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVpdGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpdGrantRuleResponse>();
}

/**
 * @summary Users can use this API to authorize Lingjun HUB instances of the target account. After authorization, the target account can be associated with your Lingjun CIDR block by using the authorized Lingjun HUB instance.
 *
 * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
 * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
 * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
 *
 * @param request CreateVpdGrantRuleRequest
 * @return CreateVpdGrantRuleResponse
 */
CreateVpdGrantRuleResponse Client::createVpdGrantRule(const CreateVpdGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpdGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Delete Lingjun Elastic Network Interface. After deletion, all relevant data will be lost and cannot be recovered. Please operate with caution.
 *
 * @param request DeleteElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteElasticNetworkInterfaceResponse
 */
DeleteElasticNetworkInterfaceResponse Client::deleteElasticNetworkInterfaceWithOptions(const DeleteElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteElasticNetworkInterfaceResponse>();
}

/**
 * @summary Delete Lingjun Elastic Network Interface. After deletion, all relevant data will be lost and cannot be recovered. Please operate with caution.
 *
 * @param request DeleteElasticNetworkInterfaceRequest
 * @return DeleteElasticNetworkInterfaceResponse
 */
DeleteElasticNetworkInterfaceResponse Client::deleteElasticNetworkInterface(const DeleteElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary After you delete a Lingjun HUB instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete the Lingjun HUB, note that:
 * *   Before you delete the instance, make sure that no network instance is connected to the Lingjun HUB instance.
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun HUB instance may not be deleted, and the system background deletion task is still in progress. You can call the ListErs or GetEr operation to query the deletion status of the Lingjun HUB.
 *     *   If the status of the Lingjun HUB is Deleting, the Lingjun HUB instance is being deleted.
 *     *   If no Lingjun HUB instance is recorded, the Lingjun HUB instance has been deleted.
 *
 * @param request DeleteErRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteErResponse
 */
DeleteErResponse Client::deleteErWithOptions(const DeleteErRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEr"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteErResponse>();
}

/**
 * @summary After you delete a Lingjun HUB instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete the Lingjun HUB, note that:
 * *   Before you delete the instance, make sure that no network instance is connected to the Lingjun HUB instance.
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun HUB instance may not be deleted, and the system background deletion task is still in progress. You can call the ListErs or GetEr operation to query the deletion status of the Lingjun HUB.
 *     *   If the status of the Lingjun HUB is Deleting, the Lingjun HUB instance is being deleted.
 *     *   If no Lingjun HUB instance is recorded, the Lingjun HUB instance has been deleted.
 *
 * @param request DeleteErRequest
 * @return DeleteErResponse
 */
DeleteErResponse Client::deleteEr(const DeleteErRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteErWithOptions(request, runtime);
}

/**
 * @summary If you delete a network instance that is connected to an instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a network instance connection, take note of the following:
 * *   Before you delete the instance, make sure that no routing policy exists under the network instance connection instance.
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This operation is an asynchronous operation. After you call this operation, the network instance that is connected to the instance may not be deleted. The system still deletes the instance in the background. You can call the ListErAttachments or GetErAttachment to query the deletion status of network instance connections:
 *     *   If the status of the network instance connection is Deleting, the network instance connection is being deleted.
 *     *   If there is no connection record for the network instance, the connection to the network instance has been deleted.
 *
 * @param request DeleteErAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteErAttachmentResponse
 */
DeleteErAttachmentResponse Client::deleteErAttachmentWithOptions(const DeleteErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErAttachmentId()) {
    body["ErAttachmentId"] = request.erAttachmentId();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteErAttachment"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteErAttachmentResponse>();
}

/**
 * @summary If you delete a network instance that is connected to an instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a network instance connection, take note of the following:
 * *   Before you delete the instance, make sure that no routing policy exists under the network instance connection instance.
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This operation is an asynchronous operation. After you call this operation, the network instance that is connected to the instance may not be deleted. The system still deletes the instance in the background. You can call the ListErAttachments or GetErAttachment to query the deletion status of network instance connections:
 *     *   If the status of the network instance connection is Deleting, the network instance connection is being deleted.
 *     *   If there is no connection record for the network instance, the connection to the network instance has been deleted.
 *
 * @param request DeleteErAttachmentRequest
 * @return DeleteErAttachmentResponse
 */
DeleteErAttachmentResponse Client::deleteErAttachment(const DeleteErAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteErAttachmentWithOptions(request, runtime);
}

/**
 * @summary If you delete a routing policy instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a routing policy, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the routing policy instance may not be deleted yet, and the system background deletion task is still in progress. You can call the ListErRouteMaps or GetErRouteMap operation to query the deletion status of a routing policy.
 *     *   If the routing policy is in the Deleting state, the routing policy instance is being deleted.
 *     *   If no routing policy instance is recorded, the routing policy instance has been deleted.
 *
 * @param request DeleteErRouteMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteErRouteMapResponse
 */
DeleteErRouteMapResponse Client::deleteErRouteMapWithOptions(const DeleteErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErRouteMapId()) {
    body["ErRouteMapId"] = request.erRouteMapId();
  }

  if (!!request.hasErRouteMapIds()) {
    body["ErRouteMapIds"] = request.erRouteMapIds();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteErRouteMap"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteErRouteMapResponse>();
}

/**
 * @summary If you delete a routing policy instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a routing policy, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the routing policy instance may not be deleted yet, and the system background deletion task is still in progress. You can call the ListErRouteMaps or GetErRouteMap operation to query the deletion status of a routing policy.
 *     *   If the routing policy is in the Deleting state, the routing policy instance is being deleted.
 *     *   If no routing policy instance is recorded, the routing policy instance has been deleted.
 *
 * @param request DeleteErRouteMapRequest
 * @return DeleteErRouteMapResponse
 */
DeleteErRouteMapResponse Client::deleteErRouteMap(const DeleteErRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteErRouteMapWithOptions(request, runtime);
}

/**
 * @summary If you delete a Lingjun subnet instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a Lingjun subnet, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun subnet instance may not be deleted, and the system background deletion task is still in progress. You can call the ListSubnets or GetSubnet operation to query the deletion status of the subnet.
 *     *   If the status of the Lingjun subnet is Deleting, the Lingjun subnet instance is being deleted.
 *     *   If there is no record of the Lingjun subnet instance, the Lingjun subnet instance has been deleted.
 *
 * @param request DeleteSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubnetResponse
 */
DeleteSubnetResponse Client::deleteSubnetWithOptions(const DeleteSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSubnet"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubnetResponse>();
}

/**
 * @summary If you delete a Lingjun subnet instance, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a Lingjun subnet, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun subnet instance may not be deleted, and the system background deletion task is still in progress. You can call the ListSubnets or GetSubnet operation to query the deletion status of the subnet.
 *     *   If the status of the Lingjun subnet is Deleting, the Lingjun subnet instance is being deleted.
 *     *   If there is no record of the Lingjun subnet instance, the Lingjun subnet instance has been deleted.
 *
 * @param request DeleteSubnetRequest
 * @return DeleteSubnetResponse
 */
DeleteSubnetResponse Client::deleteSubnet(const DeleteSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubnetWithOptions(request, runtime);
}

/**
 * @summary If you delete a Lingjun HUB cross-account authorization that is connected to Lingjun, the related data is lost and cannot be recovered.
 *
 * @param request DeleteVccGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVccGrantRuleResponse
 */
DeleteVccGrantRuleResponse Client::deleteVccGrantRuleWithOptions(const DeleteVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVccGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVccGrantRuleResponse>();
}

/**
 * @summary If you delete a Lingjun HUB cross-account authorization that is connected to Lingjun, the related data is lost and cannot be recovered.
 *
 * @param request DeleteVccGrantRuleRequest
 * @return DeleteVccGrantRuleResponse
 */
DeleteVccGrantRuleResponse Client::deleteVccGrantRule(const DeleteVccGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVccGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Delete a Lingjun connection route entry.
 *
 * @description When you call this operation to delete a VBR static route entry, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entries may not be deleted. The system still deletes the VBR static route entries in the background. You can call the ListVccRouteEntries or GetVccRouteEntry to query the deletion status of VBR static route entries:
 *     *   If the VBR static route entry is in the Deleting state, the VBR static route entry is being deleted.
 *     *   If no VBR static route entry instance is recorded, the VBR static route entry instance has been deleted.
 *
 * @param request DeleteVccRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVccRouteEntryResponse
 */
DeleteVccRouteEntryResponse Client::deleteVccRouteEntryWithOptions(const DeleteVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVccRouteEntryId()) {
    body["VccRouteEntryId"] = request.vccRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVccRouteEntry"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVccRouteEntryResponse>();
}

/**
 * @summary Delete a Lingjun connection route entry.
 *
 * @description When you call this operation to delete a VBR static route entry, note that:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entries may not be deleted. The system still deletes the VBR static route entries in the background. You can call the ListVccRouteEntries or GetVccRouteEntry to query the deletion status of VBR static route entries:
 *     *   If the VBR static route entry is in the Deleting state, the VBR static route entry is being deleted.
 *     *   If no VBR static route entry instance is recorded, the VBR static route entry instance has been deleted.
 *
 * @param request DeleteVccRouteEntryRequest
 * @return DeleteVccRouteEntryResponse
 */
DeleteVccRouteEntryResponse Client::deleteVccRouteEntry(const DeleteVccRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVccRouteEntryWithOptions(request, runtime);
}

/**
 * @summary After you delete a Lingjun CIDR block, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a Lingjun CIDR block, take note of the following items:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   Before deleting, make sure that all Lingjun subnet instances under the Lingjun CIDR block have been deleted.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun network segment instance may not be deleted, and the system background deletion task is still in progress. You can call the ListVpds or GetVpd operation to query the deletion status of the CIDR block.
 *     *   If the status of the Lingjun CIDR block is Deleting, the Lingjun CIDR block is being deleted.
 *     *   If there is no record of the Lingjun CIDR block instance, the Lingjun CIDR block instance has been deleted.
 *
 * @param request DeleteVpdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpdResponse
 */
DeleteVpdResponse Client::deleteVpdWithOptions(const DeleteVpdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVpd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpdResponse>();
}

/**
 * @summary After you delete a Lingjun CIDR block, the related data is lost and cannot be recovered.
 *
 * @description When you call this operation to delete a Lingjun CIDR block, take note of the following items:
 * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
 * *   Before deleting, make sure that all Lingjun subnet instances under the Lingjun CIDR block have been deleted.
 * *   This interface is an asynchronous interface. After this interface is called, the Lingjun network segment instance may not be deleted, and the system background deletion task is still in progress. You can call the ListVpds or GetVpd operation to query the deletion status of the CIDR block.
 *     *   If the status of the Lingjun CIDR block is Deleting, the Lingjun CIDR block is being deleted.
 *     *   If there is no record of the Lingjun CIDR block instance, the Lingjun CIDR block instance has been deleted.
 *
 * @param request DeleteVpdRequest
 * @return DeleteVpdResponse
 */
DeleteVpdResponse Client::deleteVpd(const DeleteVpdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpdWithOptions(request, runtime);
}

/**
 * @summary Delete the Lingjun HUB cross-account authorization for a Lingjun CIDR block. After the deletion, the related data is lost and cannot be recovered.
 *
 * @param request DeleteVpdGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpdGrantRuleResponse
 */
DeleteVpdGrantRuleResponse Client::deleteVpdGrantRuleWithOptions(const DeleteVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVpdGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpdGrantRuleResponse>();
}

/**
 * @summary Delete the Lingjun HUB cross-account authorization for a Lingjun CIDR block. After the deletion, the related data is lost and cannot be recovered.
 *
 * @param request DeleteVpdGrantRuleRequest
 * @return DeleteVpdGrantRuleResponse
 */
DeleteVpdGrantRuleResponse Client::deleteVpdGrantRule(const DeleteVpdGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpdGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Query whether the user has the SLR role-AliyunServiceRoleForEfloVcc required for Lingjun connection.
 *
 * @description You can call this operation to query whether a user account has a **AliyunServiceRoleForEfloVcc** role.
 * >  If you do not have a **AliyunServiceRoleForEfloVcc** role, you need to use the initializeVcc interface to complete authorization, otherwise users will not be able to use Lingjun to connect to the product.
 *
 * @param request DescribeSlrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlrResponse
 */
DescribeSlrResponse Client::describeSlrWithOptions(const DescribeSlrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSlr"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlrResponse>();
}

/**
 * @summary Query whether the user has the SLR role-AliyunServiceRoleForEfloVcc required for Lingjun connection.
 *
 * @description You can call this operation to query whether a user account has a **AliyunServiceRoleForEfloVcc** role.
 * >  If you do not have a **AliyunServiceRoleForEfloVcc** role, you need to use the initializeVcc interface to complete authorization, otherwise users will not be able to use Lingjun to connect to the product.
 *
 * @param request DescribeSlrRequest
 * @return DescribeSlrResponse
 */
DescribeSlrResponse Client::describeSlr(const DescribeSlrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlrWithOptions(request, runtime);
}

/**
 * @summary Unbind Lingjun ENI from NC.
 *
 * @description This interface is an asynchronous interface, and you need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the unbound state.
 *
 * @param request DetachElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachElasticNetworkInterfaceResponse
 */
DetachElasticNetworkInterfaceResponse Client::detachElasticNetworkInterfaceWithOptions(const DetachElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachElasticNetworkInterfaceResponse>();
}

/**
 * @summary Unbind Lingjun ENI from NC.
 *
 * @description This interface is an asynchronous interface, and you need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the unbound state.
 *
 * @param request DetachElasticNetworkInterfaceRequest
 * @return DetachElasticNetworkInterfaceResponse
 */
DetachElasticNetworkInterfaceResponse Client::detachElasticNetworkInterface(const DetachElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Users can use this API to query the destination CIDR block of the source policy instance when creating a routing strategy.
 *
 * @param request GetDestinationCidrBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDestinationCidrBlockResponse
 */
GetDestinationCidrBlockResponse Client::getDestinationCidrBlockWithOptions(const GetDestinationCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDestinationCidrBlock"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDestinationCidrBlockResponse>();
}

/**
 * @summary Users can use this API to query the destination CIDR block of the source policy instance when creating a routing strategy.
 *
 * @param request GetDestinationCidrBlockRequest
 * @return GetDestinationCidrBlockResponse
 */
GetDestinationCidrBlockResponse Client::getDestinationCidrBlock(const GetDestinationCidrBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDestinationCidrBlockWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an LENI.
 *
 * @param request GetElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetElasticNetworkInterfaceResponse
 */
GetElasticNetworkInterfaceResponse Client::getElasticNetworkInterfaceWithOptions(const GetElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetElasticNetworkInterfaceResponse>();
}

/**
 * @summary Queries the details of an LENI.
 *
 * @param request GetElasticNetworkInterfaceRequest
 * @return GetElasticNetworkInterfaceResponse
 */
GetElasticNetworkInterfaceResponse Client::getElasticNetworkInterface(const GetElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Queries the Lingjun HUB.
 *
 * @param request GetErRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErResponse
 */
GetErResponse Client::getErWithOptions(const GetErRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEr"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErResponse>();
}

/**
 * @summary Queries the Lingjun HUB.
 *
 * @param request GetErRequest
 * @return GetErResponse
 */
GetErResponse Client::getEr(const GetErRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErWithOptions(request, runtime);
}

/**
 * @summary Queries network instance connections.
 *
 * @param request GetErAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErAttachmentResponse
 */
GetErAttachmentResponse Client::getErAttachmentWithOptions(const GetErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErAttachmentId()) {
    body["ErAttachmentId"] = request.erAttachmentId();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetErAttachment"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErAttachmentResponse>();
}

/**
 * @summary Queries network instance connections.
 *
 * @param request GetErAttachmentRequest
 * @return GetErAttachmentResponse
 */
GetErAttachmentResponse Client::getErAttachment(const GetErAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErAttachmentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of Lingjun HUB route entries.
 *
 * @param request GetErRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErRouteEntryResponse
 */
GetErRouteEntryResponse Client::getErRouteEntryWithOptions(const GetErRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErRouteEntryId()) {
    body["ErRouteEntryId"] = request.erRouteEntryId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetErRouteEntry"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErRouteEntryResponse>();
}

/**
 * @summary Queries the details of Lingjun HUB route entries.
 *
 * @param request GetErRouteEntryRequest
 * @return GetErRouteEntryResponse
 */
GetErRouteEntryResponse Client::getErRouteEntry(const GetErRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErRouteEntryWithOptions(request, runtime);
}

/**
 * @summary query lingjun hub routing policy details.
 *
 * @param request GetErRouteMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErRouteMapResponse
 */
GetErRouteMapResponse Client::getErRouteMapWithOptions(const GetErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErRouteMapId()) {
    body["ErRouteMapId"] = request.erRouteMapId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetErRouteMap"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErRouteMapResponse>();
}

/**
 * @summary query lingjun hub routing policy details.
 *
 * @param request GetErRouteMapRequest
 * @return GetErRouteMapResponse
 */
GetErRouteMapResponse Client::getErRouteMap(const GetErRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErRouteMapWithOptions(request, runtime);
}

/**
 * @summary Query the physical topology information of Lingjun network interface controller and Lingjun nodes under VPD.
 *
 * @param request GetFabricTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFabricTopologyResponse
 */
GetFabricTopologyResponse Client::getFabricTopologyWithOptions(const GetFabricTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasLniIds()) {
    body["LniIds"] = request.lniIds();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFabricTopology"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFabricTopologyResponse>();
}

/**
 * @summary Query the physical topology information of Lingjun network interface controller and Lingjun nodes under VPD.
 *
 * @param request GetFabricTopologyRequest
 * @return GetFabricTopologyResponse
 */
GetFabricTopologyResponse Client::getFabricTopology(const GetFabricTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFabricTopologyWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of the secondary private IP address of a specified Lingjun Elastic Network Interface.
 *
 * @param request GetLeniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLeniPrivateIpAddressResponse
 */
GetLeniPrivateIpAddressResponse Client::getLeniPrivateIpAddressWithOptions(const GetLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLeniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLeniPrivateIpAddressResponse>();
}

/**
 * @summary Obtains the details of the secondary private IP address of a specified Lingjun Elastic Network Interface.
 *
 * @param request GetLeniPrivateIpAddressRequest
 * @return GetLeniPrivateIpAddressResponse
 */
GetLeniPrivateIpAddressResponse Client::getLeniPrivateIpAddress(const GetLeniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLeniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Obtains the details about the secondary private IP address.
 *
 * @param request GetLniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLniPrivateIpAddressResponse
 */
GetLniPrivateIpAddressResponse Client::getLniPrivateIpAddressWithOptions(const GetLniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLniPrivateIpAddressResponse>();
}

/**
 * @summary Obtains the details about the secondary private IP address.
 *
 * @param request GetLniPrivateIpAddressRequest
 * @return GetLniPrivateIpAddressResponse
 */
GetLniPrivateIpAddressResponse Client::getLniPrivateIpAddress(const GetLniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Queries information about an LNI.
 *
 * @param request GetNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkInterfaceResponse
 */
GetNetworkInterfaceResponse Client::getNetworkInterfaceWithOptions(const GetNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkInterfaceResponse>();
}

/**
 * @summary Queries information about an LNI.
 *
 * @param request GetNetworkInterfaceRequest
 * @return GetNetworkInterfaceResponse
 */
GetNetworkInterfaceResponse Client::getNetworkInterface(const GetNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Queries the network information of a node.
 *
 * @param request GetNodeInfoForPodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeInfoForPodResponse
 */
GetNodeInfoForPodResponse Client::getNodeInfoForPodWithOptions(const GetNodeInfoForPodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeInfoForPod"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeInfoForPodResponse>();
}

/**
 * @summary Queries the network information of a node.
 *
 * @param request GetNodeInfoForPodRequest
 * @return GetNodeInfoForPodResponse
 */
GetNodeInfoForPodResponse Client::getNodeInfoForPod(const GetNodeInfoForPodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeInfoForPodWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Lingjun subnet, including the type, CIDR block, instance ID, instance status, and number of NCs.
 *
 * @param request GetSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubnetResponse
 */
GetSubnetResponse Client::getSubnetWithOptions(const GetSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSubnet"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubnetResponse>();
}

/**
 * @summary Queries the details of a Lingjun subnet, including the type, CIDR block, instance ID, instance status, and number of NCs.
 *
 * @param request GetSubnetRequest
 * @return GetSubnetResponse
 */
GetSubnetResponse Client::getSubnet(const GetSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubnetWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Lingjun connection, including the specification, Express Connect circuit access port type, instance status, bandwidth, and BGP CIDR block.
 *
 * @param request GetVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVccResponse
 */
GetVccResponse Client::getVccWithOptions(const GetVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVccResponse>();
}

/**
 * @summary Queries the details of a Lingjun connection, including the specification, Express Connect circuit access port type, instance status, bandwidth, and BGP CIDR block.
 *
 * @param request GetVccRequest
 * @return GetVccResponse
 */
GetVccResponse Client::getVcc(const GetVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVccWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cross-account resource authorization for a Lingjun connection, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
 *
 * @param request GetVccGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVccGrantRuleResponse
 */
GetVccGrantRuleResponse Client::getVccGrantRuleWithOptions(const GetVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVccGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVccGrantRuleResponse>();
}

/**
 * @summary Queries the details of cross-account resource authorization for a Lingjun connection, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
 *
 * @param request GetVccGrantRuleRequest
 * @return GetVccGrantRuleResponse
 */
GetVccGrantRuleResponse Client::getVccGrantRule(const GetVccGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVccGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Queries route entries.
 *
 * @param request GetVccRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVccRouteEntryResponse
 */
GetVccRouteEntryResponse Client::getVccRouteEntryWithOptions(const GetVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVccRouteEntryId()) {
    body["VccRouteEntryId"] = request.vccRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVccRouteEntry"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVccRouteEntryResponse>();
}

/**
 * @summary Queries route entries.
 *
 * @param request GetVccRouteEntryRequest
 * @return GetVccRouteEntryResponse
 */
GetVccRouteEntryResponse Client::getVccRouteEntry(const GetVccRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVccRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Lingjun CIDR block, including the status of the Lingjun CIDR block, the CIDR block, the number of subnets and NCs.
 *
 * @param request GetVpdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpdResponse
 */
GetVpdResponse Client::getVpdWithOptions(const GetVpdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVpd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpdResponse>();
}

/**
 * @summary Queries the details of a Lingjun CIDR block, including the status of the Lingjun CIDR block, the CIDR block, the number of subnets and NCs.
 *
 * @param request GetVpdRequest
 * @return GetVpdResponse
 */
GetVpdResponse Client::getVpd(const GetVpdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cross-account resource authorization for a Lingjun CIDR block, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
 *
 * @param request GetVpdGrantRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpdGrantRuleResponse
 */
GetVpdGrantRuleResponse Client::getVpdGrantRuleWithOptions(const GetVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVpdGrantRule"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpdGrantRuleResponse>();
}

/**
 * @summary Queries the details of cross-account resource authorization for a Lingjun CIDR block, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
 *
 * @param request GetVpdGrantRuleRequest
 * @return GetVpdGrantRuleResponse
 */
GetVpdGrantRuleResponse Client::getVpdGrantRule(const GetVpdGrantRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpdGrantRuleWithOptions(request, runtime);
}

/**
 * @summary Queries route entries.
 *
 * @param request GetVpdRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpdRouteEntryResponse
 */
GetVpdRouteEntryResponse Client::getVpdRouteEntryWithOptions(const GetVpdRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasVpdRouteEntryId()) {
    body["VpdRouteEntryId"] = request.vpdRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVpdRouteEntry"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpdRouteEntryResponse>();
}

/**
 * @summary Queries route entries.
 *
 * @param request GetVpdRouteEntryRequest
 * @return GetVpdRouteEntryResponse
 */
GetVpdRouteEntryResponse Client::getVpdRouteEntry(const GetVpdRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpdRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Initialize the Lingjun connection and authorize Intelligent Computing Lingjun to create an SLR in your account.
 *
 * @param request InitializeVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeVccResponse
 */
InitializeVccResponse Client::initializeVccWithOptions(const InitializeVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InitializeVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeVccResponse>();
}

/**
 * @summary Initialize the Lingjun connection and authorize Intelligent Computing Lingjun to create an SLR in your account.
 *
 * @param request InitializeVccRequest
 * @return InitializeVccResponse
 */
InitializeVccResponse Client::initializeVcc(const InitializeVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeVccWithOptions(request, runtime);
}

/**
 * @summary Queries the LENIs that are associated with a Lingjun node.
 *
 * @param request ListElasticNetworkInterfacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListElasticNetworkInterfacesResponse
 */
ListElasticNetworkInterfacesResponse Client::listElasticNetworkInterfacesWithOptions(const ListElasticNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasNetworkType()) {
    body["NetworkType"] = request.networkType();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListElasticNetworkInterfaces"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListElasticNetworkInterfacesResponse>();
}

/**
 * @summary Queries the LENIs that are associated with a Lingjun node.
 *
 * @param request ListElasticNetworkInterfacesRequest
 * @return ListElasticNetworkInterfacesResponse
 */
ListElasticNetworkInterfacesResponse Client::listElasticNetworkInterfaces(const ListElasticNetworkInterfacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listElasticNetworkInterfacesWithOptions(request, runtime);
}

/**
 * @summary Queries network instance connections.
 *
 * @param request ListErAttachmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListErAttachmentsResponse
 */
ListErAttachmentsResponse Client::listErAttachmentsWithOptions(const ListErAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoReceiveAllRoute()) {
    body["AutoReceiveAllRoute"] = request.autoReceiveAllRoute();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErAttachmentId()) {
    body["ErAttachmentId"] = request.erAttachmentId();
  }

  if (!!request.hasErAttachmentName()) {
    body["ErAttachmentName"] = request.erAttachmentName();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceTenantId()) {
    body["ResourceTenantId"] = request.resourceTenantId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListErAttachments"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListErAttachmentsResponse>();
}

/**
 * @summary Queries network instance connections.
 *
 * @param request ListErAttachmentsRequest
 * @return ListErAttachmentsResponse
 */
ListErAttachmentsResponse Client::listErAttachments(const ListErAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listErAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Queries the route entries of the Lingjun HUB.
 *
 * @param request ListErRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListErRouteEntriesResponse
 */
ListErRouteEntriesResponse Client::listErRouteEntriesWithOptions(const ListErRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasIgnoreDetailedRouteEntry()) {
    body["IgnoreDetailedRouteEntry"] = request.ignoreDetailedRouteEntry();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNextHopId()) {
    body["NextHopId"] = request.nextHopId();
  }

  if (!!request.hasNextHopType()) {
    body["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRouteType()) {
    body["RouteType"] = request.routeType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListErRouteEntries"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListErRouteEntriesResponse>();
}

/**
 * @summary Queries the route entries of the Lingjun HUB.
 *
 * @param request ListErRouteEntriesRequest
 * @return ListErRouteEntriesResponse
 */
ListErRouteEntriesResponse Client::listErRouteEntries(const ListErRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listErRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Routing policies are queried.
 *
 * @param request ListErRouteMapsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListErRouteMapsResponse
 */
ListErRouteMapsResponse Client::listErRouteMapsWithOptions(const ListErRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErRouteMapId()) {
    body["ErRouteMapId"] = request.erRouteMapId();
  }

  if (!!request.hasErRouteMapNum()) {
    body["ErRouteMapNum"] = request.erRouteMapNum();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasReceptionInstanceId()) {
    body["ReceptionInstanceId"] = request.receptionInstanceId();
  }

  if (!!request.hasReceptionInstanceName()) {
    body["ReceptionInstanceName"] = request.receptionInstanceName();
  }

  if (!!request.hasReceptionInstanceType()) {
    body["ReceptionInstanceType"] = request.receptionInstanceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRouteMapAction()) {
    body["RouteMapAction"] = request.routeMapAction();
  }

  if (!!request.hasTransmissionInstanceId()) {
    body["TransmissionInstanceId"] = request.transmissionInstanceId();
  }

  if (!!request.hasTransmissionInstanceName()) {
    body["TransmissionInstanceName"] = request.transmissionInstanceName();
  }

  if (!!request.hasTransmissionInstanceType()) {
    body["TransmissionInstanceType"] = request.transmissionInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListErRouteMaps"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListErRouteMapsResponse>();
}

/**
 * @summary Routing policies are queried.
 *
 * @param request ListErRouteMapsRequest
 * @return ListErRouteMapsResponse
 */
ListErRouteMapsResponse Client::listErRouteMaps(const ListErRouteMapsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listErRouteMapsWithOptions(request, runtime);
}

/**
 * @summary Queries the Lingjun HUB.
 *
 * @param request ListErsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListErsResponse
 */
ListErsResponse Client::listErsWithOptions(const ListErsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErName()) {
    body["ErName"] = request.erName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasMasterZoneId()) {
    body["MasterZoneId"] = request.masterZoneId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListErs"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListErsResponse>();
}

/**
 * @summary Queries the Lingjun HUB.
 *
 * @param request ListErsRequest
 * @return ListErsResponse
 */
ListErsResponse Client::listErs(const ListErsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listErsWithOptions(request, runtime);
}

/**
 * @summary Queries the GPU node list of a specified GPU node whose communication distance does not exceed the specified NCD.
 *
 * @param request ListInstancesByNcdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesByNcdResponse
 */
ListInstancesByNcdResponse Client::listInstancesByNcdWithOptions(const ListInstancesByNcdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasMaxNcd()) {
    body["MaxNcd"] = request.maxNcd();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstancesByNcd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesByNcdResponse>();
}

/**
 * @summary Queries the GPU node list of a specified GPU node whose communication distance does not exceed the specified NCD.
 *
 * @param request ListInstancesByNcdRequest
 * @return ListInstancesByNcdResponse
 */
ListInstancesByNcdResponse Client::listInstancesByNcd(const ListInstancesByNcdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesByNcdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of secondary private IP addresses of Lingjun Elastic Network Interface.
 *
 * @param request ListLeniPrivateIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLeniPrivateIpAddressesResponse
 */
ListLeniPrivateIpAddressesResponse Client::listLeniPrivateIpAddressesWithOptions(const ListLeniPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivateIpAddress()) {
    body["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLeniPrivateIpAddresses"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLeniPrivateIpAddressesResponse>();
}

/**
 * @summary Queries the list of secondary private IP addresses of Lingjun Elastic Network Interface.
 *
 * @param request ListLeniPrivateIpAddressesRequest
 * @return ListLeniPrivateIpAddressesResponse
 */
ListLeniPrivateIpAddressesResponse Client::listLeniPrivateIpAddresses(const ListLeniPrivateIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLeniPrivateIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of secondary private IP addresses of Lingjun network interface controller.
 *
 * @param request ListLniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLniPrivateIpAddressResponse
 */
ListLniPrivateIpAddressResponse Client::listLniPrivateIpAddressWithOptions(const ListLniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLniPrivateIpAddressResponse>();
}

/**
 * @summary Queries the list of secondary private IP addresses of Lingjun network interface controller.
 *
 * @param request ListLniPrivateIpAddressRequest
 * @return ListLniPrivateIpAddressResponse
 */
ListLniPrivateIpAddressResponse Client::listLniPrivateIpAddress(const ListLniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Queries Lingjun network interfaces (LNIs).
 *
 * @param request ListNetworkInterfacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkInterfacesResponse
 */
ListNetworkInterfacesResponse Client::listNetworkInterfacesWithOptions(const ListNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNetworkInterfaces"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkInterfacesResponse>();
}

/**
 * @summary Queries Lingjun network interfaces (LNIs).
 *
 * @param request ListNetworkInterfacesRequest
 * @return ListNetworkInterfacesResponse
 */
ListNetworkInterfacesResponse Client::listNetworkInterfaces(const ListNetworkInterfacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkInterfacesWithOptions(request, runtime);
}

/**
 * @summary Queries node network information.
 *
 * @param request ListNodeInfosForPodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeInfosForPodResponse
 */
ListNodeInfosForPodResponse Client::listNodeInfosForPodWithOptions(const ListNodeInfosForPodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodeInfosForPod"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeInfosForPodResponse>();
}

/**
 * @summary Queries node network information.
 *
 * @param request ListNodeInfosForPodRequest
 * @return ListNodeInfosForPodResponse
 */
ListNodeInfosForPodResponse Client::listNodeInfosForPod(const ListNodeInfosForPodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeInfosForPodWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query the details of one or more Lingjun subnets, including the Lingjun subnet type, network address segment, and instance ID of the Lingjun CIDR block.
 *
 * @param request ListSubnetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubnetsResponse
 */
ListSubnetsResponse Client::listSubnetsWithOptions(const ListSubnetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  if (!!request.hasSubnetName()) {
    body["SubnetName"] = request.subnetName();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSubnets"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubnetsResponse>();
}

/**
 * @summary You can call this operation to query the details of one or more Lingjun subnets, including the Lingjun subnet type, network address segment, and instance ID of the Lingjun CIDR block.
 *
 * @param request ListSubnetsRequest
 * @return ListSubnetsResponse
 */
ListSubnetsResponse Client::listSubnets(const ListSubnetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubnetsWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic rate of a Lingjun connection.
 *
 * @param request ListVccFlowInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVccFlowInfosResponse
 */
ListVccFlowInfosResponse Client::listVccFlowInfosWithOptions(const ListVccFlowInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDirection()) {
    body["Direction"] = request.direction();
  }

  if (!!request.hasFrom()) {
    body["From"] = request.from();
  }

  if (!!request.hasMetricName()) {
    body["MetricName"] = request.metricName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTo()) {
    body["To"] = request.to();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVccFlowInfos"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVccFlowInfosResponse>();
}

/**
 * @summary Queries the traffic rate of a Lingjun connection.
 *
 * @param request ListVccFlowInfosRequest
 * @return ListVccFlowInfosResponse
 */
ListVccFlowInfosResponse Client::listVccFlowInfos(const ListVccFlowInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVccFlowInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Lingjun connection authorization, including the authorized tenant ID, region, and Lingjun HUB instance information.
 *
 * @param request ListVccGrantRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVccGrantRulesResponse
 */
ListVccGrantRulesResponse Client::listVccGrantRulesWithOptions(const ListVccGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasForSelect()) {
    body["ForSelect"] = request.forSelect();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVccGrantRules"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVccGrantRulesResponse>();
}

/**
 * @summary Queries the details of a Lingjun connection authorization, including the authorized tenant ID, region, and Lingjun HUB instance information.
 *
 * @param request ListVccGrantRulesRequest
 * @return ListVccGrantRulesResponse
 */
ListVccGrantRulesResponse Client::listVccGrantRules(const ListVccGrantRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVccGrantRulesWithOptions(request, runtime);
}

/**
 * @summary Queries Lingjun connection route entries.
 *
 * @param request ListVccRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVccRouteEntriesResponse
 */
ListVccRouteEntriesResponse Client::listVccRouteEntriesWithOptions(const ListVccRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasIgnoreDetailedRouteEntry()) {
    body["IgnoreDetailedRouteEntry"] = request.ignoreDetailedRouteEntry();
  }

  if (!!request.hasNextHopId()) {
    body["NextHopId"] = request.nextHopId();
  }

  if (!!request.hasNextHopType()) {
    body["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRouteType()) {
    body["RouteType"] = request.routeType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVpdRouteEntryId()) {
    body["VpdRouteEntryId"] = request.vpdRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVccRouteEntries"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVccRouteEntriesResponse>();
}

/**
 * @summary Queries Lingjun connection route entries.
 *
 * @param request ListVccRouteEntriesRequest
 * @return ListVccRouteEntriesResponse
 */
ListVccRouteEntriesResponse Client::listVccRouteEntries(const ListVccRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVccRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary query the details of one or more lingjun connections, including the specification, Express Connect circuit access port type, instance status, bandwidth, and bgp network segment.
 *
 * @param request ListVccsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVccsResponse
 */
ListVccsResponse Client::listVccsWithOptions(const ListVccsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.cenId();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasExStatus()) {
    body["ExStatus"] = request.exStatus();
  }

  if (!!request.hasFilterErId()) {
    body["FilterErId"] = request.filterErId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVccs"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVccsResponse>();
}

/**
 * @summary query the details of one or more lingjun connections, including the specification, Express Connect circuit access port type, instance status, bandwidth, and bgp network segment.
 *
 * @param request ListVccsRequest
 * @return ListVccsResponse
 */
ListVccsResponse Client::listVccs(const ListVccsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVccsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more route entries in the CIDR block of Lingjun, including the route type, route entry status, destination CIDR block, and instance information of the next route entry.
 *
 * @param request ListVpdGrantRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpdGrantRulesResponse
 */
ListVpdGrantRulesResponse Client::listVpdGrantRulesWithOptions(const ListVpdGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasForSelect()) {
    body["ForSelect"] = request.forSelect();
  }

  if (!!request.hasGrantRuleId()) {
    body["GrantRuleId"] = request.grantRuleId();
  }

  if (!!request.hasGrantTenantId()) {
    body["GrantTenantId"] = request.grantTenantId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVpdGrantRules"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpdGrantRulesResponse>();
}

/**
 * @summary Queries the details of one or more route entries in the CIDR block of Lingjun, including the route type, route entry status, destination CIDR block, and instance information of the next route entry.
 *
 * @param request ListVpdGrantRulesRequest
 * @return ListVpdGrantRulesResponse
 */
ListVpdGrantRulesResponse Client::listVpdGrantRules(const ListVpdGrantRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpdGrantRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the route entries of the Lingjun CIDR block.
 *
 * @param request ListVpdRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpdRouteEntriesResponse
 */
ListVpdRouteEntriesResponse Client::listVpdRouteEntriesWithOptions(const ListVpdRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasIgnoreDetailedRouteEntry()) {
    body["IgnoreDetailedRouteEntry"] = request.ignoreDetailedRouteEntry();
  }

  if (!!request.hasNextHopId()) {
    body["NextHopId"] = request.nextHopId();
  }

  if (!!request.hasNextHopType()) {
    body["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRouteType()) {
    body["RouteType"] = request.routeType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasVpdRouteEntryId()) {
    body["VpdRouteEntryId"] = request.vpdRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVpdRouteEntries"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpdRouteEntriesResponse>();
}

/**
 * @summary Queries the route entries of the Lingjun CIDR block.
 *
 * @param request ListVpdRouteEntriesRequest
 * @return ListVpdRouteEntriesResponse
 */
ListVpdRouteEntriesResponse Client::listVpdRouteEntries(const ListVpdRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpdRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more Lingjun CIDR blocks, including the status of Lingjun CIDR blocks, Cidr addresses, service CIDR blocks, and Subnet.
 *
 * @param request ListVpdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpdsResponse
 */
ListVpdsResponse Client::listVpdsWithOptions(const ListVpdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePage()) {
    body["EnablePage"] = request.enablePage();
  }

  if (!!request.hasFilterErId()) {
    body["FilterErId"] = request.filterErId();
  }

  if (!!request.hasForSelect()) {
    body["ForSelect"] = request.forSelect();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasVpdName()) {
    body["VpdName"] = request.vpdName();
  }

  if (!!request.hasWithDependence()) {
    body["WithDependence"] = request.withDependence();
  }

  if (!!request.hasWithoutVcc()) {
    body["WithoutVcc"] = request.withoutVcc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVpds"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpdsResponse>();
}

/**
 * @summary Queries the details of one or more Lingjun CIDR blocks, including the status of Lingjun CIDR blocks, Cidr addresses, service CIDR blocks, and Subnet.
 *
 * @param request ListVpdsRequest
 * @return ListVpdsResponse
 */
ListVpdsResponse Client::listVpds(const ListVpdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpdsWithOptions(request, runtime);
}

/**
 * @summary Query the network communication distance (Network Communication Distance,NCD) between instances (Lingjun node, Lingjun network interface controller).
 *
 * @param request QueryInstanceNcdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceNcdResponse
 */
QueryInstanceNcdResponse Client::queryInstanceNcdWithOptions(const QueryInstanceNcdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId1()) {
    body["InstanceId1"] = request.instanceId1();
  }

  if (!!request.hasInstanceId2()) {
    body["InstanceId2"] = request.instanceId2();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryInstanceNcd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceNcdResponse>();
}

/**
 * @summary Query the network communication distance (Network Communication Distance,NCD) between instances (Lingjun node, Lingjun network interface controller).
 *
 * @param request QueryInstanceNcdRequest
 * @return QueryInstanceNcdResponse
 */
QueryInstanceNcdResponse Client::queryInstanceNcd(const QueryInstanceNcdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceNcdWithOptions(request, runtime);
}

/**
 * @summary Unsubscribe inactive Lingjun connection
 *
 * @description Only unsubscribable for Lingjun connections in the prepayment status.
 *
 * @param request RefundVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundVccResponse
 */
RefundVccResponse Client::refundVccWithOptions(const RefundVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RefundVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundVccResponse>();
}

/**
 * @summary Unsubscribe inactive Lingjun connection
 *
 * @description Only unsubscribable for Lingjun connections in the prepayment status.
 *
 * @param request RefundVccRequest
 * @return RefundVccResponse
 */
RefundVccResponse Client::refundVcc(const RefundVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refundVccWithOptions(request, runtime);
}

/**
 * @summary Retry trying to create /delete a Lingjun connection.
 *
 * @description This operation allows the user to retry the operation if the Lingjun connection creation and deletion processes fail. Only the Lingjun connection in the creation failure and deletion failure state can be retried
 *
 * @param request RetryVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryVccResponse
 */
RetryVccResponse Client::retryVccWithOptions(const RetryVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RetryVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryVccResponse>();
}

/**
 * @summary Retry trying to create /delete a Lingjun connection.
 *
 * @description This operation allows the user to retry the operation if the Lingjun connection creation and deletion processes fail. Only the Lingjun connection in the creation failure and deletion failure state can be retried
 *
 * @param request RetryVccRequest
 * @return RetryVccResponse
 */
RetryVccResponse Client::retryVcc(const RetryVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryVccWithOptions(request, runtime);
}

/**
 * @summary Switch the VCC connection instance or type
 *
 * @param request SwitchVccConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchVccConnectionResponse
 */
SwitchVccConnectionResponse Client::switchVccConnectionWithOptions(const SwitchVccConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCenId()) {
    body["CenId"] = request.cenId();
  }

  if (!!request.hasConnectionType()) {
    body["ConnectionType"] = request.connectionType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SwitchVccConnection"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchVccConnectionResponse>();
}

/**
 * @summary Switch the VCC connection instance or type
 *
 * @param request SwitchVccConnectionRequest
 * @return SwitchVccConnectionResponse
 */
SwitchVccConnectionResponse Client::switchVccConnection(const SwitchVccConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchVccConnectionWithOptions(request, runtime);
}

/**
 * @summary Deletes an assigned secondary private IP address.
 *
 * @param request UnAssignPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnAssignPrivateIpAddressResponse
 */
UnAssignPrivateIpAddressResponse Client::unAssignPrivateIpAddressWithOptions(const UnAssignPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasNetworkInterfaceId()) {
    body["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    body["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnAssignPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnAssignPrivateIpAddressResponse>();
}

/**
 * @summary Deletes an assigned secondary private IP address.
 *
 * @param request UnAssignPrivateIpAddressRequest
 * @return UnAssignPrivateIpAddressResponse
 */
UnAssignPrivateIpAddressResponse Client::unAssignPrivateIpAddress(const UnAssignPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unAssignPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary This function can be used to delete the additional network segment of VPD.
 *
 * @description **
 * **Warning** If the attached CIDR block has Lingjun subnet resources, you must delete the dependent resources before you can delete the attached CIDR block.
 *
 * @param request UnAssociateVpdCidrBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnAssociateVpdCidrBlockResponse
 */
UnAssociateVpdCidrBlockResponse Client::unAssociateVpdCidrBlockWithOptions(const UnAssociateVpdCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSecondaryCidrBlock()) {
    body["SecondaryCidrBlock"] = request.secondaryCidrBlock();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnAssociateVpdCidrBlock"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnAssociateVpdCidrBlockResponse>();
}

/**
 * @summary This function can be used to delete the additional network segment of VPD.
 *
 * @description **
 * **Warning** If the attached CIDR block has Lingjun subnet resources, you must delete the dependent resources before you can delete the attached CIDR block.
 *
 * @param request UnAssociateVpdCidrBlockRequest
 * @return UnAssociateVpdCidrBlockResponse
 */
UnAssociateVpdCidrBlockResponse Client::unAssociateVpdCidrBlock(const UnAssociateVpdCidrBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unAssociateVpdCidrBlockWithOptions(request, runtime);
}

/**
 * @summary Delete the assigned secondary private IP address of Lingjun Elastic Network Interface.
 *
 * @param request UnassignLeniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassignLeniPrivateIpAddressResponse
 */
UnassignLeniPrivateIpAddressResponse Client::unassignLeniPrivateIpAddressWithOptions(const UnassignLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnassignLeniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassignLeniPrivateIpAddressResponse>();
}

/**
 * @summary Delete the assigned secondary private IP address of Lingjun Elastic Network Interface.
 *
 * @param request UnassignLeniPrivateIpAddressRequest
 * @return UnassignLeniPrivateIpAddressResponse
 */
UnassignLeniPrivateIpAddressResponse Client::unassignLeniPrivateIpAddress(const UnassignLeniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassignLeniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Update Lingjun Elastic Network Interface information.
 *
 * @param request UpdateElasticNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateElasticNetworkInterfaceResponse
 */
UpdateElasticNetworkInterfaceResponse Client::updateElasticNetworkInterfaceWithOptions(const UpdateElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateElasticNetworkInterface"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateElasticNetworkInterfaceResponse>();
}

/**
 * @summary Update Lingjun Elastic Network Interface information.
 *
 * @param request UpdateElasticNetworkInterfaceRequest
 * @return UpdateElasticNetworkInterfaceResponse
 */
UpdateElasticNetworkInterfaceResponse Client::updateElasticNetworkInterface(const UpdateElasticNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateElasticNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Updated Lingjun HUB.
 *
 * @param request UpdateErRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateErResponse
 */
UpdateErResponse Client::updateErWithOptions(const UpdateErRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErName()) {
    body["ErName"] = request.erName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateEr"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateErResponse>();
}

/**
 * @summary Updated Lingjun HUB.
 *
 * @param request UpdateErRequest
 * @return UpdateErResponse
 */
UpdateErResponse Client::updateEr(const UpdateErRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateErWithOptions(request, runtime);
}

/**
 * @summary Updates a network instance connection.
 *
 * @param request UpdateErAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateErAttachmentResponse
 */
UpdateErAttachmentResponse Client::updateErAttachmentWithOptions(const UpdateErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasErAttachmentId()) {
    body["ErAttachmentId"] = request.erAttachmentId();
  }

  if (!!request.hasErAttachmentName()) {
    body["ErAttachmentName"] = request.erAttachmentName();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateErAttachment"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateErAttachmentResponse>();
}

/**
 * @summary Updates a network instance connection.
 *
 * @param request UpdateErAttachmentRequest
 * @return UpdateErAttachmentResponse
 */
UpdateErAttachmentResponse Client::updateErAttachment(const UpdateErAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateErAttachmentWithOptions(request, runtime);
}

/**
 * @summary Update some information about the routing policy, including the description and name of the routing policy.
 *
 * @param request UpdateErRouteMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateErRouteMapResponse
 */
UpdateErRouteMapResponse Client::updateErRouteMapWithOptions(const UpdateErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasErId()) {
    body["ErId"] = request.erId();
  }

  if (!!request.hasErRouteMapId()) {
    body["ErRouteMapId"] = request.erRouteMapId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateErRouteMap"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateErRouteMapResponse>();
}

/**
 * @summary Update some information about the routing policy, including the description and name of the routing policy.
 *
 * @param request UpdateErRouteMapRequest
 * @return UpdateErRouteMapResponse
 */
UpdateErRouteMapResponse Client::updateErRouteMap(const UpdateErRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateErRouteMapWithOptions(request, runtime);
}

/**
 * @summary Updated the description of the secondary private network assigned by the Lingjun Elastic Network Interface.
 *
 * @param request UpdateLeniPrivateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLeniPrivateIpAddressResponse
 */
UpdateLeniPrivateIpAddressResponse Client::updateLeniPrivateIpAddressWithOptions(const UpdateLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasElasticNetworkInterfaceId()) {
    body["ElasticNetworkInterfaceId"] = request.elasticNetworkInterfaceId();
  }

  if (!!request.hasIpName()) {
    body["IpName"] = request.ipName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLeniPrivateIpAddress"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLeniPrivateIpAddressResponse>();
}

/**
 * @summary Updated the description of the secondary private network assigned by the Lingjun Elastic Network Interface.
 *
 * @param request UpdateLeniPrivateIpAddressRequest
 * @return UpdateLeniPrivateIpAddressResponse
 */
UpdateLeniPrivateIpAddressResponse Client::updateLeniPrivateIpAddress(const UpdateLeniPrivateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLeniPrivateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Updates some information about a specified subnet instance, including the name of the subnet instance.
 *
 * @param request UpdateSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubnetResponse
 */
UpdateSubnetResponse Client::updateSubnetWithOptions(const UpdateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubnetId()) {
    body["SubnetId"] = request.subnetId();
  }

  if (!!request.hasSubnetName()) {
    body["SubnetName"] = request.subnetName();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSubnet"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubnetResponse>();
}

/**
 * @summary Updates some information about a specified subnet instance, including the name of the subnet instance.
 *
 * @param request UpdateSubnetRequest
 * @return UpdateSubnetResponse
 */
UpdateSubnetResponse Client::updateSubnet(const UpdateSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubnetWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Lingjun connection instance, including the peak bandwidth and name of the Lingjun connection instance.
 *
 * @param request UpdateVccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVccResponse
 */
UpdateVccResponse Client::updateVccWithOptions(const UpdateVccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasOrderId()) {
    body["OrderId"] = request.orderId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVccId()) {
    body["VccId"] = request.vccId();
  }

  if (!!request.hasVccName()) {
    body["VccName"] = request.vccName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVcc"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVccResponse>();
}

/**
 * @summary Updates the information about a Lingjun connection instance, including the peak bandwidth and name of the Lingjun connection instance.
 *
 * @param request UpdateVccRequest
 * @return UpdateVccResponse
 */
UpdateVccResponse Client::updateVcc(const UpdateVccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVccWithOptions(request, runtime);
}

/**
 * @summary Updates the information about the Lingjun CIDR block, including the name of the Lingjun CIDR block.
 *
 * @param request UpdateVpdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpdResponse
 */
UpdateVpdResponse Client::updateVpdWithOptions(const UpdateVpdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpdId()) {
    body["VpdId"] = request.vpdId();
  }

  if (!!request.hasVpdName()) {
    body["VpdName"] = request.vpdName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVpd"},
    {"version" , "2022-05-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpdResponse>();
}

/**
 * @summary Updates the information about the Lingjun CIDR block, including the name of the Lingjun CIDR block.
 *
 * @param request UpdateVpdRequest
 * @return UpdateVpdResponse
 */
UpdateVpdResponse Client::updateVpd(const UpdateVpdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpdWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eflo20220530