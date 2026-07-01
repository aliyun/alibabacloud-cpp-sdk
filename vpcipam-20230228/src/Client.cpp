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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "vpcipam.us-west-1.aliyuncs.com"},
    {"us-east-1" , "vpcipam.us-east-1.aliyuncs.com"},
    {"me-east-1" , "vpcipam.me-east-1.aliyuncs.com"},
    {"me-central-1" , "vpcipam.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "vpcipam.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "vpcipam.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "vpcipam.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "vpcipam.cn-wulanchabu.aliyuncs.com"},
    {"cn-wuhan-lr" , "vpcipam.cn-wuhan-lr.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "vpcipam.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "vpcipam.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "vpcipam.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "vpcipam.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "vpcipam.cn-qingdao.aliyuncs.com"},
    {"cn-nanjing" , "vpcipam.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "vpcipam.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "vpcipam.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "vpcipam.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "vpcipam.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "vpcipam.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "vpcipam.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "vpcipam.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "vpcipam.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "vpcipam.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "vpcipam.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "vpcipam.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "vpcipam.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "vpcipam.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "vpcipam.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "vpcipam.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "vpcipam.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "vpcipam.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "vpcipam.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds members to an IP Address Manager (IPAM).
 *
 * @description - Only the delegated administrator of an IPAM instance in a resource directory can perform multi-account management.
 * - An IPAM delegated administrator can use an IPAM instance in only one region for multi-account management. A maximum of 1,000 member accounts can be added.
 *   >Notice: 
 *   If you add a folder as a member, the system counts all member accounts of the resource directory that are in the folder.
 *   
 * - Members can be of the Folder or Account type.
 *   - Folder: The delegated IPAM administrator can view IP usage in the IPAM effective region for all resource directory member accounts in the folder.
 *   - Account: The delegated IPAM administrator can view IP usage in the IPAM effective region for the specified resource directory member account.
 * - A managed member cannot share its resource discovery with the IPAM delegated administrator. The IPAM delegated administrator cannot add a member if that member has already shared its resource discovery.
 * - Adding the first member enables the IPAM trusted service for the resource directory.
 *
 * @param request AddIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpamMembersResponse
 */
AddIpamMembersResponse Client::addIpamMembersWithOptions(const AddIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.getMembers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Adds members to an IP Address Manager (IPAM).
 *
 * @description - Only the delegated administrator of an IPAM instance in a resource directory can perform multi-account management.
 * - An IPAM delegated administrator can use an IPAM instance in only one region for multi-account management. A maximum of 1,000 member accounts can be added.
 *   >Notice: 
 *   If you add a folder as a member, the system counts all member accounts of the resource directory that are in the folder.
 *   
 * - Members can be of the Folder or Account type.
 *   - Folder: The delegated IPAM administrator can view IP usage in the IPAM effective region for all resource directory member accounts in the folder.
 *   - Account: The delegated IPAM administrator can view IP usage in the IPAM effective region for the specified resource directory member account.
 * - A managed member cannot share its resource discovery with the IPAM delegated administrator. The IPAM delegated administrator cannot add a member if that member has already shared its resource discovery.
 * - Adding the first member enables the IPAM trusted service for the resource directory.
 *
 * @param request AddIpamMembersRequest
 * @return AddIpamMembersResponse
 */
AddIpamMembersResponse Client::addIpamMembers(const AddIpamMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpamMembersWithOptions(request, runtime);
}

/**
 * @summary Provisions a CIDR block for an IPAM pool.
 *
 * @description - Before provisioning a CIDR block, make sure that you have created an IPAM pool. You can call **CreateIpamPool** to create an IPAM pool.
 * - If the parent pool does not have a provisioned CIDR block, the subpool does not support CIDR block provisioning.
 * - If the parent pool has a provisioned CIDR block, the subpool can have a provisioned CIDR block, and the provisioned CIDR block must be a subset of the parent pool\\"s provisioned CIDR block.
 * - If the parent pool has a provisioned CIDR block and also has CIDR allocations, the CIDR block provisioned for the subpool must not conflict with the existing CIDR allocations.
 * - The request to provision a CIDR block for an IPAM pool must be initiated from the IPAM hosted region.
 * - The CIDR block provisioned for an IPAM pool must not conflict with CIDR blocks provisioned for other pools within the same scope.
 * - The number of CIDR blocks that can be provisioned for a pool is limited. The default maximum for a public IPv6 top-level pool is 1. The default maximum for other types of pools is 50.
 *
 * @param request AddIpamPoolCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpamPoolCidrResponse
 */
AddIpamPoolCidrResponse Client::addIpamPoolCidrWithOptions(const AddIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasNetmaskLength()) {
    query["NetmaskLength"] = request.getNetmaskLength();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Provisions a CIDR block for an IPAM pool.
 *
 * @description - Before provisioning a CIDR block, make sure that you have created an IPAM pool. You can call **CreateIpamPool** to create an IPAM pool.
 * - If the parent pool does not have a provisioned CIDR block, the subpool does not support CIDR block provisioning.
 * - If the parent pool has a provisioned CIDR block, the subpool can have a provisioned CIDR block, and the provisioned CIDR block must be a subset of the parent pool\\"s provisioned CIDR block.
 * - If the parent pool has a provisioned CIDR block and also has CIDR allocations, the CIDR block provisioned for the subpool must not conflict with the existing CIDR allocations.
 * - The request to provision a CIDR block for an IPAM pool must be initiated from the IPAM hosted region.
 * - The CIDR block provisioned for an IPAM pool must not conflict with CIDR blocks provisioned for other pools within the same scope.
 * - The number of CIDR blocks that can be provisioned for a pool is limited. The default maximum for a public IPv6 top-level pool is 1. The default maximum for other types of pools is 50.
 *
 * @param request AddIpamPoolCidrRequest
 * @return AddIpamPoolCidrResponse
 */
AddIpamPoolCidrResponse Client::addIpamPoolCidr(const AddIpamPoolCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpamPoolCidrWithOptions(request, runtime);
}

/**
 * @summary Associates a resource discovery with an IPAM instance.
 *
 * @description - You can associate a resource discovery instance with an IPAM instance only once.
 *
 * @param request AssociateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateIpamResourceDiscoveryResponse
 */
AssociateIpamResourceDiscoveryResponse Client::associateIpamResourceDiscoveryWithOptions(const AssociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Associates a resource discovery with an IPAM instance.
 *
 * @description - You can associate a resource discovery instance with an IPAM instance only once.
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
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamDescription()) {
    query["IpamDescription"] = request.getIpamDescription();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.getIpamName();
  }

  if (!!request.hasOperatingRegionList()) {
    query["OperatingRegionList"] = request.getOperatingRegionList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Create an IPAM address pool.
 *
 * @description - The default maximum number of public IPv6 top-level pools per ISP type per region is 1.
 *
 * @param request CreateIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamPoolResponse
 */
CreateIpamPoolResponse Client::createIpamPoolWithOptions(const CreateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationDefaultCidrMask()) {
    query["AllocationDefaultCidrMask"] = request.getAllocationDefaultCidrMask();
  }

  if (!!request.hasAllocationMaxCidrMask()) {
    query["AllocationMaxCidrMask"] = request.getAllocationMaxCidrMask();
  }

  if (!!request.hasAllocationMinCidrMask()) {
    query["AllocationMinCidrMask"] = request.getAllocationMinCidrMask();
  }

  if (!!request.hasAutoImport()) {
    query["AutoImport"] = request.getAutoImport();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIpamPoolDescription()) {
    query["IpamPoolDescription"] = request.getIpamPoolDescription();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.getIpamPoolName();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.getIpamScopeId();
  }

  if (!!request.hasIpv6Isp()) {
    query["Ipv6Isp"] = request.getIpv6Isp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolRegionId()) {
    query["PoolRegionId"] = request.getPoolRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceIpamPoolId()) {
    query["SourceIpamPoolId"] = request.getSourceIpamPoolId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Create an IPAM address pool.
 *
 * @description - The default maximum number of public IPv6 top-level pools per ISP type per region is 1.
 *
 * @param request CreateIpamPoolRequest
 * @return CreateIpamPoolResponse
 */
CreateIpamPoolResponse Client::createIpamPool(const CreateIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Creates a custom reserved CIDR block from an IPAM pool.
 *
 * @description - Before you create a custom reserved CIDR block, ensure that you have created an IPAM pool and added a CIDR block to it. You can call the **CreateIpamPool** operation to create an IPAM pool and the **AddIpamPoolCidr** operation to add a CIDR block to the pool.
 * - When you specify the Cidr or CidrMask parameter to create a custom reserved CIDR block, the mask must be within the range specified for the IPAM pool.
 * - If an IPAM pool has a region attribute, the request to create a custom reserved CIDR block must be initiated from the region where the pool is located.
 * - The custom reserved CIDR block must not conflict with existing CIDR block allocations in the IPAM pool.
 *
 * @param request CreateIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamPoolAllocationResponse
 */
CreateIpamPoolAllocationResponse Client::createIpamPoolAllocationWithOptions(const CreateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasCidrMask()) {
    query["CidrMask"] = request.getCidrMask();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolAllocationDescription()) {
    query["IpamPoolAllocationDescription"] = request.getIpamPoolAllocationDescription();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.getIpamPoolAllocationName();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates a custom reserved CIDR block from an IPAM pool.
 *
 * @description - Before you create a custom reserved CIDR block, ensure that you have created an IPAM pool and added a CIDR block to it. You can call the **CreateIpamPool** operation to create an IPAM pool and the **AddIpamPoolCidr** operation to add a CIDR block to the pool.
 * - When you specify the Cidr or CidrMask parameter to create a custom reserved CIDR block, the mask must be within the range specified for the IPAM pool.
 * - If an IPAM pool has a region attribute, the request to create a custom reserved CIDR block must be initiated from the region where the pool is located.
 * - The custom reserved CIDR block must not conflict with existing CIDR block allocations in the IPAM pool.
 *
 * @param request CreateIpamPoolAllocationRequest
 * @return CreateIpamPoolAllocationResponse
 */
CreateIpamPoolAllocationResponse Client::createIpamPoolAllocation(const CreateIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Creates a resource discovery instance of a custom type.
 *
 * @description - Each Alibaba Cloud account can have only one resource discovery instance in each region.
 * - This operation creates only resource discovery instances of a custom type.
 *
 * @param request CreateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamResourceDiscoveryResponse
 */
CreateIpamResourceDiscoveryResponse Client::createIpamResourceDiscoveryWithOptions(const CreateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamResourceDiscoveryDescription()) {
    query["IpamResourceDiscoveryDescription"] = request.getIpamResourceDiscoveryDescription();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.getIpamResourceDiscoveryName();
  }

  if (!!request.hasOperatingRegionList()) {
    query["OperatingRegionList"] = request.getOperatingRegionList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Creates a resource discovery instance of a custom type.
 *
 * @description - Each Alibaba Cloud account can have only one resource discovery instance in each region.
 * - This operation creates only resource discovery instances of a custom type.
 *
 * @param request CreateIpamResourceDiscoveryRequest
 * @return CreateIpamResourceDiscoveryResponse
 */
CreateIpamResourceDiscoveryResponse Client::createIpamResourceDiscovery(const CreateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Creates scopes for IPAM to manage private and public IP addresses.
 *
 * @param request CreateIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpamScopeResponse
 */
CreateIpamScopeResponse Client::createIpamScopeWithOptions(const CreateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamScopeDescription()) {
    query["IpamScopeDescription"] = request.getIpamScopeDescription();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.getIpamScopeName();
  }

  if (!!request.hasIpamScopeType()) {
    query["IpamScopeType"] = request.getIpamScopeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Creates scopes for IPAM to manage private and public IP addresses.
 *
 * @param request CreateIpamScopeRequest
 * @return CreateIpamScopeResponse
 */
CreateIpamScopeResponse Client::createIpamScope(const CreateIpamScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpamScopeWithOptions(request, runtime);
}

/**
 * @summary Deletes an IPAM instance.
 *
 * @description ## Prerequisites
 * - Before you delete an IPAM instance, ensure that all IPAM pools in the instance are deleted. You can call the **DeleteIpamPool** operation to delete the IPAM pools.
 * - Before you delete an IPAM instance, ensure that all custom IPAM scopes in the instance are deleted. You can call the **DeleteIpamScope** operation to delete the IPAM scopes.
 * - Before you delete an IPAM instance, ensure that the default resource discovery instance is not shared.
 * - Before you delete an IPAM instance, ensure that no shared resource discovery instances are associated with the IPAM instance.
 *
 * @param request DeleteIpamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamResponse
 */
DeleteIpamResponse Client::deleteIpamWithOptions(const DeleteIpamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes an IPAM instance.
 *
 * @description ## Prerequisites
 * - Before you delete an IPAM instance, ensure that all IPAM pools in the instance are deleted. You can call the **DeleteIpamPool** operation to delete the IPAM pools.
 * - Before you delete an IPAM instance, ensure that all custom IPAM scopes in the instance are deleted. You can call the **DeleteIpamScope** operation to delete the IPAM scopes.
 * - Before you delete an IPAM instance, ensure that the default resource discovery instance is not shared.
 * - Before you delete an IPAM instance, ensure that no shared resource discovery instances are associated with the IPAM instance.
 *
 * @param request DeleteIpamRequest
 * @return DeleteIpamResponse
 */
DeleteIpamResponse Client::deleteIpam(const DeleteIpamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamWithOptions(request, runtime);
}

/**
 * @summary Deletes an IPAM pool instance.
 *
 * @description ### Usage notes
 * - Before deleting a parent pool, make sure that all subpools under the parent pool have been deleted.
 * - When a parent pool has an effective region configured and has addresses that have already been allocated, the parent pool cannot be deleted.
 * - When a subpool has an effective region configured and has addresses that have already been allocated, the subpool cannot be deleted.
 * - When a pool has a sharing relationship, the pool cannot be deleted.
 *
 * @param request DeleteIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolResponse
 */
DeleteIpamPoolResponse Client::deleteIpamPoolWithOptions(const DeleteIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes an IPAM pool instance.
 *
 * @description ### Usage notes
 * - Before deleting a parent pool, make sure that all subpools under the parent pool have been deleted.
 * - When a parent pool has an effective region configured and has addresses that have already been allocated, the parent pool cannot be deleted.
 * - When a subpool has an effective region configured and has addresses that have already been allocated, the subpool cannot be deleted.
 * - When a pool has a sharing relationship, the pool cannot be deleted.
 *
 * @param request DeleteIpamPoolRequest
 * @return DeleteIpamPoolResponse
 */
DeleteIpamPoolResponse Client::deleteIpamPool(const DeleteIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Releases a CIDR allocation from an IP Address Management (IPAM) address pool. Supported allocation types include virtual private cloud (VPC) and custom allocation.
 *
 * @param request DeleteIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolAllocationResponse
 */
DeleteIpamPoolAllocationResponse Client::deleteIpamPoolAllocationWithOptions(const DeleteIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolAllocationId()) {
    query["IpamPoolAllocationId"] = request.getIpamPoolAllocationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Releases a CIDR allocation from an IP Address Management (IPAM) address pool. Supported allocation types include virtual private cloud (VPC) and custom allocation.
 *
 * @param request DeleteIpamPoolAllocationRequest
 * @return DeleteIpamPoolAllocationResponse
 */
DeleteIpamPoolAllocationResponse Client::deleteIpamPoolAllocation(const DeleteIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Deletes a provisioned CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @description - If CIDR blocks are provisioned in both a parent pool and its sub-pools, delete the CIDR blocks from the sub-pools before you delete the CIDR block from the parent pool.
 * - If a CIDR block is provisioned only in a parent pool, you can delete the CIDR block directly from the parent pool.
 * - If allocations exist from the provisioned CIDR block, delete the allocations before you delete the CIDR block.
 * - Requests to delete a provisioned CIDR block from an IPAM pool must be sent from the region where the IPAM is deployed.
 *
 * @param request DeleteIpamPoolCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamPoolCidrResponse
 */
DeleteIpamPoolCidrResponse Client::deleteIpamPoolCidrWithOptions(const DeleteIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a provisioned CIDR block from an IP Address Manager (IPAM) pool.
 *
 * @description - If CIDR blocks are provisioned in both a parent pool and its sub-pools, delete the CIDR blocks from the sub-pools before you delete the CIDR block from the parent pool.
 * - If a CIDR block is provisioned only in a parent pool, you can delete the CIDR block directly from the parent pool.
 * - If allocations exist from the provisioned CIDR block, delete the allocations before you delete the CIDR block.
 * - Requests to delete a provisioned CIDR block from an IPAM pool must be sent from the region where the IPAM is deployed.
 *
 * @param request DeleteIpamPoolCidrRequest
 * @return DeleteIpamPoolCidrResponse
 */
DeleteIpamPoolCidrResponse Client::deleteIpamPoolCidr(const DeleteIpamPoolCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamPoolCidrWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource discovery instance.
 *
 * @description - A resource discovery instance cannot be deleted if it is shared.
 *
 * @param request DeleteIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamResourceDiscoveryResponse
 */
DeleteIpamResourceDiscoveryResponse Client::deleteIpamResourceDiscoveryWithOptions(const DeleteIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes a resource discovery instance.
 *
 * @description - A resource discovery instance cannot be deleted if it is shared.
 *
 * @param request DeleteIpamResourceDiscoveryRequest
 * @return DeleteIpamResourceDiscoveryResponse
 */
DeleteIpamResourceDiscoveryResponse Client::deleteIpamResourceDiscovery(const DeleteIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Deletes an IPAM scope.
 *
 * @description ### Usage notes
 * - You cannot delete the two default IPAM scopes that the system automatically creates.
 * - Before you delete a custom IPAM scope, ensure that all IPAM pools in the scope are deleted. You can call the **DeleteIpamPool** operation to delete an IPAM pool.
 *
 * @param request DeleteIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpamScopeResponse
 */
DeleteIpamScopeResponse Client::deleteIpamScopeWithOptions(const DeleteIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.getIpamScopeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes an IPAM scope.
 *
 * @description ### Usage notes
 * - You cannot delete the two default IPAM scopes that the system automatically creates.
 * - Before you delete a custom IPAM scope, ensure that all IPAM pools in the scope are deleted. You can call the **DeleteIpamPool** operation to delete an IPAM pool.
 *
 * @param request DeleteIpamScopeRequest
 * @return DeleteIpamScopeResponse
 */
DeleteIpamScopeResponse Client::deleteIpamScope(const DeleteIpamScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpamScopeWithOptions(request, runtime);
}

/**
 * @summary Disassociates a resource discovery from an IP Address Manager (IPAM) instance.
 *
 * @param request DissociateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateIpamResourceDiscoveryResponse
 */
DissociateIpamResourceDiscoveryResponse Client::dissociateIpamResourceDiscoveryWithOptions(const DissociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Disassociates a resource discovery from an IP Address Manager (IPAM) instance.
 *
 * @param request DissociateIpamResourceDiscoveryRequest
 * @return DissociateIpamResourceDiscoveryResponse
 */
DissociateIpamResourceDiscoveryResponse Client::dissociateIpamResourceDiscovery(const DissociateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Queries a specified CIDR block allocation in an IPAM pool.
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
 * @summary Queries a specified CIDR block allocation in an IPAM pool.
 *
 * @param request GetIpamPoolAllocationRequest
 * @return GetIpamPoolAllocationResponse
 */
GetIpamPoolAllocationResponse Client::getIpamPoolAllocation(const GetIpamPoolAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpamPoolAllocationWithOptions(request, runtime);
}

/**
 * @summary Retrieves an available CIDR block from an IPAM pool.
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
 * @summary Retrieves an available CIDR block from an IPAM pool.
 *
 * @param request GetIpamPoolNextAvailableCidrRequest
 * @return GetIpamPoolNextAvailableCidrResponse
 */
GetIpamPoolNextAvailableCidrResponse Client::getIpamPoolNextAvailableCidr(const GetIpamPoolNextAvailableCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpamPoolNextAvailableCidrWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of the IPAM service.
 *
 * @param request GetVpcIpamServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcIpamServiceStatusResponse
 */
GetVpcIpamServiceStatusResponse Client::getVpcIpamServiceStatusWithOptions(const GetVpcIpamServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the status of the IPAM service.
 *
 * @param request GetVpcIpamServiceStatusRequest
 * @return GetVpcIpamServiceStatusResponse
 */
GetVpcIpamServiceStatusResponse Client::getVpcIpamServiceStatus(const GetVpcIpamServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcIpamServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Lists the IP addresses used by discovered resources in a VPC or vSwitch.
 *
 * @description Supported query combinations:
 * - `VpcId` only
 * - `VSwitchId` only
 * - `VpcId` + `VSwitchId`
 * - `VpcId` + `CidrBlock`
 * - `VSwitchId` + `CidrBlock`
 * - `VpcId` + `VSwitchId` + `CidrBlock`
 *
 * @param request ListIpamDiscoveredIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamDiscoveredIpAddressesResponse
 */
ListIpamDiscoveredIpAddressesResponse Client::listIpamDiscoveredIpAddressesWithOptions(const ListIpamDiscoveredIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
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

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpamDiscoveredIpAddresses"},
    {"version" , "2023-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpamDiscoveredIpAddressesResponse>();
}

/**
 * @summary Lists the IP addresses used by discovered resources in a VPC or vSwitch.
 *
 * @description Supported query combinations:
 * - `VpcId` only
 * - `VSwitchId` only
 * - `VpcId` + `VSwitchId`
 * - `VpcId` + `CidrBlock`
 * - `VSwitchId` + `CidrBlock`
 * - `VpcId` + `VSwitchId` + `CidrBlock`
 *
 * @param request ListIpamDiscoveredIpAddressesRequest
 * @return ListIpamDiscoveredIpAddressesResponse
 */
ListIpamDiscoveredIpAddressesResponse Client::listIpamDiscoveredIpAddresses(const ListIpamDiscoveredIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamDiscoveredIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries resource information under a resource discovery.
 *
 * @param request ListIpamDiscoveredResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamDiscoveredResourceResponse
 */
ListIpamDiscoveredResourceResponse Client::listIpamDiscoveredResourceWithOptions(const ListIpamDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
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

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Queries resource information under a resource discovery.
 *
 * @param request ListIpamDiscoveredResourceRequest
 * @return ListIpamDiscoveredResourceResponse
 */
ListIpamDiscoveredResourceResponse Client::listIpamDiscoveredResource(const ListIpamDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary Lists the members managed by the IPAM trusted service.
 *
 * @param request ListIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamMembersResponse
 */
ListIpamMembersResponse Client::listIpamMembersWithOptions(const ListIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.getMemberIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Lists the members managed by the IPAM trusted service.
 *
 * @param request ListIpamMembersRequest
 * @return ListIpamMembersResponse
 */
ListIpamMembersResponse Client::listIpamMembers(const ListIpamMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamMembersWithOptions(request, runtime);
}

/**
 * @summary Queries CIDR block allocations in an IPAM pool.
 *
 * @param request ListIpamPoolAllocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolAllocationsResponse
 */
ListIpamPoolAllocationsResponse Client::listIpamPoolAllocationsWithOptions(const ListIpamPoolAllocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasIpamPoolAllocationIds()) {
    query["IpamPoolAllocationIds"] = request.getIpamPoolAllocationIds();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.getIpamPoolAllocationName();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
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
 * @summary Queries CIDR block allocations in an IPAM pool.
 *
 * @param request ListIpamPoolAllocationsRequest
 * @return ListIpamPoolAllocationsResponse
 */
ListIpamPoolAllocationsResponse Client::listIpamPoolAllocations(const ListIpamPoolAllocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolAllocationsWithOptions(request, runtime);
}

/**
 * @summary Queries the provisioned CIDR blocks of an IPAM pool.
 *
 * @param request ListIpamPoolCidrsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolCidrsResponse
 */
ListIpamPoolCidrsResponse Client::listIpamPoolCidrsWithOptions(const ListIpamPoolCidrsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
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
 * @summary Queries the provisioned CIDR blocks of an IPAM pool.
 *
 * @param request ListIpamPoolCidrsRequest
 * @return ListIpamPoolCidrsResponse
 */
ListIpamPoolCidrsResponse Client::listIpamPoolCidrs(const ListIpamPoolCidrsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolCidrsWithOptions(request, runtime);
}

/**
 * @summary Queries IPAM pools.
 *
 * @param request ListIpamPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamPoolsResponse
 */
ListIpamPoolsResponse Client::listIpamPoolsWithOptions(const ListIpamPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIpamPoolIds()) {
    query["IpamPoolIds"] = request.getIpamPoolIds();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.getIpamPoolName();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.getIpamScopeId();
  }

  if (!!request.hasIpv6Isp()) {
    query["Ipv6Isp"] = request.getIpv6Isp();
  }

  if (!!request.hasIsShared()) {
    query["IsShared"] = request.getIsShared();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolRegionId()) {
    query["PoolRegionId"] = request.getPoolRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceIpamPoolId()) {
    query["SourceIpamPoolId"] = request.getSourceIpamPoolId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Queries IPAM pools.
 *
 * @param request ListIpamPoolsRequest
 * @return ListIpamPoolsResponse
 */
ListIpamPoolsResponse Client::listIpamPools(const ListIpamPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamPoolsWithOptions(request, runtime);
}

/**
 * @summary Queries resources within an IPAM scope.
 *
 * @param request ListIpamResourceCidrsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceCidrsResponse
 */
ListIpamResourceCidrsResponse Client::listIpamResourceCidrsWithOptions(const ListIpamResourceCidrsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.getIpamScopeId();
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

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Queries resources within an IPAM scope.
 *
 * @param request ListIpamResourceCidrsRequest
 * @return ListIpamResourceCidrsResponse
 */
ListIpamResourceCidrsResponse Client::listIpamResourceCidrs(const ListIpamResourceCidrsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceCidrsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of IPAM resource discovery instances.
 *
 * @param request ListIpamResourceDiscoveriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceDiscoveriesResponse
 */
ListIpamResourceDiscoveriesResponse Client::listIpamResourceDiscoveriesWithOptions(const ListIpamResourceDiscoveriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamResourceDiscoveryIds()) {
    query["IpamResourceDiscoveryIds"] = request.getIpamResourceDiscoveryIds();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.getIpamResourceDiscoveryName();
  }

  if (!!request.hasIsShared()) {
    query["IsShared"] = request.getIsShared();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves a list of IPAM resource discovery instances.
 *
 * @param request ListIpamResourceDiscoveriesRequest
 * @return ListIpamResourceDiscoveriesResponse
 */
ListIpamResourceDiscoveriesResponse Client::listIpamResourceDiscoveries(const ListIpamResourceDiscoveriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceDiscoveriesWithOptions(request, runtime);
}

/**
 * @summary Lists the associations between resource discoveries and IP Address Managers (IPAMs).
 *
 * @param request ListIpamResourceDiscoveryAssociationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamResourceDiscoveryAssociationsResponse
 */
ListIpamResourceDiscoveryAssociationsResponse Client::listIpamResourceDiscoveryAssociationsWithOptions(const ListIpamResourceDiscoveryAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Lists the associations between resource discoveries and IP Address Managers (IPAMs).
 *
 * @param request ListIpamResourceDiscoveryAssociationsRequest
 * @return ListIpamResourceDiscoveryAssociationsResponse
 */
ListIpamResourceDiscoveryAssociationsResponse Client::listIpamResourceDiscoveryAssociations(const ListIpamResourceDiscoveryAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamResourceDiscoveryAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries IPAM scopes.
 *
 * @param request ListIpamScopesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamScopesResponse
 */
ListIpamScopesResponse Client::listIpamScopesWithOptions(const ListIpamScopesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamScopeIds()) {
    query["IpamScopeIds"] = request.getIpamScopeIds();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.getIpamScopeName();
  }

  if (!!request.hasIpamScopeType()) {
    query["IpamScopeType"] = request.getIpamScopeType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Queries IPAM scopes.
 *
 * @param request ListIpamScopesRequest
 * @return ListIpamScopesResponse
 */
ListIpamScopesResponse Client::listIpamScopes(const ListIpamScopesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamScopesWithOptions(request, runtime);
}

/**
 * @summary Queries one or more IPAMs.
 *
 * @param request ListIpamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpamsResponse
 */
ListIpamsResponse Client::listIpamsWithOptions(const ListIpamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpamIds()) {
    query["IpamIds"] = request.getIpamIds();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.getIpamName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Queries one or more IPAMs.
 *
 * @param request ListIpamsRequest
 * @return ListIpamsResponse
 */
ListIpamsResponse Client::listIpams(const ListIpamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpamsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are associated with resources.
 *
 * @description ### Usage notes
 * - You must specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in a request to identify the resources to query.
 * - **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. An error is returned if you specify only **Tag.N.Value**.
 * - If you specify both **Tag.N** and **ResourceId.N**, the query returns only the resources that are specified by **ResourceId.N** and are associated with all the specified tag key-value pairs.
 * - If you specify multiple tag key-value pairs, the query returns only resources that are associated with all the specified key-value pairs.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries the tags that are associated with resources.
 *
 * @description ### Usage notes
 * - You must specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in a request to identify the resources to query.
 * - **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. An error is returned if you specify only **Tag.N.Value**.
 * - If you specify both **Tag.N** and **ResourceId.N**, the query returns only the resources that are specified by **ResourceId.N** and are associated with all the specified tag key-value pairs.
 * - If you specify multiple tag key-value pairs, the query returns only resources that are associated with all the specified key-value pairs.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Activates the IP Address Management (IPAM) service.
 *
 * @param request OpenVpcIpamServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenVpcIpamServiceResponse
 */
OpenVpcIpamServiceResponse Client::openVpcIpamServiceWithOptions(const OpenVpcIpamServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Activates the IP Address Management (IPAM) service.
 *
 * @param request OpenVpcIpamServiceRequest
 * @return OpenVpcIpamServiceResponse
 */
OpenVpcIpamServiceResponse Client::openVpcIpamService(const OpenVpcIpamServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVpcIpamServiceWithOptions(request, runtime);
}

/**
 * @summary Removes members from the IPAM trusted service.
 *
 * @description - If the delegated IPAM administrator removes the last member, the IPAM trusted service is disabled for the resource directory.
 *
 * @param request RemoveIpamMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveIpamMembersResponse
 */
RemoveIpamMembersResponse Client::removeIpamMembersWithOptions(const RemoveIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.getMembers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Removes members from the IPAM trusted service.
 *
 * @description - If the delegated IPAM administrator removes the last member, the IPAM trusted service is disabled for the resource directory.
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
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["All"] = request.getAll();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Modifies an IP Address Management (IPAM) instance.
 *
 * @description - The managed region of an IPAM instance cannot be removed.
 *
 * @param request UpdateIpamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamResponse
 */
UpdateIpamResponse Client::updateIpamWithOptions(const UpdateIpamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddOperatingRegion()) {
    query["AddOperatingRegion"] = request.getAddOperatingRegion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamDescription()) {
    query["IpamDescription"] = request.getIpamDescription();
  }

  if (!!request.hasIpamId()) {
    query["IpamId"] = request.getIpamId();
  }

  if (!!request.hasIpamName()) {
    query["IpamName"] = request.getIpamName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoveOperatingRegion()) {
    query["RemoveOperatingRegion"] = request.getRemoveOperatingRegion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Modifies an IP Address Management (IPAM) instance.
 *
 * @description - The managed region of an IPAM instance cannot be removed.
 *
 * @param request UpdateIpamRequest
 * @return UpdateIpamResponse
 */
UpdateIpamResponse Client::updateIpam(const UpdateIpamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an IPAM pool.
 *
 * @param request UpdateIpamPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamPoolResponse
 */
UpdateIpamPoolResponse Client::updateIpamPoolWithOptions(const UpdateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationDefaultCidrMask()) {
    query["AllocationDefaultCidrMask"] = request.getAllocationDefaultCidrMask();
  }

  if (!!request.hasAllocationMaxCidrMask()) {
    query["AllocationMaxCidrMask"] = request.getAllocationMaxCidrMask();
  }

  if (!!request.hasAllocationMinCidrMask()) {
    query["AllocationMinCidrMask"] = request.getAllocationMinCidrMask();
  }

  if (!!request.hasAutoImport()) {
    query["AutoImport"] = request.getAutoImport();
  }

  if (!!request.hasClearAllocationDefaultCidrMask()) {
    query["ClearAllocationDefaultCidrMask"] = request.getClearAllocationDefaultCidrMask();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolDescription()) {
    query["IpamPoolDescription"] = request.getIpamPoolDescription();
  }

  if (!!request.hasIpamPoolId()) {
    query["IpamPoolId"] = request.getIpamPoolId();
  }

  if (!!request.hasIpamPoolName()) {
    query["IpamPoolName"] = request.getIpamPoolName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Updates the basic information of an IPAM pool.
 *
 * @param request UpdateIpamPoolRequest
 * @return UpdateIpamPoolResponse
 */
UpdateIpamPoolResponse Client::updateIpamPool(const UpdateIpamPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamPoolWithOptions(request, runtime);
}

/**
 * @summary Updates a CIDR allocation from an IPAM address pool.
 *
 * @param request UpdateIpamPoolAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamPoolAllocationResponse
 */
UpdateIpamPoolAllocationResponse Client::updateIpamPoolAllocationWithOptions(const UpdateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamPoolAllocationDescription()) {
    query["IpamPoolAllocationDescription"] = request.getIpamPoolAllocationDescription();
  }

  if (!!request.hasIpamPoolAllocationId()) {
    query["IpamPoolAllocationId"] = request.getIpamPoolAllocationId();
  }

  if (!!request.hasIpamPoolAllocationName()) {
    query["IpamPoolAllocationName"] = request.getIpamPoolAllocationName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Updates a CIDR allocation from an IPAM address pool.
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
 * @description - You can add or remove operating regions only for custom resource discovery instances.
 * - When you remove an operating region from a resource discovery instance, you cannot remove the managed region of the resource discovery instance.
 *
 * @param request UpdateIpamResourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamResourceDiscoveryResponse
 */
UpdateIpamResourceDiscoveryResponse Client::updateIpamResourceDiscoveryWithOptions(const UpdateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddOperatingRegion()) {
    query["AddOperatingRegion"] = request.getAddOperatingRegion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamResourceDiscoveryDescription()) {
    query["IpamResourceDiscoveryDescription"] = request.getIpamResourceDiscoveryDescription();
  }

  if (!!request.hasIpamResourceDiscoveryId()) {
    query["IpamResourceDiscoveryId"] = request.getIpamResourceDiscoveryId();
  }

  if (!!request.hasIpamResourceDiscoveryName()) {
    query["IpamResourceDiscoveryName"] = request.getIpamResourceDiscoveryName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoveOperatingRegion()) {
    query["RemoveOperatingRegion"] = request.getRemoveOperatingRegion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @description - You can add or remove operating regions only for custom resource discovery instances.
 * - When you remove an operating region from a resource discovery instance, you cannot remove the managed region of the resource discovery instance.
 *
 * @param request UpdateIpamResourceDiscoveryRequest
 * @return UpdateIpamResourceDiscoveryResponse
 */
UpdateIpamResourceDiscoveryResponse Client::updateIpamResourceDiscovery(const UpdateIpamResourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpamResourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an IPAM scope.
 *
 * @param request UpdateIpamScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpamScopeResponse
 */
UpdateIpamScopeResponse Client::updateIpamScopeWithOptions(const UpdateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpamScopeDescription()) {
    query["IpamScopeDescription"] = request.getIpamScopeDescription();
  }

  if (!!request.hasIpamScopeId()) {
    query["IpamScopeId"] = request.getIpamScopeId();
  }

  if (!!request.hasIpamScopeName()) {
    query["IpamScopeName"] = request.getIpamScopeName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Updates the basic information of an IPAM scope.
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