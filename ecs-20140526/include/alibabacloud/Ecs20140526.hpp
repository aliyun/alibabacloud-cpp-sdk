// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECS20140526_HPP_
#define ALIBABACLOUD_ECS20140526_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ecs20140526Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ecs20140526.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Accepts and authorizes the execution of a system event operation. For a system event in the Inquiring state, this operation accepts the default action of the system event and authorizes the system to execute the default action.
       *
       * @param request AcceptInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptInquiredSystemEventResponse
       */
      Models::AcceptInquiredSystemEventResponse acceptInquiredSystemEventWithOptions(const Models::AcceptInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts and authorizes the execution of a system event operation. For a system event in the Inquiring state, this operation accepts the default action of the system event and authorizes the system to execute the default action.
       *
       * @param request AcceptInquiredSystemEventRequest
       * @return AcceptInquiredSystemEventResponse
       */
      Models::AcceptInquiredSystemEventResponse acceptInquiredSystemEvent(const Models::AcceptInquiredSystemEventRequest &request);

      /**
       * @deprecated OpenAPI ActivateRouterInterface is deprecated, please use Vpc::2016-04-28::ActivateRouterInterface instead.
       *
       * @summary Activates a router interface.
       *
       * @param request ActivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterfaceWithOptions(const Models::ActivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ActivateRouterInterface is deprecated, please use Vpc::2016-04-28::ActivateRouterInterface instead.
       *
       * @summary Activates a router interface.
       *
       * @param request ActivateRouterInterfaceRequest
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterface(const Models::ActivateRouterInterfaceRequest &request);

      /**
       * @deprecated OpenAPI AddBandwidthPackageIps is deprecated
       *
       * @summary AddBandwidthPackageIps.
       *
       * @param request AddBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBandwidthPackageIpsResponse
       */
      Models::AddBandwidthPackageIpsResponse addBandwidthPackageIpsWithOptions(const Models::AddBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddBandwidthPackageIps is deprecated
       *
       * @summary AddBandwidthPackageIps.
       *
       * @param request AddBandwidthPackageIpsRequest
       * @return AddBandwidthPackageIpsResponse
       */
      Models::AddBandwidthPackageIpsResponse addBandwidthPackageIps(const Models::AddBandwidthPackageIpsRequest &request);

      /**
       * @deprecated OpenAPI AddTags is deprecated, please use Ecs::2014-05-26::TagResources instead.
       *
       * @summary Adds or overwrites one or more tags on Elastic Compute Service (ECS) resources. You can add tags to instances, cloud disks, snapshots, images, security groups, and other resources for easier management.
       *
       * @description When you invoke this operation, take note of the following items:
       * -   You can add up to 20 tags to each Elastic Compute Service (ECS) resource.
       * -   The tag key (Tag.N.Key) and tag value (Tag.N.Value) must be specified as key-value pairs.
       * -   If the tag key (Tag.N.Key) already exists on the specified resource, the new tag value (Tag.N.Value) automatically overwrites the original tag value.
       *
       * @param request AddTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTags is deprecated, please use Ecs::2014-05-26::TagResources instead.
       *
       * @summary Adds or overwrites one or more tags on Elastic Compute Service (ECS) resources. You can add tags to instances, cloud disks, snapshots, images, security groups, and other resources for easier management.
       *
       * @description When you invoke this operation, take note of the following items:
       * -   You can add up to 20 tags to each Elastic Compute Service (ECS) resource.
       * -   The tag key (Tag.N.Key) and tag value (Tag.N.Value) must be specified as key-value pairs.
       * -   If the tag key (Tag.N.Key) already exists on the specified resource, the new tag value (Tag.N.Value) automatically overwrites the original tag value.
       *
       * @param request AddTagsRequest
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTags(const Models::AddTagsRequest &request);

      /**
       * @summary Creates one or more pay-as-you-go or subscription dedicated hosts. A dedicated host is a physical server exclusively used by a single tenant. You can create ECS instances on a dedicated host and view the attributes of the physical server.
       *
       * @description Before you create a dedicated host, invoke [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query the available resources in a specific region or zone.
       * Creating a dedicated host incurs fees. Familiarize yourself with the billing method of the resources in advance. For more details, see [Billing overview](https://help.aliyun.com/document_detail/68978.html).
       * - You can create up to 100 subscription or pay-as-you-go dedicated hosts at a time.
       * - After the dedicated hosts are created, you can use the returned dedicated host IDs as request parameters and invoke [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the status of the new dedicated hosts.
       * - After you commit a request to create dedicated hosts, a fault is returned if the specified parameter values are invalid or the resources are insufficient. For more information about fault causes, see the error codes section.
       * - After you create a dedicated host, you can invoke [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) to perform migration of ECS instances from a shared host to the dedicated host, or adjust instance deployment between two dedicated hosts.
       *
       * @param request AllocateDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateDedicatedHostsResponse
       */
      Models::AllocateDedicatedHostsResponse allocateDedicatedHostsWithOptions(const Models::AllocateDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more pay-as-you-go or subscription dedicated hosts. A dedicated host is a physical server exclusively used by a single tenant. You can create ECS instances on a dedicated host and view the attributes of the physical server.
       *
       * @description Before you create a dedicated host, invoke [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query the available resources in a specific region or zone.
       * Creating a dedicated host incurs fees. Familiarize yourself with the billing method of the resources in advance. For more details, see [Billing overview](https://help.aliyun.com/document_detail/68978.html).
       * - You can create up to 100 subscription or pay-as-you-go dedicated hosts at a time.
       * - After the dedicated hosts are created, you can use the returned dedicated host IDs as request parameters and invoke [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the status of the new dedicated hosts.
       * - After you commit a request to create dedicated hosts, a fault is returned if the specified parameter values are invalid or the resources are insufficient. For more information about fault causes, see the error codes section.
       * - After you create a dedicated host, you can invoke [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) to perform migration of ECS instances from a shared host to the dedicated host, or adjust instance deployment between two dedicated hosts.
       *
       * @param request AllocateDedicatedHostsRequest
       * @return AllocateDedicatedHostsResponse
       */
      Models::AllocateDedicatedHostsResponse allocateDedicatedHosts(const Models::AllocateDedicatedHostsRequest &request);

      /**
       * @deprecated OpenAPI AllocateEipAddress is deprecated, please use Vpc::2016-04-28::AllocateEipAddress instead.
       *
       * @summary Allocates an elastic IP address (EIP).
       *
       * @description > This operation has been upgraded. We recommend that you no longer use this operation. For more information about the new operation, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       *
       * @param request AllocateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddressWithOptions(const Models::AllocateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AllocateEipAddress is deprecated, please use Vpc::2016-04-28::AllocateEipAddress instead.
       *
       * @summary Allocates an elastic IP address (EIP).
       *
       * @description > This operation has been upgraded. We recommend that you no longer use this operation. For more information about the new operation, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Assigns a public IP address to an ECS instance. We recommend that you call the ModifyInstanceNetworkSpec operation to assign a public IP address.
       *
       * @description ### Before you begin
       * - Before you assign a public IP address, the instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.  
       * - If `"LockReason" : "security"` is included in the `OperationLocks` of an instance that is locked for [security reasons](https://help.aliyun.com/document_detail/25695.html), you cannot assign a public IP address to the instance. 
       * - Make sure that the instance bandwidth is greater than 0 when you call this operation. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to adjust the bandwidth.
       * ### Settings
       * - Only users in the whitelist can specify the public IP address by using the `IpAddress` parameter. If the public bandwidth is greater than 0, you can set `InstanceId` to randomly allocate a public IP address. If the public bandwidth is 0, invoke the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to adjust the bandwidth before you invoke this operation to allocate a public IP address.
       * - Only one public IP address can be allocated to an instance. If the instance already has a public IP address, the existing attached public IP address `IpAddress` is returned. 
       * - The new public IP address takes effect after you restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)).  
       * In addition to assigning a public IP address, you can associate an Elastic IP Address (EIP) with a VPC-connected ECS instance. For more information, see [AssociateEipAddress](https://help.aliyun.com/document_detail/2518064.html).
       *
       * @param request AllocatePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicIpAddressResponse
       */
      Models::AllocatePublicIpAddressResponse allocatePublicIpAddressWithOptions(const Models::AllocatePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a public IP address to an ECS instance. We recommend that you call the ModifyInstanceNetworkSpec operation to assign a public IP address.
       *
       * @description ### Before you begin
       * - Before you assign a public IP address, the instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.  
       * - If `"LockReason" : "security"` is included in the `OperationLocks` of an instance that is locked for [security reasons](https://help.aliyun.com/document_detail/25695.html), you cannot assign a public IP address to the instance. 
       * - Make sure that the instance bandwidth is greater than 0 when you call this operation. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to adjust the bandwidth.
       * ### Settings
       * - Only users in the whitelist can specify the public IP address by using the `IpAddress` parameter. If the public bandwidth is greater than 0, you can set `InstanceId` to randomly allocate a public IP address. If the public bandwidth is 0, invoke the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to adjust the bandwidth before you invoke this operation to allocate a public IP address.
       * - Only one public IP address can be allocated to an instance. If the instance already has a public IP address, the existing attached public IP address `IpAddress` is returned. 
       * - The new public IP address takes effect after you restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)).  
       * In addition to assigning a public IP address, you can associate an Elastic IP Address (EIP) with a VPC-connected ECS instance. For more information, see [AssociateEipAddress](https://help.aliyun.com/document_detail/2518064.html).
       *
       * @param request AllocatePublicIpAddressRequest
       * @return AllocatePublicIpAddressResponse
       */
      Models::AllocatePublicIpAddressResponse allocatePublicIpAddress(const Models::AllocatePublicIpAddressRequest &request);

      /**
       * @summary Applies an automatic snapshot policy to one or more cloud disks.
       *
       * @description - Each cloud disk supports up to 10 automatic snapshot policies.
       * - If the target cloud disk already has automatic snapshot policies applied, invoking this operation adds new policies without replacing existing ones.
       * >Cancel any unnecessary automatic snapshot policies to avoid unexpected costs.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an automatic snapshot policy to one or more cloud disks.
       *
       * @description - Each cloud disk supports up to 10 automatic snapshot policies.
       * - If the target cloud disk already has automatic snapshot policies applied, invoking this operation adds new policies without replacing existing ones.
       * >Cancel any unnecessary automatic snapshot policies to avoid unexpected costs.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Assigns one or more IPv6 addresses to an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * You can specify IPv6 addresses from the CIDR block of the vSwitch to which the Elastic Network Interface (ENI) belongs, or specify the number of IPv6 addresses to enable automatic creation of IPv6 addresses. Note the following items:
       * - The vSwitch to which the ENI belongs must have IPv6 enabled. For more information, see [Enable an IPv6 CIDR block for an existing vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * - The ENI must be in the Active (Available) or InUse state.
       * - When you operate a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the Running or Stopped state.
       * - The number of IPv6 addresses that can be allocated to a single network interface controller (NIC) depends on the instance type of the instance to which the ENI is attached.
       *     - If the ENI is in the Active (Available) state, up to 10 IPv6 addresses can be allocated.
       *     - If the ENI is attached to an instance, the number of IPv6 addresses that can be allocated is limited by the instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
       * - After you successfully invoke this operation, you can obtain the allocated IPv6 address information from the response.
       *
       * @param request AssignIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignIpv6AddressesResponse
       */
      Models::AssignIpv6AddressesResponse assignIpv6AddressesWithOptions(const Models::AssignIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns one or more IPv6 addresses to an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * You can specify IPv6 addresses from the CIDR block of the vSwitch to which the Elastic Network Interface (ENI) belongs, or specify the number of IPv6 addresses to enable automatic creation of IPv6 addresses. Note the following items:
       * - The vSwitch to which the ENI belongs must have IPv6 enabled. For more information, see [Enable an IPv6 CIDR block for an existing vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * - The ENI must be in the Active (Available) or InUse state.
       * - When you operate a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the Running or Stopped state.
       * - The number of IPv6 addresses that can be allocated to a single network interface controller (NIC) depends on the instance type of the instance to which the ENI is attached.
       *     - If the ENI is in the Active (Available) state, up to 10 IPv6 addresses can be allocated.
       *     - If the ENI is attached to an instance, the number of IPv6 addresses that can be allocated is limited by the instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
       * - After you successfully invoke this operation, you can obtain the allocated IPv6 address information from the response.
       *
       * @param request AssignIpv6AddressesRequest
       * @return AssignIpv6AddressesResponse
       */
      Models::AssignIpv6AddressesResponse assignIpv6Addresses(const Models::AssignIpv6AddressesRequest &request);

      /**
       * @summary Allocates one or more secondary private IP addresses to an Elastic Network Interface (ENI). You can specify available private IP addresses within the vSwitch to which the ENI belongs, or specify the number of private endpoints to automatically allocate private IP addresses.
       *
       * @description ## Operation description
       * - Only Elastic Network Interfaces (ENIs) in the Available or InUse state are supported.
       * - When you operate the primary ENI, the instance to which the ENI is attached must be in the Running or Stopped state.
       * - When an ENI is in the Available state, you can allocate up to 49 secondary private IP addresses to the ENI. After the ENI is attached to an instance, the number of secondary private IP addresses that can be allocated to the ENI is subject to the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       * - After you successfully call this operation, you can obtain the allocated secondary private IP address information from the response.
       *
       * @param request AssignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddressesWithOptions(const Models::AssignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates one or more secondary private IP addresses to an Elastic Network Interface (ENI). You can specify available private IP addresses within the vSwitch to which the ENI belongs, or specify the number of private endpoints to automatically allocate private IP addresses.
       *
       * @description ## Operation description
       * - Only Elastic Network Interfaces (ENIs) in the Available or InUse state are supported.
       * - When you operate the primary ENI, the instance to which the ENI is attached must be in the Running or Stopped state.
       * - When an ENI is in the Available state, you can allocate up to 49 secondary private IP addresses to the ENI. After the ENI is attached to an instance, the number of secondary private IP addresses that can be allocated to the ENI is subject to the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       * - After you successfully call this operation, you can obtain the allocated secondary private IP address information from the response.
       *
       * @param request AssignPrivateIpAddressesRequest
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddresses(const Models::AssignPrivateIpAddressesRequest &request);

      /**
       * @deprecated OpenAPI AssociateEipAddress is deprecated, please use Vpc::2016-04-28::AssociateEipAddress instead.
       *
       * @summary AssociateEipAddress
       *
       * @param request AssociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddressWithOptions(const Models::AssociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssociateEipAddress is deprecated, please use Vpc::2016-04-28::AssociateEipAddress instead.
       *
       * @summary AssociateEipAddress
       *
       * @param request AssociateEipAddressRequest
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddress(const Models::AssociateEipAddressRequest &request);

      /**
       * @deprecated OpenAPI AssociateHaVip is deprecated, please use Vpc::2016-04-28::AssociateHaVip instead.
       *
       * @summary Associates a high-availability virtual IP address (HaVip) with an ECS instance or an elastic network interface (ENI).
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssociateHaVip is deprecated, please use Vpc::2016-04-28::AssociateHaVip instead.
       *
       * @summary Associates a high-availability virtual IP address (HaVip) with an ECS instance or an elastic network interface (ENI).
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Invokes AttachClassicLinkVpc to connect a classic network type instance to a virtual private cloud (VPC) so that the instance can communicate with cloud resources in the VPC through private network peering.
       *
       * @description When you invoke this operation, take note of the following items:
       * -  Before you connect a classic network type instance, the instance must be in the **Running** or **Stopped** state. 
       * -  The destination VPC must have ClassicLink enabled. For more information, see [Enable ClassicLink feature](https://help.aliyun.com/document_detail/65413.html). 
       * -  The classic network type instance and the VPC must be in the same region.
       *
       * @param request AttachClassicLinkVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachClassicLinkVpcResponse
       */
      Models::AttachClassicLinkVpcResponse attachClassicLinkVpcWithOptions(const Models::AttachClassicLinkVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes AttachClassicLinkVpc to connect a classic network type instance to a virtual private cloud (VPC) so that the instance can communicate with cloud resources in the VPC through private network peering.
       *
       * @description When you invoke this operation, take note of the following items:
       * -  Before you connect a classic network type instance, the instance must be in the **Running** or **Stopped** state. 
       * -  The destination VPC must have ClassicLink enabled. For more information, see [Enable ClassicLink feature](https://help.aliyun.com/document_detail/65413.html). 
       * -  The classic network type instance and the VPC must be in the same region.
       *
       * @param request AttachClassicLinkVpcRequest
       * @return AttachClassicLinkVpcResponse
       */
      Models::AttachClassicLinkVpcResponse attachClassicLinkVpc(const Models::AttachClassicLinkVpcRequest &request);

      /**
       * @summary Attaches a data disk or system disk to an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * - The instance and the disk must be in the same zone.
       * - The disk must be in the **Available** (`Available`) state. 
       * - When you attach a data disk:
       *     - The destination ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state. 
       *     - If the disk is separately purchased, the billing method must be pay-as-you-go.
       *     - A system disk that was uninstalled from an ECS instance can be attached as a data disk without billing method restrictions. 
       *     - An elastic ephemeral disk that has been detached can only be re-attached to its original instance.
       * - When you attach a system disk:
       *     - The destination ECS instance must be the original instance from which the system disk was detached.
       *     - The destination ECS instance must be in the **Stopped** (`Stopped`) state. 
       *     - You must specify the logon credential for the instance.
       *     - Elastic ephemeral disks cannot be attached as system disks.
       *     - For more information about attaching system disks, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * - When you query ECS instance information, if the response contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       * <props="china">
       * - A disk with the multi-attach attribute enabled can only be attached to instances that support the NVMe protocol. 
       *    For more information, see [Standard SSDs that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       *
       * @param request AttachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDiskWithOptions(const Models::AttachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a data disk or system disk to an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * - The instance and the disk must be in the same zone.
       * - The disk must be in the **Available** (`Available`) state. 
       * - When you attach a data disk:
       *     - The destination ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state. 
       *     - If the disk is separately purchased, the billing method must be pay-as-you-go.
       *     - A system disk that was uninstalled from an ECS instance can be attached as a data disk without billing method restrictions. 
       *     - An elastic ephemeral disk that has been detached can only be re-attached to its original instance.
       * - When you attach a system disk:
       *     - The destination ECS instance must be the original instance from which the system disk was detached.
       *     - The destination ECS instance must be in the **Stopped** (`Stopped`) state. 
       *     - You must specify the logon credential for the instance.
       *     - Elastic ephemeral disks cannot be attached as system disks.
       *     - For more information about attaching system disks, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * - When you query ECS instance information, if the response contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       * <props="china">
       * - A disk with the multi-attach attribute enabled can only be attached to instances that support the NVMe protocol. 
       *    For more information, see [Standard SSDs that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       *
       * @param request AttachDiskRequest
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDisk(const Models::AttachDiskRequest &request);

      /**
       * @summary Attaches an instance RAM role to one or more ECS instances.
       *
       * @description You can call [DescribeInstanceRamRole](https://help.aliyun.com/document_detail/2679686.html) to query the [instance RAM role](https://help.aliyun.com/document_detail/61175.html) attached to an instance.
       * > If the instance already has an instance RAM role attached, an error is returned indicating that you cannot attach a new role.
       *
       * @param request AttachInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstanceRamRoleResponse
       */
      Models::AttachInstanceRamRoleResponse attachInstanceRamRoleWithOptions(const Models::AttachInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an instance RAM role to one or more ECS instances.
       *
       * @description You can call [DescribeInstanceRamRole](https://help.aliyun.com/document_detail/2679686.html) to query the [instance RAM role](https://help.aliyun.com/document_detail/61175.html) attached to an instance.
       * > If the instance already has an instance RAM role attached, an error is returned indicating that you cannot attach a new role.
       *
       * @param request AttachInstanceRamRoleRequest
       * @return AttachInstanceRamRoleResponse
       */
      Models::AttachInstanceRamRoleResponse attachInstanceRamRole(const Models::AttachInstanceRamRoleRequest &request);

      /**
       * @summary Attaches an SSH key pair to one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * -  Windows instances do not support SSH key pairs. 
       * -  After you attach an SSH key pair, authentication by using a username and password is disabled. 
       * -  If an instance is in the **Running** state, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the SSH key pair to take effect.  
       * -  If an instance is in the **Stopped** state, start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the SSH key pair to take effect.  
       * -  If an instance already has an SSH key pair attached, the new SSH key pair automatically replaces the original one.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an SSH key pair to one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * -  Windows instances do not support SSH key pairs. 
       * -  After you attach an SSH key pair, authentication by using a username and password is disabled. 
       * -  If an instance is in the **Running** state, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the SSH key pair to take effect.  
       * -  If an instance is in the **Stopped** state, start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the SSH key pair to take effect.  
       * -  If an instance already has an SSH key pair attached, the new SSH key pair automatically replaces the original one.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Attaches an Elastic Network Interface (ENI) to a VPC-type ECS instance by calling the AttachNetworkInterface operation with parameters such as NetworkInterfaceId, InstanceId, and NetworkCardIndex.
       *
       * @description When you call this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **Active** (`Available`) state. An ENI can be attached to only one instance that resides in the same zone and VPC as the ENI.
       * - The instance must be in the Running or Stopped state. Some instance types require the instance to be in the Stopped state when you attach an Elastic Network Interface (ENI). For more information, see the ECS instance types that require instance stop section in [Attach an ENI](https://help.aliyun.com/document_detail/58503.html).
       *     > If the instance was last started before April 1, 2018 (including but not limited to starting a newly purchased instance, restarting, or powering on), you must invoke RebootInstance to restart the instance that has been in the Running state. Otherwise, the Elastic Network Interface (ENI) cannot be attached.
       * - Multiple Elastic Network Interfaces (ENIs) can be attached to a single instance at the same time. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       *   
       * - The vSwitch to which the ENI belongs must be in the same zone and VPC as the instance.
       * - This is an asynchronous operation. After you send a successful request, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the operation result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/esgu/AttachNetworkInterface.jpg)
       *     - Attaching indicates that the attach ENI request has been sent and the ENI is being attached to the ECS instance.
       *     - InUse indicates that the ENI is attached to the ECS instance.
       *     - Available indicates that the ENI failed to be attached to the ECS instance.
       * **For details about sample code, see** [Attach an Elastic Network Interface (ENI)](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterfaceWithOptions(const Models::AttachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an Elastic Network Interface (ENI) to a VPC-type ECS instance by calling the AttachNetworkInterface operation with parameters such as NetworkInterfaceId, InstanceId, and NetworkCardIndex.
       *
       * @description When you call this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **Active** (`Available`) state. An ENI can be attached to only one instance that resides in the same zone and VPC as the ENI.
       * - The instance must be in the Running or Stopped state. Some instance types require the instance to be in the Stopped state when you attach an Elastic Network Interface (ENI). For more information, see the ECS instance types that require instance stop section in [Attach an ENI](https://help.aliyun.com/document_detail/58503.html).
       *     > If the instance was last started before April 1, 2018 (including but not limited to starting a newly purchased instance, restarting, or powering on), you must invoke RebootInstance to restart the instance that has been in the Running state. Otherwise, the Elastic Network Interface (ENI) cannot be attached.
       * - Multiple Elastic Network Interfaces (ENIs) can be attached to a single instance at the same time. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       *   
       * - The vSwitch to which the ENI belongs must be in the same zone and VPC as the instance.
       * - This is an asynchronous operation. After you send a successful request, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the operation result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/esgu/AttachNetworkInterface.jpg)
       *     - Attaching indicates that the attach ENI request has been sent and the ENI is being attached to the ECS instance.
       *     - InUse indicates that the ENI is attached to the ECS instance.
       *     - Available indicates that the ENI failed to be attached to the ECS instance.
       * **For details about sample code, see** [Attach an Elastic Network Interface (ENI)](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterface(const Models::AttachNetworkInterfaceRequest &request);

      /**
       * @summary Adds one or more inbound rules to a security group. You can use this operation to specify inbound access permissions for a security group, allowing or denying other devices from sending inbound traffic to instances in the security group, which enables fine-grained network access control.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of inbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence. Access is denied for rules with the same priority.
       * ### Usage notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an inbound rule:
       * - Source settings: Specify one of the following: SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization for access from other security groups. Basic security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add inbound rules with different sources to a specified security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"ap-southeast-1", //Set the region
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //Set the security group
       *     "Permissions":[
       *          {
       *            "SourceCidrIp":"10.0.0.0/8", //Set the source IPv4 address
       *            "PortRange":"22/22", //Set the port range
       *            "IpProtocol":"TCP", //Set the protocol type
       *            "Policy":"Accept" //Set the access policy
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"ap-southeast-1",
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *          {
       *            "SourceGroupId":"sg-bp17vs63txqxbd****", //Set the source security group
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", //Set the source prefix list
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          }
       *     ]
       *     ```
       *
       * @param request AuthorizeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroupWithOptions(const Models::AuthorizeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more inbound rules to a security group. You can use this operation to specify inbound access permissions for a security group, allowing or denying other devices from sending inbound traffic to instances in the security group, which enables fine-grained network access control.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of inbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence. Access is denied for rules with the same priority.
       * ### Usage notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an inbound rule:
       * - Source settings: Specify one of the following: SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization for access from other security groups. Basic security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add inbound rules with different sources to a specified security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"ap-southeast-1", //Set the region
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //Set the security group
       *     "Permissions":[
       *          {
       *            "SourceCidrIp":"10.0.0.0/8", //Set the source IPv4 address
       *            "PortRange":"22/22", //Set the port range
       *            "IpProtocol":"TCP", //Set the protocol type
       *            "Policy":"Accept" //Set the access policy
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"ap-southeast-1",
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *          {
       *            "SourceGroupId":"sg-bp17vs63txqxbd****", //Set the source security group
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", //Set the source prefix list
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          }
       *     ]
       *     ```
       *
       * @param request AuthorizeSecurityGroupRequest
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroup(const Models::AuthorizeSecurityGroupRequest &request);

      /**
       * @summary Adds one or more outbound rules to a security group. This operation allows you to specify outbound access permissions for a security group to allow or deny instances in the security group from sending outbound traffic to other devices, enabling fine-grained control over network access.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, refer to [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of outbound rule ranges from 1 to 100. A smaller number indicates a higher priority. When two rules have the same priority, the deny (drop) rule takes precedence.
       * ### Before you begin
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How rules are determined
       * The following parameters are required to define an outbound rule:
       * - Destination settings: Specify one of the following: DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Authorization policy: Policy.
       * > Advanced security groups do not support authorization to other security groups. Custom security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add outbound rules with different destinations to a security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"ap-southeast-1",  // Specify the region.
       *     "SecurityGroupId":"sg-bp17vs63txqxbds9***", // Specify the security group.
       *     "Permissions":[
       *          {
       *            "DestCidrIp":"10.0.0.0/8", // Specify the destination IPv4 address.
       *            "PortRange":"-1/-1", // Specify the port range.
       *            "IpProtocol":"ICMP", // Specify the protocol type.
       *            "Policy":"Accept" // Specify the access policy.
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"ap-southeast-1",
       *     "SecurityGroupId":"sg-bp17vs63txqxbds9***",
       *     "Permissions":[
       *          {
       *            "DestGroupId":"sg-bp67acfmxazb4pi***", // Specify the destination security group.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the destination prefix list.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          }
       *     ]
       *     ```
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgressWithOptions(const Models::AuthorizeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more outbound rules to a security group. This operation allows you to specify outbound access permissions for a security group to allow or deny instances in the security group from sending outbound traffic to other devices, enabling fine-grained control over network access.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, refer to [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of outbound rule ranges from 1 to 100. A smaller number indicates a higher priority. When two rules have the same priority, the deny (drop) rule takes precedence.
       * ### Before you begin
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How rules are determined
       * The following parameters are required to define an outbound rule:
       * - Destination settings: Specify one of the following: DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Authorization policy: Policy.
       * > Advanced security groups do not support authorization to other security groups. Custom security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add outbound rules with different destinations to a security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"ap-southeast-1",  // Specify the region.
       *     "SecurityGroupId":"sg-bp17vs63txqxbds9***", // Specify the security group.
       *     "Permissions":[
       *          {
       *            "DestCidrIp":"10.0.0.0/8", // Specify the destination IPv4 address.
       *            "PortRange":"-1/-1", // Specify the port range.
       *            "IpProtocol":"ICMP", // Specify the protocol type.
       *            "Policy":"Accept" // Specify the access policy.
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"ap-southeast-1",
       *     "SecurityGroupId":"sg-bp17vs63txqxbds9***",
       *     "Permissions":[
       *          {
       *            "DestGroupId":"sg-bp67acfmxazb4pi***", // Specify the destination security group.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the destination prefix list.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          }
       *     ]
       *     ```
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgress(const Models::AuthorizeSecurityGroupEgressRequest &request);

      /**
       * @summary Cancels the automatic snapshot policy for one or more cloud disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the automatic snapshot policy for one or more cloud disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels an ongoing CopyImage task.
       *
       * @description When you call this operation, take note of the following items:
       * - After you cancel the image copy task, the image that is being created in the destination region is automatically deleted, and the source image remains unchanged.
       * - If the image has already been copied, the operation fails and an error message is returned.
       *
       * @param request CancelCopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImageWithOptions(const Models::CancelCopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an ongoing CopyImage task.
       *
       * @description When you call this operation, take note of the following items:
       * - After you cancel the image copy task, the image that is being created in the destination region is automatically deleted, and the source image remains unchanged.
       * - If the image has already been copied, the operation fails and an error message is returned.
       *
       * @param request CancelCopyImageRequest
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImage(const Models::CancelCopyImageRequest &request);

      /**
       * @summary Cancels an image building task.
       *
       * @description Before you call this operation, make sure that the image building task you want to cancel is in the PREPARING, REPAIRING, or BUILDING state.
       *
       * @param request CancelImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelImagePipelineExecutionResponse
       */
      Models::CancelImagePipelineExecutionResponse cancelImagePipelineExecutionWithOptions(const Models::CancelImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an image building task.
       *
       * @description Before you call this operation, make sure that the image building task you want to cancel is in the PREPARING, REPAIRING, or BUILDING state.
       *
       * @param request CancelImagePipelineExecutionRequest
       * @return CancelImagePipelineExecutionResponse
       */
      Models::CancelImagePipelineExecutionResponse cancelImagePipelineExecution(const Models::CancelImagePipelineExecutionRequest &request);

      /**
       * @deprecated OpenAPI CancelPhysicalConnection is deprecated, please use Vpc::2016-04-28::CancelPhysicalConnection instead.
       *
       * @summary Cancels an application for an Express Connect circuit. You can cancel an Express Connect circuit only when it is in the `Initial` or `Approved` state.
       *
       * @param request CancelPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnectionWithOptions(const Models::CancelPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelPhysicalConnection is deprecated, please use Vpc::2016-04-28::CancelPhysicalConnection instead.
       *
       * @summary Cancels an application for an Express Connect circuit. You can cancel an Express Connect circuit only when it is in the `Initial` or `Approved` state.
       *
       * @param request CancelPhysicalConnectionRequest
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnection(const Models::CancelPhysicalConnectionRequest &request);

      /**
       * @summary Cancels one or more simulated system events that are in the Scheduled or Executing state. After a system event is canceled, the simulated event enters the Canceled state.
       *
       * @param request CancelSimulatedSystemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSimulatedSystemEventsResponse
       */
      Models::CancelSimulatedSystemEventsResponse cancelSimulatedSystemEventsWithOptions(const Models::CancelSimulatedSystemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels one or more simulated system events that are in the Scheduled or Executing state. After a system event is canceled, the simulated event enters the Canceled state.
       *
       * @param request CancelSimulatedSystemEventsRequest
       * @return CancelSimulatedSystemEventsResponse
       */
      Models::CancelSimulatedSystemEventsResponse cancelSimulatedSystemEvents(const Models::CancelSimulatedSystemEventsRequest &request);

      /**
       * @summary Cancels a running task. You can cancel running image import tasks (ImportImage) and image export tasks (ExportImage).
       *
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running task. You can cancel running image import tasks (ImportImage) and image export tasks (ExportImage).
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary Disk cloning allows you to quickly replicate a disk with the same data as the source disk in the same zone. The cloned disk supports custom capacity, type, and encryption attributes. After the cloned disk is attached to an instance, you can quickly replicate business data or horizontally scale services.
       *
       * @description > The disk cloning feature itself is free of charge, but the cloned disk is billed based on block storage billing rules. Billable items vary by disk type and include disk capacity fees, provisioned performance fees, and performance burst fees. Except for performance burst fees, which are billed after a burst occurs, other fees start to accrue after the disk is created, regardless of whether the disk is attached to an instance.
       * ### Usage
       * - This is an asynchronous operation. After a successful call, use the taskGroupId and call the DescribeTasks operation to query the execution result.
       * ### Features
       * - Cloning supports only ESSD series disks (cloud_essd, cloud_auto, cloud_essd_entry, cloud_regional_disk_auto) as the source, and the `cloned disk` supports only ESSD series disk types.
       *   - Non-regional disks can only be cloned to non-regional types. Regional disks can only be cloned to regional disk types.
       *   - Local disks and elastic ephemeral disks cannot be cloned or used as clone sources.
       * - You can specify the `cloned disk` type and performance level.
       * - You can specify the `cloned disk` capacity, but the capacity must be greater than or equal to that of the `source disk`.
       * - You can configure provisioned performance and performance burst for the `cloned disk`, provided that the target disk type supports provisioned performance and performance burst.
       * - You can specify encryption or change the encryption key for the `cloned disk`. If the `source disk` is encrypted, you cannot clone it into an unencrypted disk, but you can change the encryption key.
       * - You can use a subscription disk as the `source disk`. Even if the subscription disk has expired, it can still be used as the `source disk`.
       * - The `cloned disk` does not support reinitialization.
       * - Cloning does not support storage sets or dedicated block storage clusters, but disks in them can be used as the `source disk`. The cloned disk will not be in the storage set or dedicated block storage cluster.
       * - `Source disk` status restrictions:
       *   - The `source disk` status is "In Use" and the corresponding instance status is "Running" or "Stopped".
       *   - The `source disk` status is "Available" and the disk has been previously attached.
       *   - Disks undergoing specification changes cannot be used as the `source disk`.
       *   - Disks undergoing expansion cannot be used as the `source disk`.
       * - Disk cloning is not supported for instance hibernation scenarios. If a disk is on a hibernated instance, it cannot be used as the `source disk`.
       *
       * @param request CloneDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDisksResponse
       */
      Models::CloneDisksResponse cloneDisksWithOptions(const Models::CloneDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disk cloning allows you to quickly replicate a disk with the same data as the source disk in the same zone. The cloned disk supports custom capacity, type, and encryption attributes. After the cloned disk is attached to an instance, you can quickly replicate business data or horizontally scale services.
       *
       * @description > The disk cloning feature itself is free of charge, but the cloned disk is billed based on block storage billing rules. Billable items vary by disk type and include disk capacity fees, provisioned performance fees, and performance burst fees. Except for performance burst fees, which are billed after a burst occurs, other fees start to accrue after the disk is created, regardless of whether the disk is attached to an instance.
       * ### Usage
       * - This is an asynchronous operation. After a successful call, use the taskGroupId and call the DescribeTasks operation to query the execution result.
       * ### Features
       * - Cloning supports only ESSD series disks (cloud_essd, cloud_auto, cloud_essd_entry, cloud_regional_disk_auto) as the source, and the `cloned disk` supports only ESSD series disk types.
       *   - Non-regional disks can only be cloned to non-regional types. Regional disks can only be cloned to regional disk types.
       *   - Local disks and elastic ephemeral disks cannot be cloned or used as clone sources.
       * - You can specify the `cloned disk` type and performance level.
       * - You can specify the `cloned disk` capacity, but the capacity must be greater than or equal to that of the `source disk`.
       * - You can configure provisioned performance and performance burst for the `cloned disk`, provided that the target disk type supports provisioned performance and performance burst.
       * - You can specify encryption or change the encryption key for the `cloned disk`. If the `source disk` is encrypted, you cannot clone it into an unencrypted disk, but you can change the encryption key.
       * - You can use a subscription disk as the `source disk`. Even if the subscription disk has expired, it can still be used as the `source disk`.
       * - The `cloned disk` does not support reinitialization.
       * - Cloning does not support storage sets or dedicated block storage clusters, but disks in them can be used as the `source disk`. The cloned disk will not be in the storage set or dedicated block storage cluster.
       * - `Source disk` status restrictions:
       *   - The `source disk` status is "In Use" and the corresponding instance status is "Running" or "Stopped".
       *   - The `source disk` status is "Available" and the disk has been previously attached.
       *   - Disks undergoing specification changes cannot be used as the `source disk`.
       *   - Disks undergoing expansion cannot be used as the `source disk`.
       * - Disk cloning is not supported for instance hibernation scenarios. If a disk is on a hibernated instance, it cannot be used as the `source disk`.
       *
       * @param request CloneDisksRequest
       * @return CloneDisksResponse
       */
      Models::CloneDisksResponse cloneDisks(const Models::CloneDisksRequest &request);

      /**
       * @deprecated OpenAPI ConnectRouterInterface is deprecated, please use Vpc::2016-04-28::ConnectRouterInterface instead.
       *
       * @summary ConnectRouterInterface
       *
       * @param request ConnectRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterfaceWithOptions(const Models::ConnectRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ConnectRouterInterface is deprecated, please use Vpc::2016-04-28::ConnectRouterInterface instead.
       *
       * @summary ConnectRouterInterface
       *
       * @param request ConnectRouterInterfaceRequest
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterface(const Models::ConnectRouterInterfaceRequest &request);

      /**
       * @summary Converts the public IP address (PublicIP) of a VPC-type ECS instance to an Elastic IP Address (EIP).
       *
       * @description ## Operation description
       * After a public IP address is converted to an EIP, the EIP is billed separately. Make sure that you fully understand the [billable methods of EIPs](https://help.aliyun.com/document_detail/122035.html).
       * When you invoke this operation, the ECS instance must meet the following requirements:
       * - The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * - No EIP is attached to the instance.
       * - The instance has no pending configuration change nodes.
       * - The public bandwidth cannot be 0 Mbit/s.
       * - For subscription instances, the billing method for public bandwidth must be `pay-by-traffic`. Public IP addresses that use the `pay-by-bandwidth` billing method cannot be transformed to EIPs. Pay-as-you-go instances are not affected by this rule. For more information, refer to [Transform the public bandwidth billing method](https://help.aliyun.com/document_detail/178883.html).
       * - The VPC-type subscription ECS instance does not expire within 24 hours.
       *
       * @param request ConvertNatPublicIpToEipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertNatPublicIpToEipResponse
       */
      Models::ConvertNatPublicIpToEipResponse convertNatPublicIpToEipWithOptions(const Models::ConvertNatPublicIpToEipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts the public IP address (PublicIP) of a VPC-type ECS instance to an Elastic IP Address (EIP).
       *
       * @description ## Operation description
       * After a public IP address is converted to an EIP, the EIP is billed separately. Make sure that you fully understand the [billable methods of EIPs](https://help.aliyun.com/document_detail/122035.html).
       * When you invoke this operation, the ECS instance must meet the following requirements:
       * - The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * - No EIP is attached to the instance.
       * - The instance has no pending configuration change nodes.
       * - The public bandwidth cannot be 0 Mbit/s.
       * - For subscription instances, the billing method for public bandwidth must be `pay-by-traffic`. Public IP addresses that use the `pay-by-bandwidth` billing method cannot be transformed to EIPs. Pay-as-you-go instances are not affected by this rule. For more information, refer to [Transform the public bandwidth billing method](https://help.aliyun.com/document_detail/178883.html).
       * - The VPC-type subscription ECS instance does not expire within 24 hours.
       *
       * @param request ConvertNatPublicIpToEipRequest
       * @return ConvertNatPublicIpToEipResponse
       */
      Models::ConvertNatPublicIpToEipResponse convertNatPublicIpToEip(const Models::ConvertNatPublicIpToEipRequest &request);

      /**
       * @summary Copies a custom image from one region to another. You can use this operation to deploy ECS instances across regions or replicate ECS instances across regions.
       *
       * @description ## Operation description
       * You can use the copied image in the destination region to create ECS instances ([RunInstances](https://help.aliyun.com/document_detail/25499.html)) or replace system disks of instances ([ReplaceSystemDisk](https://help.aliyun.com/document_detail/25521.html)). 
       * When you call this operation, take note of the following items:
       * - The custom image must be in the **Available** (`Available`) state.  
       * - If the image is a custom image under your account, you can copy it across regions. If the image is shared with you by another user, you can copy it only within the same region. 
       * - During the image copy process, you cannot directly delete ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)) the image being copied. However, you can cancel the copy task ([CancelCopyImage](https://help.aliyun.com/document_detail/25539.html)) to delete the image being copied.  
       * - A maximum of five image copy tasks can run concurrently in the same region. Additional tasks are queued and run in sequence after any of the preceding tasks are completed.
       * - You can use the `ResourceGroupId` parameter to specify the resource group to which the copied image belongs. If you do not set the `ResourceGroupId` parameter, the copied image belongs to the default resource group.
       *
       * @param request CopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImageWithOptions(const Models::CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a custom image from one region to another. You can use this operation to deploy ECS instances across regions or replicate ECS instances across regions.
       *
       * @description ## Operation description
       * You can use the copied image in the destination region to create ECS instances ([RunInstances](https://help.aliyun.com/document_detail/25499.html)) or replace system disks of instances ([ReplaceSystemDisk](https://help.aliyun.com/document_detail/25521.html)). 
       * When you call this operation, take note of the following items:
       * - The custom image must be in the **Available** (`Available`) state.  
       * - If the image is a custom image under your account, you can copy it across regions. If the image is shared with you by another user, you can copy it only within the same region. 
       * - During the image copy process, you cannot directly delete ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)) the image being copied. However, you can cancel the copy task ([CancelCopyImage](https://help.aliyun.com/document_detail/25539.html)) to delete the image being copied.  
       * - A maximum of five image copy tasks can run concurrently in the same region. Additional tasks are queued and run in sequence after any of the preceding tasks are completed.
       * - You can use the `ResourceGroupId` parameter to specify the resource group to which the copied image belongs. If you do not set the `ResourceGroupId` parameter, the copied image belongs to the default resource group.
       *
       * @param request CopyImageRequest
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImage(const Models::CopyImageRequest &request);

      /**
       * @summary Copies a standard snapshot or encrypted snapshot from one region to another.
       *
       * @description When you call this operation, take note of the following items:
       * - The new snapshot cannot be used to roll back the cloud disk that is associated with the source snapshot.
       * - Local snapshots cannot be copied.
       *
       * @param request CopySnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshotWithOptions(const Models::CopySnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a standard snapshot or encrypted snapshot from one region to another.
       *
       * @description When you call this operation, take note of the following items:
       * - The new snapshot cannot be used to roll back the cloud disk that is associated with the source snapshot.
       * - Local snapshots cannot be copied.
       *
       * @param request CopySnapshotRequest
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshot(const Models::CopySnapshotRequest &request);

      /**
       * @summary Creates an activation code that is used to register non-Alibaba Cloud servers as Alibaba Cloud managed instances.
       *
       * @description ## Operation description
       * After you use an activation code to register a non-Alibaba Cloud server as an Alibaba Cloud managed instance, you can use various online services provided by Alibaba Cloud in the managed instance, such as Cloud Assistant, CloudOps Orchestration Service, and Alibaba Cloud DevOps.
       * The non-Alibaba Cloud server must run one of the following operating system versions and have Internet access to be registered as an Alibaba Cloud managed instance:
       * - Alibaba Cloud Linux 2/3 and later
       * - CentOS 6/7/8 and later
       * - Debian 8/9/10 and later
       * - Ubuntu 12/14/16/18 and later
       * - CoreOS
       * - OpenSUSE
       * - RedHat 5/6/7 and later
       * - SUSE Linux Enterprise Server 11/12/15 and later
       * - Windows Server 2012/2016/2019 and later
       * In each Alibaba Cloud region, you can have up to 10 activation codes for managed instances. Each activation code can be used to register up to 10 instances. The maximum validity period of a single activation code is 4 hours.
       * > On the **Elastic Compute Service (ECS) Cloud Assistant** page, click the **Managed Instances** tab, and then click **Register New Instance** to view the usage data of activation codes.
       *
       * @param request CreateActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActivationResponse
       */
      Models::CreateActivationResponse createActivationWithOptions(const Models::CreateActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an activation code that is used to register non-Alibaba Cloud servers as Alibaba Cloud managed instances.
       *
       * @description ## Operation description
       * After you use an activation code to register a non-Alibaba Cloud server as an Alibaba Cloud managed instance, you can use various online services provided by Alibaba Cloud in the managed instance, such as Cloud Assistant, CloudOps Orchestration Service, and Alibaba Cloud DevOps.
       * The non-Alibaba Cloud server must run one of the following operating system versions and have Internet access to be registered as an Alibaba Cloud managed instance:
       * - Alibaba Cloud Linux 2/3 and later
       * - CentOS 6/7/8 and later
       * - Debian 8/9/10 and later
       * - Ubuntu 12/14/16/18 and later
       * - CoreOS
       * - OpenSUSE
       * - RedHat 5/6/7 and later
       * - SUSE Linux Enterprise Server 11/12/15 and later
       * - Windows Server 2012/2016/2019 and later
       * In each Alibaba Cloud region, you can have up to 10 activation codes for managed instances. Each activation code can be used to register up to 10 instances. The maximum validity period of a single activation code is 4 hours.
       * > On the **Elastic Compute Service (ECS) Cloud Assistant** page, click the **Managed Instances** tab, and then click **Register New Instance** to view the usage data of activation codes.
       *
       * @param request CreateActivationRequest
       * @return CreateActivationResponse
       */
      Models::CreateActivationResponse createActivation(const Models::CreateActivationRequest &request);

      /**
       * @summary Creates an auto provisioning group.
       *
       * @description - Auto provisioning is a solution that uses spot instances and pay-as-you-go instances to quickly deploy instance clusters. It supports one-click deployment of instance clusters across billing methods, zones, and instance families. For more information, see [Use the auto provisioning group API to create ECS instances in batches](https://help.aliyun.com/document_detail/200772.html).
       * - Auto provisioning uses provisioning groups to schedule and maintain compute resources. You can use auto provisioning groups to provide stable computing power and mitigate the instability caused by the revoke mechanism of spot instances.
       * - Auto provisioning is a free feature, but you are charged for the instance resources created by auto provisioning groups. For more information, see [Spot instance billing](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * - If you specify both a launch template (`LaunchTemplateId`) and launch configuration information (`LaunchConfiguration.*`), the launch template takes precedence.
       *
       * @param tmpReq CreateAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoProvisioningGroupResponse
       */
      Models::CreateAutoProvisioningGroupResponse createAutoProvisioningGroupWithOptions(const Models::CreateAutoProvisioningGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an auto provisioning group.
       *
       * @description - Auto provisioning is a solution that uses spot instances and pay-as-you-go instances to quickly deploy instance clusters. It supports one-click deployment of instance clusters across billing methods, zones, and instance families. For more information, see [Use the auto provisioning group API to create ECS instances in batches](https://help.aliyun.com/document_detail/200772.html).
       * - Auto provisioning uses provisioning groups to schedule and maintain compute resources. You can use auto provisioning groups to provide stable computing power and mitigate the instability caused by the revoke mechanism of spot instances.
       * - Auto provisioning is a free feature, but you are charged for the instance resources created by auto provisioning groups. For more information, see [Spot instance billing](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * - If you specify both a launch template (`LaunchTemplateId`) and launch configuration information (`LaunchConfiguration.*`), the launch template takes precedence.
       *
       * @param request CreateAutoProvisioningGroupRequest
       * @return CreateAutoProvisioningGroupResponse
       */
      Models::CreateAutoProvisioningGroupResponse createAutoProvisioningGroup(const Models::CreateAutoProvisioningGroupRequest &request);

      /**
       * @summary Creates an automatic snapshot policy in a specified region. You can specify the repeat cycle, retention period, and cross-region backup settings for automatic snapshots to back up data on system disks or data disks.
       *
       * @description Before you call this operation, read [Create an automatic snapshot policy](https://help.aliyun.com/document_detail/127767.html).
       * Take note of the following items:
       * - You can create a maximum of 100 automatic snapshot policies in a region for an Alibaba Cloud account. When the number of automatic snapshots for a disk reaches the quota limit, the system deletes the earliest automatic snapshot created by the automatic snapshot policy when a new snapshot task is initiated.
       * - The system does not execute automatic snapshot policies when an ECS instance has a pending stop or restart task.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are encrypted by using the service key of the destination region by default. For more information about cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
       * After you create an automatic snapshot policy, call [ApplyAutoSnapshotPolicy](https://help.aliyun.com/document_detail/25531.html) to apply the policy to disks. To modify an automatic snapshot policy, call [ModifyAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25529.html).
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy in a specified region. You can specify the repeat cycle, retention period, and cross-region backup settings for automatic snapshots to back up data on system disks or data disks.
       *
       * @description Before you call this operation, read [Create an automatic snapshot policy](https://help.aliyun.com/document_detail/127767.html).
       * Take note of the following items:
       * - You can create a maximum of 100 automatic snapshot policies in a region for an Alibaba Cloud account. When the number of automatic snapshots for a disk reaches the quota limit, the system deletes the earliest automatic snapshot created by the automatic snapshot policy when a new snapshot task is initiated.
       * - The system does not execute automatic snapshot policies when an ECS instance has a pending stop or restart task.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are encrypted by using the service key of the destination region by default. For more information about cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
       * After you create an automatic snapshot policy, call [ApplyAutoSnapshotPolicy](https://help.aliyun.com/document_detail/25531.html) to apply the policy to disks. To modify an automatic snapshot policy, call [ModifyAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25529.html).
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary Creates a capacity reservation by specifying the instance type, total quantity, effective mode, and zone.
       *
       * @description ## Operation description
       * You can use the resource reservation service to reserve resources that match specified properties such as zone and instance type. The system reserves the resources as a private pool. For more information, see [Overview of immediate resource reservations](https://help.aliyun.com/document_detail/193633.html).
       * - Currently, only the immediate pattern is supported. After you purchase an immediate resource reservation, the instance type is billed on a pay-as-you-go basis, regardless of whether you actually create pay-as-you-go instances. Billing continues until you manually release the resource reservation (manual release) or it is automatically released upon expiration (automatic release).
       *     - When you create an instance by invoking [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html), you can configure the private pool capacity options. You can also invoke [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) to modify the private pool capacity options of an instance. After an instance matches the private pool capacity, you are charged for the instance type, disks, public bandwidth, and other resources based on your instance configurations.
       *     - If no pay-as-you-go instance is actually created, you are charged only for the instance type.
       * - The matched instances and unused capacity of an immediate resource reservation support hourly bill offset by savings plans and regional reserved instances, but do not support hourly bill offset by zonal reserved instances. Purchase reserved instances or savings plans first, and then use the immediate resource reservation service with the coverage of reserved instances or savings plans. This way, you can obtain resource availability assurance at no additional cost.
       * > You can create only immediate resource reservations by invoking this API operation. You can create immediate or scheduled resource reservations in the ECS console. For more information, see [Resource Assurance](~~193626#section-oil-qh5-xvx~~).
       *
       * @param request CreateCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCapacityReservationResponse
       */
      Models::CreateCapacityReservationResponse createCapacityReservationWithOptions(const Models::CreateCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a capacity reservation by specifying the instance type, total quantity, effective mode, and zone.
       *
       * @description ## Operation description
       * You can use the resource reservation service to reserve resources that match specified properties such as zone and instance type. The system reserves the resources as a private pool. For more information, see [Overview of immediate resource reservations](https://help.aliyun.com/document_detail/193633.html).
       * - Currently, only the immediate pattern is supported. After you purchase an immediate resource reservation, the instance type is billed on a pay-as-you-go basis, regardless of whether you actually create pay-as-you-go instances. Billing continues until you manually release the resource reservation (manual release) or it is automatically released upon expiration (automatic release).
       *     - When you create an instance by invoking [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html), you can configure the private pool capacity options. You can also invoke [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) to modify the private pool capacity options of an instance. After an instance matches the private pool capacity, you are charged for the instance type, disks, public bandwidth, and other resources based on your instance configurations.
       *     - If no pay-as-you-go instance is actually created, you are charged only for the instance type.
       * - The matched instances and unused capacity of an immediate resource reservation support hourly bill offset by savings plans and regional reserved instances, but do not support hourly bill offset by zonal reserved instances. Purchase reserved instances or savings plans first, and then use the immediate resource reservation service with the coverage of reserved instances or savings plans. This way, you can obtain resource availability assurance at no additional cost.
       * > You can create only immediate resource reservations by invoking this API operation. You can create immediate or scheduled resource reservations in the ECS console. For more information, see [Resource Assurance](~~193626#section-oil-qh5-xvx~~).
       *
       * @param request CreateCapacityReservationRequest
       * @return CreateCapacityReservationResponse
       */
      Models::CreateCapacityReservationResponse createCapacityReservation(const Models::CreateCapacityReservationRequest &request);

      /**
       * @summary Creates a Cloud Assistant command of the Shell, PowerShell, or Bat script type.
       *
       * @description ## Operation description
       * - You can create the following types of commands: 
       *     - Bat scripts for Windows instances (RunBatScript).
       *     - PowerShell scripts for Windows instances (RunPowerShellScript).
       *     - Shell scripts for Linux instances (RunShellScript).
       * - You can specify the Timeout parameter to set the maximum timeout period for a command to run on an ECS instance. If the command times out, [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) forcefully terminates the command process by canceling the PID of the command.
       *     - For a one-time execution, after the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command on the specified ECS instance changes to Failed.  
       *     - For a scheduled execution: 
       *         - The timeout period takes effect for each execution record. 
       *         - After a specific execution times out, the status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the execution record changes to Failed.  
       *         - The timeout of a previous execution does not affect the next execution. 
       * - You can retain 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - You can specify the WorkingDir parameter to set the execution path of a command. For Linux instances, the default path is the home directory of the root user, which is the `/root` directory. For Windows instances, the default path is the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
       * - You can specify EnableParameter=true to enable the custom parameter feature. When you set CommandContent, you can define custom parameters in the {{parameter}} format and pass in custom parameter key-value pairs when you run the command by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html). For example, if you create a command `echo {{name}}` and pass in the key-value pair `<name, Jack>` through the Parameters parameter when you call InvokeCommand, the custom parameter is automatically replaced. A new command `echo Jack` is generated and run on the instance.
       *
       * @param request CreateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommandWithOptions(const Models::CreateCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Cloud Assistant command of the Shell, PowerShell, or Bat script type.
       *
       * @description ## Operation description
       * - You can create the following types of commands: 
       *     - Bat scripts for Windows instances (RunBatScript).
       *     - PowerShell scripts for Windows instances (RunPowerShellScript).
       *     - Shell scripts for Linux instances (RunShellScript).
       * - You can specify the Timeout parameter to set the maximum timeout period for a command to run on an ECS instance. If the command times out, [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) forcefully terminates the command process by canceling the PID of the command.
       *     - For a one-time execution, after the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command on the specified ECS instance changes to Failed.  
       *     - For a scheduled execution: 
       *         - The timeout period takes effect for each execution record. 
       *         - After a specific execution times out, the status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the execution record changes to Failed.  
       *         - The timeout of a previous execution does not affect the next execution. 
       * - You can retain 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - You can specify the WorkingDir parameter to set the execution path of a command. For Linux instances, the default path is the home directory of the root user, which is the `/root` directory. For Windows instances, the default path is the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
       * - You can specify EnableParameter=true to enable the custom parameter feature. When you set CommandContent, you can define custom parameters in the {{parameter}} format and pass in custom parameter key-value pairs when you run the command by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html). For example, if you create a command `echo {{name}}` and pass in the key-value pair `<name, Jack>` through the Parameters parameter when you call InvokeCommand, the custom parameter is automatically replaced. A new command `echo Jack` is generated and run on the instance.
       *
       * @param request CreateCommandRequest
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommand(const Models::CreateCommandRequest &request);

      /**
       * @summary Creates a dedicated host cluster.
       *
       * @param request CreateDedicatedHostClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDedicatedHostClusterResponse
       */
      Models::CreateDedicatedHostClusterResponse createDedicatedHostClusterWithOptions(const Models::CreateDedicatedHostClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dedicated host cluster.
       *
       * @param request CreateDedicatedHostClusterRequest
       * @return CreateDedicatedHostClusterResponse
       */
      Models::CreateDedicatedHostClusterResponse createDedicatedHostCluster(const Models::CreateDedicatedHostClusterRequest &request);

      /**
       * @summary Creates a deployment set in a specified region.
       *
       * @param request CreateDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentSetResponse
       */
      Models::CreateDeploymentSetResponse createDeploymentSetWithOptions(const Models::CreateDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a deployment set in a specified region.
       *
       * @param request CreateDeploymentSetRequest
       * @return CreateDeploymentSetResponse
       */
      Models::CreateDeploymentSetResponse createDeploymentSet(const Models::CreateDeploymentSetRequest &request);

      /**
       * @summary Creates a diagnostic metric set for resources. You can flexibly combine diagnostic metrics as needed.
       *
       * @param request CreateDiagnosticMetricSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticMetricSetResponse
       */
      Models::CreateDiagnosticMetricSetResponse createDiagnosticMetricSetWithOptions(const Models::CreateDiagnosticMetricSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostic metric set for resources. You can flexibly combine diagnostic metrics as needed.
       *
       * @param request CreateDiagnosticMetricSetRequest
       * @return CreateDiagnosticMetricSetResponse
       */
      Models::CreateDiagnosticMetricSetResponse createDiagnosticMetricSet(const Models::CreateDiagnosticMetricSetRequest &request);

      /**
       * @summary Creates a resource diagnostic report. Based on the diagnostic metric set ID that you specify, a diagnostic report is generated for multiple diagnostic metrics. You can call DescribeDiagnosticReportAttributes with the returned diagnostic report ID to query the details of the resource diagnostic report.
       *
       * @param tmpReq CreateDiagnosticReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReportWithOptions(const Models::CreateDiagnosticReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource diagnostic report. Based on the diagnostic metric set ID that you specify, a diagnostic report is generated for multiple diagnostic metrics. You can call DescribeDiagnosticReportAttributes with the returned diagnostic report ID to query the details of the resource diagnostic report.
       *
       * @param request CreateDiagnosticReportRequest
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReport(const Models::CreateDiagnosticReportRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description - When you create a disk, you can enable the multi-attach attribute (`MultiAttach`). Learn about this attribute and its limits before you use it. For more information, see [Enterprise SSDs that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       * - When you create a disk, the following default settings apply:
       *   - Automatic snapshots of the disk are deleted when the disk is deleted. That is, `DeleteAutoSnapshot` is set to `true`. You can invoke [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) to query the parameter settings and invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to modify them.
       *
       * @param request CreateDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDiskWithOptions(const Models::CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description - When you create a disk, you can enable the multi-attach attribute (`MultiAttach`). Learn about this attribute and its limits before you use it. For more information, see [Enterprise SSDs that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       * - When you create a disk, the following default settings apply:
       *   - Automatic snapshots of the disk are deleted when the disk is deleted. That is, `DeleteAutoSnapshot` is set to `true`. You can invoke [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) to query the parameter settings and invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to modify them.
       *
       * @param request CreateDiskRequest
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDisk(const Models::CreateDiskRequest &request);

      /**
       * @summary Creates an elasticity assurance service by specifying parameters such as the zone, instance type, purchase duration, and auto-renewal settings within the region of the elasticity assurance service.
       *
       * @description Elasticity assurance provides a new resource purchase and usage method that balances flexibility and certainty. It is a resource reservation service that provides guaranteed resources for pay-as-you-go ECS instances. For more information, see [Overview of Elasticity Assurance](https://help.aliyun.com/document_detail/193630.html).
       * - After you purchase an elasticity assurance service, refunds are supported for regular elasticity assurance services but not for time-sharing elasticity assurance services. For billing information, see [Resource Assurance](https://help.aliyun.com/document_detail/432502.html).
       * - Elasticity assurance can be used to create only ECS instances whose billable methods are pay-as-you-go.
       * - Currently, only the unlimited pattern is available for elasticity assurance times. This means that the `AssuranceTimes` parameter supports only the `Unlimited` value. An elasticity assurance service in unlimited pattern automatically starts after the assurance takes effect.
       *
       * @param request CreateElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticityAssuranceResponse
       */
      Models::CreateElasticityAssuranceResponse createElasticityAssuranceWithOptions(const Models::CreateElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an elasticity assurance service by specifying parameters such as the zone, instance type, purchase duration, and auto-renewal settings within the region of the elasticity assurance service.
       *
       * @description Elasticity assurance provides a new resource purchase and usage method that balances flexibility and certainty. It is a resource reservation service that provides guaranteed resources for pay-as-you-go ECS instances. For more information, see [Overview of Elasticity Assurance](https://help.aliyun.com/document_detail/193630.html).
       * - After you purchase an elasticity assurance service, refunds are supported for regular elasticity assurance services but not for time-sharing elasticity assurance services. For billing information, see [Resource Assurance](https://help.aliyun.com/document_detail/432502.html).
       * - Elasticity assurance can be used to create only ECS instances whose billable methods are pay-as-you-go.
       * - Currently, only the unlimited pattern is available for elasticity assurance times. This means that the `AssuranceTimes` parameter supports only the `Unlimited` value. An elasticity assurance service in unlimited pattern automatically starts after the assurance takes effect.
       *
       * @param request CreateElasticityAssuranceRequest
       * @return CreateElasticityAssuranceResponse
       */
      Models::CreateElasticityAssuranceResponse createElasticityAssurance(const Models::CreateElasticityAssuranceRequest &request);

      /**
       * @deprecated OpenAPI CreateForwardEntry is deprecated, please use Vpc::2016-04-28::CreateForwardEntry instead.
       *
       * @summary CreateForwardEntry
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateForwardEntry is deprecated, please use Vpc::2016-04-28::CreateForwardEntry instead.
       *
       * @summary CreateForwardEntry
       *
       * @param request CreateForwardEntryRequest
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntry(const Models::CreateForwardEntryRequest &request);

      /**
       * @deprecated OpenAPI CreateHaVip is deprecated, please use Vpc::2016-04-28::CreateHaVip instead.
       *
       * @summary Creates a high-availability virtual IP address (HaVip).
       *
       * @param request CreateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVipWithOptions(const Models::CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateHaVip is deprecated, please use Vpc::2016-04-28::CreateHaVip instead.
       *
       * @summary Creates a high-availability virtual IP address (HaVip).
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates an HPC cluster.
       *
       * @param request CreateHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHpcClusterResponse
       */
      Models::CreateHpcClusterResponse createHpcClusterWithOptions(const Models::CreateHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HPC cluster.
       *
       * @param request CreateHpcClusterRequest
       * @return CreateHpcClusterResponse
       */
      Models::CreateHpcClusterResponse createHpcCluster(const Models::CreateHpcClusterRequest &request);

      /**
       * @summary Creates a custom image. You can use the created custom image to create ECS instances (RunInstances) or replace the system disk of an instance (ReplaceSystemDisk).
       *
       * @description ### Before you begin
       * - This is an asynchronous operation. After a request to create a custom image is sent, the image ID is returned. However, the image creation is not immediately complete. Call [DescribeImage](https://help.aliyun.com/document_detail/2679797.html) to query the image information. When the status in the response is `Available`, the image is created and ready for use. For more information, see [Custom image overview](https://help.aliyun.com/document_detail/172789.html).
       * - When you query ECS instance information, if the response contains {"OperationLocks": {"LockReason" : "security"}}, you cannot create custom images.
       * - Configure the image check parameter `DetectionStrategy` when creating an image to allow the system to optimize your image. For more information, see [Image check overview](https://help.aliyun.com/document_detail/439819.html).
       * The following section describes three methods to create a custom image by calling this operation. The priority of request parameters is: InstanceId > DiskDeviceMapping > SnapshotId. If your request contains two or more of these parameters, the image is created based on the parameter with the highest priority.
       * - **Create a custom image from an instance**: Specify the instance ID (`InstanceId`).
       *   - The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *   - After the operation is called, a new snapshot is created for each disk of the instance.
       *   >Notice: Because a running instance may have cached data that has not been written to disks, the data of the created custom image may be inconsistent with the instance data. Stop the instance ([StopInstances](https://help.aliyun.com/document_detail/155372.html)) before you create an image.
       * - **Create a custom image from snapshots (the specified snapshots cannot be created on or before July 15, 2013.)**
       *   - **Create a custom image from a system disk snapshot**: Specify only the snapshot ID of the system disk (`SnapshotId`).
       *   - **Create a custom image from system disk and data disk snapshots**: Establish data associations among multiple disks (`DiskDeviceMapping`).
       *     -  Only one system disk snapshot can be specified. 
       *     -  You can specify multiple data disk snapshots, up to a maximum of 16. If `DiskDeviceMapping.N.SnapshotId` is not specified, an empty data disk with the default capacity is created.  
       *  
       * > When an instance is released, the system disk is retained as a pay-as-you-go data disk. Snapshots created from this disk do not support custom image creation. Create a custom image before the instance is released as needed.
       *
       * @param request CreateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImageWithOptions(const Models::CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image. You can use the created custom image to create ECS instances (RunInstances) or replace the system disk of an instance (ReplaceSystemDisk).
       *
       * @description ### Before you begin
       * - This is an asynchronous operation. After a request to create a custom image is sent, the image ID is returned. However, the image creation is not immediately complete. Call [DescribeImage](https://help.aliyun.com/document_detail/2679797.html) to query the image information. When the status in the response is `Available`, the image is created and ready for use. For more information, see [Custom image overview](https://help.aliyun.com/document_detail/172789.html).
       * - When you query ECS instance information, if the response contains {"OperationLocks": {"LockReason" : "security"}}, you cannot create custom images.
       * - Configure the image check parameter `DetectionStrategy` when creating an image to allow the system to optimize your image. For more information, see [Image check overview](https://help.aliyun.com/document_detail/439819.html).
       * The following section describes three methods to create a custom image by calling this operation. The priority of request parameters is: InstanceId > DiskDeviceMapping > SnapshotId. If your request contains two or more of these parameters, the image is created based on the parameter with the highest priority.
       * - **Create a custom image from an instance**: Specify the instance ID (`InstanceId`).
       *   - The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *   - After the operation is called, a new snapshot is created for each disk of the instance.
       *   >Notice: Because a running instance may have cached data that has not been written to disks, the data of the created custom image may be inconsistent with the instance data. Stop the instance ([StopInstances](https://help.aliyun.com/document_detail/155372.html)) before you create an image.
       * - **Create a custom image from snapshots (the specified snapshots cannot be created on or before July 15, 2013.)**
       *   - **Create a custom image from a system disk snapshot**: Specify only the snapshot ID of the system disk (`SnapshotId`).
       *   - **Create a custom image from system disk and data disk snapshots**: Establish data associations among multiple disks (`DiskDeviceMapping`).
       *     -  Only one system disk snapshot can be specified. 
       *     -  You can specify multiple data disk snapshots, up to a maximum of 16. If `DiskDeviceMapping.N.SnapshotId` is not specified, an empty data disk with the default capacity is created.  
       *  
       * > When an instance is released, the system disk is retained as a pay-as-you-go data disk. Snapshots created from this disk do not support custom image creation. Create a custom image before the instance is released as needed.
       *
       * @param request CreateImageRequest
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImage(const Models::CreateImageRequest &request);

      /**
       * @summary Creates an image component. Image components are used to store commonly used build template commands for image building.
       *
       * @description ## Operation description
       * Before you create an image component, take note of the following items:
       * - You can create only custom image components.
       * - Component version numbers must be unique for components with the same name. When you use a component in a template, you can reference it by name and version number.
       * - The content size of an image component cannot exceed 16 KB. For details about supported commands, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder overview](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImageComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageComponentResponse
       */
      Models::CreateImageComponentResponse createImageComponentWithOptions(const Models::CreateImageComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image component. Image components are used to store commonly used build template commands for image building.
       *
       * @description ## Operation description
       * Before you create an image component, take note of the following items:
       * - You can create only custom image components.
       * - Component version numbers must be unique for components with the same name. When you use a component in a template, you can reference it by name and version number.
       * - The content size of an image component cannot exceed 16 KB. For details about supported commands, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder overview](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImageComponentRequest
       * @return CreateImageComponentResponse
       */
      Models::CreateImageComponentResponse createImageComponent(const Models::CreateImageComponentRequest &request);

      /**
       * @summary Creates an image template. Image templates can be used to build images.
       *
       * @description ## Operation description.
       *
       * @param request CreateImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipelineWithOptions(const Models::CreateImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image template. Image templates can be used to build images.
       *
       * @description ## Operation description.
       *
       * @param request CreateImagePipelineRequest
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipeline(const Models::CreateImagePipelineRequest &request);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance. You can use this operation to flexibly configure various parameters based on your requirements to create a customized instance.
       *
       * @description > This operation is no longer maintained. We recommend that you use the [RunInstances](https://help.aliyun.com/document_detail/2679677.html) operation.
       * ### Before you begin.
       * ### Precautions.
       * ### Recommendations.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance. You can use this operation to flexibly configure various parameters based on your requirements to create a customized instance.
       *
       * @description > This operation is no longer maintained. We recommend that you use the [RunInstances](https://help.aliyun.com/document_detail/2679677.html) operation.
       * ### Before you begin.
       * ### Precautions.
       * ### Recommendations.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Calls CreateKeyPair to create an SSH key pair. The system stores the public key and returns the private key in unencrypted PEM-encoded PKCS#8 format. You must securely store the private key on your own.
       *
       * @description In addition to calling CreateKeyPair to create a key pair, you can use a third-party tool to create a key pair and then upload it ([ImportKeyPair](https://help.aliyun.com/document_detail/51774.html)) to an Alibaba Cloud region. The uploaded key pair is used in the same way as a key pair created by the system.
       * You can have a maximum of 500 key pairs in each region. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateKeyPair to create an SSH key pair. The system stores the public key and returns the private key in unencrypted PEM-encoded PKCS#8 format. You must securely store the private key on your own.
       *
       * @description In addition to calling CreateKeyPair to create a key pair, you can use a third-party tool to create a key pair and then upload it ([ImportKeyPair](https://help.aliyun.com/document_detail/51774.html)) to an Alibaba Cloud region. The uploaded key pair is used in the same way as a key pair created by the system.
       * You can have a maximum of 500 key pairs in each region. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Creates an ECS instance launch template. A launch template eliminates the need to configure a large number of parameters every time you create an instance.
       *
       * @description After you call CreateLaunchTemplate to create a template, a default version with version number 1 is automatically generated. You can then create multiple versions based on this template by calling `CreateLaunchTemplateVersion`, with version numbers incrementing sequentially from 1. If you do not specify a template version number when creating an instance ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), the default version is used.
       * A launch template version contains the configurations used to create instances, such as the region, image ID, instance type, security group ID, and public bandwidth. If a specific instance configuration is not specified in the version, you must specify it when you create the instance.
       * Before you begin:
       * -   Each account can create up to 30 launch templates per region, and each template can have up to 30 versions.
       * -   Most parameters in a launch template are optional. When you create a template, Alibaba Cloud does not verify the existence or validity of parameter values. Parameter values are validated only when you actually create an instance.
       * -   If a configuration is set in the launch template, it cannot be filtered out when you create an instance ([RunInstances](https://help.aliyun.com/document_detail/63440.html)). For example, if the template sets `HostName=LocalHost` and the `HostName` value in `RunInstances` is left empty, the hostname of the instance is still `LocalHost`. To override the `HostName=LocalHost` configuration, set `HostName=MyHost` or another value in `RunInstances`.
       *
       * @param request CreateLaunchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplateWithOptions(const Models::CreateLaunchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ECS instance launch template. A launch template eliminates the need to configure a large number of parameters every time you create an instance.
       *
       * @description After you call CreateLaunchTemplate to create a template, a default version with version number 1 is automatically generated. You can then create multiple versions based on this template by calling `CreateLaunchTemplateVersion`, with version numbers incrementing sequentially from 1. If you do not specify a template version number when creating an instance ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), the default version is used.
       * A launch template version contains the configurations used to create instances, such as the region, image ID, instance type, security group ID, and public bandwidth. If a specific instance configuration is not specified in the version, you must specify it when you create the instance.
       * Before you begin:
       * -   Each account can create up to 30 launch templates per region, and each template can have up to 30 versions.
       * -   Most parameters in a launch template are optional. When you create a template, Alibaba Cloud does not verify the existence or validity of parameter values. Parameter values are validated only when you actually create an instance.
       * -   If a configuration is set in the launch template, it cannot be filtered out when you create an instance ([RunInstances](https://help.aliyun.com/document_detail/63440.html)). For example, if the template sets `HostName=LocalHost` and the `HostName` value in `RunInstances` is left empty, the hostname of the instance is still `LocalHost`. To override the `HostName=LocalHost` configuration, set `HostName=MyHost` or another value in `RunInstances`.
       *
       * @param request CreateLaunchTemplateRequest
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplate(const Models::CreateLaunchTemplateRequest &request);

      /**
       * @summary Creates a new version of a specified ECS launch template for subsequent creation of ECS instances, elastic scaling groups, or auto provisioning groups.
       *
       * @description ## Operation description
       * To modify the parameters of a specific version, create a new template version. Each instance launch template supports a maximum of 30 versions.
       *
       * @param request CreateLaunchTemplateVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaunchTemplateVersionResponse
       */
      Models::CreateLaunchTemplateVersionResponse createLaunchTemplateVersionWithOptions(const Models::CreateLaunchTemplateVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new version of a specified ECS launch template for subsequent creation of ECS instances, elastic scaling groups, or auto provisioning groups.
       *
       * @description ## Operation description
       * To modify the parameters of a specific version, create a new template version. Each instance launch template supports a maximum of 30 versions.
       *
       * @param request CreateLaunchTemplateVersionRequest
       * @return CreateLaunchTemplateVersionResponse
       */
      Models::CreateLaunchTemplateVersionResponse createLaunchTemplateVersion(const Models::CreateLaunchTemplateVersionRequest &request);

      /**
       * @deprecated OpenAPI CreateNatGateway is deprecated, please use Vpc::2016-04-28::CreateNatGateway instead.
       *
       * @summary CreateNatGateway.
       *
       * @param request CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateNatGateway is deprecated, please use Vpc::2016-04-28::CreateNatGateway instead.
       *
       * @summary CreateNatGateway.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates an Elastic Network Interface (ENI) with support for specifying a primary private IP address.
       *
       * @description Take note of the following items when you call this operation:
       * ### Request example.
       *
       * @param request CreateNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterfaceWithOptions(const Models::CreateNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Elastic Network Interface (ENI) with support for specifying a primary private IP address.
       *
       * @description Take note of the following items when you call this operation:
       * ### Request example.
       *
       * @param request CreateNetworkInterfaceRequest
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterface(const Models::CreateNetworkInterfaceRequest &request);

      /**
       * @summary Grants Elastic Network Interface (ENI) permissions to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request CreateNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfacePermissionResponse
       */
      Models::CreateNetworkInterfacePermissionResponse createNetworkInterfacePermissionWithOptions(const Models::CreateNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants Elastic Network Interface (ENI) permissions to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request CreateNetworkInterfacePermissionRequest
       * @return CreateNetworkInterfacePermissionResponse
       */
      Models::CreateNetworkInterfacePermissionResponse createNetworkInterfacePermission(const Models::CreateNetworkInterfacePermissionRequest &request);

      /**
       * @deprecated OpenAPI CreatePhysicalConnection is deprecated, please use Vpc::2016-04-28::CreatePhysicalConnection instead.
       *
       * @summary CreatePhysicalConnection.
       *
       * @param request CreatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnectionWithOptions(const Models::CreatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreatePhysicalConnection is deprecated, please use Vpc::2016-04-28::CreatePhysicalConnection instead.
       *
       * @summary CreatePhysicalConnection.
       *
       * @param request CreatePhysicalConnectionRequest
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnection(const Models::CreatePhysicalConnectionRequest &request);

      /**
       * @summary Creates an O&M window. When the TargetResource parameter of the O&M window is set to associate with ECS instances and a hardware risk is detected at the underlying layer that requires scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter. When the execution time of the O&M event is reached, the platform automatically performs the corresponding O&M operation based on the event type.
       *
       * @param tmpReq CreatePlanMaintenanceWindowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlanMaintenanceWindowResponse
       */
      Models::CreatePlanMaintenanceWindowResponse createPlanMaintenanceWindowWithOptions(const Models::CreatePlanMaintenanceWindowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an O&M window. When the TargetResource parameter of the O&M window is set to associate with ECS instances and a hardware risk is detected at the underlying layer that requires scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter. When the execution time of the O&M event is reached, the platform automatically performs the corresponding O&M operation based on the event type.
       *
       * @param request CreatePlanMaintenanceWindowRequest
       * @return CreatePlanMaintenanceWindowResponse
       */
      Models::CreatePlanMaintenanceWindowResponse createPlanMaintenanceWindow(const Models::CreatePlanMaintenanceWindowRequest &request);

      /**
       * @summary Creates a port list that can be associated with resources such as security groups.
       *
       * @param request CreatePortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortRangeListResponse
       */
      Models::CreatePortRangeListResponse createPortRangeListWithOptions(const Models::CreatePortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a port list that can be associated with resources such as security groups.
       *
       * @param request CreatePortRangeListRequest
       * @return CreatePortRangeListResponse
       */
      Models::CreatePortRangeListResponse createPortRangeList(const Models::CreatePortRangeListRequest &request);

      /**
       * @summary Creates a prefix list.
       *
       * @description ## [](#)Usage notes
       * - A prefix list is a collection of network prefixes (CIDR blocks) and can be referenced to configure network rules for other resources. For more information, see [Overview](https://help.aliyun.com/document_detail/206223.html).
       * - When you create a prefix list, take note of the following items:
       *   - You must specify an IP address family (IPv4 or IPv6) for the prefix list, and cannot change the IP address family after the prefix list is created. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
       *   - You must specify the maximum number of entries that the prefix list can contain. You cannot modify the maximum number of entries after the prefix list is created.
       *   - You can specify entries for the prefix list. Each entry consists of a CIDR block and the description for the CIDR block. The total number of entries cannot exceed the maximum number of entries that you specified.
       * - For more information about the limits on prefix lists and other resources, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * - You can create Resource Access Management (RAM) users and grant them minimum permissions. This eliminates the need to share the AccessKey pair of your Alibaba Cloud account with other users and reduces security risks for your enterprises. For information about how to grant permissions on prefix lists to RAM users, see [Grant a RAM user permissions on prefix lists](https://help.aliyun.com/document_detail/206175.html)
       *
       * @param request CreatePrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrefixListResponse
       */
      Models::CreatePrefixListResponse createPrefixListWithOptions(const Models::CreatePrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a prefix list.
       *
       * @description ## [](#)Usage notes
       * - A prefix list is a collection of network prefixes (CIDR blocks) and can be referenced to configure network rules for other resources. For more information, see [Overview](https://help.aliyun.com/document_detail/206223.html).
       * - When you create a prefix list, take note of the following items:
       *   - You must specify an IP address family (IPv4 or IPv6) for the prefix list, and cannot change the IP address family after the prefix list is created. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
       *   - You must specify the maximum number of entries that the prefix list can contain. You cannot modify the maximum number of entries after the prefix list is created.
       *   - You can specify entries for the prefix list. Each entry consists of a CIDR block and the description for the CIDR block. The total number of entries cannot exceed the maximum number of entries that you specified.
       * - For more information about the limits on prefix lists and other resources, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * - You can create Resource Access Management (RAM) users and grant them minimum permissions. This eliminates the need to share the AccessKey pair of your Alibaba Cloud account with other users and reduces security risks for your enterprises. For information about how to grant permissions on prefix lists to RAM users, see [Grant a RAM user permissions on prefix lists](https://help.aliyun.com/document_detail/206175.html)
       *
       * @param request CreatePrefixListRequest
       * @return CreatePrefixListResponse
       */
      Models::CreatePrefixListResponse createPrefixList(const Models::CreatePrefixListRequest &request);

      /**
       * @deprecated OpenAPI CreateRouteEntry is deprecated, please use Vpc::2016-04-28::CreateRouteEntry instead.
       *
       * @summary CreateRouteEntry
       *
       * @param request CreateRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntryWithOptions(const Models::CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateRouteEntry is deprecated, please use Vpc::2016-04-28::CreateRouteEntry instead.
       *
       * @summary CreateRouteEntry
       *
       * @param request CreateRouteEntryRequest
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntry(const Models::CreateRouteEntryRequest &request);

      /**
       * @deprecated OpenAPI CreateRouterInterface is deprecated, please use Vpc::2016-04-28::CreateRouterInterface instead.
       *
       * @summary CreateRouterInterface.
       *
       * @param request CreateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterfaceWithOptions(const Models::CreateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateRouterInterface is deprecated, please use Vpc::2016-04-28::CreateRouterInterface instead.
       *
       * @summary CreateRouterInterface.
       *
       * @param request CreateRouterInterfaceRequest
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterface(const Models::CreateRouterInterfaceRequest &request);

      /**
       * @summary 购买节省计划并预付费换购按量付费
       *
       * @param request CreateSavingsPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSavingsPlanResponse
       */
      Models::CreateSavingsPlanResponse createSavingsPlanWithOptions(const Models::CreateSavingsPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 购买节省计划并预付费换购按量付费
       *
       * @param request CreateSavingsPlanRequest
       * @return CreateSavingsPlanResponse
       */
      Models::CreateSavingsPlanResponse createSavingsPlan(const Models::CreateSavingsPlanRequest &request);

      /**
       * @summary Creates a security group.
       *
       * @description - By default, the internal connectivity policy of a basic security group created by calling this operation is **intra-group connectivity**. You can call [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html) to modify the policy.
       * - By default, the internal connectivity policy of an advanced security group created by calling this operation is **internal isolation**, and the policy cannot be modified.
       * - The number of security groups in a single region is limited. You can create a minimum of 100 security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       * - To create a security group of the Virtual Private Cloud (VPC) type, you must specify the VpcId parameter.
       *
       * @param request CreateSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroupWithOptions(const Models::CreateSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group.
       *
       * @description - By default, the internal connectivity policy of a basic security group created by calling this operation is **intra-group connectivity**. You can call [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html) to modify the policy.
       * - By default, the internal connectivity policy of an advanced security group created by calling this operation is **internal isolation**, and the policy cannot be modified.
       * - The number of security groups in a single region is limited. You can create a minimum of 100 security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       * - To create a security group of the Virtual Private Cloud (VPC) type, you must specify the VpcId parameter.
       *
       * @param request CreateSecurityGroupRequest
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroup(const Models::CreateSecurityGroupRequest &request);

      /**
       * @summary Schedules simulated system events for one or more ECS instances. Simulated system events serve as event drills and do not actually execute events or affect ECS instances.
       *
       * @description After you schedule a simulated event, you can view the scheduled simulated system event in the ECS console, by calling an [ECS API operation](https://help.aliyun.com/document_detail/63962.html), or by using monitoring.
       * The following table describes the lifecycle of a simulated system event:
       * - Scheduled: After you schedule a simulated system event, the event undergoes automatic switchover to the Scheduled state.
       * - Executed: Without manual intervention, the simulated system event automatically switches to the Executed state at the specified point in time (NotBefore).
       * - Canceled: After you call [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) to cancel the simulated system event, the event switches to the Canceled state.         
       * - Avoided: For a simulated system event of the SystemMaintenance.Reboot type, you can [restart the instance](https://help.aliyun.com/document_detail/25502.html) before the specified point in time to switch the event to the Avoided state.
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEventsWithOptions(const Models::CreateSimulatedSystemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules simulated system events for one or more ECS instances. Simulated system events serve as event drills and do not actually execute events or affect ECS instances.
       *
       * @description After you schedule a simulated event, you can view the scheduled simulated system event in the ECS console, by calling an [ECS API operation](https://help.aliyun.com/document_detail/63962.html), or by using monitoring.
       * The following table describes the lifecycle of a simulated system event:
       * - Scheduled: After you schedule a simulated system event, the event undergoes automatic switchover to the Scheduled state.
       * - Executed: Without manual intervention, the simulated system event automatically switches to the Executed state at the specified point in time (NotBefore).
       * - Canceled: After you call [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) to cancel the simulated system event, the event switches to the Canceled state.         
       * - Avoided: For a simulated system event of the SystemMaintenance.Reboot type, you can [restart the instance](https://help.aliyun.com/document_detail/25502.html) before the specified point in time to switch the event to the Avoided state.
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEvents(const Models::CreateSimulatedSystemEventsRequest &request);

      /**
       * @summary Creates a snapshot for a disk.
       *
       * @description The local snapshot feature has been replaced by the snapshot instant access feature. Metric description is as follows:
       * - If you used local snapshots before December 14, 2020, you can use the `Category` parameter as Normal.
       * - If you did not use local snapshots before December 14, 2020, no additional configuration is required. New snapshots created for ESSD series disks (ESSD, ESSD AutoPL, ESSD Entry, and regional ESSD) are instantly active by default, and both manual snapshots and automatic snapshots are supported. The three snapshot instant access-related parameters `InstantAccess`, `InstantAccessRetentionDays`, and `DisableInstantAccess` in API operations no longer take effect. The `DescribeSnapshots` and `DescribeSnapshotGroups` API operations will include a new response parameter named Available to describe the active status of snapshots.
       * Before you begin:
       * - Activate the snapshot feature. For more information, see [Activate snapshots](https://help.aliyun.com/document_detail/108381.html).
       * - The disk must be in the **In Use** or **Unattached** state. Note the following items for different states:
       *   - If the disk is in the **In Use** state, the instance must be in the **Running** or **Stopped** state.
       *   - If the disk is in the **Unattached** state, the disk must have been previously attached to an ECS instance. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       *   - When a disk is used to create a dynamic extended volume or a RAID array, use a snapshot-consistent group and enable application-consistent snapshots to back up data. Snapshot-consistent groups ensure the write order consistency of data across multiple disks in a business system and guarantee crash consistency. For more information, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html) and [Create an application-consistent snapshot](https://help.aliyun.com/document_detail/208589.html).
       * When you create a snapshot, take note of the following items:
       * - Avoid creating snapshots during peak business hours. When a snapshot is being created, the I/O performance of the disk decreases by up to 10%, and brief read and write performance latency may occur.
       * - If the snapshot has not been created, it cannot be used to create a custom image ([CreateImage](https://help.aliyun.com/document_detail/25535.html)).
       * - Incremental data generated by disk operations during snapshot creation is not included in the backup to the snapshot.
       * - If the disk is attached to an ECS instance, do not change the instance status, such as stopping or restarting the ECS instance, during snapshot creation. Otherwise, the snapshot creation will be failed.
       * - A disk for which a snapshot is being created does not support scale-out. Wait until the snapshot is created before you execute the scale-out operation.
       * - You can create snapshots for disks in the **Expired** (`Expired`) state. If the disk reaches its scheduled release time during snapshot creation, the disk is released and the snapshot in the **Creating** (`Creating`) state is also deleted.
       * - After a snapshot is created, the system calculates fees based on the snapshot size in each region separately. For more information, see [Snapshot billing](https://help.aliyun.com/document_detail/56159.html).
       * - In the following scenarios, you cannot create a snapshot for the specified disk:
       *   - The number of manual snapshots retained for the disk has reached the upper limit. For more information, see [Snapshot limits](~~25412#SnapshotQuota1~~).
       *   - Snapshot creation has concurrency limits. Exceeding the limits causes creation failures. For more information, see [Snapshot limits](~~25412#SnapshotQuota1~~).
       *   - When you query ECS instance information, if the returned data contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot for a disk.
       *
       * @description The local snapshot feature has been replaced by the snapshot instant access feature. Metric description is as follows:
       * - If you used local snapshots before December 14, 2020, you can use the `Category` parameter as Normal.
       * - If you did not use local snapshots before December 14, 2020, no additional configuration is required. New snapshots created for ESSD series disks (ESSD, ESSD AutoPL, ESSD Entry, and regional ESSD) are instantly active by default, and both manual snapshots and automatic snapshots are supported. The three snapshot instant access-related parameters `InstantAccess`, `InstantAccessRetentionDays`, and `DisableInstantAccess` in API operations no longer take effect. The `DescribeSnapshots` and `DescribeSnapshotGroups` API operations will include a new response parameter named Available to describe the active status of snapshots.
       * Before you begin:
       * - Activate the snapshot feature. For more information, see [Activate snapshots](https://help.aliyun.com/document_detail/108381.html).
       * - The disk must be in the **In Use** or **Unattached** state. Note the following items for different states:
       *   - If the disk is in the **In Use** state, the instance must be in the **Running** or **Stopped** state.
       *   - If the disk is in the **Unattached** state, the disk must have been previously attached to an ECS instance. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       *   - When a disk is used to create a dynamic extended volume or a RAID array, use a snapshot-consistent group and enable application-consistent snapshots to back up data. Snapshot-consistent groups ensure the write order consistency of data across multiple disks in a business system and guarantee crash consistency. For more information, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html) and [Create an application-consistent snapshot](https://help.aliyun.com/document_detail/208589.html).
       * When you create a snapshot, take note of the following items:
       * - Avoid creating snapshots during peak business hours. When a snapshot is being created, the I/O performance of the disk decreases by up to 10%, and brief read and write performance latency may occur.
       * - If the snapshot has not been created, it cannot be used to create a custom image ([CreateImage](https://help.aliyun.com/document_detail/25535.html)).
       * - Incremental data generated by disk operations during snapshot creation is not included in the backup to the snapshot.
       * - If the disk is attached to an ECS instance, do not change the instance status, such as stopping or restarting the ECS instance, during snapshot creation. Otherwise, the snapshot creation will be failed.
       * - A disk for which a snapshot is being created does not support scale-out. Wait until the snapshot is created before you execute the scale-out operation.
       * - You can create snapshots for disks in the **Expired** (`Expired`) state. If the disk reaches its scheduled release time during snapshot creation, the disk is released and the snapshot in the **Creating** (`Creating`) state is also deleted.
       * - After a snapshot is created, the system calculates fees based on the snapshot size in each region separately. For more information, see [Snapshot billing](https://help.aliyun.com/document_detail/56159.html).
       * - In the following scenarios, you cannot create a snapshot for the specified disk:
       *   - The number of manual snapshots retained for the disk has reached the upper limit. For more information, see [Snapshot limits](~~25412#SnapshotQuota1~~).
       *   - Snapshot creation has concurrency limits. Exceeding the limits causes creation failures. For more information, see [Snapshot limits](~~25412#SnapshotQuota1~~).
       *   - When you query ECS instance information, if the returned data contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Creates a snapshot-consistent group for disks in a specified ECS instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description You can set `InstanceId` to create a snapshot-consistent group for specified disks in an instance. Alternatively, you can use only `DiskId.N` to create a snapshot-consistent group for multiple disks attached to multiple ECS instances in the same zone.
       * > `DiskId.N` and `ExcludeDiskId.N` cannot be specified at the same time. If `InstanceId` is specified, `DiskId.N` can only be set to disks attached to the specified instance and no longer supports specifying disk IDs across multiple instances.
       * When you create a snapshot-consistent group, take note of the following items:
       * - The disks for which you want to create snapshots must be in the **In Use** (`In_use`) or **Unattached** (`Available`) state.
       *     - If a disk is in the **In Use** (`In_use`) state, the ECS instance status must be **Running** (`Running`) or **Stopped** (`Stopped`).
       *     - If a disk is in the **Unattached** (`Available`) state, the disk must have been previously attached to an ECS instance. Disks that have never been attached to an ECS instance do not support snapshot creation.
       * - Snapshot-consistent groups support only ESSD series disks (ESSD, ESSD AutoPL, and ESSD Entry).
       * - A single snapshot-consistent group can contain up to 128 disks (including system disks and data disks) with a total snapshot size of no more than 256 TiB.
       * - User-created snapshots are retained until you delete them. Delete snapshots that are no longer needed on a regular basis to avoid ongoing snapshot storage fees.
       * - Disks with the multi-attach attribute enabled do not support snapshot-consistent groups. If an instance has a disk with the multi-attach attribute enabled, set the `ExcludeDiskId.N` parameter to exclude the disk.
       * For more information about the features and billing of snapshot-consistent groups, see [Snapshot-consistent groups](https://help.aliyun.com/document_detail/199625.html).
       *
       * @param request CreateSnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotGroupResponse
       */
      Models::CreateSnapshotGroupResponse createSnapshotGroupWithOptions(const Models::CreateSnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot-consistent group for disks in a specified ECS instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description You can set `InstanceId` to create a snapshot-consistent group for specified disks in an instance. Alternatively, you can use only `DiskId.N` to create a snapshot-consistent group for multiple disks attached to multiple ECS instances in the same zone.
       * > `DiskId.N` and `ExcludeDiskId.N` cannot be specified at the same time. If `InstanceId` is specified, `DiskId.N` can only be set to disks attached to the specified instance and no longer supports specifying disk IDs across multiple instances.
       * When you create a snapshot-consistent group, take note of the following items:
       * - The disks for which you want to create snapshots must be in the **In Use** (`In_use`) or **Unattached** (`Available`) state.
       *     - If a disk is in the **In Use** (`In_use`) state, the ECS instance status must be **Running** (`Running`) or **Stopped** (`Stopped`).
       *     - If a disk is in the **Unattached** (`Available`) state, the disk must have been previously attached to an ECS instance. Disks that have never been attached to an ECS instance do not support snapshot creation.
       * - Snapshot-consistent groups support only ESSD series disks (ESSD, ESSD AutoPL, and ESSD Entry).
       * - A single snapshot-consistent group can contain up to 128 disks (including system disks and data disks) with a total snapshot size of no more than 256 TiB.
       * - User-created snapshots are retained until you delete them. Delete snapshots that are no longer needed on a regular basis to avoid ongoing snapshot storage fees.
       * - Disks with the multi-attach attribute enabled do not support snapshot-consistent groups. If an instance has a disk with the multi-attach attribute enabled, set the `ExcludeDiskId.N` parameter to exclude the disk.
       * For more information about the features and billing of snapshot-consistent groups, see [Snapshot-consistent groups](https://help.aliyun.com/document_detail/199625.html).
       *
       * @param request CreateSnapshotGroupRequest
       * @return CreateSnapshotGroupResponse
       */
      Models::CreateSnapshotGroupResponse createSnapshotGroup(const Models::CreateSnapshotGroupRequest &request);

      /**
       * @summary 创建一个存储集，用于在创建磁盘时打散磁盘的分布
       *
       * @param request CreateStorageSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStorageSetResponse
       */
      Models::CreateStorageSetResponse createStorageSetWithOptions(const Models::CreateStorageSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个存储集，用于在创建磁盘时打散磁盘的分布
       *
       * @param request CreateStorageSetRequest
       * @return CreateStorageSetResponse
       */
      Models::CreateStorageSetResponse createStorageSet(const Models::CreateStorageSetRequest &request);

      /**
       * @deprecated OpenAPI CreateVSwitch is deprecated, please use Vpc::2016-04-28::CreateVSwitch instead.
       *
       * @summary CreateVSwitch
       *
       * @param request CreateVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitchWithOptions(const Models::CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVSwitch is deprecated, please use Vpc::2016-04-28::CreateVSwitch instead.
       *
       * @summary CreateVSwitch
       *
       * @param request CreateVSwitchRequest
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitch(const Models::CreateVSwitchRequest &request);

      /**
       * @deprecated OpenAPI CreateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::CreateVirtualBorderRouter instead.
       *
       * @summary Creates a virtual border router (VBR).
       *
       * @param request CreateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouterWithOptions(const Models::CreateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::CreateVirtualBorderRouter instead.
       *
       * @summary Creates a virtual border router (VBR).
       *
       * @param request CreateVirtualBorderRouterRequest
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouter(const Models::CreateVirtualBorderRouterRequest &request);

      /**
       * @deprecated OpenAPI CreateVpc is deprecated, please use Vpc::2016-04-28::CreateVpc instead.
       *
       * @summary CreateVpc
       *
       * @param request CreateVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpcWithOptions(const Models::CreateVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVpc is deprecated, please use Vpc::2016-04-28::CreateVpc instead.
       *
       * @summary CreateVpc
       *
       * @param request CreateVpcRequest
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpc(const Models::CreateVpcRequest &request);

      /**
       * @summary Creates a Virtual Storage Channel (VSC) for an ECS instance.
       *
       * @description - To create a VSC, the instance type must support VSC, and VSC must be enabled on the instance.
       * - Only one Primary VSC can be created on a single instance.
       *
       * @param request CreateVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVscResponse
       */
      Models::CreateVscResponse createVscWithOptions(const Models::CreateVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Virtual Storage Channel (VSC) for an ECS instance.
       *
       * @description - To create a VSC, the instance type must support VSC, and VSC must be enabled on the instance.
       * - Only one Primary VSC can be created on a single instance.
       *
       * @param request CreateVscRequest
       * @return CreateVscResponse
       */
      Models::CreateVscResponse createVsc(const Models::CreateVscRequest &request);

      /**
       * @deprecated OpenAPI DeactivateRouterInterface is deprecated, please use Vpc::2016-04-28::DeactivateRouterInterface instead.
       *
       * @summary DeactivateRouterInterface
       *
       * @param request DeactivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterfaceWithOptions(const Models::DeactivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeactivateRouterInterface is deprecated, please use Vpc::2016-04-28::DeactivateRouterInterface instead.
       *
       * @summary DeactivateRouterInterface
       *
       * @param request DeactivateRouterInterfaceRequest
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterface(const Models::DeactivateRouterInterfaceRequest &request);

      /**
       * @summary Deletes an unused activation code.
       *
       * @description ## Operation description
       * The activation code must be unused, meaning that the number of managed instances registered with the activation code is 0.
       *
       * @param request DeleteActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteActivationResponse
       */
      Models::DeleteActivationResponse deleteActivationWithOptions(const Models::DeleteActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an unused activation code.
       *
       * @description ## Operation description
       * The activation code must be unused, meaning that the number of managed instances registered with the activation code is 0.
       *
       * @param request DeleteActivationRequest
       * @return DeleteActivationResponse
       */
      Models::DeleteActivationResponse deleteActivation(const Models::DeleteActivationRequest &request);

      /**
       * @summary Deletes an auto provisioning group by specifying the AutoProvisioningGroupId and TerminateInstances parameters.
       *
       * @param request DeleteAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoProvisioningGroupResponse
       */
      Models::DeleteAutoProvisioningGroupResponse deleteAutoProvisioningGroupWithOptions(const Models::DeleteAutoProvisioningGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an auto provisioning group by specifying the AutoProvisioningGroupId and TerminateInstances parameters.
       *
       * @param request DeleteAutoProvisioningGroupRequest
       * @return DeleteAutoProvisioningGroupResponse
       */
      Models::DeleteAutoProvisioningGroupResponse deleteAutoProvisioningGroup(const Models::DeleteAutoProvisioningGroupRequest &request);

      /**
       * @summary Deletes an automatic snapshot policy. If the target automatic snapshot policy has been applied to cloud disks, the cloud disks no longer execute the policy after it is deleted.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(const Models::DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic snapshot policy. If the target automatic snapshot policy has been applied to cloud disks, the cloud disks no longer execute the policy after it is deleted.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(const Models::DeleteAutoSnapshotPolicyRequest &request);

      /**
       * @summary Deletes a bandwidth package.
       *
       * @param request DeleteBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBandwidthPackageResponse
       */
      Models::DeleteBandwidthPackageResponse deleteBandwidthPackageWithOptions(const Models::DeleteBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bandwidth package.
       *
       * @param request DeleteBandwidthPackageRequest
       * @return DeleteBandwidthPackageResponse
       */
      Models::DeleteBandwidthPackageResponse deleteBandwidthPackage(const Models::DeleteBandwidthPackageRequest &request);

      /**
       * @summary Deletes a Cloud Assistant command. You cannot delete a command that is being executed.
       *
       * @param request DeleteCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommandWithOptions(const Models::DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Assistant command. You cannot delete a command that is being executed.
       *
       * @param request DeleteCommandRequest
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommand(const Models::DeleteCommandRequest &request);

      /**
       * @summary Deletes a dedicated host cluster. Before you perform this operation, migrate the dedicated hosts in the dedicated host cluster to another dedicated host cluster.
       *
       * @param request DeleteDedicatedHostClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDedicatedHostClusterResponse
       */
      Models::DeleteDedicatedHostClusterResponse deleteDedicatedHostClusterWithOptions(const Models::DeleteDedicatedHostClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dedicated host cluster. Before you perform this operation, migrate the dedicated hosts in the dedicated host cluster to another dedicated host cluster.
       *
       * @param request DeleteDedicatedHostClusterRequest
       * @return DeleteDedicatedHostClusterResponse
       */
      Models::DeleteDedicatedHostClusterResponse deleteDedicatedHostCluster(const Models::DeleteDedicatedHostClusterRequest &request);

      /**
       * @summary Deletes a deployment set.
       *
       * @description Before you delete a deployment set, make sure that no instances exist in the deployment set. If instances exist, remove or release them before you delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
       *
       * @param request DeleteDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentSetResponse
       */
      Models::DeleteDeploymentSetResponse deleteDeploymentSetWithOptions(const Models::DeleteDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment set.
       *
       * @description Before you delete a deployment set, make sure that no instances exist in the deployment set. If instances exist, remove or release them before you delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
       *
       * @param request DeleteDeploymentSetRequest
       * @return DeleteDeploymentSetResponse
       */
      Models::DeleteDeploymentSetResponse deleteDeploymentSet(const Models::DeleteDeploymentSetRequest &request);

      /**
       * @summary Deletes diagnostic metric sets for resources.
       *
       * @param request DeleteDiagnosticMetricSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnosticMetricSetsResponse
       */
      Models::DeleteDiagnosticMetricSetsResponse deleteDiagnosticMetricSetsWithOptions(const Models::DeleteDiagnosticMetricSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes diagnostic metric sets for resources.
       *
       * @param request DeleteDiagnosticMetricSetsRequest
       * @return DeleteDiagnosticMetricSetsResponse
       */
      Models::DeleteDiagnosticMetricSetsResponse deleteDiagnosticMetricSets(const Models::DeleteDiagnosticMetricSetsRequest &request);

      /**
       * @summary Deletes resource diagnostic reports.
       *
       * @description Reports that are being generated cannot be deleted.
       *
       * @param request DeleteDiagnosticReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnosticReportsResponse
       */
      Models::DeleteDiagnosticReportsResponse deleteDiagnosticReportsWithOptions(const Models::DeleteDiagnosticReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes resource diagnostic reports.
       *
       * @description Reports that are being generated cannot be deleted.
       *
       * @param request DeleteDiagnosticReportsRequest
       * @return DeleteDiagnosticReportsResponse
       */
      Models::DeleteDiagnosticReportsResponse deleteDiagnosticReports(const Models::DeleteDiagnosticReportsRequest &request);

      /**
       * @summary Releases a pay-as-you-go data disk. Disk types include basic disks, ultra disks, standard SSDs, and enterprise SSDs.
       *
       * @description When you invoke this operation, take note of the following items:
       * - Manual snapshots of the disk are retained.
       * - You can invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to configure whether to retain or release automatic snapshots together with the disk. Delete unnecessary snapshots promptly to maintain sufficient snapshot quota for periodic automatic snapshot policies.
       * - The disk must be in the Pending Attach (Available) state when you release it.
       * - If the disk with the specified ID does not exist, the request is ignored.
       *
       * @param request DeleteDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDiskWithOptions(const Models::DeleteDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go data disk. Disk types include basic disks, ultra disks, standard SSDs, and enterprise SSDs.
       *
       * @description When you invoke this operation, take note of the following items:
       * - Manual snapshots of the disk are retained.
       * - You can invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to configure whether to retain or release automatic snapshots together with the disk. Delete unnecessary snapshots promptly to maintain sufficient snapshot quota for periodic automatic snapshot policies.
       * - The disk must be in the Pending Attach (Available) state when you release it.
       * - If the disk with the specified ID does not exist, the request is ignored.
       *
       * @param request DeleteDiskRequest
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDisk(const Models::DeleteDiskRequest &request);

      /**
       * @deprecated OpenAPI DeleteForwardEntry is deprecated, please use Vpc::2016-04-28::DeleteForwardEntry instead.
       *
       * @summary Deletes a DNAT entry.
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteForwardEntry is deprecated, please use Vpc::2016-04-28::DeleteForwardEntry instead.
       *
       * @summary Deletes a DNAT entry.
       *
       * @param request DeleteForwardEntryRequest
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntry(const Models::DeleteForwardEntryRequest &request);

      /**
       * @deprecated OpenAPI DeleteHaVip is deprecated, please use Vpc::2016-04-28::DeleteHaVip instead.
       *
       * @summary Deletes an HaVip instance.
       *
       * @param request DeleteHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVipWithOptions(const Models::DeleteHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteHaVip is deprecated, please use Vpc::2016-04-28::DeleteHaVip instead.
       *
       * @summary Deletes an HaVip instance.
       *
       * @param request DeleteHaVipRequest
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVip(const Models::DeleteHaVipRequest &request);

      /**
       * @summary Deletes an HPC cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcClusterWithOptions(const Models::DeleteHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an HPC cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcCluster(const Models::DeleteHpcClusterRequest &request);

      /**
       * @summary Deletes a custom image. You can specify the ImageId and Force parameters.
       *
       * @description For information about scenarios in which you cannot delete a custom image and considerations after an image is deleted, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom image. You can specify the ImageId and Force parameters.
       *
       * @description For information about scenarios in which you cannot delete a custom image and considerations after an image is deleted, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes an image component by specifying the RegionId and ImageComponentId parameters.
       *
       * @description - Only custom image components that you have created can be deleted.
       * - Before deleting a component, make sure that the component is not used in any template. Otherwise, the deletion fails.
       *
       * @param request DeleteImageComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageComponentResponse
       */
      Models::DeleteImageComponentResponse deleteImageComponentWithOptions(const Models::DeleteImageComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image component by specifying the RegionId and ImageComponentId parameters.
       *
       * @description - Only custom image components that you have created can be deleted.
       * - Before deleting a component, make sure that the component is not used in any template. Otherwise, the deletion fails.
       *
       * @param request DeleteImageComponentRequest
       * @return DeleteImageComponentResponse
       */
      Models::DeleteImageComponentResponse deleteImageComponent(const Models::DeleteImageComponentRequest &request);

      /**
       * @summary Deletes an image template.
       *
       * @description If a build task is running, you cannot directly delete the template. Wait until the build task reaches a desired state: SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED. You can call [DescribeImagePipelineExecutions](~~DescribeImagePipelineExecutions~~) to query the details of build tasks.
       *
       * @param request DeleteImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipelineWithOptions(const Models::DeleteImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image template.
       *
       * @description If a build task is running, you cannot directly delete the template. Wait until the build task reaches a desired state: SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED. You can call [DescribeImagePipelineExecutions](~~DescribeImagePipelineExecutions~~) to query the details of build tasks.
       *
       * @param request DeleteImagePipelineRequest
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipeline(const Models::DeleteImagePipelineRequest &request);

      /**
       * @summary Deletes or releases a specified ECS instance.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are recycled. All related data is permanently lost and cannot be recovered.
       * - Manual snapshots of disks are retained and continue to incur charges. You can delete them by calling [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html).
       * - Whether disks attached to the instance and automatic snapshots are released depends on the parameter settings specified during creation. Before releasing an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - `DeleteWithInstance=false`: The disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - `DeleteAutoSnapshot=false`: Automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes or releases a specified ECS instance.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are recycled. All related data is permanently lost and cannot be recovered.
       * - Manual snapshots of disks are retained and continue to incur charges. You can delete them by calling [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html).
       * - Whether disks attached to the instance and automatic snapshots are released depends on the parameter settings specified during creation. Before releasing an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - `DeleteWithInstance=false`: The disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - `DeleteAutoSnapshot=false`: Automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Releases multiple pay-as-you-go instances or expired subscription instances in a batch. You can specify whether to release or convert associated disks to pay-as-you-go disks.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are recycled. All related data is permanently lost and cannot be recovered.
       * - Manual snapshots of disks are retained and continue to incur fees. You can call [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) to delete them.
       * - Whether disks and automatic snapshots attached to the instance are released depends on the parameter settings specified when they were created. Before releasing an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance.
       *
       * @param request DeleteInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstancesWithOptions(const Models::DeleteInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases multiple pay-as-you-go instances or expired subscription instances in a batch. You can specify whether to release or convert associated disks to pay-as-you-go disks.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are recycled. All related data is permanently lost and cannot be recovered.
       * - Manual snapshots of disks are retained and continue to incur fees. You can call [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) to delete them.
       * - Whether disks and automatic snapshots attached to the instance are released depends on the parameter settings specified when they were created. Before releasing an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance.
       *
       * @param request DeleteInstancesRequest
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstances(const Models::DeleteInstancesRequest &request);

      /**
       * @summary Deletes one or more SSH key pairs.
       *
       * @description After you delete an SSH key pair, take note of the following items:
       * - The SSH key pair cannot be queried by calling [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html).  
       * - If an ECS instance is bound to the SSH key pair, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more SSH key pairs.
       *
       * @description After you delete an SSH key pair, take note of the following items:
       * - The SSH key pair cannot be queried by calling [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html).  
       * - If an ECS instance is bound to the SSH key pair, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a launch template in a specified region by specifying the LaunchTemplateId or LaunchTemplateName parameter.
       *
       * @description When you call this operation, take note of the following items:
       * - After you delete a launch template, ECS instances that were created by using the launch template are not affected.
       * - After you delete a launch template, all versions of the template are also deleted and cannot be recovered. If you want to delete only a specific version of a launch template, see [DeleteLaunchTemplateVersion](https://help.aliyun.com/document_detail/2679735.html).
       *
       * @param request DeleteLaunchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaunchTemplateResponse
       */
      Models::DeleteLaunchTemplateResponse deleteLaunchTemplateWithOptions(const Models::DeleteLaunchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a launch template in a specified region by specifying the LaunchTemplateId or LaunchTemplateName parameter.
       *
       * @description When you call this operation, take note of the following items:
       * - After you delete a launch template, ECS instances that were created by using the launch template are not affected.
       * - After you delete a launch template, all versions of the template are also deleted and cannot be recovered. If you want to delete only a specific version of a launch template, see [DeleteLaunchTemplateVersion](https://help.aliyun.com/document_detail/2679735.html).
       *
       * @param request DeleteLaunchTemplateRequest
       * @return DeleteLaunchTemplateResponse
       */
      Models::DeleteLaunchTemplateResponse deleteLaunchTemplate(const Models::DeleteLaunchTemplateRequest &request);

      /**
       * @summary Deletes one or more versions of a specified launch template by specifying parameters such as LaunchTemplateId and DeleteVersion.
       *
       * @description When you call this operation, take note of the following items:
       * - The default version cannot be deleted. You must delete the entire launch template to delete the default version.
       * - If the version you want to delete is the default version, call [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) or switch the default version in the **Launch Templates** console before you perform the deletion.
       * - Deleting a version does not affect instances that were already created by using that version.
       *
       * @param request DeleteLaunchTemplateVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaunchTemplateVersionResponse
       */
      Models::DeleteLaunchTemplateVersionResponse deleteLaunchTemplateVersionWithOptions(const Models::DeleteLaunchTemplateVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more versions of a specified launch template by specifying parameters such as LaunchTemplateId and DeleteVersion.
       *
       * @description When you call this operation, take note of the following items:
       * - The default version cannot be deleted. You must delete the entire launch template to delete the default version.
       * - If the version you want to delete is the default version, call [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) or switch the default version in the **Launch Templates** console before you perform the deletion.
       * - Deleting a version does not affect instances that were already created by using that version.
       *
       * @param request DeleteLaunchTemplateVersionRequest
       * @return DeleteLaunchTemplateVersionResponse
       */
      Models::DeleteLaunchTemplateVersionResponse deleteLaunchTemplateVersion(const Models::DeleteLaunchTemplateVersionRequest &request);

      /**
       * @deprecated OpenAPI DeleteNatGateway is deprecated, please use Vpc::2016-04-28::DeleteNatGateway instead.
       *
       * @summary DeleteNatGateway
       *
       * @param request DeleteNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGatewayWithOptions(const Models::DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteNatGateway is deprecated, please use Vpc::2016-04-28::DeleteNatGateway instead.
       *
       * @summary DeleteNatGateway
       *
       * @param request DeleteNatGatewayRequest
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGateway(const Models::DeleteNatGatewayRequest &request);

      /**
       * @summary Asynchronously deletes an Elastic Network Interface (ENI).
       *
       * @description When you call this operation, take note of the following items:
       * -  The Elastic Network Interface (ENI) must be in the Available state.
       * -  If the ENI is attached to an ECS instance, you must first detach it from the instance ([DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html)) before you can delete the ENI.
       * -  After the ENI is deleted:
       *     - All private addresses of the ENI, including the primary private IP address and secondary private IP addresses, are automatically released.
       *     - The deleted ENI is removed from all associated security groups.
       * -  This is an asynchronous operation. After you successfully invoke the operation, you can check the ENI status or listen for network interface controller (NIC) operation events to determine the result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221208/xual/DeleteNetworkInterface.jpg)
       *     - The Deleting state indicates that the delete request was sent successfully and the ENI is being deleted.
       *     - If the ENI can no longer be found, the ENI is deleted.
       *     - If the ENI remains in the Deleting state for an extended period, the deletion failed. In this case, you can invoke a new delete request for the ENI.
       * **For details, see** [Delete an ENI](https://help.aliyun.com/document_detail/471553.html).
       *
       * @param request DeleteNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfaceResponse
       */
      Models::DeleteNetworkInterfaceResponse deleteNetworkInterfaceWithOptions(const Models::DeleteNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously deletes an Elastic Network Interface (ENI).
       *
       * @description When you call this operation, take note of the following items:
       * -  The Elastic Network Interface (ENI) must be in the Available state.
       * -  If the ENI is attached to an ECS instance, you must first detach it from the instance ([DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html)) before you can delete the ENI.
       * -  After the ENI is deleted:
       *     - All private addresses of the ENI, including the primary private IP address and secondary private IP addresses, are automatically released.
       *     - The deleted ENI is removed from all associated security groups.
       * -  This is an asynchronous operation. After you successfully invoke the operation, you can check the ENI status or listen for network interface controller (NIC) operation events to determine the result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221208/xual/DeleteNetworkInterface.jpg)
       *     - The Deleting state indicates that the delete request was sent successfully and the ENI is being deleted.
       *     - If the ENI can no longer be found, the ENI is deleted.
       *     - If the ENI remains in the Deleting state for an extended period, the deletion failed. In this case, you can invoke a new delete request for the ENI.
       * **For details, see** [Delete an ENI](https://help.aliyun.com/document_detail/471553.html).
       *
       * @param request DeleteNetworkInterfaceRequest
       * @return DeleteNetworkInterfaceResponse
       */
      Models::DeleteNetworkInterfaceResponse deleteNetworkInterface(const Models::DeleteNetworkInterfaceRequest &request);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary Deletes the permission to operate an Elastic Network Interface (ENI).
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermissionWithOptions(const Models::DeleteNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary Deletes the permission to operate an Elastic Network Interface (ENI).
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermission(const Models::DeleteNetworkInterfacePermissionRequest &request);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary DeletePhysicalConnection.
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary DeletePhysicalConnection.
       *
       * @param request DeletePhysicalConnectionRequest
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnection(const Models::DeletePhysicalConnectionRequest &request);

      /**
       * @summary Deletes an O&M window.
       *
       * @param request DeletePlanMaintenanceWindowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlanMaintenanceWindowResponse
       */
      Models::DeletePlanMaintenanceWindowResponse deletePlanMaintenanceWindowWithOptions(const Models::DeletePlanMaintenanceWindowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an O&M window.
       *
       * @param request DeletePlanMaintenanceWindowRequest
       * @return DeletePlanMaintenanceWindowResponse
       */
      Models::DeletePlanMaintenanceWindowResponse deletePlanMaintenanceWindow(const Models::DeletePlanMaintenanceWindowRequest &request);

      /**
       * @summary Deletes a specified port list. All port list entries in the port list are also deleted.
       *
       * @param request DeletePortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePortRangeListResponse
       */
      Models::DeletePortRangeListResponse deletePortRangeListWithOptions(const Models::DeletePortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified port list. All port list entries in the port list are also deleted.
       *
       * @param request DeletePortRangeListRequest
       * @return DeletePortRangeListResponse
       */
      Models::DeletePortRangeListResponse deletePortRangeList(const Models::DeletePortRangeListRequest &request);

      /**
       * @summary Deletes a specified prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with other resources, you cannot directly delete it. Dissociate the prefix list from the resources first, and then delete it. You can call [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) to query the resources that are associated with a specified prefix list.
       *
       * @param request DeletePrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrefixListResponse
       */
      Models::DeletePrefixListResponse deletePrefixListWithOptions(const Models::DeletePrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with other resources, you cannot directly delete it. Dissociate the prefix list from the resources first, and then delete it. You can call [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) to query the resources that are associated with a specified prefix list.
       *
       * @param request DeletePrefixListRequest
       * @return DeletePrefixListResponse
       */
      Models::DeletePrefixListResponse deletePrefixList(const Models::DeletePrefixListRequest &request);

      /**
       * @deprecated OpenAPI DeleteRouteEntry is deprecated, please use Vpc::2016-04-28::DeleteRouteEntry instead.
       *
       * @summary DeleteRouteEntry.
       *
       * @param request DeleteRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntryWithOptions(const Models::DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRouteEntry is deprecated, please use Vpc::2016-04-28::DeleteRouteEntry instead.
       *
       * @summary DeleteRouteEntry.
       *
       * @param request DeleteRouteEntryRequest
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntry(const Models::DeleteRouteEntryRequest &request);

      /**
       * @deprecated OpenAPI DeleteRouterInterface is deprecated, please use Vpc::2016-04-28::DeleteRouterInterface instead.
       *
       * @summary Deletes a router interface.
       *
       * @param request DeleteRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterfaceWithOptions(const Models::DeleteRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRouterInterface is deprecated, please use Vpc::2016-04-28::DeleteRouterInterface instead.
       *
       * @summary Deletes a router interface.
       *
       * @param request DeleteRouterInterfaceRequest
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterface(const Models::DeleteRouterInterfaceRequest &request);

      /**
       * @summary Deletes a security group and all security group rules within it.
       *
       * @description -  Make sure that no ECS instances exist in the security group. You can call [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) to check.
       * -  Make sure that no Elastic Network Interfaces (ENIs) exist in the security group. You can call [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) to check.
       * -  Make sure that no other security groups have authorization dependencies on this security group. You can call [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) to check.
       * -  If the error code `InvalidOperation.DeletionProtection` is returned when you call this operation, the deletion protection feature is enabled for the security group. When you create an ACK cluster, deletion protection is automatically enabled for the associated security group to prevent accidental deletion. The deletion protection feature cannot be manually disabled. It is automatically disabled only after the associated ACK cluster is deleted. For more information, see [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html).
       *
       * @param request DeleteSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroupWithOptions(const Models::DeleteSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group and all security group rules within it.
       *
       * @description -  Make sure that no ECS instances exist in the security group. You can call [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) to check.
       * -  Make sure that no Elastic Network Interfaces (ENIs) exist in the security group. You can call [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) to check.
       * -  Make sure that no other security groups have authorization dependencies on this security group. You can call [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) to check.
       * -  If the error code `InvalidOperation.DeletionProtection` is returned when you call this operation, the deletion protection feature is enabled for the security group. When you create an ACK cluster, deletion protection is automatically enabled for the associated security group to prevent accidental deletion. The deletion protection feature cannot be manually disabled. It is automatically disabled only after the associated ACK cluster is deleted. For more information, see [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html).
       *
       * @param request DeleteSecurityGroupRequest
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroup(const Models::DeleteSecurityGroupRequest &request);

      /**
       * @summary Deletes a specified snapshot. You can also call this operation to cancel a snapshot that is being created.
       *
       * @description When you invoke this operation, note the following items:
       * - If the specified snapshot ID does not exist, the request is ignored. 
       * - If the snapshot has been used to create a custom image, the snapshot cannot be deleted. You must first delete the custom image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)) before you can delete the snapshot.
       * - If the snapshot has been used to create a cloud disk and the `Force` parameter is not set or is set to `Force=false`, the snapshot cannot be directly deleted. To force delete the snapshot, set `Force=true`. After the snapshot is force deleted, the corresponding cloud disk cannot be reinitialized.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified snapshot. You can also call this operation to cancel a snapshot that is being created.
       *
       * @description When you invoke this operation, note the following items:
       * - If the specified snapshot ID does not exist, the request is ignored. 
       * - If the snapshot has been used to create a custom image, the snapshot cannot be deleted. You must first delete the custom image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)) before you can delete the snapshot.
       * - If the snapshot has been used to create a cloud disk and the `Force` parameter is not set or is set to `Force=false`, the snapshot cannot be directly deleted. To force delete the snapshot, set `Force=true`. After the snapshot is force deleted, the corresponding cloud disk cannot be reinitialized.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Deletes a snapshot-consistent group.
       *
       * @description If disk snapshots in a snapshot-consistent group have been used to create custom images, the related disk snapshots are not deleted when the snapshot-consistent group is deleted. To delete the related disk snapshots, first delete the custom images ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)), and then delete the related disk snapshots ([DeleteSnapshot](https://help.aliyun.com/document_detail/25525.html)).
       *
       * @param request DeleteSnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotGroupResponse
       */
      Models::DeleteSnapshotGroupResponse deleteSnapshotGroupWithOptions(const Models::DeleteSnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a snapshot-consistent group.
       *
       * @description If disk snapshots in a snapshot-consistent group have been used to create custom images, the related disk snapshots are not deleted when the snapshot-consistent group is deleted. To delete the related disk snapshots, first delete the custom images ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)), and then delete the related disk snapshots ([DeleteSnapshot](https://help.aliyun.com/document_detail/25525.html)).
       *
       * @param request DeleteSnapshotGroupRequest
       * @return DeleteSnapshotGroupResponse
       */
      Models::DeleteSnapshotGroupResponse deleteSnapshotGroup(const Models::DeleteSnapshotGroupRequest &request);

      /**
       * @summary 删除一个指定的存储集
       *
       * @param request DeleteStorageSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStorageSetResponse
       */
      Models::DeleteStorageSetResponse deleteStorageSetWithOptions(const Models::DeleteStorageSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个指定的存储集
       *
       * @param request DeleteStorageSetRequest
       * @return DeleteStorageSetResponse
       */
      Models::DeleteStorageSetResponse deleteStorageSet(const Models::DeleteStorageSetRequest &request);

      /**
       * @deprecated OpenAPI DeleteVSwitch is deprecated, please use Vpc::2016-04-28::DeleteVSwitch instead.
       *
       * @summary Deletes a specified VSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVSwitch is deprecated, please use Vpc::2016-04-28::DeleteVSwitch instead.
       *
       * @summary Deletes a specified VSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @deprecated OpenAPI DeleteVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::DeleteVirtualBorderRouter instead.
       *
       * @summary Deletes a virtual border router (VBR).
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouterWithOptions(const Models::DeleteVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::DeleteVirtualBorderRouter instead.
       *
       * @summary Deletes a virtual border router (VBR).
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouter(const Models::DeleteVirtualBorderRouterRequest &request);

      /**
       * @deprecated OpenAPI DeleteVpc is deprecated, please use Vpc::2016-04-28::DeleteVpc instead.
       *
       * @summary delete a VPC
       *
       * @param request DeleteVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpcWithOptions(const Models::DeleteVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVpc is deprecated, please use Vpc::2016-04-28::DeleteVpc instead.
       *
       * @summary delete a VPC
       *
       * @param request DeleteVpcRequest
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpc(const Models::DeleteVpcRequest &request);

      /**
       * @summary Deletes a virtual storage channel (VSC).
       *
       * @description When you call this operation, take note of the following items:
       * - Disassociate the VSC from file systems such as Cloud Parallel File Storage (CPFS) before you delete the VSC.
       * - When you call this operation to release a VSC, the instance operating system must respond. If the operating system does not respond, the VSC deletion fails and the VSC enters the DetachFailed state. Check whether the operating system is running properly, or stop the instance and try again.
       * - When you release an instance, VSCs attached to the instance are released together with the instance.
       *
       * @param request DeleteVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVscWithOptions(const Models::DeleteVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual storage channel (VSC).
       *
       * @description When you call this operation, take note of the following items:
       * - Disassociate the VSC from file systems such as Cloud Parallel File Storage (CPFS) before you delete the VSC.
       * - When you call this operation to release a VSC, the instance operating system must respond. If the operating system does not respond, the VSC deletion fails and the VSC enters the DetachFailed state. Check whether the operating system is running properly, or stop the instance and try again.
       * - When you release an instance, VSCs attached to the instance are released together with the instance.
       *
       * @param request DeleteVscRequest
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVsc(const Models::DeleteVscRequest &request);

      /**
       * @summary Calls DeregisterManagedInstance to unregister a managed instance. After the instance is unregistered, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstanceWithOptions(const Models::DeregisterManagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeregisterManagedInstance to unregister a managed instance. After the instance is unregistered, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstance(const Models::DeregisterManagedInstanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary DescribeAccessPoints.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary DescribeAccessPoints.
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries the resource quotas that you can create in an Alibaba Cloud region. The quotas include the maximum numbers of security groups, Elastic Network Interfaces (ENIs), pay-as-you-go instance vCPUs, spot instance vCPUs, pay-as-you-go cloud disk capacity, dedicated hosts, network interface controllers (NICs), network types, and whether the account has completed real-name registration.
       *
       * @description <props="china">After you [register](https://account.aliyun.com/register/register.htm) an Alibaba Cloud account, you can create a specific number of ECS resources in different Alibaba Cloud regions. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * <props="intl">After you [register](https://account.alibabacloud.com/register/intl_register.htm) an Alibaba Cloud account, you can create a specific number of ECS resources in different Alibaba Cloud regions. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * You can also request a quota increase in the [Quota Center](https://quotas.console.aliyun.com/products) based on your needs.
       *
       * @param request DescribeAccountAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAttributesResponse
       */
      Models::DescribeAccountAttributesResponse describeAccountAttributesWithOptions(const Models::DescribeAccountAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource quotas that you can create in an Alibaba Cloud region. The quotas include the maximum numbers of security groups, Elastic Network Interfaces (ENIs), pay-as-you-go instance vCPUs, spot instance vCPUs, pay-as-you-go cloud disk capacity, dedicated hosts, network interface controllers (NICs), network types, and whether the account has completed real-name registration.
       *
       * @description <props="china">After you [register](https://account.aliyun.com/register/register.htm) an Alibaba Cloud account, you can create a specific number of ECS resources in different Alibaba Cloud regions. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * <props="intl">After you [register](https://account.alibabacloud.com/register/intl_register.htm) an Alibaba Cloud account, you can create a specific number of ECS resources in different Alibaba Cloud regions. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * You can also request a quota increase in the [Quota Center](https://quotas.console.aliyun.com/products) based on your needs.
       *
       * @param request DescribeAccountAttributesRequest
       * @return DescribeAccountAttributesResponse
       */
      Models::DescribeAccountAttributesResponse describeAccountAttributes(const Models::DescribeAccountAttributesRequest &request);

      /**
       * @summary Queries the activation codes that you have created and the usage of the activation codes.
       *
       * @description ## Operation description
       * You can use one of the following methods to view the returned data:
       * - Method 1: When paged query the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response can be used to query subsequent pages. When paged query subsequent pages, set `NextToken` to the value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       * - Method 2: Use `PageSize` to specify the number of entries per page and `PageNumber` to specify the page number. You can use only one of the two methods. If you set `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect, and `TotalCount` in the response is invalid.
       *
       * @param request DescribeActivationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationsResponse
       */
      Models::DescribeActivationsResponse describeActivationsWithOptions(const Models::DescribeActivationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation codes that you have created and the usage of the activation codes.
       *
       * @description ## Operation description
       * You can use one of the following methods to view the returned data:
       * - Method 1: When paged query the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response can be used to query subsequent pages. When paged query subsequent pages, set `NextToken` to the value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       * - Method 2: Use `PageSize` to specify the number of entries per page and `PageNumber` to specify the page number. You can use only one of the two methods. If you set `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect, and `TotalCount` in the response is invalid.
       *
       * @param request DescribeActivationsRequest
       * @return DescribeActivationsResponse
       */
      Models::DescribeActivationsResponse describeActivations(const Models::DescribeActivationsRequest &request);

      /**
       * @summary Invokes DescribeAutoProvisioningGroupHistory to query the scheduling node information of an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistoryWithOptions(const Models::DescribeAutoProvisioningGroupHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeAutoProvisioningGroupHistory to query the scheduling node information of an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistory(const Models::DescribeAutoProvisioningGroupHistoryRequest &request);

      /**
       * @summary Queries the instances in an auto-provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstancesWithOptions(const Models::DescribeAutoProvisioningGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances in an auto-provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstances(const Models::DescribeAutoProvisioningGroupInstancesRequest &request);

      /**
       * @summary Queries one or more auto-provisioning groups.
       *
       * @param request DescribeAutoProvisioningGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupsResponse
       */
      Models::DescribeAutoProvisioningGroupsResponse describeAutoProvisioningGroupsWithOptions(const Models::DescribeAutoProvisioningGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more auto-provisioning groups.
       *
       * @param request DescribeAutoProvisioningGroupsRequest
       * @return DescribeAutoProvisioningGroupsResponse
       */
      Models::DescribeAutoProvisioningGroupsResponse describeAutoProvisioningGroups(const Models::DescribeAutoProvisioningGroupsRequest &request);

      /**
       * @summary Queries the associate relationships of an automatic snapshot policy.
       *
       * @param request DescribeAutoSnapshotPolicyAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPolicyAssociationsResponse
       */
      Models::DescribeAutoSnapshotPolicyAssociationsResponse describeAutoSnapshotPolicyAssociationsWithOptions(const Models::DescribeAutoSnapshotPolicyAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associate relationships of an automatic snapshot policy.
       *
       * @param request DescribeAutoSnapshotPolicyAssociationsRequest
       * @return DescribeAutoSnapshotPolicyAssociationsResponse
       */
      Models::DescribeAutoSnapshotPolicyAssociationsResponse describeAutoSnapshotPolicyAssociations(const Models::DescribeAutoSnapshotPolicyAssociationsRequest &request);

      /**
       * @summary Queries the details of automatic snapshot policies that are created in a specified region.
       *
       * @param request DescribeAutoSnapshotPolicyExRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPolicyExResponse
       */
      Models::DescribeAutoSnapshotPolicyExResponse describeAutoSnapshotPolicyExWithOptions(const Models::DescribeAutoSnapshotPolicyExRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of automatic snapshot policies that are created in a specified region.
       *
       * @param request DescribeAutoSnapshotPolicyExRequest
       * @return DescribeAutoSnapshotPolicyExResponse
       */
      Models::DescribeAutoSnapshotPolicyExResponse describeAutoSnapshotPolicyEx(const Models::DescribeAutoSnapshotPolicyExRequest &request);

      /**
       * @summary Queries the inventory status of resources in a specified zone. This operation is primarily used to check whether target resources (such as instance types and system disk types) are sufficiently stocked in a specific zone before you create instances (RunInstances) or modify instance specifications (ModifyInstanceSpec).
       *
       * @description The DestinationResource parameter has different logic and requirements for its values. In the following ordered list, lower-order values require more parameters to be set, and you cannot use a lower-order value to filter higher-order resource categories.
       * - Value order: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * - Value examples:
       *     - If DestinationResource is set to `DataDisk`:
       *          - If `ResourceType` is set to `disk`, the query retrieves data disk types that are not associated with ECS instance types, and the InstanceType parameter is not required.
       *         - If `ResourceType` is set to `instance`, the query retrieves data disk types that can be attached to ECS instances. Because instance types impose restrictions on data disks, you must specify both `InstanceType` and `DataDiskCategory`.
       *     - If DestinationResource is set to `SystemDisk` and `ResourceType` is set to `instance`, you must specify the InstanceType parameter because ECS instance types impose restrictions on system disks.
       *     - If DestinationResource is set to `InstanceType`, specify the IoOptimized and InstanceType parameters.
       *     - Query the inventory of ecs.g5.large across all zones in a specified region: `RegionId=ap-southeast-1 &DestinationResource=InstanceType &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       *     - Query the list of zones that have ecs.g5.large in stock in a specified region: `RegionId=ap-southeast-1 &DestinationResource=Zone &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       * <details>
       * <summary>Query the list of active zones that supply the ecs.g5.large instance type in the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "DestinationResource": "Zone"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>Query the inventory of ecs.g5.large across all zones in the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "DestinationResource": "InstanceType"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase data disk only] Query the inventory of cloud_efficiency data disks in Zone B of the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "ZoneId": "ap-southeast-1b",
       * "ResourceType": "disk",
       * "DestinationResource": "DataDisk"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase ECS instance and system disk] Query the inventory of ecs.g7.large instances with cloud_essd system disks in Zone B of the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "ZoneId": "ap-southeast-1b",
       * "ResourceType": "instance",
       * "InstanceType": "ecs.g7.large",
       * "DestinationResource": "SystemDisk",
       * "SystemDiskCategory": "cloud_essd"
       * ```
       * </details>
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the inventory status of resources in a specified zone. This operation is primarily used to check whether target resources (such as instance types and system disk types) are sufficiently stocked in a specific zone before you create instances (RunInstances) or modify instance specifications (ModifyInstanceSpec).
       *
       * @description The DestinationResource parameter has different logic and requirements for its values. In the following ordered list, lower-order values require more parameters to be set, and you cannot use a lower-order value to filter higher-order resource categories.
       * - Value order: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * - Value examples:
       *     - If DestinationResource is set to `DataDisk`:
       *          - If `ResourceType` is set to `disk`, the query retrieves data disk types that are not associated with ECS instance types, and the InstanceType parameter is not required.
       *         - If `ResourceType` is set to `instance`, the query retrieves data disk types that can be attached to ECS instances. Because instance types impose restrictions on data disks, you must specify both `InstanceType` and `DataDiskCategory`.
       *     - If DestinationResource is set to `SystemDisk` and `ResourceType` is set to `instance`, you must specify the InstanceType parameter because ECS instance types impose restrictions on system disks.
       *     - If DestinationResource is set to `InstanceType`, specify the IoOptimized and InstanceType parameters.
       *     - Query the inventory of ecs.g5.large across all zones in a specified region: `RegionId=ap-southeast-1 &DestinationResource=InstanceType &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       *     - Query the list of zones that have ecs.g5.large in stock in a specified region: `RegionId=ap-southeast-1 &DestinationResource=Zone &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       * <details>
       * <summary>Query the list of active zones that supply the ecs.g5.large instance type in the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "DestinationResource": "Zone"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>Query the inventory of ecs.g5.large across all zones in the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "DestinationResource": "InstanceType"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase data disk only] Query the inventory of cloud_efficiency data disks in Zone B of the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "ZoneId": "ap-southeast-1b",
       * "ResourceType": "disk",
       * "DestinationResource": "DataDisk"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase ECS instance and system disk] Query the inventory of ecs.g7.large instances with cloud_essd system disks in Zone B of the Singapore region.</summary>
       * ```
       * "RegionId": "ap-southeast-1",
       * "ZoneId": "ap-southeast-1b",
       * "ResourceType": "instance",
       * "InstanceType": "ecs.g7.large",
       * "DestinationResource": "SystemDisk",
       * "SystemDiskCategory": "cloud_essd"
       * ```
       * </details>
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the maximum public bandwidth that can be purchased, upgraded, or downgraded for different instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitationWithOptions(const Models::DescribeBandwidthLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum public bandwidth that can be purchased, upgraded, or downgraded for different instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitation(const Models::DescribeBandwidthLimitationRequest &request);

      /**
       * @summary Queries bandwidth packages.
       *
       * @param request DescribeBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackagesResponse
       */
      Models::DescribeBandwidthPackagesResponse describeBandwidthPackagesWithOptions(const Models::DescribeBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth packages.
       *
       * @param request DescribeBandwidthPackagesRequest
       * @return DescribeBandwidthPackagesResponse
       */
      Models::DescribeBandwidthPackagesResponse describeBandwidthPackages(const Models::DescribeBandwidthPackagesRequest &request);

      /**
       * @summary Queries the list of instances that match a capacity reservation.
       *
       * @param request DescribeCapacityReservationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationInstancesResponse
       */
      Models::DescribeCapacityReservationInstancesResponse describeCapacityReservationInstancesWithOptions(const Models::DescribeCapacityReservationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of instances that match a capacity reservation.
       *
       * @param request DescribeCapacityReservationInstancesRequest
       * @return DescribeCapacityReservationInstancesResponse
       */
      Models::DescribeCapacityReservationInstancesResponse describeCapacityReservationInstances(const Models::DescribeCapacityReservationInstancesRequest &request);

      /**
       * @summary Queries the details of one or more capacity reservations, such as the status, effective and expiration time, private pool mode, and number of used instances.
       *
       * @param request DescribeCapacityReservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservationsWithOptions(const Models::DescribeCapacityReservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more capacity reservations, such as the status, effective and expiration time, private pool mode, and number of used instances.
       *
       * @param request DescribeCapacityReservationsRequest
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservations(const Models::DescribeCapacityReservationsRequest &request);

      /**
       * @summary Queries one or more classic network type instances that are connected to a virtual private cloud (VPC).
       *
       * @description When you invoke this operation, take note of the following items:
       * -  This operation supports only classic network type instances.
       * -  You can query up to 100 classic network type instances at a time.
       * -  The `VpcId` and `InstanceId` parameters cannot both be empty.
       *
       * @param request DescribeClassicLinkInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassicLinkInstancesResponse
       */
      Models::DescribeClassicLinkInstancesResponse describeClassicLinkInstancesWithOptions(const Models::DescribeClassicLinkInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more classic network type instances that are connected to a virtual private cloud (VPC).
       *
       * @description When you invoke this operation, take note of the following items:
       * -  This operation supports only classic network type instances.
       * -  You can query up to 100 classic network type instances at a time.
       * -  The `VpcId` and `InstanceId` parameters cannot both be empty.
       *
       * @param request DescribeClassicLinkInstancesRequest
       * @return DescribeClassicLinkInstancesResponse
       */
      Models::DescribeClassicLinkInstancesResponse describeClassicLinkInstances(const Models::DescribeClassicLinkInstancesRequest &request);

      /**
       * @summary Queries Cloud Assistant service configurations.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettingsWithOptions(const Models::DescribeCloudAssistantSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Cloud Assistant service configurations.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettings(const Models::DescribeCloudAssistantSettingsRequest &request);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on one or more instances. If Cloud Assistant is installed, the response also includes the total number of command executions, the number of ongoing executions, and the time of the most recent command execution.
       *
       * @description ## Operation description
       * - Call this operation paged query the Cloud Assistant status of an instance. Run commands or send files only when CloudAssistantStatus is true, especially for newly created instances.
       * - When you call this operation paged query the first page of results, set only `MaxResults` to limit the number of entries to return. The `NextToken` value returned in the response can be used paged query subsequent pages. When you query subsequent pages, set `NextToken` to the value returned in the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatusWithOptions(const Models::DescribeCloudAssistantStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on one or more instances. If Cloud Assistant is installed, the response also includes the total number of command executions, the number of ongoing executions, and the time of the most recent command execution.
       *
       * @description ## Operation description
       * - Call this operation paged query the Cloud Assistant status of an instance. Run commands or send files only when CloudAssistantStatus is true, especially for newly created instances.
       * - When you call this operation paged query the first page of results, set only `MaxResults` to limit the number of entries to return. The `NextToken` value returned in the response can be used paged query subsequent pages. When you query subsequent pages, set `NextToken` to the value returned in the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatus(const Models::DescribeCloudAssistantStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Queries a cluster.
       *
       * @param request DescribeClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClustersWithOptions(const Models::DescribeClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Queries a cluster.
       *
       * @param request DescribeClustersRequest
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClusters(const Models::DescribeClustersRequest &request);

      /**
       * @summary Queries Cloud Assistant commands that you manually created or public commands provided by Alibaba Cloud.
       *
       * @description ## Operation description
       * - If you specify only the Action and RegionId parameters without specifying other request parameters, all available commands (CommandId) that you manually created are queried by default.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommandsWithOptions(const Models::DescribeCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Cloud Assistant commands that you manually created or public commands provided by Alibaba Cloud.
       *
       * @description ## Operation description
       * - If you specify only the Action and RegionId parameters without specifying other request parameters, all available commands (CommandId) that you manually created are queried by default.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeCommandsRequest
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommands(const Models::DescribeCommandsRequest &request);

      /**
       * @summary Queries the auto-renewal status of one or more subscription dedicated hosts.
       *
       * @param request DescribeDedicatedHostAutoRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostAutoRenewResponse
       */
      Models::DescribeDedicatedHostAutoRenewResponse describeDedicatedHostAutoRenewWithOptions(const Models::DescribeDedicatedHostAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of one or more subscription dedicated hosts.
       *
       * @param request DescribeDedicatedHostAutoRenewRequest
       * @return DescribeDedicatedHostAutoRenewResponse
       */
      Models::DescribeDedicatedHostAutoRenewResponse describeDedicatedHostAutoRenew(const Models::DescribeDedicatedHostAutoRenewRequest &request);

      /**
       * @summary Queries the details of one or more dedicated host clusters.
       *
       * @description ## Operation description
       * The request parameters act as filters. Filters have a logical AND relationship. If a parameter is empty, the filter does not take effect. However, if the value of `DedicatedHostClusterIds` is an empty JSON array (`[]`), the filter is considered valid and an empty result is returned.
       *
       * @param request DescribeDedicatedHostClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostClustersResponse
       */
      Models::DescribeDedicatedHostClustersResponse describeDedicatedHostClustersWithOptions(const Models::DescribeDedicatedHostClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more dedicated host clusters.
       *
       * @description ## Operation description
       * The request parameters act as filters. Filters have a logical AND relationship. If a parameter is empty, the filter does not take effect. However, if the value of `DedicatedHostClusterIds` is an empty JSON array (`[]`), the filter is considered valid and an empty result is returned.
       *
       * @param request DescribeDedicatedHostClustersRequest
       * @return DescribeDedicatedHostClustersResponse
       */
      Models::DescribeDedicatedHostClustersResponse describeDedicatedHostClusters(const Models::DescribeDedicatedHostClustersRequest &request);

      /**
       * @summary Invokes DescribeDedicatedHostTypes to query the detailed parameters of dedicated host types supported in a specified region, or queries the ECS instance families supported by dedicated hosts.
       *
       * @param request DescribeDedicatedHostTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostTypesResponse
       */
      Models::DescribeDedicatedHostTypesResponse describeDedicatedHostTypesWithOptions(const Models::DescribeDedicatedHostTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeDedicatedHostTypes to query the detailed parameters of dedicated host types supported in a specified region, or queries the ECS instance families supported by dedicated hosts.
       *
       * @param request DescribeDedicatedHostTypesRequest
       * @return DescribeDedicatedHostTypesResponse
       */
      Models::DescribeDedicatedHostTypesResponse describeDedicatedHostTypes(const Models::DescribeDedicatedHostTypesRequest &request);

      /**
       * @summary Queries the details of one or more dedicated hosts. You can retrieve information such as the physical performance metrics, machine ID, usage status, and the list of ECS instances created on the dedicated hosts. You can filter results by specifying parameters such as dedicated host IDs, dedicated host cluster ID, hostname, and status to precisely query the details you need, providing support for efficient management and optimization of cloud computing compute resources.
       *
       * @description ## Operation description
       * You can query the details of one or more dedicated hosts by using one of the following methods:
       * - Specify `DedicatedHostIds` to query the details of dedicated hosts.
       * - Specify `DedicatedHostClusterId` to query the details of dedicated hosts in a dedicated host cluster.
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more dedicated hosts. You can retrieve information such as the physical performance metrics, machine ID, usage status, and the list of ECS instances created on the dedicated hosts. You can filter results by specifying parameters such as dedicated host IDs, dedicated host cluster ID, hostname, and status to precisely query the details you need, providing support for efficient management and optimization of cloud computing compute resources.
       *
       * @description ## Operation description
       * You can query the details of one or more dedicated hosts by using one of the following methods:
       * - Specify `DedicatedHostIds` to query the details of dedicated hosts.
       * - Specify `DedicatedHostClusterId` to query the details of dedicated hosts in a dedicated host cluster.
       *
       * @param request DescribeDedicatedHostsRequest
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHosts(const Models::DescribeDedicatedHostsRequest &request);

      /**
       * @summary Calls DescribeDeploymentSetSupportedInstanceTypeFamily to query the instance families that support each deployment set strategy by specifying the RegionId and Strategy parameters.
       *
       * @description ## Operation description
       * For more information about instance families, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       *
       * @param request DescribeDeploymentSetSupportedInstanceTypeFamilyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentSetSupportedInstanceTypeFamilyResponse
       */
      Models::DescribeDeploymentSetSupportedInstanceTypeFamilyResponse describeDeploymentSetSupportedInstanceTypeFamilyWithOptions(const Models::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeDeploymentSetSupportedInstanceTypeFamily to query the instance families that support each deployment set strategy by specifying the RegionId and Strategy parameters.
       *
       * @description ## Operation description
       * For more information about instance families, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       *
       * @param request DescribeDeploymentSetSupportedInstanceTypeFamilyRequest
       * @return DescribeDeploymentSetSupportedInstanceTypeFamilyResponse
       */
      Models::DescribeDeploymentSetSupportedInstanceTypeFamilyResponse describeDeploymentSetSupportedInstanceTypeFamily(const Models::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request);

      /**
       * @summary Queries the details of one or more deployment sets.
       *
       * @param request DescribeDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentSetsResponse
       */
      Models::DescribeDeploymentSetsResponse describeDeploymentSetsWithOptions(const Models::DescribeDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more deployment sets.
       *
       * @param request DescribeDeploymentSetsRequest
       * @return DescribeDeploymentSetsResponse
       */
      Models::DescribeDeploymentSetsResponse describeDeploymentSets(const Models::DescribeDeploymentSetsRequest &request);

      /**
       * @summary Queries the list of resource diagnostic metric sets by calling DescribeDiagnosticMetricSets.
       *
       * @param request DescribeDiagnosticMetricSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticMetricSetsResponse
       */
      Models::DescribeDiagnosticMetricSetsResponse describeDiagnosticMetricSetsWithOptions(const Models::DescribeDiagnosticMetricSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource diagnostic metric sets by calling DescribeDiagnosticMetricSets.
       *
       * @param request DescribeDiagnosticMetricSetsRequest
       * @return DescribeDiagnosticMetricSetsResponse
       */
      Models::DescribeDiagnosticMetricSetsResponse describeDiagnosticMetricSets(const Models::DescribeDiagnosticMetricSetsRequest &request);

      /**
       * @summary Queries a list of diagnostic metrics.
       *
       * @param request DescribeDiagnosticMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticMetricsResponse
       */
      Models::DescribeDiagnosticMetricsResponse describeDiagnosticMetricsWithOptions(const Models::DescribeDiagnosticMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of diagnostic metrics.
       *
       * @param request DescribeDiagnosticMetricsRequest
       * @return DescribeDiagnosticMetricsResponse
       */
      Models::DescribeDiagnosticMetricsResponse describeDiagnosticMetrics(const Models::DescribeDiagnosticMetricsRequest &request);

      /**
       * @summary Queries the details of a resource diagnostic report.
       *
       * @param request DescribeDiagnosticReportAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticReportAttributesResponse
       */
      Models::DescribeDiagnosticReportAttributesResponse describeDiagnosticReportAttributesWithOptions(const Models::DescribeDiagnosticReportAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a resource diagnostic report.
       *
       * @param request DescribeDiagnosticReportAttributesRequest
       * @return DescribeDiagnosticReportAttributesResponse
       */
      Models::DescribeDiagnosticReportAttributesResponse describeDiagnosticReportAttributes(const Models::DescribeDiagnosticReportAttributesRequest &request);

      /**
       * @summary Queries a list of resource diagnostic reports.
       *
       * @param request DescribeDiagnosticReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticReportsResponse
       */
      Models::DescribeDiagnosticReportsResponse describeDiagnosticReportsWithOptions(const Models::DescribeDiagnosticReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resource diagnostic reports.
       *
       * @param request DescribeDiagnosticReportsRequest
       * @return DescribeDiagnosticReportsResponse
       */
      Models::DescribeDiagnosticReportsResponse describeDiagnosticReports(const Models::DescribeDiagnosticReportsRequest &request);

      /**
       * @summary Queries the key used for account-level default encryption of block storage.
       *
       * @param request DescribeDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskDefaultKMSKeyIdResponse
       */
      Models::DescribeDiskDefaultKMSKeyIdResponse describeDiskDefaultKMSKeyIdWithOptions(const Models::DescribeDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the key used for account-level default encryption of block storage.
       *
       * @param request DescribeDiskDefaultKMSKeyIdRequest
       * @return DescribeDiskDefaultKMSKeyIdResponse
       */
      Models::DescribeDiskDefaultKMSKeyIdResponse describeDiskDefaultKMSKeyId(const Models::DescribeDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Queries the service status of account-level default encryption for block storage in a specified region.
       *
       * @param request DescribeDiskEncryptionByDefaultStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskEncryptionByDefaultStatusResponse
       */
      Models::DescribeDiskEncryptionByDefaultStatusResponse describeDiskEncryptionByDefaultStatusWithOptions(const Models::DescribeDiskEncryptionByDefaultStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service status of account-level default encryption for block storage in a specified region.
       *
       * @param request DescribeDiskEncryptionByDefaultStatusRequest
       * @return DescribeDiskEncryptionByDefaultStatusResponse
       */
      Models::DescribeDiskEncryptionByDefaultStatusResponse describeDiskEncryptionByDefaultStatus(const Models::DescribeDiskEncryptionByDefaultStatusRequest &request);

      /**
       * @summary Queries the usage information of a cloud disk within a specified time period, such as read IOPS, write IOPS, read bandwidth (B/s), write bandwidth (B/s), read latency (μs), and write latency (μs).
       *
       * @description When you call this operation, take note of the following limits:
       * -  You can query usage information only for basic disks in the In Use (`In_use`) state. For more information, see [Basic disk status](https://help.aliyun.com/document_detail/25689.html).
       *     > If the returned information contains missing content, the usage information for that time period cannot be obtained because the basic disk was not in the In Use (`In_use`) state.
       * -  A maximum of 400 data entries can be returned at a time. The condition `(EndTime – StartTime) / Period` must be less than or equal to 400. In other words, the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only for the last 30 days. The specified `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * ## Request example
       * Assume that you want to query the usage information of the disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region at 600-second intervals from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z`. Configure the request parameters as follows:
       * ```
       * RegionId:"ap-southeast-1", //Set the region
       * DiskId:"d-bp14emm68wx98vjk****", //Set the disk ID
       * StartTime:"2025-02-15T00:00:00Z", //Set the query start time
       * EndTime:"2025-02-17T00:00:00Z", //Set the query end time
       * Period:"600", //Set the data granularity
       * ```
       *
       * @param request DescribeDiskMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorDataWithOptions(const Models::DescribeDiskMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage information of a cloud disk within a specified time period, such as read IOPS, write IOPS, read bandwidth (B/s), write bandwidth (B/s), read latency (μs), and write latency (μs).
       *
       * @description When you call this operation, take note of the following limits:
       * -  You can query usage information only for basic disks in the In Use (`In_use`) state. For more information, see [Basic disk status](https://help.aliyun.com/document_detail/25689.html).
       *     > If the returned information contains missing content, the usage information for that time period cannot be obtained because the basic disk was not in the In Use (`In_use`) state.
       * -  A maximum of 400 data entries can be returned at a time. The condition `(EndTime – StartTime) / Period` must be less than or equal to 400. In other words, the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only for the last 30 days. The specified `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * ## Request example
       * Assume that you want to query the usage information of the disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region at 600-second intervals from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z`. Configure the request parameters as follows:
       * ```
       * RegionId:"ap-southeast-1", //Set the region
       * DiskId:"d-bp14emm68wx98vjk****", //Set the disk ID
       * StartTime:"2025-02-15T00:00:00Z", //Set the query start time
       * EndTime:"2025-02-17T00:00:00Z", //Set the query end time
       * Period:"600", //Set the data granularity
       * ```
       *
       * @param request DescribeDiskMonitorDataRequest
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorData(const Models::DescribeDiskMonitorDataRequest &request);

      /**
       * @summary Queries information about one or more created block storage devices, including disks, local disks, and elastic ephemeral disks.
       *
       * @description - The request parameters RegionId, ZoneId, DiskIds, and InstanceId are filters. The parameters have AND relationships.
       * - The DiskIds request parameter is a JSON format array. If DiskIds is not specified, the filter does not take effect. If DiskIds is set to an empty JSON array, the filter is considered valid and an empty result is returned.
       * - Token-based paged query is supported. Set NextToken to the pagination token. The value is the NextToken value returned in the previous invoke of DescribeDisks. Then, use MaxResults to settings the maximum number of entries per page.
       * - A disk with the multi-attach feature enabled can be attached to multiple instances. You can check the Attachment list in the response to view all attachment information of the disk.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisksWithOptions(const Models::DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more created block storage devices, including disks, local disks, and elastic ephemeral disks.
       *
       * @description - The request parameters RegionId, ZoneId, DiskIds, and InstanceId are filters. The parameters have AND relationships.
       * - The DiskIds request parameter is a JSON format array. If DiskIds is not specified, the filter does not take effect. If DiskIds is set to an empty JSON array, the filter is considered valid and an empty result is returned.
       * - Token-based paged query is supported. Set NextToken to the pagination token. The value is the NextToken value returned in the previous invoke of DescribeDisks. Then, use MaxResults to settings the maximum number of entries per page.
       * - A disk with the multi-attach feature enabled can be attached to multiple instances. You can check the Attachment list in the response to view all attachment information of the disk.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisks(const Models::DescribeDisksRequest &request);

      /**
       * @summary Queries the full status information of one or more block storage devices.
       *
       * @description -  The full status information of a block storage device includes the block storage lifecycle status (`Status`), block storage health status (`HealthStatus`), and block storage event type (`EventType`).  
       * -  Because the publish time, scheduled execution time, and actual execution time of block storage-related events are the same, you can specify a time period (`EventTime.Start` to `EventTime.End`) to query all historical events that occurred during that period. You can query historical events from the last seven days at most.
       *
       * @param request DescribeDisksFullStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksFullStatusResponse
       */
      Models::DescribeDisksFullStatusResponse describeDisksFullStatusWithOptions(const Models::DescribeDisksFullStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full status information of one or more block storage devices.
       *
       * @description -  The full status information of a block storage device includes the block storage lifecycle status (`Status`), block storage health status (`HealthStatus`), and block storage event type (`EventType`).  
       * -  Because the publish time, scheduled execution time, and actual execution time of block storage-related events are the same, you can specify a time period (`EventTime.Start` to `EventTime.End`) to query all historical events that occurred during that period. You can query historical events from the last seven days at most.
       *
       * @param request DescribeDisksFullStatusRequest
       * @return DescribeDisksFullStatusResponse
       */
      Models::DescribeDisksFullStatusResponse describeDisksFullStatus(const Models::DescribeDisksFullStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeEipAddresses is deprecated, please use Vpc::2016-04-28::DescribeEipAddresses instead.
       *
       * @summary DescribeEipAddresses.
       *
       * @param request DescribeEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddressesWithOptions(const Models::DescribeEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeEipAddresses is deprecated, please use Vpc::2016-04-28::DescribeEipAddresses instead.
       *
       * @summary DescribeEipAddresses.
       *
       * @param request DescribeEipAddressesRequest
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddresses(const Models::DescribeEipAddressesRequest &request);

      /**
       * @deprecated OpenAPI DescribeEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary DescribeEipMonitorData
       *
       * @param request DescribeEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorDataWithOptions(const Models::DescribeEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary DescribeEipMonitorData
       *
       * @param request DescribeEipMonitorDataRequest
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorData(const Models::DescribeEipMonitorDataRequest &request);

      /**
       * @summary Queries the auto-renewal attributes of one or more elasticity assurance services.
       *
       * @param request DescribeElasticityAssuranceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::DescribeElasticityAssuranceAutoRenewAttributeResponse describeElasticityAssuranceAutoRenewAttributeWithOptions(const Models::DescribeElasticityAssuranceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attributes of one or more elasticity assurance services.
       *
       * @param request DescribeElasticityAssuranceAutoRenewAttributeRequest
       * @return DescribeElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::DescribeElasticityAssuranceAutoRenewAttributeResponse describeElasticityAssuranceAutoRenewAttribute(const Models::DescribeElasticityAssuranceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the list of running instances that are matched to an elasticity assurance.
       *
       * @description After an elasticity assurance expires, the matching data between instances and the private pool associated with the elasticity assurance also becomes invalid. If you call this operation to query an expired elasticity assurance, an empty result is returned.
       *
       * @param request DescribeElasticityAssuranceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssuranceInstancesResponse
       */
      Models::DescribeElasticityAssuranceInstancesResponse describeElasticityAssuranceInstancesWithOptions(const Models::DescribeElasticityAssuranceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of running instances that are matched to an elasticity assurance.
       *
       * @description After an elasticity assurance expires, the matching data between instances and the private pool associated with the elasticity assurance also becomes invalid. If you call this operation to query an expired elasticity assurance, an empty result is returned.
       *
       * @param request DescribeElasticityAssuranceInstancesRequest
       * @return DescribeElasticityAssuranceInstancesResponse
       */
      Models::DescribeElasticityAssuranceInstancesResponse describeElasticityAssuranceInstances(const Models::DescribeElasticityAssuranceInstancesRequest &request);

      /**
       * @summary Queries the details of an elasticity assurance service, such as the status, matching mode, effective method, expiration time, and number of used instances.
       *
       * @param request DescribeElasticityAssurancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssurancesResponse
       */
      Models::DescribeElasticityAssurancesResponse describeElasticityAssurancesWithOptions(const Models::DescribeElasticityAssurancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an elasticity assurance service, such as the status, matching mode, effective method, expiration time, and number of used instances.
       *
       * @param request DescribeElasticityAssurancesRequest
       * @return DescribeElasticityAssurancesResponse
       */
      Models::DescribeElasticityAssurancesResponse describeElasticityAssurances(const Models::DescribeElasticityAssurancesRequest &request);

      /**
       * @summary Queries the traffic information of a secondary ENI within a specified time period.
       *
       * @description ## Operation description
       * The traffic information that you can query about a secondary ENI includes the number of packets sent and received by the secondary ENI, the internal network inbound and outbound traffic, and the number of packets dropped by the secondary ENI. If some information is missing from the response, the system may have failed to obtain the corresponding information. For example, the information cannot be obtained when the instance is in the Stopped state or when the secondary ENI is not attached to an instance and is in the Available state. Take note of the following items when you call this operation: 
       * -  A maximum of 400 data entries can be returned at a time. Make sure that the value of `(EndTime–StartTime)/Period` is less than or equal to 400, which means the value of the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only within the last 30 days. The value of `StartTime` cannot be more than 30 days before the current time.
       *
       * @param request DescribeEniMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEniMonitorDataResponse
       */
      Models::DescribeEniMonitorDataResponse describeEniMonitorDataWithOptions(const Models::DescribeEniMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic information of a secondary ENI within a specified time period.
       *
       * @description ## Operation description
       * The traffic information that you can query about a secondary ENI includes the number of packets sent and received by the secondary ENI, the internal network inbound and outbound traffic, and the number of packets dropped by the secondary ENI. If some information is missing from the response, the system may have failed to obtain the corresponding information. For example, the information cannot be obtained when the instance is in the Stopped state or when the secondary ENI is not attached to an instance and is in the Available state. Take note of the following items when you call this operation: 
       * -  A maximum of 400 data entries can be returned at a time. Make sure that the value of `(EndTime–StartTime)/Period` is less than or equal to 400, which means the value of the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only within the last 30 days. The value of `StartTime` cannot be more than 30 days before the current time.
       *
       * @param request DescribeEniMonitorDataRequest
       * @return DescribeEniMonitorDataResponse
       */
      Models::DescribeEniMonitorDataResponse describeEniMonitorData(const Models::DescribeEniMonitorDataRequest &request);

      /**
       * @deprecated OpenAPI DescribeForwardTableEntries is deprecated, please use Vpc::2016-04-28::DescribeForwardTableEntries instead.
       *
       * @summary Queries DNAT entries in a DNAT table.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeForwardTableEntries is deprecated, please use Vpc::2016-04-28::DescribeForwardTableEntries instead.
       *
       * @summary Queries DNAT entries in a DNAT table.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @deprecated OpenAPI DescribeHaVips is deprecated, please use Vpc::2016-04-28::DescribeHaVips instead.
       *
       * @summary Queries the details of high-availability virtual IP addresses (HAVIPs).
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeHaVips is deprecated, please use Vpc::2016-04-28::DescribeHaVips instead.
       *
       * @summary Queries the details of high-availability virtual IP addresses (HAVIPs).
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries available HPC clusters. The request parameters are used as filters. The filters are evaluated by using a logical AND. The parameters are independent of each other.
       *
       * @param request DescribeHpcClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClustersWithOptions(const Models::DescribeHpcClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available HPC clusters. The request parameters are used as filters. The filters are evaluated by using a logical AND. The parameters are independent of each other.
       *
       * @param request DescribeHpcClustersRequest
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClusters(const Models::DescribeHpcClustersRequest &request);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can set `NextToken` to the value of `NextToken` returned in the previous call to DescribeImageComponents, and set `MaxResults` to specify the maximum number of entries per page.
       *
       * @param request DescribeImageComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageComponentsResponse
       */
      Models::DescribeImageComponentsResponse describeImageComponentsWithOptions(const Models::DescribeImageComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can set `NextToken` to the value of `NextToken` returned in the previous call to DescribeImageComponents, and set `MaxResults` to specify the maximum number of entries per page.
       *
       * @param request DescribeImageComponentsRequest
       * @return DescribeImageComponentsResponse
       */
      Models::DescribeImageComponentsResponse describeImageComponents(const Models::DescribeImageComponentsRequest &request);

      /**
       * @summary Queries the latest available custom image in a specified image family.
       *
       * @description ## Operation description
       * If no available images exist in the specified image family, the response is empty.
       *
       * @param request DescribeImageFromFamilyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageFromFamilyResponse
       */
      Models::DescribeImageFromFamilyResponse describeImageFromFamilyWithOptions(const Models::DescribeImageFromFamilyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest available custom image in a specified image family.
       *
       * @description ## Operation description
       * If no available images exist in the specified image family, the response is empty.
       *
       * @param request DescribeImageFromFamilyRequest
       * @return DescribeImageFromFamilyResponse
       */
      Models::DescribeImageFromFamilyResponse describeImageFromFamily(const Models::DescribeImageFromFamilyRequest &request);

      /**
       * @summary Queries the details of an image build task.
       *
       * @description ## Operation description
       * - The specified image template ID (ImagePipelineId) cannot be a deleted image template. Deleted image templates also delete the corresponding build tasks.
       * - The image template ID (ImagePipelineId) and the build task ID (ExecutionId) cannot both be empty.
       * - You can set NextToken to the value of NextToken returned in the previous call to DescribeImagePipelineExecutions, and set MaxResults to specify the maximum number of entries per page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutionsWithOptions(const Models::DescribeImagePipelineExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an image build task.
       *
       * @description ## Operation description
       * - The specified image template ID (ImagePipelineId) cannot be a deleted image template. Deleted image templates also delete the corresponding build tasks.
       * - The image template ID (ImagePipelineId) and the build task ID (ExecutionId) cannot both be empty.
       * - You can set NextToken to the value of NextToken returned in the previous call to DescribeImagePipelineExecutions, and set MaxResults to specify the maximum number of entries per page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutions(const Models::DescribeImagePipelineExecutionsRequest &request);

      /**
       * @summary Queries the details of one or more image templates.
       *
       * @description You can set `NextToken` to the value of `NextToken` returned by the previous call to `DescribeImagePipelines`, and set `MaxResults` to specify the maximum number of entries per page for the query.
       *
       * @param request DescribeImagePipelinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelinesWithOptions(const Models::DescribeImagePipelinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more image templates.
       *
       * @description You can set `NextToken` to the value of `NextToken` returned by the previous call to `DescribeImagePipelines`, and set `MaxResults` to specify the maximum number of entries per page for the query.
       *
       * @param request DescribeImagePipelinesRequest
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelines(const Models::DescribeImagePipelinesRequest &request);

      /**
       * @summary Queries all users with whom a custom image has been shared. The results are displayed by page, with 10 entries per page by default.
       *
       * @param request DescribeImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermissionWithOptions(const Models::DescribeImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all users with whom a custom image has been shared. The results are displayed by page, with 10 entries per page by default.
       *
       * @param request DescribeImageSharePermissionRequest
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermission(const Models::DescribeImageSharePermissionRequest &request);

      /**
       * @summary Queries the instance types supported by a specified image.
       *
       * @param request DescribeImageSupportInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSupportInstanceTypesResponse
       */
      Models::DescribeImageSupportInstanceTypesResponse describeImageSupportInstanceTypesWithOptions(const Models::DescribeImageSupportInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types supported by a specified image.
       *
       * @param request DescribeImageSupportInstanceTypesRequest
       * @return DescribeImageSupportInstanceTypesResponse
       */
      Models::DescribeImageSupportInstanceTypesResponse describeImageSupportInstanceTypes(const Models::DescribeImageSupportInstanceTypesRequest &request);

      /**
       * @summary Queries the list of available image resources based on specified parameters such as ImageId, image usage scenarios, and Filter conditions.
       *
       * @description - Image resources that you can query include your custom images, public images provided by Alibaba Cloud, Alibaba Cloud Marketplace images, and shared images that other Alibaba Cloud users have shared with you.
       * - Paging is supported. The query results include the total number of available image resources and the image resources on the current page. The default number of entries per page is 10.
       * - When you invoke an API operation by using Cloud Assistant CLI, request parameters of different data types must comply with format requirements. For more information, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * - When you query images provided by Alibaba Cloud or shared images (ImageOwnerAlias is set to system or others), the request can bypass RAM authentication rules. For more information, see [Authentication rules](https://help.aliyun.com/document_detail/25497.html).
       *
       * @param request DescribeImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImagesWithOptions(const Models::DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available image resources based on specified parameters such as ImageId, image usage scenarios, and Filter conditions.
       *
       * @description - Image resources that you can query include your custom images, public images provided by Alibaba Cloud, Alibaba Cloud Marketplace images, and shared images that other Alibaba Cloud users have shared with you.
       * - Paging is supported. The query results include the total number of available image resources and the image resources on the current page. The default number of entries per page is 10.
       * - When you invoke an API operation by using Cloud Assistant CLI, request parameters of different data types must comply with format requirements. For more information, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * - When you query images provided by Alibaba Cloud or shared images (ImageOwnerAlias is set to system or others), the request can bypass RAM authentication rules. For more information, see [Authentication rules](https://help.aliyun.com/document_detail/25497.html).
       *
       * @param request DescribeImagesRequest
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImages(const Models::DescribeImagesRequest &request);

      /**
       * @summary Queries the private pool information matched by instances, such as the matching mode and private pool ID.
       *
       * @description ## Operation description
       * A private pool is generated after an elasticity assurance or capacity reservation is created. The private pool is associated with information about instances that match the private pool. You can configure a private pool when you create an instance. The instance is then matched with an elasticity assurance or capacity reservation.
       * After a private pool expires, the matching association data between the instance and the private pool also becomes invalid. If you call this operation at that point, the private pool information in the response is empty.
       *
       * @param request DescribeInstanceAttachmentAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttachmentAttributesResponse
       */
      Models::DescribeInstanceAttachmentAttributesResponse describeInstanceAttachmentAttributesWithOptions(const Models::DescribeInstanceAttachmentAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the private pool information matched by instances, such as the matching mode and private pool ID.
       *
       * @description ## Operation description
       * A private pool is generated after an elasticity assurance or capacity reservation is created. The private pool is associated with information about instances that match the private pool. You can configure a private pool when you create an instance. The instance is then matched with an elasticity assurance or capacity reservation.
       * After a private pool expires, the matching association data between the instance and the private pool also becomes invalid. If you call this operation at that point, the private pool information in the response is empty.
       *
       * @param request DescribeInstanceAttachmentAttributesRequest
       * @return DescribeInstanceAttachmentAttributesResponse
       */
      Models::DescribeInstanceAttachmentAttributesResponse describeInstanceAttachmentAttributes(const Models::DescribeInstanceAttachmentAttributesRequest &request);

      /**
       * @summary Queries the attribute information of a specified ECS instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute information of a specified ECS instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary Queries the auto-renewal attributes of one or more subscription ECS instances, including whether auto-renewal is enabled and the renewal period.
       *
       * @description - Only subscription instances are supported. An error is returned if you call this operation for pay-as-you-go instances.
       * - Before you configure auto-renewal or manual renewal, you can query the renewal status of instances to check whether auto-renewal is already enabled.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttributeWithOptions(const Models::DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attributes of one or more subscription ECS instances, including whether auto-renewal is enabled and the renewal period.
       *
       * @description - Only subscription instances are supported. An error is returned if you call this operation for pay-as-you-go instances.
       * - Before you configure auto-renewal or manual renewal, you can query the renewal status of instances to check whether auto-renewal is already enabled.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttribute(const Models::DescribeInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the system event information of a specified instance by calling the DescribeInstanceHistoryEvents operation. You can specify parameters such as InstanceId and EventType. By default, this operation queries historical system events in inactive states.
       *
       * @description - You can query completed historical system events from the last 30 days. There is no time limit for querying uncompleted system events.
       * - If neither EventCycleStatus nor InstanceEventCycleStatus is specified, the query results include only system events in the Avoided, Executed, Canceled, and Failed states by default.
       * - By specifying the InstanceEventCycleStatus parameter, you can also query system events in the Scheduled, Executing, and Inquiring states.
       *
       * @param request DescribeInstanceHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceHistoryEventsResponse
       */
      Models::DescribeInstanceHistoryEventsResponse describeInstanceHistoryEventsWithOptions(const Models::DescribeInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system event information of a specified instance by calling the DescribeInstanceHistoryEvents operation. You can specify parameters such as InstanceId and EventType. By default, this operation queries historical system events in inactive states.
       *
       * @description - You can query completed historical system events from the last 30 days. There is no time limit for querying uncompleted system events.
       * - If neither EventCycleStatus nor InstanceEventCycleStatus is specified, the query results include only system events in the Avoided, Executed, Canceled, and Failed states by default.
       * - By specifying the InstanceEventCycleStatus parameter, you can also query system events in the Scheduled, Executing, and Inquiring states.
       *
       * @param request DescribeInstanceHistoryEventsRequest
       * @return DescribeInstanceHistoryEventsResponse
       */
      Models::DescribeInstanceHistoryEventsResponse describeInstanceHistoryEvents(const Models::DescribeInstanceHistoryEventsRequest &request);

      /**
       * @summary Queries the maintenance attributes of an instance.
       *
       * @description Queries the configured maintenance policy, which includes two maintenance properties:
       * - Maintenance time window: A time window that you specify during which maintenance is performed.
       * - Maintenance action: An instance downtime handling policy that you specify.
       *
       * @param request DescribeInstanceMaintenanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMaintenanceAttributesResponse
       */
      Models::DescribeInstanceMaintenanceAttributesResponse describeInstanceMaintenanceAttributesWithOptions(const Models::DescribeInstanceMaintenanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maintenance attributes of an instance.
       *
       * @description Queries the configured maintenance policy, which includes two maintenance properties:
       * - Maintenance time window: A time window that you specify during which maintenance is performed.
       * - Maintenance action: An instance downtime handling policy that you specify.
       *
       * @param request DescribeInstanceMaintenanceAttributesRequest
       * @return DescribeInstanceMaintenanceAttributesResponse
       */
      Models::DescribeInstanceMaintenanceAttributesResponse describeInstanceMaintenanceAttributes(const Models::DescribeInstanceMaintenanceAttributesRequest &request);

      /**
       * @summary Queries the price of upgrading the target instance type or adding subscription data disks for an unexpired subscription ECS instance.
       *
       * @description - Only the price for upgrading unexpired subscription ECS instances is supported. Querying the price for downgrading instances is not supported.
       * - Querying the price for changing the configurations of pay-as-you-go ECS instances is not supported. Because the price of a pay-as-you-go ECS instance after a configuration change is the same as the price of a new instance, you can call [DescribePrice](https://help.aliyun.com/document_detail/107829.html) to query the latest price of an ECS instance.
       * - Before you upgrade an instance, call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types available for upgrade in a specified zone.
       *
       * @param request DescribeInstanceModificationPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceModificationPriceResponse
       */
      Models::DescribeInstanceModificationPriceResponse describeInstanceModificationPriceWithOptions(const Models::DescribeInstanceModificationPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of upgrading the target instance type or adding subscription data disks for an unexpired subscription ECS instance.
       *
       * @description - Only the price for upgrading unexpired subscription ECS instances is supported. Querying the price for downgrading instances is not supported.
       * - Querying the price for changing the configurations of pay-as-you-go ECS instances is not supported. Because the price of a pay-as-you-go ECS instance after a configuration change is the same as the price of a new instance, you can call [DescribePrice](https://help.aliyun.com/document_detail/107829.html) to query the latest price of an ECS instance.
       * - Before you upgrade an instance, call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types available for upgrade in a specified zone.
       *
       * @param request DescribeInstanceModificationPriceRequest
       * @return DescribeInstanceModificationPriceResponse
       */
      Models::DescribeInstanceModificationPriceResponse describeInstanceModificationPrice(const Models::DescribeInstanceModificationPriceRequest &request);

      /**
       * @summary Queries the monitoring information of an ECS instance. Queryable metrics include vCPU usage, burstable instance credits, inbound data traffic, outbound data traffic, and average bandwidth.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  A maximum of 400 data entries can be returned at a time. The condition `(EndTime – StartTime) / Period` must be less than or equal to 400, which means the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only for the last 30 days. The `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * -  When some content is missing from the returned information, the system may not have obtained the corresponding information. For example, the instance was in the Stopped state at that time.
       * -  This operation cannot retrieve basic CPU monitoring information for ECS Bare Metal instances. Install the CloudMonitor agent to obtain CPU monitoring information. For more information, see [Install the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorDataWithOptions(const Models::DescribeInstanceMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring information of an ECS instance. Queryable metrics include vCPU usage, burstable instance credits, inbound data traffic, outbound data traffic, and average bandwidth.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  A maximum of 400 data entries can be returned at a time. The condition `(EndTime – StartTime) / Period` must be less than or equal to 400, which means the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring information only for the last 30 days. The `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * -  When some content is missing from the returned information, the system may not have obtained the corresponding information. For example, the instance was in the Stopped state at that time.
       * -  This operation cannot retrieve basic CPU monitoring information for ECS Bare Metal instances. Install the CloudMonitor agent to obtain CPU monitoring information. For more information, see [Install the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorData(const Models::DescribeInstanceMonitorDataRequest &request);

      /**
       * @summary Queries the instance RAM roles that are assigned to one or more ECS instances by instance ID, or queries the instances that are assigned a specific instance RAM role by role name.
       *
       * @description ## Operation description
       * When you invoke this operation by using Cloud Assistant CLI, request parameters of different data types must follow format requirements. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRamRoleResponse
       */
      Models::DescribeInstanceRamRoleResponse describeInstanceRamRoleWithOptions(const Models::DescribeInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance RAM roles that are assigned to one or more ECS instances by instance ID, or queries the instances that are assigned a specific instance RAM role by role name.
       *
       * @description ## Operation description
       * When you invoke this operation by using Cloud Assistant CLI, request parameters of different data types must follow format requirements. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeInstanceRamRoleRequest
       * @return DescribeInstanceRamRoleResponse
       */
      Models::DescribeInstanceRamRoleResponse describeInstanceRamRole(const Models::DescribeInstanceRamRoleRequest &request);

      /**
       * @summary Queries the status information of one or more specified ECS instances and supports querying instance lists based on specified conditions.
       *
       * @description For more information about the lifecycle states of ECS instances, see [Instance states](https://help.aliyun.com/document_detail/25687.html). 
       * ## Request examples
       * - Query instances and instance status information by **specified region**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1"
       * ```
       * - Query instances and instance status information in a **specific zone** within a **specified region**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1",
       * "ZoneID": "ap-southeast-1a"
       * ```
       * - Query the status information of instances by **specified region** and **instance IDs**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1",
       * "InstancesID": ["i-bp1f7c1zqp999zvp****", "i-bp1dqjv36biueg61****"]
       * ```
       *
       * @param request DescribeInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatusWithOptions(const Models::DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status information of one or more specified ECS instances and supports querying instance lists based on specified conditions.
       *
       * @description For more information about the lifecycle states of ECS instances, see [Instance states](https://help.aliyun.com/document_detail/25687.html). 
       * ## Request examples
       * - Query instances and instance status information by **specified region**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1"
       * ```
       * - Query instances and instance status information in a **specific zone** within a **specified region**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1",
       * "ZoneID": "ap-southeast-1a"
       * ```
       * - Query the status information of instances by **specified region** and **instance IDs**. Sample request parameters:
       * ```
       * "RegionID": "ap-southeast-1",
       * "InstancesID": ["i-bp1f7c1zqp999zvp****", "i-bp1dqjv36biueg61****"]
       * ```
       *
       * @param request DescribeInstanceStatusRequest
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatus(const Models::DescribeInstanceStatusRequest &request);

      /**
       * @summary 实例拓扑查询接口
       *
       * @param request DescribeInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTopologyResponse
       */
      Models::DescribeInstanceTopologyResponse describeInstanceTopologyWithOptions(const Models::DescribeInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例拓扑查询接口
       *
       * @param request DescribeInstanceTopologyRequest
       * @return DescribeInstanceTopologyResponse
       */
      Models::DescribeInstanceTopologyResponse describeInstanceTopology(const Models::DescribeInstanceTopologyRequest &request);

      /**
       * @summary Queries the list of instance families provided by Alibaba Cloud ECS. This operation retrieves instance family information across different series to help you understand available instance type resources and select appropriate instance types for creating ECS instances.
       *
       * @param request DescribeInstanceTypeFamiliesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypeFamiliesResponse
       */
      Models::DescribeInstanceTypeFamiliesResponse describeInstanceTypeFamiliesWithOptions(const Models::DescribeInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of instance families provided by Alibaba Cloud ECS. This operation retrieves instance family information across different series to help you understand available instance type resources and select appropriate instance types for creating ECS instances.
       *
       * @param request DescribeInstanceTypeFamiliesRequest
       * @return DescribeInstanceTypeFamiliesResponse
       */
      Models::DescribeInstanceTypeFamiliesResponse describeInstanceTypeFamilies(const Models::DescribeInstanceTypeFamiliesRequest &request);

      /**
       * @summary Queries the information list of all instance types provided by Elastic Compute Service (ECS) and retrieves detailed information about instance types. You can also perform a conditional query for specific instance types to understand the configurations and performance of different instance types and select instances that meet your business requirements.
       *
       * @description - **Paged query**: You can set the MaxResults parameter to limit the number of instance type entries returned. If only some of the queried instance type entries are returned, the NextToken parameter value is also returned. Invoke this operation again with the NextToken parameter value returned from the previous invocation and the MaxResults parameter to implement paging for instance type information.
       * - If you call this operation without specifying the NextToken parameter for paginated retrieval, only the first page (up to 100 entries) of data is returned by default. To retrieve more data, specify the NextToken parameter for paginated retrieval or specify filter conditions to limit the scope of returned data.
       * >  The maximum number of entries (MaxResults parameter) is 100. For users who invoked this operation before 2022, the maximum value of MaxResults remains 1600. On and after November 15, 2023, the maximum value of MaxResults is reduced to 100 for all users and 1600 is no longer supported.
       * - DescribeInstanceTypes only queries the configuration and performance information of instance types. To query instance types available for purchase in a specific region, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       * <props="china">
       * <props="intl">
       *
       * @param request DescribeInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypesWithOptions(const Models::DescribeInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information list of all instance types provided by Elastic Compute Service (ECS) and retrieves detailed information about instance types. You can also perform a conditional query for specific instance types to understand the configurations and performance of different instance types and select instances that meet your business requirements.
       *
       * @description - **Paged query**: You can set the MaxResults parameter to limit the number of instance type entries returned. If only some of the queried instance type entries are returned, the NextToken parameter value is also returned. Invoke this operation again with the NextToken parameter value returned from the previous invocation and the MaxResults parameter to implement paging for instance type information.
       * - If you call this operation without specifying the NextToken parameter for paginated retrieval, only the first page (up to 100 entries) of data is returned by default. To retrieve more data, specify the NextToken parameter for paginated retrieval or specify filter conditions to limit the scope of returned data.
       * >  The maximum number of entries (MaxResults parameter) is 100. For users who invoked this operation before 2022, the maximum value of MaxResults remains 1600. On and after November 15, 2023, the maximum value of MaxResults is reduced to 100 for all users and 1600 is no longer supported.
       * - DescribeInstanceTypes only queries the configuration and performance information of instance types. To query instance types available for purchase in a specific region, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       * <props="china">
       * <props="intl">
       *
       * @param request DescribeInstanceTypesRequest
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypes(const Models::DescribeInstanceTypesRequest &request);

      /**
       * @summary Queries the VNC logon URL of an ECS instance.
       *
       * @description - The returned VNC logon URL (VncUrl) cannot be used directly. You can access the instance by using the **management terminal URL**.
       * > To construct the management terminal URL, append `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` to the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`. Separate the parameters with `&`. Parameters:
       *   >- `vncUrl`: the VNC logon URL.
       *   >- `instanceId`: the instance ID.
       *   >- `isWindows`: specifies whether the operating system of the instance is Windows. A value of `true` indicates Windows. A value of `false` indicates a non-Windows operating system.
       *   >- Passwordless VNC connections are now supported. You do not need to set the `password` parameter.
       * - The KeepAlive time of a single management terminal URL is 300 seconds. If no interaction occurs within 300 seconds, the connection is automatically closed.
       * - If the connection is interrupted, call this operation again to obtain a new `VncUrl` and construct a new management terminal URL to reconnect. You can reconnect up to 30 times per minute.
       * Example management terminal URL:
       * ```
       * https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       * ```
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VNC logon URL of an ECS instance.
       *
       * @description - The returned VNC logon URL (VncUrl) cannot be used directly. You can access the instance by using the **management terminal URL**.
       * > To construct the management terminal URL, append `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` to the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`. Separate the parameters with `&`. Parameters:
       *   >- `vncUrl`: the VNC logon URL.
       *   >- `instanceId`: the instance ID.
       *   >- `isWindows`: specifies whether the operating system of the instance is Windows. A value of `true` indicates Windows. A value of `false` indicates a non-Windows operating system.
       *   >- Passwordless VNC connections are now supported. You do not need to set the `password` parameter.
       * - The KeepAlive time of a single management terminal URL is 300 seconds. If no interaction occurs within 300 seconds, the connection is automatically closed.
       * - If the connection is interrupted, call this operation again to obtain a new `VncUrl` and construct a new management terminal URL to reconnect. You can reconnect up to 30 times per minute.
       * Example management terminal URL:
       * ```
       * https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       * ```
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary Queries a list of instances based on specified request conditions and performs a conditional query to associate and retrieve the detailed information of the instances.
       *
       * @description ### Before you begin.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances based on specified request conditions and performs a conditional query to associate and retrieve the detailed information of the instances.
       *
       * @description ### Before you begin.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the full status information of one or more ECS instances. The full status information includes the instance status and instance system event status. The instance status refers to the lifecycle status of the instance, and the instance system event refers to the health status of maintenance events.
       *
       * @description ## Operation description
       * The response includes the instance status and instance system events in the Scheduled state.
       * If you specify a time range, events are filtered based on the time range.
       *
       * @param request DescribeInstancesFullStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesFullStatusResponse
       */
      Models::DescribeInstancesFullStatusResponse describeInstancesFullStatusWithOptions(const Models::DescribeInstancesFullStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full status information of one or more ECS instances. The full status information includes the instance status and instance system event status. The instance status refers to the lifecycle status of the instance, and the instance system event refers to the health status of maintenance events.
       *
       * @description ## Operation description
       * The response includes the instance status and instance system events in the Scheduled state.
       * If you specify a time range, events are filtered based on the time range.
       *
       * @param request DescribeInstancesFullStatusRequest
       * @return DescribeInstancesFullStatusResponse
       */
      Models::DescribeInstancesFullStatusResponse describeInstancesFullStatus(const Models::DescribeInstancesFullStatusRequest &request);

      /**
       * @summary Queries the execution results of one or more Cloud Assistant commands, specifically the actual execution results on ECS instances.
       *
       * @description ## Operation description
       * - After you execute a command, the command is not guaranteed to succeed or produce the expected results. Use this operation to check the actual execution results, which serve as the definitive output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can subscribe to [Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, avoiding frequent polling and improving efficiency.
       * - When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response, and set `MaxResults` to limit the number of entries returned.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregation status across multiple instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregation status across multiple instances.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable, and you can replace one with the other.
       *     - When you need to view the execution history of scheduled (periodic) tasks or tasks that execute on each system startup (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can retrieve past execution history records (by specifying `IncludeHistory=true`), whereas `DescribeInvocations` returns only the latest task status.
       *     - When you need to view the command content or parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResultsWithOptions(const Models::DescribeInvocationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of one or more Cloud Assistant commands, specifically the actual execution results on ECS instances.
       *
       * @description ## Operation description
       * - After you execute a command, the command is not guaranteed to succeed or produce the expected results. Use this operation to check the actual execution results, which serve as the definitive output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can subscribe to [Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, avoiding frequent polling and improving efficiency.
       * - When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response, and set `MaxResults` to limit the number of entries returned.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregation status across multiple instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregation status across multiple instances.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable, and you can replace one with the other.
       *     - When you need to view the execution history of scheduled (periodic) tasks or tasks that execute on each system startup (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can retrieve past execution history records (by specifying `IncludeHistory=true`), whereas `DescribeInvocations` returns only the latest task status.
       *     - When you need to view the command content or parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationResultsRequest
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResults(const Models::DescribeInvocationResultsRequest &request);

      /**
       * @summary Queries the execution list and status of Cloud Assistant commands.
       *
       * @description - After you run a command, the command does not necessarily run successfully or produce the expected results. You must check the actual execution results based on the response elements and the actual output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can use [Cloud Assistant task status event subscription](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - To view the execution details of each run for scheduled (periodic) or boot-triggered tasks (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (by specifying `IncludeHistory=true`). `DescribeInvocations` returns only the latest task status.
       *     - To view the command content and parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution list and status of Cloud Assistant commands.
       *
       * @description - After you run a command, the command does not necessarily run successfully or produce the expected results. You must check the actual execution results based on the response elements and the actual output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can use [Cloud Assistant task status event subscription](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - To view the execution details of each run for scheduled (periodic) or boot-triggered tasks (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (by specifying `IncludeHistory=true`). `DescribeInvocations` returns only the latest task status.
       *     - To view the command content and parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Queries one or more SSH key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairsWithOptions(const Models::DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more SSH key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairs(const Models::DescribeKeyPairsRequest &request);

      /**
       * @summary Queries information about launch template versions of ECS instances, such as the total number of instance launch templates, template names, and template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersionsWithOptions(const Models::DescribeLaunchTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about launch template versions of ECS instances, such as the total number of instance launch templates, template names, and template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersions(const Models::DescribeLaunchTemplateVersionsRequest &request);

      /**
       * @summary Calls the DescribeLaunchTemplates operation to query information about one or more launch templates. You can specify parameters such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId. The returned information includes the total number of launch templates, template creation time, and latest template version number.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplatesWithOptions(const Models::DescribeLaunchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeLaunchTemplates operation to query information about one or more launch templates. You can specify parameters such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId. The returned information includes the total number of launch templates, template creation time, and latest template version number.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplates(const Models::DescribeLaunchTemplatesRequest &request);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary Queries account limits.
       *
       * @param request DescribeLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitationWithOptions(const Models::DescribeLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary Queries account limits.
       *
       * @param request DescribeLimitationRequest
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitation(const Models::DescribeLimitationRequest &request);

      /**
       * @summary Queries the lock information of snapshots, such as the lock status and lock configurations.
       *
       * @param request DescribeLockedSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLockedSnapshotsResponse
       */
      Models::DescribeLockedSnapshotsResponse describeLockedSnapshotsWithOptions(const Models::DescribeLockedSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lock information of snapshots, such as the lock status and lock configurations.
       *
       * @param request DescribeLockedSnapshotsRequest
       * @return DescribeLockedSnapshotsResponse
       */
      Models::DescribeLockedSnapshotsResponse describeLockedSnapshots(const Models::DescribeLockedSnapshotsRequest &request);

      /**
       * @summary Queries the list of managed instances.
       *
       * @description When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential, and set `MaxResults` to limit the number of entries returned.
       *
       * @param request DescribeManagedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeManagedInstancesResponse
       */
      Models::DescribeManagedInstancesResponse describeManagedInstancesWithOptions(const Models::DescribeManagedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of managed instances.
       *
       * @description When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential, and set `MaxResults` to limit the number of entries returned.
       *
       * @param request DescribeManagedInstancesRequest
       * @return DescribeManagedInstancesResponse
       */
      Models::DescribeManagedInstancesResponse describeManagedInstances(const Models::DescribeManagedInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeNatGateways is deprecated, please use Vpc::2016-04-28::DescribeNatGateways instead.
       *
       * @summary DescribeNatGateways
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeNatGateways is deprecated, please use Vpc::2016-04-28::DescribeNatGateways instead.
       *
       * @summary DescribeNatGateways
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary Queries the details of an Elastic Network Interface (ENI) by specifying the ENI ID.
       *
       * @param request DescribeNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfaceAttributeResponse
       */
      Models::DescribeNetworkInterfaceAttributeResponse describeNetworkInterfaceAttributeWithOptions(const Models::DescribeNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Elastic Network Interface (ENI) by specifying the ENI ID.
       *
       * @param request DescribeNetworkInterfaceAttributeRequest
       * @return DescribeNetworkInterfaceAttributeResponse
       */
      Models::DescribeNetworkInterfaceAttributeResponse describeNetworkInterfaceAttribute(const Models::DescribeNetworkInterfaceAttributeRequest &request);

      /**
       * @summary Queries the list of Elastic Network Interface (ENI) permissions that you have granted to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request DescribeNetworkInterfacePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacePermissionsResponse
       */
      Models::DescribeNetworkInterfacePermissionsResponse describeNetworkInterfacePermissionsWithOptions(const Models::DescribeNetworkInterfacePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Elastic Network Interface (ENI) permissions that you have granted to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request DescribeNetworkInterfacePermissionsRequest
       * @return DescribeNetworkInterfacePermissionsResponse
       */
      Models::DescribeNetworkInterfacePermissionsResponse describeNetworkInterfacePermissions(const Models::DescribeNetworkInterfacePermissionsRequest &request);

      /**
       * @summary Queries the details of one or more Elastic Network Interfaces (ENIs).
       *
       * @description ## Operation description.
       *
       * @param request DescribeNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfacesWithOptions(const Models::DescribeNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Elastic Network Interfaces (ENIs).
       *
       * @description ## Operation description.
       *
       * @param request DescribeNetworkInterfacesRequest
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfaces(const Models::DescribeNetworkInterfacesRequest &request);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary Queries the monitoring data of an Elastic IP Address (EIP) in the new BGP (Multi-ISP) network.
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorDataWithOptions(const Models::DescribeNewProjectEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary Queries the monitoring data of an Elastic IP Address (EIP) in the new BGP (Multi-ISP) network.
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorData(const Models::DescribeNewProjectEipMonitorDataRequest &request);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary DescribePhysicalConnections.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary DescribePhysicalConnections.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnections(const Models::DescribePhysicalConnectionsRequest &request);

      /**
       * @summary Queries O&M windows.
       *
       * @description Queries configured maintenance policies. Each policy contains two maintenance attributes:
       * - Maintenance time window: A time period you specify during which O&M operations are performed.
       * - Maintenance action: The instance downtime handling policy you specify.
       *
       * @param tmpReq DescribePlanMaintenanceWindowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlanMaintenanceWindowsResponse
       */
      Models::DescribePlanMaintenanceWindowsResponse describePlanMaintenanceWindowsWithOptions(const Models::DescribePlanMaintenanceWindowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries O&M windows.
       *
       * @description Queries configured maintenance policies. Each policy contains two maintenance attributes:
       * - Maintenance time window: A time period you specify during which O&M operations are performed.
       * - Maintenance action: The instance downtime handling policy you specify.
       *
       * @param request DescribePlanMaintenanceWindowsRequest
       * @return DescribePlanMaintenanceWindowsResponse
       */
      Models::DescribePlanMaintenanceWindowsResponse describePlanMaintenanceWindows(const Models::DescribePlanMaintenanceWindowsRequest &request);

      /**
       * @summary Queries the resources associated with a specified port range list, such as security groups.
       *
       * @param request DescribePortRangeListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListAssociationsResponse
       */
      Models::DescribePortRangeListAssociationsResponse describePortRangeListAssociationsWithOptions(const Models::DescribePortRangeListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources associated with a specified port range list, such as security groups.
       *
       * @param request DescribePortRangeListAssociationsRequest
       * @return DescribePortRangeListAssociationsResponse
       */
      Models::DescribePortRangeListAssociationsResponse describePortRangeListAssociations(const Models::DescribePortRangeListAssociationsRequest &request);

      /**
       * @summary Queries the entries of a specified port range list.
       *
       * @param request DescribePortRangeListEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListEntriesResponse
       */
      Models::DescribePortRangeListEntriesResponse describePortRangeListEntriesWithOptions(const Models::DescribePortRangeListEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entries of a specified port range list.
       *
       * @param request DescribePortRangeListEntriesRequest
       * @return DescribePortRangeListEntriesResponse
       */
      Models::DescribePortRangeListEntriesResponse describePortRangeListEntries(const Models::DescribePortRangeListEntriesRequest &request);

      /**
       * @summary Queries a list of port range lists.
       *
       * @param request DescribePortRangeListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListsResponse
       */
      Models::DescribePortRangeListsResponse describePortRangeListsWithOptions(const Models::DescribePortRangeListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of port range lists.
       *
       * @param request DescribePortRangeListsRequest
       * @return DescribePortRangeListsResponse
       */
      Models::DescribePortRangeListsResponse describePortRangeLists(const Models::DescribePortRangeListsRequest &request);

      /**
       * @summary Queries the information about resources associated with a specified prefix list, such as resource IDs and resource types.
       *
       * @param request DescribePrefixListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListAssociationsResponse
       */
      Models::DescribePrefixListAssociationsResponse describePrefixListAssociationsWithOptions(const Models::DescribePrefixListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resources associated with a specified prefix list, such as resource IDs and resource types.
       *
       * @param request DescribePrefixListAssociationsRequest
       * @return DescribePrefixListAssociationsResponse
       */
      Models::DescribePrefixListAssociationsResponse describePrefixListAssociations(const Models::DescribePrefixListAssociationsRequest &request);

      /**
       * @summary Queries the details of a specified prefix list, including the name, address family, maximum number of entries, and entry details.
       *
       * @param request DescribePrefixListAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListAttributesResponse
       */
      Models::DescribePrefixListAttributesResponse describePrefixListAttributesWithOptions(const Models::DescribePrefixListAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified prefix list, including the name, address family, maximum number of entries, and entry details.
       *
       * @param request DescribePrefixListAttributesRequest
       * @return DescribePrefixListAttributesResponse
       */
      Models::DescribePrefixListAttributesResponse describePrefixListAttributes(const Models::DescribePrefixListAttributesRequest &request);

      /**
       * @summary Queries the information about one or more prefix lists.
       *
       * @description The request parameters `AddressFamily`, `PrefixListId.N`, and `PrefixListName` act as filters and have a logical AND relationship. If a parameter is empty, the corresponding filter does not take effect.
       *
       * @param request DescribePrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixListsWithOptions(const Models::DescribePrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more prefix lists.
       *
       * @description The request parameters `AddressFamily`, `PrefixListId.N`, and `PrefixListName` act as filters and have a logical AND relationship. If a parameter is empty, the corresponding filter does not take effect.
       *
       * @param request DescribePrefixListsRequest
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixLists(const Models::DescribePrefixListsRequest &request);

      /**
       * @summary Queries the latest prices of specified resources. You can query the latest prices of ECS instances, disks, dedicated hosts, elasticity assurance services, and capacity reservation services based on resource type. The response includes promotion rules, prices, and discounts.
       *
       * @description The parameter settings vary based on the resource type:
       *   - When `ResourceType=instance`, you must also specify `InstanceType`.
       *     By default, the price of the pay-as-you-go (`PostPaid`) billing method (`ChargeType`) is queried. You can specify the `PriceUnit` parameter to query Elastic Compute Service (ECS) prices for different billing cycles.
       *  - When `ResourceType=disk`, you must also specify `DataDisk.1.Category` and `DataDisk.1.Size`. When you query the price of `disk` resources, only the pay-as-you-go price of disks is returned. This means that the `PriceUnit` parameter can only be set to `Hour`.
       * - When `ResourceType=diskperformance`, you must also specify `DataDisk.1.Category` and `DataDisk.1.ProvisionedIops`.
       *  - When `ResourceType=ddh`, you must also specify `DedicatedHostType`.
       *  - When `ResourceType=ElasticityAssurance`, you must also specify `InstanceType`.
       *  - When `ResourceType=CapacityReservation`, you must also specify `InstanceType`.
       * - When `ResourceType=bandwidth`, only the pay-by-traffic (`PayByTraffic`) price is returned.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest prices of specified resources. You can query the latest prices of ECS instances, disks, dedicated hosts, elasticity assurance services, and capacity reservation services based on resource type. The response includes promotion rules, prices, and discounts.
       *
       * @description The parameter settings vary based on the resource type:
       *   - When `ResourceType=instance`, you must also specify `InstanceType`.
       *     By default, the price of the pay-as-you-go (`PostPaid`) billing method (`ChargeType`) is queried. You can specify the `PriceUnit` parameter to query Elastic Compute Service (ECS) prices for different billing cycles.
       *  - When `ResourceType=disk`, you must also specify `DataDisk.1.Category` and `DataDisk.1.Size`. When you query the price of `disk` resources, only the pay-as-you-go price of disks is returned. This means that the `PriceUnit` parameter can only be set to `Hour`.
       * - When `ResourceType=diskperformance`, you must also specify `DataDisk.1.Category` and `DataDisk.1.ProvisionedIops`.
       *  - When `ResourceType=ddh`, you must also specify `DedicatedHostType`.
       *  - When `ResourceType=ElasticityAssurance`, you must also specify `InstanceType`.
       *  - When `ResourceType=CapacityReservation`, you must also specify `InstanceType`.
       * - When `ResourceType=bandwidth`, only the pay-by-traffic (`PayByTraffic`) price is returned.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary (Beta) Queries one or more alternative instance types based on a specified instance type. For retired or soon-to-be-retired instance types, DescribeRecommendInstanceType lists all instance types that can serve as replacements.
       *
       * @param request DescribeRecommendInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendInstanceTypeResponse
       */
      Models::DescribeRecommendInstanceTypeResponse describeRecommendInstanceTypeWithOptions(const Models::DescribeRecommendInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary (Beta) Queries one or more alternative instance types based on a specified instance type. For retired or soon-to-be-retired instance types, DescribeRecommendInstanceType lists all instance types that can serve as replacements.
       *
       * @param request DescribeRecommendInstanceTypeRequest
       * @return DescribeRecommendInstanceTypeResponse
       */
      Models::DescribeRecommendInstanceTypeResponse describeRecommendInstanceType(const Models::DescribeRecommendInstanceTypeRequest &request);

      /**
       * @summary Queries a list of regions based on parameters such as billing method and resource type.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions based on parameters such as billing method and resource type.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the renewal price of Elastic Compute Service (ECS) resources. Only subscription resources are supported.
       *
       * @description - Only the price for renewing a subscription ECS instance for a specified duration or renewing it to a unified expiration date is supported.
       * - Note the following when you set the parameters:
       *     - If you set only the required parameters, the price for renewing the instance for one month is queried by default.
       *     - You cannot query the renewal duration price and the unified expiration date price at the same time. The renewal duration parameters (Period and PeriodUnit) and the unified expiration date parameter (ExpectedRenewDay) cannot be set at the same time.
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of Elastic Compute Service (ECS) resources. Only subscription resources are supported.
       *
       * @description - Only the price for renewing a subscription ECS instance for a specified duration or renewing it to a unified expiration date is supported.
       * - Note the following when you set the parameters:
       *     - If you set only the required parameters, the price for renewing the instance for one month is queried by default.
       *     - You cannot query the renewal duration price and the unified expiration date price at the same time. The renewal duration parameters (Period and PeriodUnit) and the unified expiration date parameter (ExpectedRenewDay) cannot be set at the same time.
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @summary Queries the auto-renewal attributes of one or more reserved instances, including the auto-renewal duration and auto-renewal status.
       *
       * @param request DescribeReservedInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReservedInstanceAutoRenewAttributeResponse
       */
      Models::DescribeReservedInstanceAutoRenewAttributeResponse describeReservedInstanceAutoRenewAttributeWithOptions(const Models::DescribeReservedInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attributes of one or more reserved instances, including the auto-renewal duration and auto-renewal status.
       *
       * @param request DescribeReservedInstanceAutoRenewAttributeRequest
       * @return DescribeReservedInstanceAutoRenewAttributeResponse
       */
      Models::DescribeReservedInstanceAutoRenewAttributeResponse describeReservedInstanceAutoRenewAttribute(const Models::DescribeReservedInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the list of reserved instances that you have purchased in a specified region. You can filter reserved instances by tags, reserved instance attributes, and other parameters.
       *
       * @description ### Scenarios
       * - Query all reserved instances in a specified region.
       * - Query the details of a reserved instance by its ID or name.
       * - Filter purchased reserved instances by instance type or instance family.
       * - Filter purchased reserved instances by scope or status.
       * ### Request examples
       * <details>
       * <summary>Example: Query all purchased reserved instances in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1" //Set the region to Singapore
       * ```
       * </details>
       * <details>
       * <summary>Example: Query the details of the reserved instance with the ID ecsri-bp129enntoynwwj5**** in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //Set the reserved instance ID
       * ```
       * </details>
       * <details>
       * <summary>Example: Query reserved instances that can be applied to the ecs.c5.2xlarge instance type in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "InstanceType":"ecs.c5.2xlarge" //Set the instance type
       * ```
       * </details>
       * <details>
       * <summary>Example: Query active region-level reserved instances in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "Scope":"Region", //Set the reserved instance scope
       * "Status":["Active"] //Set the status to Active
       * ```
       * </details>
       *
       * @param request DescribeReservedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReservedInstancesResponse
       */
      Models::DescribeReservedInstancesResponse describeReservedInstancesWithOptions(const Models::DescribeReservedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of reserved instances that you have purchased in a specified region. You can filter reserved instances by tags, reserved instance attributes, and other parameters.
       *
       * @description ### Scenarios
       * - Query all reserved instances in a specified region.
       * - Query the details of a reserved instance by its ID or name.
       * - Filter purchased reserved instances by instance type or instance family.
       * - Filter purchased reserved instances by scope or status.
       * ### Request examples
       * <details>
       * <summary>Example: Query all purchased reserved instances in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1" //Set the region to Singapore
       * ```
       * </details>
       * <details>
       * <summary>Example: Query the details of the reserved instance with the ID ecsri-bp129enntoynwwj5**** in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //Set the reserved instance ID
       * ```
       * </details>
       * <details>
       * <summary>Example: Query reserved instances that can be applied to the ecs.c5.2xlarge instance type in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "InstanceType":"ecs.c5.2xlarge" //Set the instance type
       * ```
       * </details>
       * <details>
       * <summary>Example: Query active region-level reserved instances in the Singapore region</summary>
       * ```
       * "Region":"ap-southeast-1", //Set the region to Singapore
       * "Scope":"Region", //Set the reserved instance scope
       * "Status":["Active"] //Set the status to Active
       * ```
       * </details>
       *
       * @param request DescribeReservedInstancesRequest
       * @return DescribeReservedInstancesResponse
       */
      Models::DescribeReservedInstancesResponse describeReservedInstances(const Models::DescribeReservedInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary Retrieves resources based on tags. You can retrieve resources by tag or by resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTagsWithOptions(const Models::DescribeResourceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary Retrieves resources based on tags. You can retrieve resources by tag or by resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTags(const Models::DescribeResourceByTagsRequest &request);

      /**
       * @summary Queries the inventory of instance types or system disk types in a zone before you change the instance type or system disk type of an instance.
       *
       * @description The following examples describe common scenarios:
       * ### Example 1: Query instance types supported for specification change
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Common request parameters
       * ```
       * ### Example 2: Query instance types supported after changing the disk type
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed after the disk type is changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Conditions.0=DiskCategory
       * &Common request parameters
       * ```
       * ### Example 3: Query the disk type required by the target instance type
       * Query the disk type required by the target instance type (for example, ecs.g7.large). This means that instance i-bp67acfmxazb4p**** must change to this disk type before it can be changed to the target instance type. Also query the inventory of the disk type in the zone where the instance resides.
       * > The target instance type must be obtained by using Example 2.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=SystemDisk
       * &OperationType=Upgrade
       * &InstanceType=ecs.g7.large
       * &Common request parameters
       * ```
       *
       * @param request DescribeResourcesModificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcesModificationResponse
       */
      Models::DescribeResourcesModificationResponse describeResourcesModificationWithOptions(const Models::DescribeResourcesModificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the inventory of instance types or system disk types in a zone before you change the instance type or system disk type of an instance.
       *
       * @description The following examples describe common scenarios:
       * ### Example 1: Query instance types supported for specification change
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Common request parameters
       * ```
       * ### Example 2: Query instance types supported after changing the disk type
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed after the disk type is changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Conditions.0=DiskCategory
       * &Common request parameters
       * ```
       * ### Example 3: Query the disk type required by the target instance type
       * Query the disk type required by the target instance type (for example, ecs.g7.large). This means that instance i-bp67acfmxazb4p**** must change to this disk type before it can be changed to the target instance type. Also query the inventory of the disk type in the zone where the instance resides.
       * > The target instance type must be obtained by using Example 2.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=SystemDisk
       * &OperationType=Upgrade
       * &InstanceType=ecs.g7.large
       * &Common request parameters
       * ```
       *
       * @param request DescribeResourcesModificationRequest
       * @return DescribeResourcesModificationResponse
       */
      Models::DescribeResourcesModificationResponse describeResourcesModification(const Models::DescribeResourcesModificationRequest &request);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary List route tables
       *
       * @param request DescribeRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTablesWithOptions(const Models::DescribeRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary List route tables
       *
       * @param request DescribeRouteTablesRequest
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTables(const Models::DescribeRouteTablesRequest &request);

      /**
       * @deprecated OpenAPI DescribeRouterInterfaces is deprecated, please use Vpc::2016-04-28::DescribeRouterInterfaces instead.
       *
       * @summary DescribeRouterInterfaces
       *
       * @param request DescribeRouterInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfacesWithOptions(const Models::DescribeRouterInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRouterInterfaces is deprecated, please use Vpc::2016-04-28::DescribeRouterInterfaces instead.
       *
       * @summary DescribeRouterInterfaces
       *
       * @param request DescribeRouterInterfacesRequest
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfaces(const Models::DescribeRouterInterfacesRequest &request);

      /**
       * @summary 节省计划测算
       *
       * @param request DescribeSavingsPlanEstimationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlanEstimationResponse
       */
      Models::DescribeSavingsPlanEstimationResponse describeSavingsPlanEstimationWithOptions(const Models::DescribeSavingsPlanEstimationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 节省计划测算
       *
       * @param request DescribeSavingsPlanEstimationRequest
       * @return DescribeSavingsPlanEstimationResponse
       */
      Models::DescribeSavingsPlanEstimationResponse describeSavingsPlanEstimation(const Models::DescribeSavingsPlanEstimationRequest &request);

      /**
       * @summary 询价购买节省计划并预付费换购按量付费
       *
       * @param request DescribeSavingsPlanPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlanPriceResponse
       */
      Models::DescribeSavingsPlanPriceResponse describeSavingsPlanPriceWithOptions(const Models::DescribeSavingsPlanPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 询价购买节省计划并预付费换购按量付费
       *
       * @param request DescribeSavingsPlanPriceRequest
       * @return DescribeSavingsPlanPriceResponse
       */
      Models::DescribeSavingsPlanPriceResponse describeSavingsPlanPrice(const Models::DescribeSavingsPlanPriceRequest &request);

      /**
       * @summary Queries the details of a specified security group, including the list of security group rules.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttributeWithOptions(const Models::DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified security group, including the list of security group rules.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttribute(const Models::DescribeSecurityGroupAttributeRequest &request);

      /**
       * @summary Queries the list of other security groups that have been authorized by one or more specified security groups.
       *
       * @description -  If you cannot delete a security group ([DeleteSecurityGroup](https://help.aliyun.com/document_detail/25558.html)), you can call this operation to check whether the specified security group has been authorized by other security groups. If the specified security group has been authorized, you can call [RevokeSecurityGroup](https://help.aliyun.com/document_detail/2679855.html) and [RevokeSecurityGroupEgress](https://help.aliyun.com/document_detail/2679856.html) to delete the corresponding security group rules to revoke the authorization.
       *
       * @param request DescribeSecurityGroupReferencesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupReferencesResponse
       */
      Models::DescribeSecurityGroupReferencesResponse describeSecurityGroupReferencesWithOptions(const Models::DescribeSecurityGroupReferencesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of other security groups that have been authorized by one or more specified security groups.
       *
       * @description -  If you cannot delete a security group ([DeleteSecurityGroup](https://help.aliyun.com/document_detail/25558.html)), you can call this operation to check whether the specified security group has been authorized by other security groups. If the specified security group has been authorized, you can call [RevokeSecurityGroup](https://help.aliyun.com/document_detail/2679855.html) and [RevokeSecurityGroupEgress](https://help.aliyun.com/document_detail/2679856.html) to delete the corresponding security group rules to revoke the authorization.
       *
       * @param request DescribeSecurityGroupReferencesRequest
       * @return DescribeSecurityGroupReferencesResponse
       */
      Models::DescribeSecurityGroupReferencesResponse describeSecurityGroupReferences(const Models::DescribeSecurityGroupReferencesRequest &request);

      /**
       * @summary Queries the basic information about security groups. You can filter results by region, security group ID, security group type, and other parameter query conditions.
       *
       * @description - **Paged query**: Use `MaxResults` and `NextToken` for paging.
       *   - If the response does not contain `NextToken`, the current page is the last page.
       *   - For the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the token for querying subsequent pages.
       *   - For subsequent pages, set `NextToken` to the value obtained from the previous response and set `MaxResults` to limit the number of entries returned.
       * - When you invoke this operation by using Cloud Assistant CLI, specify request parameters in their required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       * > Settings for request parameters of different data types must follow specific format requirements when calling the API through Alibaba Cloud CLI.
       *
       * @param request DescribeSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(const Models::DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about security groups. You can filter results by region, security group ID, security group type, and other parameter query conditions.
       *
       * @description - **Paged query**: Use `MaxResults` and `NextToken` for paging.
       *   - If the response does not contain `NextToken`, the current page is the last page.
       *   - For the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the token for querying subsequent pages.
       *   - For subsequent pages, set `NextToken` to the value obtained from the previous response and set `MaxResults` to limit the number of entries returned.
       * - When you invoke this operation by using Cloud Assistant CLI, specify request parameters in their required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       * > Settings for request parameters of different data types must follow specific format requirements when calling the API through Alibaba Cloud CLI.
       *
       * @param request DescribeSecurityGroupsRequest
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroups(const Models::DescribeSecurityGroupsRequest &request);

      /**
       * @summary Queries the list and status of files sent by Cloud Assistant.
       *
       * @description ## Operation description:
       * - After you send a file, the file is not necessarily sent successfully. You must check the actual sending result based on the return value of this operation.
       * - You can query execution information from the last day. A maximum of 1,000 entries of execution information can be retained.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the result serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeSendFileResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResultsWithOptions(const Models::DescribeSendFileResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and status of files sent by Cloud Assistant.
       *
       * @description ## Operation description:
       * - After you send a file, the file is not necessarily sent successfully. You must check the actual sending result based on the return value of this operation.
       * - You can query execution information from the last day. A maximum of 1,000 entries of execution information can be retained.
       * - When paged query the first page of results, set only MaxResults to limit the number of entries to return. The NextToken value returned in the result serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeSendFileResultsRequest
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResults(const Models::DescribeSendFileResultsRequest &request);

      /**
       * @summary Queries information about one or more snapshot-consistent groups, such as the status, instance ID, and snapshot creation progress.
       *
       * @description InstanceId, SnapshotGroupId.N, and Status.N are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       *
       * @param request DescribeSnapshotGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotGroupsResponse
       */
      Models::DescribeSnapshotGroupsResponse describeSnapshotGroupsWithOptions(const Models::DescribeSnapshotGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more snapshot-consistent groups, such as the status, instance ID, and snapshot creation progress.
       *
       * @description InstanceId, SnapshotGroupId.N, and Status.N are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       *
       * @param request DescribeSnapshotGroupsRequest
       * @return DescribeSnapshotGroupsResponse
       */
      Models::DescribeSnapshotGroupsResponse describeSnapshotGroups(const Models::DescribeSnapshotGroupsRequest &request);

      /**
       * @summary Queries snapshot chains of disks. A snapshot chain consists of all snapshots of a disk. Each disk corresponds to one snapshot chain.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  The request parameters RegionId, DiskIds, and InstanceId act as filters. These parameters have a logical AND relationship.  
       * -  If you do not specify any parameters, the filters do not take effect. If DiskIds and SnapshotLinkIds are both empty arrays, the filters are considered valid, but the response is empty.
       *
       * @param request DescribeSnapshotLinksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotLinksResponse
       */
      Models::DescribeSnapshotLinksResponse describeSnapshotLinksWithOptions(const Models::DescribeSnapshotLinksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshot chains of disks. A snapshot chain consists of all snapshots of a disk. Each disk corresponds to one snapshot chain.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  The request parameters RegionId, DiskIds, and InstanceId act as filters. These parameters have a logical AND relationship.  
       * -  If you do not specify any parameters, the filters do not take effect. If DiskIds and SnapshotLinkIds are both empty arrays, the filters are considered valid, but the response is empty.
       *
       * @param request DescribeSnapshotLinksRequest
       * @return DescribeSnapshotLinksResponse
       */
      Models::DescribeSnapshotLinksResponse describeSnapshotLinks(const Models::DescribeSnapshotLinksRequest &request);

      /**
       * @summary Queries the monitoring data of snapshot size changes within the last 30 days in a region.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  A maximum of 400 data entries can be returned at a time. Make sure that the value of `(EndTime–StartTime)/Period` is less than or equal to 400. In other words, the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring data only within the last 30 days. The `StartTime` parameter cannot be more than 30 days earlier than the current time.
       *
       * @param request DescribeSnapshotMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotMonitorDataResponse
       */
      Models::DescribeSnapshotMonitorDataResponse describeSnapshotMonitorDataWithOptions(const Models::DescribeSnapshotMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of snapshot size changes within the last 30 days in a region.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * -  A maximum of 400 data entries can be returned at a time. Make sure that the value of `(EndTime–StartTime)/Period` is less than or equal to 400. In other words, the response parameter `TotalCount` cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.  
       * - You can query monitoring data only within the last 30 days. The `StartTime` parameter cannot be more than 30 days earlier than the current time.
       *
       * @param request DescribeSnapshotMonitorDataRequest
       * @return DescribeSnapshotMonitorDataResponse
       */
      Models::DescribeSnapshotMonitorDataResponse describeSnapshotMonitorData(const Models::DescribeSnapshotMonitorDataRequest &request);

      /**
       * @summary Queries the Object Storage Service (OSS) storage plans that you have purchased in a region. Storage plans can be used to offset the storage capacity of standard snapshots but do not support offsetting local snapshots.
       *
       * @param request DescribeSnapshotPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotPackageResponse
       */
      Models::DescribeSnapshotPackageResponse describeSnapshotPackageWithOptions(const Models::DescribeSnapshotPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Object Storage Service (OSS) storage plans that you have purchased in a region. Storage plans can be used to offset the storage capacity of standard snapshots but do not support offsetting local snapshots.
       *
       * @param request DescribeSnapshotPackageRequest
       * @return DescribeSnapshotPackageResponse
       */
      Models::DescribeSnapshotPackageResponse describeSnapshotPackage(const Models::DescribeSnapshotPackageRequest &request);

      /**
       * @summary Queries the snapshot list of a disk, including snapshot status, remaining time for a snapshot being created, and automatic snapshot retention days.
       *
       * @description InstanceId, DiskId, and SnapshotIds are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For details, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * Request examples:
       * <details>
       * <summary>Query the snapshot list of all disks of an ECS instance in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * InstanceId:  i-bp1fh7by6d9mw7zr****   // Set the instance ID to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the snapshot information of a specific disk in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * DiskId:   d-bp10e7ej8z743dmu****   // Set the disk ID to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the information of two snapshots in the China (Hangzhou) region by snapshot ID</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Set the snapshot ID array to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the snapshot information created after a specific point in time in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * Filter.1.Key:   CreationStartTime,   // Set the filter key for the creation start time.
       * Filter.1.Value:   2024-11-27T00:00Z.
       * ```
       * </details>
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshot list of a disk, including snapshot status, remaining time for a snapshot being created, and automatic snapshot retention days.
       *
       * @description InstanceId, DiskId, and SnapshotIds are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For details, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * Request examples:
       * <details>
       * <summary>Query the snapshot list of all disks of an ECS instance in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * InstanceId:  i-bp1fh7by6d9mw7zr****   // Set the instance ID to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the snapshot information of a specific disk in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * DiskId:   d-bp10e7ej8z743dmu****   // Set the disk ID to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the information of two snapshots in the China (Hangzhou) region by snapshot ID</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Set the snapshot ID array to query.
       * ```
       * </details>
       * <details>
       * <summary>Query the snapshot information created after a specific point in time in the China (Hangzhou) region</summary>
       * ```
       * RegionId:  cn-hangzhou,   // Set the region to China (Hangzhou).
       * Filter.1.Key:   CreationStartTime,   // Set the filter key for the creation start time.
       * Filter.1.Value:   2024-11-27T00:00Z.
       * ```
       * </details>
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary Queries the number of snapshots and the total snapshot size in a region.
       *
       * @description ## Operation description
       * To view the snapshot usage of each cloud disk in the current region, call [DescribeSnapshotLinks](https://help.aliyun.com/document_detail/55837.html) to query snapshot chains.
       *
       * @param request DescribeSnapshotsUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsUsageResponse
       */
      Models::DescribeSnapshotsUsageResponse describeSnapshotsUsageWithOptions(const Models::DescribeSnapshotsUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of snapshots and the total snapshot size in a region.
       *
       * @description ## Operation description
       * To view the snapshot usage of each cloud disk in the current region, call [DescribeSnapshotLinks](https://help.aliyun.com/document_detail/55837.html) to query snapshot chains.
       *
       * @param request DescribeSnapshotsUsageRequest
       * @return DescribeSnapshotsUsageResponse
       */
      Models::DescribeSnapshotsUsageResponse describeSnapshotsUsage(const Models::DescribeSnapshotsUsageRequest &request);

      /**
       * @summary Queries the average release rate, average discount rate, and other information about spot instances in a specified region over the last 30 days.
       *
       * @description - Only spot instances that are deployed in VPCs and are I/O optimized are supported.
       * - You can call this operation by using one of the following methods:
       *     - Set the `Cores` and `Memory` parameters or the `MinCores` and `MinMemory` parameters to query instance types that meet the vCPU and memory requirements.
       *     - Set the `InstanceTypes.N` parameter to query specified instance types.
       *     - Set the `Cores` and `Memory` parameters or the `MinCores` and `MinMemory` parameters, and then set the `InstanceTypeFamily` or `InstanceFamilyLevel` parameter to query instance types that meet the vCPU and memory requirements within a specific instance family or at a specific level.
       * - You can calculate the average price of spot instances based on the average discount rate and the price of pay-as-you-go instances.
       *
       * @param request DescribeSpotAdviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdviceWithOptions(const Models::DescribeSpotAdviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average release rate, average discount rate, and other information about spot instances in a specified region over the last 30 days.
       *
       * @description - Only spot instances that are deployed in VPCs and are I/O optimized are supported.
       * - You can call this operation by using one of the following methods:
       *     - Set the `Cores` and `Memory` parameters or the `MinCores` and `MinMemory` parameters to query instance types that meet the vCPU and memory requirements.
       *     - Set the `InstanceTypes.N` parameter to query specified instance types.
       *     - Set the `Cores` and `Memory` parameters or the `MinCores` and `MinMemory` parameters, and then set the `InstanceTypeFamily` or `InstanceFamilyLevel` parameter to query instance types that meet the vCPU and memory requirements within a specific instance family or at a specific level.
       * - You can calculate the average price of spot instances based on the average discount rate and the price of pay-as-you-go instances.
       *
       * @param request DescribeSpotAdviceRequest
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdvice(const Models::DescribeSpotAdviceRequest &request);

      /**
       * @summary Queries the historical prices of spot instances. You can query price data for up to the last 30 days. The historical price data helps you set a reasonable maximum price for a spot instance.
       *
       * @description - Only I/O optimized spot instances are supported.
       * - The returned data may be paginated. If the returned data contains the `NextOffset` parameter, set the `Offset` request parameter to the `NextOffset` value to query subsequent data.
       *
       * @param request DescribeSpotPriceHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotPriceHistoryResponse
       */
      Models::DescribeSpotPriceHistoryResponse describeSpotPriceHistoryWithOptions(const Models::DescribeSpotPriceHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical prices of spot instances. You can query price data for up to the last 30 days. The historical price data helps you set a reasonable maximum price for a spot instance.
       *
       * @description - Only I/O optimized spot instances are supported.
       * - The returned data may be paginated. If the returned data contains the `NextOffset` parameter, set the `Offset` request parameter to the `NextOffset` value to query subsequent data.
       *
       * @param request DescribeSpotPriceHistoryRequest
       * @return DescribeSpotPriceHistoryResponse
       */
      Models::DescribeSpotPriceHistoryResponse describeSpotPriceHistory(const Models::DescribeSpotPriceHistoryRequest &request);

      /**
       * @summary Queries the detailed information list of storage capacity units (SCUs). You can filter results by name, status, and capacity.
       *
       * @param request DescribeStorageCapacityUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageCapacityUnitsResponse
       */
      Models::DescribeStorageCapacityUnitsResponse describeStorageCapacityUnitsWithOptions(const Models::DescribeStorageCapacityUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information list of storage capacity units (SCUs). You can filter results by name, status, and capacity.
       *
       * @param request DescribeStorageCapacityUnitsRequest
       * @return DescribeStorageCapacityUnitsResponse
       */
      Models::DescribeStorageCapacityUnitsResponse describeStorageCapacityUnits(const Models::DescribeStorageCapacityUnitsRequest &request);

      /**
       * @summary 查询指定存储集的详情
       *
       * @param request DescribeStorageSetDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageSetDetailsResponse
       */
      Models::DescribeStorageSetDetailsResponse describeStorageSetDetailsWithOptions(const Models::DescribeStorageSetDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定存储集的详情
       *
       * @param request DescribeStorageSetDetailsRequest
       * @return DescribeStorageSetDetailsResponse
       */
      Models::DescribeStorageSetDetailsResponse describeStorageSetDetails(const Models::DescribeStorageSetDetailsRequest &request);

      /**
       * @summary 查询当前地域下的存储集信息
       *
       * @param request DescribeStorageSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageSetsResponse
       */
      Models::DescribeStorageSetsResponse describeStorageSetsWithOptions(const Models::DescribeStorageSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前地域下的存储集信息
       *
       * @param request DescribeStorageSetsRequest
       * @return DescribeStorageSetsResponse
       */
      Models::DescribeStorageSetsResponse describeStorageSets(const Models::DescribeStorageSetsRequest &request);

      /**
       * @deprecated OpenAPI DescribeTags is deprecated, please use Tag::2018-08-28::CountResourcesByTags instead.
       *
       * @summary Queries tags available to you. You can perform a conditional query for tags by resource type, resource ID, tag key, or tag value. The filter conditions are evaluated by using a logical AND (&&) operator, and only tags that match all filter conditions are returned.
       *
       * @description If you specify a tag key (Tag.N.Key) but do not specify a tag value (Tag.N.Value), all tag key-value pairs that contain the specified tag key are returned. If you specify a tag key-value pair, only the tag that is an exact match of the key-value pair is returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeTags is deprecated, please use Tag::2018-08-28::CountResourcesByTags instead.
       *
       * @summary Queries tags available to you. You can perform a conditional query for tags by resource type, resource ID, tag key, or tag value. The filter conditions are evaluated by using a logical AND (&&) operator, and only tags that match all filter conditions are returned.
       *
       * @description If you specify a tag key (Tag.N.Key) but do not specify a tag value (Tag.N.Value), all tag key-value pairs that contain the specified tag key are returned. If you specify a tag key-value pair, only the tag that is an exact match of the key-value pair is returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the details of an asynchronous task. Currently, you can query the following asynchronous tasks: ImportImage, ExportImage, and ModifyDiskSpec.
       *
       * @param request DescribeTaskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttributeWithOptions(const Models::DescribeTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task. Currently, you can query the following asynchronous tasks: ImportImage, ExportImage, and ModifyDiskSpec.
       *
       * @param request DescribeTaskAttributeRequest
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttribute(const Models::DescribeTaskAttributeRequest &request);

      /**
       * @summary Queries the progress of one or more asynchronous requests.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of one or more asynchronous requests.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the session history of Session Manager.
       *
       * @description You can query Session Manager session records created within the last 30 days. A maximum of 1,000 successful records are retained.
       *
       * @param request DescribeTerminalSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTerminalSessionsResponse
       */
      Models::DescribeTerminalSessionsResponse describeTerminalSessionsWithOptions(const Models::DescribeTerminalSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the session history of Session Manager.
       *
       * @description You can query Session Manager session records created within the last 30 days. A maximum of 1,000 successful records are retained.
       *
       * @param request DescribeTerminalSessionsRequest
       * @return DescribeTerminalSessionsResponse
       */
      Models::DescribeTerminalSessionsResponse describeTerminalSessions(const Models::DescribeTerminalSessionsRequest &request);

      /**
       * @deprecated OpenAPI DescribeUserBusinessBehavior is deprecated
       *
       * @summary Retrieves the default attributes at the user level.
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehaviorWithOptions(const Models::DescribeUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeUserBusinessBehavior is deprecated
       *
       * @summary Retrieves the default attributes at the user level.
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehavior(const Models::DescribeUserBusinessBehaviorRequest &request);

      /**
       * @summary Queries the user data of an ECS instance.
       *
       * @param request DescribeUserDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserDataWithOptions(const Models::DescribeUserDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user data of an ECS instance.
       *
       * @param request DescribeUserDataRequest
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserData(const Models::DescribeUserDataRequest &request);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary Queries a list of routers.
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary Queries a list of routers.
       *
       * @param request DescribeVRoutersRequest
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRouters(const Models::DescribeVRoutersRequest &request);

      /**
       * @deprecated OpenAPI DescribeVSwitches is deprecated, please use Vpc::2016-04-28::DescribeVSwitches instead.
       *
       * @summary Queries the details of vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVSwitches is deprecated, please use Vpc::2016-04-28::DescribeVSwitches instead.
       *
       * @summary Queries the details of vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @deprecated OpenAPI DescribeVirtualBorderRouters is deprecated, please use Vpc::2016-04-28::DescribeVirtualBorderRouters instead.
       *
       * @summary DescribeVirtualBorderRouters
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRoutersWithOptions(const Models::DescribeVirtualBorderRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVirtualBorderRouters is deprecated, please use Vpc::2016-04-28::DescribeVirtualBorderRouters instead.
       *
       * @summary DescribeVirtualBorderRouters
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRouters(const Models::DescribeVirtualBorderRoutersRequest &request);

      /**
       * @deprecated OpenAPI DescribeVirtualBorderRoutersForPhysicalConnection is deprecated, please use Vpc::2016-04-28::DescribeVirtualBorderRoutersForPhysicalConnection instead.
       *
       * @summary DescribeVirtualBorderRoutersForPhysicalConnection.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnectionWithOptions(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVirtualBorderRoutersForPhysicalConnection is deprecated, please use Vpc::2016-04-28::DescribeVirtualBorderRoutersForPhysicalConnection instead.
       *
       * @summary DescribeVirtualBorderRoutersForPhysicalConnection.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnection(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI DescribeVpcs is deprecated, please use Vpc::2016-04-28::DescribeVpcs instead.
       *
       * @summary Queries a VPC.
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVpcs is deprecated, please use Vpc::2016-04-28::DescribeVpcs instead.
       *
       * @summary Queries a VPC.
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries virtual storage channels (VSCs). You can filter results by VscId, instance, status, or tags.
       *
       * @description If you specify a tag key (Tag.N.Key) but do not specify a tag value (Tag.N.Value), all tag key-value pairs that contain the specified tag key are queried. If you specify a tag key-value pair, only the tags that exact match the key-value pair are queried.
       *
       * @param request DescribeVscsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVscsResponse
       */
      Models::DescribeVscsResponse describeVscsWithOptions(const Models::DescribeVscsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual storage channels (VSCs). You can filter results by VscId, instance, status, or tags.
       *
       * @description If you specify a tag key (Tag.N.Key) but do not specify a tag value (Tag.N.Value), all tag key-value pairs that contain the specified tag key are queried. If you specify a tag key-value pair, only the tags that exact match the key-value pair are queried.
       *
       * @param request DescribeVscsRequest
       * @return DescribeVscsResponse
       */
      Models::DescribeVscsResponse describeVscs(const Models::DescribeVscsRequest &request);

      /**
       * @summary Queries the list of zones based on parameter query conditions such as region ID and billing method.
       *
       * @description DescribeZones only queries the list of zones provided by Alibaba Cloud and returns limited inventory information. To query the instance types and disk categories available for purchase in a specific zone, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones based on parameter query conditions such as region ID and billing method.
       *
       * @description DescribeZones only queries the list of zones provided by Alibaba Cloud and returns limited inventory information. To query the instance types and disk categories available for purchase in a specific zone, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Invokes DetachClassicLinkVpc to disconnect a classic network type ECS instance from a virtual private cloud (VPC) by removing the ClassicLink connection. After the ClassicLink connection is removed, the classic network type instance cannot communicate with instances in the VPC.
       *
       * @param request DetachClassicLinkVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachClassicLinkVpcResponse
       */
      Models::DetachClassicLinkVpcResponse detachClassicLinkVpcWithOptions(const Models::DetachClassicLinkVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DetachClassicLinkVpc to disconnect a classic network type ECS instance from a virtual private cloud (VPC) by removing the ClassicLink connection. After the ClassicLink connection is removed, the classic network type instance cannot communicate with instances in the VPC.
       *
       * @param request DetachClassicLinkVpcRequest
       * @return DetachClassicLinkVpcResponse
       */
      Models::DetachClassicLinkVpcResponse detachClassicLinkVpc(const Models::DetachClassicLinkVpcRequest &request);

      /**
       * @summary Detaches a pay-as-you-go data disk or system disk from an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * - This is an asynchronous operation. After a successful call, wait approximately one minute for the detachment to complete.
       * - The instance to which the disk is attached must not be locked with `"LockReason" : "security"` in `OperationLocks`.
       * - After an elastic ephemeral disk is detached, it can only be re-attached to its original instance.
       *
       * @param request DetachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDiskWithOptions(const Models::DetachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go data disk or system disk from an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * - This is an asynchronous operation. After a successful call, wait approximately one minute for the detachment to complete.
       * - The instance to which the disk is attached must not be locked with `"LockReason" : "security"` in `OperationLocks`.
       * - After an elastic ephemeral disk is detached, it can only be re-attached to its original instance.
       *
       * @param request DetachDiskRequest
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDisk(const Models::DetachDiskRequest &request);

      /**
       * @summary Detaches instance RAM roles from one or more ECS instances.
       *
       * @param request DetachInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachInstanceRamRoleResponse
       */
      Models::DetachInstanceRamRoleResponse detachInstanceRamRoleWithOptions(const Models::DetachInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches instance RAM roles from one or more ECS instances.
       *
       * @param request DetachInstanceRamRoleRequest
       * @return DetachInstanceRamRoleResponse
       */
      Models::DetachInstanceRamRoleResponse detachInstanceRamRole(const Models::DetachInstanceRamRoleRequest &request);

      /**
       * @summary Unbinds SSH key pairs from one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * -  After you unbind an SSH key pair, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the changes to take effect.  
       * -  After you unbind an SSH key pair, the instance uses the username and password authentication method by default.
       *
       * @param request DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds SSH key pairs from one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * -  After you unbind an SSH key pair, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the changes to take effect.  
       * -  After you unbind an SSH key pair, the instance uses the username and password authentication method by default.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Detaches an Elastic Network Interface (ENI) from an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * -  You cannot detach the primary ENI of an instance.
       * -  The network interface controller (NIC) must be in the Detaching or InUse state.
       * -  The instance must be in the Running or Stopped state.
       * -  This is an asynchronous operation. After you invoke the operation, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the result. The following figure shows the ENI state machine:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/mvga/DetachNetworkInterface.jpg)
       *     - The Detaching state indicates that the detach Elastic Network Interface (ENI) request has been sent successfully and the network interface controller (NIC) is being detached from the ECS instance.
       *     - The Available state indicates that the network interface controller (NIC) has been detached from the ECS instance.
       *     - If the Elastic Network Interface (ENI) remains in the Detaching state for an extended period, the detachment may have failed because the operating system inside the instance did not respond to the network interface controller (NIC) detach request. In this case, initiate a new detach request for the ENI. If the issue persists, restart the instance and retry.
       * **For details, see** [Detach an Elastic Network Interface (ENI)](https://help.aliyun.com/document_detail/471551.html). To invoke this operation, refer to the sample code.
       *
       * @param request DetachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterfaceWithOptions(const Models::DetachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an Elastic Network Interface (ENI) from an ECS instance.
       *
       * @description When you call this operation, take note of the following items:
       * -  You cannot detach the primary ENI of an instance.
       * -  The network interface controller (NIC) must be in the Detaching or InUse state.
       * -  The instance must be in the Running or Stopped state.
       * -  This is an asynchronous operation. After you invoke the operation, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the result. The following figure shows the ENI state machine:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/mvga/DetachNetworkInterface.jpg)
       *     - The Detaching state indicates that the detach Elastic Network Interface (ENI) request has been sent successfully and the network interface controller (NIC) is being detached from the ECS instance.
       *     - The Available state indicates that the network interface controller (NIC) has been detached from the ECS instance.
       *     - If the Elastic Network Interface (ENI) remains in the Detaching state for an extended period, the detachment may have failed because the operating system inside the instance did not respond to the network interface controller (NIC) detach request. In this case, initiate a new detach request for the ENI. If the issue persists, restart the instance and retry.
       * **For details, see** [Detach an Elastic Network Interface (ENI)](https://help.aliyun.com/document_detail/471551.html). To invoke this operation, refer to the sample code.
       *
       * @param request DetachNetworkInterfaceRequest
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterface(const Models::DetachNetworkInterfaceRequest &request);

      /**
       * @summary Disables a specified activation code.
       *
       * @description ## Operation description
       * If you are concerned that a created activation code may be leaked, call this operation to disable the activation code. After the activation code is disabled, it can no longer be used to register new managed instances, but existing managed instances that were already registered are not affected.
       *
       * @param request DisableActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableActivationResponse
       */
      Models::DisableActivationResponse disableActivationWithOptions(const Models::DisableActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified activation code.
       *
       * @description ## Operation description
       * If you are concerned that a created activation code may be leaked, call this operation to disable the activation code. After the activation code is disabled, it can no longer be used to register new managed instances, but existing managed instances that were already registered are not affected.
       *
       * @param request DisableActivationRequest
       * @return DisableActivationResponse
       */
      Models::DisableActivationResponse disableActivation(const Models::DisableActivationRequest &request);

      /**
       * @summary Disables account-level default encryption for block storage in a specified region.
       *
       * @description - **Before you begin**
       *   - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For more information about how to grant authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - **Usage notes**
       *   - After you shutdown account-level default encryption for block storage, the encryption status of existing cloud disks is not affected.
       *   - After you shutdown account-level default encryption for block storage, you can still manually select encryption when you create a cloud disk.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefaultWithOptions(const Models::DisableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables account-level default encryption for block storage in a specified region.
       *
       * @description - **Before you begin**
       *   - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For more information about how to grant authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - **Usage notes**
       *   - After you shutdown account-level default encryption for block storage, the encryption status of existing cloud disks is not affected.
       *   - After you shutdown account-level default encryption for block storage, you can still manually select encryption when you create a cloud disk.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefault(const Models::DisableDiskEncryptionByDefaultRequest &request);

      /**
       * @summary Disables the QoS rate limiting settings for an Elastic Network Interface (ENI).
       *
       * @param request DisableNetworkInterfaceQoSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableNetworkInterfaceQoSResponse
       */
      Models::DisableNetworkInterfaceQoSResponse disableNetworkInterfaceQoSWithOptions(const Models::DisableNetworkInterfaceQoSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the QoS rate limiting settings for an Elastic Network Interface (ENI).
       *
       * @param request DisableNetworkInterfaceQoSRequest
       * @return DisableNetworkInterfaceQoSResponse
       */
      Models::DisableNetworkInterfaceQoSResponse disableNetworkInterfaceQoS(const Models::DisableNetworkInterfaceQoSRequest &request);

      /**
       * @summary Enables account-level default encryption for block storage in a specified region.
       *
       * @description <props="china">
       * > The EBS account-level default encryption feature is available only in specific regions and for specific users. If you want to use this feature, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * <props="intl">
       * > The EBS account-level default encryption feature is available only in specific regions and for specific users. If you want to use this feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * - **Before you begin**
       *   - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For details about the authorization operation, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *   - Before enabling account-level default encryption for block storage, activate [Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html).
       *   - After account-level default encryption for block storage is enabled, only encrypted cloud disks can be created. For details, see [Encrypted cloud disks - Limits](~~59643#50de175230erj~~).
       * - **Notes**
       *     - After account-level default encryption for block storage is enabled, all newly created pay-as-you-go or subscription cloud disks must be encrypted cloud disks. You can use the KMS key ID configured for account-level default encryption for block storage, or specify a different KMS key ID.
       *     - When account-level default encryption for block storage is enabled for the first time, the service key is used by default.
       * - **Recommendations**
       *     - You can call [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) and [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) to query whether account-level default encryption for block storage is enabled in a specified region and the KMS key ID in use.
       *     - You can call [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) to modify or reset the KMS key used for account-level default encryption for block storage.
       *     - You can call [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) to disable account-level default encryption for block storage in a specified region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefaultWithOptions(const Models::EnableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables account-level default encryption for block storage in a specified region.
       *
       * @description <props="china">
       * > The EBS account-level default encryption feature is available only in specific regions and for specific users. If you want to use this feature, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * <props="intl">
       * > The EBS account-level default encryption feature is available only in specific regions and for specific users. If you want to use this feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * - **Before you begin**
       *   - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For details about the authorization operation, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *   - Before enabling account-level default encryption for block storage, activate [Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html).
       *   - After account-level default encryption for block storage is enabled, only encrypted cloud disks can be created. For details, see [Encrypted cloud disks - Limits](~~59643#50de175230erj~~).
       * - **Notes**
       *     - After account-level default encryption for block storage is enabled, all newly created pay-as-you-go or subscription cloud disks must be encrypted cloud disks. You can use the KMS key ID configured for account-level default encryption for block storage, or specify a different KMS key ID.
       *     - When account-level default encryption for block storage is enabled for the first time, the service key is used by default.
       * - **Recommendations**
       *     - You can call [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) and [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) to query whether account-level default encryption for block storage is enabled in a specified region and the KMS key ID in use.
       *     - You can call [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) to modify or reset the KMS key used for account-level default encryption for block storage.
       *     - You can call [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) to disable account-level default encryption for block storage in a specified region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefault(const Models::EnableDiskEncryptionByDefaultRequest &request);

      /**
       * @summary Enables or modifies the QoS rate limiting settings of an Elastic Network Interface (ENI).
       *
       * @param request EnableNetworkInterfaceQoSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableNetworkInterfaceQoSResponse
       */
      Models::EnableNetworkInterfaceQoSResponse enableNetworkInterfaceQoSWithOptions(const Models::EnableNetworkInterfaceQoSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or modifies the QoS rate limiting settings of an Elastic Network Interface (ENI).
       *
       * @param request EnableNetworkInterfaceQoSRequest
       * @return EnableNetworkInterfaceQoSResponse
       */
      Models::EnableNetworkInterfaceQoSResponse enableNetworkInterfaceQoS(const Models::EnableNetworkInterfaceQoSRequest &request);

      /**
       * @deprecated OpenAPI EnablePhysicalConnection is deprecated, please use Vpc::2016-04-28::EnablePhysicalConnection instead.
       *
       * @summary Enables a physical connection.
       *
       * @param request EnablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnectionWithOptions(const Models::EnablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI EnablePhysicalConnection is deprecated, please use Vpc::2016-04-28::EnablePhysicalConnection instead.
       *
       * @summary Enables a physical connection.
       *
       * @param request EnablePhysicalConnectionRequest
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnection(const Models::EnablePhysicalConnectionRequest &request);

      /**
       * @summary Permanently closes the data connection of a specified session.
       *
       * @description - Closes the data connection of a specified session. The session can no longer be used.
       * - The WebSocket URL associated with the session also becomes invalid and can no longer be used.
       *
       * @param request EndTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndTerminalSessionResponse
       */
      Models::EndTerminalSessionResponse endTerminalSessionWithOptions(const Models::EndTerminalSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently closes the data connection of a specified session.
       *
       * @description - Closes the data connection of a specified session. The session can no longer be used.
       * - The WebSocket URL associated with the session also becomes invalid and can no longer be used.
       *
       * @param request EndTerminalSessionRequest
       * @return EndTerminalSessionResponse
       */
      Models::EndTerminalSessionResponse endTerminalSession(const Models::EndTerminalSessionRequest &request);

      /**
       * @summary Exports a custom image to an OSS bucket in the same region as the custom image.
       *
       * @description Before you export an image:
       * - Learn about the prerequisites and considerations. For more information, see [Export images](https://help.aliyun.com/document_detail/58181.html).
       * - The ImageFormat parameter for specifying the image export format is available only in specific regions, including Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). In regions where this parameter is not supported, images are exported in RAW format by default.
       * - Grant Elastic Compute Service (ECS) the permission to write to OSS by using RAM authorization. Perform the following steps:
       *     - Create a role named `AliyunECSImageExportDefaultRole` (no other role name is valid) and configure the following trust policy for the role:
       *       ```
       *          {
       *            "Statement": [
       *              {
       *                "Action": "sts:AssumeRole",
       *                "Effect": "Allow",
       *                "Principal": {
       *                  "Service": [
       *                    "ecs.aliyuncs.com"
       *                  ]
       *                }
       *              }
       *            ],
       *            "Version": "1"
       *          }
       *   - Attach the default system access policy `AliyunECSImageExportRolePolicy` to the `AliyunECSImageExportDefaultRole` role. This policy is the default policy provided by Elastic Compute Service (ECS) for image export. For more details, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D). You can also create a custom access policy that includes the following permissions:
       *     ```
       *          {
       *            "Version": "1",
       *            "Statement": [
       *              {
       *                "Action": [
       *                  "oss:GetObject",
       *                  "oss:PutObject",
       *                  "oss:DeleteObject",
       *                  "oss:GetBucketLocation",
       *                  "oss:GetBucketInfo",
       *                  "oss:AbortMultipartUpload",
       *                  "oss:ListMultipartUploads",
       *                  "oss:ListParts"
       *                ],
       *                "Resource": "*",
       *                "Effect": "Allow"
       *              }
       *            ]
       *          }
       *       ```
       * After you export an image:
       * The custom image is saved to the specified OSS bucket. You can then download the custom image. For more information, see [Download a custom image](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImageWithOptions(const Models::ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a custom image to an OSS bucket in the same region as the custom image.
       *
       * @description Before you export an image:
       * - Learn about the prerequisites and considerations. For more information, see [Export images](https://help.aliyun.com/document_detail/58181.html).
       * - The ImageFormat parameter for specifying the image export format is available only in specific regions, including Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). In regions where this parameter is not supported, images are exported in RAW format by default.
       * - Grant Elastic Compute Service (ECS) the permission to write to OSS by using RAM authorization. Perform the following steps:
       *     - Create a role named `AliyunECSImageExportDefaultRole` (no other role name is valid) and configure the following trust policy for the role:
       *       ```
       *          {
       *            "Statement": [
       *              {
       *                "Action": "sts:AssumeRole",
       *                "Effect": "Allow",
       *                "Principal": {
       *                  "Service": [
       *                    "ecs.aliyuncs.com"
       *                  ]
       *                }
       *              }
       *            ],
       *            "Version": "1"
       *          }
       *   - Attach the default system access policy `AliyunECSImageExportRolePolicy` to the `AliyunECSImageExportDefaultRole` role. This policy is the default policy provided by Elastic Compute Service (ECS) for image export. For more details, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D). You can also create a custom access policy that includes the following permissions:
       *     ```
       *          {
       *            "Version": "1",
       *            "Statement": [
       *              {
       *                "Action": [
       *                  "oss:GetObject",
       *                  "oss:PutObject",
       *                  "oss:DeleteObject",
       *                  "oss:GetBucketLocation",
       *                  "oss:GetBucketInfo",
       *                  "oss:AbortMultipartUpload",
       *                  "oss:ListMultipartUploads",
       *                  "oss:ListParts"
       *                ],
       *                "Resource": "*",
       *                "Effect": "Allow"
       *              }
       *            ]
       *          }
       *       ```
       * After you export an image:
       * The custom image is saved to the specified OSS bucket. You can then download the custom image. For more information, see [Download a custom image](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImage(const Models::ExportImageRequest &request);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary Exports a snapshot to a specified object storage ddasd.
       *
       * @param request ExportSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshotWithOptions(const Models::ExportSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary Exports a snapshot to a specified object storage ddasd.
       *
       * @param request ExportSnapshotRequest
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshot(const Models::ExportSnapshotRequest &request);

      /**
       * @summary Retrieves the system command line output of an instance. The data is returned in Base64-encoded format.
       *
       * @description - Elastic Compute Service (ECS) is a virtualization-based cloud server that cannot be connected to display devices or manually screenshotted. However, Alibaba Cloud caches the system command line output from the last time an instance was started, restarted, or shut down. You can invoke GetInstanceConsoleOutput to retrieve this output.
       * - You cannot retrieve the system command line output of [retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * - Windows instances do not support retrieving system command line output.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutputWithOptions(const Models::GetInstanceConsoleOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the system command line output of an instance. The data is returned in Base64-encoded format.
       *
       * @description - Elastic Compute Service (ECS) is a virtualization-based cloud server that cannot be connected to display devices or manually screenshotted. However, Alibaba Cloud caches the system command line output from the last time an instance was started, restarted, or shut down. You can invoke GetInstanceConsoleOutput to retrieve this output.
       * - You cannot retrieve the system command line output of [retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * - Windows instances do not support retrieving system command line output.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutput(const Models::GetInstanceConsoleOutputRequest &request);

      /**
       * @summary Retrieves the screenshot information of an instance.
       *
       * @description Elastic Compute Service (ECS) returns the instance screenshot as a Base64-encoded JPG image. You must decode the image on your own. You can call this operation to troubleshoot faults. Note the following items:
       * - The instance must be in the Running state. 
       * - You cannot retrieve screenshot information for [retired instance types](https://help.aliyun.com/document_detail/55263.html). 
       * - If you call this operation multiple times on the same instance, wait at least 10 seconds between calls. Otherwise, the `Throttling` error code is returned.
       *
       * @param request GetInstanceScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceScreenshotResponse
       */
      Models::GetInstanceScreenshotResponse getInstanceScreenshotWithOptions(const Models::GetInstanceScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the screenshot information of an instance.
       *
       * @description Elastic Compute Service (ECS) returns the instance screenshot as a Base64-encoded JPG image. You must decode the image on your own. You can call this operation to troubleshoot faults. Note the following items:
       * - The instance must be in the Running state. 
       * - You cannot retrieve screenshot information for [retired instance types](https://help.aliyun.com/document_detail/55263.html). 
       * - If you call this operation multiple times on the same instance, wait at least 10 seconds between calls. Otherwise, the `Throttling` error code is returned.
       *
       * @param request GetInstanceScreenshotRequest
       * @return GetInstanceScreenshotResponse
       */
      Models::GetInstanceScreenshotResponse getInstanceScreenshot(const Models::GetInstanceScreenshotRequest &request);

      /**
       * @summary Imports a local image file to Elastic Compute Service (ECS) as a custom image that appears in the specified region. You can then use the imported image to create ECS instances (RunInstances) or replace the system disk of an instance (ReplaceSystemDisk).
       *
       * @description ### Operation description
       * When you call this operation, take note of the following items:
       * - You must upload the image file to Object Storage Service (OSS) in advance. For more information, see [Upload objects](https://help.aliyun.com/document_detail/31886.html).
       * - To prevent ECS instances created from the imported custom image from failing to start due to operating system issues on some servers, virtual machines, or cloud hosts, check whether you need to install the virtio driver on the source server before importing the image. For more information, see [Install a virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * - When you import an image for the first time, you must use Resource Access Management (RAM) to authorize ECS to access your OSS bucket. Otherwise, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error is reported. The following two scenarios apply:
       *   - **Import an image file without using CloudBox**: You can complete RAM authorization with one click in the RAM console. For RAM authorization page, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSImageImportDefaultRole` (this exact name is required, otherwise the image import fails). The policy for the role is:
       *         ```
       *         {
       * 			"Statement": [
       * 			{
       * 				"Action": "sts:AssumeRole",
       * 				"Effect": "Allow",
       * 				"Principal": {
       * 				"Service": [
       * 					"ecs.aliyuncs.com"
       * 				]
       * 				}
       * 			}
       *         ],
       * 			"Version": "1"
       *         }
       *         ```
       *     2. Attach the system policy `AliyunECSImageImportRolePolicy` to the role. You can also create a custom policy that must include the following permissions:
       *         ```
       *         {
       * 			"Version": "1",
       * 			"Statement": [
       * 			{
       * 				"Action": [
       *         				"oss:GetObject",
       *         				"oss:GetBucketLocation",
       *         				"oss:GetBucketInfo"
       * 			],
       *         			"Resource": "*",
       *         			"Effect": "Allow"
       *         			}
       * 			]
       *         }
       *         
       *         ```
       *   - **Import an image file by using CloudBox**: You can complete RAM authorization with one click in the RAM console. For RAM authorization page, see [Cloud resource access authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSCloudBoxImageImportDefaultRole` (this exact name is required, otherwise the image import fails). The policy for the role is:
       *         ```
       *         {
       * 			"Statement": [
       * 			{
       * 				"Action": "sts:AssumeRole",
       * 				"Effect": "Allow",
       * 				"Principal": {
       * 				"Service": [
       * 					"ecs.aliyuncs.com"
       * 				]
       * 				}
       * 			}
       *         ],
       * 			"Version": "1"
       *         }
       *         ```
       *     2. Attach the system policy `AliyunECSCloudBoxImageImportRolePolicy` to the role. You can also create a custom policy that must include the following permissions:
       *         ```
       *         {
       * 			"Version": "1",
       * 			"Statement": [
       * 			{
       * 				"Action": [
       *         				"oss-cloudbox:GetObject",
       *         				"oss-cloudbox:GetBucketLocation",
       *         				"oss-cloudbox:GetBucketInfo"
       * 			],
       *         			"Resource": "*",
       *         			"Effect": "Allow"
       *         			}
       * 			]
       *         }
       *         
       *         ```
       * - You cannot delete an image that is being imported. You can only call [CancelTask](https://help.aliyun.com/document_detail/25624.html) to cancel the image import task.
       * - The region to which the image is imported must be the same as the region of the OSS bucket to which the image file is uploaded.
       * - Valid values of N in the `DiskDeviceMapping.N` parameter: 1 to 17. N=1 indicates the system disk. N=2 to 17 indicates data disks. When N is greater than 17, the system automatically ignores the value.
       * - When the `Architecture` parameter is set to `arm64`, or the `Platform` parameter is set to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     - To enable the imported image to support password configuration or key pair modification, the image must meet the following conditions:
       *         - The operating system kernel must support the `CONFIG_FW_CFG_SYSFS` feature. Linux community kernels later than version 4.6 support this feature by default. CentOS kernels later than version 3.10.0-826.el7 support this feature by default. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the server that corresponds to the image. If the output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel in the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         - The operating system must support the SHA-512 encryption algorithm.
       *     - To enable the imported image to support disk resizing and file system resizing, the image must meet the following conditions:
       *         - The operating system kernel version must be later than 3.6.
       *         - The growpart command is supported. To support this command, install the `cloud-utils-growpart` package. The installation method varies depending on the operating system. For more information, see [Resize partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~).
       *         - The resize2fs command is supported. To support this command, install the `e2fsprogs` package. This package is installed by default on the operating system. If it is not installed, install it manually.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * - If the system architecture of the custom image that you want to import is arm64, set the RTC clock to use the UTC time standard. For more information, see [Linux time and time zone description](https://help.aliyun.com/document_detail/405080.html).
       * - We strongly recommend that you configure image detection parameters when importing an image. This helps the system optimize your image. For more information, see [Overview of image detection](https://help.aliyun.com/document_detail/439819.html).
       *
       * @param request ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a local image file to Elastic Compute Service (ECS) as a custom image that appears in the specified region. You can then use the imported image to create ECS instances (RunInstances) or replace the system disk of an instance (ReplaceSystemDisk).
       *
       * @description ### Operation description
       * When you call this operation, take note of the following items:
       * - You must upload the image file to Object Storage Service (OSS) in advance. For more information, see [Upload objects](https://help.aliyun.com/document_detail/31886.html).
       * - To prevent ECS instances created from the imported custom image from failing to start due to operating system issues on some servers, virtual machines, or cloud hosts, check whether you need to install the virtio driver on the source server before importing the image. For more information, see [Install a virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * - When you import an image for the first time, you must use Resource Access Management (RAM) to authorize ECS to access your OSS bucket. Otherwise, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error is reported. The following two scenarios apply:
       *   - **Import an image file without using CloudBox**: You can complete RAM authorization with one click in the RAM console. For RAM authorization page, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSImageImportDefaultRole` (this exact name is required, otherwise the image import fails). The policy for the role is:
       *         ```
       *         {
       * 			"Statement": [
       * 			{
       * 				"Action": "sts:AssumeRole",
       * 				"Effect": "Allow",
       * 				"Principal": {
       * 				"Service": [
       * 					"ecs.aliyuncs.com"
       * 				]
       * 				}
       * 			}
       *         ],
       * 			"Version": "1"
       *         }
       *         ```
       *     2. Attach the system policy `AliyunECSImageImportRolePolicy` to the role. You can also create a custom policy that must include the following permissions:
       *         ```
       *         {
       * 			"Version": "1",
       * 			"Statement": [
       * 			{
       * 				"Action": [
       *         				"oss:GetObject",
       *         				"oss:GetBucketLocation",
       *         				"oss:GetBucketInfo"
       * 			],
       *         			"Resource": "*",
       *         			"Effect": "Allow"
       *         			}
       * 			]
       *         }
       *         
       *         ```
       *   - **Import an image file by using CloudBox**: You can complete RAM authorization with one click in the RAM console. For RAM authorization page, see [Cloud resource access authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSCloudBoxImageImportDefaultRole` (this exact name is required, otherwise the image import fails). The policy for the role is:
       *         ```
       *         {
       * 			"Statement": [
       * 			{
       * 				"Action": "sts:AssumeRole",
       * 				"Effect": "Allow",
       * 				"Principal": {
       * 				"Service": [
       * 					"ecs.aliyuncs.com"
       * 				]
       * 				}
       * 			}
       *         ],
       * 			"Version": "1"
       *         }
       *         ```
       *     2. Attach the system policy `AliyunECSCloudBoxImageImportRolePolicy` to the role. You can also create a custom policy that must include the following permissions:
       *         ```
       *         {
       * 			"Version": "1",
       * 			"Statement": [
       * 			{
       * 				"Action": [
       *         				"oss-cloudbox:GetObject",
       *         				"oss-cloudbox:GetBucketLocation",
       *         				"oss-cloudbox:GetBucketInfo"
       * 			],
       *         			"Resource": "*",
       *         			"Effect": "Allow"
       *         			}
       * 			]
       *         }
       *         
       *         ```
       * - You cannot delete an image that is being imported. You can only call [CancelTask](https://help.aliyun.com/document_detail/25624.html) to cancel the image import task.
       * - The region to which the image is imported must be the same as the region of the OSS bucket to which the image file is uploaded.
       * - Valid values of N in the `DiskDeviceMapping.N` parameter: 1 to 17. N=1 indicates the system disk. N=2 to 17 indicates data disks. When N is greater than 17, the system automatically ignores the value.
       * - When the `Architecture` parameter is set to `arm64`, or the `Platform` parameter is set to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     - To enable the imported image to support password configuration or key pair modification, the image must meet the following conditions:
       *         - The operating system kernel must support the `CONFIG_FW_CFG_SYSFS` feature. Linux community kernels later than version 4.6 support this feature by default. CentOS kernels later than version 3.10.0-826.el7 support this feature by default. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the server that corresponds to the image. If the output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel in the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         - The operating system must support the SHA-512 encryption algorithm.
       *     - To enable the imported image to support disk resizing and file system resizing, the image must meet the following conditions:
       *         - The operating system kernel version must be later than 3.6.
       *         - The growpart command is supported. To support this command, install the `cloud-utils-growpart` package. The installation method varies depending on the operating system. For more information, see [Resize partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~).
       *         - The resize2fs command is supported. To support this command, install the `e2fsprogs` package. This package is installed by default on the operating system. If it is not installed, install it manually.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * - If the system architecture of the custom image that you want to import is arm64, set the RTC clock to use the UTC time standard. For more information, see [Linux time and time zone description](https://help.aliyun.com/document_detail/405080.html).
       * - We strongly recommend that you configure image detection parameters when importing an image. This helps the system optimize your image. For more information, see [Overview of image detection](https://help.aliyun.com/document_detail/439819.html).
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key of an RSA key pair generated by another tool. After you import the key pair, Alibaba Cloud stores the public key. You must store the private key on your own.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * - You can have a maximum of 500 key pairs in each region.
       * - The imported key pair must support one of the following encryption methods:
       *     - rsa
       *     - dsa
       *     - ssh-rsa
       *     - ssh-dss
       *     - ecdsa
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the public key of an RSA key pair generated by another tool. After you import the key pair, Alibaba Cloud stores the public key. You must store the private key on your own.
       *
       * @description ## Operation description
       * When you call this operation, take note of the following items:
       * - You can have a maximum of 500 key pairs in each region.
       * - The imported key pair must support one of the following encryption methods:
       *     - rsa
       *     - dsa
       *     - ssh-rsa
       *     - ssh-dss
       *     - ecdsa
       *
       * @param request ImportKeyPairRequest
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPair(const Models::ImportKeyPairRequest &request);

      /**
       * @summary Installs Cloud Assistant Agent on one or more ECS instances. You must restart the instances to complete the installation.
       *
       * @description ## Operation description
       * After you call the InstallCloudAssistant operation, call [RebootInstance](https://help.aliyun.com/document_detail/25502.html) to make the Cloud Assistant Agent installation take effect.
       *
       * @param request InstallCloudAssistantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistantWithOptions(const Models::InstallCloudAssistantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs Cloud Assistant Agent on one or more ECS instances. You must restart the instances to complete the installation.
       *
       * @description ## Operation description
       * After you call the InstallCloudAssistant operation, call [RebootInstance](https://help.aliyun.com/document_detail/25502.html) to make the Cloud Assistant Agent installation take effect.
       *
       * @param request InstallCloudAssistantRequest
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistant(const Models::InstallCloudAssistantRequest &request);

      /**
       * @summary Triggers a Cloud Assistant command on one or more ECS instances by specifying parameters such as CommandId, InstanceId, and ResourceGroupId.
       *
       * @description ## Operation description
       * <props="china">
       * - The following limits apply to the target ECS instances. If you select multiple ECS instances and one of them does not meet the execution conditions, you must call the operation again.
       *     - Target instance must be in the Running state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query target instance status.
       *     - [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on target instance in advance. 
       *     - To run a PowerShell command, target instance must have the PowerShell module configured. 
       * - One-time execution: The command is run only once.
       * - Scheduled execution:
       *     - The command is run at the frequency specified by the Frequency parameter. The result of the previous execution does not affect the next execution.
       *     - If you run a scheduled task based on a Cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of target instance. Make sure that the time or time zone of the ECS instance is consistent with your expected time. For more information about time zones, see [Manage time synchronization services](https://help.aliyun.com/document_detail/92704.html).
       *      Cloud Assistant Agent must be at or later than the following versions to support the new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron expression-based scheduled execution). If the ClientNeedUpgrade error code is returned, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *     - Linux: 2.2.3.282
       *     - Windows: 2.1.3.282
       * - A command may fail to be run due to abnormal instance status, network exceptions, or Cloud Assistant Agent exceptions. No execution information is generated when a command fails to be run. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html). 
       * - If you enabled the custom parameter feature when you created the command, you must pass in custom parameters (`Parameters`) when you run the command.
       * - Call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to query the Cloud Assistant status of target instance. Run the command only when CloudAssistantStatus is true, especially for newly purchased instances.
       * <props="intl">
       * - The following limits apply to the target ECS instances. If you select multiple ECS instances and one of them does not meet the execution conditions, you must call the operation again.
       *     - Target instance must be in the Running state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query target instance status.
       *     - [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on target instance in advance. 
       *     - To run a PowerShell command, target instance must have the PowerShell module configured. 
       * - One-time execution: The command is run only once.
       * - Scheduled execution:
       *     - The command is run at the frequency specified by the Frequency parameter. The result of the previous execution does not affect the next execution.
       *     - If you run a scheduled task based on a Cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of target instance. Make sure that the time or time zone of the ECS instance is consistent with your expected time. For more information about time zones, see [Manage time synchronization services](https://help.aliyun.com/document_detail/92704.html).
       *      Cloud Assistant Agent must be at or later than the following versions to support the new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron expression-based scheduled execution). If the ClientNeedUpgrade error code is returned, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *     - Linux: 2.2.3.282
       *     - Windows: 2.1.3.282
       * - A command may fail to be run due to abnormal instance status, network exceptions, or Cloud Assistant Agent exceptions. No execution information is generated when a command fails to be run. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html). 
       * - If you enabled the custom parameter feature when you created the command, you must pass in custom parameters (`Parameters`) when you run the command.
       * - Call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to query the Cloud Assistant status of target instance. Run the command only when CloudAssistantStatus is true, especially for newly purchased instances.
       *
       * @param tmpReq InvokeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommandWithOptions(const Models::InvokeCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a Cloud Assistant command on one or more ECS instances by specifying parameters such as CommandId, InstanceId, and ResourceGroupId.
       *
       * @description ## Operation description
       * <props="china">
       * - The following limits apply to the target ECS instances. If you select multiple ECS instances and one of them does not meet the execution conditions, you must call the operation again.
       *     - Target instance must be in the Running state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query target instance status.
       *     - [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on target instance in advance. 
       *     - To run a PowerShell command, target instance must have the PowerShell module configured. 
       * - One-time execution: The command is run only once.
       * - Scheduled execution:
       *     - The command is run at the frequency specified by the Frequency parameter. The result of the previous execution does not affect the next execution.
       *     - If you run a scheduled task based on a Cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of target instance. Make sure that the time or time zone of the ECS instance is consistent with your expected time. For more information about time zones, see [Manage time synchronization services](https://help.aliyun.com/document_detail/92704.html).
       *      Cloud Assistant Agent must be at or later than the following versions to support the new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron expression-based scheduled execution). If the ClientNeedUpgrade error code is returned, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *     - Linux: 2.2.3.282
       *     - Windows: 2.1.3.282
       * - A command may fail to be run due to abnormal instance status, network exceptions, or Cloud Assistant Agent exceptions. No execution information is generated when a command fails to be run. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html). 
       * - If you enabled the custom parameter feature when you created the command, you must pass in custom parameters (`Parameters`) when you run the command.
       * - Call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to query the Cloud Assistant status of target instance. Run the command only when CloudAssistantStatus is true, especially for newly purchased instances.
       * <props="intl">
       * - The following limits apply to the target ECS instances. If you select multiple ECS instances and one of them does not meet the execution conditions, you must call the operation again.
       *     - Target instance must be in the Running state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query target instance status.
       *     - [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on target instance in advance. 
       *     - To run a PowerShell command, target instance must have the PowerShell module configured. 
       * - One-time execution: The command is run only once.
       * - Scheduled execution:
       *     - The command is run at the frequency specified by the Frequency parameter. The result of the previous execution does not affect the next execution.
       *     - If you run a scheduled task based on a Cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of target instance. Make sure that the time or time zone of the ECS instance is consistent with your expected time. For more information about time zones, see [Manage time synchronization services](https://help.aliyun.com/document_detail/92704.html).
       *      Cloud Assistant Agent must be at or later than the following versions to support the new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron expression-based scheduled execution). If the ClientNeedUpgrade error code is returned, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *     - Linux: 2.2.3.282
       *     - Windows: 2.1.3.282
       * - A command may fail to be run due to abnormal instance status, network exceptions, or Cloud Assistant Agent exceptions. No execution information is generated when a command fails to be run. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html). 
       * - If you enabled the custom parameter feature when you created the command, you must pass in custom parameters (`Parameters`) when you run the command.
       * - Call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to query the Cloud Assistant status of target instance. Run the command only when CloudAssistantStatus is true, especially for newly purchased instances.
       *
       * @param request InvokeCommandRequest
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommand(const Models::InvokeCommandRequest &request);

      /**
       * @summary Adds an ECS resource or service to a resource group.
       *
       * @description ## Operation description
       * A resource is a cloud service entity that you create on Alibaba Cloud. For example, an ECS instance, an ECS Elastic Network Interface (ENI), or an ECS image can each be a resource. A resource group is a collection of infrastructure for projects, environments, or stacks. Managing resources in resource groups allows you to monitor and run tasks in a centralized manner, without the need to switch between multiple Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroupWithOptions(const Models::JoinResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ECS resource or service to a resource group.
       *
       * @description ## Operation description
       * A resource is a cloud service entity that you create on Alibaba Cloud. For example, an ECS instance, an ECS Elastic Network Interface (ENI), or an ECS image can each be a resource. A resource group is a collection of infrastructure for projects, environments, or stacks. Managing resources in resource groups allows you to monitor and run tasks in a centralized manner, without the need to switch between multiple Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroup(const Models::JoinResourceGroupRequest &request);

      /**
       * @summary Adds an ECS instance or an Elastic Network Interface (ENI) to a specified security group.
       *
       * @description > This API operation is deprecated. Invoke [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) to add an ECS instance to or remove it from a security group. Invoke [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) to add an Elastic Network Interface (ENI) to or remove it from a security group.
       * - This operation does not support adding both an instance and an ENI to a security group at the same time. The InstanceId and NetworkInterfaceId parameters cannot be specified at the same time.
       * - The security group and the instance must belong to the same region. 
       * - The security group and the instance must have the same network type. If the network type is Virtual Private Cloud (VPC), the security group and the instance must belong to the same VPC.
       * - Before joining a security group, the instance must be in the **Stopped** or **Running** state.
       * - An instance or an ENI can be added to up to five security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroupWithOptions(const Models::JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ECS instance or an Elastic Network Interface (ENI) to a specified security group.
       *
       * @description > This API operation is deprecated. Invoke [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) to add an ECS instance to or remove it from a security group. Invoke [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) to add an Elastic Network Interface (ENI) to or remove it from a security group.
       * - This operation does not support adding both an instance and an ENI to a security group at the same time. The InstanceId and NetworkInterfaceId parameters cannot be specified at the same time.
       * - The security group and the instance must belong to the same region. 
       * - The security group and the instance must have the same network type. If the network type is Virtual Private Cloud (VPC), the security group and the instance must belong to the same VPC.
       * - Before joining a security group, the instance must be in the **Stopped** or **Running** state.
       * - An instance or an ENI can be added to up to five security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroup(const Models::JoinSecurityGroupRequest &request);

      /**
       * @summary Removes an ECS instance or an Elastic Network Interface (ENI) from a specified security group.
       *
       * @description > This API operation is no longer recommended. Invoke [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) to add an ECS instance to or remove it from a security group. Invoke [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) to add an Elastic Network Interface (ENI) to or remove it from a security group.
       * >Notice: Alibaba Cloud adjusted the validation rules for this operation on July 8, 2024. When you attempt to remove an instance or network interface controller (NIC) that is not in the specified security group, the operation now returns the error code InvalidSecurityGroupAssociation.NotFound instead of a success response. Update your code to be compatible with this error code to avoid impact on your production workloads.
       * - You cannot remove an instance and an Elastic Network Interface (ENI) from a security group at the same time. The InstanceId and NetworkInterfaceId parameters are mutually exclusive.
       * - Before you remove an instance from a security group, the instance must be in the **Stopped** or **Running** state.  
       * - An instance or Elastic Network Interface (ENI) must belong to at least one security group. If the instance or ENI belongs to only one security group, the removal request fails.  
       * - If the instance or network interface controller (NIC) is not in the specified security group, the removal request fails.
       *
       * @param request LeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroupWithOptions(const Models::LeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an ECS instance or an Elastic Network Interface (ENI) from a specified security group.
       *
       * @description > This API operation is no longer recommended. Invoke [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) to add an ECS instance to or remove it from a security group. Invoke [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) to add an Elastic Network Interface (ENI) to or remove it from a security group.
       * >Notice: Alibaba Cloud adjusted the validation rules for this operation on July 8, 2024. When you attempt to remove an instance or network interface controller (NIC) that is not in the specified security group, the operation now returns the error code InvalidSecurityGroupAssociation.NotFound instead of a success response. Update your code to be compatible with this error code to avoid impact on your production workloads.
       * - You cannot remove an instance and an Elastic Network Interface (ENI) from a security group at the same time. The InstanceId and NetworkInterfaceId parameters are mutually exclusive.
       * - Before you remove an instance from a security group, the instance must be in the **Stopped** or **Running** state.  
       * - An instance or Elastic Network Interface (ENI) must belong to at least one security group. If the instance or ENI belongs to only one security group, the removal request fails.  
       * - If the instance or network interface controller (NIC) is not in the specified security group, the removal request fails.
       *
       * @param request LeaveSecurityGroupRequest
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroup(const Models::LeaveSecurityGroupRequest &request);

      /**
       * @summary Queries the status of Cloud Assistant plugins on instances.
       *
       * @description - The Cloud Assistant Agent version on the instance must be at least the following version for the Cloud Assistant plugin status to be queried:
       *     - Linux: 2.2.3.344.
       *     - Windows: 2.1.3.344.
       * - When you perform a paging query for the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value returned in the result is used as the credential to query subsequent pages. When you perform a paging query for subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request ListPluginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginStatusResponse
       */
      Models::ListPluginStatusResponse listPluginStatusWithOptions(const Models::ListPluginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of Cloud Assistant plugins on instances.
       *
       * @description - The Cloud Assistant Agent version on the instance must be at least the following version for the Cloud Assistant plugin status to be queried:
       *     - Linux: 2.2.3.344.
       *     - Windows: 2.1.3.344.
       * - When you perform a paging query for the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value returned in the result is used as the credential to query subsequent pages. When you perform a paging query for subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request ListPluginStatusRequest
       * @return ListPluginStatusResponse
       */
      Models::ListPluginStatusResponse listPluginStatus(const Models::ListPluginStatusRequest &request);

      /**
       * @summary Lists the tags on one or more ECS resources.
       *
       * @description ## API
       * To find specific resources, include at least one of the following parameters in your request.
       * - `ResourceId.N`
       * - `Tag.N` (`Tag.N.Key` and `Tag.N.Value`)
       * - `TagFilter.N`
       * If you specify the following parameter combinations, the API returns only the ECS resources that match all conditions.
       * - `Tag.N` and `ResourceId.N`
       * - `TagFilter.N` and `ResourceId.N`
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tags on one or more ECS resources.
       *
       * @description ## API
       * To find specific resources, include at least one of the following parameters in your request.
       * - `ResourceId.N`
       * - `Tag.N` (`Tag.N.Key` and `Tag.N.Value`)
       * - `TagFilter.N`
       * If you specify the following parameter combinations, the API returns only the ECS resources that match all conditions.
       * - `Tag.N` and `ResourceId.N`
       * - `TagFilter.N` and `ResourceId.N`
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Locks a snapshot in compliance mode to prevent the snapshot from being accidentally or maliciously deleted. During the lock period, no user can delete the snapshot.
       *
       * @description You can also use this operation to reconfigure a locked snapshot. The configurable items depend on the lock mode and lock status:
       * - If the snapshot is locked in compliance mode and is within the cool-off period, you can extend or shorten the cool-off period and extend or shorten the lock duration.
       * - If the snapshot is locked in compliance mode and the cool-off period has elapsed, you can only extend the lock duration.
       * > When you reconfigure a locked snapshot during the cool-off period, the system treats this as a re-lock operation. All lock parameters are reset rather than individually adjusted.
       *
       * @param request LockSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockSnapshotResponse
       */
      Models::LockSnapshotResponse lockSnapshotWithOptions(const Models::LockSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks a snapshot in compliance mode to prevent the snapshot from being accidentally or maliciously deleted. During the lock period, no user can delete the snapshot.
       *
       * @description You can also use this operation to reconfigure a locked snapshot. The configurable items depend on the lock mode and lock status:
       * - If the snapshot is locked in compliance mode and is within the cool-off period, you can extend or shorten the cool-off period and extend or shorten the lock duration.
       * - If the snapshot is locked in compliance mode and the cool-off period has elapsed, you can only extend the lock duration.
       * > When you reconfigure a locked snapshot during the cool-off period, the system treats this as a re-lock operation. All lock parameters are reset rather than individually adjusted.
       *
       * @param request LockSnapshotRequest
       * @return LockSnapshotResponse
       */
      Models::LockSnapshotResponse lockSnapshot(const Models::LockSnapshotRequest &request);

      /**
       * @summary Modifies the configurations of an auto provisioning group.
       *
       * @description Before you modify an auto provisioning group, take note of the following items:
       * - If you modify the capacity or capacity-related settings of the group, the group executes a scheduling node after the modification is complete.
       * - If the auto provisioning group is being deleted, you cannot modify the group.
       *
       * @param request ModifyAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoProvisioningGroupResponse
       */
      Models::ModifyAutoProvisioningGroupResponse modifyAutoProvisioningGroupWithOptions(const Models::ModifyAutoProvisioningGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an auto provisioning group.
       *
       * @description Before you modify an auto provisioning group, take note of the following items:
       * - If you modify the capacity or capacity-related settings of the group, the group executes a scheduling node after the modification is complete.
       * - If the auto provisioning group is being deleted, you cannot modify the group.
       *
       * @param request ModifyAutoProvisioningGroupRequest
       * @return ModifyAutoProvisioningGroupResponse
       */
      Models::ModifyAutoProvisioningGroupResponse modifyAutoProvisioningGroup(const Models::ModifyAutoProvisioningGroupRequest &request);

      /**
       * @summary Modifies an automatic snapshot policy, such as the snapshot creation time, repeat date, and retention period.
       *
       * @description When you call this operation, take note of the following items:
       * - System policies cannot be modified.
       * - After you modify an automatic snapshot policy, the disks to which the policy has been applied immediately execute the modified automatic snapshot policy.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are encrypted by using the service key of the destination region by default.
       *
       * @param request ModifyAutoSnapshotPolicyExRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoSnapshotPolicyExResponse
       */
      Models::ModifyAutoSnapshotPolicyExResponse modifyAutoSnapshotPolicyExWithOptions(const Models::ModifyAutoSnapshotPolicyExRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an automatic snapshot policy, such as the snapshot creation time, repeat date, and retention period.
       *
       * @description When you call this operation, take note of the following items:
       * - System policies cannot be modified.
       * - After you modify an automatic snapshot policy, the disks to which the policy has been applied immediately execute the modified automatic snapshot policy.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are encrypted by using the service key of the destination region by default.
       *
       * @param request ModifyAutoSnapshotPolicyExRequest
       * @return ModifyAutoSnapshotPolicyExResponse
       */
      Models::ModifyAutoSnapshotPolicyExResponse modifyAutoSnapshotPolicyEx(const Models::ModifyAutoSnapshotPolicyExRequest &request);

      /**
       * @deprecated OpenAPI ModifyBandwidthPackageSpec is deprecated
       *
       * @summary Modifies the bandwidth of a bandwidth package.
       *
       * @param request ModifyBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBandwidthPackageSpecResponse
       */
      Models::ModifyBandwidthPackageSpecResponse modifyBandwidthPackageSpecWithOptions(const Models::ModifyBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyBandwidthPackageSpec is deprecated
       *
       * @summary Modifies the bandwidth of a bandwidth package.
       *
       * @param request ModifyBandwidthPackageSpecRequest
       * @return ModifyBandwidthPackageSpecResponse
       */
      Models::ModifyBandwidthPackageSpecResponse modifyBandwidthPackageSpec(const Models::ModifyBandwidthPackageSpecRequest &request);

      /**
       * @summary Modifies partial information of a capacity reservation, including the name, description, expiration method, and total number of reserved instances.
       *
       * @param request ModifyCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservationWithOptions(const Models::ModifyCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies partial information of a capacity reservation, including the name, description, expiration method, and total number of reserved instances.
       *
       * @param request ModifyCapacityReservationRequest
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservation(const Models::ModifyCapacityReservationRequest &request);

      /**
       * @summary Modifies the Cloud Assistant service configurations.
       *
       * @param tmpReq ModifyCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudAssistantSettingsResponse
       */
      Models::ModifyCloudAssistantSettingsResponse modifyCloudAssistantSettingsWithOptions(const Models::ModifyCloudAssistantSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Cloud Assistant service configurations.
       *
       * @param request ModifyCloudAssistantSettingsRequest
       * @return ModifyCloudAssistantSettingsResponse
       */
      Models::ModifyCloudAssistantSettingsResponse modifyCloudAssistantSettings(const Models::ModifyCloudAssistantSettingsRequest &request);

      /**
       * @summary Modifies the parameters of a Cloud Assistant command.
       *
       * @param request ModifyCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommandResponse
       */
      Models::ModifyCommandResponse modifyCommandWithOptions(const Models::ModifyCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a Cloud Assistant command.
       *
       * @param request ModifyCommandRequest
       * @return ModifyCommandResponse
       */
      Models::ModifyCommandResponse modifyCommand(const Models::ModifyCommandRequest &request);

      /**
       * @summary Modifies the information about a dedicated host, such as the name, description, and service availability attributes.
       *
       * @description ## Operation description
       * - To modify the CPU overcommit ratio, all ECS instances on the dedicated host must be in the Stopped (`Stopped`) state.
       * - Modifying the CPU overcommit ratio does not affect the running state of the dedicated host. However, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs after the modification. Otherwise, the excess ECS instances cannot be started.
       *
       * @param request ModifyDedicatedHostAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAttributeResponse
       */
      Models::ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttributeWithOptions(const Models::ModifyDedicatedHostAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a dedicated host, such as the name, description, and service availability attributes.
       *
       * @description ## Operation description
       * - To modify the CPU overcommit ratio, all ECS instances on the dedicated host must be in the Stopped (`Stopped`) state.
       * - Modifying the CPU overcommit ratio does not affect the running state of the dedicated host. However, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs after the modification. Otherwise, the excess ECS instances cannot be started.
       *
       * @param request ModifyDedicatedHostAttributeRequest
       * @return ModifyDedicatedHostAttributeResponse
       */
      Models::ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttribute(const Models::ModifyDedicatedHostAttributeRequest &request);

      /**
       * @summary Sets or cancels the automatic release time for a pay-as-you-go dedicated host.
       *
       * @description ## Operation description
       * When the specified automatic release time is reached, the pay-as-you-go dedicated host is automatically released. Make sure that you no longer use the dedicated host and have backed up application data as needed.
       *
       * @param request ModifyDedicatedHostAutoReleaseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAutoReleaseTimeResponse
       */
      Models::ModifyDedicatedHostAutoReleaseTimeResponse modifyDedicatedHostAutoReleaseTimeWithOptions(const Models::ModifyDedicatedHostAutoReleaseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets or cancels the automatic release time for a pay-as-you-go dedicated host.
       *
       * @description ## Operation description
       * When the specified automatic release time is reached, the pay-as-you-go dedicated host is automatically released. Make sure that you no longer use the dedicated host and have backed up application data as needed.
       *
       * @param request ModifyDedicatedHostAutoReleaseTimeRequest
       * @return ModifyDedicatedHostAutoReleaseTimeResponse
       */
      Models::ModifyDedicatedHostAutoReleaseTimeResponse modifyDedicatedHostAutoReleaseTime(const Models::ModifyDedicatedHostAutoReleaseTimeRequest &request);

      /**
       * @summary Configures auto-renewal for one or more subscription dedicated hosts, or cancels the auto-renewal that has been configured.
       *
       * @description - After you enable the auto-renewal feature for a subscription dedicated host, the system automatically renews the host nine days before expiration. The fee is automatically executed at 08:00:00 (UTC+8). If the deduction failed on the previous day, the system retries at the same time the next day. The automatic deduction stops after the fee is successfully deducted or after the dedicated host expires and is locked nine days later. During this period, make sure that your payment method has a sufficient balance.
       * - Subscription dedicated hosts support auto-renewal that follows the subscription ECS instances on the host. For more information, see the metric description of the AutoRenewWithEcs parameter.
       *
       * @param request ModifyDedicatedHostAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAutoRenewAttributeResponse
       */
      Models::ModifyDedicatedHostAutoRenewAttributeResponse modifyDedicatedHostAutoRenewAttributeWithOptions(const Models::ModifyDedicatedHostAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures auto-renewal for one or more subscription dedicated hosts, or cancels the auto-renewal that has been configured.
       *
       * @description - After you enable the auto-renewal feature for a subscription dedicated host, the system automatically renews the host nine days before expiration. The fee is automatically executed at 08:00:00 (UTC+8). If the deduction failed on the previous day, the system retries at the same time the next day. The automatic deduction stops after the fee is successfully deducted or after the dedicated host expires and is locked nine days later. During this period, make sure that your payment method has a sufficient balance.
       * - Subscription dedicated hosts support auto-renewal that follows the subscription ECS instances on the host. For more information, see the metric description of the AutoRenewWithEcs parameter.
       *
       * @param request ModifyDedicatedHostAutoRenewAttributeRequest
       * @return ModifyDedicatedHostAutoRenewAttributeResponse
       */
      Models::ModifyDedicatedHostAutoRenewAttributeResponse modifyDedicatedHostAutoRenewAttribute(const Models::ModifyDedicatedHostAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies some information about a dedicated host cluster, including the name, description, and properties of the dedicated host cluster.
       *
       * @param request ModifyDedicatedHostClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostClusterAttributeResponse
       */
      Models::ModifyDedicatedHostClusterAttributeResponse modifyDedicatedHostClusterAttributeWithOptions(const Models::ModifyDedicatedHostClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies some information about a dedicated host cluster, including the name, description, and properties of the dedicated host cluster.
       *
       * @param request ModifyDedicatedHostClusterAttributeRequest
       * @return ModifyDedicatedHostClusterAttributeResponse
       */
      Models::ModifyDedicatedHostClusterAttributeResponse modifyDedicatedHostClusterAttribute(const Models::ModifyDedicatedHostClusterAttributeRequest &request);

      /**
       * @summary Modifies the billing method of dedicated hosts.
       *
       * @param request ModifyDedicatedHostsChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostsChargeTypeResponse
       */
      Models::ModifyDedicatedHostsChargeTypeResponse modifyDedicatedHostsChargeTypeWithOptions(const Models::ModifyDedicatedHostsChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method of dedicated hosts.
       *
       * @param request ModifyDedicatedHostsChargeTypeRequest
       * @return ModifyDedicatedHostsChargeTypeResponse
       */
      Models::ModifyDedicatedHostsChargeTypeResponse modifyDedicatedHostsChargeType(const Models::ModifyDedicatedHostsChargeTypeRequest &request);

      /**
       * @summary Modifies the name and description of a deployment set.
       *
       * @param request ModifyDeploymentSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeploymentSetAttributeResponse
       */
      Models::ModifyDeploymentSetAttributeResponse modifyDeploymentSetAttributeWithOptions(const Models::ModifyDeploymentSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a deployment set.
       *
       * @param request ModifyDeploymentSetAttributeRequest
       * @return ModifyDeploymentSetAttributeResponse
       */
      Models::ModifyDeploymentSetAttributeResponse modifyDeploymentSetAttribute(const Models::ModifyDeploymentSetAttributeRequest &request);

      /**
       * @summary Modifies a resource diagnostic metric set.
       *
       * @param request ModifyDiagnosticMetricSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiagnosticMetricSetResponse
       */
      Models::ModifyDiagnosticMetricSetResponse modifyDiagnosticMetricSetWithOptions(const Models::ModifyDiagnosticMetricSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource diagnostic metric set.
       *
       * @param request ModifyDiagnosticMetricSetRequest
       * @return ModifyDiagnosticMetricSetResponse
       */
      Models::ModifyDiagnosticMetricSetResponse modifyDiagnosticMetricSet(const Models::ModifyDiagnosticMetricSetRequest &request);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion policy, automatic snapshot policy, performance burst settings, and other attributes of one or more block storage devices.
       *
       * @description You can call the `DiskId` parameter to modify the name, description, release behavior, and other attributes of a single block storage device, or call the `DiskIds.N` parameter to modify the attributes of multiple block storage devices in a batch.
       *
       * @param request ModifyDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskAttributeResponse
       */
      Models::ModifyDiskAttributeResponse modifyDiskAttributeWithOptions(const Models::ModifyDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion policy, automatic snapshot policy, performance burst settings, and other attributes of one or more block storage devices.
       *
       * @description You can call the `DiskId` parameter to modify the name, description, release behavior, and other attributes of a single block storage device, or call the `DiskIds.N` parameter to modify the attributes of multiple block storage devices in a batch.
       *
       * @param request ModifyDiskAttributeRequest
       * @return ModifyDiskAttributeResponse
       */
      Models::ModifyDiskAttributeResponse modifyDiskAttribute(const Models::ModifyDiskAttributeRequest &request);

      /**
       * @summary Converts the billing method of data disks attached to a subscription ECS instance between pay-as-you-go and subscription.
       *
       * @description Before you convert the billing method of a data disk, read [Convert the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * Take note of the following items when you call this operation:
       * - You cannot change the billing method of data disks attached to pay-as-you-go instances. Pay-as-you-go instances support only pay-as-you-go disks.
       * - The instance to which the data disk is attached cannot be in the expired and stopped state.
       * - The price difference before and after the billing method conversion is refunded to your original payment method. Used coupons are not refundable.
       * - After the billing method of a disk is successfully changed, you cannot change it again within five minutes.  
       * <props="china">- Disks with the multi-attach attribute enabled support only the pay-as-you-go billing method and cannot be converted to subscription.
       * After the billing method is changed, automatic payment is enabled by default. Make sure that your account balance is sufficient. Otherwise, an abnormal order is generated, and you can only void the order. If your account balance is insufficient, you can set the AutoPay parameter to false. In this case, an unpaid order is generated. You can log on to the Alibaba Cloud **Expenses and Costs** console and go to the <props="china"><ph>[Orders](https://usercenter2.aliyun.com/order/list)</ph><props="intl"><ph>[Orders](https://usercenter2-intl.aliyun.com/order/list)</ph> page to complete the payment.
       *
       * @param request ModifyDiskChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskChargeTypeResponse
       */
      Models::ModifyDiskChargeTypeResponse modifyDiskChargeTypeWithOptions(const Models::ModifyDiskChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts the billing method of data disks attached to a subscription ECS instance between pay-as-you-go and subscription.
       *
       * @description Before you convert the billing method of a data disk, read [Convert the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * Take note of the following items when you call this operation:
       * - You cannot change the billing method of data disks attached to pay-as-you-go instances. Pay-as-you-go instances support only pay-as-you-go disks.
       * - The instance to which the data disk is attached cannot be in the expired and stopped state.
       * - The price difference before and after the billing method conversion is refunded to your original payment method. Used coupons are not refundable.
       * - After the billing method of a disk is successfully changed, you cannot change it again within five minutes.  
       * <props="china">- Disks with the multi-attach attribute enabled support only the pay-as-you-go billing method and cannot be converted to subscription.
       * After the billing method is changed, automatic payment is enabled by default. Make sure that your account balance is sufficient. Otherwise, an abnormal order is generated, and you can only void the order. If your account balance is insufficient, you can set the AutoPay parameter to false. In this case, an unpaid order is generated. You can log on to the Alibaba Cloud **Expenses and Costs** console and go to the <props="china"><ph>[Orders](https://usercenter2.aliyun.com/order/list)</ph><props="intl"><ph>[Orders](https://usercenter2-intl.aliyun.com/order/list)</ph> page to complete the payment.
       *
       * @param request ModifyDiskChargeTypeRequest
       * @return ModifyDiskChargeTypeResponse
       */
      Models::ModifyDiskChargeTypeResponse modifyDiskChargeType(const Models::ModifyDiskChargeTypeRequest &request);

      /**
       * @summary Modifies the KMS key ID used for block storage account-level default encryption in a specified region.
       *
       * @description - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For information about how to perform authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - The block storage account-level default encryption feature must be enabled in the specified region.
       * - Before using a master key for the first time, grant ECS the `AliyunECSDiskEncryptDefaultRole` role to allow ECS to access KMS resources. For details, see [Grant permissions to access KMS keys by using a RAM role](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyIdWithOptions(const Models::ModifyDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the KMS key ID used for block storage account-level default encryption in a specified region.
       *
       * @description - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For information about how to perform authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - The block storage account-level default encryption feature must be enabled in the specified region.
       * - Before using a master key for the first time, grant ECS the `AliyunECSDiskEncryptDefaultRole` role to allow ECS to access KMS resources. For details, see [Grant permissions to access KMS keys by using a RAM role](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyId(const Models::ModifyDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Migrates a disk into or out of a dedicated block storage cluster, or migrates a disk between dedicated block storage clusters.
       *
       * @description > The dedicated block storage cluster feature is currently supported in the China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), Germany (Frankfurt), and China South 1 Finance regions.
       * Before you invoke this operation, make sure that you fully understand the billing methods and pricing of disks and dedicated block storage clusters, and that the dedicated block storage cluster has not expired and the account does not have an overdue payment. For more information, see [Dedicated block storage cluster billing](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       * Take note of the following items when you invoke this operation:
       * - The disk and the dedicated block storage cluster must be in the same zone.
       * - Only pay-as-you-go disks are supported. Subscription disks must be converted to pay-as-you-go disks first. For more information, see [Change the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * - The disk type must be consistent with the disk type supported by the destination cluster. When migrating between different dedicated block storage clusters, you can change the disk type to match the disk type supported by the destination cluster.
       * - The disk must be in the **In Use** (In_use) or **Active** (Available) state.
       * - If the disk is attached to an ECS instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The ECS instance cannot be expired.
       * - Because the ESSD performance level is limited by its capacity, if you cannot upgrade the performance level, expand the disk and try again. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * - A maximum of five disk migration tasks can run concurrently in the same region for a single account.
       * - During the migration, you cannot cancel the migration, create snapshots, perform Upgrade/Downgrade, expand, attach, detach, or reinitialize the disk.
       * > After the disk is migrated, the billing method, disk type, and capabilities of the destination cluster take effect immediately. Alibaba Cloud charges you based on the new disk type and performance level. For more information, see [Dedicated block storage cluster billing](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDeploymentResponse
       */
      Models::ModifyDiskDeploymentResponse modifyDiskDeploymentWithOptions(const Models::ModifyDiskDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a disk into or out of a dedicated block storage cluster, or migrates a disk between dedicated block storage clusters.
       *
       * @description > The dedicated block storage cluster feature is currently supported in the China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), Germany (Frankfurt), and China South 1 Finance regions.
       * Before you invoke this operation, make sure that you fully understand the billing methods and pricing of disks and dedicated block storage clusters, and that the dedicated block storage cluster has not expired and the account does not have an overdue payment. For more information, see [Dedicated block storage cluster billing](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       * Take note of the following items when you invoke this operation:
       * - The disk and the dedicated block storage cluster must be in the same zone.
       * - Only pay-as-you-go disks are supported. Subscription disks must be converted to pay-as-you-go disks first. For more information, see [Change the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * - The disk type must be consistent with the disk type supported by the destination cluster. When migrating between different dedicated block storage clusters, you can change the disk type to match the disk type supported by the destination cluster.
       * - The disk must be in the **In Use** (In_use) or **Active** (Available) state.
       * - If the disk is attached to an ECS instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The ECS instance cannot be expired.
       * - Because the ESSD performance level is limited by its capacity, if you cannot upgrade the performance level, expand the disk and try again. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * - A maximum of five disk migration tasks can run concurrently in the same region for a single account.
       * - During the migration, you cannot cancel the migration, create snapshots, perform Upgrade/Downgrade, expand, attach, detach, or reinitialize the disk.
       * > After the disk is migrated, the billing method, disk type, and capabilities of the destination cluster take effect immediately. Alibaba Cloud charges you based on the new disk type and performance level. For more information, see [Dedicated block storage cluster billing](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskDeploymentRequest
       * @return ModifyDiskDeploymentResponse
       */
      Models::ModifyDiskDeploymentResponse modifyDiskDeployment(const Models::ModifyDiskDeploymentRequest &request);

      /**
       * @summary Changes the type of a disk or modifies the performance level (PL) of an enterprise SSD (ESSD). Regional Enterprise SSD (ESSD), basic disks, elastic ephemeral disks, and local disks do not support disk type changes.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing and [pricing](https://www.aliyun.com/price/product#/disk/detail) of disks.
       * To minimize the impact of specification changes on your workloads, perform specification changes during off-peak hours.
       * Take note of the following items when you call this operation:
       * - To modify the performance level (PL) of an ESSD disk:
       *     - Subscription ESSD disks support only performance level (PL) upgrades.
       *     - Pay-as-you-go ESSD disks support both upgrades and downgrades of performance levels (PLs), but cannot be downgraded to PL0.
       *     - The ESSD disk must be in the **In Use** (In_use) or **Unattached** (Available) state.
       *     - If the ESSD disk is attached to an ECS instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state and must not be expired or have an overdue payment.
       *     - Because the ESSD performance level of an ESSD disk is limited by its capacity, if you cannot upgrade the performance level (PL), expand the disk by calling [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and try again. For more information, see [ESSD disks](https://help.aliyun.com/document_detail/122389.html).
       * - For precautions about changing the type of a disk, see [Change the disk type](~~161980#section_s4a_to0_1jx~~).
       * - For information about supported disk type changes, see [Supported disk type changes](~~161980#eb8bb54032nho~~).
       * <props="china">* Disks with the multi-attach attribute enabled do not support disk type changes.
       * After a disk type change, billing changes are as follows:
       * - Pay-as-you-go disks: billed based on the new disk type.
       * - Subscription disks: within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the subscription period).
       * For billing information about disks, see [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSpecResponse
       */
      Models::ModifyDiskSpecResponse modifyDiskSpecWithOptions(const Models::ModifyDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of a disk or modifies the performance level (PL) of an enterprise SSD (ESSD). Regional Enterprise SSD (ESSD), basic disks, elastic ephemeral disks, and local disks do not support disk type changes.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing and [pricing](https://www.aliyun.com/price/product#/disk/detail) of disks.
       * To minimize the impact of specification changes on your workloads, perform specification changes during off-peak hours.
       * Take note of the following items when you call this operation:
       * - To modify the performance level (PL) of an ESSD disk:
       *     - Subscription ESSD disks support only performance level (PL) upgrades.
       *     - Pay-as-you-go ESSD disks support both upgrades and downgrades of performance levels (PLs), but cannot be downgraded to PL0.
       *     - The ESSD disk must be in the **In Use** (In_use) or **Unattached** (Available) state.
       *     - If the ESSD disk is attached to an ECS instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state and must not be expired or have an overdue payment.
       *     - Because the ESSD performance level of an ESSD disk is limited by its capacity, if you cannot upgrade the performance level (PL), expand the disk by calling [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and try again. For more information, see [ESSD disks](https://help.aliyun.com/document_detail/122389.html).
       * - For precautions about changing the type of a disk, see [Change the disk type](~~161980#section_s4a_to0_1jx~~).
       * - For information about supported disk type changes, see [Supported disk type changes](~~161980#eb8bb54032nho~~).
       * <props="china">* Disks with the multi-attach attribute enabled do not support disk type changes.
       * After a disk type change, billing changes are as follows:
       * - Pay-as-you-go disks: billed based on the new disk type.
       * - Subscription disks: within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the subscription period).
       * For billing information about disks, see [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskSpecRequest
       * @return ModifyDiskSpecResponse
       */
      Models::ModifyDiskSpecResponse modifyDiskSpec(const Models::ModifyDiskSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyEipAddressAttribute is deprecated, please use Vpc::2016-04-28::ModifyEipAddressAttribute instead.
       *
       * @summary ModifyEipAddressAttribute
       *
       * @param request ModifyEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttributeWithOptions(const Models::ModifyEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyEipAddressAttribute is deprecated, please use Vpc::2016-04-28::ModifyEipAddressAttribute instead.
       *
       * @summary ModifyEipAddressAttribute
       *
       * @param request ModifyEipAddressAttributeRequest
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttribute(const Models::ModifyEipAddressAttributeRequest &request);

      /**
       * @summary Modifies some information about an elasticity assurance, including its name, description, and capacity (only capacity reduction is supported).
       *
       * @param request ModifyElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticityAssuranceResponse
       */
      Models::ModifyElasticityAssuranceResponse modifyElasticityAssuranceWithOptions(const Models::ModifyElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies some information about an elasticity assurance, including its name, description, and capacity (only capacity reduction is supported).
       *
       * @param request ModifyElasticityAssuranceRequest
       * @return ModifyElasticityAssuranceResponse
       */
      Models::ModifyElasticityAssuranceResponse modifyElasticityAssurance(const Models::ModifyElasticityAssuranceRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of one or more elasticity assurance services.
       *
       * @param request ModifyElasticityAssuranceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::ModifyElasticityAssuranceAutoRenewAttributeResponse modifyElasticityAssuranceAutoRenewAttributeWithOptions(const Models::ModifyElasticityAssuranceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of one or more elasticity assurance services.
       *
       * @param request ModifyElasticityAssuranceAutoRenewAttributeRequest
       * @return ModifyElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::ModifyElasticityAssuranceAutoRenewAttributeResponse modifyElasticityAssuranceAutoRenewAttribute(const Models::ModifyElasticityAssuranceAutoRenewAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyForwardEntry is deprecated, please use Vpc::2016-04-28::ModifyForwardEntry instead.
       *
       * @summary Modifies the properties of a specified forward entry.
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyForwardEntry is deprecated, please use Vpc::2016-04-28::ModifyForwardEntry instead.
       *
       * @summary Modifies the properties of a specified forward entry.
       *
       * @param request ModifyForwardEntryRequest
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntry(const Models::ModifyForwardEntryRequest &request);

      /**
       * @deprecated OpenAPI ModifyHaVipAttribute is deprecated, please use Vpc::2016-04-28::ModifyHaVipAttribute instead.
       *
       * @summary Modifies the attributes of a specified HAVIP instance.
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyHaVipAttribute is deprecated, please use Vpc::2016-04-28::ModifyHaVipAttribute instead.
       *
       * @summary Modifies the attributes of a specified HAVIP instance.
       *
       * @param request ModifyHaVipAttributeRequest
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttribute(const Models::ModifyHaVipAttributeRequest &request);

      /**
       * @summary Modifies the description of an HPC cluster.
       *
       * @param request ModifyHpcClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHpcClusterAttributeResponse
       */
      Models::ModifyHpcClusterAttributeResponse modifyHpcClusterAttributeWithOptions(const Models::ModifyHpcClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an HPC cluster.
       *
       * @param request ModifyHpcClusterAttributeRequest
       * @return ModifyHpcClusterAttributeResponse
       */
      Models::ModifyHpcClusterAttributeResponse modifyHpcClusterAttribute(const Models::ModifyHpcClusterAttributeRequest &request);

      /**
       * @summary Modifies the attributes of a custom image, such as the image family, name, boot mode, status, and NVMe support, by calling the ModifyImageAttribute operation with parameters such as ImageId and ImageFamily.
       *
       * @param request ModifyImageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttributeWithOptions(const Models::ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a custom image, such as the image family, name, boot mode, status, and NVMe support, by calling the ModifyImageAttribute operation with parameters such as ImageId and ImageFamily.
       *
       * @param request ModifyImageAttributeRequest
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttribute(const Models::ModifyImageAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyImageShareGroupPermission is deprecated, please use Ecs::2014-05-26::ModifyImageSharePermission instead.
       *
       * @summary Modifies the permissions of an image share group.
       *
       * @param request ModifyImageShareGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageShareGroupPermissionResponse
       */
      Models::ModifyImageShareGroupPermissionResponse modifyImageShareGroupPermissionWithOptions(const Models::ModifyImageShareGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyImageShareGroupPermission is deprecated, please use Ecs::2014-05-26::ModifyImageSharePermission instead.
       *
       * @summary Modifies the permissions of an image share group.
       *
       * @param request ModifyImageShareGroupPermissionRequest
       * @return ModifyImageShareGroupPermissionResponse
       */
      Models::ModifyImageShareGroupPermissionResponse modifyImageShareGroupPermission(const Models::ModifyImageShareGroupPermissionRequest &request);

      /**
       * @summary Manages image sharing permissions. You can share your custom images with other Alibaba Cloud accounts or publish them as community images for others to use.
       *
       * @description Before you invoke this operation, read [Share a custom image](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, take note of the following sharing rules:
       * - **Sharing limits**: You can share only custom images that you created under your account. Each image can be shared with up to 50 Alibaba Cloud accounts, and up to 10 Alibaba Cloud accounts at a time.
       * - **Impact on instances**: After an ECS instance is created from a shared image ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), if the image owner cancels the image sharing relationship or deletes the custom image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)), the instance cannot perform initialization of its system disk ([ReInitDisk](https://help.aliyun.com/document_detail/25519.html)).
       * >Notice: Rule change for sharing encrypted images in Elastic Compute Service (ECS): Only images encrypted with a customer master key (CMK) can be shared. Images encrypted with a service key can no longer be shared and will return an error during sharing. If you have images encrypted with a service key and plan to share them, use CopyImage to copy the image and change the encryption key to a CMK. The server will reject sharing requests for service key-encrypted images.
       * To publish or delist a community image, take note of the following:
       * - **Responsibilities and agreements**: The owner of a community image is responsible for its quality and iterative updates. Alibaba Cloud provides only platform support. Before publishing, make sure that you have read and signed the community image agreement. Otherwise, publishing is not allowed. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * - **Encryption limits**: Encrypted images cannot be published as community images.
       * - **Visibility**: Community images are fully public. All Alibaba Cloud accounts in the region where the image resides can use the image.
       * - **Feature limits**: Community images do not support sharing, export, or copying.
       * - **Impact of delisting**: After a community image is delisted, it is no longer publicly available to other Alibaba Cloud accounts. However, existing sharing relationships are retained.
       *
       * @param request ModifyImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermissionWithOptions(const Models::ModifyImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages image sharing permissions. You can share your custom images with other Alibaba Cloud accounts or publish them as community images for others to use.
       *
       * @description Before you invoke this operation, read [Share a custom image](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, take note of the following sharing rules:
       * - **Sharing limits**: You can share only custom images that you created under your account. Each image can be shared with up to 50 Alibaba Cloud accounts, and up to 10 Alibaba Cloud accounts at a time.
       * - **Impact on instances**: After an ECS instance is created from a shared image ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), if the image owner cancels the image sharing relationship or deletes the custom image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)), the instance cannot perform initialization of its system disk ([ReInitDisk](https://help.aliyun.com/document_detail/25519.html)).
       * >Notice: Rule change for sharing encrypted images in Elastic Compute Service (ECS): Only images encrypted with a customer master key (CMK) can be shared. Images encrypted with a service key can no longer be shared and will return an error during sharing. If you have images encrypted with a service key and plan to share them, use CopyImage to copy the image and change the encryption key to a CMK. The server will reject sharing requests for service key-encrypted images.
       * To publish or delist a community image, take note of the following:
       * - **Responsibilities and agreements**: The owner of a community image is responsible for its quality and iterative updates. Alibaba Cloud provides only platform support. Before publishing, make sure that you have read and signed the community image agreement. Otherwise, publishing is not allowed. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * - **Encryption limits**: Encrypted images cannot be published as community images.
       * - **Visibility**: Community images are fully public. All Alibaba Cloud accounts in the region where the image resides can use the image.
       * - **Feature limits**: Community images do not support sharing, export, or copying.
       * - **Impact of delisting**: After a community image is delisted, it is no longer publicly available to other Alibaba Cloud accounts. However, existing sharing relationships are retained.
       *
       * @param request ModifyImageSharePermissionRequest
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermission(const Models::ModifyImageSharePermissionRequest &request);

      /**
       * @summary Modifies the private pool matching mode of an instance.
       *
       * @description A private pool is generated after an elasticity assurance or capacity reservation is created. The private pool is associated with instance information that matches the private pool. When you create an instance, you can specify whether to use a private pool to launch the instance. The instance is then matched with an elasticity assurance or capacity reservation.
       * - After you call this operation to modify the private pool attributes of an instance, you do not need to restart the instance.
       * - When you call the following operations, the system re-matches the private pool of the instance. If the instance has already been matched with a specified private pool, the call may fail because the private pool capacity is exhausted or the private pool has expired. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the private pool matching mode to `Open`.
       *     - [StartInstance - Restart an instance that has the economical mode enabled.](https://help.aliyun.com/document_detail/2679679.html)
       *     - [ReActivateInstances - Restart an expired or overdue instance.](https://help.aliyun.com/document_detail/2679707.html)
       *     - [ModifyInstanceChargeType - Change the billing method of an instance.](https://help.aliyun.com/document_detail/2679704.html)
       *     - [ModifyPrepayInstanceSpec - Upgrade or downgrade the instance type of an instance.](https://help.aliyun.com/document_detail/2679706.html)
       *     - [ReplaceSystemDisk - Replace the operating system.](https://help.aliyun.com/document_detail/2679771.html)
       *
       * @param request ModifyInstanceAttachmentAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttachmentAttributesResponse
       */
      Models::ModifyInstanceAttachmentAttributesResponse modifyInstanceAttachmentAttributesWithOptions(const Models::ModifyInstanceAttachmentAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the private pool matching mode of an instance.
       *
       * @description A private pool is generated after an elasticity assurance or capacity reservation is created. The private pool is associated with instance information that matches the private pool. When you create an instance, you can specify whether to use a private pool to launch the instance. The instance is then matched with an elasticity assurance or capacity reservation.
       * - After you call this operation to modify the private pool attributes of an instance, you do not need to restart the instance.
       * - When you call the following operations, the system re-matches the private pool of the instance. If the instance has already been matched with a specified private pool, the call may fail because the private pool capacity is exhausted or the private pool has expired. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the private pool matching mode to `Open`.
       *     - [StartInstance - Restart an instance that has the economical mode enabled.](https://help.aliyun.com/document_detail/2679679.html)
       *     - [ReActivateInstances - Restart an expired or overdue instance.](https://help.aliyun.com/document_detail/2679707.html)
       *     - [ModifyInstanceChargeType - Change the billing method of an instance.](https://help.aliyun.com/document_detail/2679704.html)
       *     - [ModifyPrepayInstanceSpec - Upgrade or downgrade the instance type of an instance.](https://help.aliyun.com/document_detail/2679706.html)
       *     - [ReplaceSystemDisk - Replace the operating system.](https://help.aliyun.com/document_detail/2679771.html)
       *
       * @param request ModifyInstanceAttachmentAttributesRequest
       * @return ModifyInstanceAttachmentAttributesResponse
       */
      Models::ModifyInstanceAttachmentAttributesResponse modifyInstanceAttachmentAttributes(const Models::ModifyInstanceAttachmentAttributesRequest &request);

      /**
       * @summary Modifies the attributes of an ECS instance, including the password, instance name, hostname, security groups, MTU, and instance user data.
       *
       * @description Instances that are locked for security reasons do not support this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an ECS instance, including the password, instance name, hostname, security groups, MTU, and instance user data.
       *
       * @description Instances that are locked for security reasons do not support this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Modifies the automatic release time of a specified pay-as-you-go or spot instance, and supports canceling the automatic release feature.
       *
       * @param request ModifyInstanceAutoReleaseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoReleaseTimeResponse
       */
      Models::ModifyInstanceAutoReleaseTimeResponse modifyInstanceAutoReleaseTimeWithOptions(const Models::ModifyInstanceAutoReleaseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic release time of a specified pay-as-you-go or spot instance, and supports canceling the automatic release feature.
       *
       * @param request ModifyInstanceAutoReleaseTimeRequest
       * @return ModifyInstanceAutoReleaseTimeResponse
       */
      Models::ModifyInstanceAutoReleaseTimeResponse modifyInstanceAutoReleaseTime(const Models::ModifyInstanceAutoReleaseTimeRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of one or more subscription instances to help reduce the maintenance costs of expiring resources.
       *
       * @description **Before you invoke this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS).**
       * - Make sure that your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. Invoking this operation for pay-as-you-go instances returns an error.
       * - Auto-renewal deduction occurs on the ninth day before the instance expires. Deduction starts to execute at 08:00:00 (UTC+8).
       * - If the auto-renewal deduction failed on the previous day, the system retries the deduction at the scheduled time on the next day until the deduction succeeds or the instance is locked after 9 days.
       * <props="china">
       * - If the purchase duration of a new instance is one week, the auto-renewal deduction is performed on the first day after the instance is created.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttributeWithOptions(const Models::ModifyInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of one or more subscription instances to help reduce the maintenance costs of expiring resources.
       *
       * @description **Before you invoke this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS).**
       * - Make sure that your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. Invoking this operation for pay-as-you-go instances returns an error.
       * - Auto-renewal deduction occurs on the ninth day before the instance expires. Deduction starts to execute at 08:00:00 (UTC+8).
       * - If the auto-renewal deduction failed on the previous day, the system retries the deduction at the scheduled time on the next day until the deduction succeeds or the instance is locked after 9 days.
       * <props="china">
       * - If the purchase duration of a new instance is one week, the auto-renewal deduction is performed on the first day after the instance is created.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttribute(const Models::ModifyInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the billing method of ECS instances. Batch modification is supported.
       *
       * @description ### Before you begin
       * - Make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and the <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS).
       * - Make sure that the target instances are in the **Running** (`Running`) or **Stopped** (`Stopped`) state and that your account has no overdue payments.
       * - After the billing method is changed, automatic payment is enabled by default. Make sure that your account balance is sufficient. Otherwise, abnormal orders are generated, and you can only cancel the orders. If your account balance is insufficient, set the AutoPay parameter to `false`. In this case, unpaid orders are generated. You can log on to the [ECS console](https://ecs.console.aliyun.com/) to complete the payment.
       * ### Before you begin
       * - **Subscription to pay-as-you-go**:
       * <props="china">
       *     - When you transform a subscription instance to a pay-as-you-go instance, the new billing method overwrites the entire lifecycle of the instance. You receive a refund for the price difference. The refund is returned to your original payment method. Consumed coupons are not refunded.
       * <props="intl">
       *     - When you transform a subscription instance to a pay-as-you-go instance, the new billing method overwrites the entire lifecycle of the instance. You receive a refund for the price difference. The refund is returned to your original payment method. Consumed coupons are not refunded.
       *     - **Refund rules**: The refund amount that you can claim each month is limited and does not carry over to the next month. After the refund quota is exhausted, you must wait until the next month to switch the billing method. The refund quota consumed by each billing method change is calculated by using the following formula: **vCPUs × (Refund days × 24 ± Floating hours)**. For more information, see [Switch the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * - **Pay-as-you-go to subscription**:
       *     - All pay-as-you-go data disks attached to the instance can be transformed to subscription data disks at the same time.
       *     - If a release time is set for the pay-as-you-go instance, you cannot call this operation. For more information, see [Switch the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/49884.html).
       *     - If the instance is in economical mode, start the instance first.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method of ECS instances. Batch modification is supported.
       *
       * @description ### Before you begin
       * - Make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and the <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS).
       * - Make sure that the target instances are in the **Running** (`Running`) or **Stopped** (`Stopped`) state and that your account has no overdue payments.
       * - After the billing method is changed, automatic payment is enabled by default. Make sure that your account balance is sufficient. Otherwise, abnormal orders are generated, and you can only cancel the orders. If your account balance is insufficient, set the AutoPay parameter to `false`. In this case, unpaid orders are generated. You can log on to the [ECS console](https://ecs.console.aliyun.com/) to complete the payment.
       * ### Before you begin
       * - **Subscription to pay-as-you-go**:
       * <props="china">
       *     - When you transform a subscription instance to a pay-as-you-go instance, the new billing method overwrites the entire lifecycle of the instance. You receive a refund for the price difference. The refund is returned to your original payment method. Consumed coupons are not refunded.
       * <props="intl">
       *     - When you transform a subscription instance to a pay-as-you-go instance, the new billing method overwrites the entire lifecycle of the instance. You receive a refund for the price difference. The refund is returned to your original payment method. Consumed coupons are not refunded.
       *     - **Refund rules**: The refund amount that you can claim each month is limited and does not carry over to the next month. After the refund quota is exhausted, you must wait until the next month to switch the billing method. The refund quota consumed by each billing method change is calculated by using the following formula: **vCPUs × (Refund days × 24 ± Floating hours)**. For more information, see [Switch the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * - **Pay-as-you-go to subscription**:
       *     - All pay-as-you-go data disks attached to the instance can be transformed to subscription data disks at the same time.
       *     - If a release time is set for the pay-as-you-go instance, you cannot call this operation. For more information, see [Switch the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/49884.html).
       *     - If the instance is in economical mode, start the instance first.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the clock options of an instance as needed.
       *
       * @description When you call this operation, take note of the following items:
       * -  This is an asynchronous operation. After you call this operation, an asynchronous task ID is returned. You can query the asynchronous task result to determine whether the execution is complete.
       * -  To modify PtpStatus, the instance type must support the settings for this parameter. For information about supported instance types, call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation.
       *
       * @param request ModifyInstanceClockOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceClockOptionsResponse
       */
      Models::ModifyInstanceClockOptionsResponse modifyInstanceClockOptionsWithOptions(const Models::ModifyInstanceClockOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the clock options of an instance as needed.
       *
       * @description When you call this operation, take note of the following items:
       * -  This is an asynchronous operation. After you call this operation, an asynchronous task ID is returned. You can query the asynchronous task result to determine whether the execution is complete.
       * -  To modify PtpStatus, the instance type must support the settings for this parameter. For information about supported instance types, call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation.
       *
       * @param request ModifyInstanceClockOptionsRequest
       * @return ModifyInstanceClockOptionsResponse
       */
      Models::ModifyInstanceClockOptionsResponse modifyInstanceClockOptions(const Models::ModifyInstanceClockOptionsRequest &request);

      /**
       * @summary Changes the deployment set of an Elastic Compute Service (ECS) instance or migrates an ECS instance to a dedicated host. You can change the instance type of an ECS instance when you migrate the instance.
       *
       * @description Take note of the following items:
       * - The instance must be in the **Stopped** (Stopped) state. The instance is automatically restarted after it is migrated.
       * - The network type of the instance must be Virtual Private Cloud (VPC).
       * - The instance and the destination dedicated host to which to migrate the instance must belong to the same account and reside in the same region and zone.
       * - A pay-as-you-go instance can be migrated to a subscription dedicated host. A subscription instance can be migrated only between subscription dedicated hosts. The expiration date of the subscription instance cannot be later than that of the destination dedicated host.
       * - You can migrate only pay-as-you-go instances from a shared host to a dedicated host. You cannot migrate subscription instances or spot instances from a shared host to a dedicated host.
       * - You can redeploy an instance to a specific dedicated host cluster.
       *
       * @param request ModifyInstanceDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceDeploymentResponse
       */
      Models::ModifyInstanceDeploymentResponse modifyInstanceDeploymentWithOptions(const Models::ModifyInstanceDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the deployment set of an Elastic Compute Service (ECS) instance or migrates an ECS instance to a dedicated host. You can change the instance type of an ECS instance when you migrate the instance.
       *
       * @description Take note of the following items:
       * - The instance must be in the **Stopped** (Stopped) state. The instance is automatically restarted after it is migrated.
       * - The network type of the instance must be Virtual Private Cloud (VPC).
       * - The instance and the destination dedicated host to which to migrate the instance must belong to the same account and reside in the same region and zone.
       * - A pay-as-you-go instance can be migrated to a subscription dedicated host. A subscription instance can be migrated only between subscription dedicated hosts. The expiration date of the subscription instance cannot be later than that of the destination dedicated host.
       * - You can migrate only pay-as-you-go instances from a shared host to a dedicated host. You cannot migrate subscription instances or spot instances from a shared host to a dedicated host.
       * - You can redeploy an instance to a specific dedicated host cluster.
       *
       * @param request ModifyInstanceDeploymentRequest
       * @return ModifyInstanceDeploymentResponse
       */
      Models::ModifyInstanceDeploymentResponse modifyInstanceDeployment(const Models::ModifyInstanceDeploymentRequest &request);

      /**
       * @summary Modifies the maintenance attributes of an instance.
       *
       * @description Modifies the maintenance policy of an instance. The policy contains two maintenance properties:
       * - Maintenance time window: A time period that you specify. Maintenance is performed only within this period.
       * - Maintenance action: The action that you specify to handle instance downtime.
       *
       * @param request ModifyInstanceMaintenanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintenanceAttributesResponse
       */
      Models::ModifyInstanceMaintenanceAttributesResponse modifyInstanceMaintenanceAttributesWithOptions(const Models::ModifyInstanceMaintenanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance attributes of an instance.
       *
       * @description Modifies the maintenance policy of an instance. The policy contains two maintenance properties:
       * - Maintenance time window: A time period that you specify. Maintenance is performed only within this period.
       * - Maintenance action: The action that you specify to handle instance downtime.
       *
       * @param request ModifyInstanceMaintenanceAttributesRequest
       * @return ModifyInstanceMaintenanceAttributesResponse
       */
      Models::ModifyInstanceMaintenanceAttributesResponse modifyInstanceMaintenanceAttributes(const Models::ModifyInstanceMaintenanceAttributesRequest &request);

      /**
       * @summary Modifies the metadata access settings for an instance in a specified region, including whether to enable the metadata access channel and whether to enable the security hardening mode for metadata access.
       *
       * @param request ModifyInstanceMetadataOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMetadataOptionsResponse
       */
      Models::ModifyInstanceMetadataOptionsResponse modifyInstanceMetadataOptionsWithOptions(const Models::ModifyInstanceMetadataOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metadata access settings for an instance in a specified region, including whether to enable the metadata access channel and whether to enable the security hardening mode for metadata access.
       *
       * @param request ModifyInstanceMetadataOptionsRequest
       * @return ModifyInstanceMetadataOptionsResponse
       */
      Models::ModifyInstanceMetadataOptionsResponse modifyInstanceMetadataOptions(const Models::ModifyInstanceMetadataOptionsRequest &request);

      /**
       * @summary Modifies the network options of an instance.
       *
       * @description Take note of the following items when you invoke this operation:
       * -  This is an asynchronous operation. After you invoke this operation, an asynchronous task ID is returned. You can query the asynchronous task result to determine whether the operation has been executed.
       * -  Each call supports modifying only one property. To modify multiple properties, invoke this operation multiple times.
       * -  To modify BandwidthWeighting, the instance type must support settings for this parameter. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to check whether the current instance type supports bandwidth weighting and to query the supported bandwidth weight values.
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptionsWithOptions(const Models::ModifyInstanceNetworkOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network options of an instance.
       *
       * @description Take note of the following items when you invoke this operation:
       * -  This is an asynchronous operation. After you invoke this operation, an asynchronous task ID is returned. You can query the asynchronous task result to determine whether the operation has been executed.
       * -  Each call supports modifying only one property. To modify multiple properties, invoke this operation multiple times.
       * -  To modify BandwidthWeighting, the instance type must support settings for this parameter. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to check whether the current instance type supports bandwidth weighting and to query the supported bandwidth weight values.
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptions(const Models::ModifyInstanceNetworkOptionsRequest &request);

      /**
       * @summary Modifies the bandwidth configuration of an ECS instance, allocates an Internet IP address, or transforms the network billing method. Both upgrades and downgrades are supported.
       *
       * @description -  When you modify the bandwidth configuration of a subscription (PrePaid) instance and the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value, a public IP address is automatically assigned.
       * -  When you modify the bandwidth configuration of a pay-as-you-go (PostPaid) instance and the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value, a public IP address is not automatically assigned. You must set the `AllocatePublicIp` parameter to `true` to assign a public IP address.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *   
       * - Fees:
       *   
       *   - After the bandwidth is upgraded, fees are automatically deducted by default. Make sure that your payment method has a sufficient balance. Otherwise, an abnormal order is generated, and you can only void the order. If your account balance is insufficient, you can set the AutoPay parameter to false. A normal unpaid order is generated, and you can log on to the ECS console to complete the payment.
       *   - After the bandwidth is downgraded, the price difference is refunded to the original payment method. Vouchers that have been used are not refunded.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpecWithOptions(const Models::ModifyInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth configuration of an ECS instance, allocates an Internet IP address, or transforms the network billing method. Both upgrades and downgrades are supported.
       *
       * @description -  When you modify the bandwidth configuration of a subscription (PrePaid) instance and the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value, a public IP address is automatically assigned.
       * -  When you modify the bandwidth configuration of a pay-as-you-go (PostPaid) instance and the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value, a public IP address is not automatically assigned. You must set the `AllocatePublicIp` parameter to `true` to assign a public IP address.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *   
       * - Fees:
       *   
       *   - After the bandwidth is upgraded, fees are automatically deducted by default. Make sure that your payment method has a sufficient balance. Otherwise, an abnormal order is generated, and you can only void the order. If your account balance is insufficient, you can set the AutoPay parameter to false. A normal unpaid order is generated, and you can log on to the ECS console to complete the payment.
       *   - After the bandwidth is downgraded, the price difference is refunded to the original payment method. Vouchers that have been used are not refunded.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpec(const Models::ModifyInstanceNetworkSpecRequest &request);

      /**
       * @summary Modifies the instance type or public bandwidth of a pay-as-you-go ECS instance.
       *
       * @description <props="china">
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**
       * <props="intl">
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types to which the current instance can be changed.
       * **Precautions**
       * - The account must not have overdue payments.
       * > In a single region, the total peak public bandwidth billed on a pay-by-bandwidth basis for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the instance type or public bandwidth of a pay-as-you-go ECS instance.
       *
       * @description <props="china">
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**
       * <props="intl">
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types to which the current instance can be changed.
       * **Precautions**
       * - The account must not have overdue payments.
       * > In a single region, the total peak public bandwidth billed on a pay-by-bandwidth basis for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Modifies the VNC logon password of an ECS instance.
       *
       * @description - The password must be six characters in length and can contain only uppercase letters, lowercase letters, and digits. All three character types are required.
       * - After you modify the password:
       *     - For I/O optimized instances, the new password takes effect immediately without the need to restart the instance.
       *     - For non-I/O optimized instances, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the console or call [RebootInstance](https://help.aliyun.com/document_detail/25502.html) for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswdWithOptions(const Models::ModifyInstanceVncPasswdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the VNC logon password of an ECS instance.
       *
       * @description - The password must be six characters in length and can contain only uppercase letters, lowercase letters, and digits. All three character types are required.
       * - After you modify the password:
       *     - For I/O optimized instances, the new password takes effect immediately without the need to restart the instance.
       *     - For non-I/O optimized instances, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the console or call [RebootInstance](https://help.aliyun.com/document_detail/25502.html) for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswd(const Models::ModifyInstanceVncPasswdRequest &request);

      /**
       * @summary Modifies the VPC, private IP address, security group, or vSwitch of a VPC-type ECS instance in a virtual private cloud (VPC) network type.
       *
       * @description When you call this operation, the ECS instance must be in the **Stopped** state.
       * - When you modify the private IP address or vSwitch of an instance, take note of the following items:
       *     - A newly created ECS instance must be restarted before you can call this operation.
       *     - After a successful modification, the ECS instance must be restarted before you can call this operation again.
       * - When you modify the VPC of an instance, take note of the following items:
       *     - **Instance:**
       *         - Instance status: The instance cannot be locked, pending release, expired, in expiration recycling, or in overdue payment recycling. For more information, see [Instance lifetime](https://help.aliyun.com/document_detail/25380.html).
       *         - ECS instances that are associated with load balancing instances are not supported.
       *         - The instance cannot be in use by other cloud services. For example, the instance cannot be in migration, cannot have already initiated a VPC change, or cannot have its database managed by Data Transmission Service (DTS).
       *    
       *     - **Network:**
       *         - Instances configured with EIP in network interface controller (NIC) visible pattern or multi-EIP to NIC visible pattern are not supported.
       *         - Instances attached to a high availability virtual IP address (HaVip) are not supported.
       *         - Instances whose vSwitch is associated with a custom route table are not supported.
       *         - Instances with Global Accelerator (GA) enabled are not supported.
       *         - Instances attached to secondary Elastic Network Interfaces (ENIs) are not supported.
       *         - Instances that have been allocated IPv6 addresses are not supported.
       *         - Instances whose primary NIC has multiple IP addresses are not supported.
       *         - The specified vSwitch must belong to the destination VPC.
       *         - The zone of the vSwitch must remain the same before and after the modification.
       *         - If you specify a private IP for the primary NIC, the IP address must be active and within the CIDR block of the vSwitch. If you do not specify one, an IP address is randomly allocated. Make sure that the destination vSwitch has a sufficient available IP address count.
       *         - If you use a VPC shared by another account, make sure that the destination security group was created by your account in the shared VPC, not by the VPC owner\\"s account.
       *
       * @param request ModifyInstanceVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAttributeResponse
       */
      Models::ModifyInstanceVpcAttributeResponse modifyInstanceVpcAttributeWithOptions(const Models::ModifyInstanceVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the VPC, private IP address, security group, or vSwitch of a VPC-type ECS instance in a virtual private cloud (VPC) network type.
       *
       * @description When you call this operation, the ECS instance must be in the **Stopped** state.
       * - When you modify the private IP address or vSwitch of an instance, take note of the following items:
       *     - A newly created ECS instance must be restarted before you can call this operation.
       *     - After a successful modification, the ECS instance must be restarted before you can call this operation again.
       * - When you modify the VPC of an instance, take note of the following items:
       *     - **Instance:**
       *         - Instance status: The instance cannot be locked, pending release, expired, in expiration recycling, or in overdue payment recycling. For more information, see [Instance lifetime](https://help.aliyun.com/document_detail/25380.html).
       *         - ECS instances that are associated with load balancing instances are not supported.
       *         - The instance cannot be in use by other cloud services. For example, the instance cannot be in migration, cannot have already initiated a VPC change, or cannot have its database managed by Data Transmission Service (DTS).
       *    
       *     - **Network:**
       *         - Instances configured with EIP in network interface controller (NIC) visible pattern or multi-EIP to NIC visible pattern are not supported.
       *         - Instances attached to a high availability virtual IP address (HaVip) are not supported.
       *         - Instances whose vSwitch is associated with a custom route table are not supported.
       *         - Instances with Global Accelerator (GA) enabled are not supported.
       *         - Instances attached to secondary Elastic Network Interfaces (ENIs) are not supported.
       *         - Instances that have been allocated IPv6 addresses are not supported.
       *         - Instances whose primary NIC has multiple IP addresses are not supported.
       *         - The specified vSwitch must belong to the destination VPC.
       *         - The zone of the vSwitch must remain the same before and after the modification.
       *         - If you specify a private IP for the primary NIC, the IP address must be active and within the CIDR block of the vSwitch. If you do not specify one, an IP address is randomly allocated. Make sure that the destination vSwitch has a sufficient available IP address count.
       *         - If you use a VPC shared by another account, make sure that the destination security group was created by your account in the shared VPC, not by the VPC owner\\"s account.
       *
       * @param request ModifyInstanceVpcAttributeRequest
       * @return ModifyInstanceVpcAttributeResponse
       */
      Models::ModifyInstanceVpcAttributeResponse modifyInstanceVpcAttribute(const Models::ModifyInstanceVpcAttributeRequest &request);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled task, including the command content, scheduled execution mode, and adding ECS instances or managed instances to the task.
       *
       * @description - You can modify tasks with the following execution modes (see the `RepeatMode` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *     - Period: periodic execution.
       *     - NextRebootOnly: automatically executes the command the next time the instance starts.
       *     - EveryReboot: automatically executes the command every time the instance starts.
       * - You can modify tasks in the following states (see the `InvocationStatus` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *     - Pending: The system is verifying or sending the command. If the command execution state on at least one instance is Pending, the overall execution state is Pending.
       *     - Running: The command is running on the instance. If the command execution state on at least one instance is Running, the overall execution state is Running.
       *     - Scheduled: The scheduled command has been sent and is waiting to run. If the command execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
       *     - Stopping: The task is being stopped. If the command execution state on at least one instance is Stopping, the overall execution state is Stopping.
       * - Before modifying the scheduled task execution information (including command content, custom parameters, and execution frequency), the Cloud Assistant Agent version on the ECS instances or managed instances that have already executed the task must be later than the following versions:
       *     - Linux: 2.2.3.541
       *     - Windows: 2.1.3.541
       *     - If the call result returns the `InvalidOperation.CloudAssistantVersionUnsupported` error code, update the Cloud Assistant Agent to the latest version.
       * - When you execute a Cloud Assistant common command, you cannot modify the command content `CommandContent`.
       * - When you modify the command content `CommandContent`, and the task was created by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) with `KeepCommand` set to `true`, a new command is created and retained permanently, which counts toward your Cloud Assistant command quota. You can retain up to 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       *
       * @param tmpReq ModifyInvocationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInvocationAttributeResponse
       */
      Models::ModifyInvocationAttributeResponse modifyInvocationAttributeWithOptions(const Models::ModifyInvocationAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled task, including the command content, scheduled execution mode, and adding ECS instances or managed instances to the task.
       *
       * @description - You can modify tasks with the following execution modes (see the `RepeatMode` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *     - Period: periodic execution.
       *     - NextRebootOnly: automatically executes the command the next time the instance starts.
       *     - EveryReboot: automatically executes the command every time the instance starts.
       * - You can modify tasks in the following states (see the `InvocationStatus` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *     - Pending: The system is verifying or sending the command. If the command execution state on at least one instance is Pending, the overall execution state is Pending.
       *     - Running: The command is running on the instance. If the command execution state on at least one instance is Running, the overall execution state is Running.
       *     - Scheduled: The scheduled command has been sent and is waiting to run. If the command execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
       *     - Stopping: The task is being stopped. If the command execution state on at least one instance is Stopping, the overall execution state is Stopping.
       * - Before modifying the scheduled task execution information (including command content, custom parameters, and execution frequency), the Cloud Assistant Agent version on the ECS instances or managed instances that have already executed the task must be later than the following versions:
       *     - Linux: 2.2.3.541
       *     - Windows: 2.1.3.541
       *     - If the call result returns the `InvalidOperation.CloudAssistantVersionUnsupported` error code, update the Cloud Assistant Agent to the latest version.
       * - When you execute a Cloud Assistant common command, you cannot modify the command content `CommandContent`.
       * - When you modify the command content `CommandContent`, and the task was created by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) with `KeepCommand` set to `true`, a new command is created and retained permanently, which counts toward your Cloud Assistant command quota. You can retain up to 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       *
       * @param request ModifyInvocationAttributeRequest
       * @return ModifyInvocationAttributeResponse
       */
      Models::ModifyInvocationAttributeResponse modifyInvocationAttribute(const Models::ModifyInvocationAttributeRequest &request);

      /**
       * @summary Calls the ModifyLaunchTemplateDefaultVersion operation to switch the default version of a launch template by specifying the DefaultVersionNumber parameter. If you do not specify a template version number when you create an instance by calling the RunInstances operation, the default version is used.
       *
       * @param request ModifyLaunchTemplateDefaultVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLaunchTemplateDefaultVersionResponse
       */
      Models::ModifyLaunchTemplateDefaultVersionResponse modifyLaunchTemplateDefaultVersionWithOptions(const Models::ModifyLaunchTemplateDefaultVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyLaunchTemplateDefaultVersion operation to switch the default version of a launch template by specifying the DefaultVersionNumber parameter. If you do not specify a template version number when you create an instance by calling the RunInstances operation, the default version is used.
       *
       * @param request ModifyLaunchTemplateDefaultVersionRequest
       * @return ModifyLaunchTemplateDefaultVersionResponse
       */
      Models::ModifyLaunchTemplateDefaultVersionResponse modifyLaunchTemplateDefaultVersion(const Models::ModifyLaunchTemplateDefaultVersionRequest &request);

      /**
       * @summary Modifies the information of a managed instance.
       *
       * @description ## Operation description
       * Currently, the ModifyManagedInstance operation only supports modifying the name of a managed instance.
       *
       * @param request ModifyManagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyManagedInstanceResponse
       */
      Models::ModifyManagedInstanceResponse modifyManagedInstanceWithOptions(const Models::ModifyManagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a managed instance.
       *
       * @description ## Operation description
       * Currently, the ModifyManagedInstance operation only supports modifying the name of a managed instance.
       *
       * @param request ModifyManagedInstanceRequest
       * @return ModifyManagedInstanceResponse
       */
      Models::ModifyManagedInstanceResponse modifyManagedInstance(const Models::ModifyManagedInstanceRequest &request);

      /**
       * @summary Modifies the attributes of an Elastic Network Interface (ENI), such as the queue number, associated security groups, queue depth, communication mode, and whether to retain the ENI when the associated instance is released.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttributeWithOptions(const Models::ModifyNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an Elastic Network Interface (ENI), such as the queue number, associated security groups, queue depth, communication mode, and whether to retain the ENI when the associated instance is released.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttribute(const Models::ModifyNetworkInterfaceAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyPhysicalConnectionAttribute is deprecated, please use Vpc::2016-04-28::ModifyPhysicalConnectionAttribute instead.
       *
       * @summary Modifies the attributes of a physical connection.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttributeWithOptions(const Models::ModifyPhysicalConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPhysicalConnectionAttribute is deprecated, please use Vpc::2016-04-28::ModifyPhysicalConnectionAttribute instead.
       *
       * @summary Modifies the attributes of a physical connection.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttribute(const Models::ModifyPhysicalConnectionAttributeRequest &request);

      /**
       * @summary Updates an O&M window.
       *
       * @description Modifies the attributes of an O&M window. When the TargetResource parameter of an O&M window is set to associate ECS instances and an underlying hardware risk is detected that requires scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter of the O&M window. When the execution time of an O&M event is reached, the platform automatically performs the corresponding O&M operation based on the type of the O&M event.
       *
       * @param tmpReq ModifyPlanMaintenanceWindowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPlanMaintenanceWindowResponse
       */
      Models::ModifyPlanMaintenanceWindowResponse modifyPlanMaintenanceWindowWithOptions(const Models::ModifyPlanMaintenanceWindowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an O&M window.
       *
       * @description Modifies the attributes of an O&M window. When the TargetResource parameter of an O&M window is set to associate ECS instances and an underlying hardware risk is detected that requires scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter of the O&M window. When the execution time of an O&M event is reached, the platform automatically performs the corresponding O&M operation based on the type of the O&M event.
       *
       * @param request ModifyPlanMaintenanceWindowRequest
       * @return ModifyPlanMaintenanceWindowResponse
       */
      Models::ModifyPlanMaintenanceWindowResponse modifyPlanMaintenanceWindow(const Models::ModifyPlanMaintenanceWindowRequest &request);

      /**
       * @summary Modifies the name and entries of a specified port range list. You can add, modify, and delete entries.
       *
       * @param request ModifyPortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortRangeListResponse
       */
      Models::ModifyPortRangeListResponse modifyPortRangeListWithOptions(const Models::ModifyPortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and entries of a specified port range list. You can add, modify, and delete entries.
       *
       * @param request ModifyPortRangeListRequest
       * @return ModifyPortRangeListResponse
       */
      Models::ModifyPortRangeListResponse modifyPortRangeList(const Models::ModifyPortRangeListRequest &request);

      /**
       * @summary Modifies the name, description, and other attributes of a specified prefix list, and supports adding, modifying, and deleting entries.
       *
       * @description ## Operation description
       * - The specified Classless Inter-Domain Routing (CIDR) block must be in standard form. For example, 10.0.0.0/8 is a valid CIDR block, whereas 10.0.0.1/8 is a fault form. For more information, see [What is CIDR?](~~40637#section-jua-0tj-q5m~~).
       * - When you add or delete entries, do not specify duplicate CIDR blocks. Examples:
       *     - For IPv4 CIDR blocks: You cannot specify two entries that both have the CIDR block 10.0.0.0/8. You cannot specify two entries whose CIDR blocks are 10.0.0.1/32 and 10.0.0.1 respectively because these two CIDR blocks are duplicates.
       *     - For IPv6 CIDR blocks: You cannot specify two entries whose CIDR blocks are 2001:fd01:0:0:0:0:0:0/32 and 2001:fd01::/32 respectively because these two CIDR blocks are duplicates.
       * - The CIDR blocks of entries to be added cannot be the same as those of entries to be deleted. For example, when you add an entry whose CIDR block is 10.0.0.0/8, the entries to be deleted cannot contain the CIDR block 10.0.0.0/8.
       * - To modify the description of an entry, specify the CIDR block of the entry (`AddEntry.N.Cidr`) and the new description (`AddEntry.N.Description`).
       *
       * @param request ModifyPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixListWithOptions(const Models::ModifyPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and other attributes of a specified prefix list, and supports adding, modifying, and deleting entries.
       *
       * @description ## Operation description
       * - The specified Classless Inter-Domain Routing (CIDR) block must be in standard form. For example, 10.0.0.0/8 is a valid CIDR block, whereas 10.0.0.1/8 is a fault form. For more information, see [What is CIDR?](~~40637#section-jua-0tj-q5m~~).
       * - When you add or delete entries, do not specify duplicate CIDR blocks. Examples:
       *     - For IPv4 CIDR blocks: You cannot specify two entries that both have the CIDR block 10.0.0.0/8. You cannot specify two entries whose CIDR blocks are 10.0.0.1/32 and 10.0.0.1 respectively because these two CIDR blocks are duplicates.
       *     - For IPv6 CIDR blocks: You cannot specify two entries whose CIDR blocks are 2001:fd01:0:0:0:0:0:0/32 and 2001:fd01::/32 respectively because these two CIDR blocks are duplicates.
       * - The CIDR blocks of entries to be added cannot be the same as those of entries to be deleted. For example, when you add an entry whose CIDR block is 10.0.0.0/8, the entries to be deleted cannot contain the CIDR block 10.0.0.0/8.
       * - To modify the description of an entry, specify the CIDR block of the entry (`AddEntry.N.Cidr`) and the new description (`AddEntry.N.Description`).
       *
       * @param request ModifyPrefixListRequest
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixList(const Models::ModifyPrefixListRequest &request);

      /**
       * @summary Modifies the instance type of a subscription ECS instance. You can upgrade or downgrade the instance type. The modified instance type takes effect for the entire lifecycle of the instance.
       *
       * @description <props="china">
       * **Before you use this operation, make sure that you fully understand the billing methods, [pricing](https://www.aliyun.com/price/product#/ecs/detail), and [refund rules for specification downgrades](https://help.aliyun.com/document_detail/116043.html) of ECS.**
       * <props="intl">
       * **Before you use this operation, make sure that you fully understand the billing methods, [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [refund rules for specification downgrades](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * This is an asynchronous operation. The configuration change is complete after approximately 5 to 10 seconds. Before you upgrade or downgrade ECS instance type of a subscription ECS instance, you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/2679954.html) to query ECS instance types to which the current instance can be changed.
       * **Precautions**
       *   - Upgrade the instance type:
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the instance type of a subscription ECS instance. You can upgrade or downgrade the instance type. The modified instance type takes effect for the entire lifecycle of the instance.
       *
       * @description <props="china">
       * **Before you use this operation, make sure that you fully understand the billing methods, [pricing](https://www.aliyun.com/price/product#/ecs/detail), and [refund rules for specification downgrades](https://help.aliyun.com/document_detail/116043.html) of ECS.**
       * <props="intl">
       * **Before you use this operation, make sure that you fully understand the billing methods, [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [refund rules for specification downgrades](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * This is an asynchronous operation. The configuration change is complete after approximately 5 to 10 seconds. Before you upgrade or downgrade ECS instance type of a subscription ECS instance, you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/2679954.html) to query ECS instance types to which the current instance can be changed.
       * **Precautions**
       *   - Upgrade the instance type:
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @summary Modifies the attributes of a reserved instance, including its name and description.
       *
       * @param request ModifyReservedInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReservedInstanceAttributeResponse
       */
      Models::ModifyReservedInstanceAttributeResponse modifyReservedInstanceAttributeWithOptions(const Models::ModifyReservedInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a reserved instance, including its name and description.
       *
       * @param request ModifyReservedInstanceAttributeRequest
       * @return ModifyReservedInstanceAttributeResponse
       */
      Models::ModifyReservedInstanceAttributeResponse modifyReservedInstanceAttribute(const Models::ModifyReservedInstanceAttributeRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of one or more reserved instances, allowing you to cancel or disable auto-renewal.
       *
       * @param request ModifyReservedInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReservedInstanceAutoRenewAttributeResponse
       */
      Models::ModifyReservedInstanceAutoRenewAttributeResponse modifyReservedInstanceAutoRenewAttributeWithOptions(const Models::ModifyReservedInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of one or more reserved instances, allowing you to cancel or disable auto-renewal.
       *
       * @param request ModifyReservedInstanceAutoRenewAttributeRequest
       * @return ModifyReservedInstanceAutoRenewAttributeResponse
       */
      Models::ModifyReservedInstanceAutoRenewAttributeResponse modifyReservedInstanceAutoRenewAttribute(const Models::ModifyReservedInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Splits, merges, or changes the scope of reserved instances by modifying configurations such as instance type, quantity, and zone.
       *
       * @description This is an asynchronous operation. After a successful call, the IDs of the new reserved instances are returned. The original reserved instances enter the `Updating` state and eventually become `Expired`. At the same time, new reserved instances in the Creating state are generated and eventually become Active. You can call [DescribeReservedInstances](https://help.aliyun.com/document_detail/2679781.html) to query the status.
       * - Reserved instances can be modified only when they are in the **Active** state.
       * - Ensure that the [normalization factor](~~140660#2742f3844abzz~~) remains unchanged before and after the modification. Otherwise, the request fails.
       * - Splitting, merging, and scope changes of reserved instances cannot be performed simultaneously.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## Request examples
       * - **Split**: Split a reserved instance in the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 2 into two reserved instances with instance type ecs.g5.large and a quantity of 1 each.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], // ID of the reserved instance to split
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName1", // Name of the new reserved instance
       *     "InstanceType":"ecs.g5.large", // Set the new instance type
       *     "Scope":"Region", // The scope of the reserved instance cannot be changed
       *     "InstanceAmount":1 // The reserved instance can match 1 pay-as-you-go instance of the same type
       *   },
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName2",
       *     "InstanceType":"ecs.g5.large",
       *     "Scope":"Region",
       *     "InstanceAmount":1
       *   }
       * ]
       * ```
       * - **Merge**: Merge two reserved instances in Zone H of the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 4 into one reserved instance with instance type ecs.g5.4xlarge and a quantity of 2.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], // IDs of the reserved instances to merge
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", // Name of the new reserved instance
       *     "InstanceType":"ecs.g5.4xlarge", // Set the new instance type
       *     "Scope":"Zone", // The scope of the reserved instance cannot be changed
       *     "ZoneId":"ap-southeast-1a", //
       *     "InstanceAmount":2 // The reserved instance can match 2 pay-as-you-go instances of the same type
       *   }
       * ]
       * ```
       * - **Change scope**: Change a reserved instance in Zone H of the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 6 to a region-level reserved instance in the China (Hangzhou) region with instance type ecs.g5.2xlarge and a quantity of 3.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], // ID of the reserved instance whose scope you want to change
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", // Name of the reserved instance after the scope change
       *     "InstanceType":"ecs.g5.2xlarge", // Set the new instance type
       *     "Scope":"Region", // The scope of the reserved instance after the change
       *     "InstanceAmount":3 // The reserved instance can match 3 pay-as-you-go instances of the same type
       *   }
       * ]
       * ```
       *
       * @param request ModifyReservedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReservedInstancesResponse
       */
      Models::ModifyReservedInstancesResponse modifyReservedInstancesWithOptions(const Models::ModifyReservedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Splits, merges, or changes the scope of reserved instances by modifying configurations such as instance type, quantity, and zone.
       *
       * @description This is an asynchronous operation. After a successful call, the IDs of the new reserved instances are returned. The original reserved instances enter the `Updating` state and eventually become `Expired`. At the same time, new reserved instances in the Creating state are generated and eventually become Active. You can call [DescribeReservedInstances](https://help.aliyun.com/document_detail/2679781.html) to query the status.
       * - Reserved instances can be modified only when they are in the **Active** state.
       * - Ensure that the [normalization factor](~~140660#2742f3844abzz~~) remains unchanged before and after the modification. Otherwise, the request fails.
       * - Splitting, merging, and scope changes of reserved instances cannot be performed simultaneously.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## Request examples
       * - **Split**: Split a reserved instance in the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 2 into two reserved instances with instance type ecs.g5.large and a quantity of 1 each.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], // ID of the reserved instance to split
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName1", // Name of the new reserved instance
       *     "InstanceType":"ecs.g5.large", // Set the new instance type
       *     "Scope":"Region", // The scope of the reserved instance cannot be changed
       *     "InstanceAmount":1 // The reserved instance can match 1 pay-as-you-go instance of the same type
       *   },
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName2",
       *     "InstanceType":"ecs.g5.large",
       *     "Scope":"Region",
       *     "InstanceAmount":1
       *   }
       * ]
       * ```
       * - **Merge**: Merge two reserved instances in Zone H of the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 4 into one reserved instance with instance type ecs.g5.4xlarge and a quantity of 2.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], // IDs of the reserved instances to merge
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", // Name of the new reserved instance
       *     "InstanceType":"ecs.g5.4xlarge", // Set the new instance type
       *     "Scope":"Zone", // The scope of the reserved instance cannot be changed
       *     "ZoneId":"ap-southeast-1a", //
       *     "InstanceAmount":2 // The reserved instance can match 2 pay-as-you-go instances of the same type
       *   }
       * ]
       * ```
       * - **Change scope**: Change a reserved instance in Zone H of the China (Hangzhou) region with instance type ecs.g5.xlarge and a quantity of 6 to a region-level reserved instance in the China (Hangzhou) region with instance type ecs.g5.2xlarge and a quantity of 3.
       * ```
       * "RegionId":"ap-southeast-1", // Set the region
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], // ID of the reserved instance whose scope you want to change
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", // Name of the reserved instance after the scope change
       *     "InstanceType":"ecs.g5.2xlarge", // Set the new instance type
       *     "Scope":"Region", // The scope of the reserved instance after the change
       *     "InstanceAmount":3 // The reserved instance can match 3 pay-as-you-go instances of the same type
       *   }
       * ]
       * ```
       *
       * @param request ModifyReservedInstancesRequest
       * @return ModifyReservedInstancesResponse
       */
      Models::ModifyReservedInstancesResponse modifyReservedInstances(const Models::ModifyReservedInstancesRequest &request);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceAttribute is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceAttribute instead.
       *
       * @summary Modifies the attributes of a router interface.
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttributeWithOptions(const Models::ModifyRouterInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceAttribute is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceAttribute instead.
       *
       * @summary Modifies the attributes of a router interface.
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttribute(const Models::ModifyRouterInterfaceAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceSpec is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceSpec instead.
       *
       * @summary Modifies the specification of a router interface.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpecWithOptions(const Models::ModifyRouterInterfaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceSpec is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceSpec instead.
       *
       * @summary Modifies the specification of a router interface.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpec(const Models::ModifyRouterInterfaceSpecRequest &request);

      /**
       * @summary Modifies the name or description of a specified security group.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttributeWithOptions(const Models::ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a specified security group.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttribute(const Models::ModifySecurityGroupAttributeRequest &request);

      /**
       * @summary Modifies an outbound security group rule.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, take note of the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field value from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
       *
       * @param request ModifySecurityGroupEgressRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupEgressRuleResponse
       */
      Models::ModifySecurityGroupEgressRuleResponse modifySecurityGroupEgressRuleWithOptions(const Models::ModifySecurityGroupEgressRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an outbound security group rule.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, take note of the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field value from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
       *
       * @param request ModifySecurityGroupEgressRuleRequest
       * @return ModifySecurityGroupEgressRuleResponse
       */
      Models::ModifySecurityGroupEgressRuleResponse modifySecurityGroupEgressRule(const Models::ModifySecurityGroupEgressRuleRequest &request);

      /**
       * @summary Modifies the intra-group connectivity policy of a basic security group.
       *
       * @description -  Advanced security groups do not support modifying the intra-group connectivity policy. The default policy is **internal isolation**.
       * -  You can call [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) to query the current intra-group connectivity policy of a security group.
       * -  If the intra-group connectivity policy of a security group is **intra-group connectivity**, other custom access rules are ignored, and all instances in custom security group are connected over the internal network by default.  
       * -  If the intra-group connectivity policy of a security group is **internal isolation**, all instances in custom security group are disconnected over the internal network by default when no other access rules are added. However, you can customize security group rules to change the internal network status. For example, you can call [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) to allow two ECS instances in custom security group to communicate with each other over the internal network.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicyWithOptions(const Models::ModifySecurityGroupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intra-group connectivity policy of a basic security group.
       *
       * @description -  Advanced security groups do not support modifying the intra-group connectivity policy. The default policy is **internal isolation**.
       * -  You can call [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) to query the current intra-group connectivity policy of a security group.
       * -  If the intra-group connectivity policy of a security group is **intra-group connectivity**, other custom access rules are ignored, and all instances in custom security group are connected over the internal network by default.  
       * -  If the intra-group connectivity policy of a security group is **internal isolation**, all instances in custom security group are disconnected over the internal network by default when no other access rules are added. However, you can customize security group rules to change the internal network status. For example, you can call [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) to allow two ECS instances in custom security group to communicate with each other over the internal network.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicy(const Models::ModifySecurityGroupPolicyRequest &request);

      /**
       * @summary Modifies an inbound security group rule of a specified security group.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, note the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
       *
       * @param request ModifySecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupRuleResponse
       */
      Models::ModifySecurityGroupRuleResponse modifySecurityGroupRuleWithOptions(const Models::ModifySecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an inbound security group rule of a specified security group.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, note the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
       *
       * @param request ModifySecurityGroupRuleRequest
       * @return ModifySecurityGroupRuleResponse
       */
      Models::ModifySecurityGroupRuleResponse modifySecurityGroupRule(const Models::ModifySecurityGroupRuleRequest &request);

      /**
       * @summary Modifies the name, description, or retention period of a snapshot.
       *
       * @param request ModifySnapshotAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotAttributeResponse
       */
      Models::ModifySnapshotAttributeResponse modifySnapshotAttributeWithOptions(const Models::ModifySnapshotAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, or retention period of a snapshot.
       *
       * @param request ModifySnapshotAttributeRequest
       * @return ModifySnapshotAttributeResponse
       */
      Models::ModifySnapshotAttributeResponse modifySnapshotAttribute(const Models::ModifySnapshotAttributeRequest &request);

      /**
       * @summary Modifies the type of a snapshot. You can call this operation to convert a standard snapshot to an archived snapshot.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product?#/disk/detail/disk) of archived snapshots.**
       * - Archived snapshots cannot be reverted to standard snapshots.
       * - A standard snapshot can be archived only after it has been retained for at least 14 days since its creation.
       * - Shared snapshots, snapshots managed by cloud services, and snapshots in CloudBox cannot be archived.
       *
       * @param request ModifySnapshotCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotCategoryResponse
       */
      Models::ModifySnapshotCategoryResponse modifySnapshotCategoryWithOptions(const Models::ModifySnapshotCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the type of a snapshot. You can call this operation to convert a standard snapshot to an archived snapshot.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product?#/disk/detail/disk) of archived snapshots.**
       * - Archived snapshots cannot be reverted to standard snapshots.
       * - A standard snapshot can be archived only after it has been retained for at least 14 days since its creation.
       * - Shared snapshots, snapshots managed by cloud services, and snapshots in CloudBox cannot be archived.
       *
       * @param request ModifySnapshotCategoryRequest
       * @return ModifySnapshotCategoryResponse
       */
      Models::ModifySnapshotCategoryResponse modifySnapshotCategory(const Models::ModifySnapshotCategoryRequest &request);

      /**
       * @summary Modifies the name and description of a snapshot-consistent group.
       *
       * @param request ModifySnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotGroupResponse
       */
      Models::ModifySnapshotGroupResponse modifySnapshotGroupWithOptions(const Models::ModifySnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a snapshot-consistent group.
       *
       * @param request ModifySnapshotGroupRequest
       * @return ModifySnapshotGroupResponse
       */
      Models::ModifySnapshotGroupResponse modifySnapshotGroup(const Models::ModifySnapshotGroupRequest &request);

      /**
       * @summary Modifies the name or description of a storage capacity unit (SCU).
       *
       * @param request ModifyStorageCapacityUnitAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageCapacityUnitAttributeResponse
       */
      Models::ModifyStorageCapacityUnitAttributeResponse modifyStorageCapacityUnitAttributeWithOptions(const Models::ModifyStorageCapacityUnitAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a storage capacity unit (SCU).
       *
       * @param request ModifyStorageCapacityUnitAttributeRequest
       * @return ModifyStorageCapacityUnitAttributeResponse
       */
      Models::ModifyStorageCapacityUnitAttributeResponse modifyStorageCapacityUnitAttribute(const Models::ModifyStorageCapacityUnitAttributeRequest &request);

      /**
       * @summary 修改指定的存储集信息
       *
       * @param request ModifyStorageSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageSetAttributeResponse
       */
      Models::ModifyStorageSetAttributeResponse modifyStorageSetAttributeWithOptions(const Models::ModifyStorageSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改指定的存储集信息
       *
       * @param request ModifyStorageSetAttributeRequest
       * @return ModifyStorageSetAttributeResponse
       */
      Models::ModifyStorageSetAttributeResponse modifyStorageSetAttribute(const Models::ModifyStorageSetAttributeRequest &request);

      /**
       * @summary Modifies the properties of a scheduled O&M event. Currently, you can modify the planned execute time of a scheduled O&M event.
       *
       * @description ## Operation description
       * - You can modify only scheduled O&M events that are in the Scheduled state.
       * - The value of NotBefore cannot be earlier than the current time.
       * - The value of NotBefore cannot be later than the initial planned execution time that was set when the event was created.
       *
       * @param request ModifySystemEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySystemEventAttributeResponse
       */
      Models::ModifySystemEventAttributeResponse modifySystemEventAttributeWithOptions(const Models::ModifySystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of a scheduled O&M event. Currently, you can modify the planned execute time of a scheduled O&M event.
       *
       * @description ## Operation description
       * - You can modify only scheduled O&M events that are in the Scheduled state.
       * - The value of NotBefore cannot be earlier than the current time.
       * - The value of NotBefore cannot be later than the initial planned execution time that was set when the event was created.
       *
       * @param request ModifySystemEventAttributeRequest
       * @return ModifySystemEventAttributeResponse
       */
      Models::ModifySystemEventAttributeResponse modifySystemEventAttribute(const Models::ModifySystemEventAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary Sets user-level default properties.
       *
       * @param request ModifyUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserBusinessBehaviorResponse
       */
      Models::ModifyUserBusinessBehaviorResponse modifyUserBusinessBehaviorWithOptions(const Models::ModifyUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary Sets user-level default properties.
       *
       * @param request ModifyUserBusinessBehaviorRequest
       * @return ModifyUserBusinessBehaviorResponse
       */
      Models::ModifyUserBusinessBehaviorResponse modifyUserBusinessBehavior(const Models::ModifyUserBusinessBehaviorRequest &request);

      /**
       * @deprecated OpenAPI ModifyVRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVRouterAttribute instead.
       *
       * @summary ModifyVRouterAttribute
       *
       * @param request ModifyVRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttributeWithOptions(const Models::ModifyVRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVRouterAttribute instead.
       *
       * @summary ModifyVRouterAttribute
       *
       * @param request ModifyVRouterAttributeRequest
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttribute(const Models::ModifyVRouterAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyVSwitchAttribute is deprecated, please use Vpc::2016-04-28::ModifyVSwitchAttribute instead.
       *
       * @summary ModifyVSwitchAttribute.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVSwitchAttribute is deprecated, please use Vpc::2016-04-28::ModifyVSwitchAttribute instead.
       *
       * @summary ModifyVSwitchAttribute.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyVirtualBorderRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVirtualBorderRouterAttribute instead.
       *
       * @summary ModifyVirtualBorderRouterAttribute.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttributeWithOptions(const Models::ModifyVirtualBorderRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVirtualBorderRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVirtualBorderRouterAttribute instead.
       *
       * @summary ModifyVirtualBorderRouterAttribute.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttribute(const Models::ModifyVirtualBorderRouterAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyVpcAttribute is deprecated, please use Vpc::2016-04-28::ModifyVpcAttribute instead.
       *
       * @summary Modifies VPC attributes, such as its name and cidr block.
       *
       * @param request ModifyVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttributeWithOptions(const Models::ModifyVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVpcAttribute is deprecated, please use Vpc::2016-04-28::ModifyVpcAttribute instead.
       *
       * @summary Modifies VPC attributes, such as its name and cidr block.
       *
       * @param request ModifyVpcAttributeRequest
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttribute(const Models::ModifyVpcAttributeRequest &request);

      /**
       * @summary Activates the snapshot service.
       *
       * @param request OpenSnapshotServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenSnapshotServiceResponse
       */
      Models::OpenSnapshotServiceResponse openSnapshotServiceWithOptions(const Models::OpenSnapshotServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the snapshot service.
       *
       * @param request OpenSnapshotServiceRequest
       * @return OpenSnapshotServiceResponse
       */
      Models::OpenSnapshotServiceResponse openSnapshotService(const Models::OpenSnapshotServiceRequest &request);

      /**
       * @summary Purchases an elastic capacity reservation service that is ready but not yet activated.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh?spm=5176.28117011.nav-v2-dropdown-language.exp-location-zh.9ae4165bF98IHz&_p_lc=1) of elastic capacity reservations before you call this operation.
       * Before you purchase an elastic capacity reservation service, you can call [DescribeElasticityAssurances](https://help.aliyun.com/document_detail/2679748.html) to query available elastic capacity reservation services.
       *
       * @param request PurchaseElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseElasticityAssuranceResponse
       */
      Models::PurchaseElasticityAssuranceResponse purchaseElasticityAssuranceWithOptions(const Models::PurchaseElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases an elastic capacity reservation service that is ready but not yet activated.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh?spm=5176.28117011.nav-v2-dropdown-language.exp-location-zh.9ae4165bF98IHz&_p_lc=1) of elastic capacity reservations before you call this operation.
       * Before you purchase an elastic capacity reservation service, you can call [DescribeElasticityAssurances](https://help.aliyun.com/document_detail/2679748.html) to query available elastic capacity reservation services.
       *
       * @param request PurchaseElasticityAssuranceRequest
       * @return PurchaseElasticityAssuranceResponse
       */
      Models::PurchaseElasticityAssuranceResponse purchaseElasticityAssurance(const Models::PurchaseElasticityAssuranceRequest &request);

      /**
       * @summary Purchases a reserved instance to offset bills of pay-as-you-go instances that match the specified instance type at the regional or zonal level.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of reserved instances.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Before you call this operation, make sure that you fully understand the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * - You can hold up to 20 regional reserved instances across all regions.
       * - You can hold up to 20 zonal reserved instances in each zone.
       * ## Request examples
       * - Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset bills of three pay-as-you-go instances of the ecs.g5.large instance type that run Linux.
       * ```
       * "RegionId":"cn-hangzhou", // Set the region to China (Hangzhou).
       * "InstanceType":"ecs.g5.large", // Set the instance type.
       * "Scope":"Region", // Set the scope of the reserved instance to regional.
       * "InstanceAmount":3, // The reserved instance can match three pay-as-you-go instances of the same instance type.
       * "OfferingType":"All Upfront", // Default value. The payment type is all upfront.
       * "Platform":"Linux", // The operating system type of the image used by the instance is Linux or Unix-like.
       * "Period":1, // The term of the reserved instance is one year.
       * "PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       * - Purchase a two-year zonal reserved instance in Zone H of the China (Hangzhou) region to offset bills of five pay-as-you-go instances of the ecs.g5.large instance type that run Windows.
       * ```
       * "RegionId":"cn-hangzhou",
       * "ZoneId":"cn-hangzhou-h", // Set the zone to Zone H.
       * "InstanceType":"ecs.g5.large",
       * "Scope":"Zone", // Set the scope of the reserved instance to zonal.
       * "InstanceAmount":5, // The reserved instance can match five pay-as-you-go instances of the same instance type.
       * "OfferingType":"All Upfront",
       * "Platform":"Windows", // The operating system type of the image used by the instance is Windows.
       * "Period":2, // The term of the reserved instance is two years.
       * "PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       *
       * @param request PurchaseReservedInstancesOfferingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseReservedInstancesOfferingResponse
       */
      Models::PurchaseReservedInstancesOfferingResponse purchaseReservedInstancesOfferingWithOptions(const Models::PurchaseReservedInstancesOfferingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a reserved instance to offset bills of pay-as-you-go instances that match the specified instance type at the regional or zonal level.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of reserved instances.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Before you call this operation, make sure that you fully understand the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * - You can hold up to 20 regional reserved instances across all regions.
       * - You can hold up to 20 zonal reserved instances in each zone.
       * ## Request examples
       * - Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset bills of three pay-as-you-go instances of the ecs.g5.large instance type that run Linux.
       * ```
       * "RegionId":"cn-hangzhou", // Set the region to China (Hangzhou).
       * "InstanceType":"ecs.g5.large", // Set the instance type.
       * "Scope":"Region", // Set the scope of the reserved instance to regional.
       * "InstanceAmount":3, // The reserved instance can match three pay-as-you-go instances of the same instance type.
       * "OfferingType":"All Upfront", // Default value. The payment type is all upfront.
       * "Platform":"Linux", // The operating system type of the image used by the instance is Linux or Unix-like.
       * "Period":1, // The term of the reserved instance is one year.
       * "PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       * - Purchase a two-year zonal reserved instance in Zone H of the China (Hangzhou) region to offset bills of five pay-as-you-go instances of the ecs.g5.large instance type that run Windows.
       * ```
       * "RegionId":"cn-hangzhou",
       * "ZoneId":"cn-hangzhou-h", // Set the zone to Zone H.
       * "InstanceType":"ecs.g5.large",
       * "Scope":"Zone", // Set the scope of the reserved instance to zonal.
       * "InstanceAmount":5, // The reserved instance can match five pay-as-you-go instances of the same instance type.
       * "OfferingType":"All Upfront",
       * "Platform":"Windows", // The operating system type of the image used by the instance is Windows.
       * "Period":2, // The term of the reserved instance is two years.
       * "PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       *
       * @param request PurchaseReservedInstancesOfferingRequest
       * @return PurchaseReservedInstancesOfferingResponse
       */
      Models::PurchaseReservedInstancesOfferingResponse purchaseReservedInstancesOffering(const Models::PurchaseReservedInstancesOfferingRequest &request);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of storage capacity units (SCUs).**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of storage capacity units (SCUs).**
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnitWithOptions(const Models::PurchaseStorageCapacityUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of storage capacity units (SCUs).**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of storage capacity units (SCUs).**
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnit(const Models::PurchaseStorageCapacityUnitRequest &request);

      /**
       * @summary Restarts a pay-as-you-go ECS instance that has expired or been recycled due to an overdue payment.
       *
       * @description After you settle overdue bills for a pay-as-you-go instance, you do not need to call this operation to activate the instance. The system automatically restarts the instance and restores it to the state before the overdue payment. Automatic restart may occasionally fail. Check whether the automatic restart is successful. If the automatic restart fails, call this operation to manually restart the instance.
       * <props="china">- After you settle overdue bills, the total value of your Alibaba Cloud account balance (cash balance) and vouchers must be no less than CNY 100.00. Otherwise, the instance cannot be restarted.
       * <props="china">- The instance must be in the **expired** (`Stopped`) or **overdue and being recycled** (`Stopped`) state.
       * <props="intl">- The instance must be in the **expired** (`Stopped`) state.
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html)
       *
       * @param request ReActivateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstancesWithOptions(const Models::ReActivateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a pay-as-you-go ECS instance that has expired or been recycled due to an overdue payment.
       *
       * @description After you settle overdue bills for a pay-as-you-go instance, you do not need to call this operation to activate the instance. The system automatically restarts the instance and restores it to the state before the overdue payment. Automatic restart may occasionally fail. Check whether the automatic restart is successful. If the automatic restart fails, call this operation to manually restart the instance.
       * <props="china">- After you settle overdue bills, the total value of your Alibaba Cloud account balance (cash balance) and vouchers must be no less than CNY 100.00. Otherwise, the instance cannot be restarted.
       * <props="china">- The instance must be in the **expired** (`Stopped`) or **overdue and being recycled** (`Stopped`) state.
       * <props="intl">- The instance must be in the **expired** (`Stopped`) state.
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html)
       *
       * @param request ReActivateInstancesRequest
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstances(const Models::ReActivateInstancesRequest &request);

      /**
       * @summary Re-initializes a disk to its initial state when it was created.
       *
       * @description When you call this operation, take note of the following items:
       * - The disk must be in the **In Use** (`In_use`) state, and the ECS instance to which the disk is attached must be in the **Stopped** (`Stopped`) state.
       * - You cannot re-initialize a disk that is attached to an instance before the instance starts for the first time.
       * - A disk that has local snapshots cannot be re-initialized.
       * <props="china">- A disk with the multi-attach feature enabled cannot be re-initialized.
       * - For a system disk, the disk is re-initialized to the initial state of the image. If the source image used to create the disk has been deleted, the disk cannot be re-initialized.
       * - For a data disk that was created as an empty disk, the disk is re-initialized to an empty state. For a data disk that was created from a snapshot, the disk is re-initialized to the snapshot state. If the source snapshot has been deleted, the disk cannot be re-initialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDiskWithOptions(const Models::ReInitDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-initializes a disk to its initial state when it was created.
       *
       * @description When you call this operation, take note of the following items:
       * - The disk must be in the **In Use** (`In_use`) state, and the ECS instance to which the disk is attached must be in the **Stopped** (`Stopped`) state.
       * - You cannot re-initialize a disk that is attached to an instance before the instance starts for the first time.
       * - A disk that has local snapshots cannot be re-initialized.
       * <props="china">- A disk with the multi-attach feature enabled cannot be re-initialized.
       * - For a system disk, the disk is re-initialized to the initial state of the image. If the source image used to create the disk has been deleted, the disk cannot be re-initialized.
       * - For a data disk that was created as an empty disk, the disk is re-initialized to an empty state. For a data disk that was created from a snapshot, the disk is re-initialized to the snapshot state. If the source snapshot has been deleted, the disk cannot be re-initialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDisk(const Models::ReInitDiskRequest &request);

      /**
       * @summary Restarts an ECS instance.
       *
       * @description This is an asynchronous operation. After the instance is restarted, it enters the Starting state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instance is restarted.
       * ### Before you begin
       * - You cannot restart an instance that is locked for security reasons. For more information, see [Impacts of security lock on API operations](https://help.aliyun.com/document_detail/25695.html).
       * - You can restart only ECS instances that are in the **Running** (`Running`) state.
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an ECS instance.
       *
       * @description This is an asynchronous operation. After the instance is restarted, it enters the Starting state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instance is restarted.
       * ### Before you begin
       * - You cannot restart an instance that is locked for security reasons. For more information, see [Impacts of security lock on API operations](https://help.aliyun.com/document_detail/25695.html).
       * - You can restart only ECS instances that are in the **Running** (`Running`) state.
       *
       * @param request RebootInstanceRequest
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstance(const Models::RebootInstanceRequest &request);

      /**
       * @summary Restarts one or more ECS instances. You can specify whether to force restart instances and set different batch operation modes.
       *
       * @description This is an asynchronous operation. Instance restarts are not completed immediately. After a successful call, the instance enters the Starting state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the restart is successful.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be restarted by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance must be in the **Running** state.
       *
       * @param request RebootInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstancesWithOptions(const Models::RebootInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts one or more ECS instances. You can specify whether to force restart instances and set different batch operation modes.
       *
       * @description This is an asynchronous operation. Instance restarts are not completed immediately. After a successful call, the instance enters the Starting state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the restart is successful.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be restarted by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance must be in the **Running** state.
       *
       * @param request RebootInstancesRequest
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstances(const Models::RebootInstancesRequest &request);

      /**
       * @deprecated OpenAPI RecoverVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::RecoverVirtualBorderRouter instead.
       *
       * @summary RecoverVirtualBorderRouter
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouterWithOptions(const Models::RecoverVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RecoverVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::RecoverVirtualBorderRouter instead.
       *
       * @summary RecoverVirtualBorderRouter
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouter(const Models::RecoverVirtualBorderRouterRequest &request);

      /**
       * @summary Performs fault migration for a dedicated host.
       *
       * @description When a dedicated host is in the alert state (`UnderAssessment`), which indicates a latent fault, call this operation to perform fault migration for the dedicated host to prevent permanent failures. You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the status of a dedicated host.
       *
       * @param request RedeployDedicatedHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployDedicatedHostResponse
       */
      Models::RedeployDedicatedHostResponse redeployDedicatedHostWithOptions(const Models::RedeployDedicatedHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs fault migration for a dedicated host.
       *
       * @description When a dedicated host is in the alert state (`UnderAssessment`), which indicates a latent fault, call this operation to perform fault migration for the dedicated host to prevent permanent failures. You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the status of a dedicated host.
       *
       * @param request RedeployDedicatedHostRequest
       * @return RedeployDedicatedHostResponse
       */
      Models::RedeployDedicatedHostResponse redeployDedicatedHost(const Models::RedeployDedicatedHostRequest &request);

      /**
       * @summary Invokes the RedeployInstance operation to redeploy an ECS instance when the ECS instance receives a system event notification.
       *
       * @description ## Operation description
       * RedeployInstance is an asynchronous invocation that restarts and migrates an instance. After the deployment succeeds, the instance enters the Running state. If the deployment failed, the instance is returned to the original physical server and recovers to the state before the deployment.
       * When you invoke this operation, take note of the following items:
       * - The target instance must be in the Running or Stopped state. The instance status changes after the operation is invoked:
       *     - An instance in the Running state enters the Stopping state.
       *     - An instance in the Stopped state enters the Starting state.
       * - Instances on dedicated hosts cannot be redeployed.
       * - If `"LockReason": "security"` is marked in the OperationLocks of a security-controlled instance, the instance cannot be redeployed.
       * - Simulated events created by invoking CreateSimulatedSystemEvent cannot be responded to.
       * - During the flow of isolating a local disk in a system event, you can also invoke RedeployInstance when the damaged local disk has been isolated but the **SystemMaintenance.RebootAndReInitErrorDisk** event has not been sent. For more information, see [Overview of local disk instance system events](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the system event types and event states that RedeployInstance can response to.
       * | Event name and parameter | Event status |
       * | --- | --- |
       * | Instance restart due to system maintenance (SystemMaintenance.Reboot) | Inquiring, Scheduled |
       * | Instance redeployment due to system maintenance (SystemMaintenance.Redeploy) | Inquiring, Scheduled |
       * | Instance restart and damaged disk replacement due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk) | Inquiring |
       * | Instance restart and damaged disk reinitialization due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk) | Inquiring |
       * | Instance redeployment due to system fault (SystemFailure.Redeploy) | Inquiring |
       * | Only for ECS instances with local disks: Instance restart due to system fault (SystemFailure.Reboot) | Executing |
       * | Damaged disk isolation due to system maintenance (SystemMaintenance.IsolateErrorDisk) | Inquiring |
       * | Damaged disk reinitialization due to system maintenance (SystemMaintenance.ReInitErrorDisk) | Inquiring |
       * > Redeploying an instance with local disks reinitializes the local disks, and all data on the storage devices is cleared.
       *
       * @param request RedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployInstanceResponse
       */
      Models::RedeployInstanceResponse redeployInstanceWithOptions(const Models::RedeployInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the RedeployInstance operation to redeploy an ECS instance when the ECS instance receives a system event notification.
       *
       * @description ## Operation description
       * RedeployInstance is an asynchronous invocation that restarts and migrates an instance. After the deployment succeeds, the instance enters the Running state. If the deployment failed, the instance is returned to the original physical server and recovers to the state before the deployment.
       * When you invoke this operation, take note of the following items:
       * - The target instance must be in the Running or Stopped state. The instance status changes after the operation is invoked:
       *     - An instance in the Running state enters the Stopping state.
       *     - An instance in the Stopped state enters the Starting state.
       * - Instances on dedicated hosts cannot be redeployed.
       * - If `"LockReason": "security"` is marked in the OperationLocks of a security-controlled instance, the instance cannot be redeployed.
       * - Simulated events created by invoking CreateSimulatedSystemEvent cannot be responded to.
       * - During the flow of isolating a local disk in a system event, you can also invoke RedeployInstance when the damaged local disk has been isolated but the **SystemMaintenance.RebootAndReInitErrorDisk** event has not been sent. For more information, see [Overview of local disk instance system events](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the system event types and event states that RedeployInstance can response to.
       * | Event name and parameter | Event status |
       * | --- | --- |
       * | Instance restart due to system maintenance (SystemMaintenance.Reboot) | Inquiring, Scheduled |
       * | Instance redeployment due to system maintenance (SystemMaintenance.Redeploy) | Inquiring, Scheduled |
       * | Instance restart and damaged disk replacement due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk) | Inquiring |
       * | Instance restart and damaged disk reinitialization due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk) | Inquiring |
       * | Instance redeployment due to system fault (SystemFailure.Redeploy) | Inquiring |
       * | Only for ECS instances with local disks: Instance restart due to system fault (SystemFailure.Reboot) | Executing |
       * | Damaged disk isolation due to system maintenance (SystemMaintenance.IsolateErrorDisk) | Inquiring |
       * | Damaged disk reinitialization due to system maintenance (SystemMaintenance.ReInitErrorDisk) | Inquiring |
       * > Redeploying an instance with local disks reinitializes the local disks, and all data on the storage devices is cleared.
       *
       * @param request RedeployInstanceRequest
       * @return RedeployInstanceResponse
       */
      Models::RedeployInstanceResponse redeployInstance(const Models::RedeployInstanceRequest &request);

      /**
       * @summary Releases a capacity reservation.
       *
       * @description For an immediately effective capacity reservation whose release mode is set to manual release, you can call this operation to directly release the capacity reservation.
       *
       * @param request ReleaseCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseCapacityReservationResponse
       */
      Models::ReleaseCapacityReservationResponse releaseCapacityReservationWithOptions(const Models::ReleaseCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a capacity reservation.
       *
       * @description For an immediately effective capacity reservation whose release mode is set to manual release, you can call this operation to directly release the capacity reservation.
       *
       * @param request ReleaseCapacityReservationRequest
       * @return ReleaseCapacityReservationResponse
       */
      Models::ReleaseCapacityReservationResponse releaseCapacityReservation(const Models::ReleaseCapacityReservationRequest &request);

      /**
       * @summary Releases a pay-as-you-go dedicated host or an expired subscription dedicated host.
       *
       * @description Before releasing a pay-as-you-go dedicated host, make sure that no ECS instances exist on the host.
       *
       * @param request ReleaseDedicatedHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseDedicatedHostResponse
       */
      Models::ReleaseDedicatedHostResponse releaseDedicatedHostWithOptions(const Models::ReleaseDedicatedHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go dedicated host or an expired subscription dedicated host.
       *
       * @description Before releasing a pay-as-you-go dedicated host, make sure that no ECS instances exist on the host.
       *
       * @param request ReleaseDedicatedHostRequest
       * @return ReleaseDedicatedHostResponse
       */
      Models::ReleaseDedicatedHostResponse releaseDedicatedHost(const Models::ReleaseDedicatedHostRequest &request);

      /**
       * @deprecated OpenAPI ReleaseEipAddress is deprecated, please use Vpc::2016-04-28::ReleaseEipAddress instead.
       *
       * @summary Releases a specified Elastic IP Address (EIP).
       *
       * @param request ReleaseEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddressWithOptions(const Models::ReleaseEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ReleaseEipAddress is deprecated, please use Vpc::2016-04-28::ReleaseEipAddress instead.
       *
       * @summary Releases a specified Elastic IP Address (EIP).
       *
       * @param request ReleaseEipAddressRequest
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddress(const Models::ReleaseEipAddressRequest &request);

      /**
       * @deprecated OpenAPI ReleasePublicIpAddress is deprecated
       *
       * @summary Releases a public IP from an instance.
       *
       * @param request ReleasePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicIpAddressResponse
       */
      Models::ReleasePublicIpAddressResponse releasePublicIpAddressWithOptions(const Models::ReleasePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ReleasePublicIpAddress is deprecated
       *
       * @summary Releases a public IP from an instance.
       *
       * @param request ReleasePublicIpAddressRequest
       * @return ReleasePublicIpAddressResponse
       */
      Models::ReleasePublicIpAddressResponse releasePublicIpAddress(const Models::ReleasePublicIpAddressRequest &request);

      /**
       * @summary RemoveBandwidthPackageIps
       *
       * @param request RemoveBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBandwidthPackageIpsResponse
       */
      Models::RemoveBandwidthPackageIpsResponse removeBandwidthPackageIpsWithOptions(const Models::RemoveBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RemoveBandwidthPackageIps
       *
       * @param request RemoveBandwidthPackageIpsRequest
       * @return RemoveBandwidthPackageIpsResponse
       */
      Models::RemoveBandwidthPackageIpsResponse removeBandwidthPackageIps(const Models::RemoveBandwidthPackageIpsRequest &request);

      /**
       * @deprecated OpenAPI RemoveTags is deprecated, please use Ecs::2014-05-26::UntagResources instead.
       *
       * @summary Unbinds one or more tags from resources such as instances, cloud disks, snapshots, images, or security groups.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveTags is deprecated, please use Ecs::2014-05-26::UntagResources instead.
       *
       * @summary Unbinds one or more tags from resources such as instances, cloud disks, snapshots, images, or security groups.
       *
       * @param request RemoveTagsRequest
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTags(const Models::RemoveTagsRequest &request);

      /**
       * @summary Renews one or more subscription dedicated hosts.
       *
       * @description ## Operation description
       * <props="china">When you renew a dedicated host, deductible vouchers are used first. Your account must support balance payment or credit payment.
       * <props="intl">When you renew a dedicated host, deductible vouchers are used first. Your account must support balance payment or credit payment.
       *
       * @param request RenewDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDedicatedHostsResponse
       */
      Models::RenewDedicatedHostsResponse renewDedicatedHostsWithOptions(const Models::RenewDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews one or more subscription dedicated hosts.
       *
       * @description ## Operation description
       * <props="china">When you renew a dedicated host, deductible vouchers are used first. Your account must support balance payment or credit payment.
       * <props="intl">When you renew a dedicated host, deductible vouchers are used first. Your account must support balance payment or credit payment.
       *
       * @param request RenewDedicatedHostsRequest
       * @return RenewDedicatedHostsResponse
       */
      Models::RenewDedicatedHostsResponse renewDedicatedHosts(const Models::RenewDedicatedHostsRequest &request);

      /**
       * @summary Renews one or more purchased elasticity assurance services.
       *
       * @param request RenewElasticityAssurancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewElasticityAssurancesResponse
       */
      Models::RenewElasticityAssurancesResponse renewElasticityAssurancesWithOptions(const Models::RenewElasticityAssurancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews one or more purchased elasticity assurance services.
       *
       * @param request RenewElasticityAssurancesRequest
       * @return RenewElasticityAssurancesResponse
       */
      Models::RenewElasticityAssurancesResponse renewElasticityAssurances(const Models::RenewElasticityAssurancesRequest &request);

      /**
       * @summary Renews a subscription Elastic Compute Service (ECS) instance. You can specify the renewal period or renew the instance to a unified expiration date.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service.**
       * - Make sure that your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. Invoking this operation for pay-as-you-go instances returns an error.
       * - You must specify either the renewal period parameters (`Period` and `PeriodUnit`) or the unified expiration date parameter (`ExpectedRenewDay`), but not both.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Elastic Compute Service (ECS) instance. You can specify the renewal period or renew the instance to a unified expiration date.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service.**
       * - Make sure that your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. Invoking this operation for pay-as-you-go instances returns an error.
       * - You must specify either the renewal period parameters (`Period` and `PeriodUnit`) or the unified expiration date parameter (`ExpectedRenewDay`), but not both.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews one or more reserved instances. You can specify the purchase duration and auto-renewal attribute during renewal.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of reserved instances.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Reserved instances support both manual renewal and auto-renewal. For more information, see [Renewal policy for reserved instances](~~100371#53bfc50b78sta~~).
       * - You can invoke [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) to query purchased reserved instances.
       * - This operation supports enabling auto-renewal but does not support disabling auto-renewal. You can invoke [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) to disable auto-renewal.
       *
       * @param request RenewReservedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewReservedInstancesResponse
       */
      Models::RenewReservedInstancesResponse renewReservedInstancesWithOptions(const Models::RenewReservedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews one or more reserved instances. You can specify the purchase duration and auto-renewal attribute during renewal.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of reserved instances.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Reserved instances support both manual renewal and auto-renewal. For more information, see [Renewal policy for reserved instances](~~100371#53bfc50b78sta~~).
       * - You can invoke [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) to query purchased reserved instances.
       * - This operation supports enabling auto-renewal but does not support disabling auto-renewal. You can invoke [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) to disable auto-renewal.
       *
       * @param request RenewReservedInstancesRequest
       * @return RenewReservedInstancesResponse
       */
      Models::RenewReservedInstancesResponse renewReservedInstances(const Models::RenewReservedInstancesRequest &request);

      /**
       * @summary Replaces the operating system of an ECS instance by replacing the system disk. After the replacement, the disk ID of the system disk changes and the original disk is released.
       *
       * @description Before you call this operation, read [Replace a system disk (change the operating system)](https://help.aliyun.com/document_detail/50134.html).
       * When you replace the system disk, take note of the following items:
       * - You cannot change the billing method of the system disk.
       * - You cannot change the disk type of the system disk.
       * - The ECS instance to which the system disk is attached must not have unpaid orders. 
       *  
       * - The instance must be in the Stopped state.
       *     > This applies only to instances in virtual private clouds (VPCs). If the ECS instance uses the pay-as-you-go billing method and the economical mode is enabled by default, to prevent the instance from failing to restart after the system disk is replaced due to insufficient instance inventory in the region, stop the instance in standard stop mode. For more information, see [StopInstance](https://help.aliyun.com/document_detail/25501.html).
       * - You can use the `SystemDisk.Size` parameter to specify a new capacity for the system disk. The new capacity cannot be smaller than the original capacity.
       * - If the ECS instance is locked for security purposes, which means the `OperationLocks` parameter of the instance contains `"LockReason": "security"`, the system disk cannot be replaced. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * After the system disk is replaced, you can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to check the status of the instance and verify whether the replacement is successful. If the `OperationLocks` response parameter is empty, the system disk replacement is complete.
       *
       * @param request ReplaceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceSystemDiskResponse
       */
      Models::ReplaceSystemDiskResponse replaceSystemDiskWithOptions(const Models::ReplaceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the operating system of an ECS instance by replacing the system disk. After the replacement, the disk ID of the system disk changes and the original disk is released.
       *
       * @description Before you call this operation, read [Replace a system disk (change the operating system)](https://help.aliyun.com/document_detail/50134.html).
       * When you replace the system disk, take note of the following items:
       * - You cannot change the billing method of the system disk.
       * - You cannot change the disk type of the system disk.
       * - The ECS instance to which the system disk is attached must not have unpaid orders. 
       *  
       * - The instance must be in the Stopped state.
       *     > This applies only to instances in virtual private clouds (VPCs). If the ECS instance uses the pay-as-you-go billing method and the economical mode is enabled by default, to prevent the instance from failing to restart after the system disk is replaced due to insufficient instance inventory in the region, stop the instance in standard stop mode. For more information, see [StopInstance](https://help.aliyun.com/document_detail/25501.html).
       * - You can use the `SystemDisk.Size` parameter to specify a new capacity for the system disk. The new capacity cannot be smaller than the original capacity.
       * - If the ECS instance is locked for security purposes, which means the `OperationLocks` parameter of the instance contains `"LockReason": "security"`, the system disk cannot be replaced. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * After the system disk is replaced, you can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to check the status of the instance and verify whether the replacement is successful. If the `OperationLocks` response parameter is empty, the system disk replacement is complete.
       *
       * @param request ReplaceSystemDiskRequest
       * @return ReplaceSystemDiskResponse
       */
      Models::ReplaceSystemDiskResponse replaceSystemDisk(const Models::ReplaceSystemDiskRequest &request);

      /**
       * @summary Reports anomalous issues for one or more ECS instances. You can report the same issue that occurs on multiple ECS instances or the same issue that occurs on multiple disks attached to a single ECS instance.
       *
       * @param request ReportInstancesStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportInstancesStatusResponse
       */
      Models::ReportInstancesStatusResponse reportInstancesStatusWithOptions(const Models::ReportInstancesStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports anomalous issues for one or more ECS instances. You can report the same issue that occurs on multiple ECS instances or the same issue that occurs on multiple disks attached to a single ECS instance.
       *
       * @param request ReportInstancesStatusRequest
       * @return ReportInstancesStatusResponse
       */
      Models::ReportInstancesStatusResponse reportInstancesStatus(const Models::ReportInstancesStatusRequest &request);

      /**
       * @summary Rolls back a cloud disk to a previous state by using a cloud disk snapshot.
       *
       * @description Before you call this operation, read [Roll back a disk by using a snapshot](https://help.aliyun.com/document_detail/25450.html).
       * When you call this operation, take note of the following items:
       * - The cloud disk must be in the In Use (`In_use`) or Available (`Available`) state.  
       * - The instance to which the cloud disk is attached must be in the Stopped (`Stopped`) state. You can call [StopInstances](https://help.aliyun.com/document_detail/155372.html) to stop an instance.  
       * - The specified `SnapshotId` parameter must be a historical snapshot created from the cloud disk specified by `DiskId`.  
       * - When you call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query ECS instance information, if the response contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       *
       * @param request ResetDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDiskWithOptions(const Models::ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a cloud disk to a previous state by using a cloud disk snapshot.
       *
       * @description Before you call this operation, read [Roll back a disk by using a snapshot](https://help.aliyun.com/document_detail/25450.html).
       * When you call this operation, take note of the following items:
       * - The cloud disk must be in the In Use (`In_use`) or Available (`Available`) state.  
       * - The instance to which the cloud disk is attached must be in the Stopped (`Stopped`) state. You can call [StopInstances](https://help.aliyun.com/document_detail/155372.html) to stop an instance.  
       * - The specified `SnapshotId` parameter must be a historical snapshot created from the cloud disk specified by `DiskId`.  
       * - When you call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query ECS instance information, if the response contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations are prohibited.
       *
       * @param request ResetDiskRequest
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDisk(const Models::ResetDiskRequest &request);

      /**
       * @summary Resets the KMS key ID used for account-level default encryption of block storage in a specified region to the service key.
       *
       * @description - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For more information about authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - The **account-level default encryption of block storage** feature must be enabled in the specified region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyIdWithOptions(const Models::ResetDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the KMS key ID used for account-level default encryption of block storage in a specified region to the service key.
       *
       * @description - Resource Access Management (RAM) users require the `AliyunECSFullAccess` permission. For more information about authorization, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - The **account-level default encryption of block storage** feature must be enabled in the specified region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyId(const Models::ResetDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Rolls back one or more cloud disks by using an instance snapshot.
       *
       * @description This operation is about to be deprecated. Use [ResetDisk](https://help.aliyun.com/document_detail/25520.html) to roll back cloud disks.
       *
       * @param request ResetDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisksWithOptions(const Models::ResetDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back one or more cloud disks by using an instance snapshot.
       *
       * @description This operation is about to be deprecated. Use [ResetDisk](https://help.aliyun.com/document_detail/25520.html) to roll back cloud disks.
       *
       * @param request ResetDisksRequest
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisks(const Models::ResetDisksRequest &request);

      /**
       * @summary Expands the capacity of a disk, including system disks and data disks.
       *
       * @description > Before expanding a disk, query the partition format of the disk. If the disk uses the MBR partition format, you cannot expand the disk to more than 2 TiB. Otherwise, data loss may occur. To expand an MBR-partitioned disk, create and attach a new data disk, use the GPT partition format, and then copy the existing data to the new data disk. For more information, see [Expand disk capacity](https://help.aliyun.com/document_detail/44986.html).
       * - Supported disk types include basic disks (`cloud`), ultra disks (`cloud_efficiency`), standard SSDs (`cloud_ssd`), enterprise SSDs (`cloud_essd`)<props="china"><ph>, ESSD Entry disks (cloud_essd_entry)</ph>, ESSD AutoPL disks (cloud_auto), elastic ephemeral disks - Standard (elastic_ephemeral_disk_standard), elastic ephemeral disks - Premium (elastic_ephemeral_disk_premium), and regional ESSDs (cloud_regional_disk_auto).
       * - Disks for which snapshots are being created cannot be expanded. Wait until the snapshot creation is complete before expanding the disk.
       * - This operation does not expand partitions or file systems. After expanding the disk capacity, you must manually allocate partitions and file systems. For more information, see [Expand partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~) and [Expand partitions and file systems (Windows)](~~2932233#a9f9b78f3fujb~~).
       * - Disks with the multi-attach feature enabled support both online and offline expansion. Make sure that the instances to which the disk is attached meet the following conditions:
       *   - For online scale-out, the instance status must be **Running** (`Running`).
       *   - For offline scale-out, the instance status must be **Running** (`Running`) or **Stopped** (`Stopped`).
       * - Make sure that the disk meets the following conditions:
       *   - The disk is in the In Use (`In Use`) or Available (`Available`) state.
       *   - (Strongly recommended) A snapshot has been created for the disk to back up data. For more information, see [Create a snapshot](https://help.aliyun.com/document_detail/25455.html).
       *   - If the data disk is newly purchased, initialize the disk before expanding it. For more information, see [Initialization overview](https://help.aliyun.com/document_detail/466323.html).
       *
       * @param request ResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDiskWithOptions(const Models::ResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the capacity of a disk, including system disks and data disks.
       *
       * @description > Before expanding a disk, query the partition format of the disk. If the disk uses the MBR partition format, you cannot expand the disk to more than 2 TiB. Otherwise, data loss may occur. To expand an MBR-partitioned disk, create and attach a new data disk, use the GPT partition format, and then copy the existing data to the new data disk. For more information, see [Expand disk capacity](https://help.aliyun.com/document_detail/44986.html).
       * - Supported disk types include basic disks (`cloud`), ultra disks (`cloud_efficiency`), standard SSDs (`cloud_ssd`), enterprise SSDs (`cloud_essd`)<props="china"><ph>, ESSD Entry disks (cloud_essd_entry)</ph>, ESSD AutoPL disks (cloud_auto), elastic ephemeral disks - Standard (elastic_ephemeral_disk_standard), elastic ephemeral disks - Premium (elastic_ephemeral_disk_premium), and regional ESSDs (cloud_regional_disk_auto).
       * - Disks for which snapshots are being created cannot be expanded. Wait until the snapshot creation is complete before expanding the disk.
       * - This operation does not expand partitions or file systems. After expanding the disk capacity, you must manually allocate partitions and file systems. For more information, see [Expand partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~) and [Expand partitions and file systems (Windows)](~~2932233#a9f9b78f3fujb~~).
       * - Disks with the multi-attach feature enabled support both online and offline expansion. Make sure that the instances to which the disk is attached meet the following conditions:
       *   - For online scale-out, the instance status must be **Running** (`Running`).
       *   - For offline scale-out, the instance status must be **Running** (`Running`) or **Stopped** (`Stopped`).
       * - Make sure that the disk meets the following conditions:
       *   - The disk is in the In Use (`In Use`) or Available (`Available`) state.
       *   - (Strongly recommended) A snapshot has been created for the disk to back up data. For more information, see [Create a snapshot](https://help.aliyun.com/document_detail/25455.html).
       *   - If the data disk is newly purchased, initialize the disk before expanding it. For more information, see [Initialization overview](https://help.aliyun.com/document_detail/466323.html).
       *
       * @param request ResizeDiskRequest
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDisk(const Models::ResizeDiskRequest &request);

      /**
       * @summary Deletes one or more inbound security group rules from a specified security group.
       *
       * @description >Notice: On July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidParam.SecurityGroupRuleId" instead of a success response. Update your error code handling to be compatible with this change promptly to avoid impacts on your online services.
       * This operation supports two methods to pass parameters for deleting rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *      - If a specified security group rule ID does not exist, the invocation is failed.
       * - Delete rules by specifying Permissions.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to identify an inbound rule:
       *       - Source Settings: specify one of SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       *       - Destination port range: PortRange.
       *       - Protocol type: IpProtocol.
       *       - Access policy: Policy.
       * > You cannot specify both security group rule IDs and Permissions at the same time.
       * ### Request examples
       * - Delete by specifying security group rule IDs.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group ID.
       * "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] // Specify the security group rule IDs.
       * ```
       * - Delete by specifying an IP address range.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourceCidrIp":"10.0.0.0/8", // Specify the source IP address range.
       *     "IpProtocol":"TCP", // Specify the protocol type.
       *     "PortRange":"80/80", // Specify the destination port range.
       *     "Policy":"accept" // Specify the access policy.
       *   }
       * ]
       * ```
       * - Delete by specifying another security group.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourceGroupId":"sg-bp67acfmxa123b****", // Specify the source security group ID.
       *     "IpProtocol":"TCP,"
       *     "PortRange":"80/80",
       *     "Policy":"accept"
       *   ]
       * }
       * ```
       * - Delete by specifying a prefix list.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourcePrefixListId":pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list ID.
       *     "IpProtocol":"TCP",
       *     "PortRange":"80/80",
       *     "Policy":"accept"
       *   }
       * ]
       * ```
       *
       * @param request RevokeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroupWithOptions(const Models::RevokeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more inbound security group rules from a specified security group.
       *
       * @description >Notice: On July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidParam.SecurityGroupRuleId" instead of a success response. Update your error code handling to be compatible with this change promptly to avoid impacts on your online services.
       * This operation supports two methods to pass parameters for deleting rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *      - If a specified security group rule ID does not exist, the invocation is failed.
       * - Delete rules by specifying Permissions.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to identify an inbound rule:
       *       - Source Settings: specify one of SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       *       - Destination port range: PortRange.
       *       - Protocol type: IpProtocol.
       *       - Access policy: Policy.
       * > You cannot specify both security group rule IDs and Permissions at the same time.
       * ### Request examples
       * - Delete by specifying security group rule IDs.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group ID.
       * "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] // Specify the security group rule IDs.
       * ```
       * - Delete by specifying an IP address range.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourceCidrIp":"10.0.0.0/8", // Specify the source IP address range.
       *     "IpProtocol":"TCP", // Specify the protocol type.
       *     "PortRange":"80/80", // Specify the destination port range.
       *     "Policy":"accept" // Specify the access policy.
       *   }
       * ]
       * ```
       * - Delete by specifying another security group.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourceGroupId":"sg-bp67acfmxa123b****", // Specify the source security group ID.
       *     "IpProtocol":"TCP,"
       *     "PortRange":"80/80",
       *     "Policy":"accept"
       *   ]
       * }
       * ```
       * - Delete by specifying a prefix list.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****",
       * "Permissions":[
       *   {
       *     "SourcePrefixListId":pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list ID.
       *     "IpProtocol":"TCP",
       *     "PortRange":"80/80",
       *     "Policy":"accept"
       *   }
       * ]
       * ```
       *
       * @param request RevokeSecurityGroupRequest
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroup(const Models::RevokeSecurityGroupRequest &request);

      /**
       * @summary Deletes one or more outbound security group rules from a specified security group.
       *
       * @description >Notice: On July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidSecurityGroupRule.RuleNotExist" instead of a success response. Make sure that your application is compatible with this fault code to avoid impacts on your workloads.
       * You can use one of the following methods to pass parameters to delete security group rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *   - If a specified security group rule ID does not exist, an error is returned.
       * - Delete rules by specifying the Permissions parameter.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to delete a security group rule:
       *       - Destination: Set one of DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       *       - Destination port range: PortRange.
       *       - Protocol type: IpProtocol.
       *       - Access policy: Policy.
       * > You cannot specify both security group rule IDs and the Permissions parameter at the same time.
       * ### Request examples
       * - Delete by security group rule ID.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group ID.
       * "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] // Specify the security group rule IDs.
       * ```
       * - Delete by IP CIDR block.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "IpProtocol":"TCP", // Specify the protocol type.
       *     "DestCidrIp":"10.0.0.0/8", // Specify the destination IP CIDR block.
       *     "PortRange":"22/22", // Specify the destination port range.
       *     "Policy":"accept" // Specify the access policy.
       *   }
       * ]
       * ```
       *     
       * - Delete by destination security group.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "DestGroupId":"sg-bp67acfmxa123b****", // Specify the destination security group ID.
       *     "IpProtocol":"TCP",
       *     "PortRange":"22/22",
       *     "Policy":"accept"
       *   }
       * ]
       * ```
       * - Delete by prefix list.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "IpProtocol":"TCP",
       *     "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the destination prefix list ID.
       *     "PortRange":"22/22",
       *     "Policy":"accept",
       *   }
       * ]
       * ```
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgressWithOptions(const Models::RevokeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more outbound security group rules from a specified security group.
       *
       * @description >Notice: On July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidSecurityGroupRule.RuleNotExist" instead of a success response. Make sure that your application is compatible with this fault code to avoid impacts on your workloads.
       * You can use one of the following methods to pass parameters to delete security group rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *   - If a specified security group rule ID does not exist, an error is returned.
       * - Delete rules by specifying the Permissions parameter.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to delete a security group rule:
       *       - Destination: Set one of DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       *       - Destination port range: PortRange.
       *       - Protocol type: IpProtocol.
       *       - Access policy: Policy.
       * > You cannot specify both security group rule IDs and the Permissions parameter at the same time.
       * ### Request examples
       * - Delete by security group rule ID.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group ID.
       * "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] // Specify the security group rule IDs.
       * ```
       * - Delete by IP CIDR block.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "IpProtocol":"TCP", // Specify the protocol type.
       *     "DestCidrIp":"10.0.0.0/8", // Specify the destination IP CIDR block.
       *     "PortRange":"22/22", // Specify the destination port range.
       *     "Policy":"accept" // Specify the access policy.
       *   }
       * ]
       * ```
       *     
       * - Delete by destination security group.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "DestGroupId":"sg-bp67acfmxa123b****", // Specify the destination security group ID.
       *     "IpProtocol":"TCP",
       *     "PortRange":"22/22",
       *     "Policy":"accept"
       *   }
       * ]
       * ```
       * - Delete by prefix list.
       * ```
       * "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       * "Permissions":[
       *   {
       *     "IpProtocol":"TCP",
       *     "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the destination prefix list ID.
       *     "PortRange":"22/22",
       *     "Policy":"accept",
       *   }
       * ]
       * ```
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgress(const Models::RevokeSecurityGroupEgressRequest &request);

      /**
       * @summary Creates and runs a Cloud Assistant command on one or more ECS instances. Supports Shell, PowerShell, or Bat script types, and provides features such as scheduled execution, custom parameters, and execution within containers on instances.
       *
       * @description This is an asynchronous operation. After the request is sent, you can call [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) with the returned command ID or invocation ID to query the execution results.
       * ### Before you begin
       * - The target instance must be in the running state (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       * - The target instance must have [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) pre-installed. You can install it by calling [InstallCloudAssistant](https://help.aliyun.com/document_detail/2679925.html) and query the installation status by calling [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679924.html).
       *   > ECS instances created from public images after December 1, 2017 have Cloud Assistant Agent pre-installed by default.
       * - To run PowerShell commands, ensure that the Windows operating system on the target ECS instance has the PowerShell module configured.
       * ### Before you begin
       * - In a single region, you can retain 500 to 50,000 Cloud Assistant commands. You can also request a quota increase. For more information, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - The Cloud Assistant Agent version must be no earlier than the following versions to support new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron-based scheduled execution). If the `ClientNeedUpgrade` error code is returned, see [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *       - Linux: 2.2.3.282
       *       - Windows: 2.1.3.282
       * - If you use a Cron expression for scheduled execution and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of the instance. Ensure that the time or time zone of the ECS instance is consistent with your expectations. For more information about time zones, see [Configure the time zone and NTP service for a Linux instance](https://help.aliyun.com/document_detail/92803.html) or [Configure the NTP service for a Windows instance](https://help.aliyun.com/document_detail/51890.html).
       * ### Usage notes
       * - **Timeout settings**: You can specify the `Timeout` parameter to set the maximum timeout period for command execution on an ECS instance. If the command times out, Cloud Assistant Agent forcefully stops the process.
       *     - For a one-time execution that times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) changes to execution fault (Failed).
       *     - For a scheduled execution, the timeout period applies to each execution record. A timeout in the previous execution does not affect the next execution. If an execution times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) changes to execution fault (Failed).
       * - **Execution failures**: A command may fail to execute due to abnormal target instance status, network exceptions, or Cloud Assistant Agent exceptions. In such cases, no execution information is generated. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html).
       * - **Custom parameters**: When `EnableParameter=true`, the custom parameter feature is enabled. You can define custom parameters in the format of `{{parameter}}` in `CommandContent`, and pass in custom parameter key-value pairs when running the command.
       *
       * @param tmpReq RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and runs a Cloud Assistant command on one or more ECS instances. Supports Shell, PowerShell, or Bat script types, and provides features such as scheduled execution, custom parameters, and execution within containers on instances.
       *
       * @description This is an asynchronous operation. After the request is sent, you can call [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) with the returned command ID or invocation ID to query the execution results.
       * ### Before you begin
       * - The target instance must be in the running state (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       * - The target instance must have [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) pre-installed. You can install it by calling [InstallCloudAssistant](https://help.aliyun.com/document_detail/2679925.html) and query the installation status by calling [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679924.html).
       *   > ECS instances created from public images after December 1, 2017 have Cloud Assistant Agent pre-installed by default.
       * - To run PowerShell commands, ensure that the Windows operating system on the target ECS instance has the PowerShell module configured.
       * ### Before you begin
       * - In a single region, you can retain 500 to 50,000 Cloud Assistant commands. You can also request a quota increase. For more information, see [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - The Cloud Assistant Agent version must be no earlier than the following versions to support new features of scheduled tasks (execution at fixed intervals, one-time execution at a specified time, and specifying a year or time zone for Cron-based scheduled execution). If the `ClientNeedUpgrade` error code is returned, see [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *       - Linux: 2.2.3.282
       *       - Windows: 2.1.3.282
       * - If you use a Cron expression for scheduled execution and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time is determined by the system time of the instance. Ensure that the time or time zone of the ECS instance is consistent with your expectations. For more information about time zones, see [Configure the time zone and NTP service for a Linux instance](https://help.aliyun.com/document_detail/92803.html) or [Configure the NTP service for a Windows instance](https://help.aliyun.com/document_detail/51890.html).
       * ### Usage notes
       * - **Timeout settings**: You can specify the `Timeout` parameter to set the maximum timeout period for command execution on an ECS instance. If the command times out, Cloud Assistant Agent forcefully stops the process.
       *     - For a one-time execution that times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) changes to execution fault (Failed).
       *     - For a scheduled execution, the timeout period applies to each execution record. A timeout in the previous execution does not affect the next execution. If an execution times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) changes to execution fault (Failed).
       * - **Execution failures**: A command may fail to execute due to abnormal target instance status, network exceptions, or Cloud Assistant Agent exceptions. In such cases, no execution information is generated. For more information, see [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html).
       * - **Custom parameters**: When `EnableParameter=true`, the custom parameter feature is enabled. You can define custom parameters in the format of `{{parameter}}` in `CommandContent`, and pass in custom parameter key-value pairs when running the command.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Batch creates ECS instances with support for automatic startup, public IP address allocation, and automatic release time settings.
       *
       * @description <props="china">
       * ### Before you begin.
       * ### Before you begin.
       * ### Recommendations.
       * ## Request example.
       *
       * @param request RunInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstancesWithOptions(const Models::RunInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch creates ECS instances with support for automatic startup, public IP address allocation, and automatic release time settings.
       *
       * @description <props="china">
       * ### Before you begin.
       * ### Before you begin.
       * ### Recommendations.
       * ## Request example.
       *
       * @param request RunInstancesRequest
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstances(const Models::RunInstancesRequest &request);

      /**
       * @summary Sends a remote file to one or more ECS instances.
       *
       * @description ## Operation description
       * - The target ECS instances must be in the running state.
       * - Cloud Assistant Agent must be installed on the target ECS instances. For more information, see [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       * - The Cloud Assistant Agent version must be later than the following versions to support file sending. If the `ClientNeedUpgrade` error code is returned, update the agent to the latest version.
       *     - Linux: 1.0.2.569
       *     - Windows: 1.0.0.149
       * - The file content cannot exceed 32 KB after Base64 encoding.
       * - File sending may fail due to exceptions in the target ECS instance status, network issues, or Cloud Assistant Agent exceptions. Call [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) or refer to [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html) to troubleshoot issues.
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a remote file to one or more ECS instances.
       *
       * @description ## Operation description
       * - The target ECS instances must be in the running state.
       * - Cloud Assistant Agent must be installed on the target ECS instances. For more information, see [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       * - The Cloud Assistant Agent version must be later than the following versions to support file sending. If the `ClientNeedUpgrade` error code is returned, update the agent to the latest version.
       *     - Linux: 1.0.2.569
       *     - Windows: 1.0.0.149
       * - The file content cannot exceed 32 KB after Base64 encoding.
       * - File sending may fail due to exceptions in the target ECS instance status, network issues, or Cloud Assistant Agent exceptions. Call [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) or refer to [Common errors and solutions for execution failures](https://help.aliyun.com/document_detail/87029.html) to troubleshoot issues.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Executes an image building task by using an image template.
       *
       * @description - After an image template is created, call this operation to execute an image building task. The system builds, distributes, and creates shared images based on the parameters specified in the image template.
       * - For the same image template, only one image building task can be executed at a time. You can call CancelImagePipelineExecution multiple times simultaneously, and canceling an image building task does not interfere with other image building tasks.
       * - When you execute an image template, multiple intermediate instances are created to help build images. The intermediate instances are ECS instances that use the pay-as-you-go billing method, and billing fees are incurred. For more information, see [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       *
       * @param request StartImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartImagePipelineExecutionResponse
       */
      Models::StartImagePipelineExecutionResponse startImagePipelineExecutionWithOptions(const Models::StartImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an image building task by using an image template.
       *
       * @description - After an image template is created, call this operation to execute an image building task. The system builds, distributes, and creates shared images based on the parameters specified in the image template.
       * - For the same image template, only one image building task can be executed at a time. You can call CancelImagePipelineExecution multiple times simultaneously, and canceling an image building task does not interfere with other image building tasks.
       * - When you execute an image template, multiple intermediate instances are created to help build images. The intermediate instances are ECS instances that use the pay-as-you-go billing method, and billing fees are incurred. For more information, see [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       *
       * @param request StartImagePipelineExecutionRequest
       * @return StartImagePipelineExecutionResponse
       */
      Models::StartImagePipelineExecutionResponse startImagePipelineExecution(const Models::StartImagePipelineExecutionRequest &request);

      /**
       * @summary Starts an ECS instance. You can start an instance by specifying the instance ID and optionally setting parameters such as InitLocalDisk.
       *
       * @description This is an asynchronous operation. The instance does not start immediately after a successful call. The instance first enters the Starting state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instance is started.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance must be in the **Stopped** (`Stopped`) state.
       * - Instances in economical mode may fail to start due to insufficient inventory.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an ECS instance. You can start an instance by specifying the instance ID and optionally setting parameters such as InitLocalDisk.
       *
       * @description This is an asynchronous operation. The instance does not start immediately after a successful call. The instance first enters the Starting state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instance is started.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance must be in the **Stopped** (`Stopped`) state.
       * - Instances in economical mode may fail to start due to insufficient inventory.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Starts multiple ECS instances in a batch. You can specify parameters to select different batch operation modes for flexible startup.
       *
       * @description This is an asynchronous operation. Instance startup is not immediate. After you invoke the operation, the instances enter the Starting state. You can invoke [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instances are started.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be started by invoking this operation. For more information, see [Impacts of security lock on API operations](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instances must be in the **Stopped** (`Stopped`) state.
       * - Starting instances in economical mode may fail because of insufficient resources.
       *
       * @param request StartInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstancesWithOptions(const Models::StartInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple ECS instances in a batch. You can specify parameters to select different batch operation modes for flexible startup.
       *
       * @description This is an asynchronous operation. Instance startup is not immediate. After you invoke the operation, the instances enter the Starting state. You can invoke [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Running`, the instances are started.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be started by invoking this operation. For more information, see [Impacts of security lock on API operations](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instances must be in the **Stopped** (`Stopped`) state.
       * - Starting instances in economical mode may fail because of insufficient resources.
       *
       * @param request StartInstancesRequest
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstances(const Models::StartInstancesRequest &request);

      /**
       * @summary Invokes StartTerminalSession to create a session based on the session management feature. You can establish a WebSocket session with an ECS instance by specifying the instance ID. The WebSocketUrl returned by the operation can be used to establish a remote connection to the ECS instance.
       *
       * @description ## Operation description
       * When you customize a remote connection client by using code, you can invoke this operation to obtain the WebSocketUrl for remotely connecting to an ECS instance. Take note of the following items:
       * - The specified ECS instance must be in the running state.
       * - The Cloud Assistant Agent must be installed on the specified ECS instance. You can invoke [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check whether the Cloud Assistant Agent is installed on the ECS instance and query the version number of the Cloud Assistant Agent.
       *     - If the Cloud Assistant Agent is not installed on the ECS instance, invoke [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) to install it.
       *     - The Cloud Assistant Agent version must be later than the following versions to support the session management feature. To upgrade the Cloud Assistant Agent, see [Upgrade or disable upgrades for the Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux operating system: 2.2.3.256
       *         - Windows operating system: 2.1.3.256
       * - After you successfully invoke this operation, the WebSocketUrl is valid for 10 minutes.
       * - After a session is established, if no data is transmitted for 3 minutes, Cloud Assistant closes the connection.
       * - In a single region, a maximum of 100 sessions can be created and active. A maximum of 20 sessions can be in the connected state for a single ECS instance. The bandwidth limit for a single session connection is 200 KB/s.
       * - The port forwarding feature supports only TCP port forwarding. UDP is not supported.
       * - To permanently shutdown a session and invalidate the WebSocketUrl, invoke the EndTerminalSession operation.
       *
       * @param tmpReq StartTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSessionWithOptions(const Models::StartTerminalSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes StartTerminalSession to create a session based on the session management feature. You can establish a WebSocket session with an ECS instance by specifying the instance ID. The WebSocketUrl returned by the operation can be used to establish a remote connection to the ECS instance.
       *
       * @description ## Operation description
       * When you customize a remote connection client by using code, you can invoke this operation to obtain the WebSocketUrl for remotely connecting to an ECS instance. Take note of the following items:
       * - The specified ECS instance must be in the running state.
       * - The Cloud Assistant Agent must be installed on the specified ECS instance. You can invoke [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check whether the Cloud Assistant Agent is installed on the ECS instance and query the version number of the Cloud Assistant Agent.
       *     - If the Cloud Assistant Agent is not installed on the ECS instance, invoke [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) to install it.
       *     - The Cloud Assistant Agent version must be later than the following versions to support the session management feature. To upgrade the Cloud Assistant Agent, see [Upgrade or disable upgrades for the Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux operating system: 2.2.3.256
       *         - Windows operating system: 2.1.3.256
       * - After you successfully invoke this operation, the WebSocketUrl is valid for 10 minutes.
       * - After a session is established, if no data is transmitted for 3 minutes, Cloud Assistant closes the connection.
       * - In a single region, a maximum of 100 sessions can be created and active. A maximum of 20 sessions can be in the connected state for a single ECS instance. The bandwidth limit for a single session connection is 200 KB/s.
       * - The port forwarding feature supports only TCP port forwarding. UDP is not supported.
       * - To permanently shutdown a session and invalidate the WebSocketUrl, invoke the EndTerminalSession operation.
       *
       * @param request StartTerminalSessionRequest
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSession(const Models::StartTerminalSessionRequest &request);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify the stop method, stop mode, and batch operation mode.
       *
       * @description This is an asynchronous operation. The ECS instance is not stopped immediately after a successful call. After the call succeeds, the instance enters the Stopping state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be stopped by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - After you enable the economical mode for instances in a VPC, you can set `StoppedMode=KeepCharging` to enable the standard stop mode. The ECS instance continues billing after it is stopped, and the ECS instance type inventory and public IP address are retained.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify the stop method, stop mode, and batch operation mode.
       *
       * @description This is an asynchronous operation. The ECS instance is not stopped immediately after a successful call. After the call succeeds, the instance enters the Stopping state. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
       * ### Before you begin
       * - Instances that are locked for security reasons cannot be stopped by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - After you enable the economical mode for instances in a VPC, you can set `StoppedMode=KeepCharging` to enable the standard stop mode. The ECS instance continues billing after it is stopped, and the ECS instance type inventory and public IP address are retained.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Stops one or more ECS instances. You can specify different stop methods, stop modes, and batch operation modes.
       *
       * @description This is an asynchronous operation. Instances are not stopped immediately after a successful call. After a successful call, the instance enters the Stopping state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
       * ### Before you begin
       * - After an instance is stopped, it becomes unavailable. Make sure that stopping the instance does not affect your business. Call [StartInstance](https://help.aliyun.com/document_detail/2679679.html) or [StartInstances](https://help.aliyun.com/document_detail/2679680.html) to start the instance.
       * - Instances that are locked for security reasons cannot be stopped by calling this operation. For more information, see [Impacts of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request StopInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstancesWithOptions(const Models::StopInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops one or more ECS instances. You can specify different stop methods, stop modes, and batch operation modes.
       *
       * @description This is an asynchronous operation. Instances are not stopped immediately after a successful call. After a successful call, the instance enters the Stopping state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
       * ### Before you begin
       * - After an instance is stopped, it becomes unavailable. Make sure that stopping the instance does not affect your business. Call [StartInstance](https://help.aliyun.com/document_detail/2679679.html) or [StartInstances](https://help.aliyun.com/document_detail/2679680.html) to start the instance.
       * - Instances that are locked for security reasons cannot be stopped by calling this operation. For more information, see [Impacts of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request StopInstancesRequest
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstances(const Models::StopInstancesRequest &request);

      /**
       * @summary Stops a running Cloud Assistant command process on one or more ECS instances.
       *
       * @description ## Operation description
       * - After you stop a one-time command process, instances that have started the execution continue to run, and instances that have not started the execution will not run.
       * - After you stop a periodic command process, commands that have started the execution continue to run, but subsequent executions will not be triggered.
       *
       * @param request StopInvocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocationWithOptions(const Models::StopInvocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running Cloud Assistant command process on one or more ECS instances.
       *
       * @description ## Operation description
       * - After you stop a one-time command process, instances that have started the execution continue to run, and instances that have not started the execution will not run.
       * - After you stop a periodic command process, commands that have started the execution continue to run, but subsequent executions will not be triggered.
       *
       * @param request StopInvocationRequest
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocation(const Models::StopInvocationRequest &request);

      /**
       * @summary Creates and binds tags to specified ECS resources in a single operation.
       *
       * @description ## Operation description
       * Before you attach tags, Alibaba Cloud checks the number of existing tags on the resource. If the maximum number of tags is exceeded, an error message is returned. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to specified ECS resources in a single operation.
       *
       * @description ## Operation description
       * Before you attach tags, Alibaba Cloud checks the number of existing tags on the resource. If the maximum number of tags is exceeded, an error message is returned. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @deprecated OpenAPI TerminatePhysicalConnection is deprecated, please use Vpc::2016-04-28::TerminatePhysicalConnection instead.
       *
       * @summary Terminates a physical connection.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnectionWithOptions(const Models::TerminatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TerminatePhysicalConnection is deprecated, please use Vpc::2016-04-28::TerminatePhysicalConnection instead.
       *
       * @summary Terminates a physical connection.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnection(const Models::TerminatePhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI TerminateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::TerminateVirtualBorderRouter instead.
       *
       * @summary Terminates a virtual border router (VBR).
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouterWithOptions(const Models::TerminateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TerminateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::TerminateVirtualBorderRouter instead.
       *
       * @summary Terminates a virtual border router (VBR).
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouter(const Models::TerminateVirtualBorderRouterRequest &request);

      /**
       * @summary Unassigns one or more IPv6 addresses from an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * When you invoke this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **Active** (Available) or **InUse** state.
       * - If you are operating on a primary network interface controller (NIC), the ECS instance to which the NIC is attached must be in the **Running** or **Stopped** state.
       *
       * @param request UnassignIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignIpv6AddressesResponse
       */
      Models::UnassignIpv6AddressesResponse unassignIpv6AddressesWithOptions(const Models::UnassignIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassigns one or more IPv6 addresses from an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * When you invoke this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **Active** (Available) or **InUse** state.
       * - If you are operating on a primary network interface controller (NIC), the ECS instance to which the NIC is attached must be in the **Running** or **Stopped** state.
       *
       * @param request UnassignIpv6AddressesRequest
       * @return UnassignIpv6AddressesResponse
       */
      Models::UnassignIpv6AddressesResponse unassignIpv6Addresses(const Models::UnassignIpv6AddressesRequest &request);

      /**
       * @summary Removes one or more secondary private IP addresses from an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * - Only Elastic Network Interfaces (ENIs) in the **Active** (Available) or **InUse** (InUse) state are supported.
       * - When you operate on a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddressesWithOptions(const Models::UnassignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more secondary private IP addresses from an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * - Only Elastic Network Interfaces (ENIs) in the **Active** (Available) or **InUse** (InUse) state are supported.
       * - When you operate on a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddresses(const Models::UnassignPrivateIpAddressesRequest &request);

      /**
       * @deprecated OpenAPI UnassociateEipAddress is deprecated, please use Vpc::2016-04-28::UnassociateEipAddress instead.
       *
       * @summary UnassociateEipAddress.
       *
       * @param request UnassociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddressWithOptions(const Models::UnassociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UnassociateEipAddress is deprecated, please use Vpc::2016-04-28::UnassociateEipAddress instead.
       *
       * @summary UnassociateEipAddress.
       *
       * @param request UnassociateEipAddressRequest
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddress(const Models::UnassociateEipAddressRequest &request);

      /**
       * @deprecated OpenAPI UnassociateHaVip is deprecated, please use Vpc::2016-04-28::UnassociateHaVip instead.
       *
       * @summary Disassociates an HaVip from an ECS instance.
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UnassociateHaVip is deprecated, please use Vpc::2016-04-28::UnassociateHaVip instead.
       *
       * @summary Disassociates an HaVip from an ECS instance.
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

      /**
       * @summary Unlocks a snapshot that is locked in compliance mode but is still within the cooling-off period. If the snapshot is locked in compliance mode and the cooling-off period has ended, the snapshot cannot be unlocked.
       *
       * @param request UnlockSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockSnapshotResponse
       */
      Models::UnlockSnapshotResponse unlockSnapshotWithOptions(const Models::UnlockSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a snapshot that is locked in compliance mode but is still within the cooling-off period. If the snapshot is locked in compliance mode and the cooling-off period has ended, the snapshot cannot be unlocked.
       *
       * @param request UnlockSnapshotRequest
       * @return UnlockSnapshotResponse
       */
      Models::UnlockSnapshotResponse unlockSnapshot(const Models::UnlockSnapshotRequest &request);

      /**
       * @summary Unbinds tags from specified ECS resources. After a tag is unbound, the tag is automatically deleted if it is not bound to any other resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from specified ECS resources. After a tag is unbound, the tag is automatically deleted if it is not bound to any other resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
