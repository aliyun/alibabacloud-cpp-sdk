#include <darabonba/Core.hpp>
#include <alibabacloud/Ens20171110.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ens20171110::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ens20171110
{

AlibabaCloud::Ens20171110::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ens", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Associates a network access control list (ACL) with a network.
 *
 * @param request AccosicateNetworkAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccosicateNetworkAclResponse
 */
AccosicateNetworkAclResponse Client::accosicateNetworkAclWithOptions(const AccosicateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkAclId()) {
    query["NetworkAclId"] = request.getNetworkAclId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AccosicateNetworkAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccosicateNetworkAclResponse>();
}

/**
 * @summary Associates a network access control list (ACL) with a network.
 *
 * @param request AccosicateNetworkAclRequest
 * @return AccosicateNetworkAclResponse
 */
AccosicateNetworkAclResponse Client::accosicateNetworkAcl(const AccosicateNetworkAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accosicateNetworkAclWithOptions(request, runtime);
}

/**
 * @summary Adds backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param tmpReq AddBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServersWithOptions(const AddBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddBackendServersShrinkRequest request = AddBackendServersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBackendServers()) {
    request.setBackendServersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackendServers(), "BackendServers", "json"));
  }

  json query = {};
  if (!!request.hasBackendServersShrink()) {
    query["BackendServers"] = request.getBackendServersShrink();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBackendServers"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBackendServersResponse>();
}

/**
 * @summary Adds backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request AddBackendServersRequest
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServers(const AddBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBackendServersWithOptions(request, runtime);
}

/**
 * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 5 times per second per user.
 * *   Internal networks and IPv4 addresses are not supported.
 *
 * @param request AddNetworkInterfaceToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddNetworkInterfaceToInstanceResponse
 */
AddNetworkInterfaceToInstanceResponse Client::addNetworkInterfaceToInstanceWithOptions(const AddNetworkInterfaceToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworks()) {
    query["Networks"] = request.getNetworks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddNetworkInterfaceToInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddNetworkInterfaceToInstanceResponse>();
}

/**
 * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 5 times per second per user.
 * *   Internal networks and IPv4 addresses are not supported.
 *
 * @param request AddNetworkInterfaceToInstanceRequest
 * @return AddNetworkInterfaceToInstanceResponse
 */
AddNetworkInterfaceToInstanceResponse Client::addNetworkInterfaceToInstance(const AddNetworkInterfaceToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addNetworkInterfaceToInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds an elastic IP address (EIP) to a Source Network Address Translation (SNAT) entry.
 *
 * @param request AddSnatIpForSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSnatIpForSnatEntryResponse
 */
AddSnatIpForSnatEntryResponse Client::addSnatIpForSnatEntryWithOptions(const AddSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSnatIpForSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSnatIpForSnatEntryResponse>();
}

/**
 * @summary Adds an elastic IP address (EIP) to a Source Network Address Translation (SNAT) entry.
 *
 * @param request AddSnatIpForSnatEntryRequest
 * @return AddSnatIpForSnatEntryResponse
 */
AddSnatIpForSnatEntryResponse Client::addSnatIpForSnatEntry(const AddSnatIpForSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSnatIpForSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Assigns secondary private IP addresses to an elastic network interface (ENI).
 *
 * @param request AssignPrivateIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignPrivateIpAddressesResponse
 */
AssignPrivateIpAddressesResponse Client::assignPrivateIpAddressesWithOptions(const AssignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignPrivateIpAddresses"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignPrivateIpAddressesResponse>();
}

/**
 * @summary Assigns secondary private IP addresses to an elastic network interface (ENI).
 *
 * @param request AssignPrivateIpAddressesRequest
 * @return AssignPrivateIpAddressesResponse
 */
AssignPrivateIpAddressesResponse Client::assignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignPrivateIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Associates an elastic IP address (EIP) with a cloud resource that is deployed in the same region.
 *
 * @param request AssociateEnsEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateEnsEipAddressResponse
 */
AssociateEnsEipAddressResponse Client::associateEnsEipAddressWithOptions(const AssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasStandby()) {
    query["Standby"] = request.getStandby();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateEnsEipAddress"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateEnsEipAddressResponse>();
}

/**
 * @summary Associates an elastic IP address (EIP) with a cloud resource that is deployed in the same region.
 *
 * @param request AssociateEnsEipAddressRequest
 * @return AssociateEnsEipAddressResponse
 */
AssociateEnsEipAddressResponse Client::associateEnsEipAddress(const AssociateEnsEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateEnsEipAddressWithOptions(request, runtime);
}

/**
 * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
 *
 * @description When you call this operation to associate an HAVIP, take note of the following items:
 * *   An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
 * *   The HAVIP and ENS instance must belong to the same vSwitch.
 * *   The ENS instance must be in the Running or Stopped state.
 * *   The HAVIP must be in the Available or InUse state.
 * *   AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
 *     *   If the HAVIP is in the Associating state, the HAVIP is being associated.
 *     <!---->
 *     *   If the HAVIP is in the InUse state, the HAVIP is associated.
 *
 * @param request AssociateHaVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateHaVipResponse
 */
AssociateHaVipResponse Client::associateHaVipWithOptions(const AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHaVipId()) {
    query["HaVipId"] = request.getHaVipId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateHaVip"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateHaVipResponse>();
}

/**
 * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
 *
 * @description When you call this operation to associate an HAVIP, take note of the following items:
 * *   An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
 * *   The HAVIP and ENS instance must belong to the same vSwitch.
 * *   The ENS instance must be in the Running or Stopped state.
 * *   The HAVIP must be in the Available or InUse state.
 * *   AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
 *     *   If the HAVIP is in the Associating state, the HAVIP is being associated.
 *     <!---->
 *     *   If the HAVIP is in the InUse state, the HAVIP is associated.
 *
 * @param request AssociateHaVipRequest
 * @return AssociateHaVipResponse
 */
AssociateHaVipResponse Client::associateHaVip(const AssociateHaVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateHaVipWithOptions(request, runtime);
}

/**
 * @summary Attaches a disk to an Edge Node Service (ENS) instance.
 *
 * @param request AttachDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDiskResponse
 */
AttachDiskResponse Client::attachDiskWithOptions(const AttachDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteWithInstance()) {
    query["DeleteWithInstance"] = request.getDeleteWithInstance();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDiskResponse>();
}

/**
 * @summary Attaches a disk to an Edge Node Service (ENS) instance.
 *
 * @param request AttachDiskRequest
 * @return AttachDiskResponse
 */
AttachDiskResponse Client::attachDisk(const AttachDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDiskWithOptions(request, runtime);
}

/**
 * @summary Adds an Edge Node Service (ENS) instance to Container Service for Kubernetes (ACK).
 *
 * @description # [](#)Usage notes
 * *   You can call this operation up to 10 times per second per account.
 * *   After you execute the command, the instance restarts loading.
 * *   Limits: The instance has at least two vCPUs and 4 GB memory. An image of CentOS 7.4 or later is required.
 *
 * @param request AttachEnsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachEnsInstancesResponse
 */
AttachEnsInstancesResponse Client::attachEnsInstancesWithOptions(const AttachEnsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScripts()) {
    query["Scripts"] = request.getScripts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachEnsInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachEnsInstancesResponse>();
}

/**
 * @summary Adds an Edge Node Service (ENS) instance to Container Service for Kubernetes (ACK).
 *
 * @description # [](#)Usage notes
 * *   You can call this operation up to 10 times per second per account.
 * *   After you execute the command, the instance restarts loading.
 * *   Limits: The instance has at least two vCPUs and 4 GB memory. An image of CentOS 7.4 or later is required.
 *
 * @param request AttachEnsInstancesRequest
 * @return AttachEnsInstancesResponse
 */
AttachEnsInstancesResponse Client::attachEnsInstances(const AttachEnsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachEnsInstancesWithOptions(request, runtime);
}

/**
 * @summary Attaches a shared data group (SDG) to the corresponding Android in Container (AIC) instance.
 *
 * @param tmpReq AttachInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachInstanceSDGResponse
 */
AttachInstanceSDGResponse Client::attachInstanceSDGWithOptions(const AttachInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachInstanceSDGShrinkRequest request = AttachInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasLoadOpt()) {
    request.setLoadOptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLoadOpt(), "LoadOpt", "json"));
  }

  json query = {};
  if (!!request.hasDiskAccessProtocol()) {
    query["DiskAccessProtocol"] = request.getDiskAccessProtocol();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasLoadOptShrink()) {
    query["LoadOpt"] = request.getLoadOptShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachInstanceSDGResponse>();
}

/**
 * @summary Attaches a shared data group (SDG) to the corresponding Android in Container (AIC) instance.
 *
 * @param request AttachInstanceSDGRequest
 * @return AttachInstanceSDGResponse
 */
AttachInstanceSDGResponse Client::attachInstanceSDG(const AttachInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Attaches an Elastic Network Interface (ENI) to an Edge Node Service (ECS) instance.
 *
 * @description When you call this operation, take note of the following limits:
 * *   The ENI must be in the Available state.
 * *   An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
 * *   The instance must be in the Stopped state.
 * *   A maximum of 10 ENIs can be attached to an instance.
 * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
 *
 * @param request AttachNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachNetworkInterfaceResponse
 */
AttachNetworkInterfaceResponse Client::attachNetworkInterfaceWithOptions(const AttachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachNetworkInterface"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachNetworkInterfaceResponse>();
}

/**
 * @summary Attaches an Elastic Network Interface (ENI) to an Edge Node Service (ECS) instance.
 *
 * @description When you call this operation, take note of the following limits:
 * *   The ENI must be in the Available state.
 * *   An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
 * *   The instance must be in the Stopped state.
 * *   A maximum of 10 ENIs can be attached to an instance.
 * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
 *
 * @param request AttachNetworkInterfaceRequest
 * @return AttachNetworkInterfaceResponse
 */
AttachNetworkInterfaceResponse Client::attachNetworkInterface(const AttachNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Creates an inbound security group rule. This operation allows or denies the inbound traffic from other devices to instances in the security group.
 *
 * @param request AuthorizeSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeSecurityGroupResponse
 */
AuthorizeSecurityGroupResponse Client::authorizeSecurityGroupWithOptions(const AuthorizeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeSecurityGroupResponse>();
}

/**
 * @summary Creates an inbound security group rule. This operation allows or denies the inbound traffic from other devices to instances in the security group.
 *
 * @param request AuthorizeSecurityGroupRequest
 * @return AuthorizeSecurityGroupResponse
 */
AuthorizeSecurityGroupResponse Client::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an outbound security group rule. This operation allows or denies the outbound traffic from the instances in the security group to other devices.
 *
 * @description In the security group-related API documents, outbound traffic refers to the traffic that is sent by the source device and received at the destination device.
 *
 * @param request AuthorizeSecurityGroupEgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeSecurityGroupEgressResponse
 */
AuthorizeSecurityGroupEgressResponse Client::authorizeSecurityGroupEgressWithOptions(const AuthorizeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestCidrIp()) {
    query["DestCidrIp"] = request.getDestCidrIp();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeSecurityGroupEgress"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeSecurityGroupEgressResponse>();
}

/**
 * @summary Creates an outbound security group rule. This operation allows or denies the outbound traffic from the instances in the security group to other devices.
 *
 * @description In the security group-related API documents, outbound traffic refers to the traffic that is sent by the source device and received at the destination device.
 *
 * @param request AuthorizeSecurityGroupEgressRequest
 * @return AuthorizeSecurityGroupEgressResponse
 */
AuthorizeSecurityGroupEgressResponse Client::authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeSecurityGroupEgressWithOptions(request, runtime);
}

/**
 * @summary Migrates multiple instances in a specified event at a time. You can execute the task immediately or schedule the task execution.
 *
 * @description ## [](#)Request description
 * *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
 *
 * @param tmpReq BatchEventMigrateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchEventMigrateInstanceResponse
 */
BatchEventMigrateInstanceResponse Client::batchEventMigrateInstanceWithOptions(const BatchEventMigrateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchEventMigrateInstanceShrinkRequest request = BatchEventMigrateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventInfos()) {
    request.setEventInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventInfos(), "EventInfos", "json"));
  }

  json query = {};
  if (!!request.hasEventInfosShrink()) {
    query["EventInfos"] = request.getEventInfosShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchEventMigrateInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchEventMigrateInstanceResponse>();
}

/**
 * @summary Migrates multiple instances in a specified event at a time. You can execute the task immediately or schedule the task execution.
 *
 * @description ## [](#)Request description
 * *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
 *
 * @param request BatchEventMigrateInstanceRequest
 * @return BatchEventMigrateInstanceResponse
 */
BatchEventMigrateInstanceResponse Client::batchEventMigrateInstance(const BatchEventMigrateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchEventMigrateInstanceWithOptions(request, runtime);
}

/**
 * @summary The event that is used to immediately redeploy specified resources in batches or by appointment
 *
 * @description *   This O\\&M operation supports only the following event types: Instance:SystemMaintenance.Reboot (instance reboot due to system problems)
 *
 * @param tmpReq BatchEventRebootInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchEventRebootInstanceResponse
 */
BatchEventRebootInstanceResponse Client::batchEventRebootInstanceWithOptions(const BatchEventRebootInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchEventRebootInstanceShrinkRequest request = BatchEventRebootInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventInfos()) {
    request.setEventInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventInfos(), "EventInfos", "json"));
  }

  json query = {};
  if (!!request.hasEventInfosShrink()) {
    query["EventInfos"] = request.getEventInfosShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchEventRebootInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchEventRebootInstanceResponse>();
}

/**
 * @summary The event that is used to immediately redeploy specified resources in batches or by appointment
 *
 * @description *   This O\\&M operation supports only the following event types: Instance:SystemMaintenance.Reboot (instance reboot due to system problems)
 *
 * @param request BatchEventRebootInstanceRequest
 * @return BatchEventRebootInstanceResponse
 */
BatchEventRebootInstanceResponse Client::batchEventRebootInstance(const BatchEventRebootInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchEventRebootInstanceWithOptions(request, runtime);
}

/**
 * @summary Batch redeployment
 *
 * @description - This operation currently only supports event types: Instance:SystemFailure.Redeploy (redeploy instance due to system issues), Instance:SystemMaintenance.Redeploy (redeploy instance due to system maintenance)
 *
 * @param tmpReq BatchEventRedeployInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchEventRedeployInstanceResponse
 */
BatchEventRedeployInstanceResponse Client::batchEventRedeployInstanceWithOptions(const BatchEventRedeployInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchEventRedeployInstanceShrinkRequest request = BatchEventRedeployInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventInfos()) {
    request.setEventInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventInfos(), "EventInfos", "json"));
  }

  json query = {};
  if (!!request.hasEventInfosShrink()) {
    query["EventInfos"] = request.getEventInfosShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchEventRedeployInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchEventRedeployInstanceResponse>();
}

/**
 * @summary Batch redeployment
 *
 * @description - This operation currently only supports event types: Instance:SystemFailure.Redeploy (redeploy instance due to system issues), Instance:SystemMaintenance.Redeploy (redeploy instance due to system maintenance)
 *
 * @param request BatchEventRedeployInstanceRequest
 * @return BatchEventRedeployInstanceResponse
 */
BatchEventRedeployInstanceResponse Client::batchEventRedeployInstance(const BatchEventRedeployInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchEventRedeployInstanceWithOptions(request, runtime);
}

/**
 * @summary 清理分发数据
 *
 * @param request CleanDistDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CleanDistDataResponse
 */
CleanDistDataResponse Client::cleanDistDataWithOptions(const CleanDistDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDataName()) {
    query["DataName"] = request.getDataName();
  }

  if (!!request.hasDataVersion()) {
    query["DataVersion"] = request.getDataVersion();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CleanDistData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CleanDistDataResponse>();
}

/**
 * @summary 清理分发数据
 *
 * @param request CleanDistDataRequest
 * @return CleanDistDataResponse
 */
CleanDistDataResponse Client::cleanDistData(const CleanDistDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cleanDistDataWithOptions(request, runtime);
}

/**
 * @summary Copies a shared data group (SDG) across nodes.
 *
 * @param tmpReq CopySDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopySDGResponse
 */
CopySDGResponse Client::copySDGWithOptions(const CopySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CopySDGShrinkRequest request = CopySDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestinationRegionIds()) {
    request.setDestinationRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestinationRegionIds(), "DestinationRegionIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopySDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopySDGResponse>();
}

/**
 * @summary Copies a shared data group (SDG) across nodes.
 *
 * @param request CopySDGRequest
 * @return CopySDGResponse
 */
CopySDGResponse Client::copySDG(const CopySDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copySDGWithOptions(request, runtime);
}

/**
 * @summary Copies a snapshot across nodes.
 *
 * @param tmpReq CopySnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopySnapshotResponse
 */
CopySnapshotResponse Client::copySnapshotWithOptions(const CopySnapshotRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CopySnapshotShrinkRequest request = CopySnapshotShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestinationRegionIds()) {
    request.setDestinationRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestinationRegionIds(), "DestinationRegionIds", "json"));
  }

  json query = {};
  if (!!request.hasDestinationRegionIdsShrink()) {
    query["DestinationRegionIds"] = request.getDestinationRegionIdsShrink();
  }

  if (!!request.hasDestinationSnapshotDescription()) {
    query["DestinationSnapshotDescription"] = request.getDestinationSnapshotDescription();
  }

  if (!!request.hasDestinationSnapshotName()) {
    query["DestinationSnapshotName"] = request.getDestinationSnapshotName();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopySnapshot"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopySnapshotResponse>();
}

/**
 * @summary Copies a snapshot across nodes.
 *
 * @param request CopySnapshotRequest
 * @return CopySnapshotResponse
 */
CopySnapshotResponse Client::copySnapshot(const CopySnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copySnapshotWithOptions(request, runtime);
}

/**
 * @summary Creates an ARM server.
 *
 * @param request CreateARMServerInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateARMServerInstancesResponse
 */
CreateARMServerInstancesResponse Client::createARMServerInstancesWithOptions(const CreateARMServerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnvironmentVar()) {
    query["EnvironmentVar"] = request.getEnvironmentVar();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.getFrequency();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasNameSpace()) {
    query["NameSpace"] = request.getNameSpace();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasServerName()) {
    query["ServerName"] = request.getServerName();
  }

  if (!!request.hasServerType()) {
    query["ServerType"] = request.getServerType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateARMServerInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateARMServerInstancesResponse>();
}

/**
 * @summary Creates an ARM server.
 *
 * @param request CreateARMServerInstancesRequest
 * @return CreateARMServerInstancesResponse
 */
CreateARMServerInstancesResponse Client::createARMServerInstances(const CreateARMServerInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createARMServerInstancesWithOptions(request, runtime);
}

/**
 * @summary Creates an edge application that allows you to manage Edge Node Service (ENS) nodes in containers, bare metal instances, and virtual machines.
 *
 * @param request CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an edge application that allows you to manage Edge Node Service (ENS) nodes in containers, bare metal instances, and virtual machines.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a classic network
 *
 * @param request CreateClassicNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClassicNetworkResponse
 */
CreateClassicNetworkResponse Client::createClassicNetworkWithOptions(const CreateClassicNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasNetworkName()) {
    query["NetworkName"] = request.getNetworkName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClassicNetwork"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClassicNetworkResponse>();
}

/**
 * @summary Creates a classic network
 *
 * @param request CreateClassicNetworkRequest
 * @return CreateClassicNetworkResponse
 */
CreateClassicNetworkResponse Client::createClassicNetwork(const CreateClassicNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClassicNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a Container Service for Kubernetes (ACK) edge cluster.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   Creating a cluster is an asynchronous operation. After this operation returns the response, it takes 10 to 20 minutes to initialize the cluster. You can call the DescribeCluster operation to query the cluster status. After you create a cluster, you can call the DescribeClusterKubeConfig operation to obtain the cluster certificate.
 *
 * @param tmpReq CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClusterShrinkRequest request = CreateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasControlPlaneConfig()) {
    request.setControlPlaneConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getControlPlaneConfig(), "ControlPlaneConfig", "json"));
  }

  if (!!tmpReq.hasPodVswitchIds()) {
    request.setPodVswitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPodVswitchIds(), "PodVswitchIds", "json"));
  }

  if (!!tmpReq.hasVswitchIds()) {
    request.setVswitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVswitchIds(), "VswitchIds", "json"));
  }

  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasContainerCidr()) {
    query["ContainerCidr"] = request.getContainerCidr();
  }

  if (!!request.hasControlPlaneConfigShrink()) {
    query["ControlPlaneConfig"] = request.getControlPlaneConfigShrink();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasKubernetesVersion()) {
    query["KubernetesVersion"] = request.getKubernetesVersion();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPodVswitchIdsShrink()) {
    query["PodVswitchIds"] = request.getPodVswitchIdsShrink();
  }

  if (!!request.hasProfile()) {
    query["Profile"] = request.getProfile();
  }

  if (!!request.hasPublicAccess()) {
    query["PublicAccess"] = request.getPublicAccess();
  }

  if (!!request.hasServiceCidr()) {
    query["ServiceCidr"] = request.getServiceCidr();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchIdsShrink()) {
    query["VswitchIds"] = request.getVswitchIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Creates a Container Service for Kubernetes (ACK) edge cluster.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   Creating a cluster is an asynchronous operation. After this operation returns the response, it takes 10 to 20 minutes to initialize the cluster. You can call the DescribeCluster operation to query the cluster status. After you create a cluster, you can call the DescribeClusterKubeConfig operation to obtain the cluster certificate.
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary 创建集群节点池
 *
 * @param tmpReq CreateClusterNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterNodePoolResponse
 */
CreateClusterNodePoolResponse Client::createClusterNodePoolWithOptions(const CreateClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClusterNodePoolShrinkRequest request = CreateClusterNodePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKubernetesConfig()) {
    request.setKubernetesConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKubernetesConfig(), "KubernetesConfig", "json"));
  }

  if (!!tmpReq.hasNodepoolInfo()) {
    request.setNodepoolInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodepoolInfo(), "NodepoolInfo", "json"));
  }

  if (!!tmpReq.hasScalingGroup()) {
    request.setScalingGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScalingGroup(), "ScalingGroup", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasKubernetesConfigShrink()) {
    query["KubernetesConfig"] = request.getKubernetesConfigShrink();
  }

  if (!!request.hasNodepoolInfoShrink()) {
    query["NodepoolInfo"] = request.getNodepoolInfoShrink();
  }

  if (!!request.hasScalingGroupShrink()) {
    query["ScalingGroup"] = request.getScalingGroupShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClusterNodePool"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterNodePoolResponse>();
}

/**
 * @summary 创建集群节点池
 *
 * @param request CreateClusterNodePoolRequest
 * @return CreateClusterNodePoolResponse
 */
CreateClusterNodePoolResponse Client::createClusterNodePool(const CreateClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterNodePoolWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go or subscription data disk.
 *
 * @param request CreateDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiskResponse
 */
CreateDiskResponse Client::createDiskWithOptions(const CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDiskName()) {
    query["DiskName"] = request.getDiskName();
  }

  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasKMSKeyId()) {
    query["KMSKeyId"] = request.getKMSKeyId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiskResponse>();
}

/**
 * @summary Creates a pay-as-you-go or subscription data disk.
 *
 * @param request CreateDiskRequest
 * @return CreateDiskResponse
 */
CreateDiskResponse Client::createDisk(const CreateDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiskWithOptions(request, runtime);
}

/**
 * @summary Applies for an elastic IP address (EIP).
 *
 * @description *   You can call this operation up to 5,000 times per second per account.
 * *   You can call this operation up to 50 times per second per user.
 *
 * @param request CreateEipInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEipInstanceResponse
 */
CreateEipInstanceResponse Client::createEipInstanceWithOptions(const CreateEipInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasIpAddress()) {
    query["IpAddress"] = request.getIpAddress();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEipInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEipInstanceResponse>();
}

/**
 * @summary Applies for an elastic IP address (EIP).
 *
 * @description *   You can call this operation up to 5,000 times per second per account.
 * *   You can call this operation up to 50 times per second per user.
 *
 * @param request CreateEipInstanceRequest
 * @return CreateEipInstanceResponse
 */
CreateEipInstanceResponse Client::createEipInstance(const CreateEipInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEipInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a custom route entry.
 *
 * @param request CreateEnsRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnsRouteEntryResponse
 */
CreateEnsRouteEntryResponse Client::createEnsRouteEntryWithOptions(const CreateEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasNextHopId()) {
    query["NextHopId"] = request.getNextHopId();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasRouteEntryName()) {
    query["RouteEntryName"] = request.getRouteEntryName();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasSourceCidrBlock()) {
    query["SourceCidrBlock"] = request.getSourceCidrBlock();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnsRouteEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnsRouteEntryResponse>();
}

/**
 * @summary Creates a custom route entry.
 *
 * @param request CreateEnsRouteEntryRequest
 * @return CreateEnsRouteEntryResponse
 */
CreateEnsRouteEntryResponse Client::createEnsRouteEntry(const CreateEnsRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnsRouteEntryWithOptions(request, runtime);
}

/**
 * @summary 创建售卖约束
 *
 * @param tmpReq CreateEnsSaleControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnsSaleControlResponse
 */
CreateEnsSaleControlResponse Client::createEnsSaleControlWithOptions(const CreateEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEnsSaleControlShrinkRequest request = CreateEnsSaleControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSaleControls()) {
    request.setSaleControlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSaleControls(), "SaleControls", "json"));
  }

  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasSaleControlsShrink()) {
    query["SaleControls"] = request.getSaleControlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnsSaleControl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnsSaleControlResponse>();
}

/**
 * @summary 创建售卖约束
 *
 * @param request CreateEnsSaleControlRequest
 * @return CreateEnsSaleControlResponse
 */
CreateEnsSaleControlResponse Client::createEnsSaleControl(const CreateEnsSaleControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnsSaleControlWithOptions(request, runtime);
}

/**
 * @summary Creates an edge service.
 *
 * @param request CreateEnsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnsServiceResponse
 */
CreateEnsServiceResponse Client::createEnsServiceWithOptions(const CreateEnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsServiceId()) {
    query["EnsServiceId"] = request.getEnsServiceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnsService"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnsServiceResponse>();
}

/**
 * @summary Creates an edge service.
 *
 * @param request CreateEnsServiceRequest
 * @return CreateEnsServiceResponse
 */
CreateEnsServiceResponse Client::createEnsService(const CreateEnsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnsServiceWithOptions(request, runtime);
}

/**
 * @summary Creates an edge private network (EPN) instance.
 *
 * @param request CreateEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEpnInstanceResponse
 */
CreateEpnInstanceResponse Client::createEpnInstanceWithOptions(const CreateEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceName()) {
    query["EPNInstanceName"] = request.getEPNInstanceName();
  }

  if (!!request.hasEPNInstanceType()) {
    query["EPNInstanceType"] = request.getEPNInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasNetworkingModel()) {
    query["NetworkingModel"] = request.getNetworkingModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEpnInstanceResponse>();
}

/**
 * @summary Creates an edge private network (EPN) instance.
 *
 * @param request CreateEpnInstanceRequest
 * @return CreateEpnInstanceResponse
 */
