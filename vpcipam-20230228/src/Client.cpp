#include <darabonba/Core.hpp>
#include <alibabacloud/VpcIpam20230228.hpp>
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
using namespace AlibabaCloud::VpcIpam20230228::Models;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{

AlibabaCloud::VpcIpam20230228::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("vpcipam", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加ipam可信服务纳管成员
 *
 * @param request AddIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpamMembersResponse
 */
AddIpamMembersResponse Client::addIpamMembersWithOptions(const AddIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIpamMembers"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIpamMembersResponse>();
}

/**
 * @summary 添加ipam可信服务纳管成员
 *
 * @param request AddIpamMembersRequest
 * @return AddIpamMembersResponse
 */
AddIpamMembersResponse Client::addIpamMembers(const AddIpamMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpamMembersWithOptions(request, runtime);
}

/**
 * @summary Provisions a CIDR block to an IP Address Manager (IPAM) pool.
 *
 * @description *   Before you provision a CIDR block, make sure that an IPAM pool is created. You can call the **CreateIpamPool** operation to create an IPAM pool.
 * *   If no CIDR block is provisioned to a parent pool, you cannot provision CIDR blocks to its subpools.
 * *   If a CIDR block is provisioned to a parent pool, you can provision CIDR blocks to its subpools and the CIDR blocks must be subsets of the CIDR block provisioned to the parent pool.
 * *   If a CIDR block is provisioned to a parent pool and allocations are created, CIDR blocks provisioned to its subpools cannot overlap with existing allocated CIDR blocks.
 * *   You can provision CIDR blocks to a pool only in the region where the IPAM is hosted.
 * *   CIDR blocks provisioned to an IPAM pool cannot overlap with the CIDR blocks provisioned to other pools in the same scope.
 * *   A maximum of 1 CIDR block can be provisioned to a public IPv6 top-level pool, while up to 50 CIDR blocks can be provisioned to other types of address pools.
 *
 * @param request AddIpamPoolCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpamPoolCidrResponse
 */
AddIpamPoolCidrResponse Client::addIpamPoolCidrWithOptions(const AddIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasNetmaskLength()) {
    query["NetmaskLength"] = request.netmaskLength();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIpamPoolCidr"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIpamPoolCidrResponse>();
}

/**
 * @summary Provisions a CIDR block to an IP Address Manager (IPAM) pool.
 *
 * @description *   Before you provision a CIDR block, make sure that an IPAM pool is created. You can call the **CreateIpamPool** operation to create an IPAM pool.
 * *   If no CIDR block is provisioned to a parent pool, you cannot provision CIDR blocks to its subpools.
 * *   If a CIDR block is provisioned to a parent pool, you can provision CIDR blocks to its subpools and the CIDR blocks must be subsets of the CIDR block provisioned to the parent pool.
 * *   If a CIDR block is provisioned to a parent pool and allocations are created, CIDR blocks provisioned to its subpools cannot overlap with existing allocated CIDR blocks.
 * *   You can provision CIDR blocks to a pool only in the region where the IPAM is hosted.
 * *   CIDR blocks provisioned to an IPAM pool cannot overlap with the CIDR blocks provisioned to other pools in the same scope.
 * *   A maximum of 1 CIDR block can be provisioned to a public IPv6 top-level pool, while up to 50 CIDR blocks can be provisioned to other types of address pools.
 *
 * @param request AddIpamPoolCidrRequest
 * @return AddIpamPoolCidrResponse
 */
AddIpamPoolCidrResponse Client::addIpamPoolCidr(const AddIpamPoolCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpamPoolCidrWithOptions(request, runtime);
}

/**
 * @summary Associates resource discovery with an IPAM instance.
 *
 * @description *   The specified resource discovery instance can only be associated with one IPAM instance and associations cannot be duplicated.
 *
 * @param request AssociateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateIpamResourceDiscoveryResponse
 */
AssociateIpamResourceDiscoveryResponse Client::associateIpamResourceDiscoveryWithOptions(const AssociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateIpamResourceDiscovery"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateIpamResourceDiscoveryResponse>();
}

/**
 * @summary Associates resource discovery with an IPAM instance.
 *
 * @description *   The specified resource discovery instance can only be associated with one IPAM instance and associations cannot be duplicated.
 *
 * @param request AssociateIpamResourceDiscoveryRequest
 * @return AssociateIpamResourceDiscoveryResponse
 */
AssociateIpamResourceDiscoveryResponse Client::associateIpamResourceDiscovery(const AssociateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group of an IPAM resource.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of an IPAM resource.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an IP Address Manager (IPAM).
 *
 * @description - You can create only one IPAM with each Alibaba Cloud account in each region.
 * - Only IPv4 IP addresses can be allocated.
 * - When you create an IPAM instance:
 *     - If there is no custom resource discovery in the region, the system creates a default resource discovery associated with the IPAM instance.
 *     - If there is a custom resource discovery in the region, the system converts it to a default resource discovery and associates it with the IPAM instance.
 *
 * @param request CreateIpamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamResponse
 */
CreateIpamResponse Client::createIpamWithOptions(const CreateIpamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamDescription()) {
    query["IpamDescription"] = request.ipamDescription();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.ipamName();
  }

  if (!!request.hasOperatingRegionList()) {
    query["OperatingRegionList"] = request.operatingRegionList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpam"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpamResponse>();
}

/**
 * @summary Creates an IP Address Manager (IPAM).
 *
 * @description - You can create only one IPAM with each Alibaba Cloud account in each region.
 * - Only IPv4 IP addresses can be allocated.
 * - When you create an IPAM instance:
 *     - If there is no custom resource discovery in the region, the system creates a default resource discovery associated with the IPAM instance.
 *     - If there is a custom resource discovery in the region, the system converts it to a default resource discovery and associates it with the IPAM instance.
 *
 * @param request CreateIpamRequest
 * @return CreateIpamResponse
 */
CreateIpamResponse Client::createIpam(const CreateIpamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamWithOptions(request, runtime);
}

/**
 * @summary Creates an IP Address Manager (IPAM) pool.
 *
 * @description The number of public IPv6 IPAM top pool for a specific ISP that a user is allowed to create per region is limited to 1.
 *
 * @param request CreateIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamPoolResponse
 */
CreateIpamPoolResponse Client::createIpamPoolWithOptions(const CreateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationDefaultCidrMask()) {
    query["AllocationDefaultCidrMask"] = request.allocationDefaultCidrMask();
  }

  if (!!request.hasAllocationMaxCidrMask()) {
    query["AllocationMaxCidrMask"] = request.allocationMaxCidrMask();
  }

  if (!!request.hasAllocationMinCidrMask()) {
    query["AllocationMinCidrMask"] = request.allocationMinCidrMask();
  }

  if (!!request.hasAutoImport()) {
    query["AutoImport"] = request.autoImport();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasIpamPoolDescription()) {
    query["IpamPoolDescription"] = request.ipamPoolDescription();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.ipamPoolName();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.ipamScopeId();
  }

  if (!!request.hasIpv6Isp()) {
    query["Ipv6Isp"] = request.ipv6Isp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolRegionId()) {
    query["PoolRegionId"] = request.poolRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceIpamPoolId()) {
    query["SourceIpamPoolId"] = request.sourceIpamPoolId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpamPool"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpamPoolResponse>();
}

/**
 * @summary Creates an IP Address Manager (IPAM) pool.
 *
 * @description The number of public IPv6 IPAM top pool for a specific ISP that a user is allowed to create per region is limited to 1.
 *
 * @param request CreateIpamPoolRequest
 * @return CreateIpamPoolResponse
 */
CreateIpamPoolResponse Client::createIpamPool(const CreateIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Reserves a custom CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @description *   Before you reserve a custom CIDR block, make sure that an IPAM pool is created and CIDR blocks are added to the pool. You can call **CreateIpamPool** to create an IPAM pool and call **AddIpamPoolCidr** to add CIDR blocks to the pool.
 * *   When you specify Cidr or CidrMask to reserve a custom CIDR block, the mask must fall within the range specified by the IPAM pool.
 * *   If the IPAM pool has the region attribute, you must reserve a custom CIDR block in the region to which the IPAM pool belongs.
 * *   The custom CIDR block that you want to reserve cannot overlap with existing CIDR blocks created from the IPAM pool.
 *
 * @param request CreateIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamPoolAllocationResponse
 */
CreateIpamPoolAllocationResponse Client::createIpamPoolAllocationWithOptions(const CreateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasCidrMask()) {
    query["CidrMask"] = request.cidrMask();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolAllocationDescription()) {
    query["IpamPoolAllocationDescription"] = request.ipamPoolAllocationDescription();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.ipamPoolAllocationName();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpamPoolAllocation"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpamPoolAllocationResponse>();
}

/**
 * @summary Reserves a custom CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @description *   Before you reserve a custom CIDR block, make sure that an IPAM pool is created and CIDR blocks are added to the pool. You can call **CreateIpamPool** to create an IPAM pool and call **AddIpamPoolCidr** to add CIDR blocks to the pool.
 * *   When you specify Cidr or CidrMask to reserve a custom CIDR block, the mask must fall within the range specified by the IPAM pool.
 * *   If the IPAM pool has the region attribute, you must reserve a custom CIDR block in the region to which the IPAM pool belongs.
 * *   The custom CIDR block that you want to reserve cannot overlap with existing CIDR blocks created from the IPAM pool.
 *
 * @param request CreateIpamPoolAllocationRequest
 * @return CreateIpamPoolAllocationResponse
 */
CreateIpamPoolAllocationResponse Client::createIpamPoolAllocation(const CreateIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Creates a custom resource discovery instance.
 *
 * @description *   Each Alibaba Cloud account can create only one resource discovery instance in each region.
 * *   You can create only custom resource discovery instances.
 *
 * @param request CreateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamResourceDiscoveryResponse
 */
CreateIpamResourceDiscoveryResponse Client::createIpamResourceDiscoveryWithOptions(const CreateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamResourceDiscoveryDescription()) {
    query["IpamResourceDiscoveryDescription"] = request.ipamResourceDiscoveryDescription();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.ipamResourceDiscoveryName();
  }

  if (!!request.hasOperatingRegionList()) {
    query["OperatingRegionList"] = request.operatingRegionList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpamResourceDiscovery"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpamResourceDiscoveryResponse>();
}

/**
 * @summary Creates a custom resource discovery instance.
 *
 * @description *   Each Alibaba Cloud account can create only one resource discovery instance in each region.
 * *   You can create only custom resource discovery instances.
 *
 * @param request CreateIpamResourceDiscoveryRequest
 * @return CreateIpamResourceDiscoveryResponse
 */
CreateIpamResourceDiscoveryResponse Client::createIpamResourceDiscovery(const CreateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Creates a public scope and private scope to respectively manage public and private IP addresses.
 *
 * @param request CreateIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamScopeResponse
 */
CreateIpamScopeResponse Client::createIpamScopeWithOptions(const CreateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamScopeDescription()) {
    query["IpamScopeDescription"] = request.ipamScopeDescription();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.ipamScopeName();
  }

  if (!!request.hasIpamScopeType()) {
    query["IpamScopeType"] = request.ipamScopeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpamScope"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpamScopeResponse>();
}

/**
 * @summary Creates a public scope and private scope to respectively manage public and private IP addresses.
 *
 * @param request CreateIpamScopeRequest
 * @return CreateIpamScopeResponse
 */
CreateIpamScopeResponse Client::createIpamScope(const CreateIpamScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamScopeWithOptions(request, runtime);
}

/**
 * @summary Deletes an IP Address Manager (IPAM).
 *
 * @description ## [](#)Prerequisites
 * *   Before you delete an IPAM, make sure that all IPAM pools of the IPAM are deleted. You can call **DeleteIpamPool** to delete IPAM pools.
 * *   Before you delete an IPAM, make sure that all IPAM scopes of the IPAM are deleted. You can call **DeleteIpamScope** to delete IPAM scopes.
 *
 * @param request DeleteIpamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamResponse
 */
DeleteIpamResponse Client::deleteIpamWithOptions(const DeleteIpamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpam"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamResponse>();
}

/**
 * @summary Deletes an IP Address Manager (IPAM).
 *
 * @description ## [](#)Prerequisites
 * *   Before you delete an IPAM, make sure that all IPAM pools of the IPAM are deleted. You can call **DeleteIpamPool** to delete IPAM pools.
 * *   Before you delete an IPAM, make sure that all IPAM scopes of the IPAM are deleted. You can call **DeleteIpamScope** to delete IPAM scopes.
 *
 * @param request DeleteIpamRequest
 * @return DeleteIpamResponse
 */
DeleteIpamResponse Client::deleteIpam(const DeleteIpamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamWithOptions(request, runtime);
}

/**
 * @summary Deletes an IP Address Manager (IPAM) scope.
 *
 * @description ### [](#)Usage notes
 * *   Before you delete a parent pool, make sure that all subpools of the parent pool are deleted.
 * *   If an effective region is specified for a parent pool and IP addresses are allocated from the parent pool, you cannot delete the parent pool.
 * *   If an effective region is specified for a subpool and IP addresses are allocated from the subpool, you cannot delete the subpool.
 *
 * @param request DeleteIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolResponse
 */
DeleteIpamPoolResponse Client::deleteIpamPoolWithOptions(const DeleteIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpamPool"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamPoolResponse>();
}

/**
 * @summary Deletes an IP Address Manager (IPAM) scope.
 *
 * @description ### [](#)Usage notes
 * *   Before you delete a parent pool, make sure that all subpools of the parent pool are deleted.
 * *   If an effective region is specified for a parent pool and IP addresses are allocated from the parent pool, you cannot delete the parent pool.
 * *   If an effective region is specified for a subpool and IP addresses are allocated from the subpool, you cannot delete the subpool.
 *
 * @param request DeleteIpamPoolRequest
 * @return DeleteIpamPoolResponse
 */
DeleteIpamPoolResponse Client::deleteIpamPool(const DeleteIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom reserved CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @param request DeleteIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolAllocationResponse
 */
DeleteIpamPoolAllocationResponse Client::deleteIpamPoolAllocationWithOptions(const DeleteIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolAllocationId()) {
    query["IpamPoolAllocationId"] = request.ipamPoolAllocationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpamPoolAllocation"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamPoolAllocationResponse>();
}

/**
 * @summary Deletes a custom reserved CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @param request DeleteIpamPoolAllocationRequest
 * @return DeleteIpamPoolAllocationResponse
 */
DeleteIpamPoolAllocationResponse Client::deleteIpamPoolAllocation(const DeleteIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Deletes a CIDR block provisioned to an IP Address Manager (IPAM) pool.
 *
 * @description *   If CIDR blocks are provisioned to a parent pool and its subpools, you must first delete the CIDR blocks provisioned to the subpools before you delete the ones provisioned to the parent pool.
 * *   If CIDR blocks are provisioned only to the parent pool, directly delete them.
 * *   If CIDR blocks are allocated from provisioned ones, you must first delete the allocated CIDR blocks before you delete the provisioned ones.
 * *   You can delete CIDR blocks provisioned to an IPAM pool only in the region where the IPAM is hosted.
 *
 * @param request DeleteIpamPoolCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolCidrResponse
 */
DeleteIpamPoolCidrResponse Client::deleteIpamPoolCidrWithOptions(const DeleteIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpamPoolCidr"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamPoolCidrResponse>();
}

/**
 * @summary Deletes a CIDR block provisioned to an IP Address Manager (IPAM) pool.
 *
 * @description *   If CIDR blocks are provisioned to a parent pool and its subpools, you must first delete the CIDR blocks provisioned to the subpools before you delete the ones provisioned to the parent pool.
 * *   If CIDR blocks are provisioned only to the parent pool, directly delete them.
 * *   If CIDR blocks are allocated from provisioned ones, you must first delete the allocated CIDR blocks before you delete the provisioned ones.
 * *   You can delete CIDR blocks provisioned to an IPAM pool only in the region where the IPAM is hosted.
 *
 * @param request DeleteIpamPoolCidrRequest
 * @return DeleteIpamPoolCidrResponse
 */
DeleteIpamPoolCidrResponse Client::deleteIpamPoolCidr(const DeleteIpamPoolCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolCidrWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom resource discovery instance.
 *
 * @description *   If a resource discovery instance is shared, it cannot be deleted.
 *
 * @param request DeleteIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamResourceDiscoveryResponse
 */
DeleteIpamResourceDiscoveryResponse Client::deleteIpamResourceDiscoveryWithOptions(const DeleteIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpamResourceDiscovery"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamResourceDiscoveryResponse>();
}

/**
 * @summary Deletes a custom resource discovery instance.
 *
 * @description *   If a resource discovery instance is shared, it cannot be deleted.
 *
 * @param request DeleteIpamResourceDiscoveryRequest
 * @return DeleteIpamResourceDiscoveryResponse
 */
DeleteIpamResourceDiscoveryResponse Client::deleteIpamResourceDiscovery(const DeleteIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Deletes an IP Address Manager (IPAM) scope.
 *
 * @description ### [](#)Usage notes
 * *   You cannot delete the private scope and public scope created by the system.
 * *   Before you delete an IPAM scope, make sure that all pools within the scope are deleted. You can call **DeleteIpamPool** to delete IPAM pools.
 *
 * @param request DeleteIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamScopeResponse
 */
DeleteIpamScopeResponse Client::deleteIpamScopeWithOptions(const DeleteIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.ipamScopeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpamScope"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpamScopeResponse>();
}

/**
 * @summary Deletes an IP Address Manager (IPAM) scope.
 *
 * @description ### [](#)Usage notes
 * *   You cannot delete the private scope and public scope created by the system.
 * *   Before you delete an IPAM scope, make sure that all pools within the scope are deleted. You can call **DeleteIpamPool** to delete IPAM pools.
 *
 * @param request DeleteIpamScopeRequest
 * @return DeleteIpamScopeResponse
 */
DeleteIpamScopeResponse Client::deleteIpamScope(const DeleteIpamScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamScopeWithOptions(request, runtime);
}

/**
 * @summary Disassociates resource discovery and IPAM instances.
 *
 * @param request DissociateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateIpamResourceDiscoveryResponse
 */
DissociateIpamResourceDiscoveryResponse Client::dissociateIpamResourceDiscoveryWithOptions(const DissociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateIpamResourceDiscovery"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateIpamResourceDiscoveryResponse>();
}

/**
 * @summary Disassociates resource discovery and IPAM instances.
 *
 * @param request DissociateIpamResourceDiscoveryRequest
 * @return DissociateIpamResourceDiscoveryResponse
 */
DissociateIpamResourceDiscoveryResponse Client::dissociateIpamResourceDiscovery(const DissociateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request GetIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpamPoolAllocationResponse
 */
GetIpamPoolAllocationResponse Client::getIpamPoolAllocationWithOptions(const GetIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIpamPoolAllocation"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIpamPoolAllocationResponse>();
}

/**
 * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request GetIpamPoolAllocationRequest
 * @return GetIpamPoolAllocationResponse
 */
GetIpamPoolAllocationResponse Client::getIpamPoolAllocation(const GetIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Gets the available CIDR blocks of the IPAM pool.
 *
 * @param request GetIpamPoolNextAvailableCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpamPoolNextAvailableCidrResponse
 */
GetIpamPoolNextAvailableCidrResponse Client::getIpamPoolNextAvailableCidrWithOptions(const GetIpamPoolNextAvailableCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIpamPoolNextAvailableCidr"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIpamPoolNextAvailableCidrResponse>();
}

/**
 * @summary Gets the available CIDR blocks of the IPAM pool.
 *
 * @param request GetIpamPoolNextAvailableCidrRequest
 * @return GetIpamPoolNextAvailableCidrResponse
 */
GetIpamPoolNextAvailableCidrResponse Client::getIpamPoolNextAvailableCidr(const GetIpamPoolNextAvailableCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpamPoolNextAvailableCidrWithOptions(request, runtime);
}

/**
 * @summary Queries whether IP Address Manager (IPAM) is activated.
 *
 * @param request GetVpcIpamServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcIpamServiceStatusResponse
 */
GetVpcIpamServiceStatusResponse Client::getVpcIpamServiceStatusWithOptions(const GetVpcIpamServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVpcIpamServiceStatus"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpcIpamServiceStatusResponse>();
}

/**
 * @summary Queries whether IP Address Manager (IPAM) is activated.
 *
 * @param request GetVpcIpamServiceStatusRequest
 * @return GetVpcIpamServiceStatusResponse
 */
GetVpcIpamServiceStatusResponse Client::getVpcIpamServiceStatus(const GetVpcIpamServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcIpamServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries discovered resources.
 *
 * @param request ListIpamDiscoveredResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamDiscoveredResourceResponse
 */
ListIpamDiscoveredResourceResponse Client::listIpamDiscoveredResourceWithOptions(const ListIpamDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
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

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamDiscoveredResource"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamDiscoveredResourceResponse>();
}

/**
 * @summary Queries discovered resources.
 *
 * @param request ListIpamDiscoveredResourceRequest
 * @return ListIpamDiscoveredResourceResponse
 */
ListIpamDiscoveredResourceResponse Client::listIpamDiscoveredResource(const ListIpamDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary 查询ipam可信服务纳管成员
 *
 * @param request ListIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamMembersResponse
 */
ListIpamMembersResponse Client::listIpamMembersWithOptions(const ListIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.memberIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamMembers"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamMembersResponse>();
}

/**
 * @summary 查询ipam可信服务纳管成员
 *
 * @param request ListIpamMembersRequest
 * @return ListIpamMembersResponse
 */
ListIpamMembersResponse Client::listIpamMembers(const ListIpamMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamMembersWithOptions(request, runtime);
}

/**
 * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamPoolAllocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolAllocationsResponse
 */
ListIpamPoolAllocationsResponse Client::listIpamPoolAllocationsWithOptions(const ListIpamPoolAllocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasIpamPoolAllocationIds()) {
    query["IpamPoolAllocationIds"] = request.ipamPoolAllocationIds();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.ipamPoolAllocationName();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamPoolAllocations"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamPoolAllocationsResponse>();
}

/**
 * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamPoolAllocationsRequest
 * @return ListIpamPoolAllocationsResponse
 */
ListIpamPoolAllocationsResponse Client::listIpamPoolAllocations(const ListIpamPoolAllocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolAllocationsWithOptions(request, runtime);
}

/**
 * @summary Queries CIDR blocks provisioned to an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamPoolCidrsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolCidrsResponse
 */
ListIpamPoolCidrsResponse Client::listIpamPoolCidrsWithOptions(const ListIpamPoolCidrsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamPoolCidrs"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamPoolCidrsResponse>();
}

/**
 * @summary Queries CIDR blocks provisioned to an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamPoolCidrsRequest
 * @return ListIpamPoolCidrsResponse
 */
ListIpamPoolCidrsResponse Client::listIpamPoolCidrs(const ListIpamPoolCidrsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolCidrsWithOptions(request, runtime);
}

/**
 * @summary Queries IP Address Manager (IPAM) pools.
 *
 * @param request ListIpamPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolsResponse
 */
ListIpamPoolsResponse Client::listIpamPoolsWithOptions(const ListIpamPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasIpamPoolIds()) {
    query["IpamPoolIds"] = request.ipamPoolIds();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.ipamPoolName();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.ipamScopeId();
  }

  if (!!request.hasIpv6Isp()) {
    query["Ipv6Isp"] = request.ipv6Isp();
  }

  if (!!request.hasIsShared()) {
    query["IsShared"] = request.isShared();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolRegionId()) {
    query["PoolRegionId"] = request.poolRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceIpamPoolId()) {
    query["SourceIpamPoolId"] = request.sourceIpamPoolId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamPools"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamPoolsResponse>();
}

/**
 * @summary Queries IP Address Manager (IPAM) pools.
 *
 * @param request ListIpamPoolsRequest
 * @return ListIpamPoolsResponse
 */
ListIpamPoolsResponse Client::listIpamPools(const ListIpamPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolsWithOptions(request, runtime);
}

/**
 * @summary Queries resources in an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamResourceCidrsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceCidrsResponse
 */
ListIpamResourceCidrsResponse Client::listIpamResourceCidrsWithOptions(const ListIpamResourceCidrsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.ipamScopeId();
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

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamResourceCidrs"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamResourceCidrsResponse>();
}

/**
 * @summary Queries resources in an IP Address Manager (IPAM) pool.
 *
 * @param request ListIpamResourceCidrsRequest
 * @return ListIpamResourceCidrsResponse
 */
ListIpamResourceCidrsResponse Client::listIpamResourceCidrs(const ListIpamResourceCidrsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceCidrsWithOptions(request, runtime);
}

/**
 * @summary Queries IPAM resource discovery instances.
 *
 * @param request ListIpamResourceDiscoveriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceDiscoveriesResponse
 */
ListIpamResourceDiscoveriesResponse Client::listIpamResourceDiscoveriesWithOptions(const ListIpamResourceDiscoveriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamResourceDiscoveryIds()) {
    query["IpamResourceDiscoveryIds"] = request.ipamResourceDiscoveryIds();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.ipamResourceDiscoveryName();
  }

  if (!!request.hasIsShared()) {
    query["IsShared"] = request.isShared();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamResourceDiscoveries"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamResourceDiscoveriesResponse>();
}

/**
 * @summary Queries IPAM resource discovery instances.
 *
 * @param request ListIpamResourceDiscoveriesRequest
 * @return ListIpamResourceDiscoveriesResponse
 */
ListIpamResourceDiscoveriesResponse Client::listIpamResourceDiscoveries(const ListIpamResourceDiscoveriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceDiscoveriesWithOptions(request, runtime);
}

/**
 * @summary Queries the association between resource discovery and IPAM.
 *
 * @param request ListIpamResourceDiscoveryAssociationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceDiscoveryAssociationsResponse
 */
ListIpamResourceDiscoveryAssociationsResponse Client::listIpamResourceDiscoveryAssociationsWithOptions(const ListIpamResourceDiscoveryAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamResourceDiscoveryAssociations"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamResourceDiscoveryAssociationsResponse>();
}

/**
 * @summary Queries the association between resource discovery and IPAM.
 *
 * @param request ListIpamResourceDiscoveryAssociationsRequest
 * @return ListIpamResourceDiscoveryAssociationsResponse
 */
ListIpamResourceDiscoveryAssociationsResponse Client::listIpamResourceDiscoveryAssociations(const ListIpamResourceDiscoveryAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceDiscoveryAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries IP Address Manager (IPAM) scopes.
 *
 * @param request ListIpamScopesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamScopesResponse
 */
ListIpamScopesResponse Client::listIpamScopesWithOptions(const ListIpamScopesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamScopeIds()) {
    query["IpamScopeIds"] = request.ipamScopeIds();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.ipamScopeName();
  }

  if (!!request.hasIpamScopeType()) {
    query["IpamScopeType"] = request.ipamScopeType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamScopes"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamScopesResponse>();
}

/**
 * @summary Queries IP Address Manager (IPAM) scopes.
 *
 * @param request ListIpamScopesRequest
 * @return ListIpamScopesResponse
 */
ListIpamScopesResponse Client::listIpamScopes(const ListIpamScopesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamScopesWithOptions(request, runtime);
}

/**
 * @summary Queries IP Address Managers (IPAMs).
 *
 * @param request ListIpamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamsResponse
 */
ListIpamsResponse Client::listIpamsWithOptions(const ListIpamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamIds()) {
    query["IpamIds"] = request.ipamIds();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.ipamName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpams"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamsResponse>();
}

/**
 * @summary Queries IP Address Managers (IPAMs).
 *
 * @param request ListIpamsRequest
 * @return ListIpamsResponse
 */
ListIpamsResponse Client::listIpams(const ListIpamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resource tags.
 *
 * @description ### [](#)Usage notes
 * *   You must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object that you want to query.
 * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
 * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"version" , "2023-02-28"},
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
 * @summary Queries a list of resource tags.
 *
 * @description ### [](#)Usage notes
 * *   You must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object that you want to query.
 * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
 * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
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
 * @summary Activates IP Address Manager (IPAM).
 *
 * @param request OpenVpcIpamServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenVpcIpamServiceResponse
 */
OpenVpcIpamServiceResponse Client::openVpcIpamServiceWithOptions(const OpenVpcIpamServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenVpcIpamService"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenVpcIpamServiceResponse>();
}

/**
 * @summary Activates IP Address Manager (IPAM).
 *
 * @param request OpenVpcIpamServiceRequest
 * @return OpenVpcIpamServiceResponse
 */
OpenVpcIpamServiceResponse Client::openVpcIpamService(const OpenVpcIpamServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVpcIpamServiceWithOptions(request, runtime);
}

/**
 * @summary 移除ipam可信服务纳管成员
 *
 * @param request RemoveIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveIpamMembersResponse
 */
RemoveIpamMembersResponse Client::removeIpamMembersWithOptions(const RemoveIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveIpamMembers"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveIpamMembersResponse>();
}

/**
 * @summary 移除ipam可信服务纳管成员
 *
 * @param request RemoveIpamMembersRequest
 * @return RemoveIpamMembersResponse
 */
RemoveIpamMembersResponse Client::removeIpamMembers(const RemoveIpamMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeIpamMembersWithOptions(request, runtime);
}

/**
 * @summary Adds a tag to a resource.
 *
 * @description ### [](#)Usage notes
 * Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following items:
 * *   Each tag key that is added to an instance must be unique.
 * *   You cannot create tags without adding them to instances. All tags must be added to instances.
 * *   You can add at most 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"version" , "2023-02-28"},
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
 * @summary Adds a tag to a resource.
 *
 * @description ### [](#)Usage notes
 * Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following items:
 * *   Each tag key that is added to an instance must be unique.
 * *   You cannot create tags without adding them to instances. All tags must be added to instances.
 * *   You can add at most 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes a tag from a resource.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"action" , "UntagResources"},
    {"version" , "2023-02-28"},
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
 * @summary Removes a tag from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates an IP Address Manager (IPAM).
 *
 * @param request UpdateIpamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamResponse
 */
UpdateIpamResponse Client::updateIpamWithOptions(const UpdateIpamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddOperatingRegion()) {
    query["AddOperatingRegion"] = request.addOperatingRegion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamDescription()) {
    query["IpamDescription"] = request.ipamDescription();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.ipamId();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.ipamName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemoveOperatingRegion()) {
    query["RemoveOperatingRegion"] = request.removeOperatingRegion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpam"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpamResponse>();
}

/**
 * @summary Updates an IP Address Manager (IPAM).
 *
 * @param request UpdateIpamRequest
 * @return UpdateIpamResponse
 */
UpdateIpamResponse Client::updateIpam(const UpdateIpamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about an IP Address Manager (IPAM) pool.
 *
 * @param request UpdateIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamPoolResponse
 */
UpdateIpamPoolResponse Client::updateIpamPoolWithOptions(const UpdateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationDefaultCidrMask()) {
    query["AllocationDefaultCidrMask"] = request.allocationDefaultCidrMask();
  }

  if (!!request.hasAllocationMaxCidrMask()) {
    query["AllocationMaxCidrMask"] = request.allocationMaxCidrMask();
  }

  if (!!request.hasAllocationMinCidrMask()) {
    query["AllocationMinCidrMask"] = request.allocationMinCidrMask();
  }

  if (!!request.hasAutoImport()) {
    query["AutoImport"] = request.autoImport();
  }

  if (!!request.hasClearAllocationDefaultCidrMask()) {
    query["ClearAllocationDefaultCidrMask"] = request.clearAllocationDefaultCidrMask();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolDescription()) {
    query["IpamPoolDescription"] = request.ipamPoolDescription();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.ipamPoolId();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.ipamPoolName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpamPool"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpamPoolResponse>();
}

/**
 * @summary Modifies the basic information about an IP Address Manager (IPAM) pool.
 *
 * @param request UpdateIpamPoolRequest
 * @return UpdateIpamPoolResponse
 */
UpdateIpamPoolResponse Client::updateIpamPool(const UpdateIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Modifies CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request UpdateIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamPoolAllocationResponse
 */
UpdateIpamPoolAllocationResponse Client::updateIpamPoolAllocationWithOptions(const UpdateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamPoolAllocationDescription()) {
    query["IpamPoolAllocationDescription"] = request.ipamPoolAllocationDescription();
  }

  if (!!request.hasIpamPoolAllocationId()) {
    query["IpamPoolAllocationId"] = request.ipamPoolAllocationId();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.ipamPoolAllocationName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpamPoolAllocation"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpamPoolAllocationResponse>();
}

/**
 * @summary Modifies CIDR block allocations of an IP Address Manager (IPAM) pool.
 *
 * @param request UpdateIpamPoolAllocationRequest
 * @return UpdateIpamPoolAllocationResponse
 */
UpdateIpamPoolAllocationResponse Client::updateIpamPoolAllocation(const UpdateIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Modifies a resource discovery instance.
 *
 * @description *   You can add or remove effective regions only for custom resource discovery instances.
 * *   When removing effective regions from a resource discovery instance, the hosted region cannot be included.
 *
 * @param request UpdateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamResourceDiscoveryResponse
 */
UpdateIpamResourceDiscoveryResponse Client::updateIpamResourceDiscoveryWithOptions(const UpdateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddOperatingRegion()) {
    query["AddOperatingRegion"] = request.addOperatingRegion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamResourceDiscoveryDescription()) {
    query["IpamResourceDiscoveryDescription"] = request.ipamResourceDiscoveryDescription();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.ipamResourceDiscoveryId();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.ipamResourceDiscoveryName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemoveOperatingRegion()) {
    query["RemoveOperatingRegion"] = request.removeOperatingRegion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpamResourceDiscovery"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpamResourceDiscoveryResponse>();
}

/**
 * @summary Modifies a resource discovery instance.
 *
 * @description *   You can add or remove effective regions only for custom resource discovery instances.
 * *   When removing effective regions from a resource discovery instance, the hosted region cannot be included.
 *
 * @param request UpdateIpamResourceDiscoveryRequest
 * @return UpdateIpamResourceDiscoveryResponse
 */
UpdateIpamResourceDiscoveryResponse Client::updateIpamResourceDiscovery(const UpdateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about an IP Address Manager (IPAM) scope.
 *
 * @param request UpdateIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamScopeResponse
 */
UpdateIpamScopeResponse Client::updateIpamScopeWithOptions(const UpdateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasIpamScopeDescription()) {
    query["IpamScopeDescription"] = request.ipamScopeDescription();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.ipamScopeId();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.ipamScopeName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpamScope"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpamScopeResponse>();
}

/**
 * @summary Modifies the basic information about an IP Address Manager (IPAM) scope.
 *
 * @param request UpdateIpamScopeRequest
 * @return UpdateIpamScopeResponse
 */
UpdateIpamScopeResponse Client::updateIpamScope(const UpdateIpamScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamScopeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace VpcIpam20230228