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
       * @summary Accepts the default operation for a system event in the Inquiring state and authorizes the system to perform the operation.
       *
       * @param request AcceptInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptInquiredSystemEventResponse
       */
      Models::AcceptInquiredSystemEventResponse acceptInquiredSystemEventWithOptions(const Models::AcceptInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts the default operation for a system event in the Inquiring state and authorizes the system to perform the operation.
       *
       * @param request AcceptInquiredSystemEventRequest
       * @return AcceptInquiredSystemEventResponse
       */
      Models::AcceptInquiredSystemEventResponse acceptInquiredSystemEvent(const Models::AcceptInquiredSystemEventRequest &request);

      /**
       * @deprecated OpenAPI ActivateRouterInterface is deprecated, please use Vpc::2016-04-28::ActivateRouterInterface instead.
       *
       * @summary ActivateRouterInterface
       *
       * @param request ActivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterfaceWithOptions(const Models::ActivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ActivateRouterInterface is deprecated, please use Vpc::2016-04-28::ActivateRouterInterface instead.
       *
       * @summary ActivateRouterInterface
       *
       * @param request ActivateRouterInterfaceRequest
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterface(const Models::ActivateRouterInterfaceRequest &request);

      /**
       * @deprecated OpenAPI AddBandwidthPackageIps is deprecated, please use Vpc::2016-04-28::AddBandwidthPackageIps instead.
       *
       * @summary AddBandwidthPackageIps
       *
       * @param request AddBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBandwidthPackageIpsResponse
       */
      Models::AddBandwidthPackageIpsResponse addBandwidthPackageIpsWithOptions(const Models::AddBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddBandwidthPackageIps is deprecated, please use Vpc::2016-04-28::AddBandwidthPackageIps instead.
       *
       * @summary AddBandwidthPackageIps
       *
       * @param request AddBandwidthPackageIpsRequest
       * @return AddBandwidthPackageIpsResponse
       */
      Models::AddBandwidthPackageIpsResponse addBandwidthPackageIps(const Models::AddBandwidthPackageIpsRequest &request);

      /**
       * @deprecated OpenAPI AddTags is deprecated, please use Ecs::2014-05-26::TagResources instead.
       *
       * @summary Adds tags to Elastic Compute Service (ECS) resources, or overwrites tags of ECS resources. You can add tags to ECS resources such as instances, disks, snapshots, images, and security groups for easy management.
       *
       * @description When you call this operation, take note of the following items:
       * *   Up to 20 tags can be added to each ECS resource.
       * *   `Tag.N.Key` must match `Tag.N.Value` based on the value of N.
       * *   If you add a tag that has the same key (`Tag.N.Key`) as an existing tag on the specified resource, the new tag value (`Tag.N.Value`) overwrites the original tag value.
       *
       * @param request AddTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTags is deprecated, please use Ecs::2014-05-26::TagResources instead.
       *
       * @summary Adds tags to Elastic Compute Service (ECS) resources, or overwrites tags of ECS resources. You can add tags to ECS resources such as instances, disks, snapshots, images, and security groups for easy management.
       *
       * @description When you call this operation, take note of the following items:
       * *   Up to 20 tags can be added to each ECS resource.
       * *   `Tag.N.Key` must match `Tag.N.Value` based on the value of N.
       * *   If you add a tag that has the same key (`Tag.N.Key`) as an existing tag on the specified resource, the new tag value (`Tag.N.Value`) overwrites the original tag value.
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
       * *   You can create up to 100 pay-as-you-go or subscription dedicated hosts at a time.
       * *   After a dedicated host is created, you can use the returned dedicated host ID as the value of a request parameter to call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the state of the dedicated host.
       * *   After you submit a request to create a dedicated host, an error is returned if a specific parameter is invalid or if the requested resources are insufficient. For more information about error causes, see the "Error codes" section of this topic.
       * *   After a dedicated host is created, you can call the [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) operation to migrate ECS instances from a shared host to the dedicated host. You can also migrate ECS instances from another dedicated host to the created dedicated host.
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
       * *   You can create up to 100 pay-as-you-go or subscription dedicated hosts at a time.
       * *   After a dedicated host is created, you can use the returned dedicated host ID as the value of a request parameter to call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the state of the dedicated host.
       * *   After you submit a request to create a dedicated host, an error is returned if a specific parameter is invalid or if the requested resources are insufficient. For more information about error causes, see the "Error codes" section of this topic.
       * *   After a dedicated host is created, you can call the [ModifyInstanceDeployment](https://help.aliyun.com/document_detail/134248.html) operation to migrate ECS instances from a shared host to the dedicated host. You can also migrate ECS instances from another dedicated host to the created dedicated host.
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
       * @description > This operation has been upgraded. We recommend that you do not use it. For information about the new version of this operation, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
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
       * @description > This operation has been upgraded. We recommend that you do not use it. For information about the new version of this operation, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Assigns a static public IP address (also called system-assigned public IP address or auto-assigned public IP address) to an Elastic Compute Service (ECS) instance.
       *
       * @description ### [](#)Precautions
       * *   The ECS instance to which you want to assign a static public IP address must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       * *   If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason" : "security"` for an ECS instance, the instance is [locked for security reasons](https://help.aliyun.com/document_detail/25695.html) and cannot be assigned a static public IP address.
       * *   When you call the AllocatePublicIpAddress operation for an ECS instance, make sure that the public bandwidth of the instance is greater than 0 Mbit/s. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to change the public bandwidth.
       * ### [](#)Considerations
       * *   Only users in the whitelist can specify `IpAddress` in the AllocatePublicIpAddress operation. If the public bandwidth of your ECS instance is greater than 0 Mbit/s, you can specify the ID of the instance (`InstanceId`) to randomly assign a static public IP address to the instance. If the public bandwidth of your ECS instance is 0 Mbit/s, you must call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to increase the public bandwidth of the instance before you call the AllocatePublicIpAddress operation.
       * *   You can assign only one static public IP address to an ECS instance. If the instance already has a static public IP address, the static public IP address is returned for the `IpAddress` response parameter.
       * *   After you assign a static public IP address to an ECS instance, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the public IP address to take effect.
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
       * *   The ECS instance to which you want to assign a static public IP address must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       * *   If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason" : "security"` for an ECS instance, the instance is [locked for security reasons](https://help.aliyun.com/document_detail/25695.html) and cannot be assigned a static public IP address.
       * *   When you call the AllocatePublicIpAddress operation for an ECS instance, make sure that the public bandwidth of the instance is greater than 0 Mbit/s. You can call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to change the public bandwidth.
       * ### [](#)Considerations
       * *   Only users in the whitelist can specify `IpAddress` in the AllocatePublicIpAddress operation. If the public bandwidth of your ECS instance is greater than 0 Mbit/s, you can specify the ID of the instance (`InstanceId`) to randomly assign a static public IP address to the instance. If the public bandwidth of your ECS instance is 0 Mbit/s, you must call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to increase the public bandwidth of the instance before you call the AllocatePublicIpAddress operation.
       * *   You can assign only one static public IP address to an ECS instance. If the instance already has a static public IP address, the static public IP address is returned for the `IpAddress` response parameter.
       * *   After you assign a static public IP address to an ECS instance, you must restart the instance ([RebootInstance](https://help.aliyun.com/document_detail/25502.html)) or start the instance ([StartInstance](https://help.aliyun.com/document_detail/25500.html)) for the public IP address to take effect.
       * If an ECS instance resides in a virtual private cloud (VPC), you can assign a static public IP address to the instance or associate an elastic IP address (EIP) with the instance. For more information, see [AssociateEipAddress](https://help.aliyun.com/document_detail/2518064.html).
       *
       * @param request AllocatePublicIpAddressRequest
       * @return AllocatePublicIpAddressResponse
       */
      Models::AllocatePublicIpAddressResponse allocatePublicIpAddress(const Models::AllocatePublicIpAddressRequest &request);

      /**
       * @summary Applies an automatic snapshot policy to one or more cloud disks. You can call this operation to replace the automatic snapshot policy of a cloud disk.
       *
       * @description *   Each disk can have only one automatic snapshot policy.
       * *   Each automatic snapshot policy can be applied to multiple disks.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an automatic snapshot policy to one or more cloud disks. You can call this operation to replace the automatic snapshot policy of a cloud disk.
       *
       * @description *   Each disk can have only one automatic snapshot policy.
       * *   Each automatic snapshot policy can be applied to multiple disks.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Assigns one or more IPv6 addresses to an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * You can specify IPv6 addresses in the CIDR block of the vSwitch to which the ENI is connected. You can also specify the number of IPv6 addresses that the system assigns to the ENI. Take note of the following items:
       * *   IPv6 must be enabled on the vSwitch to which the ENI is connected. For more information, see [Enable IPv6 for a vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * *   The ENI must be in the Available (Available) or InUse (InUse) state.
       * *   If you want to assign IPv6 addresses to a primary ENI, make sure that the Elastic Compute Service (ECS) instance to which the ENI is attached is in the Running (Running) or Stopped (Stopped) state.
       * *   The maximum number of IPv6 addresses that can be assigned to an ENI varies based on the instance type of the instance to which the ENI is attached.
       *     *   If the ENI is in the Available (Available) state, up to 10 IPv6 addresses can be assigned to the ENI.
       *     *   If the ENI is attached to an ECS instance, the maximum number of IPv6 addresses that can be assigned to the ENI varies based on the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       * *   After the operation is called, you can obtain the IPv6 addresses that are assigned to the ENI from the response.
       *
       * @param request AssignIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignIpv6AddressesResponse
       */
      Models::AssignIpv6AddressesResponse assignIpv6AddressesWithOptions(const Models::AssignIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns one or more IPv6 addresses to an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * You can specify IPv6 addresses in the CIDR block of the vSwitch to which the ENI is connected. You can also specify the number of IPv6 addresses that the system assigns to the ENI. Take note of the following items:
       * *   IPv6 must be enabled on the vSwitch to which the ENI is connected. For more information, see [Enable IPv6 for a vSwitch](https://help.aliyun.com/document_detail/98923.html).
       * *   The ENI must be in the Available (Available) or InUse (InUse) state.
       * *   If you want to assign IPv6 addresses to a primary ENI, make sure that the Elastic Compute Service (ECS) instance to which the ENI is attached is in the Running (Running) or Stopped (Stopped) state.
       * *   The maximum number of IPv6 addresses that can be assigned to an ENI varies based on the instance type of the instance to which the ENI is attached.
       *     *   If the ENI is in the Available (Available) state, up to 10 IPv6 addresses can be assigned to the ENI.
       *     *   If the ENI is attached to an ECS instance, the maximum number of IPv6 addresses that can be assigned to the ENI varies based on the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       * *   After the operation is called, you can obtain the IPv6 addresses that are assigned to the ENI from the response.
       *
       * @param request AssignIpv6AddressesRequest
       * @return AssignIpv6AddressesResponse
       */
      Models::AssignIpv6AddressesResponse assignIpv6Addresses(const Models::AssignIpv6AddressesRequest &request);

      /**
       * @summary Assigns secondary private IP addresses to an elastic network interface (ENI). You can specify available private IP addresses within the CIDR block of the vSwitch that is connected to the ENI. Alternatively, you can specify the number of private IP addresses that are automatically assigned from the CIDR block of the vSwitch to the ENI.
       *
       * @description ## [](#)Usage notes
       * *   The ENI to which you want to assign IP prefixes must be in the Available (Available) or InUse (InUse) state.
       * *   When you assign private IP addresses to a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the Running (Running) or Stopped (Stopped) state.
       * *   When an ENI is in the Available state, you can assign up to 49 secondary private IP addresses to the ENI. When an ENI is attached to an instance, the number of secondary private IP addresses that can be assigned to the ENI varies based on the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       * *   After the operation is called, you can obtain the assigned secondary private IP addresses from the response.
       *
       * @param request AssignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddressesWithOptions(const Models::AssignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns secondary private IP addresses to an elastic network interface (ENI). You can specify available private IP addresses within the CIDR block of the vSwitch that is connected to the ENI. Alternatively, you can specify the number of private IP addresses that are automatically assigned from the CIDR block of the vSwitch to the ENI.
       *
       * @description ## [](#)Usage notes
       * *   The ENI to which you want to assign IP prefixes must be in the Available (Available) or InUse (InUse) state.
       * *   When you assign private IP addresses to a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the Running (Running) or Stopped (Stopped) state.
       * *   When an ENI is in the Available state, you can assign up to 49 secondary private IP addresses to the ENI. When an ENI is attached to an instance, the number of secondary private IP addresses that can be assigned to the ENI varies based on the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
       * *   After the operation is called, you can obtain the assigned secondary private IP addresses from the response.
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
       * @summary AssociateHaVip
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssociateHaVip is deprecated, please use Vpc::2016-04-28::AssociateHaVip instead.
       *
       * @summary AssociateHaVip
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Links an instance that is deployed in the classic network to a virtual private cloud (VPC) by establishing a ClassicLink connection between the instance and the VPC. This way, the instance can communicate with cloud resources in the VPC over the internal network.
       *
       * @description When you call this operation, take note of the following items:
       * *   The instance that you want to connect to a VPC must be in the **Running** or **Stopped** state.
       * *   The ClassicLink feature must be enabled for the destination VPC. For more information, see [Create a ClassicLink connection](https://help.aliyun.com/document_detail/65413.html).
       * *   The instance and the VPC must reside in the same region.
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
       * *   The instance that you want to connect to a VPC must be in the **Running** or **Stopped** state.
       * *   The ClassicLink feature must be enabled for the destination VPC. For more information, see [Create a ClassicLink connection](https://help.aliyun.com/document_detail/65413.html).
       * *   The instance and the VPC must reside in the same region.
       *
       * @param request AttachClassicLinkVpcRequest
       * @return AttachClassicLinkVpcResponse
       */
      Models::AttachClassicLinkVpcResponse attachClassicLinkVpc(const Models::AttachClassicLinkVpcRequest &request);

      /**
       * @summary Attaches a pay-as-you-go data disk or a system disk to an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * *   The ECS instance and the disk must reside in the same zone.
       * *   The disk must be in the **Unattached** (`Available`) state.
       * *   When you attach the disk as a data disk to an ECS instance, take note of the following items:
       *     *   The ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *     *   If the disk was separately purchased, the billing method of the disk must be pay-as-you-go.
       *     *   If the disk is a system disk that was detached from an ECS instance, no limits apply to the billing method of the disk.
       *     *   If the disk is an elastic ephemeral disk that was detached from an ECS instance, the disk can be attached only to the instance.
       * *   When you attach the disk as the system disk to an ECS instance, take note of the following items:
       *     *   The ECS instance must be the original instance from which the system disk was detached.
       *     *   The ECS instance must be in the **Stopped** (`Stopped`) state.
       *     *   You must configure logon credentials for the ECS instance.
       *     *   The disk cannot be an elastic ephemeral disk.
       *     *   For more information about how to attach a system disk, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons. No operations are allowed on the instance.
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
       * *   The ECS instance and the disk must reside in the same zone.
       * *   The disk must be in the **Unattached** (`Available`) state.
       * *   When you attach the disk as a data disk to an ECS instance, take note of the following items:
       *     *   The ECS instance must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *     *   If the disk was separately purchased, the billing method of the disk must be pay-as-you-go.
       *     *   If the disk is a system disk that was detached from an ECS instance, no limits apply to the billing method of the disk.
       *     *   If the disk is an elastic ephemeral disk that was detached from an ECS instance, the disk can be attached only to the instance.
       * *   When you attach the disk as the system disk to an ECS instance, take note of the following items:
       *     *   The ECS instance must be the original instance from which the system disk was detached.
       *     *   The ECS instance must be in the **Stopped** (`Stopped`) state.
       *     *   You must configure logon credentials for the ECS instance.
       *     *   The disk cannot be an elastic ephemeral disk.
       *     *   For more information about how to attach a system disk, see [Detach or attach a system disk](https://help.aliyun.com/document_detail/146752.html).
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons. No operations are allowed on the instance.
       *
       * @param request AttachDiskRequest
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDisk(const Models::AttachDiskRequest &request);

      /**
       * @summary Attaches an instance Resource Access Management (RAM) role to Elastic Compute Service (ECS) instances.
       *
       * @description You can call the [DescribeInstanceRamRole](https://help.aliyun.com/document_detail/2679686.html) operation to query the [instance RAM roles](https://help.aliyun.com/document_detail/61175.html) that are attached to ECS instances.
       * >  If an ECS instance already has an instance RAM role, an error is returned when you attach another instance RAM role to the instance.
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
       * >  If an ECS instance already has an instance RAM role, an error is returned when you attach another instance RAM role to the instance.
       *
       * @param request AttachInstanceRamRoleRequest
       * @return AttachInstanceRamRoleResponse
       */
      Models::AttachInstanceRamRoleResponse attachInstanceRamRole(const Models::AttachInstanceRamRoleRequest &request);

      /**
       * @summary Binds an SSH key pair to one or more Linux instances.
       *
       * @description Take note of the following items:
       * *   SSH key pairs are not supported on Windows instances.
       * *   If an SSH key pair is bound to an instance, authentication by using the username and password is disabled for the instance.
       * *   If you bind an SSH key pair to an instance in the **running** state, you must call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance for the key pair to take effect.
       * *   If you bind an SSH key pair to an instance in the **stopped** state, you must call the [StartInstance](https://help.aliyun.com/document_detail/25500.html) operation to start the instance for the key pair to take effect.
       * *   If an instance is already bound to an SSH key pair, the new SSH key pair will replace the original one.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an SSH key pair to one or more Linux instances.
       *
       * @description Take note of the following items:
       * *   SSH key pairs are not supported on Windows instances.
       * *   If an SSH key pair is bound to an instance, authentication by using the username and password is disabled for the instance.
       * *   If you bind an SSH key pair to an instance in the **running** state, you must call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance for the key pair to take effect.
       * *   If you bind an SSH key pair to an instance in the **stopped** state, you must call the [StartInstance](https://help.aliyun.com/document_detail/25500.html) operation to start the instance for the key pair to take effect.
       * *   If an instance is already bound to an SSH key pair, the new SSH key pair will replace the original one.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Attaches an elastic network interface (ENI) to an Elastic Compute Service (ECS) instance that resides in a virtual private cloud (VPC). When you call this operation, you can specify parameters, such as NetworkInterfaceId, InstanceId, and NetworkCardIndex, in the request.
       *
       * @description Take note of the following items:
       * *   The ENI must be in the **Available** state. You can attach an ENI to only one instance that resides in the same zone and VPC as the ENI.
       * *   The instance must be in the Running or Stopped state. When you attach ENIs to instances of specific instance types, make sure that the instances are in the Stopped state. For more information, see the "Instance types of the ECS instances that must be in the Stopped (Stopped) state" section in the [Bind an ENI](https://help.aliyun.com/document_detail/58503.html) topic.
       * >If the last start time of the instance (including the start time of the instance if it is a new instance, the last restart time of the instance, and the last reactivation time of the instance) is before April 1st, 2018 and the instance is in the Running state, you must call the RebootInstance operation to restart the instance. If you do not call the RebootInstance operation to restart the instance, you cannot attach the ENI to the instance.
       * *   You can attach multiple ENIs to one instance. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       * *   The vSwitch to which the ENI is connected must be in the same zone and VPC as the vSwitch to which the instance is connected.
       * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status or events of the ENI to check whether the ENI is attached. The following figure shows the transitions between the statuses of the ENI.
       *     ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/vqky/AttachNetworkInterface.png)
       * - If the ENI is in the Attaching state, the ENI attachment request is sent and the ENI is being attached to the specified instance. 
       * - If the ENI is in the InUse state, the ENI is attached to the specified instance.
       * - If the ENI is in the Available state, the ENI failed to be attached.
       * **For examples on how to call this operation, see** [Attach an ENI](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterfaceWithOptions(const Models::AttachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an elastic network interface (ENI) to an Elastic Compute Service (ECS) instance that resides in a virtual private cloud (VPC). When you call this operation, you can specify parameters, such as NetworkInterfaceId, InstanceId, and NetworkCardIndex, in the request.
       *
       * @description Take note of the following items:
       * *   The ENI must be in the **Available** state. You can attach an ENI to only one instance that resides in the same zone and VPC as the ENI.
       * *   The instance must be in the Running or Stopped state. When you attach ENIs to instances of specific instance types, make sure that the instances are in the Stopped state. For more information, see the "Instance types of the ECS instances that must be in the Stopped (Stopped) state" section in the [Bind an ENI](https://help.aliyun.com/document_detail/58503.html) topic.
       * >If the last start time of the instance (including the start time of the instance if it is a new instance, the last restart time of the instance, and the last reactivation time of the instance) is before April 1st, 2018 and the instance is in the Running state, you must call the RebootInstance operation to restart the instance. If you do not call the RebootInstance operation to restart the instance, you cannot attach the ENI to the instance.
       * *   You can attach multiple ENIs to one instance. For more information, see [ENI overview](https://help.aliyun.com/document_detail/58496.html).
       * *   The vSwitch to which the ENI is connected must be in the same zone and VPC as the vSwitch to which the instance is connected.
       * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status or events of the ENI to check whether the ENI is attached. The following figure shows the transitions between the statuses of the ENI.
       *     ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/vqky/AttachNetworkInterface.png)
       * - If the ENI is in the Attaching state, the ENI attachment request is sent and the ENI is being attached to the specified instance. 
       * - If the ENI is in the InUse state, the ENI is attached to the specified instance.
       * - If the ENI is in the Available state, the ENI failed to be attached.
       * **For examples on how to call this operation, see** [Attach an ENI](https://help.aliyun.com/document_detail/471550.html).
       *
       * @param request AttachNetworkInterfaceRequest
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterface(const Models::AttachNetworkInterfaceRequest &request);

      /**
       * @summary Creates inbound security group rules in a security group. You can use the created rules to allow or deny inbound traffic from other objects to Elastic Compute Service (ECS) instances in the security group for fine-grained network access control.
       *
       * @description ### [](#)Precautions
       * *   **Quantity limit**: The maximum number of inbound and outbound rules in all security groups associated with an elastic network interface (ENI) cannot exceed 1,000. For more information, see the [Security groups](~~25412#SecurityGroupQuota1~~) section of the "Limits and quotas on ECS" topic.
       * *   **Rule priorities**: For inbound security group rules, the valid values of Priority range from 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
       * ### [](#)Considerations
       * If the security group rule that you call the AuthorizeSecurityGroup operation to create exists in the security group, the call is successful but no security group rule is created.
       * ### [](#)Parameters that define a security group rule
       * Define an inbound security group rule by configuring the following parameters together:
       * *   Source: You can specify one parameter from SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcetPrefixListId (prefix list ID), and SourceGroupId (source security group ID).
       * *   PortRange: specifies the range of destination port numbers.
       * *   IpProtocol: specifies the protocol.
       * *   Policy: specifies the action.
       * >  Advanced security groups do not support security group rules that reference security groups as authorization objects. Each basic security group can contain up to 20 security group rules that reference security groups as authorization objects.
       * ### [](#)Sample requests
       * Sample requests to create inbound security group rules that control access from different sources in a security group in the China (Hangzhou) region:
       * *   Sample request to create an inbound security group rule that controls access from a specific CIDR block:
       *         "RegionId":"cn-hangzhou", // Specify the region.
       *         "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group.
       *         "Permissions":[
       *              {
       *                "SourceCidrIp":"10.0.0.0/8", // Specify the source IPv4 CIDR block.
       *                "PortRange":"22/22", // Specify the port range.
       *                "IpProtocol":"TCP", // Specify the protocol.
       *                "Policy":"Accept" // Specify the action.
       *              }
       *         ]
       * *   Sample request to create an inbound security group rule that controls access from a security group and an inbound security group rule that controls access from a prefix list:
       *         "RegionId":"cn-hangzhou",
       *         "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *         "Permissions":[
       *              {
       *                "SourceGroupId":"sg-bp17vs63txqxbd****", // Specify the source security group.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              },{
       *                "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              }
       *         ]
       *
       * @param request AuthorizeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroupWithOptions(const Models::AuthorizeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates inbound security group rules in a security group. You can use the created rules to allow or deny inbound traffic from other objects to Elastic Compute Service (ECS) instances in the security group for fine-grained network access control.
       *
       * @description ### [](#)Precautions
       * *   **Quantity limit**: The maximum number of inbound and outbound rules in all security groups associated with an elastic network interface (ENI) cannot exceed 1,000. For more information, see the [Security groups](~~25412#SecurityGroupQuota1~~) section of the "Limits and quotas on ECS" topic.
       * *   **Rule priorities**: For inbound security group rules, the valid values of Priority range from 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
       * ### [](#)Considerations
       * If the security group rule that you call the AuthorizeSecurityGroup operation to create exists in the security group, the call is successful but no security group rule is created.
       * ### [](#)Parameters that define a security group rule
       * Define an inbound security group rule by configuring the following parameters together:
       * *   Source: You can specify one parameter from SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcetPrefixListId (prefix list ID), and SourceGroupId (source security group ID).
       * *   PortRange: specifies the range of destination port numbers.
       * *   IpProtocol: specifies the protocol.
       * *   Policy: specifies the action.
       * >  Advanced security groups do not support security group rules that reference security groups as authorization objects. Each basic security group can contain up to 20 security group rules that reference security groups as authorization objects.
       * ### [](#)Sample requests
       * Sample requests to create inbound security group rules that control access from different sources in a security group in the China (Hangzhou) region:
       * *   Sample request to create an inbound security group rule that controls access from a specific CIDR block:
       *         "RegionId":"cn-hangzhou", // Specify the region.
       *         "SecurityGroupId":"sg-bp67acfmxazb4p****", // Specify the security group.
       *         "Permissions":[
       *              {
       *                "SourceCidrIp":"10.0.0.0/8", // Specify the source IPv4 CIDR block.
       *                "PortRange":"22/22", // Specify the port range.
       *                "IpProtocol":"TCP", // Specify the protocol.
       *                "Policy":"Accept" // Specify the action.
       *              }
       *         ]
       * *   Sample request to create an inbound security group rule that controls access from a security group and an inbound security group rule that controls access from a prefix list:
       *         "RegionId":"cn-hangzhou",
       *         "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *         "Permissions":[
       *              {
       *                "SourceGroupId":"sg-bp17vs63txqxbd****", // Specify the source security group.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              },{
       *                "SourcePrefixListId":"pl-x1j1k5ykzqlixdcy****", // Specify the source prefix list.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              }
       *         ]
       *
       * @param request AuthorizeSecurityGroupRequest
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroup(const Models::AuthorizeSecurityGroupRequest &request);

      /**
       * @summary Creates outbound rules in a security group. You can use the created rules to allow or deny outbound traffic from Elastic Compute Service (ECS) instances in the security group to other objects for fine-grained network access control.
       *
       * @description ### [](#)Precautions
       * *   **Quantity limit**: The maximum number of inbound and outbound rules in all security groups associated with an elastic network interface (ENI) cannot exceed 1,000. For more information, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section of the "Limits" topic.
       * *   **Rule priorities**: For outbound security group rules, the valid values of Priority range from 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
       * ### [](#)Considerations
       * If the security group rule that you call the AuthorizeSecurityGroupEgress operation to create exists in the security group, the call is successful but no security group rule is created.
       * ### [](#)Parameters that define a security group rule
       * Define an outbound security group rule by configuring the following parameters together:
       * *   One of the following parameters: DestCidrIp, Ipv6DestCidrIp, DestPrefixListId, and DestGroupId. DestCidrIp specifies the destination IPv4 CIDR block. Ipv6DestCidrIp specifies the destination IPv6 CIDR block. DestPrefixListId specifies the ID of the destination prefix list. DestGroupId specifies the destination security group.
       * *   PortRange: specifies the range of destination port numbers.
       * *   IpProtocol: specifies the protocol.
       * *   Policy: specifies the action.
       * >  Advanced security groups do not support security group rules that reference security groups as authorization objects. Each basic security group can contain up to 20 security group rules that reference security groups as authorization objects.
       * ### [](#)Sample requests
       * Sample requests to create outbound security group rules that control access to different destinations in a security group in the China (Hangzhou) region:
       * *   Sample request to create an outbound security group rule that controls access to a specified CIDR block:
       *         "RegionId":"cn-hangzhou", // The region ID.
       *         "SecurityGroupId":"sg-bp17vs63txqxbds9***", // The ID of the source security group.
       *         "Permissions":[
       *              {
       *                "DestCidrIp":"10.0.0.0/8", // The destination IPv4 CIDR block.
       *                "PortRange":"-1/-1", // The range of destination port numbers.
       *                "IpProtocol":"ICMP", //T he protocol.       "Policy":"Accept" // Specify the action.
       *              }
       *         ]
       * *   Sample request to create an outbound security group rule that controls access to a security group and an outbound security group rule that controls access to a prefix list:
       *         "RegionId":"cn-hangzhou",
       *         "SecurityGroupId":"sg-bp17vs63txqxbds9***",
       *         "Permissions":[
       *              {
       *                "DestGroupId":"sg-bp67acfmxazb4pi***", // The ID of the destination security group.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              },{
       *               "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // The destination prefix list.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              }
       *         ]
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgressWithOptions(const Models::AuthorizeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates outbound rules in a security group. You can use the created rules to allow or deny outbound traffic from Elastic Compute Service (ECS) instances in the security group to other objects for fine-grained network access control.
       *
       * @description ### [](#)Precautions
       * *   **Quantity limit**: The maximum number of inbound and outbound rules in all security groups associated with an elastic network interface (ENI) cannot exceed 1,000. For more information, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section of the "Limits" topic.
       * *   **Rule priorities**: For outbound security group rules, the valid values of Priority range from 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
       * ### [](#)Considerations
       * If the security group rule that you call the AuthorizeSecurityGroupEgress operation to create exists in the security group, the call is successful but no security group rule is created.
       * ### [](#)Parameters that define a security group rule
       * Define an outbound security group rule by configuring the following parameters together:
       * *   One of the following parameters: DestCidrIp, Ipv6DestCidrIp, DestPrefixListId, and DestGroupId. DestCidrIp specifies the destination IPv4 CIDR block. Ipv6DestCidrIp specifies the destination IPv6 CIDR block. DestPrefixListId specifies the ID of the destination prefix list. DestGroupId specifies the destination security group.
       * *   PortRange: specifies the range of destination port numbers.
       * *   IpProtocol: specifies the protocol.
       * *   Policy: specifies the action.
       * >  Advanced security groups do not support security group rules that reference security groups as authorization objects. Each basic security group can contain up to 20 security group rules that reference security groups as authorization objects.
       * ### [](#)Sample requests
       * Sample requests to create outbound security group rules that control access to different destinations in a security group in the China (Hangzhou) region:
       * *   Sample request to create an outbound security group rule that controls access to a specified CIDR block:
       *         "RegionId":"cn-hangzhou", // The region ID.
       *         "SecurityGroupId":"sg-bp17vs63txqxbds9***", // The ID of the source security group.
       *         "Permissions":[
       *              {
       *                "DestCidrIp":"10.0.0.0/8", // The destination IPv4 CIDR block.
       *                "PortRange":"-1/-1", // The range of destination port numbers.
       *                "IpProtocol":"ICMP", //T he protocol.       "Policy":"Accept" // Specify the action.
       *              }
       *         ]
       * *   Sample request to create an outbound security group rule that controls access to a security group and an outbound security group rule that controls access to a prefix list:
       *         "RegionId":"cn-hangzhou",
       *         "SecurityGroupId":"sg-bp17vs63txqxbds9***",
       *         "Permissions":[
       *              {
       *                "DestGroupId":"sg-bp67acfmxazb4pi***", // The ID of the destination security group.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              },{
       *               "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", // The destination prefix list.
       *                "PortRange":"22/22",
       *                "IpProtocol":"TCP",
       *                "Policy":"Drop"
       *              }
       *         ]
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgress(const Models::AuthorizeSecurityGroupEgressRequest &request);

      /**
       * @summary Disables automatic snapshot policies for one or more disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables automatic snapshot policies for one or more disks.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels an ongoing image copy task.
       *
       * @description When you call this operation, take note of the following items:
       * *   After you cancel an image copy task, the image copy created in the destination region is deleted, and the copied image remains unchanged.
       * *   If the image copy task is complete, the CancelCopyImage operation fails, and an error is returned.
       *
       * @param request CancelCopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImageWithOptions(const Models::CancelCopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an ongoing image copy task.
       *
       * @description When you call this operation, take note of the following items:
       * *   After you cancel an image copy task, the image copy created in the destination region is deleted, and the copied image remains unchanged.
       * *   If the image copy task is complete, the CancelCopyImage operation fails, and an error is returned.
       *
       * @param request CancelCopyImageRequest
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImage(const Models::CancelCopyImageRequest &request);

      /**
       * @summary Cancels an image building task.
       *
       * @description Before you call the CancelImagePipelineExecution operation, make sure that the image building task to be canceled is in the BUILDING, PREPARING, or REPAIRING state.
       *
       * @param request CancelImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelImagePipelineExecutionResponse
       */
      Models::CancelImagePipelineExecutionResponse cancelImagePipelineExecutionWithOptions(const Models::CancelImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an image building task.
       *
       * @description Before you call the CancelImagePipelineExecution operation, make sure that the image building task to be canceled is in the BUILDING, PREPARING, or REPAIRING state.
       *
       * @param request CancelImagePipelineExecutionRequest
       * @return CancelImagePipelineExecutionResponse
       */
      Models::CancelImagePipelineExecutionResponse cancelImagePipelineExecution(const Models::CancelImagePipelineExecutionRequest &request);

      /**
       * @deprecated OpenAPI CancelPhysicalConnection is deprecated, please use Vpc::2016-04-28::CancelPhysicalConnection instead.
       *
       * @summary CancelPhysicalConnection
       *
       * @param request CancelPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnectionWithOptions(const Models::CancelPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelPhysicalConnection is deprecated, please use Vpc::2016-04-28::CancelPhysicalConnection instead.
       *
       * @summary CancelPhysicalConnection
       *
       * @param request CancelPhysicalConnectionRequest
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnection(const Models::CancelPhysicalConnectionRequest &request);

      /**
       * @summary Cancels simulated system events that are in the Scheduled or Executing state. After you cancel a simulated system event, the simulated event enters the Canceled state.
       *
       * @param request CancelSimulatedSystemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSimulatedSystemEventsResponse
       */
      Models::CancelSimulatedSystemEventsResponse cancelSimulatedSystemEventsWithOptions(const Models::CancelSimulatedSystemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels simulated system events that are in the Scheduled or Executing state. After you cancel a simulated system event, the simulated event enters the Canceled state.
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
       * *   The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * *   The instance has no EIPs associated.
       * *   The instance has no configuration change tasks that have not taken effect.
       * *   The public bandwidth of the instance is not 0 Mbit/s.
       * *   If the instance is a subscription instance, the billing method for network usage of the instance must be `pay-by-traffic`. The public IP address of a subscription instance that uses the `pay-by-bandwidth` billing method for network usage cannot be converted into an EIP. This requirement does not apply to pay-as-you-go instances. For more information, see [Change the billing method for network usage](https://help.aliyun.com/document_detail/178883.html).
       * *   If the instance is a subscription instance that resides in a VPC, the instance does not expire within 24 hours.
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
       * *   The instance is in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       * *   The instance has no EIPs associated.
       * *   The instance has no configuration change tasks that have not taken effect.
       * *   The public bandwidth of the instance is not 0 Mbit/s.
       * *   If the instance is a subscription instance, the billing method for network usage of the instance must be `pay-by-traffic`. The public IP address of a subscription instance that uses the `pay-by-bandwidth` billing method for network usage cannot be converted into an EIP. This requirement does not apply to pay-as-you-go instances. For more information, see [Change the billing method for network usage](https://help.aliyun.com/document_detail/178883.html).
       * *   If the instance is a subscription instance that resides in a VPC, the instance does not expire within 24 hours.
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
       * *   Only custom images that are in the `Available` state can be copied.
       * *   Custom images that belong to your Alibaba Cloud account can be copied across regions. Images that are shared with you by others can be copied only within the regions where the images reside.
       * *   When an image is being copied, the new image cannot be deleted by calling the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation. However, you can cancel the ongoing image copy task by calling the [CancelCopyImage](https://help.aliyun.com/document_detail/25539.html) operation.
       * *   A region supports only up to five concurrent image copy tasks. Excess image copy tasks are queued for execution.
       * *   You can configure `ResourceGroupId` to specify the resource group to which to assign the new image. If you do not configure `ResourceGroupId`, the new image is assigned to the default resource group.
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
       * *   Only custom images that are in the `Available` state can be copied.
       * *   Custom images that belong to your Alibaba Cloud account can be copied across regions. Images that are shared with you by others can be copied only within the regions where the images reside.
       * *   When an image is being copied, the new image cannot be deleted by calling the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation. However, you can cancel the ongoing image copy task by calling the [CancelCopyImage](https://help.aliyun.com/document_detail/25539.html) operation.
       * *   A region supports only up to five concurrent image copy tasks. Excess image copy tasks are queued for execution.
       * *   You can configure `ResourceGroupId` to specify the resource group to which to assign the new image. If you do not configure `ResourceGroupId`, the new image is assigned to the default resource group.
       *
       * @param request CopyImageRequest
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImage(const Models::CopyImageRequest &request);

      /**
       * @summary Copies a standard or encrypted snapshot from one region to another.
       *
       * @description When you call this operation, take note of the following item:
       * *   New snapshots (snapshot copies) cannot be used to roll back the disks for which source snapshots (copied snapshots) were created.
       * *   Local snapshots cannot be copied.
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
       * *   New snapshots (snapshot copies) cannot be used to roll back the disks for which source snapshots (copied snapshots) were created.
       * *   Local snapshots cannot be copied.
       *
       * @param request CopySnapshotRequest
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshot(const Models::CopySnapshotRequest &request);

      /**
       * @summary Creates an activation code. The activation code is used to register servers that are not provided by Alibaba Cloud as Alibaba Cloud managed instances.
       *
       * @description ## [](#)Usage notes
       * After you use an activation code to register a server that is not provided by Alibaba Cloud as an Alibaba Cloud managed instance, you can use various online services of Alibaba Cloud, such as Cloud Assistant, CloudOps Orchestration Service (OOS), and Apsara Devops, on the managed instance.
       * If a server is not provided by Alibaba Cloud, you can register the server as an Alibaba Cloud managed instance only if the server has Internet connectivity and runs one of the following operating systems:
       * *   Alibaba Cloud Linux 2, Alibaba Cloud Linux 3, or later
       * *   CentOS 6, CentOS 7, CentOS 8, or later
       * *   Debian 8, Debian 9, Debian 10, or later
       * *   Ubuntu 12, Ubuntu 14, Ubuntu 16, Ubuntu 18, or later
       * *   CoreOS
       * *   OpenSUSE
       * *   Red Hat 5, Red Hat 6, Red Hat 7, or later
       * *   SUSE Linux Enterprise Server 11, SUSE Linux Enterprise Server 12, SUSE Linux Enterprise Server 15, or later
       * *   Windows Server 2012, Windows Server 2016, Windows Server 2019, or later
       * You can have up to 5,000 activation codes per Alibaba Cloud region. When the number of activation codes exceeds 1,000, the usage of the activation codes must be greater than 50% before you can create additional activation codes.
       * >  To obtain the usage of activation codes, go to the **ECS Cloud Assistant** page in the Elastic Compute Service (ECS) console, click the **Manage Instances** tab, and then click **Register Instance**.
       *
       * @param request CreateActivationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActivationResponse
       */
      Models::CreateActivationResponse createActivationWithOptions(const Models::CreateActivationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an activation code. The activation code is used to register servers that are not provided by Alibaba Cloud as Alibaba Cloud managed instances.
       *
       * @description ## [](#)Usage notes
       * After you use an activation code to register a server that is not provided by Alibaba Cloud as an Alibaba Cloud managed instance, you can use various online services of Alibaba Cloud, such as Cloud Assistant, CloudOps Orchestration Service (OOS), and Apsara Devops, on the managed instance.
       * If a server is not provided by Alibaba Cloud, you can register the server as an Alibaba Cloud managed instance only if the server has Internet connectivity and runs one of the following operating systems:
       * *   Alibaba Cloud Linux 2, Alibaba Cloud Linux 3, or later
       * *   CentOS 6, CentOS 7, CentOS 8, or later
       * *   Debian 8, Debian 9, Debian 10, or later
       * *   Ubuntu 12, Ubuntu 14, Ubuntu 16, Ubuntu 18, or later
       * *   CoreOS
       * *   OpenSUSE
       * *   Red Hat 5, Red Hat 6, Red Hat 7, or later
       * *   SUSE Linux Enterprise Server 11, SUSE Linux Enterprise Server 12, SUSE Linux Enterprise Server 15, or later
       * *   Windows Server 2012, Windows Server 2016, Windows Server 2019, or later
       * You can have up to 5,000 activation codes per Alibaba Cloud region. When the number of activation codes exceeds 1,000, the usage of the activation codes must be greater than 50% before you can create additional activation codes.
       * >  To obtain the usage of activation codes, go to the **ECS Cloud Assistant** page in the Elastic Compute Service (ECS) console, click the **Manage Instances** tab, and then click **Register Instance**.
       *
       * @param request CreateActivationRequest
       * @return CreateActivationResponse
       */
      Models::CreateActivationResponse createActivation(const Models::CreateActivationRequest &request);

      /**
       * @summary Creates an auto provisioning group.
       *
       * @description ## [](#)Usage notes
       * *   Auto Provisioning is a service that allows quick deployment of an instance cluster that consists of spot instances and pay-as-you-go instances. Auto Provisioning supports push-button deployment of instance clusters across different billing methods, instance families, and zones. For more information, see [Use auto provisioning group-related API operations to create multiple ECS instances at the same time](https://help.aliyun.com/document_detail/200772.html).
       * *   Auto Provisioning uses auto provisioning groups to schedule and maintain computing resources. You can use auto provisioning groups to obtain a steady supply of computing resources. This helps reduce the impact on compute capacity when spot instances are reclaimed.
       * *   Auto Provisioning is provided free of charge. However, you are charged for instance resources that are created in auto provisioning groups. For more information, see [Overview of spot instances](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * *   When you specify both a launch template (`LaunchTemplateId`) and extended configurations (`LaunchConfiguration.*` parameters), LaunchTemplateId takes precedence.
       *
       * @param tmpReq CreateAutoProvisioningGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoProvisioningGroupResponse
       */
      Models::CreateAutoProvisioningGroupResponse createAutoProvisioningGroupWithOptions(const Models::CreateAutoProvisioningGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an auto provisioning group.
       *
       * @description ## [](#)Usage notes
       * *   Auto Provisioning is a service that allows quick deployment of an instance cluster that consists of spot instances and pay-as-you-go instances. Auto Provisioning supports push-button deployment of instance clusters across different billing methods, instance families, and zones. For more information, see [Use auto provisioning group-related API operations to create multiple ECS instances at the same time](https://help.aliyun.com/document_detail/200772.html).
       * *   Auto Provisioning uses auto provisioning groups to schedule and maintain computing resources. You can use auto provisioning groups to obtain a steady supply of computing resources. This helps reduce the impact on compute capacity when spot instances are reclaimed.
       * *   Auto Provisioning is provided free of charge. However, you are charged for instance resources that are created in auto provisioning groups. For more information, see [Overview of spot instances](https://help.aliyun.com/document_detail/52088.html) and [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * *   When you specify both a launch template (`LaunchTemplateId`) and extended configurations (`LaunchConfiguration.*` parameters), LaunchTemplateId takes precedence.
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
       * *   You can create up to 100 automatic snapshot policies per region for a single Alibaba Cloud account. If the maximum number of automatic snapshots for a disk is reached and a new snapshot creation task is created, the system deletes the oldest automatic snapshot of the disk.
       * *   If the instance to which a disk is attached is being stopped or restarted, the system cannot create snapshots for the disk based on the associated automatic snapshot policy.
       * *   If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are copied to the destination region and snapshot copies are encrypted by using the service key of the destination region. For more information about the limits on cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
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
       * *   You can create up to 100 automatic snapshot policies per region for a single Alibaba Cloud account. If the maximum number of automatic snapshots for a disk is reached and a new snapshot creation task is created, the system deletes the oldest automatic snapshot of the disk.
       * *   If the instance to which a disk is attached is being stopped or restarted, the system cannot create snapshots for the disk based on the associated automatic snapshot policy.
       * *   If cross-region snapshot replication is enabled and no encryption parameters are configured, encrypted snapshots are copied to the destination region and snapshot copies are encrypted by using the service key of the destination region. For more information about the limits on cross-region snapshot replication, see [Copy a snapshot](https://help.aliyun.com/document_detail/159441.html).
       * After the automatic snapshot policy is created, call the [ApplyAutoSnapshotPolicy](https://help.aliyun.com/document_detail/25531.html) operation to apply the policy to disks. If you want to modify the automatic snapshot policy, call the [ModifyAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25529.html) operation.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary Creates a capacity reservation.
       *
       * @description When you create a capacity reservation, you can specify attributes such as a zone and an instance type. The system uses a private pool to reserve resources that match the specified attributes. For more information, see [Overview of Immediate Capacity Reservation](https://help.aliyun.com/document_detail/193633.html).
       * *   Currently, only immediate capacity reservations are supported. Immediate capacity reservations take effect immediately after you purchase them. After you purchase an immediate capacity reservation, you are charged for the specified instance type based on the pay-as-you-go billing method regardless of whether you use the capacity reservation to create pay-as-you-go instances. Billing stops when you manually release the capacity reservation or when the capacity reservation expires and is automatically released.
       *     *   You can call the [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to specify private pool attributes when you create instances. To modify the attributes of a private pool, you can call the [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) operation. If an instance matches a private pool associated with a capacity reservation, you are charged based on the configurations of the instance such as the instance type, disks, and public bandwidth.
       *     *   Before you use a private pool associated with a capacity reservation to create pay-as-you-go instances, you are charged only for the specified instance type.
       * *   You can apply savings plans or regional reserved instances to offset hourly billing of unused immediate capacity reservations, and hourly fees of the instances that match the immediate capacity reservations. However, you cannot use zonal reserved instances to offset the hourly fees. We recommend that you purchase reserved instances or savings plans before you purchase immediate capacity reservations. This way, you can access resources free of charge within the coverage of the reserved instances or savings plans.
       * > You can call the CreateCapacityReservation operation to create only immediate capacity reservations. You can create immediate or scheduled capacity reservations in the Elastic Compute Service (ECS) console. For more information, see [Overview](~~193626#section-oil-qh5-xvx~~).
       *
       * @param request CreateCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCapacityReservationResponse
       */
      Models::CreateCapacityReservationResponse createCapacityReservationWithOptions(const Models::CreateCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a capacity reservation.
       *
       * @description When you create a capacity reservation, you can specify attributes such as a zone and an instance type. The system uses a private pool to reserve resources that match the specified attributes. For more information, see [Overview of Immediate Capacity Reservation](https://help.aliyun.com/document_detail/193633.html).
       * *   Currently, only immediate capacity reservations are supported. Immediate capacity reservations take effect immediately after you purchase them. After you purchase an immediate capacity reservation, you are charged for the specified instance type based on the pay-as-you-go billing method regardless of whether you use the capacity reservation to create pay-as-you-go instances. Billing stops when you manually release the capacity reservation or when the capacity reservation expires and is automatically released.
       *     *   You can call the [CreateInstance](https://help.aliyun.com/document_detail/25499.html) or [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to specify private pool attributes when you create instances. To modify the attributes of a private pool, you can call the [ModifyInstanceAttachmentAttributes](https://help.aliyun.com/document_detail/190006.html) operation. If an instance matches a private pool associated with a capacity reservation, you are charged based on the configurations of the instance such as the instance type, disks, and public bandwidth.
       *     *   Before you use a private pool associated with a capacity reservation to create pay-as-you-go instances, you are charged only for the specified instance type.
       * *   You can apply savings plans or regional reserved instances to offset hourly billing of unused immediate capacity reservations, and hourly fees of the instances that match the immediate capacity reservations. However, you cannot use zonal reserved instances to offset the hourly fees. We recommend that you purchase reserved instances or savings plans before you purchase immediate capacity reservations. This way, you can access resources free of charge within the coverage of the reserved instances or savings plans.
       * > You can call the CreateCapacityReservation operation to create only immediate capacity reservations. You can create immediate or scheduled capacity reservations in the Elastic Compute Service (ECS) console. For more information, see [Overview](~~193626#section-oil-qh5-xvx~~).
       *
       * @param request CreateCapacityReservationRequest
       * @return CreateCapacityReservationResponse
       */
      Models::CreateCapacityReservationResponse createCapacityReservation(const Models::CreateCapacityReservationRequest &request);

      /**
       * @summary Creates a Cloud Assistant command, which can be a Shell, PowerShell, or batch command.
       *
       * @description ## [](#)Usage notes
       * *   You can create commands of the following types:
       *     *   Batch commands (RunBatScript), applicable to Windows instances
       *     *   PowerShell commands (RunPowerShellScript), applicable to Windows instances
       *     *   Shell commands (RunShellScript), applicable to Linux instances
       * *   You can specify the Timeout parameter to set the maximum timeout period for executions of a command on Elastic Compute Service (ECS) instances. If an execution times out, [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) forcefully terminates the command process by canceling the process ID (PID) of the command.
       *     *   For a one-time task, when the execution times out, the state of the command ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       *     *   For a scheduled task, take note of the following items:
       *         *   The timeout period takes effect on each execution.
       *         *   When an execution times out, the state ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       *         *   The timeout of one execution does not affect the subsequent executions.
       * *   You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can also apply for a quota increase. For information about how to query and increase quotas, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       * *   You can use WorkingDir to specify the execution directory of a Cloud Assistant command. For Linux instances, the default execution directory of Cloud Assistant commands is the home directory of the root user, which is `/root`. For Windows instances, the default execution directory of Cloud Assistant commands is the directory where the Cloud Assistant Agent process resides, such as `C:\\Windows\\System32`.
       * *   You can enable the custom parameter feature for a Cloud Assistant command by setting EnableParameter to true. When you set CommandContent, you can define custom parameters in the {{parameter}} format. Then, when the [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) operation is called, the key-value pairs of custom parameters are passed in. For example, if a command is `echo {{name}}`, the Parameters parameter can be used to pass in the `<name, Jack>` key-value pair when the InvokeCommand operation is called. The name key of the custom parameter is automatically replaced by the paired Jack value to generate a new command. As a result, the `echo Jack` command is run.
       *
       * @param request CreateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommandWithOptions(const Models::CreateCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Cloud Assistant command, which can be a Shell, PowerShell, or batch command.
       *
       * @description ## [](#)Usage notes
       * *   You can create commands of the following types:
       *     *   Batch commands (RunBatScript), applicable to Windows instances
       *     *   PowerShell commands (RunPowerShellScript), applicable to Windows instances
       *     *   Shell commands (RunShellScript), applicable to Linux instances
       * *   You can specify the Timeout parameter to set the maximum timeout period for executions of a command on Elastic Compute Service (ECS) instances. If an execution times out, [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) forcefully terminates the command process by canceling the process ID (PID) of the command.
       *     *   For a one-time task, when the execution times out, the state of the command ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) becomes Failed.
       *     *   For a scheduled task, take note of the following items:
       *         *   The timeout period takes effect on each execution.
       *         *   When an execution times out, the state ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       *         *   The timeout of one execution does not affect the subsequent executions.
       * *   You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can also apply for a quota increase. For information about how to query and increase quotas, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       * *   You can use WorkingDir to specify the execution directory of a Cloud Assistant command. For Linux instances, the default execution directory of Cloud Assistant commands is the home directory of the root user, which is `/root`. For Windows instances, the default execution directory of Cloud Assistant commands is the directory where the Cloud Assistant Agent process resides, such as `C:\\Windows\\System32`.
       * *   You can enable the custom parameter feature for a Cloud Assistant command by setting EnableParameter to true. When you set CommandContent, you can define custom parameters in the {{parameter}} format. Then, when the [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) operation is called, the key-value pairs of custom parameters are passed in. For example, if a command is `echo {{name}}`, the Parameters parameter can be used to pass in the `<name, Jack>` key-value pair when the InvokeCommand operation is called. The name key of the custom parameter is automatically replaced by the paired Jack value to generate a new command. As a result, the `echo Jack` command is run.
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
       * @summary Creates a deployment set in a region.
       *
       * @param request CreateDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentSetResponse
       */
      Models::CreateDeploymentSetResponse createDeploymentSetWithOptions(const Models::CreateDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a deployment set in a region.
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
       * @summary Creates a diagnostic report for a resource. When you call this operation, you can configure the MetricSetId parameter to create a diagnostic report based on the specified diagnostic metric set. Then, you can call the DescribeDiagnosticReportAttributes operation based on the returned diagnostic report ID to view the details of the diagnostic report.
       *
       * @param request CreateDiagnosticReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReportWithOptions(const Models::CreateDiagnosticReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostic report for a resource. When you call this operation, you can configure the MetricSetId parameter to create a diagnostic report based on the specified diagnostic metric set. Then, you can call the DescribeDiagnosticReportAttributes operation based on the returned diagnostic report ID to view the details of the diagnostic report.
       *
       * @param request CreateDiagnosticReportRequest
       * @return CreateDiagnosticReportResponse
       */
      Models::CreateDiagnosticReportResponse createDiagnosticReport(const Models::CreateDiagnosticReportRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description *   You can enable the multi-attach (`MultiAttach`) feature when you create a disk. Before you enable the multi-attach feature, we recommend that you familiarize yourself with the feature and the limits on the feature. For more information, see [NVMe protocol](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature to attach a cloud disk to multiple ECS instances](https://help.aliyun.com/document_detail/262105.html).
       * *   You can create disks of the following disk categories: basic disks, ultra disks, standard SSDs, Enterprise SSDs (ESSDs), ESSD Entry disks, Regional ESSDs, ESSD AutoPL disks, standard elastic ephemeral disks, and premium elastic ephemeral disks.
       * *   Before you can create a disk, you must complete real-name verification. Complete real-name verification on the [Real-name Verification](https://account.console.aliyun.com/#/auth/home) page in the Alibaba Cloud Management Console.
       * *   When you create disks, you may be charged for the resources used. We recommend that you familiarize yourself with the billing methods of Elastic Compute Service (ECS) resources before you create a disk. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * *   When you call this operation to create a disk, specific parameters are automatically specified.
       *     *   `DeleteAutoSnapshot` is automatically set to `true` when a disk is created. This indicates that the automatic snapshots of the disk are deleted when the disk is released. You can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) operation to query the DeleteAutoSnapshot value for the disk and call the [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) operation to change the DeleteAutoSnapshot value for the disk.
       *     *   If you do not specify a performance level when you create an ESSD, the performance level of the ESSD is automatically set to PL1. To change the performance level of the ESSD, you can call the [ModifyDiskSpec](https://help.aliyun.com/document_detail/123780.html) operation.
       *     *   `Portable` is automatically set to `true` when a disk is created, which indicates that the disk is a pay-as-you-go disk.
       *
       * @param request CreateDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDiskWithOptions(const Models::CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @description *   You can enable the multi-attach (`MultiAttach`) feature when you create a disk. Before you enable the multi-attach feature, we recommend that you familiarize yourself with the feature and the limits on the feature. For more information, see [NVMe protocol](https://help.aliyun.com/document_detail/256487.html) and [Use the multi-attach feature to attach a cloud disk to multiple ECS instances](https://help.aliyun.com/document_detail/262105.html).
       * *   You can create disks of the following disk categories: basic disks, ultra disks, standard SSDs, Enterprise SSDs (ESSDs), ESSD Entry disks, Regional ESSDs, ESSD AutoPL disks, standard elastic ephemeral disks, and premium elastic ephemeral disks.
       * *   Before you can create a disk, you must complete real-name verification. Complete real-name verification on the [Real-name Verification](https://account.console.aliyun.com/#/auth/home) page in the Alibaba Cloud Management Console.
       * *   When you create disks, you may be charged for the resources used. We recommend that you familiarize yourself with the billing methods of Elastic Compute Service (ECS) resources before you create a disk. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * *   When you call this operation to create a disk, specific parameters are automatically specified.
       *     *   `DeleteAutoSnapshot` is automatically set to `true` when a disk is created. This indicates that the automatic snapshots of the disk are deleted when the disk is released. You can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) operation to query the DeleteAutoSnapshot value for the disk and call the [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) operation to change the DeleteAutoSnapshot value for the disk.
       *     *   If you do not specify a performance level when you create an ESSD, the performance level of the ESSD is automatically set to PL1. To change the performance level of the ESSD, you can call the [ModifyDiskSpec](https://help.aliyun.com/document_detail/123780.html) operation.
       *     *   `Portable` is automatically set to `true` when a disk is created, which indicates that the disk is a pay-as-you-go disk.
       *
       * @param request CreateDiskRequest
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDisk(const Models::CreateDiskRequest &request);

      /**
       * @summary Creates an elasticity assurance in a region. When you call this operation, you can specify parameters, such as ZoneId, InstanceType, Period, PeriodUnit, and AutoRenew, in the request.
       *
       * @description Elasticity Assurance provides a new method to purchase and use guaranteed resources in a flexible manner. Elasticity Assurance is a resource reservation service that provides assured access to resources for pay-as-you-go Elastic Compute Service (ECS) instances. For more information, see [Overview of Elasticity Assurance](https://help.aliyun.com/document_detail/193630.html).
       * *   After you purchase an elasticity assurance, you cannot request a refund for the elasticity assurance. For information about the billing of elasticity assurances, see [Resource assurance](https://help.aliyun.com/document_detail/432502.html).
       * *   Elasticity assurances can be used to create only pay-as-you-go ECS instances.
       * *   Elasticity assurances only support the unlimited mode. You can set `AssuranceTimes` only to `Unlimited`. Elasticity assurances in unlimited mode can be used for an unlimited number of times within their terms. Elasticity assurances in unlimited mode take effect immediately after creation.
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
       * *   After you purchase an elasticity assurance, you cannot request a refund for the elasticity assurance. For information about the billing of elasticity assurances, see [Resource assurance](https://help.aliyun.com/document_detail/432502.html).
       * *   Elasticity assurances can be used to create only pay-as-you-go ECS instances.
       * *   Elasticity assurances only support the unlimited mode. You can set `AssuranceTimes` only to `Unlimited`. Elasticity assurances in unlimited mode can be used for an unlimited number of times within their terms. Elasticity assurances in unlimited mode take effect immediately after creation.
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
       * @summary CreateHaVip
       *
       * @param request CreateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVipWithOptions(const Models::CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateHaVip is deprecated, please use Vpc::2016-04-28::CreateHaVip instead.
       *
       * @summary CreateHaVip
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates a high performance computing (HPC) cluster.
       *
       * @param request CreateHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHpcClusterResponse
       */
      Models::CreateHpcClusterResponse createHpcClusterWithOptions(const Models::CreateHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a high performance computing (HPC) cluster.
       *
       * @param request CreateHpcClusterRequest
       * @return CreateHpcClusterResponse
       */
      Models::CreateHpcClusterResponse createHpcCluster(const Models::CreateHpcClusterRequest &request);

      /**
       * @summary Creates a custom image. After you call this operation to create a custom image, you can call the RunInstances operation to create Elastic Compute Service (ECS) instances from the custom image or call the ReplaceSystemDisk operation to replace system disks by using the custom image.
       *
       * @description ### [](#)Considerations
       * *   This operation is an asynchronous operation. After a request to create a custom image is sent, an image ID is returned but the creation of the custom image is in progress. You can call the [DescribeImage](https://help.aliyun.com/document_detail/2679797.html) operation to query the status of the custom image. When the status of the custom image is `Available` in the response, the image is created and available. For more information, see [Overview of custom images](https://help.aliyun.com/document_detail/172789.html).
       * *   If the response contains {"OperationLocks": {"LockReason" : "security"}} when you query information about an ECS instance, the instance is locked for security reasons, and you cannot create a custom image from the instance.
       * *   To optimize the image, we recommend that you specify `DetectionStrategy` when you create a custom image. For information about the image check feature, see [Overview](https://help.aliyun.com/document_detail/439819.html).
       * You can call the CreateImage operation to create a custom image by using one of the following methods. The following request parameters are prioritized in descending order: InstanceId, DiskDeviceMapping, and SnapshotId. If your request contains two or more of these parameters, the custom image is created based on the parameter that has a higher priority.
       * *   **Create a custom image from an instance**. Specify an instance ID (`InstanceId`).
       *     *   The ECS instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *     *   After the CreateImage operation is called, a snapshot is created for each cloud disk of the instance.
       *     **
       *     **Note** When you create a custom image from a running ECS instance, cache data may not be written to disks. In this case, the data of the custom image may be slightly different from the data of the instance. Before you create a custom image from the instance, we recommend that you stop the instance by calling the StopInstancesoperation.
       * *   **Create a custom image from a snapshot. The specified snapshot must be created after July 15, 2013.**
       *     *   **Create a custom image from a system disk snapshot of an ECS instance**. You need to only specify the ID of the system disk snapshot by using `SnapshotId`.
       *     *   **Create a custom image from a system disk snapshot and data disk snapshots of an ECS instance**. You need to establish data association between the disks by specifying `DiskDeviceMapping`.
       *         *   You can specify only one snapshot to create the system disk in the custom image.
       *         *   You can specify up to 16 snapshots to use to create data disks in the custom image. If you do not specify `DiskDeviceMapping.N.SnapshotId`, an empty data disk with the default capacity is created.
       * >  When an ECS instance is released, the system disk of the instance is converted to a pay-as-you-go data disk. You cannot create a custom image from the snapshot of this disk. You must create a custom image from the snapshot of this disk before the instance is released.
       *
       * @param request CreateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImageWithOptions(const Models::CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image. After you call this operation to create a custom image, you can call the RunInstances operation to create Elastic Compute Service (ECS) instances from the custom image or call the ReplaceSystemDisk operation to replace system disks by using the custom image.
       *
       * @description ### [](#)Considerations
       * *   This operation is an asynchronous operation. After a request to create a custom image is sent, an image ID is returned but the creation of the custom image is in progress. You can call the [DescribeImage](https://help.aliyun.com/document_detail/2679797.html) operation to query the status of the custom image. When the status of the custom image is `Available` in the response, the image is created and available. For more information, see [Overview of custom images](https://help.aliyun.com/document_detail/172789.html).
       * *   If the response contains {"OperationLocks": {"LockReason" : "security"}} when you query information about an ECS instance, the instance is locked for security reasons, and you cannot create a custom image from the instance.
       * *   To optimize the image, we recommend that you specify `DetectionStrategy` when you create a custom image. For information about the image check feature, see [Overview](https://help.aliyun.com/document_detail/439819.html).
       * You can call the CreateImage operation to create a custom image by using one of the following methods. The following request parameters are prioritized in descending order: InstanceId, DiskDeviceMapping, and SnapshotId. If your request contains two or more of these parameters, the custom image is created based on the parameter that has a higher priority.
       * *   **Create a custom image from an instance**. Specify an instance ID (`InstanceId`).
       *     *   The ECS instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
       *     *   After the CreateImage operation is called, a snapshot is created for each cloud disk of the instance.
       *     **
       *     **Note** When you create a custom image from a running ECS instance, cache data may not be written to disks. In this case, the data of the custom image may be slightly different from the data of the instance. Before you create a custom image from the instance, we recommend that you stop the instance by calling the StopInstancesoperation.
       * *   **Create a custom image from a snapshot. The specified snapshot must be created after July 15, 2013.**
       *     *   **Create a custom image from a system disk snapshot of an ECS instance**. You need to only specify the ID of the system disk snapshot by using `SnapshotId`.
       *     *   **Create a custom image from a system disk snapshot and data disk snapshots of an ECS instance**. You need to establish data association between the disks by specifying `DiskDeviceMapping`.
       *         *   You can specify only one snapshot to create the system disk in the custom image.
       *         *   You can specify up to 16 snapshots to use to create data disks in the custom image. If you do not specify `DiskDeviceMapping.N.SnapshotId`, an empty data disk with the default capacity is created.
       * >  When an ECS instance is released, the system disk of the instance is converted to a pay-as-you-go data disk. You cannot create a custom image from the snapshot of this disk. You must create a custom image from the snapshot of this disk before the instance is released.
       *
       * @param request CreateImageRequest
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImage(const Models::CreateImageRequest &request);

      /**
       * @summary Creates an image component. Image components are used to store the builder template commands that are commonly used when you create images.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   You can create only custom image components.
       * *   Each version number of an image component must be unique. When you add a version of an image component to an image template, you can specify the component by its name and version number.
       * *   The content size of an image component cannot exceed 16 KB. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImageComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageComponentResponse
       */
      Models::CreateImageComponentResponse createImageComponentWithOptions(const Models::CreateImageComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image component. Image components are used to store the builder template commands that are commonly used when you create images.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   You can create only custom image components.
       * *   Each version number of an image component must be unique. When you add a version of an image component to an image template, you can specify the component by its name and version number.
       * *   The content size of an image component cannot exceed 16 KB. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImageComponentRequest
       * @return CreateImageComponentResponse
       */
      Models::CreateImageComponentResponse createImageComponent(const Models::CreateImageComponentRequest &request);

      /**
       * @summary Creates an image template. Image templates can be used to create images.
       *
       * @description ## [](#)Usage notes
       * You can use image templates to customize image content and create images across regions and accounts. Take note of the following items:
       * *   You can create only custom image templates.
       * *   You can specify only a public image, a custom image, a shared image, or an image family as the source image when you create an image template.
       * *   When you use an image template to create an image, multiple intermediate instances are created. You are charged for the intermediate instances on a pay-as-you-go basis. For more information, see [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * When you use `BuildContent` to specify the build content in an image template, take note of the following items:
       * *   The `FROM` command is deprecated. Regardless of whether you specify the `FROM` command in `BuildContent`, the system uses the source image specified by `BaseImageType` and `BaseImage`. BaseImageType specifies the type of the source image and BaseImage specifies the source image.
       * *   The size of BuildContent cannot exceed 16 KB. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipelineWithOptions(const Models::CreateImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image template. Image templates can be used to create images.
       *
       * @description ## [](#)Usage notes
       * You can use image templates to customize image content and create images across regions and accounts. Take note of the following items:
       * *   You can create only custom image templates.
       * *   You can specify only a public image, a custom image, a shared image, or an image family as the source image when you create an image template.
       * *   When you use an image template to create an image, multiple intermediate instances are created. You are charged for the intermediate instances on a pay-as-you-go basis. For more information, see [Pay-as-you-go](https://help.aliyun.com/document_detail/40653.html).
       * When you use `BuildContent` to specify the build content in an image template, take note of the following items:
       * *   The `FROM` command is deprecated. Regardless of whether you specify the `FROM` command in `BuildContent`, the system uses the source image specified by `BaseImageType` and `BaseImage`. BaseImageType specifies the type of the source image and BaseImage specifies the source image.
       * *   The size of BuildContent cannot exceed 16 KB. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
       * For more information, see [Image Builder](https://help.aliyun.com/document_detail/197410.html).
       *
       * @param request CreateImagePipelineRequest
       * @return CreateImagePipelineResponse
       */
      Models::CreateImagePipelineResponse createImagePipeline(const Models::CreateImagePipelineRequest &request);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance. When you call this operation, you can specify different parameters to create instances based on your business requirements.
       *
       * @description >  This operation is no longer iterated or updated. We recommend that you call the [RunInstances](https://help.aliyun.com/document_detail/2679677.html) operation instead.
       * **Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.**
       * This operation is an asynchronous operation. After a request to create an ECS instance is sent, an ECS instance ID is immediately returned but the instance may be still being created. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. If the status of the instance is `Stopped` in the DescribeInstanceStatus response, the instance is created. In this case, you can call the [StartInstance](https://help.aliyun.com/document_detail/2679679.html) operation to start the instance.
       * ### [](#)Prerequisites
       * *   Make sure that you are familiar with the ECS billing methods because you may be charged for the resources that are used by the instance. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * *   Make sure that the number of ECS instances you create or the number of vCPUs on ECS instances of all instance types you create does not exceed the corresponding quota. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas) to view the quotas.
       * *   Before you create ECS instances of the Virtual Private Cloud (VPC) type in a region, create a VPC in the region. For more information, see [Create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### [](#)Considerations
       * *   If you create a subscription instance (`PrePaid`), available coupons in your account are automatically used.
       * *   If you want to create instances with 512 MiB of memory, you cannot use Windows Server images except for Windows Server Semi-Annual Channel images. If you want to create instances with 4 GiB or more of memory, you cannot use 32-bit OS image.
       * *   If you call the CreateInstance operation to create an instance, no public IP address is automatically assigned to the instance. If the InternetMaxBandwidthOut value of the instance is greater than 0 Mbit/s, call the [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) operation to assign a public IP address to the instance. If the InternetMaxBandwidthOut value of the instance is 0 Mbit/s, call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to set InternetMaxBandwidthOut to a value greater than 0 Mbit/s and then call the [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) operation to assign a public IP address to the instance.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits" topic.
       * ### [](#)Suggestions
       * *   **Instance type selection**: See [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the performance data of instance types, or see [Instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn about how to select instance types.
       * *   **Query of available resources**: Call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation to query resources available in a specific region or zone.
       * *   **User data**: If the instance type supports [user data](https://help.aliyun.com/document_detail/49121.html), you can use UserData to pass in user data. We recommend that you do not pass in confidential information, such as passwords or private keys, in plaintext as user data. This is because the system does not encrypt `UserData` values when API requests are sent. If you must pass in confidential information as user data, we recommend that you encrypt and encode the information in Base64 before you pass in the information. Then, decode and decrypt the information within the instance for subsequent use.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription or pay-as-you-go Elastic Compute Service (ECS) instance. When you call this operation, you can specify different parameters to create instances based on your business requirements.
       *
       * @description >  This operation is no longer iterated or updated. We recommend that you call the [RunInstances](https://help.aliyun.com/document_detail/2679677.html) operation instead.
       * **Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.**
       * This operation is an asynchronous operation. After a request to create an ECS instance is sent, an ECS instance ID is immediately returned but the instance may be still being created. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. If the status of the instance is `Stopped` in the DescribeInstanceStatus response, the instance is created. In this case, you can call the [StartInstance](https://help.aliyun.com/document_detail/2679679.html) operation to start the instance.
       * ### [](#)Prerequisites
       * *   Make sure that you are familiar with the ECS billing methods because you may be charged for the resources that are used by the instance. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html).
       * *   Make sure that the number of ECS instances you create or the number of vCPUs on ECS instances of all instance types you create does not exceed the corresponding quota. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas) to view the quotas.
       * *   Before you create ECS instances of the Virtual Private Cloud (VPC) type in a region, create a VPC in the region. For more information, see [Create a VPC](https://help.aliyun.com/document_detail/65430.html).
       * ### [](#)Considerations
       * *   If you create a subscription instance (`PrePaid`), available coupons in your account are automatically used.
       * *   If you want to create instances with 512 MiB of memory, you cannot use Windows Server images except for Windows Server Semi-Annual Channel images. If you want to create instances with 4 GiB or more of memory, you cannot use 32-bit OS image.
       * *   If you call the CreateInstance operation to create an instance, no public IP address is automatically assigned to the instance. If the InternetMaxBandwidthOut value of the instance is greater than 0 Mbit/s, call the [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) operation to assign a public IP address to the instance. If the InternetMaxBandwidthOut value of the instance is 0 Mbit/s, call the [ModifyInstanceNetworkSpec](https://help.aliyun.com/document_detail/2679879.html) operation to set InternetMaxBandwidthOut to a value greater than 0 Mbit/s and then call the [AllocatePublicIpAddress](https://help.aliyun.com/document_detail/25544.html) operation to assign a public IP address to the instance.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits" topic.
       * ### [](#)Suggestions
       * *   **Instance type selection**: See [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the performance data of instance types, or see [Instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn about how to select instance types.
       * *   **Query of available resources**: Call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation to query resources available in a specific region or zone.
       * *   **User data**: If the instance type supports [user data](https://help.aliyun.com/document_detail/49121.html), you can use UserData to pass in user data. We recommend that you do not pass in confidential information, such as passwords or private keys, in plaintext as user data. This is because the system does not encrypt `UserData` values when API requests are sent. If you must pass in confidential information as user data, we recommend that you encrypt and encode the information in Base64 before you pass in the information. Then, decode and decrypt the information within the instance for subsequent use.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an SSH key pair. The system stores the public key and returns the unencrypted private key. The private key is encoded with PEM in the PKCS#8 format. You must properly store the private key and ensure its confidentiality.
       *
       * @description In addition to calling the CreateKeyPair operation to create a key pair, you can use a third-party tool to create a key pair and then call the [ImportKeyPair](https://help.aliyun.com/document_detail/51774.html) operation to upload the key pair to an Alibaba Cloud region.
       * Up to 500 key pairs can be created in each region. For more information, see the "SSH key pair limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSH key pair. The system stores the public key and returns the unencrypted private key. The private key is encoded with PEM in the PKCS#8 format. You must properly store the private key and ensure its confidentiality.
       *
       * @description In addition to calling the CreateKeyPair operation to create a key pair, you can use a third-party tool to create a key pair and then call the [ImportKeyPair](https://help.aliyun.com/document_detail/51774.html) operation to upload the key pair to an Alibaba Cloud region.
       * Up to 500 key pairs can be created in each region. For more information, see the "SSH key pair limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Creates a launch template. A launch template eliminates the need to configure a large number of parameters every time you create an Elastic Compute Service (ECS) instance.
       *
       * @description After you create a launch template by calling the CreateLaunchTemplate operation, a default version that has a version number of 1 is automatically generated for the launch template. You can call the `CreateLaunchTemplateVersion` operation to create additional versions for the launch template. Version numbers start from 1 and increment by 1. If you specify a launch template but do not specify a launch template version number when you call the [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to create instances, the default version of the launch template is used.
       * Launch templates contain preset configurations that are used to create instances, such as the region ID, image ID, instance type, security group ID, and public bandwidth settings. If a specific parameter is not included in a launch template, you need to manually specify the parameter when you use the launch template to create instances.
       * Take note of the following items:
       * *   You can retain up to 30 launch templates in each region in your Alibaba Cloud account. Each launch template can have up to 30 versions.
       * *   Most parameters in launch templates are optional. When you create a launch template, ECS does not verify the existence or validity of specified parameter values. The parameter values are verified only when you use the launch template to create instances.
       * *   If you configured a specific parameter in a launch template, you cannot filter out the parameter when you call the [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to create instances from the launch template. For example, if you set `HostName` to LocalHost in a launch template but do not specify `HostName` when you call the `RunInstances` operation to create instances from the launch template, the hostname of the created instances is `LocalHost`. If you want to overwrite `LocalHost`, which is the value of HostName in the launch template, you can set `HostName` to MyHost or a different value when you call the `RunInstances` operation.
       *
       * @param request CreateLaunchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplateWithOptions(const Models::CreateLaunchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a launch template. A launch template eliminates the need to configure a large number of parameters every time you create an Elastic Compute Service (ECS) instance.
       *
       * @description After you create a launch template by calling the CreateLaunchTemplate operation, a default version that has a version number of 1 is automatically generated for the launch template. You can call the `CreateLaunchTemplateVersion` operation to create additional versions for the launch template. Version numbers start from 1 and increment by 1. If you specify a launch template but do not specify a launch template version number when you call the [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to create instances, the default version of the launch template is used.
       * Launch templates contain preset configurations that are used to create instances, such as the region ID, image ID, instance type, security group ID, and public bandwidth settings. If a specific parameter is not included in a launch template, you need to manually specify the parameter when you use the launch template to create instances.
       * Take note of the following items:
       * *   You can retain up to 30 launch templates in each region in your Alibaba Cloud account. Each launch template can have up to 30 versions.
       * *   Most parameters in launch templates are optional. When you create a launch template, ECS does not verify the existence or validity of specified parameter values. The parameter values are verified only when you use the launch template to create instances.
       * *   If you configured a specific parameter in a launch template, you cannot filter out the parameter when you call the [RunInstances](https://help.aliyun.com/document_detail/63440.html) operation to create instances from the launch template. For example, if you set `HostName` to LocalHost in a launch template but do not specify `HostName` when you call the `RunInstances` operation to create instances from the launch template, the hostname of the created instances is `LocalHost`. If you want to overwrite `LocalHost`, which is the value of HostName in the launch template, you can set `HostName` to MyHost or a different value when you call the `RunInstances` operation.
       *
       * @param request CreateLaunchTemplateRequest
       * @return CreateLaunchTemplateResponse
       */
      Models::CreateLaunchTemplateResponse createLaunchTemplate(const Models::CreateLaunchTemplateRequest &request);

      /**
       * @summary Creates a version for a launch template. You can use the created version to create Elastic Compute Service (ECS) instances, scaling groups, or auto provisioning groups.
       *
       * @description ## [](#)Usage notes
       * If you want to modify the parameters of a launch template version, you can create another version with different parameter settings for the launch template. You can create up to 30 versions for each launch template.
       *
       * @param request CreateLaunchTemplateVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaunchTemplateVersionResponse
       */
      Models::CreateLaunchTemplateVersionResponse createLaunchTemplateVersionWithOptions(const Models::CreateLaunchTemplateVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version for a launch template. You can use the created version to create Elastic Compute Service (ECS) instances, scaling groups, or auto provisioning groups.
       *
       * @description ## [](#)Usage notes
       * If you want to modify the parameters of a launch template version, you can create another version with different parameter settings for the launch template. You can create up to 30 versions for each launch template.
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
       * @summary Creates an elastic network interface (ENI). You can specify an IP address as the primary private IP address of the ENI.
       *
       * @description Take note of the following items:
       * *   This operation is a synchronous operation. After an ENI is created, the ENI immediately enters the Available (`Available`) state and can be attached to an Elastic Compute Service (ECS) instance.
       * *   If `NetworkInterfaceId` is empty in the response, no ENI is created. Recall the operation to create an ENI.
       * *   An ENI can be attached only to a single ECS instance that resides in a virtual private cloud (VPC).
       * *   When an ENI is detached from an ECS instance and attached to another ECS instance, the attributes of the ENI remain unchanged and network traffic is redirected to the new instance.
       * *   When you call this operation to create an ENI, you can assign up to 49 secondary private IP addresses to the ENI.
       * *   If you want to assign IPv6 addresses when you create an ENI, make sure that IPv6 is enabled for the vSwitch with which you want to associate the ENI. For more information, see [What is an IPv6 gateway?](https://help.aliyun.com/document_detail/98896.html)
       * *   A limit is imposed on the number of ENIs that can be created per Alibaba Cloud region per account. You can view the quota limit in the ECS console. For more information, see [Manage ECS quotas](https://help.aliyun.com/document_detail/184115.html).
       * ### [](#)Sample requests
       * **Create an ENI**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // Specify the ID of the security group in which to create the ENI.VSwitchId:  vsw-bp19wo63nleroq22g****,   // Specify the ID of the vSwitch to which to connect the ENI.
       * **Create an ENI and specify an IP address as the primary private IP address of the ENI**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // Specify the ID of the security group in which to create the ENI.VSwitchId:  vsw-bp19wo63nleroq22g****,   // Specify the ID of the vSwitch to which to connect the ENI.PrimaryIpAddress:  192.168.0.*,   // Specify an IP address as the primary private IP address of the ENI.
       *
       * @param request CreateNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterfaceWithOptions(const Models::CreateNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an elastic network interface (ENI). You can specify an IP address as the primary private IP address of the ENI.
       *
       * @description Take note of the following items:
       * *   This operation is a synchronous operation. After an ENI is created, the ENI immediately enters the Available (`Available`) state and can be attached to an Elastic Compute Service (ECS) instance.
       * *   If `NetworkInterfaceId` is empty in the response, no ENI is created. Recall the operation to create an ENI.
       * *   An ENI can be attached only to a single ECS instance that resides in a virtual private cloud (VPC).
       * *   When an ENI is detached from an ECS instance and attached to another ECS instance, the attributes of the ENI remain unchanged and network traffic is redirected to the new instance.
       * *   When you call this operation to create an ENI, you can assign up to 49 secondary private IP addresses to the ENI.
       * *   If you want to assign IPv6 addresses when you create an ENI, make sure that IPv6 is enabled for the vSwitch with which you want to associate the ENI. For more information, see [What is an IPv6 gateway?](https://help.aliyun.com/document_detail/98896.html)
       * *   A limit is imposed on the number of ENIs that can be created per Alibaba Cloud region per account. You can view the quota limit in the ECS console. For more information, see [Manage ECS quotas](https://help.aliyun.com/document_detail/184115.html).
       * ### [](#)Sample requests
       * **Create an ENI**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // Specify the ID of the security group in which to create the ENI.VSwitchId:  vsw-bp19wo63nleroq22g****,   // Specify the ID of the vSwitch to which to connect the ENI.
       * **Create an ENI and specify an IP address as the primary private IP address of the ENI**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SecurityGroupId:  sg-bp10jztp6b0sdsyl****,   // Specify the ID of the security group in which to create the ENI.VSwitchId:  vsw-bp19wo63nleroq22g****,   // Specify the ID of the vSwitch to which to connect the ENI.PrimaryIpAddress:  192.168.0.*,   // Specify an IP address as the primary private IP address of the ENI.
       *
       * @param request CreateNetworkInterfaceRequest
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterface(const Models::CreateNetworkInterfaceRequest &request);

      /**
       * @summary Grants a permission on an elastic network interface (ENI) to an Alibaba Cloud partner (a certified ISV) or an individual user.
       *
       * @description Before you call this operation, submit a ticket to apply for using this operation.
       *
       * @param request CreateNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfacePermissionResponse
       */
      Models::CreateNetworkInterfacePermissionResponse createNetworkInterfacePermissionWithOptions(const Models::CreateNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a permission on an elastic network interface (ENI) to an Alibaba Cloud partner (a certified ISV) or an individual user.
       *
       * @description Before you call this operation, submit a ticket to apply for using this operation.
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
       * *   A prefix list is a collection of network prefixes (CIDR blocks) and can be referenced to configure network rules for other resources. For more information, see [Overview](https://help.aliyun.com/document_detail/206223.html).
       * *   When you create a prefix list, take note of the following items:
       *     *   You must specify an IP address family (IPv4 or IPv6) for the prefix list, and cannot change the IP address family after the prefix list is created. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
       *     *   You must specify the maximum number of entries that the prefix list can contain. You cannot modify the maximum number of entries after the prefix list is created.
       *     *   You can specify entries for the prefix list. Each entry consists of a CIDR block and the description for the CIDR block. The total number of entries cannot exceed the maximum number of entries that you specified.
       * *   For more information about the limits on prefix lists and other resources, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * *   You can create Resource Access Management (RAM) users and grant them minimum permissions. This eliminates the need to share the AccessKey pair of your Alibaba Cloud account with other users and reduces security risks for your enterprises. For information about how to grant permissions on prefix lists to RAM users, see [Grant a RAM user permissions on prefix lists](https://help.aliyun.com/document_detail/206175.html)
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
       * *   A prefix list is a collection of network prefixes (CIDR blocks) and can be referenced to configure network rules for other resources. For more information, see [Overview](https://help.aliyun.com/document_detail/206223.html).
       * *   When you create a prefix list, take note of the following items:
       *     *   You must specify an IP address family (IPv4 or IPv6) for the prefix list, and cannot change the IP address family after the prefix list is created. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
       *     *   You must specify the maximum number of entries that the prefix list can contain. You cannot modify the maximum number of entries after the prefix list is created.
       *     *   You can specify entries for the prefix list. Each entry consists of a CIDR block and the description for the CIDR block. The total number of entries cannot exceed the maximum number of entries that you specified.
       * *   For more information about the limits on prefix lists and other resources, see [Limits](https://help.aliyun.com/document_detail/25412.html).
       * *   You can create Resource Access Management (RAM) users and grant them minimum permissions. This eliminates the need to share the AccessKey pair of your Alibaba Cloud account with other users and reduces security risks for your enterprises. For information about how to grant permissions on prefix lists to RAM users, see [Grant a RAM user permissions on prefix lists](https://help.aliyun.com/document_detail/206175.html)
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
       * @summary CreateRouterInterface
       *
       * @param request CreateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterfaceWithOptions(const Models::CreateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateRouterInterface is deprecated, please use Vpc::2016-04-28::CreateRouterInterface instead.
       *
       * @summary CreateRouterInterface
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
       * @description *   By default, the internal access control policy (InnerAccessPolicy) of the basic security group that you create by calling this operation is internal interconnectivity (**Accept**). You can call the [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html) operation to change the value of InnerAccessPolicy for the basic security group.
       * *   By default, the internal access control policy (InnerAccessPolicy) of the advanced security group that you create by calling this operation is internal isolation (**Drop**). The InnerAccessPolicy value of the advanced security group cannot be changed.
       * *   You can create a limited number of security groups per region. You can create at least 100 security groups per region. For more information, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section in the "Limits" topic.
       * *   To create a security group of the Virtual Private Cloud (VPC) type, you must specify VpcId.
       *
       * @param request CreateSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroupWithOptions(const Models::CreateSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group.
       *
       * @description *   By default, the internal access control policy (InnerAccessPolicy) of the basic security group that you create by calling this operation is internal interconnectivity (**Accept**). You can call the [ModifySecurityGroupPolicy](https://help.aliyun.com/document_detail/2679846.html) operation to change the value of InnerAccessPolicy for the basic security group.
       * *   By default, the internal access control policy (InnerAccessPolicy) of the advanced security group that you create by calling this operation is internal isolation (**Drop**). The InnerAccessPolicy value of the advanced security group cannot be changed.
       * *   You can create a limited number of security groups per region. You can create at least 100 security groups per region. For more information, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section in the "Limits" topic.
       * *   To create a security group of the Virtual Private Cloud (VPC) type, you must specify VpcId.
       *
       * @param request CreateSecurityGroupRequest
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroup(const Models::CreateSecurityGroupRequest &request);

      /**
       * @summary Schedules simulated system events of Elastic Compute Service (ECS) instances. The simulated system events do not actually occur on or affect ECS instances.
       *
       * @description You can use the ECS console, call [ECS API](https://help.aliyun.com/document_detail/63962.html) operations, or use CloudMonitor to view the scheduled simulated system events.
       * The following descriptions provide the lifecycle of a simulated system event:
       * *   Scheduled: The state of the simulated system event is automatically changed to Scheduled after it is scheduled.
       * *   Executed: The state of the simulated system event is automatically changed to Executed at the time specified by the NotBefore parameter if no manual intervention is involved.
       * *   Canceled: The state of the simulated system event is changed to Canceled if you cancel the event by calling the [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) operation.
       * *   Avoided: The state of the simulated system event generated from maintenance-triggered instance restart can be changed to Avoided if you restart the instance before the scheduled time of the simulated system event. The maintenance-triggered instance restart is indicated by the SystemMaintenance.Reboot value. For more information, see [RebootInstance](https://help.aliyun.com/document_detail/25502.html).
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEventsWithOptions(const Models::CreateSimulatedSystemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules simulated system events of Elastic Compute Service (ECS) instances. The simulated system events do not actually occur on or affect ECS instances.
       *
       * @description You can use the ECS console, call [ECS API](https://help.aliyun.com/document_detail/63962.html) operations, or use CloudMonitor to view the scheduled simulated system events.
       * The following descriptions provide the lifecycle of a simulated system event:
       * *   Scheduled: The state of the simulated system event is automatically changed to Scheduled after it is scheduled.
       * *   Executed: The state of the simulated system event is automatically changed to Executed at the time specified by the NotBefore parameter if no manual intervention is involved.
       * *   Canceled: The state of the simulated system event is changed to Canceled if you cancel the event by calling the [CancelSimulatedSystemEvents](https://help.aliyun.com/document_detail/88808.html) operation.
       * *   Avoided: The state of the simulated system event generated from maintenance-triggered instance restart can be changed to Avoided if you restart the instance before the scheduled time of the simulated system event. The maintenance-triggered instance restart is indicated by the SystemMaintenance.Reboot value. For more information, see [RebootInstance](https://help.aliyun.com/document_detail/25502.html).
       *
       * @param request CreateSimulatedSystemEventsRequest
       * @return CreateSimulatedSystemEventsResponse
       */
      Models::CreateSimulatedSystemEventsResponse createSimulatedSystemEvents(const Models::CreateSimulatedSystemEventsRequest &request);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description The local snapshot feature is replaced by the instant access feature. Take note of the following items:
       * *   If you have used the local snapshot feature before December 14, 2020, you can use `Category`.
       * *   If you have not used the local snapshot feature before December 14, 2020, new snapshots of your Enterprise SSD (ESSD) series disks are instantly available after creation without the need for additional configurations, regardless of whether the snapshots are manually or automatically created. ESSD-series disks include ESSDs, ESSD AutoPL disks, ESSD Entry disks, and Regional ESSDs. InstantAccess, InstantAccessRetentionDays, and DisableInstantAccess that are related to the instant access feature no longer take effect in API operations. Available is added to the DescribeSnapshots and DescribeSnapshotGroups operations to indicate whether snapshots are available.
       * Prerequisites:
       * *   Elastic Compute Service (ECS) Snapshot is activated. For more information, see [Activate ECS Snapshot](https://help.aliyun.com/document_detail/108381.html).
       * *   The disk for which you want to create a snapshot is in the **In_use** or **Available** state. Take note of the following items:
       *     *   If the disk is in the **In_use** state, make sure that the ECS instance to which the disk is attached is in the **Running** or **Stopped** state.
       *     *   If the disk is in the **Available** state, make sure that the disk was attached to an ECS instance. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       *     *   When you use a disk to create a dynamic extended volume or a RAID array, we recommend that you create a snapshot-consistent group and enable the application-consistent snapshot feature to back up data. When a business system involves multiple disks, you can create a snapshot-consistent group to ensure a consistent write order and the crash consistency of business system data. For more information, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html) and [Create application-consistent snapshots](https://help.aliyun.com/document_detail/208589.html).
       * When you create a snapshot, take note of the following items:
       * *   We recommend that you create snapshots during off-peak hours because snapshot creation degrades disk I/O performance by up to 10% and slows down data reads and writes.
       * *   If a snapshot is being created, you cannot use this snapshot to create a custom image by calling the [CreateImage](https://help.aliyun.com/document_detail/25535.html) operation.
       * *   If operations are performed on the disk and incremental data is generated when a snapshot is being created, the incremental data is not included in the snapshot.
       * *   When a snapshot is being created for a disk that is attached to an ECS instance, do not perform operations that change the status of the instance, such as stopping or restarting the instance. Otherwise, the snapshot may fail to be created.
       * *   You cannot resize a disk for which a snapshot is being created. Wait until the snapshot is created before you resize the disk.
       * *   You can create snapshots for a disk that is in the **Expired** (`Expired`) state. If the release time scheduled for a disk arrives while a snapshot is being created for the disk, the snapshot is in the **Creating** (`Creating`) state and is deleted when the disk is released.
       * *   After you create snapshots, you are charged snapshot storage fees per region based on the total size of the snapshots that are stored in the region. For more information, see [Snapshots](https://help.aliyun.com/document_detail/56159.html).
       * *   In the following scenarios, you cannot create snapshots for a disk:
       *     *   The number of manual snapshots of the disk has reached 256.
       *     *   A snapshot is being created for the disk.
       *     *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons and no operations are allowed on the instance.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description The local snapshot feature is replaced by the instant access feature. Take note of the following items:
       * *   If you have used the local snapshot feature before December 14, 2020, you can use `Category`.
       * *   If you have not used the local snapshot feature before December 14, 2020, new snapshots of your Enterprise SSD (ESSD) series disks are instantly available after creation without the need for additional configurations, regardless of whether the snapshots are manually or automatically created. ESSD-series disks include ESSDs, ESSD AutoPL disks, ESSD Entry disks, and Regional ESSDs. InstantAccess, InstantAccessRetentionDays, and DisableInstantAccess that are related to the instant access feature no longer take effect in API operations. Available is added to the DescribeSnapshots and DescribeSnapshotGroups operations to indicate whether snapshots are available.
       * Prerequisites:
       * *   Elastic Compute Service (ECS) Snapshot is activated. For more information, see [Activate ECS Snapshot](https://help.aliyun.com/document_detail/108381.html).
       * *   The disk for which you want to create a snapshot is in the **In_use** or **Available** state. Take note of the following items:
       *     *   If the disk is in the **In_use** state, make sure that the ECS instance to which the disk is attached is in the **Running** or **Stopped** state.
       *     *   If the disk is in the **Available** state, make sure that the disk was attached to an ECS instance. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       *     *   When you use a disk to create a dynamic extended volume or a RAID array, we recommend that you create a snapshot-consistent group and enable the application-consistent snapshot feature to back up data. When a business system involves multiple disks, you can create a snapshot-consistent group to ensure a consistent write order and the crash consistency of business system data. For more information, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html) and [Create application-consistent snapshots](https://help.aliyun.com/document_detail/208589.html).
       * When you create a snapshot, take note of the following items:
       * *   We recommend that you create snapshots during off-peak hours because snapshot creation degrades disk I/O performance by up to 10% and slows down data reads and writes.
       * *   If a snapshot is being created, you cannot use this snapshot to create a custom image by calling the [CreateImage](https://help.aliyun.com/document_detail/25535.html) operation.
       * *   If operations are performed on the disk and incremental data is generated when a snapshot is being created, the incremental data is not included in the snapshot.
       * *   When a snapshot is being created for a disk that is attached to an ECS instance, do not perform operations that change the status of the instance, such as stopping or restarting the instance. Otherwise, the snapshot may fail to be created.
       * *   You cannot resize a disk for which a snapshot is being created. Wait until the snapshot is created before you resize the disk.
       * *   You can create snapshots for a disk that is in the **Expired** (`Expired`) state. If the release time scheduled for a disk arrives while a snapshot is being created for the disk, the snapshot is in the **Creating** (`Creating`) state and is deleted when the disk is released.
       * *   After you create snapshots, you are charged snapshot storage fees per region based on the total size of the snapshots that are stored in the region. For more information, see [Snapshots](https://help.aliyun.com/document_detail/56159.html).
       * *   In the following scenarios, you cannot create snapshots for a disk:
       *     *   The number of manual snapshots of the disk has reached 256.
       *     *   A snapshot is being created for the disk.
       *     *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ECS instance, the instance is locked for security reasons and no operations are allowed on the instance.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Creates a snapshot-consistent group for the disks of an Elastic Compute Service (ECS) instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description You can specify `InstanceId` to create a snapshot-consistent group for disks on a specific ECS instance. You can also specify `DiskId.N` to create a snapshot-consistent group for multiple disks on multiple ECS instances within the same zone.
       * >  You cannot specify both `DiskId.N` and `ExcludeDiskId.N` in the same request. If you specify `InstanceId`, you can use `DiskId.N` to specify only disks on the specified ECS instance and cannot use DiskId.N to specify disks across ECS instances.
       * Take note of the following items:
       * *   The disks for which you want to create a snapshot must be in the **In Use** (`In_use`) or **Unattached** (`Available`) state.
       *     *   If a disk is in the **In Use** (`In_use`) state, make sure that the ECS instance to which the disk is attached is in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *     *   If a disk is in the **Unattached** (`Available`) state, make sure that the disk has been attached to ECS instances. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       * *   Snapshot-consistent groups can be used to create snapshots only for Enterprise SSDs (ESSDs), ESSD AutoPL disks, and ESSD Entry disks.
       * *   A snapshot-consistent group can contain snapshots of up to 16 disks, including system disks and data disks, and cannot exceed 32 TiB in size.
       * *   Snapshots that you created are stored indefinitely until you delete the snapshots. We recommend that you delete unnecessary snapshots on a regular basis to prevent excess snapshot storage fees.
       * *   Snapshot-consistent groups cannot be created for disks for which multi-attach feature is enabled. If disks for which the multi-attach feature is enabled are attached to an ECS instance, you must specify the `ExcludeDiskId.N` parameter to exclude the disks.
       * For more information about the snapshot-consistent group feature, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html).
       *
       * @param request CreateSnapshotGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotGroupResponse
       */
      Models::CreateSnapshotGroupResponse createSnapshotGroupWithOptions(const Models::CreateSnapshotGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot-consistent group for the disks of an Elastic Compute Service (ECS) instance. A snapshot-consistent group contains snapshots of one or more disks.
       *
       * @description You can specify `InstanceId` to create a snapshot-consistent group for disks on a specific ECS instance. You can also specify `DiskId.N` to create a snapshot-consistent group for multiple disks on multiple ECS instances within the same zone.
       * >  You cannot specify both `DiskId.N` and `ExcludeDiskId.N` in the same request. If you specify `InstanceId`, you can use `DiskId.N` to specify only disks on the specified ECS instance and cannot use DiskId.N to specify disks across ECS instances.
       * Take note of the following items:
       * *   The disks for which you want to create a snapshot must be in the **In Use** (`In_use`) or **Unattached** (`Available`) state.
       *     *   If a disk is in the **In Use** (`In_use`) state, make sure that the ECS instance to which the disk is attached is in the **Running** (`Running`) or **Stopped** (`Stopped`) state.
       *     *   If a disk is in the **Unattached** (`Available`) state, make sure that the disk has been attached to ECS instances. Snapshots cannot be created for disks that have never been attached to an ECS instance.
       * *   Snapshot-consistent groups can be used to create snapshots only for Enterprise SSDs (ESSDs), ESSD AutoPL disks, and ESSD Entry disks.
       * *   A snapshot-consistent group can contain snapshots of up to 16 disks, including system disks and data disks, and cannot exceed 32 TiB in size.
       * *   Snapshots that you created are stored indefinitely until you delete the snapshots. We recommend that you delete unnecessary snapshots on a regular basis to prevent excess snapshot storage fees.
       * *   Snapshot-consistent groups cannot be created for disks for which multi-attach feature is enabled. If disks for which the multi-attach feature is enabled are attached to an ECS instance, you must specify the `ExcludeDiskId.N` parameter to exclude the disks.
       * For more information about the snapshot-consistent group feature, see [Create a snapshot-consistent group](https://help.aliyun.com/document_detail/199625.html).
       *
       * @param request CreateSnapshotGroupRequest
       * @return CreateSnapshotGroupResponse
       */
      Models::CreateSnapshotGroupResponse createSnapshotGroup(const Models::CreateSnapshotGroupRequest &request);

      /**
       * @summary (Beta) Creates a storage set in a zone of a region.
       *
       * @description A storage set can distribute disks or Shared Block Storage devices to different locations. You can specify the number of partitions in a storage set. A larger number of partitions indicate more discrete distribution of disks or Shared Block Storage devices.
       * When you call this operation, take note of the following items:
       * *   The number of storage sets that you can create in a region is limited. You can call the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html) operation to query the limit.
       * *   The number of partitions in a zone is limited. You can call the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html) operation to query the limit.
       *
       * @param request CreateStorageSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStorageSetResponse
       */
      Models::CreateStorageSetResponse createStorageSetWithOptions(const Models::CreateStorageSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary (Beta) Creates a storage set in a zone of a region.
       *
       * @description A storage set can distribute disks or Shared Block Storage devices to different locations. You can specify the number of partitions in a storage set. A larger number of partitions indicate more discrete distribution of disks or Shared Block Storage devices.
       * When you call this operation, take note of the following items:
       * *   The number of storage sets that you can create in a region is limited. You can call the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html) operation to query the limit.
       * *   The number of partitions in a zone is limited. You can call the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html) operation to query the limit.
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
       * @deprecated OpenAPI DeleteBandwidthPackage is deprecated, please use Vpc::2016-04-28::DeleteBandwidthPackage instead.
       *
       * @summary DeleteBandwidthPackage
       *
       * @param request DeleteBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBandwidthPackageResponse
       */
      Models::DeleteBandwidthPackageResponse deleteBandwidthPackageWithOptions(const Models::DeleteBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteBandwidthPackage is deprecated, please use Vpc::2016-04-28::DeleteBandwidthPackage instead.
       *
       * @summary DeleteBandwidthPackage
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
       * @description Before you delete a deployment set, make sure that no instances exist in the deployment set. If instances exist in the deployment set, move the instances to a different deployment set or release the instances before you delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
       *
       * @param request DeleteDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentSetResponse
       */
      Models::DeleteDeploymentSetResponse deleteDeploymentSetWithOptions(const Models::DeleteDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment set.
       *
       * @description Before you delete a deployment set, make sure that no instances exist in the deployment set. If instances exist in the deployment set, move the instances to a different deployment set or release the instances before you delete the deployment set. For more information, see [Change the deployment set of an instance](https://help.aliyun.com/document_detail/108407.html) and [Release an ECS instance](https://help.aliyun.com/document_detail/25442.html).
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
       * @summary Deletes a pay-as-you-go data disk. The data disk can be a basic disk, an ultra disk, a standard SSD, or an Enterprise SSD (ESSD).
       *
       * @description When you call this operation, take note of the following items:
       * *   Manual snapshots of the disk are retained.
       * *   You can call the [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) operation to configure whether to retain automatic snapshots of the disk or release the snapshots along with the disk. We recommend that you delete the snapshots that are no longer needed to maintain a sufficient quota for new automatic snapshots.
       * *   The disk must be in the Unattached (Available) state.
       * *   If the specified DiskId parameter does not exist, the request is ignored.
       *
       * @param request DeleteDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDiskWithOptions(const Models::DeleteDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go data disk. The data disk can be a basic disk, an ultra disk, a standard SSD, or an Enterprise SSD (ESSD).
       *
       * @description When you call this operation, take note of the following items:
       * *   Manual snapshots of the disk are retained.
       * *   You can call the [ModifyDiskAttribute](https://help.aliyun.com/document_detail/25517.html) operation to configure whether to retain automatic snapshots of the disk or release the snapshots along with the disk. We recommend that you delete the snapshots that are no longer needed to maintain a sufficient quota for new automatic snapshots.
       * *   The disk must be in the Unattached (Available) state.
       * *   If the specified DiskId parameter does not exist, the request is ignored.
       *
       * @param request DeleteDiskRequest
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDisk(const Models::DeleteDiskRequest &request);

      /**
       * @deprecated OpenAPI DeleteForwardEntry is deprecated, please use Vpc::2016-04-28::DeleteForwardEntry instead.
       *
       * @summary DeleteForwardEntry
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteForwardEntry is deprecated, please use Vpc::2016-04-28::DeleteForwardEntry instead.
       *
       * @summary DeleteForwardEntry
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
       * @summary Deletes a high performance computing (HPC) cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcClusterWithOptions(const Models::DeleteHpcClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a high performance computing (HPC) cluster.
       *
       * @param request DeleteHpcClusterRequest
       * @return DeleteHpcClusterResponse
       */
      Models::DeleteHpcClusterResponse deleteHpcCluster(const Models::DeleteHpcClusterRequest &request);

      /**
       * @summary Deletes a custom image. When you call this operation, you can specify ImageId and Force in the request.
       *
       * @description For information about scenarios in which you cannot delete a custom image and the considerations related to custom image deletion, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom image. When you call this operation, you can specify ImageId and Force in the request.
       *
       * @description For information about scenarios in which you cannot delete a custom image and the considerations related to custom image deletion, see [Delete a custom image](https://help.aliyun.com/document_detail/25466.html).
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes an image component. You can specify RegionId and ImageComponentId in the request.
       *
       * @description *   Only custom image components can be deleted.
       * *   When you delete a component, make sure that the component is not used in the template. Otherwise, the component fails to be deleted.
       *
       * @param request DeleteImageComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageComponentResponse
       */
      Models::DeleteImageComponentResponse deleteImageComponentWithOptions(const Models::DeleteImageComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image component. You can specify RegionId and ImageComponentId in the request.
       *
       * @description *   Only custom image components can be deleted.
       * *   When you delete a component, make sure that the component is not used in the template. Otherwise, the component fails to be deleted.
       *
       * @param request DeleteImageComponentRequest
       * @return DeleteImageComponentResponse
       */
      Models::DeleteImageComponentResponse deleteImageComponent(const Models::DeleteImageComponentRequest &request);

      /**
       * @summary Deletes an image template.
       *
       * @description If an ongoing image building task is associated with an image template, you cannot delete the image template. You can delete the image template only if the image building task reaches the SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED state. You can call the DescribeImagePipelineExecutions operation to query the details of an image building task.
       *
       * @param request DeleteImagePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipelineWithOptions(const Models::DeleteImagePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image template.
       *
       * @description If an ongoing image building task is associated with an image template, you cannot delete the image template. You can delete the image template only if the image building task reaches the SUCCESS, FAILED, TEST_FAILED, PARTITION_SUCCESS, or CANCELLED state. You can call the DescribeImagePipelineExecutions operation to query the details of an image building task.
       *
       * @param request DeleteImagePipelineRequest
       * @return DeleteImagePipelineResponse
       */
      Models::DeleteImagePipelineResponse deleteImagePipeline(const Models::DeleteImagePipelineRequest &request);

      /**
       * @summary Deletes or releases a pay-as-you-go Elastic Compute Service (ECS) instance or an expired subscription ECS instance. You can configure parameters to specify whether to release the disks attached to the instance or retain the disks as pay-as-you-go disks.
       *
       * @description **
       * **Warning** After you release an instance, the physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       * *   After you release an instance, manual snapshots of the cloud disks attached to the instance are retained and continue to be billed. You can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) operation to delete the snapshots.
       * *   After you release an instance, whether the cloud disks attached to the instance and the automatic snapshots of the disks are released is determined by the disk attributes. Before you release an instance, you can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) operations to query and modify disk attributes.
       *     *   The cloud disks for which `DeleteWithInstance` is set to false are retained as pay-as-you-go disks after the instance is released. The cloud disks for which DeleteWithInstance is set to true are released along with the instance.
       *     *   If `DeleteAutoSnapshot` is set to false for a cloud disk attached to the instance, the automatic snapshots of the cloud disk are retained when the instance is released. If DeleteAutoSnapshot is set to true for the cloud disk, the automatic snapshots of the disk are released along with the instance.
       * *   Elastic IP addresses (EIPs) are not released together with instances. You can call the [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) operation to release EIPs.
       *     **
       *     **Note** When you release an instance that is locked for security reasons, the cloud disks attached to the instance are released even if DeleteWithInstance is set to false.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes or releases a pay-as-you-go Elastic Compute Service (ECS) instance or an expired subscription ECS instance. You can configure parameters to specify whether to release the disks attached to the instance or retain the disks as pay-as-you-go disks.
       *
       * @description **
       * **Warning** After you release an instance, the physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       * *   After you release an instance, manual snapshots of the cloud disks attached to the instance are retained and continue to be billed. You can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) operation to delete the snapshots.
       * *   After you release an instance, whether the cloud disks attached to the instance and the automatic snapshots of the disks are released is determined by the disk attributes. Before you release an instance, you can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) operations to query and modify disk attributes.
       *     *   The cloud disks for which `DeleteWithInstance` is set to false are retained as pay-as-you-go disks after the instance is released. The cloud disks for which DeleteWithInstance is set to true are released along with the instance.
       *     *   If `DeleteAutoSnapshot` is set to false for a cloud disk attached to the instance, the automatic snapshots of the cloud disk are retained when the instance is released. If DeleteAutoSnapshot is set to true for the cloud disk, the automatic snapshots of the disk are released along with the instance.
       * *   Elastic IP addresses (EIPs) are not released together with instances. You can call the [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) operation to release EIPs.
       *     **
       *     **Note** When you release an instance that is locked for security reasons, the cloud disks attached to the instance are released even if DeleteWithInstance is set to false.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Releases multiple pay-as-you-go Elastic Compute Service (ECS) instances or expired subscription ECS instances at a time. You can configure parameters to specify whether to release the disks attached to the instances or retain the disks as pay-as-you-go disks.
       *
       * @description >Warning: After you release an instance, the physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       * *   After you release an instance, manual snapshots of the cloud disks attached to the instance are retained and continue to be billed. You can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) operation to delete the snapshots.
       * *   After you release an instance, whether the cloud disks attached to the instance and the automatic snapshots of the disks are released is determined by the disk attributes. Before you release an instance, you can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) operations to query and modify disk attributes.
       *     *   If `DeleteWithInstance` is set to false for a cloud disk attached to the instance, the cloud disk is changed to a pay-as-you-go disk and retained after the instance is released. If DeleteWithInstance is set to true for the cloud disk, the disk is released together with the instance.
       *     *   If `DeleteAutoSnapshot` is set to false for a cloud disk attached to the instance, the automatic snapshots of the disk are retained when the instance is released. If DeleteAutoSnapshot is set to true for the cloud disk, the automatic snapshots of the disk are released together with the instance.
       * *   Elastic IP addresses (EIPs) are not released together with instances. You can call the [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) operation to release EIPs.
       * > When you release an instance that is locked for security reasons, the cloud disks attached to the instance are released together with the instance even if DeleteWithInstance is set to false for the disks.
       *
       * @param request DeleteInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstancesWithOptions(const Models::DeleteInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases multiple pay-as-you-go Elastic Compute Service (ECS) instances or expired subscription ECS instances at a time. You can configure parameters to specify whether to release the disks attached to the instances or retain the disks as pay-as-you-go disks.
       *
       * @description >Warning: After you release an instance, the physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       * *   After you release an instance, manual snapshots of the cloud disks attached to the instance are retained and continue to be billed. You can call the [DeleteSnapshot](https://help.aliyun.com/document_detail/2679824.html) operation to delete the snapshots.
       * *   After you release an instance, whether the cloud disks attached to the instance and the automatic snapshots of the disks are released is determined by the disk attributes. Before you release an instance, you can call the [DescribeDisks](https://help.aliyun.com/document_detail/2679767.html) and [ModifyDiskAttribute](https://help.aliyun.com/document_detail/2679770.html) operations to query and modify disk attributes.
       *     *   If `DeleteWithInstance` is set to false for a cloud disk attached to the instance, the cloud disk is changed to a pay-as-you-go disk and retained after the instance is released. If DeleteWithInstance is set to true for the cloud disk, the disk is released together with the instance.
       *     *   If `DeleteAutoSnapshot` is set to false for a cloud disk attached to the instance, the automatic snapshots of the disk are retained when the instance is released. If DeleteAutoSnapshot is set to true for the cloud disk, the automatic snapshots of the disk are released together with the instance.
       * *   Elastic IP addresses (EIPs) are not released together with instances. You can call the [ReleaseEipAddress](https://help.aliyun.com/document_detail/448702.html) operation to release EIPs.
       * > When you release an instance that is locked for security reasons, the cloud disks attached to the instance are released together with the instance even if DeleteWithInstance is set to false for the disks.
       *
       * @param request DeleteInstancesRequest
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstances(const Models::DeleteInstancesRequest &request);

      /**
       * @summary Deletes one or more SSH key pairs.
       *
       * @description When you call this operation, take note of the following items:
       * *   After an SSH key pair is deleted, you cannot query the SSH key pair by calling the [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html) operation.
       * *   If an SSH key pair is bound to one or more Elastic Compute Service (ECS) instances, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more SSH key pairs.
       *
       * @description When you call this operation, take note of the following items:
       * *   After an SSH key pair is deleted, you cannot query the SSH key pair by calling the [DescribeKeyPairs](https://help.aliyun.com/document_detail/51773.html) operation.
       * *   If an SSH key pair is bound to one or more Elastic Compute Service (ECS) instances, the SSH key pair cannot be deleted.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a launch template. You can use the LaunchTemplateId or LaunchTemplateName parameter to specify the launch template that you want to delete from the specified region.
       *
       * @description Take note of the following items:
       * *   After you delete a launch template, Elastic Compute Service (ECS) instances created based on the launch template are not affected.
       * *   After you delete a launch template, all versions of the launch template are deleted and cannot be restored. If you want to delete only a specific version of the launch template, call the [DeleteLaunchTemplateVersion](https://help.aliyun.com/document_detail/2679735.html) operation.
       *
       * @param request DeleteLaunchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaunchTemplateResponse
       */
      Models::DeleteLaunchTemplateResponse deleteLaunchTemplateWithOptions(const Models::DeleteLaunchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a launch template. You can use the LaunchTemplateId or LaunchTemplateName parameter to specify the launch template that you want to delete from the specified region.
       *
       * @description Take note of the following items:
       * *   After you delete a launch template, Elastic Compute Service (ECS) instances created based on the launch template are not affected.
       * *   After you delete a launch template, all versions of the launch template are deleted and cannot be restored. If you want to delete only a specific version of the launch template, call the [DeleteLaunchTemplateVersion](https://help.aliyun.com/document_detail/2679735.html) operation.
       *
       * @param request DeleteLaunchTemplateRequest
       * @return DeleteLaunchTemplateResponse
       */
      Models::DeleteLaunchTemplateResponse deleteLaunchTemplate(const Models::DeleteLaunchTemplateRequest &request);

      /**
       * @summary Deletes versions of a launch template. When you call this operation, you can specify parameters, such as LaunchTemplateId and DeleteVersion, in the request.
       *
       * @description Take note of the following items:
       * *   You cannot delete the default version of a launch template by calling this operation. To delete the default version of a launch template, you must delete the launch template.
       * *   If the version of a launch template that you want to delete is the default version, call the [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) operation or go to the **Launch Templates** page in the Elastic Compute Service (ECS) console to change the default version to a different version, and then delete the original default version.
       * *   After you delete a version of a launch template, the ECS instances that were created based on the version are not affected.
       *
       * @param request DeleteLaunchTemplateVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaunchTemplateVersionResponse
       */
      Models::DeleteLaunchTemplateVersionResponse deleteLaunchTemplateVersionWithOptions(const Models::DeleteLaunchTemplateVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes versions of a launch template. When you call this operation, you can specify parameters, such as LaunchTemplateId and DeleteVersion, in the request.
       *
       * @description Take note of the following items:
       * *   You cannot delete the default version of a launch template by calling this operation. To delete the default version of a launch template, you must delete the launch template.
       * *   If the version of a launch template that you want to delete is the default version, call the [ModifyLaunchTemplateDefaultVersion](https://help.aliyun.com/document_detail/2679734.html) operation or go to the **Launch Templates** page in the Elastic Compute Service (ECS) console to change the default version to a different version, and then delete the original default version.
       * *   After you delete a version of a launch template, the ECS instances that were created based on the version are not affected.
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
       * *   The ENI to be deleted must be in the Available state.
       * *   If the ENI to be deleted is attached to an Elastic Compute Service (ECS) instance, you must detach the ENI from the instance before you can delete the ENI. To detach the ENI, you can call the [DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html) operation.
       * *   After an ENI is deleted, the following situations occur:
       *     *   All private IP addresses (including primary and secondary private IP addresses) of the ENI are automatically released.
       *     *   The ENI is automatically removed from all security groups.
       * *   The DeleteNetworkInterface operation is an asynchronous operation. After this operation is called to delete an ENI, you can check the status or events of the ENI to determine whether the ENI is deleted. The following figure shows the transitions between the states of the ENI.
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/krcd/DeleteNetworkInterface.png)
       *     *   If the ENI is in the Deleting state, the ENI deletion request is sent and the ENI is being deleted.
       *     *   If the ENI is not found, the ENI is deleted.
       *     *   If the ENI is stuck in the Deleting state, the ENI fails to be deleted. You can re-initiate the request to delete the ENI.
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
       * *   The ENI to be deleted must be in the Available state.
       * *   If the ENI to be deleted is attached to an Elastic Compute Service (ECS) instance, you must detach the ENI from the instance before you can delete the ENI. To detach the ENI, you can call the [DetachNetworkInterface](https://help.aliyun.com/document_detail/58514.html) operation.
       * *   After an ENI is deleted, the following situations occur:
       *     *   All private IP addresses (including primary and secondary private IP addresses) of the ENI are automatically released.
       *     *   The ENI is automatically removed from all security groups.
       * *   The DeleteNetworkInterface operation is an asynchronous operation. After this operation is called to delete an ENI, you can check the status or events of the ENI to determine whether the ENI is deleted. The following figure shows the transitions between the states of the ENI.
       * ![](https://static-aliyun-doc.oss-cn-hangzhou.aliyuncs.com/file-manage-files/en-US/20230223/krcd/DeleteNetworkInterface.png)
       *     *   If the ENI is in the Deleting state, the ENI deletion request is sent and the ENI is being deleted.
       *     *   If the ENI is not found, the ENI is deleted.
       *     *   If the ENI is stuck in the Deleting state, the ENI fails to be deleted. You can re-initiate the request to delete the ENI.
       * For information about examples on how to call the DeleteNetworkInterface operation, see [Delete an ENI](https://help.aliyun.com/document_detail/471553.html).
       *
       * @param request DeleteNetworkInterfaceRequest
       * @return DeleteNetworkInterfaceResponse
       */
      Models::DeleteNetworkInterfaceResponse deleteNetworkInterface(const Models::DeleteNetworkInterfaceRequest &request);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary 删除操作弹性网卡的权限
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermissionWithOptions(const Models::DeleteNetworkInterfacePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteNetworkInterfacePermission is deprecated, please use Ecs::2014-05-26::DeleteNetworkInterface instead.
       *
       * @summary 删除操作弹性网卡的权限
       *
       * @param request DeleteNetworkInterfacePermissionRequest
       * @return DeleteNetworkInterfacePermissionResponse
       */
      Models::DeleteNetworkInterfacePermissionResponse deleteNetworkInterfacePermission(const Models::DeleteNetworkInterfacePermissionRequest &request);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary DeletePhysicalConnection
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePhysicalConnection is deprecated, please use Vpc::2016-04-28::DeletePhysicalConnection instead.
       *
       * @summary DeletePhysicalConnection
       *
       * @param request DeletePhysicalConnectionRequest
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnection(const Models::DeletePhysicalConnectionRequest &request);

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
       * @summary Deletes a prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with resources, you cannot delete the prefix list. You must disassociate the prefix list from the resources before you delete the prefix list. You can call the [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) operation to query resources that are associated with a specific prefix list.
       *
       * @param request DeletePrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrefixListResponse
       */
      Models::DeletePrefixListResponse deletePrefixListWithOptions(const Models::DeletePrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a prefix list and all entries in the prefix list.
       *
       * @description If a prefix list is associated with resources, you cannot delete the prefix list. You must disassociate the prefix list from the resources before you delete the prefix list. You can call the [DescribePrefixListAssociations](https://help.aliyun.com/document_detail/204724.html) operation to query resources that are associated with a specific prefix list.
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
       * @description *   Make sure that no Elastic Compute Service (ECS) instances exist in the security group. You can query instances by calling the [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) operation.
       * *   Make sure that no elastic network interfaces (ENIs) exist in the security group. You can query ENIs by calling the [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) operation.
       * *   Make sure that the security group that you want to delete is not referenced by rules of other security groups. You can query the associations by calling the [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) operation.
       * *   If the `InvalidOperation.DeletionProtection` error code is returned when you call the DeleteSecurityGroup operation to delete a security group, the deletion protection feature is enabled for the security group. When you create a Container Service for Kubernetes (ACK) cluster, the deletion protection feature is enabled for an associated security group to prevent accidental deletion. You cannot manually disable the deletion protection feature for the security group. The deletion protection feature can be automatically disabled only after the ACK cluster is deleted. For more information, see the [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html) section of the "Configure and manage security groups for an ACK cluster" topic.
       *
       * @param request DeleteSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroupWithOptions(const Models::DeleteSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group and all security group rules in the security group.
       *
       * @description *   Make sure that no Elastic Compute Service (ECS) instances exist in the security group. You can query instances by calling the [DescribeInstances](https://help.aliyun.com/document_detail/2679689.html) operation.
       * *   Make sure that no elastic network interfaces (ENIs) exist in the security group. You can query ENIs by calling the [DescribeNetworkInterfaces](https://help.aliyun.com/document_detail/2679884.html) operation.
       * *   Make sure that the security group that you want to delete is not referenced by rules of other security groups. You can query the associations by calling the [DescribeSecurityGroupReferences](https://help.aliyun.com/document_detail/57320.html) operation.
       * *   If the `InvalidOperation.DeletionProtection` error code is returned when you call the DeleteSecurityGroup operation to delete a security group, the deletion protection feature is enabled for the security group. When you create a Container Service for Kubernetes (ACK) cluster, the deletion protection feature is enabled for an associated security group to prevent accidental deletion. You cannot manually disable the deletion protection feature for the security group. The deletion protection feature can be automatically disabled only after the ACK cluster is deleted. For more information, see the [Disable deletion protection for a security group](https://help.aliyun.com/document_detail/353191.html) section of the "Configure and manage security groups for an ACK cluster" topic.
       *
       * @param request DeleteSecurityGroupRequest
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroup(const Models::DeleteSecurityGroupRequest &request);

      /**
       * @summary Deletes a specified snapshot. If you call this operation to delete a snapshot that is being created, the associated snapshot creation task is also canceled.
       *
       * @description Take note of the following items:
       * *   If the snapshot does not exist, the request is ignored.
       * *   If the snapshot has been used to create custom images, the snapshot cannot be deleted. You need to call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom images before you can delete the snapshot.
       * *   If the snapshot has been used to create disks and `Force` is not specified or is set to `false`, the snapshot cannot be deleted directly. If you want to delete the snapshot, set `Force` to true to forcibly delete the snapshot. The disks created from the snapshot cannot be re-initialized after the snapshot is forcibly deleted.
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
       * *   If the snapshot does not exist, the request is ignored.
       * *   If the snapshot has been used to create custom images, the snapshot cannot be deleted. You need to call the [DeleteImage](https://help.aliyun.com/document_detail/25537.html) operation to delete the custom images before you can delete the snapshot.
       * *   If the snapshot has been used to create disks and `Force` is not specified or is set to `false`, the snapshot cannot be deleted directly. If you want to delete the snapshot, set `Force` to true to forcibly delete the snapshot. The disks created from the snapshot cannot be re-initialized after the snapshot is forcibly deleted.
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
       * @summary (Beta) Deletes an empty storage set. The storage set that you want to delete must be empty and do not contain disks or Shared Block Storage devices.
       *
       * @param request DeleteStorageSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStorageSetResponse
       */
      Models::DeleteStorageSetResponse deleteStorageSetWithOptions(const Models::DeleteStorageSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary (Beta) Deletes an empty storage set. The storage set that you want to delete must be empty and do not contain disks or Shared Block Storage devices.
       *
       * @param request DeleteStorageSetRequest
       * @return DeleteStorageSetResponse
       */
      Models::DeleteStorageSetResponse deleteStorageSet(const Models::DeleteStorageSetRequest &request);

      /**
       * @deprecated OpenAPI DeleteVSwitch is deprecated, please use Vpc::2016-04-28::DeleteVSwitch instead.
       *
       * @summary DeleteVSwitch
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVSwitch is deprecated, please use Vpc::2016-04-28::DeleteVSwitch instead.
       *
       * @summary DeleteVSwitch
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @deprecated OpenAPI DeleteVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::DeleteVirtualBorderRouter instead.
       *
       * @summary DeleteVirtualBorderRouter
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouterWithOptions(const Models::DeleteVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::DeleteVirtualBorderRouter instead.
       *
       * @summary DeleteVirtualBorderRouter
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouter(const Models::DeleteVirtualBorderRouterRequest &request);

      /**
       * @deprecated OpenAPI DeleteVpc is deprecated, please use Vpc::2016-04-28::DeleteVpc instead.
       *
       * @summary 删除VPC
       *
       * @param request DeleteVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpcWithOptions(const Models::DeleteVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteVpc is deprecated, please use Vpc::2016-04-28::DeleteVpc instead.
       *
       * @summary 删除VPC
       *
       * @param request DeleteVpcRequest
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpc(const Models::DeleteVpcRequest &request);

      /**
       * @summary Deregisters a managed instance. After you deregister the managed instance, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstanceWithOptions(const Models::DeregisterManagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deregisters a managed instance. After you deregister the managed instance, you can no longer use Cloud Assistant to send commands or files to the instance.
       *
       * @param request DeregisterManagedInstanceRequest
       * @return DeregisterManagedInstanceResponse
       */
      Models::DeregisterManagedInstanceResponse deregisterManagedInstance(const Models::DeregisterManagedInstanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary DescribeAccessPoints
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use Vpc::2016-04-28::DescribeAccessPoints instead.
       *
       * @summary DescribeAccessPoints
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries the quotas of Elastic Compute Service (ECS) resources that you can create in an Alibaba Cloud region. For a specific region, you can query the maximum numbers of security groups, elastic network interfaces (ENIs), vCPUs for pay-as-you-go instances, vCPUs for spot instances, and dedicated hosts that you can create and the capacity quotas for pay-as-you-go disks that you can create. You can also query information such as network types or whether an account has completed real-name verification.
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
       * @summary Queries the quotas of Elastic Compute Service (ECS) resources that you can create in an Alibaba Cloud region. For a specific region, you can query the maximum numbers of security groups, elastic network interfaces (ENIs), vCPUs for pay-as-you-go instances, vCPUs for spot instances, and dedicated hosts that you can create and the capacity quotas for pay-as-you-go disks that you can create. You can also query information such as network types or whether an account has completed real-name verification.
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
       * *   Method 1: During a paged query, when you call the DescribeActivations operation to retrieve the first page of results, use `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which you can use in the next request to retrieve a new page of results. When you call the DescribeActivations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Method 2: Use `PageSize` to specify the number of entries to return on each page, and then use `PageNumber` to specify the number of the page to return. You can use only one of the preceding methods. If you specify `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect and the `TotalCount` response parameter is invalid.
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
       * *   Method 1: During a paged query, when you call the DescribeActivations operation to retrieve the first page of results, use `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which you can use in the next request to retrieve a new page of results. When you call the DescribeActivations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Method 2: Use `PageSize` to specify the number of entries to return on each page, and then use `PageNumber` to specify the number of the page to return. You can use only one of the preceding methods. If you specify `MaxResults` or `NextToken`, the `PageSize` and `PageNumber` request parameters do not take effect and the `TotalCount` response parameter is invalid.
       *
       * @param request DescribeActivationsRequest
       * @return DescribeActivationsResponse
       */
      Models::DescribeActivationsResponse describeActivations(const Models::DescribeActivationsRequest &request);

      /**
       * @summary Queries the scheduling tasks of an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistoryWithOptions(const Models::DescribeAutoProvisioningGroupHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduling tasks of an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupHistoryRequest
       * @return DescribeAutoProvisioningGroupHistoryResponse
       */
      Models::DescribeAutoProvisioningGroupHistoryResponse describeAutoProvisioningGroupHistory(const Models::DescribeAutoProvisioningGroupHistoryRequest &request);

      /**
       * @summary Queries information about Elastic Compute Service (ECS) instances in an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstancesWithOptions(const Models::DescribeAutoProvisioningGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Elastic Compute Service (ECS) instances in an auto provisioning group.
       *
       * @param request DescribeAutoProvisioningGroupInstancesRequest
       * @return DescribeAutoProvisioningGroupInstancesResponse
       */
      Models::DescribeAutoProvisioningGroupInstancesResponse describeAutoProvisioningGroupInstances(const Models::DescribeAutoProvisioningGroupInstancesRequest &request);

      /**
       * @summary Queries information about one or more auto provisioning groups.
       *
       * @param request DescribeAutoProvisioningGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoProvisioningGroupsResponse
       */
      Models::DescribeAutoProvisioningGroupsResponse describeAutoProvisioningGroupsWithOptions(const Models::DescribeAutoProvisioningGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more auto provisioning groups.
       *
       * @param request DescribeAutoProvisioningGroupsRequest
       * @return DescribeAutoProvisioningGroupsResponse
       */
      Models::DescribeAutoProvisioningGroupsResponse describeAutoProvisioningGroups(const Models::DescribeAutoProvisioningGroupsRequest &request);

      /**
       * @summary 查询自动快照策略的关联关系
       *
       * @param request DescribeAutoSnapshotPolicyAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPolicyAssociationsResponse
       */
      Models::DescribeAutoSnapshotPolicyAssociationsResponse describeAutoSnapshotPolicyAssociationsWithOptions(const Models::DescribeAutoSnapshotPolicyAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自动快照策略的关联关系
       *
       * @param request DescribeAutoSnapshotPolicyAssociationsRequest
       * @return DescribeAutoSnapshotPolicyAssociationsResponse
       */
      Models::DescribeAutoSnapshotPolicyAssociationsResponse describeAutoSnapshotPolicyAssociations(const Models::DescribeAutoSnapshotPolicyAssociationsRequest &request);

      /**
       * @summary Queries the details of automatic snapshot policies that are created in a specific region.
       *
       * @param request DescribeAutoSnapshotPolicyExRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPolicyExResponse
       */
      Models::DescribeAutoSnapshotPolicyExResponse describeAutoSnapshotPolicyExWithOptions(const Models::DescribeAutoSnapshotPolicyExRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of automatic snapshot policies that are created in a specific region.
       *
       * @param request DescribeAutoSnapshotPolicyExRequest
       * @return DescribeAutoSnapshotPolicyExResponse
       */
      Models::DescribeAutoSnapshotPolicyExResponse describeAutoSnapshotPolicyEx(const Models::DescribeAutoSnapshotPolicyExRequest &request);

      /**
       * @summary Queries resources in a zone. You can query the resources available in a zone before you create Elastic Compute Service (ECS) instances by calling the RunInstances operation or before you change instance types by calling the ModifyInstanceSpec operation.
       *
       * @description The value of `DestinationResource` determines whether you need to specify additional parameters. When you select a value in the following chain for DestinationResource, the more to the right the selected value is ordered, the more parameters you must specify.
       * *   Sequence: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * *   Examples:
       *     *   If you set `DestinationResource` to `DataDisk`, take note of the following items:
       *         *   If you set `ResourceType` to `disk` to query the categories of data disks regardless of whether the disks are attached to ECS instances, you can leave `InstanceType` empty.
       *         *   If you set `ResourceType` to `instance` to query the categories of data disks that are attached to ECS instances, you must specify `InstanceType` and `DataDiskCategory` due to instance type-specific limits on data disks.
       *     *   If you set `DestinationResource` to `SystemDisk` and `ResourceType` to `instance`, you must specify `InstanceType` due to instance type-specific limits on system disks.
       *     *   If you set `DestinationResource` to `InstanceType`, we recommend that you specify `IoOptimized` and `InstanceType`.
       *     *   To query the ecs.g5.large instance type in all zones of the China (Hangzhou) region, set `RegionId to cn-hangzhou, DestinationResource to InstanceType, IoOptimized to optimized, and InstanceType to ecs.g5.large`.
       *     *   To query the zones in which the ecs.g5.large instance type is available in the China (Hangzhou) region, set `RegionId to cn-hangzhou, DestinationResource to Zone, IoOptimized to optimized, and InstanceType to ecs.g5.large`.
       * **To query the zones in which the ecs.g5.large instance type is available in the China (Hangzhou) region, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "DestinationResource": "Zone",
       *     "InstanceType": "ecs.g5.large"
       * **To query the ecs.g5.large instance type in all zones of the China (Hangzhou) region, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "DestinationResource": "InstanceType""InstanceType": "ecs.g5.large"
       * **To query data disks of the ultra disk category in Hangzhou Zone B regardless of whether the disks are attached to ECS instances, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "ZoneId": "cn-hangzhou-b",
       *     "ResourceType": "disk",
       *     "DestinationResource": "DataDisk"
       * **To query data disks purchased together with ecs.g7.large instances that reside in Hangzhou Zone B and use Enterprise SSDs (ESSDs) as system disks, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "ZoneId": "cn-hangzhou-b",
       *     "ResourceType": "instance",
       *     "InstanceType": "ecs.g7.large",
       *     "DestinationResource": "SystemDisk",
       *     "SystemDiskCategory": "cloud_essd"
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources in a zone. You can query the resources available in a zone before you create Elastic Compute Service (ECS) instances by calling the RunInstances operation or before you change instance types by calling the ModifyInstanceSpec operation.
       *
       * @description The value of `DestinationResource` determines whether you need to specify additional parameters. When you select a value in the following chain for DestinationResource, the more to the right the selected value is ordered, the more parameters you must specify.
       * *   Sequence: `Zone > IoOptimized > InstanceType = Network = ddh > SystemDisk > DataDisk`
       * *   Examples:
       *     *   If you set `DestinationResource` to `DataDisk`, take note of the following items:
       *         *   If you set `ResourceType` to `disk` to query the categories of data disks regardless of whether the disks are attached to ECS instances, you can leave `InstanceType` empty.
       *         *   If you set `ResourceType` to `instance` to query the categories of data disks that are attached to ECS instances, you must specify `InstanceType` and `DataDiskCategory` due to instance type-specific limits on data disks.
       *     *   If you set `DestinationResource` to `SystemDisk` and `ResourceType` to `instance`, you must specify `InstanceType` due to instance type-specific limits on system disks.
       *     *   If you set `DestinationResource` to `InstanceType`, we recommend that you specify `IoOptimized` and `InstanceType`.
       *     *   To query the ecs.g5.large instance type in all zones of the China (Hangzhou) region, set `RegionId to cn-hangzhou, DestinationResource to InstanceType, IoOptimized to optimized, and InstanceType to ecs.g5.large`.
       *     *   To query the zones in which the ecs.g5.large instance type is available in the China (Hangzhou) region, set `RegionId to cn-hangzhou, DestinationResource to Zone, IoOptimized to optimized, and InstanceType to ecs.g5.large`.
       * **To query the zones in which the ecs.g5.large instance type is available in the China (Hangzhou) region, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "DestinationResource": "Zone",
       *     "InstanceType": "ecs.g5.large"
       * **To query the ecs.g5.large instance type in all zones of the China (Hangzhou) region, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "DestinationResource": "InstanceType""InstanceType": "ecs.g5.large"
       * **To query data disks of the ultra disk category in Hangzhou Zone B regardless of whether the disks are attached to ECS instances, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "ZoneId": "cn-hangzhou-b",
       *     "ResourceType": "disk",
       *     "DestinationResource": "DataDisk"
       * **To query data disks purchased together with ecs.g7.large instances that reside in Hangzhou Zone B and use Enterprise SSDs (ESSDs) as system disks, specify parameters as follows:**
       *     "RegionId": "cn-hangzhou",
       *     "ZoneId": "cn-hangzhou-b",
       *     "ResourceType": "instance",
       *     "InstanceType": "ecs.g7.large",
       *     "DestinationResource": "SystemDisk",
       *     "SystemDiskCategory": "cloud_essd"
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the maximum public bandwidth that can be purchased, upgraded, or downgraded for various Elastic Compute Service (ECS) instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitationWithOptions(const Models::DescribeBandwidthLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum public bandwidth that can be purchased, upgraded, or downgraded for various Elastic Compute Service (ECS) instance types.
       *
       * @param request DescribeBandwidthLimitationRequest
       * @return DescribeBandwidthLimitationResponse
       */
      Models::DescribeBandwidthLimitationResponse describeBandwidthLimitation(const Models::DescribeBandwidthLimitationRequest &request);

      /**
       * @deprecated OpenAPI DescribeBandwidthPackages is deprecated, please use Vpc::2016-04-28::DescribeBandwidthPackages instead.
       *
       * @summary DescribeBandwidthPackages
       *
       * @param request DescribeBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackagesResponse
       */
      Models::DescribeBandwidthPackagesResponse describeBandwidthPackagesWithOptions(const Models::DescribeBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeBandwidthPackages is deprecated, please use Vpc::2016-04-28::DescribeBandwidthPackages instead.
       *
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
       * @summary Queries the details of capacity reservations.
       *
       * @param request DescribeCapacityReservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservationsWithOptions(const Models::DescribeCapacityReservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of capacity reservations.
       *
       * @param request DescribeCapacityReservationsRequest
       * @return DescribeCapacityReservationsResponse
       */
      Models::DescribeCapacityReservationsResponse describeCapacityReservations(const Models::DescribeCapacityReservationsRequest &request);

      /**
       * @summary Queries instances located in the classic network that have established ClassicLink connections to virtual private clouds (VPCs).
       *
       * @description Take note of the following items:
       * *   This operation applies only to instances that reside in the classic network.
       * *   You can query a maximum of 100 instances that reside in the classic network at a time.
       * *   At least one of the `VpcId` and `InstanceId` parameters must be configured.
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
       * *   This operation applies only to instances that reside in the classic network.
       * *   You can query a maximum of 100 instances that reside in the classic network at a time.
       * *   At least one of the `VpcId` and `InstanceId` parameters must be configured.
       *
       * @param request DescribeClassicLinkInstancesRequest
       * @return DescribeClassicLinkInstancesResponse
       */
      Models::DescribeClassicLinkInstancesResponse describeClassicLinkInstances(const Models::DescribeClassicLinkInstancesRequest &request);

      /**
       * @summary Queries the configurations of Cloud Assistant features.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettingsWithOptions(const Models::DescribeCloudAssistantSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of Cloud Assistant features.
       *
       * @param request DescribeCloudAssistantSettingsRequest
       * @return DescribeCloudAssistantSettingsResponse
       */
      Models::DescribeCloudAssistantSettingsResponse describeCloudAssistantSettings(const Models::DescribeCloudAssistantSettingsRequest &request);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on instances. If Cloud Assistant Agent is installed, the system queries the total number of Cloud Assistant commands that have been run, the number of Cloud Assistant commands that are being run, and the time when Cloud Assistant commands were last run.
       *
       * @description ## [](#)Usage notes
       * *   Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of CloudAssistantStatus. Run commands on or send files to the instances only when the return value is true.
       * *   During a paged query, when you call the DescribeCloudAssistantStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCloudAssistantStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * *   Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of CloudAssistantStatus. Run commands on or send files to the instances only when the return value is true.
       * *   During a paged query, when you call the DescribeCloudAssistantStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCloudAssistantStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatus(const Models::DescribeCloudAssistantStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary 查询集群
       *
       * @param request DescribeClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClustersWithOptions(const Models::DescribeClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary 查询集群
       *
       * @param request DescribeClustersRequest
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClusters(const Models::DescribeClustersRequest &request);

      /**
       * @summary Queries the Cloud Assistant commands that you created or the common Cloud Assistant commands that Alibaba Cloud provides.
       *
       * @description ## [](#)Usage notes
       * *   If you specify only `Action` and `RegionId`, all available commands (`CommandId`) that you created in the specified region are queried by default.
       * *   During a paged query, when you call the DescribeCommands operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCommands operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommandsWithOptions(const Models::DescribeCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Cloud Assistant commands that you created or the common Cloud Assistant commands that Alibaba Cloud provides.
       *
       * @description ## [](#)Usage notes
       * *   If you specify only `Action` and `RegionId`, all available commands (`CommandId`) that you created in the specified region are queried by default.
       * *   During a paged query, when you call the DescribeCommands operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeCommands operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * @summary Queries the details of one or more Dedicated Hosts (DDHs). You can call this operation to obtain information about a DDH, including the physical performance specifications, machine code, service status, and the list of created ECS instances. You can specify relevant parameters, such as DDH IDs, DDH cluster IDs, hostname, and status, to query the required DDH details. This helps you efficiently manage and optimize cloud computing resources.
       *
       * @description ## [](#)Usage notes
       * You can use one of the following methods to query the information about dedicated hosts:
       * *   Specify `DedicatedHostIds` to query the details of specified dedicated hosts.
       * *   Specify `DedicatedHostClusterId` to query the details of dedicated hosts in a dedicated host cluster.
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Dedicated Hosts (DDHs). You can call this operation to obtain information about a DDH, including the physical performance specifications, machine code, service status, and the list of created ECS instances. You can specify relevant parameters, such as DDH IDs, DDH cluster IDs, hostname, and status, to query the required DDH details. This helps you efficiently manage and optimize cloud computing resources.
       *
       * @description ## [](#)Usage notes
       * You can use one of the following methods to query the information about dedicated hosts:
       * *   Specify `DedicatedHostIds` to query the details of specified dedicated hosts.
       * *   Specify `DedicatedHostClusterId` to query the details of dedicated hosts in a dedicated host cluster.
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
       * @summary Queries detailed information about one or more deployment sets.
       *
       * @param request DescribeDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentSetsResponse
       */
      Models::DescribeDeploymentSetsResponse describeDeploymentSetsWithOptions(const Models::DescribeDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about one or more deployment sets.
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
       * @summary Queries the details of a diagnostic report.
       *
       * @param request DescribeDiagnosticReportAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosticReportAttributesResponse
       */
      Models::DescribeDiagnosticReportAttributesResponse describeDiagnosticReportAttributesWithOptions(const Models::DescribeDiagnosticReportAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a diagnostic report.
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
       * @summary Queries the monitoring data of a cloud disk within a specific period of time, such as the read IOPS, write IOPS, read bandwidth (byte/s), write bandwidth (byte/s), read latency (microseconds), and write latency (microseconds).
       *
       * @description Take note of the following items:
       * *   Monitoring data of only disks that are in the In Use (`In_use`) state can be queried. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html).
       *     **
       *     **Note** Some information may be missing from the monitoring data of a disk because the disk is not in the In Use `(In_use)` state and the system cannot obtain the relevant information.
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * ## [](#)Sample requests
       * For example, you want to query the monitoring data of a cloud disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region every 600 seconds from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z`. Request parameters:
       *     RegionId:"cn-hangzhou", // Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     DiskId:"d-bp14emm68wx98vjk****", // Specify the disk ID.
       *     StartTime:"2025-02-15T00:00:00Z", // Specify the beginning of the time range to query.
       *     EndTime:"2025-02-17T00:00:00Z", // Specify the end of the time range to query.
       *     Period:"600", // Specify the interval at which to retrieve the monitoring data.
       *
       * @param request DescribeDiskMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorDataWithOptions(const Models::DescribeDiskMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a cloud disk within a specific period of time, such as the read IOPS, write IOPS, read bandwidth (byte/s), write bandwidth (byte/s), read latency (microseconds), and write latency (microseconds).
       *
       * @description Take note of the following items:
       * *   Monitoring data of only disks that are in the In Use (`In_use`) state can be queried. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html).
       *     **
       *     **Note** Some information may be missing from the monitoring data of a disk because the disk is not in the In Use `(In_use)` state and the system cannot obtain the relevant information.
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * ## [](#)Sample requests
       * For example, you want to query the monitoring data of a cloud disk whose ID is `d-bp14emm68wx98vjk****` in the China (Hangzhou) region every 600 seconds from `2025-02-17T00:00:00Z` to `2025-02-18T10:00:00Z`. Request parameters:
       *     RegionId:"cn-hangzhou", // Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     DiskId:"d-bp14emm68wx98vjk****", // Specify the disk ID.
       *     StartTime:"2025-02-15T00:00:00Z", // Specify the beginning of the time range to query.
       *     EndTime:"2025-02-17T00:00:00Z", // Specify the end of the time range to query.
       *     Period:"600", // Specify the interval at which to retrieve the monitoring data.
       *
       * @param request DescribeDiskMonitorDataRequest
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorData(const Models::DescribeDiskMonitorDataRequest &request);

      /**
       * @summary Queries block storage devices that you created, including cloud disks, local disks, and elastic ephemeral disks.
       *
       * @description *   You can specify multiple request parameters such as `RegionId`, `ZoneId`, `DiskIds`, and `InstanceId` as filters. The specified parameters are evaluated by using the "AND" operator. If you specify more than one filter, the records that match all filters are returned.
       * *   The value of `DiskIds` is a JSON array. If you do not specify DiskIds, the parameter is not used as a filter. If you set `DiskIds` to an empty JSON array, the parameter is regarded as a valid filter, and an empty result is returned.
       * *   Token-based paged query: Use `NextToken` to configure the query token. Set the value to the `NextToken` value returned in the previous call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       * *   You can attach a disk for which the multi-attach feature is enabled to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
       * When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisksWithOptions(const Models::DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries block storage devices that you created, including cloud disks, local disks, and elastic ephemeral disks.
       *
       * @description *   You can specify multiple request parameters such as `RegionId`, `ZoneId`, `DiskIds`, and `InstanceId` as filters. The specified parameters are evaluated by using the "AND" operator. If you specify more than one filter, the records that match all filters are returned.
       * *   The value of `DiskIds` is a JSON array. If you do not specify DiskIds, the parameter is not used as a filter. If you set `DiskIds` to an empty JSON array, the parameter is regarded as a valid filter, and an empty result is returned.
       * *   Token-based paged query: Use `NextToken` to configure the query token. Set the value to the `NextToken` value returned in the previous call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       * *   You can attach a disk for which the multi-attach feature is enabled to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
       * When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDisksRequest
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisks(const Models::DescribeDisksRequest &request);

      /**
       * @summary Queries the full status information about one or more Elastic Block Storage (EBS) devices.
       *
       * @description *   The full status information about an EBS device includes the lifecycle status specified by the `Status` parameter, health status specified by the `HealthStatus` parameter, and event type specified by the `EventType` parameter of the EBS device. You can filter the results based on these parameters.
       * *   The release time, scheduled execution time, and actual execution time of each EBS device event are identical. If you specify a period of time by using the `EventTime.Start` and `EventTime.End` parameters, all events that occurred within this period are queried. You can query events that occurred within the last seven days.
       *
       * @param request DescribeDisksFullStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksFullStatusResponse
       */
      Models::DescribeDisksFullStatusResponse describeDisksFullStatusWithOptions(const Models::DescribeDisksFullStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full status information about one or more Elastic Block Storage (EBS) devices.
       *
       * @description *   The full status information about an EBS device includes the lifecycle status specified by the `Status` parameter, health status specified by the `HealthStatus` parameter, and event type specified by the `EventType` parameter of the EBS device. You can filter the results based on these parameters.
       * *   The release time, scheduled execution time, and actual execution time of each EBS device event are identical. If you specify a period of time by using the `EventTime.Start` and `EventTime.End` parameters, all events that occurred within this period are queried. You can query events that occurred within the last seven days.
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
       * @summary Queries the auto-renewal attribute of elasticity assurances.
       *
       * @param request DescribeElasticityAssuranceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssuranceAutoRenewAttributeResponse
       */
      Models::DescribeElasticityAssuranceAutoRenewAttributeResponse describeElasticityAssuranceAutoRenewAttributeWithOptions(const Models::DescribeElasticityAssuranceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attribute of elasticity assurances.
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
       * @summary Queries the details of elasticity assurances.
       *
       * @param request DescribeElasticityAssurancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticityAssurancesResponse
       */
      Models::DescribeElasticityAssurancesResponse describeElasticityAssurancesWithOptions(const Models::DescribeElasticityAssurancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of elasticity assurances.
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
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
       * @summary The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The \\*\\*token\\*\\* can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence]\\(~~25693~~).
       *
       * @param request DescribeHpcClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClustersWithOptions(const Models::DescribeHpcClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The \\*\\*token\\*\\* can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence]\\(~~25693~~).
       *
       * @param request DescribeHpcClustersRequest
       * @return DescribeHpcClustersResponse
       */
      Models::DescribeHpcClustersResponse describeHpcClusters(const Models::DescribeHpcClustersRequest &request);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the previous call to the DescribeImageComponents operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       *
       * @param request DescribeImageComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageComponentsResponse
       */
      Models::DescribeImageComponentsResponse describeImageComponentsWithOptions(const Models::DescribeImageComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more image components.
       *
       * @description You can use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the previous call to the DescribeImageComponents operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
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
       * @summary Queries the details of an image creation task.
       *
       * @description ## [](#)Usage notes
       * *   The image template that is specified by the `ImagePipelineId` parameter cannot be a deleted image template. When an image template is deleted, the corresponding image creation task is deleted.
       * *   You must specify `ImagePipelineId` or `ExecutionId`.
       * *   You can configure the query token by using the `NextToken` parameter. Set NextToken to the value of `NextToken` that was returned the previous call to the `DescribeImagePipelineExecutions` operation. Then, use the `MaxResults` parameter to specify the maximum number of entries to return on each page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutionsWithOptions(const Models::DescribeImagePipelineExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an image creation task.
       *
       * @description ## [](#)Usage notes
       * *   The image template that is specified by the `ImagePipelineId` parameter cannot be a deleted image template. When an image template is deleted, the corresponding image creation task is deleted.
       * *   You must specify `ImagePipelineId` or `ExecutionId`.
       * *   You can configure the query token by using the `NextToken` parameter. Set NextToken to the value of `NextToken` that was returned the previous call to the `DescribeImagePipelineExecutions` operation. Then, use the `MaxResults` parameter to specify the maximum number of entries to return on each page.
       *
       * @param request DescribeImagePipelineExecutionsRequest
       * @return DescribeImagePipelineExecutionsResponse
       */
      Models::DescribeImagePipelineExecutionsResponse describeImagePipelineExecutions(const Models::DescribeImagePipelineExecutionsRequest &request);

      /**
       * @summary Queries the details of one or more image templates.
       *
       * @description You can use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the previous call to the `DescribeImagePipelines` operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       *
       * @param request DescribeImagePipelinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelinesWithOptions(const Models::DescribeImagePipelinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more image templates.
       *
       * @description You can use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the previous call to the `DescribeImagePipelines` operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       *
       * @param request DescribeImagePipelinesRequest
       * @return DescribeImagePipelinesResponse
       */
      Models::DescribeImagePipelinesResponse describeImagePipelines(const Models::DescribeImagePipelinesRequest &request);

      /**
       * @summary Queries the accounts with which a custom image is shared. When you call this operation, you can specify parameters, such as RegionId and ImageId, in the request. The response can be displayed by page. By default, 10 entries are displayed on each page.
       *
       * @param request DescribeImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermissionWithOptions(const Models::DescribeImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accounts with which a custom image is shared. When you call this operation, you can specify parameters, such as RegionId and ImageId, in the request. The response can be displayed by page. By default, 10 entries are displayed on each page.
       *
       * @param request DescribeImageSharePermissionRequest
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermission(const Models::DescribeImageSharePermissionRequest &request);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instance types supported by an image.
       *
       * @param request DescribeImageSupportInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSupportInstanceTypesResponse
       */
      Models::DescribeImageSupportInstanceTypesResponse describeImageSupportInstanceTypesWithOptions(const Models::DescribeImageSupportInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instance types supported by an image.
       *
       * @param request DescribeImageSupportInstanceTypesRequest
       * @return DescribeImageSupportInstanceTypesResponse
       */
      Models::DescribeImageSupportInstanceTypesResponse describeImageSupportInstanceTypes(const Models::DescribeImageSupportInstanceTypesRequest &request);

      /**
       * @summary Queries image resources that you can use. You can specify parameters, such as ImageId, ActionType, and Filter, in the request.
       *
       * @description ## [](#)Usage notes
       * *   You can query your custom images, public images provided by Alibaba Cloud, Alibaba Cloud Marketplace images, and shared images from other Alibaba Cloud accounts.
       * *   This is a paginated query. The response contains the total number of available images and the images on the returned page. By default,10 entries are displayed on each page.
       * *   When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       * *   If you set ImageOwnerAlias to system or others when you call the DescribeImages operation to query public images that are provided by Alibaba Cloud or shared images, Resource Access Management (RAM) policies are ignored in the request. For more information, see [RAM authorization](https://help.aliyun.com/document_detail/25497.html).
       *
       * @param request DescribeImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImagesWithOptions(const Models::DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image resources that you can use. You can specify parameters, such as ImageId, ActionType, and Filter, in the request.
       *
       * @description ## [](#)Usage notes
       * *   You can query your custom images, public images provided by Alibaba Cloud, Alibaba Cloud Marketplace images, and shared images from other Alibaba Cloud accounts.
       * *   This is a paginated query. The response contains the total number of available images and the images on the returned page. By default,10 entries are displayed on each page.
       * *   When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       * *   If you set ImageOwnerAlias to system or others when you call the DescribeImages operation to query public images that are provided by Alibaba Cloud or shared images, Resource Access Management (RAM) policies are ignored in the request. For more information, see [RAM authorization](https://help.aliyun.com/document_detail/25497.html).
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
       * @summary Queries the attributes of a specific Elastic Compute Service (ECS) instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a specific Elastic Compute Service (ECS) instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary Queries the auto-renewal attribute of subscription Elastic Compute Service (ECS) instances, including whether auto-renewal is enabled for the instances and the auto-renewal durations of the instances.
       *
       * @description *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   Before you configure auto-renewal or manual renewal for subscription instances, you can query the auto-renewal status of the instances.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttributeWithOptions(const Models::DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attribute of subscription Elastic Compute Service (ECS) instances, including whether auto-renewal is enabled for the instances and the auto-renewal durations of the instances.
       *
       * @description *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   Before you configure auto-renewal or manual renewal for subscription instances, you can query the auto-renewal status of the instances.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttribute(const Models::DescribeInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the system events of Elastic Compute Service (ECS) instances. When you call this operation, you can specify parameters, such as InstanceId and EventType, in the request. By default, non-active system events are queried.
       *
       * @description *   You can query system events that were completed within the last 30 days. No limits apply to the time range for querying uncompleted system events.
       * *   If you do not specify the EventCycleStatus or InstanceEventCycleStatus parameter, only system events in the Avoidated, Executed, Canceled, or Failed state are included in the query results by default.
       * *   You can also specify the InstanceEventCycleStatus parameter in the request to query the system events that are in the Scheduled, Executing, or Inquiring state.
       *
       * @param request DescribeInstanceHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceHistoryEventsResponse
       */
      Models::DescribeInstanceHistoryEventsResponse describeInstanceHistoryEventsWithOptions(const Models::DescribeInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system events of Elastic Compute Service (ECS) instances. When you call this operation, you can specify parameters, such as InstanceId and EventType, in the request. By default, non-active system events are queried.
       *
       * @description *   You can query system events that were completed within the last 30 days. No limits apply to the time range for querying uncompleted system events.
       * *   If you do not specify the EventCycleStatus or InstanceEventCycleStatus parameter, only system events in the Avoidated, Executed, Canceled, or Failed state are included in the query results by default.
       * *   You can also specify the InstanceEventCycleStatus parameter in the request to query the system events that are in the Scheduled, Executing, or Inquiring state.
       *
       * @param request DescribeInstanceHistoryEventsRequest
       * @return DescribeInstanceHistoryEventsResponse
       */
      Models::DescribeInstanceHistoryEventsResponse describeInstanceHistoryEvents(const Models::DescribeInstanceHistoryEventsRequest &request);

      /**
       * @summary Queries the maintenance attributes of an instance.
       *
       * @description This operation is used to query the specified maintenance policy of an instance, which contains the following maintenance attributes:
       * *   Maintenance window: the time period that you specify for maintenance.
       * *   Maintenance action: the action that you specify in response to instance shutdown.
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
       * *   Maintenance window: the time period that you specify for maintenance.
       * *   Maintenance action: the action that you specify in response to instance shutdown.
       *
       * @param request DescribeInstanceMaintenanceAttributesRequest
       * @return DescribeInstanceMaintenanceAttributesResponse
       */
      Models::DescribeInstanceMaintenanceAttributesResponse describeInstanceMaintenanceAttributes(const Models::DescribeInstanceMaintenanceAttributesRequest &request);

      /**
       * @summary Queries the pricing information about newly attached subscription data disks or about the new instance types when you upgrade the configurations of unexpired subscription Elastic Compute Service (ECS) instances.
       *
       * @description *   Pricing information can be queried for unexpired subscription ECS instances only when you upgrade their configurations. The pricing information cannot be queried when the instance configurations are downgraded.
       * *   Pricing information cannot be queried for pay-as-you-go ECS instances when you change their configurations. Prices of existing pay-as-you-go ECS instances whose configurations are changed are the same as those of new pay-as-you-go instances. You can call the [DescribePrice](https://help.aliyun.com/document_detail/107829.html) operation to query the latest prices of ECS instances.
       * *   Before you upgrade the configurations of an instance, we recommend that you call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query the instance types available for configuration upgrades in a specified zone.
       *
       * @param request DescribeInstanceModificationPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceModificationPriceResponse
       */
      Models::DescribeInstanceModificationPriceResponse describeInstanceModificationPriceWithOptions(const Models::DescribeInstanceModificationPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing information about newly attached subscription data disks or about the new instance types when you upgrade the configurations of unexpired subscription Elastic Compute Service (ECS) instances.
       *
       * @description *   Pricing information can be queried for unexpired subscription ECS instances only when you upgrade their configurations. The pricing information cannot be queried when the instance configurations are downgraded.
       * *   Pricing information cannot be queried for pay-as-you-go ECS instances when you change their configurations. Prices of existing pay-as-you-go ECS instances whose configurations are changed are the same as those of new pay-as-you-go instances. You can call the [DescribePrice](https://help.aliyun.com/document_detail/107829.html) operation to query the latest prices of ECS instances.
       * *   Before you upgrade the configurations of an instance, we recommend that you call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query the instance types available for configuration upgrades in a specified zone.
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * *   In some scenarios, such as when the instance is in the Stopped state, the system cannot obtain the relevant information and specific information may be missing from the returned monitoring data.
       * *   You cannot call this operation to obtain the CPU basic monitoring information of an ECS bare metal instance. To obtain the CPU monitoring information of an ECS bare metal instance, install the CloudMonitor agent on the instance. For more information, see [InstallCloudMonitor](https://help.aliyun.com/document_detail/183482.html).
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
       * *   In some scenarios, such as when the instance is in the Stopped state, the system cannot obtain the relevant information and specific information may be missing from the returned monitoring data.
       * *   You cannot call this operation to obtain the CPU basic monitoring information of an ECS bare metal instance. To obtain the CPU monitoring information of an ECS bare metal instance, install the CloudMonitor agent on the instance. For more information, see [InstallCloudMonitor](https://help.aliyun.com/document_detail/183482.html).
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
       * *   Query the ECS instances and the status of the instances in a **specific region**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou"
       * *   Query the ECS instances and the status of the instances in a **zone** of a **specific region**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou",
       *     "ZoneID": "cn-hangzhou-a"
       * *   Query the status of an ECS instance in a **specific region** based on the **instance ID**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou",
       *     "InstancesID": ["i-bp1f7c1zqp999zvp****", "i-bp1dqjv36biueg61****"]
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
       * *   Query the ECS instances and the status of the instances in a **specific region**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou"
       * *   Query the ECS instances and the status of the instances in a **zone** of a **specific region**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou",
       *     "ZoneID": "cn-hangzhou-a"
       * *   Query the status of an ECS instance in a **specific region** based on the **instance ID**. Sample request:
       * <!---->
       *     "RegionID": "cn-hangzhou",
       *     "InstancesID": ["i-bp1f7c1zqp999zvp****", "i-bp1dqjv36biueg61****"]
       *
       * @param request DescribeInstanceStatusRequest
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatus(const Models::DescribeInstanceStatusRequest &request);

      /**
       * @summary Queries the topology of the host on which an Elastic Compute Service (ECS) instance resides.
       *
       * @param request DescribeInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTopologyResponse
       */
      Models::DescribeInstanceTopologyResponse describeInstanceTopologyWithOptions(const Models::DescribeInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of the host on which an Elastic Compute Service (ECS) instance resides.
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
       * @summary Queries the details of all instance types or a specific instance type provided by Elastic Compute Service (ECS). You can understand the specifications and performance of instance types based on the response and select an instance type that meets your business requirements.
       *
       * @description *   **Paged query**: You can set MaxResults to specify the maximum number of entries to return in a single call. If the number of entries to return exceeds the specified MaxResults value, the response includes a NextToken value. You can set NextToken to the return value and specify MaxResults in your next request to DescribeInstanceTypes to retrieve the next page of results.
       * *   When you call this operation, if you do not set NextToken to paginate the results, only the first page of results is returned by default and includes a maximum of 100 entries. To retrieve further pages of results, set NextToken or pass filter conditions in your requests to DescribeInstanceTypes.
       * >  MaxResults specifies the maximum number of entries per page. The maximum value of this parameter is changed from 1600 to 100 for all users as of November 15, 2023. If you called the DescribeInstanceTypes operation in 2022, you can use 1600 as the maximum value before November 15, 2023.
       * *   The DescribeInstanceTypes operation is used to query only the specifications and performance information of instance types. To query instance types that are available in a specific region, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation.
       * *   To use special instance types such as instance types that are unavailable for purchase, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       *
       * @param request DescribeInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypesWithOptions(const Models::DescribeInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all instance types or a specific instance type provided by Elastic Compute Service (ECS). You can understand the specifications and performance of instance types based on the response and select an instance type that meets your business requirements.
       *
       * @description *   **Paged query**: You can set MaxResults to specify the maximum number of entries to return in a single call. If the number of entries to return exceeds the specified MaxResults value, the response includes a NextToken value. You can set NextToken to the return value and specify MaxResults in your next request to DescribeInstanceTypes to retrieve the next page of results.
       * *   When you call this operation, if you do not set NextToken to paginate the results, only the first page of results is returned by default and includes a maximum of 100 entries. To retrieve further pages of results, set NextToken or pass filter conditions in your requests to DescribeInstanceTypes.
       * >  MaxResults specifies the maximum number of entries per page. The maximum value of this parameter is changed from 1600 to 100 for all users as of November 15, 2023. If you called the DescribeInstanceTypes operation in 2022, you can use 1600 as the maximum value before November 15, 2023.
       * *   The DescribeInstanceTypes operation is used to query only the specifications and performance information of instance types. To query instance types that are available in a specific region, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation.
       * *   To use special instance types such as instance types that are unavailable for purchase, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       *
       * @param request DescribeInstanceTypesRequest
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypes(const Models::DescribeInstanceTypesRequest &request);

      /**
       * @summary Queries the Virtual Network Computing (VNC) logon address of an Elastic Compute Service (ECS) instance.
       *
       * @description *   You cannot directly use the VNC logon address (VncUrl) in the response to log on to an ECS instance. To log on to the ECS instance, you can use the **web management terminal URL** that contains the VNC logon address.
       * >  To construct a web management terminal URL, add the `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` parameters at the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`. Separate each parameter with an ampersand (`&`). Parameter description:
       * *   `vncUrl`: the VNC logon address.
       * *   `instanceId`: the instance ID.
       * *   `isWindows`: specifies whether the operating system of your ECS instance is Windows. A value of `true` specifies that the operating system is Windows. A value of `false` specifies that the operating system is not Windows.
       * *   You can connect to an ECS instance without using a VNC logon password. Therefore, you do not need to specify the `password` parameter.
       * *   The keepalive time of a connection to a VNC management terminal is 300 seconds. If you do not interact with the VNC management terminal within 300 seconds, the VNC management terminal is automatically disconnected.
       * *   If the connection is interrupted, you must call the DescribeInstanceVncUrl operation to obtain a new VNC logon address (`VncUrl`) and use the new logon address to construct a new web management terminal URL that you can use to reconnect to the VNC management terminal. You can reconnect to a VNC management terminal up to 30 times per minute.
       * Sample web management terminal URL:
       *     https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Virtual Network Computing (VNC) logon address of an Elastic Compute Service (ECS) instance.
       *
       * @description *   You cannot directly use the VNC logon address (VncUrl) in the response to log on to an ECS instance. To log on to the ECS instance, you can use the **web management terminal URL** that contains the VNC logon address.
       * >  To construct a web management terminal URL, add the `vncUrl=\\*\\*\\*\\*`, `instanceId=****`, and `isWindows=true/false` parameters at the end of `https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?`. Separate each parameter with an ampersand (`&`). Parameter description:
       * *   `vncUrl`: the VNC logon address.
       * *   `instanceId`: the instance ID.
       * *   `isWindows`: specifies whether the operating system of your ECS instance is Windows. A value of `true` specifies that the operating system is Windows. A value of `false` specifies that the operating system is not Windows.
       * *   You can connect to an ECS instance without using a VNC logon password. Therefore, you do not need to specify the `password` parameter.
       * *   The keepalive time of a connection to a VNC management terminal is 300 seconds. If you do not interact with the VNC management terminal within 300 seconds, the VNC management terminal is automatically disconnected.
       * *   If the connection is interrupted, you must call the DescribeInstanceVncUrl operation to obtain a new VNC logon address (`VncUrl`) and use the new logon address to construct a new web management terminal URL that you can use to reconnect to the VNC management terminal. You can reconnect to a VNC management terminal up to 30 times per minute.
       * Sample web management terminal URL:
       *     https://g.alicdn.com/aliyun/ecs-console-vnc2/0.0.8/index.html?vncUrl=ws%3A%2F%****&instanceId=i-wz9hhwq5a6tm****&isWindows=true
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary Queries Elastic Compute Service (ECS) instances by various filter conditions. The details of the queried ECS instances are returned in the response.
       *
       * @description ### [](#)Limits
       * *   When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       * *   If you use a Resource Access Management (RAM) user or RAM role that does not have the permissions to call this operation, an empty list is returned.
       * ### [](#)Suggestions
       * *   Specify DryRun in the request to perform a dry run. In the dry run, the system checks the validity and authorization status of the parameters.
       * *   During a paged query, when you call the DescribeInstances operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInstances operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Elastic Compute Service (ECS) instances by various filter conditions. The details of the queried ECS instances are returned in the response.
       *
       * @description ### [](#)Limits
       * *   When you call the API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       * *   If you use a Resource Access Management (RAM) user or RAM role that does not have the permissions to call this operation, an empty list is returned.
       * ### [](#)Suggestions
       * *   Specify DryRun in the request to perform a dry run. In the dry run, the system checks the validity and authorization status of the parameters.
       * *   During a paged query, when you call the DescribeInstances operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInstances operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * @summary Queries the execution results of one or more Cloud Assistant commands on Elastic Compute Service (ECS) instances.
       *
       * @description ## [](#)Usage notes
       * *   After you run a command, the command may fail to run or may return unexpected results. You can call this operation to query the execution results.
       * *   You can query information about command executions within the last four weeks. Up to 100,000 pieces of execution information can be retained.
       * *   You can [subscribe to Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain command execution results from the events. This helps you reduce the number of times to poll API operations and improve efficiency.
       * *   During a paged query, when you call the DescribeInvocationResults operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInvocationResults operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Comparison between the `DescribeInvocations` and `DescribeInvocationResults` operations:
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on multiple instances:
       *         *   The `DescribeInvocations` operation queries the execution status of the command on each instance and the overall execution status of the command on all instances.
       *         *   The `DescribeInvocationResults` operation queries only the execution status of the command on each instance.
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on a single instance:
       *         *   The `DescribeInvocations` operation is equivalent to the `DescribeInvocationResults` operation.
       *     *   If you want to query the status of each execution for a scheduled (recurring) task or a task that is automatically executed on instance startup (`RepeatMode is set to Period or EveryReboot`), you can call only the `DescribeInvocationResults` operation and must set `IncludeHistory` to true. The `DescribeInvocations` operation queries only the most recent execution status of the command.
       *     *   If you want to view the command content and parameters, you can call only the `DescribeInvocations` operation and check the `CommandContent` value in the response.
       *
       * @param request DescribeInvocationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResultsWithOptions(const Models::DescribeInvocationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of one or more Cloud Assistant commands on Elastic Compute Service (ECS) instances.
       *
       * @description ## [](#)Usage notes
       * *   After you run a command, the command may fail to run or may return unexpected results. You can call this operation to query the execution results.
       * *   You can query information about command executions within the last four weeks. Up to 100,000 pieces of execution information can be retained.
       * *   You can [subscribe to Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain command execution results from the events. This helps you reduce the number of times to poll API operations and improve efficiency.
       * *   During a paged query, when you call the DescribeInvocationResults operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInvocationResults operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Comparison between the `DescribeInvocations` and `DescribeInvocationResults` operations:
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on multiple instances:
       *         *   The `DescribeInvocations` operation queries the execution status of the command on each instance and the overall execution status of the command on all instances.
       *         *   The `DescribeInvocationResults` operation queries only the execution status of the command on each instance.
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on a single instance:
       *         *   The `DescribeInvocations` operation is equivalent to the `DescribeInvocationResults` operation.
       *     *   If you want to query the status of each execution for a scheduled (recurring) task or a task that is automatically executed on instance startup (`RepeatMode is set to Period or EveryReboot`), you can call only the `DescribeInvocationResults` operation and must set `IncludeHistory` to true. The `DescribeInvocations` operation queries only the most recent execution status of the command.
       *     *   If you want to view the command content and parameters, you can call only the `DescribeInvocations` operation and check the `CommandContent` value in the response.
       *
       * @param request DescribeInvocationResultsRequest
       * @return DescribeInvocationResultsResponse
       */
      Models::DescribeInvocationResultsResponse describeInvocationResults(const Models::DescribeInvocationResultsRequest &request);

      /**
       * @summary Queries the execution list and states of Cloud Assistant commands.
       *
       * @description *   After you run a command, the command may fail to run or may return unexpected results. You can call this operation to query the execution results.
       * *   You can query information about command executions within the last four weeks. Up to 100,000 pieces of execution information can be retained.
       * *   You can [subscribe to Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain command execution results from the events. This helps you reduce the number of times to poll API operations and improve efficiency.
       * *   During a paged query, when you call the DescribeInvocations operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInvocations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Differences between the `DescribeInvocations` and `DescribeInvocationResults` operations:
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on multiple instances:
       *         *   The `DescribeInvocations` operation queries the execution status of the command on each instance and the overall execution status of the command on all instances.
       *         *   The `DescribeInvocationResults` operation queries only the execution status of the command on each instance.
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on a single instance:
       *         *   The `DescribeInvocations` operation is equivalent to the `DescribeInvocationResults` operation.
       *     *   If you want to query the status of each execution for a scheduled (recurring) task or a task that is automatically executed on instance startup (`RepeatMode is set to Period or EveryReboot`), you can call only the `DescribeInvocationResults` operation and must set `IncludeHistory` to true. The `DescribeInvocations` operation queries only the most recent execution status of the command.
       *     *   If you want to view the command content and parameters, you can call only the `DescribeInvocations` operation and check the `CommandContent` value in the response.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution list and states of Cloud Assistant commands.
       *
       * @description *   After you run a command, the command may fail to run or may return unexpected results. You can call this operation to query the execution results.
       * *   You can query information about command executions within the last four weeks. Up to 100,000 pieces of execution information can be retained.
       * *   You can [subscribe to Cloud Assistant task status events](https://help.aliyun.com/document_detail/2669130.html) to obtain command execution results from the events. This helps you reduce the number of times to poll API operations and improve efficiency.
       * *   During a paged query, when you call the DescribeInvocations operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeInvocations operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   Differences between the `DescribeInvocations` and `DescribeInvocationResults` operations:
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on multiple instances:
       *         *   The `DescribeInvocations` operation queries the execution status of the command on each instance and the overall execution status of the command on all instances.
       *         *   The `DescribeInvocationResults` operation queries only the execution status of the command on each instance.
       *     *   Scenario in which the `RunCommand` or `InvokeCommand` operation is called to run a Cloud Assistant command on a single instance:
       *         *   The `DescribeInvocations` operation is equivalent to the `DescribeInvocationResults` operation.
       *     *   If you want to query the status of each execution for a scheduled (recurring) task or a task that is automatically executed on instance startup (`RepeatMode is set to Period or EveryReboot`), you can call only the `DescribeInvocationResults` operation and must set `IncludeHistory` to true. The `DescribeInvocations` operation queries only the most recent execution status of the command.
       *     *   If you want to view the command content and parameters, you can call only the `DescribeInvocations` operation and check the `CommandContent` value in the response.
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
       * @summary Queries the information of launch template versions, such as the total number of launch templates, launch template names, and launch template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersionsWithOptions(const Models::DescribeLaunchTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of launch template versions, such as the total number of launch templates, launch template names, and launch template version numbers.
       *
       * @param request DescribeLaunchTemplateVersionsRequest
       * @return DescribeLaunchTemplateVersionsResponse
       */
      Models::DescribeLaunchTemplateVersionsResponse describeLaunchTemplateVersions(const Models::DescribeLaunchTemplateVersionsRequest &request);

      /**
       * @summary Queries the information of one or more launch templates, such as the total number of launch templates, the creation time of each launch template, and the latest version number of each launch template. When you can this operation, you can specify parameters, such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId, in the request.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplatesWithOptions(const Models::DescribeLaunchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of one or more launch templates, such as the total number of launch templates, the creation time of each launch template, and the latest version number of each launch template. When you can this operation, you can specify parameters, such as TemplateTag, TemplateResourceGroupId, and LaunchTemplateId, in the request.
       *
       * @param request DescribeLaunchTemplatesRequest
       * @return DescribeLaunchTemplatesResponse
       */
      Models::DescribeLaunchTemplatesResponse describeLaunchTemplates(const Models::DescribeLaunchTemplatesRequest &request);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary 查询账号限制
       *
       * @param request DescribeLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitationWithOptions(const Models::DescribeLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeLimitation is deprecated
       *
       * @summary 查询账号限制
       *
       * @param request DescribeLimitationRequest
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitation(const Models::DescribeLimitationRequest &request);

      /**
       * @summary Queries managed instances.
       *
       * @description During a paged query, when you call the DescribeManagedInstances operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeManagedInstances operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeManagedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeManagedInstancesResponse
       */
      Models::DescribeManagedInstancesResponse describeManagedInstancesWithOptions(const Models::DescribeManagedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries managed instances.
       *
       * @description During a paged query, when you call the DescribeManagedInstances operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeManagedInstances operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * @summary Queries the details of an elastic network interface (ENI). When you call this operation, you can set the NetworkInterfaceId parameter to specify an ENI.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=DescribeNetworkInterfaceAttribute\\&type=RPC\\&version=2014-05-26)
       *
       * @param request DescribeNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfaceAttributeResponse
       */
      Models::DescribeNetworkInterfaceAttributeResponse describeNetworkInterfaceAttributeWithOptions(const Models::DescribeNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an elastic network interface (ENI). When you call this operation, you can set the NetworkInterfaceId parameter to specify an ENI.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=DescribeNetworkInterfaceAttribute\\&type=RPC\\&version=2014-05-26)
       *
       * @param request DescribeNetworkInterfaceAttributeRequest
       * @return DescribeNetworkInterfaceAttributeResponse
       */
      Models::DescribeNetworkInterfaceAttributeResponse describeNetworkInterfaceAttribute(const Models::DescribeNetworkInterfaceAttributeRequest &request);

      /**
       * @summary Queries the permissions on elastic network interfaces (ENIs) that are granted to an Alibaba Cloud partner (certified ISV) or an individual user.
       *
       * @param request DescribeNetworkInterfacePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacePermissionsResponse
       */
      Models::DescribeNetworkInterfacePermissionsResponse describeNetworkInterfacePermissionsWithOptions(const Models::DescribeNetworkInterfacePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions on elastic network interfaces (ENIs) that are granted to an Alibaba Cloud partner (certified ISV) or an individual user.
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
       * *   During a paged query, when you call the DescribeNetworkInterfaces operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       * *   When you call the DescribeNetworkInterfaces operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * *   During a paged query, when you call the DescribeNetworkInterfaces operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       * *   When you call the DescribeNetworkInterfaces operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeNetworkInterfacesRequest
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfaces(const Models::DescribeNetworkInterfacesRequest &request);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary DescribeNewProjectEipMonitorData
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorDataWithOptions(const Models::DescribeNewProjectEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeNewProjectEipMonitorData is deprecated, please use Vpc::2016-04-28::DescribeEipMonitorData instead.
       *
       * @summary DescribeNewProjectEipMonitorData
       *
       * @param request DescribeNewProjectEipMonitorDataRequest
       * @return DescribeNewProjectEipMonitorDataResponse
       */
      Models::DescribeNewProjectEipMonitorDataResponse describeNewProjectEipMonitorData(const Models::DescribeNewProjectEipMonitorDataRequest &request);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary DescribePhysicalConnections
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePhysicalConnections is deprecated, please use Vpc::2016-04-28::DescribePhysicalConnections instead.
       *
       * @summary DescribePhysicalConnections
       *
       * @param request DescribePhysicalConnectionsRequest
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnections(const Models::DescribePhysicalConnectionsRequest &request);

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
       * @summary Queries the entries of a specified port list.
       *
       * @param request DescribePortRangeListEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortRangeListEntriesResponse
       */
      Models::DescribePortRangeListEntriesResponse describePortRangeListEntriesWithOptions(const Models::DescribePortRangeListEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entries of a specified port list.
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
       * @summary Queries the most recent prices of specified resources. You can specify a resource type in the request, such as the Elastic Compute Service (ECS) instance, cloud disk, dedicated host, elasticity assurance, and capacity reservation. You can also query the activity rules, prices, and discounts of resources.
       *
       * @description The required parameters vary based on the type of resource whose prices you want to query.
       * *   When `ResourceType` is set to instance, you must specify `InstanceType`. By default, `ChargeType` is set to `PostPaid`. You can specify `PriceUnit` to query the ECS resource prices in different billing cycles.
       * *   When `ResourceType` is set to disk, you must specify `DataDisk.1.Category` and `DataDisk.1.Size` in the same request. When `ResourceType` is set to disk, only pay-as-you-go prices of cloud disks are returned. In this scenario, `PriceUnit` can be set only to `Hour`.
       * *   When `ResourceType` is set to diskperformance, you must specify `DataDisk.1.Category` and `DataDisk.1.ProvisionedIops`.
       * *   When `ResourceType` is set to ddh, you must specify `DedicatedHostType`.
       * *   When `ResourceType` is set to ElasticityAssurance, you must specify `InstanceType`.
       * *   When `ResourceType` is set to CapacityReservation, you must specify `InstanceType`.
       * *   When `ResourceType` is set to bandwidth, only the pay-by-traffic (`PayByTraffic`) prices for network usage are returned.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent prices of specified resources. You can specify a resource type in the request, such as the Elastic Compute Service (ECS) instance, cloud disk, dedicated host, elasticity assurance, and capacity reservation. You can also query the activity rules, prices, and discounts of resources.
       *
       * @description The required parameters vary based on the type of resource whose prices you want to query.
       * *   When `ResourceType` is set to instance, you must specify `InstanceType`. By default, `ChargeType` is set to `PostPaid`. You can specify `PriceUnit` to query the ECS resource prices in different billing cycles.
       * *   When `ResourceType` is set to disk, you must specify `DataDisk.1.Category` and `DataDisk.1.Size` in the same request. When `ResourceType` is set to disk, only pay-as-you-go prices of cloud disks are returned. In this scenario, `PriceUnit` can be set only to `Hour`.
       * *   When `ResourceType` is set to diskperformance, you must specify `DataDisk.1.Category` and `DataDisk.1.ProvisionedIops`.
       * *   When `ResourceType` is set to ddh, you must specify `DedicatedHostType`.
       * *   When `ResourceType` is set to ElasticityAssurance, you must specify `InstanceType`.
       * *   When `ResourceType` is set to CapacityReservation, you must specify `InstanceType`.
       * *   When `ResourceType` is set to bandwidth, only the pay-by-traffic (`PayByTraffic`) prices for network usage are returned.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries alternative instance types of an instance type. This operation is in internal preview. This operation lists all alternative instance types of an instance type that has been or is planed to be retired.
       *
       * @param request DescribeRecommendInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendInstanceTypeResponse
       */
      Models::DescribeRecommendInstanceTypeResponse describeRecommendInstanceTypeWithOptions(const Models::DescribeRecommendInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alternative instance types of an instance type. This operation is in internal preview. This operation lists all alternative instance types of an instance type that has been or is planed to be retired.
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
       * @summary Queries the renewal prices of Elastic Compute Service (ECS) resources. Renewal prices of only subscription resources can be queried.
       *
       * @description *   You can call this operation to query the price for renewing a subscription instance for a specific period of time or to a synchronized expiration date.
       * *   Take note of the following items:
       *     *   If you specify only the required parameters, the price for renewing an instance for one month is queried by default.
       *     *   The renewal period-related parameter pair (`Period` and `PeriodUnit`) and the synchronized expiration date-related parameter (`ExpectedRenewDay`) are mutually exclusive. You cannot set these parameters together to query the prices for renewing a specified instance for a period of time and to a synchronized expiration date at the same time.
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal prices of Elastic Compute Service (ECS) resources. Renewal prices of only subscription resources can be queried.
       *
       * @description *   You can call this operation to query the price for renewing a subscription instance for a specific period of time or to a synchronized expiration date.
       * *   Take note of the following items:
       *     *   If you specify only the required parameters, the price for renewing an instance for one month is queried by default.
       *     *   The renewal period-related parameter pair (`Period` and `PeriodUnit`) and the synchronized expiration date-related parameter (`ExpectedRenewDay`) are mutually exclusive. You cannot set these parameters together to query the prices for renewing a specified instance for a period of time and to a synchronized expiration date at the same time.
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
       * *   Query all reserved instances in a specific region.
       * *   Query the details of a reserved instance based on the ID or name.
       * *   Query your purchased reserved instances based on the instance type or instance family.
       * *   Query your purchased reserved instances based on the scope or status of reserved instances.
       * ### [](#)Sample requests
       * **Example: Query all purchased reserved instances in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       * **Example: Query the details of the reserved instance whose ID is ecsri-bp129enntoynwwj5\\*\\*\\*\\* in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //The ID of the reserved instance.
       * **Example: Query the reserved instances that can be used to offset the bills of ecs.c5.2xlarge instances in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."InstanceType":"ecs.c5.2xlarge", //The instance type.
       * **Example: Query the regional reserved instances that are within the validity period in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."Scope":"Region", //Set the scope of the reserved instance to regional."Status":["Active"] //Set the status to Active, which indicates that the reserved instance is within the validity period.
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
       * *   Query all reserved instances in a specific region.
       * *   Query the details of a reserved instance based on the ID or name.
       * *   Query your purchased reserved instances based on the instance type or instance family.
       * *   Query your purchased reserved instances based on the scope or status of reserved instances.
       * ### [](#)Sample requests
       * **Example: Query all purchased reserved instances in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       * **Example: Query the details of the reserved instance whose ID is ecsri-bp129enntoynwwj5\\*\\*\\*\\* in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."ReservedInstanceId":"ecsri-bp129enntoynwwj5****" //The ID of the reserved instance.
       * **Example: Query the reserved instances that can be used to offset the bills of ecs.c5.2xlarge instances in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."InstanceType":"ecs.c5.2xlarge", //The instance type.
       * **Example: Query the regional reserved instances that are within the validity period in the China (Hangzhou) region**
       *     "RegionId":"cn-hangzhou", //The ID of the region."Scope":"Region", //Set the scope of the reserved instance to regional."Status":["Active"] //Set the status to Active, which indicates that the reserved instance is within the validity period.
       *
       * @param request DescribeReservedInstancesRequest
       * @return DescribeReservedInstancesResponse
       */
      Models::DescribeReservedInstancesResponse describeReservedInstances(const Models::DescribeReservedInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary Queries resources by tag or resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTagsWithOptions(const Models::DescribeResourceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeResourceByTags is deprecated, please use Tag::2018-08-28::ListResourcesByTag instead.
       *
       * @summary Queries resources by tag or resource type.
       *
       * @param request DescribeResourceByTagsRequest
       * @return DescribeResourceByTagsResponse
       */
      Models::DescribeResourceByTagsResponse describeResourceByTags(const Models::DescribeResourceByTagsRequest &request);

      /**
       * @summary Queries available instance types or system disk categories in a specific zone before you change the instance type or system disk category of an Elastic Compute Service (ECS) instance.
       *
       * @description Examples of common scenarios in which this operation is used:
       * ### [](#-1)Example 1: Query the instance types to which you can change the instance type of an instance.
       * Query the instance types to which you can change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance and the inventory of the queried instance types in the zone in which the instance resides.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=InstanceType
       *     &OperationType=Upgrade
       *     &<Common request parameters>
       * ### [](#-2)Example 2: Query the instance types to which you can change the instance type of an instance after a system disk category change.
       * Query the instance types to which you can change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance after a system disk category change and the inventory of the queried instance types in the zone in which the instance resides.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=InstanceType
       *     &OperationType=Upgrade
       *     &Conditions.0=DiskCategory
       *     &<Common request parameters>
       * ### [](#-3)Example 3: Query the system disk categories supported by the instance type to which you want to change the instance type of an instance.
       * Query the system disk categories supported by the instance type to which you want to change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance and the inventory of the disk categories in the zone in which the instance resides. In this example, the ecs.g7.large instance type is used. To change to the instance type, you must change the system disk category of the instance to a category supported by the instance type.
       * >  You can call this operation as described in Example 2 to query the instance types to which you can change the instance type of an instance.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=SystemDisk
       *     &OperationType=Upgrade
       *     &InstanceType=ecs.g7.large
       *     &<Common request parameters>
       *
       * @param request DescribeResourcesModificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcesModificationResponse
       */
      Models::DescribeResourcesModificationResponse describeResourcesModificationWithOptions(const Models::DescribeResourcesModificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available instance types or system disk categories in a specific zone before you change the instance type or system disk category of an Elastic Compute Service (ECS) instance.
       *
       * @description Examples of common scenarios in which this operation is used:
       * ### [](#-1)Example 1: Query the instance types to which you can change the instance type of an instance.
       * Query the instance types to which you can change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance and the inventory of the queried instance types in the zone in which the instance resides.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=InstanceType
       *     &OperationType=Upgrade
       *     &<Common request parameters>
       * ### [](#-2)Example 2: Query the instance types to which you can change the instance type of an instance after a system disk category change.
       * Query the instance types to which you can change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance after a system disk category change and the inventory of the queried instance types in the zone in which the instance resides.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=InstanceType
       *     &OperationType=Upgrade
       *     &Conditions.0=DiskCategory
       *     &<Common request parameters>
       * ### [](#-3)Example 3: Query the system disk categories supported by the instance type to which you want to change the instance type of an instance.
       * Query the system disk categories supported by the instance type to which you want to change the instance type of the i-bp67acfmxazb4p\\*\\*\\*\\* instance and the inventory of the disk categories in the zone in which the instance resides. In this example, the ecs.g7.large instance type is used. To change to the instance type, you must change the system disk category of the instance to a category supported by the instance type.
       * >  You can call this operation as described in Example 2 to query the instance types to which you can change the instance type of an instance.
       *     http(s)://ecs.aliyuncs.com/?Action=DescribeResourcesModification
       *     &RegionId=cn-hangzhou
       *     &ResourceId=i-bp67acfmxazb4p****
       *     &DestinationResource=SystemDisk
       *     &OperationType=Upgrade
       *     &InstanceType=ecs.g7.large
       *     &<Common request parameters>
       *
       * @param request DescribeResourcesModificationRequest
       * @return DescribeResourcesModificationResponse
       */
      Models::DescribeResourcesModificationResponse describeResourcesModification(const Models::DescribeResourcesModificationRequest &request);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary 查询路由表信息列表
       *
       * @param request DescribeRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTablesWithOptions(const Models::DescribeRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary 查询路由表信息列表
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
       * @summary Queries the details of a specified security group and the security group rules of the security group.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttributeWithOptions(const Models::DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified security group and the security group rules of the security group.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttribute(const Models::DescribeSecurityGroupAttributeRequest &request);

      /**
       * @summary Queries the security groups whose rules reference security groups as authorization objects.
       *
       * @description *   If you cannot delete a security group by calling the [DeleteSecurityGroup](https://help.aliyun.com/document_detail/25558.html) operation, call the DescribeSecurityGroupReferences operation to check whether the security group is referenced by the rules of other security groups. If the security group is referenced by the rules of other security groups, you must call the [RevokeSecurityGroup](https://help.aliyun.com/document_detail/2679855.html) and [RevokeSecurityGroupEgress](https://help.aliyun.com/document_detail/2679856.html) operations to remove the references before you can delete the security group.
       *
       * @param request DescribeSecurityGroupReferencesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupReferencesResponse
       */
      Models::DescribeSecurityGroupReferencesResponse describeSecurityGroupReferencesWithOptions(const Models::DescribeSecurityGroupReferencesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups whose rules reference security groups as authorization objects.
       *
       * @description *   If you cannot delete a security group by calling the [DeleteSecurityGroup](https://help.aliyun.com/document_detail/25558.html) operation, call the DescribeSecurityGroupReferences operation to check whether the security group is referenced by the rules of other security groups. If the security group is referenced by the rules of other security groups, you must call the [RevokeSecurityGroup](https://help.aliyun.com/document_detail/2679855.html) and [RevokeSecurityGroupEgress](https://help.aliyun.com/document_detail/2679856.html) operations to remove the references before you can delete the security group.
       *
       * @param request DescribeSecurityGroupReferencesRequest
       * @return DescribeSecurityGroupReferencesResponse
       */
      Models::DescribeSecurityGroupReferencesResponse describeSecurityGroupReferences(const Models::DescribeSecurityGroupReferencesRequest &request);

      /**
       * @summary Queries the basic information of security groups. You can query the information by various filter conditions, such as the region ID, security group ID, and security group type.
       *
       * @description *   **Paged query**: We recommend that you specify `MaxResults` and `NextToken`.
       *     *   If the response does not include `NextToken`, the current page of results is the last page and no more results are to be returned.
       *     *   During a paged query, when you call the DescribeSecurityGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       *     *   When you call the DescribeSecurityGroups operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   When you use Alibaba Cloud CLI to call an API operation, you must specify request parameter values of different data types in required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(const Models::DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of security groups. You can query the information by various filter conditions, such as the region ID, security group ID, and security group type.
       *
       * @description *   **Paged query**: We recommend that you specify `MaxResults` and `NextToken`.
       *     *   If the response does not include `NextToken`, the current page of results is the last page and no more results are to be returned.
       *     *   During a paged query, when you call the DescribeSecurityGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results.
       *     *   When you call the DescribeSecurityGroups operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       * *   When you use Alibaba Cloud CLI to call an API operation, you must specify request parameter values of different data types in required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeSecurityGroupsRequest
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroups(const Models::DescribeSecurityGroupsRequest &request);

      /**
       * @summary Queries the files sent by Cloud Assistant and their status.
       *
       * @description ## [](#)Usage notes
       * *   When you send a file, the file may fail to be sent to specific Elastic Compute Service (ECS) instances. You can call this operation to check the file sending results.
       * *   You can call this operation to query the file sending records within the last six weeks.
       * *   During a paged query, when you call the DescribeSendFileResults operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeSendFileResults operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeSendFileResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSendFileResultsResponse
       */
      Models::DescribeSendFileResultsResponse describeSendFileResultsWithOptions(const Models::DescribeSendFileResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the files sent by Cloud Assistant and their status.
       *
       * @description ## [](#)Usage notes
       * *   When you send a file, the file may fail to be sent to specific Elastic Compute Service (ECS) instances. You can call this operation to check the file sending results.
       * *   You can call this operation to query the file sending records within the last six weeks.
       * *   During a paged query, when you call the DescribeSendFileResults operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the DescribeSendFileResults operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
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
       * @summary Queries the snapshot chains of cloud disks. A snapshot chain is a chain of all the snapshots created for a disk. A disk corresponds to a chain of snapshots.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   You can specify multiple request parameters, such as `RegionId`, `DiskIds`, and `InstanceId`, to query snapshot chains. Specified parameters have logical AND relations.
       * *   Only the specified parameters are used as filter conditions. If the `DiskIds` and `SnapshotLinkIds` parameters are set to empty JSON arrays, the values are considered as valid filter conditions. In this case, an empty result is returned.
       *
       * @param request DescribeSnapshotLinksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotLinksResponse
       */
      Models::DescribeSnapshotLinksResponse describeSnapshotLinksWithOptions(const Models::DescribeSnapshotLinksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshot chains of cloud disks. A snapshot chain is a chain of all the snapshots created for a disk. A disk corresponds to a chain of snapshots.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   You can specify multiple request parameters, such as `RegionId`, `DiskIds`, and `InstanceId`, to query snapshot chains. Specified parameters have logical AND relations.
       * *   Only the specified parameters are used as filter conditions. If the `DiskIds` and `SnapshotLinkIds` parameters are set to empty JSON arrays, the values are considered as valid filter conditions. In this case, an empty result is returned.
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data of snapshot sizes in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
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
       * *   Up to 400 monitoring data entries can be returned at a time. Make sure that the `TotalCount` value does not exceed 400. The value is calculated by using the following formula: `TotalCount = (EndTime - StartTime)/Period`. If the TotalCount value is greater than 400, the `InvalidParameter.TooManyDataQueried` error is returned.
       * *   You can query the monitoring data of snapshot sizes in the last 30 days. If the value of `StartTime` is more than 30 days earlier than the current time, an error is returned.
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
       * @summary Queries the details of cloud disk snapshots. The details include the status of the snapshots, the amount of remaining time required to create the snapshots, and the retention period of the automatic snapshots in days.
       *
       * @description You can specify multiple request parameters, such as `InstanceId`, `DiskId`, and `SnapshotIds`, to query snapshots. The specified parameters have logical AND relations. Only the specified parameters are included in the filter conditions.
       * When you use Alibaba Cloud CLI to call an API operation, you must specify request parameter values of different data types in required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       * Sample requests:
       * **Query the snapshots of all cloud disks attached to an Elastic Compute Service (ECS) instance in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.InstanceId:  i-bp1fh7by6d9mw7zr****   // Specify the ID of the instance that you want to query.
       * **Query the snapshots of a specific cloud disk in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.DiskId:   d-bp10e7ej8z743dmu****   // Specify the ID of the cloud disk that you want to query.
       * **Query information about two snapshots in the China (Hangzhou) region by snapshot ID**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Specify the IDs of the snapshots that you want to query.
       * **Query snapshots created after a specific point in time in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.Filter.1.Key:   CreationStartTime,   // Specify a point in time to query snapshots that were created after the specified point in time.Filter.1.Value:   2024-11-27T00:00Z
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud disk snapshots. The details include the status of the snapshots, the amount of remaining time required to create the snapshots, and the retention period of the automatic snapshots in days.
       *
       * @description You can specify multiple request parameters, such as `InstanceId`, `DiskId`, and `SnapshotIds`, to query snapshots. The specified parameters have logical AND relations. Only the specified parameters are included in the filter conditions.
       * When you use Alibaba Cloud CLI to call an API operation, you must specify request parameter values of different data types in required formats. For more information, see [Parameter formats](https://help.aliyun.com/document_detail/110340.html).
       * Sample requests:
       * **Query the snapshots of all cloud disks attached to an Elastic Compute Service (ECS) instance in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.InstanceId:  i-bp1fh7by6d9mw7zr****   // Specify the ID of the instance that you want to query.
       * **Query the snapshots of a specific cloud disk in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.DiskId:   d-bp10e7ej8z743dmu****   // Specify the ID of the cloud disk that you want to query.
       * **Query information about two snapshots in the China (Hangzhou) region by snapshot ID**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.SnapshotIds:   ["d-bp10e7ej8z743dmu****", "s-bp19vd1lorzgzt2s****"]   // Specify the IDs of the snapshots that you want to query.
       * **Query snapshots created after a specific point in time in the China (Hangzhou) region**
       *     RegionId:  cn-hangzhou,   // Specify the China (Hangzhou) region.Filter.1.Key:   CreationStartTime,   // Specify a point in time to query snapshots that were created after the specified point in time.Filter.1.Value:   2024-11-27T00:00Z
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
       * @description *   This operation is applicable only to I/O optimized spot instances that reside in virtual private clouds (VPCs).
       * *   You can use one of the following methods to call this operation:
       *     *   Specify `Cores` and `Memory` or `MinCores` and `MinMemory` to query information about the instance types that meet the specified vCPU and memory requirements.
       *     *   Specify `InstanceTypes.N` to query information about the specified instance types.
       *     *   Specify `Cores` and `Memory` or `MinCores` and `MinMemory`, and then specify `InstanceTypeFamily` or `InstanceFamilyLevel` to query information about the instance types that meet the specified vCPU and memory requirements within the specified instance family or at a specified instance family level.
       * *   You can calculate the average price of spot instances based on the percentage of the average spot instance price relative to the pay-as-you-go instance price and the pay-as-you-go instance price.
       *
       * @param request DescribeSpotAdviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdviceWithOptions(const Models::DescribeSpotAdviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about spot instances in a region in the previous 30 days. The information includes the average release rate of spot instances and the percentage of the average spot instance price relative to the pay-as-you-go instance price.
       *
       * @description *   This operation is applicable only to I/O optimized spot instances that reside in virtual private clouds (VPCs).
       * *   You can use one of the following methods to call this operation:
       *     *   Specify `Cores` and `Memory` or `MinCores` and `MinMemory` to query information about the instance types that meet the specified vCPU and memory requirements.
       *     *   Specify `InstanceTypes.N` to query information about the specified instance types.
       *     *   Specify `Cores` and `Memory` or `MinCores` and `MinMemory`, and then specify `InstanceTypeFamily` or `InstanceFamilyLevel` to query information about the instance types that meet the specified vCPU and memory requirements within the specified instance family or at a specified instance family level.
       * *   You can calculate the average price of spot instances based on the percentage of the average spot instance price relative to the pay-as-you-go instance price and the pay-as-you-go instance price.
       *
       * @param request DescribeSpotAdviceRequest
       * @return DescribeSpotAdviceResponse
       */
      Models::DescribeSpotAdviceResponse describeSpotAdvice(const Models::DescribeSpotAdviceRequest &request);

      /**
       * @summary Queries the historical prices of spot instances within up to the previous 30 days. You can set the maximum price of a spot instance based on the historical prices.
       *
       * @description *   This operation is applicable only to I/O optimized spot instances.
       * *   The data returned by the interface may be paginated. If the returned data contains the `NextOffset` parameter, you can set the `Offset` parameter in the request to the value of the `NextOffset` parameter for subsequent data query.
       *
       * @param request DescribeSpotPriceHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpotPriceHistoryResponse
       */
      Models::DescribeSpotPriceHistoryResponse describeSpotPriceHistoryWithOptions(const Models::DescribeSpotPriceHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical prices of spot instances within up to the previous 30 days. You can set the maximum price of a spot instance based on the historical prices.
       *
       * @description *   This operation is applicable only to I/O optimized spot instances.
       * *   The data returned by the interface may be paginated. If the returned data contains the `NextOffset` parameter, you can set the `Offset` parameter in the request to the value of the `NextOffset` parameter for subsequent data query.
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
       * @summary Queries the details of the disks or Shared Block Storage devices in a storage set.
       *
       * @param request DescribeStorageSetDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageSetDetailsResponse
       */
      Models::DescribeStorageSetDetailsResponse describeStorageSetDetailsWithOptions(const Models::DescribeStorageSetDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the disks or Shared Block Storage devices in a storage set.
       *
       * @param request DescribeStorageSetDetailsRequest
       * @return DescribeStorageSetDetailsResponse
       */
      Models::DescribeStorageSetDetailsResponse describeStorageSetDetails(const Models::DescribeStorageSetDetailsRequest &request);

      /**
       * @summary Describes the details of storage sets in a specific region. The details of a storage set include its region, zone, creation time, and maximum number of partitions.
       *
       * @param request DescribeStorageSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageSetsResponse
       */
      Models::DescribeStorageSetsResponse describeStorageSetsWithOptions(const Models::DescribeStorageSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the details of storage sets in a specific region. The details of a storage set include its region, zone, creation time, and maximum number of partitions.
       *
       * @param request DescribeStorageSetsRequest
       * @return DescribeStorageSetsResponse
       */
      Models::DescribeStorageSetsResponse describeStorageSets(const Models::DescribeStorageSetsRequest &request);

      /**
       * @deprecated OpenAPI DescribeTags is deprecated, please use Tag::2018-08-28::CountResourcesByTags instead.
       *
       * @summary Queries the available tags. You can specify multiple filter conditions, such as a resource type, a resource ID, a tag key, and a tag value, to query tags. The specified filter conditions have logical AND relations.
       *
       * @description If a tag key that has no tag value is specified, all tags that contain the tag key are returned. If a tag key-value pair is specified, only tags that exactly match the key-value pair are returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeTags is deprecated, please use Tag::2018-08-28::CountResourcesByTags instead.
       *
       * @summary Queries the available tags. You can specify multiple filter conditions, such as a resource type, a resource ID, a tag key, and a tag value, to query tags. The specified filter conditions have logical AND relations.
       *
       * @description If a tag key that has no tag value is specified, all tags that contain the tag key are returned. If a tag key-value pair is specified, only tags that exactly match the key-value pair are returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the details of an asynchronous task. The asynchronous tasks that you can query by calling this operation are the tasks generated by the ImportImage, ExportImage, and ModifyDiskSpec operations.
       *
       * @param request DescribeTaskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttributeWithOptions(const Models::DescribeTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task. The asynchronous tasks that you can query by calling this operation are the tasks generated by the ImportImage, ExportImage, and ModifyDiskSpec operations.
       *
       * @param request DescribeTaskAttributeRequest
       * @return DescribeTaskAttributeResponse
       */
      Models::DescribeTaskAttributeResponse describeTaskAttribute(const Models::DescribeTaskAttributeRequest &request);

      /**
       * @summary Queries the progress of one or more asynchronous tasks.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=DescribeTasks\\&type=RPC\\&version=2014-05-26)
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of one or more asynchronous tasks.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=DescribeTasks\\&type=RPC\\&version=2014-05-26)
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the session records of Elastic Compute Service (ECS) Session Manager.
       *
       * @description You can query the session records of Session Manager that were generated in the last four weeks.
       *
       * @param request DescribeTerminalSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTerminalSessionsResponse
       */
      Models::DescribeTerminalSessionsResponse describeTerminalSessionsWithOptions(const Models::DescribeTerminalSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the session records of Elastic Compute Service (ECS) Session Manager.
       *
       * @description You can query the session records of Session Manager that were generated in the last four weeks.
       *
       * @param request DescribeTerminalSessionsRequest
       * @return DescribeTerminalSessionsResponse
       */
      Models::DescribeTerminalSessionsResponse describeTerminalSessions(const Models::DescribeTerminalSessionsRequest &request);

      /**
       * @deprecated OpenAPI DescribeUserBusinessBehavior is deprecated
       *
       * @summary 获取用户级别默认属性
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehaviorWithOptions(const Models::DescribeUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeUserBusinessBehavior is deprecated
       *
       * @summary 获取用户级别默认属性
       *
       * @param request DescribeUserBusinessBehaviorRequest
       * @return DescribeUserBusinessBehaviorResponse
       */
      Models::DescribeUserBusinessBehaviorResponse describeUserBusinessBehavior(const Models::DescribeUserBusinessBehaviorRequest &request);

      /**
       * @summary Queries the user data of an Elastic Compute Service (ECS) instance.
       *
       * @description *   If no user data is configured for the ECS instance, an empty string is returned.
       *
       * @param request DescribeUserDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserDataWithOptions(const Models::DescribeUserDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user data of an Elastic Compute Service (ECS) instance.
       *
       * @description *   If no user data is configured for the ECS instance, an empty string is returned.
       *
       * @param request DescribeUserDataRequest
       * @return DescribeUserDataResponse
       */
      Models::DescribeUserDataResponse describeUserData(const Models::DescribeUserDataRequest &request);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary 查询路由器列表
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVRouters is deprecated, please use Vpc::2016-04-28::DescribeVRouters instead.
       *
       * @summary 查询路由器列表
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
       * @summary DescribeVirtualBorderRoutersForPhysicalConnection
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnectionWithOptions(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVirtualBorderRoutersForPhysicalConnection is deprecated, please use Vpc::2016-04-28::DescribeVirtualBorderRoutersForPhysicalConnection instead.
       *
       * @summary DescribeVirtualBorderRoutersForPhysicalConnection
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnection(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI DescribeVpcs is deprecated, please use Vpc::2016-04-28::DescribeVpcs instead.
       *
       * @summary 查询VPC
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeVpcs is deprecated, please use Vpc::2016-04-28::DescribeVpcs instead.
       *
       * @summary 查询VPC
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries Alibaba Cloud regions. You can specify parameters, such as InstanceChargeType and ResourceType, in the request.
       *
       * @description ## [](#)Usage notes
       * When you call this operation, only a list of zones and some resource information of each zone are returned. If you want to query instance types and disk categories that are available for purchase in a specific zone, we recommend that you call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Alibaba Cloud regions. You can specify parameters, such as InstanceChargeType and ResourceType, in the request.
       *
       * @description ## [](#)Usage notes
       * When you call this operation, only a list of zones and some resource information of each zone are returned. If you want to query instance types and disk categories that are available for purchase in a specific zone, we recommend that you call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation.
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
       * *   This operation is an asynchronous operation. After you call the operation to detach a disk from an ECS instance, the disk is detached in approximately 1 minute.
       * *   If `OperationLocks` in the response contains `"LockReason" : "security"` when you query information about an instance, the instance is locked for security reasons and all operations are prohibited on the instance.
       * *   If you want to attach an elastic ephemeral disk that you detached from an instance, you can attach the disk only to the instance.
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
       * *   This operation is an asynchronous operation. After you call the operation to detach a disk from an ECS instance, the disk is detached in approximately 1 minute.
       * *   If `OperationLocks` in the response contains `"LockReason" : "security"` when you query information about an instance, the instance is locked for security reasons and all operations are prohibited on the instance.
       * *   If you want to attach an elastic ephemeral disk that you detached from an instance, you can attach the disk only to the instance.
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
       * @summary Unbinds an SSH key pair from Linux Elastic Compute Service (ECS) instances.
       *
       * @description When you call this operation, take note of the following items:
       * *   After you unbind an SSH key pair from an instance, you must call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance to allow the unbind operation to take effect.
       * *   After you unbind an SSH key pair from an instance, the username and password authentication method is selected for the instance.
       *
       * @param request DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an SSH key pair from Linux Elastic Compute Service (ECS) instances.
       *
       * @description When you call this operation, take note of the following items:
       * *   After you unbind an SSH key pair from an instance, you must call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance to allow the unbind operation to take effect.
       * *   After you unbind an SSH key pair from an instance, the username and password authentication method is selected for the instance.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Detach an elastic network interface (ENI) from an Elastic Compute Service (ECS) instance.
       *
       * @description Take note of the following items:
       * *   You cannot detach the primary ENI of an instance.
       * *   Make sure that the ENI to be detached is in the Detaching (Unbinding) or InUse (Bound) state.
       * *   Make sure that the instance from which you want to detach an ENI is in the Running (Running) or Stopped (Stopped) state.
       * *   The DetachNetworkInterface operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the status or events of the ENI to determine whether the ENI is detached. The following figure shows the transitions between the states of the ENI.![](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/en-US/20230223/uemr/DetachNetworkInterface.png)
       *     *   If the ENI is in the Detaching state, the ENI detachment request is sent and the ENI is being detached from the associated instance.
       *     *   If the ENI is in the Available state, the ENI is detached from the associated instance.
       *     *   If the ENI is stuck in the Detaching state, the ENI may fail to be detached from the associated instance due to specific reasons. For example, the ENI may fail to be detached because the operating system of the instance did not respond to the ENI detachment request. If this issue occurs, you can re-initiate the request to detach the ENI. If the issue persists, restart the instance.
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
       * *   You cannot detach the primary ENI of an instance.
       * *   Make sure that the ENI to be detached is in the Detaching (Unbinding) or InUse (Bound) state.
       * *   Make sure that the instance from which you want to detach an ENI is in the Running (Running) or Stopped (Stopped) state.
       * *   The DetachNetworkInterface operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the status or events of the ENI to determine whether the ENI is detached. The following figure shows the transitions between the states of the ENI.![](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/en-US/20230223/uemr/DetachNetworkInterface.png)
       *     *   If the ENI is in the Detaching state, the ENI detachment request is sent and the ENI is being detached from the associated instance.
       *     *   If the ENI is in the Available state, the ENI is detached from the associated instance.
       *     *   If the ENI is stuck in the Detaching state, the ENI may fail to be detached from the associated instance due to specific reasons. For example, the ENI may fail to be detached because the operating system of the instance did not respond to the ENI detachment request. If this issue occurs, you can re-initiate the request to detach the ENI. If the issue persists, restart the instance.
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
       * @description *   **Instructions**
       *     *   You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   **Considerations**
       *     *   After Account-level EBS Default Encryption is disabled, the encryption status of existing cloud disks is not affected.
       *     *   After Account-level EBS Default Encryption is disabled, you can still choose to encrypt new cloud disks when you purchase the disks.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefaultWithOptions(const Models::DisableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables account-level default encryption of Elastic Block Storage (EBS) resources in a region. After you disable account-level default encryption of EBS resources in a region, the encryption status of existing disks in the region does not change. When you create a disk, you can still choose to encrypt the disk.
       *
       * @description *   **Instructions**
       *     *   You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   **Considerations**
       *     *   After Account-level EBS Default Encryption is disabled, the encryption status of existing cloud disks is not affected.
       *     *   After Account-level EBS Default Encryption is disabled, you can still choose to encrypt new cloud disks when you purchase the disks.
       *
       * @param request DisableDiskEncryptionByDefaultRequest
       * @return DisableDiskEncryptionByDefaultResponse
       */
      Models::DisableDiskEncryptionByDefaultResponse disableDiskEncryptionByDefault(const Models::DisableDiskEncryptionByDefaultRequest &request);

      /**
       * @summary Enables the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description >  The Account-level EBS Default Encryption feature is available only in specific regions and to specific users. To use the feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * *   **Precautions**
       *     *   To enable the Account-level EBS Default Encryption feature as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *     *   Before you can enable the Account-level EBS Default Encryption feature in a region, you must [activate Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html) in the region.
       *     *   After you enable the Account-level EBS Default Encryption feature in a region, you can purchase only encrypted cloud disks in the region. For more information, see the [Limits](~~59643#50de175230erj~~) section of the "Encrypt cloud disks" topic.
       * *   **Considerations**
       *     *   After you enable the Account-level EBS Default Encryption feature in a region, new pay-as-you-go and subscription cloud disks in the region must be encrypted. You can use the KMS key configured for the feature or specify other KMS keys to encrypt the cloud disks.
       *     *   The first time you enable the Account-level EBS Default Encryption feature in a region, the service key in the region is automatically used to encrypt EBS resources.
       * *   **Suggestions**
       *     *   You can call the [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) operation to query whether the Account-level EBS Default Encryption feature is enabled in a region and the [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) operation to query the ID of the KMS key used by the feature in a region.
       *     *   You can call the [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) operation to change or reset the KMS key used by the Account-level EBS Default Encryption feature in a region.
       *     *   You can call the [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) operation to disable the Account-level EBS Default Encryption feature in a region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefaultWithOptions(const Models::EnableDiskEncryptionByDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description >  The Account-level EBS Default Encryption feature is available only in specific regions and to specific users. To use the feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
       * *   **Precautions**
       *     *   To enable the Account-level EBS Default Encryption feature as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       *     *   Before you can enable the Account-level EBS Default Encryption feature in a region, you must [activate Key Management Service (KMS)](https://help.aliyun.com/document_detail/480156.html) in the region.
       *     *   After you enable the Account-level EBS Default Encryption feature in a region, you can purchase only encrypted cloud disks in the region. For more information, see the [Limits](~~59643#50de175230erj~~) section of the "Encrypt cloud disks" topic.
       * *   **Considerations**
       *     *   After you enable the Account-level EBS Default Encryption feature in a region, new pay-as-you-go and subscription cloud disks in the region must be encrypted. You can use the KMS key configured for the feature or specify other KMS keys to encrypt the cloud disks.
       *     *   The first time you enable the Account-level EBS Default Encryption feature in a region, the service key in the region is automatically used to encrypt EBS resources.
       * *   **Suggestions**
       *     *   You can call the [DescribeDiskEncryptionByDefaultStatus](https://help.aliyun.com/document_detail/2851493.html) operation to query whether the Account-level EBS Default Encryption feature is enabled in a region and the [DescribeDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851490.html) operation to query the ID of the KMS key used by the feature in a region.
       *     *   You can call the [ModifyDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851492.html) or [ResetDiskDefaultKMSKeyId](https://help.aliyun.com/document_detail/2851539.html) operation to change or reset the KMS key used by the Account-level EBS Default Encryption feature in a region.
       *     *   You can call the [DisableDiskEncryptionByDefault](https://help.aliyun.com/document_detail/2851491.html) operation to disable the Account-level EBS Default Encryption feature in a region.
       *
       * @param request EnableDiskEncryptionByDefaultRequest
       * @return EnableDiskEncryptionByDefaultResponse
       */
      Models::EnableDiskEncryptionByDefaultResponse enableDiskEncryptionByDefault(const Models::EnableDiskEncryptionByDefaultRequest &request);

      /**
       * @deprecated OpenAPI EnablePhysicalConnection is deprecated, please use Vpc::2016-04-28::EnablePhysicalConnection instead.
       *
       * @summary EnablePhysicalConnection
       *
       * @param request EnablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnectionWithOptions(const Models::EnablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI EnablePhysicalConnection is deprecated, please use Vpc::2016-04-28::EnablePhysicalConnection instead.
       *
       * @summary EnablePhysicalConnection
       *
       * @param request EnablePhysicalConnectionRequest
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnection(const Models::EnablePhysicalConnectionRequest &request);

      /**
       * @summary Permanently closes a session.
       *
       * @description *   After you closes a session, the session is no longer available.
       * *   The WebSocket URL that is associated with a closed session is invalid and no longer available.
       *
       * @param request EndTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndTerminalSessionResponse
       */
      Models::EndTerminalSessionResponse endTerminalSessionWithOptions(const Models::EndTerminalSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently closes a session.
       *
       * @description *   After you closes a session, the session is no longer available.
       * *   The WebSocket URL that is associated with a closed session is invalid and no longer available.
       *
       * @param request EndTerminalSessionRequest
       * @return EndTerminalSessionResponse
       */
      Models::EndTerminalSessionResponse endTerminalSession(const Models::EndTerminalSessionRequest &request);

      /**
       * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
       *
       * @description Take note of the following items:
       * *   Make sure that you are familiar with the prerequisites and considerations. For more information, see [Export a custom image](https://help.aliyun.com/document_detail/58181.html).
       * *   The `ImageFormat` parameter is available only for the following regions: Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). By default, custom images are exported in the RAW format in regions where the ImageFormat parameter is unsupported.
       * *   Use Resource Access Management (RAM) to authorize Elastic Compute Service (ECS) to write data to OSS. To complete the authorization, perform the following operations:
       *     *   Create a role named `AliyunECSImageExportDefaultRole` and attach the following policy to the role:
       *                {
       *                  "Statement": [
       *                    {
       *                      "Action": "sts:AssumeRole",
       *                      "Effect": "Allow",
       *                      "Principal": {
       *                        "Service": [
       *                          "ecs.aliyuncs.com"
       *                        ]
       *                      }
       *                    }
       *                  ],
       *                  "Version": "1"
       *                }
       *     *   Attach the `AliyunECSImageExportRolePolicy` system policy, which is the default policy that grants ECS the permissions to export images, to the `AliyunECSImageExportDefaultRole` role. For more information, go to the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D) page. You can also create a custom policy that contains the following content and attach the policy to the role:
       *                  {
       *                    "Version": "1",
       *                    "Statement": [
       *                      {
       *                        "Action": [
       *                          "oss:GetObject",
       *                          "oss:PutObject",
       *                          "oss:DeleteObject",
       *                          "oss:GetBucketLocation",
       *                          "oss:GetBucketInfo",
       *                          "oss:AbortMultipartUpload",
       *                          "oss:ListMultipartUploads",
       *                          "oss:ListParts"
       *                        ],
       *                        "Resource": "*",
       *                        "Effect": "Allow"
       *                      }
       *                    ]
       *                  }
       * After you export the images, take note of the following items:
       * Each exported custom image is stored in the specified OSS bucket. You can download the custom image. For more information, see [Download OSS objects by using simple download](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImageWithOptions(const Models::ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
       *
       * @description Take note of the following items:
       * *   Make sure that you are familiar with the prerequisites and considerations. For more information, see [Export a custom image](https://help.aliyun.com/document_detail/58181.html).
       * *   The `ImageFormat` parameter is available only for the following regions: Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), UAE (Dubai), US (Virginia), UK (London), Singapore, Malaysia (Kuala Lumpur), and US (Silicon Valley). By default, custom images are exported in the RAW format in regions where the ImageFormat parameter is unsupported.
       * *   Use Resource Access Management (RAM) to authorize Elastic Compute Service (ECS) to write data to OSS. To complete the authorization, perform the following operations:
       *     *   Create a role named `AliyunECSImageExportDefaultRole` and attach the following policy to the role:
       *                {
       *                  "Statement": [
       *                    {
       *                      "Action": "sts:AssumeRole",
       *                      "Effect": "Allow",
       *                      "Principal": {
       *                        "Service": [
       *                          "ecs.aliyuncs.com"
       *                        ]
       *                      }
       *                    }
       *                  ],
       *                  "Version": "1"
       *                }
       *     *   Attach the `AliyunECSImageExportRolePolicy` system policy, which is the default policy that grants ECS the permissions to export images, to the `AliyunECSImageExportDefaultRole` role. For more information, go to the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/?spm=5176.2020520101.0.0.64c64df5dfpmdY#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunECSImageImportDefaultRole%22,%20%22TemplateId%22:%20%22ECSImportRole%22%7D,%20%22request2%22:%20%7B%22RoleName%22:%20%22AliyunECSImageExportDefaultRole%22,%20%22TemplateId%22:%20%22ECSExportRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fecs.console.aliyun.com%2F%22,%20%22Service%22:%20%22ECS%22%7D) page. You can also create a custom policy that contains the following content and attach the policy to the role:
       *                  {
       *                    "Version": "1",
       *                    "Statement": [
       *                      {
       *                        "Action": [
       *                          "oss:GetObject",
       *                          "oss:PutObject",
       *                          "oss:DeleteObject",
       *                          "oss:GetBucketLocation",
       *                          "oss:GetBucketInfo",
       *                          "oss:AbortMultipartUpload",
       *                          "oss:ListMultipartUploads",
       *                          "oss:ListParts"
       *                        ],
       *                        "Resource": "*",
       *                        "Effect": "Allow"
       *                      }
       *                    ]
       *                  }
       * After you export the images, take note of the following items:
       * Each exported custom image is stored in the specified OSS bucket. You can download the custom image. For more information, see [Download OSS objects by using simple download](https://help.aliyun.com/document_detail/31912.html).
       *
       * @param request ExportImageRequest
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImage(const Models::ExportImageRequest &request);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary 将快照导出到指定的对象存储
       *
       * @param request ExportSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshotWithOptions(const Models::ExportSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportSnapshot is deprecated
       *
       * @summary 将快照导出到指定的对象存储
       *
       * @param request ExportSnapshotRequest
       * @return ExportSnapshotResponse
       */
      Models::ExportSnapshotResponse exportSnapshot(const Models::ExportSnapshotRequest &request);

      /**
       * @summary Queries the command output of an Elastic Compute Service (ECS) instance. The returned command output is encoded in Base64.
       *
       * @description *   ECS is a virtualized cloud-based service and cannot be connected to display devices. Alibaba Cloud caches system command outputs for the last start, restart, or shutdown of ECS instances. You can call the GetInstanceConsoleOutput operation to query the command outputs.
       * *   For instances of the retired instance types, you cannot obtain command outputs. For more information, see [Retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * *   You cannot obtain the command outputs of Windows instances.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutputWithOptions(const Models::GetInstanceConsoleOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the command output of an Elastic Compute Service (ECS) instance. The returned command output is encoded in Base64.
       *
       * @description *   ECS is a virtualized cloud-based service and cannot be connected to display devices. Alibaba Cloud caches system command outputs for the last start, restart, or shutdown of ECS instances. You can call the GetInstanceConsoleOutput operation to query the command outputs.
       * *   For instances of the retired instance types, you cannot obtain command outputs. For more information, see [Retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * *   You cannot obtain the command outputs of Windows instances.
       *
       * @param request GetInstanceConsoleOutputRequest
       * @return GetInstanceConsoleOutputResponse
       */
      Models::GetInstanceConsoleOutputResponse getInstanceConsoleOutput(const Models::GetInstanceConsoleOutputRequest &request);

      /**
       * @summary Obtains the screenshots of an Elastic Compute Service (ECS) instance.
       *
       * @description After ECS returns a Base64-encoded instance screenshot in the JPG format, you must decode the screenshot. We recommend that you call this operation for troubleshooting and diagnosis. When you call this operation, take note of the following items:
       * *   The instance must be in the Running state.
       * *   For instances of the retired instance types, you cannot obtain screenshots. For more information, see [Retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * *   If you call this operation on an instance for multiple times, the call interval must be at least 10 seconds. Otherwise, the `Throttling` error is returned.
       *
       * @param request GetInstanceScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceScreenshotResponse
       */
      Models::GetInstanceScreenshotResponse getInstanceScreenshotWithOptions(const Models::GetInstanceScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the screenshots of an Elastic Compute Service (ECS) instance.
       *
       * @description After ECS returns a Base64-encoded instance screenshot in the JPG format, you must decode the screenshot. We recommend that you call this operation for troubleshooting and diagnosis. When you call this operation, take note of the following items:
       * *   The instance must be in the Running state.
       * *   For instances of the retired instance types, you cannot obtain screenshots. For more information, see [Retired instance types](https://help.aliyun.com/document_detail/55263.html).
       * *   If you call this operation on an instance for multiple times, the call interval must be at least 10 seconds. Otherwise, the `Throttling` error is returned.
       *
       * @param request GetInstanceScreenshotRequest
       * @return GetInstanceScreenshotResponse
       */
      Models::GetInstanceScreenshotResponse getInstanceScreenshot(const Models::GetInstanceScreenshotRequest &request);

      /**
       * @summary Imports an on-premise image to Elastic Compute Service (ECS). The imported image exists as a custom image in the destination region. You can use the imported image to create ECS instances by calling the RunInstances operation or replace the system disk of an ECS instance by calling the ReplaceSystemDisk operation.
       *
       * @description ### [](#)Usage notes
       * Take note of the following items:
       * *   Before you import an image, you must upload the image to an Object Storage Service (OSS) bucket. For more information, see [Upload objects](https://help.aliyun.com/document_detail/31886.html).
       * *   In specific scenarios, you may want to create a custom image based on the operating system data of a source server, import the image to Alibaba Cloud, and then create an ECS instance from the image. The source server can be a physical server, a virtual machine, or a cloud host. If the virtio driver is not installed on the source server, the created ECS instance may be unable to start. To prevent this issue, verify that the virtio driver is installed on the source server before you import the image to Alibaba Cloud. For more information, see [Install the virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * *   Before you import images for the first time, you must use Resource Access Management (RAM) to authorize ECS to access your OSS buckets. If ECS is not authorized to access your OSS buckets, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error code is returned when you call the ImportImage operation. The authorization configuration varies based on whether the image files are imported from a cloud box.
       *     *   **If the image files are not imported from a cloud box**, you can complete the authorization on the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D) page of the RAM console. You can also complete the authorization by using a RAM role and RAM policies. The following example shows the policies and permissions required for specific steps in the authorization procedure. For more information, see [Control access to ECS resources by using RAM users](https://help.aliyun.com/document_detail/25481.html).
       *         1.  Create a RAM role named `AliyunECSImageImportDefaultRole`. You must use this exact role name. Otherwise, the image cannot be imported. Configure the following trust policy for the role:
       *                 {
       *                 	"Statement": [
       *                 	{
       *                 		"Action": "sts:AssumeRole",
       *                 		"Effect": "Allow",
       *                 		"Principal": {
       *                 		"Service": [
       *                 			"ecs.aliyuncs.com"
       *                 		]
       *                 		}
       *                 	}
       *                 ],
       *                 	"Version": "1"
       *                 }
       *         2.  Attach the `AliyunECSImageImportRolePolicy` system policy to the RAM role. You can also create a custom policy that contains the following content and attach the policy to the role:
       *             ```
       *             {
       *             	"Version": "1",
       *             	"Statement": [
       *             	{
       *             		"Action": [
       *             				"oss:GetObject",
       *             				"oss:GetBucketLocation",
       *             				"oss:GetBucketInfo"
       *             	],
       *             			"Resource": "*",
       *             			"Effect": "Allow"
       *             			}
       *             	]
       *             }
       *             ```
       *     *   **If the image files are imported from a cloud box**, you can complete the authorization on the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D) page of the RAM console. You can also complete the authorization by using a RAM role and RAM policies. The following example shows the policies and permissions required for specific steps in the authorization procedure. For more information, see [Control access to ECS resources by using RAM users](https://help.aliyun.com/document_detail/25481.html).
       *         1.  Create a RAM role named `AliyunECSCloudBoxImageImportDefaultRole`. You must use this exact role name. Otherwise, the image cannot be imported. Configure the following trust policy for the role:
       *                 {
       *                 	"Statement": [
       *                 	{
       *                 		"Action": "sts:AssumeRole",
       *                 		"Effect": "Allow",
       *                 		"Principal": {
       *                 		"Service": [
       *                 			"ecs.aliyuncs.com"
       *                 		]
       *                 		}
       *                 	}
       *                 ],
       *                 	"Version": "1"
       *                 }
       *         2.  Attach the `AliyunECSCloudBoxImageImportRolePolicy` system policy to the RAM role. You can also create a custom policy that contains the following content and attach the policy to the role:
       *             ```
       *             {
       *             	"Version": "1",
       *             	"Statement": [
       *             	{
       *             		"Action": [
       *             				"oss-cloudbox:GetObject",
       *             				"oss-cloudbox:GetBucketLocation",
       *             				"oss-cloudbox:GetBucketInfo"
       *             	],
       *             			"Resource": "*",
       *             			"Effect": "Allow"
       *             			}
       *             	]
       *             }
       *             ```
       * *   You cannot delete an image that is being imported. However, you can call the [CancelTask](https://help.aliyun.com/document_detail/25624.html) operation to cancel the image import task.
       * *   You can import an image only to the same region as the OSS bucket to which the image file is uploaded.
       * *   The valid values of N in `DiskDeviceMapping.N` range from 1 to 17. When N is set to 1, the disk is a system disk. When N is set to a value from 2 to 17, the disk is a data disk. When N is set to a value greater than 17, parameters prefixed with DiskDeviceMapping.N are ignored.
       * *   When you set `Architecture` to `arm64` or when you set `Platform` to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     *   To ensure that the password can be set or the key pair can be modified for an imported image, make sure that the image meets the following requirements before you import it:
       *         *   The kernel of the operating system supports the `CONFIG_FW_CFG_SYSFS` feature. By default, Linux community kernel 4.6 and later and CentOS kernel 3.10.0-826.el7 and later support the CONFIG_FW_CFG_SYSFS feature. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the source server of the image. If the command output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel of the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         *   Alibaba Cloud cloud-init of the latest version is installed on the operating system. If the version of cloud-init is 19.1, the minor version must be 19.1.3 or later. If the version of cloud-init is 0.7.6a in some early versions of operating systems, the minor version must be 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         *   The operating system supports the SHA-512 encryption algorithm.
       *     *   If you want an imported image to support the resizing of disks and file systems, make sure that the image meets the following requirements before you import it:
       *         *   The kernel version of the operating system is later than 3.6.
       *         *   The image supports the growpart command. To support this command, you must install the `cloud-utils-growpart` package. The methods of installing the package vary based on operating systems. For more information, see [Extend the partitions and file systems of disks on a Linux instance](https://help.aliyun.com/document_detail/25451.html).
       *         *   The image supports the resize2fs command. To support this command, you must install the `e2fsprogs` package. By default, the package is installed on the operating system. If the package is not installed, install it.
       *         *   Alibaba Cloud cloud-init of the latest version is installed on the operating system. If the version of cloud-init is 19.1, the minor version must be 19.1.3 or later. If the version of cloud-init is 0.7.6a in some early versions of operating systems, the minor version must be 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * *   If the image that you want to import uses the Arm64 architecture, configure the real-time clock (RTC) to use the Coordinated Universal Time (UTC) time standard. For more information, see [Linux time and time zones](https://help.aliyun.com/document_detail/405080.html).
       * *   When you import images, we recommend that you specify DetectionStrategy. This way, you can optimize the images based on the image check results. For more information, see [Overview of image check](https://help.aliyun.com/document_detail/439819.html).
       *
       * @param request ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an on-premise image to Elastic Compute Service (ECS). The imported image exists as a custom image in the destination region. You can use the imported image to create ECS instances by calling the RunInstances operation or replace the system disk of an ECS instance by calling the ReplaceSystemDisk operation.
       *
       * @description ### [](#)Usage notes
       * Take note of the following items:
       * *   Before you import an image, you must upload the image to an Object Storage Service (OSS) bucket. For more information, see [Upload objects](https://help.aliyun.com/document_detail/31886.html).
       * *   In specific scenarios, you may want to create a custom image based on the operating system data of a source server, import the image to Alibaba Cloud, and then create an ECS instance from the image. The source server can be a physical server, a virtual machine, or a cloud host. If the virtio driver is not installed on the source server, the created ECS instance may be unable to start. To prevent this issue, verify that the virtio driver is installed on the source server before you import the image to Alibaba Cloud. For more information, see [Install the virtio driver](https://help.aliyun.com/document_detail/62423.html).
       * *   Before you import images for the first time, you must use Resource Access Management (RAM) to authorize ECS to access your OSS buckets. If ECS is not authorized to access your OSS buckets, the `NoSetRoletoECSServiceAccount` or `InvalidOperation.CloudBoxImageImportRoleRequired` error code is returned when you call the ImportImage operation. The authorization configuration varies based on whether the image files are imported from a cloud box.
       *     *   **If the image files are not imported from a cloud box**, you can complete the authorization on the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/?spm=5176.2020520101image.0.0.2ffa4df57kSoHX#/role/authorize?request=%7B%22Requests%22%3A%20%7B%22request1%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageImportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSImportRole%22%7D%2C%20%22request2%22%3A%20%7B%22RoleName%22%3A%20%22AliyunECSImageExportDefaultRole%22%2C%20%22TemplateId%22%3A%20%22ECSExportRole%22%7D%7D%2C%20%22ReturnUrl%22%3A%20%22https%3A//ecs.console.aliyun.com/%22%2C%20%22Service%22%3A%20%22ECS%22%7D) page of the RAM console. You can also complete the authorization by using a RAM role and RAM policies. The following example shows the policies and permissions required for specific steps in the authorization procedure. For more information, see [Control access to ECS resources by using RAM users](https://help.aliyun.com/document_detail/25481.html).
       *         1.  Create a RAM role named `AliyunECSImageImportDefaultRole`. You must use this exact role name. Otherwise, the image cannot be imported. Configure the following trust policy for the role:
       *                 {
       *                 	"Statement": [
       *                 	{
       *                 		"Action": "sts:AssumeRole",
       *                 		"Effect": "Allow",
       *                 		"Principal": {
       *                 		"Service": [
       *                 			"ecs.aliyuncs.com"
       *                 		]
       *                 		}
       *                 	}
       *                 ],
       *                 	"Version": "1"
       *                 }
       *         2.  Attach the `AliyunECSImageImportRolePolicy` system policy to the RAM role. You can also create a custom policy that contains the following content and attach the policy to the role:
       *             ```
       *             {
       *             	"Version": "1",
       *             	"Statement": [
       *             	{
       *             		"Action": [
       *             				"oss:GetObject",
       *             				"oss:GetBucketLocation",
       *             				"oss:GetBucketInfo"
       *             	],
       *             			"Resource": "*",
       *             			"Effect": "Allow"
       *             			}
       *             	]
       *             }
       *             ```
       *     *   **If the image files are imported from a cloud box**, you can complete the authorization on the [Cloud Resource Access Authorization](https://ram.console.aliyun.com/role/authorize?request=%7B%22ReturnUrl%22%3A%22https%3A%2F%2Fecs.console.aliyun.com%2F%22%2C%22Services%22%3A%5B%7B%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%2C%22TemplateId%22%3A%22AliyunECSCloudBoxImageImportDefaultRole%22%7D%5D%2C%22Service%22%3A%22ECS%22%7D%5D%7D) page of the RAM console. You can also complete the authorization by using a RAM role and RAM policies. The following example shows the policies and permissions required for specific steps in the authorization procedure. For more information, see [Control access to ECS resources by using RAM users](https://help.aliyun.com/document_detail/25481.html).
       *         1.  Create a RAM role named `AliyunECSCloudBoxImageImportDefaultRole`. You must use this exact role name. Otherwise, the image cannot be imported. Configure the following trust policy for the role:
       *                 {
       *                 	"Statement": [
       *                 	{
       *                 		"Action": "sts:AssumeRole",
       *                 		"Effect": "Allow",
       *                 		"Principal": {
       *                 		"Service": [
       *                 			"ecs.aliyuncs.com"
       *                 		]
       *                 		}
       *                 	}
       *                 ],
       *                 	"Version": "1"
       *                 }
       *         2.  Attach the `AliyunECSCloudBoxImageImportRolePolicy` system policy to the RAM role. You can also create a custom policy that contains the following content and attach the policy to the role:
       *             ```
       *             {
       *             	"Version": "1",
       *             	"Statement": [
       *             	{
       *             		"Action": [
       *             				"oss-cloudbox:GetObject",
       *             				"oss-cloudbox:GetBucketLocation",
       *             				"oss-cloudbox:GetBucketInfo"
       *             	],
       *             			"Resource": "*",
       *             			"Effect": "Allow"
       *             			}
       *             	]
       *             }
       *             ```
       * *   You cannot delete an image that is being imported. However, you can call the [CancelTask](https://help.aliyun.com/document_detail/25624.html) operation to cancel the image import task.
       * *   You can import an image only to the same region as the OSS bucket to which the image file is uploaded.
       * *   The valid values of N in `DiskDeviceMapping.N` range from 1 to 17. When N is set to 1, the disk is a system disk. When N is set to a value from 2 to 17, the disk is a data disk. When N is set to a value greater than 17, parameters prefixed with DiskDeviceMapping.N are ignored.
       * *   When you set `Architecture` to `arm64` or when you set `Platform` to `CentOS Stream`, `Anolis`, `AlmaLinux`, `UOS`, `Kylin`, or `Rocky Linux`, take note of the following items:
       *     *   To ensure that the password can be set or the key pair can be modified for an imported image, make sure that the image meets the following requirements before you import it:
       *         *   The kernel of the operating system supports the `CONFIG_FW_CFG_SYSFS` feature. By default, Linux community kernel 4.6 and later and CentOS kernel 3.10.0-826.el7 and later support the CONFIG_FW_CFG_SYSFS feature. You can run the `grep -nr CONFIG_FW_CFG_SYSFS /boot/config-$(uname -r)` command on the source server of the image. If the command output contains `CONFIG_FW_CFG_SYSFS=y`, the kernel of the image supports the `CONFIG_FW_CFG_SYSFS` feature.
       *         *   Alibaba Cloud cloud-init of the latest version is installed on the operating system. If the version of cloud-init is 19.1, the minor version must be 19.1.3 or later. If the version of cloud-init is 0.7.6a in some early versions of operating systems, the minor version must be 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       *         *   The operating system supports the SHA-512 encryption algorithm.
       *     *   If you want an imported image to support the resizing of disks and file systems, make sure that the image meets the following requirements before you import it:
       *         *   The kernel version of the operating system is later than 3.6.
       *         *   The image supports the growpart command. To support this command, you must install the `cloud-utils-growpart` package. The methods of installing the package vary based on operating systems. For more information, see [Extend the partitions and file systems of disks on a Linux instance](https://help.aliyun.com/document_detail/25451.html).
       *         *   The image supports the resize2fs command. To support this command, you must install the `e2fsprogs` package. By default, the package is installed on the operating system. If the package is not installed, install it.
       *         *   Alibaba Cloud cloud-init of the latest version is installed on the operating system. If the version of cloud-init is 19.1, the minor version must be 19.1.3 or later. If the version of cloud-init is 0.7.6a in some early versions of operating systems, the minor version must be 0.7.6a15 or later. For more information, see [Install cloud-init](https://help.aliyun.com/document_detail/57803.html).
       * *   If the image that you want to import uses the Arm64 architecture, configure the real-time clock (RTC) to use the Coordinated Universal Time (UTC) time standard. For more information, see [Linux time and time zones](https://help.aliyun.com/document_detail/405080.html).
       * *   When you import images, we recommend that you specify DetectionStrategy. This way, you can optimize the images based on the image check results. For more information, see [Overview of image check](https://help.aliyun.com/document_detail/439819.html).
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key of a Rivest-Shamir-Adleman (RSA) key pair that is generated by a third-party tool. After the key pair is imported, Alibaba Cloud stores the public key. You must securely lock away the private key.
       *
       * @description Take note of the following items:
       * *   A maximum of 500 key pairs can be created in each region.
       * *   The key pair to be imported must support one of the following encryption methods:
       *     *   rsa
       *     *   dsa
       *     *   ssh-rsa
       *     *   ssh-dss
       *     *   ecdsa
       *     *   <ssh-rsa-cert-v00@openssh.com>
       *     *   <ssh-dss-cert-v00@openssh.com>
       *     *   <ssh-rsa-cert-v01@openssh.com>
       *     *   <ssh-dss-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp256-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp384-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp521-cert-v01@openssh.com>
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the public key of a Rivest-Shamir-Adleman (RSA) key pair that is generated by a third-party tool. After the key pair is imported, Alibaba Cloud stores the public key. You must securely lock away the private key.
       *
       * @description Take note of the following items:
       * *   A maximum of 500 key pairs can be created in each region.
       * *   The key pair to be imported must support one of the following encryption methods:
       *     *   rsa
       *     *   dsa
       *     *   ssh-rsa
       *     *   ssh-dss
       *     *   ecdsa
       *     *   <ssh-rsa-cert-v00@openssh.com>
       *     *   <ssh-dss-cert-v00@openssh.com>
       *     *   <ssh-rsa-cert-v01@openssh.com>
       *     *   <ssh-dss-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp256-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp384-cert-v01@openssh.com>
       *     *   <ecdsa-sha2-nistp521-cert-v01@openssh.com>
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
       * @summary Runs a Cloud Assistant command on one or more Elastic Compute Service (ECS) instances. When you call this operation, you can specify parameters, such as CommandId, InstanceId, and ResourceGroupId, in the request.
       *
       * @description ## [](#)Usage notes
       * *   The ECS instances on which you want to run the Cloud Assistant command must meet the following requirements. If multiple ECS instances are specified and one of the instances does not meet the requirements for running the command, the call fails. You must specify instances that meet the requirements and call the InvokeCommand operation again.
       *     *   The instances are in the Running (`Running`) state. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of instances.
       *     *   Cloud Assistant Agent is installed on the instances. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       *     *   If the command is a PowerShell command, make sure that the instances have the PowerShell module configured.
       * *   You can configure the command to run only once on the instances.
       * *   You can configure the command to run on the instances based on a schedule.
       *     *   The schedule is specified by Frequency. The results of each execution of the command do not affect the next execution of the command.
       *     *   When you use a cron expression to specify a schedule, you can specify a time zone based on your business requirements. If you do not specify a time zone, the schedule is determined by the system time of the instances. Make sure that the time or time zone of the instances meets your business requirements. For more information, see [Manage the time synchronization service](https://help.aliyun.com/document_detail/92704.html).
       *     To ensure that scheduled tasks can run as expected, make sure that the version of Cloud Assistant Agent is not earlier than the following versions. A scheduled task can run a command at a fixed interval, only once at a specific time, or at specific times based on a cron expression in a specified year or time zone. If the ClientNeedUpgrade error code is returned, you must upgrade Cloud Assistant Agent to the latest version. For more information, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *     *   Linux: 2.2.3.282
       *     *   Windows: 2.1.3.282
       * *   Command executions may fail due to instance status exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If a command execution fails, no execution information is generated. For more information, see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html).
       * *   If you enable the custom parameter feature when you create the command, you must specify custom parameters (`Parameters`) to run the command.
       * *   Before you run the command on instances, especially new instances, we recommend that you call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) operation to query the status of Cloud Assistant Agent on the instances and run the command when the value of CloudAssistantStatus in the response is true for the instances.
       *
       * @param tmpReq InvokeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommandWithOptions(const Models::InvokeCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a Cloud Assistant command on one or more Elastic Compute Service (ECS) instances. When you call this operation, you can specify parameters, such as CommandId, InstanceId, and ResourceGroupId, in the request.
       *
       * @description ## [](#)Usage notes
       * *   The ECS instances on which you want to run the Cloud Assistant command must meet the following requirements. If multiple ECS instances are specified and one of the instances does not meet the requirements for running the command, the call fails. You must specify instances that meet the requirements and call the InvokeCommand operation again.
       *     *   The instances are in the Running (`Running`) state. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of instances.
       *     *   Cloud Assistant Agent is installed on the instances. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       *     *   If the command is a PowerShell command, make sure that the instances have the PowerShell module configured.
       * *   You can configure the command to run only once on the instances.
       * *   You can configure the command to run on the instances based on a schedule.
       *     *   The schedule is specified by Frequency. The results of each execution of the command do not affect the next execution of the command.
       *     *   When you use a cron expression to specify a schedule, you can specify a time zone based on your business requirements. If you do not specify a time zone, the schedule is determined by the system time of the instances. Make sure that the time or time zone of the instances meets your business requirements. For more information, see [Manage the time synchronization service](https://help.aliyun.com/document_detail/92704.html).
       *     To ensure that scheduled tasks can run as expected, make sure that the version of Cloud Assistant Agent is not earlier than the following versions. A scheduled task can run a command at a fixed interval, only once at a specific time, or at specific times based on a cron expression in a specified year or time zone. If the ClientNeedUpgrade error code is returned, you must upgrade Cloud Assistant Agent to the latest version. For more information, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *     *   Linux: 2.2.3.282
       *     *   Windows: 2.1.3.282
       * *   Command executions may fail due to instance status exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If a command execution fails, no execution information is generated. For more information, see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html).
       * *   If you enable the custom parameter feature when you create the command, you must specify custom parameters (`Parameters`) to run the command.
       * *   Before you run the command on instances, especially new instances, we recommend that you call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) operation to query the status of Cloud Assistant Agent on the instances and run the command when the value of CloudAssistantStatus in the response is true for the instances.
       *
       * @param request InvokeCommandRequest
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommand(const Models::InvokeCommandRequest &request);

      /**
       * @summary Adds an Elastic Compute Service (ECS) resource or service to a resource group.
       *
       * @description ## [](#)Usage notes
       * A resource is a cloud service entity that you create on Alibaba Cloud, such as an ECS instance, an elastic network interface (ENI), or an image. A resource group is a collection of infrastructure for projects, environments, or stacks. In a resource group, you can manage resources and monitor and run tasks in a centralized manner without the need to switch between Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroupWithOptions(const Models::JoinResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Elastic Compute Service (ECS) resource or service to a resource group.
       *
       * @description ## [](#)Usage notes
       * A resource is a cloud service entity that you create on Alibaba Cloud, such as an ECS instance, an elastic network interface (ENI), or an image. A resource group is a collection of infrastructure for projects, environments, or stacks. In a resource group, you can manage resources and monitor and run tasks in a centralized manner without the need to switch between Alibaba Cloud services.
       *
       * @param request JoinResourceGroupRequest
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroup(const Models::JoinResourceGroupRequest &request);

      /**
       * @summary Adds an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) to a specified security group.
       *
       * @description > This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * *   An instance and an ENI cannot be added to a security group at the same time. You cannot specify `InstanceId` and `NetworkInterfaceId` at the same time in a request.
       * *   The security group and the ECS instance to be added to the security group must reside in the same region.
       * *   The security group and the instance must be of the same network type. If the network type is Virtual Private Cloud (VPC), the security group and the instance must reside in the same VPC.
       * *   Before you add an instance to a security group, the instance must be in the **Stopped** or **Running** state.
       * *   An instance can be added to up to five security groups by default. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroupWithOptions(const Models::JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) to a specified security group.
       *
       * @description > This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * *   An instance and an ENI cannot be added to a security group at the same time. You cannot specify `InstanceId` and `NetworkInterfaceId` at the same time in a request.
       * *   The security group and the ECS instance to be added to the security group must reside in the same region.
       * *   The security group and the instance must be of the same network type. If the network type is Virtual Private Cloud (VPC), the security group and the instance must reside in the same VPC.
       * *   Before you add an instance to a security group, the instance must be in the **Stopped** or **Running** state.
       * *   An instance can be added to up to five security groups by default. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
       *
       * @param request JoinSecurityGroupRequest
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroup(const Models::JoinSecurityGroupRequest &request);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) from a security group.
       *
       * @description >  This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * >  Alibaba Cloud modified verification rules for the LeaveSecurityGroup operation on July 8, 2024. When you remove an ECS instance or ENI that does not belong to a security group from the security group, the "InvalidSecurityGroupAssociation.NotFound" error code is returned instead of a success response. Update the LeaveSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * *   You cannot remove an instance and an ENI from a security group at the same time. This indicates that you cannot specify `InstanceId` and `NetworkInterfaceId` in one request.
       * *   Before you remove an instance from a security group, the instance must be in the **Stopped** (Stopped) or **Running** (Running) state.
       * *   An instance or ENI must be added to at least one security group. If you remove an instance or ENI from the only security group, the removal request fails and an error is returned.
       * *   When you remove an instance or ENI that is not in a security group from the security group, the removal request fails and an error is returned.
       *
       * @param request LeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroupWithOptions(const Models::LeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance or an elastic network interface (ENI) from a security group.
       *
       * @description >  This operation is not recommended. We recommend that you call the [ModifyInstanceAttribute](https://help.aliyun.com/document_detail/25503.html) operation to add an instance to or remove an instance from a security group, and call the [ModifyNetworkInterfaceAttribute](https://help.aliyun.com/document_detail/58513.html) operation to add an ENI to or remove an ENI from a security group.
       * >  Alibaba Cloud modified verification rules for the LeaveSecurityGroup operation on July 8, 2024. When you remove an ECS instance or ENI that does not belong to a security group from the security group, the "InvalidSecurityGroupAssociation.NotFound" error code is returned instead of a success response. Update the LeaveSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * *   You cannot remove an instance and an ENI from a security group at the same time. This indicates that you cannot specify `InstanceId` and `NetworkInterfaceId` in one request.
       * *   Before you remove an instance from a security group, the instance must be in the **Stopped** (Stopped) or **Running** (Running) state.
       * *   An instance or ENI must be added to at least one security group. If you remove an instance or ENI from the only security group, the removal request fails and an error is returned.
       * *   When you remove an instance or ENI that is not in a security group from the security group, the removal request fails and an error is returned.
       *
       * @param request LeaveSecurityGroupRequest
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroup(const Models::LeaveSecurityGroupRequest &request);

      /**
       * @summary Queries the states of Cloud Assistant plug-ins on Elastic Compute Service (ECS) instances.
       *
       * @description *   Before you call this operation to query the status of Cloud Assistant plug-ins on ECS instances, make sure that the versions of Cloud Assistant Agent on the instances are not earlier than the following ones:
       *     *   2.2.3.344 for Linux instances
       *     *   2.1.3.344 for Windows instances
       * *   During a paged query, when you call the ListPluginStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the ListPluginStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request ListPluginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginStatusResponse
       */
      Models::ListPluginStatusResponse listPluginStatusWithOptions(const Models::ListPluginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the states of Cloud Assistant plug-ins on Elastic Compute Service (ECS) instances.
       *
       * @description *   Before you call this operation to query the status of Cloud Assistant plug-ins on ECS instances, make sure that the versions of Cloud Assistant Agent on the instances are not earlier than the following ones:
       *     *   2.2.3.344 for Linux instances
       *     *   2.1.3.344 for Windows instances
       * *   During a paged query, when you call the ListPluginStatus operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you call the ListPluginStatus operation to retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request ListPluginStatusRequest
       * @return ListPluginStatusResponse
       */
      Models::ListPluginStatusResponse listPluginStatus(const Models::ListPluginStatusRequest &request);

      /**
       * @summary Queries the tags that are added to one or more Elastic Compute Service (ECS) resources.
       *
       * @description ## [](#)Usage notes
       * Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
       * *   `TagFilter.N`
       * If one of the following sets of request parameters is specified as filter conditions, only ECS resources that meet all the specified filter conditions are returned:
       * *   Set 1: `Tag.N.Key, Tag.N.Value` and `ResourceId.N`
       * *   Set 2: `TagFilter.N.TagKey, TagFilter.N.TagValues.N` and `ResourceId.N`
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to one or more Elastic Compute Service (ECS) resources.
       *
       * @description ## [](#)Usage notes
       * Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
       * *   `TagFilter.N`
       * If one of the following sets of request parameters is specified as filter conditions, only ECS resources that meet all the specified filter conditions are returned:
       * *   Set 1: `Tag.N.Key, Tag.N.Value` and `ResourceId.N`
       * *   Set 2: `TagFilter.N.TagKey, TagFilter.N.TagValues.N` and `ResourceId.N`
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the configurations of an auto provisioning group.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If you modify the capacity or capacity-related settings of an auto-provisioning group, the group executes a scheduling task after the group is modified.
       * *   You cannot modify an auto-provisioning group when the group is being deleted.
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
       * *   If you modify the capacity or capacity-related settings of an auto-provisioning group, the group executes a scheduling task after the group is modified.
       * *   You cannot modify an auto-provisioning group when the group is being deleted.
       *
       * @param request ModifyAutoProvisioningGroupRequest
       * @return ModifyAutoProvisioningGroupResponse
       */
      Models::ModifyAutoProvisioningGroupResponse modifyAutoProvisioningGroup(const Models::ModifyAutoProvisioningGroupRequest &request);

      /**
       * @summary Modifies an automatic snapshot policy. For example, you can change the points in time of the day at which to create automatic snapshots, days of the week on which to create automatic snapshots, and retention period of automatic snapshots for the automatic snapshot policy.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You cannot modify system policies.
       * *   After an automatic snapshot policy is modified, the modifications immediately take effect on the disks that are associated with the policy.
       * *   If cross-region replication for snapshots is enabled and no encryption parameters are configured, the generated encrypted snapshot copies are encrypted by using the Key Management Service (KMS) encryption keys in the region to which the snapshots are copied.
       *
       * @param request ModifyAutoSnapshotPolicyExRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoSnapshotPolicyExResponse
       */
      Models::ModifyAutoSnapshotPolicyExResponse modifyAutoSnapshotPolicyExWithOptions(const Models::ModifyAutoSnapshotPolicyExRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an automatic snapshot policy. For example, you can change the points in time of the day at which to create automatic snapshots, days of the week on which to create automatic snapshots, and retention period of automatic snapshots for the automatic snapshot policy.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You cannot modify system policies.
       * *   After an automatic snapshot policy is modified, the modifications immediately take effect on the disks that are associated with the policy.
       * *   If cross-region replication for snapshots is enabled and no encryption parameters are configured, the generated encrypted snapshot copies are encrypted by using the Key Management Service (KMS) encryption keys in the region to which the snapshots are copied.
       *
       * @param request ModifyAutoSnapshotPolicyExRequest
       * @return ModifyAutoSnapshotPolicyExResponse
       */
      Models::ModifyAutoSnapshotPolicyExResponse modifyAutoSnapshotPolicyEx(const Models::ModifyAutoSnapshotPolicyExRequest &request);

      /**
       * @deprecated OpenAPI ModifyBandwidthPackageSpec is deprecated, please use Vpc::2016-04-28::ModifyBandwidthPackageSpec instead.
       *
       * @summary ModifyBandwidthPackageSpec
       *
       * @param request ModifyBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBandwidthPackageSpecResponse
       */
      Models::ModifyBandwidthPackageSpecResponse modifyBandwidthPackageSpecWithOptions(const Models::ModifyBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyBandwidthPackageSpec is deprecated, please use Vpc::2016-04-28::ModifyBandwidthPackageSpec instead.
       *
       * @summary ModifyBandwidthPackageSpec
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
       * @summary Modifies the configurations of a Cloud Assistant feature.
       *
       * @param tmpReq ModifyCloudAssistantSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudAssistantSettingsResponse
       */
      Models::ModifyCloudAssistantSettingsResponse modifyCloudAssistantSettingsWithOptions(const Models::ModifyCloudAssistantSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a Cloud Assistant feature.
       *
       * @param request ModifyCloudAssistantSettingsRequest
       * @return ModifyCloudAssistantSettingsResponse
       */
      Models::ModifyCloudAssistantSettingsResponse modifyCloudAssistantSettings(const Models::ModifyCloudAssistantSettingsRequest &request);

      /**
       * @summary Modifies the parameters of a Cloud Assistant command.
       *
       * @description You can modify a command when it is run. After the command is modified, the new command content applies to subsequent executions.
       * You cannot modify the command type. For example, you cannot change a shell command (RunShellScript) to a batch command (RunBatScript).
       *
       * @param request ModifyCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommandResponse
       */
      Models::ModifyCommandResponse modifyCommandWithOptions(const Models::ModifyCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a Cloud Assistant command.
       *
       * @description You can modify a command when it is run. After the command is modified, the new command content applies to subsequent executions.
       * You cannot modify the command type. For example, you cannot change a shell command (RunShellScript) to a batch command (RunBatScript).
       *
       * @param request ModifyCommandRequest
       * @return ModifyCommandResponse
       */
      Models::ModifyCommandResponse modifyCommand(const Models::ModifyCommandRequest &request);

      /**
       * @summary Modifies the information about a dedicated host, such as the name, description, and instance migration policy that is applied when the dedicated host fails.
       *
       * @description ## [](#)Usage notes
       * *   All Elastic Compute Service (ECS) instances that are hosted on a dedicated host must be in the Stopped (`Stopped`) state before you can modify the CPU overcommit ratio of the dedicated host.
       * *   Changes to the CPU overcommit ratio of a dedicated host do not affect the running status of the dedicated host. After the CPU overcommit ratio is changed, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs. Otherwise, ECS instances that use the excess vCPUs cannot start.
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
       * *   All Elastic Compute Service (ECS) instances that are hosted on a dedicated host must be in the Stopped (`Stopped`) state before you can modify the CPU overcommit ratio of the dedicated host.
       * *   Changes to the CPU overcommit ratio of a dedicated host do not affect the running status of the dedicated host. After the CPU overcommit ratio is changed, the number of allocated vCPUs on the dedicated host cannot exceed the new total number of vCPUs. Otherwise, ECS instances that use the excess vCPUs cannot start.
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
       * @description *   If you enable auto-renewal for your subscription dedicated host, the system attempts to deduct the renewal payment at 08:00:00 (UTC+8) nine days before the dedicated host expires to renew the dedicated host. If this deduction attempt fails, the system attempt to deduct the payment at the same point in time the next day. The system attempts to deduct the payment once every day until the dedicated host expires or until the payment is deducted. Make sure that your account balance is sufficient.
       * *   Subscription dedicated hosts can be automatically renewed along with the subscription Elastic Compute Service (ECS) instances hosted on the dedicated hosts. For more information, see the description of the AutoRenewWithEcs parameter.
       *
       * @param request ModifyDedicatedHostAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedHostAutoRenewAttributeResponse
       */
      Models::ModifyDedicatedHostAutoRenewAttributeResponse modifyDedicatedHostAutoRenewAttributeWithOptions(const Models::ModifyDedicatedHostAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables auto-renewal for one or more subscription dedicated hosts.
       *
       * @description *   If you enable auto-renewal for your subscription dedicated host, the system attempts to deduct the renewal payment at 08:00:00 (UTC+8) nine days before the dedicated host expires to renew the dedicated host. If this deduction attempt fails, the system attempt to deduct the payment at the same point in time the next day. The system attempts to deduct the payment once every day until the dedicated host expires or until the payment is deducted. Make sure that your account balance is sufficient.
       * *   Subscription dedicated hosts can be automatically renewed along with the subscription Elastic Compute Service (ECS) instances hosted on the dedicated hosts. For more information, see the description of the AutoRenewWithEcs parameter.
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
       * @summary Modifies the name, description, release behavior with ECS instance, snapshot deletion on disk removal, automatic snapshot policy feature, and performance burst feature for one or more block storage devices.
       *
       * @description You can use `DiskId` to specify a block storage device and modify the attributes of the device, such as the name and description of the device and whether to release the device together with the associated instance. You can use `DiskIds.N` to specify multiple block storage devices and batch modify the attributes of the devices.
       *
       * @param request ModifyDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskAttributeResponse
       */
      Models::ModifyDiskAttributeResponse modifyDiskAttributeWithOptions(const Models::ModifyDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, release behavior with ECS instance, snapshot deletion on disk removal, automatic snapshot policy feature, and performance burst feature for one or more block storage devices.
       *
       * @description You can use `DiskId` to specify a block storage device and modify the attributes of the device, such as the name and description of the device and whether to release the device together with the associated instance. You can use `DiskIds.N` to specify multiple block storage devices and batch modify the attributes of the devices.
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
       * *   Only pay-as-you-go disks can be attached to pay-as-you-go instances, and the billing methods of the disks cannot be changed.
       * *   The instance to which data disks are attached cannot be in the Stopped state due to expiration.
       * *   The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are nonrefundable.
       * *   You cannot change the billing method again within 5 minutes of a successful change.
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
       * *   Only pay-as-you-go disks can be attached to pay-as-you-go instances, and the billing methods of the disks cannot be changed.
       * *   The instance to which data disks are attached cannot be in the Stopped state due to expiration.
       * *   The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are nonrefundable.
       * *   You cannot change the billing method again within 5 minutes of a successful change.
       * After you change the billing method, the payment (if any) is automatically completed. Maintain sufficient balance in your account. Otherwise, your order becomes invalid and must be canceled. If your account balance is insufficient, you can set AutoPay to false to generate an unpaid order. Then, log on to the **Expenses and Costs console**, go to the [Orders page](https://usercenter2-intl.aliyun.com/order/list), and pay for the order.
       *
       * @param request ModifyDiskChargeTypeRequest
       * @return ModifyDiskChargeTypeResponse
       */
      Models::ModifyDiskChargeTypeResponse modifyDiskChargeType(const Models::ModifyDiskChargeTypeRequest &request);

      /**
       * @summary Changes the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description *   To call this operation as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Before you can call this operation in a region, make sure that the Account-level EBS Default Encryption feature is enabled in the region.
       * *   The first time you use a customer master key (CMK), you must use the `AliyunECSDiskEncryptDefaultRole` role to grant Elastic Compute Service (ECS) access to KMS resources. For more information, see [Grant access to KMS keys through RAM roles](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyIdWithOptions(const Models::ModifyDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the Key Management Service (KMS) key used by the Account-level Elastic Block Storage (EBS) Default Encryption feature in a region.
       *
       * @description *   To call this operation as a Resource Access Management (RAM) user, grant the `AliyunECSFullAccess` permission to the RAM user. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Before you can call this operation in a region, make sure that the Account-level EBS Default Encryption feature is enabled in the region.
       * *   The first time you use a customer master key (CMK), you must use the `AliyunECSDiskEncryptDefaultRole` role to grant Elastic Compute Service (ECS) access to KMS resources. For more information, see [Grant access to KMS keys through RAM roles](https://help.aliyun.com/document_detail/2838993.html).
       *
       * @param request ModifyDiskDefaultKMSKeyIdRequest
       * @return ModifyDiskDefaultKMSKeyIdResponse
       */
      Models::ModifyDiskDefaultKMSKeyIdResponse modifyDiskDefaultKMSKeyId(const Models::ModifyDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Migrates disks to or from a dedicated block storage cluster, or migrates disks between different dedicated block storage clusters.
       *
       * @description >  The Dedicated Block Storage Cluster feature is available in the following regions: China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), Germany (Frankfurt), and China South 1 Finance.
       * Before you call the ModifyDiskDeployment operation, make sure that you fully understand the billing methods and prices of disks and dedicated block storage clusters. In addition, make sure that the dedicated block storage clusters are unexpired and your account has no overdue payments. For more information, see [Dedicated block storage cluster](https://help.aliyun.com/document_detail/208883.html) and [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
       * Take note of the following items:
       * *   The disks and a dedicated block storage cluster to which you want to migrate the disk must be in the same zone.
       * *   You can migrate only pay-as-you-go disks. If you want to migrate subscription disks, change the disks to pay-as-you-go disks first. For more information, see [Change the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * *   The specifications of disks that you want to migrate to a destination block storage cluster must the same as the disk specifications that the destination dedicated block storage cluster supports. During migration, you can change the specifications of the disks to ensure specification consistency.
       * *   The disk must be in the **In Use** (In_Use) or **Available** (Available) state.
       * *   If the disk is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The ECS instance cannot be in the Expired state.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, extend the ESSD and try again. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * *   An account can perform up to five disk migration tasks in the same region at the same time.
       * *   When a disk is being migrated, you cannot cancel the migration task, create snapshots for the disk, change the disk configurations, resize the disk, mount the disk, unmount the disk, or re-initialize the disk.
       * >  After you migrate a disk to a destination cluster by calling the ModifyDiskDeployment operation, the billing method, disk specifications, and capabilities of the destination cluster take effect immediately on the disk. Alibaba Cloud charges the disk based on the disk category and performance level. For more information, see [Dedicated block storage cluster](https://help.aliyun.com/document_detail/208883.html) and [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
       *
       * @param request ModifyDiskDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskDeploymentResponse
       */
      Models::ModifyDiskDeploymentResponse modifyDiskDeploymentWithOptions(const Models::ModifyDiskDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates disks to or from a dedicated block storage cluster, or migrates disks between different dedicated block storage clusters.
       *
       * @description >  The Dedicated Block Storage Cluster feature is available in the following regions: China (Hangzhou), China (Shanghai), China (Beijing), China (Zhangjiakou), China (Ulanqab), China (Shenzhen), China (Heyuan), Indonesia (Jakarta), Germany (Frankfurt), and China South 1 Finance.
       * Before you call the ModifyDiskDeployment operation, make sure that you fully understand the billing methods and prices of disks and dedicated block storage clusters. In addition, make sure that the dedicated block storage clusters are unexpired and your account has no overdue payments. For more information, see [Dedicated block storage cluster](https://help.aliyun.com/document_detail/208883.html) and [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
       * Take note of the following items:
       * *   The disks and a dedicated block storage cluster to which you want to migrate the disk must be in the same zone.
       * *   You can migrate only pay-as-you-go disks. If you want to migrate subscription disks, change the disks to pay-as-you-go disks first. For more information, see [Change the billing method of a disk](https://help.aliyun.com/document_detail/145018.html).
       * *   The specifications of disks that you want to migrate to a destination block storage cluster must the same as the disk specifications that the destination dedicated block storage cluster supports. During migration, you can change the specifications of the disks to ensure specification consistency.
       * *   The disk must be in the **In Use** (In_Use) or **Available** (Available) state.
       * *   If the disk is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The ECS instance cannot be in the Expired state.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, extend the ESSD and try again. For more information, see [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) and [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * *   An account can perform up to five disk migration tasks in the same region at the same time.
       * *   When a disk is being migrated, you cannot cancel the migration task, create snapshots for the disk, change the disk configurations, resize the disk, mount the disk, unmount the disk, or re-initialize the disk.
       * >  After you migrate a disk to a destination cluster by calling the ModifyDiskDeployment operation, the billing method, disk specifications, and capabilities of the destination cluster take effect immediately on the disk. Alibaba Cloud charges the disk based on the disk category and performance level. For more information, see [Dedicated block storage cluster](https://help.aliyun.com/document_detail/208883.html) and [Block storage devices](https://help.aliyun.com/document_detail/179022.html).
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
       * *   To change the performance level of an ESSD, take note of the following items:
       *     *   If the ESSD is a subscription ESSD, you can only upgrade its performance level.
       *     *   If the ESSD is a pay-as-you-go ESSD, you can upgrade or downgrade its performance level. However, you cannot downgrade the performance level to PL0.
       *     *   The ESSD must be in the **In Use** (In_Use) or **Unattached** (Available) state.
       *     *   If the ESSD is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The instance cannot be in the Expired state or stopped due to an overdue payment.
       *     *   If you cannot upgrade the performance level of an ESSD due to the capacity limit, extend the ESSD by calling the [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) operation and then try again. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * *   For information about the limits on changing the disk category of a cloud disk, see [Change the category of a disk](~~161980#section_s4a_to0_1jx~~).
       * *   For the disk categories to which cloud disks of each disk category can be changed, see [Change the category of a disk](~~161980#eb8bb54032nho~~).
       * After the disk category of a cloud disk is changed, the billing of the cloud disk has the following changes:
       * *   If the cloud disk is a pay-as-you-go disk, you are charged for the disk based on the new disk category.
       * *   If the cloud disk is a subscription disk, you may be charged additionally based on the price difference between the old and new disk categories and the remaining days of the billing cycle, starting from 00:00 the next day until the end of the subscription period.
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
       * *   To change the performance level of an ESSD, take note of the following items:
       *     *   If the ESSD is a subscription ESSD, you can only upgrade its performance level.
       *     *   If the ESSD is a pay-as-you-go ESSD, you can upgrade or downgrade its performance level. However, you cannot downgrade the performance level to PL0.
       *     *   The ESSD must be in the **In Use** (In_Use) or **Unattached** (Available) state.
       *     *   If the ESSD is attached to an Elastic Compute Service (ECS) instance, the instance must be in the **Running** (Running) or **Stopped** (Stopped) state. The instance cannot be in the Expired state or stopped due to an overdue payment.
       *     *   If you cannot upgrade the performance level of an ESSD due to the capacity limit, extend the ESSD by calling the [ResizeDisk](https://help.aliyun.com/document_detail/25522.html) operation and then try again. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
       * *   For information about the limits on changing the disk category of a cloud disk, see [Change the category of a disk](~~161980#section_s4a_to0_1jx~~).
       * *   For the disk categories to which cloud disks of each disk category can be changed, see [Change the category of a disk](~~161980#eb8bb54032nho~~).
       * After the disk category of a cloud disk is changed, the billing of the cloud disk has the following changes:
       * *   If the cloud disk is a pay-as-you-go disk, you are charged for the disk based on the new disk category.
       * *   If the cloud disk is a subscription disk, you may be charged additionally based on the price difference between the old and new disk categories and the remaining days of the billing cycle, starting from 00:00 the next day until the end of the subscription period.
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
       * @summary ModifyForwardEntry
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyForwardEntry is deprecated, please use Vpc::2016-04-28::ModifyForwardEntry instead.
       *
       * @summary ModifyForwardEntry
       *
       * @param request ModifyForwardEntryRequest
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntry(const Models::ModifyForwardEntryRequest &request);

      /**
       * @deprecated OpenAPI ModifyHaVipAttribute is deprecated, please use Vpc::2016-04-28::ModifyHaVipAttribute instead.
       *
       * @summary ModifyHaVipAttribute
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyHaVipAttribute is deprecated, please use Vpc::2016-04-28::ModifyHaVipAttribute instead.
       *
       * @summary ModifyHaVipAttribute
       *
       * @param request ModifyHaVipAttributeRequest
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttribute(const Models::ModifyHaVipAttributeRequest &request);

      /**
       * @summary Modifies the description of a high performance computing (HPC) cluster.
       *
       * @param request ModifyHpcClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHpcClusterAttributeResponse
       */
      Models::ModifyHpcClusterAttributeResponse modifyHpcClusterAttributeWithOptions(const Models::ModifyHpcClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a high performance computing (HPC) cluster.
       *
       * @param request ModifyHpcClusterAttributeRequest
       * @return ModifyHpcClusterAttributeResponse
       */
      Models::ModifyHpcClusterAttributeResponse modifyHpcClusterAttribute(const Models::ModifyHpcClusterAttributeRequest &request);

      /**
       * @summary Modifies the attributes of a custom image, such as the image family, name, boot mode, and status and whether the image supports the Non-Volatile Memory Express (NVMe) protocol. When you call this operation, you can specify parameters, such as ImageId and ImageFamily, in the request.
       *
       * @param request ModifyImageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttributeWithOptions(const Models::ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a custom image, such as the image family, name, boot mode, and status and whether the image supports the Non-Volatile Memory Express (NVMe) protocol. When you call this operation, you can specify parameters, such as ImageId and ImageFamily, in the request.
       *
       * @param request ModifyImageAttributeRequest
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttribute(const Models::ModifyImageAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyImageShareGroupPermission is deprecated, please use Ecs::2014-05-26::ModifyImageSharePermission instead.
       *
       * @summary 修改镜像共享组权限
       *
       * @param request ModifyImageShareGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageShareGroupPermissionResponse
       */
      Models::ModifyImageShareGroupPermissionResponse modifyImageShareGroupPermissionWithOptions(const Models::ModifyImageShareGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyImageShareGroupPermission is deprecated, please use Ecs::2014-05-26::ModifyImageSharePermission instead.
       *
       * @summary 修改镜像共享组权限
       *
       * @param request ModifyImageShareGroupPermissionRequest
       * @return ModifyImageShareGroupPermissionResponse
       */
      Models::ModifyImageShareGroupPermissionResponse modifyImageShareGroupPermission(const Models::ModifyImageShareGroupPermissionRequest &request);

      /**
       * @summary Modifies the share permissions on an image. You can share your custom images with other Alibaba Cloud accounts or publish the images as community images.
       *
       * @description Before you call this operation, read [Share a custom image](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, take note of the following sharing rules:
       * *   **Sharing limits**: You can share only the custom images created in your Alibaba Cloud account to other Alibaba Cloud accounts. A custom image can be shared to up to 50 Alibaba Cloud accounts. You can share a custom image to up to 10 Alibaba Cloud accounts at a time.
       * *   **Impacts on an instance**: If an instance was created ([RunInstances](https://help.aliyun.com/document_detail/63440.html)) from a shared image, you cannot re-initialize the system disk of the instance ([ReInitDisk](https://help.aliyun.com/document_detail/25519.html)) after the image owner unshares or deletes the image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)).
       * >  You can share images encrypted by using customer master keys (CMKs) but cannot share images encrypted by using service keys. When you share an image encrypted by using a service key, an error is reported. If you want to share an image encrypted by using a service key, call the CopyImage operation to copy the image and change the encryption key of the image copy to a CMK.
       * When you publish or unpublish a community image, take note of the following items:
       * *   **Responsibilities and agreement**: Alibaba Cloud provides only the platform on which community images can be published and managed. The owner of a community image is responsible for the quality and updates of the image. Make sure that you acknowledge and agree to the Community Image Agreement. Otherwise, you cannot publish community images. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * *   **Encryption limits**: You cannot publish encrypted images as community images.
       * *   **Openness**: Community images are publicly available. A community image is available to all Alibaba Cloud accounts in the region where the image resides.
       * *   **Feature limits**: You cannot share, export, or copy community images.
       * *   **Unpublication impacts**: After you unpublish a community image, the image is no longer available to other Alibaba Cloud accounts. If an image is shared to other Alibaba Cloud accounts before it is unpublished, the image remains available to the accounts.
       *
       * @param request ModifyImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermissionWithOptions(const Models::ModifyImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the share permissions on an image. You can share your custom images with other Alibaba Cloud accounts or publish the images as community images.
       *
       * @description Before you call this operation, read [Share a custom image](https://help.aliyun.com/document_detail/25463.html).
       * When you call this operation, take note of the following sharing rules:
       * *   **Sharing limits**: You can share only the custom images created in your Alibaba Cloud account to other Alibaba Cloud accounts. A custom image can be shared to up to 50 Alibaba Cloud accounts. You can share a custom image to up to 10 Alibaba Cloud accounts at a time.
       * *   **Impacts on an instance**: If an instance was created ([RunInstances](https://help.aliyun.com/document_detail/63440.html)) from a shared image, you cannot re-initialize the system disk of the instance ([ReInitDisk](https://help.aliyun.com/document_detail/25519.html)) after the image owner unshares or deletes the image ([DeleteImage](https://help.aliyun.com/document_detail/25537.html)).
       * >  You can share images encrypted by using customer master keys (CMKs) but cannot share images encrypted by using service keys. When you share an image encrypted by using a service key, an error is reported. If you want to share an image encrypted by using a service key, call the CopyImage operation to copy the image and change the encryption key of the image copy to a CMK.
       * When you publish or unpublish a community image, take note of the following items:
       * *   **Responsibilities and agreement**: Alibaba Cloud provides only the platform on which community images can be published and managed. The owner of a community image is responsible for the quality and updates of the image. Make sure that you acknowledge and agree to the Community Image Agreement. Otherwise, you cannot publish community images. For more information, see [Publish a community image](https://help.aliyun.com/document_detail/208370.html).
       * *   **Encryption limits**: You cannot publish encrypted images as community images.
       * *   **Openness**: Community images are publicly available. A community image is available to all Alibaba Cloud accounts in the region where the image resides.
       * *   **Feature limits**: You cannot share, export, or copy community images.
       * *   **Unpublication impacts**: After you unpublish a community image, the image is no longer available to other Alibaba Cloud accounts. If an image is shared to other Alibaba Cloud accounts before it is unpublished, the image remains available to the accounts.
       *
       * @param request ModifyImageSharePermissionRequest
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermission(const Models::ModifyImageSharePermissionRequest &request);

      /**
       * @summary Changes the type of the private pool for an Elastic Compute Service (ECS) instance.
       *
       * @description A private pool is generated after an elasticity assurance or a capacity reservation is created. The private pool is associated with information about the instances that use the private pool. You can specify whether to use a private pool when you create an ECS instance to match the instance with the associated elasticity assurance or capacity reservation.
       * *   After you call this operation to modify the private pool attributes of an ECS instance, you do not need to restart the instance for the changes to take effect.
       * *   When you call the following operations on an ECS instance, the system attempts to match the instance with active private pools. If the instance is already matched to a specified private pool, the call to an operation may fail when the private pool capacity is used up or the private pool expires. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the type of the private pool to `Open`.
       *     *   [StartInstance](https://help.aliyun.com/document_detail/2679679.html): start an ECS instance that is stopped in economical mode.
       *     *   [ReActivateInstances](https://help.aliyun.com/document_detail/2679707.html): reactivates an ECS instance that has expired or is reclaimed due to an overdue payment.
       *     *   [ModifyInstanceChargeType](https://help.aliyun.com/document_detail/2679704.html): changes the billing method of an ECS instance.
       *     *   [ModifyPrepayInstanceSpec](https://help.aliyun.com/document_detail/2679706.html): changes the instance type of an ECS instance.
       *     *   [ReplaceSystemDisk](https://help.aliyun.com/document_detail/2679771.html): replaces the operating system of an ECS instance.
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
       * *   After you call this operation to modify the private pool attributes of an ECS instance, you do not need to restart the instance for the changes to take effect.
       * *   When you call the following operations on an ECS instance, the system attempts to match the instance with active private pools. If the instance is already matched to a specified private pool, the call to an operation may fail when the private pool capacity is used up or the private pool expires. If the call fails, call the ModifyInstanceAttachmentAttributes operation to change the type of the private pool to `Open`.
       *     *   [StartInstance](https://help.aliyun.com/document_detail/2679679.html): start an ECS instance that is stopped in economical mode.
       *     *   [ReActivateInstances](https://help.aliyun.com/document_detail/2679707.html): reactivates an ECS instance that has expired or is reclaimed due to an overdue payment.
       *     *   [ModifyInstanceChargeType](https://help.aliyun.com/document_detail/2679704.html): changes the billing method of an ECS instance.
       *     *   [ModifyPrepayInstanceSpec](https://help.aliyun.com/document_detail/2679706.html): changes the instance type of an ECS instance.
       *     *   [ReplaceSystemDisk](https://help.aliyun.com/document_detail/2679771.html): replaces the operating system of an ECS instance.
       *
       * @param request ModifyInstanceAttachmentAttributesRequest
       * @return ModifyInstanceAttachmentAttributesResponse
       */
      Models::ModifyInstanceAttachmentAttributesResponse modifyInstanceAttachmentAttributes(const Models::ModifyInstanceAttachmentAttributesRequest &request);

      /**
       * @summary Modifies the attributes of an Elastic Compute Service (ECS) instance, such as the password, name, description, hostname, security groups, maximum transmission unit (MTU), and user data of the instance.
       *
       * @description You cannot call this operation to modify the attributes of the ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an Elastic Compute Service (ECS) instance, such as the password, name, description, hostname, security groups, maximum transmission unit (MTU), and user data of the instance.
       *
       * @description You cannot call this operation to modify the attributes of the ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
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
       * @summary Configures auto-renewal for subscription instances to help reduce the maintenance workloads on instance expiration.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS)**.
       * *   Make sure that your account balance or credit balance is sufficient.
       * *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   The payment for auto-renewal of an instance is automatically deducted at 08:00:00 (UTC+8) nine days before the instance expires.
       * *   If the deduction fails, Alibaba Cloud attempts to deduct the payment every day until the payment is deducted or until the instance is locked on expiration.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttributeWithOptions(const Models::ModifyInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures auto-renewal for subscription instances to help reduce the maintenance workloads on instance expiration.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of Elastic Compute Service (ECS)**.
       * *   Make sure that your account balance or credit balance is sufficient.
       * *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   The payment for auto-renewal of an instance is automatically deducted at 08:00:00 (UTC+8) nine days before the instance expires.
       * *   If the deduction fails, Alibaba Cloud attempts to deduct the payment every day until the payment is deducted or until the instance is locked on expiration.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttribute(const Models::ModifyInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Changes the billing method of Elastic Compute Service (ECS) instances in batches.
       *
       * @description ### [](#)Precautions
       * *   Before you call this operation, make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS.
       * *   The instances must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state, and you have no overdue payments for the instances.
       * *   After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the [ECS console](https://ecs.console.aliyun.com/) to pay for the order.
       * ### [](#)Considerations
       * *   **Change the billing method from subscription to pay-as-you-go**:
       *     *   After you change the billing method of an instance from subscription to pay-as-you-go, the new billing method remains in effect for the remaining lifecycle of the instance. The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are not refundable.
       *     *   **Refund rule**: You have a quota for the total refund amount each month, and unused balance of this quota is not carried forward into the next month. After you use up the refund quota of the current month, you can change the billing method only in the next month. The refund amount incurred when you change the billing method is calculated based on the following formula: **Number of vCPUs × (Number of remaining days × 24 ± Number of remaining or elapsed hours)**. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * *   **Change the billing method from pay-as-you-go to subscription**:
       *     *   You can change the billing method of all data disks attached to an instance from pay-as-you-go to subscription.
       *     *   This operation cannot be called for a pay-as-you-go instance that has an automatic release time set. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/49884.html).
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
       * *   Before you call this operation, make sure that you are familiar with the [subscription](https://help.aliyun.com/document_detail/56220.html) and [pay-as-you-go](https://help.aliyun.com/document_detail/40653.html) billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS.
       * *   The instances must be in the **Running** (`Running`) or **Stopped** (`Stopped`) state, and you have no overdue payments for the instances.
       * *   After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the [ECS console](https://ecs.console.aliyun.com/) to pay for the order.
       * ### [](#)Considerations
       * *   **Change the billing method from subscription to pay-as-you-go**:
       *     *   After you change the billing method of an instance from subscription to pay-as-you-go, the new billing method remains in effect for the remaining lifecycle of the instance. The price difference is refunded to the payment account that you used. Vouchers that have been redeemed are not refundable.
       *     *   **Refund rule**: You have a quota for the total refund amount each month, and unused balance of this quota is not carried forward into the next month. After you use up the refund quota of the current month, you can change the billing method only in the next month. The refund amount incurred when you change the billing method is calculated based on the following formula: **Number of vCPUs × (Number of remaining days × 24 ± Number of remaining or elapsed hours)**. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/85517.html).
       * *   **Change the billing method from pay-as-you-go to subscription**:
       *     *   You can change the billing method of all data disks attached to an instance from pay-as-you-go to subscription.
       *     *   This operation cannot be called for a pay-as-you-go instance that has an automatic release time set. For more information, see [Change the billing method of an instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/49884.html).
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the instance clock options.
       *
       * @description When you call this operation, note that:
       * *   This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * *   To modify the PtpStatus parameter, you must specify the parameter. The instance types that are supported. You can query the instance type list ([DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) ).
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
       * *   This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * *   To modify the PtpStatus parameter, you must specify the parameter. The instance types that are supported. You can query the instance type list ([DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) ).
       *
       * @param request ModifyInstanceClockOptionsRequest
       * @return ModifyInstanceClockOptionsResponse
       */
      Models::ModifyInstanceClockOptionsResponse modifyInstanceClockOptions(const Models::ModifyInstanceClockOptionsRequest &request);

      /**
       * @summary Changes the deployment set of an Elastic Compute Service (ECS) instance or migrates an ECS instance to a dedicated host. You can change the instance type of an ECS instance when you migrate the instance.
       *
       * @description Take note of the following items:
       * *   The instance must be in the **Stopped** (Stopped) state. The instance is automatically restarted after it is migrated.
       * *   The network type of the instance must be Virtual Private Cloud (VPC).
       * *   The instance and the destination dedicated host to which to migrate the instance must belong to the same account and reside in the same region and zone.
       * *   A pay-as-you-go instance can be migrated to a subscription dedicated host. A subscription instance can be migrated only between subscription dedicated hosts. The expiration date of the subscription instance cannot be later than that of the destination dedicated host.
       * *   You can migrate only pay-as-you-go instances from a shared host to a dedicated host. You cannot migrate subscription instances or spot instances from a shared host to a dedicated host.
       * *   You can redeploy an instance to a specific dedicated host cluster.
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
       * *   The instance must be in the **Stopped** (Stopped) state. The instance is automatically restarted after it is migrated.
       * *   The network type of the instance must be Virtual Private Cloud (VPC).
       * *   The instance and the destination dedicated host to which to migrate the instance must belong to the same account and reside in the same region and zone.
       * *   A pay-as-you-go instance can be migrated to a subscription dedicated host. A subscription instance can be migrated only between subscription dedicated hosts. The expiration date of the subscription instance cannot be later than that of the destination dedicated host.
       * *   You can migrate only pay-as-you-go instances from a shared host to a dedicated host. You cannot migrate subscription instances or spot instances from a shared host to a dedicated host.
       * *   You can redeploy an instance to a specific dedicated host cluster.
       *
       * @param request ModifyInstanceDeploymentRequest
       * @return ModifyInstanceDeploymentResponse
       */
      Models::ModifyInstanceDeploymentResponse modifyInstanceDeployment(const Models::ModifyInstanceDeploymentRequest &request);

      /**
       * @summary Modifies the maintenance attributes of an instance.
       *
       * @description This operation is used to modify the maintenance policy of an instance. The maintenance policy consists of the following maintenance attributes:
       * *   Maintenance window: the time period that you specify for maintenance.
       * *   Maintenance action: the action that you specify in response to instance shutdown.
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
       * *   Maintenance window: the time period that you specify for maintenance.
       * *   Maintenance action: the action that you specify in response to instance shutdown.
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
       * @summary Modifies the network bandwidth weight of an instance.
       *
       * @description When you call this operation, note that:
       * *   This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * *   You can modify only one attribute at a time. If you modify multiple attributes, call this operation multiple times.
       * *   To modify the BandwidthWeighting, you must specify the specifications of the instance. You can use the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query whether the current instance type supports bandwidth weights and the supported bandwidth weights.
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptionsWithOptions(const Models::ModifyInstanceNetworkOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network bandwidth weight of an instance.
       *
       * @description When you call this operation, note that:
       * *   This is an asynchronous operation. The ID of the asynchronous task is returned after the call. Query the asynchronous task result to determine whether the execution is complete.
       * *   You can modify only one attribute at a time. If you modify multiple attributes, call this operation multiple times.
       * *   To modify the BandwidthWeighting, you must specify the specifications of the instance. You can use the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query whether the current instance type supports bandwidth weights and the supported bandwidth weights.
       *
       * @param request ModifyInstanceNetworkOptionsRequest
       * @return ModifyInstanceNetworkOptionsResponse
       */
      Models::ModifyInstanceNetworkOptionsResponse modifyInstanceNetworkOptions(const Models::ModifyInstanceNetworkOptionsRequest &request);

      /**
       * @summary Modifies the network configurations of an Elastic Compute Service (ECS) instance, such as the public bandwidth, assignment or unassignment of a static public IP address (also known as system-assigned or auto-assigned public IP address), and billing method for network usage. You can call this operation to upgrade or downgrade the network configurations of ECS instances.
       *
       * @description Take note of the following items:
       * *   If you upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of a subscription (PrePaid) instance from 0 Mbit/s when you modify the network configurations of the instance, a static public IP address is automatically assigned to the instance.
       * *   If you upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of a pay-as-you-go (PostPaid) instance from 0 Mbit/s when you modify the network configurations of the instance, no static public IP address is automatically assigned to the instance. In this case, to assign a static public IP address to the instance, you must set `AllocatePublicIp` to `true`.
       * *   You can upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of an instance in the classic network from 0 Mbit/s only if the instance is in the Stopped state.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits" topic.
       * *   Billing:
       *     *   After the public bandwidth is upgraded, AutoPay is automatically set to true and the payment is automatically made. Make sure that your account balance is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set AutoPay to false. In this case, when you call the ModifyInstanceNetworkSpec operation, an unpaid order is generated. Then, you can log on to the ECS console to pay for the order.
       *     *   After the public bandwidth is downgraded, the price difference is refunded to the payment account that you used. Vouchers or coupons that have been redeemed are not refundable.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpecWithOptions(const Models::ModifyInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network configurations of an Elastic Compute Service (ECS) instance, such as the public bandwidth, assignment or unassignment of a static public IP address (also known as system-assigned or auto-assigned public IP address), and billing method for network usage. You can call this operation to upgrade or downgrade the network configurations of ECS instances.
       *
       * @description Take note of the following items:
       * *   If you upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of a subscription (PrePaid) instance from 0 Mbit/s when you modify the network configurations of the instance, a static public IP address is automatically assigned to the instance.
       * *   If you upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of a pay-as-you-go (PostPaid) instance from 0 Mbit/s when you modify the network configurations of the instance, no static public IP address is automatically assigned to the instance. In this case, to assign a static public IP address to the instance, you must set `AllocatePublicIp` to `true`.
       * *   You can upgrade the outbound public bandwidth (InternetMaxBandwidthOut) of an instance in the classic network from 0 Mbit/s only if the instance is in the Stopped state.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits" topic.
       * *   Billing:
       *     *   After the public bandwidth is upgraded, AutoPay is automatically set to true and the payment is automatically made. Make sure that your account balance is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set AutoPay to false. In this case, when you call the ModifyInstanceNetworkSpec operation, an unpaid order is generated. Then, you can log on to the ECS console to pay for the order.
       *     *   After the public bandwidth is downgraded, the price difference is refunded to the payment account that you used. Vouchers or coupons that have been redeemed are not refundable.
       *
       * @param request ModifyInstanceNetworkSpecRequest
       * @return ModifyInstanceNetworkSpecResponse
       */
      Models::ModifyInstanceNetworkSpecResponse modifyInstanceNetworkSpec(const Models::ModifyInstanceNetworkSpecRequest &request);

      /**
       * @summary Changes the instance type or public bandwidth of a pay-as-you-go Elastic Compute Service (ECS) instance.
       *
       * @description **Before you call this operation, familiarize yourself with the billing and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.**
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query compatible instance types.
       * **Considerations**
       * *   Make sure that you have no overdue payments in your account.
       * *   You can change only the instance type or only the public bandwidth of an ECS instance at a time. The instance type and the public bandwidth of an ECS instance cannot be changed together.
       * *   You can change the public bandwidth of an ECS instance only when the instance is in the **Running** (`Running`) or **Stopped** (`Stopped`) state. The change immediately takes effect.
       * *   You can change the instance type of an ECS instance only when the instance is in the **Stopped** (`Stopped`) state. You must [start the instance](https://help.aliyun.com/document_detail/25441.html) for the change to take effect.
       * >  A limit is imposed on the sum of public bandwidths of all ECS instances that use the pay-by-bandwidth billing method for network usage per region in an Alibaba Cloud account. For more information, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits and quotas" topic.
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the instance type or public bandwidth of a pay-as-you-go Elastic Compute Service (ECS) instance.
       *
       * @description **Before you call this operation, familiarize yourself with the billing and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.**
       * Before you [change the instance type of a pay-as-you-go instance](https://help.aliyun.com/document_detail/60051.html), call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query compatible instance types.
       * **Considerations**
       * *   Make sure that you have no overdue payments in your account.
       * *   You can change only the instance type or only the public bandwidth of an ECS instance at a time. The instance type and the public bandwidth of an ECS instance cannot be changed together.
       * *   You can change the public bandwidth of an ECS instance only when the instance is in the **Running** (`Running`) or **Stopped** (`Stopped`) state. The change immediately takes effect.
       * *   You can change the instance type of an ECS instance only when the instance is in the **Stopped** (`Stopped`) state. You must [start the instance](https://help.aliyun.com/document_detail/25441.html) for the change to take effect.
       * >  A limit is imposed on the sum of public bandwidths of all ECS instances that use the pay-by-bandwidth billing method for network usage per region in an Alibaba Cloud account. For more information, see the [Public bandwidth limits](~~25412#BandwidthQuota~~) section of the "Limits and quotas" topic.
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Changes the Virtual Network Computing (VNC) password of an Elastic Compute Service (ECS) instance.
       *
       * @description *   The VNC password must be six characters in length and can contain uppercase letters, lowercase letters, and digits.
       * *   After you modify the VNC password of an ECS instance, take note of the following items:
       *     *   If the instance is I/O optimized, the new password takes effect immediately without the need to restart the instance.
       *     *   If the instance is not I/O optimized, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the ECS console or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswdWithOptions(const Models::ModifyInstanceVncPasswdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the Virtual Network Computing (VNC) password of an Elastic Compute Service (ECS) instance.
       *
       * @description *   The VNC password must be six characters in length and can contain uppercase letters, lowercase letters, and digits.
       * *   After you modify the VNC password of an ECS instance, take note of the following items:
       *     *   If the instance is I/O optimized, the new password takes effect immediately without the need to restart the instance.
       *     *   If the instance is not I/O optimized, you must [restart the instance](https://help.aliyun.com/document_detail/25440.html) in the ECS console or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the new password to take effect.
       *
       * @param request ModifyInstanceVncPasswdRequest
       * @return ModifyInstanceVncPasswdResponse
       */
      Models::ModifyInstanceVncPasswdResponse modifyInstanceVncPasswd(const Models::ModifyInstanceVncPasswdRequest &request);

      /**
       * @summary Changes the virtual private cloud (VPC), private IP address, security groups, or vSwitch of an Elastic Compute Service (ECS) instance located in a VPC.
       *
       * @description The ECS instance that you want to manage must be in the **Stopped** (`Stopped`) state.
       * *   When you call this operation to change the private IP address or vSwitch of an ECS instance, take note of the following items:
       *     *   If the instance is a new instance, you must restart the instance before you call this operation.
       *     *   After the private IP address or vSwitch of the instance is changed, you must restart the instance before you can recall this operation.
       * *   When you call this operation to change the VPC of an ECS instance, take note of the following items:
       *     *   **ECS instance:**
       *         *   The instance cannot be in the Locked, To Be Released, Expired, To Be Recycled, Expired and Being Recycled, or Overdue and Being Recycled state. For more information, see [Overview of instances](https://help.aliyun.com/document_detail/25380.html).
       *         *   The instance cannot be associated with Server Load Balancer (SLB) instances.
       *         *   The instance cannot be used in other Alibaba Cloud services. For example, the instance cannot be in the process of being migrated or having its VPC changed, or the databases deployed on the instance cannot be managed by Data Transmission Service (DTS).
       *     *   **Network:**
       *         *   The cut-through mode or the multi-elastic IP address (EIP)-to-elastic network interface (ENI) mode cannot be enabled for the ECS instance.
       *         *   The ECS instance cannot be associated with a high-availability virtual IP address (HAVIP).
       *         *   The vSwitch of the ECS instance cannot be associated with a custom route table.
       *         *   Global Accelerator (GA) cannot be activated for the ECS instance.
       *         *   Secondary ENIs cannot be attached to the ECS instance.
       *         *   The ECS instance cannot be assigned an IPv6 address.
       *         *   The primary ENI of the ECS instance cannot be associated with multiple IP addresses.
       *         *   The vSwitch must belong to the new VPC.
       *         *   The original and new vSwitches must reside in the same zone.
       *         *   If you assign a private IP address to the primary ENI of the ECS instance, the private IP address must be an idle IP address within the CIDR block of the new vSwitch. If you do not assign a private IP address to the primary ENI of the ECS instance, a private IP address is randomly assigned to the ENI. Make sure that sufficient IP addresses are available in the CIDR block of the new vSwitch.
       *         *   If you use a VPC that is shared by another Alibaba Cloud account with your account and want to change the security groups of the ECS instance, specify the security groups that you created in the VPC, instead of the security group created by the VPC owner, as the new security groups.
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
       * *   When you call this operation to change the private IP address or vSwitch of an ECS instance, take note of the following items:
       *     *   If the instance is a new instance, you must restart the instance before you call this operation.
       *     *   After the private IP address or vSwitch of the instance is changed, you must restart the instance before you can recall this operation.
       * *   When you call this operation to change the VPC of an ECS instance, take note of the following items:
       *     *   **ECS instance:**
       *         *   The instance cannot be in the Locked, To Be Released, Expired, To Be Recycled, Expired and Being Recycled, or Overdue and Being Recycled state. For more information, see [Overview of instances](https://help.aliyun.com/document_detail/25380.html).
       *         *   The instance cannot be associated with Server Load Balancer (SLB) instances.
       *         *   The instance cannot be used in other Alibaba Cloud services. For example, the instance cannot be in the process of being migrated or having its VPC changed, or the databases deployed on the instance cannot be managed by Data Transmission Service (DTS).
       *     *   **Network:**
       *         *   The cut-through mode or the multi-elastic IP address (EIP)-to-elastic network interface (ENI) mode cannot be enabled for the ECS instance.
       *         *   The ECS instance cannot be associated with a high-availability virtual IP address (HAVIP).
       *         *   The vSwitch of the ECS instance cannot be associated with a custom route table.
       *         *   Global Accelerator (GA) cannot be activated for the ECS instance.
       *         *   Secondary ENIs cannot be attached to the ECS instance.
       *         *   The ECS instance cannot be assigned an IPv6 address.
       *         *   The primary ENI of the ECS instance cannot be associated with multiple IP addresses.
       *         *   The vSwitch must belong to the new VPC.
       *         *   The original and new vSwitches must reside in the same zone.
       *         *   If you assign a private IP address to the primary ENI of the ECS instance, the private IP address must be an idle IP address within the CIDR block of the new vSwitch. If you do not assign a private IP address to the primary ENI of the ECS instance, a private IP address is randomly assigned to the ENI. Make sure that sufficient IP addresses are available in the CIDR block of the new vSwitch.
       *         *   If you use a VPC that is shared by another Alibaba Cloud account with your account and want to change the security groups of the ECS instance, specify the security groups that you created in the VPC, instead of the security group created by the VPC owner, as the new security groups.
       *
       * @param request ModifyInstanceVpcAttributeRequest
       * @return ModifyInstanceVpcAttributeResponse
       */
      Models::ModifyInstanceVpcAttributeResponse modifyInstanceVpcAttribute(const Models::ModifyInstanceVpcAttributeRequest &request);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled command task, including modifying the content and execution frequency of the command and adding Elastic Compute Service (ECS) instances or Alibaba Cloud managed instances to the command task.
       *
       * @description *   You can modify the execution information of a task that runs a command in one of the following modes. To query the execution mode of a command, you can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) operation and check the `RepeatMode` value in the response.
       *     *   Period: The task runs the command on a schedule.
       *     *   NextRebootOnly: The task runs the command the next time the associated instances start.
       *     *   EveryReboot: The task runs the command every time the associated instances start.
       * *   You can modify the execution information of a command task in one of the following execution states. To query the execution status of a command, you can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) operation and check the `InvocationStatus` value.
       *     *   Pending: The command is being verified or sent. When the execution state on at least one instance is Pending, the overall execution state is Pending.
       *     *   Running: The command is being run on instances. When the execution state on at least one instance is Running, the overall execution state is Running.
       *     *   Scheduled: The command that is set to run on a schedule is sent and waiting to be run. When the execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
       *     *   Stopping: The command task is being stopped. When the execution state on at least one instance is Stopping, the overall execution state is Stopping.
       * *   Before you modify the execution information of a scheduled task, such as the command content, custom parameters, and execution frequency, make sure that the version of Cloud Assistant Agent on the ECS instances or managed instances associated with the task is later than the following versions:
       *     *   Linux: 2.2.3.541
       *     *   Windows: 2.1.3.541
       *     *   If the `InvalidOperation.CloudAssistantVersionUnsupported` error code is returned in the response, update Cloud Assistant Agent to the latest version.
       * *   You cannot modify `CommandContent` for a common Cloud Assistant command.
       * *   If you modify the `CommandContent` value of a command and set `KeepCommand` to `true` when you call the [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) operation to run the command, a new command is added and retained. The new command consumes the quota for Cloud Assistant commands. You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can apply for a quota increase. For information about how to query and increase quotas, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       *
       * @param tmpReq ModifyInvocationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInvocationAttributeResponse
       */
      Models::ModifyInvocationAttributeResponse modifyInvocationAttributeWithOptions(const Models::ModifyInvocationAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the execution information of a Cloud Assistant scheduled command task, including modifying the content and execution frequency of the command and adding Elastic Compute Service (ECS) instances or Alibaba Cloud managed instances to the command task.
       *
       * @description *   You can modify the execution information of a task that runs a command in one of the following modes. To query the execution mode of a command, you can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) operation and check the `RepeatMode` value in the response.
       *     *   Period: The task runs the command on a schedule.
       *     *   NextRebootOnly: The task runs the command the next time the associated instances start.
       *     *   EveryReboot: The task runs the command every time the associated instances start.
       * *   You can modify the execution information of a command task in one of the following execution states. To query the execution status of a command, you can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) operation and check the `InvocationStatus` value.
       *     *   Pending: The command is being verified or sent. When the execution state on at least one instance is Pending, the overall execution state is Pending.
       *     *   Running: The command is being run on instances. When the execution state on at least one instance is Running, the overall execution state is Running.
       *     *   Scheduled: The command that is set to run on a schedule is sent and waiting to be run. When the execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
       *     *   Stopping: The command task is being stopped. When the execution state on at least one instance is Stopping, the overall execution state is Stopping.
       * *   Before you modify the execution information of a scheduled task, such as the command content, custom parameters, and execution frequency, make sure that the version of Cloud Assistant Agent on the ECS instances or managed instances associated with the task is later than the following versions:
       *     *   Linux: 2.2.3.541
       *     *   Windows: 2.1.3.541
       *     *   If the `InvalidOperation.CloudAssistantVersionUnsupported` error code is returned in the response, update Cloud Assistant Agent to the latest version.
       * *   You cannot modify `CommandContent` for a common Cloud Assistant command.
       * *   If you modify the `CommandContent` value of a command and set `KeepCommand` to `true` when you call the [InvokeCommand](https://help.aliyun.com/document_detail/64841.html) or [RunCommand](https://help.aliyun.com/document_detail/141751.html) operation to run the command, a new command is added and retained. The new command consumes the quota for Cloud Assistant commands. You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can apply for a quota increase. For information about how to query and increase quotas, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       *
       * @param request ModifyInvocationAttributeRequest
       * @return ModifyInvocationAttributeResponse
       */
      Models::ModifyInvocationAttributeResponse modifyInvocationAttribute(const Models::ModifyInvocationAttributeRequest &request);

      /**
       * @summary Changes the default version of a launch template. When you call this operation, you can specify DefaultVersionNumber in the request. If you do not specify a version when you create Elastic Compute Service (ECS) instances based on a launch template, the default version of the launch template is used.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=ModifyLaunchTemplateDefaultVersion\\&type=RPC\\&version=2014-05-26)
       *
       * @param request ModifyLaunchTemplateDefaultVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLaunchTemplateDefaultVersionResponse
       */
      Models::ModifyLaunchTemplateDefaultVersionResponse modifyLaunchTemplateDefaultVersionWithOptions(const Models::ModifyLaunchTemplateDefaultVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the default version of a launch template. When you call this operation, you can specify DefaultVersionNumber in the request. If you do not specify a version when you create Elastic Compute Service (ECS) instances based on a launch template, the default version of the launch template is used.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Ecs\\&api=ModifyLaunchTemplateDefaultVersion\\&type=RPC\\&version=2014-05-26)
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
       * @summary Modifies the attributes of an elastic network interface (ENI), such as the number of queues supported by the ENI, the security groups to which the ENI belongs, the queue depth, the communication mode, and whether to retain the ENI when the Elastic Compute Service (ECS) instance to which the ENI is attached is released.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttributeWithOptions(const Models::ModifyNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an elastic network interface (ENI), such as the number of queues supported by the ENI, the security groups to which the ENI belongs, the queue depth, the communication mode, and whether to retain the ENI when the Elastic Compute Service (ECS) instance to which the ENI is attached is released.
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
       * @description ## [](#)Usage notes
       * *   The specified CIDR block must be valid. For example, 10.0.0.0/8 is a valid CIDR block while 10.0.0.1/8 is not. For more information, see the [What is CIDR?](~~40637#section-jua-0tj-q5m~~) section in the "Network FAQ" topic.
       * *   When you add or delete an entry, you cannot specify duplicate CIDR blocks. Examples:
       *     *   For IPv4 CIDR blocks, you cannot specify the 10.0.0.0/8 CIDR block in two entries. You cannot specify the 10.0.0.1/32 CIDR block in one entry and the 10.0.0.1 CIDR block in another entry. The two CIDR blocks are the same.
       *     *   For IPv6 CIDR blocks, you cannot specify the 2001:fd01:0:0:0:0:0:0/32 CIDR block in one entry and the 2001:fd01::/32 CIDR block in another entry. The two CIDR blocks are the same.
       * *   The CIDR block in an entry to be added cannot the same as that in an entry to be deleted. For example, when you add an entry in which the 10.0.0.0/8 CIDR block is specified, make sure that the 10.0.0.0/8 CIDR block is not specified in an entry to be deleted.
       * *   If you want to modify the description of an entry, you must specify the CIDR block (`AddEntry.N.Cidr`) and new description (`AddEntry.N.Description`) for the entry.
       *
       * @param request ModifyPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixListWithOptions(const Models::ModifyPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, or entries of a prefix list. You can add, modify, and delete entries in the prefix list.
       *
       * @description ## [](#)Usage notes
       * *   The specified CIDR block must be valid. For example, 10.0.0.0/8 is a valid CIDR block while 10.0.0.1/8 is not. For more information, see the [What is CIDR?](~~40637#section-jua-0tj-q5m~~) section in the "Network FAQ" topic.
       * *   When you add or delete an entry, you cannot specify duplicate CIDR blocks. Examples:
       *     *   For IPv4 CIDR blocks, you cannot specify the 10.0.0.0/8 CIDR block in two entries. You cannot specify the 10.0.0.1/32 CIDR block in one entry and the 10.0.0.1 CIDR block in another entry. The two CIDR blocks are the same.
       *     *   For IPv6 CIDR blocks, you cannot specify the 2001:fd01:0:0:0:0:0:0/32 CIDR block in one entry and the 2001:fd01::/32 CIDR block in another entry. The two CIDR blocks are the same.
       * *   The CIDR block in an entry to be added cannot the same as that in an entry to be deleted. For example, when you add an entry in which the 10.0.0.0/8 CIDR block is specified, make sure that the 10.0.0.0/8 CIDR block is not specified in an entry to be deleted.
       * *   If you want to modify the description of an entry, you must specify the CIDR block (`AddEntry.N.Cidr`) and new description (`AddEntry.N.Description`) for the entry.
       *
       * @param request ModifyPrefixListRequest
       * @return ModifyPrefixListResponse
       */
      Models::ModifyPrefixListResponse modifyPrefixList(const Models::ModifyPrefixListRequest &request);

      /**
       * @summary Changes the instance type of a subscription Elastic Compute Service (ECS) instance. You can upgrade or downgrade the instance type. The new instance type takes effect for the entire lifecycle of the subscription ECS instance.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods, [prices](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [rules for unsubscribing from resources](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * ModifyPrepayInstanceSpec is an asynchronous operation. After a request is sent, wait for 5 to 10 seconds for the instance type change to complete. Before you change the instance type of a subscription ECS instance, call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query the instance types to which you can change the instance.
       * **Considerations**
       * *   Before you change the instance type of an expired instance, you must renew the instance.
       * *   When you downgrade the instance type of a subscription ECS instance, take note of the following items:
       *     *   The instance must be in the **Stopped** (`Stopped`) state.
       *     *   The price difference is refunded to the payment account that you used. Redeemed vouchers are not refundable.
       *     *   The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html).
       * *   When you upgrade the instance type of a subscription ECS instance, take note of the following items:
       *     *   The instance must be in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       *     *   The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) or [restart the instance](https://help.aliyun.com/document_detail/25440.html).
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the instance type of a subscription Elastic Compute Service (ECS) instance. You can upgrade or downgrade the instance type. The new instance type takes effect for the entire lifecycle of the subscription ECS instance.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods, [prices](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl), and [rules for unsubscribing from resources](https://help.aliyun.com/document_detail/476339.html) of ECS.**
       * ModifyPrepayInstanceSpec is an asynchronous operation. After a request is sent, wait for 5 to 10 seconds for the instance type change to complete. Before you change the instance type of a subscription ECS instance, call the [DescribeResourcesModification](https://help.aliyun.com/document_detail/66187.html) operation to query the instance types to which you can change the instance.
       * **Considerations**
       * *   Before you change the instance type of an expired instance, you must renew the instance.
       * *   When you downgrade the instance type of a subscription ECS instance, take note of the following items:
       *     *   The instance must be in the **Stopped** (`Stopped`) state.
       *     *   The price difference is refunded to the payment account that you used. Redeemed vouchers are not refundable.
       *     *   The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html).
       * *   When you upgrade the instance type of a subscription ECS instance, take note of the following items:
       *     *   The instance must be in the **Stopped** (`Stopped`) or **Running** (`Running`) state.
       *     *   The new instance type takes effect only after you [start the instance](https://help.aliyun.com/document_detail/25441.html) or [restart the instance](https://help.aliyun.com/document_detail/25440.html).
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
       * *   You can modify the configurations of a reserved instance only if the reserved instance is in the **Active** state.
       * *   Make sure that the [computing power](~~140660#2742f3844abzz~~) of the reserved instance remains unchanged before and after the modification. Otherwise, the modification fails.
       * *   You cannot split, merge, or change the scope of a reserved instance at the same time.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## [](#)Sample requests
       * *   **Sample request to split a reserved instance**: Split a regional reserved instance that is scoped to the China (Hangzhou) region and can match two pay-as-you-go instances of the ecs.g5.xlarge instance type into two regional reserved instances that are scoped to the China (Hangzhou) region and each can match one pay-as-you-go instance of the ecs.g5.large instance type:
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], //The ID of the reserved instance that you want to split.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName1", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.large", //The instance type that the new reserved instance can match.
       *         "Scope":"Region", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instance.
       *         "InstanceAmount":1 //The number of pay-as-you-go instances of the specified instance type that each new reserved instance can match.
       *       },
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName2",
       *         "InstanceType":"ecs.g5.large",
       *         "Scope":"Region",
       *         "InstanceAmount":1
       *       }
       *     ]
       * *   **Sample request to merge reserved instance:**: Merge two zonal reserved instances that are scoped to Hangzhou Zone H and can match four pay-as-you-go instances of the ecs.g5.xlarge instance type into one zonal reserved instance that is scoped to Hangzhou Zone H and can match two pay-as-you-go instances of the ecs.g5.4xlarge instance type:
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], //The IDs of the reserved instances that you want to merge.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.4xlarge", //The instance type that the new reserved instance can match.
       *         "Scope":"Zone", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instances.
       *         "ZoneId":"cn-hangzhou-h", //
       *         "InstanceAmount":2 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *       }
       *     ]
       * *   **Sample request to change the scope of a reserved instance**: Change a regional reserved instance that is scoped to Hangzhou Zone H and can match six pay-as-you-go instances of the ecs.g5.xlarge instance type to a regional reserved instance that is scoped to the China (Hangzhou) region and can match three pay-as-you-go instances of the ecs.g5.2xlarge instance type.
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], //The ID of the reserved instance whose scope you want to change.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.2xlarge", //The instance type that the new reserved instance can match.
       *         "Scope":"Region", //The scope level of the new reserved instance.
       *         "InstanceAmount":3 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *       }
       *     ]
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
       * *   You can modify the configurations of a reserved instance only if the reserved instance is in the **Active** state.
       * *   Make sure that the [computing power](~~140660#2742f3844abzz~~) of the reserved instance remains unchanged before and after the modification. Otherwise, the modification fails.
       * *   You cannot split, merge, or change the scope of a reserved instance at the same time.
       * For more information, see [Split, merge, or modify reserved instances](https://help.aliyun.com/document_detail/100375.html).
       * ## [](#)Sample requests
       * *   **Sample request to split a reserved instance**: Split a regional reserved instance that is scoped to the China (Hangzhou) region and can match two pay-as-you-go instances of the ecs.g5.xlarge instance type into two regional reserved instances that are scoped to the China (Hangzhou) region and each can match one pay-as-you-go instance of the ecs.g5.large instance type:
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv19e75****"], //The ID of the reserved instance that you want to split.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName1", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.large", //The instance type that the new reserved instance can match.
       *         "Scope":"Region", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instance.
       *         "InstanceAmount":1 //The number of pay-as-you-go instances of the specified instance type that each new reserved instance can match.
       *       },
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName2",
       *         "InstanceType":"ecs.g5.large",
       *         "Scope":"Region",
       *         "InstanceAmount":1
       *       }
       *     ]
       * *   **Sample request to merge reserved instance:**: Merge two zonal reserved instances that are scoped to Hangzhou Zone H and can match four pay-as-you-go instances of the ecs.g5.xlarge instance type into one zonal reserved instance that is scoped to Hangzhou Zone H and can match two pay-as-you-go instances of the ecs.g5.4xlarge instance type:
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv16b75****",""ecsri-bp1hd03e9uv16b76****""], //The IDs of the reserved instances that you want to merge.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.4xlarge", //The instance type that the new reserved instance can match.
       *         "Scope":"Zone", //The scope level of the new reserved instance, which must be the same as the scope level of the original reserved instances.
       *         "ZoneId":"cn-hangzhou-h", //
       *         "InstanceAmount":2 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *       }
       *     ]
       * *   **Sample request to change the scope of a reserved instance**: Change a regional reserved instance that is scoped to Hangzhou Zone H and can match six pay-as-you-go instances of the ecs.g5.xlarge instance type to a regional reserved instance that is scoped to the China (Hangzhou) region and can match three pay-as-you-go instances of the ecs.g5.2xlarge instance type.
       * <!---->
       *     "RegionId":"cn-hangzhou", //The ID of the region.
       *     "ReservedInstanceId":["ecsri-bp1hd03e9uv16b77****"], //The ID of the reserved instance whose scope you want to change.
       *     "Configuration":[
       *       {
       *         "ReservedInstanceName":"testReservedInstanceName", //The name of the new reserved instance.
       *         "InstanceType":"ecs.g5.2xlarge", //The instance type that the new reserved instance can match.
       *         "Scope":"Region", //The scope level of the new reserved instance.
       *         "InstanceAmount":3 //The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match.
       *       }
       *     ]
       *
       * @param request ModifyReservedInstancesRequest
       * @return ModifyReservedInstancesResponse
       */
      Models::ModifyReservedInstancesResponse modifyReservedInstances(const Models::ModifyReservedInstancesRequest &request);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceAttribute is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceAttribute instead.
       *
       * @summary ModifyRouterInterfaceAttribute
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttributeWithOptions(const Models::ModifyRouterInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceAttribute is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceAttribute instead.
       *
       * @summary ModifyRouterInterfaceAttribute
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttribute(const Models::ModifyRouterInterfaceAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceSpec is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceSpec instead.
       *
       * @summary ModifyRouterInterfaceSpec
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpecWithOptions(const Models::ModifyRouterInterfaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyRouterInterfaceSpec is deprecated, please use Vpc::2016-04-28::ModifyRouterInterfaceSpec instead.
       *
       * @summary ModifyRouterInterfaceSpec
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpec(const Models::ModifyRouterInterfaceSpecRequest &request);

      /**
       * @summary Modifies the name or description of a specific security group.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttributeWithOptions(const Models::ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a specific security group.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttribute(const Models::ModifySecurityGroupAttributeRequest &request);

      /**
       * @summary Modifies an outbound security group rule in a security group.
       *
       * @description Take note of the following items:
       * *   An authorization object in a security group rule can be of one of the following types: IPv4 CIDR block or address, IPv6 CIDR block or address, security group, or prefix list. You cannot call this operation to change the type of an existing authorization object. For example, if an authorization object is an IPv4 CIDR block, you can change the authorization object to a different IPv4 CIDR block or an IPv4 address, but you cannot change the authorization object to an IPv6 CIDR block or address, a security group, or a prefix list.
       * *   You cannot delete the value of a non-empty parameter. If you want to delete the values of non-empty parameters, we recommend that you create another rule and delete the original rule.
       *
       * @param request ModifySecurityGroupEgressRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupEgressRuleResponse
       */
      Models::ModifySecurityGroupEgressRuleResponse modifySecurityGroupEgressRuleWithOptions(const Models::ModifySecurityGroupEgressRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an outbound security group rule in a security group.
       *
       * @description Take note of the following items:
       * *   An authorization object in a security group rule can be of one of the following types: IPv4 CIDR block or address, IPv6 CIDR block or address, security group, or prefix list. You cannot call this operation to change the type of an existing authorization object. For example, if an authorization object is an IPv4 CIDR block, you can change the authorization object to a different IPv4 CIDR block or an IPv4 address, but you cannot change the authorization object to an IPv6 CIDR block or address, a security group, or a prefix list.
       * *   You cannot delete the value of a non-empty parameter. If you want to delete the values of non-empty parameters, we recommend that you create another rule and delete the original rule.
       *
       * @param request ModifySecurityGroupEgressRuleRequest
       * @return ModifySecurityGroupEgressRuleResponse
       */
      Models::ModifySecurityGroupEgressRuleResponse modifySecurityGroupEgressRule(const Models::ModifySecurityGroupEgressRuleRequest &request);

      /**
       * @summary Modifies the internal access control policy of a basic security group.
       *
       * @description *   By default, advanced security groups use the **internal isolation policy**, and Elastic Compute Service (ECS) instances in each advanced security group cannot communicate with each other. The internal access control policy of advanced security groups cannot be modified.
       * *   You can call the [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) operation to query the internal access control policy of a security group.
       * *   If the internal access control policy of a security group is set to **Accept**, the security group uses the internal interconnectivity policy and all ECS instances in the security group can communicate with each other over the internal network, regardless of whether custom rules exist in the security group.
       * *   If the internal access control policy of a security group is set to **Drop** and the security group contains no custom rules, the security group uses the internal isolation policy and all ECS instances in the security group cannot communicate with each other over the internal network. In this case, you can use custom rules to allow ECS instances in the security group to communicate with each other. For example, you can call the [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) operation to configure custom rules.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicyWithOptions(const Models::ModifySecurityGroupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the internal access control policy of a basic security group.
       *
       * @description *   By default, advanced security groups use the **internal isolation policy**, and Elastic Compute Service (ECS) instances in each advanced security group cannot communicate with each other. The internal access control policy of advanced security groups cannot be modified.
       * *   You can call the [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/25555.html) operation to query the internal access control policy of a security group.
       * *   If the internal access control policy of a security group is set to **Accept**, the security group uses the internal interconnectivity policy and all ECS instances in the security group can communicate with each other over the internal network, regardless of whether custom rules exist in the security group.
       * *   If the internal access control policy of a security group is set to **Drop** and the security group contains no custom rules, the security group uses the internal isolation policy and all ECS instances in the security group cannot communicate with each other over the internal network. In this case, you can use custom rules to allow ECS instances in the security group to communicate with each other. For example, you can call the [AuthorizeSecurityGroup](https://help.aliyun.com/document_detail/25554.html) operation to configure custom rules.
       *
       * @param request ModifySecurityGroupPolicyRequest
       * @return ModifySecurityGroupPolicyResponse
       */
      Models::ModifySecurityGroupPolicyResponse modifySecurityGroupPolicy(const Models::ModifySecurityGroupPolicyRequest &request);

      /**
       * @summary Modifies an inbound security group rule in a security group.
       *
       * @description Take note of the following items:
       * *   An authorization object in a security group rule can be of one of the following types: IPv4 CIDR block or address, IPv6 CIDR block or address, security group, or prefix list. You cannot call this operation to change the type of an existing authorization object. For example, if an authorization object is an IPv4 CIDR block, you can change the authorization object to a different IPv4 CIDR block or an IPv4 address, but you cannot change the authorization object to an IPv6 CIDR block or address, a security group, or a prefix list.
       * *   You cannot delete the value of a non-empty parameter. If you want to delete the values of non-empty parameters, we recommend that you create a security group rule and delete the original security group rule.
       *
       * @param request ModifySecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupRuleResponse
       */
      Models::ModifySecurityGroupRuleResponse modifySecurityGroupRuleWithOptions(const Models::ModifySecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an inbound security group rule in a security group.
       *
       * @description Take note of the following items:
       * *   An authorization object in a security group rule can be of one of the following types: IPv4 CIDR block or address, IPv6 CIDR block or address, security group, or prefix list. You cannot call this operation to change the type of an existing authorization object. For example, if an authorization object is an IPv4 CIDR block, you can change the authorization object to a different IPv4 CIDR block or an IPv4 address, but you cannot change the authorization object to an IPv6 CIDR block or address, a security group, or a prefix list.
       * *   You cannot delete the value of a non-empty parameter. If you want to delete the values of non-empty parameters, we recommend that you create a security group rule and delete the original security group rule.
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
       * @summary Changes the type of a snapshot. You can call this operation to convert a standard snapshot into an archive snapshot.
       *
       * @description *   Archived snapshots cannot be restored to standard snapshots.
       * *   You can archive only standard snapshots that have been retained for at least 14 days.
       * *   You cannot archive snapshots that are shared to you, snapshots managed by Cloud Backup, or snapshots in cloud boxes.
       *
       * @param request ModifySnapshotCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotCategoryResponse
       */
      Models::ModifySnapshotCategoryResponse modifySnapshotCategoryWithOptions(const Models::ModifySnapshotCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of a snapshot. You can call this operation to convert a standard snapshot into an archive snapshot.
       *
       * @description *   Archived snapshots cannot be restored to standard snapshots.
       * *   You can archive only standard snapshots that have been retained for at least 14 days.
       * *   You cannot archive snapshots that are shared to you, snapshots managed by Cloud Backup, or snapshots in cloud boxes.
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
       * @summary Changes the name or modifies the description of a storage capacity unit (SCU).
       *
       * @param request ModifyStorageCapacityUnitAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageCapacityUnitAttributeResponse
       */
      Models::ModifyStorageCapacityUnitAttributeResponse modifyStorageCapacityUnitAttributeWithOptions(const Models::ModifyStorageCapacityUnitAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name or modifies the description of a storage capacity unit (SCU).
       *
       * @param request ModifyStorageCapacityUnitAttributeRequest
       * @return ModifyStorageCapacityUnitAttributeResponse
       */
      Models::ModifyStorageCapacityUnitAttributeResponse modifyStorageCapacityUnitAttribute(const Models::ModifyStorageCapacityUnitAttributeRequest &request);

      /**
       * @summary Modifies the name or description of a storage set.
       *
       * @param request ModifyStorageSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageSetAttributeResponse
       */
      Models::ModifyStorageSetAttributeResponse modifyStorageSetAttributeWithOptions(const Models::ModifyStorageSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a storage set.
       *
       * @param request ModifyStorageSetAttributeRequest
       * @return ModifyStorageSetAttributeResponse
       */
      Models::ModifyStorageSetAttributeResponse modifyStorageSetAttribute(const Models::ModifyStorageSetAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary 设置用户级别默认属性
       *
       * @param request ModifyUserBusinessBehaviorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserBusinessBehaviorResponse
       */
      Models::ModifyUserBusinessBehaviorResponse modifyUserBusinessBehaviorWithOptions(const Models::ModifyUserBusinessBehaviorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyUserBusinessBehavior is deprecated
       *
       * @summary 设置用户级别默认属性
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
       * @summary ModifyVpcAttribute
       *
       * @param request ModifyVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttributeWithOptions(const Models::ModifyVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVpcAttribute is deprecated, please use Vpc::2016-04-28::ModifyVpcAttribute instead.
       *
       * @summary ModifyVpcAttribute
       *
       * @param request ModifyVpcAttributeRequest
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttribute(const Models::ModifyVpcAttributeRequest &request);

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
       * *   Before you call this operation, make sure that you are familiar with the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * *   You can retain up to 20 regional reserved instances in all regions per Alibaba Cloud account.
       * *   You can retain up to 20 zonal reserved instances per zone per Alibaba Cloud account.
       * ## [](#)Sample requests
       * *   Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset the bills of three ecs.g5.large Linux pay-as-you-go instances.
       * <!---->
       *     "RegionId":"cn-hangzhou", // Specify the China (Hangzhou) region."InstanceType":"ecs.g5.large", // Specify the instance type."Scope":"Region", // Set the scope of the reserved instance to regional."InstanceAmount":3, // Specify the reserved instance to match three pay-as-you-go instances of the same instance type."OfferingType":"All Upfront", // Specify the payment option. In this example, the default value is used, which is All Upfront."Platform":"Linux", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Linux or Unix-like operating system is used."Period":1, // Specify the term of the reserved instance. In this example, the one-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * *   Purchase a two-year zonal reserved instance in Hangzhou Zone H to offset the bills of five ecs.g5.large Windows pay-as-you-go instances.
       * <!---->
       *     "RegionId":"cn-hangzhou",
       *     "ZoneId":"cn-hangzhou-h", // Specify Hangzhou Zone H."InstanceType":"ecs.g5.large",
       *     "Scope":"Zone", // Set the scope of the reserved instance to zonal."InstanceAmount":5, // Specify the reserved instance to match five pay-as-you-go instances of the same instance type."OfferingType":"All Upfront",
       *     "Platform":"Windows", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Windows operating system is used."Period":2, // Specify the term of the reserved instance. In this example, the two-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
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
       * *   Before you call this operation, make sure that you are familiar with the billing rules of reserved instances. For more information, see [Reserved instances](https://help.aliyun.com/document_detail/100371.html).
       * *   You can retain up to 20 regional reserved instances in all regions per Alibaba Cloud account.
       * *   You can retain up to 20 zonal reserved instances per zone per Alibaba Cloud account.
       * ## [](#)Sample requests
       * *   Purchase a one-year regional reserved instance in the China (Hangzhou) region to offset the bills of three ecs.g5.large Linux pay-as-you-go instances.
       * <!---->
       *     "RegionId":"cn-hangzhou", // Specify the China (Hangzhou) region."InstanceType":"ecs.g5.large", // Specify the instance type."Scope":"Region", // Set the scope of the reserved instance to regional."InstanceAmount":3, // Specify the reserved instance to match three pay-as-you-go instances of the same instance type."OfferingType":"All Upfront", // Specify the payment option. In this example, the default value is used, which is All Upfront."Platform":"Linux", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Linux or Unix-like operating system is used."Period":1, // Specify the term of the reserved instance. In this example, the one-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       * *   Purchase a two-year zonal reserved instance in Hangzhou Zone H to offset the bills of five ecs.g5.large Windows pay-as-you-go instances.
       * <!---->
       *     "RegionId":"cn-hangzhou",
       *     "ZoneId":"cn-hangzhou-h", // Specify Hangzhou Zone H."InstanceType":"ecs.g5.large",
       *     "Scope":"Zone", // Set the scope of the reserved instance to zonal."InstanceAmount":5, // Specify the reserved instance to match five pay-as-you-go instances of the same instance type."OfferingType":"All Upfront",
       *     "Platform":"Windows", // Specify the operating system platform of the ECS instances eligible for the reserved instance. In this example, the Windows operating system is used."Period":2, // Specify the term of the reserved instance. In this example, the two-year duration is used."PeriodUnit":"Year", // Set the unit of the term to year.
       *
       * @param request PurchaseReservedInstancesOfferingRequest
       * @return PurchaseReservedInstancesOfferingResponse
       */
      Models::PurchaseReservedInstancesOfferingResponse purchaseReservedInstancesOffering(const Models::PurchaseReservedInstancesOfferingRequest &request);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description **Before you call this operation, make sure that you understand the [billing methods](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of SCUs.
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnitWithOptions(const Models::PurchaseStorageCapacityUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases one or more storage capacity units (SCUs).
       *
       * @description **Before you call this operation, make sure that you understand the [billing methods](https://help.aliyun.com/document_detail/137897.html) and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of SCUs.
       *
       * @param request PurchaseStorageCapacityUnitRequest
       * @return PurchaseStorageCapacityUnitResponse
       */
      Models::PurchaseStorageCapacityUnitResponse purchaseStorageCapacityUnit(const Models::PurchaseStorageCapacityUnitRequest &request);

      /**
       * @summary Reactivates a pay-as-you-go Elastic Compute Service (ECS) instance that has expired or has been reclaimed due to overdue payments.
       *
       * @description After you complete the overdue payment for a pay-as-you-go ECS instance, you do not need to call this operation to reactivate the instance. The system automatically reactivates the instance to restore the instance to the status before the payment became overdue. Automatic reactivation occasionally fails. Take note of the status of automatic reactivation. If the automatic reactivation fails, call this operation to manually reactivate the instance.
       * *   The instance must be in the **Expired** `(Stopped)` state.
       * *   You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ReActivateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstancesWithOptions(const Models::ReActivateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reactivates a pay-as-you-go Elastic Compute Service (ECS) instance that has expired or has been reclaimed due to overdue payments.
       *
       * @description After you complete the overdue payment for a pay-as-you-go ECS instance, you do not need to call this operation to reactivate the instance. The system automatically reactivates the instance to restore the instance to the status before the payment became overdue. Automatic reactivation occasionally fails. Take note of the status of automatic reactivation. If the automatic reactivation fails, call this operation to manually reactivate the instance.
       * *   The instance must be in the **Expired** `(Stopped)` state.
       * *   You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request ReActivateInstancesRequest
       * @return ReActivateInstancesResponse
       */
      Models::ReActivateInstancesResponse reActivateInstances(const Models::ReActivateInstancesRequest &request);

      /**
       * @summary Re-initializes a cloud disk to the state when the cloud disk was created.
       *
       * @description Take note of the following items:
       * *   The disk that you want to re-initialize must be in the **In Use** (`In_use`) state and the instance to which the disk is attached must be in the **Stopped** (`Stoppe`) state.
       * *   If an instance has never been started since it was created, the disks attached to it cannot be re-initialized.
       * *   If a local snapshot has been created for a disk, the disk cannot be re-initialized.
       * *   If a system disk is re-initialized, the disk is restored to the state of the image from which it was created. If the image has been deleted, the disk cannot be re-initialized.
       * *   For a data disk that was created from scratch, the disk is initialized to the empty disk state. For a data disk that is created from a snapshot, the disk is initialized to the snapshot state. If the snapshots were deleted, the disks cannot be re-initialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDiskWithOptions(const Models::ReInitDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-initializes a cloud disk to the state when the cloud disk was created.
       *
       * @description Take note of the following items:
       * *   The disk that you want to re-initialize must be in the **In Use** (`In_use`) state and the instance to which the disk is attached must be in the **Stopped** (`Stoppe`) state.
       * *   If an instance has never been started since it was created, the disks attached to it cannot be re-initialized.
       * *   If a local snapshot has been created for a disk, the disk cannot be re-initialized.
       * *   If a system disk is re-initialized, the disk is restored to the state of the image from which it was created. If the image has been deleted, the disk cannot be re-initialized.
       * *   For a data disk that was created from scratch, the disk is initialized to the empty disk state. For a data disk that is created from a snapshot, the disk is initialized to the snapshot state. If the snapshots were deleted, the disks cannot be re-initialized and an error is returned.
       *
       * @param request ReInitDiskRequest
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDisk(const Models::ReInitDiskRequest &request);

      /**
       * @summary Restarts an Elastic Compute Service (ECS) instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart an ECS instance, the operation sets the status of the ECS instance to `Starting` and begins the restart process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. When the status of the ECS instance changes to `Running`, the instance is restarted.
       * ### [](#)Considerations
       * *   You cannot call this operation to restart an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instance that you want to restart must be in the **Running** (`Running`) state.
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an Elastic Compute Service (ECS) instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart an ECS instance, the operation sets the status of the ECS instance to `Starting` and begins the restart process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. When the status of the ECS instance changes to `Running`, the instance is restarted.
       * ### [](#)Considerations
       * *   You cannot call this operation to restart an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instance that you want to restart must be in the **Running** (`Running`) state.
       *
       * @param request RebootInstanceRequest
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstance(const Models::RebootInstanceRequest &request);

      /**
       * @summary Restarts Elastic Compute Service (ECS) instances. When you call this operation, you can configure parameters to specify a batch operation mode and whether to forcefully restart the instances.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart an ECS instance, the operation sets the status of the ECS instance to `Starting` and begins the restart process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. When the status of the ECS instance changes to `Running`, the instance is restarted.
       * ### [](#)Limits
       * *   You cannot call this operation to restart ECS instances that are locked due to security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instances that you want to restart must be in the **Running** (`Running`) state.
       *
       * @param request RebootInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstancesWithOptions(const Models::RebootInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts Elastic Compute Service (ECS) instances. When you call this operation, you can configure parameters to specify a batch operation mode and whether to forcefully restart the instances.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart an ECS instance, the operation sets the status of the ECS instance to `Starting` and begins the restart process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instance. When the status of the ECS instance changes to `Running`, the instance is restarted.
       * ### [](#)Limits
       * *   You cannot call this operation to restart ECS instances that are locked due to security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instances that you want to restart must be in the **Running** (`Running`) state.
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
       * @summary Redeploys an Elastic Compute Service (ECS) instance. You can call this operation to redeploy an ECS instance when the instance receives a system event notification.
       *
       * @description ## Usage notes
       * RedeployInstance is an asynchronous operation. The operation migrates the instance to a healthy physical server and then restarts the instance. After the instance is redeployed, it enters the Running (`Running`) state. If the instance fails to be redeployed, it returns to the original physical server and the state before the redeployment.
       * When you call this operation, take note of the following item:
       * * The instance must be in the Running (Running) or Stopped (Stopped) state. After the instance is redeployed, the following changes occur to the status of the instance:
       *   * If the instance is in the Running (`Running`) state, the instance enters the Stopping (`Stopping`) state.
       *   * If the instance is in the Stopped (`Stopped`) state, the instance enters the Starting (`Starting`) state.
       * * If an instance is deployed on a dedicated host, you cannot redeploy the instance.
       * * If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason": "security"` for an instance, the instance is locked for security reasons and cannot be redeployed.
       * * If an instance receives notifications about simulated events that are created by calling the CreateSimulatedSystemEvent operation for the instance, you cannot call this operation to redeploy the instance.
       * * When you handle a local disk-related system event for an instance, if the damaged local disk is isolated but the SystemMaintenance.RebootAndReInitErrorDisk (**instance restart and re-initialization of damaged disks due to system maintenance**) event is not sent, you can still call the RedeployInstance operation to redeploy the instance. For more information, see [O&#x26;M scenarios and system events for instances equipped with local disks](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the types and states of events that you can handle by calling the RedeployInstance operation.
       * |System event|Event status|
       * |---|---|
       * |Instance restart due to system maintenance (SystemMaintenance.Reboot)|Inquiring and Scheduled|
       * |Instance redeployment due to system maintenance (SystemMaintenance.Redeploy)|Inquiring and Scheduled|
       * |Instance restart and replacement of damaged disks due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk)|Inquiring|
       * |Instance restart and re-initialization of damaged disks due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk)|Inquiring|
       * |Instance redeployment due to system errors (SystemFailure.Redeploy)|Inquiring|
       * |For ECS instances that use only local disks: instance restart due to system errors (SystemFailure.Reboot)|Executing|
       * |Isolation of damaged disks due to system maintenance (SystemMaintenance.IsolateErrorDisk)|Inquiring|
       * |Re-initialization of damaged disks due to system maintenance (SystemMaintenance.ReInitErrorDisk)|Inquiring|
       * **Note** When the system redeploys instances equipped with local disks, the local disks are re-initialized and data on the local disks is cleared.
       *
       * @param request RedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployInstanceResponse
       */
      Models::RedeployInstanceResponse redeployInstanceWithOptions(const Models::RedeployInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redeploys an Elastic Compute Service (ECS) instance. You can call this operation to redeploy an ECS instance when the instance receives a system event notification.
       *
       * @description ## Usage notes
       * RedeployInstance is an asynchronous operation. The operation migrates the instance to a healthy physical server and then restarts the instance. After the instance is redeployed, it enters the Running (`Running`) state. If the instance fails to be redeployed, it returns to the original physical server and the state before the redeployment.
       * When you call this operation, take note of the following item:
       * * The instance must be in the Running (Running) or Stopped (Stopped) state. After the instance is redeployed, the following changes occur to the status of the instance:
       *   * If the instance is in the Running (`Running`) state, the instance enters the Stopping (`Stopping`) state.
       *   * If the instance is in the Stopped (`Stopped`) state, the instance enters the Starting (`Starting`) state.
       * * If an instance is deployed on a dedicated host, you cannot redeploy the instance.
       * * If `OperationLocks` in the response of the DescribeInstances operation contains `"LockReason": "security"` for an instance, the instance is locked for security reasons and cannot be redeployed.
       * * If an instance receives notifications about simulated events that are created by calling the CreateSimulatedSystemEvent operation for the instance, you cannot call this operation to redeploy the instance.
       * * When you handle a local disk-related system event for an instance, if the damaged local disk is isolated but the SystemMaintenance.RebootAndReInitErrorDisk (**instance restart and re-initialization of damaged disks due to system maintenance**) event is not sent, you can still call the RedeployInstance operation to redeploy the instance. For more information, see [O&#x26;M scenarios and system events for instances equipped with local disks](https://help.aliyun.com/document_detail/107693.html).
       * The following table describes the types and states of events that you can handle by calling the RedeployInstance operation.
       * |System event|Event status|
       * |---|---|
       * |Instance restart due to system maintenance (SystemMaintenance.Reboot)|Inquiring and Scheduled|
       * |Instance redeployment due to system maintenance (SystemMaintenance.Redeploy)|Inquiring and Scheduled|
       * |Instance restart and replacement of damaged disks due to system maintenance (SystemMaintenance.RebootAndIsolateErrorDisk)|Inquiring|
       * |Instance restart and re-initialization of damaged disks due to system maintenance (SystemMaintenance.RebootAndReInitErrorDisk)|Inquiring|
       * |Instance redeployment due to system errors (SystemFailure.Redeploy)|Inquiring|
       * |For ECS instances that use only local disks: instance restart due to system errors (SystemFailure.Reboot)|Executing|
       * |Isolation of damaged disks due to system maintenance (SystemMaintenance.IsolateErrorDisk)|Inquiring|
       * |Re-initialization of damaged disks due to system maintenance (SystemMaintenance.ReInitErrorDisk)|Inquiring|
       * **Note** When the system redeploys instances equipped with local disks, the local disks are re-initialized and data on the local disks is cleared.
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
       * @summary Releases a pay-as-you-go dedicated host.
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
       * @summary Releases a pay-as-you-go dedicated host.
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
       * @summary Disassociates a public IP address from an Elastic Compute Service (ECS) instance.
       *
       * @param request ReleasePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicIpAddressResponse
       */
      Models::ReleasePublicIpAddressResponse releasePublicIpAddressWithOptions(const Models::ReleasePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ReleasePublicIpAddress is deprecated
       *
       * @summary Disassociates a public IP address from an Elastic Compute Service (ECS) instance.
       *
       * @param request ReleasePublicIpAddressRequest
       * @return ReleasePublicIpAddressResponse
       */
      Models::ReleasePublicIpAddressResponse releasePublicIpAddress(const Models::ReleasePublicIpAddressRequest &request);

      /**
       * @deprecated OpenAPI RemoveBandwidthPackageIps is deprecated, please use Vpc::2016-04-28::RemoveBandwidthPackageIps instead.
       *
       * @summary RemoveBandwidthPackageIps
       *
       * @param request RemoveBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBandwidthPackageIpsResponse
       */
      Models::RemoveBandwidthPackageIpsResponse removeBandwidthPackageIpsWithOptions(const Models::RemoveBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveBandwidthPackageIps is deprecated, please use Vpc::2016-04-28::RemoveBandwidthPackageIps instead.
       *
       * @summary RemoveBandwidthPackageIps
       *
       * @param request RemoveBandwidthPackageIpsRequest
       * @return RemoveBandwidthPackageIpsResponse
       */
      Models::RemoveBandwidthPackageIpsResponse removeBandwidthPackageIps(const Models::RemoveBandwidthPackageIpsRequest &request);

      /**
       * @deprecated OpenAPI RemoveTags is deprecated, please use Ecs::2014-05-26::UntagResources instead.
       *
       * @summary Removes tags from a resource, such as an Elastic Compute Service (ECS) instance, disk, snapshot, image, or security group.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveTags is deprecated, please use Ecs::2014-05-26::UntagResources instead.
       *
       * @summary Removes tags from a resource, such as an Elastic Compute Service (ECS) instance, disk, snapshot, image, or security group.
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
       * @summary Renews elasticity assurances that you purchased.
       *
       * @param request RenewElasticityAssurancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewElasticityAssurancesResponse
       */
      Models::RenewElasticityAssurancesResponse renewElasticityAssurancesWithOptions(const Models::RenewElasticityAssurancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews elasticity assurances that you purchased.
       *
       * @param request RenewElasticityAssurancesRequest
       * @return RenewElasticityAssurancesResponse
       */
      Models::RenewElasticityAssurancesResponse renewElasticityAssurances(const Models::RenewElasticityAssurancesRequest &request);

      /**
       * @summary Renews a subscription Elastic Compute Service (ECS) instance. You can specify a renewal period or renew the instance to a unified expiration date.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://www.alibabacloud.com/product/ecs#pricing) of ECS**.
       * *   Make sure that your account balance or credit balance is sufficient.
       * *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   You must specify the renewal period-related parameter pair (`Period` and `PeriodUnit`) or `ExpectedRenewDay`, but not both.
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
       * *   Make sure that your account balance or credit balance is sufficient.
       * *   Only subscription instances are supported. If you call this operation for a pay-as-you-go instance, an error is returned.
       * *   You must specify the renewal period-related parameter pair (`Period` and `PeriodUnit`) or `ExpectedRenewDay`, but not both.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews one or more reserved instances. When you renew reserved instances, you can specify a validity period (renewal period) and whether to enable auto-renewal for the reserved instances.
       *
       * @description **Before you call this operation, make sure that you are familiar with the billing and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of reserved instances.**
       * *   You can manually renew reserved instances or enable auto-renewal for reserved instances. For more information, see the [Renewal](~~100371#53bfc50b78sta~~) section of the "Reserved instances" topic.
       * *   You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) operation to query the reserved instances that you purchased.
       * *   You can call this operation to enable auto-renewal for reserved instances but cannot call this operation to disable auto-renewal for reserved instances. To disable auto-renewal for a reserved instance, call the [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) operation.
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
       * *   You can manually renew reserved instances or enable auto-renewal for reserved instances. For more information, see the [Renewal](~~100371#53bfc50b78sta~~) section of the "Reserved instances" topic.
       * *   You can call the [DescribeReservedInstances](https://help.aliyun.com/document_detail/100065.html) operation to query the reserved instances that you purchased.
       * *   You can call this operation to enable auto-renewal for reserved instances but cannot call this operation to disable auto-renewal for reserved instances. To disable auto-renewal for a reserved instance, call the [ModifyReservedInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/2679786.html) operation.
       *
       * @param request RenewReservedInstancesRequest
       * @return RenewReservedInstancesResponse
       */
      Models::RenewReservedInstancesResponse renewReservedInstances(const Models::RenewReservedInstancesRequest &request);

      /**
       * @summary Replaces the operating system (system disk) of an ECS instance. After the operating system of the ECS instance is replaced, the original system disk of the instance is released and a new system disk is generated for the instance. This causes the ID of the system disk to change.
       *
       * @description Before you call this operation, refer to [Replace the operating system (system disk) of an instance](https://help.aliyun.com/document_detail/50134.html).
       * When you call this operation for an ECS instance, take note of the following items:
       * *   The billing method of the system disk cannot be changed.
       * *   The category of the system disk cannot be changed.
       * *   Make sure that no unpaid orders are associated with the instance.
       * *   The instance must be in the `Stopped` state.
       *     
       *     **Note** The operation is applicable only to instances of the Virtual Private Cloud (VPC) type. If the instance is a pay-as-you-go instance and default economical mode is enabled, enable standard mode when you stop the instance. This prevents the instance from being unable to restart due to insufficient ECS resources after the system disk is replaced. For more information, see [StopInstance](https://help.aliyun.com/document_detail/25501.html).
       * *   The instance cannot be locked for security reasons. If the value of `OperationLocks` in the DescribeInstances response contains `"LockReason": "security"` for an instance, the instance is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   You can configure `SystemDisk.Size` to specify the capacity of the new system disk.
       * After you call the ReplaceSystemDisk operation, you can use one of the following methods to check whether the system disk is replaced:
       * *   Call the [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) operation to query the status of the new system disk. If the new system disk is in the In Use state, the system disk is replaced.
       * *   Call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of the instance whose system disk is replaced. If the `OperationLocks` parameter is empty, the system disk is replaced.
       *
       * @param request ReplaceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceSystemDiskResponse
       */
      Models::ReplaceSystemDiskResponse replaceSystemDiskWithOptions(const Models::ReplaceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the operating system (system disk) of an ECS instance. After the operating system of the ECS instance is replaced, the original system disk of the instance is released and a new system disk is generated for the instance. This causes the ID of the system disk to change.
       *
       * @description Before you call this operation, refer to [Replace the operating system (system disk) of an instance](https://help.aliyun.com/document_detail/50134.html).
       * When you call this operation for an ECS instance, take note of the following items:
       * *   The billing method of the system disk cannot be changed.
       * *   The category of the system disk cannot be changed.
       * *   Make sure that no unpaid orders are associated with the instance.
       * *   The instance must be in the `Stopped` state.
       *     
       *     **Note** The operation is applicable only to instances of the Virtual Private Cloud (VPC) type. If the instance is a pay-as-you-go instance and default economical mode is enabled, enable standard mode when you stop the instance. This prevents the instance from being unable to restart due to insufficient ECS resources after the system disk is replaced. For more information, see [StopInstance](https://help.aliyun.com/document_detail/25501.html).
       * *   The instance cannot be locked for security reasons. If the value of `OperationLocks` in the DescribeInstances response contains `"LockReason": "security"` for an instance, the instance is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   You can configure `SystemDisk.Size` to specify the capacity of the new system disk.
       * After you call the ReplaceSystemDisk operation, you can use one of the following methods to check whether the system disk is replaced:
       * *   Call the [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) operation to query the status of the new system disk. If the new system disk is in the In Use state, the system disk is replaced.
       * *   Call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of the instance whose system disk is replaced. If the `OperationLocks` parameter is empty, the system disk is replaced.
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
       * *   The cloud disk that you want to roll back must be in the In Use (`In_use`) or Unattached (`Available`) state.
       * *   The instance to which the cloud disk is attached must be in the `Stopped` state. You can call the [StopInstances](https://help.aliyun.com/document_detail/155372.html) operation to stop the instance.
       * *   The snapshot specified by `SnapshotId` must be created from the disk specified by `DiskId`.
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an instance by calling the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation, the instance is locked for security reasons and no operations can be performed on the instance.
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
       * *   The cloud disk that you want to roll back must be in the In Use (`In_use`) or Unattached (`Available`) state.
       * *   The instance to which the cloud disk is attached must be in the `Stopped` state. You can call the [StopInstances](https://help.aliyun.com/document_detail/155372.html) operation to stop the instance.
       * *   The snapshot specified by `SnapshotId` must be created from the disk specified by `DiskId`.
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an instance by calling the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation, the instance is locked for security reasons and no operations can be performed on the instance.
       *
       * @param request ResetDiskRequest
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDisk(const Models::ResetDiskRequest &request);

      /**
       * @summary Resets the Key Management Service (KMS) key used by Account-level Elastic Block Storage (EBS) Default Encryption in a region to the service key.
       *
       * @description *   You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Before you can call this operation in a region, make sure that the **Account-level Elastic Block Storage (EBS) Default Encryption** feature is enabled in the region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyIdWithOptions(const Models::ResetDiskDefaultKMSKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the Key Management Service (KMS) key used by Account-level Elastic Block Storage (EBS) Default Encryption in a region to the service key.
       *
       * @description *   You must grant the RAM user the `AliyunECSFullAccess` permissions. For information about how to grant permissions to a RAM user, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Before you can call this operation in a region, make sure that the **Account-level Elastic Block Storage (EBS) Default Encryption** feature is enabled in the region.
       *
       * @param request ResetDiskDefaultKMSKeyIdRequest
       * @return ResetDiskDefaultKMSKeyIdResponse
       */
      Models::ResetDiskDefaultKMSKeyIdResponse resetDiskDefaultKMSKeyId(const Models::ResetDiskDefaultKMSKeyIdRequest &request);

      /**
       * @summary Rolls back one or more disks by using a snapshot-consistent group.
       *
       * @description This operation will be removed in the future. We recommend that you call the [ResetDisk](https://help.aliyun.com/document_detail/25520.html) operation to roll back a disk.
       *
       * @param request ResetDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisksWithOptions(const Models::ResetDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back one or more disks by using a snapshot-consistent group.
       *
       * @description This operation will be removed in the future. We recommend that you call the [ResetDisk](https://help.aliyun.com/document_detail/25520.html) operation to roll back a disk.
       *
       * @param request ResetDisksRequest
       * @return ResetDisksResponse
       */
      Models::ResetDisksResponse resetDisks(const Models::ResetDisksRequest &request);

      /**
       * @summary Resizes a system disk or a data disk.
       *
       * @description > Before you call this operation to resize a disk, you must check the partition format of the disk. You cannot resize a master boot record (MBR) disk to a size that is larger than 2 TiB. If you resize an MBR disk to a size that is larger than 2 TiB, data may be lost. If you want to resize an MBR disk to a size that is larger than 2 TiB, we recommend performing the following steps: Create a new data disk that is larger than 2 TiB in size, partition and format the new data disk by using the GUID Partition Table (GPT) format, and then copy data from the MBR disk to the GPT data disk. For more information, see [Step 1: Resize a disk to extend the disk capacity](https://help.aliyun.com/document_detail/44986.html).
       * *   You can resize disks of the following disk categories: basic disks (`cloud`), ultra disks (`cloud_efficiency`), standard SSDs (`cloud_ssd`), Enterprise SSDs (ESSDs) (`cloud_essd`), ESSD AutoPL disks (cloud_auto), standard elastic ephemeral disks (elastic_ephemeral_disk_standard), and premium elastic ephemeral disks (elastic_ephemeral_disk_premium).
       * *   You cannot resize a cloud disk when a snapshot is being created for the disk. Wait until the snapshot is created before you resize the cloud disk.
       * *   You cannot call this operation to extend partitions or file systems. You must manually allocate partitions and file systems after the resize cloud disk capacity. For more information, see [Extend partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~) and [Extend partitions and file systems (windows)](~~2932233#a9f9b78f3fujb~~).
       * *   If the multi-attach feature is enabled for a cloud disk, you can resize the disk online or offline. Make sure that the ECS instances to which the disk is attached meet the following requirements:
       *     *   If you want to resize the disk online, the ECS instances must be in the **Running** state.``
       *     *   If you want to resize the disk offline, the ECS instances must be in the **Running** or **Stopped** state.````
       * *   The cloud disk that you want to resize must meet the following requirements:
       *     *   The disk is in the In Use (`In Use`) or Unattached (`Available`) state.
       *     *   (Recommended) Snapshots are created for the disk to back up disk data. For information about how to create snapshots for a disk, see [Create a snapshot](https://help.aliyun.com/document_detail/25455.html).
       *     *   If the disk is a new data disk, initialize the disk before you resize the disk. For more information, see [Overview](https://help.aliyun.com/document_detail/466323.html).
       *
       * @param request ResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDiskWithOptions(const Models::ResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resizes a system disk or a data disk.
       *
       * @description > Before you call this operation to resize a disk, you must check the partition format of the disk. You cannot resize a master boot record (MBR) disk to a size that is larger than 2 TiB. If you resize an MBR disk to a size that is larger than 2 TiB, data may be lost. If you want to resize an MBR disk to a size that is larger than 2 TiB, we recommend performing the following steps: Create a new data disk that is larger than 2 TiB in size, partition and format the new data disk by using the GUID Partition Table (GPT) format, and then copy data from the MBR disk to the GPT data disk. For more information, see [Step 1: Resize a disk to extend the disk capacity](https://help.aliyun.com/document_detail/44986.html).
       * *   You can resize disks of the following disk categories: basic disks (`cloud`), ultra disks (`cloud_efficiency`), standard SSDs (`cloud_ssd`), Enterprise SSDs (ESSDs) (`cloud_essd`), ESSD AutoPL disks (cloud_auto), standard elastic ephemeral disks (elastic_ephemeral_disk_standard), and premium elastic ephemeral disks (elastic_ephemeral_disk_premium).
       * *   You cannot resize a cloud disk when a snapshot is being created for the disk. Wait until the snapshot is created before you resize the cloud disk.
       * *   You cannot call this operation to extend partitions or file systems. You must manually allocate partitions and file systems after the resize cloud disk capacity. For more information, see [Extend partitions and file systems (Linux)](~~2949817#bb3b1f02e51pj~~) and [Extend partitions and file systems (windows)](~~2932233#a9f9b78f3fujb~~).
       * *   If the multi-attach feature is enabled for a cloud disk, you can resize the disk online or offline. Make sure that the ECS instances to which the disk is attached meet the following requirements:
       *     *   If you want to resize the disk online, the ECS instances must be in the **Running** state.``
       *     *   If you want to resize the disk offline, the ECS instances must be in the **Running** or **Stopped** state.````
       * *   The cloud disk that you want to resize must meet the following requirements:
       *     *   The disk is in the In Use (`In Use`) or Unattached (`Available`) state.
       *     *   (Recommended) Snapshots are created for the disk to back up disk data. For information about how to create snapshots for a disk, see [Create a snapshot](https://help.aliyun.com/document_detail/25455.html).
       *     *   If the disk is a new data disk, initialize the disk before you resize the disk. For more information, see [Overview](https://help.aliyun.com/document_detail/466323.html).
       *
       * @param request ResizeDiskRequest
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDisk(const Models::ResizeDiskRequest &request);

      /**
       * @summary Deletes inbound security group rules from a specific security group.
       *
       * @description >  Alibaba Cloud modified verification rules for the RevokeSecurityGroup operation on July 8, 2024. When you call the RevokeSecurityGroup operation to delete a security group rule that does not exist, the "InvalidParam.SecurityGroupRuleId" error code is returned instead of a success response. Update the RevokeSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * You can use one of the following groups of parameters to specify the security group rules that you want to delete:
       * *   Parameters used to specify the IDs of security group rules. We recommend that you specify the IDs of security group rules to delete the rules.
       *     *   If a specified security group rule ID does not exist, the call to RevokeSecurityGroup fails.
       * *   Parameters that start with Permissions.
       *     *   If no security group rule matches the specified parameters, the call to RevokeSecurityGroup is successful but no security group rules are deleted.
       *     *   Define an inbound security group rule by configuring the following parameters together:
       *         *   Source: You can specify one parameter from SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcetPrefixListId (prefix list ID), and SourceGroupId (source security group ID).
       *         *   PortRange: specifies the destination port range.
       *         *   IpProtocol: specifies the protocol.
       *         *   Policy: specifies the action.
       * >  You cannot specify the IDs of security group rules and the parameters that start with Permissions in the same request.
       * ### [](#)Sample requests
       * *   Delete a security group rule based on the rule ID:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //Specify the ID of the security group.
       *     "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] //Specify the ID of the security group rule.
       * *   Delete a security group rule based on an IPv4 CIDR block:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourceCidrIp":"10.0.0.0/8", //Specify the source IPv4 CIDR block.
       *         "IpProtocol":"TCP", //Specify the protocol.
       *         "PortRange":"80/80", //Specify the destination port range.
       *         "Policy":"accept" //Specify the action.
       *       }
       *     ]
       * *   Delete a security group rule in which a security group is referenced:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourceGroupId":"sg-bp67acfmxa123b****", //Specify the ID of the source security group.
       *         "IpProtocol":"TCP,"
       *         "PortRange":"80/80",
       *         "Policy":"accept"
       *       ]
       *     }
       * *   Delete a security group rule in which a prefix list is referenced:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourcePrefixListId":pl-x1j1k5ykzqlixdcy****", //Specify the ID of the source prefix list.
       *         "IpProtocol":"TCP",
       *         "PortRange":"80/80",
       *         "Policy":"accept"
       *       }
       *     ]
       *
       * @param request RevokeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroupWithOptions(const Models::RevokeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes inbound security group rules from a specific security group.
       *
       * @description >  Alibaba Cloud modified verification rules for the RevokeSecurityGroup operation on July 8, 2024. When you call the RevokeSecurityGroup operation to delete a security group rule that does not exist, the "InvalidParam.SecurityGroupRuleId" error code is returned instead of a success response. Update the RevokeSecurityGroup operation to use the new verification rules with the new error code based on your business requirements.
       * You can use one of the following groups of parameters to specify the security group rules that you want to delete:
       * *   Parameters used to specify the IDs of security group rules. We recommend that you specify the IDs of security group rules to delete the rules.
       *     *   If a specified security group rule ID does not exist, the call to RevokeSecurityGroup fails.
       * *   Parameters that start with Permissions.
       *     *   If no security group rule matches the specified parameters, the call to RevokeSecurityGroup is successful but no security group rules are deleted.
       *     *   Define an inbound security group rule by configuring the following parameters together:
       *         *   Source: You can specify one parameter from SourceCidrIp (IPv4 address), Ipv6SourceCidrIp (IPv6 address), SourcetPrefixListId (prefix list ID), and SourceGroupId (source security group ID).
       *         *   PortRange: specifies the destination port range.
       *         *   IpProtocol: specifies the protocol.
       *         *   Policy: specifies the action.
       * >  You cannot specify the IDs of security group rules and the parameters that start with Permissions in the same request.
       * ### [](#)Sample requests
       * *   Delete a security group rule based on the rule ID:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //Specify the ID of the security group.
       *     "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"] //Specify the ID of the security group rule.
       * *   Delete a security group rule based on an IPv4 CIDR block:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourceCidrIp":"10.0.0.0/8", //Specify the source IPv4 CIDR block.
       *         "IpProtocol":"TCP", //Specify the protocol.
       *         "PortRange":"80/80", //Specify the destination port range.
       *         "Policy":"accept" //Specify the action.
       *       }
       *     ]
       * *   Delete a security group rule in which a security group is referenced:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourceGroupId":"sg-bp67acfmxa123b****", //Specify the ID of the source security group.
       *         "IpProtocol":"TCP,"
       *         "PortRange":"80/80",
       *         "Policy":"accept"
       *       ]
       *     }
       * *   Delete a security group rule in which a prefix list is referenced:
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****",
       *     "Permissions":[
       *       {
       *         "SourcePrefixListId":pl-x1j1k5ykzqlixdcy****", //Specify the ID of the source prefix list.
       *         "IpProtocol":"TCP",
       *         "PortRange":"80/80",
       *         "Policy":"accept"
       *       }
       *     ]
       *
       * @param request RevokeSecurityGroupRequest
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroup(const Models::RevokeSecurityGroupRequest &request);

      /**
       * @summary Deletes outbound security group rules from a specified security group.
       *
       * @description >  Alibaba Cloud modified verification rules for the RevokeSecurityGroupEgress operation on July 8, 2024. When you use the RevokeSecurityGroupEgress operation to delete a security group rule that does not exist, the "InvalidSecurityGroupRule.RuleNotExist" error code is returned instead of a success response. Update the RevokeSecurityGroupEgress operation to use the new verification rules with the new error code based on your business requirements.
       * You can use one of the following methods to delete a security group rule:
       * *   Delete a rule by specifying the IDs of security group rules. We recommend that you specify the IDs of security group rules to delete the rules.
       *     *   If a security group rule ID that you specify does not exist, an error is reported.
       * *   Delete a rule by specifying the Permissions parameter.
       *     *   If no security group rule matches the specified parameters, the call to RevokeSecurityGroup is successful but no security group rules are deleted.
       *     *   Delete a security group rule by configuring the following parameters together:
       *         *   One of the following parameters: DestCidrIp, Ipv6DestCidrIp, DestPrefixListId, and DestGroupId. DestCidrIp specifies the destination IPv4 CIDR block. Ipv6DestCidrIp specifies the destination IPv6 CIDR block. DestPrefixListId specifies the ID of the destination prefix list. DestGroupId specifies the destination security group.
       *         *   PortRange: specifies the range of destination port numbers.
       *         *   IpProtocol: specifies the protocol.
       *         *   Policy: specifies the action.
       * >  You cannot set the security group rule ID and the Permissions parameter at the same time.
       * ### [](#)Sample requests
       * *   Delete a security group rule.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //The security group ID.
       *     "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"]  //The ID of the security group rule.
       * *   Delete a security group rule based on the CIDR block.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *     "IpProtocol":"TCP", //The protocol.
       *            "DestCidrIp":"10.0.0.0/8", //The destination IPv4 CIDR block.
       *     "PortRange":"22/22", //The destination port range.
       *            "Policy":"accept" //The action.  }
       *     ]
       * *   Delete a security group rule based on the ID of the destination security group.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *         "DestGroupId":"sg-bp67acfmxa123b****", //Set the ID of the target security group.
       *         "IpProtocol":"TCP",
       *         "PortRange":"22/22",
       *         "Policy":"accept"
       *       }
       *     ]
       * *   Delete a security group rule based on a specified prefix list.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *         "IpProtocol":"TCP",
       *            "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", //The ID of the destination prefix list.    "PortRange":"22/22",
       *         "Policy":"accept",
       *       }
       *     ]
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgressWithOptions(const Models::RevokeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes outbound security group rules from a specified security group.
       *
       * @description >  Alibaba Cloud modified verification rules for the RevokeSecurityGroupEgress operation on July 8, 2024. When you use the RevokeSecurityGroupEgress operation to delete a security group rule that does not exist, the "InvalidSecurityGroupRule.RuleNotExist" error code is returned instead of a success response. Update the RevokeSecurityGroupEgress operation to use the new verification rules with the new error code based on your business requirements.
       * You can use one of the following methods to delete a security group rule:
       * *   Delete a rule by specifying the IDs of security group rules. We recommend that you specify the IDs of security group rules to delete the rules.
       *     *   If a security group rule ID that you specify does not exist, an error is reported.
       * *   Delete a rule by specifying the Permissions parameter.
       *     *   If no security group rule matches the specified parameters, the call to RevokeSecurityGroup is successful but no security group rules are deleted.
       *     *   Delete a security group rule by configuring the following parameters together:
       *         *   One of the following parameters: DestCidrIp, Ipv6DestCidrIp, DestPrefixListId, and DestGroupId. DestCidrIp specifies the destination IPv4 CIDR block. Ipv6DestCidrIp specifies the destination IPv6 CIDR block. DestPrefixListId specifies the ID of the destination prefix list. DestGroupId specifies the destination security group.
       *         *   PortRange: specifies the range of destination port numbers.
       *         *   IpProtocol: specifies the protocol.
       *         *   Policy: specifies the action.
       * >  You cannot set the security group rule ID and the Permissions parameter at the same time.
       * ### [](#)Sample requests
       * *   Delete a security group rule.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4p****", //The security group ID.
       *     "SecurityGroupRuleId":["sgr-bpdfmk****","sgr-bpdfmg****"]  //The ID of the security group rule.
       * *   Delete a security group rule based on the CIDR block.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *     "IpProtocol":"TCP", //The protocol.
       *            "DestCidrIp":"10.0.0.0/8", //The destination IPv4 CIDR block.
       *     "PortRange":"22/22", //The destination port range.
       *            "Policy":"accept" //The action.  }
       *     ]
       * *   Delete a security group rule based on the ID of the destination security group.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *         "DestGroupId":"sg-bp67acfmxa123b****", //Set the ID of the target security group.
       *         "IpProtocol":"TCP",
       *         "PortRange":"22/22",
       *         "Policy":"accept"
       *       }
       *     ]
       * *   Delete a security group rule based on a specified prefix list.
       * <!---->
       *     "SecurityGroupId":"sg-bp67acfmxazb4ph***",
       *     "Permissions":[
       *       {
       *         "IpProtocol":"TCP",
       *            "DestPrefixListId":"pl-x1j1k5ykzqlixdcy****", //The ID of the destination prefix list.    "PortRange":"22/22",
       *         "Policy":"accept",
       *       }
       *     ]
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgress(const Models::RevokeSecurityGroupEgressRequest &request);

      /**
       * @summary Creates and runs a Cloud Assistant command on one or more Elastic Compute Service (ECS) instances. Shell, PowerShell, and batch commands are supported. You can run the command based on a schedule, include custom parameters in the command, or run the command in containers on instances.
       *
       * @description This operation is an asynchronous operation. After a request is sent, a response that contains a command ID and a command task ID is immediately returned. You can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) operation with the command ID or task ID to query the execution results of the command.
       * ### [](#)Precautions
       * *   The instances on which you want to create and run a Cloud Assistant command must be in the Running (`Running`) state. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of instances.
       * *   [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be pre-installed on the instances on which you want to create and run a Cloud Assistant command. You can call the [InstallCloudAssistant](https://help.aliyun.com/document_detail/2679925.html) operation to install Cloud Assistant Agent on instances and the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679924.html) operation to query whether Cloud Assistant Agent is installed on instances.
       *     **
       *     **Note** By default, Cloud Assistant Agent is pre-installed on instances created from public images on or after December 1, 2017.
       * *   Before you run a PowerShell command on a Windows instance, make sure that the PowerShell module is installed on the instance.
       * ### [](#)Considerations
       * *   You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can also request a quota increase. For information about how to view quotas and request a quota increase, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       * *   To ensure that scheduled tasks can run as expected, make sure that the Cloud Assistant Agent version is not earlier than the following versions. A scheduled task can run a command at a specific interval, only once at a specific time, or at designated times based on a cron expression in a specific year or time zone. If the `ClientNeedUpgrade` error code is returned, you must update Cloud Assistant Agent to the latest version. For more information, see [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux: 2.2.3.282
       *         - Windows: 2.1.3.282
       * *   When you use a cron expression to specify a schedule, you can specify a time zone based on your business requirements. If you do not specify a time zone, the schedule is determined by the system time of the instances. Make sure that the time or time zone of the instances meets your business requirements. For information about time zones, see [Configure the NTP service for ECS instances that run CentOS 6](https://help.aliyun.com/document_detail/92803.html) or [Configure the NTP service for Windows instances](https://help.aliyun.com/document_detail/51890.html).
       * ### [](#)Suggestions
       * *   **Timeout settings**: You can set `Timeout` to specify the timeout period for command executions on instances. If an execution times out, Cloud Assistant Agent forcefully terminates the command process.
       *     *   When the one-time execution of the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       *     *   For a scheduled task, the timeout period takes effect on every execution of the command. When a command execution times out, the subsequent executions of the command are not affected. When a scheduled execution of the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       * *   **Execution failure**: Command executions may fail due to instance status exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If a command execution fails, no execution information is generated. For more information, see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html).
       * *   **Custom parameters**: If you set `EnableParameter` to true, the custom parameter feature is enabled. When you specify `CommandContent`, you can define custom parameters in the `{{parameter}}` format. Then, the key-value pairs of the custom parameters are passed in when you run the command.
       *
       * @param tmpReq RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and runs a Cloud Assistant command on one or more Elastic Compute Service (ECS) instances. Shell, PowerShell, and batch commands are supported. You can run the command based on a schedule, include custom parameters in the command, or run the command in containers on instances.
       *
       * @description This operation is an asynchronous operation. After a request is sent, a response that contains a command ID and a command task ID is immediately returned. You can call the [DescribeInvocations](https://help.aliyun.com/document_detail/2679916.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/2679916.html) operation with the command ID or task ID to query the execution results of the command.
       * ### [](#)Precautions
       * *   The instances on which you want to create and run a Cloud Assistant command must be in the Running (`Running`) state. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of instances.
       * *   [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be pre-installed on the instances on which you want to create and run a Cloud Assistant command. You can call the [InstallCloudAssistant](https://help.aliyun.com/document_detail/2679925.html) operation to install Cloud Assistant Agent on instances and the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/2679924.html) operation to query whether Cloud Assistant Agent is installed on instances.
       *     **
       *     **Note** By default, Cloud Assistant Agent is pre-installed on instances created from public images on or after December 1, 2017.
       * *   Before you run a PowerShell command on a Windows instance, make sure that the PowerShell module is installed on the instance.
       * ### [](#)Considerations
       * *   You can retain up to 500 to 50,000 Cloud Assistant commands in each region. You can also request a quota increase. For information about how to view quotas and request a quota increase, see [Manage quotas](https://help.aliyun.com/document_detail/184116.html).
       * *   To ensure that scheduled tasks can run as expected, make sure that the Cloud Assistant Agent version is not earlier than the following versions. A scheduled task can run a command at a specific interval, only once at a specific time, or at designated times based on a cron expression in a specific year or time zone. If the `ClientNeedUpgrade` error code is returned, you must update Cloud Assistant Agent to the latest version. For more information, see [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         - Linux: 2.2.3.282
       *         - Windows: 2.1.3.282
       * *   When you use a cron expression to specify a schedule, you can specify a time zone based on your business requirements. If you do not specify a time zone, the schedule is determined by the system time of the instances. Make sure that the time or time zone of the instances meets your business requirements. For information about time zones, see [Configure the NTP service for ECS instances that run CentOS 6](https://help.aliyun.com/document_detail/92803.html) or [Configure the NTP service for Windows instances](https://help.aliyun.com/document_detail/51890.html).
       * ### [](#)Suggestions
       * *   **Timeout settings**: You can set `Timeout` to specify the timeout period for command executions on instances. If an execution times out, Cloud Assistant Agent forcefully terminates the command process.
       *     *   When the one-time execution of the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       *     *   For a scheduled task, the timeout period takes effect on every execution of the command. When a command execution times out, the subsequent executions of the command are not affected. When a scheduled execution of the command times out, the execution status ([InvokeRecordStatus](https://help.aliyun.com/document_detail/64845.html)) of the command becomes Failed.
       * *   **Execution failure**: Command executions may fail due to instance status exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If a command execution fails, no execution information is generated. For more information, see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html).
       * *   **Custom parameters**: If you set `EnableParameter` to true, the custom parameter feature is enabled. When you specify `CommandContent`, you can define custom parameters in the `{{parameter}}` format. Then, the key-value pairs of the custom parameters are passed in when you run the command.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Batch creates Elastic Compute Service (ECS) instances. You can automatically start, assign public IP addresses to, and specify an automatic release time for the instances.
       *
       * @description Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.
       * This operation is an asynchronous operation. After a request to create ECS instances is sent, ECS instance IDs are returned but the creation and startup of the instances may be incomplete. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instances. When the status of an instance is `Running` in the DescribeInstanceStatus response, the instance is created and started.
       * ### [](#)Considerations
       * *   If the resource inventory is insufficient to complete instance creation, Alibaba Cloud immediately sends an instance creation failure event (SystemFailure.Delete). You can call the [DescribeInstanceHistoryEvents](https://help.aliyun.com/document_detail/2679897.html) operation to check whether an instance creation failure event exists. For more information, see [System events related to instance creation failures](https://help.aliyun.com/document_detail/2545990.html).
       * *   Make sure that the number of ECS instances you create or the number of vCPUs on ECS instances of all instance types you create does not exceed the corresponding quota. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas) to view the quotas.
       * *   Before you create ECS instances of the Virtual Private Cloud (VPC) type in a region, [create a VPC](https://help.aliyun.com/document_detail/65430.html) in the region.
       * ### [](#)Precautions
       * *   If you create a subscription instance (`PrePaid`), available coupons in your account are automatically used.
       * *   You can call the RunInstances operation to create up to 100 ECS instances in a single request. To create more than 100 ECS instances, we recommend that you initiate multiple requests in batches or concurrently.
       * *   If you set `InternetMaxBandwidthOut` to a value greater than 0, public IP addresses are automatically assigned to the ECS instances to be created.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth](~~25412#BandwidthQuota~~) section of the "Limits and quotas on ECS" topic.
       * ### [](#)Suggestions
       * *   **Test scenarios**: Set `DryRun` to true to perform a dry run without performing the actual request.
       * *   **Release of ECS instances**: Use `AutoReleaseTime` to configure an automatic release time for ECS instances in the request to RunInstances or call the [DeleteInstances](https://help.aliyun.com/document_detail/2679710.html) operation to release the instances.
       * *   **Management and search of ECS instances**: Add tags to the ECS instances by specifying `Tag.N.Key` and `Tag.N.Value` and append incremental suffixes by specifying `UniqueSuffix` to the hostname specified by `HostName` and the instance name specified by `InstanceName`. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
       * *   **Launch template**: A launch template contains the parameters required to create an ECS instance so that you do not have to specify the parameters every time you create ECS instances. You can call the [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) operation to create a launch template. Then, in the request to `RunInstances`, you can specify `LaunchTemplateId` and `LaunchTemplateVersion` to use the launch template.
       * *   **Disabling of Hyper-Threading (HT)**: In memory-intensive scenarios, set `CpuOptions.ThreadsPerCore` to 1 to disable HT and increase the memory-to-vCPU ratio.
       * *   **Enabling of Jumbo Frames**: Set `NetworkOptions.EnableJumboFrame` to true to enable the `Jumbo Frames` feature when you create ECS instances. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
       * ## [](#)Sample requests
       * Use a specific image to create ECS instances of a specific instance type in the China (Hangzhou) region. The instances use disks with a specific capacity as the system disk and data disks and are automatically assigned public IP addresses. The instances have user-defined names and logon passwords. The instances are assigned to a specific security group and connected to a specific vSwitch. Request parameters:
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     ImageId:"aliyun_3_x64_20G_alibase_20221102.vhd", //Set the image ID to aliyun_3_x64_20G_alibase_20221102.vhd.
       *     InstanceType:"ecs.g7.large", //Set the instance type to ecs.g7.large.
       *     SecurityGroupId:"sg-bp150uqocpf9jj70****", //Set the security group ID to sg-bp150uqocpf9jj70****.
       *     VSwitchId:"vsw-bp1qo7s91cbch5i4l****", //Set the vSwitch ID to vsw-bp1qo7s91cbch5i4l****.
       *     SystemDisk:{
       *       Category:"cloud_essd", //Set the system disk category to cloud_essd, which specifies the Enterprise SSD (ESSD) category.
       *       Size:40, //Set the system disk size to 40. Unit: GiB.
       *     },
       *     DataDisk:[
       *       {
       *         Category:"cloud_essd", //Set the data disk category to cloud_essd, which specifies the ESSD category.
       *         Size:100, //Set the data disk size to 100. Unit: GiB.
       *       }
       *     ],
       *     HostName:"ECS-test", //Set the instance hostname to ECS-test.
       *     Password:"ECS@test1234", //Set the logon password to ECS@test1234.
       *     InternetMaxBandwidthOut:10 //Set the outbound public bandwidth to 10. Unit: Mbit/s.
       * Examples on how to create instances of different types based on the preceding parameters:
       * **Example: Create five subscription ECS instances for which auto-renewal is enabled**
       *     Amount:5, //Set the number of ECS instances that you want to create to 5.
       *     InstanceChargeType:"PrePaid", //Set the billing method to PrePaid, which specifies the subscription billing method.
       *     PeriodUnit:"Month", //Set the subscription period unit to Month.
       *     Period:1, //Set the subscription period to 1. The unit is specified by PeriodUnit, which is Month in this example.
       *     AutoRenew:true, //Set this parameter to true to enable auto-renewal.
       *     AutoRenewPeriod:1 //Set the renewal period to 1. The unit is specified by PeriodUnit, which is Month in this example.
       * **Example: Create 10 pay-as-you-go ECS instances**
       *     Amount:10, //Set the number of ECS instances that you want to create to 10.
       *     InstanceChargeType:"PostPaid", //Set the billing method to PostPaid, which specifies the pay-as-you-go billing method.
       *     SpotStrategy:"NoSpot" //Set this parameter to NoSpot, which is the default value and specifies that the instances are created as pay-as-you-go instances.
       * **Example: Create 20 spot instances that use a specific bidding policy and a protection period**
       *     Amount:20, //Set the number of ECS instances that you want to create to 20.
       *     InstanceChargeType:"PostPaid",
       *     SpotStrategy:"SpotAsPriceGo", //Set the bidding policy to SpotAsPriceGo, which specifies that the instances are created as spot instances for which the market price at the time of purchase is automatically used as the bid price.
       *     SpotDuration:1 //Set the protection period of the spot instances to 1. Unit: hours.
       * Use a launch template created by calling the [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) operation to create ECS instances in the China (Hangzhou) region. Examples:
       * **Example: Create 10 ECS instances based on a launch template**
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     Amount:10, //Set the number of ECS instances that you want to create to 10.
       *     LaunchTemplateId:"lt-bp14xczpoxvb6rre****" //Set the launch template ID to lt-bp14xczpoxvb6rre****.
       * >  If a parameter is specified both in the launch template that you reference in a request and in the instance parameters of the same request, the value specified in the instance parameters takes precedence. For example, if you set InstanceChargeType in the launch template to PrePaid (subscription) and set InstanceChargeType in the instance parameters to PostPaid (pay-as-you-go), the created instances are pay-as-you-go instances.
       * **Example: Use a full image (an image that contains the system disk and data disks) to create an ECS instance**
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     ImageId = m-bp13ohd32cvzpq9e****, //Set the custom image ID to m-bp13ohd32cvzpq9e****.
       *     InstanceType = ecs.u1-c1m1.large, //Set the instance type to ecs.u1-c1m1.large.
       *     SecurityGroupId = sg-bp10jztp6b0sdsyl****, //Set the security group ID to sg-bp10jztp6b0sdsyl****.
       *     VSwitchId = vsw-bp19wo63nleroq22g****, //Set the vSwitch ID to vsw-bp19wo63nleroq22g****.
       *     SystemDisk.Size = 50, //Set the size of the system disk in the full image to 50. Unit: GiB.
       *     SystemDisk.Category = cloud_auto, //Set the category of the system disk in the full image to cloud_auto, which specifies the ESSD AutoPL disk category.
       *     DataDisk.0.Device = /dev/xvdb, //Set the mount point of the data disk in the full image to /dev/xvdb.
       *     DataDisk.0.Size = 50, //Set the size of the data disk in the full image to 50. Unit: GiB.
       *     DataDisk.0.Category = cloud_essd, //Set the category of the data disk in the full image to cloud_essd, which specifies the ESSD category.
       *     DataDisk.1.Device = /dev/xvdc, //Set the mount point of the new data disk to /dev/xvdc. If you want to use a new data disk to replace the data disk in the full image, set DataDisk.1.Device to /dev/xvdb (the default mount point of the data disk in the full image).
       *     DataDisk.1.Size = 70, //Set the size of the new data disk to 70. Unit: GiB.
       *     DataDisk.1.Category = cloud_auto, //Set the category of the new data disk to cloud_auto, which specifies the ESSD AutoPL disk category.
       *
       * @param request RunInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstancesWithOptions(const Models::RunInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch creates Elastic Compute Service (ECS) instances. You can automatically start, assign public IP addresses to, and specify an automatic release time for the instances.
       *
       * @description Before you call this operation, familiarize yourself with the billing rules and [pricing](https://www.alibabacloud.com/zh/pricing-calculator#/commodity/vm_intl) of ECS resources.
       * This operation is an asynchronous operation. After a request to create ECS instances is sent, ECS instance IDs are returned but the creation and startup of the instances may be incomplete. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the instances. When the status of an instance is `Running` in the DescribeInstanceStatus response, the instance is created and started.
       * ### [](#)Considerations
       * *   If the resource inventory is insufficient to complete instance creation, Alibaba Cloud immediately sends an instance creation failure event (SystemFailure.Delete). You can call the [DescribeInstanceHistoryEvents](https://help.aliyun.com/document_detail/2679897.html) operation to check whether an instance creation failure event exists. For more information, see [System events related to instance creation failures](https://help.aliyun.com/document_detail/2545990.html).
       * *   Make sure that the number of ECS instances you create or the number of vCPUs on ECS instances of all instance types you create does not exceed the corresponding quota. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ecs/quotas) to view the quotas.
       * *   Before you create ECS instances of the Virtual Private Cloud (VPC) type in a region, [create a VPC](https://help.aliyun.com/document_detail/65430.html) in the region.
       * ### [](#)Precautions
       * *   If you create a subscription instance (`PrePaid`), available coupons in your account are automatically used.
       * *   You can call the RunInstances operation to create up to 100 ECS instances in a single request. To create more than 100 ECS instances, we recommend that you initiate multiple requests in batches or concurrently.
       * *   If you set `InternetMaxBandwidthOut` to a value greater than 0, public IP addresses are automatically assigned to the ECS instances to be created.
       * >  For the limits on the sum of maximum public bandwidths of ECS instances that use the pay-by-bandwidth billing method for network usage per region per Alibaba Cloud account, see the [Public bandwidth](~~25412#BandwidthQuota~~) section of the "Limits and quotas on ECS" topic.
       * ### [](#)Suggestions
       * *   **Test scenarios**: Set `DryRun` to true to perform a dry run without performing the actual request.
       * *   **Release of ECS instances**: Use `AutoReleaseTime` to configure an automatic release time for ECS instances in the request to RunInstances or call the [DeleteInstances](https://help.aliyun.com/document_detail/2679710.html) operation to release the instances.
       * *   **Management and search of ECS instances**: Add tags to the ECS instances by specifying `Tag.N.Key` and `Tag.N.Value` and append incremental suffixes by specifying `UniqueSuffix` to the hostname specified by `HostName` and the instance name specified by `InstanceName`. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
       * *   **Launch template**: A launch template contains the parameters required to create an ECS instance so that you do not have to specify the parameters every time you create ECS instances. You can call the [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) operation to create a launch template. Then, in the request to `RunInstances`, you can specify `LaunchTemplateId` and `LaunchTemplateVersion` to use the launch template.
       * *   **Disabling of Hyper-Threading (HT)**: In memory-intensive scenarios, set `CpuOptions.ThreadsPerCore` to 1 to disable HT and increase the memory-to-vCPU ratio.
       * *   **Enabling of Jumbo Frames**: Set `NetworkOptions.EnableJumboFrame` to true to enable the `Jumbo Frames` feature when you create ECS instances. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
       * ## [](#)Sample requests
       * Use a specific image to create ECS instances of a specific instance type in the China (Hangzhou) region. The instances use disks with a specific capacity as the system disk and data disks and are automatically assigned public IP addresses. The instances have user-defined names and logon passwords. The instances are assigned to a specific security group and connected to a specific vSwitch. Request parameters:
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     ImageId:"aliyun_3_x64_20G_alibase_20221102.vhd", //Set the image ID to aliyun_3_x64_20G_alibase_20221102.vhd.
       *     InstanceType:"ecs.g7.large", //Set the instance type to ecs.g7.large.
       *     SecurityGroupId:"sg-bp150uqocpf9jj70****", //Set the security group ID to sg-bp150uqocpf9jj70****.
       *     VSwitchId:"vsw-bp1qo7s91cbch5i4l****", //Set the vSwitch ID to vsw-bp1qo7s91cbch5i4l****.
       *     SystemDisk:{
       *       Category:"cloud_essd", //Set the system disk category to cloud_essd, which specifies the Enterprise SSD (ESSD) category.
       *       Size:40, //Set the system disk size to 40. Unit: GiB.
       *     },
       *     DataDisk:[
       *       {
       *         Category:"cloud_essd", //Set the data disk category to cloud_essd, which specifies the ESSD category.
       *         Size:100, //Set the data disk size to 100. Unit: GiB.
       *       }
       *     ],
       *     HostName:"ECS-test", //Set the instance hostname to ECS-test.
       *     Password:"ECS@test1234", //Set the logon password to ECS@test1234.
       *     InternetMaxBandwidthOut:10 //Set the outbound public bandwidth to 10. Unit: Mbit/s.
       * Examples on how to create instances of different types based on the preceding parameters:
       * **Example: Create five subscription ECS instances for which auto-renewal is enabled**
       *     Amount:5, //Set the number of ECS instances that you want to create to 5.
       *     InstanceChargeType:"PrePaid", //Set the billing method to PrePaid, which specifies the subscription billing method.
       *     PeriodUnit:"Month", //Set the subscription period unit to Month.
       *     Period:1, //Set the subscription period to 1. The unit is specified by PeriodUnit, which is Month in this example.
       *     AutoRenew:true, //Set this parameter to true to enable auto-renewal.
       *     AutoRenewPeriod:1 //Set the renewal period to 1. The unit is specified by PeriodUnit, which is Month in this example.
       * **Example: Create 10 pay-as-you-go ECS instances**
       *     Amount:10, //Set the number of ECS instances that you want to create to 10.
       *     InstanceChargeType:"PostPaid", //Set the billing method to PostPaid, which specifies the pay-as-you-go billing method.
       *     SpotStrategy:"NoSpot" //Set this parameter to NoSpot, which is the default value and specifies that the instances are created as pay-as-you-go instances.
       * **Example: Create 20 spot instances that use a specific bidding policy and a protection period**
       *     Amount:20, //Set the number of ECS instances that you want to create to 20.
       *     InstanceChargeType:"PostPaid",
       *     SpotStrategy:"SpotAsPriceGo", //Set the bidding policy to SpotAsPriceGo, which specifies that the instances are created as spot instances for which the market price at the time of purchase is automatically used as the bid price.
       *     SpotDuration:1 //Set the protection period of the spot instances to 1. Unit: hours.
       * Use a launch template created by calling the [CreateLaunchTemplate](https://help.aliyun.com/document_detail/2679729.html) operation to create ECS instances in the China (Hangzhou) region. Examples:
       * **Example: Create 10 ECS instances based on a launch template**
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     Amount:10, //Set the number of ECS instances that you want to create to 10.
       *     LaunchTemplateId:"lt-bp14xczpoxvb6rre****" //Set the launch template ID to lt-bp14xczpoxvb6rre****.
       * >  If a parameter is specified both in the launch template that you reference in a request and in the instance parameters of the same request, the value specified in the instance parameters takes precedence. For example, if you set InstanceChargeType in the launch template to PrePaid (subscription) and set InstanceChargeType in the instance parameters to PostPaid (pay-as-you-go), the created instances are pay-as-you-go instances.
       * **Example: Use a full image (an image that contains the system disk and data disks) to create an ECS instance**
       *     RegionId:"cn-hangzhou", //Set the region ID to cn-hangzhou, which specifies the China (Hangzhou) region.
       *     ImageId = m-bp13ohd32cvzpq9e****, //Set the custom image ID to m-bp13ohd32cvzpq9e****.
       *     InstanceType = ecs.u1-c1m1.large, //Set the instance type to ecs.u1-c1m1.large.
       *     SecurityGroupId = sg-bp10jztp6b0sdsyl****, //Set the security group ID to sg-bp10jztp6b0sdsyl****.
       *     VSwitchId = vsw-bp19wo63nleroq22g****, //Set the vSwitch ID to vsw-bp19wo63nleroq22g****.
       *     SystemDisk.Size = 50, //Set the size of the system disk in the full image to 50. Unit: GiB.
       *     SystemDisk.Category = cloud_auto, //Set the category of the system disk in the full image to cloud_auto, which specifies the ESSD AutoPL disk category.
       *     DataDisk.0.Device = /dev/xvdb, //Set the mount point of the data disk in the full image to /dev/xvdb.
       *     DataDisk.0.Size = 50, //Set the size of the data disk in the full image to 50. Unit: GiB.
       *     DataDisk.0.Category = cloud_essd, //Set the category of the data disk in the full image to cloud_essd, which specifies the ESSD category.
       *     DataDisk.1.Device = /dev/xvdc, //Set the mount point of the new data disk to /dev/xvdc. If you want to use a new data disk to replace the data disk in the full image, set DataDisk.1.Device to /dev/xvdb (the default mount point of the data disk in the full image).
       *     DataDisk.1.Size = 70, //Set the size of the new data disk to 70. Unit: GiB.
       *     DataDisk.1.Category = cloud_auto, //Set the category of the new data disk to cloud_auto, which specifies the ESSD AutoPL disk category.
       *
       * @param request RunInstancesRequest
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstances(const Models::RunInstancesRequest &request);

      /**
       * @summary Sends a file to one or more Elastic Compute Service (ECS) instances.
       *
       * @description ## [](#)Usage notes
       * *   The instances to which you want to send a file must be in the Running (`Running`) state.
       * *   [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on the instances.
       * *   Only Cloud Assistant Agent versions that are later than the following ones support file sending. If the `ClientNeedUpgrade` error code is returned, update Cloud Assistant Agent to the latest version.
       *     *   For Linux instances, the version of Cloud Assistant Agent must be later than 1.0.2.569.
       *     *   For Windows instances, the version of Cloud Assistant Agent must be later than 1.0.0.149.
       * *   The file to be sent must not exceed 32 KB in size after it is encoded in Base64.
       * *   The file may fail to be sent due to instance exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If the file fails to be sent, call the [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) operation or see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html) for troubleshooting.
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a file to one or more Elastic Compute Service (ECS) instances.
       *
       * @description ## [](#)Usage notes
       * *   The instances to which you want to send a file must be in the Running (`Running`) state.
       * *   [Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html) must be installed on the instances.
       * *   Only Cloud Assistant Agent versions that are later than the following ones support file sending. If the `ClientNeedUpgrade` error code is returned, update Cloud Assistant Agent to the latest version.
       *     *   For Linux instances, the version of Cloud Assistant Agent must be later than 1.0.2.569.
       *     *   For Windows instances, the version of Cloud Assistant Agent must be later than 1.0.0.149.
       * *   The file to be sent must not exceed 32 KB in size after it is encoded in Base64.
       * *   The file may fail to be sent due to instance exceptions, network exceptions, or exceptions on Cloud Assistant Agent. If the file fails to be sent, call the [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) operation or see [Check execution results and troubleshoot common issues](https://help.aliyun.com/document_detail/87029.html) for troubleshooting.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Executes an image creation task (image building task) by using an image template.
       *
       * @description *   After you create an image template, you can call the StartImagePipelineExecution operation to create a pipeline task. The system creates, copies, and shares images based on the parameters configured in the image template.
       * *   You can execute only one pipeline task for each image template.
       *
       * @param request StartImagePipelineExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartImagePipelineExecutionResponse
       */
      Models::StartImagePipelineExecutionResponse startImagePipelineExecutionWithOptions(const Models::StartImagePipelineExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an image creation task (image building task) by using an image template.
       *
       * @description *   After you create an image template, you can call the StartImagePipelineExecution operation to create a pipeline task. The system creates, copies, and shares images based on the parameters configured in the image template.
       * *   You can execute only one pipeline task for each image template.
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
       * *   You cannot call this operation to start an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instance that you want to start must be in the **Stopped** (`Stopped`) state.
       * *   If an ECS instance is stopped in economical mode, the instance may fail to be started due to insufficient resources.
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
       * *   You cannot call this operation to start an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instance that you want to start must be in the **Stopped** (`Stopped`) state.
       * *   If an ECS instance is stopped in economical mode, the instance may fail to be started due to insufficient resources.
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
       * *   You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instances that you want to start must be in the **Stopped** (`Stopped`) state.
       * *   ECS instances stopped in economical mode may fail to be started due to insufficient resources.
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
       * *   You cannot call this operation to start ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   The ECS instances that you want to start must be in the **Stopped** (`Stopped`) state.
       * *   ECS instances stopped in economical mode may fail to be started due to insufficient resources.
       *
       * @param request StartInstancesRequest
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstances(const Models::StartInstancesRequest &request);

      /**
       * @summary Creates a session by using the session management feature. When you call this operation, you can include the ID of an Elastic Compute Service (ECS) instance in the request to create a WebSocket session for the instance. The URL of the WebSocket session returned by the operation can be used to connect to the instance.
       *
       * @description ## [](#)Usage notes
       * When you use custom code to connect to an ECS instance that serves as a client, you can call this operation to obtain the WebSocket URL that is used to connect to the instance. Take note of the following items:
       * *   The ECS instance must be in the Running state.
       * *   Cloud Assistant Agent must be installed on the ECS instance. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) operation to check whether Cloud Assistant Agent is installed on the ECS instance and query the version number of the installed Cloud Assistant Agent.
       *     *   If Cloud Assistant Agent is not installed on the ECS instance, call the [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) operation to install Cloud Assistant Agent.
       *     *   The Cloud Assistant Agent versions that are later than the following ones support the session management feature. If you need to upgrade the Cloud Assistant Agent version, follow the instructions in [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         *   Linux operating system: 2.2.3.256
       *         *   Windows operating system: 2.1.3.256
       * *   Each WebSocket URL returned by the StartTerminalSession operation remains valid for 10 minutes.
       * *   If no data is transferred over a session within 3 minutes, Cloud Assistant closes the session connection.
       * *   Up to 1,000 sessions can be created and available in a region. Each ECS instance can have up to 20 sessions in the connected state. Each session supports a bandwidth of up to 200 Kbit/s.
       * *   The port forwarding feature supports only TCP port forwarding. UDP port forwarding is not supported.
       * *   If you want to permanently close a session and invalidate the WebSocket URL, call the EndTerminalSession operation.
       *
       * @param tmpReq StartTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSessionWithOptions(const Models::StartTerminalSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session by using the session management feature. When you call this operation, you can include the ID of an Elastic Compute Service (ECS) instance in the request to create a WebSocket session for the instance. The URL of the WebSocket session returned by the operation can be used to connect to the instance.
       *
       * @description ## [](#)Usage notes
       * When you use custom code to connect to an ECS instance that serves as a client, you can call this operation to obtain the WebSocket URL that is used to connect to the instance. Take note of the following items:
       * *   The ECS instance must be in the Running state.
       * *   Cloud Assistant Agent must be installed on the ECS instance. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/87346.html) operation to check whether Cloud Assistant Agent is installed on the ECS instance and query the version number of the installed Cloud Assistant Agent.
       *     *   If Cloud Assistant Agent is not installed on the ECS instance, call the [InstallCloudAssistant](https://help.aliyun.com/document_detail/85916.html) operation to install Cloud Assistant Agent.
       *     *   The Cloud Assistant Agent versions that are later than the following ones support the session management feature. If you need to upgrade the Cloud Assistant Agent version, follow the instructions in [Upgrade or disable upgrades of Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
       *         *   Linux operating system: 2.2.3.256
       *         *   Windows operating system: 2.1.3.256
       * *   Each WebSocket URL returned by the StartTerminalSession operation remains valid for 10 minutes.
       * *   If no data is transferred over a session within 3 minutes, Cloud Assistant closes the session connection.
       * *   Up to 1,000 sessions can be created and available in a region. Each ECS instance can have up to 20 sessions in the connected state. Each session supports a bandwidth of up to 200 Kbit/s.
       * *   The port forwarding feature supports only TCP port forwarding. UDP port forwarding is not supported.
       * *   If you want to permanently close a session and invalidate the WebSocket URL, call the EndTerminalSession operation.
       *
       * @param request StartTerminalSessionRequest
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSession(const Models::StartTerminalSessionRequest &request);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify parameters to determine whether to forcefully stop the instance and the stop mode.
       *
       * @description This operation is an asynchronous operation. After you call this operation to stop an ECS instance, the operation sets the status of the ECS instance to Stopping and begins the stop process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Stopped`, the instance is stopped.
       * ### [](#)Precautions
       * *   You cannot call this operation to stop an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   After you enable the default economical mode for all pay-as-you-go ECS instances located in virtual private clouds (VPCs) in your account, you can set `StoppedMode` to KeepCharging for the ECS instance that you want to stop to enable standard mode. This way, the ECS instance continues to be billed after the instance is stopped. The instance type resources and public IP address of the instance are retained.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an Elastic Compute Service (ECS) instance. You can specify parameters to determine whether to forcefully stop the instance and the stop mode.
       *
       * @description This operation is an asynchronous operation. After you call this operation to stop an ECS instance, the operation sets the status of the ECS instance to Stopping and begins the stop process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Stopped`, the instance is stopped.
       * ### [](#)Precautions
       * *   You cannot call this operation to stop an ECS instance that is locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       * *   After you enable the default economical mode for all pay-as-you-go ECS instances located in virtual private clouds (VPCs) in your account, you can set `StoppedMode` to KeepCharging for the ECS instance that you want to stop to enable standard mode. This way, the ECS instance continues to be billed after the instance is stopped. The instance type resources and public IP address of the instance are retained.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Stops Elastic Compute Service (ECS) instances. You can specify parameters to determine whether to forcefully stop the instances and the stop mode.
       *
       * @description This operation is an asynchronous operation. After you call this operation to stop an ECS instance, the operation sets the status of the ECS instance to Stopping and begins the stop process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Stopped`, the instance is stopped.
       * ### [](#)Considerations
       * *   The instance is unavailable after you stop the instance. Make sure that stopping the instance does not affect your business. You can also call the [StartInstance](https://help.aliyun.com/document_detail/2679679.html) or [StartInstances](https://help.aliyun.com/document_detail/2679680.html) operation to start the instance.
       * *   You cannot call this operation to stop ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request StopInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstancesWithOptions(const Models::StopInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops Elastic Compute Service (ECS) instances. You can specify parameters to determine whether to forcefully stop the instances and the stop mode.
       *
       * @description This operation is an asynchronous operation. After you call this operation to stop an ECS instance, the operation sets the status of the ECS instance to Stopping and begins the stop process. You can call the [DescribeInstanceStatus](https://help.aliyun.com/document_detail/2679688.html) operation to query the status of the ECS instance. When the status of the ECS instance changes to `Stopped`, the instance is stopped.
       * ### [](#)Considerations
       * *   The instance is unavailable after you stop the instance. Make sure that stopping the instance does not affect your business. You can also call the [StartInstance](https://help.aliyun.com/document_detail/2679679.html) or [StartInstances](https://help.aliyun.com/document_detail/2679680.html) operation to start the instance.
       * *   You cannot call this operation to stop ECS instances that are locked for security reasons. For more information, see [API behavior when an instance is locked for security reasons](https://help.aliyun.com/document_detail/25695.html).
       *
       * @param request StopInstancesRequest
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstances(const Models::StopInstancesRequest &request);

      /**
       * @summary \\*   If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * \\*   If you stop the process of a scheduled invocation command, the executions that have started are not interrupted. However, the execution does not start in the next period.
       *
       * @description ## [](#)Usage notes
       * *   If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * *   If you stop the process of a command that runs on a schedule, the executions that have started are not interrupted. Subsequent executions are not scheduled.
       *
       * @param request StopInvocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocationWithOptions(const Models::StopInvocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary \\*   If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * \\*   If you stop the process of a scheduled invocation command, the executions that have started are not interrupted. However, the execution does not start in the next period.
       *
       * @description ## [](#)Usage notes
       * *   If you stop the process of a command that runs only once, the executions that have started are not interrupted. The executions that have not started are canceled.
       * *   If you stop the process of a command that runs on a schedule, the executions that have started are not interrupted. Subsequent executions are not scheduled.
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
       * @summary TerminatePhysicalConnection
       *
       * @param request TerminatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnectionWithOptions(const Models::TerminatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TerminatePhysicalConnection is deprecated, please use Vpc::2016-04-28::TerminatePhysicalConnection instead.
       *
       * @summary TerminatePhysicalConnection
       *
       * @param request TerminatePhysicalConnectionRequest
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnection(const Models::TerminatePhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI TerminateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::TerminateVirtualBorderRouter instead.
       *
       * @summary TerminateVirtualBorderRouter
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouterWithOptions(const Models::TerminateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TerminateVirtualBorderRouter is deprecated, please use Vpc::2016-04-28::TerminateVirtualBorderRouter instead.
       *
       * @summary TerminateVirtualBorderRouter
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouter(const Models::TerminateVirtualBorderRouterRequest &request);

      /**
       * @summary Unassigns one or more IPv6 addresses from an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   The ENI must be in the **Available** (Available) or **InUse** (InUse) state.
       * *   If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignIpv6AddressesResponse
       */
      Models::UnassignIpv6AddressesResponse unassignIpv6AddressesWithOptions(const Models::UnassignIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassigns one or more IPv6 addresses from an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * Take note of the following items:
       * *   The ENI must be in the **Available** (Available) or **InUse** (InUse) state.
       * *   If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
       *
       * @param request UnassignIpv6AddressesRequest
       * @return UnassignIpv6AddressesResponse
       */
      Models::UnassignIpv6AddressesResponse unassignIpv6Addresses(const Models::UnassignIpv6AddressesRequest &request);

      /**
       * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
       *
       * @description ## [](#)Usage notes
       * *   The ENI from which to unassign secondary private IP addresses must be in the **Available** (Available) or **InUse** (InUse) state.
       * *   If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
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
       * *   The ENI from which to unassign secondary private IP addresses must be in the **Available** (Available) or **InUse** (InUse) state.
       * *   If the ENI is a primary ENI, the Elastic Compute Service (ECS) instance to which the ENI is attached must be in the **Running** (Running) or **Stopped** (Stopped) state.
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
       * @summary UnassociateHaVip
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UnassociateHaVip is deprecated, please use Vpc::2016-04-28::UnassociateHaVip instead.
       *
       * @summary UnassociateHaVip
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

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