CreateEpnInstanceResponse Client::createEpnInstance(const CreateEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a NAS file system.
 *
 * @param tmpReq CreateFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystemWithOptions(const CreateFileSystemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFileSystemShrinkRequest request = CreateFileSystemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderDetails()) {
    request.setOrderDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderDetails(), "OrderDetails", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileSystem"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileSystemResponse>();
}

/**
 * @summary Creates a NAS file system.
 *
 * @param request CreateFileSystemRequest
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystem(const CreateFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileSystemWithOptions(request, runtime);
}

/**
 * @summary Adds a Destination Network Address Translation (DNAT) entry to a DNAT table.
 *
 * @param request CreateForwardEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateForwardEntryResponse
 */
CreateForwardEntryResponse Client::createForwardEntryWithOptions(const CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasExternalPort()) {
    query["ExternalPort"] = request.getExternalPort();
  }

  if (!!request.hasForwardEntryName()) {
    query["ForwardEntryName"] = request.getForwardEntryName();
  }

  if (!!request.hasHealthCheckPort()) {
    query["HealthCheckPort"] = request.getHealthCheckPort();
  }

  if (!!request.hasInternalIp()) {
    query["InternalIp"] = request.getInternalIp();
  }

  if (!!request.hasInternalPort()) {
    query["InternalPort"] = request.getInternalPort();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasStandbyExternalIp()) {
    query["StandbyExternalIp"] = request.getStandbyExternalIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateForwardEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateForwardEntryResponse>();
}

/**
 * @summary Adds a Destination Network Address Translation (DNAT) entry to a DNAT table.
 *
 * @param request CreateForwardEntryRequest
 * @return CreateForwardEntryResponse
 */
CreateForwardEntryResponse Client::createForwardEntry(const CreateForwardEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createForwardEntryWithOptions(request, runtime);
}

/**
 * @summary Creates a high-availability virtual IP address (HAVIP).
 *
 * @param request CreateHaVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHaVipResponse
 */
CreateHaVipResponse Client::createHaVipWithOptions(const CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIpAddress()) {
    query["IpAddress"] = request.getIpAddress();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHaVip"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHaVipResponse>();
}

/**
 * @summary Creates a high-availability virtual IP address (HAVIP).
 *
 * @param request CreateHaVipRequest
 * @return CreateHaVipResponse
 */
CreateHaVipResponse Client::createHaVip(const CreateHaVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHaVipWithOptions(request, runtime);
}

/**
 * @summary Creates an image from an instance.
 *
 * @param request CreateImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageResponse
 */
CreateImageResponse Client::createImageWithOptions(const CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteAfterImageUpload()) {
    query["DeleteAfterImageUpload"] = request.getDeleteAfterImageUpload();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasTargetOSSRegionId()) {
    query["TargetOSSRegionId"] = request.getTargetOSSRegionId();
  }

  if (!!request.hasWithDataDisks()) {
    query["WithDataDisks"] = request.getWithDataDisks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageResponse>();
}

/**
 * @summary Creates an image from an instance.
 *
 * @param request CreateImageRequest
 * @return CreateImageResponse
 */
CreateImageResponse Client::createImage(const CreateImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   We recommend that you increase the request time because instance creation is an asynchronous operation. If the return code of the API operation is 0, it indicates that the request is successful, but does not indicate that the instance is created. If the request is successful, an instance ID is returned. You can check whether the instance is created based on the instance ID.
 * *   InvalidUserData.NotInWhiteList operation restriction: You can create an instance only if you are in the whitelist in which members have the purchase permissions. Otherwise, an error is returned.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInherit()) {
    query["PasswordInherit"] = request.getPasswordInherit();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasPublicIpIdentification()) {
    query["PublicIpIdentification"] = request.getPublicIpIdentification();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasUniqueSuffix()) {
    query["UniqueSuffix"] = request.getUniqueSuffix();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasDataDisk()) {
    query["DataDisk"] = request.getDataDisk();
  }

  if (!!request.hasSystemDisk()) {
    query["SystemDisk"] = request.getSystemDisk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   We recommend that you increase the request time because instance creation is an asynchronous operation. If the return code of the API operation is 0, it indicates that the request is successful, but does not indicate that the instance is created. If the request is successful, an instance ID is returned. You can check whether the instance is created based on the instance ID.
 * *   InvalidUserData.NotInWhiteList operation restriction: You can create an instance only if you are in the whitelist in which members have the purchase permissions. Otherwise, an error is returned.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 调用CreateInstanceOpsTask来针对一个实例或实例运维组发起运维任务
 *
 * @param tmpReq CreateInstanceActiveOpsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceActiveOpsTaskResponse
 */
CreateInstanceActiveOpsTaskResponse Client::createInstanceActiveOpsTaskWithOptions(const CreateInstanceActiveOpsTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateInstanceActiveOpsTaskShrinkRequest request = CreateInstanceActiveOpsTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceActiveOpsTask"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceActiveOpsTaskResponse>();
}

/**
 * @summary 调用CreateInstanceOpsTask来针对一个实例或实例运维组发起运维任务
 *
 * @param request CreateInstanceActiveOpsTaskRequest
 * @return CreateInstanceActiveOpsTaskResponse
 */
CreateInstanceActiveOpsTaskResponse Client::createInstanceActiveOpsTask(const CreateInstanceActiveOpsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceActiveOpsTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an SSH key pair.
 *
 * @description An SSH key pair consists of a public key and a private key. ENS stores the public key and returns the unencrypted private key that is PEM-encoded in the PKCS#8 format. You must securely lock away the private key.
 *
 * @param request CreateKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPairWithOptions(const CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKeyPair"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKeyPairResponse>();
}

/**
 * @summary Creates an SSH key pair.
 *
 * @description An SSH key pair consists of a public key and a private key. ENS stores the public key and returns the unencrypted private key that is PEM-encoded in the PKCS#8 format. You must securely lock away the private key.
 *
 * @param request CreateKeyPairRequest
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPair(const CreateKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKeyPairWithOptions(request, runtime);
}

/**
 * @summary Creates an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasLoadBalancerSpec()) {
    query["LoadBalancerSpec"] = request.getLoadBalancerSpec();
  }

  if (!!request.hasLoadBalancerType()) {
    query["LoadBalancerType"] = request.getLoadBalancerType();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerResponse>();
}

/**
 * @summary Creates an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Creates an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListenerWithOptions(const CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasForwardPort()) {
    query["ForwardPort"] = request.getForwardPort();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.getHealthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerForward()) {
    query["ListenerForward"] = request.getListenerForward();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.getXForwardedFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerHTTPListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerHTTPListenerResponse>();
}

/**
 * @summary Creates an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerHTTPSListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerHTTPSListenerResponse
 */
CreateLoadBalancerHTTPSListenerResponse Client::createLoadBalancerHTTPSListenerWithOptions(const CreateLoadBalancerHTTPSListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.getCookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.getCookieTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasForwardPort()) {
    query["ForwardPort"] = request.getForwardPort();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.getHealthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerForward()) {
    query["ListenerForward"] = request.getListenerForward();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.getServerCertificateId();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.getStickySessionType();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerHTTPSListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerHTTPSListenerResponse>();
}

/**
 * @summary Creates an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerHTTPSListenerRequest
 * @return CreateLoadBalancerHTTPSListenerResponse
 */
CreateLoadBalancerHTTPSListenerResponse Client::createLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerHTTPSListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a Transmission Control Protocol (TCP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListenerWithOptions(const CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEipTransmit()) {
    query["EipTransmit"] = request.getEipTransmit();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.getEstablishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.getHealthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.getPersistenceTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerTCPListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerTCPListenerResponse>();
}

/**
 * @summary Creates a Transmission Control Protocol (TCP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a User Datagram Protocol (UDP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerUDPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerUDPListenerResponse
 */
CreateLoadBalancerUDPListenerResponse Client::createLoadBalancerUDPListenerWithOptions(const CreateLoadBalancerUDPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.getBackendServerPort();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEipTransmit()) {
    query["EipTransmit"] = request.getEipTransmit();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.getEstablishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.getHealthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckExp()) {
    query["HealthCheckExp"] = request.getHealthCheckExp();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckReq()) {
    query["HealthCheckReq"] = request.getHealthCheckReq();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerUDPListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerUDPListenerResponse>();
}

/**
 * @summary Creates a User Datagram Protocol (UDP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request CreateLoadBalancerUDPListenerRequest
 * @return CreateLoadBalancerUDPListenerResponse
 */
CreateLoadBalancerUDPListenerResponse Client::createLoadBalancerUDPListener(const CreateLoadBalancerUDPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerUDPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a mount target.
 *
 * @description ## [](#)Precautions
 * After you call this operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the Active state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
 *
 * @param request CreateMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMountTargetResponse
 */
CreateMountTargetResponse Client::createMountTargetWithOptions(const CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetName()) {
    query["MountTargetName"] = request.getMountTargetName();
  }

  if (!!request.hasNetWorkId()) {
    query["NetWorkId"] = request.getNetWorkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMountTarget"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMountTargetResponse>();
}

/**
 * @summary Creates a mount target.
 *
 * @description ## [](#)Precautions
 * After you call this operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the Active state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
 *
 * @param request CreateMountTargetRequest
 * @return CreateMountTargetResponse
 */
CreateMountTargetResponse Client::createMountTarget(const CreateMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMountTargetWithOptions(request, runtime);
}

/**
 * @summary Creates a network address translation (NAT) gateway.
 *
 * @param request CreateNatGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatGatewayResponse
 */
CreateNatGatewayResponse Client::createNatGatewayWithOptions(const CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNatGateway"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNatGatewayResponse>();
}

/**
 * @summary Creates a network address translation (NAT) gateway.
 *
 * @param request CreateNatGatewayRequest
 * @return CreateNatGatewayResponse
 */
CreateNatGatewayResponse Client::createNatGateway(const CreateNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual private cloud (VPC).
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request CreateNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkResponse
 */
CreateNetworkResponse Client::createNetworkWithOptions(const CreateNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasNetworkName()) {
    query["NetworkName"] = request.getNetworkName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetwork"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkResponse>();
}

/**
 * @summary Creates a virtual private cloud (VPC).
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request CreateNetworkRequest
 * @return CreateNetworkResponse
 */
CreateNetworkResponse Client::createNetwork(const CreateNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a network access control list (ACL).
 *
 * @param request CreateNetworkAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkAclResponse
 */
CreateNetworkAclResponse Client::createNetworkAclWithOptions(const CreateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNetworkAclName()) {
    query["NetworkAclName"] = request.getNetworkAclName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkAclResponse>();
}

/**
 * @summary Creates a network access control list (ACL).
 *
 * @param request CreateNetworkAclRequest
 * @return CreateNetworkAclResponse
 */
CreateNetworkAclResponse Client::createNetworkAcl(const CreateNetworkAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkAclWithOptions(request, runtime);
}

/**
 * @summary Creates a network access control list (ACL) rule.
 *
 * @param request CreateNetworkAclEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkAclEntryResponse
 */
CreateNetworkAclEntryResponse Client::createNetworkAclEntryWithOptions(const CreateNetworkAclEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasNetworkAclEntryName()) {
    query["NetworkAclEntryName"] = request.getNetworkAclEntryName();
  }

  if (!!request.hasNetworkAclId()) {
    query["NetworkAclId"] = request.getNetworkAclId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkAclEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkAclEntryResponse>();
}

/**
 * @summary Creates a network access control list (ACL) rule.
 *
 * @param request CreateNetworkAclEntryRequest
 * @return CreateNetworkAclEntryResponse
 */
CreateNetworkAclEntryResponse Client::createNetworkAclEntry(const CreateNetworkAclEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkAclEntryWithOptions(request, runtime);
}

/**
 * @summary Create an Elastic Network Interface (ENI).
 *
 * @param tmpReq CreateNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkInterfaceResponse
 */
CreateNetworkInterfaceResponse Client::createNetworkInterfaceWithOptions(const CreateNetworkInterfaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNetworkInterfaceShrinkRequest request = CreateNetworkInterfaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupIds(), "SecurityGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIdsShrink();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkInterface"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkInterfaceResponse>();
}

/**
 * @summary Create an Elastic Network Interface (ENI).
 *
 * @param request CreateNetworkInterfaceRequest
 * @return CreateNetworkInterfaceResponse
 */
CreateNetworkInterfaceResponse Client::createNetworkInterface(const CreateNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Creates a shared data group (SDG) on an Android in Container (AIC) instance.
 *
 * @description A SDG can be regarded as a data partition image of a virtual device. You can save a data partition of a virtual device as an SDG. A created SDG can be deployed in data partitions of other virtual devices to achieve rapid data distribution and application. The procedure for calling SDG-related API operations:
 * *   Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG, which is bound to AIC Instance A (InstanceId). After you create the SDG, a blank cloud disk (also known as an original cloud disk) is attached to Device A (InstanceId).
 * *   Install applications on and deliver files to AIC Instance A (InstanceId).
 * *   Call the [SaveSDG](~~SaveSDG~~) operation to save the data disk of AIC instance A as SDG A.
 * *   Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC Instance B. This operattion is executed asynchronously. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC Instance B. If the status of AIC Instance B changes to success, AIC insance B is available, and AIC Instances A and B have the same applications running.
 *
 * @param request CreateSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSDGResponse
 */
CreateSDGResponse Client::createSDGWithOptions(const CreateSDGRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSDGResponse>();
}

/**
 * @summary Creates a shared data group (SDG) on an Android in Container (AIC) instance.
 *
 * @description A SDG can be regarded as a data partition image of a virtual device. You can save a data partition of a virtual device as an SDG. A created SDG can be deployed in data partitions of other virtual devices to achieve rapid data distribution and application. The procedure for calling SDG-related API operations:
 * *   Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG, which is bound to AIC Instance A (InstanceId). After you create the SDG, a blank cloud disk (also known as an original cloud disk) is attached to Device A (InstanceId).
 * *   Install applications on and deliver files to AIC Instance A (InstanceId).
 * *   Call the [SaveSDG](~~SaveSDG~~) operation to save the data disk of AIC instance A as SDG A.
 * *   Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC Instance B. This operattion is executed asynchronously. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC Instance B. If the status of AIC Instance B changes to success, AIC insance B is available, and AIC Instances A and B have the same applications running.
 *
 * @param request CreateSDGRequest
 * @return CreateSDGResponse
 */
CreateSDGResponse Client::createSDG(const CreateSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSDGWithOptions(request, runtime);
}

/**
 * @summary Creates a security group.
 *
 * @param tmpReq CreateSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityGroupResponse
 */
CreateSecurityGroupResponse Client::createSecurityGroupWithOptions(const CreateSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityGroupShrinkRequest request = CreateSecurityGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPermissionsShrink()) {
    query["Permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.getSecurityGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityGroupResponse>();
}

/**
 * @summary Creates a security group.
 *
 * @param request CreateSecurityGroupRequest
 * @return CreateSecurityGroupResponse
 */
CreateSecurityGroupResponse Client::createSecurityGroup(const CreateSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Create an ENS security group rule.
 *
 * @param tmpReq CreateSecurityGroupPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityGroupPermissionsResponse
 */
CreateSecurityGroupPermissionsResponse Client::createSecurityGroupPermissionsWithOptions(const CreateSecurityGroupPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityGroupPermissionsShrinkRequest request = CreateSecurityGroupPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasPermissionsShrink()) {
    query["Permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecurityGroupPermissions"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityGroupPermissionsResponse>();
}

/**
 * @summary Create an ENS security group rule.
 *
 * @param request CreateSecurityGroupPermissionsRequest
 * @return CreateSecurityGroupPermissionsResponse
 */
CreateSecurityGroupPermissionsResponse Client::createSecurityGroupPermissions(const CreateSecurityGroupPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityGroupPermissionsWithOptions(request, runtime);
}

/**
 * @summary Creates a snapshot.
 *
 * @param request CreateSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Creates a snapshot.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnapshotWithOptions(request, runtime);
}

/**
 * @summary Adds a source network address translation (SNAT) entry to a specified SNAT table.
 *
 * @param request CreateSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnatEntryResponse
 */
CreateSnatEntryResponse Client::createSnatEntryWithOptions(const CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipAffinity()) {
    query["EipAffinity"] = request.getEipAffinity();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasIspAffinity()) {
    query["IspAffinity"] = request.getIspAffinity();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasSnatEntryName()) {
    query["SnatEntryName"] = request.getSnatEntryName();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  if (!!request.hasSourceCIDR()) {
    query["SourceCIDR"] = request.getSourceCIDR();
  }

  if (!!request.hasSourceNetworkId()) {
    query["SourceNetworkId"] = request.getSourceNetworkId();
  }

  if (!!request.hasSourceVSwitchId()) {
    query["SourceVSwitchId"] = request.getSourceVSwitchId();
  }

  if (!!request.hasStandbySnatIp()) {
    query["StandbySnatIp"] = request.getStandbySnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnatEntryResponse>();
}

/**
 * @summary Adds a source network address translation (SNAT) entry to a specified SNAT table.
 *
 * @param request CreateSnatEntryRequest
 * @return CreateSnatEntryResponse
 */
CreateSnatEntryResponse Client::createSnatEntry(const CreateSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Creates a storage gateway.
 *
 * @param tmpReq CreateStorageGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStorageGatewayResponse
 */
CreateStorageGatewayResponse Client::createStorageGatewayWithOptions(const CreateStorageGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStorageGatewayShrinkRequest request = CreateStorageGatewayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderDetails()) {
    request.setOrderDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderDetails(), "OrderDetails", "json"));
  }

  json query = {};
  if (!!request.hasOrderDetailsShrink()) {
    query["OrderDetails"] = request.getOrderDetailsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStorageGateway"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStorageGatewayResponse>();
}

/**
 * @summary Creates a storage gateway.
 *
 * @param request CreateStorageGatewayRequest
 * @return CreateStorageGatewayResponse
 */
CreateStorageGatewayResponse Client::createStorageGateway(const CreateStorageGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStorageGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a storage volume.
 *
 * @param request CreateStorageVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStorageVolumeResponse
 */
CreateStorageVolumeResponse Client::createStorageVolumeWithOptions(const CreateStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthPassword()) {
    query["AuthPassword"] = request.getAuthPassword();
  }

  if (!!request.hasAuthProtocol()) {
    query["AuthProtocol"] = request.getAuthProtocol();
  }

  if (!!request.hasAuthUser()) {
    query["AuthUser"] = request.getAuthUser();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasIsAuth()) {
    query["IsAuth"] = request.getIsAuth();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasStorageId()) {
    query["StorageId"] = request.getStorageId();
  }

  if (!!request.hasVolumeName()) {
    query["VolumeName"] = request.getVolumeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStorageVolume"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStorageVolumeResponse>();
}

/**
 * @summary Creates a storage volume.
 *
 * @param request CreateStorageVolumeRequest
 * @return CreateStorageVolumeResponse
 */
CreateStorageVolumeResponse Client::createStorageVolume(const CreateStorageVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStorageVolumeWithOptions(request, runtime);
}

/**
 * @summary A vSwitch is created.
 *
 * @param request CreateVSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVSwitchResponse
 */
CreateVSwitchResponse Client::createVSwitchWithOptions(const CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchName()) {
    query["VSwitchName"] = request.getVSwitchName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVSwitch"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVSwitchResponse>();
}

/**
 * @summary A vSwitch is created.
 *
 * @param request CreateVSwitchRequest
 * @return CreateVSwitchResponse
 */
CreateVSwitchResponse Client::createVSwitch(const CreateVSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVSwitchWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified AIC public key. You can delete a public key only if it is not associated with the public key.
 *
 * @param request DeleteAICPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAICPublicKeyResponse
 */
DeleteAICPublicKeyResponse Client::deleteAICPublicKeyWithOptions(const DeleteAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAICPublicKey"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAICPublicKeyResponse>();
}

/**
 * @summary Deletes a specified AIC public key. You can delete a public key only if it is not associated with the public key.
 *
 * @param request DeleteAICPublicKeyRequest
 * @return DeleteAICPublicKeyResponse
 */
DeleteAICPublicKeyResponse Client::deleteAICPublicKey(const DeleteAICPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAICPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Releases all containers and resource instances related to a specific application in an asynchronous manner.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Releases all containers and resource instances related to a specific application in an asynchronous manner.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a bucket.
 *
 * @description *   Only the Alibaba Cloud Account ID owner of a bucket can delete the bucket from the account.
 * *   You cannot delete buckets that store objects. You can only delete empty buckets.
 *
 * @param request DeleteBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBucketResponse
 */
DeleteBucketResponse Client::deleteBucketWithOptions(const DeleteBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBucket"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBucketResponse>();
}

/**
 * @summary Deletes a bucket.
 *
 * @description *   Only the Alibaba Cloud Account ID owner of a bucket can delete the bucket from the account.
 * *   You cannot delete buckets that store objects. You can only delete empty buckets.
 *
 * @param request DeleteBucketRequest
 * @return DeleteBucketResponse
 */
DeleteBucketResponse Client::deleteBucket(const DeleteBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBucketWithOptions(request, runtime);
}

/**
 * @summary Deletes the lifecycle rules for objects in a bucket.
 *
 * @param request DeleteBucketLifecycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBucketLifecycleResponse
 */
DeleteBucketLifecycleResponse Client::deleteBucketLifecycleWithOptions(const DeleteBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBucketLifecycle"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBucketLifecycleResponse>();
}

/**
 * @summary Deletes the lifecycle rules for objects in a bucket.
 *
 * @param request DeleteBucketLifecycleRequest
 * @return DeleteBucketLifecycleResponse
 */
DeleteBucketLifecycleResponse Client::deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBucketLifecycleWithOptions(request, runtime);
}

/**
 * @summary 删除集群
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary 删除集群
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary 删除节点池
 *
 * @param request DeleteClusterNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterNodePoolResponse
 */
DeleteClusterNodePoolResponse Client::deleteClusterNodePoolWithOptions(const DeleteClusterNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodepoolId()) {
    query["NodepoolId"] = request.getNodepoolId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClusterNodePool"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterNodePoolResponse>();
}

/**
 * @summary 删除节点池
 *
 * @param request DeleteClusterNodePoolRequest
 * @return DeleteClusterNodePoolResponse
 */
DeleteClusterNodePoolResponse Client::deleteClusterNodePool(const DeleteClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterNodePoolWithOptions(request, runtime);
}

/**
 * @summary 删除节点池指定节点
 *
 * @param tmpReq DeleteClusterNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterNodesResponse
 */
DeleteClusterNodesResponse Client::deleteClusterNodesWithOptions(const DeleteClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteClusterNodesShrinkRequest request = DeleteClusterNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "Body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["Body"] = request.getBodyShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClusterNodes"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterNodesResponse>();
}

/**
 * @summary 删除节点池指定节点
 *
 * @param request DeleteClusterNodesRequest
 * @return DeleteClusterNodesResponse
 */
DeleteClusterNodesResponse Client::deleteClusterNodes(const DeleteClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterNodesWithOptions(request, runtime);
}

/**
 * @summary Deletes a disk.
 *
 * @description When you release a disk, the disk must be in the Available state.
 *
 * @param request DeleteDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDiskResponse
 */
DeleteDiskResponse Client::deleteDiskWithOptions(const DeleteDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDiskResponse>();
}

/**
 * @summary Deletes a disk.
 *
 * @description When you release a disk, the disk must be in the Available state.
 *
 * @param request DeleteDiskRequest
 * @return DeleteDiskResponse
 */
DeleteDiskResponse Client::deleteDisk(const DeleteDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDiskWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go elastic IP address (EIP).
 *
 * @param request DeleteEipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEipResponse
 */
DeleteEipResponse Client::deleteEipWithOptions(const DeleteEipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEip"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEipResponse>();
}

/**
 * @summary Deletes a pay-as-you-go elastic IP address (EIP).
 *
 * @param request DeleteEipRequest
 * @return DeleteEipResponse
 */
DeleteEipResponse Client::deleteEip(const DeleteEipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEipWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom route entry.
 *
 * @param request DeleteEnsRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnsRouteEntryResponse
 */
DeleteEnsRouteEntryResponse Client::deleteEnsRouteEntryWithOptions(const DeleteEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRouteEntryId()) {
    query["RouteEntryId"] = request.getRouteEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnsRouteEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnsRouteEntryResponse>();
}

/**
 * @summary Deletes a custom route entry.
 *
 * @param request DeleteEnsRouteEntryRequest
 * @return DeleteEnsRouteEntryResponse
 */
DeleteEnsRouteEntryResponse Client::deleteEnsRouteEntry(const DeleteEnsRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnsRouteEntryWithOptions(request, runtime);
}

/**
 * @summary 删除售卖约束的条件约束
 *
 * @param tmpReq DeleteEnsSaleConditionControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnsSaleConditionControlResponse
 */
DeleteEnsSaleConditionControlResponse Client::deleteEnsSaleConditionControlWithOptions(const DeleteEnsSaleConditionControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteEnsSaleConditionControlShrinkRequest request = DeleteEnsSaleConditionControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSaleControls()) {
    request.setSaleControlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSaleControls(), "SaleControls", "json"));
  }

  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasSaleControlsShrink()) {
    query["SaleControls"] = request.getSaleControlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnsSaleConditionControl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnsSaleConditionControlResponse>();
}

/**
 * @summary 删除售卖约束的条件约束
 *
 * @param request DeleteEnsSaleConditionControlRequest
 * @return DeleteEnsSaleConditionControlResponse
 */
DeleteEnsSaleConditionControlResponse Client::deleteEnsSaleConditionControl(const DeleteEnsSaleConditionControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnsSaleConditionControlWithOptions(request, runtime);
}

/**
 * @summary 删除售卖约束基础约束
 *
 * @param tmpReq DeleteEnsSaleControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnsSaleControlResponse
 */
DeleteEnsSaleControlResponse Client::deleteEnsSaleControlWithOptions(const DeleteEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteEnsSaleControlShrinkRequest request = DeleteEnsSaleControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSaleControls()) {
    request.setSaleControlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSaleControls(), "SaleControls", "json"));
  }

  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasSaleControlsShrink()) {
    query["SaleControls"] = request.getSaleControlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnsSaleControl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnsSaleControlResponse>();
}

/**
 * @summary 删除售卖约束基础约束
 *
 * @param request DeleteEnsSaleControlRequest
 * @return DeleteEnsSaleControlResponse
 */
DeleteEnsSaleControlResponse Client::deleteEnsSaleControl(const DeleteEnsSaleControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnsSaleControlWithOptions(request, runtime);
}

/**
 * @summary Deletes an edge private network (EPN) instance.
 *
 * @description You can delete an EPN instance only when the instance group information is empty.
 *
 * @param request DeleteEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEpnInstanceResponse
 */
DeleteEpnInstanceResponse Client::deleteEpnInstanceWithOptions(const DeleteEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEpnInstanceResponse>();
}

/**
 * @summary Deletes an edge private network (EPN) instance.
 *
 * @description You can delete an EPN instance only when the instance group information is empty.
 *
 * @param request DeleteEpnInstanceRequest
 * @return DeleteEpnInstanceResponse
 */
DeleteEpnInstanceResponse Client::deleteEpnInstance(const DeleteEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a File Storage NAS file system.
 *
 * @param request DeleteFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystemWithOptions(const DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileSystem"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileSystemResponse>();
}

/**
 * @summary Deletes a File Storage NAS file system.
 *
 * @param request DeleteFileSystemRequest
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystem(const DeleteFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileSystemWithOptions(request, runtime);
}

/**
 * @summary Deletes a Destination Network Address Translation (DNAT) entry from a specified DNAT table.
 *
 * @param request DeleteForwardEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteForwardEntryResponse
 */
DeleteForwardEntryResponse Client::deleteForwardEntryWithOptions(const DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteForwardEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteForwardEntryResponse>();
}

/**
 * @summary Deletes a Destination Network Address Translation (DNAT) entry from a specified DNAT table.
 *
 * @param request DeleteForwardEntryRequest
 * @return DeleteForwardEntryResponse
 */
DeleteForwardEntryResponse Client::deleteForwardEntry(const DeleteForwardEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteForwardEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes a high-availability VIP (HAVIP).
 *
 * @param tmpReq DeleteHaVipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHaVipsResponse
 */
DeleteHaVipsResponse Client::deleteHaVipsWithOptions(const DeleteHaVipsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteHaVipsShrinkRequest request = DeleteHaVipsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaVipIds()) {
    request.setHaVipIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVipIds(), "HaVipIds", "json"));
  }

  json query = {};
  if (!!request.hasHaVipIdsShrink()) {
    query["HaVipIds"] = request.getHaVipIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHaVips"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHaVipsResponse>();
}

/**
 * @summary Deletes a high-availability VIP (HAVIP).
 *
 * @param request DeleteHaVipsRequest
 * @return DeleteHaVipsResponse
 */
DeleteHaVipsResponse Client::deleteHaVips(const DeleteHaVipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHaVipsWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom image.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageResponse>();
}

/**
 * @summary Deletes a custom image.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary Deletes SSH key pairs.
 *
 * @description *   After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
 * *   If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
 *
 * @param request DeleteKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairsWithOptions(const DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKeyPairs"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeyPairsResponse>();
}

/**
 * @summary Deletes SSH key pairs.
 *
 * @description *   After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
 * *   If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
 *
 * @param request DeleteKeyPairsRequest
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairs(const DeleteKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeyPairsWithOptions(request, runtime);
}

/**
 * @summary Deletes a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListenerWithOptions(const DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancerListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerListenerResponse>();
}

/**
 * @summary Deletes a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes a mount target.
 *
 * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
 *
 * @param request DeleteMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMountTargetResponse
 */
DeleteMountTargetResponse Client::deleteMountTargetWithOptions(const DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetName()) {
    query["MountTargetName"] = request.getMountTargetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMountTarget"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMountTargetResponse>();
}

/**
 * @summary Deletes a mount target.
 *
 * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
 *
 * @param request DeleteMountTargetRequest
 * @return DeleteMountTargetResponse
 */
DeleteMountTargetResponse Client::deleteMountTarget(const DeleteMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMountTargetWithOptions(request, runtime);
}

/**
 * @summary Deletes an Internet network address translation (NAT) gateway.
 *
 * @param request DeleteNatGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatGatewayResponse
 */
DeleteNatGatewayResponse Client::deleteNatGatewayWithOptions(const DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDelete()) {
    query["ForceDelete"] = request.getForceDelete();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNatGateway"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNatGatewayResponse>();
}

/**
 * @summary Deletes an Internet network address translation (NAT) gateway.
 *
 * @param request DeleteNatGatewayRequest
 * @return DeleteNatGatewayResponse
 */
DeleteNatGatewayResponse Client::deleteNatGateway(const DeleteNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatGatewayWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC).
 *
 * @param request DeleteNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkResponse
 */
DeleteNetworkResponse Client::deleteNetworkWithOptions(const DeleteNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetwork"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkResponse>();
}

/**
 * @summary Deletes a virtual private cloud (VPC).
 *
 * @param request DeleteNetworkRequest
 * @return DeleteNetworkResponse
 */
DeleteNetworkResponse Client::deleteNetwork(const DeleteNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkWithOptions(request, runtime);
}

/**
 * @summary Deletes a network access control list (ACL).
 *
 * @param request DeleteNetworkAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkAclResponse
 */
DeleteNetworkAclResponse Client::deleteNetworkAclWithOptions(const DeleteNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkAclId()) {
    query["NetworkAclId"] = request.getNetworkAclId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkAclResponse>();
}

/**
 * @summary Deletes a network access control list (ACL).
 *
 * @param request DeleteNetworkAclRequest
 * @return DeleteNetworkAclResponse
 */
DeleteNetworkAclResponse Client::deleteNetworkAcl(const DeleteNetworkAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkAclWithOptions(request, runtime);
}

/**
 * @summary Deletes a network access control list (ACL) rule.
 *
 * @param request DeleteNetworkAclEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkAclEntryResponse
 */
DeleteNetworkAclEntryResponse Client::deleteNetworkAclEntryWithOptions(const DeleteNetworkAclEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkAclEntryId()) {
    query["NetworkAclEntryId"] = request.getNetworkAclEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkAclEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkAclEntryResponse>();
}

/**
 * @summary Deletes a network access control list (ACL) rule.
 *
 * @param request DeleteNetworkAclEntryRequest
 * @return DeleteNetworkAclEntryResponse
 */
DeleteNetworkAclEntryResponse Client::deleteNetworkAclEntry(const DeleteNetworkAclEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkAclEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes an elastic network interface (ENI).
 *
 * @param tmpReq DeleteNetworkInterfacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkInterfacesResponse
 */
DeleteNetworkInterfacesResponse Client::deleteNetworkInterfacesWithOptions(const DeleteNetworkInterfacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteNetworkInterfacesShrinkRequest request = DeleteNetworkInterfacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetworkInterfaceIds()) {
    request.setNetworkInterfaceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkInterfaceIds(), "NetworkInterfaceIds", "json"));
  }

  json query = {};
  if (!!request.hasNetworkInterfaceIdsShrink()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkInterfaces"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkInterfacesResponse>();
}

/**
 * @summary Deletes an elastic network interface (ENI).
 *
 * @param request DeleteNetworkInterfacesRequest
 * @return DeleteNetworkInterfacesResponse
 */
DeleteNetworkInterfacesResponse Client::deleteNetworkInterfaces(const DeleteNetworkInterfacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkInterfacesWithOptions(request, runtime);
}

/**
 * @summary Deletes an object.
 *
 * @param request DeleteObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteObjectResponse
 */
DeleteObjectResponse Client::deleteObjectWithOptions(const DeleteObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.getObjectKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteObject"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteObjectResponse>();
}

/**
 * @summary Deletes an object.
 *
 * @param request DeleteObjectRequest
 * @return DeleteObjectResponse
 */
DeleteObjectResponse Client::deleteObject(const DeleteObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteObjectWithOptions(request, runtime);
}

/**
 * @summary Deletes a shared data group (SDG).
 *
 * @description If all the SDGs corresponding to the original disk are deleted, the original disk is automatically cleared.
 *
 * @param tmpReq DeleteSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSDGResponse
 */
DeleteSDGResponse Client::deleteSDGWithOptions(const DeleteSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSDGShrinkRequest request = DeleteSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSDGId()) {
    request.setSDGIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSDGId(), "SDGId", "json"));
  }

  json query = {};
  if (!!request.hasSDGIdShrink()) {
    query["SDGId"] = request.getSDGIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSDGResponse>();
}

/**
 * @summary Deletes a shared data group (SDG).
 *
 * @description If all the SDGs corresponding to the original disk are deleted, the original disk is automatically cleared.
 *
 * @param request DeleteSDGRequest
 * @return DeleteSDGResponse
 */
DeleteSDGResponse Client::deleteSDG(const DeleteSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSDGWithOptions(request, runtime);
}

/**
 * @summary Deletes a security group.
 *
 * @description Before you delete a security group, make sure that no instances exist in the security group.
 *
 * @param request DeleteSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityGroupResponse
 */
DeleteSecurityGroupResponse Client::deleteSecurityGroupWithOptions(const DeleteSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityGroupResponse>();
}

/**
 * @summary Deletes a security group.
 *
 * @description Before you delete a security group, make sure that no instances exist in the security group.
 *
 * @param request DeleteSecurityGroupRequest
 * @return DeleteSecurityGroupResponse
 */
DeleteSecurityGroupResponse Client::deleteSecurityGroup(const DeleteSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an ENS security group rule.
 *
 * @param tmpReq DeleteSecurityGroupPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityGroupPermissionsResponse
 */
DeleteSecurityGroupPermissionsResponse Client::deleteSecurityGroupPermissionsWithOptions(const DeleteSecurityGroupPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSecurityGroupPermissionsShrinkRequest request = DeleteSecurityGroupPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasPermissionsShrink()) {
    query["Permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityGroupPermissions"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityGroupPermissionsResponse>();
}

/**
 * @summary Deletes an ENS security group rule.
 *
 * @param request DeleteSecurityGroupPermissionsRequest
 * @return DeleteSecurityGroupPermissionsResponse
 */
DeleteSecurityGroupPermissionsResponse Client::deleteSecurityGroupPermissions(const DeleteSecurityGroupPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityGroupPermissionsWithOptions(request, runtime);
}

/**
 * @summary Deletes a snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Deletes a snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary Deletes a source network address translation (SNAT) entry from a specified SNAT table.
 *
 * @param request DeleteSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntryWithOptions(const DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnatEntryResponse>();
}

/**
 * @summary Deletes a source network address translation (SNAT) entry from a specified SNAT table.
 *
 * @param request DeleteSnatEntryRequest
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntry(const DeleteSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes an elastic IP address (EIP) from a source network address translation (SNAT) entry.
 *
 * @param request DeleteSnatIpForSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnatIpForSnatEntryResponse
 */
DeleteSnatIpForSnatEntryResponse Client::deleteSnatIpForSnatEntryWithOptions(const DeleteSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnatIpForSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnatIpForSnatEntryResponse>();
}

/**
 * @summary Deletes an elastic IP address (EIP) from a source network address translation (SNAT) entry.
 *
 * @param request DeleteSnatIpForSnatEntryRequest
 * @return DeleteSnatIpForSnatEntryResponse
 */
DeleteSnatIpForSnatEntryResponse Client::deleteSnatIpForSnatEntry(const DeleteSnatIpForSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnatIpForSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes a storage gateway.
 *
 * @param request DeleteStorageGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStorageGatewayResponse
 */
DeleteStorageGatewayResponse Client::deleteStorageGatewayWithOptions(const DeleteStorageGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStorageGateway"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStorageGatewayResponse>();
}

/**
 * @summary Deletes a storage gateway.
 *
 * @param request DeleteStorageGatewayRequest
 * @return DeleteStorageGatewayResponse
 */
DeleteStorageGatewayResponse Client::deleteStorageGateway(const DeleteStorageGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStorageGatewayWithOptions(request, runtime);
}

/**
 * @summary Deletes a storage volume.
 *
 * @param request DeleteStorageVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStorageVolumeResponse
 */
DeleteStorageVolumeResponse Client::deleteStorageVolumeWithOptions(const DeleteStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVolumeId()) {
    query["VolumeId"] = request.getVolumeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStorageVolume"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStorageVolumeResponse>();
}

/**
 * @summary Deletes a storage volume.
 *
 * @param request DeleteStorageVolumeRequest
 * @return DeleteStorageVolumeResponse
 */
DeleteStorageVolumeResponse Client::deleteStorageVolume(const DeleteStorageVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStorageVolumeWithOptions(request, runtime);
}

/**
 * @summary Deletes a vSwitch.
 *
 * @description Before you delete a vSwitch, make sure that no instances exist in the vSwitch.
 *
 * @param request DeleteVSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVSwitchResponse
 */
DeleteVSwitchResponse Client::deleteVSwitchWithOptions(const DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVSwitch"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVSwitchResponse>();
}

/**
 * @summary Deletes a vSwitch.
 *
 * @description Before you delete a vSwitch, make sure that no instances exist in the vSwitch.
 *
 * @param request DeleteVSwitchRequest
 * @return DeleteVSwitchResponse
 */
DeleteVSwitchResponse Client::deleteVSwitch(const DeleteVSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVSwitchWithOptions(request, runtime);
}

/**
 * @summary Deploys a shared data group (SDG) to compute instances.
 *
 * @param tmpReq DeployInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployInstanceSDGResponse
 */
DeployInstanceSDGResponse Client::deployInstanceSDGWithOptions(const DeployInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeployInstanceSDGShrinkRequest request = DeployInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasDeploymentType()) {
    query["DeploymentType"] = request.getDeploymentType();
  }

  if (!!request.hasDiskAccessProtocol()) {
    query["DiskAccessProtocol"] = request.getDiskAccessProtocol();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployInstanceSDGResponse>();
}

/**
 * @summary Deploys a shared data group (SDG) to compute instances.
 *
 * @param request DeployInstanceSDGRequest
 * @return DeployInstanceSDGResponse
 */
DeployInstanceSDGResponse Client::deployInstanceSDG(const DeployInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Deploys shared data groups (SDGs).
 *
 * @param tmpReq DeploySDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeploySDGResponse
 */
DeploySDGResponse Client::deploySDGWithOptions(const DeploySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeploySDGShrinkRequest request = DeploySDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeploySDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeploySDGResponse>();
}

/**
 * @summary Deploys shared data groups (SDGs).
 *
 * @param request DeploySDGRequest
 * @return DeploySDGResponse
 */
DeploySDGResponse Client::deploySDG(const DeploySDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deploySDGWithOptions(request, runtime);
}

/**
 * @summary Queries information about images of the Android in Container (AIC) instance.
 *
 * @param request DescribeAICImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAICImagesResponse
 */
DescribeAICImagesResponse Client::describeAICImagesWithOptions(const DescribeAICImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.getImageType();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasMaxDate()) {
    query["MaxDate"] = request.getMaxDate();
  }

  if (!!request.hasMinDate()) {
    query["MinDate"] = request.getMinDate();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAICImages"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAICImagesResponse>();
}

/**
 * @summary Queries information about images of the Android in Container (AIC) instance.
 *
 * @param request DescribeAICImagesRequest
 * @return DescribeAICImagesResponse
 */
DescribeAICImagesResponse Client::describeAICImages(const DescribeAICImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAICImagesWithOptions(request, runtime);
}

/**
 * @summary Queries information about ARM servers and Android in Container (AIC) instances.
 *
 * @param tmpReq DescribeARMServerInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeARMServerInstancesResponse
 */
DescribeARMServerInstancesResponse Client::describeARMServerInstancesWithOptions(const DescribeARMServerInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeARMServerInstancesShrinkRequest request = DescribeARMServerInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAICSpecs()) {
    request.setAICSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAICSpecs(), "AICSpecs", "json"));
  }

  if (!!tmpReq.hasEnsRegionIds()) {
    request.setEnsRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnsRegionIds(), "EnsRegionIds", "json"));
  }

  if (!!tmpReq.hasServerIds()) {
    request.setServerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerIds(), "ServerIds", "json"));
  }

  if (!!tmpReq.hasServerSpecs()) {
    request.setServerSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerSpecs(), "ServerSpecs", "json"));
  }

  if (!!tmpReq.hasStates()) {
    request.setStatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStates(), "States", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeARMServerInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeARMServerInstancesResponse>();
}

/**
 * @summary Queries information about ARM servers and Android in Container (AIC) instances.
 *
 * @param request DescribeARMServerInstancesRequest
 * @return DescribeARMServerInstancesResponse
 */
DescribeARMServerInstancesResponse Client::describeARMServerInstances(const DescribeARMServerInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeARMServerInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询指定组件的信息
 *
 * @param request DescribeAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonResponse
 */
DescribeAddonResponse Client::describeAddonWithOptions(const DescribeAddonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.getAddonName();
  }

  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.getAddonVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddon"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonResponse>();
}

/**
 * @summary 查询指定组件的信息
 *
 * @param request DescribeAddonRequest
 * @return DescribeAddonResponse
 */
DescribeAddonResponse Client::describeAddon(const DescribeAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddonWithOptions(request, runtime);
}

/**
 * @summary Queries the basic properties, resources, and container status of an application.
 *
 * @param request DescribeApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationResponse
 */
DescribeApplicationResponse Client::describeApplicationWithOptions(const DescribeApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppVersions()) {
    query["AppVersions"] = request.getAppVersions();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasOutDetailStatParams()) {
    query["OutDetailStatParams"] = request.getOutDetailStatParams();
  }

  if (!!request.hasResourceSelector()) {
    query["ResourceSelector"] = request.getResourceSelector();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationResponse>();
}

/**
 * @summary Queries the basic properties, resources, and container status of an application.
 *
 * @param request DescribeApplicationRequest
 * @return DescribeApplicationResponse
 */
DescribeApplicationResponse Client::describeApplication(const DescribeApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the resources that can be created.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAvailableResource"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourceResponse>();
}

/**
 * @summary Queries the resources that can be created.
 *
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(runtime);
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create an instance.
 *
 * @param request DescribeAvailableResourceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceInfoResponse
 */
DescribeAvailableResourceInfoResponse Client::describeAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAvailableResourceInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourceInfoResponse>();
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create an instance.
 *
 * @return DescribeAvailableResourceInfoResponse
 */
DescribeAvailableResourceInfoResponse Client::describeAvailableResourceInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceInfoWithOptions(runtime);
}

/**
 * @summary Queries available bandwidth metering methods.
 *
 * @param request DescribeBandWithdChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBandWithdChargeTypeResponse
 */
DescribeBandWithdChargeTypeResponse Client::describeBandWithdChargeTypeWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeBandWithdChargeType"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBandWithdChargeTypeResponse>();
}

