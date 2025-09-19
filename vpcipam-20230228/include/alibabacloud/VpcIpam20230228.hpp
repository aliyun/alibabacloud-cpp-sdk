// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VPCIPAM20230228_HPP_
#define ALIBABACLOUD_VPCIPAM20230228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/VpcIpam20230228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/VpcIpam20230228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AddIpamPoolCidrResponse addIpamPoolCidrWithOptions(const Models::AddIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddIpamPoolCidrResponse addIpamPoolCidr(const Models::AddIpamPoolCidrRequest &request);

      /**
       * @summary Associates resource discovery with an IPAM instance.
       *
       * @description *   The specified resource discovery instance can only be associated with one IPAM instance and associations cannot be duplicated.
       *
       * @param request AssociateIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateIpamResourceDiscoveryResponse
       */
      Models::AssociateIpamResourceDiscoveryResponse associateIpamResourceDiscoveryWithOptions(const Models::AssociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates resource discovery with an IPAM instance.
       *
       * @description *   The specified resource discovery instance can only be associated with one IPAM instance and associations cannot be duplicated.
       *
       * @param request AssociateIpamResourceDiscoveryRequest
       * @return AssociateIpamResourceDiscoveryResponse
       */
      Models::AssociateIpamResourceDiscoveryResponse associateIpamResourceDiscovery(const Models::AssociateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Changes the resource group of an IPAM resource.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of an IPAM resource.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

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
      Models::CreateIpamResponse createIpamWithOptions(const Models::CreateIpamRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateIpamResponse createIpam(const Models::CreateIpamRequest &request);

      /**
       * @summary Creates an IP Address Manager (IPAM) pool.
       *
       * @description The number of public IPv6 IPAM top pool for a specific ISP that a user is allowed to create per region is limited to 1.
       *
       * @param request CreateIpamPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpamPoolResponse
       */
      Models::CreateIpamPoolResponse createIpamPoolWithOptions(const Models::CreateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP Address Manager (IPAM) pool.
       *
       * @description The number of public IPv6 IPAM top pool for a specific ISP that a user is allowed to create per region is limited to 1.
       *
       * @param request CreateIpamPoolRequest
       * @return CreateIpamPoolResponse
       */
      Models::CreateIpamPoolResponse createIpamPool(const Models::CreateIpamPoolRequest &request);

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
      Models::CreateIpamPoolAllocationResponse createIpamPoolAllocationWithOptions(const Models::CreateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateIpamPoolAllocationResponse createIpamPoolAllocation(const Models::CreateIpamPoolAllocationRequest &request);

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
      Models::CreateIpamResourceDiscoveryResponse createIpamResourceDiscoveryWithOptions(const Models::CreateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom resource discovery instance.
       *
       * @description *   Each Alibaba Cloud account can create only one resource discovery instance in each region.
       * *   You can create only custom resource discovery instances.
       *
       * @param request CreateIpamResourceDiscoveryRequest
       * @return CreateIpamResourceDiscoveryResponse
       */
      Models::CreateIpamResourceDiscoveryResponse createIpamResourceDiscovery(const Models::CreateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Creates a public scope and private scope to respectively manage public and private IP addresses.
       *
       * @param request CreateIpamScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpamScopeResponse
       */
      Models::CreateIpamScopeResponse createIpamScopeWithOptions(const Models::CreateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public scope and private scope to respectively manage public and private IP addresses.
       *
       * @param request CreateIpamScopeRequest
       * @return CreateIpamScopeResponse
       */
      Models::CreateIpamScopeResponse createIpamScope(const Models::CreateIpamScopeRequest &request);

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
      Models::DeleteIpamResponse deleteIpamWithOptions(const Models::DeleteIpamRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamResponse deleteIpam(const Models::DeleteIpamRequest &request);

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
      Models::DeleteIpamPoolResponse deleteIpamPoolWithOptions(const Models::DeleteIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamPoolResponse deleteIpamPool(const Models::DeleteIpamPoolRequest &request);

      /**
       * @summary Deletes a custom reserved CIDR block from an IP Address Manager (IPAM) pool.
       *
       * @param request DeleteIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpamPoolAllocationResponse
       */
      Models::DeleteIpamPoolAllocationResponse deleteIpamPoolAllocationWithOptions(const Models::DeleteIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom reserved CIDR block from an IP Address Manager (IPAM) pool.
       *
       * @param request DeleteIpamPoolAllocationRequest
       * @return DeleteIpamPoolAllocationResponse
       */
      Models::DeleteIpamPoolAllocationResponse deleteIpamPoolAllocation(const Models::DeleteIpamPoolAllocationRequest &request);

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
      Models::DeleteIpamPoolCidrResponse deleteIpamPoolCidrWithOptions(const Models::DeleteIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamPoolCidrResponse deleteIpamPoolCidr(const Models::DeleteIpamPoolCidrRequest &request);

      /**
       * @summary Deletes a custom resource discovery instance.
       *
       * @description *   If a resource discovery instance is shared, it cannot be deleted.
       *
       * @param request DeleteIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpamResourceDiscoveryResponse
       */
      Models::DeleteIpamResourceDiscoveryResponse deleteIpamResourceDiscoveryWithOptions(const Models::DeleteIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom resource discovery instance.
       *
       * @description *   If a resource discovery instance is shared, it cannot be deleted.
       *
       * @param request DeleteIpamResourceDiscoveryRequest
       * @return DeleteIpamResourceDiscoveryResponse
       */
      Models::DeleteIpamResourceDiscoveryResponse deleteIpamResourceDiscovery(const Models::DeleteIpamResourceDiscoveryRequest &request);

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
      Models::DeleteIpamScopeResponse deleteIpamScopeWithOptions(const Models::DeleteIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamScopeResponse deleteIpamScope(const Models::DeleteIpamScopeRequest &request);

      /**
       * @summary Disassociates resource discovery and IPAM instances.
       *
       * @param request DissociateIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateIpamResourceDiscoveryResponse
       */
      Models::DissociateIpamResourceDiscoveryResponse dissociateIpamResourceDiscoveryWithOptions(const Models::DissociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates resource discovery and IPAM instances.
       *
       * @param request DissociateIpamResourceDiscoveryRequest
       * @return DissociateIpamResourceDiscoveryResponse
       */
      Models::DissociateIpamResourceDiscoveryResponse dissociateIpamResourceDiscovery(const Models::DissociateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request GetIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpamPoolAllocationResponse
       */
      Models::GetIpamPoolAllocationResponse getIpamPoolAllocationWithOptions(const Models::GetIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request GetIpamPoolAllocationRequest
       * @return GetIpamPoolAllocationResponse
       */
      Models::GetIpamPoolAllocationResponse getIpamPoolAllocation(const Models::GetIpamPoolAllocationRequest &request);

      /**
       * @summary Gets the available CIDR blocks of the IPAM pool.
       *
       * @param request GetIpamPoolNextAvailableCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpamPoolNextAvailableCidrResponse
       */
      Models::GetIpamPoolNextAvailableCidrResponse getIpamPoolNextAvailableCidrWithOptions(const Models::GetIpamPoolNextAvailableCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the available CIDR blocks of the IPAM pool.
       *
       * @param request GetIpamPoolNextAvailableCidrRequest
       * @return GetIpamPoolNextAvailableCidrResponse
       */
      Models::GetIpamPoolNextAvailableCidrResponse getIpamPoolNextAvailableCidr(const Models::GetIpamPoolNextAvailableCidrRequest &request);

      /**
       * @summary Queries whether IP Address Manager (IPAM) is activated.
       *
       * @param request GetVpcIpamServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcIpamServiceStatusResponse
       */
      Models::GetVpcIpamServiceStatusResponse getVpcIpamServiceStatusWithOptions(const Models::GetVpcIpamServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether IP Address Manager (IPAM) is activated.
       *
       * @param request GetVpcIpamServiceStatusRequest
       * @return GetVpcIpamServiceStatusResponse
       */
      Models::GetVpcIpamServiceStatusResponse getVpcIpamServiceStatus(const Models::GetVpcIpamServiceStatusRequest &request);

      /**
       * @summary Queries discovered resources.
       *
       * @param request ListIpamDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamDiscoveredResourceResponse
       */
      Models::ListIpamDiscoveredResourceResponse listIpamDiscoveredResourceWithOptions(const Models::ListIpamDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries discovered resources.
       *
       * @param request ListIpamDiscoveredResourceRequest
       * @return ListIpamDiscoveredResourceResponse
       */
      Models::ListIpamDiscoveredResourceResponse listIpamDiscoveredResource(const Models::ListIpamDiscoveredResourceRequest &request);

      /**
       * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamPoolAllocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolAllocationsResponse
       */
      Models::ListIpamPoolAllocationsResponse listIpamPoolAllocationsWithOptions(const Models::ListIpamPoolAllocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamPoolAllocationsRequest
       * @return ListIpamPoolAllocationsResponse
       */
      Models::ListIpamPoolAllocationsResponse listIpamPoolAllocations(const Models::ListIpamPoolAllocationsRequest &request);

      /**
       * @summary Queries CIDR blocks provisioned to an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamPoolCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolCidrsResponse
       */
      Models::ListIpamPoolCidrsResponse listIpamPoolCidrsWithOptions(const Models::ListIpamPoolCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR blocks provisioned to an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamPoolCidrsRequest
       * @return ListIpamPoolCidrsResponse
       */
      Models::ListIpamPoolCidrsResponse listIpamPoolCidrs(const Models::ListIpamPoolCidrsRequest &request);

      /**
       * @summary Queries IP Address Manager (IPAM) pools.
       *
       * @param request ListIpamPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolsResponse
       */
      Models::ListIpamPoolsResponse listIpamPoolsWithOptions(const Models::ListIpamPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP Address Manager (IPAM) pools.
       *
       * @param request ListIpamPoolsRequest
       * @return ListIpamPoolsResponse
       */
      Models::ListIpamPoolsResponse listIpamPools(const Models::ListIpamPoolsRequest &request);

      /**
       * @summary Queries resources in an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamResourceCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceCidrsResponse
       */
      Models::ListIpamResourceCidrsResponse listIpamResourceCidrsWithOptions(const Models::ListIpamResourceCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources in an IP Address Manager (IPAM) pool.
       *
       * @param request ListIpamResourceCidrsRequest
       * @return ListIpamResourceCidrsResponse
       */
      Models::ListIpamResourceCidrsResponse listIpamResourceCidrs(const Models::ListIpamResourceCidrsRequest &request);

      /**
       * @summary Queries IPAM resource discovery instances.
       *
       * @param request ListIpamResourceDiscoveriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceDiscoveriesResponse
       */
      Models::ListIpamResourceDiscoveriesResponse listIpamResourceDiscoveriesWithOptions(const Models::ListIpamResourceDiscoveriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPAM resource discovery instances.
       *
       * @param request ListIpamResourceDiscoveriesRequest
       * @return ListIpamResourceDiscoveriesResponse
       */
      Models::ListIpamResourceDiscoveriesResponse listIpamResourceDiscoveries(const Models::ListIpamResourceDiscoveriesRequest &request);

      /**
       * @summary Queries the association between resource discovery and IPAM.
       *
       * @param request ListIpamResourceDiscoveryAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceDiscoveryAssociationsResponse
       */
      Models::ListIpamResourceDiscoveryAssociationsResponse listIpamResourceDiscoveryAssociationsWithOptions(const Models::ListIpamResourceDiscoveryAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between resource discovery and IPAM.
       *
       * @param request ListIpamResourceDiscoveryAssociationsRequest
       * @return ListIpamResourceDiscoveryAssociationsResponse
       */
      Models::ListIpamResourceDiscoveryAssociationsResponse listIpamResourceDiscoveryAssociations(const Models::ListIpamResourceDiscoveryAssociationsRequest &request);

      /**
       * @summary Queries IP Address Manager (IPAM) scopes.
       *
       * @param request ListIpamScopesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamScopesResponse
       */
      Models::ListIpamScopesResponse listIpamScopesWithOptions(const Models::ListIpamScopesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP Address Manager (IPAM) scopes.
       *
       * @param request ListIpamScopesRequest
       * @return ListIpamScopesResponse
       */
      Models::ListIpamScopesResponse listIpamScopes(const Models::ListIpamScopesRequest &request);

      /**
       * @summary Queries IP Address Managers (IPAMs).
       *
       * @param request ListIpamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamsResponse
       */
      Models::ListIpamsResponse listIpamsWithOptions(const Models::ListIpamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP Address Managers (IPAMs).
       *
       * @param request ListIpamsRequest
       * @return ListIpamsResponse
       */
      Models::ListIpamsResponse listIpams(const Models::ListIpamsRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Activates IP Address Manager (IPAM).
       *
       * @param request OpenVpcIpamServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVpcIpamServiceResponse
       */
      Models::OpenVpcIpamServiceResponse openVpcIpamServiceWithOptions(const Models::OpenVpcIpamServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates IP Address Manager (IPAM).
       *
       * @param request OpenVpcIpamServiceRequest
       * @return OpenVpcIpamServiceResponse
       */
      Models::OpenVpcIpamServiceResponse openVpcIpamService(const Models::OpenVpcIpamServiceRequest &request);

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
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes a tag from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a tag from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an IP Address Manager (IPAM).
       *
       * @param request UpdateIpamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamResponse
       */
      Models::UpdateIpamResponse updateIpamWithOptions(const Models::UpdateIpamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an IP Address Manager (IPAM).
       *
       * @param request UpdateIpamRequest
       * @return UpdateIpamResponse
       */
      Models::UpdateIpamResponse updateIpam(const Models::UpdateIpamRequest &request);

      /**
       * @summary Modifies the basic information about an IP Address Manager (IPAM) pool.
       *
       * @param request UpdateIpamPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamPoolResponse
       */
      Models::UpdateIpamPoolResponse updateIpamPoolWithOptions(const Models::UpdateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about an IP Address Manager (IPAM) pool.
       *
       * @param request UpdateIpamPoolRequest
       * @return UpdateIpamPoolResponse
       */
      Models::UpdateIpamPoolResponse updateIpamPool(const Models::UpdateIpamPoolRequest &request);

      /**
       * @summary Modifies CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request UpdateIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamPoolAllocationResponse
       */
      Models::UpdateIpamPoolAllocationResponse updateIpamPoolAllocationWithOptions(const Models::UpdateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies CIDR block allocations of an IP Address Manager (IPAM) pool.
       *
       * @param request UpdateIpamPoolAllocationRequest
       * @return UpdateIpamPoolAllocationResponse
       */
      Models::UpdateIpamPoolAllocationResponse updateIpamPoolAllocation(const Models::UpdateIpamPoolAllocationRequest &request);

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
      Models::UpdateIpamResourceDiscoveryResponse updateIpamResourceDiscoveryWithOptions(const Models::UpdateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource discovery instance.
       *
       * @description *   You can add or remove effective regions only for custom resource discovery instances.
       * *   When removing effective regions from a resource discovery instance, the hosted region cannot be included.
       *
       * @param request UpdateIpamResourceDiscoveryRequest
       * @return UpdateIpamResourceDiscoveryResponse
       */
      Models::UpdateIpamResourceDiscoveryResponse updateIpamResourceDiscovery(const Models::UpdateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Modifies the basic information about an IP Address Manager (IPAM) scope.
       *
       * @param request UpdateIpamScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamScopeResponse
       */
      Models::UpdateIpamScopeResponse updateIpamScopeWithOptions(const Models::UpdateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about an IP Address Manager (IPAM) scope.
       *
       * @param request UpdateIpamScopeRequest
       * @return UpdateIpamScopeResponse
       */
      Models::UpdateIpamScopeResponse updateIpamScope(const Models::UpdateIpamScopeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
