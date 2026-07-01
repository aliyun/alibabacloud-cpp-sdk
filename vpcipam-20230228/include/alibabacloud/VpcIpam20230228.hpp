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
      Models::AddIpamMembersResponse addIpamMembersWithOptions(const Models::AddIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddIpamMembersResponse addIpamMembers(const Models::AddIpamMembersRequest &request);

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
      Models::AddIpamPoolCidrResponse addIpamPoolCidrWithOptions(const Models::AddIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddIpamPoolCidrResponse addIpamPoolCidr(const Models::AddIpamPoolCidrRequest &request);

      /**
       * @summary Associates a resource discovery with an IPAM instance.
       *
       * @description - You can associate a resource discovery instance with an IPAM instance only once.
       *
       * @param request AssociateIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateIpamResourceDiscoveryResponse
       */
      Models::AssociateIpamResourceDiscoveryResponse associateIpamResourceDiscoveryWithOptions(const Models::AssociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a resource discovery with an IPAM instance.
       *
       * @description - You can associate a resource discovery instance with an IPAM instance only once.
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
       * @summary Create an IPAM address pool.
       *
       * @description - The default maximum number of public IPv6 top-level pools per ISP type per region is 1.
       *
       * @param request CreateIpamPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpamPoolResponse
       */
      Models::CreateIpamPoolResponse createIpamPoolWithOptions(const Models::CreateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an IPAM address pool.
       *
       * @description - The default maximum number of public IPv6 top-level pools per ISP type per region is 1.
       *
       * @param request CreateIpamPoolRequest
       * @return CreateIpamPoolResponse
       */
      Models::CreateIpamPoolResponse createIpamPool(const Models::CreateIpamPoolRequest &request);

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
      Models::CreateIpamPoolAllocationResponse createIpamPoolAllocationWithOptions(const Models::CreateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateIpamPoolAllocationResponse createIpamPoolAllocation(const Models::CreateIpamPoolAllocationRequest &request);

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
      Models::CreateIpamResourceDiscoveryResponse createIpamResourceDiscoveryWithOptions(const Models::CreateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource discovery instance of a custom type.
       *
       * @description - Each Alibaba Cloud account can have only one resource discovery instance in each region.
       * - This operation creates only resource discovery instances of a custom type.
       *
       * @param request CreateIpamResourceDiscoveryRequest
       * @return CreateIpamResourceDiscoveryResponse
       */
      Models::CreateIpamResourceDiscoveryResponse createIpamResourceDiscovery(const Models::CreateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Creates scopes for IPAM to manage private and public IP addresses.
       *
       * @param request CreateIpamScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpamScopeResponse
       */
      Models::CreateIpamScopeResponse createIpamScopeWithOptions(const Models::CreateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates scopes for IPAM to manage private and public IP addresses.
       *
       * @param request CreateIpamScopeRequest
       * @return CreateIpamScopeResponse
       */
      Models::CreateIpamScopeResponse createIpamScope(const Models::CreateIpamScopeRequest &request);

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
      Models::DeleteIpamResponse deleteIpamWithOptions(const Models::DeleteIpamRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamResponse deleteIpam(const Models::DeleteIpamRequest &request);

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
      Models::DeleteIpamPoolResponse deleteIpamPoolWithOptions(const Models::DeleteIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamPoolResponse deleteIpamPool(const Models::DeleteIpamPoolRequest &request);

      /**
       * @summary Releases a CIDR allocation from an IP Address Management (IPAM) address pool. Supported allocation types include virtual private cloud (VPC) and custom allocation.
       *
       * @param request DeleteIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpamPoolAllocationResponse
       */
      Models::DeleteIpamPoolAllocationResponse deleteIpamPoolAllocationWithOptions(const Models::DeleteIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a CIDR allocation from an IP Address Management (IPAM) address pool. Supported allocation types include virtual private cloud (VPC) and custom allocation.
       *
       * @param request DeleteIpamPoolAllocationRequest
       * @return DeleteIpamPoolAllocationResponse
       */
      Models::DeleteIpamPoolAllocationResponse deleteIpamPoolAllocation(const Models::DeleteIpamPoolAllocationRequest &request);

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
      Models::DeleteIpamPoolCidrResponse deleteIpamPoolCidrWithOptions(const Models::DeleteIpamPoolCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamPoolCidrResponse deleteIpamPoolCidr(const Models::DeleteIpamPoolCidrRequest &request);

      /**
       * @summary Deletes a resource discovery instance.
       *
       * @description - A resource discovery instance cannot be deleted if it is shared.
       *
       * @param request DeleteIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpamResourceDiscoveryResponse
       */
      Models::DeleteIpamResourceDiscoveryResponse deleteIpamResourceDiscoveryWithOptions(const Models::DeleteIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource discovery instance.
       *
       * @description - A resource discovery instance cannot be deleted if it is shared.
       *
       * @param request DeleteIpamResourceDiscoveryRequest
       * @return DeleteIpamResourceDiscoveryResponse
       */
      Models::DeleteIpamResourceDiscoveryResponse deleteIpamResourceDiscovery(const Models::DeleteIpamResourceDiscoveryRequest &request);

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
      Models::DeleteIpamScopeResponse deleteIpamScopeWithOptions(const Models::DeleteIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteIpamScopeResponse deleteIpamScope(const Models::DeleteIpamScopeRequest &request);

      /**
       * @summary Disassociates a resource discovery from an IP Address Manager (IPAM) instance.
       *
       * @param request DissociateIpamResourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateIpamResourceDiscoveryResponse
       */
      Models::DissociateIpamResourceDiscoveryResponse dissociateIpamResourceDiscoveryWithOptions(const Models::DissociateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a resource discovery from an IP Address Manager (IPAM) instance.
       *
       * @param request DissociateIpamResourceDiscoveryRequest
       * @return DissociateIpamResourceDiscoveryResponse
       */
      Models::DissociateIpamResourceDiscoveryResponse dissociateIpamResourceDiscovery(const Models::DissociateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Queries a specified CIDR block allocation in an IPAM pool.
       *
       * @param request GetIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpamPoolAllocationResponse
       */
      Models::GetIpamPoolAllocationResponse getIpamPoolAllocationWithOptions(const Models::GetIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified CIDR block allocation in an IPAM pool.
       *
       * @param request GetIpamPoolAllocationRequest
       * @return GetIpamPoolAllocationResponse
       */
      Models::GetIpamPoolAllocationResponse getIpamPoolAllocation(const Models::GetIpamPoolAllocationRequest &request);

      /**
       * @summary Retrieves an available CIDR block from an IPAM pool.
       *
       * @param request GetIpamPoolNextAvailableCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpamPoolNextAvailableCidrResponse
       */
      Models::GetIpamPoolNextAvailableCidrResponse getIpamPoolNextAvailableCidrWithOptions(const Models::GetIpamPoolNextAvailableCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an available CIDR block from an IPAM pool.
       *
       * @param request GetIpamPoolNextAvailableCidrRequest
       * @return GetIpamPoolNextAvailableCidrResponse
       */
      Models::GetIpamPoolNextAvailableCidrResponse getIpamPoolNextAvailableCidr(const Models::GetIpamPoolNextAvailableCidrRequest &request);

      /**
       * @summary Retrieves the status of the IPAM service.
       *
       * @param request GetVpcIpamServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcIpamServiceStatusResponse
       */
      Models::GetVpcIpamServiceStatusResponse getVpcIpamServiceStatusWithOptions(const Models::GetVpcIpamServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of the IPAM service.
       *
       * @param request GetVpcIpamServiceStatusRequest
       * @return GetVpcIpamServiceStatusResponse
       */
      Models::GetVpcIpamServiceStatusResponse getVpcIpamServiceStatus(const Models::GetVpcIpamServiceStatusRequest &request);

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
      Models::ListIpamDiscoveredIpAddressesResponse listIpamDiscoveredIpAddressesWithOptions(const Models::ListIpamDiscoveredIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListIpamDiscoveredIpAddressesResponse listIpamDiscoveredIpAddresses(const Models::ListIpamDiscoveredIpAddressesRequest &request);

      /**
       * @summary Queries resource information under a resource discovery.
       *
       * @param request ListIpamDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamDiscoveredResourceResponse
       */
      Models::ListIpamDiscoveredResourceResponse listIpamDiscoveredResourceWithOptions(const Models::ListIpamDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource information under a resource discovery.
       *
       * @param request ListIpamDiscoveredResourceRequest
       * @return ListIpamDiscoveredResourceResponse
       */
      Models::ListIpamDiscoveredResourceResponse listIpamDiscoveredResource(const Models::ListIpamDiscoveredResourceRequest &request);

      /**
       * @summary Lists the members managed by the IPAM trusted service.
       *
       * @param request ListIpamMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamMembersResponse
       */
      Models::ListIpamMembersResponse listIpamMembersWithOptions(const Models::ListIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the members managed by the IPAM trusted service.
       *
       * @param request ListIpamMembersRequest
       * @return ListIpamMembersResponse
       */
      Models::ListIpamMembersResponse listIpamMembers(const Models::ListIpamMembersRequest &request);

      /**
       * @summary Queries CIDR block allocations in an IPAM pool.
       *
       * @param request ListIpamPoolAllocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolAllocationsResponse
       */
      Models::ListIpamPoolAllocationsResponse listIpamPoolAllocationsWithOptions(const Models::ListIpamPoolAllocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR block allocations in an IPAM pool.
       *
       * @param request ListIpamPoolAllocationsRequest
       * @return ListIpamPoolAllocationsResponse
       */
      Models::ListIpamPoolAllocationsResponse listIpamPoolAllocations(const Models::ListIpamPoolAllocationsRequest &request);

      /**
       * @summary Queries the provisioned CIDR blocks of an IPAM pool.
       *
       * @param request ListIpamPoolCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolCidrsResponse
       */
      Models::ListIpamPoolCidrsResponse listIpamPoolCidrsWithOptions(const Models::ListIpamPoolCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the provisioned CIDR blocks of an IPAM pool.
       *
       * @param request ListIpamPoolCidrsRequest
       * @return ListIpamPoolCidrsResponse
       */
      Models::ListIpamPoolCidrsResponse listIpamPoolCidrs(const Models::ListIpamPoolCidrsRequest &request);

      /**
       * @summary Queries IPAM pools.
       *
       * @param request ListIpamPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamPoolsResponse
       */
      Models::ListIpamPoolsResponse listIpamPoolsWithOptions(const Models::ListIpamPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPAM pools.
       *
       * @param request ListIpamPoolsRequest
       * @return ListIpamPoolsResponse
       */
      Models::ListIpamPoolsResponse listIpamPools(const Models::ListIpamPoolsRequest &request);

      /**
       * @summary Queries resources within an IPAM scope.
       *
       * @param request ListIpamResourceCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceCidrsResponse
       */
      Models::ListIpamResourceCidrsResponse listIpamResourceCidrsWithOptions(const Models::ListIpamResourceCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources within an IPAM scope.
       *
       * @param request ListIpamResourceCidrsRequest
       * @return ListIpamResourceCidrsResponse
       */
      Models::ListIpamResourceCidrsResponse listIpamResourceCidrs(const Models::ListIpamResourceCidrsRequest &request);

      /**
       * @summary Retrieves a list of IPAM resource discovery instances.
       *
       * @param request ListIpamResourceDiscoveriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceDiscoveriesResponse
       */
      Models::ListIpamResourceDiscoveriesResponse listIpamResourceDiscoveriesWithOptions(const Models::ListIpamResourceDiscoveriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of IPAM resource discovery instances.
       *
       * @param request ListIpamResourceDiscoveriesRequest
       * @return ListIpamResourceDiscoveriesResponse
       */
      Models::ListIpamResourceDiscoveriesResponse listIpamResourceDiscoveries(const Models::ListIpamResourceDiscoveriesRequest &request);

      /**
       * @summary Lists the associations between resource discoveries and IP Address Managers (IPAMs).
       *
       * @param request ListIpamResourceDiscoveryAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamResourceDiscoveryAssociationsResponse
       */
      Models::ListIpamResourceDiscoveryAssociationsResponse listIpamResourceDiscoveryAssociationsWithOptions(const Models::ListIpamResourceDiscoveryAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the associations between resource discoveries and IP Address Managers (IPAMs).
       *
       * @param request ListIpamResourceDiscoveryAssociationsRequest
       * @return ListIpamResourceDiscoveryAssociationsResponse
       */
      Models::ListIpamResourceDiscoveryAssociationsResponse listIpamResourceDiscoveryAssociations(const Models::ListIpamResourceDiscoveryAssociationsRequest &request);

      /**
       * @summary Queries IPAM scopes.
       *
       * @param request ListIpamScopesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamScopesResponse
       */
      Models::ListIpamScopesResponse listIpamScopesWithOptions(const Models::ListIpamScopesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPAM scopes.
       *
       * @param request ListIpamScopesRequest
       * @return ListIpamScopesResponse
       */
      Models::ListIpamScopesResponse listIpamScopes(const Models::ListIpamScopesRequest &request);

      /**
       * @summary Queries one or more IPAMs.
       *
       * @param request ListIpamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpamsResponse
       */
      Models::ListIpamsResponse listIpamsWithOptions(const Models::ListIpamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more IPAMs.
       *
       * @param request ListIpamsRequest
       * @return ListIpamsResponse
       */
      Models::ListIpamsResponse listIpams(const Models::ListIpamsRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Activates the IP Address Management (IPAM) service.
       *
       * @param request OpenVpcIpamServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVpcIpamServiceResponse
       */
      Models::OpenVpcIpamServiceResponse openVpcIpamServiceWithOptions(const Models::OpenVpcIpamServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the IP Address Management (IPAM) service.
       *
       * @param request OpenVpcIpamServiceRequest
       * @return OpenVpcIpamServiceResponse
       */
      Models::OpenVpcIpamServiceResponse openVpcIpamService(const Models::OpenVpcIpamServiceRequest &request);

      /**
       * @summary Removes members from the IPAM trusted service.
       *
       * @description - If the delegated IPAM administrator removes the last member, the IPAM trusted service is disabled for the resource directory.
       *
       * @param request RemoveIpamMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIpamMembersResponse
       */
      Models::RemoveIpamMembersResponse removeIpamMembersWithOptions(const Models::RemoveIpamMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes members from the IPAM trusted service.
       *
       * @description - If the delegated IPAM administrator removes the last member, the IPAM trusted service is disabled for the resource directory.
       *
       * @param request RemoveIpamMembersRequest
       * @return RemoveIpamMembersResponse
       */
      Models::RemoveIpamMembersResponse removeIpamMembers(const Models::RemoveIpamMembersRequest &request);

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
       * @summary Modifies an IP Address Management (IPAM) instance.
       *
       * @description - The managed region of an IPAM instance cannot be removed.
       *
       * @param request UpdateIpamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamResponse
       */
      Models::UpdateIpamResponse updateIpamWithOptions(const Models::UpdateIpamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP Address Management (IPAM) instance.
       *
       * @description - The managed region of an IPAM instance cannot be removed.
       *
       * @param request UpdateIpamRequest
       * @return UpdateIpamResponse
       */
      Models::UpdateIpamResponse updateIpam(const Models::UpdateIpamRequest &request);

      /**
       * @summary Updates the basic information of an IPAM pool.
       *
       * @param request UpdateIpamPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamPoolResponse
       */
      Models::UpdateIpamPoolResponse updateIpamPoolWithOptions(const Models::UpdateIpamPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of an IPAM pool.
       *
       * @param request UpdateIpamPoolRequest
       * @return UpdateIpamPoolResponse
       */
      Models::UpdateIpamPoolResponse updateIpamPool(const Models::UpdateIpamPoolRequest &request);

      /**
       * @summary Updates a CIDR allocation from an IPAM address pool.
       *
       * @param request UpdateIpamPoolAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamPoolAllocationResponse
       */
      Models::UpdateIpamPoolAllocationResponse updateIpamPoolAllocationWithOptions(const Models::UpdateIpamPoolAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a CIDR allocation from an IPAM address pool.
       *
       * @param request UpdateIpamPoolAllocationRequest
       * @return UpdateIpamPoolAllocationResponse
       */
      Models::UpdateIpamPoolAllocationResponse updateIpamPoolAllocation(const Models::UpdateIpamPoolAllocationRequest &request);

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
      Models::UpdateIpamResourceDiscoveryResponse updateIpamResourceDiscoveryWithOptions(const Models::UpdateIpamResourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource discovery instance.
       *
       * @description - You can add or remove operating regions only for custom resource discovery instances.
       * - When you remove an operating region from a resource discovery instance, you cannot remove the managed region of the resource discovery instance.
       *
       * @param request UpdateIpamResourceDiscoveryRequest
       * @return UpdateIpamResourceDiscoveryResponse
       */
      Models::UpdateIpamResourceDiscoveryResponse updateIpamResourceDiscovery(const Models::UpdateIpamResourceDiscoveryRequest &request);

      /**
       * @summary Updates the basic information of an IPAM scope.
       *
       * @param request UpdateIpamScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpamScopeResponse
       */
      Models::UpdateIpamScopeResponse updateIpamScopeWithOptions(const Models::UpdateIpamScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of an IPAM scope.
       *
       * @param request UpdateIpamScopeRequest
       * @return UpdateIpamScopeResponse
       */
      Models::UpdateIpamScopeResponse updateIpamScope(const Models::UpdateIpamScopeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