/**
 * @summary Queries available bandwidth metering methods.
 *
 * @return DescribeBandWithdChargeTypeResponse
 */
DescribeBandWithdChargeTypeResponse Client::describeBandWithdChargeType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBandWithdChargeTypeWithOptions(runtime);
}

/**
 * @summary Queries the metering method for the bandwidth.
 *
 * @param request DescribeBandwitdhByInternetChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBandwitdhByInternetChargeTypeResponse
 */
DescribeBandwitdhByInternetChargeTypeResponse Client::describeBandwitdhByInternetChargeTypeWithOptions(const DescribeBandwitdhByInternetChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBandwitdhByInternetChargeType"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBandwitdhByInternetChargeTypeResponse>();
}

/**
 * @summary Queries the metering method for the bandwidth.
 *
 * @param request DescribeBandwitdhByInternetChargeTypeRequest
 * @return DescribeBandwitdhByInternetChargeTypeResponse
 */
DescribeBandwitdhByInternetChargeTypeResponse Client::describeBandwitdhByInternetChargeType(const DescribeBandwitdhByInternetChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBandwitdhByInternetChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the available resources in a region.
 *
 * @param request DescribeCloudDiskAvailableResourceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDiskAvailableResourceInfoResponse
 */
DescribeCloudDiskAvailableResourceInfoResponse Client::describeCloudDiskAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCloudDiskAvailableResourceInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDiskAvailableResourceInfoResponse>();
}

/**
 * @summary Queries the available resources in a region.
 *
 * @return DescribeCloudDiskAvailableResourceInfoResponse
 */
DescribeCloudDiskAvailableResourceInfoResponse Client::describeCloudDiskAvailableResourceInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDiskAvailableResourceInfoWithOptions(runtime);
}

/**
 * @summary The specifications of available resources are queried when you create a disk.
 *
 * @param tmpReq DescribeCloudDiskTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDiskTypesResponse
 */
DescribeCloudDiskTypesResponse Client::describeCloudDiskTypesWithOptions(const DescribeCloudDiskTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudDiskTypesShrinkRequest request = DescribeCloudDiskTypesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnsRegionIds()) {
    request.setEnsRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnsRegionIds(), "EnsRegionIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDiskTypes"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDiskTypesResponse>();
}

/**
 * @summary The specifications of available resources are queried when you create a disk.
 *
 * @param request DescribeCloudDiskTypesRequest
 * @return DescribeCloudDiskTypesResponse
 */
DescribeCloudDiskTypesResponse Client::describeCloudDiskTypes(const DescribeCloudDiskTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDiskTypesWithOptions(request, runtime);
}

/**
 * @summary Queries Container Service for Kubernetes (ACK) edge clusters.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterResponse
 */
DescribeClusterResponse Client::describeClusterWithOptions(const DescribeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCluster"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterResponse>();
}

/**
 * @summary Queries Container Service for Kubernetes (ACK) edge clusters.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeClusterRequest
 * @return DescribeClusterResponse
 */
DescribeClusterResponse Client::describeCluster(const DescribeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterWithOptions(request, runtime);
}

/**
 * @summary 查询集群详细信息
 *
 * @param request DescribeClusterDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterDetailResponse
 */
DescribeClusterDetailResponse Client::describeClusterDetailWithOptions(const DescribeClusterDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterDetail"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterDetailResponse>();
}

/**
 * @summary 查询集群详细信息
 *
 * @param request DescribeClusterDetailRequest
 * @return DescribeClusterDetailResponse
 */
