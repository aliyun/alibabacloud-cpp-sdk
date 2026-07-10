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
       * @summary Accepts and authorizes the execution of a system event operation. For system events in the Inquiring state, this operation accepts the default action of the system event and authorizes the system to execute the default action.
       *
       * @param request AcceptInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptInquiredSystemEventResponse
       */
      Models::AcceptInquiredSystemEventResponse acceptInquiredSystemEventWithOptions(const Models::AcceptInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts and authorizes the execution of a system event operation. For system events in the Inquiring state, this operation accepts the default action of the system event and authorizes the system to execute the default action.
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
       * @summary Adds or overwrites one or more tags on various Elastic Compute Service (ECS) resources. You can add tags to instances, cloud disks, snapshots, images, security groups, and other resources for easier management.
       *
       * @description When you invoke this operation, take note of the following items:
       * -   You can add up to 20 tags to each Elastic Compute Service (ECS) resource.
       * -   The tag key (Tag.N.Key) and tag value (Tag.N.Value) must be specified as a key-value pair.
       * -   If the tag key (Tag.N.Key) already exists on the specified resource, the original tag value is automatically overwritten with the new tag value (Tag.N.Value).
       *
       * @param request AddTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTags is deprecated, please use Ecs::2014-05-26::TagResources instead.
       *
       * @summary Adds or overwrites one or more tags on various Elastic Compute Service (ECS) resources. You can add tags to instances, cloud disks, snapshots, images, security groups, and other resources for easier management.
       *
       * @description When you invoke this operation, take note of the following items:
       * -   You can add up to 20 tags to each Elastic Compute Service (ECS) resource.
       * -   The tag key (Tag.N.Key) and tag value (Tag.N.Value) must be specified as a key-value pair.
       * -   If the tag key (Tag.N.Key) already exists on the specified resource, the original tag value is automatically overwritten with the new tag value (Tag.N.Value).
       *
       * @param request AddTagsRequest
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTags(const Models::AddTagsRequest &request);

      /**
       * @summary Creates pay-as-you-go or subscription dedicated hosts. A dedicated host is a physical server dedicated to a single tenant. You can create Elastic Compute Service (ECS) instances on a dedicated host and view the attributes of a dedicated host.
       *
       * @description Before you create a dedicated host, you can call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation to query the resources available in a specific region or zone.
       * We recommend that you understand the billing methods of resources before you create a dedicated host. You are charged for resources used by the created dedicated host. For more information, see [Billing overview](https://help.aliyun.com/document_detail/68978.html).
       * - You can create up to 100 pay-as-you-go or subscription dedicated hosts at a time.
       * - After a dedicated host is created, you can use the returned dedicated host ID as the value of a request parameter to call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the state of the dedicated host.
       * - After you submit a request to create a dedicated host, an error is returned if a specific parameter is invalid or if the requested resources are insufficient. For more information about error causes, see the "Error codes" section of this topic.
       * - After a dedicated host is created, you can call the [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) operation to migrate ECS instances from a shared host to the dedicated host. You can also migrate ECS instances from another dedicated host to the created dedicated host.
       *
       * @param request AllocateDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateDedicatedHostsResponse
       */
      Models::AllocateDedicatedHostsResponse allocateDedicatedHostsWithOptions(const Models::AllocateDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates pay-as-you-go or subscription dedicated hosts. A dedicated host is a physical server dedicated to a single tenant. You can create Elastic Compute Service (ECS) instances on a dedicated host and view the attributes of a dedicated host.
       *
       * @description Before you create a dedicated host, you can call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation to query the resources available in a specific region or zone.
       * We recommend that you understand the billing methods of resources before you create a dedicated host. You are charged for resources used by the created dedicated host. For more information, see [Billing overview](https://help.aliyun.com/document_detail/68978.html).
       * - You can create up to 100 pay-as-you-go or subscription dedicated hosts at a time.
       * - After a dedicated host is created, you can use the returned dedicated host ID as the value of a request parameter to call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the state of the dedicated host.
       * - After you submit a request to create a dedicated host, an error is returned if a specific parameter is invalid or if the requested resources are insufficient. For more information about error causes, see the "Error codes" section of this topic.
       * - After a dedicated host is created, you can call the [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) operation to migrate ECS instances from a shared host to the dedicated host. You can also migrate ECS instances from another dedicated host to the created dedicated host.
       *
       * @param request AllocateDedicatedHostsRequest
       * @return AllocateDedicatedHostsResponse
       */
      Models::AllocateDedicatedHostsResponse allocateDedicatedHosts(const Models::AllocateDedicatedHostsRequest &request);

      /**
       * @deprecated OpenAPI AllocateEipAddress is deprecated, please use Vpc::2016-04-28::AllocateEipAddress instead.
       *
       * @summary AllocateEipAddress
       *
       * @description > This API has been upgraded and is no longer recommended. For instructions on the new API, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       *
       * @param request AllocateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddressWithOptions(const Models::AllocateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AllocateEipAddress is deprecated, please use Vpc::2016-04-28::AllocateEipAddress instead.
       *
       * @summary AllocateEipAddress
       *
       * @description > This API has been upgraded and is no longer recommended. For instructions on the new API, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Assigns a static public IP address (also called system-assigned public IP address or auto-assigned public IP address) to an Elastic Compute Service (ECS) instance.
       *
       * @description ### [](#)Precautions
       * - The ECS instance to which you want to assign a static public IP address must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       * - If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason" : "security"` for an ECS instance, the instance is [locked for security reasons](https://help.aliyun.com/document_detail/25695.html) and cannot be assigned a static public IP address.
       * - When you call the AllocatePublicIpAddress operation for an ECS instance, make sure that the public bandwidth of the instance is greater than 0 Mbit/s. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to change the public bandwidth.
       * ### [](#)Considerations
       * - Only users in the whitelist can specify `IpAddress` in the AllocatePublicIpAddress operation. If the public bandwidth of your ECS instance is greater than 0 Mbit/s, you can specify the ID of the instance (`InstanceId`) to randomly assign a static public IP address to the instance. If the public bandwidth of your ECS instance is 0 Mbit/s, you must call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to increase the public bandwidth of the instance before you call the AllocatePublicIpAddress operation.
       * - You can assign only one static public IP address to an ECS instance. If the instance already has a static public IP address, the static public IP address is returned for the `IpAddress` response parameter.
       * - After you assign a static public IP address to an ECS instance, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the public IP address to take effect.
       * If an ECS instance resides in a virtual private cloud (VPC), you can assign a static public IP address to the instance or associate an elastic IP address (EIP) with the instance. For more information, see [AssociateEipAddress](https://help.aliyun.com/document_detail/2518064.html).
       *
       * @param request AllocatePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicIpAddressResponse
       */
      Models::AllocatePublicIpAddressResponse allocatePublicIpAddressWithOptions(const Models::AllocatePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a static public IP address (also called system-assigned public IP address or auto-assigned public IP address) to an Elastic Compute Service (ECS) instance.
       *
       * @description ### [](#)Precautions
       * - The ECS instance to which you want to assign a static public IP address must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       * - If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason" : "security"` for an ECS instance, the instance is [locked for security reasons](https://help.aliyun.com/document_detail/25695.html) and cannot be assigned a static public IP address.
       * - When you call the AllocatePublicIpAddress operation for an ECS instance, make sure that the public bandwidth of the instance is greater than 0 Mbit/s. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to change the public bandwidth.
       * ### [](#)Considerations
       * - Only users in the whitelist can specify `IpAddress` in the AllocatePublicIpAddress operation. If the public bandwidth of your ECS instance is greater than 0 Mbit/s, you can specify the ID of the instance (`InstanceId`) to randomly assign a static public IP address to the instance. If the public bandwidth of your ECS instance is 0 Mbit/s, you must call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to increase the public bandwidth of the instance before you call the AllocatePublicIpAddress operation.
       * - You can assign only one static public IP address to an ECS instance. If the instance already has a static public IP address, the static public IP address is returned for the `IpAddress` response parameter.
       * - After you assign a static public IP address to an ECS instance, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the public IP address to take effect.
       * If an ECS instance resides in a virtual private cloud (VPC), you can assign a static public IP address to the instance or associate an elastic IP address (EIP) with the instance. For more information, see [AssociateEipAddress](https://help.aliyun.com/document_detail/2518064.html).
       *
       * @param request AllocatePublicIpAddressRequest
       * @return AllocatePublicIpAddressResponse
       */
      Models::AllocatePublicIpAddressResponse allocatePublicIpAddress(const Models::AllocatePublicIpAddressRequest &request);

      /**
       * @summary Applies an automatic snapshot policy to one or more disks.
       *
       * @description - Each disk supports up to 10 automatic snapshot policies.
       * - If a target disk already has an automatic snapshot policy, this operation adds the new policy without replacing the existing ones.
       * > To avoid unexpected charges, make sure to cancel any automatic snapshot policies that you no longer need.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an automatic snapshot policy to one or more disks.
       *
       * @description - Each disk supports up to 10 automatic snapshot policies.
       * - If a target disk already has an automatic snapshot policy, this operation adds the new policy without replacing the existing ones.
       * > To avoid unexpected charges, make sure to cancel any automatic snapshot policies that you no longer need.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Assigns one or more IPv6 addresses to an Elastic Network Interface (ENI).
       *
       * @description ## Operation description
       * You can specify IPv6 addresses from the CIDR block of the vSwitch to which the Elastic Network Interface (ENI) belongs, or specify the number of IPv6 addresses for automatic creation. Note the following items:
       * - The vSwitch to which the ENI belongs must have IPv6 enabled. For more information, see [Enable an IPv6 CIDR block for an existing vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * - The ENI must be in the Active (Available) or InUse state.
       * - When you operate a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the Running or Stopped state.
       * - The number of IPv6 addresses that can be allocated to a single network interface controller (NIC) depends on the instance type of the instance to which the ENI is attached.
       *     - If the ENI is in the Active (Available) state, you can allocate up to 10 IPv6 addresses to it.
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
       * You can specify IPv6 addresses from the CIDR block of the vSwitch to which the Elastic Network Interface (ENI) belongs, or specify the number of IPv6 addresses for automatic creation. Note the following items:
       * - The vSwitch to which the ENI belongs must have IPv6 enabled. For more information, see [Enable an IPv6 CIDR block for an existing vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * - The ENI must be in the Active (Available) or InUse state.
       * - When you operate a primary ENI, the instance to which the network interface controller (NIC) is attached must be in the Running or Stopped state.
       * - The number of IPv6 addresses that can be allocated to a single network interface controller (NIC) depends on the instance type of the instance to which the ENI is attached.
       *     - If the ENI is in the Active (Available) state, you can allocate up to 10 IPv6 addresses to it.
       *     - If the ENI is attached to an instance, the number of IPv6 addresses that can be allocated is limited by the instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
       * - After you successfully invoke this operation, you can obtain the allocated IPv6 address information from the response.
       *
       * @param request AssignIpv6AddressesRequest
       * @return AssignIpv6AddressesResponse
       */
      Models::AssignIpv6AddressesResponse assignIpv6Addresses(const Models::AssignIpv6AddressesRequest &request);

      /**
       * @summary Allocates one or more secondary private IP addresses to an Elastic Network Interface (ENI). You can specify available private IP addresses from the vSwitch to which the ENI belongs, or automatically allocate private IP addresses by specifying the number of private endpoint addresses.
       *
       * @description ## Operation description
       * - Only ENIs in the Available or InUse state are supported.
       * - When you operate a primary ENI, the instance to which the ENI is attached must be in the Running or Stopped state.
       * - When an ENI is in the Available state, you can allocate up to 49 secondary private IP addresses to it. After the ENI is attached to an instance, the number of secondary private IP addresses that can be allocated is limited by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       * - After you call this operation, you can obtain the allocated secondary private IP address information from the response.
       *
       * @param request AssignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddressesWithOptions(const Models::AssignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates one or more secondary private IP addresses to an Elastic Network Interface (ENI). You can specify available private IP addresses from the vSwitch to which the ENI belongs, or automatically allocate private IP addresses by specifying the number of private endpoint addresses.
       *
       * @description ## Operation description
       * - Only ENIs in the Available or InUse state are supported.
       * - When you operate a primary ENI, the instance to which the ENI is attached must be in the Running or Stopped state.
       * - When an ENI is in the Available state, you can allocate up to 49 secondary private IP addresses to it. After the ENI is attached to an instance, the number of secondary private IP addresses that can be allocated is limited by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
       * - After you call this operation, you can obtain the allocated secondary private IP address information from the response.
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
       * @summary Associates a high-availability virtual IP address (HaVip) with a specified instance.
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssociateHaVip is deprecated, please use Vpc::2016-04-28::AssociateHaVip instead.
       *
       * @summary Associates a high-availability virtual IP address (HaVip) with a specified instance.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Links an instance that is deployed in the classic network to a virtual private cloud (VPC) by establishing a ClassicLink connection between the instance and the VPC. This way, the instance can communicate with cloud resources in the VPC over the internal network.
       *
       * @description When you call this operation, take note of the following items:
       * - The instance that you want to connect to a VPC must be in the **Running** or **Stopped** state.
       * - The ClassicLink feature must be enabled for the destination VPC. For more information, see [Create a ClassicLink connection](https://help.aliyun.com/document_detail/65413.html).
       * - The instance and the VPC must reside in the same region.
       *
       * @param request AttachClassicLinkVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachClassicLinkVpcResponse
       */
      Models::AttachClassicLinkVpcResponse attachClassicLinkVpcWithOptions(const Models::AttachClassicLinkVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Links an instance that is deployed in the classic network to a virtual private cloud (VPC) by establishing a ClassicLink connection between the instance and the VPC. This way, the instance can communicate with cloud resources in the VPC over the internal network.
       *
       * @description When you call this operation, take note of the following items:
       * - The instance that you want to connect to a VPC must be in the **Running** or **Stopped** state.
       * - The ClassicLink feature must be enabled for the destination VPC. For more information, see [Create a ClassicLink connection](https://help.aliyun.com/document_detail/65413.html).
       * - The instance and the VPC must reside in the same region.
       *
       * @param request AttachClassicLinkVpcRequest
       * @return AttachClassicLinkVpcResponse
       */
      Models::AttachClassicLinkVpcResponse attachClassicLinkVpc(const Models::AttachClassicLinkVpcRequest &request);

      /**
       * @summary Attaches a pay-as-you-go data disk or a system disk to an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - The ECS instance and the disk must reside in the same zone.
       * - The disk must be in the **Unattached** (`Available`) state.
       * - When you attach the disk as a data disk to an ECS instance, take note of the following items:
       *   - The ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *   - If the disk was separately purchased, the billing method of the disk must be pay-as-you-go.
       *   - If the disk is a system disk that was detached from an ECS instance, no limits apply to the billing method of the disk.
       *   - If the disk is an elastic ephemeral disk that was detached from an ECS instance, the disk can be attached only to the instance.
       * - When you attach the disk as the system disk to an ECS instance, take note of the following items:
       *   - The ECS instance must be the original instance from which the system disk was detached.
       *   - The ECS instance must be in the **Stopped** (`Stopped`) state.
       *   - You must configure logon credentials for the ECS instance.
       *   - The disk cannot be an elastic ephemeral disk.
       *   - For more information about how to attach a system disk, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons. No operations are allowed on the instance.
       *
       * @param request AttachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDiskWithOptions(const Models::AttachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a pay-as-you-go data disk or a system disk to an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - The ECS instance and the disk must reside in the same zone.
       * - The disk must be in the **Unattached** (`Available`) state.
       * - When you attach the disk as a data disk to an ECS instance, take note of the following items:
       *   - The ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *   - If the disk was separately purchased, the billing method of the disk must be pay-as-you-go.
       *   - If the disk is a system disk that was detached from an ECS instance, no limits apply to the billing method of the disk.
       *   - If the disk is an elastic ephemeral disk that was detached from an ECS instance, the disk can be attached only to the instance.
       * - When you attach the disk as the system disk to an ECS instance, take note of the following items:
       *   - The ECS instance must be the original instance from which the system disk was detached.
       *   - The ECS instance must be in the **Stopped** (`Stopped`) state.
       *   - You must configure logon credentials for the ECS instance.
       *   - The disk cannot be an elastic ephemeral disk.
       *   - For more information about how to attach a system disk, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons. No operations are allowed on the instance.
       *
       * @param request AttachDiskRequest
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDisk(const Models::AttachDiskRequest &request);

      /**
       * @summary Attaches an instance Resource Access Management (RAM) role to Elastic Compute Service (ECS) instances.
       *
       * @description You can call the [DescribeInstanceRamRole](https://help.aliyun.com/document_detail/2679686.html) operation to query the [instance RAM roles](https://help.aliyun.com/document_detail/61175.html) that are attached to ECS instances.
       * > If an ECS instance already has an instance RAM role, an error is returned when you attach another instance RAM role to the instance.
       *
       * @param request AttachInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstanceRamRoleResponse
       */
      Models::AttachInstanceRamRoleResponse attachInstanceRamRoleWithOptions(const Models::AttachInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an instance Resource Access Management (RAM) role to Elastic Compute Service (ECS) instances.
       *
       * @description You can call the [DescribeInstanceRamRole](https://help.aliyun.com/document_detail/2679686.html) operation to query the [instance RAM roles](https://help.aliyun.com/document_detail/61175.html) that are attached to ECS instances.
       * > If an ECS instance already has an instance RAM role, an error is returned when you attach another instance RAM role to the instance.
       *
       * @param request AttachInstanceRamRoleRequest
       * @return AttachInstanceRamRoleResponse
       */
      Models::AttachInstanceRamRoleResponse attachInstanceRamRole(const Models::AttachInstanceRamRoleRequest &request);

      /**
       * @summary Bind an SSH key pair to one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * - Windows instances do not support SSH key pairs.
       * - After you bind an SSH key pair to an instance, authentication by using a username and password is disabled.
       * - If the instance is in the **Running** state, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the SSH key pair to take effect.
       * - If the instance is in the **Stopped** state, start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the SSH key pair to take effect.
       * - If an SSH key pair is already bound to the instance, the new SSH key pair automatically replaces the original one.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind an SSH key pair to one or more Linux instances.
       *
       * @description When you call this operation, take note of the following items:
       * - Windows instances do not support SSH key pairs.
       * - After you bind an SSH key pair to an instance, authentication by using a username and password is disabled.
       * - If the instance is in the **Running** state, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the SSH key pair to take effect.
       * - If the instance is in the **Stopped** state, start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the SSH key pair to take effect.
       * - If an SSH key pair is already bound to the instance, the new SSH key pair automatically replaces the original one.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Calls the AttachNetworkInterface operation to attach an Elastic Network Interface (ENI) to a VPC-connected ECS instance. You can specify parameters such as NetworkInterfaceId, InstanceId, and NetworkCardIndex.
       *
       * @description When you call this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **active** (`Available`) state. An ENI can be attached to only one instance that resides in the same zone and VPC as the network interface controller (NIC).
       * - The ECS instance must be in the Running or Stopped state. Some ECS instance types require the ECS instance to be in the Stopped state when you attach an Elastic Network Interface (ENI). For more information, see the section about ECS instance types that require the ECS instance to be stopped in [Attach an ENI](https://help.aliyun.com/document_detail/58503.html).
       *     > If the instance was last started before April 1, 2018 (including but not limited to starting a newly purchased instance, restarting, or powering on), you must invoke RebootInstance to restart the instance that has been in the Running state. Otherwise, the network interface controller (NIC) cannot be attached.
       * - Multiple Elastic Network Interfaces (ENIs) can be attached to a single instance at the same time. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       *   
       * - The vSwitch to which the network interface controller (NIC) belongs must be in the same zone and VPC as the instance.
       * - This is an asynchronous operation. After a successful invocation, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/esgu/AttachNetworkInterface.jpg)
       *     - Attaching indicates that the request to attach the ENI was sent successfully and the ENI is being attached to the ECS instance.
       *     - InUse indicates that the ENI has been attached to the ECS instance.
       *     - Available indicates that the ENI failed to be attached to the ECS instance.
       * **For details, see** [Attach a network interface controller (NIC)](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterfaceWithOptions(const Models::AttachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AttachNetworkInterface operation to attach an Elastic Network Interface (ENI) to a VPC-connected ECS instance. You can specify parameters such as NetworkInterfaceId, InstanceId, and NetworkCardIndex.
       *
       * @description When you call this operation, take note of the following items:
       * - The Elastic Network Interface (ENI) must be in the **active** (`Available`) state. An ENI can be attached to only one instance that resides in the same zone and VPC as the network interface controller (NIC).
       * - The ECS instance must be in the Running or Stopped state. Some ECS instance types require the ECS instance to be in the Stopped state when you attach an Elastic Network Interface (ENI). For more information, see the section about ECS instance types that require the ECS instance to be stopped in [Attach an ENI](https://help.aliyun.com/document_detail/58503.html).
       *     > If the instance was last started before April 1, 2018 (including but not limited to starting a newly purchased instance, restarting, or powering on), you must invoke RebootInstance to restart the instance that has been in the Running state. Otherwise, the network interface controller (NIC) cannot be attached.
       * - Multiple Elastic Network Interfaces (ENIs) can be attached to a single instance at the same time. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       *   
       * - The vSwitch to which the network interface controller (NIC) belongs must be in the same zone and VPC as the instance.
       * - This is an asynchronous operation. After a successful invocation, you can check the Elastic Network Interface (ENI) status or listen for network interface controller (NIC) operation events to obtain the result. The ENI state machine is shown in the following figure:
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/zh-CN/20221124/esgu/AttachNetworkInterface.jpg)
       *     - Attaching indicates that the request to attach the ENI was sent successfully and the ENI is being attached to the ECS instance.
       *     - InUse indicates that the ENI has been attached to the ECS instance.
       *     - Available indicates that the ENI failed to be attached to the ECS instance.
       * **For details, see** [Attach a network interface controller (NIC)](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterface(const Models::AttachNetworkInterfaceRequest &request);

      /**
       * @summary Adds one or more inbound rules to a security group. You can use this operation to specify inbound access permissions for a security group, allowing or denying other devices from sending inbound traffic to instances in the security group, which enables fine-grained network access control.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of security group rules (including inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of inbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence. Access is denied first.
       * ### Notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an inbound security group rule:
       * - Source settings: Specify one of the following: SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization for access from other security groups. Basic security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add inbound rules with different sources to a security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"cn-hangzhou", // Specify the region.
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group.
       *     "Permissions":[
       *          {
       *            "SourceCidrIp":"10.0.0.0/8", // Specify the source IPv4 address.
       *            "PortRange":"22/22", // Specify the port range.
       *            "IpProtocol":"TCP", // Specify the protocol type.
       *            "Policy":"Accept" // Specify the access policy.
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"cn-hangzhou",
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *          {
       *            "SourceGroupId":"sg-bp17vs63txqxbd****", // Specify the source security group.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list.
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
       * - **Quantity limit:** The total number of security group rules (including inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of inbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence. Access is denied first.
       * ### Notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an inbound security group rule:
       * - Source settings: Specify one of the following: SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization for access from other security groups. Basic security groups support a maximum of 20 authorized security groups.
       * ### Request examples
       * The following examples show how to add inbound rules with different sources to a security group in the China (Hangzhou) region:
       *   - Add access permissions for a specified IP address range.
       *     ```
       *     "RegionId":"cn-hangzhou", // Specify the region.
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group.
       *     "Permissions":[
       *          {
       *            "SourceCidrIp":"10.0.0.0/8", // Specify the source IPv4 address.
       *            "PortRange":"22/22", // Specify the port range.
       *            "IpProtocol":"TCP", // Specify the protocol type.
       *            "Policy":"Accept" // Specify the access policy.
       *          }
       *     ]
       *     ```
       *   - Add access permissions for another security group and a prefix list.
       *     ```
       *     "RegionId":"cn-hangzhou",
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *          {
       *            "SourceGroupId":"sg-bp17vs63txqxbd****", // Specify the source security group.
       *            "PortRange":"22/22",
       *            "IpProtocol":"TCP",
       *            "Policy":"Drop"
       *          },{
       *            "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list.
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
       * @summary Adds one or more outbound rules to a security group. You can use this operation to specify outbound access permissions for a security group, allowing or denying instances in the security group from sending outbound traffic to other devices, which enables fine-grained network access control.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of outbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence.
       * ### Notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an outbound rule:
       * - Destination settings: Specify one of the following: DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization of other security groups for access. Custom security groups support a maximum of 20 authorized security groups.
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
       * @summary Adds one or more outbound rules to a security group. You can use this operation to specify outbound access permissions for a security group, allowing or denying instances in the security group from sending outbound traffic to other devices, which enables fine-grained network access control.
       *
       * @description ### Before you begin
       * - **Quantity limit:** The total number of rules (including both inbound rules and outbound rules) across all security groups associated with a single network interface controller (NIC) cannot exceed 1,000. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).  
       * - **Priority settings:** The priority (Priority) of outbound security group rules ranges from 1 to 100. A smaller number indicates a higher priority. If two security group rules have the same priority, the deny (drop) rule takes precedence.
       * ### Notes
       * If the specified security group rule already exists, the call succeeds but no rule is added.
       * ### How to determine a rule
       * The following parameters are required to determine an outbound rule:
       * - Destination settings: Specify one of the following: DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
       * - Destination port range: PortRange.
       * - Protocol type: IpProtocol.
       * - Access policy: Policy.
       * > Advanced security groups do not support authorization of other security groups for access. Custom security groups support a maximum of 20 authorized security groups.
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
       * @summary Cancels an auto snapshot policy for one or more disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an auto snapshot policy for one or more disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels an ongoing CopyImage task.
       *
       * @description When you call this operation, take note of the following items:
       * - After you cancel the image copy task, the image that was being created in the destination region is automatically deleted. The source image remains unchanged.
       * - If the image copy task is already complete, the operation fails and an error message is returned.
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
       * - After you cancel the image copy task, the image that was being created in the destination region is automatically deleted. The source image remains unchanged.
       * - If the image copy task is already complete, the operation fails and an error message is returned.
       *
       * @param request CancelCopyImageRequest
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImage(const Models::CancelCopyImageRequest &request);

      /**
       * @summary Cancels an image build task.
       *
       * @description Before you call this operation, make sure that the image build task you want to cancel is in the PREPARING, REPAIRING, or BUILDING state.
       *
       * @param request CancelImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelImagePipelineExecutionResponse
       */
      Models::CancelImagePipelineExecutionResponse cancelImagePipelineExecutionWithOptions(const Models::CancelImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an image build task.
       *
       * @description Before you call this operation, make sure that the image build task you want to cancel is in the PREPARING, REPAIRING, or BUILDING state.
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
       * @summary Cancels a running task. You can cancel the running tasks generated by the ImportImage or ExportImage operation.
       *
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running task. You can cancel the running tasks generated by the ImportImage or ExportImage operation.
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary Disk cloning allows you to quickly create a new disk with the same data as the source disk in the same zone. The new disk supports custom capacity, type, and encryption attributes. After the new disk is attached to an instance, you can quickly replicate business data or horizontally scale your services.
       *
       * @description > The disk cloning feature itself is free of charge, but the new disk generated by cloning is billed based on block storage billing rules. Billable items vary by disk type and include disk capacity fees, provisioned performance fees, and performance burst fees. Except for performance burst fees, which are billed after a burst occurs, all other fees start to accrue after the disk is created, regardless of whether the disk is attached to an instance.
       * ### How to use
       * - This is an asynchronous operation. After a successful call, use the taskGroupId and call the DescribeTasks operation to obtain the execution result.
       * ### Features
       * - Cloning supports only ESSD series disks (cloud_essd, cloud_auto, cloud_essd_entry, cloud_regional_disk_auto) as the source, and the `new disk` can only be an ESSD series disk type.
       *   - Non-regional disks can only be cloned to non-regional disk types. Regional disks can only be cloned to regional disk types.
       *   - Local disks and elastic ephemeral disks cannot be cloned or used as clone sources.
       * - You can specify the `new disk` type and performance level (PL) during cloning.
       * - You can specify the `new disk` capacity during cloning, but the new disk capacity must be greater than or equal to the `source disk` capacity.
       * - You can configure provisioned performance and performance burst for the `new disk`, provided that the destination disk type supports provisioned performance and performance burst.
       * - You can specify encryption for the `new disk` and change the encryption key. If the `source disk` is encrypted, you cannot clone it into an unencrypted disk, but you can change the encryption key.
       * - You can use a subscription disk as the `source disk`. Even if the subscription disk has expired, it can still be used as the `source disk`.
       * - The `new disk` created by cloning does not support reinitialization.
       * - Cloning does not support storage sets or dedicated block storage clusters, but disks in them can be used as the `source disk`. The cloned disk will not be in the storage set or dedicated block storage cluster.
       * - `Source disk` status restrictions:
       *   - The `source disk` status is "In Use" and the corresponding instance status is "Running" or "Stopped".
       *   - The `source disk` status is "Available" and the disk has been previously attached.
       *   - A disk undergoing a specification change cannot be used as the `source disk`.
       *   - A disk undergoing expansion cannot be used as the `source disk`.
       * - Disk cloning is not supported for instance hibernation scenarios. If a disk is on a hibernated instance, it cannot be used as the `source disk`.
       *
       * @param request CloneDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDisksResponse
       */
      Models::CloneDisksResponse cloneDisksWithOptions(const Models::CloneDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disk cloning allows you to quickly create a new disk with the same data as the source disk in the same zone. The new disk supports custom capacity, type, and encryption attributes. After the new disk is attached to an instance, you can quickly replicate business data or horizontally scale your services.
       *
       * @description > The disk cloning feature itself is free of charge, but the new disk generated by cloning is billed based on block storage billing rules. Billable items vary by disk type and include disk capacity fees, provisioned performance fees, and performance burst fees. Except for performance burst fees, which are billed after a burst occurs, all other fees start to accrue after the disk is created, regardless of whether the disk is attached to an instance.
       * ### How to use
       * - This is an asynchronous operation. After a successful call, use the taskGroupId and call the DescribeTasks operation to obtain the execution result.
       * ### Features
       * - Cloning supports only ESSD series disks (cloud_essd, cloud_auto, cloud_essd_entry, cloud_regional_disk_auto) as the source, and the `new disk` can only be an ESSD series disk type.
       *   - Non-regional disks can only be cloned to non-regional disk types. Regional disks can only be cloned to regional disk types.
       *   - Local disks and elastic ephemeral disks cannot be cloned or used as clone sources.
       * - You can specify the `new disk` type and performance level (PL) during cloning.
       * - You can specify the `new disk` capacity during cloning, but the new disk capacity must be greater than or equal to the `source disk` capacity.
       * - You can configure provisioned performance and performance burst for the `new disk`, provided that the destination disk type supports provisioned performance and performance burst.
       * - You can specify encryption for the `new disk` and change the encryption key. If the `source disk` is encrypted, you cannot clone it into an unencrypted disk, but you can change the encryption key.
       * - You can use a subscription disk as the `source disk`. Even if the subscription disk has expired, it can still be used as the `source disk`.
       * - The `new disk` created by cloning does not support reinitialization.
       * - Cloning does not support storage sets or dedicated block storage clusters, but disks in them can be used as the `source disk`. The cloned disk will not be in the storage set or dedicated block storage cluster.
       * - `Source disk` status restrictions:
       *   - The `source disk` status is "In Use" and the corresponding instance status is "Running" or "Stopped".
       *   - The `source disk` status is "Available" and the disk has been previously attached.
       *   - A disk undergoing a specification change cannot be used as the `source disk`.
       *   - A disk undergoing expansion cannot be used as the `source disk`.
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
       * @summary Converts the static public IP address of an Elastic Compute Service (ECS) instance that resides in a virtual private cloud (VPC) into an elastic IP address (EIP). Static public IP addresses are the public IP addresses that are automatically assigned to ECS instances.
       *
       * @description ## [](#)Usage notes
       * After a public IP address is converted into an EIP, the EIP is billed separately. Make sure that you fully understand the billing methods of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * When you call this operation, make sure that the ECS instance meets the following requirements:
       * - The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * - The instance has no EIPs associated.
       * - The instance has no configuration change tasks that have not taken effect.
       * - The public bandwidth of the instance is not 0 Mbit/s.
       * - If the instance is a subscription instance, the billing method for network usage of the instance must be `pay-by-traffic`. The public IP address of a subscription instance that uses the `pay-by-bandwidth` billing method for network usage cannot be converted into an EIP. This requirement does not apply to pay-as-you-go instances. For more information, see [Change the billing method for network usage](https://help.aliyun.com/document_detail/178883.html).
       * - If the instance is a subscription instance that resides in a VPC, the instance does not expire within 24 hours.
       *
       * @param request ConvertNatPublicIpToEipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertNatPublicIpToEipResponse
       */
      Models::ConvertNatPublicIpToEipResponse convertNatPublicIpToEipWithOptions(const Models::ConvertNatPublicIpToEipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts the static public IP address of an Elastic Compute Service (ECS) instance that resides in a virtual private cloud (VPC) into an elastic IP address (EIP). Static public IP addresses are the public IP addresses that are automatically assigned to ECS instances.
       *
       * @description ## [](#)Usage notes
       * After a public IP address is converted into an EIP, the EIP is billed separately. Make sure that you fully understand the billing methods of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * When you call this operation, make sure that the ECS instance meets the following requirements:
       * - The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * - The instance has no EIPs associated.
       * - The instance has no configuration change tasks that have not taken effect.
       * - The public bandwidth of the instance is not 0 Mbit/s.
       * - If the instance is a subscription instance, the billing method for network usage of the instance must be `pay-by-traffic`. The public IP address of a subscription instance that uses the `pay-by-bandwidth` billing method for network usage cannot be converted into an EIP. This requirement does not apply to pay-as-you-go instances. For more information, see [Change the billing method for network usage](https://help.aliyun.com/document_detail/178883.html).
       * - If the instance is a subscription instance that resides in a VPC, the instance does not expire within 24 hours.
       *
       * @param request ConvertNatPublicIpToEipRequest
       * @return ConvertNatPublicIpToEipResponse
       */
      Models::ConvertNatPublicIpToEipResponse convertNatPublicIpToEip(const Models::ConvertNatPublicIpToEipRequest &request);

      /**
       * @summary Copies a custom image from one region to another region. You can copy custom images to deploy or copy Elastic Compute Service (ECS) instances across regions.
       *
       * @description ## [](#)Usage notes
       * After you copy a custom image to the destination region, you can use the image copy (new image) to create ECS instances by calling the RunInstances operation or replace the system disks of instances by calling the ReplaceSystemDisk operation in the destination region.
       * Take note of the following items:
       * - Only custom images that are in the `Available` state can be copied.
       * - Custom images that belong to your Alibaba Cloud account can be copied across regions. Images that are shared with you by others can be copied only within the regions where the images reside.
       * - When an image is being copied, the new image cannot be deleted by calling the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation. However, you can cancel the ongoing image copy task by calling the [CancelCopyImage](https://help.aliyun.com/document_detail/25539.html) operation.
       * - A region supports only up to five concurrent image copy tasks. Excess image copy tasks are queued for execution.
       * - You can configure `ResourceGroupId` to specify the resource group to which to assign the new image. If you do not configure `ResourceGroupId`, the new image is assigned to the default resource group.
       *
       * @param request CopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImageWithOptions(const Models::CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a custom image from one region to another region. You can copy custom images to deploy or copy Elastic Compute Service (ECS) instances across regions.
       *
       * @description ## [](#)Usage notes
       * After you copy a custom image to the destination region, you can use the image copy (new image) to create ECS instances by calling the RunInstances operation or replace the system disks of instances by calling the ReplaceSystemDisk operation in the destination region.
       * Take note of the following items:
       * - Only custom images that are in the `Available` state can be copied.
       * - Custom images that belong to your Alibaba Cloud account can be copied across regions. Images that are shared with you by others can be copied only within the regions where the images reside.
       * - When an image is being copied, the new image cannot be deleted by calling the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation. However, you can cancel the ongoing image copy task by calling the [CancelCopyImage](https://help.aliyun.com/document_detail/25539.html) operation.
       * - A region supports only up to five concurrent image copy tasks. Excess image copy tasks are queued for execution.
       * - You can configure `ResourceGroupId` to specify the resource group to which to assign the new image. If you do not configure `ResourceGroupId`, the new image is assigned to the default resource group.
       *
       * @param request CopyImageRequest
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImage(const Models::CopyImageRequest &request);

      /**
       * @summary Copies a standard or encrypted snapshot from one region to another.
       *
       * @description When you call this operation, take note of the following item:
       * - New snapshots (snapshot copies) cannot be used to roll back the disks for which source snapshots (copied snapshots) were created.
       * - Local snapshots cannot be copied.
       *
       * @param request CopySnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshotWithOptions(const Models::CopySnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a standard or encrypted snapshot from one region to another.
       *
       * @description When you call this operation, take note of the following item:
       * - New snapshots (snapshot copies) cannot be used to roll back the disks for which source snapshots (copied snapshots) were created.
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
       * The operating system of the non-Elastic Compute Service (ECS) server must meet the following version requirements, and the server must have Internet access to be registered as an Alibaba Cloud managed instance.
       * - Alibaba Cloud Linux 2/3 and later
       * - CentOS 6/7/8 and later
       * - Debian 8/9/10 and later
       * - Ubuntu 12/14/16/18 and later
       * - CoreOS
       * - OpenSUSE
       * - RedHat 5/6/7 and later
       * - SUSE Linux Enterprise Server 11/12/15 and later
       * - Window Server 2012/2016/2019 and later
       * In each Alibaba Cloud region, you can have up to 10 managed instance activation codes. Each activation code can be used to register up to 10 instances, and each activation code is valid for up to 4 hours.
       * > On the **ECS Cloud Assistant** page, click the **Managed Instances** tab, and then click **Register New Instance** to view the usage data of activation codes.
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
       * The operating system of the non-Elastic Compute Service (ECS) server must meet the following version requirements, and the server must have Internet access to be registered as an Alibaba Cloud managed instance.
       * - Alibaba Cloud Linux 2/3 and later
       * - CentOS 6/7/8 and later
       * - Debian 8/9/10 and later
       * - Ubuntu 12/14/16/18 and later
       * - CoreOS
       * - OpenSUSE
       * - RedHat 5/6/7 and later
       * - SUSE Linux Enterprise Server 11/12/15 and later
       * - Window Server 2012/2016/2019 and later
       * In each Alibaba Cloud region, you can have up to 10 managed instance activation codes. Each activation code can be used to register up to 10 instances, and each activation code is valid for up to 4 hours.
       * > On the **ECS Cloud Assistant** page, click the **Managed Instances** tab, and then click **Register New Instance** to view the usage data of activation codes.
       *
       * @param request CreateActivationRequest
       * @return CreateActivationResponse
       */
      Models::CreateActivationResponse createActivation(const Models::CreateActivationRequest &request);

      /**
       * @summary Creates an auto provisioning group.
       *
       * @description - Auto provisioning is a solution that uses spot instances and pay-as-you-go instances to quickly deploy instance clusters. It supports one-click deployment of instance clusters across billing methods, zones, and instance families. For more information, see [Use the auto provisioning group API to create ECS instances in batches](https://help.aliyun.com/document_detail/200772.html).
       * - Auto provisioning uses provisioning groups to schedule and maintain compute resources. You can use an auto provisioning group to steadily provide computing power and mitigate the instability caused by the reclaim mechanism of spot instances.
       * - Auto provisioning is a free feature, but you are charged for the instance resources created by the auto provisioning group. For more information, see [Spot instance billing](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
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
       * - Auto provisioning uses provisioning groups to schedule and maintain compute resources. You can use an auto provisioning group to steadily provide computing power and mitigate the instability caused by the reclaim mechanism of spot instances.
       * - Auto provisioning is a free feature, but you are charged for the instance resources created by the auto provisioning group. For more information, see [Spot instance billing](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * - If you specify both a launch template (`LaunchTemplateId`) and launch configuration information (`LaunchConfiguration.*`), the launch template takes precedence.
       *
       * @param request CreateAutoProvisioningGroupRequest
       * @return CreateAutoProvisioningGroupResponse
       */
      Models::CreateAutoProvisioningGroupResponse createAutoProvisioningGroup(const Models::CreateAutoProvisioningGroupRequest &request);

      /**
       * @summary Creates an automatic snapshot policy in a specific region. You can specify the schedule on which to create automatic snapshots, the retention period of the automatic snapshots, and whether to enable cross-region replication for the snapshots in the automatic snapshot policy. The automatic snapshot policy can be applied to create snapshots for system disks or data disks to back up disk data.
       *
       * @description Before you call this operation, learn about how to [create an automatic snapshot policy](https://help.aliyun.com/document_detail/127767.html).
       * Take note of the following items:
       * - You can create up to 100 automatic snapshot policies per region for a single Alibaba Cloud account. If the maximum number of automatic snapshots for a disk is reached and a new snapshot creation task is created, the system deletes the oldest automatic snapshot of the disk.
       * - If the instance to which a disk is attached is being stopped or restarted, the system cannot create snapshots for the disk based on the associated automatic snapshot policy.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are copied to the destination region and snapshot copies are encrypted by using the service key of the destination region. For more information about the limits on cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
       * After the automatic snapshot policy is created, call the [ApplyAutoSnapshotPolicy](https://help.aliyun.com/document_detail/25531.html) operation to apply the policy to disks. If you want to modify the automatic snapshot policy, call the [ModifyAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25529.html) operation.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy in a specific region. You can specify the schedule on which to create automatic snapshots, the retention period of the automatic snapshots, and whether to enable cross-region replication for the snapshots in the automatic snapshot policy. The automatic snapshot policy can be applied to create snapshots for system disks or data disks to back up disk data.
       *
       * @description Before you call this operation, learn about how to [create an automatic snapshot policy](https://help.aliyun.com/document_detail/127767.html).
       * Take note of the following items:
       * - You can create up to 100 automatic snapshot policies per region for a single Alibaba Cloud account. If the maximum number of automatic snapshots for a disk is reached and a new snapshot creation task is created, the system deletes the oldest automatic snapshot of the disk.
       * - If the instance to which a disk is attached is being stopped or restarted, the system cannot create snapshots for the disk based on the associated automatic snapshot policy.
       * - If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are copied to the destination region and snapshot copies are encrypted by using the service key of the destination region. For more information about the limits on cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
       * After the automatic snapshot policy is created, call the [ApplyAutoSnapshotPolicy](https://help.aliyun.com/document_detail/25531.html) operation to apply the policy to disks. If you want to modify the automatic snapshot policy, call the [ModifyAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25529.html) operation.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary To create a Capacity Reservation, specify the instance type, total quantity, start time, and availability zone.
       *
       * @description ## API
       * The Capacity Reservation service lets you reserve compute resources by specifying attributes such as the availability zone and instance type. The system then reserves matching resources in a private pool. For more information, see [Overview of immediate capacity reservations](https://help.aliyun.com/document_detail/193633.html).
       * - This service currently supports only the immediate start mode. After you purchase an immediate capacity reservation, you are billed for the reserved instance type at the standard Pay-As-You-Go rate. This billing applies regardless of whether you launch any Pay-As-You-Go instances and continues until you release the reservation or it expires.
       *   - You can specify the private pool option when creating an instance by calling the [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html) operations. To change this setting for an existing instance, call the [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) operation. After an instance matches a private pool, you are billed for its configured resources, such as the instance type, cloud disks, and public bandwidth.
       *   - If you do not launch any Pay-As-You-Go instances into the reserved capacity, you are billed only for the reserved instance type.
       * - You can apply Savings Plans and Regional Reserved Instance Coupons to the hourly bills for both matched instances and unused capacity in your immediate capacity reservations. However, Zonal Reserved Instance Coupons are not supported. We recommend purchasing Savings Plans or Reserved Instance Coupons first. Using the Capacity Reservation service with coverage from these plans provides capacity assurance at no additional cost.
       * > You can use the API to create only immediate capacity reservations. To create either immediate or scheduled capacity reservations, use the ECS Console. For more information, see [Resource Reservation Service](~~193626#section-oil-qh5-xvx~~).
       *
       * @param request CreateCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCapacityReservationResponse
       */
      Models::CreateCapacityReservationResponse createCapacityReservationWithOptions(const Models::CreateCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To create a Capacity Reservation, specify the instance type, total quantity, start time, and availability zone.
       *
       * @description ## API
       * The Capacity Reservation service lets you reserve compute resources by specifying attributes such as the availability zone and instance type. The system then reserves matching resources in a private pool. For more information, see [Overview of immediate capacity reservations](https://help.aliyun.com/document_detail/193633.html).
       * - This service currently supports only the immediate start mode. After you purchase an immediate capacity reservation, you are billed for the reserved instance type at the standard Pay-As-You-Go rate. This billing applies regardless of whether you launch any Pay-As-You-Go instances and continues until you release the reservation or it expires.
       *   - You can specify the private pool option when creating an instance by calling the [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html) operations. To change this setting for an existing instance, call the [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) operation. After an instance matches a private pool, you are billed for its configured resources, such as the instance type, cloud disks, and public bandwidth.
       *   - If you do not launch any Pay-As-You-Go instances into the reserved capacity, you are billed only for the reserved instance type.
       * - You can apply Savings Plans and Regional Reserved Instance Coupons to the hourly bills for both matched instances and unused capacity in your immediate capacity reservations. However, Zonal Reserved Instance Coupons are not supported. We recommend purchasing Savings Plans or Reserved Instance Coupons first. Using the Capacity Reservation service with coverage from these plans provides capacity assurance at no additional cost.
       * > You can use the API to create only immediate capacity reservations. To create either immediate or scheduled capacity reservations, use the ECS Console. For more information, see [Resource Reservation Service](~~193626#section-oil-qh5-xvx~~).
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
       *         - After a specific execution times out, the status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of that execution record changes to Failed.  
       *         - The timeout of a previous execution does not affect the next execution. 
       * - You can retain up to 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, refer to [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - You can specify the WorkingDir parameter to set the execution path of a command. For Linux instances, the default path is the home directory of the root user, which is `/root`. For Windows instances, the default path is the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
       * - You can set EnableParameter to true to enable the custom parameter feature. When you set CommandContent, you can define custom parameters in the {{parameter}} format and pass in custom parameter key-value pairs when you run the command by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html). For example, if you create the command `echo {{name}}` and pass in the key-value pair `<name, Jack>` through the Parameters parameter when you call InvokeCommand, the custom parameter is automatically replaced. The resulting command `echo Jack` is then run on the instance.
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
       *         - After a specific execution times out, the status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of that execution record changes to Failed.  
       *         - The timeout of a previous execution does not affect the next execution. 
       * - You can retain up to 500 to 50,000 Cloud Assistant commands in a region. You can also request a quota increase. For information about how to query and increase quotas, refer to [Quota management](https://help.aliyun.com/document_detail/184116.html).
       * - You can specify the WorkingDir parameter to set the execution path of a command. For Linux instances, the default path is the home directory of the root user, which is `/root`. For Windows instances, the default path is the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
       * - You can set EnableParameter to true to enable the custom parameter feature. When you set CommandContent, you can define custom parameters in the {{parameter}} format and pass in custom parameter key-value pairs when you run the command by calling [InvokeCommand](https://help.aliyun.com/document_detail/64841.html). For example, if you create the command `echo {{name}}` and pass in the key-value pair `<name, Jack>` through the Parameters parameter when you call InvokeCommand, the custom parameter is automatically replaced. The resulting command `echo Jack` is then run on the instance.
       *
       * @param request CreateCommandRequest
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommand(const Models::CreateCommandRequest &request);

      /**
       * @summary Creates a dedicated host group.
       *
       * @param request CreateDedicatedHostClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDedicatedHostClusterResponse
       */
      Models::CreateDedicatedHostClusterResponse createDedicatedHostClusterWithOptions(const Models::CreateDedicatedHostClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dedicated host group.
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
       * @summary Creates a diagnostic metric set. You can group diagnostic metrics into diagnostic metric sets.
       *
       * @param request CreateDiagnosticMetricSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticMetricSetResponse
       */
      Models::CreateDiagnosticMetricSetResponse createDiagnosticMetricSetWithOptions(const Models::CreateDiagnosticMetricSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostic metric set. You can group diagnostic metrics into diagnostic metric sets.
       *
       * @param request CreateDiagnosticMetricSetRequest
       * @return CreateDiagnosticMetricSetResponse
       */
      Models::CreateDiagnosticMetricSetResponse createDiagnosticMetricSet(const Models::CreateDiagnosticMetricSetRequest &request);

      /**
       * @summary Call `CreateDiagnosticReport` to create a diagnostic report for a resource. This operation uses the specified diagnostic metric set ID to generate a report with multiple diagnostic metrics. You can then call `DescribeDiagnosticReportAttributes` with the returned diagnostic report ID to query the report\\"s details.
       *
       * @param tmpReq CreateDiagnosticReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReportWithOptions(const Models::CreateDiagnosticReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `CreateDiagnosticReport` to create a diagnostic report for a resource. This operation uses the specified diagnostic metric set ID to generate a report with multiple diagnostic metrics. You can then call `DescribeDiagnosticReportAttributes` with the returned diagnostic report ID to query the report\\"s details.
       *
       * @param request CreateDiagnosticReportRequest
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReport(const Models::CreateDiagnosticReportRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description - When you create a disk, you can enable the multi-attach feature (`MultiAttach`). Learn about this attribute and its limits before you use it. For more information, see [ESSD cloud disks that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       * - The following disk types can be created: basic disks, ultra disks, standard SSDs, enterprise SSDs, ESSD Entry disks, regional Enterprise SSDs (ESSDs), ESSD AutoPL disks, elastic ephemeral disks - Standard Edition, and elastic ephemeral disks - Premium Edition.
       * - To create a disk, complete [real-name registration](https://account.console.aliyun.com/#/auth/home).
       * - Creating a disk incurs fees. Learn about the billing method of Elastic Compute Service (ECS) in advance. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * - Default settings when you create a disk:
       *   - Automatic snapshots of the disk are deleted when the disk is deleted. That is, `DeleteAutoSnapshot` is set to `true`. You can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) to query the parameter settings, and call [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to modify the property.
       *   - When you create an enterprise SSD, if you do not configure a performance level, the default level is PL1. You can call [ModifyDiskSpec](https://help.aliyun.com/document_detail/123780.html) to change the performance level.
       *   - The billing method is pay-as-you-go, which means the `Portable` property defaults to `true`.
       *
       * @param request CreateDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDiskWithOptions(const Models::CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description - When you create a disk, you can enable the multi-attach feature (`MultiAttach`). Learn about this attribute and its limits before you use it. For more information, see [ESSD cloud disks that support NVMe](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature](https://help.aliyun.com/document_detail/262105.html).
       * - The following disk types can be created: basic disks, ultra disks, standard SSDs, enterprise SSDs, ESSD Entry disks, regional Enterprise SSDs (ESSDs), ESSD AutoPL disks, elastic ephemeral disks - Standard Edition, and elastic ephemeral disks - Premium Edition.
       * - To create a disk, complete [real-name registration](https://account.console.aliyun.com/#/auth/home).
       * - Creating a disk incurs fees. Learn about the billing method of Elastic Compute Service (ECS) in advance. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * - Default settings when you create a disk:
       *   - Automatic snapshots of the disk are deleted when the disk is deleted. That is, `DeleteAutoSnapshot` is set to `true`. You can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) to query the parameter settings, and call [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to modify the property.
       *   - When you create an enterprise SSD, if you do not configure a performance level, the default level is PL1. You can call [ModifyDiskSpec](https://help.aliyun.com/document_detail/123780.html) to change the performance level.
       *   - The billing method is pay-as-you-go, which means the `Portable` property defaults to `true`.
       *
       * @param request CreateDiskRequest
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDisk(const Models::CreateDiskRequest &request);

      /**
       * @summary Creates an elasticity assurance in a region. When you call this operation, you can specify parameters, such as ZoneId, InstanceType, Period, PeriodUnit, and AutoRenew, in the request.
       *
       * @description Elasticity Assurance provides a new method to purchase and use guaranteed resources in a flexible manner. Elasticity Assurance is a resource reservation service that provides assured access to resources for pay-as-you-go Elastic Compute Service (ECS) instances. For more information, see [Overview of Elasticity Assurance](https://help.aliyun.com/document_detail/193630.html).
       * - After you purchase an elasticity assurance, you cannot request a refund for the elasticity assurance. For information about the billing of elasticity assurances, see [Resource assurance](https://help.aliyun.com/document_detail/432502.html).
       * - Elasticity assurances can be used to create only pay-as-you-go ECS instances.
       * - Elasticity assurances only support the unlimited mode. You can set `AssuranceTimes` only to `Unlimited`. Elasticity assurances in unlimited mode can be used for an unlimited number of times within their terms. Elasticity assurances in unlimited mode take effect immediately after creation.
       *
       * @param request CreateElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticityAssuranceResponse
       */
      Models::CreateElasticityAssuranceResponse createElasticityAssuranceWithOptions(const Models::CreateElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an elasticity assurance in a region. When you call this operation, you can specify parameters, such as ZoneId, InstanceType, Period, PeriodUnit, and AutoRenew, in the request.
       *
       * @description Elasticity Assurance provides a new method to purchase and use guaranteed resources in a flexible manner. Elasticity Assurance is a resource reservation service that provides assured access to resources for pay-as-you-go Elastic Compute Service (ECS) instances. For more information, see [Overview of Elasticity Assurance](https://help.aliyun.com/document_detail/193630.html).
       * - After you purchase an elasticity assurance, you cannot request a refund for the elasticity assurance. For information about the billing of elasticity assurances, see [Resource assurance](https://help.aliyun.com/document_detail/432502.html).
       * - Elasticity assurances can be used to create only pay-as-you-go ECS instances.
       * - Elasticity assurances only support the unlimited mode. You can set `AssuranceTimes` only to `Unlimited`. Elasticity assurances in unlimited mode can be used for an unlimited number of times within their terms. Elasticity assurances in unlimited mode take effect immediately after creation.
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
       * @summary Creates an HPC cluster by calling CreateHpcCluster.
       *
       * @param request CreateHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHpcClusterResponse
       */
      Models::CreateHpcClusterResponse createHpcClusterWithOptions(const Models::CreateHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HPC cluster by calling CreateHpcCluster.
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
       * - When you query ECS instance information, if the response contains {"OperationLocks": {"LockReason" : "security"}}, you cannot create a custom image.
       * - Configure the image detection parameter `DetectionStrategy` when creating an image to help the system optimize your image. For more information, see [Image detection overview](https://help.aliyun.com/document_detail/439819.html).
       * The following describes three methods to create a custom image by calling this operation. The priority of request parameters is: InstanceId > DiskDeviceMapping > SnapshotId. If your request contains two or more of these parameters, the image is created based on the parameter with the highest priority.
       * - **Create a custom image from an instance**: Specify the instance ID (`InstanceId`).
       *   - The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *   - After the operation is called, a new snapshot is created for each disk of the instance.
       *   >Notice: Because a running instance may have cached data that has not been written to disks, the data of the created custom image may be inconsistent with the instance data. Stop the instance ([StopInstances](https://help.aliyun.com/document_detail/155372.html)) before creating the image.
       * - **Create a custom image from a snapshot (the specified snapshot cannot be one created on or before July 15, 2013.)**
       *   - **Create a custom image from a system disk snapshot**: Specify only the snapshot ID of the instance system disk (`SnapshotId`).
       *   - **Create a custom image from system disk and data disk snapshots**: Establish data associations among multiple disks (`DiskDeviceMapping`).
       *     -  Only one system disk snapshot can be specified. 
       *     -  You can specify multiple data disk snapshots, up to a maximum of 16. If `DiskDeviceMapping.N.SnapshotId` is not specified, an empty data disk with the default capacity is created.  
       *  
       * > When an instance is released, the system disk is retained as a pay-as-you-go data disk. Snapshots created from this disk do not support creating custom images. Create a custom image before releasing the instance as needed.
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
       * - When you query ECS instance information, if the response contains {"OperationLocks": {"LockReason" : "security"}}, you cannot create a custom image.
       * - Configure the image detection parameter `DetectionStrategy` when creating an image to help the system optimize your image. For more information, see [Image detection overview](https://help.aliyun.com/document_detail/439819.html).
       * The following describes three methods to create a custom image by calling this operation. The priority of request parameters is: InstanceId > DiskDeviceMapping > SnapshotId. If your request contains two or more of these parameters, the image is created based on the parameter with the highest priority.
       * - **Create a custom image from an instance**: Specify the instance ID (`InstanceId`).
       *   - The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *   - After the operation is called, a new snapshot is created for each disk of the instance.
       *   >Notice: Because a running instance may have cached data that has not been written to disks, the data of the created custom image may be inconsistent with the instance data. Stop the instance ([StopInstances](https://help.aliyun.com/document_detail/155372.html)) before creating the image.
       * - **Create a custom image from a snapshot (the specified snapshot cannot be one created on or before July 15, 2013.)**
       *   - **Create a custom image from a system disk snapshot**: Specify only the snapshot ID of the instance system disk (`SnapshotId`).
       *   - **Create a custom image from system disk and data disk snapshots**: Establish data associations among multiple disks (`DiskDeviceMapping`).
       *     -  Only one system disk snapshot can be specified. 
       *     -  You can specify multiple data disk snapshots, up to a maximum of 16. If `DiskDeviceMapping.N.SnapshotId` is not specified, an empty data disk with the default capacity is created.  
       *  
       * > When an instance is released, the system disk is retained as a pay-as-you-go data disk. Snapshots created from this disk do not support creating custom images. Create a custom image before releasing the instance as needed.
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
       * - Only custom image components can be created.
       * - Component version numbers must be unique for the same component name. When using a component in a template, you can reference it by name and version number.
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
       * - Only custom image components can be created.
       * - Component version numbers must be unique for the same component name. When using a component in a template, you can reference it by name and version number.
       * - The content size of an image component cannot exceed 16 KB. For details about supported commands, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder overview](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImageComponentRequest
       * @return CreateImageComponentResponse
       */
      Models::CreateImageComponentResponse createImageComponent(const Models::CreateImageComponentRequest &request);

      /**
       * @summary Create an image template to build images.
       *
       * @description ## API
       * You can use an image template to customize image content and build images across regions and accounts. Before you create an image template, consider the following:
       * - You can create only custom image templates.
       * - You can use only public images, custom images, shared images, or image families as the source image.
       * - When you build an image using an image template, the system creates one or more transit instances to assist with the build. You are charged for these pay-as-you-go ECS instances. For more information, see [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * Consider the following about the build content specified in `BuildContent`:
       * - The `FROM` command is deprecated. The system ignores the `FROM` command in `BuildContent` and instead uses the `BaseImageType` and `BaseImage` parameters to select the source image.
       * - The content of an image template cannot exceed 16 KB. For details about supported commands, see [Command reference for Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder overview](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipelineWithOptions(const Models::CreateImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an image template to build images.
       *
       * @description ## API
       * You can use an image template to customize image content and build images across regions and accounts. Before you create an image template, consider the following:
       * - You can create only custom image templates.
       * - You can use only public images, custom images, shared images, or image families as the source image.
       * - When you build an image using an image template, the system creates one or more transit instances to assist with the build. You are charged for these pay-as-you-go ECS instances. For more information, see [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * Consider the following about the build content specified in `BuildContent`:
       * - The `FROM` command is deprecated. The system ignores the `FROM` command in `BuildContent` and instead uses the `BaseImageType` and `BaseImage` parameters to select the source image.
       * - The content of an image template cannot exceed 16 KB. For details about supported commands, see [Command reference for Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder overview](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImagePipelineRequest
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipeline(const Models::CreateImagePipelineRequest &request);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance with customizable parameters.
       *
       * @description > This operation is no longer maintained. Use [RunInstances](https://help.aliyun.com/document_detail/2679677.html) instead.
       * <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**
       * This is an asynchronous operation. After a request to create an instance is sent, the instance ID is returned. The instance is not immediately created. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the status is `Stopped`, the instance is created. Then you can call [StartInstance](https://help.aliyun.com/document_detail/2679679.html) to start the instance.
       * ### Before you begin
       * <props="china">
       * - Make sure that your account has passed real-name registration. For more information, see [Real-name registration documentation](https://help.aliyun.com/document_detail/48263.html).
       * - Creating an instance incurs charges. Make sure that you understand the billable methods of Elastic Computing Service (ECS). For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       *     
       * - Make sure that the total number of instances or the total number of vCPUs across all instance types does not exceed the quota. For more information, see [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas).
       * - Before creating a VPC-connected instance, create a VPC in the corresponding region. For more information, see [Create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### Before you begin
       * - When you invoke this operation, the system does not send notifications (including text messages, emails, or internal messages) about instance creation.
       * - If the billable methods of the instance is subscription (`PrePaid`), active coupon in your account are used by default during payment.
       * - If the instance memory is 512 MiB, you cannot use Windows Server images except through the half-year channel. If the instance memory is 4 GiB or more, you cannot use 32-bit operating system images.
       * - Instances created by invoking this operation are not assigned Internet IP addresses. If the public bandwidth is greater than 0, invoke [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) to assign a public IP address. If the public bandwidth is 0, invoke [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) to adjust the bandwidth and then invoke [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) to assign a public IP address.
       * > In a single region, the total peak pay-by-bandwidth Internet bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       * ### Recommendations
       * - **Instance type selection**: See [Instance family](https://help.aliyun.com/document_detail/25378.html) or invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the performance data of the target instance type. You can also see [Settings for instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn how to select an instance type.
       * - **Check active resources**: Invoke [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query active resources in a specific region or zone.
       * - **User data**: If the instance meets the requirements for [instance user data](https://help.aliyun.com/document_detail/49121.html), you can pass in UserData. The `UserData` data is not encrypted when the API request is sent. Do not send confidential information such as passwords or private keys in plaintext. If you must pass in such information, encrypt it and use Base64 encoding before passing it in. Then perform decryption inside the instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance with customizable parameters.
       *
       * @description > This operation is no longer maintained. Use [RunInstances](https://help.aliyun.com/document_detail/2679677.html) instead.
       * <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**
       * This is an asynchronous operation. After a request to create an instance is sent, the instance ID is returned. The instance is not immediately created. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the status is `Stopped`, the instance is created. Then you can call [StartInstance](https://help.aliyun.com/document_detail/2679679.html) to start the instance.
       * ### Before you begin
       * <props="china">
       * - Make sure that your account has passed real-name registration. For more information, see [Real-name registration documentation](https://help.aliyun.com/document_detail/48263.html).
       * - Creating an instance incurs charges. Make sure that you understand the billable methods of Elastic Computing Service (ECS). For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       *     
       * - Make sure that the total number of instances or the total number of vCPUs across all instance types does not exceed the quota. For more information, see [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas).
       * - Before creating a VPC-connected instance, create a VPC in the corresponding region. For more information, see [Create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### Before you begin
       * - When you invoke this operation, the system does not send notifications (including text messages, emails, or internal messages) about instance creation.
       * - If the billable methods of the instance is subscription (`PrePaid`), active coupon in your account are used by default during payment.
       * - If the instance memory is 512 MiB, you cannot use Windows Server images except through the half-year channel. If the instance memory is 4 GiB or more, you cannot use 32-bit operating system images.
       * - Instances created by invoking this operation are not assigned Internet IP addresses. If the public bandwidth is greater than 0, invoke [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) to assign a public IP address. If the public bandwidth is 0, invoke [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) to adjust the bandwidth and then invoke [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) to assign a public IP address.
       * > In a single region, the total peak pay-by-bandwidth Internet bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       * ### Recommendations
       * - **Instance type selection**: See [Instance family](https://help.aliyun.com/document_detail/25378.html) or invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the performance data of the target instance type. You can also see [Settings for instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn how to select an instance type.
       * - **Check active resources**: Invoke [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query active resources in a specific region or zone.
       * - **User data**: If the instance meets the requirements for [instance user data](https://help.aliyun.com/document_detail/49121.html), you can pass in UserData. The `UserData` data is not encrypted when the API request is sent. Do not send confidential information such as passwords or private keys in plaintext. If you must pass in such information, encrypt it and use Base64 encoding before passing it in. Then perform decryption inside the instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Calls CreateKeyPair to create an SSH key pair. The system stores the public key and returns the unencrypted PEM-encoded PKCS#8 format private key. You must securely store the private key on your own.
       *
       * @description In addition to calling CreateKeyPair to create a key pair, you can use a third-party tool to create a key pair and then upload it ([ImportKeyPair](https://help.aliyun.com/document_detail/51774.html)) to a region. The usage of a key pair created by a third-party tool is the same as that of a key pair created by the system.
       * You can have up to 500 key pairs in each region. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateKeyPair to create an SSH key pair. The system stores the public key and returns the unencrypted PEM-encoded PKCS#8 format private key. You must securely store the private key on your own.
       *
       * @description In addition to calling CreateKeyPair to create a key pair, you can use a third-party tool to create a key pair and then upload it ([ImportKeyPair](https://help.aliyun.com/document_detail/51774.html)) to a region. The usage of a key pair created by a third-party tool is the same as that of a key pair created by the system.
       * You can have up to 500 key pairs in each region. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Creates an ECS instance launch template. A launch template eliminates the need to configure a large number of parameters every time you create an instance.
       *
       * @description After you call CreateLaunchTemplate to create a template, a default version with version number 1 is automatically generated. You can then create multiple versions based on this template (`CreateLaunchTemplateVersion`), with version numbers incrementing sequentially from 1. If you do not specify a template version when creating instances ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), the default version is used.
       * A launch template version contains the configurations for creating instances, such as the region, image ID, instance type, security group ID, and public bandwidth. If a specific configuration is not specified in the version, you must specify it when you create instances.
       * When you call this operation, take note of the following items:
       * -   Each account can create up to 30 launch templates per region, and each template can have up to 30 versions.
       * -   Most parameters in a launch template are optional. When you create a template, Alibaba Cloud does not verify the existence or validity of parameter values. The validity of parameter values is verified only when you create instances.
       * -   If a configuration is specified in the launch template, it cannot be filtered out when you create instances ([RunInstances](https://help.aliyun.com/document_detail/63440.html)). For example, if the template specifies `HostName=LocalHost` and the `HostName` value is left empty in `RunInstances`, the hostname of the instance is still `LocalHost`. To override the `HostName=LocalHost` configuration, set `HostName=MyHost` or another value in `RunInstances`.
       *
       * @param request CreateLaunchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplateWithOptions(const Models::CreateLaunchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ECS instance launch template. A launch template eliminates the need to configure a large number of parameters every time you create an instance.
       *
       * @description After you call CreateLaunchTemplate to create a template, a default version with version number 1 is automatically generated. You can then create multiple versions based on this template (`CreateLaunchTemplateVersion`), with version numbers incrementing sequentially from 1. If you do not specify a template version when creating instances ([RunInstances](https://help.aliyun.com/document_detail/63440.html)), the default version is used.
       * A launch template version contains the configurations for creating instances, such as the region, image ID, instance type, security group ID, and public bandwidth. If a specific configuration is not specified in the version, you must specify it when you create instances.
       * When you call this operation, take note of the following items:
       * -   Each account can create up to 30 launch templates per region, and each template can have up to 30 versions.
       * -   Most parameters in a launch template are optional. When you create a template, Alibaba Cloud does not verify the existence or validity of parameter values. The validity of parameter values is verified only when you create instances.
       * -   If a configuration is specified in the launch template, it cannot be filtered out when you create instances ([RunInstances](https://help.aliyun.com/document_detail/63440.html)). For example, if the template specifies `HostName=LocalHost` and the `HostName` value is left empty in `RunInstances`, the hostname of the instance is still `LocalHost`. To override the `HostName=LocalHost` configuration, set `HostName=MyHost` or another value in `RunInstances`.
       *
       * @param request CreateLaunchTemplateRequest
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplate(const Models::CreateLaunchTemplateRequest &request);

      /**
       * @summary Creates a new version in a specified ECS launch template for subsequent creation of ECS instances, elastic scaling groups, or auto provisioning groups.
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
       * @summary Creates a new version in a specified ECS launch template for subsequent creation of ECS instances, elastic scaling groups, or auto provisioning groups.
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
       * @summary CreateNatGateway
       *
       * @param request CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateNatGateway is deprecated, please use Vpc::2016-04-28::CreateNatGateway instead.
       *
       * @summary CreateNatGateway
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary You can create an elastic network interface (ENI) and specify its primary private IP address.
       *
       * @description When you call this operation, note the following:
       * - This is a synchronous operation. A newly created elastic network interface is in the `Available` state and can be attached to an instance immediately.
       * - If the response does not contain a `NetworkInterfaceId`, try creating the elastic network interface again.
       * - An elastic network interface can be attached to only one instance in a VPC.
       * - When you reattach an elastic network interface to another instance, its properties remain unchanged and network traffic is redirected to the new instance.
       * - You can assign up to 49 secondary private IP addresses when you create an elastic network interface.
       * - To assign an IPv6 address when creating an elastic network interface, ensure that IPv6 is enabled for the specified VSwitch. For more information, see [What is an IPv6 gateway](https://help.aliyun.com/document_detail/98896.html).
       * - Each account has a resource quota that limits the number of elastic network interfaces you can create in an Alibaba Cloud region. You can view your resource quotas in the ECS console. For more information, see [View and increase resource quotas](https://help.aliyun.com/document_detail/184115.html).
       * ### Request examples
       * <details>
       * <summary>
       * Create an elastic network interface
       * </summary>
       * ```
       * RegionId:  cn-hangzhou,   // China (Hangzhou) region.
       * SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // The security group ID.
       * VSwitchId:  vsw-bp19wo63nleroq22g****,   // The VSwitch ID.
       * ```
       * </details>
       * <details>
       * <summary>
       * Create an elastic network interface and specify a primary private IP address
       * </summary>
       * ```
       * RegionId:  cn-hangzhou,   // China (Hangzhou) region.
       * SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // security group ID.
       * VSwitchId:  vsw-bp19wo63nleroq22g****,   // VSwitch ID.
       * PrimaryIpAddress:  192.168.0.*,   // primary private IP address.
       * ```
       * </details>
       *
       * @param request CreateNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterfaceWithOptions(const Models::CreateNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create an elastic network interface (ENI) and specify its primary private IP address.
       *
       * @description When you call this operation, note the following:
       * - This is a synchronous operation. A newly created elastic network interface is in the `Available` state and can be attached to an instance immediately.
       * - If the response does not contain a `NetworkInterfaceId`, try creating the elastic network interface again.
       * - An elastic network interface can be attached to only one instance in a VPC.
       * - When you reattach an elastic network interface to another instance, its properties remain unchanged and network traffic is redirected to the new instance.
       * - You can assign up to 49 secondary private IP addresses when you create an elastic network interface.
       * - To assign an IPv6 address when creating an elastic network interface, ensure that IPv6 is enabled for the specified VSwitch. For more information, see [What is an IPv6 gateway](https://help.aliyun.com/document_detail/98896.html).
       * - Each account has a resource quota that limits the number of elastic network interfaces you can create in an Alibaba Cloud region. You can view your resource quotas in the ECS console. For more information, see [View and increase resource quotas](https://help.aliyun.com/document_detail/184115.html).
       * ### Request examples
       * <details>
       * <summary>
       * Create an elastic network interface
       * </summary>
       * ```
       * RegionId:  cn-hangzhou,   // China (Hangzhou) region.
       * SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // The security group ID.
       * VSwitchId:  vsw-bp19wo63nleroq22g****,   // The VSwitch ID.
       * ```
       * </details>
       * <details>
       * <summary>
       * Create an elastic network interface and specify a primary private IP address
       * </summary>
       * ```
       * RegionId:  cn-hangzhou,   // China (Hangzhou) region.
       * SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // security group ID.
       * VSwitchId:  vsw-bp19wo63nleroq22g****,   // VSwitch ID.
       * PrimaryIpAddress:  192.168.0.*,   // primary private IP address.
       * ```
       * </details>
       *
       * @param request CreateNetworkInterfaceRequest
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterface(const Models::CreateNetworkInterfaceRequest &request);

      /**
       * @summary Grants elastic network interface (ENI) permissions to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request CreateNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfacePermissionResponse
       */
      Models::CreateNetworkInterfacePermissionResponse createNetworkInterfacePermissionWithOptions(const Models::CreateNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants elastic network interface (ENI) permissions to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request CreateNetworkInterfacePermissionRequest
       * @return CreateNetworkInterfacePermissionResponse
       */
      Models::CreateNetworkInterfacePermissionResponse createNetworkInterfacePermission(const Models::CreateNetworkInterfacePermissionRequest &request);

      /**
       * @deprecated OpenAPI CreatePhysicalConnection is deprecated, please use Vpc::2016-04-28::CreatePhysicalConnection instead.
       *
       * @summary CreatePhysicalConnection
       *
       * @param request CreatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnectionWithOptions(const Models::CreatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreatePhysicalConnection is deprecated, please use Vpc::2016-04-28::CreatePhysicalConnection instead.
       *
       * @summary CreatePhysicalConnection
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
       * @summary Creates a port list. You can associate a port list with resources, such as security groups.
       *
       * @param request CreatePortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortRangeListResponse
       */
      Models::CreatePortRangeListResponse createPortRangeListWithOptions(const Models::CreatePortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a port list. You can associate a port list with resources, such as security groups.
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
       * @description - The default internal connectivity policy for a basic security group created by this operation is **intra-group connectivity**. You can modify this policy by calling [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html).
       * - The default internal connectivity policy for an advanced security group created by this operation is **internal isolation**, and this policy cannot be modified.
       * - The number of security groups in a single region is limited. You can create a minimum of 100 security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       * - To create a security group of the VPC type, you must specify the VpcId parameter.
       *
       * @param request CreateSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroupWithOptions(const Models::CreateSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group.
       *
       * @description - The default internal connectivity policy for a basic security group created by this operation is **intra-group connectivity**. You can modify this policy by calling [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html).
       * - The default internal connectivity policy for an advanced security group created by this operation is **internal isolation**, and this policy cannot be modified.
       * - The number of security groups in a single region is limited. You can create a minimum of 100 security groups. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       * - To create a security group of the VPC type, you must specify the VpcId parameter.
       *
       * @param request CreateSecurityGroupRequest
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroup(const Models::CreateSecurityGroupRequest &request);

      /**
       * @summary Schedules simulated system events for one or more ECS instances. Simulated system events are equivalent to event drills. They do not actually execute the events or affect ECS instances.
       *
       * @description After you schedule simulated events, you can view the scheduled simulated system events in the ECS console, by calling [ECS API](https://help.aliyun.com/document_detail/63962.html) operations, or by using CloudMonitor.
       * The following list describes the lifecycle of simulated system events:
       * - Scheduled: After the simulated system event is scheduled, it automatically enters the Scheduled state.
       * - Executed: If no manual intervention is performed, the simulated system event automatically enters the Executed state at the specified point in time (NotBefore).
       * - Canceled: After you call [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) to cancel the simulated system event, the event enters the Canceled state.
       * - Avoided: For simulated system events of the SystemMaintenance.Reboot type, you can [restart the instance](https://help.aliyun.com/document_detail/25502.html) before the scheduled time to change the event to the Avoided state.
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEventsWithOptions(const Models::CreateSimulatedSystemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules simulated system events for one or more ECS instances. Simulated system events are equivalent to event drills. They do not actually execute the events or affect ECS instances.
       *
       * @description After you schedule simulated events, you can view the scheduled simulated system events in the ECS console, by calling [ECS API](https://help.aliyun.com/document_detail/63962.html) operations, or by using CloudMonitor.
       * The following list describes the lifecycle of simulated system events:
       * - Scheduled: After the simulated system event is scheduled, it automatically enters the Scheduled state.
       * - Executed: If no manual intervention is performed, the simulated system event automatically enters the Executed state at the specified point in time (NotBefore).
       * - Canceled: After you call [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) to cancel the simulated system event, the event enters the Canceled state.
       * - Avoided: For simulated system events of the SystemMaintenance.Reboot type, you can [restart the instance](https://help.aliyun.com/document_detail/25502.html) before the scheduled time to change the event to the Avoided state.
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEvents(const Models::CreateSimulatedSystemEventsRequest &request);

      /**
       * @summary Create a snapshot of a cloud disk.
       *
       * @description The instant access feature for snapshots replaces the legacy local snapshot feature. The parameters are described as follows:
       * - If you used local snapshots before December 14, 2020, you can continue to use the `Category` parameter.
       * - If you did not use local snapshots before December 14, 2020, no additional configuration is required. New snapshots that are created for ESSD cloud disks (ESSDs, ESSD AutoPL disks, ESSD Entry disks, and zone-redundant ESSDs) have the instant access feature enabled by default. This applies to both manual and automatic snapshots. The instant access-related parameters `InstantAccess`, `InstantAccessRetentionDays`, and `DisableInstantAccess` no longer take effect. The `DescribeSnapshots` and `DescribeSnapshotGroups` API operations return an `Available` parameter that indicates the snapshot\\"s status.
       * Prerequisites:
       * - The snapshot feature is enabled. For more information, see [Enable the snapshot feature](https://help.aliyun.com/document_detail/108381.html).
       * - The cloud disk must be in the **in-use** or **available** state. Note the following points:
       *   - If the cloud disk is in the **in-use** state, the instance to which the disk is attached must be in the **running** or **stopped** state.
       *   - If the cloud disk is in the **available** state, you can create snapshots for it only if it has been previously attached to an ECS instance.
       *   - When you use cloud disks to create dynamic scalable volumes or RAID arrays, we recommend that you use snapshot consistency groups and enable application-consistent snapshots to back up data. A snapshot consistency group ensures the crash consistency and write-order consistency of data written across multiple cloud disks. For more information, see [Create a snapshot consistency group](https://help.aliyun.com/document_detail/199625.html) and [Create an application-consistent snapshot](https://help.aliyun.com/document_detail/208589.html).
       * Keep the following in mind when creating a snapshot:
       * - Create snapshots during off-peak hours. During snapshot creation, the I/O performance of the cloud disk decreases by less than 10% and read and write operations may temporarily slow down.
       * - You cannot use a snapshot that is being created to create a custom image ([CreateImage](https://help.aliyun.com/document_detail/25535.html)).
       * - The snapshot does not back up incremental data generated on the cloud disk during the creation process.
       * - If the cloud disk is attached to an ECS instance, do not change the state of the instance, such as stopping or restarting the instance, during snapshot creation. Otherwise, the snapshot creation will fail.
       * - You cannot resize a cloud disk during snapshot creation. You can resize the cloud disk only after the snapshot is complete.
       * - You can create a snapshot for a cloud disk that is in the **expired** (`Expired`) state. If the cloud disk is released due to expiration when the snapshot is being created, the snapshot in the **creating** (`Creating`) state is also deleted.
       * - After a snapshot is created, you are charged for the snapshot based on its size. The fees are settled on a per-region basis. For more information, see [Snapshots](https://help.aliyun.com/document_detail/56159.html).
       * - You cannot create a snapshot for a cloud disk in the following cases:
       *   - The number of manual snapshots of the cloud disk has reached the upper limit. For more information, see [Limits](~~25412#SnapshotQuota1~~).
       *   - The limit on the number of snapshots that can be created concurrently has been reached. For more information, see [Limits](~~25412#SnapshotQuota1~~).
       *   - When you query the information of an ECS instance, if the returned data contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations on the instance are prohibited.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a snapshot of a cloud disk.
       *
       * @description The instant access feature for snapshots replaces the legacy local snapshot feature. The parameters are described as follows:
       * - If you used local snapshots before December 14, 2020, you can continue to use the `Category` parameter.
       * - If you did not use local snapshots before December 14, 2020, no additional configuration is required. New snapshots that are created for ESSD cloud disks (ESSDs, ESSD AutoPL disks, ESSD Entry disks, and zone-redundant ESSDs) have the instant access feature enabled by default. This applies to both manual and automatic snapshots. The instant access-related parameters `InstantAccess`, `InstantAccessRetentionDays`, and `DisableInstantAccess` no longer take effect. The `DescribeSnapshots` and `DescribeSnapshotGroups` API operations return an `Available` parameter that indicates the snapshot\\"s status.
       * Prerequisites:
       * - The snapshot feature is enabled. For more information, see [Enable the snapshot feature](https://help.aliyun.com/document_detail/108381.html).
       * - The cloud disk must be in the **in-use** or **available** state. Note the following points:
       *   - If the cloud disk is in the **in-use** state, the instance to which the disk is attached must be in the **running** or **stopped** state.
       *   - If the cloud disk is in the **available** state, you can create snapshots for it only if it has been previously attached to an ECS instance.
       *   - When you use cloud disks to create dynamic scalable volumes or RAID arrays, we recommend that you use snapshot consistency groups and enable application-consistent snapshots to back up data. A snapshot consistency group ensures the crash consistency and write-order consistency of data written across multiple cloud disks. For more information, see [Create a snapshot consistency group](https://help.aliyun.com/document_detail/199625.html) and [Create an application-consistent snapshot](https://help.aliyun.com/document_detail/208589.html).
       * Keep the following in mind when creating a snapshot:
       * - Create snapshots during off-peak hours. During snapshot creation, the I/O performance of the cloud disk decreases by less than 10% and read and write operations may temporarily slow down.
       * - You cannot use a snapshot that is being created to create a custom image ([CreateImage](https://help.aliyun.com/document_detail/25535.html)).
       * - The snapshot does not back up incremental data generated on the cloud disk during the creation process.
       * - If the cloud disk is attached to an ECS instance, do not change the state of the instance, such as stopping or restarting the instance, during snapshot creation. Otherwise, the snapshot creation will fail.
       * - You cannot resize a cloud disk during snapshot creation. You can resize the cloud disk only after the snapshot is complete.
       * - You can create a snapshot for a cloud disk that is in the **expired** (`Expired`) state. If the cloud disk is released due to expiration when the snapshot is being created, the snapshot in the **creating** (`Creating`) state is also deleted.
       * - After a snapshot is created, you are charged for the snapshot based on its size. The fees are settled on a per-region basis. For more information, see [Snapshots](https://help.aliyun.com/document_detail/56159.html).
       * - You cannot create a snapshot for a cloud disk in the following cases:
       *   - The number of manual snapshots of the cloud disk has reached the upper limit. For more information, see [Limits](~~25412#SnapshotQuota1~~).
       *   - The limit on the number of snapshots that can be created concurrently has been reached. For more information, see [Limits](~~25412#SnapshotQuota1~~).
       *   - When you query the information of an ECS instance, if the returned data contains `{"OperationLocks": {"LockReason" : "security"}}`, all operations on the instance are prohibited.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Creates a snapshot-consistent group for the disks of an Elastic Compute Service (ECS) instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description 您可以设置`InstanceId`为实例内的指定云盘创建快照一致性组；也可以只使用`DiskId.N`为同可用区内多台 ECS 实例挂载的多块云盘创建快照一致性组。
       * > `DiskId.N`不可与`ExcludeDiskId.N`同时设置。此外，如果设置了`InstanceId`，则`DiskId.N`只能设置指定实例内已挂载的云盘，不再支持设置多个跨实例的云盘 ID。
       * 创建快照一致性组时，请注意：
       * - 待创建快照的云盘必须处于**使用中**（`In_use`）或**待挂载**（`Available`）的状态。
       *   - 如果云盘处于**使用中**（`In_use`）的状态，则 ECS 实例状态为**运行中**（`Running`）或者**已停止**（`Stopped`）。
       *   - 如果云盘处于**待挂载**（`Available`）的状态，则需要保证云盘有过挂载到 ECS 实例的历史操作。从未挂载过 ECS 实例的云盘不支持创建快照。
       * - 目前快照一致性组只支持 ESSD 系列云盘（ESSD、ESSD AutoPL、ESSD Entry）。
       * - 单个快照一致性组最多包括 16 块云盘（包括系统盘和数据盘），且总容量不超过 32 TiB。
       * - 您自行创建的快照会一直保留，请定期删除不再需要的快照，避免快照容量持续扣费。
       * - 开启多重挂载特性的云盘不支持创建快照一致性组。如果实例挂载了开启多重挂载特性的云盘，您需要设置`ExcludeDiskId.N`参数排除该云盘。
       * 关于快照一致性组的功能、计费等信息，请参见[快照一致性组](https://help.aliyun.com/document_detail/199625.html)。
       *
       * @param request CreateSnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotGroupResponse
       */
      Models::CreateSnapshotGroupResponse createSnapshotGroupWithOptions(const Models::CreateSnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot-consistent group for the disks of an Elastic Compute Service (ECS) instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description 您可以设置`InstanceId`为实例内的指定云盘创建快照一致性组；也可以只使用`DiskId.N`为同可用区内多台 ECS 实例挂载的多块云盘创建快照一致性组。
       * > `DiskId.N`不可与`ExcludeDiskId.N`同时设置。此外，如果设置了`InstanceId`，则`DiskId.N`只能设置指定实例内已挂载的云盘，不再支持设置多个跨实例的云盘 ID。
       * 创建快照一致性组时，请注意：
       * - 待创建快照的云盘必须处于**使用中**（`In_use`）或**待挂载**（`Available`）的状态。
       *   - 如果云盘处于**使用中**（`In_use`）的状态，则 ECS 实例状态为**运行中**（`Running`）或者**已停止**（`Stopped`）。
       *   - 如果云盘处于**待挂载**（`Available`）的状态，则需要保证云盘有过挂载到 ECS 实例的历史操作。从未挂载过 ECS 实例的云盘不支持创建快照。
       * - 目前快照一致性组只支持 ESSD 系列云盘（ESSD、ESSD AutoPL、ESSD Entry）。
       * - 单个快照一致性组最多包括 16 块云盘（包括系统盘和数据盘），且总容量不超过 32 TiB。
       * - 您自行创建的快照会一直保留，请定期删除不再需要的快照，避免快照容量持续扣费。
       * - 开启多重挂载特性的云盘不支持创建快照一致性组。如果实例挂载了开启多重挂载特性的云盘，您需要设置`ExcludeDiskId.N`参数排除该云盘。
       * 关于快照一致性组的功能、计费等信息，请参见[快照一致性组](https://help.aliyun.com/document_detail/199625.html)。
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
       * @summary CreateVirtualBorderRouter
       *
       * @param request CreateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouterWithOptions(const Models::CreateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::CreateVirtualBorderRouter instead.
       *
       * @summary CreateVirtualBorderRouter
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
       * @summary 创建Vsc
       *
       * @description - 创建VSC时，需要实例规格支持，并且实例已开启VSC。
       * - 单个实例上VSC Primary类型只能创建1个。
       *
       * @param request CreateVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVscResponse
       */
      Models::CreateVscResponse createVscWithOptions(const Models::CreateVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Vsc
       *
       * @description - 创建VSC时，需要实例规格支持，并且实例已开启VSC。
       * - 单个实例上VSC Primary类型只能创建1个。
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
       * @description ## [](#)Usage notes
       * Before you call this operation to delete an activation code, make sure that no managed instances are registered with the activation code.
       *
       * @param request DeleteActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteActivationResponse
       */
      Models::DeleteActivationResponse deleteActivationWithOptions(const Models::DeleteActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an unused activation code.
       *
       * @description ## [](#)Usage notes
       * Before you call this operation to delete an activation code, make sure that no managed instances are registered with the activation code.
       *
       * @param request DeleteActivationRequest
       * @return DeleteActivationResponse
       */
      Models::DeleteActivationResponse deleteActivation(const Models::DeleteActivationRequest &request);

      /**
       * @summary Deletes an auto provisioning group. When you call this operation, you can specify AutoProvisioningGroupId and TerminateInstances in the request.
       *
       * @param request DeleteAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoProvisioningGroupResponse
       */
      Models::DeleteAutoProvisioningGroupResponse deleteAutoProvisioningGroupWithOptions(const Models::DeleteAutoProvisioningGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an auto provisioning group. When you call this operation, you can specify AutoProvisioningGroupId and TerminateInstances in the request.
       *
       * @param request DeleteAutoProvisioningGroupRequest
       * @return DeleteAutoProvisioningGroupResponse
       */
      Models::DeleteAutoProvisioningGroupResponse deleteAutoProvisioningGroup(const Models::DeleteAutoProvisioningGroupRequest &request);

      /**
       * @summary Deletes an automatic snapshot policy. After you delete an automatic snapshot policy, the policy is no longer applied to the disks on which it previously took effect.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(const Models::DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic snapshot policy. After you delete an automatic snapshot policy, the policy is no longer applied to the disks on which it previously took effect.
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
       * @summary Deletes a Cloud Assistant command in a region. This operation cannot delete Cloud Assistant commands that are being run.
       *
       * @param request DeleteCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommandWithOptions(const Models::DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Assistant command in a region. This operation cannot delete Cloud Assistant commands that are being run.
       *
       * @param request DeleteCommandRequest
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommand(const Models::DeleteCommandRequest &request);

      /**
       * @summary Deletes a dedicated host group. Before you call the API operation, you must migrate the dedicated hosts in the host group to another host group.
       *
       * @param request DeleteDedicatedHostClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDedicatedHostClusterResponse
       */
      Models::DeleteDedicatedHostClusterResponse deleteDedicatedHostClusterWithOptions(const Models::DeleteDedicatedHostClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dedicated host group. Before you call the API operation, you must migrate the dedicated hosts in the host group to another host group.
       *
       * @param request DeleteDedicatedHostClusterRequest
       * @return DeleteDedicatedHostClusterResponse
       */
      Models::DeleteDedicatedHostClusterResponse deleteDedicatedHostCluster(const Models::DeleteDedicatedHostClusterRequest &request);

      /**
       * @summary Deletes a deployment set.
       *
       * @description Before you delete a deployment set, make sure that no instances are in the deployment set. If instances exist, you must remove or release the instances before you can delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
       *
       * @param request DeleteDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentSetResponse
       */
      Models::DeleteDeploymentSetResponse deleteDeploymentSetWithOptions(const Models::DeleteDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment set.
       *
       * @description Before you delete a deployment set, make sure that no instances are in the deployment set. If instances exist, you must remove or release the instances before you can delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
       *
       * @param request DeleteDeploymentSetRequest
       * @return DeleteDeploymentSetResponse
       */
      Models::DeleteDeploymentSetResponse deleteDeploymentSet(const Models::DeleteDeploymentSetRequest &request);

      /**
       * @summary Deletes diagnostic metric sets.
       *
       * @param request DeleteDiagnosticMetricSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnosticMetricSetsResponse
       */
      Models::DeleteDiagnosticMetricSetsResponse deleteDiagnosticMetricSetsWithOptions(const Models::DeleteDiagnosticMetricSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes diagnostic metric sets.
       *
       * @param request DeleteDiagnosticMetricSetsRequest
       * @return DeleteDiagnosticMetricSetsResponse
       */
      Models::DeleteDiagnosticMetricSetsResponse deleteDiagnosticMetricSets(const Models::DeleteDiagnosticMetricSetsRequest &request);

      /**
       * @summary Deletes diagnostic reports.
       *
       * @description You can call this operation to delete the diagnostic reports that are no longer needed.
       *
       * @param request DeleteDiagnosticReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnosticReportsResponse
       */
      Models::DeleteDiagnosticReportsResponse deleteDiagnosticReportsWithOptions(const Models::DeleteDiagnosticReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes diagnostic reports.
       *
       * @description You can call this operation to delete the diagnostic reports that are no longer needed.
       *
       * @param request DeleteDiagnosticReportsRequest
       * @return DeleteDiagnosticReportsResponse
       */
      Models::DeleteDiagnosticReportsResponse deleteDiagnosticReports(const Models::DeleteDiagnosticReportsRequest &request);

      /**
       * @summary Releases a pay-as-you-go data disk. Supported disk types include basic disks, ultra disks, standard SSDs, and enterprise SSDs (ESSDs).
       *
       * @description When you invoke this operation, take note of the following items:
       * - Manual snapshots of the disk are retained.
       * - You can invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to specify whether to retain or release automatic snapshots along with the disk. Delete unnecessary snapshots promptly to maintain sufficient snapshot quota for epoch-based automatic snapshot policy execution.
       * - The disk must be in the **Unattached** (Available) state when you release it.
       * - If the disk with the specified ID does not exist, the request is ignored.
       *
       * @param request DeleteDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDiskWithOptions(const Models::DeleteDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go data disk. Supported disk types include basic disks, ultra disks, standard SSDs, and enterprise SSDs (ESSDs).
       *
       * @description When you invoke this operation, take note of the following items:
       * - Manual snapshots of the disk are retained.
       * - You can invoke [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) to specify whether to retain or release automatic snapshots along with the disk. Delete unnecessary snapshots promptly to maintain sufficient snapshot quota for epoch-based automatic snapshot policy execution.
       * - The disk must be in the **Unattached** (Available) state when you release it.
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
       * @summary DeleteHaVip
       *
       * @param request DeleteHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVipWithOptions(const Models::DeleteHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteHaVip is deprecated, please use Vpc::2016-04-28::DeleteHaVip instead.
       *
       * @summary DeleteHaVip
       *
       * @param request DeleteHaVipRequest
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVip(const Models::DeleteHaVipRequest &request);

      /**
       * @summary Calls DeleteHpcCluster to delete an HPC cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcClusterWithOptions(const Models::DeleteHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteHpcCluster to delete an HPC cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcCluster(const Models::DeleteHpcClusterRequest &request);

      /**
       * @summary Calls the DeleteImage operation. You can specify the ImageId and Force parameters to delete a custom image.
       *
       * @description For scenarios where deleting a custom image is not allowed and precautions after an image is deleted, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteImage operation. You can specify the ImageId and Force parameters to delete a custom image.
       *
       * @description For scenarios where deleting a custom image is not allowed and precautions after an image is deleted, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
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
       * @description If a build task is currently running, you cannot directly delete the template. Wait until the build task reaches a desired state: SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED. You can call [DescribeImagePipelineExecutions](https://help.aliyun.com/document_detail/25609.html) to query the details of build tasks.
       *
       * @param request DeleteImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipelineWithOptions(const Models::DeleteImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image template.
       *
       * @description If a build task is currently running, you cannot directly delete the template. Wait until the build task reaches a desired state: SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED. You can call [DescribeImagePipelineExecutions](https://help.aliyun.com/document_detail/25609.html) to query the details of build tasks.
       *
       * @param request DeleteImagePipelineRequest
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipeline(const Models::DeleteImagePipelineRequest &request);

      /**
       * @summary Deletes or releases a specified ECS instance.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are reclaimed. All related data is permanently lost and cannot be recovered.
       * .
       * - Manual snapshots of disks are retained and continue to incur charges. You can delete them by calling [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html).
       * - Whether disks attached to the instance and automatic snapshots are released depends on the parameter settings specified when they were created. Before you release an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For a security-locked instance, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance..
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
       * After an instance is released, all physical resources used by the instance are reclaimed. All related data is permanently lost and cannot be recovered.
       * .
       * - Manual snapshots of disks are retained and continue to incur charges. You can delete them by calling [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html).
       * - Whether disks attached to the instance and automatic snapshots are released depends on the parameter settings specified when they were created. Before you release an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the disk is converted to a pay-as-you-go disk and retained. Otherwise, the disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, automatic snapshots are retained. Otherwise, they are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For a security-locked instance, even if the `DeleteWithInstance` parameter of a disk is set to `false`, this attribute is ignored and the disk is released along with the instance..
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes or releases multiple pay-as-you-go instances or expired subscription instances in a batch. You can use parameters to specify whether to release or convert cloud disks to pay-as-you-go disks and retain them.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are reclaimed. All related data is permanently lost and cannot be recovered.
       * .
       * - Manual snapshots of cloud disks are retained and continue to incur charges. You can call [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) to delete them.
       * - Whether cloud disks and automatic snapshots attached to the instance are released depends on the parameter settings specified when they were created. Before you release an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the cloud disk is converted to a pay-as-you-go cloud disk and retained. Otherwise, the cloud disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, the automatic snapshots are retained. Otherwise, the automatic snapshots are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a cloud disk is set to `false`, this attribute is ignored and the cloud disk is released along with the instance..
       *
       * @param request DeleteInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstancesWithOptions(const Models::DeleteInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes or releases multiple pay-as-you-go instances or expired subscription instances in a batch. You can use parameters to specify whether to release or convert cloud disks to pay-as-you-go disks and retain them.
       *
       * @description >Warning: 
       * After an instance is released, all physical resources used by the instance are reclaimed. All related data is permanently lost and cannot be recovered.
       * .
       * - Manual snapshots of cloud disks are retained and continue to incur charges. You can call [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) to delete them.
       * - Whether cloud disks and automatic snapshots attached to the instance are released depends on the parameter settings specified when they were created. Before you release an instance, you can call [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) to query and modify the related parameter settings:
       *   - If `DeleteWithInstance=false`, the cloud disk is converted to a pay-as-you-go cloud disk and retained. Otherwise, the cloud disk is released along with the instance.
       *   - If `DeleteAutoSnapshot=false`, the automatic snapshots are retained. Otherwise, the automatic snapshots are released along with the instance.
       * - Elastic IP addresses (EIPs) are not released along with the instance. You can call [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) to release them.
       * >Notice: For security-locked instances, even if the `DeleteWithInstance` parameter of a cloud disk is set to `false`, this attribute is ignored and the cloud disk is released along with the instance..
       *
       * @param request DeleteInstancesRequest
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstances(const Models::DeleteInstancesRequest &request);

      /**
       * @summary Call DeleteKeyPairs to delete one or more SSH key pairs.
       *
       * @description After you delete an SSH key pair, take note of the following items:
       * - You cannot query the SSH key pair by calling [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html).
       * - If an ECS instance is bound to the SSH key pair, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DeleteKeyPairs to delete one or more SSH key pairs.
       *
       * @description After you delete an SSH key pair, take note of the following items:
       * - You cannot query the SSH key pair by calling [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html).
       * - If an ECS instance is bound to the SSH key pair, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a launch template in a specified region by specifying the LaunchTemplateId or LaunchTemplateName parameter.
       *
       * @description Take note of the following items:
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
       * @description Take note of the following items:
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
       * - The default version cannot be deleted. You must delete the entire launch template to remove the default version.
       * - If the version you want to delete is the default version, you can call [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) or switch the default version in the **Launch Template** console, and then perform the delete operation.
       * - Deleting a version does not affect instances that were already created from that version.
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
       * - The default version cannot be deleted. You must delete the entire launch template to remove the default version.
       * - If the version you want to delete is the default version, you can call [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) or switch the default version in the **Launch Template** console, and then perform the delete operation.
       * - Deleting a version does not affect instances that were already created from that version.
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
       * @summary Deletes an elastic network interface (ENI) in a region. DeleteNetworkInterface is an asynchronous operation.
       *
       * @description Take note of the following items:
       * - The ENI to be deleted must be in the Available state.
       * - If the ENI to be deleted is attached to an Elastic Compute Service (ECS) instance, you must detach the ENI from the instance before you can delete the ENI. To detach the ENI, you can call the [DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html) operation.
       * - After an ENI is deleted, the following situations occur:
       *   - All private IP addresses (including primary and secondary private IP addresses) of the ENI are automatically released.
       *   - The ENI is automatically removed from all security groups.
       * - The DeleteNetworkInterface operation is an asynchronous operation. After this operation is called to delete an ENI, you can check the status or events of the ENI to determine whether the ENI is deleted. The following figure shows the transitions between the states of the ENI.
       *   ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/krcd/DeleteNetworkInterface.png)
       *   - If the ENI is in the Deleting state, the ENI deletion request is sent and the ENI is being deleted.
       *   - If the ENI is not found, the ENI is deleted.
       *   - If the ENI is stuck in the Deleting state, the ENI fails to be deleted. You can re-initiate the request to delete the ENI.
       * For information about examples on how to call the DeleteNetworkInterface operation, see [Delete an ENI](https://help.aliyun.com/document_detail/471553.html).
       *
       * @param request DeleteNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfaceResponse
       */
      Models::DeleteNetworkInterfaceResponse deleteNetworkInterfaceWithOptions(const Models::DeleteNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an elastic network interface (ENI) in a region. DeleteNetworkInterface is an asynchronous operation.
       *
       * @description Take note of the following items:
       * - The ENI to be deleted must be in the Available state.
       * - If the ENI to be deleted is attached to an Elastic Compute Service (ECS) instance, you must detach the ENI from the instance before you can delete the ENI. To detach the ENI, you can call the [DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html) operation.
       * - After an ENI is deleted, the following situations occur:
       *   - All private IP addresses (including primary and secondary private IP addresses) of the ENI are automatically released.
       *   - The ENI is automatically removed from all security groups.
       * - The DeleteNetworkInterface operation is an asynchronous operation. After this operation is called to delete an ENI, you can check the status or events of the ENI to determine whether the ENI is deleted. The following figure shows the transitions between the states of the ENI.
       *   ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/krcd/DeleteNetworkInterface.png)
       *   - If the ENI is in the Deleting state, the ENI deletion request is sent and the ENI is being deleted.
       *   - If the ENI is not found, the ENI is deleted.
       *   - If the ENI is stuck in the Deleting state, the ENI fails to be deleted. You can re-initiate the request to delete the ENI.
       * For information about examples on how to call the DeleteNetworkInterface operation, see [Delete an ENI](https://help.aliyun.com/document_detail/471553.html).
       *
       * @param request DeleteNetworkInterfaceRequest
       * @return DeleteNetworkInterfaceResponse
       */
      Models::DeleteNetworkInterfaceResponse deleteNetworkInterface(const Models::DeleteNetworkInterfaceRequest &request);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary Deletes a permission for an elastic network interface.
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermissionWithOptions(const Models::DeleteNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary Deletes a permission for an elastic network interface.
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermission(const Models::DeleteNetworkInterfacePermissionRequest &request);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary Deletes a physical connection.
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary Deletes a physical connection.
       *
       * @param request DeletePhysicalConnectionRequest
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnection(const Models::DeletePhysicalConnectionRequest &request);

      /**
       * @summary Deletes a maintenance window.
       *
       * @param request DeletePlanMaintenanceWindowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlanMaintenanceWindowResponse
       */
      Models::DeletePlanMaintenanceWindowResponse deletePlanMaintenanceWindowWithOptions(const Models::DeletePlanMaintenanceWindowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a maintenance window.
       *
       * @param request DeletePlanMaintenanceWindowRequest
       * @return DeletePlanMaintenanceWindowResponse
       */
      Models::DeletePlanMaintenanceWindowResponse deletePlanMaintenanceWindow(const Models::DeletePlanMaintenanceWindowRequest &request);

      /**
       * @summary Deletes a port list and all entries in the port list.
       *
       * @param request DeletePortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePortRangeListResponse
       */
      Models::DeletePortRangeListResponse deletePortRangeListWithOptions(const Models::DeletePortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a port list and all entries in the port list.
       *
       * @param request DeletePortRangeListRequest
       * @return DeletePortRangeListResponse
       */
      Models::DeletePortRangeListResponse deletePortRangeList(const Models::DeletePortRangeListRequest &request);

      /**
       * @summary Calls DeletePrefixList to delete a specified prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with other resources, you cannot directly delete it. Dissociate the prefix list from the other resources first, and then delete it. You can call [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) to query the resources associated with a specified prefix list.
       *
       * @param request DeletePrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrefixListResponse
       */
      Models::DeletePrefixListResponse deletePrefixListWithOptions(const Models::DeletePrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeletePrefixList to delete a specified prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with other resources, you cannot directly delete it. Dissociate the prefix list from the other resources first, and then delete it. You can call [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) to query the resources associated with a specified prefix list.
       *
       * @param request DeletePrefixListRequest
       * @return DeletePrefixListResponse
       */
      Models::DeletePrefixListResponse deletePrefixList(const Models::DeletePrefixListRequest &request);

      /**
       * @deprecated OpenAPI DeleteRouteEntry is deprecated, please use Vpc::2016-04-28::DeleteRouteEntry instead.
       *
       * @summary DeleteRouteEntry
       *
       * @param request DeleteRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntryWithOptions(const Models::DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRouteEntry is deprecated, please use Vpc::2016-04-28::DeleteRouteEntry instead.
       *
       * @summary DeleteRouteEntry
       *
       * @param request DeleteRouteEntryRequest
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntry(const Models::DeleteRouteEntryRequest &request);

      /**
       * @deprecated OpenAPI DeleteRouterInterface is deprecated, please use Vpc::2016-04-28::DeleteRouterInterface instead.
       *
       * @summary DeleteRouterInterface
       *
       * @param request DeleteRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterfaceWithOptions(const Models::DeleteRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRouterInterface is deprecated, please use Vpc::2016-04-28::DeleteRouterInterface instead.
       *
       * @summary DeleteRouterInterface
       *
       * @param request DeleteRouterInterfaceRequest
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterface(const Models::DeleteRouterInterfaceRequest &request);

      /**
       * @summary Deletes a security group and all security group rules in the security group.
       *
       * @description - Make sure that no Elastic Compute Service (ECS) instances exist in the security group. You can query instances by calling the [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) operation.
       * - Make sure that no elastic network interfaces (ENIs) exist in the security group. You can query ENIs by calling the [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) operation.
       * - Make sure that the security group that you want to delete is not referenced by rules of other security groups. You can query the associations by calling the [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) operation.
       * - If the `InvalidOperation.DeletionProtection` error code is returned when you call the DeleteSecurityGroup operation to delete a security group, the deletion protection feature is enabled for the security group. When you create a Container Service for Kubernetes (ACK) cluster, the deletion protection feature is enabled for an associated security group to prevent accidental deletion. You cannot manually disable the deletion protection feature for the security group. The deletion protection feature can be automatically disabled only after the ACK cluster is deleted. For more information, see the [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html) section of the "Configure and manage security groups for an ACK cluster" topic.
       *
       * @param request DeleteSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroupWithOptions(const Models::DeleteSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group and all security group rules in the security group.
       *
       * @description - Make sure that no Elastic Compute Service (ECS) instances exist in the security group. You can query instances by calling the [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) operation.
       * - Make sure that no elastic network interfaces (ENIs) exist in the security group. You can query ENIs by calling the [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) operation.
       * - Make sure that the security group that you want to delete is not referenced by rules of other security groups. You can query the associations by calling the [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) operation.
       * - If the `InvalidOperation.DeletionProtection` error code is returned when you call the DeleteSecurityGroup operation to delete a security group, the deletion protection feature is enabled for the security group. When you create a Container Service for Kubernetes (ACK) cluster, the deletion protection feature is enabled for an associated security group to prevent accidental deletion. You cannot manually disable the deletion protection feature for the security group. The deletion protection feature can be automatically disabled only after the ACK cluster is deleted. For more information, see the [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html) section of the "Configure and manage security groups for an ACK cluster" topic.
       *
       * @param request DeleteSecurityGroupRequest
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroup(const Models::DeleteSecurityGroupRequest &request);

      /**
       * @summary Deletes a specified snapshot. If you call this operation to delete a snapshot that is being created, the associated snapshot creation task is also canceled.
       *
       * @description Take note of the following items:
       * - If the snapshot does not exist, the request is ignored.
       * - If the snapshot has been used to create custom images, the snapshot cannot be deleted. You need to call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom images before you can delete the snapshot.
       * - If the snapshot has been used to create disks and `Force` is not specified or is set to `false`, the snapshot cannot be deleted directly. If you want to delete the snapshot, set `Force` to true to forcibly delete the snapshot. The disks created from the snapshot cannot be re-initialized after the snapshot is forcibly deleted.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified snapshot. If you call this operation to delete a snapshot that is being created, the associated snapshot creation task is also canceled.
       *
       * @description Take note of the following items:
       * - If the snapshot does not exist, the request is ignored.
       * - If the snapshot has been used to create custom images, the snapshot cannot be deleted. You need to call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom images before you can delete the snapshot.
       * - If the snapshot has been used to create disks and `Force` is not specified or is set to `false`, the snapshot cannot be deleted directly. If you want to delete the snapshot, set `Force` to true to forcibly delete the snapshot. The disks created from the snapshot cannot be re-initialized after the snapshot is forcibly deleted.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Deletes snapshot-consistent groups.
       *
       * @description If a disk snapshot that is contained in a snapshot-consistent group has been used to create a custom image, the disk snapshot is retained after the snapshot-consistent group is deleted. Before you can delete the disk snapshot, you must call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom image. Then, you can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/25525.html) operation to delete the disk snapshot.
       *
       * @param request DeleteSnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotGroupResponse
       */
      Models::DeleteSnapshotGroupResponse deleteSnapshotGroupWithOptions(const Models::DeleteSnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes snapshot-consistent groups.
       *
       * @description If a disk snapshot that is contained in a snapshot-consistent group has been used to create a custom image, the disk snapshot is retained after the snapshot-consistent group is deleted. Before you can delete the disk snapshot, you must call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom image. Then, you can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/25525.html) operation to delete the disk snapshot.
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
       * @summary 删除虚拟存储通道
       *
       * @description 调用该接口时，您需要注意：
       * - VSC需要先解绑CPFS等文件系统绑定。
       * - 调用释放VSC，需要实例操作系统响应，如果实例操作系统未响应，VSC删除失败进入DetachFailed状态。您可以检查操作系统是否正常，或者对实例关机后再尝试删除。
       * - 释放实例时，如果实例上有VSC会随实例一并释放。
       *
       * @param request DeleteVscRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVscWithOptions(const Models::DeleteVscRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除虚拟存储通道
       *
       * @description 调用该接口时，您需要注意：
       * - VSC需要先解绑CPFS等文件系统绑定。
       * - 调用释放VSC，需要实例操作系统响应，如果实例操作系统未响应，VSC删除失败进入DetachFailed状态。您可以检查操作系统是否正常，或者对实例关机后再尝试删除。
       * - 释放实例时，如果实例上有VSC会随实例一并释放。
       *
       * @param request DeleteVscRequest
       * @return DeleteVscResponse
       */
      Models::DeleteVscResponse deleteVsc(const Models::DeleteVscRequest &request);

      /**
       * @summary You can invoke DeregisterManagedInstance to log off a managed instance. After logging off, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstanceWithOptions(const Models::DeregisterManagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke DeregisterManagedInstance to log off a managed instance. After logging off, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstance(const Models::DeregisterManagedInstanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary Queries access points.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary Queries access points.
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries the quotas of Elastic Compute Service (ECS) resources that you can create in an Alibaba Cloud region. For a specific region, you can query the maximum numbers of security groups, elastic network interfaces (ENIs), vCPUs for pay-as-you-go instances, vCPUs for spot instances, and dedicated hosts that you can create and the capacity quotas for pay-as-you-go disks that you can create. You can also query information such as network types or whether an account has completed the account verification.
       *
       * @description After you [create](https://account.alibabacloud.com/register/intl_register.htm) an Alibaba Cloud account, you can create a specific number of ECS instances in different regions within the account. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * You can apply for a quota increase in the [Quota Center console](https://quotas.console.aliyun.com/products).
       *
       * @param request DescribeAccountAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAttributesResponse
       */
      Models::DescribeAccountAttributesResponse describeAccountAttributesWithOptions(const Models::DescribeAccountAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas of Elastic Compute Service (ECS) resources that you can create in an Alibaba Cloud region. For a specific region, you can query the maximum numbers of security groups, elastic network interfaces (ENIs), vCPUs for pay-as-you-go instances, vCPUs for spot instances, and dedicated hosts that you can create and the capacity quotas for pay-as-you-go disks that you can create. You can also query information such as network types or whether an account has completed the account verification.
       *
       * @description After you [create](https://account.alibabacloud.com/register/intl_register.htm) an Alibaba Cloud account, you can create a specific number of ECS instances in different regions within the account. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * You can apply for a quota increase in the [Quota Center console](https://quotas.console.aliyun.com/products).
       *
       * @param request DescribeAccountAttributesRequest
       * @return DescribeAccountAttributesResponse
       */
      Models::DescribeAccountAttributesResponse describeAccountAttributes(const Models::DescribeAccountAttributesRequest &request);

      /**
       * @summary Queries existing activation codes and their usage information.
       *
       * @description ## [](#)Usage notes
       * You can use one of the following methods to check the responses:
       * - Method 1: During a paged query, when you call the DescribeActivations operation to retrieve the first page of results, use `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which you can use in the next request to retrieve a new page of results. When you call the DescribeActivations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * - Method 2: Use `PageSize` to specify the number of entries to return on each page, and then use `PageNumber` to specify the number of the page to return. You can use only one of the preceding methods. If you specify `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect and the `TotalCount` response parameter is invalid.
       *
       * @param request DescribeActivationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationsResponse
       */
      Models::DescribeActivationsResponse describeActivationsWithOptions(const Models::DescribeActivationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries existing activation codes and their usage information.
       *
       * @description ## [](#)Usage notes
       * You can use one of the following methods to check the responses:
       * - Method 1: During a paged query, when you call the DescribeActivations operation to retrieve the first page of results, use `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which you can use in the next request to retrieve a new page of results. When you call the DescribeActivations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * - Method 2: Use `PageSize` to specify the number of entries to return on each page, and then use `PageNumber` to specify the number of the page to return. You can use only one of the preceding methods. If you specify `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect and the `TotalCount` response parameter is invalid.
       *
       * @param request DescribeActivationsRequest
       * @return DescribeActivationsResponse
       */
      Models::DescribeActivationsResponse describeActivations(const Models::DescribeActivationsRequest &request);

      /**
       * @summary Call `DescribeAutoProvisioningGroupHistory` to query the history of scheduling tasks for an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistoryWithOptions(const Models::DescribeAutoProvisioningGroupHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DescribeAutoProvisioningGroupHistory` to query the history of scheduling tasks for an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistory(const Models::DescribeAutoProvisioningGroupHistoryRequest &request);

      /**
       * @summary Queries information about instances in an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstancesWithOptions(const Models::DescribeAutoProvisioningGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about instances in an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstances(const Models::DescribeAutoProvisioningGroupInstancesRequest &request);

      /**
       * @summary Queries one or more Auto Provisioning Groups.
       *
       * @param request DescribeAutoProvisioningGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupsResponse
       */
      Models::DescribeAutoProvisioningGroupsResponse describeAutoProvisioningGroupsWithOptions(const Models::DescribeAutoProvisioningGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more Auto Provisioning Groups.
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
       * @summary Queries the inventory status of resources in a specified zone. This operation is primarily used to check whether target resources, such as instance types and system disk types, are available in a specific zone before you create instances (RunInstances) or modify instance specifications (ModifyInstanceSpec).
       *
       * @description The DestinationResource parameter has different logic and requirements depending on its value. In the following ordered list, a lower-ranked value requires more parameters to be set. You cannot use a lower-ranked value to filter resources of a higher-ranked category.
       * - Value order: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * - Examples:
       *     - If DestinationResource is set to `DataDisk`:
       *          - If `ResourceType` is set to `disk`, the operation queries data disk types that are not associated with a specific ECS instance type. In this case, the InstanceType parameter is optional.
       *         - If `ResourceType` is set to `instance`, the operation queries data disk types that can be attached to an ECS instance. Because instance types impose restrictions on data disks, you must specify both `InstanceType` and `DataDiskCategory`.
       *     - If DestinationResource is set to `SystemDisk` and `ResourceType` is set to `instance`, you must specify the InstanceType parameter because ECS instance types impose restrictions on system disks.
       *     - If DestinationResource is set to `InstanceType`, specify the IoOptimized and InstanceType parameters.
       *     - Query the inventory of ecs.g5.large across all zones in a specified region: `RegionId=ap-southeast-1 &DestinationResource=InstanceType &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       *     - Query the zones in a specified region where ecs.g5.large is available: `RegionId=ap-southeast-1 &DestinationResource=Zone &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       * <details>
       * <summary>Query the zones in the China (Hangzhou) region where the ecs.g5.large instance type is available.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "DestinationResource": "Zone"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>Query the inventory of the ecs.g5.large instance type across all zones in the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "DestinationResource": "InstanceType"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase only a data disk] Query the inventory of the cloud_efficiency data disk type in Zone B of the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "ZoneId": "cn-hangzhou-b",
       * "ResourceType": "disk",
       * "DestinationResource": "DataDisk"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase an ECS instance and a system disk] Query the inventory of the ecs.g7.large instance type with the cloud_essd system disk type in Zone B of the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "ZoneId": "cn-hangzhou-b",
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
       * @summary Queries the inventory status of resources in a specified zone. This operation is primarily used to check whether target resources, such as instance types and system disk types, are available in a specific zone before you create instances (RunInstances) or modify instance specifications (ModifyInstanceSpec).
       *
       * @description The DestinationResource parameter has different logic and requirements depending on its value. In the following ordered list, a lower-ranked value requires more parameters to be set. You cannot use a lower-ranked value to filter resources of a higher-ranked category.
       * - Value order: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * - Examples:
       *     - If DestinationResource is set to `DataDisk`:
       *          - If `ResourceType` is set to `disk`, the operation queries data disk types that are not associated with a specific ECS instance type. In this case, the InstanceType parameter is optional.
       *         - If `ResourceType` is set to `instance`, the operation queries data disk types that can be attached to an ECS instance. Because instance types impose restrictions on data disks, you must specify both `InstanceType` and `DataDiskCategory`.
       *     - If DestinationResource is set to `SystemDisk` and `ResourceType` is set to `instance`, you must specify the InstanceType parameter because ECS instance types impose restrictions on system disks.
       *     - If DestinationResource is set to `InstanceType`, specify the IoOptimized and InstanceType parameters.
       *     - Query the inventory of ecs.g5.large across all zones in a specified region: `RegionId=ap-southeast-1 &DestinationResource=InstanceType &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       *     - Query the zones in a specified region where ecs.g5.large is available: `RegionId=ap-southeast-1 &DestinationResource=Zone &IoOptimized=optimized &InstanceType=ecs.g5.large`.
       * <details>
       * <summary>Query the zones in the China (Hangzhou) region where the ecs.g5.large instance type is available.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "DestinationResource": "Zone"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>Query the inventory of the ecs.g5.large instance type across all zones in the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "DestinationResource": "InstanceType"，
       * "InstanceType": "ecs.g5.large"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase only a data disk] Query the inventory of the cloud_efficiency data disk type in Zone B of the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "ZoneId": "cn-hangzhou-b",
       * "ResourceType": "disk",
       * "DestinationResource": "DataDisk"
       * ```
       * </details>
       * <details>
       * <summary>[Purchase an ECS instance and a system disk] Query the inventory of the ecs.g7.large instance type with the cloud_essd system disk type in Zone B of the China (Hangzhou) region.</summary>
       * ```
       * "RegionId": "cn-hangzhou",
       * "ZoneId": "cn-hangzhou-b",
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
       * @summary Calls DescribeBandwidthLimitation to query the maximum public bandwidth that can be purchased, upgraded, or downgraded for different instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitationWithOptions(const Models::DescribeBandwidthLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeBandwidthLimitation to query the maximum public bandwidth that can be purchased, upgraded, or downgraded for different instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitation(const Models::DescribeBandwidthLimitationRequest &request);

      /**
       * @summary DescribeBandwidthPackages
       *
       * @param request DescribeBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackagesResponse
       */
      Models::DescribeBandwidthPackagesResponse describeBandwidthPackagesWithOptions(const Models::DescribeBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeBandwidthPackages
       *
       * @param request DescribeBandwidthPackagesRequest
       * @return DescribeBandwidthPackagesResponse
       */
      Models::DescribeBandwidthPackagesResponse describeBandwidthPackages(const Models::DescribeBandwidthPackagesRequest &request);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instances that match a capacity reservation.
       *
       * @param request DescribeCapacityReservationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationInstancesResponse
       */
      Models::DescribeCapacityReservationInstancesResponse describeCapacityReservationInstancesWithOptions(const Models::DescribeCapacityReservationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instances that match a capacity reservation.
       *
       * @param request DescribeCapacityReservationInstancesRequest
       * @return DescribeCapacityReservationInstancesResponse
       */
      Models::DescribeCapacityReservationInstancesResponse describeCapacityReservationInstances(const Models::DescribeCapacityReservationInstancesRequest &request);

      /**
       * @summary Returns details for one or more capacity reservation services, including their status, start and end times, private pool mode, and used instance count.
       *
       * @param request DescribeCapacityReservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservationsWithOptions(const Models::DescribeCapacityReservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns details for one or more capacity reservation services, including their status, start and end times, private pool mode, and used instance count.
       *
       * @param request DescribeCapacityReservationsRequest
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservations(const Models::DescribeCapacityReservationsRequest &request);

      /**
       * @summary Queries instances located in the classic network that have established ClassicLink connections to virtual private clouds (VPCs).
       *
       * @description Take note of the following items:
       * - This operation applies only to instances that reside in the classic network.
       * - You can query a maximum of 100 instances that reside in the classic network at a time.
       * - At least one of the `VpcId` and `InstanceId` parameters must be configured.
       *
       * @param request DescribeClassicLinkInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassicLinkInstancesResponse
       */
      Models::DescribeClassicLinkInstancesResponse describeClassicLinkInstancesWithOptions(const Models::DescribeClassicLinkInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances located in the classic network that have established ClassicLink connections to virtual private clouds (VPCs).
       *
       * @description Take note of the following items:
       * - This operation applies only to instances that reside in the classic network.
       * - You can query a maximum of 100 instances that reside in the classic network at a time.
       * - At least one of the `VpcId` and `InstanceId` parameters must be configured.
       *
       * @param request DescribeClassicLinkInstancesRequest
       * @return DescribeClassicLinkInstancesResponse
       */
      Models::DescribeClassicLinkInstancesResponse describeClassicLinkInstances(const Models::DescribeClassicLinkInstancesRequest &request);

      /**
       * @summary View the Cloud Assistant service configuration.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettingsWithOptions(const Models::DescribeCloudAssistantSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the Cloud Assistant service configuration.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettings(const Models::DescribeCloudAssistantSettingsRequest &request);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on instances. If Cloud Assistant Agent is installed, the system queries the total number of Cloud Assistant commands that have been run, the number of Cloud Assistant commands that are being run, and the time when Cloud Assistant commands were last run.
       *
       * @description ## [](#)Usage notes
       * - Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of CloudAssistantStatus. Run commands on or send files to the instances only when the return value is true.
       * - During a paged query, when you call the DescribeCloudAssistantStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCloudAssistantStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatusWithOptions(const Models::DescribeCloudAssistantStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on instances. If Cloud Assistant Agent is installed, the system queries the total number of Cloud Assistant commands that have been run, the number of Cloud Assistant commands that are being run, and the time when Cloud Assistant commands were last run.
       *
       * @description ## [](#)Usage notes
       * - Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of CloudAssistantStatus. Run commands on or send files to the instances only when the return value is true.
       * - During a paged query, when you call the DescribeCloudAssistantStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCloudAssistantStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatus(const Models::DescribeCloudAssistantStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Describes one or more clusters.
       *
       * @param request DescribeClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClustersWithOptions(const Models::DescribeClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Describes one or more clusters.
       *
       * @param request DescribeClustersRequest
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClusters(const Models::DescribeClustersRequest &request);

      /**
       * @summary You can view your custom Cloud Assistant commands or the public commands provided by Alibaba Cloud.
       *
       * @description ## API
       * - To list all your manually created commands (`CommandId`), provide only the `Action` and `RegionId` request parameters.
       * - Use `MaxResults` to limit the number of items to return. If a response includes a `NextToken`, more results are available. To retrieve the next page, pass the value of this `NextToken` in your subsequent request.
       *
       * @param request DescribeCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommandsWithOptions(const Models::DescribeCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view your custom Cloud Assistant commands or the public commands provided by Alibaba Cloud.
       *
       * @description ## API
       * - To list all your manually created commands (`CommandId`), provide only the `Action` and `RegionId` request parameters.
       * - Use `MaxResults` to limit the number of items to return. If a response includes a `NextToken`, more results are available. To retrieve the next page, pass the value of this `NextToken` in your subsequent request.
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
       * @summary Queries the details of one or more dedicated host groups.
       *
       * @description ## [](#)Usage notes
       * You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if `DedicatedHostClusterIds` is set to an empty JSON array (`[]`), this parameter is regarded as a valid filter condition and an empty result is returned.
       *
       * @param request DescribeDedicatedHostClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostClustersResponse
       */
      Models::DescribeDedicatedHostClustersResponse describeDedicatedHostClustersWithOptions(const Models::DescribeDedicatedHostClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more dedicated host groups.
       *
       * @description ## [](#)Usage notes
       * You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if `DedicatedHostClusterIds` is set to an empty JSON array (`[]`), this parameter is regarded as a valid filter condition and an empty result is returned.
       *
       * @param request DescribeDedicatedHostClustersRequest
       * @return DescribeDedicatedHostClustersResponse
       */
      Models::DescribeDedicatedHostClustersResponse describeDedicatedHostClusters(const Models::DescribeDedicatedHostClustersRequest &request);

      /**
       * @summary Queries the details of dedicated host types supported in a region, or the Elastic Compute Service (ECS) instance families supported by a specific dedicated host type.
       *
       * @param request DescribeDedicatedHostTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostTypesResponse
       */
      Models::DescribeDedicatedHostTypesResponse describeDedicatedHostTypesWithOptions(const Models::DescribeDedicatedHostTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of dedicated host types supported in a region, or the Elastic Compute Service (ECS) instance families supported by a specific dedicated host type.
       *
       * @param request DescribeDedicatedHostTypesRequest
       * @return DescribeDedicatedHostTypesResponse
       */
      Models::DescribeDedicatedHostTypesResponse describeDedicatedHostTypes(const Models::DescribeDedicatedHostTypesRequest &request);

      /**
       * @summary Use this operation to query details for one or more dedicated hosts. It returns information such as physical performance metrics, machine code, status, and a list of ECS instances on the hosts. You can filter the results by parameters like dedicated host IDs, dedicated host cluster ID, host name, or status to find specific hosts. This feature helps you efficiently manage and optimize your cloud computing resources.
       *
       * @description ## API
       * You can query the details of one or more dedicated hosts in one of the following ways:
       * - Specify `DedicatedHostIds` to query specific dedicated hosts.
       * - Specify `DedicatedHostClusterId` to query all dedicated hosts in a dedicated host cluster.
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this operation to query details for one or more dedicated hosts. It returns information such as physical performance metrics, machine code, status, and a list of ECS instances on the hosts. You can filter the results by parameters like dedicated host IDs, dedicated host cluster ID, host name, or status to find specific hosts. This feature helps you efficiently manage and optimize your cloud computing resources.
       *
       * @description ## API
       * You can query the details of one or more dedicated hosts in one of the following ways:
       * - Specify `DedicatedHostIds` to query specific dedicated hosts.
       * - Specify `DedicatedHostClusterId` to query all dedicated hosts in a dedicated host cluster.
       *
       * @param request DescribeDedicatedHostsRequest
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHosts(const Models::DescribeDedicatedHostsRequest &request);

      /**
       * @summary Queries the instance families that support different deployment strategies. When you call this operation, specify parameters, such as RegionId and Strategy, in the request.
       *
       * @description ## [](#)Usage notes
       * For information about instance families, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       *
       * @param request DescribeDeploymentSetSupportedInstanceTypeFamilyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentSetSupportedInstanceTypeFamilyResponse
       */
      Models::DescribeDeploymentSetSupportedInstanceTypeFamilyResponse describeDeploymentSetSupportedInstanceTypeFamilyWithOptions(const Models::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance families that support different deployment strategies. When you call this operation, specify parameters, such as RegionId and Strategy, in the request.
       *
       * @description ## [](#)Usage notes
       * For information about instance families, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       *
       * @param request DescribeDeploymentSetSupportedInstanceTypeFamilyRequest
       * @return DescribeDeploymentSetSupportedInstanceTypeFamilyResponse
       */
      Models::DescribeDeploymentSetSupportedInstanceTypeFamilyResponse describeDeploymentSetSupportedInstanceTypeFamily(const Models::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request);

      /**
       * @summary Describes one or more deployment sets.
       *
       * @param request DescribeDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentSetsResponse
       */
      Models::DescribeDeploymentSetsResponse describeDeploymentSetsWithOptions(const Models::DescribeDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes one or more deployment sets.
       *
       * @param request DescribeDeploymentSetsRequest
       * @return DescribeDeploymentSetsResponse
       */
      Models::DescribeDeploymentSetsResponse describeDeploymentSets(const Models::DescribeDeploymentSetsRequest &request);

      /**
       * @summary Queries diagnostic metric sets.
       *
       * @param request DescribeDiagnosticMetricSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticMetricSetsResponse
       */
      Models::DescribeDiagnosticMetricSetsResponse describeDiagnosticMetricSetsWithOptions(const Models::DescribeDiagnosticMetricSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries diagnostic metric sets.
       *
       * @param request DescribeDiagnosticMetricSetsRequest
       * @return DescribeDiagnosticMetricSetsResponse
       */
      Models::DescribeDiagnosticMetricSetsResponse describeDiagnosticMetricSets(const Models::DescribeDiagnosticMetricSetsRequest &request);

      /**
       * @summary Queries diagnostic metrics.
       *
       * @param request DescribeDiagnosticMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticMetricsResponse
       */
      Models::DescribeDiagnosticMetricsResponse describeDiagnosticMetricsWithOptions(const Models::DescribeDiagnosticMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries diagnostic metrics.
       *
       * @param request DescribeDiagnosticMetricsRequest
       * @return DescribeDiagnosticMetricsResponse
       */
      Models::DescribeDiagnosticMetricsResponse describeDiagnosticMetrics(const Models::DescribeDiagnosticMetricsRequest &request);

      /**
       * @summary Call `DescribeDiagnosticReportAttributes` to get the details of a resource diagnosis.
       *
       * @param request DescribeDiagnosticReportAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticReportAttributesResponse
       */
      Models::DescribeDiagnosticReportAttributesResponse describeDiagnosticReportAttributesWithOptions(const Models::DescribeDiagnosticReportAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DescribeDiagnosticReportAttributes` to get the details of a resource diagnosis.
       *
       * @param request DescribeDiagnosticReportAttributesRequest
       * @return DescribeDiagnosticReportAttributesResponse
       */
      Models::DescribeDiagnosticReportAttributesResponse describeDiagnosticReportAttributes(const Models::DescribeDiagnosticReportAttributesRequest &request);

      /**
       * @summary Queries resource diagnostic reports.
       *
       * @param request DescribeDiagnosticReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticReportsResponse
       */
      Models::DescribeDiagnosticReportsResponse describeDiagnosticReportsWithOptions(const Models::DescribeDiagnosticReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource diagnostic reports.
       *
       * @param request DescribeDiagnosticReportsRequest
       * @return DescribeDiagnosticReportsResponse
       */
      Models::DescribeDiagnosticReportsResponse describeDiagnosticReports(const Models::DescribeDiagnosticReportsRequest &request);

      /**
       * @summary Queries the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @param request DescribeDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskDefaultKMSKeyIdResponse
       */
      Models::DescribeDiskDefaultKMSKeyIdResponse describeDiskDefaultKMSKeyIdWithOptions(const Models::DescribeDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @param request DescribeDiskDefaultKMSKeyIdRequest
       * @return DescribeDiskDefaultKMSKeyIdResponse
       */
      Models::DescribeDiskDefaultKMSKeyIdResponse describeDiskDefaultKMSKeyId(const Models::DescribeDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Queries whether account-level default encryption of Elastic Block Storage (EBS) resources is enabled in a region.
       *
       * @param request DescribeDiskEncryptionByDefaultStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskEncryptionByDefaultStatusResponse
       */
      Models::DescribeDiskEncryptionByDefaultStatusResponse describeDiskEncryptionByDefaultStatusWithOptions(const Models::DescribeDiskEncryptionByDefaultStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether account-level default encryption of Elastic Block Storage (EBS) resources is enabled in a region.
       *
       * @param request DescribeDiskEncryptionByDefaultStatusRequest
       * @return DescribeDiskEncryptionByDefaultStatusResponse
       */
      Models::DescribeDiskEncryptionByDefaultStatusResponse describeDiskEncryptionByDefaultStatus(const Models::DescribeDiskEncryptionByDefaultStatusRequest &request);

      /**
       * @summary Queries the usage information of a disk within a specified period, such as read IOPS, write IOPS, read bandwidth (B/s), write bandwidth (B/s), read latency (μs), and write latency (μs).
       *
       * @description When you call this operation, take note of the following limits:
       * - You can query only the usage information of disks that are in the In Use (`In_use`) state. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html).
       *     > If the returned information has missing content, the disk was not in the In Use (`In_use`) state during that period, and the usage information cannot be obtained.
       * - A maximum of 400 data entries can be returned at a time. The value of `(EndTime – StartTime) / Period` must be less than or equal to 400. That is, the value of the `TotalCount` response parameter cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring information of up to the last 30 days. The specified `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * ## Request example
       * Assume that you want to query the usage information of a disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z` at intervals of 600 seconds. Configure the request parameters as follows:
       * ```
       * RegionId:"cn-hangzhou", // Set the China (Hangzhou) region
       * DiskId:"d-bp14emm68wx98vjk****", // Set the disk ID
       * StartTime:"2025-02-15T00:00:00Z", // Set the query start time
       * EndTime:"2025-02-17T00:00:00Z", // Set the query end time
       * Period:"600", // Set the data granularity
       * ```
       *
       * @param request DescribeDiskMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorDataWithOptions(const Models::DescribeDiskMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage information of a disk within a specified period, such as read IOPS, write IOPS, read bandwidth (B/s), write bandwidth (B/s), read latency (μs), and write latency (μs).
       *
       * @description When you call this operation, take note of the following limits:
       * - You can query only the usage information of disks that are in the In Use (`In_use`) state. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html).
       *     > If the returned information has missing content, the disk was not in the In Use (`In_use`) state during that period, and the usage information cannot be obtained.
       * - A maximum of 400 data entries can be returned at a time. The value of `(EndTime – StartTime) / Period` must be less than or equal to 400. That is, the value of the `TotalCount` response parameter cannot exceed 400. Otherwise, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring information of up to the last 30 days. The specified `StartTime` parameter cannot be more than 30 days earlier than the current time.
       * ## Request example
       * Assume that you want to query the usage information of a disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z` at intervals of 600 seconds. Configure the request parameters as follows:
       * ```
       * RegionId:"cn-hangzhou", // Set the China (Hangzhou) region
       * DiskId:"d-bp14emm68wx98vjk****", // Set the disk ID
       * StartTime:"2025-02-15T00:00:00Z", // Set the query start time
       * EndTime:"2025-02-17T00:00:00Z", // Set the query end time
       * Period:"600", // Set the data granularity
       * ```
       *
       * @param request DescribeDiskMonitorDataRequest
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorData(const Models::DescribeDiskMonitorDataRequest &request);

      /**
       * @summary Queries information about one or more created block storage devices, including cloud disks, local disks, and elastic ephemeral disks.
       *
       * @description - The request parameters RegionId, ZoneId, DiskIds, and InstanceId are filters. These parameters have a logical AND relationship.
       * - The DiskIds request parameter is a JSON format array. If this parameter is empty, the filter does not take effect. However, if DiskIds is an empty array, the filter is considered valid and an empty result is returned.
       * - Token-based paged query is supported. Set the NextToken parameter to specify the query token. Its value is the NextToken value returned in the previous call of DescribeDisks. Use MaxResults to settings the maximum number of entries per page.
       * - A cloud disk with the multi-attach feature enabled can be attached to multiple instances. You can view all attachment information for the disk from the Attachment list in the response.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisksWithOptions(const Models::DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more created block storage devices, including cloud disks, local disks, and elastic ephemeral disks.
       *
       * @description - The request parameters RegionId, ZoneId, DiskIds, and InstanceId are filters. These parameters have a logical AND relationship.
       * - The DiskIds request parameter is a JSON format array. If this parameter is empty, the filter does not take effect. However, if DiskIds is an empty array, the filter is considered valid and an empty result is returned.
       * - Token-based paged query is supported. Set the NextToken parameter to specify the query token. Its value is the NextToken value returned in the previous call of DescribeDisks. Use MaxResults to settings the maximum number of entries per page.
       * - A cloud disk with the multi-attach feature enabled can be attached to multiple instances. You can view all attachment information for the disk from the Attachment list in the response.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameters of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisks(const Models::DescribeDisksRequest &request);

      /**
       * @summary Queries the full status information about one or more Elastic Block Storage (EBS) devices.
       *
       * @description - The full status information about an EBS device includes the lifecycle status specified by the `Status` parameter, health status specified by the `HealthStatus` parameter, and event type specified by the `EventType` parameter of the EBS device. You can filter the results based on these parameters.
       * - The release time, scheduled execution time, and actual execution time of each EBS device event are identical. If you specify a period of time by using the `EventTime.Start` and `EventTime.End` parameters, all events that occurred within this period are queried. You can query events that occurred within the last seven days.
       *
       * @param request DescribeDisksFullStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksFullStatusResponse
       */
      Models::DescribeDisksFullStatusResponse describeDisksFullStatusWithOptions(const Models::DescribeDisksFullStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full status information about one or more Elastic Block Storage (EBS) devices.
       *
       * @description - The full status information about an EBS device includes the lifecycle status specified by the `Status` parameter, health status specified by the `HealthStatus` parameter, and event type specified by the `EventType` parameter of the EBS device. You can filter the results based on these parameters.
       * - The release time, scheduled execution time, and actual execution time of each EBS device event are identical. If you specify a period of time by using the `EventTime.Start` and `EventTime.End` parameters, all events that occurred within this period are queried. You can query events that occurred within the last seven days.
       *
       * @param request DescribeDisksFullStatusRequest
       * @return DescribeDisksFullStatusResponse
       */
      Models::DescribeDisksFullStatusResponse describeDisksFullStatus(const Models::DescribeDisksFullStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeEipAddresses is deprecated, please use Vpc::2016-04-28::DescribeEipAddresses instead.
       *
       * @summary DescribeEipAddresses
       *
       * @param request DescribeEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddressesWithOptions(const Models::DescribeEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeEipAddresses is deprecated, please use Vpc::2016-04-28::DescribeEipAddresses instead.
       *
       * @summary DescribeEipAddresses
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
       * @summary Queries the running Elastic Compute Service (ECS) instances that use an elasticity assurance.
       *
       * @description When an elasticity assurance expires, data about the association between the instances and the private pool generated by the elasticity assurance becomes invalid. When you call this operation to query the expired elasticity assurance, no value is returned.
       *
       * @param request DescribeElasticityAssuranceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssuranceInstancesResponse
       */
      Models::DescribeElasticityAssuranceInstancesResponse describeElasticityAssuranceInstancesWithOptions(const Models::DescribeElasticityAssuranceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running Elastic Compute Service (ECS) instances that use an elasticity assurance.
       *
       * @description When an elasticity assurance expires, data about the association between the instances and the private pool generated by the elasticity assurance becomes invalid. When you call this operation to query the expired elasticity assurance, no value is returned.
       *
       * @param request DescribeElasticityAssuranceInstancesRequest
       * @return DescribeElasticityAssuranceInstancesResponse
       */
      Models::DescribeElasticityAssuranceInstancesResponse describeElasticityAssuranceInstances(const Models::DescribeElasticityAssuranceInstancesRequest &request);

      /**
       * @summary Retrieves the details of an Elasticity Assurance, including its status, matching mode, effective method, expiry time, and the number of used instances.
       *
       * @param request DescribeElasticityAssurancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssurancesResponse
       */
      Models::DescribeElasticityAssurancesResponse describeElasticityAssurancesWithOptions(const Models::DescribeElasticityAssurancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an Elasticity Assurance, including its status, matching mode, effective method, expiry time, and the number of used instances.
       *
       * @param request DescribeElasticityAssurancesRequest
       * @return DescribeElasticityAssurancesResponse
       */
      Models::DescribeElasticityAssurancesResponse describeElasticityAssurances(const Models::DescribeElasticityAssurancesRequest &request);

      /**
       * @summary Queries the monitoring data of a secondary elastic network interface (ENI) over a specific period of time.
       *
       * @description ## [](#)Usage notes
       * The monitoring data of a secondary ENI includes the amount of traffic sent and received over the internal network, the number of packets sent and received by the secondary ENI, and the number of sent and received packets that are dropped by the secondary ENI. Specific information may be missing from the returned monitoring data. This may be because the system cannot obtain the relevant information. For example, if the instance to which the secondary ENI is attached is in the Stopped state or if the secondary ENI is not attached to an instance and is in the Available state, the monitoring data of the secondary ENI cannot be obtained. Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       *
       * @param request DescribeEniMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEniMonitorDataResponse
       */
      Models::DescribeEniMonitorDataResponse describeEniMonitorDataWithOptions(const Models::DescribeEniMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a secondary elastic network interface (ENI) over a specific period of time.
       *
       * @description ## [](#)Usage notes
       * The monitoring data of a secondary ENI includes the amount of traffic sent and received over the internal network, the number of packets sent and received by the secondary ENI, and the number of sent and received packets that are dropped by the secondary ENI. Specific information may be missing from the returned monitoring data. This may be because the system cannot obtain the relevant information. For example, if the instance to which the secondary ENI is attached is in the Stopped state or if the secondary ENI is not attached to an instance and is in the Available state, the monitoring data of the secondary ENI cannot be obtained. Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       *
       * @param request DescribeEniMonitorDataRequest
       * @return DescribeEniMonitorDataResponse
       */
      Models::DescribeEniMonitorDataResponse describeEniMonitorData(const Models::DescribeEniMonitorDataRequest &request);

      /**
       * @deprecated OpenAPI DescribeForwardTableEntries is deprecated, please use Vpc::2016-04-28::DescribeForwardTableEntries instead.
       *
       * @summary DescribeForwardTableEntries
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeForwardTableEntries is deprecated, please use Vpc::2016-04-28::DescribeForwardTableEntries instead.
       *
       * @summary DescribeForwardTableEntries
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @deprecated OpenAPI DescribeHaVips is deprecated, please use Vpc::2016-04-28::DescribeHaVips instead.
       *
       * @summary DescribeHaVips
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeHaVips is deprecated, please use Vpc::2016-04-28::DescribeHaVips instead.
       *
       * @summary DescribeHaVips
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries available High Performance Computing (HPC) clusters. Request parameters serve as filters. Filters are evaluated by using a logical AND. The parameters are independent of each other.
       *
       * @param request DescribeHpcClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClustersWithOptions(const Models::DescribeHpcClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available High Performance Computing (HPC) clusters. Request parameters serve as filters. Filters are evaluated by using a logical AND. The parameters are independent of each other.
       *
       * @param request DescribeHpcClustersRequest
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClusters(const Models::DescribeHpcClustersRequest &request);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can set NextToken to the value of NextToken returned by the previous call to DescribeImageComponents, and set MaxResults to specify the maximum number of entries per page.
       *
       * @param request DescribeImageComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageComponentsResponse
       */
      Models::DescribeImageComponentsResponse describeImageComponentsWithOptions(const Models::DescribeImageComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can set NextToken to the value of NextToken returned by the previous call to DescribeImageComponents, and set MaxResults to specify the maximum number of entries per page.
       *
       * @param request DescribeImageComponentsRequest
       * @return DescribeImageComponentsResponse
       */
      Models::DescribeImageComponentsResponse describeImageComponents(const Models::DescribeImageComponentsRequest &request);

      /**
       * @summary Queries available custom images that are most recently created in a specific image family.
       *
       * @description ## [](#)Usage notes
       * If no available image exists in a specific image family, the response is empty.
       *
       * @param request DescribeImageFromFamilyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageFromFamilyResponse
       */
      Models::DescribeImageFromFamilyResponse describeImageFromFamilyWithOptions(const Models::DescribeImageFromFamilyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available custom images that are most recently created in a specific image family.
       *
       * @description ## [](#)Usage notes
       * If no available image exists in a specific image family, the response is empty.
       *
       * @param request DescribeImageFromFamilyRequest
       * @return DescribeImageFromFamilyResponse
       */
      Models::DescribeImageFromFamilyResponse describeImageFromFamily(const Models::DescribeImageFromFamilyRequest &request);

      /**
       * @summary Call `DescribeImagePipelineExecutions` to get details about an image build task.
       *
       * @description ## API
       * - The `ImagePipelineId` cannot refer to a deleted image pipeline. Deleting an image pipeline also deletes its associated build tasks.
       * - The `ImagePipelineId` and `ExecutionId` parameters cannot both be empty.
       * - To paginate the results, set `NextToken` to the value returned by the previous call to `DescribeImagePipelineExecutions`. Use `MaxResults` to specify the maximum number of results per page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutionsWithOptions(const Models::DescribeImagePipelineExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DescribeImagePipelineExecutions` to get details about an image build task.
       *
       * @description ## API
       * - The `ImagePipelineId` cannot refer to a deleted image pipeline. Deleting an image pipeline also deletes its associated build tasks.
       * - The `ImagePipelineId` and `ExecutionId` parameters cannot both be empty.
       * - To paginate the results, set `NextToken` to the value returned by the previous call to `DescribeImagePipelineExecutions`. Use `MaxResults` to specify the maximum number of results per page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutions(const Models::DescribeImagePipelineExecutionsRequest &request);

      /**
       * @summary Describes one or more image templates.
       *
       * @description To perform a paginated query, set the `NextToken` parameter to the `NextToken` value returned by the previous `DescribeImagePipelines` call, and use the `MaxResults` parameter to specify the maximum number of entries.
       *
       * @param request DescribeImagePipelinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelinesWithOptions(const Models::DescribeImagePipelinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes one or more image templates.
       *
       * @description To perform a paginated query, set the `NextToken` parameter to the `NextToken` value returned by the previous `DescribeImagePipelines` call, and use the `MaxResults` parameter to specify the maximum number of entries.
       *
       * @param request DescribeImagePipelinesRequest
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelines(const Models::DescribeImagePipelinesRequest &request);

      /**
       * @summary Queries all users with whom a custom image is shared. The returned results support pagination, with 10 entries per page by default.
       *
       * @param request DescribeImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermissionWithOptions(const Models::DescribeImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all users with whom a custom image is shared. The returned results support pagination, with 10 entries per page by default.
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
       * @summary Queries the list of available image resources based on specified parameters such as ImageId, image usage scenarios, and filter conditions.
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
       * @summary Queries the list of available image resources based on specified parameters such as ImageId, image usage scenarios, and filter conditions.
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
       * @summary Queries the information about the private pools that Elastic Compute Service (ECS) instances match.
       *
       * @description ## [](#)Usage notes
       * After an elasticity assurance or a capacity reservation is created, a private pool is generated and associated with information about the instances that are created by using the private pool. You can specify a private pool when you create an instance. This way, the instance matches the elasticity assurance or capacity reservation that is associated with the private pool.
       * When a private pool expires, data related to the association between instances and the private pool becomes invalid. If you call this operation to query information about the private pool, empty values are returned.
       *
       * @param request DescribeInstanceAttachmentAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttachmentAttributesResponse
       */
      Models::DescribeInstanceAttachmentAttributesResponse describeInstanceAttachmentAttributesWithOptions(const Models::DescribeInstanceAttachmentAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the private pools that Elastic Compute Service (ECS) instances match.
       *
       * @description ## [](#)Usage notes
       * After an elasticity assurance or a capacity reservation is created, a private pool is generated and associated with information about the instances that are created by using the private pool. You can specify a private pool when you create an instance. This way, the instance matches the elasticity assurance or capacity reservation that is associated with the private pool.
       * When a private pool expires, data related to the association between instances and the private pool becomes invalid. If you call this operation to query information about the private pool, empty values are returned.
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
       * @summary This API returns the auto-renewal status and renewal period for one or more subscription ECS instances.
       *
       * @description - This API supports only subscription instances. Calling this API for a pay-as-you-go instance returns an error.
       * - Before you configure auto-renewal or manual renewal for an instance, query its renewal status to check if auto-renewal is already enabled.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttributeWithOptions(const Models::DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API returns the auto-renewal status and renewal period for one or more subscription ECS instances.
       *
       * @description - This API supports only subscription instances. Calling this API for a pay-as-you-go instance returns an error.
       * - Before you configure auto-renewal or manual renewal for an instance, query its renewal status to check if auto-renewal is already enabled.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttribute(const Models::DescribeInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries system event information for a specified instance by calling the DescribeInstanceHistoryEvents operation. You can specify parameters such as InstanceId and EventType. By default, this operation queries historical system events in inactive states.
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
       * @summary Queries system event information for a specified instance by calling the DescribeInstanceHistoryEvents operation. You can specify parameters such as InstanceId and EventType. By default, this operation queries historical system events in inactive states.
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
       * @description This operation is used to query the specified maintenance policy of an instance, which contains the following maintenance attributes:
       * - Maintenance window: the time period that you specify for maintenance.
       * - Maintenance action: the action that you specify in response to instance shutdown.
       *
       * @param request DescribeInstanceMaintenanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMaintenanceAttributesResponse
       */
      Models::DescribeInstanceMaintenanceAttributesResponse describeInstanceMaintenanceAttributesWithOptions(const Models::DescribeInstanceMaintenanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maintenance attributes of an instance.
       *
       * @description This operation is used to query the specified maintenance policy of an instance, which contains the following maintenance attributes:
       * - Maintenance window: the time period that you specify for maintenance.
       * - Maintenance action: the action that you specify in response to instance shutdown.
       *
       * @param request DescribeInstanceMaintenanceAttributesRequest
       * @return DescribeInstanceMaintenanceAttributesResponse
       */
      Models::DescribeInstanceMaintenanceAttributesResponse describeInstanceMaintenanceAttributes(const Models::DescribeInstanceMaintenanceAttributesRequest &request);

      /**
       * @summary Retrieves the pricing for upgrading an active subscription ECS instance to a target instance type and for adding a subscription data disk.
       *
       * @description - You can query pricing for upgrading unexpired subscription ECS instances, but not for downgrading them.
       * - You cannot query prices for resizing pay-as-you-go ECS instances. Because a resized instance is priced the same as a new one, call [DescribePrice](https://help.aliyun.com/document_detail/107829.html) to get the current price.
       * - Before upgrading an instance, call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to find the instance types available for an upgrade in a specific availability zone.
       *
       * @param request DescribeInstanceModificationPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceModificationPriceResponse
       */
      Models::DescribeInstanceModificationPriceResponse describeInstanceModificationPriceWithOptions(const Models::DescribeInstanceModificationPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the pricing for upgrading an active subscription ECS instance to a target instance type and for adding a subscription data disk.
       *
       * @description - You can query pricing for upgrading unexpired subscription ECS instances, but not for downgrading them.
       * - You cannot query prices for resizing pay-as-you-go ECS instances. Because a resized instance is priced the same as a new one, call [DescribePrice](https://help.aliyun.com/document_detail/107829.html) to get the current price.
       * - Before upgrading an instance, call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to find the instance types available for an upgrade in a specific availability zone.
       *
       * @param request DescribeInstanceModificationPriceRequest
       * @return DescribeInstanceModificationPriceResponse
       */
      Models::DescribeInstanceModificationPriceResponse describeInstanceModificationPrice(const Models::DescribeInstanceModificationPriceRequest &request);

      /**
       * @summary Queries the monitoring data of an Elastic Compute Service (ECS) instance. The monitoring data can include the vCPU utilization, CPU credits of the burstable instance, amount of received data traffic, amount of sent data traffic, and average bandwidth.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * - In some scenarios, such as when the instance is in the Stopped state, the system cannot obtain the relevant information and specific information may be missing from the returned monitoring data.
       * - You cannot call this operation to obtain the CPU basic monitoring information of an ECS bare metal instance. To obtain the CPU monitoring information of an ECS bare metal instance, install the CloudMonitor agent on the instance. For more information, see [InstallCloudMonitor](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorDataWithOptions(const Models::DescribeInstanceMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of an Elastic Compute Service (ECS) instance. The monitoring data can include the vCPU utilization, CPU credits of the burstable instance, amount of received data traffic, amount of sent data traffic, and average bandwidth.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * - In some scenarios, such as when the instance is in the Stopped state, the system cannot obtain the relevant information and specific information may be missing from the returned monitoring data.
       * - You cannot call this operation to obtain the CPU basic monitoring information of an ECS bare metal instance. To obtain the CPU monitoring information of an ECS bare metal instance, install the CloudMonitor agent on the instance. For more information, see [InstallCloudMonitor](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorData(const Models::DescribeInstanceMonitorDataRequest &request);

      /**
       * @summary Queries the instance Resource Access Management (RAM) roles that are attached to Elastic Compute Service (ECS) instances based on the instance IDs, or queries the ECS instances to which a specific instance RAM role is attached based on the name of the instance RAM role.
       *
       * @description ## [](#)Usage notes
       * When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRamRoleResponse
       */
      Models::DescribeInstanceRamRoleResponse describeInstanceRamRoleWithOptions(const Models::DescribeInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance Resource Access Management (RAM) roles that are attached to Elastic Compute Service (ECS) instances based on the instance IDs, or queries the ECS instances to which a specific instance RAM role is attached based on the name of the instance RAM role.
       *
       * @description ## [](#)Usage notes
       * When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeInstanceRamRoleRequest
       * @return DescribeInstanceRamRoleResponse
       */
      Models::DescribeInstanceRamRoleResponse describeInstanceRamRole(const Models::DescribeInstanceRamRoleRequest &request);

      /**
       * @summary Queries the status of one or more Elastic Compute Service (ECS) instances. You can also call this operation to query the list of ECS instances that match the specified filter conditions.
       *
       * @description For information about the lifecycle states of an ECS instance, see [Instance lifecycle](https://help.aliyun.com/document_detail/25687.html).
       * ## [](#)Sample requests
       * - Query the ECS instances and the status of the instances in a **specific region**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou"
       * ```
       * - Query the ECS instances and the status of the instances in a **zone** of a **specific region**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou",
       * "ZoneID": "cn-hangzhou-a"
       * ```
       * - Query the status of an ECS instance in a **specific region** based on the **instance ID**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou",
       * "InstancesID": ["i-bp1f7c1zqp999zvp****", "i-bp1dqjv36biueg61****"]
       * ```
       *
       * @param request DescribeInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatusWithOptions(const Models::DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of one or more Elastic Compute Service (ECS) instances. You can also call this operation to query the list of ECS instances that match the specified filter conditions.
       *
       * @description For information about the lifecycle states of an ECS instance, see [Instance lifecycle](https://help.aliyun.com/document_detail/25687.html).
       * ## [](#)Sample requests
       * - Query the ECS instances and the status of the instances in a **specific region**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou"
       * ```
       * - Query the ECS instances and the status of the instances in a **zone** of a **specific region**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou",
       * "ZoneID": "cn-hangzhou-a"
       * ```
       * - Query the status of an ECS instance in a **specific region** based on the **instance ID**. Sample request:
       * <!---->
       * ```
       * "RegionID": "cn-hangzhou",
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
       * @summary Queries the instance families provided by Elastic Compute Service (ECS). You can call the DescribeInstanceTypeFamilies operation to obtain information about different series of instance families. This helps you better understand the available instance types and choose appropriate instance types to create ECS instances.
       *
       * @param request DescribeInstanceTypeFamiliesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypeFamiliesResponse
       */
      Models::DescribeInstanceTypeFamiliesResponse describeInstanceTypeFamiliesWithOptions(const Models::DescribeInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance families provided by Elastic Compute Service (ECS). You can call the DescribeInstanceTypeFamilies operation to obtain information about different series of instance families. This helps you better understand the available instance types and choose appropriate instance types to create ECS instances.
       *
       * @param request DescribeInstanceTypeFamiliesRequest
       * @return DescribeInstanceTypeFamiliesResponse
       */
      Models::DescribeInstanceTypeFamiliesResponse describeInstanceTypeFamilies(const Models::DescribeInstanceTypeFamiliesRequest &request);

      /**
       * @summary Queries the information about all instance types provided by Elastic Compute Service (ECS) and obtains the detailed information about the instance types. You can also query the information about specific instance types based on specific conditions. This helps you understand the configurations and performance of different instance types so that you can select instance types that meet your business requirements.
       *
       * @description - **Paginated query**: You can set the MaxResults parameter to limit the number of instance types returned in each response. If only a subset of the queried instance types is returned, the NextToken parameter value is also returned. To perform a paginated query, set the NextToken parameter to the value returned by the previous call and set the MaxResults parameter.
       * - If you call this API operation without passing the NextToken parameter for paginated retrieval, only the first page of data (up to 100 entries) is returned by default. To retrieve more data, pass the NextToken parameter for paginated retrieval or pass filter conditions to limit the returned data range.
       * >  The maximum value of the MaxResults parameter (maximum entries per page) is 100. For users who called this API before 2022, the maximum value of MaxResults remains 1600. On and after November 15, 2023, the maximum value of MaxResults will be reduced to 100 for all users, and 1600 will no longer be supported.
       * - DescribeInstanceTypes only queries the configuration and performance information of instance types. To query instance types available for purchase in a specific region, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       * <props="china">
       * - If you require instance types that are not publicly available for sale or have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       *   
       * <props="intl">
       * - If you require instance types that are not publicly available for sale or have special requirements, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       *
       * @param request DescribeInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypesWithOptions(const Models::DescribeInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all instance types provided by Elastic Compute Service (ECS) and obtains the detailed information about the instance types. You can also query the information about specific instance types based on specific conditions. This helps you understand the configurations and performance of different instance types so that you can select instance types that meet your business requirements.
       *
       * @description - **Paginated query**: You can set the MaxResults parameter to limit the number of instance types returned in each response. If only a subset of the queried instance types is returned, the NextToken parameter value is also returned. To perform a paginated query, set the NextToken parameter to the value returned by the previous call and set the MaxResults parameter.
       * - If you call this API operation without passing the NextToken parameter for paginated retrieval, only the first page of data (up to 100 entries) is returned by default. To retrieve more data, pass the NextToken parameter for paginated retrieval or pass filter conditions to limit the returned data range.
       * >  The maximum value of the MaxResults parameter (maximum entries per page) is 100. For users who called this API before 2022, the maximum value of MaxResults remains 1600. On and after November 15, 2023, the maximum value of MaxResults will be reduced to 100 for all users, and 1600 will no longer be supported.
       * - DescribeInstanceTypes only queries the configuration and performance information of instance types. To query instance types available for purchase in a specific region, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       * <props="china">
       * - If you require instance types that are not publicly available for sale or have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       *   
       * <props="intl">
       * - If you require instance types that are not publicly available for sale or have special requirements, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       *
       * @param request DescribeInstanceTypesRequest
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypes(const Models::DescribeInstanceTypesRequest &request);

      /**
       * @summary Queries the VNC logon URL of an ECS instance.
       *
       * @description - The API returns a VNC logon URL (VncUrl) that cannot be used directly. You can access the instance through the **management terminal URL**.
       * > To construct the management terminal URL, append `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` to the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`, and connect the parameters with `&`. Parameters:
       *   >- `vncUrl`: the VNC logon URL.
       *   >- `instanceId`: the instance ID.
       *   >- `isWindows`: specifies whether the operating system of the instance is Windows. A value of `true` indicates Windows. A value of `false` indicates non-Windows.
       *   >- Password-free VNC connections are supported. You do not need to set the `password` parameter.
       * - The KeepAlive time of a single management terminal URL is 300 seconds. If no interaction occurs within 300 seconds, the connection is automatically closed.
       * - If the connection is interrupted, call this operation again to obtain a new `VncUrl` and construct a new management terminal URL to reconnect. You can reconnect up to 30 times per minute.
       * Example management terminal URL:
       * ```
       * https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       * ```.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VNC logon URL of an ECS instance.
       *
       * @description - The API returns a VNC logon URL (VncUrl) that cannot be used directly. You can access the instance through the **management terminal URL**.
       * > To construct the management terminal URL, append `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` to the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`, and connect the parameters with `&`. Parameters:
       *   >- `vncUrl`: the VNC logon URL.
       *   >- `instanceId`: the instance ID.
       *   >- `isWindows`: specifies whether the operating system of the instance is Windows. A value of `true` indicates Windows. A value of `false` indicates non-Windows.
       *   >- Password-free VNC connections are supported. You do not need to set the `password` parameter.
       * - The KeepAlive time of a single management terminal URL is 300 seconds. If no interaction occurs within 300 seconds, the connection is automatically closed.
       * - If the connection is interrupted, call this operation again to obtain a new `VncUrl` and construct a new management terminal URL to reconnect. You can reconnect up to 30 times per minute.
       * Example management terminal URL:
       * ```
       * https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       * ```.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary Queries a list of instances based on specified request conditions and returns the associated detailed information of the instances.
       *
       * @description ### Before you begin
       * - When you invoke API operations by using Cloud Assistant CLI, make sure that request parameters of different data types are in the required formats. For more information, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * ### Usage notes
       * - Send a dry run request by using the DryRun request parameter to check the validity of parameters and authorization.
       * - When performing a paging query for the first page of results, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response is used as the credential for querying subsequent pages. When performing a paging query for subsequent pages, set `NextToken` to the `NextToken` value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances based on specified request conditions and returns the associated detailed information of the instances.
       *
       * @description ### Before you begin
       * - When you invoke API operations by using Cloud Assistant CLI, make sure that request parameters of different data types are in the required formats. For more information, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * ### Usage notes
       * - Send a dry run request by using the DryRun request parameter to check the validity of parameters and authorization.
       * - When performing a paging query for the first page of results, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response is used as the credential for querying subsequent pages. When performing a paging query for subsequent pages, set `NextToken` to the `NextToken` value obtained from the previous response and set `MaxResults` to limit the number of entries to return.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the full status information of one or more Elastic Compute Service (ECS) instances. The full status information includes the instance status and the status of instance system events. The instance status is the lifecycle status of instances. The status of instance system events is the health status of maintenance events.
       *
       * @description ## [](#)Usage notes
       * The response includes the instance status and the instance system events that are in the Scheduled state.
       * You can specify a period of time to query events that occurred within the period of time.
       *
       * @param request DescribeInstancesFullStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesFullStatusResponse
       */
      Models::DescribeInstancesFullStatusResponse describeInstancesFullStatusWithOptions(const Models::DescribeInstancesFullStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full status information of one or more Elastic Compute Service (ECS) instances. The full status information includes the instance status and the status of instance system events. The instance status is the lifecycle status of instances. The status of instance system events is the health status of maintenance events.
       *
       * @description ## [](#)Usage notes
       * The response includes the instance status and the instance system events that are in the Scheduled state.
       * You can specify a period of time to query events that occurred within the period of time.
       *
       * @param request DescribeInstancesFullStatusRequest
       * @return DescribeInstancesFullStatusResponse
       */
      Models::DescribeInstancesFullStatusResponse describeInstancesFullStatus(const Models::DescribeInstancesFullStatusRequest &request);

      /**
       * @summary Queries the execution results of one or more Cloud Assistant commands, which are the actual execution results on ECS instances.
       *
       * @description ## Operation description
       * - After you run a command, the command is not guaranteed to succeed or produce the expected results. Call this operation to view the actual execution results based on the actual output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 entries of execution information can be retained.
       * - You can use [Cloud Assistant task status event subscription](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the NextToken value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status across instances.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - When you want to view the execution history of scheduled (periodic) tasks or tasks that run at each system startup (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (you must specify `IncludeHistory=true`). `DescribeInvocations` returns only the latest task status.
       *     - When you want to view the command content and parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResultsWithOptions(const Models::DescribeInvocationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of one or more Cloud Assistant commands, which are the actual execution results on ECS instances.
       *
       * @description ## Operation description
       * - After you run a command, the command is not guaranteed to succeed or produce the expected results. Call this operation to view the actual execution results based on the actual output.
       * - You can query execution information from the last 30 days. A maximum of 10,000 entries of execution information can be retained.
       * - You can use [Cloud Assistant task status event subscription](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the NextToken value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status across instances.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - When you want to view the execution history of scheduled (periodic) tasks or tasks that run at each system startup (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (you must specify `IncludeHistory=true`). `DescribeInvocations` returns only the latest task status.
       *     - When you want to view the command content and parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationResultsRequest
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResults(const Models::DescribeInvocationResultsRequest &request);

      /**
       * @summary Queries the execution list and status of Cloud Assistant commands.
       *
       * @description - After you run a command, the command does not necessarily run successfully or produce the expected results. You must check the actual execution results based on the return values of this operation. The actual output takes precedence.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can subscribe to [Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the NextToken value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - To view the execution details of each run for scheduled (periodic) or boot-triggered tasks (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (with `IncludeHistory=true` specified). `DescribeInvocations` returns only the latest task status.
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
       * @description - After you run a command, the command does not necessarily run successfully or produce the expected results. You must check the actual execution results based on the return values of this operation. The actual output takes precedence.
       * - You can query execution information from the last 30 days. A maximum of 10,000 execution records are retained.
       * - You can subscribe to [Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain task results through events, which avoids frequent polling and improves efficiency.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value in the response serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the NextToken value obtained from the previous response and set MaxResults to limit the number of entries to return.
       * - Differences between `DescribeInvocations` and `DescribeInvocationResults`:
       *     - When a single `RunCommand`/`InvokeCommand` call specifies multiple instances:
       *         - `DescribeInvocations` returns the execution status on each instance and the aggregated status across all instances.
       *         - `DescribeInvocationResults` returns only the individual execution status on each instance, without the aggregated status.
       *     - When a single `RunCommand`/`InvokeCommand` call specifies one instance:
       *         - `DescribeInvocations` and `DescribeInvocationResults` are largely interchangeable.
       *     - To view the execution details of each run for scheduled (periodic) or boot-triggered tasks (`RepeatMode=Period, EveryReboot`), only `DescribeInvocationResults` can return historical execution records (with `IncludeHistory=true` specified). `DescribeInvocations` returns only the latest task status.
       *     - To view the command content and parameters, only `DescribeInvocations` returns `CommandContent`.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairsWithOptions(const Models::DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairs(const Models::DescribeKeyPairsRequest &request);

      /**
       * @summary Queries information about launch template versions of ECS instances, such as the total number of launch templates, template names, and template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersionsWithOptions(const Models::DescribeLaunchTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about launch template versions of ECS instances, such as the total number of launch templates, template names, and template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersions(const Models::DescribeLaunchTemplateVersionsRequest &request);

      /**
       * @summary Calls the DescribeLaunchTemplates operation. You can specify parameters such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId to query information about one or more launch templates, including the total number of launch templates, template creation time, and latest version number.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplatesWithOptions(const Models::DescribeLaunchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeLaunchTemplates operation. You can specify parameters such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId to query information about one or more launch templates, including the total number of launch templates, template creation time, and latest version number.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplates(const Models::DescribeLaunchTemplatesRequest &request);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary Queries the limitations on your account.
       *
       * @param request DescribeLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitationWithOptions(const Models::DescribeLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary Queries the limitations on your account.
       *
       * @param request DescribeLimitationRequest
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitation(const Models::DescribeLimitationRequest &request);

      /**
       * @summary Queries the lock status and configuration of a snapshot.
       *
       * @param request DescribeLockedSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLockedSnapshotsResponse
       */
      Models::DescribeLockedSnapshotsResponse describeLockedSnapshotsWithOptions(const Models::DescribeLockedSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lock status and configuration of a snapshot.
       *
       * @param request DescribeLockedSnapshotsRequest
       * @return DescribeLockedSnapshotsResponse
       */
      Models::DescribeLockedSnapshotsResponse describeLockedSnapshots(const Models::DescribeLockedSnapshotsRequest &request);

      /**
       * @summary Queries managed instances.
       *
       * @description When performing a paged query on the home page, you only need to set `MaxResults` to limit the number of entries in the return result. The `NextToken` in the returned result serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` obtained from the previous response as the query credential, and set `MaxResults` to limit the number of returned entries.
       *
       * @param request DescribeManagedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeManagedInstancesResponse
       */
      Models::DescribeManagedInstancesResponse describeManagedInstancesWithOptions(const Models::DescribeManagedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries managed instances.
       *
       * @description When performing a paged query on the home page, you only need to set `MaxResults` to limit the number of entries in the return result. The `NextToken` in the returned result serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` obtained from the previous response as the query credential, and set `MaxResults` to limit the number of returned entries.
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
       * @summary Provides details about a specified elastic network interface.
       *
       * @param request DescribeNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfaceAttributeResponse
       */
      Models::DescribeNetworkInterfaceAttributeResponse describeNetworkInterfaceAttributeWithOptions(const Models::DescribeNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides details about a specified elastic network interface.
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
       * @summary Queries the details of one or more Elastic Network Interface (ENIs).
       *
       * @description ## [](#)Usage notes
       * You can call the `DescribeNetworkInterfaces` operation for paged query by specifying the `MaxResults` or `NextToken` parameter. Take note of the following items:
       * - During a paged query, when you call the DescribeNetworkInterfaces operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       * - When you call the DescribeNetworkInterfaces operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfacesWithOptions(const Models::DescribeNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Elastic Network Interface (ENIs).
       *
       * @description ## [](#)Usage notes
       * You can call the `DescribeNetworkInterfaces` operation for paged query by specifying the `MaxResults` or `NextToken` parameter. Take note of the following items:
       * - During a paged query, when you call the DescribeNetworkInterfaces operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       * - When you call the DescribeNetworkInterfaces operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeNetworkInterfacesRequest
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfaces(const Models::DescribeNetworkInterfacesRequest &request);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary Queries the monitoring data of an Elastic IP Address (EIP) associated with a new project.
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorDataWithOptions(const Models::DescribeNewProjectEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary Queries the monitoring data of an Elastic IP Address (EIP) associated with a new project.
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorData(const Models::DescribeNewProjectEipMonitorDataRequest &request);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary Queries physical connections.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary Queries physical connections.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnections(const Models::DescribePhysicalConnectionsRequest &request);

      /**
       * @summary Queries O&M windows.
       *
       * @description Queries the configured maintenance policies. Each policy contains two maintenance attributes:
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
       * @description Queries the configured maintenance policies. Each policy contains two maintenance attributes:
       * - Maintenance time window: A time period you specify during which O&M operations are performed.
       * - Maintenance action: The instance downtime handling policy you specify.
       *
       * @param request DescribePlanMaintenanceWindowsRequest
       * @return DescribePlanMaintenanceWindowsResponse
       */
      Models::DescribePlanMaintenanceWindowsResponse describePlanMaintenanceWindows(const Models::DescribePlanMaintenanceWindowsRequest &request);

      /**
       * @summary Queries the resources that are associated with a port list, such as security groups.
       *
       * @param request DescribePortRangeListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListAssociationsResponse
       */
      Models::DescribePortRangeListAssociationsResponse describePortRangeListAssociationsWithOptions(const Models::DescribePortRangeListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated with a port list, such as security groups.
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
       * @summary Queries the port lists.
       *
       * @param request DescribePortRangeListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListsResponse
       */
      Models::DescribePortRangeListsResponse describePortRangeListsWithOptions(const Models::DescribePortRangeListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port lists.
       *
       * @param request DescribePortRangeListsRequest
       * @return DescribePortRangeListsResponse
       */
      Models::DescribePortRangeListsResponse describePortRangeLists(const Models::DescribePortRangeListsRequest &request);

      /**
       * @summary Queries information about resources that are associated with a prefix list, such as the resource IDs and types.
       *
       * @param request DescribePrefixListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListAssociationsResponse
       */
      Models::DescribePrefixListAssociationsResponse describePrefixListAssociationsWithOptions(const Models::DescribePrefixListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about resources that are associated with a prefix list, such as the resource IDs and types.
       *
       * @param request DescribePrefixListAssociationsRequest
       * @return DescribePrefixListAssociationsResponse
       */
      Models::DescribePrefixListAssociationsResponse describePrefixListAssociations(const Models::DescribePrefixListAssociationsRequest &request);

      /**
       * @summary Queries the details of a prefix list, including the name, address family, maximum number of entries, and details of the entries.
       *
       * @param request DescribePrefixListAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListAttributesResponse
       */
      Models::DescribePrefixListAttributesResponse describePrefixListAttributesWithOptions(const Models::DescribePrefixListAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a prefix list, including the name, address family, maximum number of entries, and details of the entries.
       *
       * @param request DescribePrefixListAttributesRequest
       * @return DescribePrefixListAttributesResponse
       */
      Models::DescribePrefixListAttributesResponse describePrefixListAttributes(const Models::DescribePrefixListAttributesRequest &request);

      /**
       * @summary Queries the information of prefix lists.
       *
       * @description You can specify the `AddressFamily`, `PrefixListId.N`, and `PrefixListName` request parameters in the request. Specified parameters have logical AND relations. Only the parameters that you set are included in the filter conditions.
       *
       * @param request DescribePrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixListsWithOptions(const Models::DescribePrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of prefix lists.
       *
       * @description You can specify the `AddressFamily`, `PrefixListId.N`, and `PrefixListName` request parameters in the request. Specified parameters have logical AND relations. Only the parameters that you set are included in the filter conditions.
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
       * @summary (Beta) Queries one or more alternative instance types based on a specified instance type. For instance types that have been or will be retired, DescribeRecommendInstanceType lists all instance types that can serve as replacements.
       *
       * @param request DescribeRecommendInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendInstanceTypeResponse
       */
      Models::DescribeRecommendInstanceTypeResponse describeRecommendInstanceTypeWithOptions(const Models::DescribeRecommendInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary (Beta) Queries one or more alternative instance types based on a specified instance type. For instance types that have been or will be retired, DescribeRecommendInstanceType lists all instance types that can serve as replacements.
       *
       * @param request DescribeRecommendInstanceTypeRequest
       * @return DescribeRecommendInstanceTypeResponse
       */
      Models::DescribeRecommendInstanceTypeResponse describeRecommendInstanceType(const Models::DescribeRecommendInstanceTypeRequest &request);

      /**
       * @summary Queries Alibaba Cloud regions. When you call this operation, you can specify parameters, such as InstanceChargeType and ResourceType, in the request.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Alibaba Cloud regions. When you call this operation, you can specify parameters, such as InstanceChargeType and ResourceType, in the request.
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
       *     - If you set only the required parameters, the price for renewing the instance for one month is returned by default.
       *     - You cannot query the renewal duration price and the unified expiration date price at the same time. The renewal duration parameters (`Period` and `PeriodUnit`) and the unified expiration date parameter (`ExpectedRenewDay`) cannot be set at the same time.
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
       *     - If you set only the required parameters, the price for renewing the instance for one month is returned by default.
       *     - You cannot query the renewal duration price and the unified expiration date price at the same time. The renewal duration parameters (`Period` and `PeriodUnit`) and the unified expiration date parameter (`ExpectedRenewDay`) cannot be set at the same time.
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
       * @summary Queries the details of reserved instances that you have purchased in a specific region. You can query the details of reserved instances based on parameters, such as tags and reserved instance attributes.
       *
       * @description ### [](#)Scenarios
       * - Query all reserved instances in a specific region.
       * - Query the details of a reserved instance based on the ID or name.
       * - Query your purchased reserved instances based on the instance type or instance family.
       * - Query your purchased reserved instances based on the scope or status of reserved instances.
       * ### [](#)Sample requests
       * **Example: Query all purchased reserved instances in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * ```
       * **Example: Query the details of the reserved instance whose ID is ecsri-bp129enntoynwwj5\\*\\*\\*\\* in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //The ID of the reserved instance.
       * ```
       * **Example: Query the reserved instances that can be used to offset the bills of ecs.c5.2xlarge instances in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."InstanceType":"ecs.c5.2xlarge", //The instance type.
       * ```
       * **Example: Query the regional reserved instances that are within the validity period in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."Scope":"Region", //Set the scope of the reserved instance to regional."Status":["Active"] //Set the status to Active, which indicates that the reserved instance is within the validity period.
       * ```
       *
       * @param request DescribeReservedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReservedInstancesResponse
       */
      Models::DescribeReservedInstancesResponse describeReservedInstancesWithOptions(const Models::DescribeReservedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of reserved instances that you have purchased in a specific region. You can query the details of reserved instances based on parameters, such as tags and reserved instance attributes.
       *
       * @description ### [](#)Scenarios
       * - Query all reserved instances in a specific region.
       * - Query the details of a reserved instance based on the ID or name.
       * - Query your purchased reserved instances based on the instance type or instance family.
       * - Query your purchased reserved instances based on the scope or status of reserved instances.
       * ### [](#)Sample requests
       * **Example: Query all purchased reserved instances in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * ```
       * **Example: Query the details of the reserved instance whose ID is ecsri-bp129enntoynwwj5\\*\\*\\*\\* in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //The ID of the reserved instance.
       * ```
       * **Example: Query the reserved instances that can be used to offset the bills of ecs.c5.2xlarge instances in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."InstanceType":"ecs.c5.2xlarge", //The instance type.
       * ```
       * **Example: Query the regional reserved instances that are within the validity period in the China (Hangzhou) region**
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region."Scope":"Region", //Set the scope of the reserved instance to regional."Status":["Active"] //Set the status to Active, which indicates that the reserved instance is within the validity period.
       * ```
       *
       * @param request DescribeReservedInstancesRequest
       * @return DescribeReservedInstancesResponse
       */
      Models::DescribeReservedInstancesResponse describeReservedInstances(const Models::DescribeReservedInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary The DescribeResourceByTags operation retrieves resources by tag or resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTagsWithOptions(const Models::DescribeResourceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary The DescribeResourceByTags operation retrieves resources by tag or resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTags(const Models::DescribeResourceByTagsRequest &request);

      /**
       * @summary Queries the inventory of instance types or system disk types in a zone before you change the instance type or system disk type of an instance.
       *
       * @description The following examples describe common change scenarios:
       * ### Example 1: Query instance types to which the current instance can be changed
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Common request parameters
       * ```
       * ### Example 2: Query instance types available after changing the disk type of the current instance
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
       * Query the disk type required by the target instance type (for example, ecs.g7.large). The current instance i-bp67acfmxazb4p**** must be changed to this disk type before it can be changed to the target instance type. Also query the inventory of the disk type in the zone where the instance resides.
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
       * @description The following examples describe common change scenarios:
       * ### Example 1: Query instance types to which the current instance can be changed
       * Query the instance types to which instance i-bp67acfmxazb4p**** can be changed, and the inventory of the corresponding instance types in the zone where the instance resides.
       * ```
       * http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       * &RegionId=ap-southeast-1
       * &ResourceId=i-bp67acfmxazb4p****
       * &DestinationResource=InstanceType
       * &OperationType=Upgrade
       * &Common request parameters
       * ```
       * ### Example 2: Query instance types available after changing the disk type of the current instance
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
       * Query the disk type required by the target instance type (for example, ecs.g7.large). The current instance i-bp67acfmxazb4p**** must be changed to this disk type before it can be changed to the target instance type. Also query the inventory of the disk type in the zone where the instance resides.
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
       * @summary Queries the basic information about security groups. You can filter results by region, security group ID, security group type, and other parameters through parameter query.
       *
       * @description - **Paging query**: Use `MaxResults` and `NextToken` for paging query.
       *   - If `NextToken` is not returned, the current page is the last page.
       *   - For the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response is used to query subsequent pages.
       *   - For subsequent pages, set `NextToken` to the `NextToken` value returned in the previous response and set `MaxResults` to limit the number of entries to return.
       * - When you invoke an API operation by using Cloud Assistant CLI, specify request parameters in the required format. For more information, see [Parameter format of CLI commands](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(const Models::DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about security groups. You can filter results by region, security group ID, security group type, and other parameters through parameter query.
       *
       * @description - **Paging query**: Use `MaxResults` and `NextToken` for paging query.
       *   - If `NextToken` is not returned, the current page is the last page.
       *   - For the first page, set only `MaxResults` to limit the number of entries to return. The `NextToken` value in the response is used to query subsequent pages.
       *   - For subsequent pages, set `NextToken` to the `NextToken` value returned in the previous response and set `MaxResults` to limit the number of entries to return.
       * - When you invoke an API operation by using Cloud Assistant CLI, specify request parameters in the required format. For more information, see [Parameter format of CLI commands](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeSecurityGroupsRequest
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroups(const Models::DescribeSecurityGroupsRequest &request);

      /**
       * @summary Queries the list and status of files sent by Cloud Assistant by calling DescribeSendFileResults.
       *
       * @description ## Operation description:
       * - After you send a file, the file is not necessarily sent. You must check the actual sending result based on the return value of this operation.
       * - You can query execution information from the last 30 days. A maximum of 10,000 entries of execution information can be retained.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value returned in the result serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeSendFileResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResultsWithOptions(const Models::DescribeSendFileResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and status of files sent by Cloud Assistant by calling DescribeSendFileResults.
       *
       * @description ## Operation description:
       * - After you send a file, the file is not necessarily sent. You must check the actual sending result based on the return value of this operation.
       * - You can query execution information from the last 30 days. A maximum of 10,000 entries of execution information can be retained.
       * - When paged query the first page, set only MaxResults to limit the number of entries to return. The NextToken value returned in the result serves as the token for querying subsequent pages. When paged query subsequent pages, set NextToken to the value obtained from the previous response and set MaxResults to limit the number of entries to return.
       *
       * @param request DescribeSendFileResultsRequest
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResults(const Models::DescribeSendFileResultsRequest &request);

      /**
       * @summary Queries the information of one or more snapshot-consistent groups, such as the status of the groups, IDs of the instances associated with the groups, and snapshot creation progress.
       *
       * @description You can specify multiple request parameters to be queried, such as `InstanceId`, `SnapshotGroupId.N`, and `Status.N`. Specified parameters have logical AND relations. Only the specified parameters are included in the filter conditions.
       *
       * @param request DescribeSnapshotGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotGroupsResponse
       */
      Models::DescribeSnapshotGroupsResponse describeSnapshotGroupsWithOptions(const Models::DescribeSnapshotGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of one or more snapshot-consistent groups, such as the status of the groups, IDs of the instances associated with the groups, and snapshot creation progress.
       *
       * @description You can specify multiple request parameters to be queried, such as `InstanceId`, `SnapshotGroupId.N`, and `Status.N`. Specified parameters have logical AND relations. Only the specified parameters are included in the filter conditions.
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
       * -  The request parameters such as `RegionId`, `DiskIds`, and `InstanceId` act as filters. Logical AND is used between these parameters.  
       * -  If you do not specify any parameters, the filters do not take effect. If `DiskIds` and `SnapshotLinkIds` are both empty arrays, the filters are considered valid, but the response is empty.
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
       * -  The request parameters such as `RegionId`, `DiskIds`, and `InstanceId` act as filters. Logical AND is used between these parameters.  
       * -  If you do not specify any parameters, the filters do not take effect. If `DiskIds` and `SnapshotLinkIds` are both empty arrays, the filters are considered valid, but the response is empty.
       *
       * @param request DescribeSnapshotLinksRequest
       * @return DescribeSnapshotLinksResponse
       */
      Models::DescribeSnapshotLinksResponse describeSnapshotLinks(const Models::DescribeSnapshotLinksRequest &request);

      /**
       * @summary Queries the monitoring data of snapshot sizes in a region within the last 30 days.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data of snapshot sizes in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       *
       * @param request DescribeSnapshotMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotMonitorDataResponse
       */
      Models::DescribeSnapshotMonitorDataResponse describeSnapshotMonitorDataWithOptions(const Models::DescribeSnapshotMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of snapshot sizes in a region within the last 30 days.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * - Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * - You can query the monitoring data of snapshot sizes in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       *
       * @param request DescribeSnapshotMonitorDataRequest
       * @return DescribeSnapshotMonitorDataResponse
       */
      Models::DescribeSnapshotMonitorDataResponse describeSnapshotMonitorData(const Models::DescribeSnapshotMonitorDataRequest &request);

      /**
       * @summary Queries the Object Storage Service (OSS) storage plans that you purchased in an Alibaba Cloud region. OSS storage plans can be used to offset the storage fees for standard snapshots instead of local snapshots.
       *
       * @param request DescribeSnapshotPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotPackageResponse
       */
      Models::DescribeSnapshotPackageResponse describeSnapshotPackageWithOptions(const Models::DescribeSnapshotPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Object Storage Service (OSS) storage plans that you purchased in an Alibaba Cloud region. OSS storage plans can be used to offset the storage fees for standard snapshots instead of local snapshots.
       *
       * @param request DescribeSnapshotPackageRequest
       * @return DescribeSnapshotPackageResponse
       */
      Models::DescribeSnapshotPackageResponse describeSnapshotPackage(const Models::DescribeSnapshotPackageRequest &request);

      /**
       * @summary Queries the snapshot list of a disk, including snapshot status, remaining time for a snapshot being created, and automatic snapshot retention days.
       *
       * @description InstanceId, DiskId, and SnapshotIds are not required request parameters, but you can use them to build filter logic. These parameters are evaluated by using a logical AND.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameter values in the required formats based on their data types. For details, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * Request examples:
       * <details>
       * <summary>Query the snapshot list of all disks attached to an ECS instance in the China (Hangzhou) region</summary>
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
       * SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Set the array of snapshot IDs to query.
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
       * @description InstanceId, DiskId, and SnapshotIds are not required request parameters, but you can use them to build filter logic. These parameters are evaluated by using a logical AND.
       * When you invoke an API operation by using Cloud Assistant CLI, specify request parameter values in the required formats based on their data types. For details, see [CLI parameter format](https://help.aliyun.com/document_detail/110340.html).
       * Request examples:
       * <details>
       * <summary>Query the snapshot list of all disks attached to an ECS instance in the China (Hangzhou) region</summary>
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
       * SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Set the array of snapshot IDs to query.
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
       * @summary Queries the number of snapshots that are stored in a region and the total size of the snapshots.
       *
       * @description ## [](#)Usage notes
       * If you want to view the snapshot usage of each disk in the current region, we recommend that you call the [DescribeSnapshotLinks](https://help.aliyun.com/document_detail/55837.html) operation to query snapshot chain information.
       *
       * @param request DescribeSnapshotsUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsUsageResponse
       */
      Models::DescribeSnapshotsUsageResponse describeSnapshotsUsageWithOptions(const Models::DescribeSnapshotsUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of snapshots that are stored in a region and the total size of the snapshots.
       *
       * @description ## [](#)Usage notes
       * If you want to view the snapshot usage of each disk in the current region, we recommend that you call the [DescribeSnapshotLinks](https://help.aliyun.com/document_detail/55837.html) operation to query snapshot chain information.
       *
       * @param request DescribeSnapshotsUsageRequest
       * @return DescribeSnapshotsUsageResponse
       */
      Models::DescribeSnapshotsUsageResponse describeSnapshotsUsage(const Models::DescribeSnapshotsUsageRequest &request);

      /**
       * @summary Queries information about spot instances in a region in the previous 30 days. The information includes the average release rate of spot instances and the percentage of the average spot instance price relative to the pay-as-you-go instance price.
       *
       * @description - This operation is applicable only to I/O optimized spot instances that reside in virtual private clouds (VPCs).
       * - You can use one of the following methods to call this operation:
       *   - Specify `Cores` and `Memory` or `MinCores` and `MinMemory` to query information about the instance types that meet the specified vCPU and memory requirements.
       *   - Specify `InstanceTypes.N` to query information about the specified instance types.
       *   - Specify `Cores` and `Memory` or `MinCores` and `MinMemory`, and then specify `InstanceTypeFamily` or `InstanceFamilyLevel` to query information about the instance types that meet the specified vCPU and memory requirements within the specified instance family or at a specified instance family level.
       * - You can calculate the average price of spot instances based on the percentage of the average spot instance price relative to the pay-as-you-go instance price and the pay-as-you-go instance price.
       *
       * @param request DescribeSpotAdviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdviceWithOptions(const Models::DescribeSpotAdviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about spot instances in a region in the previous 30 days. The information includes the average release rate of spot instances and the percentage of the average spot instance price relative to the pay-as-you-go instance price.
       *
       * @description - This operation is applicable only to I/O optimized spot instances that reside in virtual private clouds (VPCs).
       * - You can use one of the following methods to call this operation:
       *   - Specify `Cores` and `Memory` or `MinCores` and `MinMemory` to query information about the instance types that meet the specified vCPU and memory requirements.
       *   - Specify `InstanceTypes.N` to query information about the specified instance types.
       *   - Specify `Cores` and `Memory` or `MinCores` and `MinMemory`, and then specify `InstanceTypeFamily` or `InstanceFamilyLevel` to query information about the instance types that meet the specified vCPU and memory requirements within the specified instance family or at a specified instance family level.
       * - You can calculate the average price of spot instances based on the percentage of the average spot instance price relative to the pay-as-you-go instance price and the pay-as-you-go instance price.
       *
       * @param request DescribeSpotAdviceRequest
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdvice(const Models::DescribeSpotAdviceRequest &request);

      /**
       * @summary Queries the historical prices of spot instances. You can query price data from the last 30 days. The historical price data helps you set a reasonable maximum price for a spot instance.
       *
       * @description - Only I/O optimized spot instances are supported.
       * - The data returned by this operation may be paginated. If the response contains the `NextOffset` parameter, set the `Offset` request parameter to the value of `NextOffset` to query the next page of data.
       *
       * @param request DescribeSpotPriceHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotPriceHistoryResponse
       */
      Models::DescribeSpotPriceHistoryResponse describeSpotPriceHistoryWithOptions(const Models::DescribeSpotPriceHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical prices of spot instances. You can query price data from the last 30 days. The historical price data helps you set a reasonable maximum price for a spot instance.
       *
       * @description - Only I/O optimized spot instances are supported.
       * - The data returned by this operation may be paginated. If the response contains the `NextOffset` parameter, set the `Offset` request parameter to the value of `NextOffset` to query the next page of data.
       *
       * @param request DescribeSpotPriceHistoryRequest
       * @return DescribeSpotPriceHistoryResponse
       */
      Models::DescribeSpotPriceHistoryResponse describeSpotPriceHistory(const Models::DescribeSpotPriceHistoryRequest &request);

      /**
       * @summary Queries the details of storage capacity units (SCUs). In the request, you can specify the name, status, or capacity of each SCU.
       *
       * @param request DescribeStorageCapacityUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageCapacityUnitsResponse
       */
      Models::DescribeStorageCapacityUnitsResponse describeStorageCapacityUnitsWithOptions(const Models::DescribeStorageCapacityUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of storage capacity units (SCUs). In the request, you can specify the name, status, or capacity of each SCU.
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
       * @summary Queries tags available to you. You can perform a conditional query for tags based on resource type, resource ID, tag key, or tag value. The filter conditions are evaluated by using a logical AND (&&) operator, and only tags that meet all filter conditions are returned.
       *
       * @description If you specify a tag key (Tag.N.Key) without specifying a tag value (Tag.N.Value), all tag key-value pairs associated with the tag key are returned. If you specify a tag key-value pair, only the tag that is an exact match of the key-value pair is returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeTags is deprecated, please use Tag::2018-08-28::CountResourcesByTags instead.
       *
       * @summary Queries tags available to you. You can perform a conditional query for tags based on resource type, resource ID, tag key, or tag value. The filter conditions are evaluated by using a logical AND (&&) operator, and only tags that meet all filter conditions are returned.
       *
       * @description If you specify a tag key (Tag.N.Key) without specifying a tag value (Tag.N.Value), all tag key-value pairs associated with the tag key are returned. If you specify a tag key-value pair, only the tag that is an exact match of the key-value pair is returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the details of an asynchronous task. Currently, the asynchronous tasks that can be queried include ImportImage, ExportImage, and ModifyDiskSpec.
       *
       * @param request DescribeTaskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttributeWithOptions(const Models::DescribeTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task. Currently, the asynchronous tasks that can be queried include ImportImage, ExportImage, and ModifyDiskSpec.
       *
       * @param request DescribeTaskAttributeRequest
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttribute(const Models::DescribeTaskAttributeRequest &request);

      /**
       * @summary Invoke DescribeTasks to query the progress of one or more asynchronous requests.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeTasks to query the progress of one or more asynchronous requests.
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
       * @summary Queries a user\\"s default attributes.
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehaviorWithOptions(const Models::DescribeUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeUserBusinessBehavior is deprecated
       *
       * @summary Queries a user\\"s default attributes.
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehavior(const Models::DescribeUserBusinessBehaviorRequest &request);

      /**
       * @summary Queries the user data of an Elastic Compute Service (ECS) instance.
       *
       * @description - If no user data is configured for the ECS instance, an empty string is returned.
       *
       * @param request DescribeUserDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserDataWithOptions(const Models::DescribeUserDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user data of an Elastic Compute Service (ECS) instance.
       *
       * @description - If no user data is configured for the ECS instance, an empty string is returned.
       *
       * @param request DescribeUserDataRequest
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserData(const Models::DescribeUserDataRequest &request);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary Queries VRouters.
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary Queries VRouters.
       *
       * @param request DescribeVRoutersRequest
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRouters(const Models::DescribeVRoutersRequest &request);

      /**
       * @deprecated OpenAPI DescribeVSwitches is deprecated, please use Vpc::2016-04-28::DescribeVSwitches instead.
       *
       * @summary DescribeVSwitches
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVSwitches is deprecated, please use Vpc::2016-04-28::DescribeVSwitches instead.
       *
       * @summary DescribeVSwitches
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
       * @summary Query VPCs
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVpcs is deprecated, please use Vpc::2016-04-28::DescribeVpcs instead.
       *
       * @summary Query VPCs
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary 查询虚拟存储通道
       *
       * @description 如果您指定了标签键（Tag.N.Key）但没有指定标签值（Tag.N.Value），我们将查询该标签键对应的所有标签键值对。如果您指定了标签键值对，就查询精确匹配该键值对的标签。
       *
       * @param request DescribeVscsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVscsResponse
       */
      Models::DescribeVscsResponse describeVscsWithOptions(const Models::DescribeVscsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询虚拟存储通道
       *
       * @description 如果您指定了标签键（Tag.N.Key）但没有指定标签值（Tag.N.Value），我们将查询该标签键对应的所有标签键值对。如果您指定了标签键值对，就查询精确匹配该键值对的标签。
       *
       * @param request DescribeVscsRequest
       * @return DescribeVscsResponse
       */
      Models::DescribeVscsResponse describeVscs(const Models::DescribeVscsRequest &request);

      /**
       * @summary Queries the list of active zones based on parameters such as region ID and billing method.
       *
       * @description DescribeZones only queries the list of zones provided by Alibaba Cloud and returns limited inventory information. To query the instance types and disk categories available for purchase in a specific zone, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of active zones based on parameters such as region ID and billing method.
       *
       * @description DescribeZones only queries the list of zones provided by Alibaba Cloud and returns limited inventory information. To query the instance types and disk categories available for purchase in a specific zone, use [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html).
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Unlinks an Elastic Compute Service (ECS) instance that resides in the classic network from a virtual private cloud (VPC) by closing the ClassicLink connection between the instance and the VPC. After the instance is unlinked from the VPC, the instance can no longer communicate with instances in the VPC.
       *
       * @param request DetachClassicLinkVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachClassicLinkVpcResponse
       */
      Models::DetachClassicLinkVpcResponse detachClassicLinkVpcWithOptions(const Models::DetachClassicLinkVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlinks an Elastic Compute Service (ECS) instance that resides in the classic network from a virtual private cloud (VPC) by closing the ClassicLink connection between the instance and the VPC. After the instance is unlinked from the VPC, the instance can no longer communicate with instances in the VPC.
       *
       * @param request DetachClassicLinkVpcRequest
       * @return DetachClassicLinkVpcResponse
       */
      Models::DetachClassicLinkVpcResponse detachClassicLinkVpc(const Models::DetachClassicLinkVpcRequest &request);

      /**
       * @summary Detaches a pay-as-you-go data disk or a system disk from an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - This operation is an asynchronous operation. After you call the operation to detach a disk from an ECS instance, the disk is detached in approximately 1 minute.
       * - If `OperationLocks` in the response contains `"LockReason" : "security"` when you query information about an instance, the instance is locked for security reasons and all operations are prohibited on the instance.
       * - If you want to attach an elastic ephemeral disk that you detached from an instance, you can attach the disk only to the instance.
       *
       * @param request DetachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDiskWithOptions(const Models::DetachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go data disk or a system disk from an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - This operation is an asynchronous operation. After you call the operation to detach a disk from an ECS instance, the disk is detached in approximately 1 minute.
       * - If `OperationLocks` in the response contains `"LockReason" : "security"` when you query information about an instance, the instance is locked for security reasons and all operations are prohibited on the instance.
       * - If you want to attach an elastic ephemeral disk that you detached from an instance, you can attach the disk only to the instance.
       *
       * @param request DetachDiskRequest
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDisk(const Models::DetachDiskRequest &request);

      /**
       * @summary Detaches instance Resource Access Management (RAM) roles from Elastic Compute Service (ECS) instances.
       *
       * @param request DetachInstanceRamRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachInstanceRamRoleResponse
       */
      Models::DetachInstanceRamRoleResponse detachInstanceRamRoleWithOptions(const Models::DetachInstanceRamRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches instance Resource Access Management (RAM) roles from Elastic Compute Service (ECS) instances.
       *
       * @param request DetachInstanceRamRoleRequest
       * @return DetachInstanceRamRoleResponse
       */
      Models::DetachInstanceRamRoleResponse detachInstanceRamRole(const Models::DetachInstanceRamRoleRequest &request);

      /**
       * @summary Unbinds SSH key pairs from one or more Linux instances.
       *
       * @description Take note of the following items when you call this operation:
       * -  After you unbind an SSH key pair, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the changes to take effect.  
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
       * @description Take note of the following items when you call this operation:
       * -  After you unbind an SSH key pair, restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) for the changes to take effect.  
       * -  After you unbind an SSH key pair, the instance uses the username and password authentication method by default.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Detach an elastic network interface (ENI) from an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - You cannot detach the primary ENI of an instance.
       * - Make sure that the ENI to be detached is in the Detaching (Unbinding) or InUse (Bound) state.
       * - Make sure that the instance from which you want to detach an ENI is in the Running (Running) or Stopped (Stopped) state.
       * - The DetachNetworkInterface operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the status or events of the ENI to determine whether the ENI is detached. The following figure shows the transitions between the states of the ENI.![](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/en-US/20230223/uemr/DetachNetworkInterface.png)
       *   - If the ENI is in the Detaching state, the ENI detachment request is sent and the ENI is being detached from the associated instance.
       *   - If the ENI is in the Available state, the ENI is detached from the associated instance.
       *   - If the ENI is stuck in the Detaching state, the ENI may fail to be detached from the associated instance due to specific reasons. For example, the ENI may fail to be detached because the operating system of the instance did not respond to the ENI detachment request. If this issue occurs, you can re-initiate the request to detach the ENI. If the issue persists, restart the instance.
       * For information about examples on how to call the DetachNetworkInterface operation, see [Detach an ENI from an ECS instance](https://help.aliyun.com/document_detail/471551.html).
       *
       * @param request DetachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterfaceWithOptions(const Models::DetachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach an elastic network interface (ENI) from an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * - You cannot detach the primary ENI of an instance.
       * - Make sure that the ENI to be detached is in the Detaching (Unbinding) or InUse (Bound) state.
       * - Make sure that the instance from which you want to detach an ENI is in the Running (Running) or Stopped (Stopped) state.
       * - The DetachNetworkInterface operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the status or events of the ENI to determine whether the ENI is detached. The following figure shows the transitions between the states of the ENI.![](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/en-US/20230223/uemr/DetachNetworkInterface.png)
       *   - If the ENI is in the Detaching state, the ENI detachment request is sent and the ENI is being detached from the associated instance.
       *   - If the ENI is in the Available state, the ENI is detached from the associated instance.
       *   - If the ENI is stuck in the Detaching state, the ENI may fail to be detached from the associated instance due to specific reasons. For example, the ENI may fail to be detached because the operating system of the instance did not respond to the ENI detachment request. If this issue occurs, you can re-initiate the request to detach the ENI. If the issue persists, restart the instance.
       * For information about examples on how to call the DetachNetworkInterface operation, see [Detach an ENI from an ECS instance](https://help.aliyun.com/document_detail/471551.html).
       *
       * @param request DetachNetworkInterfaceRequest
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterface(const Models::DetachNetworkInterfaceRequest &request);

      /**
       * @summary To prevent an activation code from being leaked, you can call the DisableActivation operation to disable the activation code. Disabled activation codes cannot be used to register new managed instances. However, managed instances that are already registered are not affected.
       *
       * @description ## [](#)Usage notes
       * To prevent an activation code from being leaked, you can call the DisableActivation operation to disable the activation code. Disabled activation codes cannot be used to register new managed instances. However, managed instances that are already registered are not affected.
       *
       * @param request DisableActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableActivationResponse
       */
      Models::DisableActivationResponse disableActivationWithOptions(const Models::DisableActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To prevent an activation code from being leaked, you can call the DisableActivation operation to disable the activation code. Disabled activation codes cannot be used to register new managed instances. However, managed instances that are already registered are not affected.
       *
       * @description ## [](#)Usage notes
       * To prevent an activation code from being leaked, you can call the DisableActivation operation to disable the activation code. Disabled activation codes cannot be used to register new managed instances. However, managed instances that are already registered are not affected.
       *
       * @param request DisableActivationRequest
       * @return DisableActivationResponse
       */
      Models::DisableActivationResponse disableActivation(const Models::DisableActivationRequest &request);

      /**
       * @summary Disables account-level default encryption of Elastic Block Storage (EBS) resources in a region. After you disable account-level default encryption of EBS resources in a region, the encryption status of existing disks in the region does not change. When you create a disk, you can still choose to encrypt the disk.
       *
       * @description - **Instructions**
       *   - You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - **Considerations**
       *   - After Account-level EBS Default Encryption is disabled, the encryption status of existing cloud disks is not affected.
       *   - After Account-level EBS Default Encryption is disabled, you can still choose to encrypt new cloud disks when you purchase the disks.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefaultWithOptions(const Models::DisableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables account-level default encryption of Elastic Block Storage (EBS) resources in a region. After you disable account-level default encryption of EBS resources in a region, the encryption status of existing disks in the region does not change. When you create a disk, you can still choose to encrypt the disk.
       *
       * @description - **Instructions**
       *   - You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - **Considerations**
       *   - After Account-level EBS Default Encryption is disabled, the encryption status of existing cloud disks is not affected.
       *   - After Account-level EBS Default Encryption is disabled, you can still choose to encrypt new cloud disks when you purchase the disks.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefault(const Models::DisableDiskEncryptionByDefaultRequest &request);

      /**
       * @summary Disables Elastic Network Interface (ENI) QoS speed setting.
       *
       * @param request DisableNetworkInterfaceQoSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableNetworkInterfaceQoSResponse
       */
      Models::DisableNetworkInterfaceQoSResponse disableNetworkInterfaceQoSWithOptions(const Models::DisableNetworkInterfaceQoSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables Elastic Network Interface (ENI) QoS speed setting.
       *
       * @param request DisableNetworkInterfaceQoSRequest
       * @return DisableNetworkInterfaceQoSResponse
       */
      Models::DisableNetworkInterfaceQoSResponse disableNetworkInterfaceQoS(const Models::DisableNetworkInterfaceQoSRequest &request);

      /**
       * @summary Enables the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description > The Account-level EBS Default Encryption feature is available only in specific regions and to specific users. To use the feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * - **Precautions**
       *   - To enable the Account-level EBS Default Encryption feature as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *   - Before you can enable the Account-level EBS Default Encryption feature in a region, you must [activate Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html) in the region.
       *   - After you enable the Account-level EBS Default Encryption feature in a region, you can purchase only encrypted cloud disks in the region. For more information, see the [Limits](~~59643#50de175230erj~~) section of the "Encrypt cloud disks" topic.
       * - **Considerations**
       *   - After you enable the Account-level EBS Default Encryption feature in a region, new pay-as-you-go and subscription cloud disks in the region must be encrypted. You can use the KMS key configured for the feature or specify other KMS keys to encrypt the cloud disks.
       *   - The first time you enable the Account-level EBS Default Encryption feature in a region, the service key in the region is automatically used to encrypt EBS resources.
       * - **Suggestions**
       *   - You can call the [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) operation to query whether the Account-level EBS Default Encryption feature is enabled in a region and the [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) operation to query the ID of the KMS key used by the feature in a region.
       *   - You can call the [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) operation to change or reset the KMS key used by the Account-level EBS Default Encryption feature in a region.
       *   - You can call the [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) operation to disable the Account-level EBS Default Encryption feature in a region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefaultWithOptions(const Models::EnableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description > The Account-level EBS Default Encryption feature is available only in specific regions and to specific users. To use the feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * - **Precautions**
       *   - To enable the Account-level EBS Default Encryption feature as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *   - Before you can enable the Account-level EBS Default Encryption feature in a region, you must [activate Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html) in the region.
       *   - After you enable the Account-level EBS Default Encryption feature in a region, you can purchase only encrypted cloud disks in the region. For more information, see the [Limits](~~59643#50de175230erj~~) section of the "Encrypt cloud disks" topic.
       * - **Considerations**
       *   - After you enable the Account-level EBS Default Encryption feature in a region, new pay-as-you-go and subscription cloud disks in the region must be encrypted. You can use the KMS key configured for the feature or specify other KMS keys to encrypt the cloud disks.
       *   - The first time you enable the Account-level EBS Default Encryption feature in a region, the service key in the region is automatically used to encrypt EBS resources.
       * - **Suggestions**
       *   - You can call the [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) operation to query whether the Account-level EBS Default Encryption feature is enabled in a region and the [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) operation to query the ID of the KMS key used by the feature in a region.
       *   - You can call the [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) operation to change or reset the KMS key used by the Account-level EBS Default Encryption feature in a region.
       *   - You can call the [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) operation to disable the Account-level EBS Default Encryption feature in a region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefault(const Models::EnableDiskEncryptionByDefaultRequest &request);

      /**
       * @summary Enable or modify Elastic Network Interface (ENI) QoS rate limit settings
       *
       * @param request EnableNetworkInterfaceQoSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableNetworkInterfaceQoSResponse
       */
      Models::EnableNetworkInterfaceQoSResponse enableNetworkInterfaceQoSWithOptions(const Models::EnableNetworkInterfaceQoSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or modify Elastic Network Interface (ENI) QoS rate limit settings
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
       * @summary Export a custom image to an OSS bucket in the same region as the image.
       *
       * @description Before you export an image:
       * - Review the prerequisites and considerations in [Export an image](https://help.aliyun.com/document_detail/58181.html).
       * - The `ImageFormat` parameter is available only in the following regions: Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). In regions that do not support this parameter, images are exported in the RAW format by default.
       * - You must use RAM to grant ECS permissions to write to OSS. Follow these steps:
       *   - Create a role with the required name `AliyunECSImageExportDefaultRole` and attach the following trust policy:```
       *        {
       *          "Statement": [
       *            {
       *              "Action": "sts:AssumeRole",
       *              "Effect": "Allow",
       *              "Principal": {
       *                "Service": [
       *                  "ecs.aliyuncs.com"
       *                ]
       *              }
       *            }
       *          ],
       *          "Version": "1"
       *        }
       *     ```
       *   - Attach the default system permission policy, `AliyunECSImageExportRolePolicy`, to the `AliyunECSImageExportDefaultRole` role. For more details, see [Grant permissions to a RAM role](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D). You can also create a custom policy that includes the following permissions:```
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
       *     ```
       * After the image is exported:
       * The custom image is stored in the specified OSS bucket. For download instructions, see [Download a custom image](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImageWithOptions(const Models::ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export a custom image to an OSS bucket in the same region as the image.
       *
       * @description Before you export an image:
       * - Review the prerequisites and considerations in [Export an image](https://help.aliyun.com/document_detail/58181.html).
       * - The `ImageFormat` parameter is available only in the following regions: Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). In regions that do not support this parameter, images are exported in the RAW format by default.
       * - You must use RAM to grant ECS permissions to write to OSS. Follow these steps:
       *   - Create a role with the required name `AliyunECSImageExportDefaultRole` and attach the following trust policy:```
       *        {
       *          "Statement": [
       *            {
       *              "Action": "sts:AssumeRole",
       *              "Effect": "Allow",
       *              "Principal": {
       *                "Service": [
       *                  "ecs.aliyuncs.com"
       *                ]
       *              }
       *            }
       *          ],
       *          "Version": "1"
       *        }
       *     ```
       *   - Attach the default system permission policy, `AliyunECSImageExportRolePolicy`, to the `AliyunECSImageExportDefaultRole` role. For more details, see [Grant permissions to a RAM role](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D). You can also create a custom policy that includes the following permissions:```
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
       *     ```
       * After the image is exported:
       * The custom image is stored in the specified OSS bucket. For download instructions, see [Download a custom image](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImage(const Models::ExportImageRequest &request);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary Exports a snapshot to a specified Object Storage Service (OSS) bucket.
       *
       * @param request ExportSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshotWithOptions(const Models::ExportSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary Exports a snapshot to a specified Object Storage Service (OSS) bucket.
       *
       * @param request ExportSnapshotRequest
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshot(const Models::ExportSnapshotRequest &request);

      /**
       * @summary Retrieves the system command-line output of an instance. The data is returned in Base64-encoded format.
       *
       * @description - Elastic Compute Service (ECS) is a virtualization-based cloud server that cannot be connected to display devices or manually screenshotted. However, Alibaba Cloud caches the system command line output from the last time an instance was started, restarted, or shut down. You can invoke GetInstanceConsoleOutput to retrieve this output.
       * - System command line output cannot be retrieved for [retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * - Windows instances do not support retrieving system command line output.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutputWithOptions(const Models::GetInstanceConsoleOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the system command-line output of an instance. The data is returned in Base64-encoded format.
       *
       * @description - Elastic Compute Service (ECS) is a virtualization-based cloud server that cannot be connected to display devices or manually screenshotted. However, Alibaba Cloud caches the system command line output from the last time an instance was started, restarted, or shut down. You can invoke GetInstanceConsoleOutput to retrieve this output.
       * - System command line output cannot be retrieved for [retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * - Windows instances do not support retrieving system command line output.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutput(const Models::GetInstanceConsoleOutputRequest &request);

      /**
       * @summary Calls GetInstanceScreenshot to retrieve the screenshot information of an instance.
       *
       * @description After Elastic Compute Service (ECS) returns the instance screenshot in Base64-encoded JPG image format, you must decode it yourself. You can call this operation when troubleshooting faults. Note the following items:
       * - The instance must be in the Running state. 
       * - Screenshots cannot be retrieved for [retired instance types](https://help.aliyun.com/document_detail/55263.html). 
       * - If you call this operation multiple times on the same instance, the interval between calls must be at least 10 seconds. Otherwise, the Throttling error code is returned.
       *
       * @param request GetInstanceScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceScreenshotResponse
       */
      Models::GetInstanceScreenshotResponse getInstanceScreenshotWithOptions(const Models::GetInstanceScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls GetInstanceScreenshot to retrieve the screenshot information of an instance.
       *
       * @description After Elastic Compute Service (ECS) returns the instance screenshot in Base64-encoded JPG image format, you must decode it yourself. You can call this operation when troubleshooting faults. Note the following items:
       * - The instance must be in the Running state. 
       * - Screenshots cannot be retrieved for [retired instance types](https://help.aliyun.com/document_detail/55263.html). 
       * - If you call this operation multiple times on the same instance, the interval between calls must be at least 10 seconds. Otherwise, the Throttling error code is returned.
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
       * - You must upload the image file to Object Storage Service (OSS) in advance. For more information, see [Upload files](https://help.aliyun.com/document_detail/31886.html).
       * - To prevent ECS instances created from the imported custom image from failing to start due to operating system issues on some servers, virtual machines, or cloud hosts, check whether you need to install the virtio driver on the source server before importing the image. For more information, see [Install the virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * - When you import an image for the first time, you must authorize ECS to access your OSS bucket by using Resource Access Management (RAM). Otherwise, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error is returned. The following two scenarios apply:
       *   - **Import an image file without using CloudBox**: You can complete RAM authorization in the RAM console with a single click. For more information, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSImageImportDefaultRole`. You must use this exact name. Otherwise, the image import fails. Use the following policy for the role:
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
       *     2. Attach the system policy `AliyunECSImageImportRolePolicy` to the role. You can also create a custom policy that includes the following permissions:
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
       *   - **Import an image file by using CloudBox**: You can complete RAM authorization in the RAM console with a single click. For more information, see [Cloud resource access authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSCloudBoxImageImportDefaultRole`. You must use this exact name. Otherwise, the image import fails. Use the following policy for the role:
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
       *     2. Attach the system policy `AliyunECSCloudBoxImageImportRolePolicy` to the role. You can also create a custom policy that includes the following permissions:
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
       * - The region into which you import the image must be the same as the region of the OSS bucket to which the image file is uploaded.
       * - Valid values of N in the `DiskDeviceMapping.N` parameter: 1 to 17. When N is 1, the disk is a system disk. When N is 2 to 17, the disk is a data disk. When N is greater than 17, the system automatically ignores the value.
       * - When the `Architecture` parameter is set to `arm64`, or the `Platform` parameter is set to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     - To ensure that the imported image supports password configuration or key pair modification, the image must meet the following requirements:
       *         - The operating system kernel must support the `CONFIG_FW_CFG_SYSFS` feature. Linux community kernels later than version 4.6 support this feature by default. CentOS kernels later than version 3.10.0-826.el7 support this feature by default. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the server that corresponds to the image. If the output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel in the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         - The operating system must support the SHA-512 encryption algorithm.
       *     - To ensure that the imported image supports disk resizing and file system resizing, the image must meet the following requirements:
       *         - The operating system kernel version must be later than 3.6.
       *         - The growpart command is supported. To support this command, install the `cloud-utils-growpart` package. The installation method varies by operating system. For more information, see [Resize partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~).
       *         - The resize2fs command is supported. To support this command, install the `e2fsprogs` package. This package is installed by default on the operating system. If it is not installed, install it manually.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * - If the system architecture of the custom image that you want to import is arm64, set the RTC clock to use the UTC time standard. For more information, see [Linux time and time zone description](https://help.aliyun.com/document_detail/405080.html).
       * - Configure the image detection parameters when you import an image. This helps the system optimize your image. For more information, see [Image detection overview](https://help.aliyun.com/document_detail/439819.html).
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
       * - You must upload the image file to Object Storage Service (OSS) in advance. For more information, see [Upload files](https://help.aliyun.com/document_detail/31886.html).
       * - To prevent ECS instances created from the imported custom image from failing to start due to operating system issues on some servers, virtual machines, or cloud hosts, check whether you need to install the virtio driver on the source server before importing the image. For more information, see [Install the virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * - When you import an image for the first time, you must authorize ECS to access your OSS bucket by using Resource Access Management (RAM). Otherwise, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error is returned. The following two scenarios apply:
       *   - **Import an image file without using CloudBox**: You can complete RAM authorization in the RAM console with a single click. For more information, see [Cloud resource access authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSImageImportDefaultRole`. You must use this exact name. Otherwise, the image import fails. Use the following policy for the role:
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
       *     2. Attach the system policy `AliyunECSImageImportRolePolicy` to the role. You can also create a custom policy that includes the following permissions:
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
       *   - **Import an image file by using CloudBox**: You can complete RAM authorization in the RAM console with a single click. For more information, see [Cloud resource access authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D). You can also manually complete RAM authorization. The following policies and permissions are required for some operations. For more information, see [Account access control](https://help.aliyun.com/document_detail/25481.html).
       *     1. Create a role named `AliyunECSCloudBoxImageImportDefaultRole`. You must use this exact name. Otherwise, the image import fails. Use the following policy for the role:
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
       *     2. Attach the system policy `AliyunECSCloudBoxImageImportRolePolicy` to the role. You can also create a custom policy that includes the following permissions:
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
       * - The region into which you import the image must be the same as the region of the OSS bucket to which the image file is uploaded.
       * - Valid values of N in the `DiskDeviceMapping.N` parameter: 1 to 17. When N is 1, the disk is a system disk. When N is 2 to 17, the disk is a data disk. When N is greater than 17, the system automatically ignores the value.
       * - When the `Architecture` parameter is set to `arm64`, or the `Platform` parameter is set to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     - To ensure that the imported image supports password configuration or key pair modification, the image must meet the following requirements:
       *         - The operating system kernel must support the `CONFIG_FW_CFG_SYSFS` feature. Linux community kernels later than version 4.6 support this feature by default. CentOS kernels later than version 3.10.0-826.el7 support this feature by default. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the server that corresponds to the image. If the output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel in the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         - The operating system must support the SHA-512 encryption algorithm.
       *     - To ensure that the imported image supports disk resizing and file system resizing, the image must meet the following requirements:
       *         - The operating system kernel version must be later than 3.6.
       *         - The growpart command is supported. To support this command, install the `cloud-utils-growpart` package. The installation method varies by operating system. For more information, see [Resize partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~).
       *         - The resize2fs command is supported. To support this command, install the `e2fsprogs` package. This package is installed by default on the operating system. If it is not installed, install it manually.
       *         - The latest version of Alibaba Cloud cloud-init is installed on the operating system. Cloud-init 19.1 must Milvus version 19.1.3 or later. Cloud-init 0.7.6a on some earlier operating systems must Milvus version 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * - If the system architecture of the custom image that you want to import is arm64, set the RTC clock to use the UTC time standard. For more information, see [Linux time and time zone description](https://help.aliyun.com/document_detail/405080.html).
       * - Configure the image detection parameters when you import an image. This helps the system optimize your image. For more information, see [Image detection overview](https://help.aliyun.com/document_detail/439819.html).
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key part of an RSA key pair generated by other tools. After the key pair is imported, Alibaba Cloud stores the public key for you. You must securely store the private key of the key pair.
       *
       * @description ## Description
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
       * @summary Imports the public key part of an RSA key pair generated by other tools. After the key pair is imported, Alibaba Cloud stores the public key for you. You must securely store the private key of the key pair.
       *
       * @description ## Description
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
       * @summary Installs Cloud Assistant Agent on Elastic Compute Service (ECS) instances. After you install Cloud Assistant Agent on ECS instances, restart the instances for the installation to take effect.
       *
       * @description ## [](#)Usage notes
       * After you call the InstallCloudAssistant operation to install Cloud Assistant Agent on an ECS instance, call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance to make the installation take effect.
       *
       * @param request InstallCloudAssistantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistantWithOptions(const Models::InstallCloudAssistantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs Cloud Assistant Agent on Elastic Compute Service (ECS) instances. After you install Cloud Assistant Agent on ECS instances, restart the instances for the installation to take effect.
       *
       * @description ## [](#)Usage notes
       * After you call the InstallCloudAssistant operation to install Cloud Assistant Agent on an ECS instance, call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance to make the installation take effect.
       *
       * @param request InstallCloudAssistantRequest
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistant(const Models::InstallCloudAssistantRequest &request);

      /**
       * @summary Specify parameters such as CommandId, InstanceId, and ResourceGroupId to trigger a Cloud Assistant command on one or more ECS instances.
       *
       * @description ## API Guide
       * <props="china">
       * - The following restrictions apply to the target ECS instances. If you select multiple ECS instances and any of them does not meet the execution conditions, you must invoke the API again.
       *   - The instance status must be running (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       *   - The [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must already be installed.
       *   - When executing a PowerShell-type command, the instance must have the PowerShell module configured.
       * - One-time execution: The command runs only once.
       * - Scheduled execution:
       *   - The command is executed periodically based on the time frequency specified by the `Frequency` parameter. The result of the previous execution does not affect the next execution.
       *   - When you execute a scheduled task based on a cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time follows the instance\\"s system time. Ensure that the time or time zone of the ECS instance matches your expected time. For more information about time zones, see [Manage Time Synchronization Service](https://help.aliyun.com/document_detail/92704.html).
       *   To support new features of scheduled tasks (execution at fixed intervals, execution only once at a specified time, or specifying a year or time zone when executing based on a cron expression), the Cloud Assistant Agent version must be at least the following:
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   If the response returns the `ClientNeedUpgrade` error code, see [Upgrade or Disable Upgrade of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the client to the latest version.
       * - A command may fail to execute due to an abnormal instance status, network issues, or an abnormal Cloud Assistant Agent. In such cases, no execution information is generated. For more information, see [Common Execution Failures and Troubleshooting Suggestions](https://help.aliyun.com/document_detail/87029.html).
       * - If you enable the Custom Parameter feature when creating a command, you must pass the custom parameters (`Parameters`) when executing the command.
       * - We recommend that you first call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check the Cloud Assistant status of the instance and execute the command only when `CloudAssistantStatus` is true, especially for newly purchased instances.
       * <props="intl">
       * - The following restrictions apply to the target ECS instances. If you select multiple ECS instances and any of them does not meet the execution conditions, you must invoke the API again.
       *   - The instance status must be running (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       *   - The [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must already be installed.
       *   - When executing a PowerShell-type command, the instance must have the PowerShell module configured.
       * - One-time execution: The command runs only once.
       * - Scheduled execution:
       *   - The command is executed periodically based on the time frequency specified by the `Frequency` parameter. The result of the previous execution does not affect the next execution.
       *   - When you execute a scheduled task based on a cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time follows the instance\\"s system time. Ensure that the time or time zone of the ECS instance matches your expected time. For more information about time zones, see [Manage Time Synchronization Service](https://help.aliyun.com/document_detail/92704.html).
       *   To support new features of scheduled tasks (execution at fixed intervals, execution only once at a specified time, or specifying a year or time zone when executing based on a cron expression), the Cloud Assistant Agent version must be at least the following:
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   If the response returns the `ClientNeedUpgrade` error code, see [Upgrade or Disable Upgrade of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the client to the latest version.
       * - A command may fail to execute due to an abnormal instance status, network issues, or an abnormal Cloud Assistant Agent. In such cases, no execution information is generated. For more information, see [Common Execution Failures and Troubleshooting Suggestions](https://help.aliyun.com/document_detail/87029.html).
       * - If you enable the Custom Parameter feature when creating a command, you must pass the custom parameters (`Parameters`) when executing the command.
       * - We recommend that you first call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check the Cloud Assistant status of the instance and execute the command only when `CloudAssistantStatus` is true, especially for newly purchased instances.
       *
       * @param tmpReq InvokeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommandWithOptions(const Models::InvokeCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specify parameters such as CommandId, InstanceId, and ResourceGroupId to trigger a Cloud Assistant command on one or more ECS instances.
       *
       * @description ## API Guide
       * <props="china">
       * - The following restrictions apply to the target ECS instances. If you select multiple ECS instances and any of them does not meet the execution conditions, you must invoke the API again.
       *   - The instance status must be running (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       *   - The [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must already be installed.
       *   - When executing a PowerShell-type command, the instance must have the PowerShell module configured.
       * - One-time execution: The command runs only once.
       * - Scheduled execution:
       *   - The command is executed periodically based on the time frequency specified by the `Frequency` parameter. The result of the previous execution does not affect the next execution.
       *   - When you execute a scheduled task based on a cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time follows the instance\\"s system time. Ensure that the time or time zone of the ECS instance matches your expected time. For more information about time zones, see [Manage Time Synchronization Service](https://help.aliyun.com/document_detail/92704.html).
       *   To support new features of scheduled tasks (execution at fixed intervals, execution only once at a specified time, or specifying a year or time zone when executing based on a cron expression), the Cloud Assistant Agent version must be at least the following:
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   If the response returns the `ClientNeedUpgrade` error code, see [Upgrade or Disable Upgrade of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the client to the latest version.
       * - A command may fail to execute due to an abnormal instance status, network issues, or an abnormal Cloud Assistant Agent. In such cases, no execution information is generated. For more information, see [Common Execution Failures and Troubleshooting Suggestions](https://help.aliyun.com/document_detail/87029.html).
       * - If you enable the Custom Parameter feature when creating a command, you must pass the custom parameters (`Parameters`) when executing the command.
       * - We recommend that you first call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check the Cloud Assistant status of the instance and execute the command only when `CloudAssistantStatus` is true, especially for newly purchased instances.
       * <props="intl">
       * - The following restrictions apply to the target ECS instances. If you select multiple ECS instances and any of them does not meet the execution conditions, you must invoke the API again.
       *   - The instance status must be running (`Running`). You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       *   - The [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must already be installed.
       *   - When executing a PowerShell-type command, the instance must have the PowerShell module configured.
       * - One-time execution: The command runs only once.
       * - Scheduled execution:
       *   - The command is executed periodically based on the time frequency specified by the `Frequency` parameter. The result of the previous execution does not affect the next execution.
       *   - When you execute a scheduled task based on a cron expression and specify a time zone, the scheduled execution time is based on the specified time zone. If you do not specify a time zone, the scheduled execution time is based on the system time zone of the ECS instance, and the execution time follows the instance\\"s system time. Ensure that the time or time zone of the ECS instance matches your expected time. For more information about time zones, see [Manage Time Synchronization Service](https://help.aliyun.com/document_detail/92704.html).
       *   To support new features of scheduled tasks (execution at fixed intervals, execution only once at a specified time, or specifying a year or time zone when executing based on a cron expression), the Cloud Assistant Agent version must be at least the following:
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   If the response returns the `ClientNeedUpgrade` error code, see [Upgrade or Disable Upgrade of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the client to the latest version.
       * - A command may fail to execute due to an abnormal instance status, network issues, or an abnormal Cloud Assistant Agent. In such cases, no execution information is generated. For more information, see [Common Execution Failures and Troubleshooting Suggestions](https://help.aliyun.com/document_detail/87029.html).
       * - If you enable the Custom Parameter feature when creating a command, you must pass the custom parameters (`Parameters`) when executing the command.
       * - We recommend that you first call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check the Cloud Assistant status of the instance and execute the command only when `CloudAssistantStatus` is true, especially for newly purchased instances.
       *
       * @param request InvokeCommandRequest
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommand(const Models::InvokeCommandRequest &request);

      /**
       * @summary Calls JoinResourceGroup to add an ECS resource or service to a resource group.
       *
       * @description ## Description
       * A resource is a cloud service entity that you create on Alibaba Cloud. For example, an ECS instance, an ECS elastic network interface, or an ECS image can be a resource. A resource group is a collection of infrastructure for projects, environments, or stacks. Managing resources in a resource group allows you to monitor and run tasks in a centralized manner, saving you from the hassle of switching between multiple Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroupWithOptions(const Models::JoinResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls JoinResourceGroup to add an ECS resource or service to a resource group.
       *
       * @description ## Description
       * A resource is a cloud service entity that you create on Alibaba Cloud. For example, an ECS instance, an ECS elastic network interface, or an ECS image can be a resource. A resource group is a collection of infrastructure for projects, environments, or stacks. Managing resources in a resource group allows you to monitor and run tasks in a centralized manner, saving you from the hassle of switching between multiple Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroup(const Models::JoinResourceGroupRequest &request);

      /**
       * @summary Adds an ECS instance or an elastic network interface to a security group.
       *
       * @description > This API is deprecated. We recommend calling the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add or remove an ECS instance from a security group, or calling the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add or remove an elastic network interface (ENI) from a security group.
       * - You cannot add an instance and an elastic network interface to a security group in the same call. The `InstanceId` and `NetworkInterfaceId` parameters are mutually exclusive.
       * - The security group and the instance must be in the same Alibaba Cloud region.
       * - The security group and the instance must have the same network type. If the network type is VPC, they must also belong to the same VPC.
       * - You can add an instance to a security group only if the instance is in the **Stopped** or **Running** state.
       * - An instance or an elastic network interface can belong to a maximum of five security groups. For more information, see [Security group limitations](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroupWithOptions(const Models::JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ECS instance or an elastic network interface to a security group.
       *
       * @description > This API is deprecated. We recommend calling the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add or remove an ECS instance from a security group, or calling the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add or remove an elastic network interface (ENI) from a security group.
       * - You cannot add an instance and an elastic network interface to a security group in the same call. The `InstanceId` and `NetworkInterfaceId` parameters are mutually exclusive.
       * - The security group and the instance must be in the same Alibaba Cloud region.
       * - The security group and the instance must have the same network type. If the network type is VPC, they must also belong to the same VPC.
       * - You can add an instance to a security group only if the instance is in the **Stopped** or **Running** state.
       * - An instance or an elastic network interface can belong to a maximum of five security groups. For more information, see [Security group limitations](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroup(const Models::JoinSecurityGroupRequest &request);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) from a security group.
       *
       * @description > This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * > Alibaba Cloud modified verification rules for the LeaveSecurityGroup operation on July 8, 2024. When you remove an ECS instance or ENI that does not belong to a security group from the security group, the "InvalidSecurityGroupAssociation.NotFound" error code is returned instead of a success response. Update the LeaveSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * - You cannot remove an instance and an ENI from a security group at the same time. This indicates that you cannot specify `InstanceId` and `NetworkInterfaceId` in one request.
       * - Before you remove an instance from a security group, the instance must be in the **Stopped** (Stopped) or **Running** (Running) state.
       * - An instance or ENI must be added to at least one security group. If you remove an instance or ENI from the only security group, the removal request fails and an error is returned.
       * - When you remove an instance or ENI that is not in a security group from the security group, the removal request fails and an error is returned.
       *
       * @param request LeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroupWithOptions(const Models::LeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) from a security group.
       *
       * @description > This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * > Alibaba Cloud modified verification rules for the LeaveSecurityGroup operation on July 8, 2024. When you remove an ECS instance or ENI that does not belong to a security group from the security group, the "InvalidSecurityGroupAssociation.NotFound" error code is returned instead of a success response. Update the LeaveSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * - You cannot remove an instance and an ENI from a security group at the same time. This indicates that you cannot specify `InstanceId` and `NetworkInterfaceId` in one request.
       * - Before you remove an instance from a security group, the instance must be in the **Stopped** (Stopped) or **Running** (Running) state.
       * - An instance or ENI must be added to at least one security group. If you remove an instance or ENI from the only security group, the removal request fails and an error is returned.
       * - When you remove an instance or ENI that is not in a security group from the security group, the removal request fails and an error is returned.
       *
       * @param request LeaveSecurityGroupRequest
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroup(const Models::LeaveSecurityGroupRequest &request);

      /**
       * @summary Queries the states of Cloud Assistant plug-ins on Elastic Compute Service (ECS) instances.
       *
       * @description - Before you call this operation to query the status of Cloud Assistant plug-ins on ECS instances, make sure that the versions of Cloud Assistant Agent on the instances are not earlier than the following ones:
       *   - 2.2.3.344 for Linux instances
       *   - 2.1.3.344 for Windows instances
       * - During a paged query, when you call the ListPluginStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the ListPluginStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request ListPluginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginStatusResponse
       */
      Models::ListPluginStatusResponse listPluginStatusWithOptions(const Models::ListPluginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the states of Cloud Assistant plug-ins on Elastic Compute Service (ECS) instances.
       *
       * @description - Before you call this operation to query the status of Cloud Assistant plug-ins on ECS instances, make sure that the versions of Cloud Assistant Agent on the instances are not earlier than the following ones:
       *   - 2.2.3.344 for Linux instances
       *   - 2.1.3.344 for Windows instances
       * - During a paged query, when you call the ListPluginStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the ListPluginStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * @summary Lock a snapshot in compliance mode to protect it from accidental or malicious deletion. While a snapshot is locked, it cannot be deleted.
       *
       * @description This operation also lets you reconfigure a locked snapshot. The available settings depend on the lock mode and lock state:
       * - If a snapshot is locked in compliance mode and is in its cooldown period, you can extend or shorten the cooldown period and the lock duration.
       * - If a snapshot is locked in compliance mode and its cooldown period has passed, you can only extend the lock duration.
       * > Reconfiguring a locked snapshot during its cooldown period constitutes a new relock operation, which resets all lock parameters instead of adjusting them individually.
       *
       * @param request LockSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockSnapshotResponse
       */
      Models::LockSnapshotResponse lockSnapshotWithOptions(const Models::LockSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lock a snapshot in compliance mode to protect it from accidental or malicious deletion. While a snapshot is locked, it cannot be deleted.
       *
       * @description This operation also lets you reconfigure a locked snapshot. The available settings depend on the lock mode and lock state:
       * - If a snapshot is locked in compliance mode and is in its cooldown period, you can extend or shorten the cooldown period and the lock duration.
       * - If a snapshot is locked in compliance mode and its cooldown period has passed, you can only extend the lock duration.
       * > Reconfiguring a locked snapshot during its cooldown period constitutes a new relock operation, which resets all lock parameters instead of adjusting them individually.
       *
       * @param request LockSnapshotRequest
       * @return LockSnapshotResponse
       */
      Models::LockSnapshotResponse lockSnapshot(const Models::LockSnapshotRequest &request);

      /**
       * @summary Modifies the configurations of an auto provisioning group.
       *
       * @description Before you call this operation, take note of the following items:
       * - If you modify the capacity or capacity-related settings of an auto-provisioning group, the group executes a scheduling task after the group is modified.
       * - You cannot modify an auto-provisioning group when the group is being deleted.
       *
       * @param request ModifyAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoProvisioningGroupResponse
       */
      Models::ModifyAutoProvisioningGroupResponse modifyAutoProvisioningGroupWithOptions(const Models::ModifyAutoProvisioningGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an auto provisioning group.
       *
       * @description Before you call this operation, take note of the following items:
       * - If you modify the capacity or capacity-related settings of an auto-provisioning group, the group executes a scheduling task after the group is modified.
       * - You cannot modify an auto-provisioning group when the group is being deleted.
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
       * - After you modify an automatic snapshot policy, the disks to which the policy has been applied immediately execute the modified policy.
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
       * - After you modify an automatic snapshot policy, the disks to which the policy has been applied immediately execute the modified policy.
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
       * @summary Modifies the information of a capacity reservation, including the name, description, release mode, and the total number of Elastic Compute Service (ECS) instances for which capacity is reserved.
       *
       * @param request ModifyCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservationWithOptions(const Models::ModifyCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a capacity reservation, including the name, description, release mode, and the total number of Elastic Compute Service (ECS) instances for which capacity is reserved.
       *
       * @param request ModifyCapacityReservationRequest
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservation(const Models::ModifyCapacityReservationRequest &request);

      /**
       * @summary Change the Cloud Assistant settings.
       *
       * @param tmpReq ModifyCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudAssistantSettingsResponse
       */
      Models::ModifyCloudAssistantSettingsResponse modifyCloudAssistantSettingsWithOptions(const Models::ModifyCloudAssistantSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the Cloud Assistant settings.
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
       * @summary Modifies the information about a dedicated host, such as the name, description, and instance migration policy that is applied when the dedicated host fails.
       *
       * @description ## [](#)Usage notes
       * - All Elastic Compute Service (ECS) instances that are hosted on a dedicated host must be in the Stopped (`Stopped`) state before you can modify the CPU overcommit ratio of the dedicated host.
       * - Changes to the CPU overcommit ratio of a dedicated host do not affect the running status of the dedicated host. After the CPU overcommit ratio is changed, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs. Otherwise, ECS instances that use the excess vCPUs cannot start.
       *
       * @param request ModifyDedicatedHostAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAttributeResponse
       */
      Models::ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttributeWithOptions(const Models::ModifyDedicatedHostAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a dedicated host, such as the name, description, and instance migration policy that is applied when the dedicated host fails.
       *
       * @description ## [](#)Usage notes
       * - All Elastic Compute Service (ECS) instances that are hosted on a dedicated host must be in the Stopped (`Stopped`) state before you can modify the CPU overcommit ratio of the dedicated host.
       * - Changes to the CPU overcommit ratio of a dedicated host do not affect the running status of the dedicated host. After the CPU overcommit ratio is changed, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs. Otherwise, ECS instances that use the excess vCPUs cannot start.
       *
       * @param request ModifyDedicatedHostAttributeRequest
       * @return ModifyDedicatedHostAttributeResponse
       */
      Models::ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttribute(const Models::ModifyDedicatedHostAttributeRequest &request);

      /**
       * @summary Sets the automatic release time for a pay-as-you-go dedicated host or cancels its automatic release.
       *
       * @description ## Usage notes
       * A pay-as-you-go dedicated host can be automatically released at the specified time. Before you release a pay-as-you-go dedicated host, make sure that the host is no longer required and all necessary application data is backed up.
       *
       * @param request ModifyDedicatedHostAutoReleaseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAutoReleaseTimeResponse
       */
      Models::ModifyDedicatedHostAutoReleaseTimeResponse modifyDedicatedHostAutoReleaseTimeWithOptions(const Models::ModifyDedicatedHostAutoReleaseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the automatic release time for a pay-as-you-go dedicated host or cancels its automatic release.
       *
       * @description ## Usage notes
       * A pay-as-you-go dedicated host can be automatically released at the specified time. Before you release a pay-as-you-go dedicated host, make sure that the host is no longer required and all necessary application data is backed up.
       *
       * @param request ModifyDedicatedHostAutoReleaseTimeRequest
       * @return ModifyDedicatedHostAutoReleaseTimeResponse
       */
      Models::ModifyDedicatedHostAutoReleaseTimeResponse modifyDedicatedHostAutoReleaseTime(const Models::ModifyDedicatedHostAutoReleaseTimeRequest &request);

      /**
       * @summary Enables or disables auto-renewal for one or more subscription dedicated hosts.
       *
       * @description - If you enable auto-renewal for your subscription dedicated host, the system attempts to deduct the renewal payment at 08:00:00 (UTC+8) nine days before the dedicated host expires to renew the dedicated host. If this deduction attempt fails, the system attempt to deduct the payment at the same point in time the next day. The system attempts to deduct the payment once every day until the dedicated host expires or until the payment is deducted. Make sure that your account balance is sufficient.
       * - Subscription dedicated hosts can be automatically renewed along with the subscription Elastic Compute Service (ECS) instances hosted on the dedicated hosts. For more information, see the description of the AutoRenewWithEcs parameter.
       *
       * @param request ModifyDedicatedHostAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAutoRenewAttributeResponse
       */
      Models::ModifyDedicatedHostAutoRenewAttributeResponse modifyDedicatedHostAutoRenewAttributeWithOptions(const Models::ModifyDedicatedHostAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables auto-renewal for one or more subscription dedicated hosts.
       *
       * @description - If you enable auto-renewal for your subscription dedicated host, the system attempts to deduct the renewal payment at 08:00:00 (UTC+8) nine days before the dedicated host expires to renew the dedicated host. If this deduction attempt fails, the system attempt to deduct the payment at the same point in time the next day. The system attempts to deduct the payment once every day until the dedicated host expires or until the payment is deducted. Make sure that your account balance is sufficient.
       * - Subscription dedicated hosts can be automatically renewed along with the subscription Elastic Compute Service (ECS) instances hosted on the dedicated hosts. For more information, see the description of the AutoRenewWithEcs parameter.
       *
       * @param request ModifyDedicatedHostAutoRenewAttributeRequest
       * @return ModifyDedicatedHostAutoRenewAttributeResponse
       */
      Models::ModifyDedicatedHostAutoRenewAttributeResponse modifyDedicatedHostAutoRenewAttribute(const Models::ModifyDedicatedHostAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the information of a dedicated host group, including the name, description, and properties.
       *
       * @param request ModifyDedicatedHostClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostClusterAttributeResponse
       */
      Models::ModifyDedicatedHostClusterAttributeResponse modifyDedicatedHostClusterAttributeWithOptions(const Models::ModifyDedicatedHostClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a dedicated host group, including the name, description, and properties.
       *
       * @param request ModifyDedicatedHostClusterAttributeRequest
       * @return ModifyDedicatedHostClusterAttributeResponse
       */
      Models::ModifyDedicatedHostClusterAttributeResponse modifyDedicatedHostClusterAttribute(const Models::ModifyDedicatedHostClusterAttributeRequest &request);

      /**
       * @summary Changes the billing method of dedicated hosts.
       *
       * @param request ModifyDedicatedHostsChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostsChargeTypeResponse
       */
      Models::ModifyDedicatedHostsChargeTypeResponse modifyDedicatedHostsChargeTypeWithOptions(const Models::ModifyDedicatedHostsChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of dedicated hosts.
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
       * @summary Modifies a diagnostic metric set.
       *
       * @param request ModifyDiagnosticMetricSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiagnosticMetricSetResponse
       */
      Models::ModifyDiagnosticMetricSetResponse modifyDiagnosticMetricSetWithOptions(const Models::ModifyDiagnosticMetricSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a diagnostic metric set.
       *
       * @param request ModifyDiagnosticMetricSetRequest
       * @return ModifyDiagnosticMetricSetResponse
       */
      Models::ModifyDiagnosticMetricSetResponse modifyDiagnosticMetricSet(const Models::ModifyDiagnosticMetricSetRequest &request);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion policy, automatic snapshot policy, performance burst settings, and other attributes of one or more block storage devices.
       *
       * @description You can call the DiskId parameter to modify the name, description, release behavior, and other attributes of a single block storage device, or call the DiskIds.N parameter to modify the attributes of multiple block storage devices at a time.
       *
       * @param request ModifyDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskAttributeResponse
       */
      Models::ModifyDiskAttributeResponse modifyDiskAttributeWithOptions(const Models::ModifyDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion policy, automatic snapshot policy, performance burst settings, and other attributes of one or more block storage devices.
       *
       * @description You can call the DiskId parameter to modify the name, description, release behavior, and other attributes of a single block storage device, or call the DiskIds.N parameter to modify the attributes of multiple block storage devices at a time.
       *
       * @param request ModifyDiskAttributeRequest
       * @return ModifyDiskAttributeResponse
       */
      Models::ModifyDiskAttributeResponse modifyDiskAttribute(const Models::ModifyDiskAttributeRequest &request);

      /**
       * @summary Converts the billing method of a data disk attached to a subscription ECS instance between pay-as-you-go and subscription.
       *
       * @description For information about how to change the billing method of cloud disks, see [Change the billing methods of a disk](https://help.aliyun.com/document_detail/145018.html).
       * Take note of the following items:
       * - Only pay-as-you-go disks can be attached to pay-as-you-go instances, and the billing methods of the disks cannot be changed.
       * - The instance to which data disks are attached cannot be in the Stopped state due to expiration.
       * - The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are nonrefundable.
       * - You cannot change the billing method again within 5 minutes of a successful change.
       * After you change the billing method, the payment (if any) is automatically completed. Maintain sufficient balance in your account. Otherwise, your order becomes invalid and must be canceled. If your account balance is insufficient, you can set AutoPay to false to generate an unpaid order. Then, log on to the **Expenses and Costs console**, go to the [Orders page](https://usercenter2-intl.aliyun.com/order/list), and pay for the order.
       *
       * @param request ModifyDiskChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskChargeTypeResponse
       */
      Models::ModifyDiskChargeTypeResponse modifyDiskChargeTypeWithOptions(const Models::ModifyDiskChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts the billing method of a data disk attached to a subscription ECS instance between pay-as-you-go and subscription.
       *
       * @description For information about how to change the billing method of cloud disks, see [Change the billing methods of a disk](https://help.aliyun.com/document_detail/145018.html).
       * Take note of the following items:
       * - Only pay-as-you-go disks can be attached to pay-as-you-go instances, and the billing methods of the disks cannot be changed.
       * - The instance to which data disks are attached cannot be in the Stopped state due to expiration.
       * - The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are nonrefundable.
       * - You cannot change the billing method again within 5 minutes of a successful change.
       * After you change the billing method, the payment (if any) is automatically completed. Maintain sufficient balance in your account. Otherwise, your order becomes invalid and must be canceled. If your account balance is insufficient, you can set AutoPay to false to generate an unpaid order. Then, log on to the **Expenses and Costs console**, go to the [Orders page](https://usercenter2-intl.aliyun.com/order/list), and pay for the order.
       *
       * @param request ModifyDiskChargeTypeRequest
       * @return ModifyDiskChargeTypeResponse
       */
      Models::ModifyDiskChargeTypeResponse modifyDiskChargeType(const Models::ModifyDiskChargeTypeRequest &request);

      /**
       * @summary Changes the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description - To call this operation as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - Before you can call this operation in a region, make sure that the Account-level EBS Default Encryption feature is enabled in the region.
       * - The first time you use a customer master key (CMK), you must use the `AliyunECSDiskEncryptDefaultRole` role to grant Elastic Compute Service (ECS) access to KMS resources. For more information, see [Grant access to KMS keys through RAM roles](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyIdWithOptions(const Models::ModifyDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description - To call this operation as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - Before you can call this operation in a region, make sure that the Account-level EBS Default Encryption feature is enabled in the region.
       * - The first time you use a customer master key (CMK), you must use the `AliyunECSDiskEncryptDefaultRole` role to grant Elastic Compute Service (ECS) access to KMS resources. For more information, see [Grant access to KMS keys through RAM roles](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyId(const Models::ModifyDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary You can migrate cloud disks to, from, or between dedicated block storage clusters.
       *
       * @description > The dedicated block storage cluster feature is available in the China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), and Germany (Frankfurt) regions, as well as the China (Shenzhen) Finance region.
       * Before you call this operation, make sure you understand the billing methods and pricing for cloud disks and dedicated block storage clusters. You must also ensure that your dedicated block storage cluster has not expired and your account has a positive balance. For more information, see [Billing for dedicated block storage](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       * Note the following when you call this operation:
       * - The cloud disk and the dedicated block storage cluster must be in the same availability zone.
       * - Only pay-as-you-go cloud disks are supported. You must first convert subscription cloud disks to pay-as-you-go. For more information, see [Convert the billing method of a cloud disk](https://help.aliyun.com/document_detail/145018.html).
       * - The cloud disk type must be compatible with the target dedicated block storage cluster. When migrating a disk between clusters, you can change the disk type to match the types supported by the destination cluster.
       * - The cloud disk must be in the **In use** or **Available** state.
       * - If the cloud disk is attached to an ECS instance, the instance must be in the **Running** or **Stopped** state. The ECS instance must not be expired.
       * - The performance level of an ESSD cloud disk depends on its capacity. If you cannot upgrade the performance level, resize the disk and then retry the operation. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html).
       * - You can perform a maximum of five concurrent cloud disk migration tasks per account in a single region.
       * - During the migration, you cannot cancel the migration, create snapshots, change the configuration, resize, attach, detach, or re-initialize the disk.
       * > After a cloud disk is migrated, the destination cluster determines its billing method, type, and capabilities. The changes take effect immediately after you call the operation, and Alibaba Cloud charges you based on the new disk type and performance level. For more information, see [Billing for dedicated block storage](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDeploymentResponse
       */
      Models::ModifyDiskDeploymentResponse modifyDiskDeploymentWithOptions(const Models::ModifyDiskDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can migrate cloud disks to, from, or between dedicated block storage clusters.
       *
       * @description > The dedicated block storage cluster feature is available in the China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), and Germany (Frankfurt) regions, as well as the China (Shenzhen) Finance region.
       * Before you call this operation, make sure you understand the billing methods and pricing for cloud disks and dedicated block storage clusters. You must also ensure that your dedicated block storage cluster has not expired and your account has a positive balance. For more information, see [Billing for dedicated block storage](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       * Note the following when you call this operation:
       * - The cloud disk and the dedicated block storage cluster must be in the same availability zone.
       * - Only pay-as-you-go cloud disks are supported. You must first convert subscription cloud disks to pay-as-you-go. For more information, see [Convert the billing method of a cloud disk](https://help.aliyun.com/document_detail/145018.html).
       * - The cloud disk type must be compatible with the target dedicated block storage cluster. When migrating a disk between clusters, you can change the disk type to match the types supported by the destination cluster.
       * - The cloud disk must be in the **In use** or **Available** state.
       * - If the cloud disk is attached to an ECS instance, the instance must be in the **Running** or **Stopped** state. The ECS instance must not be expired.
       * - The performance level of an ESSD cloud disk depends on its capacity. If you cannot upgrade the performance level, resize the disk and then retry the operation. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html).
       * - You can perform a maximum of five concurrent cloud disk migration tasks per account in a single region.
       * - During the migration, you cannot cancel the migration, create snapshots, change the configuration, resize, attach, detach, or re-initialize the disk.
       * > After a cloud disk is migrated, the destination cluster determines its billing method, type, and capabilities. The changes take effect immediately after you call the operation, and Alibaba Cloud charges you based on the new disk type and performance level. For more information, see [Billing for dedicated block storage](https://help.aliyun.com/document_detail/208883.html) and [Block storage billing](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskDeploymentRequest
       * @return ModifyDiskDeploymentResponse
       */
      Models::ModifyDiskDeploymentResponse modifyDiskDeployment(const Models::ModifyDiskDeploymentRequest &request);

      /**
       * @summary Changes the disk category of a cloud disk or the performance level of an Enterprise SSD (ESSD). You cannot change the disk categories of Regional ESSDs, basic disks, elastic ephemeral disks, and local disks.
       *
       * @description To minimize impacts on your business, change the disk categories or performance levels of cloud disks during off-peak hours.
       * Take note of the following items:
       * - To change the performance level of an ESSD, take note of the following items:
       *   - If the ESSD is a subscription ESSD, you can only upgrade its performance level.
       *   - If the ESSD is a pay-as-you-go ESSD, you can upgrade or downgrade its performance level. However, you cannot downgrade the performance level to PL0.
       *   - The ESSD must be in the **In Use** (In_Use) or **Unattached** (Available) state.
       *   - If the ESSD is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The instance cannot be in the Expired state or stopped due to an overdue payment.
       *   - If you cannot upgrade the performance level of an ESSD due to the capacity limit, extend the ESSD by calling the [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) operation and then try again. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * - For information about the limits on changing the disk category of a cloud disk, see [Change the category of a disk](~~161980#section_s4a_to0_1jx~~).
       * - For the disk categories to which cloud disks of each disk category can be changed, see [Change the category of a disk](~~161980#eb8bb54032nho~~).
       * After the disk category of a cloud disk is changed, the billing of the cloud disk has the following changes:
       * - If the cloud disk is a pay-as-you-go disk, you are charged for the disk based on the new disk category.
       * - If the cloud disk is a subscription disk, you may be charged additionally based on the price difference between the old and new disk categories and the remaining days of the billing cycle, starting from 00:00 the next day until the end of the subscription period.
       * For information about the billing of cloud disks, see [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSpecResponse
       */
      Models::ModifyDiskSpecResponse modifyDiskSpecWithOptions(const Models::ModifyDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the disk category of a cloud disk or the performance level of an Enterprise SSD (ESSD). You cannot change the disk categories of Regional ESSDs, basic disks, elastic ephemeral disks, and local disks.
       *
       * @description To minimize impacts on your business, change the disk categories or performance levels of cloud disks during off-peak hours.
       * Take note of the following items:
       * - To change the performance level of an ESSD, take note of the following items:
       *   - If the ESSD is a subscription ESSD, you can only upgrade its performance level.
       *   - If the ESSD is a pay-as-you-go ESSD, you can upgrade or downgrade its performance level. However, you cannot downgrade the performance level to PL0.
       *   - The ESSD must be in the **In Use** (In_Use) or **Unattached** (Available) state.
       *   - If the ESSD is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The instance cannot be in the Expired state or stopped due to an overdue payment.
       *   - If you cannot upgrade the performance level of an ESSD due to the capacity limit, extend the ESSD by calling the [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) operation and then try again. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * - For information about the limits on changing the disk category of a cloud disk, see [Change the category of a disk](~~161980#section_s4a_to0_1jx~~).
       * - For the disk categories to which cloud disks of each disk category can be changed, see [Change the category of a disk](~~161980#eb8bb54032nho~~).
       * After the disk category of a cloud disk is changed, the billing of the cloud disk has the following changes:
       * - If the cloud disk is a pay-as-you-go disk, you are charged for the disk based on the new disk category.
       * - If the cloud disk is a subscription disk, you may be charged additionally based on the price difference between the old and new disk categories and the remaining days of the billing cycle, starting from 00:00 the next day until the end of the subscription period.
       * For information about the billing of cloud disks, see [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
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
       * @summary Modifies information about an elasticity assurance, including the name, description, and capacity. Only capacity scale-in is supported .
       *
       * @param request ModifyElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticityAssuranceResponse
       */
      Models::ModifyElasticityAssuranceResponse modifyElasticityAssuranceWithOptions(const Models::ModifyElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an elasticity assurance, including the name, description, and capacity. Only capacity scale-in is supported .
       *
       * @param request ModifyElasticityAssuranceRequest
       * @return ModifyElasticityAssuranceResponse
       */
      Models::ModifyElasticityAssuranceResponse modifyElasticityAssurance(const Models::ModifyElasticityAssuranceRequest &request);

      /**
       * @summary Modifies the auto-renewal attribute of elasticity assurances.
       *
       * @param request ModifyElasticityAssuranceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::ModifyElasticityAssuranceAutoRenewAttributeResponse modifyElasticityAssuranceAutoRenewAttributeWithOptions(const Models::ModifyElasticityAssuranceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attribute of elasticity assurances.
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
       * @summary Modifies the attributes of a high-availability virtual IP address (HAVIP).
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyHaVipAttribute is deprecated, please use Vpc::2016-04-28::ModifyHaVipAttribute instead.
       *
       * @summary Modifies the attributes of a high-availability virtual IP address (HAVIP).
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
       * @summary Call the `ModifyImageAttribute` API to modify the attributes of a custom image, such as its image family, name, boot mode, status, or whether NVMe is supported.
       *
       * @param request ModifyImageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttributeWithOptions(const Models::ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the `ModifyImageAttribute` API to modify the attributes of a custom image, such as its image family, name, boot mode, status, or whether NVMe is supported.
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
       * @summary You can manage image sharing permissions by sharing your custom images with other Alibaba Cloud accounts or publishing them as community images.
       *
       * @description Before calling this operation, read [Share custom images](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, note the following sharing rules:
       * - **Sharing limits**: You can only share custom images created in your account. An image can be shared with up to 50 Alibaba Cloud accounts, with a limit of 10 accounts per request.
       * - **Impact on instances**: After an ECS instance is created from a shared custom image by calling [RunInstances](https://help.aliyun.com/document_detail/63440.html), its system disk cannot be re-initialized by calling [ReInitDisk](https://help.aliyun.com/document_detail/25519.html) if the image owner later unshares the image or deletes it by calling [DeleteImage](https://help.aliyun.com/document_detail/25537.html).
       * >Notice: 
       * The rules for sharing encrypted images on ECS have changed: you can share only images that are encrypted with a customer master key (CMK), not images that are encrypted with a service key. If you attempt to share an image that is encrypted with a service key, the request fails. To share such an image, you must use CopyImage to create a copy that is encrypted with a CMK.
       * Note the following when you publish or unpublish a community image:
       * - **Responsibilities and agreement**: As the image owner, you are responsible for the quality and version updates of the community image. Alibaba Cloud provides only platform support. You must read and agree to the Community Image Agreement before you can publish the image. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * - **Encryption limits**: You cannot publish encrypted images as community images.
       * - **Visibility**: Community images are public to all Alibaba Cloud accounts within the image\\"s region.
       * - **Feature limitations**: You cannot share, export, or copy community images.
       * - **Impact of unpublishing**: When a community image is unpublished, it becomes private. However, any accounts that you previously shared the image with directly retain access.
       *
       * @param request ModifyImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermissionWithOptions(const Models::ModifyImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can manage image sharing permissions by sharing your custom images with other Alibaba Cloud accounts or publishing them as community images.
       *
       * @description Before calling this operation, read [Share custom images](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, note the following sharing rules:
       * - **Sharing limits**: You can only share custom images created in your account. An image can be shared with up to 50 Alibaba Cloud accounts, with a limit of 10 accounts per request.
       * - **Impact on instances**: After an ECS instance is created from a shared custom image by calling [RunInstances](https://help.aliyun.com/document_detail/63440.html), its system disk cannot be re-initialized by calling [ReInitDisk](https://help.aliyun.com/document_detail/25519.html) if the image owner later unshares the image or deletes it by calling [DeleteImage](https://help.aliyun.com/document_detail/25537.html).
       * >Notice: 
       * The rules for sharing encrypted images on ECS have changed: you can share only images that are encrypted with a customer master key (CMK), not images that are encrypted with a service key. If you attempt to share an image that is encrypted with a service key, the request fails. To share such an image, you must use CopyImage to create a copy that is encrypted with a CMK.
       * Note the following when you publish or unpublish a community image:
       * - **Responsibilities and agreement**: As the image owner, you are responsible for the quality and version updates of the community image. Alibaba Cloud provides only platform support. You must read and agree to the Community Image Agreement before you can publish the image. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * - **Encryption limits**: You cannot publish encrypted images as community images.
       * - **Visibility**: Community images are public to all Alibaba Cloud accounts within the image\\"s region.
       * - **Feature limitations**: You cannot share, export, or copy community images.
       * - **Impact of unpublishing**: When a community image is unpublished, it becomes private. However, any accounts that you previously shared the image with directly retain access.
       *
       * @param request ModifyImageSharePermissionRequest
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermission(const Models::ModifyImageSharePermissionRequest &request);

      /**
       * @summary Changes the type of the private pool for an Elastic Compute Service (ECS) instance.
       *
       * @description A private pool is generated after an elasticity assurance or a capacity reservation is created. The private pool is associated with information about the instances that use the private pool. You can specify whether to use a private pool when you create an ECS instance to match the instance with the associated elasticity assurance or capacity reservation.
       * - After you call this operation to modify the private pool attributes of an ECS instance, you do not need to restart the instance for the changes to take effect.
       * - When you call the following operations on an ECS instance, the system attempts to match the instance with active private pools. If the instance is already matched to a specified private pool, the call to an operation may fail when the private pool capacity is used up or the private pool expires. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the type of the private pool to `Open`.
       *   - [StartInstance](https://help.aliyun.com/document_detail/2679679.html): start an ECS instance that is stopped in economical mode.
       *   - [ReActivateInstances](https://help.aliyun.com/document_detail/2679707.html): reactivates an ECS instance that has expired or is reclaimed due to an overdue payment.
       *   - [ModifyInstanceChargeType](https://help.aliyun.com/document_detail/2679704.html): changes the billing method of an ECS instance.
       *   - [ModifyPrepayInstanceSpec](https://help.aliyun.com/document_detail/2679706.html): changes the instance type of an ECS instance.
       *   - [ReplaceSystemDisk](https://help.aliyun.com/document_detail/2679771.html): replaces the operating system of an ECS instance.
       *
       * @param request ModifyInstanceAttachmentAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttachmentAttributesResponse
       */
      Models::ModifyInstanceAttachmentAttributesResponse modifyInstanceAttachmentAttributesWithOptions(const Models::ModifyInstanceAttachmentAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of the private pool for an Elastic Compute Service (ECS) instance.
       *
       * @description A private pool is generated after an elasticity assurance or a capacity reservation is created. The private pool is associated with information about the instances that use the private pool. You can specify whether to use a private pool when you create an ECS instance to match the instance with the associated elasticity assurance or capacity reservation.
       * - After you call this operation to modify the private pool attributes of an ECS instance, you do not need to restart the instance for the changes to take effect.
       * - When you call the following operations on an ECS instance, the system attempts to match the instance with active private pools. If the instance is already matched to a specified private pool, the call to an operation may fail when the private pool capacity is used up or the private pool expires. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the type of the private pool to `Open`.
       *   - [StartInstance](https://help.aliyun.com/document_detail/2679679.html): start an ECS instance that is stopped in economical mode.
       *   - [ReActivateInstances](https://help.aliyun.com/document_detail/2679707.html): reactivates an ECS instance that has expired or is reclaimed due to an overdue payment.
       *   - [ModifyInstanceChargeType](https://help.aliyun.com/document_detail/2679704.html): changes the billing method of an ECS instance.
       *   - [ModifyPrepayInstanceSpec](https://help.aliyun.com/document_detail/2679706.html): changes the instance type of an ECS instance.
       *   - [ReplaceSystemDisk](https://help.aliyun.com/document_detail/2679771.html): replaces the operating system of an ECS instance.
       *
       * @param request ModifyInstanceAttachmentAttributesRequest
       * @return ModifyInstanceAttachmentAttributesResponse
       */
      Models::ModifyInstanceAttachmentAttributesResponse modifyInstanceAttachmentAttributes(const Models::ModifyInstanceAttachmentAttributesRequest &request);

      /**
       * @summary Modifies some properties of an ECS instance, including the password, instance name, hostname, security group membership, MTU, and instance user data.
       *
       * @description Instances that are locked for security reasons do not support this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies some properties of an ECS instance, including the password, instance name, hostname, security group membership, MTU, and instance user data.
       *
       * @description Instances that are locked for security reasons do not support this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Changes the automatic release time of a pay-as-you-go or spot instance or cancels the automatic release of the instance.
       *
       * @param request ModifyInstanceAutoReleaseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoReleaseTimeResponse
       */
      Models::ModifyInstanceAutoReleaseTimeResponse modifyInstanceAutoReleaseTimeWithOptions(const Models::ModifyInstanceAutoReleaseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the automatic release time of a pay-as-you-go or spot instance or cancels the automatic release of the instance.
       *
       * @param request ModifyInstanceAutoReleaseTimeRequest
       * @return ModifyInstanceAutoReleaseTimeResponse
       */
      Models::ModifyInstanceAutoReleaseTimeResponse modifyInstanceAutoReleaseTime(const Models::ModifyInstanceAutoReleaseTimeRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of one or more subscription instances, helping you reduce the maintenance cost of resource expiration.
       *
       * @description **Before using this API, make sure you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS)**.
       * - Make sure your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. An error is returned if you call this API for pay-as-you-go instances.
       * - The auto-renewal deduction date is 9 days before the instance expires. The deduction starts at 08:00:00 (UTC+8).
       * - If the auto-deduction fails on the previous day, it will be retried at the scheduled time on the next day until the deduction succeeds or the instance is locked after expiration 9 days later.
       * <props="china">
       * - If the purchase duration of a newly created instance is one week, the auto-renewal deduction is made on the first day after the instance is created.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttributeWithOptions(const Models::ModifyInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of one or more subscription instances, helping you reduce the maintenance cost of resource expiration.
       *
       * @description **Before using this API, make sure you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/ecs/detail)<props="intl">[pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS)**.
       * - Make sure your account balance or credit limit is sufficient.
       * - Only subscription instances are supported. An error is returned if you call this API for pay-as-you-go instances.
       * - The auto-renewal deduction date is 9 days before the instance expires. The deduction starts at 08:00:00 (UTC+8).
       * - If the auto-deduction fails on the previous day, it will be retried at the scheduled time on the next day until the deduction succeeds or the instance is locked after expiration 9 days later.
       * <props="china">
       * - If the purchase duration of a newly created instance is one week, the auto-renewal deduction is made on the first day after the instance is created.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttribute(const Models::ModifyInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Changes the billing method of Elastic Compute Service (ECS) instances in batches.
       *
       * @description ### [](#)Precautions
       * - Before you call this operation, make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS.
       * - The instances must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state, and you have no overdue payments for the instances.
       * - After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the [ECS console](https://ecs.console.aliyun.com/) to pay for the order.
       * ### [](#)Considerations
       * - **Change the billing method from subscription to pay-as-you-go**:
       *   - After you change the billing method of an instance from subscription to pay-as-you-go, the new billing method remains in effect for the remaining lifecycle of the instance. The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are not refundable.
       *   - **Refund rule**: You have a quota for the total refund amount each month, and unused balance of this quota is not carried forward into the next month. After you use up the refund quota of the current month, you can change the billing method only in the next month. The refund amount incurred when you change the billing method is calculated based on the following formula: **Number of vCPUs × (Number of remaining days × 24 ± Number of remaining or elapsed hours)**. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * - **Change the billing method from pay-as-you-go to subscription**:
       *   - You can change the billing method of all data disks attached to an instance from pay-as-you-go to subscription.
       *   - This operation cannot be called for a pay-as-you-go instance that has an automatic release time set. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/49884.html).
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of Elastic Compute Service (ECS) instances in batches.
       *
       * @description ### [](#)Precautions
       * - Before you call this operation, make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS.
       * - The instances must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state, and you have no overdue payments for the instances.
       * - After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the [ECS console](https://ecs.console.aliyun.com/) to pay for the order.
       * ### [](#)Considerations
       * - **Change the billing method from subscription to pay-as-you-go**:
       *   - After you change the billing method of an instance from subscription to pay-as-you-go, the new billing method remains in effect for the remaining lifecycle of the instance. The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are not refundable.
       *   - **Refund rule**: You have a quota for the total refund amount each month, and unused balance of this quota is not carried forward into the next month. After you use up the refund quota of the current month, you can change the billing method only in the next month. The refund amount incurred when you change the billing method is calculated based on the following formula: **Number of vCPUs × (Number of remaining days × 24 ± Number of remaining or elapsed hours)**. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * - **Change the billing method from pay-as-you-go to subscription**:
       *   - You can change the billing method of all data disks attached to an instance from pay-as-you-go to subscription.
       *   - This operation cannot be called for a pay-as-you-go instance that has an automatic release time set. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/49884.html).
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the instance clock options.
       *
       * @description When you call this operation, note that:
       * - This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * - To modify the PtpStatus parameter, you must specify the parameter. The instance types that are supported. You can query the instance type list ([DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) ).
       *
       * @param request ModifyInstanceClockOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceClockOptionsResponse
       */
      Models::ModifyInstanceClockOptionsResponse modifyInstanceClockOptionsWithOptions(const Models::ModifyInstanceClockOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the instance clock options.
       *
       * @description When you call this operation, note that:
       * - This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * - To modify the PtpStatus parameter, you must specify the parameter. The instance types that are supported. You can query the instance type list ([DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) ).
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
       * @description This operation is used to modify the maintenance policy of an instance. The maintenance policy consists of the following maintenance attributes:
       * - Maintenance window: the time period that you specify for maintenance.
       * - Maintenance action: the action that you specify in response to instance shutdown.
       *
       * @param request ModifyInstanceMaintenanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintenanceAttributesResponse
       */
      Models::ModifyInstanceMaintenanceAttributesResponse modifyInstanceMaintenanceAttributesWithOptions(const Models::ModifyInstanceMaintenanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance attributes of an instance.
       *
       * @description This operation is used to modify the maintenance policy of an instance. The maintenance policy consists of the following maintenance attributes:
       * - Maintenance window: the time period that you specify for maintenance.
       * - Maintenance action: the action that you specify in response to instance shutdown.
       *
       * @param request ModifyInstanceMaintenanceAttributesRequest
       * @return ModifyInstanceMaintenanceAttributesResponse
       */
      Models::ModifyInstanceMaintenanceAttributesResponse modifyInstanceMaintenanceAttributes(const Models::ModifyInstanceMaintenanceAttributesRequest &request);

      /**
       * @summary Modifies the metadata access configurations of instances in a specific region, including whether to enable the metadata access channel and whether to forcefully use the security hardening mode to access instance metadata.
       *
       * @param request ModifyInstanceMetadataOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMetadataOptionsResponse
       */
      Models::ModifyInstanceMetadataOptionsResponse modifyInstanceMetadataOptionsWithOptions(const Models::ModifyInstanceMetadataOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metadata access configurations of instances in a specific region, including whether to enable the metadata access channel and whether to forcefully use the security hardening mode to access instance metadata.
       *
       * @param request ModifyInstanceMetadataOptionsRequest
       * @return ModifyInstanceMetadataOptionsResponse
       */
      Models::ModifyInstanceMetadataOptionsResponse modifyInstanceMetadataOptions(const Models::ModifyInstanceMetadataOptionsRequest &request);

      /**
       * @summary Modifies instance network configurations.
       *
       * @description 调用该接口时，您需要注意：
       * - 当前接口是异步接口。调用后返回异步任务 ID。通查查询异步任务结果来判断是否执行完成。
       * - 当前接口每次调用仅支持修改一个属性。如果修改多个属性，请分多次调用。
       * - 修改 BandwidthWeighting，需要对应的规格支持设置该参数。您可以通过 [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) 查询当前实例规格是否支持带宽权重及支持的带宽权重值。
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptionsWithOptions(const Models::ModifyInstanceNetworkOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies instance network configurations.
       *
       * @description 调用该接口时，您需要注意：
       * - 当前接口是异步接口。调用后返回异步任务 ID。通查查询异步任务结果来判断是否执行完成。
       * - 当前接口每次调用仅支持修改一个属性。如果修改多个属性，请分多次调用。
       * - 修改 BandwidthWeighting，需要对应的规格支持设置该参数。您可以通过 [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) 查询当前实例规格是否支持带宽权重及支持的带宽权重值。
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptions(const Models::ModifyInstanceNetworkOptionsRequest &request);

      /**
       * @summary Modifies the bandwidth configuration of an ECS instance, allocates a public IP address, or converts the network billing method. Both upgrades and downgrades are supported.
       *
       * @description -  When you modify the bandwidth configuration of a subscription (PrePaid) instance, a public IP address is automatically allocated if the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value.
       * -  When you modify the bandwidth configuration of a pay-as-you-go (PostPaid) instance, a public IP address is not automatically allocated if the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value. You need to set the `AllocatePublicIp` parameter to `true` to allocate a public IP address.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth of a single Alibaba Cloud account is subject to a limit. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *   
       * - Fees:
       *   
       *   - After the bandwidth is upgraded, the payment is automatically deducted by default. Make sure that your payment method has sufficient balance. Otherwise, an abnormal order is generated, and you can only cancel the order. If your account balance is insufficient, you can set the AutoPay parameter to false. In this case, a normal unpaid order is generated. You can log on to the ECS console to pay for the order.
       *   - After the bandwidth is downgraded, the price difference is refunded to the original payment method. Vouchers that have been used are not refundable.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpecWithOptions(const Models::ModifyInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth configuration of an ECS instance, allocates a public IP address, or converts the network billing method. Both upgrades and downgrades are supported.
       *
       * @description -  When you modify the bandwidth configuration of a subscription (PrePaid) instance, a public IP address is automatically allocated if the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value.
       * -  When you modify the bandwidth configuration of a pay-as-you-go (PostPaid) instance, a public IP address is not automatically allocated if the outbound public bandwidth (InternetMaxBandwidthOut) is upgraded from 0 Mbit/s to a non-zero value. You need to set the `AllocatePublicIp` parameter to `true` to allocate a public IP address.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth of a single Alibaba Cloud account is subject to a limit. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *   
       * - Fees:
       *   
       *   - After the bandwidth is upgraded, the payment is automatically deducted by default. Make sure that your payment method has sufficient balance. Otherwise, an abnormal order is generated, and you can only cancel the order. If your account balance is insufficient, you can set the AutoPay parameter to false. In this case, a normal unpaid order is generated. You can log on to the ECS console to pay for the order.
       *   - After the bandwidth is downgraded, the price difference is refunded to the original payment method. Vouchers that have been used are not refundable.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpec(const Models::ModifyInstanceNetworkSpecRequest &request);

      /**
       * @summary Modifies the instance type or public bandwidth of a pay-as-you-go ECS instance.
       *
       * @description <props="china">.
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**.
       * .
       * <props="intl">.
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**.
       * .
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types to which the current instance can be changed.
       * **Before you begin**.
       * - Your account must not have overdue payments.
       * - Each call can modify only one configuration at a time. You can modify only the instance type or adjust only the public bandwidth in a single request.
       * - The instance status must be **Running** (`Running`) or **Stopped** (`Stopped`) before you can adjust the public bandwidth. The change takes effect immediately.
       * - The instance status must be **Stopped** (`Stopped`) before you can modify the instance type. After the modification, you must [start the instance](https://help.aliyun.com/document_detail/25441.html) for the change to take effect.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the instance type or public bandwidth of a pay-as-you-go ECS instance.
       *
       * @description <props="china">.
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of ECS.**.
       * .
       * <props="intl">.
       * **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS.**.
       * .
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) to query the instance types to which the current instance can be changed.
       * **Before you begin**.
       * - Your account must not have overdue payments.
       * - Each call can modify only one configuration at a time. You can modify only the instance type or adjust only the public bandwidth in a single request.
       * - The instance status must be **Running** (`Running`) or **Stopped** (`Stopped`) before you can adjust the public bandwidth. The change takes effect immediately.
       * - The instance status must be **Stopped** (`Stopped`) before you can modify the instance type. After the modification, you must [start the instance](https://help.aliyun.com/document_detail/25441.html) for the change to take effect.
       * > In a single region, the total peak pay-by-bandwidth public bandwidth for a single Alibaba Cloud account is limited. For more information, see [Public bandwidth limits](~~25412#BandwidthQuota~~).
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Changes the Virtual Network Computing (VNC) password of an Elastic Compute Service (ECS) instance.
       *
       * @description - The VNC password must be six characters in length and can contain uppercase letters, lowercase letters, and digits.
       * - After you modify the VNC password of an ECS instance, take note of the following items:
       *   - If the instance is I/O optimized, the new password takes effect immediately without the need to restart the instance.
       *   - If the instance is not I/O optimized, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the ECS console or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswdWithOptions(const Models::ModifyInstanceVncPasswdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the Virtual Network Computing (VNC) password of an Elastic Compute Service (ECS) instance.
       *
       * @description - The VNC password must be six characters in length and can contain uppercase letters, lowercase letters, and digits.
       * - After you modify the VNC password of an ECS instance, take note of the following items:
       *   - If the instance is I/O optimized, the new password takes effect immediately without the need to restart the instance.
       *   - If the instance is not I/O optimized, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the ECS console or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswd(const Models::ModifyInstanceVncPasswdRequest &request);

      /**
       * @summary Changes the virtual private cloud (VPC), private IP address, security groups, or vSwitch of an Elastic Compute Service (ECS) instance located in a VPC.
       *
       * @description The ECS instance that you want to manage must be in the **Stopped** (`Stopped`) state.
       * - When you call this operation to change the private IP address or vSwitch of an ECS instance, take note of the following items:
       *   - If the instance is a new instance, you must restart the instance before you call this operation.
       *   - After the private IP address or vSwitch of the instance is changed, you must restart the instance before you can recall this operation.
       * - When you call this operation to change the VPC of an ECS instance, take note of the following items:
       *   - **ECS instance:**
       *     - The instance cannot be in the Locked, To Be Released, Expired, To Be Recycled, Expired and Being Recycled, or Overdue and Being Recycled state. For more information, see [Overview of instances](https://help.aliyun.com/document_detail/25380.html).
       *     - The instance cannot be associated with Server Load Balancer (SLB) instances.
       *     - The instance cannot be used in other Alibaba Cloud services. For example, the instance cannot be in the process of being migrated or having its VPC changed, or the databases deployed on the instance cannot be managed by Data Transmission Service (DTS).
       *   - **Network:**
       *     - The cut-through mode or the multi-elastic IP address (EIP)-to-elastic network interface (ENI) mode cannot be enabled for the ECS instance.
       *     - The ECS instance cannot be associated with a high-availability virtual IP address (HAVIP).
       *     - The vSwitch of the ECS instance cannot be associated with a custom route table.
       *     - Global Accelerator (GA) cannot be activated for the ECS instance.
       *     - Secondary ENIs cannot be attached to the ECS instance.
       *     - The ECS instance cannot be assigned an IPv6 address.
       *     - The primary ENI of the ECS instance cannot be associated with multiple IP addresses.
       *     - The vSwitch must belong to the new VPC.
       *     - The original and new vSwitches must reside in the same zone.
       *     - If you assign a private IP address to the primary ENI of the ECS instance, the private IP address must be an idle IP address within the CIDR block of the new vSwitch. If you do not assign a private IP address to the primary ENI of the ECS instance, a private IP address is randomly assigned to the ENI. Make sure that sufficient IP addresses are available in the CIDR block of the new vSwitch.
       *     - If you use a VPC that is shared by another Alibaba Cloud account with your account and want to change the security groups of the ECS instance, specify the security groups that you created in the VPC, instead of the security group created by the VPC owner, as the new security groups.
       *
       * @param request ModifyInstanceVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAttributeResponse
       */
      Models::ModifyInstanceVpcAttributeResponse modifyInstanceVpcAttributeWithOptions(const Models::ModifyInstanceVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the virtual private cloud (VPC), private IP address, security groups, or vSwitch of an Elastic Compute Service (ECS) instance located in a VPC.
       *
       * @description The ECS instance that you want to manage must be in the **Stopped** (`Stopped`) state.
       * - When you call this operation to change the private IP address or vSwitch of an ECS instance, take note of the following items:
       *   - If the instance is a new instance, you must restart the instance before you call this operation.
       *   - After the private IP address or vSwitch of the instance is changed, you must restart the instance before you can recall this operation.
       * - When you call this operation to change the VPC of an ECS instance, take note of the following items:
       *   - **ECS instance:**
       *     - The instance cannot be in the Locked, To Be Released, Expired, To Be Recycled, Expired and Being Recycled, or Overdue and Being Recycled state. For more information, see [Overview of instances](https://help.aliyun.com/document_detail/25380.html).
       *     - The instance cannot be associated with Server Load Balancer (SLB) instances.
       *     - The instance cannot be used in other Alibaba Cloud services. For example, the instance cannot be in the process of being migrated or having its VPC changed, or the databases deployed on the instance cannot be managed by Data Transmission Service (DTS).
       *   - **Network:**
       *     - The cut-through mode or the multi-elastic IP address (EIP)-to-elastic network interface (ENI) mode cannot be enabled for the ECS instance.
       *     - The ECS instance cannot be associated with a high-availability virtual IP address (HAVIP).
       *     - The vSwitch of the ECS instance cannot be associated with a custom route table.
       *     - Global Accelerator (GA) cannot be activated for the ECS instance.
       *     - Secondary ENIs cannot be attached to the ECS instance.
       *     - The ECS instance cannot be assigned an IPv6 address.
       *     - The primary ENI of the ECS instance cannot be associated with multiple IP addresses.
       *     - The vSwitch must belong to the new VPC.
       *     - The original and new vSwitches must reside in the same zone.
       *     - If you assign a private IP address to the primary ENI of the ECS instance, the private IP address must be an idle IP address within the CIDR block of the new vSwitch. If you do not assign a private IP address to the primary ENI of the ECS instance, a private IP address is randomly assigned to the ENI. Make sure that sufficient IP addresses are available in the CIDR block of the new vSwitch.
       *     - If you use a VPC that is shared by another Alibaba Cloud account with your account and want to change the security groups of the ECS instance, specify the security groups that you created in the VPC, instead of the security group created by the VPC owner, as the new security groups.
       *
       * @param request ModifyInstanceVpcAttributeRequest
       * @return ModifyInstanceVpcAttributeResponse
       */
      Models::ModifyInstanceVpcAttributeResponse modifyInstanceVpcAttribute(const Models::ModifyInstanceVpcAttributeRequest &request);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled command task, including modifying the content and execution frequency of the command and adding Elastic Compute Service (ECS) instances or Alibaba Cloud managed instances to the command task.
       *
       * @description - Supports modifying tasks with the following execution modes (refer to the `RepeatMode` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *   - Period: Execute periodically.
       *   - NextRebootOnly: Automatically execute the command the next time the instance starts.
       *   - EveryReboot: Automatically execute the command every time the instance starts.
       * - Supports modifying tasks in the following statuses (refer to the `InvocationStatus` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *   - Pending: The system is validating or sending the command. If at least one instance has a command execution status of Pending, the overall execution status is Pending.
       *   - Running: The command is running on an instance. If at least one instance has a command execution status of Running, the overall execution status is Running.
       *   - Scheduled: The scheduled command has been sent and is waiting to run. If at least one instance has a command execution status of Scheduled, the overall execution status is Scheduled.
       *   - Stopping: The task is being stopped. If at least one instance has a command execution status of Stopping, the overall execution status is Stopping.
       * - Before modifying the execution information of a scheduled task (including command content, Custom Parameters, and execution frequency), the Cloud Assistant Agent version on the involved ECS instances or managed instances must be higher than the following versions:
       *   - Linux: 2.2.3.541
       *   - Windows: 2.1.3.541
       *   - If the response returns the error code `InvalidOperation.CloudAssistantVersionUnsupported`, update the Cloud Assistant Agent to the latest version.
       * - When you execute a Cloud Assistant public command, you cannot modify the `CommandContent`.
       * - If you modify the `CommandContent` and create a task by invoking [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) with `KeepCommand` set to `true`, a new command will be created and retained permanently, consuming your Cloud Assistant command quota. In each Region, you can retain between 500 and 50,000 Cloud Assistant commands. You can request a quota increase. For more information about how to query and increase your quota, see [Quota Management](https://help.aliyun.com/document_detail/184116.html).
       *
       * @param tmpReq ModifyInvocationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInvocationAttributeResponse
       */
      Models::ModifyInvocationAttributeResponse modifyInvocationAttributeWithOptions(const Models::ModifyInvocationAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled command task, including modifying the content and execution frequency of the command and adding Elastic Compute Service (ECS) instances or Alibaba Cloud managed instances to the command task.
       *
       * @description - Supports modifying tasks with the following execution modes (refer to the `RepeatMode` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *   - Period: Execute periodically.
       *   - NextRebootOnly: Automatically execute the command the next time the instance starts.
       *   - EveryReboot: Automatically execute the command every time the instance starts.
       * - Supports modifying tasks in the following statuses (refer to the `InvocationStatus` value returned by [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html)):
       *   - Pending: The system is validating or sending the command. If at least one instance has a command execution status of Pending, the overall execution status is Pending.
       *   - Running: The command is running on an instance. If at least one instance has a command execution status of Running, the overall execution status is Running.
       *   - Scheduled: The scheduled command has been sent and is waiting to run. If at least one instance has a command execution status of Scheduled, the overall execution status is Scheduled.
       *   - Stopping: The task is being stopped. If at least one instance has a command execution status of Stopping, the overall execution status is Stopping.
       * - Before modifying the execution information of a scheduled task (including command content, Custom Parameters, and execution frequency), the Cloud Assistant Agent version on the involved ECS instances or managed instances must be higher than the following versions:
       *   - Linux: 2.2.3.541
       *   - Windows: 2.1.3.541
       *   - If the response returns the error code `InvalidOperation.CloudAssistantVersionUnsupported`, update the Cloud Assistant Agent to the latest version.
       * - When you execute a Cloud Assistant public command, you cannot modify the `CommandContent`.
       * - If you modify the `CommandContent` and create a task by invoking [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) with `KeepCommand` set to `true`, a new command will be created and retained permanently, consuming your Cloud Assistant command quota. In each Region, you can retain between 500 and 50,000 Cloud Assistant commands. You can request a quota increase. For more information about how to query and increase your quota, see [Quota Management](https://help.aliyun.com/document_detail/184116.html).
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
       * @description ## [](#)Usage notes
       * The ModifyManagedInstance operation can be called to change only the name of a single managed instance.
       *
       * @param request ModifyManagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyManagedInstanceResponse
       */
      Models::ModifyManagedInstanceResponse modifyManagedInstanceWithOptions(const Models::ModifyManagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a managed instance.
       *
       * @description ## [](#)Usage notes
       * The ModifyManagedInstance operation can be called to change only the name of a single managed instance.
       *
       * @param request ModifyManagedInstanceRequest
       * @return ModifyManagedInstanceResponse
       */
      Models::ModifyManagedInstanceResponse modifyManagedInstance(const Models::ModifyManagedInstanceRequest &request);

      /**
       * @summary Modify attributes of an elastic network interface (ENI), such as its number of queues, security group, queue depth, communication mode, and whether to retain the interface upon instance release.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttributeWithOptions(const Models::ModifyNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify attributes of an elastic network interface (ENI), such as its number of queues, security group, queue depth, communication mode, and whether to retain the interface upon instance release.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttribute(const Models::ModifyNetworkInterfaceAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyPhysicalConnectionAttribute is deprecated, please use Vpc::2016-04-28::ModifyPhysicalConnectionAttribute instead.
       *
       * @summary ModifyPhysicalConnectionAttribute
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttributeWithOptions(const Models::ModifyPhysicalConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyPhysicalConnectionAttribute is deprecated, please use Vpc::2016-04-28::ModifyPhysicalConnectionAttribute instead.
       *
       * @summary ModifyPhysicalConnectionAttribute
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttribute(const Models::ModifyPhysicalConnectionAttributeRequest &request);

      /**
       * @summary Updates an O&M window.
       *
       * @description Modifies the attributes of an O&M window. When the TargetResource parameter of an O&M window is set to associate ECS instances and underlying hardware risks are detected that require scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter of the O&M window. When the execution time of an O&M event is reached, the platform automatically performs the corresponding O&M operation based on the type of the O&M event.
       *
       * @param tmpReq ModifyPlanMaintenanceWindowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPlanMaintenanceWindowResponse
       */
      Models::ModifyPlanMaintenanceWindowResponse modifyPlanMaintenanceWindowWithOptions(const Models::ModifyPlanMaintenanceWindowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an O&M window.
       *
       * @description Modifies the attributes of an O&M window. When the TargetResource parameter of an O&M window is set to associate ECS instances and underlying hardware risks are detected that require scheduled O&M to mitigate, the execution time of the scheduled O&M is determined based on the time range specified by the TimePeriod parameter of the O&M window. When the execution time of an O&M event is reached, the platform automatically performs the corresponding O&M operation based on the type of the O&M event.
       *
       * @param request ModifyPlanMaintenanceWindowRequest
       * @return ModifyPlanMaintenanceWindowResponse
       */
      Models::ModifyPlanMaintenanceWindowResponse modifyPlanMaintenanceWindow(const Models::ModifyPlanMaintenanceWindowRequest &request);

      /**
       * @summary Modifies the name and entries of a port list. You can call this operation to add, modify, and remove entries for a port list.
       *
       * @param request ModifyPortRangeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortRangeListResponse
       */
      Models::ModifyPortRangeListResponse modifyPortRangeListWithOptions(const Models::ModifyPortRangeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and entries of a port list. You can call this operation to add, modify, and remove entries for a port list.
       *
       * @param request ModifyPortRangeListRequest
       * @return ModifyPortRangeListResponse
       */
      Models::ModifyPortRangeListResponse modifyPortRangeList(const Models::ModifyPortRangeListRequest &request);

      /**
       * @summary Modifies the name, description, or entries of a prefix list. You can add, modify, and delete entries in the prefix list.
       *
       * @description ## 接口说明
       * - 指定的 CIDR 地址块应当为标准形式。例如，10.0.0.0/8 是正确形式的 CIDR 地址块，而 10.0.0.1/8 是错误形式。更多信息，请参见[什么是 CIDR](~~40637#section-jua-0tj-q5m~~)。
       * - 新增或删除条目时，不能指定重复的 CIDR 地址块。例如：
       *   - 对于 IPv4 CIDR 地址块：不能同时指定两个 CIDR 地址块均为 10.0.0.0/8 的条目；不能同时指定两个 CIDR 地址块分别为 10.0.0.1/32 和 10.0.0.1 的条目，这两个地址块重复。
       *   - 对于 IPv6 CIDR 地址块：不能同时指定两个条目的 CIDR 地址块分别为 2001:fd01:0:0:0:0:0:0/32 和 2001:fd01::/32，这两个地址块重复。
       * - 新增条目的 CIDR 地址块不能与删除条目的 CIDR 地址块重复。例如，在您新增 CIDR 地址块为 10.0.0.0/8 的条目时，不能在待删除的条目中包含 CIDR 地址块 10.0.0.0/8。
       * - 若您需要修改条目的描述，需要指定条目的 CIDR 地址块（`AddEntry.N.Cidr`）和新的描述信息（`AddEntry.N.Description`）。
       *
       * @param request ModifyPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixListWithOptions(const Models::ModifyPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, or entries of a prefix list. You can add, modify, and delete entries in the prefix list.
       *
       * @description ## 接口说明
       * - 指定的 CIDR 地址块应当为标准形式。例如，10.0.0.0/8 是正确形式的 CIDR 地址块，而 10.0.0.1/8 是错误形式。更多信息，请参见[什么是 CIDR](~~40637#section-jua-0tj-q5m~~)。
       * - 新增或删除条目时，不能指定重复的 CIDR 地址块。例如：
       *   - 对于 IPv4 CIDR 地址块：不能同时指定两个 CIDR 地址块均为 10.0.0.0/8 的条目；不能同时指定两个 CIDR 地址块分别为 10.0.0.1/32 和 10.0.0.1 的条目，这两个地址块重复。
       *   - 对于 IPv6 CIDR 地址块：不能同时指定两个条目的 CIDR 地址块分别为 2001:fd01:0:0:0:0:0:0/32 和 2001:fd01::/32，这两个地址块重复。
       * - 新增条目的 CIDR 地址块不能与删除条目的 CIDR 地址块重复。例如，在您新增 CIDR 地址块为 10.0.0.0/8 的条目时，不能在待删除的条目中包含 CIDR 地址块 10.0.0.0/8。
       * - 若您需要修改条目的描述，需要指定条目的 CIDR 地址块（`AddEntry.N.Cidr`）和新的描述信息（`AddEntry.N.Description`）。
       *
       * @param request ModifyPrefixListRequest
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixList(const Models::ModifyPrefixListRequest &request);

      /**
       * @summary Modifies the instance type of a subscription ECS instance. You can upgrade or downgrade the instance type. The new instance type takes effect for the entire lifecycle of the instance.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods, [pricing](https://www.aliyun.com/price/product#/ecs/detail), and [downgrade refund rules](https://help.aliyun.com/document_detail/116043.html) of ECS.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods, [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [downgrade refund rules](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * This operation is asynchronous. The configuration change takes effect after approximately 5 to 10 seconds. Before you upgrade or downgrade ECS instance type of a subscription ECS instance, you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/2679954.html) to query ECS instance types to which the current instance can be changed.
       * **Precautions**
       *   - If the NVMe property of the source and target instance types are different (the `NvmeSupport` field returned by [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html)) and the operating system is Windows (the `OSType` field returned by [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html)), complete the [preventive measures](~~2978777#7de04a1c9fo50~~) before you perform the Upgrade/Downgrade.
       *   - Expired instances cannot be changed to a different instance type. Complete the renewal and try again.
       *   - Downgrade the instance type:
       *     - The instance must be in the **Stopped** (`Stopped`) state.
       *     - The price difference between the original and new instance types is refunded to your original billing method. Used vouchers are not refundable. The payer receives the refund.
       *     - The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) after the Upgrade/Downgrade.
       *   - Upgrade the instance type: 
       *     - The instance must be in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       *     - The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) or [restart the instance](https://help.aliyun.com/document_detail/25440.html).
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the instance type of a subscription ECS instance. You can upgrade or downgrade the instance type. The new instance type takes effect for the entire lifecycle of the instance.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods, [pricing](https://www.aliyun.com/price/product#/ecs/detail), and [downgrade refund rules](https://help.aliyun.com/document_detail/116043.html) of ECS.**
       * <props="intl">
       * **Before you call this operation, make sure that you fully understand the billing methods, [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [downgrade refund rules](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * This operation is asynchronous. The configuration change takes effect after approximately 5 to 10 seconds. Before you upgrade or downgrade ECS instance type of a subscription ECS instance, you can call [DescribeResourcesModification](https://help.aliyun.com/document_detail/2679954.html) to query ECS instance types to which the current instance can be changed.
       * **Precautions**
       *   - If the NVMe property of the source and target instance types are different (the `NvmeSupport` field returned by [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html)) and the operating system is Windows (the `OSType` field returned by [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html)), complete the [preventive measures](~~2978777#7de04a1c9fo50~~) before you perform the Upgrade/Downgrade.
       *   - Expired instances cannot be changed to a different instance type. Complete the renewal and try again.
       *   - Downgrade the instance type:
       *     - The instance must be in the **Stopped** (`Stopped`) state.
       *     - The price difference between the original and new instance types is refunded to your original billing method. Used vouchers are not refundable. The payer receives the refund.
       *     - The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) after the Upgrade/Downgrade.
       *   - Upgrade the instance type: 
       *     - The instance must be in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       *     - The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) or [restart the instance](https://help.aliyun.com/document_detail/25440.html).
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @summary Modifies the attributes of a reserved instance, such as the name and description of the instance.
       *
       * @param request ModifyReservedInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReservedInstanceAttributeResponse
       */
      Models::ModifyReservedInstanceAttributeResponse modifyReservedInstanceAttributeWithOptions(const Models::ModifyReservedInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a reserved instance, such as the name and description of the instance.
       *
       * @param request ModifyReservedInstanceAttributeRequest
       * @return ModifyReservedInstanceAttributeResponse
       */
      Models::ModifyReservedInstanceAttributeResponse modifyReservedInstanceAttribute(const Models::ModifyReservedInstanceAttributeRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of reserved instances. You can cancel or disable the auto-renewal feature for reserved instances.
       *
       * @param request ModifyReservedInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReservedInstanceAutoRenewAttributeResponse
       */
      Models::ModifyReservedInstanceAutoRenewAttributeResponse modifyReservedInstanceAutoRenewAttributeWithOptions(const Models::ModifyReservedInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of reserved instances. You can cancel or disable the auto-renewal feature for reserved instances.
       *
       * @param request ModifyReservedInstanceAutoRenewAttributeRequest
       * @return ModifyReservedInstanceAutoRenewAttributeResponse
       */
      Models::ModifyReservedInstanceAutoRenewAttributeResponse modifyReservedInstanceAutoRenewAttribute(const Models::ModifyReservedInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the configurations of a reserved instance, such as the instance type, quantity, and zone, to split, merge, or change the scope of the reserved instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to modify a reserved instance, the operation starts the modification process and returns the ID of the resulting new reserved instance. The original reserved instance enters the `Updating` state and then the `Inactive` state. At the same time, the resulting new reserved instance is generated and enters the Creating state and then the Active state. You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/2679781.html) operation to query the states of the reserved instance.
       * - You can modify the configurations of a reserved instance only if the reserved instance is in the **Active** state.
       * - Make sure that the [computing power](~~140660#2742f3844abzz~~) of the reserved instance remains unchanged before and after the modification. Otherwise, the modification fails.
       * - You cannot split, merge, or change the scope of a reserved instance at the same time.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## [](#)Sample requests
       * - **Sample request to split a reserved instance**: Split a regional reserved instance that is scoped to the China (Hangzhou) region and can match two pay-as-you-go instances of the ecs.g5.xlarge instance type into two regional reserved instances that are scoped to the China (Hangzhou) region and each can match one pay-as-you-go instance of the ecs.g5.large instance type:
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], //The ID of the reserved instance that you want to split.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName1", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.large", //The instance type that the new reserved instance can match.
       *     "Scope":"Region", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instance.
       *     "InstanceAmount":1 //The number of pay-as-you-go instances of the specified instance type that each new reserved instance can match.
       *   },
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName2",
       *     "InstanceType":"ecs.g5.large",
       *     "Scope":"Region",
       *     "InstanceAmount":1
       *   }
       * ]
       * ```
       * - **Sample request to merge reserved instance:**: Merge two zonal reserved instances that are scoped to Hangzhou Zone H and can match four pay-as-you-go instances of the ecs.g5.xlarge instance type into one zonal reserved instance that is scoped to Hangzhou Zone H and can match two pay-as-you-go instances of the ecs.g5.4xlarge instance type:
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], //The IDs of the reserved instances that you want to merge.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.4xlarge", //The instance type that the new reserved instance can match.
       *     "Scope":"Zone", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instances.
       *     "ZoneId":"cn-hangzhou-h", //
       *     "InstanceAmount":2 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *   }
       * ]
       * ```
       * - **Sample request to change the scope of a reserved instance**: Change a regional reserved instance that is scoped to Hangzhou Zone H and can match six pay-as-you-go instances of the ecs.g5.xlarge instance type to a regional reserved instance that is scoped to the China (Hangzhou) region and can match three pay-as-you-go instances of the ecs.g5.2xlarge instance type.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], //The ID of the reserved instance whose scope you want to change.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.2xlarge", //The instance type that the new reserved instance can match.
       *     "Scope":"Region", //The scope level of the new reserved instance.
       *     "InstanceAmount":3 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
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
       * @summary Modifies the configurations of a reserved instance, such as the instance type, quantity, and zone, to split, merge, or change the scope of the reserved instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to modify a reserved instance, the operation starts the modification process and returns the ID of the resulting new reserved instance. The original reserved instance enters the `Updating` state and then the `Inactive` state. At the same time, the resulting new reserved instance is generated and enters the Creating state and then the Active state. You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/2679781.html) operation to query the states of the reserved instance.
       * - You can modify the configurations of a reserved instance only if the reserved instance is in the **Active** state.
       * - Make sure that the [computing power](~~140660#2742f3844abzz~~) of the reserved instance remains unchanged before and after the modification. Otherwise, the modification fails.
       * - You cannot split, merge, or change the scope of a reserved instance at the same time.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## [](#)Sample requests
       * - **Sample request to split a reserved instance**: Split a regional reserved instance that is scoped to the China (Hangzhou) region and can match two pay-as-you-go instances of the ecs.g5.xlarge instance type into two regional reserved instances that are scoped to the China (Hangzhou) region and each can match one pay-as-you-go instance of the ecs.g5.large instance type:
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], //The ID of the reserved instance that you want to split.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName1", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.large", //The instance type that the new reserved instance can match.
       *     "Scope":"Region", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instance.
       *     "InstanceAmount":1 //The number of pay-as-you-go instances of the specified instance type that each new reserved instance can match.
       *   },
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName2",
       *     "InstanceType":"ecs.g5.large",
       *     "Scope":"Region",
       *     "InstanceAmount":1
       *   }
       * ]
       * ```
       * - **Sample request to merge reserved instance:**: Merge two zonal reserved instances that are scoped to Hangzhou Zone H and can match four pay-as-you-go instances of the ecs.g5.xlarge instance type into one zonal reserved instance that is scoped to Hangzhou Zone H and can match two pay-as-you-go instances of the ecs.g5.4xlarge instance type:
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], //The IDs of the reserved instances that you want to merge.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.4xlarge", //The instance type that the new reserved instance can match.
       *     "Scope":"Zone", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instances.
       *     "ZoneId":"cn-hangzhou-h", //
       *     "InstanceAmount":2 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *   }
       * ]
       * ```
       * - **Sample request to change the scope of a reserved instance**: Change a regional reserved instance that is scoped to Hangzhou Zone H and can match six pay-as-you-go instances of the ecs.g5.xlarge instance type to a regional reserved instance that is scoped to the China (Hangzhou) region and can match three pay-as-you-go instances of the ecs.g5.2xlarge instance type.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", //The ID of the region.
       * "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], //The ID of the reserved instance whose scope you want to change.
       * "Configuration":[
       *   {
       *     "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *     "InstanceType":"ecs.g5.2xlarge", //The instance type that the new reserved instance can match.
       *     "Scope":"Region", //The scope level of the new reserved instance.
       *     "InstanceAmount":3 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
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
       * @description -  Advanced security groups do not support modifications to the intra-group connectivity policy. The default policy is **internal isolation**.
       * -  You can call [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) to query the current intra-group connectivity policy of a security group.
       * -  When the intra-group connectivity policy of a security group is set to **intra-group connectivity**, other custom access rules are ignored, and all instances in custom security group are connected over the internal network by default.  
       * -  When the intra-group connectivity policy of a security group is set to **internal isolation**, all instances in custom security group are disconnected over the internal network by default if no other access rules are added. However, you can customize security group rules to change the internal network status. For example, you can call [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) to enable network connectivity between two ECS instances in custom security group.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicyWithOptions(const Models::ModifySecurityGroupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intra-group connectivity policy of a basic security group.
       *
       * @description -  Advanced security groups do not support modifications to the intra-group connectivity policy. The default policy is **internal isolation**.
       * -  You can call [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) to query the current intra-group connectivity policy of a security group.
       * -  When the intra-group connectivity policy of a security group is set to **intra-group connectivity**, other custom access rules are ignored, and all instances in custom security group are connected over the internal network by default.  
       * -  When the intra-group connectivity policy of a security group is set to **internal isolation**, all instances in custom security group are disconnected over the internal network by default if no other access rules are added. However, you can customize security group rules to change the internal network status. For example, you can call [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) to enable network connectivity between two ECS instances in custom security group.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicy(const Models::ModifySecurityGroupPolicyRequest &request);

      /**
       * @summary Modifies an inbound security group rule of a specified security group.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, take note of the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field value from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
       *
       * @param request ModifySecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupRuleResponse
       */
      Models::ModifySecurityGroupRuleResponse modifySecurityGroupRuleWithOptions(const Models::ModifySecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an inbound security group rule of a specified security group.
       *
       * @description When you modify a security group rule by specifying the security group rule ID, take note of the following limits:
       * - The authorization object of a security group rule can be an IPv4 Classless Inter-Domain Routing (CIDR) block (or IP address), an IPv6 CIDR block (or IP address), a security group, or a prefix list. You cannot use this operation to change the type of the authorization object of an existing security group rule. For example, if the original authorization object type is an IPv4 CIDR block, you can change it to another IPv4 CIDR block (or IP address), but you cannot change it to an IPv6 CIDR block (or IP address), a security group, or a prefix list.
       * - You cannot change a field value from a non-empty value to an empty value. To modify security group rules in this case, increase a new rule and then delete the current rule.
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
       * @summary Modifies the snapshot type. You can call this operation to convert a standard snapshot to an archive snapshot.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/disk/detail/disk) of archive snapshots.**
       * - Archive snapshots cannot be reverted to standard snapshots.
       * - A standard snapshot must have been retained for at least 14 days after creation before it can be archived.
       * - Shared snapshots, snapshots managed by cloud services, and snapshots in CloudBox cannot be archived.
       *
       * @param request ModifySnapshotCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotCategoryResponse
       */
      Models::ModifySnapshotCategoryResponse modifySnapshotCategoryWithOptions(const Models::ModifySnapshotCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the snapshot type. You can call this operation to convert a standard snapshot to an archive snapshot.
       *
       * @description <props="china">
       * **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/disk/detail/disk) of archive snapshots.**
       * - Archive snapshots cannot be reverted to standard snapshots.
       * - A standard snapshot must have been retained for at least 14 days after creation before it can be archived.
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
       * @summary 修改计划内运维事件属性
       *
       * @description ## 接口说明
       * - 只能修改状态为Scheduled的计划内运维事件。
       * - 传入的NotBefore不早于当前时间。
       * -  传入的NotBefore不晚于事件产生时初始的计划执行时间。
       *
       * @param request ModifySystemEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySystemEventAttributeResponse
       */
      Models::ModifySystemEventAttributeResponse modifySystemEventAttributeWithOptions(const Models::ModifySystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计划内运维事件属性
       *
       * @description ## 接口说明
       * - 只能修改状态为Scheduled的计划内运维事件。
       * - 传入的NotBefore不早于当前时间。
       * -  传入的NotBefore不晚于事件产生时初始的计划执行时间。
       *
       * @param request ModifySystemEventAttributeRequest
       * @return ModifySystemEventAttributeResponse
       */
      Models::ModifySystemEventAttributeResponse modifySystemEventAttribute(const Models::ModifySystemEventAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary Modifies the default user-level attributes.
       *
       * @param request ModifyUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserBusinessBehaviorResponse
       */
      Models::ModifyUserBusinessBehaviorResponse modifyUserBusinessBehaviorWithOptions(const Models::ModifyUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary Modifies the default user-level attributes.
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
       * @summary ModifyVSwitchAttribute
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVSwitchAttribute is deprecated, please use Vpc::2016-04-28::ModifyVSwitchAttribute instead.
       *
       * @summary ModifyVSwitchAttribute
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyVirtualBorderRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVirtualBorderRouterAttribute instead.
       *
       * @summary ModifyVirtualBorderRouterAttribute
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttributeWithOptions(const Models::ModifyVirtualBorderRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVirtualBorderRouterAttribute is deprecated, please use Vpc::2016-04-28::ModifyVirtualBorderRouterAttribute instead.
       *
       * @summary ModifyVirtualBorderRouterAttribute
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
       * @summary Activate the snapshot service.
       *
       * @param request OpenSnapshotServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenSnapshotServiceResponse
       */
      Models::OpenSnapshotServiceResponse openSnapshotServiceWithOptions(const Models::OpenSnapshotServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activate the snapshot service.
       *
       * @param request OpenSnapshotServiceRequest
       * @return OpenSnapshotServiceResponse
       */
      Models::OpenSnapshotServiceResponse openSnapshotService(const Models::OpenSnapshotServiceRequest &request);

      /**
       * @summary Purchases an elasticity assurance that is not in the Active state and for which resources are prepared.
       *
       * @description Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh?spm=5176.28117011.nav-v2-dropdown-language.exp-location-zh.9ae4165bF98IHz&_p_lc=1) of elasticity assurances.
       * Before you purchase an elasticity assurance, you can call the [DescribeElasticityAssurances](https://help.aliyun.com/document_detail/2679748.html) operation to query the elasticity assurances that you can purchase.
       *
       * @param request PurchaseElasticityAssuranceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseElasticityAssuranceResponse
       */
      Models::PurchaseElasticityAssuranceResponse purchaseElasticityAssuranceWithOptions(const Models::PurchaseElasticityAssuranceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases an elasticity assurance that is not in the Active state and for which resources are prepared.
       *
       * @description Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh?spm=5176.28117011.nav-v2-dropdown-language.exp-location-zh.9ae4165bF98IHz&_p_lc=1) of elasticity assurances.
       * Before you purchase an elasticity assurance, you can call the [DescribeElasticityAssurances](https://help.aliyun.com/document_detail/2679748.html) operation to query the elasticity assurances that you can purchase.
       *
       * @param request PurchaseElasticityAssuranceRequest
       * @return PurchaseElasticityAssuranceResponse
       */
      Models::PurchaseElasticityAssuranceResponse purchaseElasticityAssurance(const Models::PurchaseElasticityAssuranceRequest &request);

      /**
       * @summary Purchases a regional or zonal reserved instance to offset the bills of pay-as-you-go Elastic Compute Service (ECS) instances.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Before you call this operation, make sure that you are familiar with the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * - You can retain up to 20 regional reserved instances in all regions per Alibaba Cloud account.
       * - You can retain up to 20 zonal reserved instances per zone per Alibaba Cloud account.
       * ## [](#)Sample requests
       * - Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset the bills of three ecs.g5.large Linux pay-as-you-go instances.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", // Specify the China (Hangzhou) region."InstanceType":"ecs.g5.large", // Specify the instance type."Scope":"Region", // Set the scope of the reserved instance to regional."InstanceAmount":3, // Specify the reserved instance to match three pay-as-you-go instances of the same instance type."OfferingType":"All Upfront", // Specify the payment option. In this example, the default value is used, which is All Upfront."Platform":"Linux", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Linux or Unix-like operating system is used."Period":1, // Specify the term of the reserved instance. In this example, the one-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       * - Purchase a two-year zonal reserved instance in Hangzhou Zone H to offset the bills of five ecs.g5.large Windows pay-as-you-go instances.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou",
       * "ZoneId":"cn-hangzhou-h", // Specify Hangzhou Zone H."InstanceType":"ecs.g5.large",
       * "Scope":"Zone", // Set the scope of the reserved instance to zonal."InstanceAmount":5, // Specify the reserved instance to match five pay-as-you-go instances of the same instance type."OfferingType":"All Upfront",
       * "Platform":"Windows", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Windows operating system is used."Period":2, // Specify the term of the reserved instance. In this example, the two-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       *
       * @param request PurchaseReservedInstancesOfferingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseReservedInstancesOfferingResponse
       */
      Models::PurchaseReservedInstancesOfferingResponse purchaseReservedInstancesOfferingWithOptions(const Models::PurchaseReservedInstancesOfferingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a regional or zonal reserved instance to offset the bills of pay-as-you-go Elastic Compute Service (ECS) instances.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - Before you call this operation, make sure that you are familiar with the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * - You can retain up to 20 regional reserved instances in all regions per Alibaba Cloud account.
       * - You can retain up to 20 zonal reserved instances per zone per Alibaba Cloud account.
       * ## [](#)Sample requests
       * - Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset the bills of three ecs.g5.large Linux pay-as-you-go instances.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou", // Specify the China (Hangzhou) region."InstanceType":"ecs.g5.large", // Specify the instance type."Scope":"Region", // Set the scope of the reserved instance to regional."InstanceAmount":3, // Specify the reserved instance to match three pay-as-you-go instances of the same instance type."OfferingType":"All Upfront", // Specify the payment option. In this example, the default value is used, which is All Upfront."Platform":"Linux", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Linux or Unix-like operating system is used."Period":1, // Specify the term of the reserved instance. In this example, the one-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       * - Purchase a two-year zonal reserved instance in Hangzhou Zone H to offset the bills of five ecs.g5.large Windows pay-as-you-go instances.
       * <!---->
       * ```
       * "RegionId":"cn-hangzhou",
       * "ZoneId":"cn-hangzhou-h", // Specify Hangzhou Zone H."InstanceType":"ecs.g5.large",
       * "Scope":"Zone", // Set the scope of the reserved instance to zonal."InstanceAmount":5, // Specify the reserved instance to match five pay-as-you-go instances of the same instance type."OfferingType":"All Upfront",
       * "Platform":"Windows", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Windows operating system is used."Period":2, // Specify the term of the reserved instance. In this example, the two-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * ```
       *
       * @param request PurchaseReservedInstancesOfferingRequest
       * @return PurchaseReservedInstancesOfferingResponse
       */
      Models::PurchaseReservedInstancesOfferingResponse purchaseReservedInstancesOffering(const Models::PurchaseReservedInstancesOfferingRequest &request);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description \\*\\*Before you call this operation, make sure that you understand the [billing methods](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of SCUs.
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnitWithOptions(const Models::PurchaseStorageCapacityUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description \\*\\*Before you call this operation, make sure that you understand the [billing methods](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of SCUs.
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnit(const Models::PurchaseStorageCapacityUnitRequest &request);

      /**
       * @summary Restarts a pay-as-you-go ECS instance that has expired or been recycled due to an overdue payment.
       *
       * @description After you settle the overdue bill for a pay-as-you-go instance, you do not need to call this operation to activate the instance. The system automatically restarts the instance and restores it to the state before the overdue payment. Automatic restarts may occasionally fail. Check whether the automatic restart succeeds. If the automatic restart fails, call this operation to manually restart the instance.
       * <props="china">- After you settle the overdue bill, the total value of your Alibaba Cloud account balance (cash balance) and vouchers must be at least CNY 100.00. Otherwise, the instance cannot be restarted.
       * <props="china">- The instance must be in the **expired** (`Stopped`) or **being recycled due to overdue payment** (`Stopped`) state.
       * <props="intl">- The instance must be in the **expired** (`Stopped`) state.
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ReActivateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstancesWithOptions(const Models::ReActivateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a pay-as-you-go ECS instance that has expired or been recycled due to an overdue payment.
       *
       * @description After you settle the overdue bill for a pay-as-you-go instance, you do not need to call this operation to activate the instance. The system automatically restarts the instance and restores it to the state before the overdue payment. Automatic restarts may occasionally fail. Check whether the automatic restart succeeds. If the automatic restart fails, call this operation to manually restart the instance.
       * <props="china">- After you settle the overdue bill, the total value of your Alibaba Cloud account balance (cash balance) and vouchers must be at least CNY 100.00. Otherwise, the instance cannot be restarted.
       * <props="china">- The instance must be in the **expired** (`Stopped`) or **being recycled due to overdue payment** (`Stopped`) state.
       * <props="intl">- The instance must be in the **expired** (`Stopped`) state.
       * - Instances that are locked for security reasons cannot be started by calling this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ReActivateInstancesRequest
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstances(const Models::ReActivateInstancesRequest &request);

      /**
       * @summary Reinitializes a disk to its initial state when it was created.
       *
       * @description When you call this operation, take note of the following items:
       * - The disk must be in the **In Use** (`In_use`) state, and the ECS instance to which the disk is attached must be in the **Stopped** (`Stopped`) state.
       * - You cannot reinitialize a disk that is attached to an instance before the instance starts for the first time.
       * - You cannot reinitialize a disk that has local snapshots.
       * <props="china">- You cannot reinitialize a disk that has the multi-attach feature enabled.
       * - For a system disk, the disk is reinitialized to the initial state of the image. If the source image used to create the disk has been deleted, the disk cannot be reinitialized.
       * - For a data disk that was created from scratch, the disk is reinitialized to an empty disk. For a data disk that was created from a snapshot, the disk is reinitialized to the snapshot state. If the source snapshot has been deleted, the disk cannot be reinitialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDiskWithOptions(const Models::ReInitDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinitializes a disk to its initial state when it was created.
       *
       * @description When you call this operation, take note of the following items:
       * - The disk must be in the **In Use** (`In_use`) state, and the ECS instance to which the disk is attached must be in the **Stopped** (`Stopped`) state.
       * - You cannot reinitialize a disk that is attached to an instance before the instance starts for the first time.
       * - You cannot reinitialize a disk that has local snapshots.
       * <props="china">- You cannot reinitialize a disk that has the multi-attach feature enabled.
       * - For a system disk, the disk is reinitialized to the initial state of the image. If the source image used to create the disk has been deleted, the disk cannot be reinitialized.
       * - For a data disk that was created from scratch, the disk is reinitialized to an empty disk. For a data disk that was created from a snapshot, the disk is reinitialized to the snapshot state. If the source snapshot has been deleted, the disk cannot be reinitialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDisk(const Models::ReInitDiskRequest &request);

      /**
       * @summary Restarts an Elastic Compute Service (ECS) instance.
       *
       * @description 该接口为异步接口，实例的重启不是立即完成的，成功调用后，实例会先进入启动中（`Starting`）状态，你可以调用 [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) 查看实例状态，当返回的状态为`Running`时代表重启成功。
       * ### 使用须知
       * - 被安全锁定的实例不能通过调用该接口重启。更多信息，请参见[资源安全锁定对调用 API 的影响](https://help.aliyun.com/document_detail/25695.html)。
       * - 您只能重启状态为**运行中**（`Running`）的 ECS 实例。
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an Elastic Compute Service (ECS) instance.
       *
       * @description 该接口为异步接口，实例的重启不是立即完成的，成功调用后，实例会先进入启动中（`Starting`）状态，你可以调用 [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) 查看实例状态，当返回的状态为`Running`时代表重启成功。
       * ### 使用须知
       * - 被安全锁定的实例不能通过调用该接口重启。更多信息，请参见[资源安全锁定对调用 API 的影响](https://help.aliyun.com/document_detail/25695.html)。
       * - 您只能重启状态为**运行中**（`Running`）的 ECS 实例。
       *
       * @param request RebootInstanceRequest
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstance(const Models::RebootInstanceRequest &request);

      /**
       * @summary Restarts Elastic Compute Service (ECS) instances. When you call this operation, you can configure parameters to specify a batch operation mode and whether to forcefully restart the instances.
       *
       * @description 该接口为异步接口，实例的重启不是立即完成的，成功调用后，实例会先进入启动中（`Starting`）状态，你可以调用 [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) 查看实例状态，当返回的状态为`Running`时代表重启成功。
       * ### 使用须知
       * - 被安全锁定的实例不能通过调用该接口重启。更多信息，请参见[资源安全锁定对调用 API 的影响](https://help.aliyun.com/document_detail/25695.html)。
       * - ECS 实例的状态必须为**运行中**（`Running`）。
       *
       * @param request RebootInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstancesWithOptions(const Models::RebootInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts Elastic Compute Service (ECS) instances. When you call this operation, you can configure parameters to specify a batch operation mode and whether to forcefully restart the instances.
       *
       * @description 该接口为异步接口，实例的重启不是立即完成的，成功调用后，实例会先进入启动中（`Starting`）状态，你可以调用 [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) 查看实例状态，当返回的状态为`Running`时代表重启成功。
       * ### 使用须知
       * - 被安全锁定的实例不能通过调用该接口重启。更多信息，请参见[资源安全锁定对调用 API 的影响](https://help.aliyun.com/document_detail/25695.html)。
       * - ECS 实例的状态必须为**运行中**（`Running`）。
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
       * @summary Migrates Elastic Compute Service (ECS) instances from a failed dedicated host.
       *
       * @description If a dedicated host is in the `UnderAssessment` state, we recommend that you call this operation to migrate ECS instances away from the dedicated host to prevent permanent failures. You can call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the status of a dedicated host.
       *
       * @param request RedeployDedicatedHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployDedicatedHostResponse
       */
      Models::RedeployDedicatedHostResponse redeployDedicatedHostWithOptions(const Models::RedeployDedicatedHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates Elastic Compute Service (ECS) instances from a failed dedicated host.
       *
       * @description If a dedicated host is in the `UnderAssessment` state, we recommend that you call this operation to migrate ECS instances away from the dedicated host to prevent permanent failures. You can call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the status of a dedicated host.
       *
       * @param request RedeployDedicatedHostRequest
       * @return RedeployDedicatedHostResponse
       */
      Models::RedeployDedicatedHostResponse redeployDedicatedHost(const Models::RedeployDedicatedHostRequest &request);

      /**
       * @summary Invokes the RedeployInstance operation to redeploy an ECS instance when the ECS instance receives a system event notification.
       *
       * @description ## Operation description
       * RedeployInstance is an asynchronous invocation that restarts and migrates an instance. After the redeployment succeeds, the instance enters the Running state. If the redeployment fails, the instance is returned to the original physical server and recovers to the state before the redeployment.
       * When you invoke this operation, take note of the following items:
       * - The target instance must be in the Running or Stopped state. The instance status changes after the operation is invoked:
       *     - An instance in the Running (`Running`) state enters the Stopping (`Stopping`) state.
       *     - An instance in the Stopped (`Stopped`) state enters the Starting (`Starting`) state.
       * - Instances on dedicated hosts cannot be redeployed.
       * - If the OperationLocks of an instance is marked with `"LockReason": "security"`, the instance cannot be redeployed.
       * - Simulated events created by invoking CreateSimulatedSystemEvent cannot be responded to.
       * - During the flow of isolating a local disk in a system event, you can also invoke RedeployInstance if the damaged local disk has been isolated but the SystemMaintenance.RebootAndReInitErrorDisk event has not been issued. For more information, see [Overview of system events for instances with local disks](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the system event types and event states that RedeployInstance can respond to.
       * | Event name and parameter | Event status |
       * | --- | --- |
       * | Instance restart due to system maintenance (SystemMaintenance.Reboot) | Inquiring, Scheduled |
       * | Instance redeployment due to system maintenance (SystemMaintenance.Redeploy) | Inquiring, Scheduled |
       * | Instance restart and damaged disk replacement due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk) | Inquiring |
       * | Instance restart and damaged disk reinitialization due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk) | Inquiring |
       * | Instance redeployment due to system fault (SystemFailure.Redeploy) | Inquiring |
       * | For ECS instances with local disks only: instance restart due to system fault (SystemFailure.Reboot) | Executing |
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
       * RedeployInstance is an asynchronous invocation that restarts and migrates an instance. After the redeployment succeeds, the instance enters the Running state. If the redeployment fails, the instance is returned to the original physical server and recovers to the state before the redeployment.
       * When you invoke this operation, take note of the following items:
       * - The target instance must be in the Running or Stopped state. The instance status changes after the operation is invoked:
       *     - An instance in the Running (`Running`) state enters the Stopping (`Stopping`) state.
       *     - An instance in the Stopped (`Stopped`) state enters the Starting (`Starting`) state.
       * - Instances on dedicated hosts cannot be redeployed.
       * - If the OperationLocks of an instance is marked with `"LockReason": "security"`, the instance cannot be redeployed.
       * - Simulated events created by invoking CreateSimulatedSystemEvent cannot be responded to.
       * - During the flow of isolating a local disk in a system event, you can also invoke RedeployInstance if the damaged local disk has been isolated but the SystemMaintenance.RebootAndReInitErrorDisk event has not been issued. For more information, see [Overview of system events for instances with local disks](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the system event types and event states that RedeployInstance can respond to.
       * | Event name and parameter | Event status |
       * | --- | --- |
       * | Instance restart due to system maintenance (SystemMaintenance.Reboot) | Inquiring, Scheduled |
       * | Instance redeployment due to system maintenance (SystemMaintenance.Redeploy) | Inquiring, Scheduled |
       * | Instance restart and damaged disk replacement due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk) | Inquiring |
       * | Instance restart and damaged disk reinitialization due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk) | Inquiring |
       * | Instance redeployment due to system fault (SystemFailure.Redeploy) | Inquiring |
       * | For ECS instances with local disks only: instance restart due to system fault (SystemFailure.Reboot) | Executing |
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
       * @description If the release mode of a capacity reservation that takes effect immediately is set to manual release, you can call this operation to release the capacity reservation.
       *
       * @param request ReleaseCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseCapacityReservationResponse
       */
      Models::ReleaseCapacityReservationResponse releaseCapacityReservationWithOptions(const Models::ReleaseCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a capacity reservation.
       *
       * @description If the release mode of a capacity reservation that takes effect immediately is set to manual release, you can call this operation to release the capacity reservation.
       *
       * @param request ReleaseCapacityReservationRequest
       * @return ReleaseCapacityReservationResponse
       */
      Models::ReleaseCapacityReservationResponse releaseCapacityReservation(const Models::ReleaseCapacityReservationRequest &request);

      /**
       * @summary Releases a pay-as-you-go Dedicated Host or an expired subscription Dedicated Host.
       *
       * @description ## Usage notes
       * Before you release a pay-as-you-go dedicated host, make sure that no ECS instances are deployed on the dedicated host.
       *
       * @param request ReleaseDedicatedHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseDedicatedHostResponse
       */
      Models::ReleaseDedicatedHostResponse releaseDedicatedHostWithOptions(const Models::ReleaseDedicatedHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go Dedicated Host or an expired subscription Dedicated Host.
       *
       * @description ## Usage notes
       * Before you release a pay-as-you-go dedicated host, make sure that no ECS instances are deployed on the dedicated host.
       *
       * @param request ReleaseDedicatedHostRequest
       * @return ReleaseDedicatedHostResponse
       */
      Models::ReleaseDedicatedHostResponse releaseDedicatedHost(const Models::ReleaseDedicatedHostRequest &request);

      /**
       * @deprecated OpenAPI ReleaseEipAddress is deprecated, please use Vpc::2016-04-28::ReleaseEipAddress instead.
       *
       * @summary ReleaseEipAddress
       *
       * @param request ReleaseEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddressWithOptions(const Models::ReleaseEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ReleaseEipAddress is deprecated, please use Vpc::2016-04-28::ReleaseEipAddress instead.
       *
       * @summary ReleaseEipAddress
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
       * @summary Calls RemoveTags to unbind one or more tags from resources such as instances, disks, snapshots, images, and security groups.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveTags is deprecated, please use Ecs::2014-05-26::UntagResources instead.
       *
       * @summary Calls RemoveTags to unbind one or more tags from resources such as instances, disks, snapshots, images, and security groups.
       *
       * @param request RemoveTagsRequest
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTags(const Models::RemoveTagsRequest &request);

      /**
       * @summary Renews one or more subscription dedicated hosts.
       *
       * @description ## [](#)Usage notes
       * When you renew subscription dedicated hosts, vouchers are used first by default. Make sure that your account supports credit card payments or balance payments.
       *
       * @param request RenewDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDedicatedHostsResponse
       */
      Models::RenewDedicatedHostsResponse renewDedicatedHostsWithOptions(const Models::RenewDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews one or more subscription dedicated hosts.
       *
       * @description ## [](#)Usage notes
       * When you renew subscription dedicated hosts, vouchers are used first by default. Make sure that your account supports credit card payments or balance payments.
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
       * @summary Renews a subscription Elastic Compute Service (ECS) instance. You can specify a renewal period or renew the instance to a unified expiration date.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS**.
       * - Make sure that your account balance or credit balance is sufficient.
       * - Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * - You must specify the renewal period-related parameter pair (`Period` and `PeriodUnit`) or `ExpectedRenewDay`, but not both.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Elastic Compute Service (ECS) instance. You can specify a renewal period or renew the instance to a unified expiration date.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS**.
       * - Make sure that your account balance or credit balance is sufficient.
       * - Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * - You must specify the renewal period-related parameter pair (`Period` and `PeriodUnit`) or `ExpectedRenewDay`, but not both.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews one or more reserved instances. When you renew reserved instances, you can specify a validity period (renewal period) and whether to enable auto-renewal for the reserved instances.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - You can manually renew reserved instances or enable auto-renewal for reserved instances. For more information, see the [Renewal](~~100371#53bfc50b78sta~~) section of the "Reserved instances" topic.
       * - You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) operation to query the reserved instances that you purchased.
       * - You can call this operation to enable auto-renewal for reserved instances but cannot call this operation to disable auto-renewal for reserved instances. To disable auto-renewal for a reserved instance, call the [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) operation.
       *
       * @param request RenewReservedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewReservedInstancesResponse
       */
      Models::RenewReservedInstancesResponse renewReservedInstancesWithOptions(const Models::RenewReservedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews one or more reserved instances. When you renew reserved instances, you can specify a validity period (renewal period) and whether to enable auto-renewal for the reserved instances.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * - You can manually renew reserved instances or enable auto-renewal for reserved instances. For more information, see the [Renewal](~~100371#53bfc50b78sta~~) section of the "Reserved instances" topic.
       * - You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) operation to query the reserved instances that you purchased.
       * - You can call this operation to enable auto-renewal for reserved instances but cannot call this operation to disable auto-renewal for reserved instances. To disable auto-renewal for a reserved instance, call the [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) operation.
       *
       * @param request RenewReservedInstancesRequest
       * @return RenewReservedInstancesResponse
       */
      Models::RenewReservedInstancesResponse renewReservedInstances(const Models::RenewReservedInstancesRequest &request);

      /**
       * @summary Replaces the operating system (system disk) of an ECS instance. After the operating system of the ECS instance is replaced, the original system disk of the instance is released and a new system disk is generated for the instance. This causes the ID of the system disk to change.
       *
       * @description 调用该接口前请您仔细阅读[更换系统盘（更换操作系统）](https://help.aliyun.com/document_detail/50134.html)。
       * 更换系统盘时，您需要注意：
       * - 不支持变更系统盘计费方式。
       * - 不支持更换系统盘的云盘类型。
       * - 系统盘挂载的 ECS 实例不能有未支付的订单。
       * - 实例的状态必须为已停止（`Stopped`）状态。
       *   > 仅适用于专有网络 VPC 类型实例。如果 ECS 实例为按量付费计费模式，且开启默认启用节省停机模式，为防止地域范围内的 ECS 实例库存不足，引起的更换系统盘后无法重启实例。您需要在停止该实例时设置为普通停机模式。具体操作，请参见 [StopInstance](https://help.aliyun.com/document_detail/25501.html) 。
       * - 您可以通过参数`SystemDisk.Size`重新指定系统盘的容量大小（不能低于原系统盘容量）。
       * - ECS 实例被安全锁定，即实例的`OperationLocks`参数值包含`"LockReason": "security"`，不支持更换系统盘。更多信息，请参见[安全锁定时的 API 行为](https://help.aliyun.com/document_detail/25695.html)。
       * 更换系统盘后，可通过 [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) 接口查询更换系统盘的实例的状态验证是否更换成功。如果返回值`OperationLocks`为空，则表示更换系统盘的操作已完成。
       *
       * @param request ReplaceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceSystemDiskResponse
       */
      Models::ReplaceSystemDiskResponse replaceSystemDiskWithOptions(const Models::ReplaceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the operating system (system disk) of an ECS instance. After the operating system of the ECS instance is replaced, the original system disk of the instance is released and a new system disk is generated for the instance. This causes the ID of the system disk to change.
       *
       * @description 调用该接口前请您仔细阅读[更换系统盘（更换操作系统）](https://help.aliyun.com/document_detail/50134.html)。
       * 更换系统盘时，您需要注意：
       * - 不支持变更系统盘计费方式。
       * - 不支持更换系统盘的云盘类型。
       * - 系统盘挂载的 ECS 实例不能有未支付的订单。
       * - 实例的状态必须为已停止（`Stopped`）状态。
       *   > 仅适用于专有网络 VPC 类型实例。如果 ECS 实例为按量付费计费模式，且开启默认启用节省停机模式，为防止地域范围内的 ECS 实例库存不足，引起的更换系统盘后无法重启实例。您需要在停止该实例时设置为普通停机模式。具体操作，请参见 [StopInstance](https://help.aliyun.com/document_detail/25501.html) 。
       * - 您可以通过参数`SystemDisk.Size`重新指定系统盘的容量大小（不能低于原系统盘容量）。
       * - ECS 实例被安全锁定，即实例的`OperationLocks`参数值包含`"LockReason": "security"`，不支持更换系统盘。更多信息，请参见[安全锁定时的 API 行为](https://help.aliyun.com/document_detail/25695.html)。
       * 更换系统盘后，可通过 [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) 接口查询更换系统盘的实例的状态验证是否更换成功。如果返回值`OperationLocks`为空，则表示更换系统盘的操作已完成。
       *
       * @param request ReplaceSystemDiskRequest
       * @return ReplaceSystemDiskResponse
       */
      Models::ReplaceSystemDiskResponse replaceSystemDisk(const Models::ReplaceSystemDiskRequest &request);

      /**
       * @summary Reports an exception on Elastic Compute Service (ECS) instances. You can report the same exception on multiple ECS instances or on multiple disks of an ECS instance.
       *
       * @param request ReportInstancesStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportInstancesStatusResponse
       */
      Models::ReportInstancesStatusResponse reportInstancesStatusWithOptions(const Models::ReportInstancesStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports an exception on Elastic Compute Service (ECS) instances. You can report the same exception on multiple ECS instances or on multiple disks of an ECS instance.
       *
       * @param request ReportInstancesStatusRequest
       * @return ReportInstancesStatusResponse
       */
      Models::ReportInstancesStatusResponse reportInstancesStatus(const Models::ReportInstancesStatusRequest &request);

      /**
       * @summary Rolls back a cloud disk to a snapshot from an earlier point in time.
       *
       * @description Before you call this operation, read [Roll back a disk by using a snapshot](https://help.aliyun.com/document_detail/25450.html).
       * Take note of the following items:
       * - The cloud disk that you want to roll back must be in the In Use (`In_use`) or Unattached (`Available`) state.
       * - The instance to which the cloud disk is attached must be in the `Stopped` state. You can call the [StopInstances](https://help.aliyun.com/document_detail/155372.html) operation to stop the instance.
       * - The snapshot specified by `SnapshotId` must be created from the disk specified by `DiskId`.
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an instance by calling the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation, the instance is locked for security reasons and no operations can be performed on the instance.
       *
       * @param request ResetDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDiskWithOptions(const Models::ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a cloud disk to a snapshot from an earlier point in time.
       *
       * @description Before you call this operation, read [Roll back a disk by using a snapshot](https://help.aliyun.com/document_detail/25450.html).
       * Take note of the following items:
       * - The cloud disk that you want to roll back must be in the In Use (`In_use`) or Unattached (`Available`) state.
       * - The instance to which the cloud disk is attached must be in the `Stopped` state. You can call the [StopInstances](https://help.aliyun.com/document_detail/155372.html) operation to stop the instance.
       * - The snapshot specified by `SnapshotId` must be created from the disk specified by `DiskId`.
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an instance by calling the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation, the instance is locked for security reasons and no operations can be performed on the instance.
       *
       * @param request ResetDiskRequest
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDisk(const Models::ResetDiskRequest &request);

      /**
       * @summary Resets the Key Management Service (KMS) key used by Account-level Elastic Block Storage (EBS) Default Encryption in a region to the service key.
       *
       * @description - You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - Before you can call this operation in a region, make sure that the **Account-level Elastic Block Storage (EBS) Default Encryption** feature is enabled in the region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyIdWithOptions(const Models::ResetDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the Key Management Service (KMS) key used by Account-level Elastic Block Storage (EBS) Default Encryption in a region to the service key.
       *
       * @description - You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * - Before you can call this operation in a region, make sure that the **Account-level Elastic Block Storage (EBS) Default Encryption** feature is enabled in the region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyId(const Models::ResetDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Restores one or more cloud disks from an instance snapshot.
       *
       * @description This API is deprecated. Use [ResetDisk](https://help.aliyun.com/document_detail/25520.html) to roll back a cloud disk instead.
       *
       * @param request ResetDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisksWithOptions(const Models::ResetDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores one or more cloud disks from an instance snapshot.
       *
       * @description This API is deprecated. Use [ResetDisk](https://help.aliyun.com/document_detail/25520.html) to roll back a cloud disk instead.
       *
       * @param request ResetDisksRequest
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisks(const Models::ResetDisksRequest &request);

      /**
       * @summary Resizes a system disk or a data disk.
       *
       * @description > 扩容前，请务必查询云盘采用的分区格式。如果是 MBR 格式，不支持扩容到 2TiB 以上，否则会造成数据丢失。对于 MBR 分区扩容，建议您重新创建并挂载一块数据盘，采用 GPT 分区格式后，再将已有数据拷贝至新的数据盘上。更多详情，请参见[扩容云盘容量](https://help.aliyun.com/document_detail/44986.html)。
       * - 支持扩容的磁盘类型包括普通云盘（`cloud`）、高效云盘（`cloud_efficiency`）、SSD 云盘（`cloud_ssd`）、ESSD 云盘（`cloud_essd`）<props="china">、ESSD Entry 云盘（cloud_essd_entry）、ESSD AutoPL 云盘（cloud_auto）、弹性临时盘-标准版（elastic_ephemeral_disk_standard）和弹性临时盘-高级版（elastic_ephemeral_disk_premium）、 ESSD 同城冗余云盘（cloud_regional_disk_auto）。
       * - 正在创建快照的云盘不支持扩容。请您等待快照创建完成后，再开始执行扩容操作。
       * - 该接口不能扩容分区和文件系统，您需要在扩容云盘容量后自行分配分区和文件系统，具体操作，请参见[扩容分区与文件系统（Linux）](~~2949817#bb3b1f02e51pj~~)和[扩容分区与文件系统（windows）](~~2932233#a9f9b78f3fujb~~)。
       * - 开启多重挂载特性的云盘支持在线扩容和离线扩容，请确保磁盘挂载的实例满足以下条件：
       *   - 在线扩容时，实例状态为**运行中**（`Running`）。
       *   - 离线扩容时，实例状态为**运行中**（`Running`）或**已停止**（`Stopped`）。
       * - 请确保云盘满足以下条件：
       *   - 云盘状态为使用中（`In Use`）或者待挂载（`Available`）。
       *   - （强烈建议）已为云盘创建快照，做好数据备份。具体操作，请参见[创建快照](https://help.aliyun.com/document_detail/25455.html)。
       *   - 如果您是全新购买的数据盘，请先完成初始化再执行扩容操作。更多信息，请参见[初始化概述](https://help.aliyun.com/document_detail/466323.html)。
       *
       * @param request ResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDiskWithOptions(const Models::ResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resizes a system disk or a data disk.
       *
       * @description > 扩容前，请务必查询云盘采用的分区格式。如果是 MBR 格式，不支持扩容到 2TiB 以上，否则会造成数据丢失。对于 MBR 分区扩容，建议您重新创建并挂载一块数据盘，采用 GPT 分区格式后，再将已有数据拷贝至新的数据盘上。更多详情，请参见[扩容云盘容量](https://help.aliyun.com/document_detail/44986.html)。
       * - 支持扩容的磁盘类型包括普通云盘（`cloud`）、高效云盘（`cloud_efficiency`）、SSD 云盘（`cloud_ssd`）、ESSD 云盘（`cloud_essd`）<props="china">、ESSD Entry 云盘（cloud_essd_entry）、ESSD AutoPL 云盘（cloud_auto）、弹性临时盘-标准版（elastic_ephemeral_disk_standard）和弹性临时盘-高级版（elastic_ephemeral_disk_premium）、 ESSD 同城冗余云盘（cloud_regional_disk_auto）。
       * - 正在创建快照的云盘不支持扩容。请您等待快照创建完成后，再开始执行扩容操作。
       * - 该接口不能扩容分区和文件系统，您需要在扩容云盘容量后自行分配分区和文件系统，具体操作，请参见[扩容分区与文件系统（Linux）](~~2949817#bb3b1f02e51pj~~)和[扩容分区与文件系统（windows）](~~2932233#a9f9b78f3fujb~~)。
       * - 开启多重挂载特性的云盘支持在线扩容和离线扩容，请确保磁盘挂载的实例满足以下条件：
       *   - 在线扩容时，实例状态为**运行中**（`Running`）。
       *   - 离线扩容时，实例状态为**运行中**（`Running`）或**已停止**（`Stopped`）。
       * - 请确保云盘满足以下条件：
       *   - 云盘状态为使用中（`In Use`）或者待挂载（`Available`）。
       *   - （强烈建议）已为云盘创建快照，做好数据备份。具体操作，请参见[创建快照](https://help.aliyun.com/document_detail/25455.html)。
       *   - 如果您是全新购买的数据盘，请先完成初始化再执行扩容操作。更多信息，请参见[初始化概述](https://help.aliyun.com/document_detail/466323.html)。
       *
       * @param request ResizeDiskRequest
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDisk(const Models::ResizeDiskRequest &request);

      /**
       * @summary Deletes one or more inbound security group rules from a specified security group.
       *
       * @description >Notice: Starting July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidParam.SecurityGroupRuleId" instead of a success response. Update your error code handling to be compatible accordingly to avoid impact on your production workloads.
       * You can use one of the following methods to pass parameters to delete rules:
       * - Specify security group rule IDs to delete rules (recommended).
       *      - If a specified security group rule ID does not exist, the API invocation fails.
       * - Specify Permissions to delete rules.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to identify an inbound rule:
       *       - Source settings: Set one of SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
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
       * @description >Notice: Starting July 8, 2024, Alibaba Cloud adjusted the validation rules for this operation. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidParam.SecurityGroupRuleId" instead of a success response. Update your error code handling to be compatible accordingly to avoid impact on your production workloads.
       * You can use one of the following methods to pass parameters to delete rules:
       * - Specify security group rule IDs to delete rules (recommended).
       *      - If a specified security group rule ID does not exist, the API invocation fails.
       * - Specify Permissions to delete rules.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to identify an inbound rule:
       *       - Source settings: Set one of SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcePrefixListId (prefix list ID), or SourceGroupId (source security group).
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
       * @description >Notice: Alibaba Cloud adjusted the validation rules for this operation on July 8, 2024. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidSecurityGroupRule.RuleNotExist" instead of a success response. Update your error code handling to be compatible with this change to avoid impacts on your production workloads.
       * You can use one of the following methods to pass parameters to delete security group rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *   - If a specified security group rule ID does not exist, a fault is returned.
       * - Delete rules by specifying the Permissions parameter.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to delete a security group rule:
       *       - Destination: Specify one of DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
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
       *     "Policy":"accept" // Specify the authorization policy.
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
       * @description >Notice: Alibaba Cloud adjusted the validation rules for this operation on July 8, 2024. When you attempt to delete a security group rule that does not exist, the operation now returns the error code "InvalidSecurityGroupRule.RuleNotExist" instead of a success response. Update your error code handling to be compatible with this change to avoid impacts on your production workloads.
       * You can use one of the following methods to pass parameters to delete security group rules:
       * - Delete rules by specifying security group rule IDs (recommended).
       *   - If a specified security group rule ID does not exist, a fault is returned.
       * - Delete rules by specifying the Permissions parameter.
       *     - If no matching security group rule exists, the invocation succeeds but no rule is deleted.
       *     - The following parameters are required to delete a security group rule:
       *       - Destination: Specify one of DestCidrIp (IPv4 address), Ipv6DestCidrIp (IPv6 address), DestPrefixListId (prefix list ID), or DestGroupId (destination security group).
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
       *     "Policy":"accept" // Specify the authorization policy.
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
       * @summary Creates and runs a Cloud Assistant command, such as a Shell, PowerShell, or Bat script, on one or more ECS instances. This operation also supports scheduled execution, custom parameters, and execution in containers.
       *
       * @description This is an asynchronous API. After a successful request, you can call [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) with the returned command ID or invocation ID to query the execution results.
       * ### Usage notes
       * - The target instance must be in the `Running` state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       * - The Cloud Assistant Agent must be pre-installed on the target instance. Otherwise, call [InstallCloudAssistant](https://help.aliyun.com/document_detail/64921.html) to install it and then call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679925.html) to query its installation status.
       *   > By default, the Cloud Assistant Agent is pre-installed on ECS instances that are created from public images after December 1, 2017.
       * - When running PowerShell commands, make sure the PowerShell module is configured on the instance\\"s Windows operating system.
       * ### Precautions
       * - You can retain 500 to 50,000 Cloud Assistant commands in a single region. To request a higher quota, see [Quota Management](https://help.aliyun.com/document_detail/184116.html).
       * - To use new features for scheduled tasks, such as running tasks at fixed intervals, running a task only once at a specified time, or specifying a year or time zone for cron expression-based tasks, the Cloud Assistant Agent must be one of the following versions or later. If the `ClientNeedUpgrade` error code is returned, see [Upgrade or stop upgrading Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *   ```
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   ```
       * - When you run a scheduled task based on a cron expression and specify a time zone, the task runs in the specified time zone. If you do not specify a time zone, the task runs in the system time zone of the ECS instance, and the execution time depends on the instance\\"s system clock. Ensure that the time and time zone of your ECS instance are set as expected. For more information about time zones, see [Set the time zone and NTP service for a Linux instance](https://help.aliyun.com/document_detail/92803.html) or [Set the NTP service for a Windows instance](https://help.aliyun.com/document_detail/51890.html).
       * ### Recommendations
       * - **Timeout settings**: You can specify the `Timeout` parameter to set the maximum execution timeout for a command on an ECS instance. If the command execution times out, the Cloud Assistant Agent forcibly terminates the process.
       *   - If a one-time execution times out, its execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       *   - For a scheduled task, the timeout period applies to each execution. A timeout in one execution does not affect the next. If an execution times out, its execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       * - **Execution failures**: A command can fail due to an abnormal instance state, network problems, or an unresponsive Cloud Assistant Agent. In these cases, no execution information is generated. For more information, see [Common errors and suggestions for fixing execution failures](https://help.aliyun.com/document_detail/87029.html).
       * - **Custom parameters**: To use custom parameters, set `EnableParameter` to `true`. You can then define parameters in `CommandContent` using the `{{parameter}}` format and pass their corresponding key-value pairs when you run the command.
       *
       * @param tmpReq RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and runs a Cloud Assistant command, such as a Shell, PowerShell, or Bat script, on one or more ECS instances. This operation also supports scheduled execution, custom parameters, and execution in containers.
       *
       * @description This is an asynchronous API. After a successful request, you can call [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) with the returned command ID or invocation ID to query the execution results.
       * ### Usage notes
       * - The target instance must be in the `Running` state. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the instance status.
       * - The Cloud Assistant Agent must be pre-installed on the target instance. Otherwise, call [InstallCloudAssistant](https://help.aliyun.com/document_detail/64921.html) to install it and then call [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679925.html) to query its installation status.
       *   > By default, the Cloud Assistant Agent is pre-installed on ECS instances that are created from public images after December 1, 2017.
       * - When running PowerShell commands, make sure the PowerShell module is configured on the instance\\"s Windows operating system.
       * ### Precautions
       * - You can retain 500 to 50,000 Cloud Assistant commands in a single region. To request a higher quota, see [Quota Management](https://help.aliyun.com/document_detail/184116.html).
       * - To use new features for scheduled tasks, such as running tasks at fixed intervals, running a task only once at a specified time, or specifying a year or time zone for cron expression-based tasks, the Cloud Assistant Agent must be one of the following versions or later. If the `ClientNeedUpgrade` error code is returned, see [Upgrade or stop upgrading Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html) to update the agent to the latest version.
       *   ```
       *   - Linux: 2.2.3.282
       *   - Windows: 2.1.3.282
       *   ```
       * - When you run a scheduled task based on a cron expression and specify a time zone, the task runs in the specified time zone. If you do not specify a time zone, the task runs in the system time zone of the ECS instance, and the execution time depends on the instance\\"s system clock. Ensure that the time and time zone of your ECS instance are set as expected. For more information about time zones, see [Set the time zone and NTP service for a Linux instance](https://help.aliyun.com/document_detail/92803.html) or [Set the NTP service for a Windows instance](https://help.aliyun.com/document_detail/51890.html).
       * ### Recommendations
       * - **Timeout settings**: You can specify the `Timeout` parameter to set the maximum execution timeout for a command on an ECS instance. If the command execution times out, the Cloud Assistant Agent forcibly terminates the process.
       *   - If a one-time execution times out, its execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       *   - For a scheduled task, the timeout period applies to each execution. A timeout in one execution does not affect the next. If an execution times out, its execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       * - **Execution failures**: A command can fail due to an abnormal instance state, network problems, or an unresponsive Cloud Assistant Agent. In these cases, no execution information is generated. For more information, see [Common errors and suggestions for fixing execution failures](https://help.aliyun.com/document_detail/87029.html).
       * - **Custom parameters**: To use custom parameters, set `EnableParameter` to `true`. You can then define parameters in `CommandContent` using the `{{parameter}}` format and pass their corresponding key-value pairs when you run the command.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary This API is used to batch create ECS instances and supports automatic start, assigning public IP addresses, and setting automatic release time.
       *
       * @description <props="china">Creating instances incurs charges. Billable items include [instance type](https://help.aliyun.com/document_detail/25398.html), [image](https://help.aliyun.com/document_detail/179021.html), [block storage](https://help.aliyun.com/document_detail/179022.html), and [Internet bandwidth](https://help.aliyun.com/document_detail/25411.html). Before using this API, ensure that you fully understand the billing method of ECS products and their [pricing](https://www.aliyun.com/price/product#/ecs/detail).
       * <props="intl">Before using this API, ensure that you fully understand the billing method of ECS products and their [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl).
       * This API is asynchronous. After a successful request to create an instance, the instance ID is returned immediately. However, the creation and startup of the instance are not completed instantly. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to check the instance information. When the status in the response is `Running`, it indicates that the instance has been successfully created and started.
       * ### Prerequisites
       * <props="china">
       * - Ensure that your account has passed identity verification. For more information, see [Account Identity Verification Documentation](https://help.aliyun.com/document_detail/48263.html).
       * - If insufficient resource inventory prevents the creation of the requested instance, Alibaba Cloud immediately sends a system event indicating instance creation failure (`SystemFailure.Delete`). You can use [DescribeInstanceHistoryEvents](https://help.aliyun.com/document_detail/2679897.html) to check for such events. For more information, see [Instance Creation Failure Events](https://help.aliyun.com/document_detail/2545990.html).
       * - Ensure that the total number of instances you create or the aggregate vCPU count across all instance types does not exceed your system quota. For more information, see [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas).
       * - Before creating an instance of the virtual private cloud (VPC) type, create a VPC in the corresponding Alibaba Cloud region in advance. For more information, see [create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### Notes
       * - If the instance billing method is subscription (`PrePaid`), available coupons are automatically applied by default during payment.
       * - A single request can create up to 100 instances. If you need to create more than 100 instances, we recommend that you split the request into batches or make concurrent calls.
       * - If the value of the `InternetMaxBandwidthOut` parameter is greater than 0, a public IP address is automatically assigned to the instance.
       * > The total peak Internet bandwidth billed on a pay-by-bandwidth basis for a single Alibaba Cloud account in a single region is subject to limits. For more information, see [Internet Bandwidth Limits](~~25412#BandwidthQuota~~).
       * ### Recommendations
       * - **Testing Scenario**: You can send a dry run request by setting `DryRun=true`.
       * - **Release Instances**: You can set the automatic release time by using the `AutoReleaseTime` parameter, or manually release instances by calling [DeleteInstances](https://help.aliyun.com/document_detail/2679710.html).
       * - **Management and Retrieval**: We recommend that you assign tags (`Tag.N.Key` and `Tag.N.Value`) to each batch of instances you start, and add a sequential suffix (`UniqueSuffix`) to the hostname (`HostName`) and instance name (`InstanceName`). For more information, see [Batch Configure Sequential Instance Names or Hostnames](https://help.aliyun.com/document_detail/196048.html).
       * - **Launch Template**: Using a launch template eliminates the need to repeatedly specify numerous configuration parameters when creating instances. After creating a launch template via [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html), you can specify `LaunchTemplateId` and `LaunchTemplateVersion` in your `RunInstances` request to use the template.
       * - **Disable Hyper-Threading**: In memory-intensive scenarios, you can improve the memory-to-vCPU ratio by setting `CpuOptions.ThreadsPerCore=1` to disable hyper-threading.
       * - **Enable Jumbo Frame**: You can enable the jumbo frame feature at instance creation by setting `NetworkOptions.EnableJumboFrame=true`. For more information, see [ECS Instance MTU](https://help.aliyun.com/document_detail/200512.html).
       * ## Request Example
       * Suppose you want to create several ECS instances in the China (Hangzhou) region. You intend to use a specific image, instance type, security group, and virtual switch, configure system and data disks of certain capacities, assign a public IP address, and set the instance name and password. The corresponding request parameters are as follows:
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * ImageId:"aliyun_3_x64_20G_alibase_20221102.vhd", // Set the image ID  
       * InstanceType:"ecs.g7.large", // Set the instance type  
       * SecurityGroupId:"sg-bp150uqocpf9jj70****", // Set the security group ID  
       * VSwitchId:"vsw-bp1qo7s91cbch5i4l****", // Set the virtual switch ID  
       * SystemDisk:{  
       *   Category:"cloud_essd", // Set the system disk category to enterprise SSD (ESSD)  
       *   Size:40, // Set the system disk size to 40 GiB  
       * },  
       * DataDisk:[  
       *   {  
       *     Category:"cloud_essd", // Set the data disk category to enterprise SSD (ESSD)  
       *     Size:100, // Set the data disk size to 100 GiB  
       *   }  
       * ],  
       * HostName:"ECS-test", // Set the instance hostname  
       * Password:"ECS@test1234", // Set the logon password  
       * InternetMaxBandwidthOut:10 // Set the outbound public bandwidth to 10 Mbit/s  
       * ```
       * Based on the above configuration, create different types of instances:
       * <details>
       * <summary>
       * Example: Create 5 auto-renewal subscription instances
       * </summary>
       * ```
       * Amount:5, // Create 5 instances  
       * InstanceChargeType:"PrePaid", // Indicates subscription billing  
       * PeriodUnit:"Month", // Set the period unit to "Month"  
       * Period:1, // Set the subscription duration to 1 month  
       * AutoRenew:true, // Enable auto-renewal  
       * AutoRenewPeriod:1 // Set the auto-renewal period to 1 month  
       * ```
       * </details>
       * <details>
       * <summary>
       * Example: Create 10 pay-as-you-go instances
       * </summary>
       * ```
       * Amount:10, // Create 10 instances  
       * InstanceChargeType:"PostPaid", // Indicates pay-as-you-go billing  
       * SpotStrategy:"NoSpot" // Default value, indicating standard pay-as-you-go  
       * ```
       * </details>
       * <details>
       * <summary>
       * Example: Create 20 spot instances with bidding strategy and retention duration
       * </summary>
       * ```
       * Amount:20, // Create 20 instances  
       * InstanceChargeType:"PostPaid",  
       * SpotStrategy:"SpotAsPriceGo", // Indicates bidding based on market price  
       * SpotDuration:1 // Set the spot instance retention duration to 1 hour  
       * ```
       * </details>
       * Suppose you have already created a launch template using [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) and now want to use this template to create some ECS instances in the China (Hangzhou) region. The example is as follows:
       * <details>
       * <summary>
       * Example: Create 10 ECS instances using a launch template
       * </summary>
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * Amount:10, // Create 10 instances  
       * LaunchTemplateId:"lt-bp14xczpoxvb6rre****" // Specify the launch template ID  
       * ```
       * </details>
       * >Notice: 
       * If both instance parameters and template parameters are specified, the instance parameters take precedence. For example, if the billing method in the template is subscription but `InstanceChargeType` is set to `PostPaid`, the created instance will be a pay-as-you-go instance.
       * <details>
       * <summary>
       * Example: Create 1 instance using a full image (a custom image that includes both system and data disks)
       * </summary>
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * ImageId = m-bp13ohd32cvzpq9e****，// Custom image ID  
       * InstanceType = ecs.u1-c1m1.large，// Instance type  
       * SecurityGroupId = sg-bp10jztp6b0sdsyl****，// Security group ID  
       * VSwitchId = vsw-bp19wo63nleroq22g****，// Virtual switch ID  
       * SystemDisk.Size = 50，// Set the size of the system disk included in the full image  
       * SystemDisk.Category = cloud_auto，// Set the disk category of the system disk included in the full image  
       * DataDisk.0.Device = /dev/xvdb，// Set the mount target of the data disk included in the full image  
       * DataDisk.0.Size = 50，// Set the size of the data disk included in the full image  
       * DataDisk.0.Category = cloud_essd，// Set the disk category of the data disk included in the full image  
       * DataDisk.1.Device = /dev/xvdc，// Mount target of an additional data disk; to replace the data disk included in the full image, set DataDisk.1.Device = /dev/xvdb (the default mount target in the full image).  
       * DataDisk.1.Size = 70，// Size of the additional data disk  
       * DataDisk.1.Category = cloud_auto，// Disk category of the additional data disk  
       * ```
       * </details>
       *
       * @param request RunInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstancesWithOptions(const Models::RunInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to batch create ECS instances and supports automatic start, assigning public IP addresses, and setting automatic release time.
       *
       * @description <props="china">Creating instances incurs charges. Billable items include [instance type](https://help.aliyun.com/document_detail/25398.html), [image](https://help.aliyun.com/document_detail/179021.html), [block storage](https://help.aliyun.com/document_detail/179022.html), and [Internet bandwidth](https://help.aliyun.com/document_detail/25411.html). Before using this API, ensure that you fully understand the billing method of ECS products and their [pricing](https://www.aliyun.com/price/product#/ecs/detail).
       * <props="intl">Before using this API, ensure that you fully understand the billing method of ECS products and their [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl).
       * This API is asynchronous. After a successful request to create an instance, the instance ID is returned immediately. However, the creation and startup of the instance are not completed instantly. You can call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to check the instance information. When the status in the response is `Running`, it indicates that the instance has been successfully created and started.
       * ### Prerequisites
       * <props="china">
       * - Ensure that your account has passed identity verification. For more information, see [Account Identity Verification Documentation](https://help.aliyun.com/document_detail/48263.html).
       * - If insufficient resource inventory prevents the creation of the requested instance, Alibaba Cloud immediately sends a system event indicating instance creation failure (`SystemFailure.Delete`). You can use [DescribeInstanceHistoryEvents](https://help.aliyun.com/document_detail/2679897.html) to check for such events. For more information, see [Instance Creation Failure Events](https://help.aliyun.com/document_detail/2545990.html).
       * - Ensure that the total number of instances you create or the aggregate vCPU count across all instance types does not exceed your system quota. For more information, see [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas).
       * - Before creating an instance of the virtual private cloud (VPC) type, create a VPC in the corresponding Alibaba Cloud region in advance. For more information, see [create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### Notes
       * - If the instance billing method is subscription (`PrePaid`), available coupons are automatically applied by default during payment.
       * - A single request can create up to 100 instances. If you need to create more than 100 instances, we recommend that you split the request into batches or make concurrent calls.
       * - If the value of the `InternetMaxBandwidthOut` parameter is greater than 0, a public IP address is automatically assigned to the instance.
       * > The total peak Internet bandwidth billed on a pay-by-bandwidth basis for a single Alibaba Cloud account in a single region is subject to limits. For more information, see [Internet Bandwidth Limits](~~25412#BandwidthQuota~~).
       * ### Recommendations
       * - **Testing Scenario**: You can send a dry run request by setting `DryRun=true`.
       * - **Release Instances**: You can set the automatic release time by using the `AutoReleaseTime` parameter, or manually release instances by calling [DeleteInstances](https://help.aliyun.com/document_detail/2679710.html).
       * - **Management and Retrieval**: We recommend that you assign tags (`Tag.N.Key` and `Tag.N.Value`) to each batch of instances you start, and add a sequential suffix (`UniqueSuffix`) to the hostname (`HostName`) and instance name (`InstanceName`). For more information, see [Batch Configure Sequential Instance Names or Hostnames](https://help.aliyun.com/document_detail/196048.html).
       * - **Launch Template**: Using a launch template eliminates the need to repeatedly specify numerous configuration parameters when creating instances. After creating a launch template via [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html), you can specify `LaunchTemplateId` and `LaunchTemplateVersion` in your `RunInstances` request to use the template.
       * - **Disable Hyper-Threading**: In memory-intensive scenarios, you can improve the memory-to-vCPU ratio by setting `CpuOptions.ThreadsPerCore=1` to disable hyper-threading.
       * - **Enable Jumbo Frame**: You can enable the jumbo frame feature at instance creation by setting `NetworkOptions.EnableJumboFrame=true`. For more information, see [ECS Instance MTU](https://help.aliyun.com/document_detail/200512.html).
       * ## Request Example
       * Suppose you want to create several ECS instances in the China (Hangzhou) region. You intend to use a specific image, instance type, security group, and virtual switch, configure system and data disks of certain capacities, assign a public IP address, and set the instance name and password. The corresponding request parameters are as follows:
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * ImageId:"aliyun_3_x64_20G_alibase_20221102.vhd", // Set the image ID  
       * InstanceType:"ecs.g7.large", // Set the instance type  
       * SecurityGroupId:"sg-bp150uqocpf9jj70****", // Set the security group ID  
       * VSwitchId:"vsw-bp1qo7s91cbch5i4l****", // Set the virtual switch ID  
       * SystemDisk:{  
       *   Category:"cloud_essd", // Set the system disk category to enterprise SSD (ESSD)  
       *   Size:40, // Set the system disk size to 40 GiB  
       * },  
       * DataDisk:[  
       *   {  
       *     Category:"cloud_essd", // Set the data disk category to enterprise SSD (ESSD)  
       *     Size:100, // Set the data disk size to 100 GiB  
       *   }  
       * ],  
       * HostName:"ECS-test", // Set the instance hostname  
       * Password:"ECS@test1234", // Set the logon password  
       * InternetMaxBandwidthOut:10 // Set the outbound public bandwidth to 10 Mbit/s  
       * ```
       * Based on the above configuration, create different types of instances:
       * <details>
       * <summary>
       * Example: Create 5 auto-renewal subscription instances
       * </summary>
       * ```
       * Amount:5, // Create 5 instances  
       * InstanceChargeType:"PrePaid", // Indicates subscription billing  
       * PeriodUnit:"Month", // Set the period unit to "Month"  
       * Period:1, // Set the subscription duration to 1 month  
       * AutoRenew:true, // Enable auto-renewal  
       * AutoRenewPeriod:1 // Set the auto-renewal period to 1 month  
       * ```
       * </details>
       * <details>
       * <summary>
       * Example: Create 10 pay-as-you-go instances
       * </summary>
       * ```
       * Amount:10, // Create 10 instances  
       * InstanceChargeType:"PostPaid", // Indicates pay-as-you-go billing  
       * SpotStrategy:"NoSpot" // Default value, indicating standard pay-as-you-go  
       * ```
       * </details>
       * <details>
       * <summary>
       * Example: Create 20 spot instances with bidding strategy and retention duration
       * </summary>
       * ```
       * Amount:20, // Create 20 instances  
       * InstanceChargeType:"PostPaid",  
       * SpotStrategy:"SpotAsPriceGo", // Indicates bidding based on market price  
       * SpotDuration:1 // Set the spot instance retention duration to 1 hour  
       * ```
       * </details>
       * Suppose you have already created a launch template using [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) and now want to use this template to create some ECS instances in the China (Hangzhou) region. The example is as follows:
       * <details>
       * <summary>
       * Example: Create 10 ECS instances using a launch template
       * </summary>
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * Amount:10, // Create 10 instances  
       * LaunchTemplateId:"lt-bp14xczpoxvb6rre****" // Specify the launch template ID  
       * ```
       * </details>
       * >Notice: 
       * If both instance parameters and template parameters are specified, the instance parameters take precedence. For example, if the billing method in the template is subscription but `InstanceChargeType` is set to `PostPaid`, the created instance will be a pay-as-you-go instance.
       * <details>
       * <summary>
       * Example: Create 1 instance using a full image (a custom image that includes both system and data disks)
       * </summary>
       * ```
       * RegionId:"cn-hangzhou", // Set the region to China (Hangzhou)  
       * ImageId = m-bp13ohd32cvzpq9e****，// Custom image ID  
       * InstanceType = ecs.u1-c1m1.large，// Instance type  
       * SecurityGroupId = sg-bp10jztp6b0sdsyl****，// Security group ID  
       * VSwitchId = vsw-bp19wo63nleroq22g****，// Virtual switch ID  
       * SystemDisk.Size = 50，// Set the size of the system disk included in the full image  
       * SystemDisk.Category = cloud_auto，// Set the disk category of the system disk included in the full image  
       * DataDisk.0.Device = /dev/xvdb，// Set the mount target of the data disk included in the full image  
       * DataDisk.0.Size = 50，// Set the size of the data disk included in the full image  
       * DataDisk.0.Category = cloud_essd，// Set the disk category of the data disk included in the full image  
       * DataDisk.1.Device = /dev/xvdc，// Mount target of an additional data disk; to replace the data disk included in the full image, set DataDisk.1.Device = /dev/xvdb (the default mount target in the full image).  
       * DataDisk.1.Size = 70，// Size of the additional data disk  
       * DataDisk.1.Category = cloud_auto，// Disk category of the additional data disk  
       * ```
       * </details>
       *
       * @param request RunInstancesRequest
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstances(const Models::RunInstancesRequest &request);

      /**
       * @summary Sends a file to one or more Elastic Compute Service (ECS) instances.
       *
       * @description ## API Guide
       * - The target ECS instances must be in the running (`Running`) status.
       * - The target ECS instances must have the [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) installed in advance.
       * - The Cloud Assistant Agent version must be higher than the following versions to support file delivery. If the response returns the `ClientNeedUpgrade` error code, update the client to the latest version:
       *   - Linux: 1.0.2.569
       *   - Windows: 1.0.0.149
       * - After Base64 encoding, the file content size must not exceed 32 KB.
       * - File delivery might fail due to abnormal status of the target ECS instance, network issues, or Cloud Assistant Agent abnormalities. To troubleshoot, invoke [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) or refer to [Common errors and troubleshooting suggestions for execution failures](https://help.aliyun.com/document_detail/87029.html).
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a file to one or more Elastic Compute Service (ECS) instances.
       *
       * @description ## API Guide
       * - The target ECS instances must be in the running (`Running`) status.
       * - The target ECS instances must have the [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) installed in advance.
       * - The Cloud Assistant Agent version must be higher than the following versions to support file delivery. If the response returns the `ClientNeedUpgrade` error code, update the client to the latest version:
       *   - Linux: 1.0.2.569
       *   - Windows: 1.0.0.149
       * - After Base64 encoding, the file content size must not exceed 32 KB.
       * - File delivery might fail due to abnormal status of the target ECS instance, network issues, or Cloud Assistant Agent abnormalities. To troubleshoot, invoke [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) or refer to [Common errors and troubleshooting suggestions for execution failures](https://help.aliyun.com/document_detail/87029.html).
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Executes an image creation task (image building task) by using an image template.
       *
       * @description - After you create an image template, you can call the StartImagePipelineExecution operation to create a pipeline task. The system creates, copies, and shares images based on the parameters configured in the image template.
       * - You can execute only one pipeline task for each image template.
       *
       * @param request StartImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartImagePipelineExecutionResponse
       */
      Models::StartImagePipelineExecutionResponse startImagePipelineExecutionWithOptions(const Models::StartImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an image creation task (image building task) by using an image template.
       *
       * @description - After you create an image template, you can call the StartImagePipelineExecution operation to create a pipeline task. The system creates, copies, and shares images based on the parameters configured in the image template.
       * - You can execute only one pipeline task for each image template.
       *
       * @param request StartImagePipelineExecutionRequest
       * @return StartImagePipelineExecutionResponse
       */
      Models::StartImagePipelineExecutionResponse startImagePipelineExecution(const Models::StartImagePipelineExecutionRequest &request);

      /**
       * @summary Starts an Elastic Compute Service (ECS) instance. You can specify the ID of an ECS instance and parameters, such as InitLocalDisk, in the request based on your business requirements to start the instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to start an ECS instance, the operation sets the status of the ECS instance to Starting and begins the startup process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Running`, the instance is started.
       * ### [](#)Precautions
       * - You cannot call this operation to start an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance that you want to start must be in the **Stopped** (`Stopped`) state.
       * - If an ECS instance is stopped in economical mode, the instance may fail to be started due to insufficient resources.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an Elastic Compute Service (ECS) instance. You can specify the ID of an ECS instance and parameters, such as InitLocalDisk, in the request based on your business requirements to start the instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to start an ECS instance, the operation sets the status of the ECS instance to Starting and begins the startup process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Running`, the instance is started.
       * ### [](#)Precautions
       * - You cannot call this operation to start an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instance that you want to start must be in the **Stopped** (`Stopped`) state.
       * - If an ECS instance is stopped in economical mode, the instance may fail to be started due to insufficient resources.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Starts Elastic Compute Service (ECS) instances that are in the Stopped state.
       *
       * @description This operation is an asynchronous operation. After you call this operation to start ECS instances, the operation sets the status of the ECS instances to Starting and begins the startup process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instances. When the status of the ECS instances changes to `Running`, the instances are started.
       * ### [](#)Precautions
       * - You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instances that you want to start must be in the **Stopped** (`Stopped`) state.
       * - ECS instances stopped in economical mode may fail to be started due to insufficient resources.
       *
       * @param request StartInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstancesWithOptions(const Models::StartInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts Elastic Compute Service (ECS) instances that are in the Stopped state.
       *
       * @description This operation is an asynchronous operation. After you call this operation to start ECS instances, the operation sets the status of the ECS instances to Starting and begins the startup process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instances. When the status of the ECS instances changes to `Running`, the instances are started.
       * ### [](#)Precautions
       * - You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * - The ECS instances that you want to start must be in the **Stopped** (`Stopped`) state.
       * - ECS instances stopped in economical mode may fail to be started due to insufficient resources.
       *
       * @param request StartInstancesRequest
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstances(const Models::StartInstancesRequest &request);

      /**
       * @summary Invokes StartTerminalSession to create a session based on the session management feature. You can establish a WebSocket session with an ECS instance by specifying the instance ID. The WebSocketUrl returned by this operation can be used to establish a remote connection to the ECS instance.
       *
       * @description ## Operation description
       * When you customize a remote connection client by using code, you can invoke this operation to obtain the WebSocketUrl for establishing a remote connection to an ECS instance. Take note of the following items:
       * - The specified ECS instance must be in the Running state.
       * - Cloud Assistant Agent must be installed on the specified ECS instance. You can invoke [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check whether Cloud Assistant Agent is installed on the ECS instance and query the version number of Cloud Assistant Agent.
       *     - If Cloud Assistant Agent is not installed on the ECS instance, invoke [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) to install it.
       *     - The version number of Cloud Assistant Agent must be later than the following versions to support the session management feature. To upgrade Cloud Assistant Agent, see [Update or disable updates for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux operating system: 2.2.3.256
       *         - Windows operating system: 2.1.3.256
       * - After this operation is invoked, the WebSocketUrl is valid for 10 minutes.
       * - After a session is established, Cloud Assistant closes the connection if no data is transmitted for 3 minutes.
       * - In a single region, a maximum of 100 sessions can be created and active. A maximum of 20 sessions can be in the connected state for a single ECS instance. The bandwidth limit for a single session is 200 KB/s.
       * - The port forwarding feature supports only TCP port forwarding. UDP is not supported.
       * - To permanently shutdown a session and invalidate the WebSocketUrl, invoke the EndTerminalSession operation.
       *
       * @param tmpReq StartTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSessionWithOptions(const Models::StartTerminalSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes StartTerminalSession to create a session based on the session management feature. You can establish a WebSocket session with an ECS instance by specifying the instance ID. The WebSocketUrl returned by this operation can be used to establish a remote connection to the ECS instance.
       *
       * @description ## Operation description
       * When you customize a remote connection client by using code, you can invoke this operation to obtain the WebSocketUrl for establishing a remote connection to an ECS instance. Take note of the following items:
       * - The specified ECS instance must be in the Running state.
       * - Cloud Assistant Agent must be installed on the specified ECS instance. You can invoke [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) to check whether Cloud Assistant Agent is installed on the ECS instance and query the version number of Cloud Assistant Agent.
       *     - If Cloud Assistant Agent is not installed on the ECS instance, invoke [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) to install it.
       *     - The version number of Cloud Assistant Agent must be later than the following versions to support the session management feature. To upgrade Cloud Assistant Agent, see [Update or disable updates for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux operating system: 2.2.3.256
       *         - Windows operating system: 2.1.3.256
       * - After this operation is invoked, the WebSocketUrl is valid for 10 minutes.
       * - After a session is established, Cloud Assistant closes the connection if no data is transmitted for 3 minutes.
       * - In a single region, a maximum of 100 sessions can be created and active. A maximum of 20 sessions can be in the connected state for a single ECS instance. The bandwidth limit for a single session is 200 KB/s.
       * - The port forwarding feature supports only TCP port forwarding. UDP is not supported.
       * - To permanently shutdown a session and invalidate the WebSocketUrl, invoke the EndTerminalSession operation.
       *
       * @param request StartTerminalSessionRequest
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSession(const Models::StartTerminalSessionRequest &request);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify different stop strategies, stop modes, and batch operation modes to stop the ECS instance.
       *
       * @description This is an asynchronous operation. The ECS instance is not stopped immediately after a successful invocation. The ECS instance first enters the Stopping state. You can invoke [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the ECS instance is stopped.
       * ### Before you begin
       * - ECS instances that are locked for security reasons cannot be stopped by invoking this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - After you enable the economical mode for VPC-connected instances, you can set `StoppedMode=KeepCharging` to enable the standard stop mode. The ECS instance continues billing after it is stopped, and the ECS instance type inventory and Internet IP address are retained.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify different stop strategies, stop modes, and batch operation modes to stop the ECS instance.
       *
       * @description This is an asynchronous operation. The ECS instance is not stopped immediately after a successful invocation. The ECS instance first enters the Stopping state. You can invoke [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the ECS instance is stopped.
       * ### Before you begin
       * - ECS instances that are locked for security reasons cannot be stopped by invoking this operation. For more information, see [Impact of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       * - After you enable the economical mode for VPC-connected instances, you can set `StoppedMode=KeepCharging` to enable the standard stop mode. The ECS instance continues billing after it is stopped, and the ECS instance type inventory and Internet IP address are retained.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Stops one or more ECS instances. You can specify the stop method, stop mode, and batch operation mode.
       *
       * @description This is an asynchronous operation. After a successful call, the instance enters the Stopping state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
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
       * @summary Stops one or more ECS instances. You can specify the stop method, stop mode, and batch operation mode.
       *
       * @description This is an asynchronous operation. After a successful call, the instance enters the Stopping state. Call [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) to query the instance status. When the returned status is `Stopped`, the instance is stopped.
       * ### Before you begin
       * - After an instance is stopped, it becomes unavailable. Make sure that stopping the instance does not affect your business. Call [StartInstance](https://help.aliyun.com/document_detail/2679679.html) or [StartInstances](https://help.aliyun.com/document_detail/2679680.html) to start the instance.
       * - Instances that are locked for security reasons cannot be stopped by calling this operation. For more information, see [Impacts of resource security locks on API calls](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request StopInstancesRequest
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstances(const Models::StopInstancesRequest &request);

      /**
       * @summary \\\\\\\\* If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * \\\\\\\\* If you stop the process of a scheduled invocation command, the executions that have started are not interrupted. However, the execution does not start in the next period.
       *
       * @description ## 接口说明
       * - 停止单次命令进程后，已经开始执行的实例会继续执行，未开始执行的实例将不再执行。
       * - 停止周期命令进程后，已经开始执行的命令将继续执行，但后续将不会再进行下一次的执行。
       *
       * @param request StopInvocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocationWithOptions(const Models::StopInvocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary \\\\\\\\* If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * \\\\\\\\* If you stop the process of a scheduled invocation command, the executions that have started are not interrupted. However, the execution does not start in the next period.
       *
       * @description ## 接口说明
       * - 停止单次命令进程后，已经开始执行的实例会继续执行，未开始执行的实例将不再执行。
       * - 停止周期命令进程后，已经开始执行的命令将继续执行，但后续将不会再进行下一次的执行。
       *
       * @param request StopInvocationRequest
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocation(const Models::StopInvocationRequest &request);

      /**
       * @summary Creates and adds tags to Elastic Compute Service (ECS) resources.
       *
       * @description ## [](#)Usage notes
       * Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see [Tag limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to Elastic Compute Service (ECS) resources.
       *
       * @description ## [](#)Usage notes
       * Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see [Tag limits](https://help.aliyun.com/document_detail/25412.html).
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
       * - The Elastic Network Interface (ENI) must be in the **Active** or **InUse** state.
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
       * - The Elastic Network Interface (ENI) must be in the **Active** or **InUse** state.
       * - If you are operating on a primary network interface controller (NIC), the ECS instance to which the NIC is attached must be in the **Running** or **Stopped** state.
       *
       * @param request UnassignIpv6AddressesRequest
       * @return UnassignIpv6AddressesResponse
       */
      Models::UnassignIpv6AddressesResponse unassignIpv6Addresses(const Models::UnassignIpv6AddressesRequest &request);

      /**
       * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * - The ENI from which to unassign secondary private IP addresses must be in the **Available** (Available) or **InUse** (InUse) state.
       * - If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddressesWithOptions(const Models::UnassignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * - The ENI from which to unassign secondary private IP addresses must be in the **Available** (Available) or **InUse** (InUse) state.
       * - If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddresses(const Models::UnassignPrivateIpAddressesRequest &request);

      /**
       * @deprecated OpenAPI UnassociateEipAddress is deprecated, please use Vpc::2016-04-28::UnassociateEipAddress instead.
       *
       * @summary UnassociateEipAddress
       *
       * @param request UnassociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddressWithOptions(const Models::UnassociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UnassociateEipAddress is deprecated, please use Vpc::2016-04-28::UnassociateEipAddress instead.
       *
       * @summary UnassociateEipAddress
       *
       * @param request UnassociateEipAddressRequest
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddress(const Models::UnassociateEipAddressRequest &request);

      /**
       * @deprecated OpenAPI UnassociateHaVip is deprecated, please use Vpc::2016-04-28::UnassociateHaVip instead.
       *
       * @summary Disassociates a high-availability virtual IP address (HaVip) from an ECS instance.
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UnassociateHaVip is deprecated, please use Vpc::2016-04-28::UnassociateHaVip instead.
       *
       * @summary Disassociates a high-availability virtual IP address (HaVip) from an ECS instance.
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

      /**
       * @summary Unlock snapshots that are locked in compliance mode but are still in a cooling-off period. If the snapshot is locked in compliance mode and the cooling-off period has ended, it cannot be unlocked.
       *
       * @param request UnlockSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockSnapshotResponse
       */
      Models::UnlockSnapshotResponse unlockSnapshotWithOptions(const Models::UnlockSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlock snapshots that are locked in compliance mode but are still in a cooling-off period. If the snapshot is locked in compliance mode and the cooling-off period has ended, it cannot be unlocked.
       *
       * @param request UnlockSnapshotRequest
       * @return UnlockSnapshotResponse
       */
      Models::UnlockSnapshotResponse unlockSnapshot(const Models::UnlockSnapshotRequest &request);

      /**
       * @summary Removes tags from Elastic Compute Service (ECS) resources. After a tag is removed from a resource, the tag is automatically deleted if it is not added to other resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Elastic Compute Service (ECS) resources. After a tag is removed from a resource, the tag is automatically deleted if it is not added to other resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