DescribeClusterDetailResponse Client::describeClusterDetail(const DescribeClusterDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate of a Container Service for Kubernetes (ACK) edge cluster.
 *
 * @description *   The maximum number of times that each user can call this operation per second is 100.
 *
 * @param request DescribeClusterKubeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterKubeConfigResponse
 */
DescribeClusterKubeConfigResponse Client::describeClusterKubeConfigWithOptions(const DescribeClusterKubeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterKubeConfig"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterKubeConfigResponse>();
}

/**
 * @summary Queries the certificate of a Container Service for Kubernetes (ACK) edge cluster.
 *
 * @description *   The maximum number of times that each user can call this operation per second is 100.
 *
 * @param request DescribeClusterKubeConfigRequest
 * @return DescribeClusterKubeConfigResponse
 */
DescribeClusterKubeConfigResponse Client::describeClusterKubeConfig(const DescribeClusterKubeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterKubeConfigWithOptions(request, runtime);
}

/**
 * @summary 查询集群节点池信息
 *
 * @param request DescribeClusterNodePoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNodePoolsResponse
 */
DescribeClusterNodePoolsResponse Client::describeClusterNodePoolsWithOptions(const DescribeClusterNodePoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNodePools"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNodePoolsResponse>();
}

/**
 * @summary 查询集群节点池信息
 *
 * @param request DescribeClusterNodePoolsRequest
 * @return DescribeClusterNodePoolsResponse
 */
DescribeClusterNodePoolsResponse Client::describeClusterNodePools(const DescribeClusterNodePoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterNodePoolsWithOptions(request, runtime);
}

/**
 * @summary 查询节点池节点
 *
 * @param request DescribeClusterNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNodesResponse
 */
DescribeClusterNodesResponse Client::describeClusterNodesWithOptions(const DescribeClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodepoolId()) {
    query["NodepoolId"] = request.getNodepoolId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNodes"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNodesResponse>();
}

/**
 * @summary 查询节点池节点
 *
 * @param request DescribeClusterNodesRequest
 * @return DescribeClusterNodesResponse
 */
DescribeClusterNodesResponse Client::describeClusterNodes(const DescribeClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterNodesWithOptions(request, runtime);
}

/**
 * @summary 查询集群KubeConfig
 *
 * @param request DescribeClusterUserKubeconfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterUserKubeconfigResponse
 */
DescribeClusterUserKubeconfigResponse Client::describeClusterUserKubeconfigWithOptions(const DescribeClusterUserKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterUserKubeconfig"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterUserKubeconfigResponse>();
}

/**
 * @summary 查询集群KubeConfig
 *
 * @param request DescribeClusterUserKubeconfigRequest
 * @return DescribeClusterUserKubeconfigResponse
 */
DescribeClusterUserKubeconfigResponse Client::describeClusterUserKubeconfig(const DescribeClusterUserKubeconfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterUserKubeconfigWithOptions(request, runtime);
}

/**
 * @summary Queries a list of clusters.
 *
 * @param request DescribeClustersV1Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClustersV1Response
 */
DescribeClustersV1Response Client::describeClustersV1WithOptions(const DescribeClustersV1Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClustersV1"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClustersV1Response>();
}

/**
 * @summary Queries a list of clusters.
 *
 * @param request DescribeClustersV1Request
 * @return DescribeClustersV1Response
 */
DescribeClustersV1Response Client::describeClustersV1(const DescribeClustersV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClustersV1WithOptions(request, runtime);
}

/**
 * @summary Queries the results of creating an instance.
 *
 * @param request DescribeCreatePrePaidInstanceResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCreatePrePaidInstanceResultResponse
 */
DescribeCreatePrePaidInstanceResultResponse Client::describeCreatePrePaidInstanceResultWithOptions(const DescribeCreatePrePaidInstanceResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreatePrePaidInstanceResult"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreatePrePaidInstanceResultResponse>();
}

/**
 * @summary Queries the results of creating an instance.
 *
 * @param request DescribeCreatePrePaidInstanceResultRequest
 * @return DescribeCreatePrePaidInstanceResultResponse
 */
DescribeCreatePrePaidInstanceResultResponse Client::describeCreatePrePaidInstanceResult(const DescribeCreatePrePaidInstanceResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreatePrePaidInstanceResultWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution status of data files on edge instances of an application.
 *
 * @param tmpReq DescribeDataDistResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataDistResultResponse
 */
DescribeDataDistResultResponse Client::describeDataDistResultWithOptions(const DescribeDataDistResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeDataDistResultShrinkRequest request = DescribeDataDistResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnsRegionIds()) {
    request.setEnsRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnsRegionIds(), "EnsRegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDataNames()) {
    query["DataNames"] = request.getDataNames();
  }

  if (!!request.hasDataVersions()) {
    query["DataVersions"] = request.getDataVersions();
  }

  if (!!request.hasEnsRegionIdsShrink()) {
    query["EnsRegionIds"] = request.getEnsRegionIdsShrink();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxDate()) {
    query["MaxDate"] = request.getMaxDate();
  }

  if (!!request.hasMinDate()) {
    query["MinDate"] = request.getMinDate();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataDistResult"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataDistResultResponse>();
}

/**
 * @summary Queries the distribution status of data files on edge instances of an application.
 *
 * @param request DescribeDataDistResultRequest
 * @return DescribeDataDistResultResponse
 */
DescribeDataDistResultResponse Client::describeDataDistResult(const DescribeDataDistResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataDistResultWithOptions(request, runtime);
}

/**
 * @summary Queries the download URLs of application data on file servers and returns the file servers on which data is pushed.
 *
 * @param request DescribeDataDownloadURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataDownloadURLResponse
 */
DescribeDataDownloadURLResponse Client::describeDataDownloadURLWithOptions(const DescribeDataDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataDownloadURL"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataDownloadURLResponse>();
}

/**
 * @summary Queries the download URLs of application data on file servers and returns the file servers on which data is pushed.
 *
 * @param request DescribeDataDownloadURLRequest
 * @return DescribeDataDownloadURLResponse
 */
DescribeDataDownloadURLResponse Client::describeDataDownloadURL(const DescribeDataDownloadURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataDownloadURLWithOptions(request, runtime);
}

/**
 * @summary Queries the push status of application data files on Edge Node Service (ENS) nodes.
 *
 * @param request DescribeDataPushResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataPushResultResponse
 */
DescribeDataPushResultResponse Client::describeDataPushResultWithOptions(const DescribeDataPushResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDataNames()) {
    query["DataNames"] = request.getDataNames();
  }

  if (!!request.hasDataVersions()) {
    query["DataVersions"] = request.getDataVersions();
  }

  if (!!request.hasMaxDate()) {
    query["MaxDate"] = request.getMaxDate();
  }

  if (!!request.hasMinDate()) {
    query["MinDate"] = request.getMinDate();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionIds()) {
    query["RegionIds"] = request.getRegionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataPushResult"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataPushResultResponse>();
}

/**
 * @summary Queries the push status of application data files on Edge Node Service (ENS) nodes.
 *
 * @param request DescribeDataPushResultRequest
 * @return DescribeDataPushResultResponse
 */
DescribeDataPushResultResponse Client::describeDataPushResult(const DescribeDataPushResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataPushResultWithOptions(request, runtime);
}

/**
 * @summary Queries the properties of instances and virtual devices in a specific edge application.
 *
 * @param request DescribeDeviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceServiceResponse
 */
DescribeDeviceServiceResponse Client::describeDeviceServiceWithOptions(const DescribeDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceService"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceServiceResponse>();
}

/**
 * @summary Queries the properties of instances and virtual devices in a specific edge application.
 *
 * @param request DescribeDeviceServiceRequest
 * @return DescribeDeviceServiceResponse
 */
DescribeDeviceServiceResponse Client::describeDeviceService(const DescribeDeviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the disk IOPS monitoring data.
 *
 * @param request DescribeDiskIopsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskIopsListResponse
 */
DescribeDiskIopsListResponse Client::describeDiskIopsListWithOptions(const DescribeDiskIopsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskIopsList"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskIopsListResponse>();
}

/**
 * @summary Queries the disk IOPS monitoring data.
 *
 * @param request DescribeDiskIopsListRequest
 * @return DescribeDiskIopsListResponse
 */
DescribeDiskIopsListResponse Client::describeDiskIopsList(const DescribeDiskIopsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskIopsListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more disks.
 *
 * @param request DescribeDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisksResponse
 */
DescribeDisksResponse Client::describeDisksWithOptions(const DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDiskChargeType()) {
    query["DiskChargeType"] = request.getDiskChargeType();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasDiskIds()) {
    query["DiskIds"] = request.getDiskIds();
  }

  if (!!request.hasDiskName()) {
    query["DiskName"] = request.getDiskName();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderByParams()) {
    query["OrderByParams"] = request.getOrderByParams();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDisks"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDisksResponse>();
}

/**
 * @summary Queries the information about one or more disks.
 *
 * @param request DescribeDisksRequest
 * @return DescribeDisksResponse
 */
DescribeDisksResponse Client::describeDisks(const DescribeDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisksWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create an instance.
 *
 * @param request DescribeElbAvailableResourceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElbAvailableResourceInfoResponse
 */
DescribeElbAvailableResourceInfoResponse Client::describeElbAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeElbAvailableResourceInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElbAvailableResourceInfoResponse>();
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create an instance.
 *
 * @return DescribeElbAvailableResourceInfoResponse
 */
DescribeElbAvailableResourceInfoResponse Client::describeElbAvailableResourceInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElbAvailableResourceInfoWithOptions(runtime);
}

/**
 * @summary 描述商品code
 *
 * @param request DescribeEnsCommodityCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsCommodityCodeResponse
 */
DescribeEnsCommodityCodeResponse Client::describeEnsCommodityCodeWithOptions(const DescribeEnsCommodityCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsCommodityCode"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsCommodityCodeResponse>();
}

/**
 * @summary 描述商品code
 *
 * @param request DescribeEnsCommodityCodeRequest
 * @return DescribeEnsCommodityCodeResponse
 */
DescribeEnsCommodityCodeResponse Client::describeEnsCommodityCode(const DescribeEnsCommodityCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsCommodityCodeWithOptions(request, runtime);
}

/**
 * @summary 获取模块code
 *
 * @param request DescribeEnsCommodityModuleCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsCommodityModuleCodeResponse
 */
DescribeEnsCommodityModuleCodeResponse Client::describeEnsCommodityModuleCodeWithOptions(const DescribeEnsCommodityModuleCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasModuleCode()) {
    query["ModuleCode"] = request.getModuleCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsCommodityModuleCode"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsCommodityModuleCodeResponse>();
}

/**
 * @summary 获取模块code
 *
 * @param request DescribeEnsCommodityModuleCodeRequest
 * @return DescribeEnsCommodityModuleCodeResponse
 */
DescribeEnsCommodityModuleCodeResponse Client::describeEnsCommodityModuleCode(const DescribeEnsCommodityModuleCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsCommodityModuleCodeWithOptions(request, runtime);
}

/**
 * @summary Queries elastic IP addresses (EIPs).
 *
 * @param request DescribeEnsEipAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsEipAddressesResponse
 */
DescribeEnsEipAddressesResponse Client::describeEnsEipAddressesWithOptions(const DescribeEnsEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
  }

  if (!!request.hasAssociatedInstanceId()) {
    query["AssociatedInstanceId"] = request.getAssociatedInstanceId();
  }

  if (!!request.hasAssociatedInstanceType()) {
    query["AssociatedInstanceType"] = request.getAssociatedInstanceType();
  }

  if (!!request.hasEipAddress()) {
    query["EipAddress"] = request.getEipAddress();
  }

  if (!!request.hasEipName()) {
    query["EipName"] = request.getEipName();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasIcmpReplyEnabled()) {
    query["IcmpReplyEnabled"] = request.getIcmpReplyEnabled();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStandby()) {
    query["Standby"] = request.getStandby();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsEipAddresses"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsEipAddressesResponse>();
}

/**
 * @summary Queries elastic IP addresses (EIPs).
 *
 * @param request DescribeEnsEipAddressesRequest
 * @return DescribeEnsEipAddressesResponse
 */
DescribeEnsEipAddressesResponse Client::describeEnsEipAddresses(const DescribeEnsEipAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsEipAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries regions in which ENS resources can be created.
 *
 * @param request DescribeEnsNetDistrictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsNetDistrictResponse
 */
DescribeEnsNetDistrictResponse Client::describeEnsNetDistrictWithOptions(const DescribeEnsNetDistrictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetDistrictCode()) {
    query["NetDistrictCode"] = request.getNetDistrictCode();
  }

  if (!!request.hasNetDistrictCodeNode()) {
    query["NetDistrictCodeNode"] = request.getNetDistrictCodeNode();
  }

  if (!!request.hasNetLevelCode()) {
    query["NetLevelCode"] = request.getNetLevelCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsNetDistrict"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsNetDistrictResponse>();
}

/**
 * @summary Queries regions in which ENS resources can be created.
 *
 * @param request DescribeEnsNetDistrictRequest
 * @return DescribeEnsNetDistrictResponse
 */
DescribeEnsNetDistrictResponse Client::describeEnsNetDistrict(const DescribeEnsNetDistrictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsNetDistrictWithOptions(request, runtime);
}

/**
 * @summary Queries the supported network levels.
 *
 * @param request DescribeEnsNetLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsNetLevelResponse
 */
DescribeEnsNetLevelResponse Client::describeEnsNetLevelWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeEnsNetLevel"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsNetLevelResponse>();
}

/**
 * @summary Queries the supported network levels.
 *
 * @return DescribeEnsNetLevelResponse
 */
DescribeEnsNetLevelResponse Client::describeEnsNetLevel() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsNetLevelWithOptions(runtime);
}

/**
 * @summary Queries the information about ISPs and number of ISPs in an area.
 *
 * @param request DescribeEnsNetSaleDistrictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsNetSaleDistrictResponse
 */
DescribeEnsNetSaleDistrictResponse Client::describeEnsNetSaleDistrictWithOptions(const DescribeEnsNetSaleDistrictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetDistrictCode()) {
    query["NetDistrictCode"] = request.getNetDistrictCode();
  }

  if (!!request.hasNetLevelCode()) {
    query["NetLevelCode"] = request.getNetLevelCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsNetSaleDistrict"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsNetSaleDistrictResponse>();
}

/**
 * @summary Queries the information about ISPs and number of ISPs in an area.
 *
 * @param request DescribeEnsNetSaleDistrictRequest
 * @return DescribeEnsNetSaleDistrictResponse
 */
DescribeEnsNetSaleDistrictResponse Client::describeEnsNetSaleDistrict(const DescribeEnsNetSaleDistrictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsNetSaleDistrictWithOptions(request, runtime);
}

/**
 * @summary Queries whether a node supports IPv6.
 *
 * @param request DescribeEnsRegionIdIpv6InfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsRegionIdIpv6InfoResponse
 */
DescribeEnsRegionIdIpv6InfoResponse Client::describeEnsRegionIdIpv6InfoWithOptions(const DescribeEnsRegionIdIpv6InfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsRegionIdIpv6Info"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsRegionIdIpv6InfoResponse>();
}

/**
 * @summary Queries whether a node supports IPv6.
 *
 * @param request DescribeEnsRegionIdIpv6InfoRequest
 * @return DescribeEnsRegionIdIpv6InfoResponse
 */
DescribeEnsRegionIdIpv6InfoResponse Client::describeEnsRegionIdIpv6Info(const DescribeEnsRegionIdIpv6InfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsRegionIdIpv6InfoWithOptions(request, runtime);
}

/**
 * @summary Queries node resources.
 *
 * @description ****
 *
 * @param request DescribeEnsRegionIdResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsRegionIdResourceResponse
 */
DescribeEnsRegionIdResourceResponse Client::describeEnsRegionIdResourceWithOptions(const DescribeEnsRegionIdResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasOrderByParams()) {
    query["OrderByParams"] = request.getOrderByParams();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsRegionIdResource"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsRegionIdResourceResponse>();
}

/**
 * @summary Queries node resources.
 *
 * @description ****
 *
 * @param request DescribeEnsRegionIdResourceRequest
 * @return DescribeEnsRegionIdResourceResponse
 */
DescribeEnsRegionIdResourceResponse Client::describeEnsRegionIdResource(const DescribeEnsRegionIdResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsRegionIdResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the Edge Node Service (ENS) nodes that you can use.
 *
 * @param request DescribeEnsRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsRegionsResponse
 */
DescribeEnsRegionsResponse Client::describeEnsRegionsWithOptions(const DescribeEnsRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsRegions"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsRegionsResponse>();
}

/**
 * @summary Queries the Edge Node Service (ENS) nodes that you can use.
 *
 * @param request DescribeEnsRegionsRequest
 * @return DescribeEnsRegionsResponse
 */
DescribeEnsRegionsResponse Client::describeEnsRegions(const DescribeEnsRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the usage summary of ENS virtual machines (VMs), disks, and networks.
 *
 * @param request DescribeEnsResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsResourceUsageResponse
 */
DescribeEnsResourceUsageResponse Client::describeEnsResourceUsageWithOptions(const DescribeEnsResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsResourceUsage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsResourceUsageResponse>();
}

/**
 * @summary Queries the usage summary of ENS virtual machines (VMs), disks, and networks.
 *
 * @param request DescribeEnsResourceUsageRequest
 * @return DescribeEnsResourceUsageResponse
 */
DescribeEnsResourceUsageResponse Client::describeEnsResourceUsage(const DescribeEnsResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsResourceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries route entries.
 *
 * @param request DescribeEnsRouteEntryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsRouteEntryListResponse
 */
DescribeEnsRouteEntryListResponse Client::describeEnsRouteEntryListWithOptions(const DescribeEnsRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasNextHopId()) {
    query["NextHopId"] = request.getNextHopId();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRouteEntryId()) {
    query["RouteEntryId"] = request.getRouteEntryId();
  }

  if (!!request.hasRouteEntryName()) {
    query["RouteEntryName"] = request.getRouteEntryName();
  }

  if (!!request.hasRouteEntryType()) {
    query["RouteEntryType"] = request.getRouteEntryType();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsRouteEntryList"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsRouteEntryListResponse>();
}

/**
 * @summary Queries route entries.
 *
 * @param request DescribeEnsRouteEntryListRequest
 * @return DescribeEnsRouteEntryListResponse
 */
DescribeEnsRouteEntryListResponse Client::describeEnsRouteEntryList(const DescribeEnsRouteEntryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsRouteEntryListWithOptions(request, runtime);
}

/**
 * @summary Queries route tables.
 *
 * @param request DescribeEnsRouteTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsRouteTablesResponse
 */
DescribeEnsRouteTablesResponse Client::describeEnsRouteTablesWithOptions(const DescribeEnsRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociateType()) {
    query["AssociateType"] = request.getAssociateType();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasRouteTableName()) {
    query["RouteTableName"] = request.getRouteTableName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsRouteTables"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsRouteTablesResponse>();
}

/**
 * @summary Queries route tables.
 *
 * @param request DescribeEnsRouteTablesRequest
 * @return DescribeEnsRouteTablesResponse
 */
DescribeEnsRouteTablesResponse Client::describeEnsRouteTables(const DescribeEnsRouteTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsRouteTablesWithOptions(request, runtime);
}

/**
 * @summary 展示配置的售卖约束信息
 *
 * @param request DescribeEnsSaleControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsSaleControlResponse
 */
DescribeEnsSaleControlResponse Client::describeEnsSaleControlWithOptions(const DescribeEnsSaleControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasModuleCode()) {
    query["ModuleCode"] = request.getModuleCode();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsSaleControl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsSaleControlResponse>();
}

/**
 * @summary 展示配置的售卖约束信息
 *
 * @param request DescribeEnsSaleControlRequest
 * @return DescribeEnsSaleControlResponse
 */
DescribeEnsSaleControlResponse Client::describeEnsSaleControl(const DescribeEnsSaleControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsSaleControlWithOptions(request, runtime);
}

/**
 * @summary 获取可用资源
 *
 * @param request DescribeEnsSaleControlAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsSaleControlAvailableResourceResponse
 */
DescribeEnsSaleControlAvailableResourceResponse Client::describeEnsSaleControlAvailableResourceWithOptions(const DescribeEnsSaleControlAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsSaleControlAvailableResource"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsSaleControlAvailableResourceResponse>();
}

/**
 * @summary 获取可用资源
 *
 * @param request DescribeEnsSaleControlAvailableResourceRequest
 * @return DescribeEnsSaleControlAvailableResourceResponse
 */
DescribeEnsSaleControlAvailableResourceResponse Client::describeEnsSaleControlAvailableResource(const DescribeEnsSaleControlAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsSaleControlAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary 获取售卖约束库存
 *
 * @param request DescribeEnsSaleControlStockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnsSaleControlStockResponse
 */
DescribeEnsSaleControlStockResponse Client::describeEnsSaleControlStockWithOptions(const DescribeEnsSaleControlStockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasModuleCode()) {
    query["ModuleCode"] = request.getModuleCode();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnsSaleControlStock"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnsSaleControlStockResponse>();
}

/**
 * @summary 获取售卖约束库存
 *
 * @param request DescribeEnsSaleControlStockRequest
 * @return DescribeEnsSaleControlStockResponse
 */
DescribeEnsSaleControlStockResponse Client::describeEnsSaleControlStock(const DescribeEnsSaleControlStockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnsSaleControlStockWithOptions(request, runtime);
}

/**
 * @summary Queries the EPN bandwidth usage.
 *
 * @param request DescribeEpnBandWidthDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEpnBandWidthDataResponse
 */
DescribeEpnBandWidthDataResponse Client::describeEpnBandWidthDataWithOptions(const DescribeEpnBandWidthDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasNetworkingModel()) {
    query["NetworkingModel"] = request.getNetworkingModel();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEpnBandWidthData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEpnBandWidthDataResponse>();
}

/**
 * @summary Queries the EPN bandwidth usage.
 *
 * @param request DescribeEpnBandWidthDataRequest
 * @return DescribeEpnBandWidthDataResponse
 */
DescribeEpnBandWidthDataResponse Client::describeEpnBandWidthData(const DescribeEpnBandWidthDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEpnBandWidthDataWithOptions(request, runtime);
}

/**
 * @summary Queries the metering method of the EPN bandwidth within a time period.
 *
 * @param request DescribeEpnBandwitdhByInternetChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEpnBandwitdhByInternetChargeTypeResponse
 */
DescribeEpnBandwitdhByInternetChargeTypeResponse Client::describeEpnBandwitdhByInternetChargeTypeWithOptions(const DescribeEpnBandwitdhByInternetChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasNetworkingModel()) {
    query["NetworkingModel"] = request.getNetworkingModel();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEpnBandwitdhByInternetChargeType"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEpnBandwitdhByInternetChargeTypeResponse>();
}

/**
 * @summary Queries the metering method of the EPN bandwidth within a time period.
 *
 * @param request DescribeEpnBandwitdhByInternetChargeTypeRequest
 * @return DescribeEpnBandwitdhByInternetChargeTypeResponse
 */
DescribeEpnBandwitdhByInternetChargeTypeResponse Client::describeEpnBandwitdhByInternetChargeType(const DescribeEpnBandwitdhByInternetChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEpnBandwitdhByInternetChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Queries networking information about an EPN instance.
 *
 * @description In internal networking mode, the value of Instances is empty in the response. In public networking mode, the value of VSwitches is empty in the response.
 *
 * @param request DescribeEpnInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEpnInstanceAttributeResponse
 */
DescribeEpnInstanceAttributeResponse Client::describeEpnInstanceAttributeWithOptions(const DescribeEpnInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEpnInstanceAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEpnInstanceAttributeResponse>();
}

/**
 * @summary Queries networking information about an EPN instance.
 *
 * @description In internal networking mode, the value of Instances is empty in the response. In public networking mode, the value of VSwitches is empty in the response.
 *
 * @param request DescribeEpnInstanceAttributeRequest
 * @return DescribeEpnInstanceAttributeResponse
 */
DescribeEpnInstanceAttributeResponse Client::describeEpnInstanceAttribute(const DescribeEpnInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEpnInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries EPN instances.
 *
 * @param request DescribeEpnInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEpnInstancesResponse
 */
DescribeEpnInstancesResponse Client::describeEpnInstancesWithOptions(const DescribeEpnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasEPNInstanceName()) {
    query["EPNInstanceName"] = request.getEPNInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEpnInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEpnInstancesResponse>();
}

/**
 * @summary Queries EPN instances.
 *
 * @param request DescribeEpnInstancesRequest
 * @return DescribeEpnInstancesResponse
 */
DescribeEpnInstancesResponse Client::describeEpnInstances(const DescribeEpnInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEpnInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the metering data of the edge private network (EPN).
 *
 * @param request DescribeEpnMeasurementDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEpnMeasurementDataResponse
 */
DescribeEpnMeasurementDataResponse Client::describeEpnMeasurementDataWithOptions(const DescribeEpnMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEpnMeasurementData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEpnMeasurementDataResponse>();
}

/**
 * @summary Queries the metering data of the edge private network (EPN).
 *
 * @param request DescribeEpnMeasurementDataRequest
 * @return DescribeEpnMeasurementDataResponse
 */
DescribeEpnMeasurementDataResponse Client::describeEpnMeasurementData(const DescribeEpnMeasurementDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEpnMeasurementDataWithOptions(request, runtime);
}

/**
 * @summary Queries the export result of an image.
 *
 * @description *   You can call this operation to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
 * *   Empty strings are returned for images that are not exported.
 * *   The download links may become invalid if you delete objects in OSS.
 *
 * @param request DescribeExportImageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExportImageInfoResponse
 */
DescribeExportImageInfoResponse Client::describeExportImageInfoWithOptions(const DescribeExportImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExportImageInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExportImageInfoResponse>();
}

/**
 * @summary Queries the export result of an image.
 *
 * @description *   You can call this operation to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
 * *   Empty strings are returned for images that are not exported.
 * *   The download links may become invalid if you delete objects in OSS.
 *
 * @param request DescribeExportImageInfoRequest
 * @return DescribeExportImageInfoResponse
 */
DescribeExportImageInfoResponse Client::describeExportImageInfo(const DescribeExportImageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExportImageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the export status of an image.
 *
 * @param request DescribeExportImageStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExportImageStatusResponse
 */
DescribeExportImageStatusResponse Client::describeExportImageStatusWithOptions(const DescribeExportImageStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExportImageStatus"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExportImageStatusResponse>();
}

/**
 * @summary Queries the export status of an image.
 *
 * @param request DescribeExportImageStatusRequest
 * @return DescribeExportImageStatusResponse
 */
DescribeExportImageStatusResponse Client::describeExportImageStatus(const DescribeExportImageStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExportImageStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about file systems.
 *
 * @param request DescribeFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileSystemsResponse
 */
DescribeFileSystemsResponse Client::describeFileSystemsWithOptions(const DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFileSystems"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileSystemsResponse>();
}

/**
 * @summary Queries the information about file systems.
 *
 * @param request DescribeFileSystemsRequest
 * @return DescribeFileSystemsResponse
 */
DescribeFileSystemsResponse Client::describeFileSystems(const DescribeFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileSystemsWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeForwardEntryAttribute operation to query the details of a DNAT rule.
 *
 * @param request DescribeForwardEntryAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeForwardEntryAttributeResponse
 */
DescribeForwardEntryAttributeResponse Client::describeForwardEntryAttributeWithOptions(const DescribeForwardEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeForwardEntryAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeForwardEntryAttributeResponse>();
}

/**
 * @summary You can call the DescribeForwardEntryAttribute operation to query the details of a DNAT rule.
 *
 * @param request DescribeForwardEntryAttributeRequest
 * @return DescribeForwardEntryAttributeResponse
 */
DescribeForwardEntryAttributeResponse Client::describeForwardEntryAttribute(const DescribeForwardEntryAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeForwardEntryAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries Destination Network Address Translation (DNAT) entries that you created.
 *
 * @param request DescribeForwardTableEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeForwardTableEntriesResponse
 */
DescribeForwardTableEntriesResponse Client::describeForwardTableEntriesWithOptions(const DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  if (!!request.hasForwardEntryName()) {
    query["ForwardEntryName"] = request.getForwardEntryName();
  }

  if (!!request.hasInternalIp()) {
    query["InternalIp"] = request.getInternalIp();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeForwardTableEntries"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeForwardTableEntriesResponse>();
}

/**
 * @summary Queries Destination Network Address Translation (DNAT) entries that you created.
 *
 * @param request DescribeForwardTableEntriesRequest
 * @return DescribeForwardTableEntriesResponse
 */
DescribeForwardTableEntriesResponse Client::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeForwardTableEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries high-availability virtual IP addresses (HAVIPs).
 *
 * @param request DescribeHaVipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHaVipsResponse
 */
DescribeHaVipsResponse Client::describeHaVipsWithOptions(const DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHaVips"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHaVipsResponse>();
}

/**
 * @summary Queries high-availability virtual IP addresses (HAVIPs).
 *
 * @param request DescribeHaVipsRequest
 * @return DescribeHaVipsResponse
 */
DescribeHaVipsResponse Client::describeHaVips(const DescribeHaVipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHaVipsWithOptions(request, runtime);
}

/**
 * @summary Queries instance system events.
 *
 * @description *   You must specify an event type to query. You can query multiple event types at the same time.
 *
 * @param tmpReq DescribeHistoryEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEventsWithOptions(const DescribeHistoryEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeHistoryEventsShrinkRequest request = DescribeHistoryEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventLevels()) {
    request.setEventLevelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventLevels(), "EventLevels", "simple"));
  }

  if (!!tmpReq.hasEventStatus()) {
    request.setEventStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventStatus(), "EventStatus", "simple"));
  }

  if (!!tmpReq.hasEventTypes()) {
    request.setEventTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventTypes(), "EventTypes", "simple"));
  }

  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "ResourceIds", "simple"));
  }

  json query = {};
  if (!!request.hasEventLevelsShrink()) {
    query["EventLevels"] = request.getEventLevelsShrink();
  }

  if (!!request.hasEventStatusShrink()) {
    query["EventStatus"] = request.getEventStatusShrink();
  }

  if (!!request.hasEventTypesShrink()) {
    query["EventTypes"] = request.getEventTypesShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.getResourceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEvents"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryEventsResponse>();
}

/**
 * @summary Queries instance system events.
 *
 * @description *   You must specify an event type to query. You can query multiple event types at the same time.
 *
 * @param request DescribeHistoryEventsRequest
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEvents(const DescribeHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary Queries available images.
 *
 * @param request DescribeImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageInfosResponse
 */
DescribeImageInfosResponse Client::describeImageInfosWithOptions(const DescribeImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImageInfos"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageInfosResponse>();
}

/**
 * @summary Queries available images.
 *
 * @param request DescribeImageInfosRequest
 * @return DescribeImageInfosResponse
 */
DescribeImageInfosResponse Client::describeImageInfos(const DescribeImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the accounts with which you share an image specified by the ImageId parameter.
 *
 * @param request DescribeImageSharePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageSharePermissionResponse
 */
DescribeImageSharePermissionResponse Client::describeImageSharePermissionWithOptions(const DescribeImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunId()) {
    query["AliyunId"] = request.getAliyunId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImageSharePermission"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageSharePermissionResponse>();
}

/**
 * @summary Queries the accounts with which you share an image specified by the ImageId parameter.
 *
 * @param request DescribeImageSharePermissionRequest
 * @return DescribeImageSharePermissionResponse
 */
DescribeImageSharePermissionResponse Client::describeImageSharePermission(const DescribeImageSharePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageSharePermissionWithOptions(request, runtime);
}

/**
 * @summary Queries available images.
 *
 * @param request DescribeImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImagesResponse
 */
DescribeImagesResponse Client::describeImagesWithOptions(const DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImages"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImagesResponse>();
}

/**
 * @summary Queries available images.
 *
 * @param request DescribeImagesRequest
 * @return DescribeImagesResponse
 */
DescribeImagesResponse Client::describeImages(const DescribeImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImagesWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query whether auto-renewal is enabled for an instance.
 *
 * @param request DescribeInstanceAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAutoRenewAttributeResponse
 */
DescribeInstanceAutoRenewAttributeResponse Client::describeInstanceAutoRenewAttributeWithOptions(const DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAutoRenewAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAutoRenewAttributeResponse>();
}

/**
 * @summary You can call this operation to query whether auto-renewal is enabled for an instance.
 *
 * @param request DescribeInstanceAutoRenewAttributeRequest
 * @return DescribeInstanceAutoRenewAttributeResponse
 */
DescribeInstanceAutoRenewAttributeResponse Client::describeInstanceAutoRenewAttribute(const DescribeInstanceAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed bandwidth data of an instance, which is collected every 5 minutes.
 *
 * @description *   You can call this operation up to 800 times per second per account.
 * *   You can call this operation up to 100 times per second per user.
 * *   You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, this parameter is regarded as a valid filter condition and an empty result is returned.
 *
 * @param request DescribeInstanceBandwidthDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceBandwidthDetailResponse
 */
DescribeInstanceBandwidthDetailResponse Client::describeInstanceBandwidthDetailWithOptions(const DescribeInstanceBandwidthDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceBandwidthDetail"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceBandwidthDetailResponse>();
}

/**
 * @summary Queries the detailed bandwidth data of an instance, which is collected every 5 minutes.
 *
 * @description *   You can call this operation up to 800 times per second per account.
 * *   You can call this operation up to 100 times per second per user.
 * *   You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, this parameter is regarded as a valid filter condition and an empty result is returned.
 *
 * @param request DescribeInstanceBandwidthDetailRequest
 * @return DescribeInstanceBandwidthDetailResponse
 */
DescribeInstanceBandwidthDetailResponse Client::describeInstanceBandwidthDetail(const DescribeInstanceBandwidthDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceBandwidthDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @description Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @param request DescribeInstanceBootConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceBootConfigurationResponse
 */
DescribeInstanceBootConfigurationResponse Client::describeInstanceBootConfigurationWithOptions(const DescribeInstanceBootConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBootSet()) {
    query["BootSet"] = request.getBootSet();
  }

  if (!!request.hasBootType()) {
    query["BootType"] = request.getBootType();
  }

  if (!!request.hasDiskSet()) {
    query["DiskSet"] = request.getDiskSet();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceBootConfiguration"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceBootConfigurationResponse>();
}

/**
 * @summary Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @description Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @param request DescribeInstanceBootConfigurationRequest
 * @return DescribeInstanceBootConfigurationResponse
 */
DescribeInstanceBootConfigurationResponse Client::describeInstanceBootConfiguration(const DescribeInstanceBootConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceBootConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the vCPU and memory usage of an instance.
 *
 * @param request DescribeInstanceMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceMonitorDataResponse
 */
DescribeInstanceMonitorDataResponse Client::describeInstanceMonitorDataWithOptions(const DescribeInstanceMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceMonitorData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceMonitorDataResponse>();
}

/**
 * @summary Queries the vCPU and memory usage of an instance.
 *
 * @param request DescribeInstanceMonitorDataRequest
 * @return DescribeInstanceMonitorDataResponse
 */
DescribeInstanceMonitorDataResponse Client::describeInstanceMonitorData(const DescribeInstanceMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Queries shared data groups (SDGs) that are mounted to an Android in Container (AIC) instance.
 *
 * @param tmpReq DescribeInstanceSDGStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSDGStatusResponse
 */
DescribeInstanceSDGStatusResponse Client::describeInstanceSDGStatusWithOptions(const DescribeInstanceSDGStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeInstanceSDGStatusShrinkRequest request = DescribeInstanceSDGStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSDGIds()) {
    request.setSDGIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSDGIds(), "SDGIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSDGStatus"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSDGStatusResponse>();
}

/**
 * @summary Queries shared data groups (SDGs) that are mounted to an Android in Container (AIC) instance.
 *
 * @param request DescribeInstanceSDGStatusRequest
 * @return DescribeInstanceSDGStatusResponse
 */
DescribeInstanceSDGStatusResponse Client::describeInstanceSDGStatus(const DescribeInstanceSDGStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSDGStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the instance specifications that you can purchase.
 *
 * @param request DescribeInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSpecResponse
 */
DescribeInstanceSpecResponse Client::describeInstanceSpecWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeInstanceSpec"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSpecResponse>();
}

/**
 * @summary Queries the instance specifications that you can purchase.
 *
 * @return DescribeInstanceSpecResponse
 */
DescribeInstanceSpecResponse Client::describeInstanceSpec() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSpecWithOptions(runtime);
}

/**
 * @summary Queries the specifications of instance types.
 *
 * @param request DescribeInstanceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceTypesResponse
 */
DescribeInstanceTypesResponse Client::describeInstanceTypesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeInstanceTypes"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceTypesResponse>();
}

/**
 * @summary Queries the specifications of instance types.
 *
 * @return DescribeInstanceTypesResponse
 */
DescribeInstanceTypesResponse Client::describeInstanceTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceTypesWithOptions(runtime);
}

/**
 * @summary Queries the Virtual Network Computing (VNC) URL of an Edge Node Service (ENS) instance.
 *
 * @param request DescribeInstanceVncUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceVncUrlResponse
 */
DescribeInstanceVncUrlResponse Client::describeInstanceVncUrlWithOptions(const DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceVncUrl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceVncUrlResponse>();
}

/**
 * @summary Queries the Virtual Network Computing (VNC) URL of an Edge Node Service (ENS) instance.
 *
 * @param request DescribeInstanceVncUrlRequest
 * @return DescribeInstanceVncUrlResponse
 */
DescribeInstanceVncUrlResponse Client::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceVncUrlWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to view the details of one or more instances.
 *
 * @description *   You can call this operation up to 800 times per second per account.
 * *   You can call this operation up to 100 times per second per user.
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, it is regarded as a valid filter condition and an empty result is returned.
 *
 * @param tmpReq DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeInstancesShrinkRequest request = DescribeInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEipAddresses()) {
    request.setEipAddressesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEipAddresses(), "EipAddresses", "json"));
  }

  if (!!tmpReq.hasServiceStatus()) {
    request.setServiceStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServiceStatus(), "ServiceStatus", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasEipAddressesShrink()) {
    query["EipAddresses"] = request.getEipAddressesShrink();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasEnsServiceId()) {
    query["EnsServiceId"] = request.getEnsServiceId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceResourceType()) {
    query["InstanceResourceType"] = request.getInstanceResourceType();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasIntranetIp()) {
    query["IntranetIp"] = request.getIntranetIp();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasOrderByParams()) {
    query["OrderByParams"] = request.getOrderByParams();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasServiceStatusShrink()) {
    query["ServiceStatus"] = request.getServiceStatusShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary You can call this operation to view the details of one or more instances.
 *
 * @description *   You can call this operation up to 800 times per second per account.
 * *   You can call this operation up to 100 times per second per user.
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, it is regarded as a valid filter condition and an empty result is returned.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries one or more key pairs.
 *
 * @param request DescribeKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKeyPairsResponse
 */
DescribeKeyPairsResponse Client::describeKeyPairsWithOptions(const DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKeyPairs"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKeyPairsResponse>();
}

/**
 * @summary Queries one or more key pairs.
 *
 * @param request DescribeKeyPairsRequest
 * @return DescribeKeyPairsResponse
 */
DescribeKeyPairsResponse Client::describeKeyPairs(const DescribeKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKeyPairsWithOptions(request, runtime);
}

/**
 * @summary Queries detailed information about an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttributeWithOptions(const DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerAttributeResponse>();
}

/**
 * @summary Queries detailed information about an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttributeWithOptions(const DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerHTTPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary Queries the configuration of an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
 */
DescribeLoadBalancerHTTPSListenerAttributeResponse Client::describeLoadBalancerHTTPSListenerAttributeWithOptions(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerHTTPSListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerHTTPSListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
 * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
 */
DescribeLoadBalancerHTTPSListenerAttributeResponse Client::describeLoadBalancerHTTPSListenerAttribute(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring data of an edge load balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerListenMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerListenMonitorResponse
 */
DescribeLoadBalancerListenMonitorResponse Client::describeLoadBalancerListenMonitorWithOptions(const DescribeLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerListenMonitor"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerListenMonitorResponse>();
}

/**
 * @summary Queries monitoring data of an edge load balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerListenMonitorRequest
 * @return DescribeLoadBalancerListenMonitorResponse
 */
DescribeLoadBalancerListenMonitorResponse Client::describeLoadBalancerListenMonitor(const DescribeLoadBalancerListenMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerListenMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries listeners of Edge Load Balancer (ELB) instances.
 *
 * @param request DescribeLoadBalancerListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerListenersResponse
 */
DescribeLoadBalancerListenersResponse Client::describeLoadBalancerListenersWithOptions(const DescribeLoadBalancerListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerListeners"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerListenersResponse>();
}

/**
 * @summary Queries listeners of Edge Load Balancer (ELB) instances.
 *
 * @param request DescribeLoadBalancerListenersRequest
 * @return DescribeLoadBalancerListenersResponse
 */
DescribeLoadBalancerListenersResponse Client::describeLoadBalancerListeners(const DescribeLoadBalancerListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerListenersWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of an Edge Load Balancer (ELB) instance.
 *
 * @param request DescribeLoadBalancerSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerSpecResponse
 */
DescribeLoadBalancerSpecResponse Client::describeLoadBalancerSpecWithOptions(const DescribeLoadBalancerSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerSpec"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerSpecResponse>();
}

/**
 * @summary Queries the specifications of an Edge Load Balancer (ELB) instance.
 *
 * @param request DescribeLoadBalancerSpecRequest
 * @return DescribeLoadBalancerSpecResponse
 */
DescribeLoadBalancerSpecResponse Client::describeLoadBalancerSpec(const DescribeLoadBalancerSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerSpecWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a Transmission Control Protocol (TCP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttributeWithOptions(const DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerTCPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of a Transmission Control Protocol (TCP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of a User Datagram Protocol (UDP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerUDPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerUDPListenerAttributeResponse
 */
DescribeLoadBalancerUDPListenerAttributeResponse Client::describeLoadBalancerUDPListenerAttributeWithOptions(const DescribeLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerUDPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerUDPListenerAttributeResponse>();
}

/**
 * @summary Queries the configuration of a User Datagram Protocol (UDP) listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancerUDPListenerAttributeRequest
 * @return DescribeLoadBalancerUDPListenerAttributeResponse
 */
DescribeLoadBalancerUDPListenerAttributeResponse Client::describeLoadBalancerUDPListenerAttribute(const DescribeLoadBalancerUDPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the Edge Load Balance (ELB) instances that you have created.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancersWithOptions(const DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancers"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancersResponse>();
}

/**
 * @summary Queries the Edge Load Balance (ELB) instances that you have created.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeLoadBalancersRequest
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancers(const DescribeLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Queries the metering data of the user.
 *
 * @param request DescribeMeasurementDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeasurementDataResponse
 */
DescribeMeasurementDataResponse Client::describeMeasurementDataWithOptions(const DescribeMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeasurementData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeasurementDataResponse>();
}

/**
 * @summary Queries the metering data of the user.
 *
 * @param request DescribeMeasurementDataRequest
 * @return DescribeMeasurementDataResponse
 */
DescribeMeasurementDataResponse Client::describeMeasurementData(const DescribeMeasurementDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeasurementDataWithOptions(request, runtime);
}

/**
 * @summary Queries the information about mount targets.
 *
 * @param request DescribeMountTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMountTargetsResponse
 */
DescribeMountTargetsResponse Client::describeMountTargetsWithOptions(const DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetName()) {
    query["MountTargetName"] = request.getMountTargetName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMountTargets"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMountTargetsResponse>();
}

/**
 * @summary Queries the information about mount targets.
 *
 * @param request DescribeMountTargetsRequest
 * @return DescribeMountTargetsResponse
 */
DescribeMountTargetsResponse Client::describeMountTargets(const DescribeMountTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMountTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create a NAS.
 *
 * @param request DescribeNASAvailableResourceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNASAvailableResourceInfoResponse
 */
DescribeNASAvailableResourceInfoResponse Client::describeNASAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeNASAvailableResourceInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNASAvailableResourceInfoResponse>();
}

/**
 * @summary Queries the specifications of resources that you can purchase when you create a NAS.
 *
 * @return DescribeNASAvailableResourceInfoResponse
 */
DescribeNASAvailableResourceInfoResponse Client::describeNASAvailableResourceInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNASAvailableResourceInfoWithOptions(runtime);
}

/**
 * @summary 根据筛选条件获取指定NC属性和资源量信息
 *
 * @param request DescribeNCInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNCInformationResponse
 */
DescribeNCInformationResponse Client::describeNCInformationWithOptions(const DescribeNCInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNCInformation"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNCInformationResponse>();
}

/**
 * @summary 根据筛选条件获取指定NC属性和资源量信息
 *
 * @param request DescribeNCInformationRequest
 * @return DescribeNCInformationResponse
 */
DescribeNCInformationResponse Client::describeNCInformation(const DescribeNCInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNCInformationWithOptions(request, runtime);
}

/**
 * @summary Queries created Network Address Translation (NAT) gateways.
 *
 * @param request DescribeNatGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatGatewaysResponse
 */
DescribeNatGatewaysResponse Client::describeNatGatewaysWithOptions(const DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatGateways"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatGatewaysResponse>();
}

/**
 * @summary Queries created Network Address Translation (NAT) gateways.
 *
 * @param request DescribeNatGatewaysRequest
 * @return DescribeNatGatewaysResponse
 */
DescribeNatGatewaysResponse Client::describeNatGateways(const DescribeNatGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatGatewaysWithOptions(request, runtime);
}

/**
 * @summary Queries network access control lists (ACLs).
 *
 * @param request DescribeNetworkAclsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkAclsResponse
 */
DescribeNetworkAclsResponse Client::describeNetworkAclsWithOptions(const DescribeNetworkAclsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkAclId()) {
    query["NetworkAclId"] = request.getNetworkAclId();
  }

  if (!!request.hasNetworkAclName()) {
    query["NetworkAclName"] = request.getNetworkAclName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkAcls"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkAclsResponse>();
}

/**
 * @summary Queries network access control lists (ACLs).
 *
 * @param request DescribeNetworkAclsRequest
 * @return DescribeNetworkAclsResponse
 */
DescribeNetworkAclsResponse Client::describeNetworkAcls(const DescribeNetworkAclsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkAclsWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of a specified network.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeNetworkAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkAttributeResponse
 */
DescribeNetworkAttributeResponse Client::describeNetworkAttributeWithOptions(const DescribeNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkAttributeResponse>();
}

/**
 * @summary Queries the configuration of a specified network.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeNetworkAttributeRequest
 * @return DescribeNetworkAttributeResponse
 */
DescribeNetworkAttributeResponse Client::describeNetworkAttribute(const DescribeNetworkAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries Elastic Network Interfaces (ENIs).
 *
 * @param request DescribeNetworkInterfacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkInterfacesResponse
 */
DescribeNetworkInterfacesResponse Client::describeNetworkInterfacesWithOptions(const DescribeNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpv6Address()) {
    query["Ipv6Address"] = request.getIpv6Address();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasNetworkInterfaceName()) {
    query["NetworkInterfaceName"] = request.getNetworkInterfaceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrimaryIpAddress()) {
    query["PrimaryIpAddress"] = request.getPrimaryIpAddress();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkInterfaces"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkInterfacesResponse>();
}

/**
 * @summary Queries Elastic Network Interfaces (ENIs).
 *
 * @param request DescribeNetworkInterfacesRequest
 * @return DescribeNetworkInterfacesResponse
 */
DescribeNetworkInterfacesResponse Client::describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkInterfacesWithOptions(request, runtime);
}

/**
 * @summary Query the network list.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeNetworksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworksResponse
 */
DescribeNetworksResponse Client::describeNetworksWithOptions(const DescribeNetworksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasNetworkIds()) {
    query["NetworkIds"] = request.getNetworkIds();
  }

  if (!!request.hasNetworkName()) {
    query["NetworkName"] = request.getNetworkName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworks"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworksResponse>();
}

/**
 * @summary Query the network list.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeNetworksRequest
 * @return DescribeNetworksResponse
 */
DescribeNetworksResponse Client::describeNetworks(const DescribeNetworksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworksWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of resources that can be purchased in subscription billing mode.
 *
 * @param request DescribePrePaidInstanceStockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrePaidInstanceStockResponse
 */
DescribePrePaidInstanceStockResponse Client::describePrePaidInstanceStockWithOptions(const DescribePrePaidInstanceStockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.getSystemDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrePaidInstanceStock"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrePaidInstanceStockResponse>();
}

/**
 * @summary Queries the specifications of resources that can be purchased in subscription billing mode.
 *
 * @param request DescribePrePaidInstanceStockRequest
 * @return DescribePrePaidInstanceStockResponse
 */
DescribePrePaidInstanceStockResponse Client::describePrePaidInstanceStock(const DescribePrePaidInstanceStockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrePaidInstanceStockWithOptions(request, runtime);
}

/**
 * @summary Queries the most recent price of an Edge Node Service (ENS) instance.
 *
 * @param tmpReq DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePriceShrinkRequest request = DescribePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataDisks()) {
    request.setDataDisksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataDisks(), "DataDisks", "json"));
  }

  json query = {};
  if (!!request.hasDataDisksShrink()) {
    query["DataDisks"] = request.getDataDisksShrink();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasDataDisk()) {
    query["DataDisk"] = request.getDataDisk();
  }

  if (!!request.hasSystemDisk()) {
    query["SystemDisk"] = request.getSystemDisk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary Queries the most recent price of an Edge Node Service (ENS) instance.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Queries information about the Internet service providers (ISPs) of edge nodes.
 *
 * @param request DescribeRegionIspsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionIspsResponse
 */
DescribeRegionIspsResponse Client::describeRegionIspsWithOptions(const DescribeRegionIspsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionIsps"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionIspsResponse>();
}

/**
 * @summary Queries information about the Internet service providers (ISPs) of edge nodes.
 *
 * @param request DescribeRegionIspsRequest
 * @return DescribeRegionIspsResponse
 */
DescribeRegionIspsResponse Client::describeRegionIsps(const DescribeRegionIspsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionIspsWithOptions(request, runtime);
}

/**
 * @summary 获取区域节点资源量信息
 *
 * @param request DescribeRegionResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionResourceResponse
 */
DescribeRegionResourceResponse Client::describeRegionResourceWithOptions(const DescribeRegionResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionResource"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionResourceResponse>();
}

/**
 * @summary 获取区域节点资源量信息
 *
 * @param request DescribeRegionResourceRequest
 * @return DescribeRegionResourceResponse
 */
DescribeRegionResourceResponse Client::describeRegionResource(const DescribeRegionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of resources that you can purchase.
 *
 * @param request DescribeReservedResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReservedResourceResponse
 */
DescribeReservedResourceResponse Client::describeReservedResourceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeReservedResource"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReservedResourceResponse>();
}

/**
 * @summary Queries the specifications of resources that you can purchase.
 *
 * @return DescribeReservedResourceResponse
 */
DescribeReservedResourceResponse Client::describeReservedResource() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReservedResourceWithOptions(runtime);
}

/**
 * @summary 获取资源状态变化时间线
 *
 * @param request DescribeResourceTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceTimelineResponse
 */
DescribeResourceTimelineResponse Client::describeResourceTimelineWithOptions(const DescribeResourceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceTimeline"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceTimelineResponse>();
}

/**
 * @summary 获取资源状态变化时间线
 *
 * @param request DescribeResourceTimelineRequest
 * @return DescribeResourceTimelineResponse
 */
DescribeResourceTimelineResponse Client::describeResourceTimeline(const DescribeResourceTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries basic information about shared data groups (SDGs), including node preload information.
 *
 * @param tmpReq DescribeSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDGResponse
 */
DescribeSDGResponse Client::describeSDGWithOptions(const DescribeSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSDGShrinkRequest request = DescribeSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSDGIds()) {
    request.setSDGIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSDGIds(), "SDGIds", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSDGIdsShrink()) {
    query["SDGIds"] = request.getSDGIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDGResponse>();
}

/**
 * @summary Queries basic information about shared data groups (SDGs), including node preload information.
 *
 * @param request DescribeSDGRequest
 * @return DescribeSDGResponse
 */
DescribeSDGResponse Client::describeSDG(const DescribeSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDGWithOptions(request, runtime);
}

/**
 * @summary Queries the deployment status of the shared data group (SDG).
 *
 * @param tmpReq DescribeSDGDeploymentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDGDeploymentStatusResponse
 */
DescribeSDGDeploymentStatusResponse Client::describeSDGDeploymentStatusWithOptions(const DescribeSDGDeploymentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSDGDeploymentStatusShrinkRequest request = DescribeSDGDeploymentStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDiskIds()) {
    request.setDiskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDiskIds(), "DiskIds", "json"));
  }

  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRegionIds(), "RegionIds", "json"));
  }

  json query = {};
  if (!!request.hasDeploymentType()) {
    query["DeploymentType"] = request.getDeploymentType();
  }

  if (!!request.hasDiskIdsShrink()) {
    query["DiskIds"] = request.getDiskIdsShrink();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.getRegionIdsShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDGDeploymentStatus"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDGDeploymentStatusResponse>();
}

/**
 * @summary Queries the deployment status of the shared data group (SDG).
 *
 * @param request DescribeSDGDeploymentStatusRequest
 * @return DescribeSDGDeploymentStatusResponse
 */
DescribeSDGDeploymentStatusResponse Client::describeSDGDeploymentStatus(const DescribeSDGDeploymentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDGDeploymentStatusWithOptions(request, runtime);
}

/**
 * @summary You can query the information of shared disks in a specified SDG.
 *
 * @param request DescribeSDGSharedDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDGSharedDisksResponse
 */
DescribeSDGSharedDisksResponse Client::describeSDGSharedDisksWithOptions(const DescribeSDGSharedDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdgId()) {
    query["SdgId"] = request.getSdgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDGSharedDisks"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDGSharedDisksResponse>();
}

/**
 * @summary You can query the information of shared disks in a specified SDG.
 *
 * @param request DescribeSDGSharedDisksRequest
 * @return DescribeSDGSharedDisksResponse
 */
DescribeSDGSharedDisksResponse Client::describeSDGSharedDisks(const DescribeSDGSharedDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDGSharedDisksWithOptions(request, runtime);
}

/**
 * @summary Queries information about created shared data groups (SDGs).
 *
 * @param tmpReq DescribeSDGsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDGsResponse
 */
DescribeSDGsResponse Client::describeSDGsWithOptions(const DescribeSDGsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSDGsShrinkRequest request = DescribeSDGsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasSDGIds()) {
    request.setSDGIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSDGIds(), "SDGIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSDGIdsShrink()) {
    query["SDGIds"] = request.getSDGIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDGs"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDGsResponse>();
}

/**
 * @summary Queries information about created shared data groups (SDGs).
 *
 * @param request DescribeSDGsRequest
 * @return DescribeSDGsResponse
 */
DescribeSDGsResponse Client::describeSDGs(const DescribeSDGsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDGsWithOptions(request, runtime);
}

/**
 * @summary Queries created secondary public IP addresses.
 *
 * @param request DescribeSecondaryPublicIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecondaryPublicIpAddressesResponse
 */
DescribeSecondaryPublicIpAddressesResponse Client::describeSecondaryPublicIpAddressesWithOptions(const DescribeSecondaryPublicIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecondaryPublicIpAddress()) {
    query["SecondaryPublicIpAddress"] = request.getSecondaryPublicIpAddress();
  }

  if (!!request.hasSecondaryPublicIpId()) {
    query["SecondaryPublicIpId"] = request.getSecondaryPublicIpId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecondaryPublicIpAddresses"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecondaryPublicIpAddressesResponse>();
}

/**
 * @summary Queries created secondary public IP addresses.
 *
 * @param request DescribeSecondaryPublicIpAddressesRequest
 * @return DescribeSecondaryPublicIpAddressesResponse
 */
DescribeSecondaryPublicIpAddressesResponse Client::describeSecondaryPublicIpAddresses(const DescribeSecondaryPublicIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecondaryPublicIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries the rules of a security group.
 *
 * @param request DescribeSecurityGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupAttributeResponse
 */
DescribeSecurityGroupAttributeResponse Client::describeSecurityGroupAttributeWithOptions(const DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroupAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupAttributeResponse>();
}

/**
 * @summary Queries the rules of a security group.
 *
 * @param request DescribeSecurityGroupAttributeRequest
 * @return DescribeSecurityGroupAttributeResponse
 */
DescribeSecurityGroupAttributeResponse Client::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries details about created security groups.
 *
 * @param request DescribeSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupsResponse
 */
DescribeSecurityGroupsResponse Client::describeSecurityGroupsWithOptions(const DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.getSecurityGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroups"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupsResponse>();
}

/**
 * @summary Queries details about created security groups.
 *
 * @param request DescribeSecurityGroupsRequest
 * @return DescribeSecurityGroupsResponse
 */
DescribeSecurityGroupsResponse Client::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries custom images.
 *
 * @param request DescribeSelfImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSelfImagesResponse
 */
DescribeSelfImagesResponse Client::describeSelfImagesWithOptions(const DescribeSelfImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSelfImages"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSelfImagesResponse>();
}

/**
 * @summary Queries custom images.
 *
 * @param request DescribeSelfImagesRequest
 * @return DescribeSelfImagesResponse
 */
DescribeSelfImagesResponse Client::describeSelfImages(const DescribeSelfImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSelfImagesWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeServcieSchedule to query the real-time status of the instance device or container that is being occupied by the UUID.
 *
 * @param request DescribeServcieScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServcieScheduleResponse
 */
DescribeServcieScheduleResponse Client::describeServcieScheduleWithOptions(const DescribeServcieScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPodConfigName()) {
    query["PodConfigName"] = request.getPodConfigName();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServcieSchedule"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServcieScheduleResponse>();
}

/**
 * @summary You can call the DescribeServcieSchedule to query the real-time status of the instance device or container that is being occupied by the UUID.
 *
 * @param request DescribeServcieScheduleRequest
 * @return DescribeServcieScheduleResponse
 */
DescribeServcieScheduleResponse Client::describeServcieSchedule(const DescribeServcieScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServcieScheduleWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of an edge load balancer (ELB) instance based on the listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeServerLoadBalancerListenMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServerLoadBalancerListenMonitorResponse
 */
DescribeServerLoadBalancerListenMonitorResponse Client::describeServerLoadBalancerListenMonitorWithOptions(const DescribeServerLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServerLoadBalancerListenMonitor"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServerLoadBalancerListenMonitorResponse>();
}

/**
 * @summary Queries the monitoring data of an edge load balancer (ELB) instance based on the listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeServerLoadBalancerListenMonitorRequest
 * @return DescribeServerLoadBalancerListenMonitorResponse
 */
DescribeServerLoadBalancerListenMonitorResponse Client::describeServerLoadBalancerListenMonitor(const DescribeServerLoadBalancerListenMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServerLoadBalancerListenMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the request monitoring data of an edge load balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeServerLoadBalancerMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServerLoadBalancerMonitorResponse
 */
DescribeServerLoadBalancerMonitorResponse Client::describeServerLoadBalancerMonitorWithOptions(const DescribeServerLoadBalancerMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServerLoadBalancerMonitor"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServerLoadBalancerMonitorResponse>();
}

/**
 * @summary Queries the request monitoring data of an edge load balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request DescribeServerLoadBalancerMonitorRequest
 * @return DescribeServerLoadBalancerMonitorResponse
 */
DescribeServerLoadBalancerMonitorResponse Client::describeServerLoadBalancerMonitor(const DescribeServerLoadBalancerMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServerLoadBalancerMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries information about snapshots.
 *
 * @param request DescribeSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshotsWithOptions(const DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnapshots"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnapshotsResponse>();
}

/**
 * @summary Queries information about snapshots.
 *
 * @param request DescribeSnapshotsRequest
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshots(const DescribeSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific source network address translation (SNAT) entry.
 *
 * @param request DescribeSnatAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnatAttributeResponse
 */
DescribeSnatAttributeResponse Client::describeSnatAttributeWithOptions(const DescribeSnatAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnatAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnatAttributeResponse>();
}

/**
 * @summary Queries the details of a specific source network address translation (SNAT) entry.
 *
 * @param request DescribeSnatAttributeRequest
 * @return DescribeSnatAttributeResponse
 */
DescribeSnatAttributeResponse Client::describeSnatAttribute(const DescribeSnatAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnatAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries source network address translation (SNAT) entries.
 *
 * @param request DescribeSnatTableEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnatTableEntriesResponse
 */
DescribeSnatTableEntriesResponse Client::describeSnatTableEntriesWithOptions(const DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnatTableEntries"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnatTableEntriesResponse>();
}

/**
 * @summary Queries source network address translation (SNAT) entries.
 *
 * @param request DescribeSnatTableEntriesRequest
 * @return DescribeSnatTableEntriesResponse
 */
DescribeSnatTableEntriesResponse Client::describeSnatTableEntries(const DescribeSnatTableEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnatTableEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries storage gateways.
 *
 * @param request DescribeStorageGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStorageGatewayResponse
 */
DescribeStorageGatewayResponse Client::describeStorageGatewayWithOptions(const DescribeStorageGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["GatewayType"] = request.getGatewayType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStorageGateway"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStorageGatewayResponse>();
}

/**
 * @summary Queries storage gateways.
 *
 * @param request DescribeStorageGatewayRequest
 * @return DescribeStorageGatewayResponse
 */
DescribeStorageGatewayResponse Client::describeStorageGateway(const DescribeStorageGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStorageGatewayWithOptions(request, runtime);
}

/**
 * @summary Queries volumes.
 *
 * @param request DescribeStorageVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStorageVolumeResponse
 */
DescribeStorageVolumeResponse Client::describeStorageVolumeWithOptions(const DescribeStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStorageId()) {
    query["StorageId"] = request.getStorageId();
  }

  if (!!request.hasVolumeId()) {
    query["VolumeId"] = request.getVolumeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStorageVolume"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStorageVolumeResponse>();
}

/**
 * @summary Queries volumes.
 *
 * @param request DescribeStorageVolumeRequest
 * @return DescribeStorageVolumeResponse
 */
DescribeStorageVolumeResponse Client::describeStorageVolume(const DescribeStorageVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStorageVolumeWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth that you use within a specified period of time.
 *
 * @param request DescribeUserBandWidthDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserBandWidthDataResponse
 */
DescribeUserBandWidthDataResponse Client::describeUserBandWidthDataWithOptions(const DescribeUserBandWidthDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserBandWidthData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserBandWidthDataResponse>();
}

/**
 * @summary Queries the bandwidth that you use within a specified period of time.
 *
 * @param request DescribeUserBandWidthDataRequest
 * @return DescribeUserBandWidthDataResponse
 */
DescribeUserBandWidthDataResponse Client::describeUserBandWidthData(const DescribeUserBandWidthDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserBandWidthDataWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeVSwitchAttributes interface to query the configuration of a specified VSwitch.
 *
 * @param request DescribeVSwitchAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchAttributesResponse
 */
DescribeVSwitchAttributesResponse Client::describeVSwitchAttributesWithOptions(const DescribeVSwitchAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitchAttributes"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchAttributesResponse>();
}

/**
 * @summary Call the DescribeVSwitchAttributes interface to query the configuration of a specified VSwitch.
 *
 * @param request DescribeVSwitchAttributesRequest
 * @return DescribeVSwitchAttributesResponse
 */
DescribeVSwitchAttributesResponse Client::describeVSwitchAttributes(const DescribeVSwitchAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries information about available vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasEnsRegionIds()) {
    query["EnsRegionIds"] = request.getEnsRegionIds();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVSwitchName()) {
    query["VSwitchName"] = request.getVSwitchName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitches"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchesResponse>();
}

/**
 * @summary Queries information about available vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot call this operation to detach a disk that is created together with an instance.
 *
 * @param request DetachDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDiskResponse
 */
DetachDiskResponse Client::detachDiskWithOptions(const DetachDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDiskResponse>();
}

/**
 * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot call this operation to detach a disk that is created together with an instance.
 *
 * @param request DetachDiskRequest
 * @return DetachDiskResponse
 */
DetachDiskResponse Client::detachDisk(const DetachDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDiskWithOptions(request, runtime);
}

/**
 * @summary Detaches a shared data group (SDG).
 *
 * @param tmpReq DetachInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachInstanceSDGResponse
 */
DetachInstanceSDGResponse Client::detachInstanceSDGWithOptions(const DetachInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachInstanceSDGShrinkRequest request = DetachInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachInstanceSDGResponse>();
}

/**
 * @summary Detaches a shared data group (SDG).
 *
 * @param request DetachInstanceSDGRequest
 * @return DetachInstanceSDGResponse
 */
DetachInstanceSDGResponse Client::detachInstanceSDG(const DetachInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Detach an elastic network interface (ENI) from an instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   You cannot detach a primary ENI from an instance.
 * *   The ENI must be in the InUse state.
 * *   The instances are in the Stopped state.
 * *   This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
 *
 * @param request DetachNetworkInterfaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachNetworkInterfaceResponse
 */
DetachNetworkInterfaceResponse Client::detachNetworkInterfaceWithOptions(const DetachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachNetworkInterface"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachNetworkInterfaceResponse>();
}

/**
 * @summary Detach an elastic network interface (ENI) from an instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   You cannot detach a primary ENI from an instance.
 * *   The ENI must be in the InUse state.
 * *   The instances are in the Stopped state.
 * *   This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
 *
 * @param request DetachNetworkInterfaceRequest
 * @return DetachNetworkInterfaceResponse
 */
DetachNetworkInterfaceResponse Client::detachNetworkInterface(const DetachNetworkInterfaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachNetworkInterfaceWithOptions(request, runtime);
}

/**
 * @summary Distributes pushed data to the Edge Node Service (ENS) instances of the application. You can specify multiple canary release policies, decompress files, and restart containers.
 *
 * @param request DistApplicationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DistApplicationDataResponse
 */
DistApplicationDataResponse Client::distApplicationDataWithOptions(const DistApplicationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasDistStrategy()) {
    query["DistStrategy"] = request.getDistStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DistApplicationData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DistApplicationDataResponse>();
}

/**
 * @summary Distributes pushed data to the Edge Node Service (ENS) instances of the application. You can specify multiple canary release policies, decompress files, and restart containers.
 *
 * @param request DistApplicationDataRequest
 * @return DistApplicationDataResponse
 */
DistApplicationDataResponse Client::distApplicationData(const DistApplicationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return distApplicationDataWithOptions(request, runtime);
}

/**
 * @summary Migrates the instance across nodes after an O\\\\\\&M event occurs on an instance.
 *
 * @description *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
 *
 * @param request EventMigrateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EventMigrateInstanceResponse
 */
EventMigrateInstanceResponse Client::eventMigrateInstanceWithOptions(const EventMigrateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPolicy()) {
    query["DataPolicy"] = request.getDataPolicy();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasOpsType()) {
    query["OpsType"] = request.getOpsType();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPlanTime()) {
    query["PlanTime"] = request.getPlanTime();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EventMigrateInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EventMigrateInstanceResponse>();
}

/**
 * @summary Migrates the instance across nodes after an O\\\\\\&M event occurs on an instance.
 *
 * @description *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
 *
 * @param request EventMigrateInstanceRequest
 * @return EventMigrateInstanceResponse
 */
EventMigrateInstanceResponse Client::eventMigrateInstance(const EventMigrateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return eventMigrateInstanceWithOptions(request, runtime);
}

/**
 * @summary Restart the instance across nodes after an O\\\\\\&M event occurs on an instance.
 *
 * @description *   This O\\&M operation supports only the Instance:SystemMaintenance.Reboot event
 *
 * @param request EventRebootInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EventRebootInstanceResponse
 */
EventRebootInstanceResponse Client::eventRebootInstanceWithOptions(const EventRebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasOpsType()) {
    query["OpsType"] = request.getOpsType();
  }

  if (!!request.hasPlanTime()) {
    query["PlanTime"] = request.getPlanTime();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EventRebootInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EventRebootInstanceResponse>();
}

/**
 * @summary Restart the instance across nodes after an O\\\\\\&M event occurs on an instance.
 *
 * @description *   This O\\&M operation supports only the Instance:SystemMaintenance.Reboot event
 *
 * @param request EventRebootInstanceRequest
 * @return EventRebootInstanceResponse
 */
EventRebootInstanceResponse Client::eventRebootInstance(const EventRebootInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return eventRebootInstanceWithOptions(request, runtime);
}

/**
 * @summary The event that is used to immediately redeploy a specified resource or by appointment
 *
 * @description *   This O\\&M operation supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system problems) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
 *
 * @param request EventRedeployInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EventRedeployInstanceResponse
 */
EventRedeployInstanceResponse Client::eventRedeployInstanceWithOptions(const EventRedeployInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasOpsType()) {
    query["OpsType"] = request.getOpsType();
  }

  if (!!request.hasPlanTime()) {
    query["PlanTime"] = request.getPlanTime();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EventRedeployInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EventRedeployInstanceResponse>();
}

/**
 * @summary The event that is used to immediately redeploy a specified resource or by appointment
 *
 * @description *   This O\\&M operation supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system problems) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
 *
 * @param request EventRedeployInstanceRequest
 * @return EventRedeployInstanceResponse
 */
EventRedeployInstanceResponse Client::eventRedeployInstance(const EventRedeployInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return eventRedeployInstanceWithOptions(request, runtime);
}

/**
 * @summary Exports billing details within a specific time range.
 *
 * @param request ExportBillDetailDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportBillDetailDataResponse
 */
ExportBillDetailDataResponse Client::exportBillDetailDataWithOptions(const ExportBillDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportBillDetailData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportBillDetailDataResponse>();
}

/**
 * @summary Exports billing details within a specific time range.
 *
 * @param request ExportBillDetailDataRequest
 * @return ExportBillDetailDataResponse
 */
ExportBillDetailDataResponse Client::exportBillDetailData(const ExportBillDetailDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportBillDetailDataWithOptions(request, runtime);
}

/**
 * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
 *
 * @param request ExportImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportImageResponse
 */
ExportImageResponse Client::exportImageWithOptions(const ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.getOSSBucket();
  }

  if (!!request.hasOSSPrefix()) {
    query["OSSPrefix"] = request.getOSSPrefix();
  }

  if (!!request.hasOSSRegionId()) {
    query["OSSRegionId"] = request.getOSSRegionId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportImageResponse>();
}

/**
 * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
 *
 * @param request ExportImageRequest
 * @return ExportImageResponse
 */
ExportImageResponse Client::exportImage(const ExportImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportImageWithOptions(request, runtime);
}

/**
 * @summary Exports the metering data within a specific time range.
 *
 * @param request ExportMeasurementDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportMeasurementDataResponse
 */
ExportMeasurementDataResponse Client::exportMeasurementDataWithOptions(const ExportMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportMeasurementData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportMeasurementDataResponse>();
}

/**
 * @summary Exports the metering data within a specific time range.
 *
 * @param request ExportMeasurementDataRequest
 * @return ExportMeasurementDataResponse
 */
ExportMeasurementDataResponse Client::exportMeasurementData(const ExportMeasurementDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportMeasurementDataWithOptions(request, runtime);
}

/**
 * @summary Queries the access control list (ACL) of a bucket.
 *
 * @param request GetBucketAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBucketAclResponse
 */
GetBucketAclResponse Client::getBucketAclWithOptions(const GetBucketAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBucketAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBucketAclResponse>();
}

/**
 * @summary Queries the access control list (ACL) of a bucket.
 *
 * @param request GetBucketAclRequest
 * @return GetBucketAclResponse
 */
GetBucketAclResponse Client::getBucketAcl(const GetBucketAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBucketAclWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a bucket.
 *
 * @param request GetBucketInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBucketInfoResponse
 */
GetBucketInfoResponse Client::getBucketInfoWithOptions(const GetBucketInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBucketInfo"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBucketInfoResponse>();
}

/**
 * @summary Queries the detailed information about a bucket.
 *
 * @param request GetBucketInfoRequest
 * @return GetBucketInfoResponse
 */
GetBucketInfoResponse Client::getBucketInfo(const GetBucketInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBucketInfoWithOptions(request, runtime);
}

/**
 * @summary Queries lifecycle rules.
 *
 * @param request GetBucketLifecycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBucketLifecycleResponse
 */
GetBucketLifecycleResponse Client::getBucketLifecycleWithOptions(const GetBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBucketLifecycle"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBucketLifecycleResponse>();
}

/**
 * @summary Queries lifecycle rules.
 *
 * @param request GetBucketLifecycleRequest
 * @return GetBucketLifecycleResponse
 */
GetBucketLifecycleResponse Client::getBucketLifecycle(const GetBucketLifecycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBucketLifecycleWithOptions(request, runtime);
}

/**
 * @summary 查询集群内指定组件实例信息
 *
 * @param request GetClusterAddonInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterAddonInstanceResponse
 */
GetClusterAddonInstanceResponse Client::getClusterAddonInstanceWithOptions(const GetClusterAddonInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterAddonInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterAddonInstanceResponse>();
}

/**
 * @summary 查询集群内指定组件实例信息
 *
 * @param request GetClusterAddonInstanceRequest
 * @return GetClusterAddonInstanceResponse
 */
GetClusterAddonInstanceResponse Client::getClusterAddonInstance(const GetClusterAddonInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterAddonInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the storage usage in the previous billing cycle and the cumulative number of calls in this month.
 *
 * @param request GetOssStorageAndAccByBucketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssStorageAndAccByBucketsResponse
 */
GetOssStorageAndAccByBucketsResponse Client::getOssStorageAndAccByBucketsWithOptions(const GetOssStorageAndAccByBucketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssStorageAndAccByBuckets"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssStorageAndAccByBucketsResponse>();
}

/**
 * @summary Queries the storage usage in the previous billing cycle and the cumulative number of calls in this month.
 *
 * @param request GetOssStorageAndAccByBucketsRequest
 * @return GetOssStorageAndAccByBucketsResponse
 */
GetOssStorageAndAccByBucketsResponse Client::getOssStorageAndAccByBuckets(const GetOssStorageAndAccByBucketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssStorageAndAccByBucketsWithOptions(request, runtime);
}

/**
 * @summary Queries the storage and bandwidth usage within a specific time range.
 *
 * @description The query and aggregation granularity of bandwidth and storage usage cannot exceed one day. Data aggregation is to collect the maximum values of usage data within a period of time.
 *
 * @param request GetOssUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssUsageDataResponse
 */
GetOssUsageDataResponse Client::getOssUsageDataWithOptions(const GetOssUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssUsageData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssUsageDataResponse>();
}

/**
 * @summary Queries the storage and bandwidth usage within a specific time range.
 *
 * @description The query and aggregation granularity of bandwidth and storage usage cannot exceed one day. Data aggregation is to collect the maximum values of usage data within a period of time.
 *
 * @param request GetOssUsageDataRequest
 * @return GetOssUsageDataResponse
 */
GetOssUsageDataResponse Client::getOssUsageData(const GetOssUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssUsageDataWithOptions(request, runtime);
}

/**
 * @summary Call ImportImage to import your image file to the cloud server.
 *
 * @param tmpReq ImportImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportImageResponse
 */
ImportImageResponse Client::importImageWithOptions(const ImportImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportImageShrinkRequest request = ImportImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDiskDeviceMapping()) {
    request.setDiskDeviceMappingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDiskDeviceMapping(), "DiskDeviceMapping", "json"));
  }

  json query = {};
  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasComputeType()) {
    query["ComputeType"] = request.getComputeType();
  }

  if (!!request.hasDiskDeviceMappingShrink()) {
    query["DiskDeviceMapping"] = request.getDiskDeviceMappingShrink();
  }

  if (!!request.hasImageFormat()) {
    query["ImageFormat"] = request.getImageFormat();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasLicenseType()) {
    query["LicenseType"] = request.getLicenseType();
  }

  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.getOSSBucket();
  }

  if (!!request.hasOSSObject()) {
    query["OSSObject"] = request.getOSSObject();
  }

  if (!!request.hasOSSRegion()) {
    query["OSSRegion"] = request.getOSSRegion();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasOSVersion()) {
    query["OSVersion"] = request.getOSVersion();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasTargetOSSRegionId()) {
    query["TargetOSSRegionId"] = request.getTargetOSSRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportImageResponse>();
}

/**
 * @summary Call ImportImage to import your image file to the cloud server.
 *
 * @param request ImportImageRequest
 * @return ImportImageResponse
 */
ImportImageResponse Client::importImage(const ImportImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importImageWithOptions(request, runtime);
}

/**
 * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
 *
 * @description *   After the key pair is imported, ENS stores the public key. You must securely store the private key.
 * *   The key pair can be only in the ssh-rsa format.
 *
 * @param request ImportKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPairWithOptions(const ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPublicKeyBody()) {
    query["PublicKeyBody"] = request.getPublicKeyBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportKeyPair"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportKeyPairResponse>();
}

/**
 * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
 *
 * @description *   After the key pair is imported, ENS stores the public key. You must securely store the private key.
 * *   The key pair can be only in the ssh-rsa format.
 *
 * @param request ImportKeyPairRequest
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPair(const ImportKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importKeyPairWithOptions(request, runtime);
}

/**
 * @summary 为当前用户创建ENS的服务关联角色（SLR），管控资源。
 *
 * @param request InitializeENSECKServiceRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeENSECKServiceRoleResponse
 */
InitializeENSECKServiceRoleResponse Client::initializeENSECKServiceRoleWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "InitializeENSECKServiceRole"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeENSECKServiceRoleResponse>();
}

/**
 * @summary 为当前用户创建ENS的服务关联角色（SLR），管控资源。
 *
 * @return InitializeENSECKServiceRoleResponse
 */
InitializeENSECKServiceRoleResponse Client::initializeENSECKServiceRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeENSECKServiceRoleWithOptions(runtime);
}

/**
 * @summary 安装集群组件
 *
 * @param tmpReq InstallClusterAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallClusterAddonsResponse
 */
InstallClusterAddonsResponse Client::installClusterAddonsWithOptions(const InstallClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallClusterAddonsShrinkRequest request = InstallClusterAddonsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddons()) {
    request.setAddonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddons(), "Addons", "json"));
  }

  json query = {};
  if (!!request.hasAddonsShrink()) {
    query["Addons"] = request.getAddonsShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallClusterAddons"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallClusterAddonsResponse>();
}

/**
 * @summary 安装集群组件
 *
 * @param request InstallClusterAddonsRequest
 * @return InstallClusterAddonsResponse
 */
InstallClusterAddonsResponse Client::installClusterAddons(const InstallClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installClusterAddonsWithOptions(request, runtime);
}

/**
 * @summary Assigns public IP addresses to an EPN instance.
 *
 * @param request JoinPublicIpsToEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinPublicIpsToEpnInstanceResponse
 */
JoinPublicIpsToEpnInstanceResponse Client::joinPublicIpsToEpnInstanceWithOptions(const JoinPublicIpsToEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasInstanceInfos()) {
    query["InstanceInfos"] = request.getInstanceInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JoinPublicIpsToEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinPublicIpsToEpnInstanceResponse>();
}

/**
 * @summary Assigns public IP addresses to an EPN instance.
 *
 * @param request JoinPublicIpsToEpnInstanceRequest
 * @return JoinPublicIpsToEpnInstanceResponse
 */
JoinPublicIpsToEpnInstanceResponse Client::joinPublicIpsToEpnInstance(const JoinPublicIpsToEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinPublicIpsToEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds an Edge Node Service (ENS) instance to a specified security group.
 *
 * @description Before you call this operation to add an instance to a security group, make sure that the instance is in the Stopped or Running state.
 *
 * @param request JoinSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinSecurityGroupResponse
 */
JoinSecurityGroupResponse Client::joinSecurityGroupWithOptions(const JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JoinSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinSecurityGroupResponse>();
}

/**
 * @summary Adds an Edge Node Service (ENS) instance to a specified security group.
 *
 * @description Before you call this operation to add an instance to a security group, make sure that the instance is in the Stopped or Running state.
 *
 * @param request JoinSecurityGroupRequest
 * @return JoinSecurityGroupResponse
 */
JoinSecurityGroupResponse Client::joinSecurityGroup(const JoinSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Performs networking.
 *
 * @description For the Internal Connection mode and the Intelligent Acceleration and Internal Connection mode, instances of the vSwitch take effect automatically. You do not need to manually add instances. For public connections such as intelligent acceleration, you need to call an operation to manually add the instances to Internet-facing instances.
 *
 * @param request JoinVSwitchesToEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinVSwitchesToEpnInstanceResponse
 */
JoinVSwitchesToEpnInstanceResponse Client::joinVSwitchesToEpnInstanceWithOptions(const JoinVSwitchesToEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasVSwitchesInfo()) {
    query["VSwitchesInfo"] = request.getVSwitchesInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JoinVSwitchesToEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinVSwitchesToEpnInstanceResponse>();
}

/**
 * @summary Performs networking.
 *
 * @description For the Internal Connection mode and the Intelligent Acceleration and Internal Connection mode, instances of the vSwitch take effect automatically. You do not need to manually add instances. For public connections such as intelligent acceleration, you need to call an operation to manually add the instances to Internet-facing instances.
 *
 * @param request JoinVSwitchesToEpnInstanceRequest
 * @return JoinVSwitchesToEpnInstanceResponse
 */
JoinVSwitchesToEpnInstanceResponse Client::joinVSwitchesToEpnInstance(const JoinVSwitchesToEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinVSwitchesToEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Removes an instance from a security group.
 *
 * @description Before you remove an instance from a security group, the instance must be in the Stopped or Running state.
 *
 * @param request LeaveSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LeaveSecurityGroupResponse
 */
LeaveSecurityGroupResponse Client::leaveSecurityGroupWithOptions(const LeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LeaveSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LeaveSecurityGroupResponse>();
}

/**
 * @summary Removes an instance from a security group.
 *
 * @description Before you remove an instance from a security group, the instance must be in the Stopped or Running state.
 *
 * @param request LeaveSecurityGroupRequest
 * @return LeaveSecurityGroupResponse
 */
LeaveSecurityGroupResponse Client::leaveSecurityGroup(const LeaveSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return leaveSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the related information of AIC public keys. Paged query is supported.
 *
 * @param request ListAICPublicKeyDeliveriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAICPublicKeyDeliveriesResponse
 */
ListAICPublicKeyDeliveriesResponse Client::listAICPublicKeyDeliveriesWithOptions(const ListAICPublicKeyDeliveriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAICPublicKeyDeliveries"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAICPublicKeyDeliveriesResponse>();
}

/**
 * @summary Queries the related information of AIC public keys. Paged query is supported.
 *
 * @param request ListAICPublicKeyDeliveriesRequest
 * @return ListAICPublicKeyDeliveriesResponse
 */
ListAICPublicKeyDeliveriesResponse Client::listAICPublicKeyDeliveries(const ListAICPublicKeyDeliveriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAICPublicKeyDeliveriesWithOptions(request, runtime);
}

/**
 * @summary Query the list of AIC public keys that meet the conditions. Paged query is supported.
 *
 * @param request ListAICPublicKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAICPublicKeysResponse
 */
ListAICPublicKeysResponse Client::listAICPublicKeysWithOptions(const ListAICPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAICPublicKeys"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAICPublicKeysResponse>();
}

/**
 * @summary Query the list of AIC public keys that meet the conditions. Paged query is supported.
 *
 * @param request ListAICPublicKeysRequest
 * @return ListAICPublicKeysResponse
 */
ListAICPublicKeysResponse Client::listAICPublicKeys(const ListAICPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAICPublicKeysWithOptions(request, runtime);
}

/**
 * @summary Querying the details of a cluster component
 *
 * @param request ListAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddonsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListAddons"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonsResponse>();
}

/**
 * @summary Querying the details of a cluster component
 *
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddons() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddonsWithOptions(runtime);
}

/**
 * @summary Queries the created applications.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppVersions()) {
    query["AppVersions"] = request.getAppVersions();
  }

  if (!!request.hasClusterNames()) {
    query["ClusterNames"] = request.getClusterNames();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMaxDate()) {
    query["MaxDate"] = request.getMaxDate();
  }

  if (!!request.hasMinDate()) {
    query["MinDate"] = request.getMinDate();
  }

  if (!!request.hasOutAppInfoParams()) {
    query["OutAppInfoParams"] = request.getOutAppInfoParams();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Queries the created applications.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries all buckets of a user.
 *
 * @param request ListBucketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBucketsResponse
 */
ListBucketsResponse Client::listBucketsWithOptions(const ListBucketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.getPrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBuckets"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBucketsResponse>();
}

/**
 * @summary Queries all buckets of a user.
 *
 * @param request ListBucketsRequest
 * @return ListBucketsResponse
 */
ListBucketsResponse Client::listBuckets(const ListBucketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBucketsWithOptions(request, runtime);
}

/**
 * @summary List of Installed Addon Instances in the Cluster
 *
 * @param request ListClusterAddonInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterAddonInstancesResponse
 */
ListClusterAddonInstancesResponse Client::listClusterAddonInstancesWithOptions(const ListClusterAddonInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterAddonInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterAddonInstancesResponse>();
}

/**
 * @summary List of Installed Addon Instances in the Cluster
 *
 * @param request ListClusterAddonInstancesRequest
 * @return ListClusterAddonInstancesResponse
 */
ListClusterAddonInstancesResponse Client::listClusterAddonInstances(const ListClusterAddonInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterAddonInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all objects in a bucket.
 *
 * @param request ListObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListObjectsResponse
 */
ListObjectsResponse Client::listObjectsWithOptions(const ListObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasContinuationToken()) {
    query["ContinuationToken"] = request.getContinuationToken();
  }

  if (!!request.hasEncodingType()) {
    query["EncodingType"] = request.getEncodingType();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxKeys()) {
    query["MaxKeys"] = request.getMaxKeys();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.getPrefix();
  }

  if (!!request.hasStartAfter()) {
    query["StartAfter"] = request.getStartAfter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListObjects"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListObjectsResponse>();
}

/**
 * @summary Queries the information about all objects in a bucket.
 *
 * @param request ListObjectsRequest
 * @return ListObjectsResponse
 */
ListObjectsResponse Client::listObjects(const ListObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listObjectsWithOptions(request, runtime);
}

/**
 * @summary 获取所有产品能力
 *
 * @param request ListProductAbilitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductAbilitiesResponse
 */
ListProductAbilitiesResponse Client::listProductAbilitiesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListProductAbilities"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductAbilitiesResponse>();
}

/**
 * @summary 获取所有产品能力
 *
 * @return ListProductAbilitiesResponse
 */
ListProductAbilitiesResponse Client::listProductAbilities() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductAbilitiesWithOptions(runtime);
}

/**
 * @summary Queries tags that are added to Edge Node Service (ENS) instances.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"version" , "2017-11-10"},
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
 * @summary Queries tags that are added to Edge Node Service (ENS) instances.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Log on to the AIC instance. You can associate or disassociate an AIC instance based on the uploaded AIC public key.
 *
 * @param request ManageAICLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageAICLoginResponse
 */
ManageAICLoginResponse Client::manageAICLoginWithOptions(const ManageAICLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.getActionName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManageAICLogin"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageAICLoginResponse>();
}

/**
 * @summary Log on to the AIC instance. You can associate or disassociate an AIC instance based on the uploaded AIC public key.
 *
 * @param request ManageAICLoginRequest
 * @return ManageAICLoginResponse
 */
ManageAICLoginResponse Client::manageAICLogin(const ManageAICLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageAICLoginWithOptions(request, runtime);
}

/**
 * @summary 修改集群组件实例配置
 *
 * @param tmpReq ModifyClusterAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterAddonResponse
 */
ModifyClusterAddonResponse Client::modifyClusterAddonWithOptions(const ModifyClusterAddonRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyClusterAddonShrinkRequest request = ModifyClusterAddonShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddon()) {
    request.setAddonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddon(), "Addon", "json"));
  }

  json query = {};
  if (!!request.hasAddonShrink()) {
    query["Addon"] = request.getAddonShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.getComponentName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterAddon"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterAddonResponse>();
}

/**
 * @summary 修改集群组件实例配置
 *
 * @param request ModifyClusterAddonRequest
 * @return ModifyClusterAddonResponse
 */
ModifyClusterAddonResponse Client::modifyClusterAddon(const ModifyClusterAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterAddonWithOptions(request, runtime);
}

/**
 * @summary 更新集群节点池
 *
 * @param tmpReq ModifyClusterNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterNodePoolResponse
 */
ModifyClusterNodePoolResponse Client::modifyClusterNodePoolWithOptions(const ModifyClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyClusterNodePoolShrinkRequest request = ModifyClusterNodePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKubernetesConfig()) {
    request.setKubernetesConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKubernetesConfig(), "KubernetesConfig", "json"));
  }

  if (!!tmpReq.hasNodepoolInfo()) {
    request.setNodepoolInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodepoolInfo(), "NodepoolInfo", "json"));
  }

  if (!!tmpReq.hasScalingGroup()) {
    request.setScalingGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScalingGroup(), "ScalingGroup", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasKubernetesConfigShrink()) {
    query["KubernetesConfig"] = request.getKubernetesConfigShrink();
  }

  if (!!request.hasNodepoolInfoShrink()) {
    query["NodepoolInfo"] = request.getNodepoolInfoShrink();
  }

  if (!!request.hasScalingGroupShrink()) {
    query["ScalingGroup"] = request.getScalingGroupShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterNodePool"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterNodePoolResponse>();
}

/**
 * @summary 更新集群节点池
 *
 * @param request ModifyClusterNodePoolRequest
 * @return ModifyClusterNodePoolResponse
 */
ModifyClusterNodePoolResponse Client::modifyClusterNodePool(const ModifyClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterNodePoolWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
 *
 * @param request ModifyEnsEipAddressAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEnsEipAddressAttributeResponse
 */
ModifyEnsEipAddressAttributeResponse Client::modifyEnsEipAddressAttributeWithOptions(const ModifyEnsEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEnsEipAddressAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEnsEipAddressAttributeResponse>();
}

/**
 * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
 *
 * @param request ModifyEnsEipAddressAttributeRequest
 * @return ModifyEnsEipAddressAttributeResponse
 */
ModifyEnsEipAddressAttributeResponse Client::modifyEnsEipAddressAttribute(const ModifyEnsEipAddressAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEnsEipAddressAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a custom route.
 *
 * @param request ModifyEnsRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEnsRouteEntryResponse
 */
ModifyEnsRouteEntryResponse Client::modifyEnsRouteEntryWithOptions(const ModifyEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRouteEntryId()) {
    query["RouteEntryId"] = request.getRouteEntryId();
  }

  if (!!request.hasRouteEntryName()) {
    query["RouteEntryName"] = request.getRouteEntryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEnsRouteEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEnsRouteEntryResponse>();
}

/**
 * @summary Modifies the name and description of a custom route.
 *
 * @param request ModifyEnsRouteEntryRequest
 * @return ModifyEnsRouteEntryResponse
 */
ModifyEnsRouteEntryResponse Client::modifyEnsRouteEntry(const ModifyEnsRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEnsRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Modifies an Edge Private Network (EPN) instance.
 *
 * @param request ModifyEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEpnInstanceResponse
 */
ModifyEpnInstanceResponse Client::modifyEpnInstanceWithOptions(const ModifyEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasEPNInstanceName()) {
    query["EPNInstanceName"] = request.getEPNInstanceName();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasNetworkingModel()) {
    query["NetworkingModel"] = request.getNetworkingModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEpnInstanceResponse>();
}

/**
 * @summary Modifies an Edge Private Network (EPN) instance.
 *
 * @param request ModifyEpnInstanceRequest
 * @return ModifyEpnInstanceResponse
 */
ModifyEpnInstanceResponse Client::modifyEpnInstance(const ModifyEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a NAS file system.
 *
 * @param request ModifyFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystemWithOptions(const ModifyFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFileSystem"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFileSystemResponse>();
}

/**
 * @summary Modifies the description of a NAS file system.
 *
 * @param request ModifyFileSystemRequest
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystem(const ModifyFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFileSystemWithOptions(request, runtime);
}

/**
 * @summary Modifies a Destination Network Address Translation (DNAT) rule.
 *
 * @param request ModifyForwardEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyForwardEntryResponse
 */
ModifyForwardEntryResponse Client::modifyForwardEntryWithOptions(const ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasExternalPort()) {
    query["ExternalPort"] = request.getExternalPort();
  }

  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  if (!!request.hasForwardEntryName()) {
    query["ForwardEntryName"] = request.getForwardEntryName();
  }

  if (!!request.hasHealthCheckPort()) {
    query["HealthCheckPort"] = request.getHealthCheckPort();
  }

  if (!!request.hasInternalIp()) {
    query["InternalIp"] = request.getInternalIp();
  }

  if (!!request.hasInternalPort()) {
    query["InternalPort"] = request.getInternalPort();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyForwardEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyForwardEntryResponse>();
}

/**
 * @summary Modifies a Destination Network Address Translation (DNAT) rule.
 *
 * @param request ModifyForwardEntryRequest
 * @return ModifyForwardEntryResponse
 */
ModifyForwardEntryResponse Client::modifyForwardEntry(const ModifyForwardEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyForwardEntryWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a high-availability virtual IP address (HAVIP).
 *
 * @param request ModifyHaVipAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHaVipAttributeResponse
 */
ModifyHaVipAttributeResponse Client::modifyHaVipAttributeWithOptions(const ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHaVipId()) {
    query["HaVipId"] = request.getHaVipId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHaVipAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHaVipAttributeResponse>();
}

/**
 * @summary Modifies the name of a high-availability virtual IP address (HAVIP).
 *
 * @param request ModifyHaVipAttributeRequest
 * @return ModifyHaVipAttributeResponse
 */
ModifyHaVipAttributeResponse Client::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHaVipAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the image attributes.
 *
 * @param request ModifyImageAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImageAttributeResponse
 */
ModifyImageAttributeResponse Client::modifyImageAttributeWithOptions(const ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImageAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImageAttributeResponse>();
}

/**
 * @summary Modifies the image attributes.
 *
 * @param request ModifyImageAttributeRequest
 * @return ModifyImageAttributeResponse
 */
ModifyImageAttributeResponse Client::modifyImageAttribute(const ModifyImageAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImageAttributeWithOptions(request, runtime);
}

/**
 * @summary Shares or unshares an image.
 *
 * @param request ModifyImageSharePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImageSharePermissionResponse
 */
ModifyImageSharePermissionResponse Client::modifyImageSharePermissionWithOptions(const ModifyImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddAccounts()) {
    query["AddAccounts"] = request.getAddAccounts();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRemoveAccounts()) {
    query["RemoveAccounts"] = request.getRemoveAccounts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImageSharePermission"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImageSharePermissionResponse>();
}

/**
 * @summary Shares or unshares an image.
 *
 * @param request ModifyImageSharePermissionRequest
 * @return ModifyImageSharePermissionResponse
 */
ModifyImageSharePermissionResponse Client::modifyImageSharePermission(const ModifyImageSharePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImageSharePermissionWithOptions(request, runtime);
}

/**
 * @summary Changes the attributes of an instance, such as the name and the password.
 *
 * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
 * *   When the instance is in the Running state, you cannot change the password of the instance.
 * *   After resetting the password, you must Restart the instance in the ECS console or call the RebootInstance operation to validate the modifications. The restart operation within the instance does not validate the modifications.
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Changes the attributes of an instance, such as the name and the password.
 *
 * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
 * *   When the instance is in the Running state, you cannot change the password of the instance.
 * *   After resetting the password, you must Restart the instance in the ECS console or call the RebootInstance operation to validate the modifications. The restart operation within the instance does not validate the modifications.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Configures auto-renewal for instances.
 *
 * @param request ModifyInstanceAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAutoRenewAttributeResponse
 */
ModifyInstanceAutoRenewAttributeResponse Client::modifyInstanceAutoRenewAttributeWithOptions(const ModifyInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAutoRenewAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAutoRenewAttributeResponse>();
}

/**
 * @summary Configures auto-renewal for instances.
 *
 * @param request ModifyInstanceAutoRenewAttributeRequest
 * @return ModifyInstanceAutoRenewAttributeResponse
 */
ModifyInstanceAutoRenewAttributeResponse Client::modifyInstanceAutoRenewAttribute(const ModifyInstanceAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
 * *   If the instance is in the Running state, you cannot change the password of the instance.
 * *   After resetting the password, you must restart the instance in the ENS console or call the RebootInstance operation to apply the change. The restart operation within the instance does not apply the change.
 *
 * @param request ModifyInstanceBootConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceBootConfigurationResponse
 */
ModifyInstanceBootConfigurationResponse Client::modifyInstanceBootConfigurationWithOptions(const ModifyInstanceBootConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceBootConfiguration"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceBootConfigurationResponse>();
}

/**
 * @summary Modifies the boot configuration of a heterogeneous PC Farm bare metal instance.
 *
 * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
 * *   If the instance is in the Running state, you cannot change the password of the instance.
 * *   After resetting the password, you must restart the instance in the ENS console or call the RebootInstance operation to apply the change. The restart operation within the instance does not apply the change.
 *
 * @param request ModifyInstanceBootConfigurationRequest
 * @return ModifyInstanceBootConfigurationResponse
 */
ModifyInstanceBootConfigurationResponse Client::modifyInstanceBootConfiguration(const ModifyInstanceBootConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceBootConfigurationWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of Edge Node Service (ENS) instances. You can switch between the pay-as-you-go and subscription billing methods for instances. You can also change the billing method for disks that you created with pay-as-you-go instances to subscription.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of ENS.
 * The instances must be in the Running or Stopped state, and you have no overdue payments for them.
 *
 * @param tmpReq ModifyInstanceChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceChargeTypeResponse
 */
ModifyInstanceChargeTypeResponse Client::modifyInstanceChargeTypeWithOptions(const ModifyInstanceChargeTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceChargeTypeShrinkRequest request = ModifyInstanceChargeTypeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasIncludeDataDisks()) {
    query["IncludeDataDisks"] = request.getIncludeDataDisks();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceChargeType"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceChargeTypeResponse>();
}

/**
 * @summary Changes the billing method of Edge Node Service (ENS) instances. You can switch between the pay-as-you-go and subscription billing methods for instances. You can also change the billing method for disks that you created with pay-as-you-go instances to subscription.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of ENS.
 * The instances must be in the Running or Stopped state, and you have no overdue payments for them.
 *
 * @param request ModifyInstanceChargeTypeRequest
 * @return ModifyInstanceChargeTypeResponse
 */
ModifyInstanceChargeTypeResponse Client::modifyInstanceChargeType(const ModifyInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the private IP address or vSwitch of a VPC-type ECS instance.
 *
 * @description The instance that you want to manage must be in the Stopped state. When you modify the parameters of a scaling group, the following limits apply:
 * *   Instance:
 *     *   Instances that are associated with SLB are not supported.
 * *   Network:
 *     *   Instances that are associated with EIPs are not supported.
 *     *   Instances that are associated with high-availability virtual IP addresses are not supported.
 *     *   Instances that have been used as next hops in the routing table are not supported.
 *     *   Secondary ENIs cannot be attached to the ECS instance.
 *     *   Instances configured with secondary IP addresses are not supported.
 *
 * @param request ModifyInstanceNetworkAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceNetworkAttributeResponse
 */
ModifyInstanceNetworkAttributeResponse Client::modifyInstanceNetworkAttributeWithOptions(const ModifyInstanceNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceNetworkAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceNetworkAttributeResponse>();
}

/**
 * @summary Modifies the private IP address or vSwitch of a VPC-type ECS instance.
 *
 * @description The instance that you want to manage must be in the Stopped state. When you modify the parameters of a scaling group, the following limits apply:
 * *   Instance:
 *     *   Instances that are associated with SLB are not supported.
 * *   Network:
 *     *   Instances that are associated with EIPs are not supported.
 *     *   Instances that are associated with high-availability virtual IP addresses are not supported.
 *     *   Instances that have been used as next hops in the routing table are not supported.
 *     *   Secondary ENIs cannot be attached to the ECS instance.
 *     *   Instances configured with secondary IP addresses are not supported.
 *
 * @param request ModifyInstanceNetworkAttributeRequest
 * @return ModifyInstanceNetworkAttributeResponse
 */
ModifyInstanceNetworkAttributeResponse Client::modifyInstanceNetworkAttribute(const ModifyInstanceNetworkAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceNetworkAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request ModifyLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLoadBalancerAttributeResponse
 */
ModifyLoadBalancerAttributeResponse Client::modifyLoadBalancerAttributeWithOptions(const ModifyLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.getLoadBalancerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLoadBalancerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLoadBalancerAttributeResponse>();
}

/**
 * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request ModifyLoadBalancerAttributeRequest
 * @return ModifyLoadBalancerAttributeResponse
 */
ModifyLoadBalancerAttributeResponse Client::modifyLoadBalancerAttribute(const ModifyLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the network information.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifyNetworkAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkAttributeResponse
 */
ModifyNetworkAttributeResponse Client::modifyNetworkAttributeWithOptions(const ModifyNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasNetworkName()) {
    query["NetworkName"] = request.getNetworkName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkAttributeResponse>();
}

/**
 * @summary Modifies the network information.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifyNetworkAttributeRequest
 * @return ModifyNetworkAttributeResponse
 */
ModifyNetworkAttributeResponse Client::modifyNetworkAttribute(const ModifyNetworkAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an elastic network interface (ENI), such as its name and description.
 *
 * @param request ModifyNetworkInterfaceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkInterfaceAttributeResponse
 */
ModifyNetworkInterfaceAttributeResponse Client::modifyNetworkInterfaceAttributeWithOptions(const ModifyNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasNetworkInterfaceName()) {
    query["NetworkInterfaceName"] = request.getNetworkInterfaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkInterfaceAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkInterfaceAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an elastic network interface (ENI), such as its name and description.
 *
 * @param request ModifyNetworkInterfaceAttributeRequest
 * @return ModifyNetworkInterfaceAttributeResponse
 */
ModifyNetworkInterfaceAttributeResponse Client::modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkInterfaceAttributeWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades the instance type of a subscription Edge Node Service (ENS) instance. The new instance type takes effect for the remaining lifecycle of the instance.
 *
 * @param request ModifyPrepayInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPrepayInstanceSpecResponse
 */
ModifyPrepayInstanceSpecResponse Client::modifyPrepayInstanceSpecWithOptions(const ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPrepayInstanceSpec"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPrepayInstanceSpecResponse>();
}

/**
 * @summary Upgrades or downgrades the instance type of a subscription Edge Node Service (ENS) instance. The new instance type takes effect for the remaining lifecycle of the instance.
 *
 * @param request ModifyPrepayInstanceSpecRequest
 * @return ModifyPrepayInstanceSpecResponse
 */
ModifyPrepayInstanceSpecResponse Client::modifyPrepayInstanceSpec(const ModifyPrepayInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrepayInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a security group.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifySecurityGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityGroupAttributeResponse
 */
ModifySecurityGroupAttributeResponse Client::modifySecurityGroupAttributeWithOptions(const ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.getSecurityGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroupAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityGroupAttributeResponse>();
}

/**
 * @summary Modifies the information about a security group.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifySecurityGroupAttributeRequest
 * @return ModifySecurityGroupAttributeResponse
 */
ModifySecurityGroupAttributeResponse Client::modifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a snapshot.
 *
 * @param request ModifySnapshotAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySnapshotAttributeResponse
 */
ModifySnapshotAttributeResponse Client::modifySnapshotAttributeWithOptions(const ModifySnapshotAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySnapshotAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySnapshotAttributeResponse>();
}

/**
 * @summary Modifies the information about a snapshot.
 *
 * @param request ModifySnapshotAttributeRequest
 * @return ModifySnapshotAttributeResponse
 */
ModifySnapshotAttributeResponse Client::modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySnapshotAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改snat规则
 *
 * @param request ModifySnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySnatEntryResponse
 */
ModifySnatEntryResponse Client::modifySnatEntryWithOptions(const ModifySnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipAffinity()) {
    query["EipAffinity"] = request.getEipAffinity();
  }

  if (!!request.hasIspAffinity()) {
    query["IspAffinity"] = request.getIspAffinity();
  }

  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatEntryName()) {
    query["SnatEntryName"] = request.getSnatEntryName();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySnatEntryResponse>();
}

/**
 * @summary 修改snat规则
 *
 * @param request ModifySnatEntryRequest
 * @return ModifySnatEntryResponse
 */
ModifySnatEntryResponse Client::modifySnatEntry(const ModifySnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySnatEntryWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a vSwitch.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifyVSwitchAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVSwitchAttributeResponse
 */
ModifyVSwitchAttributeResponse Client::modifyVSwitchAttributeWithOptions(const ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchName()) {
    query["VSwitchName"] = request.getVSwitchName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVSwitchAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVSwitchAttributeResponse>();
}

/**
 * @summary Modifies information about a vSwitch.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 5 times per second per user.
 *
 * @param request ModifyVSwitchAttributeRequest
 * @return ModifyVSwitchAttributeResponse
 */
ModifyVSwitchAttributeResponse Client::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVSwitchAttributeWithOptions(request, runtime);
}

/**
 * @summary Deploys the SDG that has been attached to instances on the corresponding Android in Container (AIC) instance.
 *
 * @param tmpReq MountInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MountInstanceSDGResponse
 */
MountInstanceSDGResponse Client::mountInstanceSDGWithOptions(const MountInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MountInstanceSDGShrinkRequest request = MountInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MountInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MountInstanceSDGResponse>();
}

/**
 * @summary Deploys the SDG that has been attached to instances on the corresponding Android in Container (AIC) instance.
 *
 * @param request MountInstanceSDGRequest
 * @return MountInstanceSDGResponse
 */
MountInstanceSDGResponse Client::mountInstanceSDG(const MountInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mountInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Preloads a shared data group (SDG).
 *
 * @param tmpReq PreloadRegionSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadRegionSDGResponse
 */
PreloadRegionSDGResponse Client::preloadRegionSDGWithOptions(const PreloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreloadRegionSDGShrinkRequest request = PreloadRegionSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestinationRegionIds()) {
    request.setDestinationRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestinationRegionIds(), "DestinationRegionIds", "json"));
  }

  if (!!tmpReq.hasNamespaces()) {
    request.setNamespacesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNamespaces(), "Namespaces", "json"));
  }

  json query = {};
  if (!!request.hasDestinationRegionIdsShrink()) {
    query["DestinationRegionIds"] = request.getDestinationRegionIdsShrink();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasNamespacesShrink()) {
    query["Namespaces"] = request.getNamespacesShrink();
  }

  if (!!request.hasRedundantNum()) {
    query["RedundantNum"] = request.getRedundantNum();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreloadRegionSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreloadRegionSDGResponse>();
}

/**
 * @summary Preloads a shared data group (SDG).
 *
 * @param request PreloadRegionSDGRequest
 * @return PreloadRegionSDGResponse
 */
PreloadRegionSDGResponse Client::preloadRegionSDG(const PreloadRegionSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadRegionSDGWithOptions(request, runtime);
}

/**
 * @summary Prepares the upload and obtains the location of the bucket.
 *
 * @param request PrepareUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrepareUploadResponse
 */
PrepareUploadResponse Client::prepareUploadWithOptions(const PrepareUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrepareUpload"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrepareUploadResponse>();
}

/**
 * @summary Prepares the upload and obtains the location of the bucket.
 *
 * @param request PrepareUploadRequest
 * @return PrepareUploadResponse
 */
PrepareUploadResponse Client::prepareUpload(const PrepareUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return prepareUploadWithOptions(request, runtime);
}

/**
 * @summary Pushes the business or service data of an application to file servers.
 *
 * @param request PushApplicationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushApplicationDataResponse
 */
PushApplicationDataResponse Client::pushApplicationDataWithOptions(const PushApplicationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasPushStrategy()) {
    query["PushStrategy"] = request.getPushStrategy();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushApplicationData"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushApplicationDataResponse>();
}

/**
 * @summary Pushes the business or service data of an application to file servers.
 *
 * @param request PushApplicationDataRequest
 * @return PushApplicationDataResponse
 */
PushApplicationDataResponse Client::pushApplicationData(const PushApplicationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushApplicationDataWithOptions(request, runtime);
}

/**
 * @summary Creates an Edge Object Storage (EOS) bucket.
 *
 * @param request PutBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutBucketResponse
 */
PutBucketResponse Client::putBucketWithOptions(const PutBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketAcl()) {
    query["BucketAcl"] = request.getBucketAcl();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDispatchScope()) {
    query["DispatchScope"] = request.getDispatchScope();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasLogicalBucketType()) {
    query["LogicalBucketType"] = request.getLogicalBucketType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutBucket"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutBucketResponse>();
}

/**
 * @summary Creates an Edge Object Storage (EOS) bucket.
 *
 * @param request PutBucketRequest
 * @return PutBucketResponse
 */
PutBucketResponse Client::putBucket(const PutBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putBucketWithOptions(request, runtime);
}

/**
 * @summary Modifies the access control list (ACL) of a bucket.
 *
 * @param request PutBucketAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutBucketAclResponse
 */
PutBucketAclResponse Client::putBucketAclWithOptions(const PutBucketAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketAcl()) {
    query["BucketAcl"] = request.getBucketAcl();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutBucketAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutBucketAclResponse>();
}

/**
 * @summary Modifies the access control list (ACL) of a bucket.
 *
 * @param request PutBucketAclRequest
 * @return PutBucketAclResponse
 */
PutBucketAclResponse Client::putBucketAcl(const PutBucketAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putBucketAclWithOptions(request, runtime);
}

/**
 * @summary Configures lifecycle rules for objects.
 *
 * @description *   You can configure up to 1,000 rules.
 * *   If an object meets multiple rules, the rule that has the earliest expiration time prevails.
 *
 * @param request PutBucketLifecycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutBucketLifecycleResponse
 */
PutBucketLifecycleResponse Client::putBucketLifecycleWithOptions(const PutBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowSameActionOverlap()) {
    query["AllowSameActionOverlap"] = request.getAllowSameActionOverlap();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasCreatedBeforeDate()) {
    query["CreatedBeforeDate"] = request.getCreatedBeforeDate();
  }

  if (!!request.hasExpirationDays()) {
    query["ExpirationDays"] = request.getExpirationDays();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.getPrefix();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutBucketLifecycle"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutBucketLifecycleResponse>();
}

/**
 * @summary Configures lifecycle rules for objects.
 *
 * @description *   You can configure up to 1,000 rules.
 * *   If an object meets multiple rules, the rule that has the earliest expiration time prevails.
 *
 * @param request PutBucketLifecycleRequest
 * @return PutBucketLifecycleResponse
 */
PutBucketLifecycleResponse Client::putBucketLifecycle(const PutBucketLifecycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putBucketLifecycleWithOptions(request, runtime);
}

/**
 * @summary Initializes a disk.
 *
 * @param request ReInitDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReInitDiskResponse
 */
ReInitDiskResponse Client::reInitDiskWithOptions(const ReInitDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReInitDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReInitDiskResponse>();
}

/**
 * @summary Initializes a disk.
 *
 * @param request ReInitDiskRequest
 * @return ReInitDiskResponse
 */
ReInitDiskResponse Client::reInitDisk(const ReInitDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reInitDiskWithOptions(request, runtime);
}

/**
 * @summary Restarts an Android in Container (AIC) instance.
 *
 * @param tmpReq RebootAICInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootAICInstanceResponse
 */
RebootAICInstanceResponse Client::rebootAICInstanceWithOptions(const RebootAICInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RebootAICInstanceShrinkRequest request = RebootAICInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootAICInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootAICInstanceResponse>();
}

/**
 * @summary Restarts an Android in Container (AIC) instance.
 *
 * @param request RebootAICInstanceRequest
 * @return RebootAICInstanceResponse
 */
RebootAICInstanceResponse Client::rebootAICInstance(const RebootAICInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootAICInstanceWithOptions(request, runtime);
}

/**
 * @summary Reboots an Android in Container (AIC) server.
 *
 * @param request RebootARMServerInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootARMServerInstanceResponse
 */
RebootARMServerInstanceResponse Client::rebootARMServerInstanceWithOptions(const RebootARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootARMServerInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootARMServerInstanceResponse>();
}

/**
 * @summary Reboots an Android in Container (AIC) server.
 *
 * @param request RebootARMServerInstanceRequest
 * @return RebootARMServerInstanceResponse
 */
RebootARMServerInstanceResponse Client::rebootARMServerInstance(const RebootARMServerInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootARMServerInstanceWithOptions(request, runtime);
}

/**
 * @summary Reboots an instance.
 *
 * @description *   Only instances that are in the Running state can be restarted.
 * *   If the operation is successful, the status of the instance becomes Starting.
 *
 * @param request RebootInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootInstanceResponse
 */
RebootInstanceResponse Client::rebootInstanceWithOptions(const RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootInstanceResponse>();
}

/**
 * @summary Reboots an instance.
 *
 * @description *   Only instances that are in the Running state can be restarted.
 * *   If the operation is successful, the status of the instance becomes Starting.
 *
 * @param request RebootInstanceRequest
 * @return RebootInstanceResponse
 */
RebootInstanceResponse Client::rebootInstance(const RebootInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootInstanceWithOptions(request, runtime);
}

/**
 * @summary 选择批量实例进行重启操作
 *
 * @param tmpReq RebootInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootInstancesResponse
 */
RebootInstancesResponse Client::rebootInstancesWithOptions(const RebootInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RebootInstancesShrinkRequest request = RebootInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootInstancesResponse>();
}

/**
 * @summary 选择批量实例进行重启操作
 *
 * @param request RebootInstancesRequest
 * @return RebootInstancesResponse
 */
RebootInstancesResponse Client::rebootInstances(const RebootInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootInstancesWithOptions(request, runtime);
}

/**
 * @summary Recovers an Android in Container (AIC) instance on the server.
 *
 * @param request RecoverAICInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverAICInstanceResponse
 */
RecoverAICInstanceResponse Client::recoverAICInstanceWithOptions(const RecoverAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoverAICInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverAICInstanceResponse>();
}

/**
 * @summary Recovers an Android in Container (AIC) instance on the server.
 *
 * @param request RecoverAICInstanceRequest
 * @return RecoverAICInstanceResponse
 */
RecoverAICInstanceResponse Client::recoverAICInstance(const RecoverAICInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverAICInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets an instance based on specific parameters.
 *
 * @param request ReinitInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReinitInstanceResponse
 */
ReinitInstanceResponse Client::reinitInstanceWithOptions(const ReinitInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReinitInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReinitInstanceResponse>();
}

/**
 * @summary Resets an instance based on specific parameters.
 *
 * @param request ReinitInstanceRequest
 * @return ReinitInstanceResponse
 */
ReinitInstanceResponse Client::reinitInstance(const ReinitInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reinitInstanceWithOptions(request, runtime);
}

/**
 * @summary 选择批量实例进行重置操作
 *
 * @param tmpReq ReinitInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReinitInstancesResponse
 */
ReinitInstancesResponse Client::reinitInstancesWithOptions(const ReinitInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReinitInstancesShrinkRequest request = ReinitInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReinitInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReinitInstancesResponse>();
}

/**
 * @summary 选择批量实例进行重置操作
 *
 * @param request ReinitInstancesRequest
 * @return ReinitInstancesResponse
 */
ReinitInstancesResponse Client::reinitInstances(const ReinitInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reinitInstancesWithOptions(request, runtime);
}

/**
 * @summary Releases an Android in Container (AIC) instance from the server.
 *
 * @param request ReleaseAICInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseAICInstanceResponse
 */
ReleaseAICInstanceResponse Client::releaseAICInstanceWithOptions(const ReleaseAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServerId()) {
    query["ServerId"] = request.getServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseAICInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseAICInstanceResponse>();
}

/**
 * @summary Releases an Android in Container (AIC) instance from the server.
 *
 * @param request ReleaseAICInstanceRequest
 * @return ReleaseAICInstanceResponse
 */
ReleaseAICInstanceResponse Client::releaseAICInstance(const ReleaseAICInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseAICInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases an ARM server.
 *
 * @param request ReleaseARMServerInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseARMServerInstanceResponse
 */
ReleaseARMServerInstanceResponse Client::releaseARMServerInstanceWithOptions(const ReleaseARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseARMServerInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseARMServerInstanceResponse>();
}

/**
 * @summary Releases an ARM server.
 *
 * @param request ReleaseARMServerInstanceRequest
 * @return ReleaseARMServerInstanceResponse
 */
ReleaseARMServerInstanceResponse Client::releaseARMServerInstance(const ReleaseARMServerInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseARMServerInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases an instance. You can call this operation to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
 *
 * @description *   You can call this operation up to 10,000 times per second per account.
 * *   The maximum number of times that each user can call this operation per second is 50.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases an instance. You can call this operation to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
 *
 * @description *   You can call this operation up to 10,000 times per second per account.
 * *   The maximum number of times that each user can call this operation per second is 50.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go instance.
 *
 * @param request ReleasePostPaidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePostPaidInstanceResponse
 */
ReleasePostPaidInstanceResponse Client::releasePostPaidInstanceWithOptions(const ReleasePostPaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePostPaidInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePostPaidInstanceResponse>();
}

/**
 * @summary Deletes a pay-as-you-go instance.
 *
 * @param request ReleasePostPaidInstanceRequest
 * @return ReleasePostPaidInstanceResponse
 */
ReleasePostPaidInstanceResponse Client::releasePostPaidInstance(const ReleasePostPaidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePostPaidInstanceWithOptions(request, runtime);
}

/**
 * @summary Call ReleasePrePaidInstance to delete a subscription instance.
 *
 * @param request ReleasePrePaidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePrePaidInstanceResponse
 */
ReleasePrePaidInstanceResponse Client::releasePrePaidInstanceWithOptions(const ReleasePrePaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePrePaidInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePrePaidInstanceResponse>();
}

/**
 * @summary Call ReleasePrePaidInstance to delete a subscription instance.
 *
 * @param request ReleasePrePaidInstanceRequest
 * @return ReleasePrePaidInstanceResponse
 */
ReleasePrePaidInstanceResponse Client::releasePrePaidInstance(const ReleasePrePaidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePrePaidInstanceWithOptions(request, runtime);
}

/**
 * @summary Removes backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param tmpReq RemoveBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServersWithOptions(const RemoveBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveBackendServersShrinkRequest request = RemoveBackendServersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBackendServers()) {
    request.setBackendServersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackendServers(), "BackendServers", "json"));
  }

  json query = {};
  if (!!request.hasBackendServersShrink()) {
    query["BackendServers"] = request.getBackendServersShrink();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveBackendServers"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveBackendServersResponse>();
}

/**
 * @summary Removes backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request RemoveBackendServersRequest
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServers(const RemoveBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBackendServersWithOptions(request, runtime);
}

/**
 * @summary Removes a shared data group (SDG) that is attached to the compute instance.
 *
 * @param tmpReq RemoveInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInstanceSDGResponse
 */
RemoveInstanceSDGResponse Client::removeInstanceSDGWithOptions(const RemoveInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveInstanceSDGShrinkRequest request = RemoveInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInstanceSDGResponse>();
}

/**
 * @summary Removes a shared data group (SDG) that is attached to the compute instance.
 *
 * @param request RemoveInstanceSDGRequest
 * @return RemoveInstanceSDGResponse
 */
RemoveInstanceSDGResponse Client::removeInstanceSDG(const RemoveInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Removes IP addresses from an edge private network (EPN) instance.
 *
 * @param request RemovePublicIpsFromEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePublicIpsFromEpnInstanceResponse
 */
RemovePublicIpsFromEpnInstanceResponse Client::removePublicIpsFromEpnInstanceWithOptions(const RemovePublicIpsFromEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasInstanceInfos()) {
    query["InstanceInfos"] = request.getInstanceInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePublicIpsFromEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePublicIpsFromEpnInstanceResponse>();
}

/**
 * @summary Removes IP addresses from an edge private network (EPN) instance.
 *
 * @param request RemovePublicIpsFromEpnInstanceRequest
 * @return RemovePublicIpsFromEpnInstanceResponse
 */
RemovePublicIpsFromEpnInstanceResponse Client::removePublicIpsFromEpnInstance(const RemovePublicIpsFromEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePublicIpsFromEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Removes a deployed shared data group (SDG) and restore local storage.
 *
 * @param tmpReq RemoveSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSDGResponse
 */
RemoveSDGResponse Client::removeSDGWithOptions(const RemoveSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveSDGShrinkRequest request = RemoveSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSDGResponse>();
}

/**
 * @summary Removes a deployed shared data group (SDG) and restore local storage.
 *
 * @param request RemoveSDGRequest
 * @return RemoveSDGResponse
 */
RemoveSDGResponse Client::removeSDG(const RemoveSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSDGWithOptions(request, runtime);
}

/**
 * @summary Removes all versions of SDG and restores the mount to the local disk.
 *
 * @param tmpReq RemoveSDGsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSDGsResponse
 */
RemoveSDGsResponse Client::removeSDGsWithOptions(const RemoveSDGsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveSDGsShrinkRequest request = RemoveSDGsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasSdgIds()) {
    request.setSdgIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdgIds(), "SdgIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSdgIdsShrink()) {
    query["SdgIds"] = request.getSdgIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSDGs"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSDGsResponse>();
}

/**
 * @summary Removes all versions of SDG and restores the mount to the local disk.
 *
 * @param request RemoveSDGsRequest
 * @return RemoveSDGsResponse
 */
RemoveSDGsResponse Client::removeSDGs(const RemoveSDGsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSDGsWithOptions(request, runtime);
}

/**
 * @summary Deletes the networking information. This operation is applicable only for instances that reside in the internal network.
 *
 * @param request RemoveVSwitchesFromEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveVSwitchesFromEpnInstanceResponse
 */
RemoveVSwitchesFromEpnInstanceResponse Client::removeVSwitchesFromEpnInstanceWithOptions(const RemoveVSwitchesFromEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  if (!!request.hasVSwitchesInfo()) {
    query["VSwitchesInfo"] = request.getVSwitchesInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveVSwitchesFromEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveVSwitchesFromEpnInstanceResponse>();
}

/**
 * @summary Deletes the networking information. This operation is applicable only for instances that reside in the internal network.
 *
 * @param request RemoveVSwitchesFromEpnInstanceRequest
 * @return RemoveVSwitchesFromEpnInstanceResponse
 */
RemoveVSwitchesFromEpnInstanceResponse Client::removeVSwitchesFromEpnInstance(const RemoveVSwitchesFromEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeVSwitchesFromEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription Android in Container (AIC) instance.
 *
 * @param request RenewARMServerInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewARMServerInstanceResponse
 */
RenewARMServerInstanceResponse Client::renewARMServerInstanceWithOptions(const RenewARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewARMServerInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewARMServerInstanceResponse>();
}

/**
 * @summary Renews a subscription Android in Container (AIC) instance.
 *
 * @param request RenewARMServerInstanceRequest
 * @return RenewARMServerInstanceResponse
 */
RenewARMServerInstanceResponse Client::renewARMServerInstance(const RenewARMServerInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewARMServerInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription instance.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a subscription instance.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Scales resources in an asynchronous manner and deploys or releases the container.
 *
 * @param request RescaleApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RescaleApplicationResponse
 */
RescaleApplicationResponse Client::rescaleApplicationWithOptions(const RescaleApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasRescaleLevel()) {
    query["RescaleLevel"] = request.getRescaleLevel();
  }

  if (!!request.hasRescaleType()) {
    query["RescaleType"] = request.getRescaleType();
  }

  if (!!request.hasResourceSelector()) {
    query["ResourceSelector"] = request.getResourceSelector();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasToAppVersion()) {
    query["ToAppVersion"] = request.getToAppVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RescaleApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RescaleApplicationResponse>();
}

/**
 * @summary Scales resources in an asynchronous manner and deploys or releases the container.
 *
 * @param request RescaleApplicationRequest
 * @return RescaleApplicationResponse
 */
RescaleApplicationResponse Client::rescaleApplication(const RescaleApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rescaleApplicationWithOptions(request, runtime);
}

/**
 * @summary Scales out a bare metal device.
 *
 * @param request RescaleDeviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RescaleDeviceServiceResponse
 */
RescaleDeviceServiceResponse Client::rescaleDeviceServiceWithOptions(const RescaleDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasRescaleLevel()) {
    query["RescaleLevel"] = request.getRescaleLevel();
  }

  if (!!request.hasRescaleType()) {
    query["RescaleType"] = request.getRescaleType();
  }

  if (!!request.hasResourceSpec()) {
    query["ResourceSpec"] = request.getResourceSpec();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  json body = {};
  if (!!request.hasResourceInfo()) {
    body["ResourceInfo"] = request.getResourceInfo();
  }

  if (!!request.hasResourceSelector()) {
    body["ResourceSelector"] = request.getResourceSelector();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RescaleDeviceService"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RescaleDeviceServiceResponse>();
}

/**
 * @summary Scales out a bare metal device.
 *
 * @param request RescaleDeviceServiceRequest
 * @return RescaleDeviceServiceResponse
 */
RescaleDeviceServiceResponse Client::rescaleDeviceService(const RescaleDeviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rescaleDeviceServiceWithOptions(request, runtime);
}

/**
 * @summary Resets an Android in Container (AIC) instance.
 *
 * @param request ResetAICInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAICInstanceResponse
 */
ResetAICInstanceResponse Client::resetAICInstanceWithOptions(const ResetAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAICInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAICInstanceResponse>();
}

/**
 * @summary Resets an Android in Container (AIC) instance.
 *
 * @param request ResetAICInstanceRequest
 * @return ResetAICInstanceResponse
 */
ResetAICInstanceResponse Client::resetAICInstance(const ResetAICInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAICInstanceWithOptions(request, runtime);
}

/**
 * @summary Rolls back a disk by using a snapshot.
 *
 * @description When you call this operation, take note of the following items:
 * *   The disk must be in the In Use (In_Use) or Unattached (Available) state.
 * *   The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
 * *   The specified snapshot must be created from the disk specified by the DiskId parameter.
 * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
 *
 * @param request ResetDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDiskResponse
 */
ResetDiskResponse Client::resetDiskWithOptions(const ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDiskResponse>();
}

/**
 * @summary Rolls back a disk by using a snapshot.
 *
 * @description When you call this operation, take note of the following items:
 * *   The disk must be in the In Use (In_Use) or Unattached (Available) state.
 * *   The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
 * *   The specified snapshot must be created from the disk specified by the DiskId parameter.
 * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
 *
 * @param request ResetDiskRequest
 * @return ResetDiskResponse
 */
ResetDiskResponse Client::resetDisk(const ResetDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDiskWithOptions(request, runtime);
}

/**
 * @summary Resizes a pay-as-you-go disk that you purchase.
 *
 * @param request ResizeDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeDiskResponse
 */
ResizeDiskResponse Client::resizeDiskWithOptions(const ResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasNewSize()) {
    query["NewSize"] = request.getNewSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeDisk"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeDiskResponse>();
}

/**
 * @summary Resizes a pay-as-you-go disk that you purchase.
 *
 * @param request ResizeDiskRequest
 * @return ResizeDiskResponse
 */
ResizeDiskResponse Client::resizeDisk(const ResizeDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeDiskWithOptions(request, runtime);
}

/**
 * @summary Deletes an inbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
 *
 * @description *   In the security group-related API documents, inbound traffic refers to the traffic sent by the source and received by the destination.
 * *   You can determine an inbound security group rule by specifying one of the following groups of parameters. You cannot determine a security group rule by specifying only one parameter.
 * *   You can specify one or more of the following parameters to remove access control for a CIDR block: IpProtocol, PortRange, Policy, and SourceCidrIp.
 *
 * @param request RevokeSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeSecurityGroupResponse
 */
RevokeSecurityGroupResponse Client::revokeSecurityGroupWithOptions(const RevokeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeSecurityGroup"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeSecurityGroupResponse>();
}

/**
 * @summary Deletes an inbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
 *
 * @description *   In the security group-related API documents, inbound traffic refers to the traffic sent by the source and received by the destination.
 * *   You can determine an inbound security group rule by specifying one of the following groups of parameters. You cannot determine a security group rule by specifying only one parameter.
 * *   You can specify one or more of the following parameters to remove access control for a CIDR block: IpProtocol, PortRange, Policy, and SourceCidrIp.
 *
 * @param request RevokeSecurityGroupRequest
 * @return RevokeSecurityGroupResponse
 */
RevokeSecurityGroupResponse Client::revokeSecurityGroup(const RevokeSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an outbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
 *
 * @description >  In the security group-related API documents, outbound traffic refers to the traffic sent by the source and received by the destination.
 *
 * @param request RevokeSecurityGroupEgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeSecurityGroupEgressResponse
 */
RevokeSecurityGroupEgressResponse Client::revokeSecurityGroupEgressWithOptions(const RevokeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestCidrIp()) {
    query["DestCidrIp"] = request.getDestCidrIp();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeSecurityGroupEgress"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeSecurityGroupEgressResponse>();
}

/**
 * @summary Deletes an outbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
 *
 * @description >  In the security group-related API documents, outbound traffic refers to the traffic sent by the source and received by the destination.
 *
 * @param request RevokeSecurityGroupEgressRequest
 * @return RevokeSecurityGroupEgressResponse
 */
RevokeSecurityGroupEgressResponse Client::revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeSecurityGroupEgressWithOptions(request, runtime);
}

/**
 * @summary Rolls back the container version of a specific application.
 *
 * @param request RollbackApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplicationWithOptions(const RollbackApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasFromAppVersion()) {
    query["FromAppVersion"] = request.getFromAppVersion();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasToAppVersion()) {
    query["ToAppVersion"] = request.getToAppVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackApplicationResponse>();
}

/**
 * @summary Rolls back the container version of a specific application.
 *
 * @param request RollbackApplicationRequest
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplication(const RollbackApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go or subscription ENS instance.
 *
 * @param tmpReq RunInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunInstancesResponse
 */
RunInstancesResponse Client::runInstancesWithOptions(const RunInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunInstancesShrinkRequest request = RunInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataDisk()) {
    request.setDataDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataDisk(), "DataDisk", "json"));
  }

  if (!!tmpReq.hasSystemDisk()) {
    request.setSystemDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemDisk(), "SystemDisk", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoReleaseTime()) {
    query["AutoReleaseTime"] = request.getAutoReleaseTime();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasDataDiskShrink()) {
    query["DataDisk"] = request.getDataDiskShrink();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceChargeStrategy()) {
    query["InstanceChargeStrategy"] = request.getInstanceChargeStrategy();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.getLaunchTemplateId();
  }

  if (!!request.hasLaunchTemplateName()) {
    query["LaunchTemplateName"] = request.getLaunchTemplateName();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.getLaunchTemplateVersion();
  }

  if (!!request.hasNetDistrictCode()) {
    query["NetDistrictCode"] = request.getNetDistrictCode();
  }

  if (!!request.hasNetWorkId()) {
    query["NetWorkId"] = request.getNetWorkId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInherit()) {
    query["PasswordInherit"] = request.getPasswordInherit();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasPublicIpIdentification()) {
    query["PublicIpIdentification"] = request.getPublicIpIdentification();
  }

  if (!!request.hasScheduleAreaLevel()) {
    query["ScheduleAreaLevel"] = request.getScheduleAreaLevel();
  }

  if (!!request.hasSchedulingPriceStrategy()) {
    query["SchedulingPriceStrategy"] = request.getSchedulingPriceStrategy();
  }

  if (!!request.hasSchedulingStrategy()) {
    query["SchedulingStrategy"] = request.getSchedulingStrategy();
  }

  if (!!request.hasSecurityId()) {
    query["SecurityId"] = request.getSecurityId();
  }

  if (!!request.hasSpotDuration()) {
    query["SpotDuration"] = request.getSpotDuration();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasSystemDiskShrink()) {
    query["SystemDisk"] = request.getSystemDiskShrink();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUniqueSuffix()) {
    query["UniqueSuffix"] = request.getUniqueSuffix();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunInstancesResponse>();
}

/**
 * @summary Creates a pay-as-you-go or subscription ENS instance.
 *
 * @param request RunInstancesRequest
 * @return RunInstancesResponse
 */
RunInstancesResponse Client::runInstances(const RunInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runInstancesWithOptions(request, runtime);
}

/**
 * @summary Schedules the nearest idle resources including instances and pods for your device based on the user ID and IP address and initializes the virtual environment.
 *
 * @param request RunServiceScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunServiceScheduleResponse
 */
RunServiceScheduleResponse Client::runServiceScheduleWithOptions(const RunServiceScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasDirectorys()) {
    query["Directorys"] = request.getDirectorys();
  }

  if (!!request.hasPodConfigName()) {
    query["PodConfigName"] = request.getPodConfigName();
  }

  if (!!request.hasPreLockedTimeout()) {
    query["PreLockedTimeout"] = request.getPreLockedTimeout();
  }

  if (!!request.hasScheduleStrategy()) {
    query["ScheduleStrategy"] = request.getScheduleStrategy();
  }

  if (!!request.hasServiceAction()) {
    query["ServiceAction"] = request.getServiceAction();
  }

  if (!!request.hasServiceCommands()) {
    query["ServiceCommands"] = request.getServiceCommands();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunServiceSchedule"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunServiceScheduleResponse>();
}

/**
 * @summary Schedules the nearest idle resources including instances and pods for your device based on the user ID and IP address and initializes the virtual environment.
 *
 * @param request RunServiceScheduleRequest
 * @return RunServiceScheduleResponse
 */
RunServiceScheduleResponse Client::runServiceSchedule(const RunServiceScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runServiceScheduleWithOptions(request, runtime);
}

/**
 * @summary Saves the disk of a specific device as a shared data group (SDG).
 *
 * @param request SaveSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSDGResponse
 */
SaveSDGResponse Client::saveSDGWithOptions(const SaveSDGRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSDGResponse>();
}

/**
 * @summary Saves the disk of a specific device as a shared data group (SDG).
 *
 * @param request SaveSDGRequest
 * @return SaveSDGResponse
 */
SaveSDGResponse Client::saveSDG(const SaveSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSDGWithOptions(request, runtime);
}

/**
 * @summary 调整节点池节点数
 *
 * @param tmpReq ScaleClusterNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleClusterNodePoolResponse
 */
ScaleClusterNodePoolResponse Client::scaleClusterNodePoolWithOptions(const ScaleClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ScaleClusterNodePoolShrinkRequest request = ScaleClusterNodePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "Body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["Body"] = request.getBodyShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodepoolId()) {
    query["NodepoolId"] = request.getNodepoolId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleClusterNodePool"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleClusterNodePoolResponse>();
}

/**
 * @summary 调整节点池节点数
 *
 * @param request ScaleClusterNodePoolRequest
 * @return ScaleClusterNodePoolResponse
 */
ScaleClusterNodePoolResponse Client::scaleClusterNodePool(const ScaleClusterNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scaleClusterNodePoolWithOptions(request, runtime);
}

/**
 * @summary Sets the weights of backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param tmpReq SetBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetBackendServersResponse
 */
SetBackendServersResponse Client::setBackendServersWithOptions(const SetBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetBackendServersShrinkRequest request = SetBackendServersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBackendServers()) {
    request.setBackendServersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackendServers(), "BackendServers", "json"));
  }

  json query = {};
  if (!!request.hasBackendServersShrink()) {
    query["BackendServers"] = request.getBackendServersShrink();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetBackendServers"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetBackendServersResponse>();
}

/**
 * @summary Sets the weights of backend servers.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request SetBackendServersRequest
 * @return SetBackendServersResponse
 */
SetBackendServersResponse Client::setBackendServers(const SetBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setBackendServersWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttributeWithOptions(const SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.getHealthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.getXForwardedFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerHTTPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of an HTTP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerHTTPSListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerHTTPSListenerAttributeResponse
 */
SetLoadBalancerHTTPSListenerAttributeResponse Client::setLoadBalancerHTTPSListenerAttributeWithOptions(const SetLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.getHealthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.getServerCertificateId();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerHTTPSListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerHTTPSListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of an HTTPS listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerHTTPSListenerAttributeRequest
 * @return SetLoadBalancerHTTPSListenerAttributeResponse
 */
SetLoadBalancerHTTPSListenerAttributeResponse Client::setLoadBalancerHTTPSListenerAttribute(const SetLoadBalancerHTTPSListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatusWithOptions(const SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.getLoadBalancerStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerStatus"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerStatusResponse>();
}

/**
 * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerStatusRequest
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a TCP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttributeWithOptions(const SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEipTransmit()) {
    query["EipTransmit"] = request.getEipTransmit();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.getEstablishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.getHealthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.getHealthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.getPersistenceTimeout();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerTCPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a TCP listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a UDP listener.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request SetLoadBalancerUDPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerUDPListenerAttributeResponse
 */
SetLoadBalancerUDPListenerAttributeResponse Client::setLoadBalancerUDPListenerAttributeWithOptions(const SetLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEipTransmit()) {
    query["EipTransmit"] = request.getEipTransmit();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.getEstablishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.getHealthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.getHealthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckExp()) {
    query["HealthCheckExp"] = request.getHealthCheckExp();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckReq()) {
    query["HealthCheckReq"] = request.getHealthCheckReq();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerUDPListenerAttribute"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerUDPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a UDP listener.
 *
 * @description *   You can call this operation up to 100 times per second.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request SetLoadBalancerUDPListenerAttributeRequest
 * @return SetLoadBalancerUDPListenerAttributeResponse
 */
SetLoadBalancerUDPListenerAttributeResponse Client::setLoadBalancerUDPListenerAttribute(const SetLoadBalancerUDPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Share the specified AIC image to other users.
 *
 * @param tmpReq ShareAICImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShareAICImageResponse
 */
ShareAICImageResponse Client::shareAICImageWithOptions(const ShareAICImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ShareAICImageShrinkRequest request = ShareAICImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsers()) {
    request.setUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsers(), "Users", "json"));
  }

  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasUsersShrink()) {
    query["Users"] = request.getUsersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ShareAICImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShareAICImageResponse>();
}

/**
 * @summary Share the specified AIC image to other users.
 *
 * @param request ShareAICImageRequest
 * @return ShareAICImageResponse
 */
ShareAICImageResponse Client::shareAICImage(const ShareAICImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return shareAICImageWithOptions(request, runtime);
}

/**
 * @summary Starts an edge network instance.
 *
 * @param request StartEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEpnInstanceResponse
 */
StartEpnInstanceResponse Client::startEpnInstanceWithOptions(const StartEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartEpnInstanceResponse>();
}

/**
 * @summary Starts an edge network instance.
 *
 * @param request StartEpnInstanceRequest
 * @return StartEpnInstanceResponse
 */
StartEpnInstanceResponse Client::startEpnInstance(const StartEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts an instance.
 *
 * @description *   You can call the operation only when the instance is in the Stopped state.
 * *   If the operation is successful, the status of the instance becomes Starting.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary Starts an instance.
 *
 * @description *   You can call the operation only when the instance is in the Stopped state.
 * *   If the operation is successful, the status of the instance becomes Starting.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary 选择批量实例进行启动操作
 *
 * @param tmpReq StartInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstancesResponse
 */
StartInstancesResponse Client::startInstancesWithOptions(const StartInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartInstancesShrinkRequest request = StartInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstancesResponse>();
}

/**
 * @summary 选择批量实例进行启动操作
 *
 * @param request StartInstancesRequest
 * @return StartInstancesResponse
 */
StartInstancesResponse Client::startInstances(const StartInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstancesWithOptions(request, runtime);
}

/**
 * @summary Enables a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request StartLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLoadBalancerListenerResponse
 */
StartLoadBalancerListenerResponse Client::startLoadBalancerListenerWithOptions(const StartLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartLoadBalancerListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartLoadBalancerListenerResponse>();
}

/**
 * @summary Enables a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request StartLoadBalancerListenerRequest
 * @return StartLoadBalancerListenerResponse
 */
StartLoadBalancerListenerResponse Client::startLoadBalancerListener(const StartLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Starts the elastic IP address (EIP) specified in a source network address translation (SNAT) entry.
 *
 * @param request StartSnatIpForSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSnatIpForSnatEntryResponse
 */
StartSnatIpForSnatEntryResponse Client::startSnatIpForSnatEntryWithOptions(const StartSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSnatIpForSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSnatIpForSnatEntryResponse>();
}

/**
 * @summary Starts the elastic IP address (EIP) specified in a source network address translation (SNAT) entry.
 *
 * @param request StartSnatIpForSnatEntryRequest
 * @return StartSnatIpForSnatEntryResponse
 */
StartSnatIpForSnatEntryResponse Client::startSnatIpForSnatEntry(const StartSnatIpForSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSnatIpForSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Stops an EPN instance.
 *
 * @param request StopEpnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopEpnInstanceResponse
 */
StopEpnInstanceResponse Client::stopEpnInstanceWithOptions(const StopEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEPNInstanceId()) {
    query["EPNInstanceId"] = request.getEPNInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopEpnInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopEpnInstanceResponse>();
}

/**
 * @summary Stops an EPN instance.
 *
 * @param request StopEpnInstanceRequest
 * @return StopEpnInstanceResponse
 */
StopEpnInstanceResponse Client::stopEpnInstance(const StopEpnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopEpnInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops an instance.
 *
 * @description *   You can call this operation to stop instances that are only in the Running state.
 * *   If the call is successful, the state of the instance becomes Stopping.
 * *   Once the instance is stopped, the state of the instance becomes Stopped.
 * *   Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Stops an instance.
 *
 * @description *   You can call this operation to stop instances that are only in the Running state.
 * *   If the call is successful, the state of the instance becomes Stopping.
 * *   Once the instance is stopped, the state of the instance becomes Stopped.
 * *   Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary 选择批量实例进行停止操作
 *
 * @param tmpReq StopInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstancesWithOptions(const StopInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopInstancesShrinkRequest request = StopInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstances"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstancesResponse>();
}

/**
 * @summary 选择批量实例进行停止操作
 *
 * @param request StopInstancesRequest
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstances(const StopInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstancesWithOptions(request, runtime);
}

/**
 * @summary Disables a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request StopLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLoadBalancerListenerResponse
 */
StopLoadBalancerListenerResponse Client::stopLoadBalancerListenerWithOptions(const StopLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopLoadBalancerListener"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLoadBalancerListenerResponse>();
}

/**
 * @summary Disables a listener.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request StopLoadBalancerListenerRequest
 * @return StopLoadBalancerListenerResponse
 */
StopLoadBalancerListenerResponse Client::stopLoadBalancerListener(const StopLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Disables an elastic IP address (EIP) in a source network address translation (SNAT) entry.
 *
 * @param request StopSnatIpForSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSnatIpForSnatEntryResponse
 */
StopSnatIpForSnatEntryResponse Client::stopSnatIpForSnatEntryWithOptions(const StopSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSnatIpForSnatEntry"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSnatIpForSnatEntryResponse>();
}

/**
 * @summary Disables an elastic IP address (EIP) in a source network address translation (SNAT) entry.
 *
 * @param request StopSnatIpForSnatEntryRequest
 * @return StopSnatIpForSnatEntryResponse
 */
StopSnatIpForSnatEntryResponse Client::stopSnatIpForSnatEntry(const StopSnatIpForSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopSnatIpForSnatEntryWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to specific Edge Node Service (ENS) resources.
 *
 * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags on the resource. If the number exceeds the upper limit, an error message is returned. Only instance resources, such as virtual machines and bare machines, are supported.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"version" , "2017-11-10"},
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
 * @summary Creates and adds tags to specific Edge Node Service (ENS) resources.
 *
 * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags on the resource. If the number exceeds the upper limit, an error message is returned. Only instance resources, such as virtual machines and bare machines, are supported.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Disassociates an elastic IP address (EIP) from an instance.
 *
 * @param request UnAssociateEnsEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnAssociateEnsEipAddressResponse
 */
UnAssociateEnsEipAddressResponse Client::unAssociateEnsEipAddressWithOptions(const UnAssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnAssociateEnsEipAddress"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnAssociateEnsEipAddressResponse>();
}

/**
 * @summary Disassociates an elastic IP address (EIP) from an instance.
 *
 * @param request UnAssociateEnsEipAddressRequest
 * @return UnAssociateEnsEipAddressResponse
 */
UnAssociateEnsEipAddressResponse Client::unAssociateEnsEipAddress(const UnAssociateEnsEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unAssociateEnsEipAddressWithOptions(request, runtime);
}

/**
 * @summary 卸载集群组件
 *
 * @param tmpReq UnInstallClusterAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnInstallClusterAddonsResponse
 */
UnInstallClusterAddonsResponse Client::unInstallClusterAddonsWithOptions(const UnInstallClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnInstallClusterAddonsShrinkRequest request = UnInstallClusterAddonsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddons()) {
    request.setAddonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddons(), "Addons", "json"));
  }

  json query = {};
  if (!!request.hasAddonsShrink()) {
    query["Addons"] = request.getAddonsShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnInstallClusterAddons"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnInstallClusterAddonsResponse>();
}

/**
 * @summary 卸载集群组件
 *
 * @param request UnInstallClusterAddonsRequest
 * @return UnInstallClusterAddonsResponse
 */
UnInstallClusterAddonsResponse Client::unInstallClusterAddons(const UnInstallClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unInstallClusterAddonsWithOptions(request, runtime);
}

/**
 * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
 *
 * @param request UnassignPrivateIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassignPrivateIpAddressesResponse
 */
UnassignPrivateIpAddressesResponse Client::unassignPrivateIpAddressesWithOptions(const UnassignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnassignPrivateIpAddresses"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassignPrivateIpAddressesResponse>();
}

/**
 * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
 *
 * @param request UnassignPrivateIpAddressesRequest
 * @return UnassignPrivateIpAddressesResponse
 */
UnassignPrivateIpAddressesResponse Client::unassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassignPrivateIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Disassociates a high-availability virtual IP address (HAVIP) from an Edge Node Service (ENS) instance or Elastic Network Interface (ENI).
 *
 * @param request UnassociateHaVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateHaVipResponse
 */
UnassociateHaVipResponse Client::unassociateHaVipWithOptions(const UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHaVipId()) {
    query["HaVipId"] = request.getHaVipId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnassociateHaVip"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassociateHaVipResponse>();
}

/**
 * @summary Disassociates a high-availability virtual IP address (HAVIP) from an Edge Node Service (ENS) instance or Elastic Network Interface (ENI).
 *
 * @param request UnassociateHaVipRequest
 * @return UnassociateHaVipResponse
 */
UnassociateHaVipResponse Client::unassociateHaVip(const UnassociateHaVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateHaVipWithOptions(request, runtime);
}

/**
 * @summary Disassociates a network access control list (ACL) from a network.
 *
 * @param request UnassociateNetworkAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateNetworkAclResponse
 */
UnassociateNetworkAclResponse Client::unassociateNetworkAclWithOptions(const UnassociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkAclId()) {
    query["NetworkAclId"] = request.getNetworkAclId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnassociateNetworkAcl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassociateNetworkAclResponse>();
}

/**
 * @summary Disassociates a network access control list (ACL) from a network.
 *
 * @param request UnassociateNetworkAclRequest
 * @return UnassociateNetworkAclResponse
 */
UnassociateNetworkAclResponse Client::unassociateNetworkAcl(const UnassociateNetworkAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateNetworkAclWithOptions(request, runtime);
}

/**
 * @summary Deletes preloaded data.
 *
 * @param tmpReq UnloadRegionSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnloadRegionSDGResponse
 */
UnloadRegionSDGResponse Client::unloadRegionSDGWithOptions(const UnloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnloadRegionSDGShrinkRequest request = UnloadRegionSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestinationRegionIds()) {
    request.setDestinationRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestinationRegionIds(), "DestinationRegionIds", "json"));
  }

  if (!!tmpReq.hasNamespaces()) {
    request.setNamespacesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNamespaces(), "Namespaces", "json"));
  }

  json query = {};
  if (!!request.hasDestinationRegionIdsShrink()) {
    query["DestinationRegionIds"] = request.getDestinationRegionIdsShrink();
  }

  if (!!request.hasNamespacesShrink()) {
    query["Namespaces"] = request.getNamespacesShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnloadRegionSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnloadRegionSDGResponse>();
}

/**
 * @summary Deletes preloaded data.
 *
 * @param request UnloadRegionSDGRequest
 * @return UnloadRegionSDGResponse
 */
UnloadRegionSDGResponse Client::unloadRegionSDG(const UnloadRegionSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unloadRegionSDGWithOptions(request, runtime);
}

/**
 * @summary Unmounts a shared data group (SDG) from instances.
 *
 * @param tmpReq UnmountInstanceSDGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnmountInstanceSDGResponse
 */
UnmountInstanceSDGResponse Client::unmountInstanceSDGWithOptions(const UnmountInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnmountInstanceSDGShrinkRequest request = UnmountInstanceSDGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasSDGId()) {
    query["SDGId"] = request.getSDGId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnmountInstanceSDG"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnmountInstanceSDGResponse>();
}

/**
 * @summary Unmounts a shared data group (SDG) from instances.
 *
 * @param request UnmountInstanceSDGRequest
 * @return UnmountInstanceSDGResponse
 */
UnmountInstanceSDGResponse Client::unmountInstanceSDG(const UnmountInstanceSDGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unmountInstanceSDGWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
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
    {"action" , "UntagResources"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 修改售卖约束
 *
 * @param tmpReq UpdateEnsSaleControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnsSaleControlResponse
 */
UpdateEnsSaleControlResponse Client::updateEnsSaleControlWithOptions(const UpdateEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEnsSaleControlShrinkRequest request = UpdateEnsSaleControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSaleControls()) {
    request.setSaleControlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSaleControls(), "SaleControls", "json"));
  }

  json query = {};
  if (!!request.hasAliUidAccount()) {
    query["AliUidAccount"] = request.getAliUidAccount();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCustomAccount()) {
    query["CustomAccount"] = request.getCustomAccount();
  }

  if (!!request.hasSaleControlsShrink()) {
    query["SaleControls"] = request.getSaleControlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEnsSaleControl"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnsSaleControlResponse>();
}

/**
 * @summary 修改售卖约束
 *
 * @param request UpdateEnsSaleControlRequest
 * @return UpdateEnsSaleControlResponse
 */
UpdateEnsSaleControlResponse Client::updateEnsSaleControl(const UpdateEnsSaleControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnsSaleControlWithOptions(request, runtime);
}

/**
 * @summary Updates the image of an Android in Container (AIC) instance.
 *
 * @param tmpReq UpgradeAICInstanceImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeAICInstanceImageResponse
 */
UpgradeAICInstanceImageResponse Client::upgradeAICInstanceImageWithOptions(const UpgradeAICInstanceImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradeAICInstanceImageShrinkRequest request = UpgradeAICInstanceImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerIds()) {
    request.setServerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerIds(), "ServerIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeAICInstanceImage"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeAICInstanceImageResponse>();
}

/**
 * @summary Updates the image of an Android in Container (AIC) instance.
 *
 * @param request UpgradeAICInstanceImageRequest
 * @return UpgradeAICInstanceImageResponse
 */
UpgradeAICInstanceImageResponse Client::upgradeAICInstanceImage(const UpgradeAICInstanceImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeAICInstanceImageWithOptions(request, runtime);
}

/**
 * @summary Updates the container in an asynchronous manner. You can configure multiple canary release policies.
 *
 * @param request UpgradeApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeApplicationResponse
 */
UpgradeApplicationResponse Client::upgradeApplicationWithOptions(const UpgradeApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeApplication"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeApplicationResponse>();
}

/**
 * @summary Updates the container in an asynchronous manner. You can configure multiple canary release policies.
 *
 * @param request UpgradeApplicationRequest
 * @return UpgradeApplicationResponse
 */
UpgradeApplicationResponse Client::upgradeApplication(const UpgradeApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeApplicationWithOptions(request, runtime);
}

/**
 * @summary 升级集群实例组件
 *
 * @param tmpReq UpgradeClusterAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClusterAddonsResponse
 */
UpgradeClusterAddonsResponse Client::upgradeClusterAddonsWithOptions(const UpgradeClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradeClusterAddonsShrinkRequest request = UpgradeClusterAddonsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddons()) {
    request.setAddonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddons(), "Addons", "json"));
  }

  json query = {};
  if (!!request.hasAddonsShrink()) {
    query["Addons"] = request.getAddonsShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeClusterAddons"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClusterAddonsResponse>();
}

/**
 * @summary 升级集群实例组件
 *
 * @param request UpgradeClusterAddonsRequest
 * @return UpgradeClusterAddonsResponse
 */
UpgradeClusterAddonsResponse Client::upgradeClusterAddons(const UpgradeClusterAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeClusterAddonsWithOptions(request, runtime);
}

/**
 * @summary Upload a new AIC public key.
 *
 * @param request UploadAICPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAICPublicKeyResponse
 */
UploadAICPublicKeyResponse Client::uploadAICPublicKeyWithOptions(const UploadAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadAICPublicKey"},
    {"version" , "2017-11-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadAICPublicKeyResponse>();
}

/**
 * @summary Upload a new AIC public key.
 *
 * @param request UploadAICPublicKeyRequest
 * @return UploadAICPublicKeyResponse
 */
UploadAICPublicKeyResponse Client::uploadAICPublicKey(const UploadAICPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadAICPublicKeyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ens20171110