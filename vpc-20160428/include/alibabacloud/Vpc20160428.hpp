// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VPC20160428_HPP_
#define ALIBABACLOUD_VPC20160428_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Vpc20160428Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Vpc20160428.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates a router interface that is in the Inactive state.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state.
       * >  You cannot activate a router interface that has overdue payments.
       *
       * @param request ActivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterfaceWithOptions(const Models::ActivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a router interface that is in the Inactive state.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state.
       * >  You cannot activate a router interface that has overdue payments.
       *
       * @param request ActivateRouterInterfaceRequest
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterface(const Models::ActivateRouterInterfaceRequest &request);

      /**
       * @summary Enables a flow log. After the flow log is enabled, traffic information about a resource is captured.
       *
       * @description *   The **ActiveFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Activating** state, the flow log is being started.
       *     *   If the flow log is in the **Active** state, the flow log is started.
       * *   You cannot repeatedly call the **ActiveFlowLog** operation to start a flow log within the specified period of time.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a flow log. After the flow log is enabled, traffic information about a resource is captured.
       *
       * @description *   The **ActiveFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Activating** state, the flow log is being started.
       *     *   If the flow log is in the **Active** state, the flow log is started.
       * *   You cannot repeatedly call the **ActiveFlowLog** operation to start a flow log within the specified period of time.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Advertises a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetworkWithOptions(const Models::AddBgpNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Advertises a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetwork(const Models::AddBgpNetworkRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   When you call this operation to associate an EIP with an Internet Shared Bandwidth instance, make sure that the EIP meets the following requirements:
       *     *   The EIP uses the pay-as-you-go billing method.
       *     *   The EIP and the Internet Shared Bandwidth instance belong to the same region.
       *     *   The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * *   **AddCommonBandwidthPackageIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) operation to query the status of the operation.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDING** state, the EIP is being associated with the Internet Shared Bandwidth instance. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDED** state, the EIP is associated with the Internet Shared Bandwidth instance.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIpWithOptions(const Models::AddCommonBandwidthPackageIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   When you call this operation to associate an EIP with an Internet Shared Bandwidth instance, make sure that the EIP meets the following requirements:
       *     *   The EIP uses the pay-as-you-go billing method.
       *     *   The EIP and the Internet Shared Bandwidth instance belong to the same region.
       *     *   The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * *   **AddCommonBandwidthPackageIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) operation to query the status of the operation.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDING** state, the EIP is being associated with the Internet Shared Bandwidth instance. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDED** state, the EIP is associated with the Internet Shared Bandwidth instance.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIp(const Models::AddCommonBandwidthPackageIpRequest &request);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an Internet Shared Bandwidth instance.
       *
       * @description *   When you call this operation to associate EIPs with an Internet Shared Bandwidth instance, make sure that the EIPs meet the following requirements:
       *     *   The EIPs use the pay-as-you-go billing method.
       *     *   The EIP and the Internet Shared Bandwidth instance belong to the same region.
       *     *   The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * *   **AddCommonBandwidthPackageIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~) operation to query the status of the task.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDING** state, the EIP is being associated with the Internet Shared Bandwidth instance. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDED** state, the EIP is associated with the Internet Shared Bandwidth instance.
       *
       * @param request AddCommonBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpsResponse
       */
      Models::AddCommonBandwidthPackageIpsResponse addCommonBandwidthPackageIpsWithOptions(const Models::AddCommonBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an Internet Shared Bandwidth instance.
       *
       * @description *   When you call this operation to associate EIPs with an Internet Shared Bandwidth instance, make sure that the EIPs meet the following requirements:
       *     *   The EIPs use the pay-as-you-go billing method.
       *     *   The EIP and the Internet Shared Bandwidth instance belong to the same region.
       *     *   The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * *   **AddCommonBandwidthPackageIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~) operation to query the status of the task.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDING** state, the EIP is being associated with the Internet Shared Bandwidth instance. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **BINDED** state, the EIP is associated with the Internet Shared Bandwidth instance.
       *
       * @param request AddCommonBandwidthPackageIpsRequest
       * @return AddCommonBandwidthPackageIpsResponse
       */
      Models::AddCommonBandwidthPackageIpsResponse addCommonBandwidthPackageIps(const Models::AddCommonBandwidthPackageIpsRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with a shared-bandwidth Global Accelerator (GA) instance.
       *
       * @param request AddGlobalAccelerationInstanceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGlobalAccelerationInstanceIpResponse
       */
      Models::AddGlobalAccelerationInstanceIpResponse addGlobalAccelerationInstanceIpWithOptions(const Models::AddGlobalAccelerationInstanceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with a shared-bandwidth Global Accelerator (GA) instance.
       *
       * @param request AddGlobalAccelerationInstanceIpRequest
       * @return AddGlobalAccelerationInstanceIpResponse
       */
      Models::AddGlobalAccelerationInstanceIpResponse addGlobalAccelerationInstanceIp(const Models::AddGlobalAccelerationInstanceIpRequest &request);

      /**
       * @deprecated OpenAPI AddIPv6TranslatorAclListEntry is deprecated
       *
       * @summary Adds an IP entry to an access control list (ACL).
       *
       * @param request AddIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIPv6TranslatorAclListEntryResponse
       */
      Models::AddIPv6TranslatorAclListEntryResponse addIPv6TranslatorAclListEntryWithOptions(const Models::AddIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddIPv6TranslatorAclListEntry is deprecated
       *
       * @summary Adds an IP entry to an access control list (ACL).
       *
       * @param request AddIPv6TranslatorAclListEntryRequest
       * @return AddIPv6TranslatorAclListEntryResponse
       */
      Models::AddIPv6TranslatorAclListEntryResponse addIPv6TranslatorAclListEntry(const Models::AddIPv6TranslatorAclListEntryRequest &request);

      /**
       * @summary Adds a CIDR block to an IP address pool.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   The CIDR block and the IP address pool must belong to the same region.
       * *   The CIDR block and the IP address pool must use the same line type.
       * *   **AddPublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) operation to query the status of the task.
       *     *   If the CIDR block is in the **Modifying** state, the CIDR block is being added. In this state, you can only query the CIDR block and cannot perform other operations.
       *     *   If the CIDR block is in the **Created** state, the CIDR block is added.
       * *   You cannot repeatedly call the **AddPublicIpAddressPoolCidrBlock** operation to add a CIDR block to an IP address pool within the specified period of time.
       *
       * @param request AddPublicIpAddressPoolCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPublicIpAddressPoolCidrBlockResponse
       */
      Models::AddPublicIpAddressPoolCidrBlockResponse addPublicIpAddressPoolCidrBlockWithOptions(const Models::AddPublicIpAddressPoolCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a CIDR block to an IP address pool.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   The CIDR block and the IP address pool must belong to the same region.
       * *   The CIDR block and the IP address pool must use the same line type.
       * *   **AddPublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) operation to query the status of the task.
       *     *   If the CIDR block is in the **Modifying** state, the CIDR block is being added. In this state, you can only query the CIDR block and cannot perform other operations.
       *     *   If the CIDR block is in the **Created** state, the CIDR block is added.
       * *   You cannot repeatedly call the **AddPublicIpAddressPoolCidrBlock** operation to add a CIDR block to an IP address pool within the specified period of time.
       *
       * @param request AddPublicIpAddressPoolCidrBlockRequest
       * @return AddPublicIpAddressPoolCidrBlockResponse
       */
      Models::AddPublicIpAddressPoolCidrBlockResponse addPublicIpAddressPoolCidrBlock(const Models::AddPublicIpAddressPoolCidrBlockRequest &request);

      /**
       * @summary Adds a traffic mirror source to a traffic mirror session.
       *
       * @description *   **AddSourcesToTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being added to the traffic mirror session.
       *     *   If the traffic mirror session is in the **Created** state, the traffic mirror source is added to the traffic mirror session.
       * *   You cannot repeatedly call the **AddSourcesToTrafficMirrorSession** operation to add a traffic mirror source to a traffic mirror session within the specified period of time.
       *
       * @param request AddSourcesToTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSourcesToTrafficMirrorSessionResponse
       */
      Models::AddSourcesToTrafficMirrorSessionResponse addSourcesToTrafficMirrorSessionWithOptions(const Models::AddSourcesToTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a traffic mirror source to a traffic mirror session.
       *
       * @description *   **AddSourcesToTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being added to the traffic mirror session.
       *     *   If the traffic mirror session is in the **Created** state, the traffic mirror source is added to the traffic mirror session.
       * *   You cannot repeatedly call the **AddSourcesToTrafficMirrorSession** operation to add a traffic mirror source to a traffic mirror session within the specified period of time.
       *
       * @param request AddSourcesToTrafficMirrorSessionRequest
       * @return AddSourcesToTrafficMirrorSessionResponse
       */
      Models::AddSourcesToTrafficMirrorSessionResponse addSourcesToTrafficMirrorSession(const Models::AddSourcesToTrafficMirrorSessionRequest &request);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After you call this operation, the system randomly allocates an EIP that is in the **Available** state in the specified region. EIPs support only the ICMP, TCP, and UDP transport layer protocols. The IGMP and SCTP protocols are not supported.
       *
       * @param request AllocateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddressWithOptions(const Models::AllocateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After you call this operation, the system randomly allocates an EIP that is in the **Available** state in the specified region. EIPs support only the ICMP, TCP, and UDP transport layer protocols. The IGMP and SCTP protocols are not supported.
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Requests a specified elastic IP address (EIP).
       *
       * @param request AllocateEipAddressProRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressProResponse
       */
      Models::AllocateEipAddressProResponse allocateEipAddressProWithOptions(const Models::AllocateEipAddressProRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requests a specified elastic IP address (EIP).
       *
       * @param request AllocateEipAddressProRequest
       * @return AllocateEipAddressProResponse
       */
      Models::AllocateEipAddressProResponse allocateEipAddressPro(const Models::AllocateEipAddressProRequest &request);

      /**
       * @deprecated OpenAPI AllocateEipSegmentAddress is deprecated
       *
       * @summary Applies for contiguous elastic IP addresses (EIPs).
       *
       * @description **AllocateEipSegmentAddress** is an asynchronous operation. After a request is sent, the system returns the ID of a contiguous EIP group and runs the task in the background. You can call the [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) operation to query the status of the task.
       * *   If the contiguous EIP group is in the **Allocating** state, the EIPs are being allocated. In this case, you can only perform the query operation and cannot perform other operations.
       * *   If the contiguous EIP group is in the **Allocated** state, the EIPs are allocated.
       *
       * @param request AllocateEipSegmentAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipSegmentAddressResponse
       */
      Models::AllocateEipSegmentAddressResponse allocateEipSegmentAddressWithOptions(const Models::AllocateEipSegmentAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AllocateEipSegmentAddress is deprecated
       *
       * @summary Applies for contiguous elastic IP addresses (EIPs).
       *
       * @description **AllocateEipSegmentAddress** is an asynchronous operation. After a request is sent, the system returns the ID of a contiguous EIP group and runs the task in the background. You can call the [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) operation to query the status of the task.
       * *   If the contiguous EIP group is in the **Allocating** state, the EIPs are being allocated. In this case, you can only perform the query operation and cannot perform other operations.
       * *   If the contiguous EIP group is in the **Allocated** state, the EIPs are allocated.
       *
       * @param request AllocateEipSegmentAddressRequest
       * @return AllocateEipSegmentAddressResponse
       */
      Models::AllocateEipSegmentAddressResponse allocateEipSegmentAddress(const Models::AllocateEipSegmentAddressRequest &request);

      /**
       * @summary Assigns an IPv6 address.
       *
       * @param request AllocateIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6AddressWithOptions(const Models::AllocateIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns an IPv6 address.
       *
       * @param request AllocateIpv6AddressRequest
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6Address(const Models::AllocateIpv6AddressRequest &request);

      /**
       * @summary Default IPv6 gateways support only private communication. You can call the AllocateIpv6InternetBandwidth operation to purchase Internet bandwidth resources for an IPv6 address. This way, ECS instances in a VPC can access the Internet through the IPv6 address. IPv6 clients can also access the ECS instances over the Internet.
       *
       * @description *   Before you call this operation, make sure that an ECS instance that supports IPv6 is created in a VPC that has an IPv6 CIDR block. For more information, see [Create a VPC with an IPv6 CIDR block](https://help.aliyun.com/document_detail/100540.html).
       * *   You cannot repeatedly call **AllocateIpv6InternetBandwidth** within the specified period of time.
       *
       * @param request AllocateIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6InternetBandwidthResponse
       */
      Models::AllocateIpv6InternetBandwidthResponse allocateIpv6InternetBandwidthWithOptions(const Models::AllocateIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Default IPv6 gateways support only private communication. You can call the AllocateIpv6InternetBandwidth operation to purchase Internet bandwidth resources for an IPv6 address. This way, ECS instances in a VPC can access the Internet through the IPv6 address. IPv6 clients can also access the ECS instances over the Internet.
       *
       * @description *   Before you call this operation, make sure that an ECS instance that supports IPv6 is created in a VPC that has an IPv6 CIDR block. For more information, see [Create a VPC with an IPv6 CIDR block](https://help.aliyun.com/document_detail/100540.html).
       * *   You cannot repeatedly call **AllocateIpv6InternetBandwidth** within the specified period of time.
       *
       * @param request AllocateIpv6InternetBandwidthRequest
       * @return AllocateIpv6InternetBandwidthResponse
       */
      Models::AllocateIpv6InternetBandwidthResponse allocateIpv6InternetBandwidth(const Models::AllocateIpv6InternetBandwidthRequest &request);

      /**
       * @summary Reserves an IPv6 CIDR block.
       *
       * @description # [](#)
       * The following section describes how to allocate an IPv6 CIDR block to a virtual private cloud (VPC):
       * 1.  Call the AllocateVpcIpv6Cidr operation to reserve the IPv6 CIDR block.
       * 2.  To allocate an IPv6 CIDR block to an existing VPC, call the [AssociateVpcCidrBlock](https://help.aliyun.com/document_detail/146745.html) operation. Set **RegionId**, **VpcId**, and **IPv6CidrBlock** to the IPv6 CIDR bock, and set **IpVersion** to **ipv6**. To allocate an IPv6 CIDR block when you create a VPC, call the [CreateVpc](https://help.aliyun.com/document_detail/35737.html) operation. Set **RegionId** and **Ipv6CidrBlock** to the IPv6 CIDR block, and set **EnableIpv6** to **true**.
       *
       * @param request AllocateVpcIpv6CidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateVpcIpv6CidrResponse
       */
      Models::AllocateVpcIpv6CidrResponse allocateVpcIpv6CidrWithOptions(const Models::AllocateVpcIpv6CidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reserves an IPv6 CIDR block.
       *
       * @description # [](#)
       * The following section describes how to allocate an IPv6 CIDR block to a virtual private cloud (VPC):
       * 1.  Call the AllocateVpcIpv6Cidr operation to reserve the IPv6 CIDR block.
       * 2.  To allocate an IPv6 CIDR block to an existing VPC, call the [AssociateVpcCidrBlock](https://help.aliyun.com/document_detail/146745.html) operation. Set **RegionId**, **VpcId**, and **IPv6CidrBlock** to the IPv6 CIDR bock, and set **IpVersion** to **ipv6**. To allocate an IPv6 CIDR block when you create a VPC, call the [CreateVpc](https://help.aliyun.com/document_detail/35737.html) operation. Set **RegionId** and **Ipv6CidrBlock** to the IPv6 CIDR block, and set **EnableIpv6** to **true**.
       *
       * @param request AllocateVpcIpv6CidrRequest
       * @return AllocateVpcIpv6CidrResponse
       */
      Models::AllocateVpcIpv6CidrResponse allocateVpcIpv6Cidr(const Models::AllocateVpcIpv6CidrRequest &request);

      /**
       * @summary Applies for a Letter of Authorization (LOA) for an Express Connect circuit.
       *
       * @param request ApplyPhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyPhysicalConnectionLOAResponse
       */
      Models::ApplyPhysicalConnectionLOAResponse applyPhysicalConnectionLOAWithOptions(const Models::ApplyPhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a Letter of Authorization (LOA) for an Express Connect circuit.
       *
       * @param request ApplyPhysicalConnectionLOARequest
       * @return ApplyPhysicalConnectionLOAResponse
       */
      Models::ApplyPhysicalConnectionLOAResponse applyPhysicalConnectionLOA(const Models::ApplyPhysicalConnectionLOARequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with an instance in the same region.
       *
       * @description *   You can associate an EIP with an Elastic Compute Service (ECS) instance, a Classic Load Balancer (CLB) instance, a secondary elastic network interface (ENI), a NAT gateway, or a high-availability virtual IP address (HAVIP) in the same region. The ECS instance and CLB instance must be deployed in a virtual private cloud (VPC).
       * *   **AssociateEipAddress** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Associating** state, the EIP is being associated. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **InUse** state, the EIP is associated.
       * *   You cannot call the **AssociateEipAddress** operation to associate an EIP with multiple instances at a time.
       *
       * @param request AssociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddressWithOptions(const Models::AssociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with an instance in the same region.
       *
       * @description *   You can associate an EIP with an Elastic Compute Service (ECS) instance, a Classic Load Balancer (CLB) instance, a secondary elastic network interface (ENI), a NAT gateway, or a high-availability virtual IP address (HAVIP) in the same region. The ECS instance and CLB instance must be deployed in a virtual private cloud (VPC).
       * *   **AssociateEipAddress** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Associating** state, the EIP is being associated. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **InUse** state, the EIP is associated.
       * *   You cannot call the **AssociateEipAddress** operation to associate an EIP with multiple instances at a time.
       *
       * @param request AssociateEipAddressRequest
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddress(const Models::AssociateEipAddressRequest &request);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an instance in the same region.
       *
       * @description *   You can call the **AssociateEipAddressBatch** operation to associate EIPs with an instance in the same region. The instance must be a NAT gateway or a secondary elastic network interface (ENI). For more information about how to associate EIPs with other instances, see [AssociateEipAddress](https://help.aliyun.com/document_detail/120195.html).
       * *   **AssociateEipAddressBatch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Associating** state, the EIP is being associated. You can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **InUse** state, the EIP is associated.
       * *   You cannot call the **AssociateEipAddressBatch** operation to associate an EIP with multiple instances at a time.
       *
       * @param request AssociateEipAddressBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressBatchResponse
       */
      Models::AssociateEipAddressBatchResponse associateEipAddressBatchWithOptions(const Models::AssociateEipAddressBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an instance in the same region.
       *
       * @description *   You can call the **AssociateEipAddressBatch** operation to associate EIPs with an instance in the same region. The instance must be a NAT gateway or a secondary elastic network interface (ENI). For more information about how to associate EIPs with other instances, see [AssociateEipAddress](https://help.aliyun.com/document_detail/120195.html).
       * *   **AssociateEipAddressBatch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Associating** state, the EIP is being associated. You can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **InUse** state, the EIP is associated.
       * *   You cannot call the **AssociateEipAddressBatch** operation to associate an EIP with multiple instances at a time.
       *
       * @param request AssociateEipAddressBatchRequest
       * @return AssociateEipAddressBatchResponse
       */
      Models::AssociateEipAddressBatchResponse associateEipAddressBatch(const Models::AssociateEipAddressBatchRequest &request);

      /**
       * @summary Associates a high-availability virtual IP address (HaVip) with an Elastic Compute Service (ECS) instance or an elastic network interface (ENI).
       *
       * @description When you call this operation, take note of the following limits:
       * *   An HaVip immediately takes effect after it is associated. You do not need to restart the ECS instance. However, you must associate the HaVip with the ENI of the ECS instance.
       * *   The HaVip and ECS instance must belong to the same vSwitch.
       * *   You can associate an HaVip with at most two ECS instances.
       * *   The ECS instance must be in the **Running** or **Stopped** state.
       * *   The HaVip must be in the **Available** or **InUse** state.
       * *   The **AssociateHaVip** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   If the HaVip is in the **Associating** state, the HaVip is being associated.
       *     *   If the HaVip is in the **InUse** state, the HaVip is associated.
       * *   You cannot repeatedly call the **AssociateHaVip** operation to associate an HaVip within the specified period of time.
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a high-availability virtual IP address (HaVip) with an Elastic Compute Service (ECS) instance or an elastic network interface (ENI).
       *
       * @description When you call this operation, take note of the following limits:
       * *   An HaVip immediately takes effect after it is associated. You do not need to restart the ECS instance. However, you must associate the HaVip with the ENI of the ECS instance.
       * *   The HaVip and ECS instance must belong to the same vSwitch.
       * *   You can associate an HaVip with at most two ECS instances.
       * *   The ECS instance must be in the **Running** or **Stopped** state.
       * *   The HaVip must be in the **Available** or **InUse** state.
       * *   The **AssociateHaVip** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   If the HaVip is in the **Associating** state, the HaVip is being associated.
       *     *   If the HaVip is in the **InUse** state, the HaVip is associated.
       * *   You cannot repeatedly call the **AssociateHaVip** operation to associate an HaVip within the specified period of time.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Associates a network access control list (ACL) with a vSwitch.
       *
       * @description ## [](#)Description
       * *   **AssociateNetworkAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **BINDING** state, the network ACL is being associated.
       *     *   If the network ACL is in the **BINDED** state, the network ACL is associated.
       * *   You cannot repeatedly call the **AssociateNetworkAcl** operation to associate a network ACL within the specified period of time.
       *
       * @param request AssociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateNetworkAclResponse
       */
      Models::AssociateNetworkAclResponse associateNetworkAclWithOptions(const Models::AssociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a network access control list (ACL) with a vSwitch.
       *
       * @description ## [](#)Description
       * *   **AssociateNetworkAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **BINDING** state, the network ACL is being associated.
       *     *   If the network ACL is in the **BINDED** state, the network ACL is associated.
       * *   You cannot repeatedly call the **AssociateNetworkAcl** operation to associate a network ACL within the specified period of time.
       *
       * @param request AssociateNetworkAclRequest
       * @return AssociateNetworkAclResponse
       */
      Models::AssociateNetworkAclResponse associateNetworkAcl(const Models::AssociateNetworkAclRequest &request);

      /**
       * @summary Associates a virtual border router (VBR) with a specified Express Connect circuit.
       *
       * @param request AssociatePhysicalConnectionToVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociatePhysicalConnectionToVirtualBorderRouterResponse
       */
      Models::AssociatePhysicalConnectionToVirtualBorderRouterResponse associatePhysicalConnectionToVirtualBorderRouterWithOptions(const Models::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a virtual border router (VBR) with a specified Express Connect circuit.
       *
       * @param request AssociatePhysicalConnectionToVirtualBorderRouterRequest
       * @return AssociatePhysicalConnectionToVirtualBorderRouterResponse
       */
      Models::AssociatePhysicalConnectionToVirtualBorderRouterResponse associatePhysicalConnectionToVirtualBorderRouter(const Models::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request);

      /**
       * @summary Associates a custom route table with a vSwitch in the same VPC.
       *
       * @description **AssociateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       * *   If the vSwitch is in the **Pending** state, the route table is being associated with the vSwitch.
       * *   If the vSwitch is in the **Available** state, the route table is associated with the vSwitch.
       *
       * @param request AssociateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTableWithOptions(const Models::AssociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a custom route table with a vSwitch in the same VPC.
       *
       * @description **AssociateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       * *   If the vSwitch is in the **Pending** state, the route table is being associated with the vSwitch.
       * *   If the vSwitch is in the **Available** state, the route table is associated with the vSwitch.
       *
       * @param request AssociateRouteTableRequest
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTable(const Models::AssociateRouteTableRequest &request);

      /**
       * @summary Associates a gateway route table with an IPv4 gateway in the same virtual private cloud (VPC).
       *
       * @param request AssociateRouteTableWithGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTableWithGatewayResponse
       */
      Models::AssociateRouteTableWithGatewayResponse associateRouteTableWithGatewayWithOptions(const Models::AssociateRouteTableWithGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a gateway route table with an IPv4 gateway in the same virtual private cloud (VPC).
       *
       * @param request AssociateRouteTableWithGatewayRequest
       * @return AssociateRouteTableWithGatewayResponse
       */
      Models::AssociateRouteTableWithGatewayResponse associateRouteTableWithGateway(const Models::AssociateRouteTableWithGatewayRequest &request);

      /**
       * @summary Associates a route table with a gateway endpoint.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The gateway endpoint to be associated with the route table cannot be in one of the following states: **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * *   The route table cannot be in one of the following states: **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * *   The gateway endpoint and route table must belong to the same virtual private cloud (VPC).
       * *   The route table cannot be shared.
       * *   You cannot associate a gateway endpoint with a virtual border router (VBR) route table.
       * *   You can associate a gateway endpoint with at most 20 route tables at a time.
       * *   **AssociateRouteTablesWithVpcGatewayEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) operation to query whether a route table is associated with a gateway endpoint.
       *     *   If the **Associating** status is returned, the route table is being associated with the gateway endpoint.
       *     *   If the **Created** status is returned, the route table is associated with the gateway endpoint.
       * *   You cannot repeatedly call the **AssociateRouteTablesWithVpcGatewayEndpoint** operation within a specific period of time.
       *
       * @param request AssociateRouteTablesWithVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTablesWithVpcGatewayEndpointResponse
       */
      Models::AssociateRouteTablesWithVpcGatewayEndpointResponse associateRouteTablesWithVpcGatewayEndpointWithOptions(const Models::AssociateRouteTablesWithVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a route table with a gateway endpoint.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The gateway endpoint to be associated with the route table cannot be in one of the following states: **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * *   The route table cannot be in one of the following states: **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * *   The gateway endpoint and route table must belong to the same virtual private cloud (VPC).
       * *   The route table cannot be shared.
       * *   You cannot associate a gateway endpoint with a virtual border router (VBR) route table.
       * *   You can associate a gateway endpoint with at most 20 route tables at a time.
       * *   **AssociateRouteTablesWithVpcGatewayEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) operation to query whether a route table is associated with a gateway endpoint.
       *     *   If the **Associating** status is returned, the route table is being associated with the gateway endpoint.
       *     *   If the **Created** status is returned, the route table is associated with the gateway endpoint.
       * *   You cannot repeatedly call the **AssociateRouteTablesWithVpcGatewayEndpoint** operation within a specific period of time.
       *
       * @param request AssociateRouteTablesWithVpcGatewayEndpointRequest
       * @return AssociateRouteTablesWithVpcGatewayEndpointResponse
       */
      Models::AssociateRouteTablesWithVpcGatewayEndpointResponse associateRouteTablesWithVpcGatewayEndpoint(const Models::AssociateRouteTablesWithVpcGatewayEndpointRequest &request);

      /**
       * @summary Adds a secondary CIDR block to a virtual private cloud (VPC).
       *
       * @description ## [](#)
       * *   Take note of the following limits:
       *     *   Each VPC can contain up to five secondary IPv4 CIDR blocks.
       *     *   Each VPC can contain up to five secondary IPv6 CIDR blocks.
       * *   You cannot repeatedly call the **AssociateVpcCidrBlock** operation to add secondary CIDR blocks to a VPC within the specified period of time.
       *
       * @param request AssociateVpcCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateVpcCidrBlockResponse
       */
      Models::AssociateVpcCidrBlockResponse associateVpcCidrBlockWithOptions(const Models::AssociateVpcCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a secondary CIDR block to a virtual private cloud (VPC).
       *
       * @description ## [](#)
       * *   Take note of the following limits:
       *     *   Each VPC can contain up to five secondary IPv4 CIDR blocks.
       *     *   Each VPC can contain up to five secondary IPv6 CIDR blocks.
       * *   You cannot repeatedly call the **AssociateVpcCidrBlock** operation to add secondary CIDR blocks to a VPC within the specified period of time.
       *
       * @param request AssociateVpcCidrBlockRequest
       * @return AssociateVpcCidrBlockResponse
       */
      Models::AssociateVpcCidrBlockResponse associateVpcCidrBlock(const Models::AssociateVpcCidrBlockRequest &request);

      /**
       * @summary Associates a VPN gateway with a certificate.
       *
       * @description Before you associate a VPN gateway with an SSL certificate, take note of the following items:
       * *   You can associate only VPN gateways of the ShangMi (SM) type with SSL certificates. You need to associate a VPN gateway of the SM type with two SSL certificates, one as the encryption certificate and the other as the signature certificate.
       * *   The SSL certificates must use the SM algorithm.
       * *   You cannot specify one SSL certificate as both the encryption certificate and signature certificate for one VPN gateway.
       * *   **AssociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL certificate is being associated.
       *     *   If the VPN gateway is in the **active** state, the SSL certificate is being associated.
       * *   You cannot call **AssociateVpnGatewayWithCertificate** within a specific period of time.
       * ### [](#)Prerequisites
       * Make sure that you have two SSL certificates that use the SM algorithm in the Certificate Management Service console. For more information about SSL certificates, see [What is Certificate Management Service?](https://help.aliyun.com/document_detail/28535.html).
       *
       * @param request AssociateVpnGatewayWithCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateVpnGatewayWithCertificateResponse
       */
      Models::AssociateVpnGatewayWithCertificateResponse associateVpnGatewayWithCertificateWithOptions(const Models::AssociateVpnGatewayWithCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a VPN gateway with a certificate.
       *
       * @description Before you associate a VPN gateway with an SSL certificate, take note of the following items:
       * *   You can associate only VPN gateways of the ShangMi (SM) type with SSL certificates. You need to associate a VPN gateway of the SM type with two SSL certificates, one as the encryption certificate and the other as the signature certificate.
       * *   The SSL certificates must use the SM algorithm.
       * *   You cannot specify one SSL certificate as both the encryption certificate and signature certificate for one VPN gateway.
       * *   **AssociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL certificate is being associated.
       *     *   If the VPN gateway is in the **active** state, the SSL certificate is being associated.
       * *   You cannot call **AssociateVpnGatewayWithCertificate** within a specific period of time.
       * ### [](#)Prerequisites
       * Make sure that you have two SSL certificates that use the SM algorithm in the Certificate Management Service console. For more information about SSL certificates, see [What is Certificate Management Service?](https://help.aliyun.com/document_detail/28535.html).
       *
       * @param request AssociateVpnGatewayWithCertificateRequest
       * @return AssociateVpnGatewayWithCertificateResponse
       */
      Models::AssociateVpnGatewayWithCertificateResponse associateVpnGatewayWithCertificate(const Models::AssociateVpnGatewayWithCertificateRequest &request);

      /**
       * @summary 将DHCP选项集与VPC关联
       *
       * @description *   The **AttachDhcpOptionsSetToVpc** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a DHCP options set:
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being associated.
       *     *   If the DHCP options set is in the **InUse** state, the DHCP options set is associated.
       * *   You cannot repeatedly call the **AttachDhcpOptionsSetToVpc** operation to associate DHCP options sets with a VPC within the specified period of time.
       *
       * @param request AttachDhcpOptionsSetToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDhcpOptionsSetToVpcResponse
       */
      Models::AttachDhcpOptionsSetToVpcResponse attachDhcpOptionsSetToVpcWithOptions(const Models::AttachDhcpOptionsSetToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将DHCP选项集与VPC关联
       *
       * @description *   The **AttachDhcpOptionsSetToVpc** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a DHCP options set:
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being associated.
       *     *   If the DHCP options set is in the **InUse** state, the DHCP options set is associated.
       * *   You cannot repeatedly call the **AttachDhcpOptionsSetToVpc** operation to associate DHCP options sets with a VPC within the specified period of time.
       *
       * @param request AttachDhcpOptionsSetToVpcRequest
       * @return AttachDhcpOptionsSetToVpcResponse
       */
      Models::AttachDhcpOptionsSetToVpcResponse attachDhcpOptionsSetToVpc(const Models::AttachDhcpOptionsSetToVpcRequest &request);

      /**
       * @summary Associates a virtual border router (VBR) with a hosted connection.
       *
       * @param request AttachVbrToVpconnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVbrToVpconnResponse
       */
      Models::AttachVbrToVpconnResponse attachVbrToVpconnWithOptions(const Models::AttachVbrToVpconnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a virtual border router (VBR) with a hosted connection.
       *
       * @param request AttachVbrToVpconnRequest
       * @return AttachVbrToVpconnResponse
       */
      Models::AttachVbrToVpconnResponse attachVbrToVpconn(const Models::AttachVbrToVpconnRequest &request);

      /**
       * @summary Cancels the maximum bandwidth configured for an elastic IP address (EIP) that is associated with an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   After this operation is performed, the maximum bandwidth of the EIP equals that of the Internet Shared Bandwidth instance.
       * *   You cannot repeatedly call the **CancelCommonBandwidthPackageIpBandwidth** operation within a specific time period.
       *
       * @param request CancelCommonBandwidthPackageIpBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCommonBandwidthPackageIpBandwidthResponse
       */
      Models::CancelCommonBandwidthPackageIpBandwidthResponse cancelCommonBandwidthPackageIpBandwidthWithOptions(const Models::CancelCommonBandwidthPackageIpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the maximum bandwidth configured for an elastic IP address (EIP) that is associated with an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   After this operation is performed, the maximum bandwidth of the EIP equals that of the Internet Shared Bandwidth instance.
       * *   You cannot repeatedly call the **CancelCommonBandwidthPackageIpBandwidth** operation within a specific time period.
       *
       * @param request CancelCommonBandwidthPackageIpBandwidthRequest
       * @return CancelCommonBandwidthPackageIpBandwidthResponse
       */
      Models::CancelCommonBandwidthPackageIpBandwidthResponse cancelCommonBandwidthPackageIpBandwidth(const Models::CancelCommonBandwidthPackageIpBandwidthRequest &request);

      /**
       * @summary Cancels an Express Connect circuit before it is enabled. After you perform this operation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel only an Express Connect circuit that is in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state.
       *
       * @param request CancelPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnectionWithOptions(const Models::CancelPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an Express Connect circuit before it is enabled. After you perform this operation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel only an Express Connect circuit that is in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state.
       *
       * @param request CancelPhysicalConnectionRequest
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnection(const Models::CancelPhysicalConnectionRequest &request);

      /**
       * @summary Moves an Express Connect circuit to a new resource group.
       *
       * @description ## [](#)
       * You cannot repeatedly call the **ChangeResourceGroup** operation to modify the resource group of the same Express Connect circuit.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an Express Connect circuit to a new resource group.
       *
       * @description ## [](#)
       * You cannot repeatedly call the **ChangeResourceGroup** operation to modify the resource group of the same Express Connect circuit.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks whether a private IP address in a specified vSwitch is available.
       *
       * @param request CheckCanAllocateVpcPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCanAllocateVpcPrivateIpAddressResponse
       */
      Models::CheckCanAllocateVpcPrivateIpAddressResponse checkCanAllocateVpcPrivateIpAddressWithOptions(const Models::CheckCanAllocateVpcPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a private IP address in a specified vSwitch is available.
       *
       * @param request CheckCanAllocateVpcPrivateIpAddressRequest
       * @return CheckCanAllocateVpcPrivateIpAddressResponse
       */
      Models::CheckCanAllocateVpcPrivateIpAddressResponse checkCanAllocateVpcPrivateIpAddress(const Models::CheckCanAllocateVpcPrivateIpAddressRequest &request);

      /**
       * @summary Checks whether the region of an IPsec-VPN connection supports BGP.
       *
       * @param request CheckVpnBgpEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckVpnBgpEnabledResponse
       */
      Models::CheckVpnBgpEnabledResponse checkVpnBgpEnabledWithOptions(const Models::CheckVpnBgpEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the region of an IPsec-VPN connection supports BGP.
       *
       * @param request CheckVpnBgpEnabledRequest
       * @return CheckVpnBgpEnabledResponse
       */
      Models::CheckVpnBgpEnabledResponse checkVpnBgpEnabled(const Models::CheckVpnBgpEnabledRequest &request);

      /**
       * @summary Generates a report for an installed Express Connect circuit.
       *
       * @param request CompletePhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompletePhysicalConnectionLOAResponse
       */
      Models::CompletePhysicalConnectionLOAResponse completePhysicalConnectionLOAWithOptions(const Models::CompletePhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a report for an installed Express Connect circuit.
       *
       * @param request CompletePhysicalConnectionLOARequest
       * @return CompletePhysicalConnectionLOAResponse
       */
      Models::CompletePhysicalConnectionLOAResponse completePhysicalConnectionLOA(const Models::CompletePhysicalConnectionLOARequest &request);

      /**
       * @summary Changes the status of an Express Connect circuit to Confirmed.
       *
       * @param request ConfirmPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmPhysicalConnectionResponse
       */
      Models::ConfirmPhysicalConnectionResponse confirmPhysicalConnectionWithOptions(const Models::ConfirmPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of an Express Connect circuit to Confirmed.
       *
       * @param request ConfirmPhysicalConnectionRequest
       * @return ConfirmPhysicalConnectionResponse
       */
      Models::ConfirmPhysicalConnectionResponse confirmPhysicalConnection(const Models::ConfirmPhysicalConnectionRequest &request);

      /**
       * @summary Initiates a connection from the router interface of an initiator to the router interface of an accepter.
       *
       * @description After you call this operation, the router interface enters the **Connecting** state. When the connection is established, it enters the **Active** state.
       * When you call this operation, take note of the following items:
       * *   Only an initiator router interface in the **Idle** state can initiate a connection.
       * *   You can create only one pair of connected router interfaces between two routers.
       * *   You cannot initiate a connection if your Alibaba Cloud account has a router interface with overdue payments.
       *
       * @param request ConnectRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterfaceWithOptions(const Models::ConnectRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a connection from the router interface of an initiator to the router interface of an accepter.
       *
       * @description After you call this operation, the router interface enters the **Connecting** state. When the connection is established, it enters the **Active** state.
       * When you call this operation, take note of the following items:
       * *   Only an initiator router interface in the **Idle** state can initiate a connection.
       * *   You can create only one pair of connected router interfaces between two routers.
       * *   You cannot initiate a connection if your Alibaba Cloud account has a router interface with overdue payments.
       *
       * @param request ConnectRouterInterfaceRequest
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterface(const Models::ConnectRouterInterfaceRequest &request);

      /**
       * @summary Copies rules of a network access control list (ACL).
       *
       * @description ## [](#)Description
       * *   **CopyNetworkAclEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **Modifying** state, the rules of the network ACL are being copied.
       *     *   If the network ACL is in the **Available** state, the rules of the network ACL are copied.
       * *   You cannot repeatedly call the **CopyNetworkAclEntries** operation within the specified period of time.
       *
       * @param request CopyNetworkAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyNetworkAclEntriesResponse
       */
      Models::CopyNetworkAclEntriesResponse copyNetworkAclEntriesWithOptions(const Models::CopyNetworkAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies rules of a network access control list (ACL).
       *
       * @description ## [](#)Description
       * *   **CopyNetworkAclEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **Modifying** state, the rules of the network ACL are being copied.
       *     *   If the network ACL is in the **Available** state, the rules of the network ACL are copied.
       * *   You cannot repeatedly call the **CopyNetworkAclEntries** operation within the specified period of time.
       *
       * @param request CopyNetworkAclEntriesRequest
       * @return CopyNetworkAclEntriesResponse
       */
      Models::CopyNetworkAclEntriesResponse copyNetworkAclEntries(const Models::CopyNetworkAclEntriesRequest &request);

      /**
       * @summary Creates a BGP group for a virtual border router (VBR).
       *
       * @description You can connect a VBR to a data center through BGP. Each BGP group is associated with a VBR. You can add a BGP peer that needs to communicate with a VBR to a BGP group and advertise the BGP network in the VBR.
       * BGP groups are used to simplify BGP configurations. You can add BGP peers that use the same configurations to one BGP group. Before you start, you must create a BGP group with the requested autonomous system number (ASN).
       * When you call this operation, take note of the following limits:
       * *   You can specify only the data center that is connected to the VBR through an Express Connect circuit as a BGP peer.
       * *   VBRs support only BGP-4.
       * *   You can create at most eight BGP peers for each VBR.
       * *   Each BGP peer supports at most 110 dynamic routes.
       * *   The ASN of Alibaba Cloud is 45104. You can specify a 2-byte or 4-byte ASN for the data center.
       *
       * @param request CreateBgpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBgpGroupResponse
       */
      Models::CreateBgpGroupResponse createBgpGroupWithOptions(const Models::CreateBgpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a BGP group for a virtual border router (VBR).
       *
       * @description You can connect a VBR to a data center through BGP. Each BGP group is associated with a VBR. You can add a BGP peer that needs to communicate with a VBR to a BGP group and advertise the BGP network in the VBR.
       * BGP groups are used to simplify BGP configurations. You can add BGP peers that use the same configurations to one BGP group. Before you start, you must create a BGP group with the requested autonomous system number (ASN).
       * When you call this operation, take note of the following limits:
       * *   You can specify only the data center that is connected to the VBR through an Express Connect circuit as a BGP peer.
       * *   VBRs support only BGP-4.
       * *   You can create at most eight BGP peers for each VBR.
       * *   Each BGP peer supports at most 110 dynamic routes.
       * *   The ASN of Alibaba Cloud is 45104. You can specify a 2-byte or 4-byte ASN for the data center.
       *
       * @param request CreateBgpGroupRequest
       * @return CreateBgpGroupResponse
       */
      Models::CreateBgpGroupResponse createBgpGroup(const Models::CreateBgpGroupRequest &request);

      /**
       * @summary Adds a Border Gateway Protocol (BGP) peer to a BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeerWithOptions(const Models::CreateBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Border Gateway Protocol (BGP) peer to a BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeer(const Models::CreateBgpPeerRequest &request);

      /**
       * @summary Creates an Internet Shared Bandwidth instance.
       *
       * @param request CreateCommonBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommonBandwidthPackageResponse
       */
      Models::CreateCommonBandwidthPackageResponse createCommonBandwidthPackageWithOptions(const Models::CreateCommonBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Internet Shared Bandwidth instance.
       *
       * @param request CreateCommonBandwidthPackageRequest
       * @return CreateCommonBandwidthPackageResponse
       */
      Models::CreateCommonBandwidthPackageResponse createCommonBandwidthPackage(const Models::CreateCommonBandwidthPackageRequest &request);

      /**
       * @summary Creates a customer gateway.
       *
       * @param request CreateCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerGatewayResponse
       */
      Models::CreateCustomerGatewayResponse createCustomerGatewayWithOptions(const Models::CreateCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a customer gateway.
       *
       * @param request CreateCustomerGatewayRequest
       * @return CreateCustomerGatewayResponse
       */
      Models::CreateCustomerGatewayResponse createCustomerGateway(const Models::CreateCustomerGatewayRequest &request);

      /**
       * @summary Creates a default vSwitch.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The first IP address and last three IP addresses of a vSwitch CIDR block are reserved. For example, if the CIDR block of a vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved.
       * *   The number of instances in the default vSwitch cannot exceed the remaining number of instances supported by the VPC (15,000 minus the number of existing instances).
       * *   Default vSwitches do not support multicasting or broadcasting.
       * *   After you create a default vSwitch, you cannot modify its CIDR block.
       * *   **CreateDefaultVSwitch** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of a default vSwitch:
       *     *   If a default vSwitch is in the **Pending** state, it is being configured.
       *     *   If a default vSwitch is in the **Available** state, it is available.
       * *   If a default vSwitch already exists in a region, you cannot call this operation to create a default vSwitch in this region.
       * *   Before you create a default vSwitch, make sure that a default VPC is created. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
       *
       * @param request CreateDefaultVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultVSwitchResponse
       */
      Models::CreateDefaultVSwitchResponse createDefaultVSwitchWithOptions(const Models::CreateDefaultVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a default vSwitch.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The first IP address and last three IP addresses of a vSwitch CIDR block are reserved. For example, if the CIDR block of a vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved.
       * *   The number of instances in the default vSwitch cannot exceed the remaining number of instances supported by the VPC (15,000 minus the number of existing instances).
       * *   Default vSwitches do not support multicasting or broadcasting.
       * *   After you create a default vSwitch, you cannot modify its CIDR block.
       * *   **CreateDefaultVSwitch** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of a default vSwitch:
       *     *   If a default vSwitch is in the **Pending** state, it is being configured.
       *     *   If a default vSwitch is in the **Available** state, it is available.
       * *   If a default vSwitch already exists in a region, you cannot call this operation to create a default vSwitch in this region.
       * *   Before you create a default vSwitch, make sure that a default VPC is created. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
       *
       * @param request CreateDefaultVSwitchRequest
       * @return CreateDefaultVSwitchResponse
       */
      Models::CreateDefaultVSwitchResponse createDefaultVSwitch(const Models::CreateDefaultVSwitchRequest &request);

      /**
       * @summary Creates a default virtual private cloud (VPC).
       *
       * @description ## Usage notes
       * When you call this operation, take note of the following items:
       * *   After you create a default VPC, you cannot change its CIDR block. However, you can add secondary IPv4 CIDR blocks to it.
       * *   In each default VPC, cloud services can use a maximum of 60,000 private IP addresses. You cannot increase the quota.
       * *   After you create a default VPC, a vRouter and a route table are automatically created for the VPC.
       * *   At most three user CIDR blocks can be added to a VPC. If a user CIDR block includes another user CIDR block, the one with the shorter subnet mask takes effect. For example, if 10.0.0.0/8 and 10.1.0.0/16 are specified, only 10.0.0.0/8 takes effect.
       * *   **CreateDefaultVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task:
       *     *   If the default VPC is in the **Pending** state, the VPC is being configured.
       *     *   If the default VPC is in the **Available** state, the VPC is available.
       * *   You cannot repeatedly call the **CreateDefaultVpc** operation within a specific time period.
       * *   You can create only one default VPC in each region.
       *
       * @param request CreateDefaultVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultVpcResponse
       */
      Models::CreateDefaultVpcResponse createDefaultVpcWithOptions(const Models::CreateDefaultVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a default virtual private cloud (VPC).
       *
       * @description ## Usage notes
       * When you call this operation, take note of the following items:
       * *   After you create a default VPC, you cannot change its CIDR block. However, you can add secondary IPv4 CIDR blocks to it.
       * *   In each default VPC, cloud services can use a maximum of 60,000 private IP addresses. You cannot increase the quota.
       * *   After you create a default VPC, a vRouter and a route table are automatically created for the VPC.
       * *   At most three user CIDR blocks can be added to a VPC. If a user CIDR block includes another user CIDR block, the one with the shorter subnet mask takes effect. For example, if 10.0.0.0/8 and 10.1.0.0/16 are specified, only 10.0.0.0/8 takes effect.
       * *   **CreateDefaultVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task:
       *     *   If the default VPC is in the **Pending** state, the VPC is being configured.
       *     *   If the default VPC is in the **Available** state, the VPC is available.
       * *   You cannot repeatedly call the **CreateDefaultVpc** operation within a specific time period.
       * *   You can create only one default VPC in each region.
       *
       * @param request CreateDefaultVpcRequest
       * @return CreateDefaultVpcResponse
       */
      Models::CreateDefaultVpcResponse createDefaultVpc(const Models::CreateDefaultVpcRequest &request);

      /**
       * @summary Creates a DHCP options set.
       *
       * @description *   **CreateDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the DHCP options set is being configured.
       *     *   If the vSwitch is in the **Available** state, the DHCP options set is available.
       *
       * @param request CreateDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDhcpOptionsSetResponse
       */
      Models::CreateDhcpOptionsSetResponse createDhcpOptionsSetWithOptions(const Models::CreateDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DHCP options set.
       *
       * @description *   **CreateDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the DHCP options set is being configured.
       *     *   If the vSwitch is in the **Available** state, the DHCP options set is available.
       *
       * @param request CreateDhcpOptionsSetRequest
       * @return CreateDhcpOptionsSetResponse
       */
      Models::CreateDhcpOptionsSetResponse createDhcpOptionsSet(const Models::CreateDhcpOptionsSetRequest &request);

      /**
       * @summary Creates an Express Cloud Connect (ECC) instance.
       *
       * @param request CreateExpressCloudConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressCloudConnectionResponse
       */
      Models::CreateExpressCloudConnectionResponse createExpressCloudConnectionWithOptions(const Models::CreateExpressCloudConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Express Cloud Connect (ECC) instance.
       *
       * @param request CreateExpressCloudConnectionRequest
       * @return CreateExpressCloudConnectionResponse
       */
      Models::CreateExpressCloudConnectionResponse createExpressCloudConnection(const Models::CreateExpressCloudConnectionRequest &request);

      /**
       * @summary Creates a quality of service (QoS) policy.
       *
       * @param request CreateExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosResponse
       */
      Models::CreateExpressConnectTrafficQosResponse createExpressConnectTrafficQosWithOptions(const Models::CreateExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) policy.
       *
       * @param request CreateExpressConnectTrafficQosRequest
       * @return CreateExpressConnectTrafficQosResponse
       */
      Models::CreateExpressConnectTrafficQosResponse createExpressConnectTrafficQos(const Models::CreateExpressConnectTrafficQosRequest &request);

      /**
       * @summary Creates a quality of service (QoS) queue.
       *
       * @param request CreateExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosQueueResponse
       */
      Models::CreateExpressConnectTrafficQosQueueResponse createExpressConnectTrafficQosQueueWithOptions(const Models::CreateExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) queue.
       *
       * @param request CreateExpressConnectTrafficQosQueueRequest
       * @return CreateExpressConnectTrafficQosQueueResponse
       */
      Models::CreateExpressConnectTrafficQosQueueResponse createExpressConnectTrafficQosQueue(const Models::CreateExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Creates a quality of service (QoS) rule.
       *
       * @param request CreateExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosRuleResponse
       */
      Models::CreateExpressConnectTrafficQosRuleResponse createExpressConnectTrafficQosRuleWithOptions(const Models::CreateExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) rule.
       *
       * @param request CreateExpressConnectTrafficQosRuleRequest
       * @return CreateExpressConnectTrafficQosRuleResponse
       */
      Models::CreateExpressConnectTrafficQosRuleResponse createExpressConnectTrafficQosRule(const Models::CreateExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Creates a failover test.
       *
       * @description You cannot create a failover test in the following scenarios:
       * *   You have created a failover test in the region and its type is StartNow.
       * *   The Express Connect circuit or hosted connection has pending orders or overdue payments.
       * *   A failover test is already performed on the Express Connect circuit or hosted connection.
       * *   More than one hosted connection is created over the Express Connect circuit.
       * *   More than one cross-account VBR is created on the Express Connect circuit.
       * *   No VBR is associated with the hosted connection.
       * *   The VLAN ID of the hosted connection is set to 0.
       *
       * @param request CreateFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFailoverTestJobResponse
       */
      Models::CreateFailoverTestJobResponse createFailoverTestJobWithOptions(const Models::CreateFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a failover test.
       *
       * @description You cannot create a failover test in the following scenarios:
       * *   You have created a failover test in the region and its type is StartNow.
       * *   The Express Connect circuit or hosted connection has pending orders or overdue payments.
       * *   A failover test is already performed on the Express Connect circuit or hosted connection.
       * *   More than one hosted connection is created over the Express Connect circuit.
       * *   More than one cross-account VBR is created on the Express Connect circuit.
       * *   No VBR is associated with the hosted connection.
       * *   The VLAN ID of the hosted connection is set to 0.
       *
       * @param request CreateFailoverTestJobRequest
       * @return CreateFailoverTestJobResponse
       */
      Models::CreateFailoverTestJobResponse createFailoverTestJob(const Models::CreateFailoverTestJobRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @description **CreateFlowLog** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of the flow log.
       * *   If the flow log is in the **Activating** state, the flow log is being created.
       * *   If the flow log is in the **Active** state, the flow log is created and started.
       *
       * @param request CreateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLogWithOptions(const Models::CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log.
       *
       * @description **CreateFlowLog** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of the flow log.
       * *   If the flow log is in the **Activating** state, the flow log is being created.
       * *   If the flow log is in the **Active** state, the flow log is created and started.
       *
       * @param request CreateFlowLogRequest
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLog(const Models::CreateFlowLogRequest &request);

      /**
       * @summary Adds a DNAT entry to a DNAT table.
       *
       * @description ## [](#)
       * Each DNAT entry consists of the following parameters: **ExternalIp**, **ExternalPort**, **IpProtocol**, **InternalIp**, and **InternalPort**. After you add a DNAT entry, the NAT gateway forwards packets over the specified protocol from **ExternalIp:ExternalPort** to **InternalIp:InternalPort** and sends responses back through the same route.
       * When you call this operation, take note of the following limits:
       * *   **CreateForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   If the DNAT entry is in the **Pending** state, the system is adding the DNAT entry. You can only query the DNAT entry, but cannot perform other operations.
       *     *   If the DNAT entry is in the **Available** state, the DNAT entry is added.
       * *   You cannot repeatedly call the **CreateForwardEntry** operation to add a DNAT entry within a specific period of time.
       * *   All combinations of **ExternalIp**, **ExternalPort**, and **IpProtocol** used in DNAT entries must be unique. You cannot distribute requests to more than one Elastic Compute Service (ECS) instance if these requests are initiated from the same source IP address, received on the same port, and use the same protocol.
       * *   The combinations of **IpProtocol**, **InternalIp**, and **InternalPort** must be unique.
       * *   If one or more DNAT entries in the DNAT table are in the **Pending** or **Modifying** state, you cannot add DNAT entries to the DNAT table.
       * *   You can add at most 100 DNAT entries to a DNAT table.
       * *   For an elastic IP address (EIP) used by an Internet NAT gateway or a NAT IP address used by a Virtual Private Cloud (VPC) NAT gateway, take note of the following limit: If the IP address has IP mapping enabled and is specified in a DNAT entry, the IP address cannot be used by another DNAT or SNAT entry.
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a DNAT entry to a DNAT table.
       *
       * @description ## [](#)
       * Each DNAT entry consists of the following parameters: **ExternalIp**, **ExternalPort**, **IpProtocol**, **InternalIp**, and **InternalPort**. After you add a DNAT entry, the NAT gateway forwards packets over the specified protocol from **ExternalIp:ExternalPort** to **InternalIp:InternalPort** and sends responses back through the same route.
       * When you call this operation, take note of the following limits:
       * *   **CreateForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   If the DNAT entry is in the **Pending** state, the system is adding the DNAT entry. You can only query the DNAT entry, but cannot perform other operations.
       *     *   If the DNAT entry is in the **Available** state, the DNAT entry is added.
       * *   You cannot repeatedly call the **CreateForwardEntry** operation to add a DNAT entry within a specific period of time.
       * *   All combinations of **ExternalIp**, **ExternalPort**, and **IpProtocol** used in DNAT entries must be unique. You cannot distribute requests to more than one Elastic Compute Service (ECS) instance if these requests are initiated from the same source IP address, received on the same port, and use the same protocol.
       * *   The combinations of **IpProtocol**, **InternalIp**, and **InternalPort** must be unique.
       * *   If one or more DNAT entries in the DNAT table are in the **Pending** or **Modifying** state, you cannot add DNAT entries to the DNAT table.
       * *   You can add at most 100 DNAT entries to a DNAT table.
       * *   For an elastic IP address (EIP) used by an Internet NAT gateway or a NAT IP address used by a Virtual Private Cloud (VPC) NAT gateway, take note of the following limit: If the IP address has IP mapping enabled and is specified in a DNAT entry, the IP address cannot be used by another DNAT or SNAT entry.
       *
       * @param request CreateForwardEntryRequest
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntry(const Models::CreateForwardEntryRequest &request);

      /**
       * @summary Adds a FULLNAT entry to the FULLNAT table.
       *
       * @description *   **CreateFullNatEntry** is an asynchronous operation. After you send a request to call this operation, the system returns a FULLNAT entry and the FULLNAT entry is being added in the backend. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       *     *   If the FULLNAT entry is in the **Creating** state, the system is adding the FULLNAT entry. You can only query the status of the FULLNAT entry, but cannot perform other operations.
       *     *   If the FULLNAT entry is in the **Available** state, the FULLNAT entry is added.
       * *   You cannot repeatedly call the **CreateFullNatEntry** operation for the same VPN gateway within the specified period of time.
       *
       * @param request CreateFullNatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFullNatEntryResponse
       */
      Models::CreateFullNatEntryResponse createFullNatEntryWithOptions(const Models::CreateFullNatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a FULLNAT entry to the FULLNAT table.
       *
       * @description *   **CreateFullNatEntry** is an asynchronous operation. After you send a request to call this operation, the system returns a FULLNAT entry and the FULLNAT entry is being added in the backend. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       *     *   If the FULLNAT entry is in the **Creating** state, the system is adding the FULLNAT entry. You can only query the status of the FULLNAT entry, but cannot perform other operations.
       *     *   If the FULLNAT entry is in the **Available** state, the FULLNAT entry is added.
       * *   You cannot repeatedly call the **CreateFullNatEntry** operation for the same VPN gateway within the specified period of time.
       *
       * @param request CreateFullNatEntryRequest
       * @return CreateFullNatEntryResponse
       */
      Models::CreateFullNatEntryResponse createFullNatEntry(const Models::CreateFullNatEntryRequest &request);

      /**
       * @deprecated OpenAPI CreateGlobalAccelerationInstance is deprecated
       *
       * @summary Creates a Global Accelerator (GA) instance.
       *
       * @description ## Usage notes
       * You can call this operation to create only pay-as-you-go GA instances.
       *
       * @param request CreateGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalAccelerationInstanceResponse
       */
      Models::CreateGlobalAccelerationInstanceResponse createGlobalAccelerationInstanceWithOptions(const Models::CreateGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateGlobalAccelerationInstance is deprecated
       *
       * @summary Creates a Global Accelerator (GA) instance.
       *
       * @description ## Usage notes
       * You can call this operation to create only pay-as-you-go GA instances.
       *
       * @param request CreateGlobalAccelerationInstanceRequest
       * @return CreateGlobalAccelerationInstanceResponse
       */
      Models::CreateGlobalAccelerationInstanceResponse createGlobalAccelerationInstance(const Models::CreateGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Creates a high-availability virtual IP address (HaVip).
       *
       * @description **CreateHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of the task:
       * *   If the HaVip is in the **Creating** state, the HaVip is being created.
       * *   If the HaVip is in the **Available** state, the HaVip is created.
       *
       * @param request CreateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVipWithOptions(const Models::CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a high-availability virtual IP address (HaVip).
       *
       * @description **CreateHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of the task:
       * *   If the HaVip is in the **Creating** state, the HaVip is being created.
       * *   If the HaVip is in the **Available** state, the HaVip is created.
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates Express Connect circuits in high reliability mode. This improves the stability of multiple Express Connect circuits and prevents service interruptions caused by single points of failures (SPOFs).
       *
       * @param request CreateHighReliablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHighReliablePhysicalConnectionResponse
       */
      Models::CreateHighReliablePhysicalConnectionResponse createHighReliablePhysicalConnectionWithOptions(const Models::CreateHighReliablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates Express Connect circuits in high reliability mode. This improves the stability of multiple Express Connect circuits and prevents service interruptions caused by single points of failures (SPOFs).
       *
       * @param request CreateHighReliablePhysicalConnectionRequest
       * @return CreateHighReliablePhysicalConnectionResponse
       */
      Models::CreateHighReliablePhysicalConnectionResponse createHighReliablePhysicalConnection(const Models::CreateHighReliablePhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI CreateIPv6Translator is deprecated
       *
       * @summary Creates an IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIPv6TranslatorResponse
       */
      Models::CreateIPv6TranslatorResponse createIPv6TranslatorWithOptions(const Models::CreateIPv6TranslatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateIPv6Translator is deprecated
       *
       * @summary Creates an IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorRequest
       * @return CreateIPv6TranslatorResponse
       */
      Models::CreateIPv6TranslatorResponse createIPv6Translator(const Models::CreateIPv6TranslatorRequest &request);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorAclList is deprecated
       *
       * @summary Creates an access control list (ACL).
       *
       * @param request CreateIPv6TranslatorAclListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIPv6TranslatorAclListResponse
       */
      Models::CreateIPv6TranslatorAclListResponse createIPv6TranslatorAclListWithOptions(const Models::CreateIPv6TranslatorAclListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorAclList is deprecated
       *
       * @summary Creates an access control list (ACL).
       *
       * @param request CreateIPv6TranslatorAclListRequest
       * @return CreateIPv6TranslatorAclListResponse
       */
      Models::CreateIPv6TranslatorAclListResponse createIPv6TranslatorAclList(const Models::CreateIPv6TranslatorAclListRequest &request);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorEntry is deprecated
       *
       * @summary Adds an IPv6 mapping entry to an IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIPv6TranslatorEntryResponse
       */
      Models::CreateIPv6TranslatorEntryResponse createIPv6TranslatorEntryWithOptions(const Models::CreateIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorEntry is deprecated
       *
       * @summary Adds an IPv6 mapping entry to an IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorEntryRequest
       * @return CreateIPv6TranslatorEntryResponse
       */
      Models::CreateIPv6TranslatorEntryResponse createIPv6TranslatorEntry(const Models::CreateIPv6TranslatorEntryRequest &request);

      /**
       * @summary Creates an IPsec server.
       *
       * @description *   Before you create an IPsec server, you must create a VPN gateway and enable the SSL-VPN feature for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * *   Before you create an IPsec server, make sure that no IPsec-VPN connection exists on the VPN gateway. For more information, see [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       * *   **CreateIpsecServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being created.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is created.
       * *   You cannot repeatedly call **CreateIpsecServer** within the specified period of time.
       *
       * @param request CreateIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpsecServerResponse
       */
      Models::CreateIpsecServerResponse createIpsecServerWithOptions(const Models::CreateIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec server.
       *
       * @description *   Before you create an IPsec server, you must create a VPN gateway and enable the SSL-VPN feature for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * *   Before you create an IPsec server, make sure that no IPsec-VPN connection exists on the VPN gateway. For more information, see [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       * *   **CreateIpsecServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being created.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is created.
       * *   You cannot repeatedly call **CreateIpsecServer** within the specified period of time.
       *
       * @param request CreateIpsecServerRequest
       * @return CreateIpsecServerResponse
       */
      Models::CreateIpsecServerResponse createIpsecServer(const Models::CreateIpsecServerRequest &request);

      /**
       * @summary 创建IPv4网关。
       *
       * @description *   **CreateIpv4Gateway** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of an IPv4 gateway:
       *     *   If the IPv4 gateway is in the **Creating** state, the IPv4 gateway is being created.
       *     *   If the IPv4 gateway is in the **Created** state, the IPv4 gateway is created.
       * *   You cannot repeatedly call the **CreateIpv4Gateway** operation to create IPv4 gateways in a virtual private cloud (VPC) within the specified period of time.
       *
       * @param request CreateIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv4GatewayResponse
       */
      Models::CreateIpv4GatewayResponse createIpv4GatewayWithOptions(const Models::CreateIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IPv4网关。
       *
       * @description *   **CreateIpv4Gateway** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of an IPv4 gateway:
       *     *   If the IPv4 gateway is in the **Creating** state, the IPv4 gateway is being created.
       *     *   If the IPv4 gateway is in the **Created** state, the IPv4 gateway is created.
       * *   You cannot repeatedly call the **CreateIpv4Gateway** operation to create IPv4 gateways in a virtual private cloud (VPC) within the specified period of time.
       *
       * @param request CreateIpv4GatewayRequest
       * @return CreateIpv4GatewayResponse
       */
      Models::CreateIpv4GatewayResponse createIpv4Gateway(const Models::CreateIpv4GatewayRequest &request);

      /**
       * @summary You can call CreateIpv6EgressOnlyRule to create egress-only rules to enable ECS instances in VPCs that have IPv6 enabled to access IPv6 clients. However, IPv6 clients cannot access the ECS instances over the Internet.
       *
       * @description *   **CreateIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID and creates the rule in the background. You can call the [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) operation to query the status of the task.
       *     *   If the egress-only rule is in the **Creating** state, the egress-only rule is being created.
       *     *   If the egress-only rule is in the **Created** state, the egress-only rule is created.
       * *   You cannot repeatedly call the **CreateIpv6EgressOnlyRule** operation to add egress-only rules for an IPv6 address within the specified period of time.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRuleWithOptions(const Models::CreateIpv6EgressOnlyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call CreateIpv6EgressOnlyRule to create egress-only rules to enable ECS instances in VPCs that have IPv6 enabled to access IPv6 clients. However, IPv6 clients cannot access the ECS instances over the Internet.
       *
       * @description *   **CreateIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID and creates the rule in the background. You can call the [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) operation to query the status of the task.
       *     *   If the egress-only rule is in the **Creating** state, the egress-only rule is being created.
       *     *   If the egress-only rule is in the **Created** state, the egress-only rule is created.
       * *   You cannot repeatedly call the **CreateIpv6EgressOnlyRule** operation to add egress-only rules for an IPv6 address within the specified period of time.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRule(const Models::CreateIpv6EgressOnlyRuleRequest &request);

      /**
       * @summary IPv6 gateways are used to control the IPv6 traffic of virtual private clouds (VPCs). You can call the CreateIpv6Gateway operation to create IPv6 gateways.
       *
       * @description *   **CreateIpv6Gateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) operation to query the status of the task.
       *     *   If the IPv6 gateway is in the **Creating** state, the IPv6 gateway is being created.
       *     *   If the IPv6 gateway is in the **Created** state, the IPv6 gateway is created.
       * *   You cannot repeatedly call the **CreateIpv6Gateway** operation within a specific time period.
       *
       * @param request CreateIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6GatewayWithOptions(const Models::CreateIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IPv6 gateways are used to control the IPv6 traffic of virtual private clouds (VPCs). You can call the CreateIpv6Gateway operation to create IPv6 gateways.
       *
       * @description *   **CreateIpv6Gateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) operation to query the status of the task.
       *     *   If the IPv6 gateway is in the **Creating** state, the IPv6 gateway is being created.
       *     *   If the IPv6 gateway is in the **Created** state, the IPv6 gateway is created.
       * *   You cannot repeatedly call the **CreateIpv6Gateway** operation within a specific time period.
       *
       * @param request CreateIpv6GatewayRequest
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6Gateway(const Models::CreateIpv6GatewayRequest &request);

      /**
       * @summary Creates an enhanced Internet NAT gateway or a Virtual Private Cloud (VPC) NAT gateway.
       *
       * @description ## Usage notes
       * Before you call this operation, take note of the following items:
       * *   When you create an enhanced NAT gateway for the first time, the system automatically creates the service-linked role AliyunServiceRoleForNatgw. Then, the system attaches the permission policy AliyunServiceRolePolicyForNatgw to the role. This allows the NAT gateway to access other resources on Alibaba Cloud. For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/174251.html).
       * *   After you create an enhanced Internet NAT gateway, a route entry is automatically added to the route table of the VPC. The destination CIDR block of the route entry is 0.0.0.0/0 and the next hop is the NAT gateway. This ensures that traffic is routed to the NAT gateway.
       * *   **CreateNatGateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) operation to query the status of the task.
       *     *   If a NAT gateway is in the **Creating** state, the NAT gateway is being created. In this case, you can query the NAT gateway but cannot perform other operations.
       *     *   If a NAT gateway is in the **Available** state, the NAT gateway is created.
       * It takes 1 to 3 minutes to create a NAT gateway.
       *
       * @param tmpReq CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enhanced Internet NAT gateway or a Virtual Private Cloud (VPC) NAT gateway.
       *
       * @description ## Usage notes
       * Before you call this operation, take note of the following items:
       * *   When you create an enhanced NAT gateway for the first time, the system automatically creates the service-linked role AliyunServiceRoleForNatgw. Then, the system attaches the permission policy AliyunServiceRolePolicyForNatgw to the role. This allows the NAT gateway to access other resources on Alibaba Cloud. For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/174251.html).
       * *   After you create an enhanced Internet NAT gateway, a route entry is automatically added to the route table of the VPC. The destination CIDR block of the route entry is 0.0.0.0/0 and the next hop is the NAT gateway. This ensures that traffic is routed to the NAT gateway.
       * *   **CreateNatGateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) operation to query the status of the task.
       *     *   If a NAT gateway is in the **Creating** state, the NAT gateway is being created. In this case, you can query the NAT gateway but cannot perform other operations.
       *     *   If a NAT gateway is in the **Available** state, the NAT gateway is created.
       * It takes 1 to 3 minutes to create a NAT gateway.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a NAT IP address.
       *
       * @description ## [](#)
       * **CreateNatIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListNatIps](https://help.aliyun.com/document_detail/287000.html) operation to query the status of the task.
       * *   If a NAT IP address is in the **Creating** state, the NAT IP address is being created. In this case, you can only query the NAT IP address and cannot perform other operations.
       * *   If a NAT IP address is in the **Available** state, the NAT IP address is created.
       * You cannot repeatedly call the **CreateNatIp** operation to create a NAT IP address within a specific period of time.
       *
       * @param request CreateNatIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatIpResponse
       */
      Models::CreateNatIpResponse createNatIpWithOptions(const Models::CreateNatIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT IP address.
       *
       * @description ## [](#)
       * **CreateNatIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListNatIps](https://help.aliyun.com/document_detail/287000.html) operation to query the status of the task.
       * *   If a NAT IP address is in the **Creating** state, the NAT IP address is being created. In this case, you can only query the NAT IP address and cannot perform other operations.
       * *   If a NAT IP address is in the **Available** state, the NAT IP address is created.
       * You cannot repeatedly call the **CreateNatIp** operation to create a NAT IP address within a specific period of time.
       *
       * @param request CreateNatIpRequest
       * @return CreateNatIpResponse
       */
      Models::CreateNatIpResponse createNatIp(const Models::CreateNatIpRequest &request);

      /**
       * @summary Creates a NAT CIDR block.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **CreateNatIpCidr** operation to create a NAT CIDR block within the specified period of time.
       *
       * @param request CreateNatIpCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatIpCidrResponse
       */
      Models::CreateNatIpCidrResponse createNatIpCidrWithOptions(const Models::CreateNatIpCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT CIDR block.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **CreateNatIpCidr** operation to create a NAT CIDR block within the specified period of time.
       *
       * @param request CreateNatIpCidrRequest
       * @return CreateNatIpCidrResponse
       */
      Models::CreateNatIpCidrResponse createNatIpCidr(const Models::CreateNatIpCidrRequest &request);

      /**
       * @summary Creates a network ACL.
       *
       * @param request CreateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAclResponse
       */
      Models::CreateNetworkAclResponse createNetworkAclWithOptions(const Models::CreateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network ACL.
       *
       * @param request CreateNetworkAclRequest
       * @return CreateNetworkAclResponse
       */
      Models::CreateNetworkAclResponse createNetworkAcl(const Models::CreateNetworkAclRequest &request);

      /**
       * @summary Applies for an Express Connect circuit.
       *
       * @description You can apply for a dedicated Express Connect circuit for yourself or create a hosted connection for a tenant. After your application is approved, the Express Connect circuit changes to the **Initial** state. You can contact the connectivity provider to start construction.
       * When you call this operation, take note of the following limits:
       * *   If your Alibaba Cloud account has more than five Express Connect circuits that are not in the **Enabled** state, you cannot apply for another Express Connect circuit.
       * *   If your Alibaba Cloud account has an Express Connect circuit with overdue payments, you cannot apply for another Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnectionWithOptions(const Models::CreatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an Express Connect circuit.
       *
       * @description You can apply for a dedicated Express Connect circuit for yourself or create a hosted connection for a tenant. After your application is approved, the Express Connect circuit changes to the **Initial** state. You can contact the connectivity provider to start construction.
       * When you call this operation, take note of the following limits:
       * *   If your Alibaba Cloud account has more than five Express Connect circuits that are not in the **Enabled** state, you cannot apply for another Express Connect circuit.
       * *   If your Alibaba Cloud account has an Express Connect circuit with overdue payments, you cannot apply for another Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionRequest
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnection(const Models::CreatePhysicalConnectionRequest &request);

      /**
       * @summary Creates an order for resource occupation of an Express Connect circuit.
       *
       * @description >  You can call this operation only when the Express Connect circuit is in the **Complete** state.
       *
       * @param request CreatePhysicalConnectionOccupancyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionOccupancyOrderResponse
       */
      Models::CreatePhysicalConnectionOccupancyOrderResponse createPhysicalConnectionOccupancyOrderWithOptions(const Models::CreatePhysicalConnectionOccupancyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order for resource occupation of an Express Connect circuit.
       *
       * @description >  You can call this operation only when the Express Connect circuit is in the **Complete** state.
       *
       * @param request CreatePhysicalConnectionOccupancyOrderRequest
       * @return CreatePhysicalConnectionOccupancyOrderResponse
       */
      Models::CreatePhysicalConnectionOccupancyOrderResponse createPhysicalConnectionOccupancyOrder(const Models::CreatePhysicalConnectionOccupancyOrderRequest &request);

      /**
       * @summary Creates an order for initial installation of an Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionSetupOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionSetupOrderResponse
       */
      Models::CreatePhysicalConnectionSetupOrderResponse createPhysicalConnectionSetupOrderWithOptions(const Models::CreatePhysicalConnectionSetupOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order for initial installation of an Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionSetupOrderRequest
       * @return CreatePhysicalConnectionSetupOrderResponse
       */
      Models::CreatePhysicalConnectionSetupOrderResponse createPhysicalConnectionSetupOrder(const Models::CreatePhysicalConnectionSetupOrderRequest &request);

      /**
       * @summary Creates an IP address pool.
       *
       * @description By default, the IP address pool feature is unavailable. You can apply for the privilege to use the **IP address pool feature** in the Quota Center console. For more information, see the "Request a quota increase in the Quota Center console" section in the [Manage EIP quotas](https://help.aliyun.com/document_detail/108213.html) topic.
       *
       * @param request CreatePublicIpAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublicIpAddressPoolResponse
       */
      Models::CreatePublicIpAddressPoolResponse createPublicIpAddressPoolWithOptions(const Models::CreatePublicIpAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address pool.
       *
       * @description By default, the IP address pool feature is unavailable. You can apply for the privilege to use the **IP address pool feature** in the Quota Center console. For more information, see the "Request a quota increase in the Quota Center console" section in the [Manage EIP quotas](https://help.aliyun.com/document_detail/108213.html) topic.
       *
       * @param request CreatePublicIpAddressPoolRequest
       * @return CreatePublicIpAddressPoolResponse
       */
      Models::CreatePublicIpAddressPoolResponse createPublicIpAddressPool(const Models::CreatePublicIpAddressPoolRequest &request);

      /**
       * @summary Adds custom route entries to the route table of a vRouter in a virtual private cloud (VPC).
       *
       * @description ## [](#)References
       * *   **CreateRouteEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route entry is in the **Creating** state, the route entry is being created.
       *     *   If the route entry is in the **Created** state, the route entry is created.
       * *   You cannot repeatedly call the **CreateRouteEntries** operation to create the same route entry within the specified period of time.
       * **When you call this operation to add custom route entries to the route table of a vRouter, take note of the following items:**
       * *   A route table can contain up to 200 custom route entries.
       * *   The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be the same as or overlap with the CIDR block of a vSwitch in the VPC.
       * *   The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or its subnets.
       * *   The destination CIDR blocks (**DstCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DstCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHop**).
       * *   The next hop (**NextHop**) of a custom route entry must belong to the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntriesWithOptions(const Models::CreateRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds custom route entries to the route table of a vRouter in a virtual private cloud (VPC).
       *
       * @description ## [](#)References
       * *   **CreateRouteEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route entry is in the **Creating** state, the route entry is being created.
       *     *   If the route entry is in the **Created** state, the route entry is created.
       * *   You cannot repeatedly call the **CreateRouteEntries** operation to create the same route entry within the specified period of time.
       * **When you call this operation to add custom route entries to the route table of a vRouter, take note of the following items:**
       * *   A route table can contain up to 200 custom route entries.
       * *   The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be the same as or overlap with the CIDR block of a vSwitch in the VPC.
       * *   The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or its subnets.
       * *   The destination CIDR blocks (**DstCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DstCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHop**).
       * *   The next hop (**NextHop**) of a custom route entry must belong to the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntries(const Models::CreateRouteEntriesRequest &request);

      /**
       * @summary Creates a custom route entry in the route table of a VRouter or virtual border router (VBR).
       *
       * @description *   **CreateRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task:
       *     *   If a route is in the **Creating** state, the route is being added.
       *     *   If a route is in the **Created** state, the route is added.
       * *   You cannot repeatedly call **CreateRouteEntry** within a specific period of time.
       * **When you call this operation to add a custom route entry to the route table of a vRouter, take note of the following limits:**
       * >  When you add a route entry from a prefix list, the quota usage is calculated by adding the number of existing route entries and the maximum number of route entries of the prefix list.
       * *   A route table can contain up to 200 custom route entries.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as or be a subset of the CIDR block of a vSwitch in the virtual private cloud (VPC). The destination CIDR block can contain the CIDR block of a vSwitch.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or a subset of it.
       * *   The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DestinationCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHopId**).
       * *   The next hop (**NextHopId**) of a custom route entry must in the same VPC as the route table.
       * *   Equal-cost multi-path (ECMP) routing can be configured by specifying the **NextHopList** parameter.
       *     *   When you add non-ECMP route entries, you must specify **DestinationCidrBlock**, **NextHopType**, and **NextHopId**, and you must not specify **NextHopList**.
       *     *   When you add route entries for ECMP routing, you must specify **DestinationCidrBlock** and **NextHopList**, and you must not specify **NextHopType** or **NextHopId**.
       * **When you call this operation to add a custom route entry to the route table of a VBR, take note of the following limits:**
       * *   A route table can contain up to 200 custom route entries.
       * *   **NextHopList** is not supported.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or a subset of it.
       * *   The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DestinationCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHopId**).
       * *   The next hop (**NextHopId**) of a custom route entry must be a router interface associated with the VBR.
       * *   You can add route entries only when the VBR is in the **Active** state, and the Express Connect circuit associated with the VBR is in the **Enabled** state and is not locked due to overdue payments.
       * *   Only non-ECMP route entries are supported. When you add non-ECMP route entries, you must specify **DestinationCidrBlock**, **NextHopType**, and **NextHopId**, and you cannot specify **NextHopList**.
       *
       * @param request CreateRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntryWithOptions(const Models::CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route entry in the route table of a VRouter or virtual border router (VBR).
       *
       * @description *   **CreateRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task:
       *     *   If a route is in the **Creating** state, the route is being added.
       *     *   If a route is in the **Created** state, the route is added.
       * *   You cannot repeatedly call **CreateRouteEntry** within a specific period of time.
       * **When you call this operation to add a custom route entry to the route table of a vRouter, take note of the following limits:**
       * >  When you add a route entry from a prefix list, the quota usage is calculated by adding the number of existing route entries and the maximum number of route entries of the prefix list.
       * *   A route table can contain up to 200 custom route entries.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as or be a subset of the CIDR block of a vSwitch in the virtual private cloud (VPC). The destination CIDR block can contain the CIDR block of a vSwitch.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or a subset of it.
       * *   The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DestinationCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHopId**).
       * *   The next hop (**NextHopId**) of a custom route entry must in the same VPC as the route table.
       * *   Equal-cost multi-path (ECMP) routing can be configured by specifying the **NextHopList** parameter.
       *     *   When you add non-ECMP route entries, you must specify **DestinationCidrBlock**, **NextHopType**, and **NextHopId**, and you must not specify **NextHopList**.
       *     *   When you add route entries for ECMP routing, you must specify **DestinationCidrBlock** and **NextHopList**, and you must not specify **NextHopType** or **NextHopId**.
       * **When you call this operation to add a custom route entry to the route table of a VBR, take note of the following limits:**
       * *   A route table can contain up to 200 custom route entries.
       * *   **NextHopList** is not supported.
       * *   The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be 100.64.0.0/10 or a subset of it.
       * *   The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * *   If you do not include the mask length when you specify the destination CIDR block (**DestinationCidrBlock**), the destination CIDR block is considered a host IP address whose mask length is 32 bits.
       * *   Multiple custom route entries can point to the same next hop (**NextHopId**).
       * *   The next hop (**NextHopId**) of a custom route entry must be a router interface associated with the VBR.
       * *   You can add route entries only when the VBR is in the **Active** state, and the Express Connect circuit associated with the VBR is in the **Enabled** state and is not locked due to overdue payments.
       * *   Only non-ECMP route entries are supported. When you add non-ECMP route entries, you must specify **DestinationCidrBlock**, **NextHopType**, and **NextHopId**, and you cannot specify **NextHopList**.
       *
       * @param request CreateRouteEntryRequest
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntry(const Models::CreateRouteEntryRequest &request);

      /**
       * @summary Creates a custom route table.
       *
       * @description *   **CreateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the operation in the background. You can call the [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) operation to query the status of the task.
       *     *   If the custom route table is in the **Creating** state, the custom route table is being created.
       *     *   If the custom route table is in the **Created** state, the custom route table is created.
       * *   You cannot repeatedly call the **CreateRouteTable** operation within the specified period of time.
       *
       * @param request CreateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTableWithOptions(const Models::CreateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route table.
       *
       * @description *   **CreateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the operation in the background. You can call the [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) operation to query the status of the task.
       *     *   If the custom route table is in the **Creating** state, the custom route table is being created.
       *     *   If the custom route table is in the **Created** state, the custom route table is created.
       * *   You cannot repeatedly call the **CreateRouteTable** operation within the specified period of time.
       *
       * @param request CreateRouteTableRequest
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTable(const Models::CreateRouteTableRequest &request);

      /**
       * @summary Create Route Target Group
       *
       * @description - The **CreateRouteTargetGroup** interface is an asynchronous interface, meaning the system will return an instance ID, but the route target group instance has not yet been fully created, and the system\\"s background creation task is still in progress. You can call **ListRouteTargetGroup** to query the creation status of the route target group:
       *     - When the route target group is in the **Pending** state, it indicates that the route target group is being created.
       *     - When the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, it indicates that the route target group has been created.
       * - **Active-Standby Mode**: When creating a route target group, you need to configure primary and standby instances that are located in different availability zones and have the same type.
       * - **Primary Instance**: The weight is 100. Under normal circumstances, it carries all traffic and takes effect when the health check is normal.
       * - **Standby Instance**: The weight is 0. It takes over the traffic after the primary instance fails, serving as a disaster recovery backup.
       *
       * @param request CreateRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTargetGroupResponse
       */
      Models::CreateRouteTargetGroupResponse createRouteTargetGroupWithOptions(const Models::CreateRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Route Target Group
       *
       * @description - The **CreateRouteTargetGroup** interface is an asynchronous interface, meaning the system will return an instance ID, but the route target group instance has not yet been fully created, and the system\\"s background creation task is still in progress. You can call **ListRouteTargetGroup** to query the creation status of the route target group:
       *     - When the route target group is in the **Pending** state, it indicates that the route target group is being created.
       *     - When the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, it indicates that the route target group has been created.
       * - **Active-Standby Mode**: When creating a route target group, you need to configure primary and standby instances that are located in different availability zones and have the same type.
       * - **Primary Instance**: The weight is 100. Under normal circumstances, it carries all traffic and takes effect when the health check is normal.
       * - **Standby Instance**: The weight is 0. It takes over the traffic after the primary instance fails, serving as a disaster recovery backup.
       *
       * @param request CreateRouteTargetGroupRequest
       * @return CreateRouteTargetGroupResponse
       */
      Models::CreateRouteTargetGroupResponse createRouteTargetGroup(const Models::CreateRouteTargetGroupRequest &request);

      /**
       * @summary Creates a router interface.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can create only one pair of interfaces to be connected between two routers.
       * *   You can create a maximum of five router interfaces for a router.
       * *   If your Alibaba Cloud account has a router interface with overdue payments, you cannot create new router interfaces.
       * *   Each destination CIDR block of route entries in the same route table must be unique.
       * *   A virtual border router (VBR) can serve only as a requester. The VBR must be in the Activated state.
       * *   You can call this operation to create subscription and pay-as-you-go router interfaces.
       *
       * @param request CreateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterfaceWithOptions(const Models::CreateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a router interface.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can create only one pair of interfaces to be connected between two routers.
       * *   You can create a maximum of five router interfaces for a router.
       * *   If your Alibaba Cloud account has a router interface with overdue payments, you cannot create new router interfaces.
       * *   Each destination CIDR block of route entries in the same route table must be unique.
       * *   A virtual border router (VBR) can serve only as a requester. The VBR must be in the Activated state.
       * *   You can call this operation to create subscription and pay-as-you-go router interfaces.
       *
       * @param request CreateRouterInterfaceRequest
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterface(const Models::CreateRouterInterfaceRequest &request);

      /**
       * @summary Adds an SNAT entry to an SNAT table.
       *
       * @description You can call this operation to add SNAT entries to Internet NAT gateways and Virtual Private Cloud (VPC) NAT gateways. In this topic, a **NAT** gateway refers to both gateway types.
       * Before you call this operation, take note of the following limits:
       * *   **CreateSnatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of the task.
       *     *   If the SNAT entry is in the **Pending** state, the system is adding the SNAT entry. You can only query the status of the SNAT entry, and cannot perform other operations.
       *     *   If the SNAT entry is in the **Available** state, the SNAT entry is added.
       * *   You cannot repeatedly call the **CreateSnatEntry** operation to add an SNAT entry to an SNAT table within the specified period of time.
       * *   The vSwitch and Elastic Compute Service (ECS) instance specified in an SNAT entry must be created in the VPC where the NAT gateway is deployed.
       * *   Each vSwitch or ECS instance can be specified in only one SNAT entry.
       * *   If a high-availability virtual IP address (HAVIP) exists in a vSwitch, you cannot create SNAT entries.
       *
       * @param request CreateSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntryWithOptions(const Models::CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an SNAT entry to an SNAT table.
       *
       * @description You can call this operation to add SNAT entries to Internet NAT gateways and Virtual Private Cloud (VPC) NAT gateways. In this topic, a **NAT** gateway refers to both gateway types.
       * Before you call this operation, take note of the following limits:
       * *   **CreateSnatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of the task.
       *     *   If the SNAT entry is in the **Pending** state, the system is adding the SNAT entry. You can only query the status of the SNAT entry, and cannot perform other operations.
       *     *   If the SNAT entry is in the **Available** state, the SNAT entry is added.
       * *   You cannot repeatedly call the **CreateSnatEntry** operation to add an SNAT entry to an SNAT table within the specified period of time.
       * *   The vSwitch and Elastic Compute Service (ECS) instance specified in an SNAT entry must be created in the VPC where the NAT gateway is deployed.
       * *   Each vSwitch or ECS instance can be specified in only one SNAT entry.
       * *   If a high-availability virtual IP address (HAVIP) exists in a vSwitch, you cannot create SNAT entries.
       *
       * @param request CreateSnatEntryRequest
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntry(const Models::CreateSnatEntryRequest &request);

      /**
       * @summary Creates an SSL client certificate.
       *
       * @description Before you create an SSL client certificate, make sure that an SSL server is created on the VPN gateway. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCertWithOptions(const Models::CreateSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSL client certificate.
       *
       * @description Before you create an SSL client certificate, make sure that an SSL server is created on the VPN gateway. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCert(const Models::CreateSslVpnClientCertRequest &request);

      /**
       * @summary Creates an SSL server.
       *
       * @description *   **CreateSslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being created.
       *     *   If the VPN gateway is in the **active** state, the SSL server is created.
       * *   You cannot repeatedly call the **CreateSslVpnServer** operation within the specified period of time.
       * ### [](#prerequisite)[](#)Prerequisite
       * *   A VPN gateway is created, and the SSL-VPN feature is enabled for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html) .
       * *   If you want to enable two-factor authentication for the SSL server, make sure that the VPN gateway supports two-factor authentication. You may need to upgrade the VPN gateway. For more information, see [Two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       *
       * @param request CreateSslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSslVpnServerResponse
       */
      Models::CreateSslVpnServerResponse createSslVpnServerWithOptions(const Models::CreateSslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSL server.
       *
       * @description *   **CreateSslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being created.
       *     *   If the VPN gateway is in the **active** state, the SSL server is created.
       * *   You cannot repeatedly call the **CreateSslVpnServer** operation within the specified period of time.
       * ### [](#prerequisite)[](#)Prerequisite
       * *   A VPN gateway is created, and the SSL-VPN feature is enabled for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html) .
       * *   If you want to enable two-factor authentication for the SSL server, make sure that the VPN gateway supports two-factor authentication. You may need to upgrade the VPN gateway. For more information, see [Two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       *
       * @param request CreateSslVpnServerRequest
       * @return CreateSslVpnServerResponse
       */
      Models::CreateSslVpnServerResponse createSslVpnServer(const Models::CreateSslVpnServerRequest &request);

      /**
       * @summary Creates a filter for traffic mirror.
       *
       * @description **CreateTrafficMirrorFilter** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of the task.
       * *   If the filter is in the **Creating** state, the filter is being created.
       * *   If the filter is in the **Created** state, the filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilterWithOptions(const Models::CreateTrafficMirrorFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a filter for traffic mirror.
       *
       * @description **CreateTrafficMirrorFilter** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of the task.
       * *   If the filter is in the **Creating** state, the filter is being created.
       * *   If the filter is in the **Created** state, the filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilter(const Models::CreateTrafficMirrorFilterRequest &request);

      /**
       * @summary Creates an inbound or outbound rule for traffic mirror.
       *
       * @description *   **CreateTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the task.
       *     *   If the inbound or outbound rule is in the **Creating** state, the rule is being created.
       *     *   If the inbound or outbound rule is in the **Created** state, the rule is created.
       * *   You cannot call **CreateTrafficMirrorFilterRules** within the specified period of time.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRulesWithOptions(const Models::CreateTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an inbound or outbound rule for traffic mirror.
       *
       * @description *   **CreateTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the task.
       *     *   If the inbound or outbound rule is in the **Creating** state, the rule is being created.
       *     *   If the inbound or outbound rule is in the **Created** state, the rule is created.
       * *   You cannot call **CreateTrafficMirrorFilterRules** within the specified period of time.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRules(const Models::CreateTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Creates a traffic mirror session.
       *
       * @description **CreateTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the task.
       * *   If the traffic mirror session is in the **Creating** state, it is being created.
       * *   If the traffic mirror session is in the **Created** state, it is created.
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSessionWithOptions(const Models::CreateTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic mirror session.
       *
       * @description **CreateTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the task.
       * *   If the traffic mirror session is in the **Creating** state, it is being created.
       * *   If the traffic mirror session is in the **Created** state, it is created.
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSession(const Models::CreateTrafficMirrorSessionRequest &request);

      /**
       * @summary 创建交换机。
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can create at most 150 vSwitches in a virtual private cloud (VPC).
       * *   The first IP address and last three IP addresses of each vSwitch CIDR block are reserved. For example, if the CIDR block of a vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved.
       * *   The number of instances in a vSwitch cannot exceed the remaining capacity of the VPC. The remaining capacity is the difference between 15,000 and the current number of instances.
       * *   Each instance can belong to only one vSwitch.
       * *   vSwitches do not support multicast or broadcast.
       * *   After you create a vSwitch, you cannot modify its CIDR block.
       * *   **CreateVSwitch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the vSwitch is being configured.
       *     *   If the vSwitch is in the **Available** state, the vSwitch is available.
       * *   You cannot repeatedly call the **CreateVSwitch** operation to create a vSwitch in a VPC within the specified period of time.
       *
       * @param request CreateVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitchWithOptions(const Models::CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建交换机。
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can create at most 150 vSwitches in a virtual private cloud (VPC).
       * *   The first IP address and last three IP addresses of each vSwitch CIDR block are reserved. For example, if the CIDR block of a vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved.
       * *   The number of instances in a vSwitch cannot exceed the remaining capacity of the VPC. The remaining capacity is the difference between 15,000 and the current number of instances.
       * *   Each instance can belong to only one vSwitch.
       * *   vSwitches do not support multicast or broadcast.
       * *   After you create a vSwitch, you cannot modify its CIDR block.
       * *   **CreateVSwitch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the vSwitch is being configured.
       *     *   If the vSwitch is in the **Available** state, the vSwitch is available.
       * *   You cannot repeatedly call the **CreateVSwitch** operation to create a vSwitch in a VPC within the specified period of time.
       *
       * @param request CreateVSwitchRequest
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitch(const Models::CreateVSwitchRequest &request);

      /**
       * @summary Creates a reserved CIDR block for a vSwitch.
       *
       * @description ## [](#)Description
       * Take note of the following items:
       * *   You can create at most 10 reserved IPv4 CIDR blocks and 10 reserved IPv6 CIDR blocks for each vSwitch in a virtual private cloud (VPC).
       * *   After you create a reserved CIDR block for a vSwitch, the CIDR block cannot contain the IP address of the subnet gateway of the VPC to which the vSwitch belongs.
       * *   **CreateVSwitchCidrReservation** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the status of the task:
       *     *   If the vSwitch is in the **Assigning** state, the reserved CIDR block is being created.
       *     *   If the vSwitch is in the **Assigned** state, the reserved CIDR block is created.
       * *   When you create a reserved IPv4 CIDR block for a vSwitch, the first IP address and the last three IP addresses of the vSwitch are reserved by the system. The four IP addresses will not be allocated.
       * *   When you create a reserved IPv6 CIDR block for a vSwitch, the first IP address and the last nine IP addresses of the vSwitch are reserved by the system. The 10 IP addresses will not be allocated. For example, if you create a reserved IPv4 CIDR block for a vSwitch whose CIDR block is 192.168.1.0/24, the reserved CIDR block cannot contain the following IP addresses: 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       *
       * @param request CreateVSwitchCidrReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchCidrReservationResponse
       */
      Models::CreateVSwitchCidrReservationResponse createVSwitchCidrReservationWithOptions(const Models::CreateVSwitchCidrReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reserved CIDR block for a vSwitch.
       *
       * @description ## [](#)Description
       * Take note of the following items:
       * *   You can create at most 10 reserved IPv4 CIDR blocks and 10 reserved IPv6 CIDR blocks for each vSwitch in a virtual private cloud (VPC).
       * *   After you create a reserved CIDR block for a vSwitch, the CIDR block cannot contain the IP address of the subnet gateway of the VPC to which the vSwitch belongs.
       * *   **CreateVSwitchCidrReservation** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the status of the task:
       *     *   If the vSwitch is in the **Assigning** state, the reserved CIDR block is being created.
       *     *   If the vSwitch is in the **Assigned** state, the reserved CIDR block is created.
       * *   When you create a reserved IPv4 CIDR block for a vSwitch, the first IP address and the last three IP addresses of the vSwitch are reserved by the system. The four IP addresses will not be allocated.
       * *   When you create a reserved IPv6 CIDR block for a vSwitch, the first IP address and the last nine IP addresses of the vSwitch are reserved by the system. The 10 IP addresses will not be allocated. For example, if you create a reserved IPv4 CIDR block for a vSwitch whose CIDR block is 192.168.1.0/24, the reserved CIDR block cannot contain the following IP addresses: 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       *
       * @param request CreateVSwitchCidrReservationRequest
       * @return CreateVSwitchCidrReservationResponse
       */
      Models::CreateVSwitchCidrReservationResponse createVSwitchCidrReservation(const Models::CreateVSwitchCidrReservationRequest &request);

      /**
       * @summary Creates a virtual border router (VBR) failover group.
       *
       * @param request CreateVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVbrHaResponse
       */
      Models::CreateVbrHaResponse createVbrHaWithOptions(const Models::CreateVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual border router (VBR) failover group.
       *
       * @param request CreateVbrHaRequest
       * @return CreateVbrHaResponse
       */
      Models::CreateVbrHaResponse createVbrHa(const Models::CreateVbrHaRequest &request);

      /**
       * @summary Adds a destination-based route for an IPsec-VPN connection.
       *
       * @description *   The IPsec-VPN connection must be associated with a transit router. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).
       * *   You cannot create a destination-based route whose destination CIDR block is 0.0.0.0/0.
       * *   Do not add a destination-based route whose destination CIDR block is 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10 or belongs to 100.64.0.0/10. Such a route will make the console fail to display the status of the IPsec-VPN connection or cause IPsec negotiation failures.
       * *   **CreateVcoRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the status of the task.
       *     *   If the IPsec-VPN connection is in the **updating** state, the destination-based route is being created.
       *     *   If the IPsec-VPN connection is in the **attached** state, the destination-based route is created.
       * *   You cannot repeatedly call **CreateVcoRouteEntry** within the specified period of time.
       *
       * @param request CreateVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVcoRouteEntryResponse
       */
      Models::CreateVcoRouteEntryResponse createVcoRouteEntryWithOptions(const Models::CreateVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a destination-based route for an IPsec-VPN connection.
       *
       * @description *   The IPsec-VPN connection must be associated with a transit router. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).
       * *   You cannot create a destination-based route whose destination CIDR block is 0.0.0.0/0.
       * *   Do not add a destination-based route whose destination CIDR block is 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10 or belongs to 100.64.0.0/10. Such a route will make the console fail to display the status of the IPsec-VPN connection or cause IPsec negotiation failures.
       * *   **CreateVcoRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the status of the task.
       *     *   If the IPsec-VPN connection is in the **updating** state, the destination-based route is being created.
       *     *   If the IPsec-VPN connection is in the **attached** state, the destination-based route is created.
       * *   You cannot repeatedly call **CreateVcoRouteEntry** within the specified period of time.
       *
       * @param request CreateVcoRouteEntryRequest
       * @return CreateVcoRouteEntryResponse
       */
      Models::CreateVcoRouteEntryResponse createVcoRouteEntry(const Models::CreateVcoRouteEntryRequest &request);

      /**
       * @summary Creates a virtual border router (VBR).
       *
       * @description After you create a VBR, the VBR is in the **active** state.
       *
       * @param request CreateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouterWithOptions(const Models::CreateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual border router (VBR).
       *
       * @description After you create a VBR, the VBR is in the **active** state.
       *
       * @param request CreateVirtualBorderRouterRequest
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouter(const Models::CreateVirtualBorderRouterRequest &request);

      /**
       * @summary Creates a hosted connection over Express Connect circuit.
       *
       * @description # [](#)Description
       * Before you call this operation, we recommend that you learn about the workflow for creating a hosted connection and the environment requirements. For more information, see [Overview of hosted connections](https://help.aliyun.com/document_detail/146571.html) and [Operations performed by Express Connect partners](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnectionWithOptions(const Models::CreateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hosted connection over Express Connect circuit.
       *
       * @description # [](#)Description
       * Before you call this operation, we recommend that you learn about the workflow for creating a hosted connection and the environment requirements. For more information, see [Overview of hosted connections](https://help.aliyun.com/document_detail/146571.html) and [Operations performed by Express Connect partners](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnection(const Models::CreateVirtualPhysicalConnectionRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this operation, take note of the following items:
       * *   You can specify only one CIDR block for each VPC.
       * *   After you create a VPC, you cannot change its CIDR block. However, you can add secondary IPv4 CIDR blocks to the VPC.
       * *   In each VPC, cloud services can use a maximum of 60,000 private IP addresses. You cannot increase the quota.
       * *   After you create a VPC, a vRouter and a route table are automatically created.
       * *   At most three user CIDR blocks can be added to a VPC. If a user CIDR block includes another user CIDR block, the one with the shorter subnet mask takes effect. For example, if both 10.0.0.0/8 and 10.1.0.0/16 are specified, only 10.0.0.0/8 takes effect.
       * *   **CreateVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task:
       *     *   If the VPC is in the **Creating** state, the VPC is being created.
       *     *   If the VPC is in the **Created** state, the VPC is created.
       * *   You cannot repeatedly call the **DeleteRouteEntry** operation to create default VPCs within a specific time period. However, you can repeatedly call this operation to create custom VPCs within a specific time period.
       *
       * @param request CreateVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpcWithOptions(const Models::CreateVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this operation, take note of the following items:
       * *   You can specify only one CIDR block for each VPC.
       * *   After you create a VPC, you cannot change its CIDR block. However, you can add secondary IPv4 CIDR blocks to the VPC.
       * *   In each VPC, cloud services can use a maximum of 60,000 private IP addresses. You cannot increase the quota.
       * *   After you create a VPC, a vRouter and a route table are automatically created.
       * *   At most three user CIDR blocks can be added to a VPC. If a user CIDR block includes another user CIDR block, the one with the shorter subnet mask takes effect. For example, if both 10.0.0.0/8 and 10.1.0.0/16 are specified, only 10.0.0.0/8 takes effect.
       * *   **CreateVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task:
       *     *   If the VPC is in the **Creating** state, the VPC is being created.
       *     *   If the VPC is in the **Created** state, the VPC is created.
       * *   You cannot repeatedly call the **DeleteRouteEntry** operation to create default VPCs within a specific time period. However, you can repeatedly call this operation to create custom VPCs within a specific time period.
       *
       * @param request CreateVpcRequest
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpc(const Models::CreateVpcRequest &request);

      /**
       * @summary Creates a gateway endpoint.
       *
       * @description *   **CreateVpcGatewayEndpoint** is an asynchronous operation. After a request is sent, the system returns an **EndpointId** and runs the task in the background. You can call the [ListVpcGatewayEndpoints](https://help.aliyun.com/document_detail/448682.html) operation to query the status of the task.
       *     *   If the gateway endpoint is in the **Creating** state, the gateway endpoint is being created.
       *     *   If the gateway endpoint is in the **Created** state, the gateway endpoint is created.
       * *   You cannot repeatedly call the **CreateVpcGatewayEndpoint** operation for the same endpoint service within the specified period of time.
       *
       * @param request CreateVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcGatewayEndpointResponse
       */
      Models::CreateVpcGatewayEndpointResponse createVpcGatewayEndpointWithOptions(const Models::CreateVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a gateway endpoint.
       *
       * @description *   **CreateVpcGatewayEndpoint** is an asynchronous operation. After a request is sent, the system returns an **EndpointId** and runs the task in the background. You can call the [ListVpcGatewayEndpoints](https://help.aliyun.com/document_detail/448682.html) operation to query the status of the task.
       *     *   If the gateway endpoint is in the **Creating** state, the gateway endpoint is being created.
       *     *   If the gateway endpoint is in the **Created** state, the gateway endpoint is created.
       * *   You cannot repeatedly call the **CreateVpcGatewayEndpoint** operation for the same endpoint service within the specified period of time.
       *
       * @param request CreateVpcGatewayEndpointRequest
       * @return CreateVpcGatewayEndpointResponse
       */
      Models::CreateVpcGatewayEndpointResponse createVpcGatewayEndpoint(const Models::CreateVpcGatewayEndpointRequest &request);

      /**
       * @summary Creates a prefix list.
       *
       * @description You cannot repeatedly call the **CreateVpcPrefixList** operation within the specified period of time.
       *
       * @param request CreateVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcPrefixListResponse
       */
      Models::CreateVpcPrefixListResponse createVpcPrefixListWithOptions(const Models::CreateVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a prefix list.
       *
       * @description You cannot repeatedly call the **CreateVpcPrefixList** operation within the specified period of time.
       *
       * @param request CreateVpcPrefixListRequest
       * @return CreateVpcPrefixListResponse
       */
      Models::CreateVpcPrefixListResponse createVpcPrefixList(const Models::CreateVpcPrefixListRequest &request);

      /**
       * @summary Adds a shared port to a hosted connection.
       *
       * @description If an Express Connect partner has created a virtual border router (VBR) for a tenant before, the Express Connect partner can push the Express Connect circuit that is associated with the VBR to the tenant account by adding a shared port for the tenant account. The service of the tenant is not interrupted in this process.
       * Preparations:
       * Before the Express Connect partner performs the operation, the Express Connect partner must notify the tenant and request the tenant to enable outbound data transfer billing. For more information, see [Enable outbound data transfer billing](https://help.aliyun.com/document_detail/274385.html).
       * What to do next:
       * 1.  After the Express Connect partner performs the operation, a shared port is added for the tenant account. The tenant must call the [ConfirmPhysicalConnection](https://help.aliyun.com/document_detail/324198.html) operation to accept the shared port.
       * 2.  Then, the Express Connect partner must call the [AttachVbrToVpconn](https://help.aliyun.com/document_detail/324191.html) operation to associate the VBR with the newly added shared port that belongs to the tenant account.
       *
       * @param request CreateVpconnFromVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpconnFromVbrResponse
       */
      Models::CreateVpconnFromVbrResponse createVpconnFromVbrWithOptions(const Models::CreateVpconnFromVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a shared port to a hosted connection.
       *
       * @description If an Express Connect partner has created a virtual border router (VBR) for a tenant before, the Express Connect partner can push the Express Connect circuit that is associated with the VBR to the tenant account by adding a shared port for the tenant account. The service of the tenant is not interrupted in this process.
       * Preparations:
       * Before the Express Connect partner performs the operation, the Express Connect partner must notify the tenant and request the tenant to enable outbound data transfer billing. For more information, see [Enable outbound data transfer billing](https://help.aliyun.com/document_detail/274385.html).
       * What to do next:
       * 1.  After the Express Connect partner performs the operation, a shared port is added for the tenant account. The tenant must call the [ConfirmPhysicalConnection](https://help.aliyun.com/document_detail/324198.html) operation to accept the shared port.
       * 2.  Then, the Express Connect partner must call the [AttachVbrToVpconn](https://help.aliyun.com/document_detail/324191.html) operation to associate the VBR with the newly added shared port that belongs to the tenant account.
       *
       * @param request CreateVpconnFromVbrRequest
       * @return CreateVpconnFromVbrResponse
       */
      Models::CreateVpconnFromVbrResponse createVpconnFromVbr(const Models::CreateVpconnFromVbrRequest &request);

      /**
       * @summary Creates an IPsec-VPN connection. After you create the IPsec-VPN connection, you can associate the IPsec-VPN connection with a transit router.
       *
       * @description *   By default, the IPsec-VPN connection created by calling the `CreateVpnAttachment` operation is not bound to any resources. You can call the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) operation to bind the IPsec-VPN connection to a transit router.
       * *   If you want to associate an IPsec-VPN connection with a transit router, you can create a dual-tunnel connection in some regions. For more information, see [Dual-tunnel IPsec-VPN connections](https://help.aliyun.com/document_detail/2853535.html).
       *     *   When you create a IPsec-VPN connection in dual tunnel mode, you can configure the following request parameters in addition to the required parameters: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     *   When you create a IPsec-VPN connection in single tunnel mode, you can configure the following request parameters in addition to the required parameters: **ClientToken**, **CustomerGatewayId**, **NetworkType**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **Tags** array, and **ResourceGroupId**.
       * ### [](#)Prerequisites
       * Before you create an IPsec-VPN connection, you must create a customer gateway in the region where you want to create the IPsec-VPN connection. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       * If you want to add BGP configurations to an IPsec-VPN connection, make sure that an autonomous system number (ASN) is assigned to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachmentWithOptions(const Models::CreateVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec-VPN connection. After you create the IPsec-VPN connection, you can associate the IPsec-VPN connection with a transit router.
       *
       * @description *   By default, the IPsec-VPN connection created by calling the `CreateVpnAttachment` operation is not bound to any resources. You can call the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) operation to bind the IPsec-VPN connection to a transit router.
       * *   If you want to associate an IPsec-VPN connection with a transit router, you can create a dual-tunnel connection in some regions. For more information, see [Dual-tunnel IPsec-VPN connections](https://help.aliyun.com/document_detail/2853535.html).
       *     *   When you create a IPsec-VPN connection in dual tunnel mode, you can configure the following request parameters in addition to the required parameters: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     *   When you create a IPsec-VPN connection in single tunnel mode, you can configure the following request parameters in addition to the required parameters: **ClientToken**, **CustomerGatewayId**, **NetworkType**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **Tags** array, and **ResourceGroupId**.
       * ### [](#)Prerequisites
       * Before you create an IPsec-VPN connection, you must create a customer gateway in the region where you want to create the IPsec-VPN connection. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       * If you want to add BGP configurations to an IPsec-VPN connection, make sure that an autonomous system number (ASN) is assigned to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachment(const Models::CreateVpnAttachmentRequest &request);

      /**
       * @summary Creates an IPsec-VPN connection.
       *
       * @description *   If the VPN gateway supports the dual-tunnel mode, you can specify the following parameters in addition to the required parameters when you call `CreateVpnConnection`:
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     For more information about the regions and zones that support the dual-tunnel mode, see [IPsec-VPN connections support the dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * *   If the VPN gateway supports only the dual-tunnel mode, you can specify the following parameters in addition to the required parameters when you call `CreateVpnConnection`:
       *     **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.
       * *   **CreateVpnConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec-VPN connection is being created.
       *     *   If the VPN gateway is in the **active** state, the IPsec-VPN connection is created.
       * *   You cannot call **CreateVpnConnection** to create multiple IPsec-VPN connections associated with a VPN gateway at the same time.
       *
       * @param request CreateVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnectionWithOptions(const Models::CreateVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec-VPN connection.
       *
       * @description *   If the VPN gateway supports the dual-tunnel mode, you can specify the following parameters in addition to the required parameters when you call `CreateVpnConnection`:
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     For more information about the regions and zones that support the dual-tunnel mode, see [IPsec-VPN connections support the dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * *   If the VPN gateway supports only the dual-tunnel mode, you can specify the following parameters in addition to the required parameters when you call `CreateVpnConnection`:
       *     **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.
       * *   **CreateVpnConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec-VPN connection is being created.
       *     *   If the VPN gateway is in the **active** state, the IPsec-VPN connection is created.
       * *   You cannot call **CreateVpnConnection** to create multiple IPsec-VPN connections associated with a VPN gateway at the same time.
       *
       * @param request CreateVpnConnectionRequest
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnection(const Models::CreateVpnConnectionRequest &request);

      /**
       * @summary Creates a VPN gateway.
       *
       * @description *   Before you create a VPN gateway, we recommend that you know more about the limits of VPN gateways. For more information, see the [Limits](https://help.aliyun.com/document_detail/65290.html) section in the "Create and manage a VPN gateway" topic.
       * *   VPN gateways in some regions support only IPsec-VPN connections in dual-tunnel mode. If you call `CreateVpnGateway` in these regions, you must specify **VSwitchId** and **DisasterRecoveryVSwitchId** in addition to the required parameters. For more information about the regions and zones that support the IPsec-VPN connections in dual-tunnel mode, see [IPsec-VPN connections support the dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * *   **CreateVpnGateway** is an asynchronous operation. After you send a request to call this operation, the system returns a request ID and the endpoint service is being created in the backend. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of a VPN gateway.
       *     *   If the VPN gateway is in the **provisioning** state, the VPN gateway is being created.
       *     *   If the VPN gateway is in the **active** state, the VPN gateway is created.
       *
       * @param request CreateVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnGatewayResponse
       */
      Models::CreateVpnGatewayResponse createVpnGatewayWithOptions(const Models::CreateVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPN gateway.
       *
       * @description *   Before you create a VPN gateway, we recommend that you know more about the limits of VPN gateways. For more information, see the [Limits](https://help.aliyun.com/document_detail/65290.html) section in the "Create and manage a VPN gateway" topic.
       * *   VPN gateways in some regions support only IPsec-VPN connections in dual-tunnel mode. If you call `CreateVpnGateway` in these regions, you must specify **VSwitchId** and **DisasterRecoveryVSwitchId** in addition to the required parameters. For more information about the regions and zones that support the IPsec-VPN connections in dual-tunnel mode, see [IPsec-VPN connections support the dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * *   **CreateVpnGateway** is an asynchronous operation. After you send a request to call this operation, the system returns a request ID and the endpoint service is being created in the backend. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of a VPN gateway.
       *     *   If the VPN gateway is in the **provisioning** state, the VPN gateway is being created.
       *     *   If the VPN gateway is in the **active** state, the VPN gateway is created.
       *
       * @param request CreateVpnGatewayRequest
       * @return CreateVpnGatewayResponse
       */
      Models::CreateVpnGatewayResponse createVpnGateway(const Models::CreateVpnGatewayRequest &request);

      /**
       * @summary Creates a policy-based route for a VPN gateway.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the match rules of and limits on policy-based routes. For more information, see [Manage policy-based routes](https://help.aliyun.com/document_detail/110777.html).
       * *   Before you create a policy-based route, make sure that an IPsec-VPN connection is created. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
       * *   **CreateVpnPbrRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway.
       *     *   If the VPN gateway is in the **updating** state, the policy-based route is being created.
       *     *   If the VPN gateway is in the **active** state, the policy-based route is created.
       * *   You cannot call the **CreateVpnPbrRouteEntry** operation to create multiple policy-based routes for a VPN gateway at a time.
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntryWithOptions(const Models::CreateVpnPbrRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy-based route for a VPN gateway.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the match rules of and limits on policy-based routes. For more information, see [Manage policy-based routes](https://help.aliyun.com/document_detail/110777.html).
       * *   Before you create a policy-based route, make sure that an IPsec-VPN connection is created. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
       * *   **CreateVpnPbrRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway.
       *     *   If the VPN gateway is in the **updating** state, the policy-based route is being created.
       *     *   If the VPN gateway is in the **active** state, the policy-based route is created.
       * *   You cannot call the **CreateVpnPbrRouteEntry** operation to create multiple policy-based routes for a VPN gateway at a time.
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntry(const Models::CreateVpnPbrRouteEntryRequest &request);

      /**
       * @summary Creates a destination-based route entry for a VPN gateway.
       *
       * @description *   **CreateVpnRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the destination-based route entry is being created.
       *     *   If a VPN gateway is in the **active** state, the destination-based route entry has been created.
       * *   You cannot repeatedly call **CreateVpnRouteEntry** to create a destination-based route entry for a VPN gateway within the specified period of time.
       *
       * @param request CreateVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntryWithOptions(const Models::CreateVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a destination-based route entry for a VPN gateway.
       *
       * @description *   **CreateVpnRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the destination-based route entry is being created.
       *     *   If a VPN gateway is in the **active** state, the destination-based route entry has been created.
       * *   You cannot repeatedly call **CreateVpnRouteEntry** to create a destination-based route entry for a VPN gateway within the specified period of time.
       *
       * @param request CreateVpnRouteEntryRequest
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntry(const Models::CreateVpnRouteEntryRequest &request);

      /**
       * @summary 冻结路由器接口
       *
       * @param request DeactivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterfaceWithOptions(const Models::DeactivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 冻结路由器接口
       *
       * @param request DeactivateRouterInterfaceRequest
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterface(const Models::DeactivateRouterInterfaceRequest &request);

      /**
       * @summary Disables a flow log. After a flow log is disabled, the system no longer captures the traffic information about a resource.
       *
       * @description *   The **DeactiveFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Deactivating** state, the flow log is being disabled.
       *     *   If the flow log is in the **Inactive** state, the flow log is disabled.
       * *   You cannot repeatedly call the **DeactiveFlowLog** operation to disable a flow log within the specified period of time.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a flow log. After a flow log is disabled, the system no longer captures the traffic information about a resource.
       *
       * @description *   The **DeactiveFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Deactivating** state, the flow log is being disabled.
       *     *   If the flow log is in the **Inactive** state, the flow log is disabled.
       * *   You cannot repeatedly call the **DeactiveFlowLog** operation to disable a flow log within the specified period of time.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes a Border Gateway Protocol (BGP) group.
       *
       * @param request DeleteBgpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpGroupResponse
       */
      Models::DeleteBgpGroupResponse deleteBgpGroupWithOptions(const Models::DeleteBgpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Border Gateway Protocol (BGP) group.
       *
       * @param request DeleteBgpGroupRequest
       * @return DeleteBgpGroupResponse
       */
      Models::DeleteBgpGroupResponse deleteBgpGroup(const Models::DeleteBgpGroupRequest &request);

      /**
       * @summary Deletes an advertised Border Gateway Protocol (BGP) network.
       *
       * @param request DeleteBgpNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpNetworkResponse
       */
      Models::DeleteBgpNetworkResponse deleteBgpNetworkWithOptions(const Models::DeleteBgpNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an advertised Border Gateway Protocol (BGP) network.
       *
       * @param request DeleteBgpNetworkRequest
       * @return DeleteBgpNetworkResponse
       */
      Models::DeleteBgpNetworkResponse deleteBgpNetwork(const Models::DeleteBgpNetworkRequest &request);

      /**
       * @summary Deletes a Border Gateway Protocol (BGP) peer.
       *
       * @param request DeleteBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpPeerResponse
       */
      Models::DeleteBgpPeerResponse deleteBgpPeerWithOptions(const Models::DeleteBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Border Gateway Protocol (BGP) peer.
       *
       * @param request DeleteBgpPeerRequest
       * @return DeleteBgpPeerResponse
       */
      Models::DeleteBgpPeerResponse deleteBgpPeer(const Models::DeleteBgpPeerRequest &request);

      /**
       * @summary Deletes an Internet Shared Bandwidth instance.
       *
       * @description You cannot repeatedly call the **DeleteCommonBandwidthPackage** operation to delete an Internet Shared Bandwidth instance within the specified period of time.
       *
       * @param request DeleteCommonBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommonBandwidthPackageResponse
       */
      Models::DeleteCommonBandwidthPackageResponse deleteCommonBandwidthPackageWithOptions(const Models::DeleteCommonBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Internet Shared Bandwidth instance.
       *
       * @description You cannot repeatedly call the **DeleteCommonBandwidthPackage** operation to delete an Internet Shared Bandwidth instance within the specified period of time.
       *
       * @param request DeleteCommonBandwidthPackageRequest
       * @return DeleteCommonBandwidthPackageResponse
       */
      Models::DeleteCommonBandwidthPackageResponse deleteCommonBandwidthPackage(const Models::DeleteCommonBandwidthPackageRequest &request);

      /**
       * @summary Deletes a customer gateway.
       *
       * @description Before you delete a customer gateway, make sure that no IPsec-VPN connection is associated with the customer gateway. For more information about how to delete an IPsec-VPN connection, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       *
       * @param request DeleteCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomerGatewayResponse
       */
      Models::DeleteCustomerGatewayResponse deleteCustomerGatewayWithOptions(const Models::DeleteCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a customer gateway.
       *
       * @description Before you delete a customer gateway, make sure that no IPsec-VPN connection is associated with the customer gateway. For more information about how to delete an IPsec-VPN connection, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       *
       * @param request DeleteCustomerGatewayRequest
       * @return DeleteCustomerGatewayResponse
       */
      Models::DeleteCustomerGatewayResponse deleteCustomerGateway(const Models::DeleteCustomerGatewayRequest &request);

      /**
       * @summary Deletes a DHCP options set.
       *
       * @description ## [](#)Description
       * *   **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/189208.html) operation to query the status of the task.
       *     *   If the DHCP options set is in the **Deleting** state, the DHCP options set is being deleted.
       *     *   If you cannot query the DHCP options set, the DHCP options set is deleted.
       * *   You cannot repeatedly call the **DeleteDhcpOptionsSet** operation to delete a DHCP options set within the specified period of time.
       *
       * @param request DeleteDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDhcpOptionsSetResponse
       */
      Models::DeleteDhcpOptionsSetResponse deleteDhcpOptionsSetWithOptions(const Models::DeleteDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DHCP options set.
       *
       * @description ## [](#)Description
       * *   **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/189208.html) operation to query the status of the task.
       *     *   If the DHCP options set is in the **Deleting** state, the DHCP options set is being deleted.
       *     *   If you cannot query the DHCP options set, the DHCP options set is deleted.
       * *   You cannot repeatedly call the **DeleteDhcpOptionsSet** operation to delete a DHCP options set within the specified period of time.
       *
       * @param request DeleteDhcpOptionsSetRequest
       * @return DeleteDhcpOptionsSetResponse
       */
      Models::DeleteDhcpOptionsSetResponse deleteDhcpOptionsSet(const Models::DeleteDhcpOptionsSetRequest &request);

      /**
       * @summary Deletes a Express Connect instance, including the initiator and acceptor.
       *
       * @param request DeleteExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectResponse
       */
      Models::DeleteExpressConnectResponse deleteExpressConnectWithOptions(const Models::DeleteExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Express Connect instance, including the initiator and acceptor.
       *
       * @param request DeleteExpressConnectRequest
       * @return DeleteExpressConnectResponse
       */
      Models::DeleteExpressConnectResponse deleteExpressConnect(const Models::DeleteExpressConnectRequest &request);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @param request DeleteExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosResponse
       */
      Models::DeleteExpressConnectTrafficQosResponse deleteExpressConnectTrafficQosWithOptions(const Models::DeleteExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @param request DeleteExpressConnectTrafficQosRequest
       * @return DeleteExpressConnectTrafficQosResponse
       */
      Models::DeleteExpressConnectTrafficQosResponse deleteExpressConnectTrafficQos(const Models::DeleteExpressConnectTrafficQosRequest &request);

      /**
       * @summary Deletes a quality of service (QoS) queue.
       *
       * @param request DeleteExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosQueueResponse
       */
      Models::DeleteExpressConnectTrafficQosQueueResponse deleteExpressConnectTrafficQosQueueWithOptions(const Models::DeleteExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quality of service (QoS) queue.
       *
       * @param request DeleteExpressConnectTrafficQosQueueRequest
       * @return DeleteExpressConnectTrafficQosQueueResponse
       */
      Models::DeleteExpressConnectTrafficQosQueueResponse deleteExpressConnectTrafficQosQueue(const Models::DeleteExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Deletes a quality of service (QoS) rule.
       *
       * @param request DeleteExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosRuleResponse
       */
      Models::DeleteExpressConnectTrafficQosRuleResponse deleteExpressConnectTrafficQosRuleWithOptions(const Models::DeleteExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quality of service (QoS) rule.
       *
       * @param request DeleteExpressConnectTrafficQosRuleRequest
       * @return DeleteExpressConnectTrafficQosRuleResponse
       */
      Models::DeleteExpressConnectTrafficQosRuleResponse deleteExpressConnectTrafficQosRule(const Models::DeleteExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Deletes a failover test.
       *
       * @description You can delete only failover tests that are in the **Pending** or **Complete** state.
       *
       * @param request DeleteFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFailoverTestJobResponse
       */
      Models::DeleteFailoverTestJobResponse deleteFailoverTestJobWithOptions(const Models::DeleteFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a failover test.
       *
       * @description You can delete only failover tests that are in the **Pending** or **Complete** state.
       *
       * @param request DeleteFailoverTestJobRequest
       * @return DeleteFailoverTestJobResponse
       */
      Models::DeleteFailoverTestJobResponse deleteFailoverTestJob(const Models::DeleteFailoverTestJobRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @description *   The **DeleteFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Deleting** state, the flow log is being deleted.
       *     *   If you cannot query the flow log, the flow log is deleted.
       * *   You cannot repeatedly call the **DeleteFlowLog** operation to delete a flow log within the specified period of time.
       *
       * @param request DeleteFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLogWithOptions(const Models::DeleteFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @description *   The **DeleteFlowLog** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Deleting** state, the flow log is being deleted.
       *     *   If you cannot query the flow log, the flow log is deleted.
       * *   You cannot repeatedly call the **DeleteFlowLog** operation to delete a flow log within the specified period of time.
       *
       * @param request DeleteFlowLogRequest
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLog(const Models::DeleteFlowLogRequest &request);

      /**
       * @summary Deletes a DNAT entry.
       *
       * @description ## [](#)Description
       * *   **DeleteForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   If the DNAT entry is in the **Deleting** state, the system is deleting the DNAT entry. In this case, you can only query the status of the DNAT entry, but cannot perform other operations.
       *     *   If the DNAT entry cannot be found, it is deleted.
       * >  If a DNAT table has DNAT entries in the **Pending** state, you cannot delete the DNAT entries.
       * *   You cannot repeatedly call the **DeleteForwardEntry** operation to delete a DNAT entry within the specified period of time.
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNAT entry.
       *
       * @description ## [](#)Description
       * *   **DeleteForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   If the DNAT entry is in the **Deleting** state, the system is deleting the DNAT entry. In this case, you can only query the status of the DNAT entry, but cannot perform other operations.
       *     *   If the DNAT entry cannot be found, it is deleted.
       * >  If a DNAT table has DNAT entries in the **Pending** state, you cannot delete the DNAT entries.
       * *   You cannot repeatedly call the **DeleteForwardEntry** operation to delete a DNAT entry within the specified period of time.
       *
       * @param request DeleteForwardEntryRequest
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntry(const Models::DeleteForwardEntryRequest &request);

      /**
       * @summary Deletes a FULLNAT entry.
       *
       * @description ## [](#)Description
       * **DeleteFullNatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       * *   If the FULLNAT entry is in the **Deleting** state, the system is deleting the FULLNAT entry. In this case, you can query the status of the FULLNAT entry, but cannot perform other operations.
       * *   If the FULLNAT entry cannot be found, the FULLNAT entry is deleted.
       * You cannot repeatedly call the **DeleteFullNatEntry** operation to delete a FULLNAT entry within the specified period of time.
       *
       * @param request DeleteFullNatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFullNatEntryResponse
       */
      Models::DeleteFullNatEntryResponse deleteFullNatEntryWithOptions(const Models::DeleteFullNatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a FULLNAT entry.
       *
       * @description ## [](#)Description
       * **DeleteFullNatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       * *   If the FULLNAT entry is in the **Deleting** state, the system is deleting the FULLNAT entry. In this case, you can query the status of the FULLNAT entry, but cannot perform other operations.
       * *   If the FULLNAT entry cannot be found, the FULLNAT entry is deleted.
       * You cannot repeatedly call the **DeleteFullNatEntry** operation to delete a FULLNAT entry within the specified period of time.
       *
       * @param request DeleteFullNatEntryRequest
       * @return DeleteFullNatEntryResponse
       */
      Models::DeleteFullNatEntryResponse deleteFullNatEntry(const Models::DeleteFullNatEntryRequest &request);

      /**
       * @summary Deletes a Global Accelerator (GA) instance.
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only pay-as-you-go instances.
       * *   Before you can delete a dedicated instance, disassociate the backend server from the instance first.
       * *   Before you can delete a shared instance, disassociate the elastic IP address (EIP) from the instance first.
       *
       * @param request DeleteGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalAccelerationInstanceResponse
       */
      Models::DeleteGlobalAccelerationInstanceResponse deleteGlobalAccelerationInstanceWithOptions(const Models::DeleteGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Global Accelerator (GA) instance.
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only pay-as-you-go instances.
       * *   Before you can delete a dedicated instance, disassociate the backend server from the instance first.
       * *   Before you can delete a shared instance, disassociate the elastic IP address (EIP) from the instance first.
       *
       * @param request DeleteGlobalAccelerationInstanceRequest
       * @return DeleteGlobalAccelerationInstanceResponse
       */
      Models::DeleteGlobalAccelerationInstanceResponse deleteGlobalAccelerationInstance(const Models::DeleteGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Deletes a high-availability virtual IP address (HaVip).
       *
       * @description When you call this operation, take note of the following rules:
       * *   The HaVip must be in the available state before it can be deleted.
       * *   Make sure that no routes are destined for the HaVip.
       * *   Make sure that no elastic IP addresses (EIPs) are associated with the HaVip.
       * *   **DeleteHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID while deleting the HaVip in the background. Call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   The **Deleting** state indicates the HaVip is being deleted.
       *     *   If no HaVip is found, the HaVip is deleted.
       * *   You cannot repeatedly call the **DeleteHaVip** operation to delete the same HaVip.
       *
       * @param request DeleteHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVipWithOptions(const Models::DeleteHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a high-availability virtual IP address (HaVip).
       *
       * @description When you call this operation, take note of the following rules:
       * *   The HaVip must be in the available state before it can be deleted.
       * *   Make sure that no routes are destined for the HaVip.
       * *   Make sure that no elastic IP addresses (EIPs) are associated with the HaVip.
       * *   **DeleteHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID while deleting the HaVip in the background. Call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   The **Deleting** state indicates the HaVip is being deleted.
       *     *   If no HaVip is found, the HaVip is deleted.
       * *   You cannot repeatedly call the **DeleteHaVip** operation to delete the same HaVip.
       *
       * @param request DeleteHaVipRequest
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVip(const Models::DeleteHaVipRequest &request);

      /**
       * @summary Deletes an IPv6 Translation Service instance.
       *
       * @param request DeleteIPv6TranslatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIPv6TranslatorResponse
       */
      Models::DeleteIPv6TranslatorResponse deleteIPv6TranslatorWithOptions(const Models::DeleteIPv6TranslatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv6 Translation Service instance.
       *
       * @param request DeleteIPv6TranslatorRequest
       * @return DeleteIPv6TranslatorResponse
       */
      Models::DeleteIPv6TranslatorResponse deleteIPv6Translator(const Models::DeleteIPv6TranslatorRequest &request);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorAclList is deprecated
       *
       * @summary Deletes an access control list (ACL). You can delete an ACL only when the ACL is not associated with IPv6 translation mappings.
       *
       * @param request DeleteIPv6TranslatorAclListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIPv6TranslatorAclListResponse
       */
      Models::DeleteIPv6TranslatorAclListResponse deleteIPv6TranslatorAclListWithOptions(const Models::DeleteIPv6TranslatorAclListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorAclList is deprecated
       *
       * @summary Deletes an access control list (ACL). You can delete an ACL only when the ACL is not associated with IPv6 translation mappings.
       *
       * @param request DeleteIPv6TranslatorAclListRequest
       * @return DeleteIPv6TranslatorAclListResponse
       */
      Models::DeleteIPv6TranslatorAclListResponse deleteIPv6TranslatorAclList(const Models::DeleteIPv6TranslatorAclListRequest &request);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorEntry is deprecated
       *
       * @summary Deletes an IPv6 mapping entry.
       *
       * @param request DeleteIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIPv6TranslatorEntryResponse
       */
      Models::DeleteIPv6TranslatorEntryResponse deleteIPv6TranslatorEntryWithOptions(const Models::DeleteIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorEntry is deprecated
       *
       * @summary Deletes an IPv6 mapping entry.
       *
       * @param request DeleteIPv6TranslatorEntryRequest
       * @return DeleteIPv6TranslatorEntryResponse
       */
      Models::DeleteIPv6TranslatorEntryResponse deleteIPv6TranslatorEntry(const Models::DeleteIPv6TranslatorEntryRequest &request);

      /**
       * @summary Deletes an IPsec server.
       *
       * @description *   **DeleteIpsecServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being deleted.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is deleted.
       * *   You cannot call **DeleteIpsecServer** within the specified period of time.
       *
       * @param request DeleteIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpsecServerResponse
       */
      Models::DeleteIpsecServerResponse deleteIpsecServerWithOptions(const Models::DeleteIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPsec server.
       *
       * @description *   **DeleteIpsecServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being deleted.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is deleted.
       * *   You cannot call **DeleteIpsecServer** within the specified period of time.
       *
       * @param request DeleteIpsecServerRequest
       * @return DeleteIpsecServerResponse
       */
      Models::DeleteIpsecServerResponse deleteIpsecServer(const Models::DeleteIpsecServerRequest &request);

      /**
       * @summary Deletes an IPv4 gateway.
       *
       * @description ### [](#)Description
       * *   Before you delete an IPv4 gateway, make sure that no route tables are associated with the IPv4 gateway.
       * *   **DeleteIpv4Gateway** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of the task.
       *     *   If the IPv4 gateway is in the **Deleting** state, the IPv4 gateway is being deleted.
       *     *   If the IPv4 gateway cannot be queried, the IPv4 gateway is deleted.
       * *   After you call the **DeleteIpv4Gateway** operation to delete an IPv4 gateway, you cannot call the operation again to delete the IPv4 gateway until the deletion task is complete.
       *
       * @param request DeleteIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv4GatewayResponse
       */
      Models::DeleteIpv4GatewayResponse deleteIpv4GatewayWithOptions(const Models::DeleteIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv4 gateway.
       *
       * @description ### [](#)Description
       * *   Before you delete an IPv4 gateway, make sure that no route tables are associated with the IPv4 gateway.
       * *   **DeleteIpv4Gateway** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of the task.
       *     *   If the IPv4 gateway is in the **Deleting** state, the IPv4 gateway is being deleted.
       *     *   If the IPv4 gateway cannot be queried, the IPv4 gateway is deleted.
       * *   After you call the **DeleteIpv4Gateway** operation to delete an IPv4 gateway, you cannot call the operation again to delete the IPv4 gateway until the deletion task is complete.
       *
       * @param request DeleteIpv4GatewayRequest
       * @return DeleteIpv4GatewayResponse
       */
      Models::DeleteIpv4GatewayResponse deleteIpv4Gateway(const Models::DeleteIpv4GatewayRequest &request);

      /**
       * @summary Deletes an egress-only rule.
       *
       * @description *   **DeleteIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) operation to query the status of the task.
       *     *   If the egress-only rule is in the **Deleting** state, the egress-only rule is being deleted.
       *     *   If you cannot query the egress-only rule, the egress-only rule is deleted.
       * *   You cannot call the **DeleteIpv6EgressOnlyRule** within the specified period of time.
       *
       * @param request DeleteIpv6EgressOnlyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6EgressOnlyRuleResponse
       */
      Models::DeleteIpv6EgressOnlyRuleResponse deleteIpv6EgressOnlyRuleWithOptions(const Models::DeleteIpv6EgressOnlyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an egress-only rule.
       *
       * @description *   **DeleteIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) operation to query the status of the task.
       *     *   If the egress-only rule is in the **Deleting** state, the egress-only rule is being deleted.
       *     *   If you cannot query the egress-only rule, the egress-only rule is deleted.
       * *   You cannot call the **DeleteIpv6EgressOnlyRule** within the specified period of time.
       *
       * @param request DeleteIpv6EgressOnlyRuleRequest
       * @return DeleteIpv6EgressOnlyRuleResponse
       */
      Models::DeleteIpv6EgressOnlyRuleResponse deleteIpv6EgressOnlyRule(const Models::DeleteIpv6EgressOnlyRuleRequest &request);

      /**
       * @summary Deletes an IPv6 gateway.
       *
       * @description Before you delete an IPv6 gateway, you must delete the egress-only rules of the IPv6 gateway. For more information, see [DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html).
       * *   **DeleteIpv6Gateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) operation to query the status of the task:
       *     *   If the IPv6 gateway is in the **Deleting** state, the IPv6 gateway is being deleted.
       *     *   If you cannot query the IPv6 gateway, the IPv6 gateway is deleted.
       * *   You cannot repeatedly call the **DeleteIpv6Gateway** operation to delete an IPv6 gateway within the specified period of time.
       *
       * @param request DeleteIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6GatewayWithOptions(const Models::DeleteIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv6 gateway.
       *
       * @description Before you delete an IPv6 gateway, you must delete the egress-only rules of the IPv6 gateway. For more information, see [DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html).
       * *   **DeleteIpv6Gateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) operation to query the status of the task:
       *     *   If the IPv6 gateway is in the **Deleting** state, the IPv6 gateway is being deleted.
       *     *   If you cannot query the IPv6 gateway, the IPv6 gateway is deleted.
       * *   You cannot repeatedly call the **DeleteIpv6Gateway** operation to delete an IPv6 gateway within the specified period of time.
       *
       * @param request DeleteIpv6GatewayRequest
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6Gateway(const Models::DeleteIpv6GatewayRequest &request);

      /**
       * @summary Deletes Internet bandwidth.
       *
       * @description You cannot call the **DeleteIpv6InternetBandwidth** operation within the specified period of time.
       *
       * @param request DeleteIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6InternetBandwidthResponse
       */
      Models::DeleteIpv6InternetBandwidthResponse deleteIpv6InternetBandwidthWithOptions(const Models::DeleteIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Internet bandwidth.
       *
       * @description You cannot call the **DeleteIpv6InternetBandwidth** operation within the specified period of time.
       *
       * @param request DeleteIpv6InternetBandwidthRequest
       * @return DeleteIpv6InternetBandwidthResponse
       */
      Models::DeleteIpv6InternetBandwidthResponse deleteIpv6InternetBandwidth(const Models::DeleteIpv6InternetBandwidthRequest &request);

      /**
       * @summary Deletes a specified Internet NAT gateway.
       *
       * @description ## [](#)Description
       * *   **DeleteNatGateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the task.
       *     *   If a NAT gateway is in the **Deleting** state, the NAT gateway is being deleted. In this case, you can query the NAT gateway but you cannot perform other operations.
       *     *   If the NAT gateway cannot be found, the NAT gateway is deleted.
       *         After you delete a NAT gateway, you cannot restore the NAT gateway. Proceed with caution.
       * *   You cannot repeatedly call the **DeleteNatGateway** operation to delete a NAT gateway within the specified period of time.
       *
       * @param request DeleteNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGatewayWithOptions(const Models::DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Internet NAT gateway.
       *
       * @description ## [](#)Description
       * *   **DeleteNatGateway** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the task.
       *     *   If a NAT gateway is in the **Deleting** state, the NAT gateway is being deleted. In this case, you can query the NAT gateway but you cannot perform other operations.
       *     *   If the NAT gateway cannot be found, the NAT gateway is deleted.
       *         After you delete a NAT gateway, you cannot restore the NAT gateway. Proceed with caution.
       * *   You cannot repeatedly call the **DeleteNatGateway** operation to delete a NAT gateway within the specified period of time.
       *
       * @param request DeleteNatGatewayRequest
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGateway(const Models::DeleteNatGatewayRequest &request);

      /**
       * @summary Deletes a NAT IP address.
       *
       * @description ## [](#)Description
       * *   **DeleteNatIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListNatIps](https://help.aliyun.com/document_detail/281979.html) operation to query the status of the task.
       *     *   If the NAT IP address is in the **Deleting** state, the NAT IP address is being deleted. In this case, you can only query the NAT IP address but cannot perform other operations.
       *     *   If the NAT IP address cannot be found, it is deleted.
       * *   You cannot repeatedly call the **DeleteNatIp** operation to delete a NAT IP address within the specified period of time.
       *
       * @param request DeleteNatIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatIpResponse
       */
      Models::DeleteNatIpResponse deleteNatIpWithOptions(const Models::DeleteNatIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT IP address.
       *
       * @description ## [](#)Description
       * *   **DeleteNatIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListNatIps](https://help.aliyun.com/document_detail/281979.html) operation to query the status of the task.
       *     *   If the NAT IP address is in the **Deleting** state, the NAT IP address is being deleted. In this case, you can only query the NAT IP address but cannot perform other operations.
       *     *   If the NAT IP address cannot be found, it is deleted.
       * *   You cannot repeatedly call the **DeleteNatIp** operation to delete a NAT IP address within the specified period of time.
       *
       * @param request DeleteNatIpRequest
       * @return DeleteNatIpResponse
       */
      Models::DeleteNatIpResponse deleteNatIp(const Models::DeleteNatIpRequest &request);

      /**
       * @summary Deletes a NAT CIDR block.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **DeleteNatIpCidr** operation to delete a NAT CIDR block within the specified period of time.
       *
       * @param request DeleteNatIpCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatIpCidrResponse
       */
      Models::DeleteNatIpCidrResponse deleteNatIpCidrWithOptions(const Models::DeleteNatIpCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT CIDR block.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **DeleteNatIpCidr** operation to delete a NAT CIDR block within the specified period of time.
       *
       * @param request DeleteNatIpCidrRequest
       * @return DeleteNatIpCidrResponse
       */
      Models::DeleteNatIpCidrResponse deleteNatIpCidr(const Models::DeleteNatIpCidrRequest &request);

      /**
       * @summary Deletes a network access control list (ACL).
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **DeleteNetworkAcl** operation within the specified period of time.
       *
       * @param request DeleteNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAclWithOptions(const Models::DeleteNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network access control list (ACL).
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **DeleteNetworkAcl** operation within the specified period of time.
       *
       * @param request DeleteNetworkAclRequest
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAcl(const Models::DeleteNetworkAclRequest &request);

      /**
       * @summary Deletes a connection over an Express Connect circuit.
       *
       * @description You can only delete a connection over an Express Connect circuit that is in the **Allocated**, **Confirmed**, **Rejected**, **Canceled**, **AllocationFailed**, and **Terminated** states.
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection over an Express Connect circuit.
       *
       * @description You can only delete a connection over an Express Connect circuit that is in the **Allocated**, **Confirmed**, **Rejected**, **Canceled**, **AllocationFailed**, and **Terminated** states.
       *
       * @param request DeletePhysicalConnectionRequest
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnection(const Models::DeletePhysicalConnectionRequest &request);

      /**
       * @summary Deletes an IP address pool.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you delete an IP address pool, make sure that no IP address in the pool is being used.
       * *   **DeletePublicIpAddressPool** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPools](https://help.aliyun.com/document_detail/429433.html) operation to query the status of the task.
       *     *   If the IP address pool is in the **Deleting** state, the IP address pool is being deleted. In this state. you can only query the IP address pool and cannot perform other operations.
       *     *   If you cannot query the IP address pool, the IP address pool is deleted.
       * *   You cannot repeatedly call the **DeletePublicIpAddressPool** operation to delete an IP address pool within the specified period of time.
       *
       * @param request DeletePublicIpAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicIpAddressPoolResponse
       */
      Models::DeletePublicIpAddressPoolResponse deletePublicIpAddressPoolWithOptions(const Models::DeletePublicIpAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IP address pool.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you delete an IP address pool, make sure that no IP address in the pool is being used.
       * *   **DeletePublicIpAddressPool** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPools](https://help.aliyun.com/document_detail/429433.html) operation to query the status of the task.
       *     *   If the IP address pool is in the **Deleting** state, the IP address pool is being deleted. In this state. you can only query the IP address pool and cannot perform other operations.
       *     *   If you cannot query the IP address pool, the IP address pool is deleted.
       * *   You cannot repeatedly call the **DeletePublicIpAddressPool** operation to delete an IP address pool within the specified period of time.
       *
       * @param request DeletePublicIpAddressPoolRequest
       * @return DeletePublicIpAddressPoolResponse
       */
      Models::DeletePublicIpAddressPoolResponse deletePublicIpAddressPool(const Models::DeletePublicIpAddressPoolRequest &request);

      /**
       * @summary Deletes a CIDR block from an IP address pool.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you delete a CIDR block, make sure that it is not being used.
       * *   **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) operation to query the status of the task.
       *     *   If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only query the CIDR block and cannot perform other operations.
       *     *   If you cannot query the CIDR block, the CIDR block is deleted.
       * *   You cannot repeatedly call the **DeletePublicIpAddressPoolCidrBlock** operation to delete a CIDR block within the specified period of time.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlockWithOptions(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from an IP address pool.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you delete a CIDR block, make sure that it is not being used.
       * *   **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) operation to query the status of the task.
       *     *   If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only query the CIDR block and cannot perform other operations.
       *     *   If you cannot query the CIDR block, the CIDR block is deleted.
       * *   You cannot repeatedly call the **DeletePublicIpAddressPoolCidrBlock** operation to delete a CIDR block within the specified period of time.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlock(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request);

      /**
       * @summary Deletes multiple custom route entries at a time.
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only routes that are in the **Available** state.
       * *   You cannot delete a route of a virtual private cloud (VPC) in which a vSwitch or another route is being created or deleted.
       * *   **DeleteRouteEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route is in the **Deleting** state, the route is being deleted.
       *     *   If you cannot query the route, the route is deleted.
       * *   You cannot repeatedly call **DeleteRouteEntries** within a specific period of time.
       *
       * @param request DeleteRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntriesWithOptions(const Models::DeleteRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple custom route entries at a time.
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only routes that are in the **Available** state.
       * *   You cannot delete a route of a virtual private cloud (VPC) in which a vSwitch or another route is being created or deleted.
       * *   **DeleteRouteEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route is in the **Deleting** state, the route is being deleted.
       *     *   If you cannot query the route, the route is deleted.
       * *   You cannot repeatedly call **DeleteRouteEntries** within a specific period of time.
       *
       * @param request DeleteRouteEntriesRequest
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntries(const Models::DeleteRouteEntriesRequest &request);

      /**
       * @summary Deletes a route entry from a route table of a VRouter or virtual border router (VBR).
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only routes that are in the **Available** state.
       * *   You cannot delete a route entry of a virtual private cloud (VPC) in which a vSwitch or another route entry is being created or deleted.
       * *   Before you call this operation to delete a route of a VBR route table, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route first.
       * *   **DeleteRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route is in the **Deleting** state, the route is being deleted.
       *     *   If you cannot query the route entry, the route entry is deleted.
       * *   You cannot repeatedly call the **DeleteRouteEntry** operation to delete a route from the route table of a vRouter or a VBR within the specified period of time.
       *
       * @param request DeleteRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntryWithOptions(const Models::DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route entry from a route table of a VRouter or virtual border router (VBR).
       *
       * @description When you call this operation, take note of the following items:
       * *   You can delete only routes that are in the **Available** state.
       * *   You cannot delete a route entry of a virtual private cloud (VPC) in which a vSwitch or another route entry is being created or deleted.
       * *   Before you call this operation to delete a route of a VBR route table, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route first.
       * *   **DeleteRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the status of the task.
       *     *   If the route is in the **Deleting** state, the route is being deleted.
       *     *   If you cannot query the route entry, the route entry is deleted.
       * *   You cannot repeatedly call the **DeleteRouteEntry** operation to delete a route from the route table of a vRouter or a VBR within the specified period of time.
       *
       * @param request DeleteRouteEntryRequest
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntry(const Models::DeleteRouteEntryRequest &request);

      /**
       * @summary Deletes a custom route table.
       *
       * @description ## [](#)Description
       * *   **DeleteRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) operation to query the status of the task.
       *     *   If the custom route table is in the **Deleting** state, the custom route table is being deleted.
       *     *   If you cannot query the custom route table, the custom route table is deleted.
       * *   You cannot repeatedly call the **DeleteRouteTable** operation to delete a custom route table within the specified period of time.
       *
       * @param request DeleteRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTableWithOptions(const Models::DeleteRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom route table.
       *
       * @description ## [](#)Description
       * *   **DeleteRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) operation to query the status of the task.
       *     *   If the custom route table is in the **Deleting** state, the custom route table is being deleted.
       *     *   If you cannot query the custom route table, the custom route table is deleted.
       * *   You cannot repeatedly call the **DeleteRouteTable** operation to delete a custom route table within the specified period of time.
       *
       * @param request DeleteRouteTableRequest
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTable(const Models::DeleteRouteTableRequest &request);

      /**
       * @summary Delete Route Target Group
       *
       * @description - The **DeleteRouteTargetGroup** interface is an asynchronous API, meaning the system will return a request ID, but the route target group has not yet been successfully deleted as the deletion task is still in progress in the background. You can call ListRouteTargetGroup to query the deletion status of the route target group:
       *     - When the route target group is in the **Deleting** state, it indicates that the route target group is being deleted.
       *     - If you cannot find the specified route target group, it means the route target group has been successfully deleted.
       *
       * @param request DeleteRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteTargetGroupResponse
       */
      Models::DeleteRouteTargetGroupResponse deleteRouteTargetGroupWithOptions(const Models::DeleteRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Route Target Group
       *
       * @description - The **DeleteRouteTargetGroup** interface is an asynchronous API, meaning the system will return a request ID, but the route target group has not yet been successfully deleted as the deletion task is still in progress in the background. You can call ListRouteTargetGroup to query the deletion status of the route target group:
       *     - When the route target group is in the **Deleting** state, it indicates that the route target group is being deleted.
       *     - If you cannot find the specified route target group, it means the route target group has been successfully deleted.
       *
       * @param request DeleteRouteTargetGroupRequest
       * @return DeleteRouteTargetGroupResponse
       */
      Models::DeleteRouteTargetGroupResponse deleteRouteTargetGroup(const Models::DeleteRouteTargetGroupRequest &request);

      /**
       * @summary Deletes a router interface.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can delete only a router interface that is in the **Idle** or **Inactive** state.
       * *   Before you delete a router interface, you must delete all custom route entries destined for the router interface.
       *
       * @param request DeleteRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterfaceWithOptions(const Models::DeleteRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a router interface.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can delete only a router interface that is in the **Idle** or **Inactive** state.
       * *   Before you delete a router interface, you must delete all custom route entries destined for the router interface.
       *
       * @param request DeleteRouterInterfaceRequest
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterface(const Models::DeleteRouterInterfaceRequest &request);

      /**
       * @summary Deletes an SNAT entry.
       *
       * @description DeleteSnatEntry is an asynchronous operation. After you make a request, the ID of the request is returned but the specified SNAT entry is not deleted. The system deletes the SNAT entry in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of SNAT entries.
       * *   If the SNAT entries are in the **Deleting** state, the system is deleting the SNAT entries. In this case, you can only query the status of the SNAT entries, and cannot perform other operations.
       * *   If no SNAT entry is returned in the response, the SNAT entry is deleted.
       * If some SNAT entries are in the **Pending** state, you cannot delete these SNAT entries.
       *
       * @param request DeleteSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntryWithOptions(const Models::DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SNAT entry.
       *
       * @description DeleteSnatEntry is an asynchronous operation. After you make a request, the ID of the request is returned but the specified SNAT entry is not deleted. The system deletes the SNAT entry in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of SNAT entries.
       * *   If the SNAT entries are in the **Deleting** state, the system is deleting the SNAT entries. In this case, you can only query the status of the SNAT entries, and cannot perform other operations.
       * *   If no SNAT entry is returned in the response, the SNAT entry is deleted.
       * If some SNAT entries are in the **Pending** state, you cannot delete these SNAT entries.
       *
       * @param request DeleteSnatEntryRequest
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntry(const Models::DeleteSnatEntryRequest &request);

      /**
       * @summary Deletes an SSL client certificate.
       *
       * @description *   If you delete an SSL client certificate, all SSL-VPN client connections to the SSL server are disconnected. You need to reinitiate connections from SSL clients.
       *     For example, SSL client certificate 1 and SSL client certificate 2 are created on an SSL server. After you delete certificate 1, all client connections associated with certificate 1 and certificate 2 are disconnected from the SSL server.
       *     *   If clients associated with certificate 1 require SSL-VPN connections, you need to install other certificates on the clients and reinitiate connections from the clients.
       *     *   If clients associated with certificate 2 require SSL-VPN connections, you can directly reinitiate connections from the clients.
       * *   **DeleteSslVpnClientCert** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL client certificate is being deleted.
       *     *   If the VPN gateway is in the **active** state, the SSL client certificate is deleted.
       * *   You cannot call **DeleteSslVpnClientCert** within the specified period of time.
       *
       * @param request DeleteSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSslVpnClientCertResponse
       */
      Models::DeleteSslVpnClientCertResponse deleteSslVpnClientCertWithOptions(const Models::DeleteSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SSL client certificate.
       *
       * @description *   If you delete an SSL client certificate, all SSL-VPN client connections to the SSL server are disconnected. You need to reinitiate connections from SSL clients.
       *     For example, SSL client certificate 1 and SSL client certificate 2 are created on an SSL server. After you delete certificate 1, all client connections associated with certificate 1 and certificate 2 are disconnected from the SSL server.
       *     *   If clients associated with certificate 1 require SSL-VPN connections, you need to install other certificates on the clients and reinitiate connections from the clients.
       *     *   If clients associated with certificate 2 require SSL-VPN connections, you can directly reinitiate connections from the clients.
       * *   **DeleteSslVpnClientCert** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL client certificate is being deleted.
       *     *   If the VPN gateway is in the **active** state, the SSL client certificate is deleted.
       * *   You cannot call **DeleteSslVpnClientCert** within the specified period of time.
       *
       * @param request DeleteSslVpnClientCertRequest
       * @return DeleteSslVpnClientCertResponse
       */
      Models::DeleteSslVpnClientCertResponse deleteSslVpnClientCert(const Models::DeleteSslVpnClientCertRequest &request);

      /**
       * @summary Deletes an SSL server.
       *
       * @description *   **DeleteSslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being deleted.
       *     *   If the VPN gateway is in the **active** state, the SSL server is deleted.
       * *   You cannot repeatedly call the **DeleteSslVpnServer** operation to delete an SSL server from the same VPN gateway within the specified period of time.
       *
       * @param request DeleteSslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSslVpnServerResponse
       */
      Models::DeleteSslVpnServerResponse deleteSslVpnServerWithOptions(const Models::DeleteSslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SSL server.
       *
       * @description *   **DeleteSslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being deleted.
       *     *   If the VPN gateway is in the **active** state, the SSL server is deleted.
       * *   You cannot repeatedly call the **DeleteSslVpnServer** operation to delete an SSL server from the same VPN gateway within the specified period of time.
       *
       * @param request DeleteSslVpnServerRequest
       * @return DeleteSslVpnServerResponse
       */
      Models::DeleteSslVpnServerResponse deleteSslVpnServer(const Models::DeleteSslVpnServerRequest &request);

      /**
       * @summary Deletes a filter of traffic mirror.
       *
       * @description *   The **DeleteTrafficMirrorFilter** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of a filter:
       *     *   If the filter is in the **Deleting** state, the filter is being deleted.
       *     *   If you cannot query the filter, the filter is deleted.
       * *   You cannot repeatedly call the **DeleteTrafficMirrorFilter** operation to delete a filter within the specified period of time.
       *
       * @param request DeleteTrafficMirrorFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorFilterResponse
       */
      Models::DeleteTrafficMirrorFilterResponse deleteTrafficMirrorFilterWithOptions(const Models::DeleteTrafficMirrorFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a filter of traffic mirror.
       *
       * @description *   The **DeleteTrafficMirrorFilter** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of a filter:
       *     *   If the filter is in the **Deleting** state, the filter is being deleted.
       *     *   If you cannot query the filter, the filter is deleted.
       * *   You cannot repeatedly call the **DeleteTrafficMirrorFilter** operation to delete a filter within the specified period of time.
       *
       * @param request DeleteTrafficMirrorFilterRequest
       * @return DeleteTrafficMirrorFilterResponse
       */
      Models::DeleteTrafficMirrorFilterResponse deleteTrafficMirrorFilter(const Models::DeleteTrafficMirrorFilterRequest &request);

      /**
       * @summary Deletes an inbound or outbound rule of a filter for traffic mirror.
       *
       * @description *   **DeleteTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the task.
       *     *   If the inbound or outbound rule is in the **Deleting** state, the rule is being deleted.
       *     *   If you cannot query the rule, the rule is deleted.
       * *   You cannot repeatedly call **DeleteTrafficMirrorFilterRules** within the specified period of time.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRulesWithOptions(const Models::DeleteTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an inbound or outbound rule of a filter for traffic mirror.
       *
       * @description *   **DeleteTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the task.
       *     *   If the inbound or outbound rule is in the **Deleting** state, the rule is being deleted.
       *     *   If you cannot query the rule, the rule is deleted.
       * *   You cannot repeatedly call **DeleteTrafficMirrorFilterRules** within the specified period of time.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRules(const Models::DeleteTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @description *   **DeleteTrafficMirrorSession** is an asynchronous operation. After you send the request, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of a traffic mirror session.
       *     *   If the traffic mirror session is in the **Deleting** state, the traffic mirror session is being deleted.
       *     *   If you cannot query the traffic mirror session, the traffic mirror session is deleted.
       * *   You cannot repeatedly call the **DeleteTrafficMirrorSession** operation to delete a traffic mirror session within the specified period of time.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSessionWithOptions(const Models::DeleteTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @description *   **DeleteTrafficMirrorSession** is an asynchronous operation. After you send the request, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of a traffic mirror session.
       *     *   If the traffic mirror session is in the **Deleting** state, the traffic mirror session is being deleted.
       *     *   If you cannot query the traffic mirror session, the traffic mirror session is deleted.
       * *   You cannot repeatedly call the **DeleteTrafficMirrorSession** operation to delete a traffic mirror session within the specified period of time.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSession(const Models::DeleteTrafficMirrorSessionRequest &request);

      /**
       * @summary Deletes a vSwitch.
       *
       * @description When you call this operation, take note of the following limits:
       * *   Before you delete a vSwitch, you must first release or remove all virtual private cloud (VPC) resources, including vSwitches, instances, router interfaces, and high-availability virtual IP addresses (HaVips).
       * *   You can delete only vSwitches that are in the **Available** state.
       * *   You cannot delete a vSwitch from a VPC where a vSwitch or a route is being created or deleted.
       * *   **DeleteVSwitch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       *     *   If the vSwitch is in the **Pending** state, the vSwitch is being deleted.
       *     *   If you cannot query the vSwitch, the vSwitch is deleted.
       * *   You cannot repeatedly call the **DeleteVSwitch** operation to delete a vSwitch within the specified period of time.
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vSwitch.
       *
       * @description When you call this operation, take note of the following limits:
       * *   Before you delete a vSwitch, you must first release or remove all virtual private cloud (VPC) resources, including vSwitches, instances, router interfaces, and high-availability virtual IP addresses (HaVips).
       * *   You can delete only vSwitches that are in the **Available** state.
       * *   You cannot delete a vSwitch from a VPC where a vSwitch or a route is being created or deleted.
       * *   **DeleteVSwitch** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       *     *   If the vSwitch is in the **Pending** state, the vSwitch is being deleted.
       *     *   If you cannot query the vSwitch, the vSwitch is deleted.
       * *   You cannot repeatedly call the **DeleteVSwitch** operation to delete a vSwitch within the specified period of time.
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @summary Deletes a reserved CIDR block of a vSwitch.
       *
       * @description ## [](#)Description
       * *   Before you call this operation, make sure that the IP address allocated to an elastic network interface (ENI) from the reserved CIDR block is deleted. If the IP address of the ENI is not deleted, call [UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html) or [UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html) to delete the IPv4 or IPv6 address.
       * *   **DeleteVSwitchCidrReservation** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the status of the task:
       *     *   If the reserved CIDR block is in the **Releasing** state, it is being released.
       *     *   If the reserved CIDR block is in the **Released** state, it is released.
       *
       * @param request DeleteVSwitchCidrReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchCidrReservationResponse
       */
      Models::DeleteVSwitchCidrReservationResponse deleteVSwitchCidrReservationWithOptions(const Models::DeleteVSwitchCidrReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a reserved CIDR block of a vSwitch.
       *
       * @description ## [](#)Description
       * *   Before you call this operation, make sure that the IP address allocated to an elastic network interface (ENI) from the reserved CIDR block is deleted. If the IP address of the ENI is not deleted, call [UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html) or [UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html) to delete the IPv4 or IPv6 address.
       * *   **DeleteVSwitchCidrReservation** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the status of the task:
       *     *   If the reserved CIDR block is in the **Releasing** state, it is being released.
       *     *   If the reserved CIDR block is in the **Released** state, it is released.
       *
       * @param request DeleteVSwitchCidrReservationRequest
       * @return DeleteVSwitchCidrReservationResponse
       */
      Models::DeleteVSwitchCidrReservationResponse deleteVSwitchCidrReservation(const Models::DeleteVSwitchCidrReservationRequest &request);

      /**
       * @summary Deletes a virtual border router (VBR) failover group.
       *
       * @param request DeleteVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVbrHaResponse
       */
      Models::DeleteVbrHaResponse deleteVbrHaWithOptions(const Models::DeleteVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual border router (VBR) failover group.
       *
       * @param request DeleteVbrHaRequest
       * @return DeleteVbrHaResponse
       */
      Models::DeleteVbrHaResponse deleteVbrHa(const Models::DeleteVbrHaRequest &request);

      /**
       * @summary Deletes a destination-based route from an IPsec-VPN connection.
       *
       * @description *   **DeleteVcoRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the task.
       *     *   If the IPsec-VPN connection is in the **updating** state, the route is being deleted.
       *     *   If the IPsec-VPN connection is in the **attached** state, the route is deleted.
       * *   You cannot repeatedly call the **DeleteVcoRouteEntry** operation within a specific time period.
       *
       * @param request DeleteVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVcoRouteEntryResponse
       */
      Models::DeleteVcoRouteEntryResponse deleteVcoRouteEntryWithOptions(const Models::DeleteVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a destination-based route from an IPsec-VPN connection.
       *
       * @description *   **DeleteVcoRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the task.
       *     *   If the IPsec-VPN connection is in the **updating** state, the route is being deleted.
       *     *   If the IPsec-VPN connection is in the **attached** state, the route is deleted.
       * *   You cannot repeatedly call the **DeleteVcoRouteEntry** operation within a specific time period.
       *
       * @param request DeleteVcoRouteEntryRequest
       * @return DeleteVcoRouteEntryResponse
       */
      Models::DeleteVcoRouteEntryResponse deleteVcoRouteEntry(const Models::DeleteVcoRouteEntryRequest &request);

      /**
       * @summary Deletes a virtual border router (VBR).
       *
       * @description Before you call this operation, take note of the following limits:
       * *   Before you delete a VBR, you must delete all router interfaces of the VBR.
       * *   You can delete only a VBR in the **unconfirmed**, **active**, or **terminated** state.
       * *   The owner of an Express Connect circuit can delete a VBR that belongs to another account only if the VBR is in the **unconfirmed** state.
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouterWithOptions(const Models::DeleteVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual border router (VBR).
       *
       * @description Before you call this operation, take note of the following limits:
       * *   Before you delete a VBR, you must delete all router interfaces of the VBR.
       * *   You can delete only a VBR in the **unconfirmed**, **active**, or **terminated** state.
       * *   The owner of an Express Connect circuit can delete a VBR that belongs to another account only if the VBR is in the **unconfirmed** state.
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouter(const Models::DeleteVirtualBorderRouterRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @description When you call this operation, take note of the following limits:
       * *   Before you delete a VPC, make sure that all resources deployed in the VPC are released or removed, such as vSwitches, instances, and high-availability virtual IP addresses (HaVips).
       * *   You can delete only a VPC that is in the **Available** state.
       * *   The **DeleteVpc** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a VPC:
       *     *   If the VPC is in the **Deleting** state, the VPC is being deleted.
       *     *   If you cannot query the VPC, the VPC is deleted.
       * *   You cannot repeatedly call the **DeleteVpc** operation to delete a VPC within the specified period of time.
       *
       * @param request DeleteVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpcWithOptions(const Models::DeleteVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @description When you call this operation, take note of the following limits:
       * *   Before you delete a VPC, make sure that all resources deployed in the VPC are released or removed, such as vSwitches, instances, and high-availability virtual IP addresses (HaVips).
       * *   You can delete only a VPC that is in the **Available** state.
       * *   The **DeleteVpc** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a VPC:
       *     *   If the VPC is in the **Deleting** state, the VPC is being deleted.
       *     *   If you cannot query the VPC, the VPC is deleted.
       * *   You cannot repeatedly call the **DeleteVpc** operation to delete a VPC within the specified period of time.
       *
       * @param request DeleteVpcRequest
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpc(const Models::DeleteVpcRequest &request);

      /**
       * @summary Deletes a gateway endpoint.
       *
       * @param request DeleteVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcGatewayEndpointResponse
       */
      Models::DeleteVpcGatewayEndpointResponse deleteVpcGatewayEndpointWithOptions(const Models::DeleteVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway endpoint.
       *
       * @param request DeleteVpcGatewayEndpointRequest
       * @return DeleteVpcGatewayEndpointResponse
       */
      Models::DeleteVpcGatewayEndpointResponse deleteVpcGatewayEndpoint(const Models::DeleteVpcGatewayEndpointRequest &request);

      /**
       * @summary Deletes a prefix list.
       *
       * @description You cannot repeatedly call the **DeleteDhcpOptionsSet** operation to delete a prefix list within the specified period of time.
       *
       * @param request DeleteVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcPrefixListResponse
       */
      Models::DeleteVpcPrefixListResponse deleteVpcPrefixListWithOptions(const Models::DeleteVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a prefix list.
       *
       * @description You cannot repeatedly call the **DeleteDhcpOptionsSet** operation to delete a prefix list within the specified period of time.
       *
       * @param request DeleteVpcPrefixListRequest
       * @return DeleteVpcPrefixListResponse
       */
      Models::DeleteVpcPrefixListResponse deleteVpcPrefixList(const Models::DeleteVpcPrefixListRequest &request);

      /**
       * @summary Deletes an IPsec-VPN connection.
       *
       * @description *   If an IPsec-VPN connection is associated with a transit router, you must disassociate the transit router from the IPsec-VPN connection before you delete the IPsec-VPN connection. For more information, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468251.html).
       * *   If an IPsec-VPN connection is not associated with a resource, you can call `DeleteVpnAttachment` to directly delete the IPsec-VPN connection.
       *
       * @param request DeleteVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnAttachmentResponse
       */
      Models::DeleteVpnAttachmentResponse deleteVpnAttachmentWithOptions(const Models::DeleteVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPsec-VPN connection.
       *
       * @description *   If an IPsec-VPN connection is associated with a transit router, you must disassociate the transit router from the IPsec-VPN connection before you delete the IPsec-VPN connection. For more information, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468251.html).
       * *   If an IPsec-VPN connection is not associated with a resource, you can call `DeleteVpnAttachment` to directly delete the IPsec-VPN connection.
       *
       * @param request DeleteVpnAttachmentRequest
       * @return DeleteVpnAttachmentResponse
       */
      Models::DeleteVpnAttachmentResponse deleteVpnAttachment(const Models::DeleteVpnAttachmentRequest &request);

      /**
       * @summary Deletes an IPsec-VPN connection.
       *
       * @description *   **DeleteVpnConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of a VPN gateway.
       *     *   If a VPN gateway is in the **updating** state, the IPsec-VPN connection is being deleted.
       *     *   If a VPN gateway is in the **active** state, the IPsec-VPN connection has been deleted.
       * *   You cannot call the **DeleteVpnConnection** operation to delete multiple IPsec-VPN connections for a VPN gateway at a time.
       * >  After an IPsec-VPN connection between a data center and Alibaba Cloud is deleted, the connection between the data center and Alibaba Cloud is closed.
       *
       * @param request DeleteVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnConnectionResponse
       */
      Models::DeleteVpnConnectionResponse deleteVpnConnectionWithOptions(const Models::DeleteVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPsec-VPN connection.
       *
       * @description *   **DeleteVpnConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of a VPN gateway.
       *     *   If a VPN gateway is in the **updating** state, the IPsec-VPN connection is being deleted.
       *     *   If a VPN gateway is in the **active** state, the IPsec-VPN connection has been deleted.
       * *   You cannot call the **DeleteVpnConnection** operation to delete multiple IPsec-VPN connections for a VPN gateway at a time.
       * >  After an IPsec-VPN connection between a data center and Alibaba Cloud is deleted, the connection between the data center and Alibaba Cloud is closed.
       *
       * @param request DeleteVpnConnectionRequest
       * @return DeleteVpnConnectionResponse
       */
      Models::DeleteVpnConnectionResponse deleteVpnConnection(const Models::DeleteVpnConnectionRequest &request);

      /**
       * @summary Deletes a VPN gateway.
       *
       * @description >  You cannot delete a VPN gateway associated with existing IPsec-VPN connections.
       *
       * @param request DeleteVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnGatewayResponse
       */
      Models::DeleteVpnGatewayResponse deleteVpnGatewayWithOptions(const Models::DeleteVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPN gateway.
       *
       * @description >  You cannot delete a VPN gateway associated with existing IPsec-VPN connections.
       *
       * @param request DeleteVpnGatewayRequest
       * @return DeleteVpnGatewayResponse
       */
      Models::DeleteVpnGatewayResponse deleteVpnGateway(const Models::DeleteVpnGatewayRequest &request);

      /**
       * @summary Deletes a policy-based route from a VPN gateway.
       *
       * @description *   **DeleteVpnPbrRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route is being deleted.
       *     *   If a VPN gateway is in the **active** state, the policy-based route has been deleted.
       * *   You cannot repeatedly call **DeleteVpnPbrRouteEntry** to delete a policy-based route within the specified period of time.
       *
       * @param request DeleteVpnPbrRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnPbrRouteEntryResponse
       */
      Models::DeleteVpnPbrRouteEntryResponse deleteVpnPbrRouteEntryWithOptions(const Models::DeleteVpnPbrRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy-based route from a VPN gateway.
       *
       * @description *   **DeleteVpnPbrRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route is being deleted.
       *     *   If a VPN gateway is in the **active** state, the policy-based route has been deleted.
       * *   You cannot repeatedly call **DeleteVpnPbrRouteEntry** to delete a policy-based route within the specified period of time.
       *
       * @param request DeleteVpnPbrRouteEntryRequest
       * @return DeleteVpnPbrRouteEntryResponse
       */
      Models::DeleteVpnPbrRouteEntryResponse deleteVpnPbrRouteEntry(const Models::DeleteVpnPbrRouteEntryRequest &request);

      /**
       * @summary Deletes a destination-based route from a VPN gateway.
       *
       * @description *   **DeleteVpnRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the destination-based route is being deleted.
       *     *   If the VPN gateway is in the **active** state, the destination-based route is deleted.
       * *   You cannot repeatedly call **DeleteVpnRouteEntry** to delete a destination-based route from a VPN gateway within the specified period of time.
       *
       * @param request DeleteVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnRouteEntryResponse
       */
      Models::DeleteVpnRouteEntryResponse deleteVpnRouteEntryWithOptions(const Models::DeleteVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a destination-based route from a VPN gateway.
       *
       * @description *   **DeleteVpnRouteEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the destination-based route is being deleted.
       *     *   If the VPN gateway is in the **active** state, the destination-based route is deleted.
       * *   You cannot repeatedly call **DeleteVpnRouteEntry** to delete a destination-based route from a VPN gateway within the specified period of time.
       *
       * @param request DeleteVpnRouteEntryRequest
       * @return DeleteVpnRouteEntryResponse
       */
      Models::DeleteVpnRouteEntryResponse deleteVpnRouteEntry(const Models::DeleteVpnRouteEntryRequest &request);

      /**
       * @summary 设置实例删除保护功能。
       *
       * @description After you enable deletion protection for an instance, you cannot delete the instance. You must disable deletion protection before you can delete the instance.
       *
       * @param request DeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtectionWithOptions(const Models::DeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例删除保护功能。
       *
       * @description After you enable deletion protection for an instance, you cannot delete the instance. You must disable deletion protection before you can delete the instance.
       *
       * @param request DeletionProtectionRequest
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtection(const Models::DeletionProtectionRequest &request);

      /**
       * @summary Queries traffic data of a pay-by-enhanced-95th-percentile Internet Shared Bandwidth instance.
       *
       * @param request Describe95TrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95TrafficWithOptions(const Models::Describe95TrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic data of a pay-by-enhanced-95th-percentile Internet Shared Bandwidth instance.
       *
       * @param request Describe95TrafficRequest
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95Traffic(const Models::Describe95TrafficRequest &request);

      /**
       * @summary Queries the access points of Express Connect circuits in a region.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access points of Express Connect circuits in a region.
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries Border Gateway Protocol (BGP) groups in a region.
       *
       * @param request DescribeBgpGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpGroupsResponse
       */
      Models::DescribeBgpGroupsResponse describeBgpGroupsWithOptions(const Models::DescribeBgpGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Border Gateway Protocol (BGP) groups in a region.
       *
       * @param request DescribeBgpGroupsRequest
       * @return DescribeBgpGroupsResponse
       */
      Models::DescribeBgpGroupsResponse describeBgpGroups(const Models::DescribeBgpGroupsRequest &request);

      /**
       * @summary Queries advertised Border Gateway Protocol (BGP) networks.
       *
       * @param request DescribeBgpNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpNetworksResponse
       */
      Models::DescribeBgpNetworksResponse describeBgpNetworksWithOptions(const Models::DescribeBgpNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries advertised Border Gateway Protocol (BGP) networks.
       *
       * @param request DescribeBgpNetworksRequest
       * @return DescribeBgpNetworksResponse
       */
      Models::DescribeBgpNetworksResponse describeBgpNetworks(const Models::DescribeBgpNetworksRequest &request);

      /**
       * @summary Queries Border Gateway Protocol (BGP) peers in a region.
       *
       * @param request DescribeBgpPeersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpPeersResponse
       */
      Models::DescribeBgpPeersResponse describeBgpPeersWithOptions(const Models::DescribeBgpPeersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Border Gateway Protocol (BGP) peers in a region.
       *
       * @param request DescribeBgpPeersRequest
       * @return DescribeBgpPeersResponse
       */
      Models::DescribeBgpPeersResponse describeBgpPeers(const Models::DescribeBgpPeersRequest &request);

      /**
       * @summary Queries a list of Internet Shared Bandwidth instances in a region.
       *
       * @param request DescribeCommonBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonBandwidthPackagesResponse
       */
      Models::DescribeCommonBandwidthPackagesResponse describeCommonBandwidthPackagesWithOptions(const Models::DescribeCommonBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Internet Shared Bandwidth instances in a region.
       *
       * @param request DescribeCommonBandwidthPackagesRequest
       * @return DescribeCommonBandwidthPackagesResponse
       */
      Models::DescribeCommonBandwidthPackagesResponse describeCommonBandwidthPackages(const Models::DescribeCommonBandwidthPackagesRequest &request);

      /**
       * @summary Queries details of a customer gateway.
       *
       * @param request DescribeCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerGatewayResponse
       */
      Models::DescribeCustomerGatewayResponse describeCustomerGatewayWithOptions(const Models::DescribeCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of a customer gateway.
       *
       * @param request DescribeCustomerGatewayRequest
       * @return DescribeCustomerGatewayResponse
       */
      Models::DescribeCustomerGatewayResponse describeCustomerGateway(const Models::DescribeCustomerGatewayRequest &request);

      /**
       * @summary Queries customer gateways.
       *
       * @param request DescribeCustomerGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerGatewaysResponse
       */
      Models::DescribeCustomerGatewaysResponse describeCustomerGatewaysWithOptions(const Models::DescribeCustomerGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries customer gateways.
       *
       * @param request DescribeCustomerGatewaysRequest
       * @return DescribeCustomerGatewaysResponse
       */
      Models::DescribeCustomerGatewaysResponse describeCustomerGateways(const Models::DescribeCustomerGatewaysRequest &request);

      /**
       * @summary Queries whether permissions on a virtual private cloud (VPC) are granted to a virtual border router (VBR).
       *
       * @param request DescribeEcGrantRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEcGrantRelationResponse
       */
      Models::DescribeEcGrantRelationResponse describeEcGrantRelationWithOptions(const Models::DescribeEcGrantRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether permissions on a virtual private cloud (VPC) are granted to a virtual border router (VBR).
       *
       * @param request DescribeEcGrantRelationRequest
       * @return DescribeEcGrantRelationResponse
       */
      Models::DescribeEcGrantRelationResponse describeEcGrantRelation(const Models::DescribeEcGrantRelationRequest &request);

      /**
       * @summary Queries elastic IP addresses (EIPs) created in a region.
       *
       * @description You can call this operation to query information about EIPs in a region, including maximum bandwidth, billing methods, and associated instances.
       *
       * @param request DescribeEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddressesWithOptions(const Models::DescribeEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic IP addresses (EIPs) created in a region.
       *
       * @description You can call this operation to query information about EIPs in a region, including maximum bandwidth, billing methods, and associated instances.
       *
       * @param request DescribeEipAddressesRequest
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddresses(const Models::DescribeEipAddressesRequest &request);

      /**
       * @summary Queries the gateway and subnet mask of an elastic IP address (EIP).
       *
       * @description You can query only EIPs that are associated with secondary elastic network interfaces (ENIs) in multi-EIP-to-ENI mode.
       *
       * @param request DescribeEipGatewayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipGatewayInfoResponse
       */
      Models::DescribeEipGatewayInfoResponse describeEipGatewayInfoWithOptions(const Models::DescribeEipGatewayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the gateway and subnet mask of an elastic IP address (EIP).
       *
       * @description You can query only EIPs that are associated with secondary elastic network interfaces (ENIs) in multi-EIP-to-ENI mode.
       *
       * @param request DescribeEipGatewayInfoRequest
       * @return DescribeEipGatewayInfoResponse
       */
      Models::DescribeEipGatewayInfoResponse describeEipGatewayInfo(const Models::DescribeEipGatewayInfoRequest &request);

      /**
       * @summary Queries the monitoring data of an elastic IP address (EIP). You can query monitoring data within the last 30 days, and obtain up to 400 data points in each request.
       *
       * @description To improve user experience in querying monitoring data, we recommend that you call the DescribeMetricList API operation provided by CloudMonitor to query EIP monitoring data. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [EIP monitoring data](https://help.aliyun.com/document_detail/162874.html).
       *
       * @param request DescribeEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorDataWithOptions(const Models::DescribeEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of an elastic IP address (EIP). You can query monitoring data within the last 30 days, and obtain up to 400 data points in each request.
       *
       * @description To improve user experience in querying monitoring data, we recommend that you call the DescribeMetricList API operation provided by CloudMonitor to query EIP monitoring data. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [EIP monitoring data](https://help.aliyun.com/document_detail/162874.html).
       *
       * @param request DescribeEipMonitorDataRequest
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorData(const Models::DescribeEipMonitorDataRequest &request);

      /**
       * @summary Queries contiguous elastic IP address (EIP) groups.
       *
       * @param request DescribeEipSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipSegmentResponse
       */
      Models::DescribeEipSegmentResponse describeEipSegmentWithOptions(const Models::DescribeEipSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries contiguous elastic IP address (EIP) groups.
       *
       * @param request DescribeEipSegmentRequest
       * @return DescribeEipSegmentResponse
       */
      Models::DescribeEipSegmentResponse describeEipSegment(const Models::DescribeEipSegmentRequest &request);

      /**
       * @summary Queries the quality of service (QoS) policies of Express Connect. The response can be displayed by page.
       *
       * @param request DescribeExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosResponse
       */
      Models::DescribeExpressConnectTrafficQosResponse describeExpressConnectTrafficQosWithOptions(const Models::DescribeExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quality of service (QoS) policies of Express Connect. The response can be displayed by page.
       *
       * @param request DescribeExpressConnectTrafficQosRequest
       * @return DescribeExpressConnectTrafficQosResponse
       */
      Models::DescribeExpressConnectTrafficQosResponse describeExpressConnectTrafficQos(const Models::DescribeExpressConnectTrafficQosRequest &request);

      /**
       * @summary Queries the information about the quality of service (QoS) queues of the Express Connect circuit.
       *
       * @param request DescribeExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosQueueResponse
       */
      Models::DescribeExpressConnectTrafficQosQueueResponse describeExpressConnectTrafficQosQueueWithOptions(const Models::DescribeExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the quality of service (QoS) queues of the Express Connect circuit.
       *
       * @param request DescribeExpressConnectTrafficQosQueueRequest
       * @return DescribeExpressConnectTrafficQosQueueResponse
       */
      Models::DescribeExpressConnectTrafficQosQueueResponse describeExpressConnectTrafficQosQueue(const Models::DescribeExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Queries quality of service (QoS) rules. Paging parameters are not supported.
       *
       * @param request DescribeExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosRuleResponse
       */
      Models::DescribeExpressConnectTrafficQosRuleResponse describeExpressConnectTrafficQosRuleWithOptions(const Models::DescribeExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality of service (QoS) rules. Paging parameters are not supported.
       *
       * @param request DescribeExpressConnectTrafficQosRuleRequest
       * @return DescribeExpressConnectTrafficQosRuleResponse
       */
      Models::DescribeExpressConnectTrafficQosRuleResponse describeExpressConnectTrafficQosRule(const Models::DescribeExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Queries failover tests.
       *
       * @param request DescribeFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailoverTestJobResponse
       */
      Models::DescribeFailoverTestJobResponse describeFailoverTestJobWithOptions(const Models::DescribeFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries failover tests.
       *
       * @param request DescribeFailoverTestJobRequest
       * @return DescribeFailoverTestJobResponse
       */
      Models::DescribeFailoverTestJobResponse describeFailoverTestJob(const Models::DescribeFailoverTestJobRequest &request);

      /**
       * @summary Queries failover tests for Express Connect.
       *
       * @param request DescribeFailoverTestJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailoverTestJobsResponse
       */
      Models::DescribeFailoverTestJobsResponse describeFailoverTestJobsWithOptions(const Models::DescribeFailoverTestJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries failover tests for Express Connect.
       *
       * @param request DescribeFailoverTestJobsRequest
       * @return DescribeFailoverTestJobsResponse
       */
      Models::DescribeFailoverTestJobsResponse describeFailoverTestJobs(const Models::DescribeFailoverTestJobsRequest &request);

      /**
       * @summary Query flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogsWithOptions(const Models::DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogs(const Models::DescribeFlowLogsRequest &request);

      /**
       * @summary Queries DNAT entries.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DNAT entries.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @summary Queries Global Accelerator (GA) instances.
       *
       * @param request DescribeGlobalAccelerationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalAccelerationInstancesResponse
       */
      Models::DescribeGlobalAccelerationInstancesResponse describeGlobalAccelerationInstancesWithOptions(const Models::DescribeGlobalAccelerationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Global Accelerator (GA) instances.
       *
       * @param request DescribeGlobalAccelerationInstancesRequest
       * @return DescribeGlobalAccelerationInstancesResponse
       */
      Models::DescribeGlobalAccelerationInstancesResponse describeGlobalAccelerationInstances(const Models::DescribeGlobalAccelerationInstancesRequest &request);

      /**
       * @summary 查询指定网络实例（VPC、VBR）的云企业网跨账号授权信息
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定网络实例（VPC、VBR）的云企业网跨账号授权信息
       *
       * @param request DescribeGrantRulesToCenRequest
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCen(const Models::DescribeGrantRulesToCenRequest &request);

      /**
       * @summary Queries the cross-account authorization list of an Express Connect Router (ECR).
       *
       * @param request DescribeGrantRulesToEcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToEcrResponse
       */
      Models::DescribeGrantRulesToEcrResponse describeGrantRulesToEcrWithOptions(const Models::DescribeGrantRulesToEcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization list of an Express Connect Router (ECR).
       *
       * @param request DescribeGrantRulesToEcrRequest
       * @return DescribeGrantRulesToEcrResponse
       */
      Models::DescribeGrantRulesToEcrResponse describeGrantRulesToEcr(const Models::DescribeGrantRulesToEcrRequest &request);

      /**
       * @summary Queries HaVips in a region.
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries HaVips in a region.
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries configurations about the fine-grained monitoring feature of an elastic IP address (EIP).
       *
       * @param request DescribeHighDefinitionMonitorLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHighDefinitionMonitorLogAttributeResponse
       */
      Models::DescribeHighDefinitionMonitorLogAttributeResponse describeHighDefinitionMonitorLogAttributeWithOptions(const Models::DescribeHighDefinitionMonitorLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configurations about the fine-grained monitoring feature of an elastic IP address (EIP).
       *
       * @param request DescribeHighDefinitionMonitorLogAttributeRequest
       * @return DescribeHighDefinitionMonitorLogAttributeResponse
       */
      Models::DescribeHighDefinitionMonitorLogAttributeResponse describeHighDefinitionMonitorLogAttribute(const Models::DescribeHighDefinitionMonitorLogAttributeRequest &request);

      /**
       * @summary Queries the details of an access control list (ACL), including the specified IP addresses and associated IPv6 mapping entries.
       *
       * @param request DescribeIPv6TranslatorAclListAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorAclListAttributesResponse
       */
      Models::DescribeIPv6TranslatorAclListAttributesResponse describeIPv6TranslatorAclListAttributesWithOptions(const Models::DescribeIPv6TranslatorAclListAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control list (ACL), including the specified IP addresses and associated IPv6 mapping entries.
       *
       * @param request DescribeIPv6TranslatorAclListAttributesRequest
       * @return DescribeIPv6TranslatorAclListAttributesResponse
       */
      Models::DescribeIPv6TranslatorAclListAttributesResponse describeIPv6TranslatorAclListAttributes(const Models::DescribeIPv6TranslatorAclListAttributesRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorAclLists is deprecated
       *
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeIPv6TranslatorAclListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorAclListsResponse
       */
      Models::DescribeIPv6TranslatorAclListsResponse describeIPv6TranslatorAclListsWithOptions(const Models::DescribeIPv6TranslatorAclListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorAclLists is deprecated
       *
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeIPv6TranslatorAclListsRequest
       * @return DescribeIPv6TranslatorAclListsResponse
       */
      Models::DescribeIPv6TranslatorAclListsResponse describeIPv6TranslatorAclLists(const Models::DescribeIPv6TranslatorAclListsRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorEntries is deprecated
       *
       * @summary Queries IPv6 mapping entries.
       *
       * @param request DescribeIPv6TranslatorEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorEntriesResponse
       */
      Models::DescribeIPv6TranslatorEntriesResponse describeIPv6TranslatorEntriesWithOptions(const Models::DescribeIPv6TranslatorEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorEntries is deprecated
       *
       * @summary Queries IPv6 mapping entries.
       *
       * @param request DescribeIPv6TranslatorEntriesRequest
       * @return DescribeIPv6TranslatorEntriesResponse
       */
      Models::DescribeIPv6TranslatorEntriesResponse describeIPv6TranslatorEntries(const Models::DescribeIPv6TranslatorEntriesRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6Translators is deprecated
       *
       * @summary Queries IPv6 Translation Service instances.
       *
       * @param request DescribeIPv6TranslatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorsResponse
       */
      Models::DescribeIPv6TranslatorsResponse describeIPv6TranslatorsWithOptions(const Models::DescribeIPv6TranslatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6Translators is deprecated
       *
       * @summary Queries IPv6 Translation Service instances.
       *
       * @param request DescribeIPv6TranslatorsRequest
       * @return DescribeIPv6TranslatorsResponse
       */
      Models::DescribeIPv6TranslatorsResponse describeIPv6Translators(const Models::DescribeIPv6TranslatorsRequest &request);

      /**
       * @summary Queries IPv6 addresses in a region.
       *
       * @param request DescribeIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6AddressesResponse
       */
      Models::DescribeIpv6AddressesResponse describeIpv6AddressesWithOptions(const Models::DescribeIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv6 addresses in a region.
       *
       * @param request DescribeIpv6AddressesRequest
       * @return DescribeIpv6AddressesResponse
       */
      Models::DescribeIpv6AddressesResponse describeIpv6Addresses(const Models::DescribeIpv6AddressesRequest &request);

      /**
       * @summary Queries egress-only rules.
       *
       * @param request DescribeIpv6EgressOnlyRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6EgressOnlyRulesResponse
       */
      Models::DescribeIpv6EgressOnlyRulesResponse describeIpv6EgressOnlyRulesWithOptions(const Models::DescribeIpv6EgressOnlyRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries egress-only rules.
       *
       * @param request DescribeIpv6EgressOnlyRulesRequest
       * @return DescribeIpv6EgressOnlyRulesResponse
       */
      Models::DescribeIpv6EgressOnlyRulesResponse describeIpv6EgressOnlyRules(const Models::DescribeIpv6EgressOnlyRulesRequest &request);

      /**
       * @summary Queries the information about an IPv6 gateway, including the region, virtual private cloud (VPC), status, and billing method.
       *
       * @param request DescribeIpv6GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6GatewayAttributeResponse
       */
      Models::DescribeIpv6GatewayAttributeResponse describeIpv6GatewayAttributeWithOptions(const Models::DescribeIpv6GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an IPv6 gateway, including the region, virtual private cloud (VPC), status, and billing method.
       *
       * @param request DescribeIpv6GatewayAttributeRequest
       * @return DescribeIpv6GatewayAttributeResponse
       */
      Models::DescribeIpv6GatewayAttributeResponse describeIpv6GatewayAttribute(const Models::DescribeIpv6GatewayAttributeRequest &request);

      /**
       * @summary Queries IPv6 gateways in a region.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6GatewaysWithOptions(const Models::DescribeIpv6GatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv6 gateways in a region.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6Gateways(const Models::DescribeIpv6GatewaysRequest &request);

      /**
       * @summary Queries elastic network interfaces (ENIs) associated with a virtual private cloud (VPC) NAT gateway when the VPC NAT gateway serves as a PrivateLink service resource. This feature is not publicly available.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfacesWithOptions(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic network interfaces (ENIs) associated with a virtual private cloud (VPC) NAT gateway when the VPC NAT gateway serves as a PrivateLink service resource. This feature is not publicly available.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfaces(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request);

      /**
       * @summary Queries NAT gateways that meet specific conditions in a specified region.
       *
       * @description You can call this operation to query both Virtual Private Cloud (VPC) NAT gateways and Internet NAT gateways. NAT gateways in this topic refer to both VPC NAT gateways and Internet NAT gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries NAT gateways that meet specific conditions in a specified region.
       *
       * @description You can call this operation to query both Virtual Private Cloud (VPC) NAT gateways and Internet NAT gateways. NAT gateways in this topic refer to both VPC NAT gateways and Internet NAT gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary Queries network access control lists (ACLs).
       *
       * @param request DescribeNetworkAclAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclAttributesResponse
       */
      Models::DescribeNetworkAclAttributesResponse describeNetworkAclAttributesWithOptions(const Models::DescribeNetworkAclAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network access control lists (ACLs).
       *
       * @param request DescribeNetworkAclAttributesRequest
       * @return DescribeNetworkAclAttributesResponse
       */
      Models::DescribeNetworkAclAttributesResponse describeNetworkAclAttributes(const Models::DescribeNetworkAclAttributesRequest &request);

      /**
       * @summary Queries network ACLs.
       *
       * @param request DescribeNetworkAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAclsWithOptions(const Models::DescribeNetworkAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network ACLs.
       *
       * @param request DescribeNetworkAclsRequest
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAcls(const Models::DescribeNetworkAclsRequest &request);

      /**
       * @summary 查询物理专线LOA信息
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOAWithOptions(const Models::DescribePhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询物理专线LOA信息
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOA(const Models::DescribePhysicalConnectionLOARequest &request);

      /**
       * @summary Queries Express Connect circuits in a region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can query Express Connect circuits that meet specific conditions by specifying filter conditions provided by the **DescribePhysicalConnections** operation. For more information about the supported filter conditions, see **Key** in the **Request parameters** section.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Express Connect circuits in a region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can query Express Connect circuits that meet specific conditions by specifying filter conditions provided by the **DescribePhysicalConnections** operation. For more information about the supported filter conditions, see **Key** in the **Request parameters** section.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnections(const Models::DescribePhysicalConnectionsRequest &request);

      /**
       * @summary Queries the public IP address range of a virtual private cloud (VPC) in a region.
       *
       * @description You cannot query the range of public IP addresses of a classic network by calling the **DescribePublicIpAddress** operation.
       *
       * @param request DescribePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublicIpAddressResponse
       */
      Models::DescribePublicIpAddressResponse describePublicIpAddressWithOptions(const Models::DescribePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the public IP address range of a virtual private cloud (VPC) in a region.
       *
       * @description You cannot query the range of public IP addresses of a classic network by calling the **DescribePublicIpAddress** operation.
       *
       * @param request DescribePublicIpAddressRequest
       * @return DescribePublicIpAddressResponse
       */
      Models::DescribePublicIpAddressResponse describePublicIpAddress(const Models::DescribePublicIpAddressRequest &request);

      /**
       * @summary Queries the most recent region list.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent region list.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries information about route entries in a route table.
       *
       * @description Before you call the [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) operation to delete a route, you can call this operation to query the next hop of the route that you want to delete.
       *
       * @param request DescribeRouteEntryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryListWithOptions(const Models::DescribeRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about route entries in a route table.
       *
       * @description Before you call the [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) operation to delete a route, you can call this operation to query the next hop of the route that you want to delete.
       *
       * @param request DescribeRouteEntryListRequest
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryList(const Models::DescribeRouteEntryListRequest &request);

      /**
       * @summary Queries route tables.
       *
       * @param request DescribeRouteTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTableListResponse
       */
      Models::DescribeRouteTableListResponse describeRouteTableListWithOptions(const Models::DescribeRouteTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route tables.
       *
       * @param request DescribeRouteTableListRequest
       * @return DescribeRouteTableListResponse
       */
      Models::DescribeRouteTableListResponse describeRouteTableList(const Models::DescribeRouteTableListRequest &request);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary Queries route tables.
       *
       * @param request DescribeRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTablesWithOptions(const Models::DescribeRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary Queries route tables.
       *
       * @param request DescribeRouteTablesRequest
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTables(const Models::DescribeRouteTablesRequest &request);

      /**
       * @summary Queries the configuration of a router interface.
       *
       * @param request DescribeRouterInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouterInterfaceAttributeResponse
       */
      Models::DescribeRouterInterfaceAttributeResponse describeRouterInterfaceAttributeWithOptions(const Models::DescribeRouterInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a router interface.
       *
       * @param request DescribeRouterInterfaceAttributeRequest
       * @return DescribeRouterInterfaceAttributeResponse
       */
      Models::DescribeRouterInterfaceAttributeResponse describeRouterInterfaceAttribute(const Models::DescribeRouterInterfaceAttributeRequest &request);

      /**
       * @summary Queries router interfaces in a specified region.
       *
       * @param request DescribeRouterInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfacesWithOptions(const Models::DescribeRouterInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries router interfaces in a specified region.
       *
       * @param request DescribeRouterInterfacesRequest
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfaces(const Models::DescribeRouterInterfacesRequest &request);

      /**
       * @summary Queries Global Accelerator (GA) instances that are associated with a backend server.
       *
       * @description > You can call this operation to query only dedicated-bandwidth GA instances.
       *
       * @param request DescribeServerRelatedGlobalAccelerationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerRelatedGlobalAccelerationInstancesResponse
       */
      Models::DescribeServerRelatedGlobalAccelerationInstancesResponse describeServerRelatedGlobalAccelerationInstancesWithOptions(const Models::DescribeServerRelatedGlobalAccelerationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Global Accelerator (GA) instances that are associated with a backend server.
       *
       * @description > You can call this operation to query only dedicated-bandwidth GA instances.
       *
       * @param request DescribeServerRelatedGlobalAccelerationInstancesRequest
       * @return DescribeServerRelatedGlobalAccelerationInstancesResponse
       */
      Models::DescribeServerRelatedGlobalAccelerationInstancesResponse describeServerRelatedGlobalAccelerationInstances(const Models::DescribeServerRelatedGlobalAccelerationInstancesRequest &request);

      /**
       * @summary Queries SNAT entries.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntriesWithOptions(const Models::DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SNAT entries.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntries(const Models::DescribeSnatTableEntriesRequest &request);

      /**
       * @summary Queries the details of an SSL client certificate.
       *
       * @param request DescribeSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientCertResponse
       */
      Models::DescribeSslVpnClientCertResponse describeSslVpnClientCertWithOptions(const Models::DescribeSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an SSL client certificate.
       *
       * @param request DescribeSslVpnClientCertRequest
       * @return DescribeSslVpnClientCertResponse
       */
      Models::DescribeSslVpnClientCertResponse describeSslVpnClientCert(const Models::DescribeSslVpnClientCertRequest &request);

      /**
       * @summary Queries SSL client certificates.
       *
       * @param request DescribeSslVpnClientCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientCertsResponse
       */
      Models::DescribeSslVpnClientCertsResponse describeSslVpnClientCertsWithOptions(const Models::DescribeSslVpnClientCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SSL client certificates.
       *
       * @param request DescribeSslVpnClientCertsRequest
       * @return DescribeSslVpnClientCertsResponse
       */
      Models::DescribeSslVpnClientCertsResponse describeSslVpnClientCerts(const Models::DescribeSslVpnClientCertsRequest &request);

      /**
       * @summary Queries the clients that have connected to a VPN gateway through SSL-VPN connections.
       *
       * @description If your VPN gateway was created before December 10, 2022, you need to upgrade the VPN gateway to the latest version to view the connection information about SSL clients. For more information, see [Upgrade a VPN gateway](https://help.aliyun.com/document_detail/2671058.html).
       * If your VPN gateway was created after December 10, 2022, you can view the connection information about SSL clients by default.
       *
       * @param request DescribeSslVpnClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientsResponse
       */
      Models::DescribeSslVpnClientsResponse describeSslVpnClientsWithOptions(const Models::DescribeSslVpnClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clients that have connected to a VPN gateway through SSL-VPN connections.
       *
       * @description If your VPN gateway was created before December 10, 2022, you need to upgrade the VPN gateway to the latest version to view the connection information about SSL clients. For more information, see [Upgrade a VPN gateway](https://help.aliyun.com/document_detail/2671058.html).
       * If your VPN gateway was created after December 10, 2022, you can view the connection information about SSL clients by default.
       *
       * @param request DescribeSslVpnClientsRequest
       * @return DescribeSslVpnClientsResponse
       */
      Models::DescribeSslVpnClientsResponse describeSslVpnClients(const Models::DescribeSslVpnClientsRequest &request);

      /**
       * @summary Queries one or more SSL-VPN servers.
       *
       * @param request DescribeSslVpnServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnServersResponse
       */
      Models::DescribeSslVpnServersResponse describeSslVpnServersWithOptions(const Models::DescribeSslVpnServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more SSL-VPN servers.
       *
       * @param request DescribeSslVpnServersRequest
       * @return DescribeSslVpnServersResponse
       */
      Models::DescribeSslVpnServersResponse describeSslVpnServers(const Models::DescribeSslVpnServersRequest &request);

      /**
       * @summary Queries tag keys.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @param request DescribeTagKeysRequest
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeys(const Models::DescribeTagKeysRequest &request);

      /**
       * @summary Queries the tags of an Express Connect circuit.
       *
       * @param request DescribeTagKeysForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysForExpressConnectResponse
       */
      Models::DescribeTagKeysForExpressConnectResponse describeTagKeysForExpressConnectWithOptions(const Models::DescribeTagKeysForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of an Express Connect circuit.
       *
       * @param request DescribeTagKeysForExpressConnectRequest
       * @return DescribeTagKeysForExpressConnectResponse
       */
      Models::DescribeTagKeysForExpressConnectResponse describeTagKeysForExpressConnect(const Models::DescribeTagKeysForExpressConnectRequest &request);

      /**
       * @summary Queries tags that meet the specified filter conditions.
       *
       * @description *   You must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object that you want to query.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, all tags that match the key-value pairs are returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags that meet the specified filter conditions.
       *
       * @description *   You must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object that you want to query.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, all tags that match the key-value pairs are returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries vRouters in a region.
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries vRouters in a region.
       *
       * @param request DescribeVRoutersRequest
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRouters(const Models::DescribeVRoutersRequest &request);

      /**
       * @summary Queries the detailed information about a vSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributesWithOptions(const Models::DescribeVSwitchAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a vSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributes(const Models::DescribeVSwitchAttributesRequest &request);

      /**
       * @summary Queries the information about available vSwitches that are used for an internal network.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about available vSwitches that are used for an internal network.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries virtual border router (VBR) failover groups.
       *
       * @param request DescribeVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVbrHaResponse
       */
      Models::DescribeVbrHaResponse describeVbrHaWithOptions(const Models::DescribeVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual border router (VBR) failover groups.
       *
       * @param request DescribeVbrHaRequest
       * @return DescribeVbrHaResponse
       */
      Models::DescribeVbrHaResponse describeVbrHa(const Models::DescribeVbrHaRequest &request);

      /**
       * @summary Queries the routes of an IPsec-VPN connection.
       *
       * @param request DescribeVcoRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVcoRouteEntriesResponse
       */
      Models::DescribeVcoRouteEntriesResponse describeVcoRouteEntriesWithOptions(const Models::DescribeVcoRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes of an IPsec-VPN connection.
       *
       * @param request DescribeVcoRouteEntriesRequest
       * @return DescribeVcoRouteEntriesResponse
       */
      Models::DescribeVcoRouteEntriesResponse describeVcoRouteEntries(const Models::DescribeVcoRouteEntriesRequest &request);

      /**
       * @summary Queries virtual border routers (VBRs).
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRoutersWithOptions(const Models::DescribeVirtualBorderRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual border routers (VBRs).
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRouters(const Models::DescribeVirtualBorderRoutersRequest &request);

      /**
       * @summary Queries the virtual border routers (VBRs) that are associated with an Express Connect circuit. The VBRs can be created by the owner of the Express Connect circuit and by other Alibaba Cloud accounts.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnectionWithOptions(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual border routers (VBRs) that are associated with an Express Connect circuit. The VBRs can be created by the owner of the Express Connect circuit and by other Alibaba Cloud accounts.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnection(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request);

      /**
       * @summary Queries the configuration of a virtual private cloud (VPC).
       *
       * @param request DescribeVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcAttributeResponse
       */
      Models::DescribeVpcAttributeResponse describeVpcAttributeWithOptions(const Models::DescribeVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a virtual private cloud (VPC).
       *
       * @param request DescribeVpcAttributeRequest
       * @return DescribeVpcAttributeResponse
       */
      Models::DescribeVpcAttributeResponse describeVpcAttribute(const Models::DescribeVpcAttributeRequest &request);

      /**
       * @summary Queries the cross-account authorization information of an ECR for a specified network instance.
       *
       * @param request DescribeVpcGrantRulesToEcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcGrantRulesToEcrResponse
       */
      Models::DescribeVpcGrantRulesToEcrResponse describeVpcGrantRulesToEcrWithOptions(const Models::DescribeVpcGrantRulesToEcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization information of an ECR for a specified network instance.
       *
       * @param request DescribeVpcGrantRulesToEcrRequest
       * @return DescribeVpcGrantRulesToEcrResponse
       */
      Models::DescribeVpcGrantRulesToEcrResponse describeVpcGrantRulesToEcr(const Models::DescribeVpcGrantRulesToEcrRequest &request);

      /**
       * @summary Queries virtual private clouds (VPCs).
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual private clouds (VPCs).
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries the IPsec-VPN connections associated with a transit router.
       *
       * @param request DescribeVpnAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnAttachmentsResponse
       */
      Models::DescribeVpnAttachmentsResponse describeVpnAttachmentsWithOptions(const Models::DescribeVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPsec-VPN connections associated with a transit router.
       *
       * @param request DescribeVpnAttachmentsRequest
       * @return DescribeVpnAttachmentsResponse
       */
      Models::DescribeVpnAttachmentsResponse describeVpnAttachments(const Models::DescribeVpnAttachmentsRequest &request);

      /**
       * @summary Queries the detailed information about an IPsec-VPN connection.
       *
       * @param request DescribeVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionResponse
       */
      Models::DescribeVpnConnectionResponse describeVpnConnectionWithOptions(const Models::DescribeVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an IPsec-VPN connection.
       *
       * @param request DescribeVpnConnectionRequest
       * @return DescribeVpnConnectionResponse
       */
      Models::DescribeVpnConnectionResponse describeVpnConnection(const Models::DescribeVpnConnectionRequest &request);

      /**
       * @summary Queries logs of IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionLogsResponse
       */
      Models::DescribeVpnConnectionLogsResponse describeVpnConnectionLogsWithOptions(const Models::DescribeVpnConnectionLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries logs of IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionLogsRequest
       * @return DescribeVpnConnectionLogsResponse
       */
      Models::DescribeVpnConnectionLogsResponse describeVpnConnectionLogs(const Models::DescribeVpnConnectionLogsRequest &request);

      /**
       * @summary Queries IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionsResponse
       */
      Models::DescribeVpnConnectionsResponse describeVpnConnectionsWithOptions(const Models::DescribeVpnConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionsRequest
       * @return DescribeVpnConnectionsResponse
       */
      Models::DescribeVpnConnectionsResponse describeVpnConnections(const Models::DescribeVpnConnectionsRequest &request);

      /**
       * @summary Queries the cross-account authorization information about an IPsec-VPN connection.
       *
       * @param request DescribeVpnCrossAccountAuthorizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnCrossAccountAuthorizationsResponse
       */
      Models::DescribeVpnCrossAccountAuthorizationsResponse describeVpnCrossAccountAuthorizationsWithOptions(const Models::DescribeVpnCrossAccountAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization information about an IPsec-VPN connection.
       *
       * @param request DescribeVpnCrossAccountAuthorizationsRequest
       * @return DescribeVpnCrossAccountAuthorizationsResponse
       */
      Models::DescribeVpnCrossAccountAuthorizationsResponse describeVpnCrossAccountAuthorizations(const Models::DescribeVpnCrossAccountAuthorizationsRequest &request);

      /**
       * @summary Queries the detailed information about a VPN gateway.
       *
       * @param request DescribeVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGatewayWithOptions(const Models::DescribeVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a VPN gateway.
       *
       * @param request DescribeVpnGatewayRequest
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGateway(const Models::DescribeVpnGatewayRequest &request);

      /**
       * @summary Queries zones that support IPsec-VPN connections in a region.
       *
       * @param request DescribeVpnGatewayAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayAvailableZonesResponse
       */
      Models::DescribeVpnGatewayAvailableZonesResponse describeVpnGatewayAvailableZonesWithOptions(const Models::DescribeVpnGatewayAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries zones that support IPsec-VPN connections in a region.
       *
       * @param request DescribeVpnGatewayAvailableZonesRequest
       * @return DescribeVpnGatewayAvailableZonesResponse
       */
      Models::DescribeVpnGatewayAvailableZonesResponse describeVpnGatewayAvailableZones(const Models::DescribeVpnGatewayAvailableZonesRequest &request);

      /**
       * @summary Queries VPN gateways in a region.
       *
       * @param request DescribeVpnGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewaysResponse
       */
      Models::DescribeVpnGatewaysResponse describeVpnGatewaysWithOptions(const Models::DescribeVpnGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries VPN gateways in a region.
       *
       * @param request DescribeVpnGatewaysRequest
       * @return DescribeVpnGatewaysResponse
       */
      Models::DescribeVpnGatewaysResponse describeVpnGateways(const Models::DescribeVpnGatewaysRequest &request);

      /**
       * @summary Queries policy-based routes configured for a VPN gateway.
       *
       * @param request DescribeVpnPbrRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnPbrRouteEntriesResponse
       */
      Models::DescribeVpnPbrRouteEntriesResponse describeVpnPbrRouteEntriesWithOptions(const Models::DescribeVpnPbrRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policy-based routes configured for a VPN gateway.
       *
       * @param request DescribeVpnPbrRouteEntriesRequest
       * @return DescribeVpnPbrRouteEntriesResponse
       */
      Models::DescribeVpnPbrRouteEntriesResponse describeVpnPbrRouteEntries(const Models::DescribeVpnPbrRouteEntriesRequest &request);

      /**
       * @summary Queries destination-based and BGP route entries of a VPN gateway.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntriesWithOptions(const Models::DescribeVpnRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries destination-based and BGP route entries of a VPN gateway.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntries(const Models::DescribeVpnRouteEntriesRequest &request);

      /**
       * @summary Queries the log entries of an SSL server.
       *
       * @param request DescribeVpnSslServerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnSslServerLogsResponse
       */
      Models::DescribeVpnSslServerLogsResponse describeVpnSslServerLogsWithOptions(const Models::DescribeVpnSslServerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log entries of an SSL server.
       *
       * @param request DescribeVpnSslServerLogsRequest
       * @return DescribeVpnSslServerLogsResponse
       */
      Models::DescribeVpnSslServerLogsResponse describeVpnSslServerLogs(const Models::DescribeVpnSslServerLogsRequest &request);

      /**
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disassociates a DHCP options set from a virtual private cloud (VPC).
       *
       * @description ## [](#)Description
       * *   **DetachDhcpOptionsSetFromVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task.
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being disassociated.
       *     *   If the DHCP options set is in the **UnUsed** state, the DHCP options set is disassociated.
       * *   You cannot repeatedly call the **DetachDhcpOptionsSetFromVpc** operation to disassociate a DHCP options set from a VPC within the specified period of time.
       *
       * @param request DetachDhcpOptionsSetFromVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDhcpOptionsSetFromVpcResponse
       */
      Models::DetachDhcpOptionsSetFromVpcResponse detachDhcpOptionsSetFromVpcWithOptions(const Models::DetachDhcpOptionsSetFromVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a DHCP options set from a virtual private cloud (VPC).
       *
       * @description ## [](#)Description
       * *   **DetachDhcpOptionsSetFromVpc** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of the task.
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being disassociated.
       *     *   If the DHCP options set is in the **UnUsed** state, the DHCP options set is disassociated.
       * *   You cannot repeatedly call the **DetachDhcpOptionsSetFromVpc** operation to disassociate a DHCP options set from a VPC within the specified period of time.
       *
       * @param request DetachDhcpOptionsSetFromVpcRequest
       * @return DetachDhcpOptionsSetFromVpcResponse
       */
      Models::DetachDhcpOptionsSetFromVpcResponse detachDhcpOptionsSetFromVpc(const Models::DetachDhcpOptionsSetFromVpcRequest &request);

      /**
       * @summary Diagnoses IPsec-VPN connections.
       *
       * @description *   If the IPsec-VPN connection is in single-tunnel mode, the request parameter `VpnConnectionIds` is required when you call the **DiagnoseVpnConnections** operation.
       * *   If the IPsec-VPN connection is in dual-tunnel mode, the request parameter `TunnelIds` is required when you call the **DiagnoseVpnConnections** operation.
       * *   After you call the **DiagnoseVpnConnections** operation, if the current IPsec-VPN connection is faulty, the operation returns the corresponding error code (**FailedReasonCode**) and log (**SourceLog**). You can troubleshoot based on the error code and log information. For more information, see [Common errors and troubleshooting methods for IPsec-VPN connections](https://help.aliyun.com/document_detail/477862.html).
       *
       * @param request DiagnoseVpnConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseVpnConnectionsResponse
       */
      Models::DiagnoseVpnConnectionsResponse diagnoseVpnConnectionsWithOptions(const Models::DiagnoseVpnConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses IPsec-VPN connections.
       *
       * @description *   If the IPsec-VPN connection is in single-tunnel mode, the request parameter `VpnConnectionIds` is required when you call the **DiagnoseVpnConnections** operation.
       * *   If the IPsec-VPN connection is in dual-tunnel mode, the request parameter `TunnelIds` is required when you call the **DiagnoseVpnConnections** operation.
       * *   After you call the **DiagnoseVpnConnections** operation, if the current IPsec-VPN connection is faulty, the operation returns the corresponding error code (**FailedReasonCode**) and log (**SourceLog**). You can troubleshoot based on the error code and log information. For more information, see [Common errors and troubleshooting methods for IPsec-VPN connections](https://help.aliyun.com/document_detail/477862.html).
       *
       * @param request DiagnoseVpnConnectionsRequest
       * @return DiagnoseVpnConnectionsResponse
       */
      Models::DiagnoseVpnConnectionsResponse diagnoseVpnConnections(const Models::DiagnoseVpnConnectionsRequest &request);

      /**
       * @summary Diagnoses a VPN gateway.
       *
       * @param request DiagnoseVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGatewayWithOptions(const Models::DiagnoseVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses a VPN gateway.
       *
       * @param request DiagnoseVpnGatewayRequest
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGateway(const Models::DiagnoseVpnGatewayRequest &request);

      /**
       * @summary Disables ClassicLink for a virtual private cloud (VPC).
       *
       * @param request DisableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLinkWithOptions(const Models::DisableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables ClassicLink for a virtual private cloud (VPC).
       *
       * @param request DisableVpcClassicLinkRequest
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLink(const Models::DisableVpcClassicLinkRequest &request);

      /**
       * @summary Disassociates a gateway route table from an IPv4 gateway.
       *
       * @param request DissociateRouteTableFromGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateRouteTableFromGatewayResponse
       */
      Models::DissociateRouteTableFromGatewayResponse dissociateRouteTableFromGatewayWithOptions(const Models::DissociateRouteTableFromGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a gateway route table from an IPv4 gateway.
       *
       * @param request DissociateRouteTableFromGatewayRequest
       * @return DissociateRouteTableFromGatewayResponse
       */
      Models::DissociateRouteTableFromGatewayResponse dissociateRouteTableFromGateway(const Models::DissociateRouteTableFromGatewayRequest &request);

      /**
       * @summary Disassociates a gateway endpoint from a route table.
       *
       * @param request DissociateRouteTablesFromVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateRouteTablesFromVpcGatewayEndpointResponse
       */
      Models::DissociateRouteTablesFromVpcGatewayEndpointResponse dissociateRouteTablesFromVpcGatewayEndpointWithOptions(const Models::DissociateRouteTablesFromVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a gateway endpoint from a route table.
       *
       * @param request DissociateRouteTablesFromVpcGatewayEndpointRequest
       * @return DissociateRouteTablesFromVpcGatewayEndpointResponse
       */
      Models::DissociateRouteTablesFromVpcGatewayEndpointResponse dissociateRouteTablesFromVpcGatewayEndpoint(const Models::DissociateRouteTablesFromVpcGatewayEndpointRequest &request);

      /**
       * @summary Disassociates a certificate from a VPN gateway.
       *
       * @description *   **DissociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL certificate is being disassociated from the VPN gateway.
       *     *   If the VPN gateway is in the **active** state, the SSL certificate is disassociated from the VPN gateway.
       * *   You cannot repeatedly call **DissociateVpnGatewayWithCertificate** within a specific period of time.
       *
       * @param request DissociateVpnGatewayWithCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateVpnGatewayWithCertificateResponse
       */
      Models::DissociateVpnGatewayWithCertificateResponse dissociateVpnGatewayWithCertificateWithOptions(const Models::DissociateVpnGatewayWithCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a certificate from a VPN gateway.
       *
       * @description *   **DissociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL certificate is being disassociated from the VPN gateway.
       *     *   If the VPN gateway is in the **active** state, the SSL certificate is disassociated from the VPN gateway.
       * *   You cannot repeatedly call **DissociateVpnGatewayWithCertificate** within a specific period of time.
       *
       * @param request DissociateVpnGatewayWithCertificateRequest
       * @return DissociateVpnGatewayWithCertificateResponse
       */
      Models::DissociateVpnGatewayWithCertificateResponse dissociateVpnGatewayWithCertificate(const Models::DissociateVpnGatewayWithCertificateRequest &request);

      /**
       * @summary Queries the configuration of an IPsec-VPN connection.
       *
       * @param request DownloadVpnConnectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadVpnConnectionConfigResponse
       */
      Models::DownloadVpnConnectionConfigResponse downloadVpnConnectionConfigWithOptions(const Models::DownloadVpnConnectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an IPsec-VPN connection.
       *
       * @param request DownloadVpnConnectionConfigRequest
       * @return DownloadVpnConnectionConfigResponse
       */
      Models::DownloadVpnConnectionConfigResponse downloadVpnConnectionConfig(const Models::DownloadVpnConnectionConfigRequest &request);

      /**
       * @summary Enables an Express Connect circuit that is in the Confirmed state. After you perform this operation, the Express Connect circuit enters the Enabled state.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can enable only an Express Connect circuit that is in the **Confirmed** state.
       * *   After you enable an Express Connect circuit, it enters the **Enabled** state.
       * *   **EnablePhysicalConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribePhysicalConnections](https://help.aliyun.com/document_detail/36042.html) operation to query the status of the task.
       * *   You cannot repeatedly call **EnablePhysicalConnection** for an Express Connect circuit in the **Confirmed** state within a specific time period.
       *
       * @param request EnablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnectionWithOptions(const Models::EnablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an Express Connect circuit that is in the Confirmed state. After you perform this operation, the Express Connect circuit enters the Enabled state.
       *
       * @description When you call this operation, take note of the following limits:
       * *   You can enable only an Express Connect circuit that is in the **Confirmed** state.
       * *   After you enable an Express Connect circuit, it enters the **Enabled** state.
       * *   **EnablePhysicalConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribePhysicalConnections](https://help.aliyun.com/document_detail/36042.html) operation to query the status of the task.
       * *   You cannot repeatedly call **EnablePhysicalConnection** for an Express Connect circuit in the **Confirmed** state within a specific time period.
       *
       * @param request EnablePhysicalConnectionRequest
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnection(const Models::EnablePhysicalConnectionRequest &request);

      /**
       * @summary Enables ClassicLink for a VPC.
       *
       * @param request EnableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcClassicLinkResponse
       */
      Models::EnableVpcClassicLinkResponse enableVpcClassicLinkWithOptions(const Models::EnableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables ClassicLink for a VPC.
       *
       * @param request EnableVpcClassicLinkRequest
       * @return EnableVpcClassicLinkResponse
       */
      Models::EnableVpcClassicLinkResponse enableVpcClassicLink(const Models::EnableVpcClassicLinkRequest &request);

      /**
       * @summary Activates an IPv4 gateway.
       *
       * @description ## [](#)Description
       * *   **EnableVpcIpv4Gateway** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of an IPv4 gateway.
       *     *   If the IPv4 gateway is in the **Activating** state, the IPv4 gateway is being activated.
       *     *   If the IPv4 gateway is in the **Created** state, the IPv4 gateway is activated.
       * *   You cannot repeatedly call the **EnableVpcIpv4Gateway** operation to activate an IPv4 gateway within the specified period of time.
       *
       * @param request EnableVpcIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcIpv4GatewayResponse
       */
      Models::EnableVpcIpv4GatewayResponse enableVpcIpv4GatewayWithOptions(const Models::EnableVpcIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates an IPv4 gateway.
       *
       * @description ## [](#)Description
       * *   **EnableVpcIpv4Gateway** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) operation to query the status of an IPv4 gateway.
       *     *   If the IPv4 gateway is in the **Activating** state, the IPv4 gateway is being activated.
       *     *   If the IPv4 gateway is in the **Created** state, the IPv4 gateway is activated.
       * *   You cannot repeatedly call the **EnableVpcIpv4Gateway** operation to activate an IPv4 gateway within the specified period of time.
       *
       * @param request EnableVpcIpv4GatewayRequest
       * @return EnableVpcIpv4GatewayResponse
       */
      Models::EnableVpcIpv4GatewayResponse enableVpcIpv4Gateway(const Models::EnableVpcIpv4GatewayRequest &request);

      /**
       * @summary Queries a DHCP options set.
       *
       * @param request GetDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDhcpOptionsSetResponse
       */
      Models::GetDhcpOptionsSetResponse getDhcpOptionsSetWithOptions(const Models::GetDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a DHCP options set.
       *
       * @param request GetDhcpOptionsSetRequest
       * @return GetDhcpOptionsSetResponse
       */
      Models::GetDhcpOptionsSetResponse getDhcpOptionsSet(const Models::GetDhcpOptionsSetRequest &request);

      /**
       * @summary Queries the status of a flow log.
       *
       * @param request GetFlowLogServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowLogServiceStatusResponse
       */
      Models::GetFlowLogServiceStatusResponse getFlowLogServiceStatusWithOptions(const Models::GetFlowLogServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a flow log.
       *
       * @param request GetFlowLogServiceStatusRequest
       * @return GetFlowLogServiceStatusResponse
       */
      Models::GetFlowLogServiceStatusResponse getFlowLogServiceStatus(const Models::GetFlowLogServiceStatusRequest &request);

      /**
       * @summary Queries an IPv4 gateway.
       *
       * @param request GetIpv4GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpv4GatewayAttributeResponse
       */
      Models::GetIpv4GatewayAttributeResponse getIpv4GatewayAttributeWithOptions(const Models::GetIpv4GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an IPv4 gateway.
       *
       * @param request GetIpv4GatewayAttributeRequest
       * @return GetIpv4GatewayAttributeResponse
       */
      Models::GetIpv4GatewayAttributeResponse getIpv4GatewayAttribute(const Models::GetIpv4GatewayAttributeRequest &request);

      /**
       * @summary Queries information about a NAT gateway.
       *
       * @description You can call this operation to query information about a specified Internet NAT gateway or Virtual Private Cloud (VPC) NAT gateway. In this topic, "NAT gateway" refers to both gateway types.
       *
       * @param request GetNatGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttributeWithOptions(const Models::GetNatGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a NAT gateway.
       *
       * @description You can call this operation to query information about a specified Internet NAT gateway or Virtual Private Cloud (VPC) NAT gateway. In this topic, "NAT gateway" refers to both gateway types.
       *
       * @param request GetNatGatewayAttributeRequest
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttribute(const Models::GetNatGatewayAttributeRequest &request);

      /**
       * @summary 查询是否开通了出云流量服务
       *
       * @description You can call this API operation to query the status of outbound data transfer billing for the current account. For more information about outbound data transfer billing, see [Outbound data transfer billing](https://help.aliyun.com/document_detail/274385.html) and [Billing](https://help.aliyun.com/document_detail/54582.html).
       *
       * @param request GetPhysicalConnectionServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalConnectionServiceStatusResponse
       */
      Models::GetPhysicalConnectionServiceStatusResponse getPhysicalConnectionServiceStatusWithOptions(const Models::GetPhysicalConnectionServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询是否开通了出云流量服务
       *
       * @description You can call this API operation to query the status of outbound data transfer billing for the current account. For more information about outbound data transfer billing, see [Outbound data transfer billing](https://help.aliyun.com/document_detail/274385.html) and [Billing](https://help.aliyun.com/document_detail/54582.html).
       *
       * @param request GetPhysicalConnectionServiceStatusRequest
       * @return GetPhysicalConnectionServiceStatusResponse
       */
      Models::GetPhysicalConnectionServiceStatusResponse getPhysicalConnectionServiceStatus(const Models::GetPhysicalConnectionServiceStatusRequest &request);

      /**
       * @summary Queries whether the IP address pool feature is enabled.
       *
       * @param request GetPublicIpAddressPoolServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicIpAddressPoolServiceStatusResponse
       */
      Models::GetPublicIpAddressPoolServiceStatusResponse getPublicIpAddressPoolServiceStatusWithOptions(const Models::GetPublicIpAddressPoolServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the IP address pool feature is enabled.
       *
       * @param request GetPublicIpAddressPoolServiceStatusRequest
       * @return GetPublicIpAddressPoolServiceStatusResponse
       */
      Models::GetPublicIpAddressPoolServiceStatusResponse getPublicIpAddressPoolServiceStatus(const Models::GetPublicIpAddressPoolServiceStatusRequest &request);

      /**
       * @summary Get the route target group
       *
       * @description Get the information of the route target group instance.
       *
       * @param request GetRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRouteTargetGroupResponse
       */
      Models::GetRouteTargetGroupResponse getRouteTargetGroupWithOptions(const Models::GetRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the route target group
       *
       * @description Get the information of the route target group instance.
       *
       * @param request GetRouteTargetGroupRequest
       * @return GetRouteTargetGroupResponse
       */
      Models::GetRouteTargetGroupResponse getRouteTargetGroup(const Models::GetRouteTargetGroupRequest &request);

      /**
       * @summary Queries the status of the traffic mirror feature.
       *
       * @param request GetTrafficMirrorServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficMirrorServiceStatusResponse
       */
      Models::GetTrafficMirrorServiceStatusResponse getTrafficMirrorServiceStatusWithOptions(const Models::GetTrafficMirrorServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the traffic mirror feature.
       *
       * @param request GetTrafficMirrorServiceStatusRequest
       * @return GetTrafficMirrorServiceStatusResponse
       */
      Models::GetTrafficMirrorServiceStatusResponse getTrafficMirrorServiceStatus(const Models::GetTrafficMirrorServiceStatusRequest &request);

      /**
       * @summary Queries the usage of a prefix list.
       *
       * @param request GetVSwitchCidrReservationUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVSwitchCidrReservationUsageResponse
       */
      Models::GetVSwitchCidrReservationUsageResponse getVSwitchCidrReservationUsageWithOptions(const Models::GetVSwitchCidrReservationUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of a prefix list.
       *
       * @param request GetVSwitchCidrReservationUsageRequest
       * @return GetVSwitchCidrReservationUsageResponse
       */
      Models::GetVSwitchCidrReservationUsageResponse getVSwitchCidrReservationUsage(const Models::GetVSwitchCidrReservationUsageRequest &request);

      /**
       * @summary Queries the attributes of a gateway endpoint.
       *
       * @param request GetVpcGatewayEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcGatewayEndpointAttributeResponse
       */
      Models::GetVpcGatewayEndpointAttributeResponse getVpcGatewayEndpointAttributeWithOptions(const Models::GetVpcGatewayEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a gateway endpoint.
       *
       * @param request GetVpcGatewayEndpointAttributeRequest
       * @return GetVpcGatewayEndpointAttributeResponse
       */
      Models::GetVpcGatewayEndpointAttributeResponse getVpcGatewayEndpointAttribute(const Models::GetVpcGatewayEndpointAttributeRequest &request);

      /**
       * @summary Queries the resources that are associated with a prefix list.
       *
       * @param request GetVpcPrefixListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPrefixListAssociationsResponse
       */
      Models::GetVpcPrefixListAssociationsResponse getVpcPrefixListAssociationsWithOptions(const Models::GetVpcPrefixListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated with a prefix list.
       *
       * @param request GetVpcPrefixListAssociationsRequest
       * @return GetVpcPrefixListAssociationsResponse
       */
      Models::GetVpcPrefixListAssociationsResponse getVpcPrefixListAssociations(const Models::GetVpcPrefixListAssociationsRequest &request);

      /**
       * @summary Queries the information about a prefix list.
       *
       * @param request GetVpcPrefixListEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPrefixListEntriesResponse
       */
      Models::GetVpcPrefixListEntriesResponse getVpcPrefixListEntriesWithOptions(const Models::GetVpcPrefixListEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a prefix list.
       *
       * @param request GetVpcPrefixListEntriesRequest
       * @return GetVpcPrefixListEntriesResponse
       */
      Models::GetVpcPrefixListEntriesResponse getVpcPrefixListEntries(const Models::GetVpcPrefixListEntriesRequest &request);

      /**
       * @summary 查询路由类型的明细。
       *
       * @param request GetVpcRouteEntrySummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcRouteEntrySummaryResponse
       */
      Models::GetVpcRouteEntrySummaryResponse getVpcRouteEntrySummaryWithOptions(const Models::GetVpcRouteEntrySummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询路由类型的明细。
       *
       * @param request GetVpcRouteEntrySummaryRequest
       * @return GetVpcRouteEntrySummaryResponse
       */
      Models::GetVpcRouteEntrySummaryResponse getVpcRouteEntrySummary(const Models::GetVpcRouteEntrySummaryRequest &request);

      /**
       * @summary Queries the diagnostic result of a VPN gateway.
       *
       * @description When you call the **GetVpnGatewayDiagnoseResult** operation, you must specify one of **DiagnoseId** and **VpnGatewayId**.
       *
       * @param request GetVpnGatewayDiagnoseResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpnGatewayDiagnoseResultResponse
       */
      Models::GetVpnGatewayDiagnoseResultResponse getVpnGatewayDiagnoseResultWithOptions(const Models::GetVpnGatewayDiagnoseResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic result of a VPN gateway.
       *
       * @description When you call the **GetVpnGatewayDiagnoseResult** operation, you must specify one of **DiagnoseId** and **VpnGatewayId**.
       *
       * @param request GetVpnGatewayDiagnoseResultRequest
       * @return GetVpnGatewayDiagnoseResultResponse
       */
      Models::GetVpnGatewayDiagnoseResultResponse getVpnGatewayDiagnoseResult(const Models::GetVpnGatewayDiagnoseResultRequest &request);

      /**
       * @summary Grants permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description *   Before you can attach a network instance that belongs to another Alibaba Cloud account to your CEN instance, you must grant permissions to your CEN instance.
       * >  **GrantInstanceToCen** is a Virtual Private Cloud (VPC) operation. Therefore, you must use the `vpc.aliyuncs.com` domain name to call this operation. The API version is `2016-04-28`.
       * *   You cannot repeatedly call the **GrantInstanceToCen** operation to grant the permissions on a network instance to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
       *
       * @param request GrantInstanceToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCenWithOptions(const Models::GrantInstanceToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description *   Before you can attach a network instance that belongs to another Alibaba Cloud account to your CEN instance, you must grant permissions to your CEN instance.
       * >  **GrantInstanceToCen** is a Virtual Private Cloud (VPC) operation. Therefore, you must use the `vpc.aliyuncs.com` domain name to call this operation. The API version is `2016-04-28`.
       * *   You cannot repeatedly call the **GrantInstanceToCen** operation to grant the permissions on a network instance to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
       *
       * @param request GrantInstanceToCenRequest
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCen(const Models::GrantInstanceToCenRequest &request);

      /**
       * @summary Grants a virtual border router (VBR) the permissions to connect to a virtual private cloud (VPC) that belongs to another Alibaba Cloud account.
       *
       * @description ## Usage notes
       * When you connect a VBR to a VPC that belongs to another Alibaba Cloud account, the VBR must acquire the required permissions from the VPC.
       *
       * @param tmpReq GrantInstanceToVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbrWithOptions(const Models::GrantInstanceToVbrRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a virtual border router (VBR) the permissions to connect to a virtual private cloud (VPC) that belongs to another Alibaba Cloud account.
       *
       * @description ## Usage notes
       * When you connect a VBR to a VPC that belongs to another Alibaba Cloud account, the VBR must acquire the required permissions from the VPC.
       *
       * @param request GrantInstanceToVbrRequest
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbr(const Models::GrantInstanceToVbrRequest &request);

      /**
       * @summary Queries the access points of an Express Connect circuit.
       *
       * @param request ListBusinessAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPointsWithOptions(const Models::ListBusinessAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access points of an Express Connect circuit.
       *
       * @param request ListBusinessAccessPointsRequest
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPoints(const Models::ListBusinessAccessPointsRequest &request);

      /**
       * @summary Query the list of regions available for an Express Connect circuit.
       *
       * @param request ListBusinessRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessRegionsResponse
       */
      Models::ListBusinessRegionsResponse listBusinessRegionsWithOptions(const Models::ListBusinessRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of regions available for an Express Connect circuit.
       *
       * @param request ListBusinessRegionsRequest
       * @return ListBusinessRegionsResponse
       */
      Models::ListBusinessRegionsResponse listBusinessRegions(const Models::ListBusinessRegionsRequest &request);

      /**
       * @summary Queries Dynamic Host Configuration Protocol (DHCP) options sets.
       *
       * @param request ListDhcpOptionsSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDhcpOptionsSetsResponse
       */
      Models::ListDhcpOptionsSetsResponse listDhcpOptionsSetsWithOptions(const Models::ListDhcpOptionsSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Dynamic Host Configuration Protocol (DHCP) options sets.
       *
       * @param request ListDhcpOptionsSetsRequest
       * @return ListDhcpOptionsSetsResponse
       */
      Models::ListDhcpOptionsSetsResponse listDhcpOptionsSets(const Models::ListDhcpOptionsSetsRequest &request);

      /**
       * @summary Queries the zones that support NAT gateways.
       *
       * @description You can call this operation to query zones that support NAT gateways, including Internet NAT gateways and Virtual Private Cloud (VPC) NAT gateways.
       *
       * @param request ListEnhanhcedNatGatewayAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnhanhcedNatGatewayAvailableZonesResponse
       */
      Models::ListEnhanhcedNatGatewayAvailableZonesResponse listEnhanhcedNatGatewayAvailableZonesWithOptions(const Models::ListEnhanhcedNatGatewayAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that support NAT gateways.
       *
       * @description You can call this operation to query zones that support NAT gateways, including Internet NAT gateways and Virtual Private Cloud (VPC) NAT gateways.
       *
       * @param request ListEnhanhcedNatGatewayAvailableZonesRequest
       * @return ListEnhanhcedNatGatewayAvailableZonesResponse
       */
      Models::ListEnhanhcedNatGatewayAvailableZonesResponse listEnhanhcedNatGatewayAvailableZones(const Models::ListEnhanhcedNatGatewayAvailableZonesRequest &request);

      /**
       * @summary Queries FULLNAT entries.
       *
       * @param request ListFullNatEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFullNatEntriesResponse
       */
      Models::ListFullNatEntriesResponse listFullNatEntriesWithOptions(const Models::ListFullNatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries FULLNAT entries.
       *
       * @param request ListFullNatEntriesRequest
       * @return ListFullNatEntriesResponse
       */
      Models::ListFullNatEntriesResponse listFullNatEntries(const Models::ListFullNatEntriesRequest &request);

      /**
       * @summary Queries route entries of a gateway route table.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntriesWithOptions(const Models::ListGatewayRouteTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries of a gateway route table.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntries(const Models::ListGatewayRouteTableEntriesRequest &request);

      /**
       * @summary Queries the most recent region list.
       *
       * @param request ListGeographicSubRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeographicSubRegionsResponse
       */
      Models::ListGeographicSubRegionsResponse listGeographicSubRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent region list.
       *
       * @return ListGeographicSubRegionsResponse
       */
      Models::ListGeographicSubRegionsResponse listGeographicSubRegions();

      /**
       * @summary Queries the logs of an IPsec server.
       *
       * @param request ListIpsecServerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpsecServerLogsResponse
       */
      Models::ListIpsecServerLogsResponse listIpsecServerLogsWithOptions(const Models::ListIpsecServerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of an IPsec server.
       *
       * @param request ListIpsecServerLogsRequest
       * @return ListIpsecServerLogsResponse
       */
      Models::ListIpsecServerLogsResponse listIpsecServerLogs(const Models::ListIpsecServerLogsRequest &request);

      /**
       * @summary Queries IPsec servers.
       *
       * @param request ListIpsecServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpsecServersResponse
       */
      Models::ListIpsecServersResponse listIpsecServersWithOptions(const Models::ListIpsecServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPsec servers.
       *
       * @param request ListIpsecServersRequest
       * @return ListIpsecServersResponse
       */
      Models::ListIpsecServersResponse listIpsecServers(const Models::ListIpsecServersRequest &request);

      /**
       * @summary Queries IPv4 gateways.
       *
       * @param request ListIpv4GatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpv4GatewaysResponse
       */
      Models::ListIpv4GatewaysResponse listIpv4GatewaysWithOptions(const Models::ListIpv4GatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv4 gateways.
       *
       * @param request ListIpv4GatewaysRequest
       * @return ListIpv4GatewaysResponse
       */
      Models::ListIpv4GatewaysResponse listIpv4Gateways(const Models::ListIpv4GatewaysRequest &request);

      /**
       * @summary Queries the CIDR blocks of a specified NAT gateway.
       *
       * @param request ListNatIpCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNatIpCidrsResponse
       */
      Models::ListNatIpCidrsResponse listNatIpCidrsWithOptions(const Models::ListNatIpCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR blocks of a specified NAT gateway.
       *
       * @param request ListNatIpCidrsRequest
       * @return ListNatIpCidrsResponse
       */
      Models::ListNatIpCidrsResponse listNatIpCidrs(const Models::ListNatIpCidrsRequest &request);

      /**
       * @summary Queries the IP addresses on a NAT gateway.
       *
       * @param request ListNatIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNatIpsResponse
       */
      Models::ListNatIpsResponse listNatIpsWithOptions(const Models::ListNatIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses on a NAT gateway.
       *
       * @param request ListNatIpsRequest
       * @return ListNatIpsResponse
       */
      Models::ListNatIpsResponse listNatIps(const Models::ListNatIpsRequest &request);

      /**
       * @summary Querying the connection features supported by a Express Connect circuit.
       *
       * @param request ListPhysicalConnectionFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhysicalConnectionFeaturesResponse
       */
      Models::ListPhysicalConnectionFeaturesResponse listPhysicalConnectionFeaturesWithOptions(const Models::ListPhysicalConnectionFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying the connection features supported by a Express Connect circuit.
       *
       * @param request ListPhysicalConnectionFeaturesRequest
       * @return ListPhysicalConnectionFeaturesResponse
       */
      Models::ListPhysicalConnectionFeaturesResponse listPhysicalConnectionFeatures(const Models::ListPhysicalConnectionFeaturesRequest &request);

      /**
       * @summary Queries prefix lists.
       *
       * @param request ListPrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrefixListsResponse
       */
      Models::ListPrefixListsResponse listPrefixListsWithOptions(const Models::ListPrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prefix lists.
       *
       * @param request ListPrefixListsRequest
       * @return ListPrefixListsResponse
       */
      Models::ListPrefixListsResponse listPrefixLists(const Models::ListPrefixListsRequest &request);

      /**
       * @summary 查询IP地址池中的IP地址网段信息
       *
       * @param request ListPublicIpAddressPoolCidrBlocksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicIpAddressPoolCidrBlocksResponse
       */
      Models::ListPublicIpAddressPoolCidrBlocksResponse listPublicIpAddressPoolCidrBlocksWithOptions(const Models::ListPublicIpAddressPoolCidrBlocksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询IP地址池中的IP地址网段信息
       *
       * @param request ListPublicIpAddressPoolCidrBlocksRequest
       * @return ListPublicIpAddressPoolCidrBlocksResponse
       */
      Models::ListPublicIpAddressPoolCidrBlocksResponse listPublicIpAddressPoolCidrBlocks(const Models::ListPublicIpAddressPoolCidrBlocksRequest &request);

      /**
       * @summary Queries available IP address pools.
       *
       * @param request ListPublicIpAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicIpAddressPoolsResponse
       */
      Models::ListPublicIpAddressPoolsResponse listPublicIpAddressPoolsWithOptions(const Models::ListPublicIpAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available IP address pools.
       *
       * @param request ListPublicIpAddressPoolsRequest
       * @return ListPublicIpAddressPoolsResponse
       */
      Models::ListPublicIpAddressPoolsResponse listPublicIpAddressPools(const Models::ListPublicIpAddressPoolsRequest &request);

      /**
       * @summary Batch query for route target groups
       *
       * @description Lists the route target groups.
       *
       * @param request ListRouteTargetGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRouteTargetGroupsResponse
       */
      Models::ListRouteTargetGroupsResponse listRouteTargetGroupsWithOptions(const Models::ListRouteTargetGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch query for route target groups
       *
       * @description Lists the route target groups.
       *
       * @param request ListRouteTargetGroupsRequest
       * @return ListRouteTargetGroupsResponse
       */
      Models::ListRouteTargetGroupsResponse listRouteTargetGroups(const Models::ListRouteTargetGroupsRequest &request);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @description ## Usage notes
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
       * @summary Queries the tags that are added to resources.
       *
       * @description ## Usage notes
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
       * @summary Queries the tags that are added to an Express Connect circuit.
       *
       * @description ## [](#)
       * *   If you want to query a specific object, you must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesForExpressConnectResponse
       */
      Models::ListTagResourcesForExpressConnectResponse listTagResourcesForExpressConnectWithOptions(const Models::ListTagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to an Express Connect circuit.
       *
       * @description ## [](#)
       * *   If you want to query a specific object, you must specify **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request.
       * *   **Tag.N** is a resource tag that consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
       * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesForExpressConnectRequest
       * @return ListTagResourcesForExpressConnectResponse
       */
      Models::ListTagResourcesForExpressConnectResponse listTagResourcesForExpressConnect(const Models::ListTagResourcesForExpressConnectRequest &request);

      /**
       * @summary Queries filters for traffic mirror.
       *
       * @param request ListTrafficMirrorFiltersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMirrorFiltersResponse
       */
      Models::ListTrafficMirrorFiltersResponse listTrafficMirrorFiltersWithOptions(const Models::ListTrafficMirrorFiltersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries filters for traffic mirror.
       *
       * @param request ListTrafficMirrorFiltersRequest
       * @return ListTrafficMirrorFiltersResponse
       */
      Models::ListTrafficMirrorFiltersResponse listTrafficMirrorFilters(const Models::ListTrafficMirrorFiltersRequest &request);

      /**
       * @summary Queries the details of a traffic mirror session.
       *
       * @param request ListTrafficMirrorSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMirrorSessionsResponse
       */
      Models::ListTrafficMirrorSessionsResponse listTrafficMirrorSessionsWithOptions(const Models::ListTrafficMirrorSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a traffic mirror session.
       *
       * @param request ListTrafficMirrorSessionsRequest
       * @return ListTrafficMirrorSessionsResponse
       */
      Models::ListTrafficMirrorSessionsResponse listTrafficMirrorSessions(const Models::ListTrafficMirrorSessionsRequest &request);

      /**
       * @summary Queries the CIDR reservation information about vSwitches.
       *
       * @param request ListVSwitchCidrReservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVSwitchCidrReservationsResponse
       */
      Models::ListVSwitchCidrReservationsResponse listVSwitchCidrReservationsWithOptions(const Models::ListVSwitchCidrReservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR reservation information about vSwitches.
       *
       * @param request ListVSwitchCidrReservationsRequest
       * @return ListVSwitchCidrReservationsResponse
       */
      Models::ListVSwitchCidrReservationsResponse listVSwitchCidrReservations(const Models::ListVSwitchCidrReservationsRequest &request);

      /**
       * @summary Queries hosted connections.
       *
       * @param request ListVirtualPhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualPhysicalConnectionsResponse
       */
      Models::ListVirtualPhysicalConnectionsResponse listVirtualPhysicalConnectionsWithOptions(const Models::ListVirtualPhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries hosted connections.
       *
       * @param request ListVirtualPhysicalConnectionsRequest
       * @return ListVirtualPhysicalConnectionsResponse
       */
      Models::ListVirtualPhysicalConnectionsResponse listVirtualPhysicalConnections(const Models::ListVirtualPhysicalConnectionsRequest &request);

      /**
       * @summary Queries available endpoint services.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUserWithOptions(const Models::ListVpcEndpointServicesByEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available endpoint services.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUser(const Models::ListVpcEndpointServicesByEndUserRequest &request);

      /**
       * @summary Queries gateway endpoints.
       *
       * @param request ListVpcGatewayEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcGatewayEndpointsResponse
       */
      Models::ListVpcGatewayEndpointsResponse listVpcGatewayEndpointsWithOptions(const Models::ListVpcGatewayEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries gateway endpoints.
       *
       * @param request ListVpcGatewayEndpointsRequest
       * @return ListVpcGatewayEndpointsResponse
       */
      Models::ListVpcGatewayEndpointsResponse listVpcGatewayEndpoints(const Models::ListVpcGatewayEndpointsRequest &request);

      /**
       * @summary Queries advertised routes.
       *
       * @param request ListVpcPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcPublishedRouteEntriesResponse
       */
      Models::ListVpcPublishedRouteEntriesResponse listVpcPublishedRouteEntriesWithOptions(const Models::ListVpcPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries advertised routes.
       *
       * @param request ListVpcPublishedRouteEntriesRequest
       * @return ListVpcPublishedRouteEntriesResponse
       */
      Models::ListVpcPublishedRouteEntriesResponse listVpcPublishedRouteEntries(const Models::ListVpcPublishedRouteEntriesRequest &request);

      /**
       * @summary Queries the association between VPN gateways and certificates in a region.
       *
       * @description When you call **ListVpnCertificateAssociations**, take note of the following information:
       * *   If you specify only **RegionId**, the SSL certificates associated with all VPN gateways in the specified region are queried.
       * *   If you specify **RegionId** and **CertificateType**, the SSL certificates of the specified type that are associated with the VPN gateways in the specified region are queried.
       * *   If you specify **RegionId** and **VpnGatewayId**, the SSL certificates associated with the specified VPN gateway in the specified region are queried.
       * *   If you specify **RegionId** and **CertificateId**, the VPN gateways associated with the specified SSL certificate in the specified region are queried.
       *
       * @param request ListVpnCertificateAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpnCertificateAssociationsResponse
       */
      Models::ListVpnCertificateAssociationsResponse listVpnCertificateAssociationsWithOptions(const Models::ListVpnCertificateAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between VPN gateways and certificates in a region.
       *
       * @description When you call **ListVpnCertificateAssociations**, take note of the following information:
       * *   If you specify only **RegionId**, the SSL certificates associated with all VPN gateways in the specified region are queried.
       * *   If you specify **RegionId** and **CertificateType**, the SSL certificates of the specified type that are associated with the VPN gateways in the specified region are queried.
       * *   If you specify **RegionId** and **VpnGatewayId**, the SSL certificates associated with the specified VPN gateway in the specified region are queried.
       * *   If you specify **RegionId** and **CertificateId**, the VPN gateways associated with the specified SSL certificate in the specified region are queried.
       *
       * @param request ListVpnCertificateAssociationsRequest
       * @return ListVpnCertificateAssociationsResponse
       */
      Models::ListVpnCertificateAssociationsResponse listVpnCertificateAssociations(const Models::ListVpnCertificateAssociationsRequest &request);

      /**
       * @summary Modifies the configuration of a Border Gateway Protocol (BGP) group.
       *
       * @param request ModifyBgpGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBgpGroupAttributeResponse
       */
      Models::ModifyBgpGroupAttributeResponse modifyBgpGroupAttributeWithOptions(const Models::ModifyBgpGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a Border Gateway Protocol (BGP) group.
       *
       * @param request ModifyBgpGroupAttributeRequest
       * @return ModifyBgpGroupAttributeResponse
       */
      Models::ModifyBgpGroupAttributeResponse modifyBgpGroupAttribute(const Models::ModifyBgpGroupAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a BGP peer.
       *
       * @param request ModifyBgpPeerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBgpPeerAttributeResponse
       */
      Models::ModifyBgpPeerAttributeResponse modifyBgpPeerAttributeWithOptions(const Models::ModifyBgpPeerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a BGP peer.
       *
       * @param request ModifyBgpPeerAttributeRequest
       * @return ModifyBgpPeerAttributeResponse
       */
      Models::ModifyBgpPeerAttributeResponse modifyBgpPeerAttribute(const Models::ModifyBgpPeerAttributeRequest &request);

      /**
       * @summary Modifies the name and description of an EIP bandwidth plan.
       *
       * @param request ModifyCommonBandwidthPackageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageAttributeResponse
       */
      Models::ModifyCommonBandwidthPackageAttributeResponse modifyCommonBandwidthPackageAttributeWithOptions(const Models::ModifyCommonBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an EIP bandwidth plan.
       *
       * @param request ModifyCommonBandwidthPackageAttributeRequest
       * @return ModifyCommonBandwidthPackageAttributeResponse
       */
      Models::ModifyCommonBandwidthPackageAttributeResponse modifyCommonBandwidthPackageAttribute(const Models::ModifyCommonBandwidthPackageAttributeRequest &request);

      /**
       * @summary Sets the maximum bandwidth of an EIP that is associated with an Internet Shared Bandwidth instance.
       *
       * @description You can call the **ModifyCommonBandwidthPackageIpBandwidth** operation to set the maximum bandwidth of an EIP that is associated with an Internet Shared Bandwidth instance. This prevents an EIP from exhausting the bandwidth resources of an Internet Shared Bandwidth instance.
       * For example, two EIPs are associated with an Internet Shared Bandwidth instance whose maximum bandwidth is 800 Mbit/s. In this case, you can set the maximum bandwidth of one EIP to 500 Mbit/s and that of the other EIP to 400 Mbit/s. After you set the maximum bandwidth values, the first EIP cannot consume bandwidth higher than 500 Mbit/s. The second EIP cannot consume bandwidth higher than 400 Mbit/s.
       * When you call this operation, take note of the following items:
       * *   This operation is valid only for EIPs that are associated with Elastic Compute Service (ECS) instances. This operation is invalid for EIPs that are associated with Server Load Balancer (SLB) instances, NAT gateways, secondary elastic network interfaces (ENIs), or high-availability virtual IP addresses (HAVIPs).
       * *   This operation is in public preview. You can call this operation to set the maximum bandwidth of EIPs only if the EIPs are associated with an Internet Shared Bandwidth instance. The feature is not supported in the console.
       * *   You cannot repeatedly call this operation to set the maximum bandwidth of an EIP within the specified period of time.
       *
       * @param request ModifyCommonBandwidthPackageIpBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageIpBandwidthResponse
       */
      Models::ModifyCommonBandwidthPackageIpBandwidthResponse modifyCommonBandwidthPackageIpBandwidthWithOptions(const Models::ModifyCommonBandwidthPackageIpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the maximum bandwidth of an EIP that is associated with an Internet Shared Bandwidth instance.
       *
       * @description You can call the **ModifyCommonBandwidthPackageIpBandwidth** operation to set the maximum bandwidth of an EIP that is associated with an Internet Shared Bandwidth instance. This prevents an EIP from exhausting the bandwidth resources of an Internet Shared Bandwidth instance.
       * For example, two EIPs are associated with an Internet Shared Bandwidth instance whose maximum bandwidth is 800 Mbit/s. In this case, you can set the maximum bandwidth of one EIP to 500 Mbit/s and that of the other EIP to 400 Mbit/s. After you set the maximum bandwidth values, the first EIP cannot consume bandwidth higher than 500 Mbit/s. The second EIP cannot consume bandwidth higher than 400 Mbit/s.
       * When you call this operation, take note of the following items:
       * *   This operation is valid only for EIPs that are associated with Elastic Compute Service (ECS) instances. This operation is invalid for EIPs that are associated with Server Load Balancer (SLB) instances, NAT gateways, secondary elastic network interfaces (ENIs), or high-availability virtual IP addresses (HAVIPs).
       * *   This operation is in public preview. You can call this operation to set the maximum bandwidth of EIPs only if the EIPs are associated with an Internet Shared Bandwidth instance. The feature is not supported in the console.
       * *   You cannot repeatedly call this operation to set the maximum bandwidth of an EIP within the specified period of time.
       *
       * @param request ModifyCommonBandwidthPackageIpBandwidthRequest
       * @return ModifyCommonBandwidthPackageIpBandwidthResponse
       */
      Models::ModifyCommonBandwidthPackageIpBandwidthResponse modifyCommonBandwidthPackageIpBandwidth(const Models::ModifyCommonBandwidthPackageIpBandwidthRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) operation to query the status of the task.
       *     *   If the Internet Shared Bandwidth instance is in the **Modifying** state, the maximum bandwidth of the Internet Shared Bandwidth instance is being modified. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **Available** state, the maximum bandwidth of the Internet Shared Bandwidth instance is modified.
       * *   You cannot repeatedly call the **ModifyCommonBandwidthPackageSpec** operation to modify the maximum bandwidth of an Internet Shared Bandwidth instance within the specified period of time.
       *
       * @param request ModifyCommonBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageSpecResponse
       */
      Models::ModifyCommonBandwidthPackageSpecResponse modifyCommonBandwidthPackageSpecWithOptions(const Models::ModifyCommonBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) operation to query the status of the task.
       *     *   If the Internet Shared Bandwidth instance is in the **Modifying** state, the maximum bandwidth of the Internet Shared Bandwidth instance is being modified. In this state, you can only query the Internet Shared Bandwidth instance and cannot perform other operations.
       *     *   If the Internet Shared Bandwidth instance is in the **Available** state, the maximum bandwidth of the Internet Shared Bandwidth instance is modified.
       * *   You cannot repeatedly call the **ModifyCommonBandwidthPackageSpec** operation to modify the maximum bandwidth of an Internet Shared Bandwidth instance within the specified period of time.
       *
       * @param request ModifyCommonBandwidthPackageSpecRequest
       * @return ModifyCommonBandwidthPackageSpecResponse
       */
      Models::ModifyCommonBandwidthPackageSpecResponse modifyCommonBandwidthPackageSpec(const Models::ModifyCommonBandwidthPackageSpecRequest &request);

      /**
       * @summary Modifies the configuration of a customer gateway.
       *
       * @description *   When you call **ModifyCustomerGatewayAttribute**, if a value is assigned to **AuthKey**, the operation is asynchronous. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the configurations are being modified.
       *     *   If a VPN gateway is in the **active** state, the configurations are modified.
       * *   When you call **ModifyCustomerGatewayAttribute**, if no value is assigned to **AuthKey**, the operation is synchronous.
       * *   You cannot repeatedly call **ModifyCustomerGatewayAttribute** to modify the configurations of a customer gateway within the specified period of time.
       *
       * @param request ModifyCustomerGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomerGatewayAttributeResponse
       */
      Models::ModifyCustomerGatewayAttributeResponse modifyCustomerGatewayAttributeWithOptions(const Models::ModifyCustomerGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a customer gateway.
       *
       * @description *   When you call **ModifyCustomerGatewayAttribute**, if a value is assigned to **AuthKey**, the operation is asynchronous. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the configurations are being modified.
       *     *   If a VPN gateway is in the **active** state, the configurations are modified.
       * *   When you call **ModifyCustomerGatewayAttribute**, if no value is assigned to **AuthKey**, the operation is synchronous.
       * *   You cannot repeatedly call **ModifyCustomerGatewayAttribute** to modify the configurations of a customer gateway within the specified period of time.
       *
       * @param request ModifyCustomerGatewayAttributeRequest
       * @return ModifyCustomerGatewayAttributeResponse
       */
      Models::ModifyCustomerGatewayAttributeResponse modifyCustomerGatewayAttribute(const Models::ModifyCustomerGatewayAttributeRequest &request);

      /**
       * @summary Modifies the name, description, and maximum bandwidth of an elastic IP address (EIP).
       *
       * @param request ModifyEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttributeWithOptions(const Models::ModifyEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and maximum bandwidth of an elastic IP address (EIP).
       *
       * @param request ModifyEipAddressAttributeRequest
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttribute(const Models::ModifyEipAddressAttributeRequest &request);

      /**
       * @summary Modifies the EIP forwarding mode.
       *
       * @param request ModifyEipForwardModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipForwardModeResponse
       */
      Models::ModifyEipForwardModeResponse modifyEipForwardModeWithOptions(const Models::ModifyEipForwardModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the EIP forwarding mode.
       *
       * @param request ModifyEipForwardModeRequest
       * @return ModifyEipForwardModeResponse
       */
      Models::ModifyEipForwardModeResponse modifyEipForwardMode(const Models::ModifyEipForwardModeRequest &request);

      /**
       * @summary Modifies the configuration of an Express Cloud Connect (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressCloudConnectionAttributeResponse
       */
      Models::ModifyExpressCloudConnectionAttributeResponse modifyExpressCloudConnectionAttributeWithOptions(const Models::ModifyExpressCloudConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an Express Cloud Connect (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionAttributeRequest
       * @return ModifyExpressCloudConnectionAttributeResponse
       */
      Models::ModifyExpressCloudConnectionAttributeResponse modifyExpressCloudConnectionAttribute(const Models::ModifyExpressCloudConnectionAttributeRequest &request);

      /**
       * @summary Modifies the bandwidth of an Express Cloud Connect (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressCloudConnectionBandwidthResponse
       */
      Models::ModifyExpressCloudConnectionBandwidthResponse modifyExpressCloudConnectionBandwidthWithOptions(const Models::ModifyExpressCloudConnectionBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth of an Express Cloud Connect (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionBandwidthRequest
       * @return ModifyExpressCloudConnectionBandwidthResponse
       */
      Models::ModifyExpressCloudConnectionBandwidthResponse modifyExpressCloudConnectionBandwidth(const Models::ModifyExpressCloudConnectionBandwidthRequest &request);

      /**
       * @summary Modifies a quality of service (QoS) policy or associates a QoS policy with a dedicated Express Connect circuit.
       *
       * @param request ModifyExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosResponse
       */
      Models::ModifyExpressConnectTrafficQosResponse modifyExpressConnectTrafficQosWithOptions(const Models::ModifyExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quality of service (QoS) policy or associates a QoS policy with a dedicated Express Connect circuit.
       *
       * @param request ModifyExpressConnectTrafficQosRequest
       * @return ModifyExpressConnectTrafficQosResponse
       */
      Models::ModifyExpressConnectTrafficQosResponse modifyExpressConnectTrafficQos(const Models::ModifyExpressConnectTrafficQosRequest &request);

      /**
       * @summary Modifies a quality of service (QoS) queue.
       *
       * @param request ModifyExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosQueueResponse
       */
      Models::ModifyExpressConnectTrafficQosQueueResponse modifyExpressConnectTrafficQosQueueWithOptions(const Models::ModifyExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quality of service (QoS) queue.
       *
       * @param request ModifyExpressConnectTrafficQosQueueRequest
       * @return ModifyExpressConnectTrafficQosQueueResponse
       */
      Models::ModifyExpressConnectTrafficQosQueueResponse modifyExpressConnectTrafficQosQueue(const Models::ModifyExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Modifies a quality of service (QoS) rule.
       *
       * @param request ModifyExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosRuleResponse
       */
      Models::ModifyExpressConnectTrafficQosRuleResponse modifyExpressConnectTrafficQosRuleWithOptions(const Models::ModifyExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quality of service (QoS) rule.
       *
       * @param request ModifyExpressConnectTrafficQosRuleRequest
       * @return ModifyExpressConnectTrafficQosRuleResponse
       */
      Models::ModifyExpressConnectTrafficQosRuleResponse modifyExpressConnectTrafficQosRule(const Models::ModifyExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Modifies the name and description of a flow log.
       *
       * @description *   **ModifyFlowLogAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Modifying** state, the flow log is being modified.
       *     *   If the flow log is in the **Active** or **Inactive** state, the flow log is modified.
       * *   You cannot repeatedly call the **ModifyFlowLogAttribute** operation to modify a flow log within the specified period of time.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a flow log.
       *
       * @description *   **ModifyFlowLogAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) operation to query the status of a flow log:
       *     *   If the flow log is in the **Modifying** state, the flow log is being modified.
       *     *   If the flow log is in the **Active** or **Inactive** state, the flow log is modified.
       * *   You cannot repeatedly call the **ModifyFlowLogAttribute** operation to modify a flow log within the specified period of time.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies a DNAT entry.
       *
       * @description *   **ModifyForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   **Pending**: indicates that the system is modifying the DNAT entry. You can only query the DNAT entry, but cannot perform other operations.
       *     *   **Available**: indicates that the DNAT entry is modified.
       * *   You cannot repeatedly call the **ModifyForwardEntry** operation to modify a DNAT entry within the specified period of time.
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a DNAT entry.
       *
       * @description *   **ModifyForwardEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) operation to query the status of the task.
       *     *   **Pending**: indicates that the system is modifying the DNAT entry. You can only query the DNAT entry, but cannot perform other operations.
       *     *   **Available**: indicates that the DNAT entry is modified.
       * *   You cannot repeatedly call the **ModifyForwardEntry** operation to modify a DNAT entry within the specified period of time.
       *
       * @param request ModifyForwardEntryRequest
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntry(const Models::ModifyForwardEntryRequest &request);

      /**
       * @summary Modifies a FULLNAT entry.
       *
       * @description ## [](#)
       * *   **ModifyFullNatEntryAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       *     *   **Modifying**: indicates that the system is modifying the FULLNAT entry. You can query the FULLNAT entry, but cannot perform other operations.
       *     *   **Available**: indicates that the FULLNAT entry is modified.
       * *   You cannot repeatedly call the **ModifyFullNatEntryAttribute** operation to modify a FULLNAT entry within the specified period of time.
       *
       * @param request ModifyFullNatEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFullNatEntryAttributeResponse
       */
      Models::ModifyFullNatEntryAttributeResponse modifyFullNatEntryAttributeWithOptions(const Models::ModifyFullNatEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a FULLNAT entry.
       *
       * @description ## [](#)
       * *   **ModifyFullNatEntryAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) operation to query the status of a FULLNAT entry.
       *     *   **Modifying**: indicates that the system is modifying the FULLNAT entry. You can query the FULLNAT entry, but cannot perform other operations.
       *     *   **Available**: indicates that the FULLNAT entry is modified.
       * *   You cannot repeatedly call the **ModifyFullNatEntryAttribute** operation to modify a FULLNAT entry within the specified period of time.
       *
       * @param request ModifyFullNatEntryAttributeRequest
       * @return ModifyFullNatEntryAttributeResponse
       */
      Models::ModifyFullNatEntryAttributeResponse modifyFullNatEntryAttribute(const Models::ModifyFullNatEntryAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalAccelerationInstanceAttributesResponse
       */
      Models::ModifyGlobalAccelerationInstanceAttributesResponse modifyGlobalAccelerationInstanceAttributesWithOptions(const Models::ModifyGlobalAccelerationInstanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceAttributesRequest
       * @return ModifyGlobalAccelerationInstanceAttributesResponse
       */
      Models::ModifyGlobalAccelerationInstanceAttributesResponse modifyGlobalAccelerationInstanceAttributes(const Models::ModifyGlobalAccelerationInstanceAttributesRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of a Global Accelerator (GA) instance.
       *
       * @description ## Usage notes
       * You cannot call this operation to modify the maximum bandwidth of a subscription GA instance.
       *
       * @param request ModifyGlobalAccelerationInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalAccelerationInstanceSpecResponse
       */
      Models::ModifyGlobalAccelerationInstanceSpecResponse modifyGlobalAccelerationInstanceSpecWithOptions(const Models::ModifyGlobalAccelerationInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of a Global Accelerator (GA) instance.
       *
       * @description ## Usage notes
       * You cannot call this operation to modify the maximum bandwidth of a subscription GA instance.
       *
       * @param request ModifyGlobalAccelerationInstanceSpecRequest
       * @return ModifyGlobalAccelerationInstanceSpecResponse
       */
      Models::ModifyGlobalAccelerationInstanceSpecResponse modifyGlobalAccelerationInstanceSpec(const Models::ModifyGlobalAccelerationInstanceSpecRequest &request);

      /**
       * @summary Modifies the name and description of a high-availability virtual IP address (HaVip).
       *
       * @description You cannot repeatedly call the **ModifyHaVipAttribute** operation to modify the name and description of an HaVip within the specified periods of time.
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a high-availability virtual IP address (HaVip).
       *
       * @description You cannot repeatedly call the **ModifyHaVipAttribute** operation to modify the name and description of an HaVip within the specified periods of time.
       *
       * @param request ModifyHaVipAttributeRequest
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttribute(const Models::ModifyHaVipAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorAclAttribute is deprecated
       *
       * @summary Modifies the name of an access control list (ACL).
       *
       * @param request ModifyIPv6TranslatorAclAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorAclAttributeResponse
       */
      Models::ModifyIPv6TranslatorAclAttributeResponse modifyIPv6TranslatorAclAttributeWithOptions(const Models::ModifyIPv6TranslatorAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorAclAttribute is deprecated
       *
       * @summary Modifies the name of an access control list (ACL).
       *
       * @param request ModifyIPv6TranslatorAclAttributeRequest
       * @return ModifyIPv6TranslatorAclAttributeResponse
       */
      Models::ModifyIPv6TranslatorAclAttributeResponse modifyIPv6TranslatorAclAttribute(const Models::ModifyIPv6TranslatorAclAttributeRequest &request);

      /**
       * @summary Modifies an IP entry in an access control list (ACL).
       *
       * @param request ModifyIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorAclListEntryResponse
       */
      Models::ModifyIPv6TranslatorAclListEntryResponse modifyIPv6TranslatorAclListEntryWithOptions(const Models::ModifyIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP entry in an access control list (ACL).
       *
       * @param request ModifyIPv6TranslatorAclListEntryRequest
       * @return ModifyIPv6TranslatorAclListEntryResponse
       */
      Models::ModifyIPv6TranslatorAclListEntryResponse modifyIPv6TranslatorAclListEntry(const Models::ModifyIPv6TranslatorAclListEntryRequest &request);

      /**
       * @summary Modifies the name and description of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorAttributeResponse
       */
      Models::ModifyIPv6TranslatorAttributeResponse modifyIPv6TranslatorAttributeWithOptions(const Models::ModifyIPv6TranslatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorAttributeRequest
       * @return ModifyIPv6TranslatorAttributeResponse
       */
      Models::ModifyIPv6TranslatorAttributeResponse modifyIPv6TranslatorAttribute(const Models::ModifyIPv6TranslatorAttributeRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorBandwidthResponse
       */
      Models::ModifyIPv6TranslatorBandwidthResponse modifyIPv6TranslatorBandwidthWithOptions(const Models::ModifyIPv6TranslatorBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorBandwidthRequest
       * @return ModifyIPv6TranslatorBandwidthResponse
       */
      Models::ModifyIPv6TranslatorBandwidthResponse modifyIPv6TranslatorBandwidth(const Models::ModifyIPv6TranslatorBandwidthRequest &request);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorEntry is deprecated
       *
       * @summary Modifies an IPv6 mapping entry.
       *
       * @param request ModifyIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorEntryResponse
       */
      Models::ModifyIPv6TranslatorEntryResponse modifyIPv6TranslatorEntryWithOptions(const Models::ModifyIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorEntry is deprecated
       *
       * @summary Modifies an IPv6 mapping entry.
       *
       * @param request ModifyIPv6TranslatorEntryRequest
       * @return ModifyIPv6TranslatorEntryResponse
       */
      Models::ModifyIPv6TranslatorEntryResponse modifyIPv6TranslatorEntry(const Models::ModifyIPv6TranslatorEntryRequest &request);

      /**
       * @summary Modifies the name and description of an IPv6 address.
       *
       * @param request ModifyIpv6AddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpv6AddressAttributeResponse
       */
      Models::ModifyIpv6AddressAttributeResponse modifyIpv6AddressAttributeWithOptions(const Models::ModifyIpv6AddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an IPv6 address.
       *
       * @param request ModifyIpv6AddressAttributeRequest
       * @return ModifyIpv6AddressAttributeResponse
       */
      Models::ModifyIpv6AddressAttributeResponse modifyIpv6AddressAttribute(const Models::ModifyIpv6AddressAttributeRequest &request);

      /**
       * @summary Modifies the name and description of an IPv6 gateway.
       *
       * @param request ModifyIpv6GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpv6GatewayAttributeResponse
       */
      Models::ModifyIpv6GatewayAttributeResponse modifyIpv6GatewayAttributeWithOptions(const Models::ModifyIpv6GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an IPv6 gateway.
       *
       * @param request ModifyIpv6GatewayAttributeRequest
       * @return ModifyIpv6GatewayAttributeResponse
       */
      Models::ModifyIpv6GatewayAttributeResponse modifyIpv6GatewayAttribute(const Models::ModifyIpv6GatewayAttributeRequest &request);

      /**
       * @summary Modifies the Internet bandwidth of an IPv6 address.
       *
       * @description You cannot repeatedly call the **ModifyIpv6InternetBandwidth** operation to modify the Internet bandwidth value of an IPv6 CIDR block within the specified period of time.
       *
       * @param request ModifyIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpv6InternetBandwidthResponse
       */
      Models::ModifyIpv6InternetBandwidthResponse modifyIpv6InternetBandwidthWithOptions(const Models::ModifyIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Internet bandwidth of an IPv6 address.
       *
       * @description You cannot repeatedly call the **ModifyIpv6InternetBandwidth** operation to modify the Internet bandwidth value of an IPv6 CIDR block within the specified period of time.
       *
       * @param request ModifyIpv6InternetBandwidthRequest
       * @return ModifyIpv6InternetBandwidthResponse
       */
      Models::ModifyIpv6InternetBandwidthResponse modifyIpv6InternetBandwidth(const Models::ModifyIpv6InternetBandwidthRequest &request);

      /**
       * @summary Modifies the name and description of a NAT gateway.
       *
       * @description ## [](#)Description
       * You can call this operation to query an Internet NAT gateway or a virtual private cloud (VPC) NAT gateway. The term NAT gateway in this topic refers to both NAT gateway types.
       *
       * @param tmpReq ModifyNatGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatGatewayAttributeResponse
       */
      Models::ModifyNatGatewayAttributeResponse modifyNatGatewayAttributeWithOptions(const Models::ModifyNatGatewayAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a NAT gateway.
       *
       * @description ## [](#)Description
       * You can call this operation to query an Internet NAT gateway or a virtual private cloud (VPC) NAT gateway. The term NAT gateway in this topic refers to both NAT gateway types.
       *
       * @param request ModifyNatGatewayAttributeRequest
       * @return ModifyNatGatewayAttributeResponse
       */
      Models::ModifyNatGatewayAttributeResponse modifyNatGatewayAttribute(const Models::ModifyNatGatewayAttributeRequest &request);

      /**
       * @summary Upgrades a subscription Internet NAT gateway.
       *
       * @description - You cannot call this operation to downgrade a subscription Internet NAT gateway. You can downgrade a subscription Internet NAT gateway only in the console.
       * - When you call this operation to upgrade a subscription Internet NAT gateway, an order is generated. After you complete the payment in the order center, the Internet NAT gateway is upgraded.
       * - **ModifyNatGatewaySpec** is an asynchronous operation. After you make a request, the ID of the request is returned but the Internet NAT gateway is not upgraded. The system upgrades the NAT gateway in the background. You can call the [DescribeNatGateways](/help/en/virtual-private-cloud/latest/describenatgateways) operation to query the status of an Internet NAT gateway.    - If an Internet NAT gateway is in the **Modifying** state, the NAT gateway is being upgraded. In this case, you can only query the NAT gateway but cannot perform other operations.
       *   - If an Internet NAT gateway is in the **Available** state, the Internet NAT gateway is upgraded.
       * - You cannot repeatedly call the **ModifyNatGatewaySpec** operation to resize a pay-by-specification NAT gateway.
       * Internet NAT gateways are available in different sizes. The size of an Internet NAT gateway determines the SNAT performance, which includes the maximum number of connections and the number of new connections per second. However, the size of a NAT gateway does not affect the data throughput. The following table describes the correlations between different sizes of Internet NAT gateways and SNAT performance metrics.  
       * | Size | Maximum number of connections | Number of new connections per second |
       * | ---- | ----------------------------- | ------------------------------------ |
       * | Small | 10,000 | 1,000 |
       * | Medium | 50,000 | 5,000 |
       * | Large | 200,000 | 10,000 |
       *
       * @param request ModifyNatGatewaySpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatGatewaySpecResponse
       */
      Models::ModifyNatGatewaySpecResponse modifyNatGatewaySpecWithOptions(const Models::ModifyNatGatewaySpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a subscription Internet NAT gateway.
       *
       * @description - You cannot call this operation to downgrade a subscription Internet NAT gateway. You can downgrade a subscription Internet NAT gateway only in the console.
       * - When you call this operation to upgrade a subscription Internet NAT gateway, an order is generated. After you complete the payment in the order center, the Internet NAT gateway is upgraded.
       * - **ModifyNatGatewaySpec** is an asynchronous operation. After you make a request, the ID of the request is returned but the Internet NAT gateway is not upgraded. The system upgrades the NAT gateway in the background. You can call the [DescribeNatGateways](/help/en/virtual-private-cloud/latest/describenatgateways) operation to query the status of an Internet NAT gateway.    - If an Internet NAT gateway is in the **Modifying** state, the NAT gateway is being upgraded. In this case, you can only query the NAT gateway but cannot perform other operations.
       *   - If an Internet NAT gateway is in the **Available** state, the Internet NAT gateway is upgraded.
       * - You cannot repeatedly call the **ModifyNatGatewaySpec** operation to resize a pay-by-specification NAT gateway.
       * Internet NAT gateways are available in different sizes. The size of an Internet NAT gateway determines the SNAT performance, which includes the maximum number of connections and the number of new connections per second. However, the size of a NAT gateway does not affect the data throughput. The following table describes the correlations between different sizes of Internet NAT gateways and SNAT performance metrics.  
       * | Size | Maximum number of connections | Number of new connections per second |
       * | ---- | ----------------------------- | ------------------------------------ |
       * | Small | 10,000 | 1,000 |
       * | Medium | 50,000 | 5,000 |
       * | Large | 200,000 | 10,000 |
       *
       * @param request ModifyNatGatewaySpecRequest
       * @return ModifyNatGatewaySpecResponse
       */
      Models::ModifyNatGatewaySpecResponse modifyNatGatewaySpec(const Models::ModifyNatGatewaySpecRequest &request);

      /**
       * @summary Modifies the name and description of a NAT IP address.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **ModifyNatIpAttribute** operation to modify the name and description of a NAT IP address within the specified period of time.
       *
       * @param request ModifyNatIpAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatIpAttributeResponse
       */
      Models::ModifyNatIpAttributeResponse modifyNatIpAttributeWithOptions(const Models::ModifyNatIpAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a NAT IP address.
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **ModifyNatIpAttribute** operation to modify the name and description of a NAT IP address within the specified period of time.
       *
       * @param request ModifyNatIpAttributeRequest
       * @return ModifyNatIpAttributeResponse
       */
      Models::ModifyNatIpAttributeResponse modifyNatIpAttribute(const Models::ModifyNatIpAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a NAT CIDR block.
       *
       * @param request ModifyNatIpCidrAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatIpCidrAttributeResponse
       */
      Models::ModifyNatIpCidrAttributeResponse modifyNatIpCidrAttributeWithOptions(const Models::ModifyNatIpCidrAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a NAT CIDR block.
       *
       * @param request ModifyNatIpCidrAttributeRequest
       * @return ModifyNatIpCidrAttributeResponse
       */
      Models::ModifyNatIpCidrAttributeResponse modifyNatIpCidrAttribute(const Models::ModifyNatIpCidrAttributeRequest &request);

      /**
       * @summary Modifies the attributes of a network access control list (ACL).
       *
       * @param request ModifyNetworkAclAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkAclAttributesResponse
       */
      Models::ModifyNetworkAclAttributesResponse modifyNetworkAclAttributesWithOptions(const Models::ModifyNetworkAclAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a network access control list (ACL).
       *
       * @param request ModifyNetworkAclAttributesRequest
       * @return ModifyNetworkAclAttributesResponse
       */
      Models::ModifyNetworkAclAttributesResponse modifyNetworkAclAttributes(const Models::ModifyNetworkAclAttributesRequest &request);

      /**
       * @summary Modifies the configurations of an Express Connect circuit.
       *
       * @description When you call this operation, take note of the following limits:
       * *   If an Express Connect circuit is in the **Initial**, **Enabled**, or **Rejected** state, you can modify the specifications of the Express Connect circuit and the ID of the redundant circuit.
       * *   If an Express Connect circuit is in the **Canceled**, **Allocating**, **AllocationFailed**, or **Terminated** state, you cannot modify the specifications of the Express Connect circuit.
       * *   After you modify the specifications of an Express Connect circuit that is in the **Rejected** state, the Express Connect circuit enters the **Initial** state.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttributeWithOptions(const Models::ModifyPhysicalConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an Express Connect circuit.
       *
       * @description When you call this operation, take note of the following limits:
       * *   If an Express Connect circuit is in the **Initial**, **Enabled**, or **Rejected** state, you can modify the specifications of the Express Connect circuit and the ID of the redundant circuit.
       * *   If an Express Connect circuit is in the **Canceled**, **Allocating**, **AllocationFailed**, or **Terminated** state, you cannot modify the specifications of the Express Connect circuit.
       * *   After you modify the specifications of an Express Connect circuit that is in the **Rejected** state, the Express Connect circuit enters the **Initial** state.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttribute(const Models::ModifyPhysicalConnectionAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a custom route entry.
       *
       * @description You cannot repeatedly call the **ModifyRouteEntry** operation to modify the name and description of a custom route within the specified period of time.
       *
       * @param request ModifyRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntryWithOptions(const Models::ModifyRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a custom route entry.
       *
       * @description You cannot repeatedly call the **ModifyRouteEntry** operation to modify the name and description of a custom route within the specified period of time.
       *
       * @param request ModifyRouteEntryRequest
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntry(const Models::ModifyRouteEntryRequest &request);

      /**
       * @summary Modifies the name and description of a route table.
       *
       * @description You cannot repeatedly call the **ModifyRouteTableAttributes** operation to modify the name and description of a route table within the specified period of time.
       *
       * @param request ModifyRouteTableAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteTableAttributesResponse
       */
      Models::ModifyRouteTableAttributesResponse modifyRouteTableAttributesWithOptions(const Models::ModifyRouteTableAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a route table.
       *
       * @description You cannot repeatedly call the **ModifyRouteTableAttributes** operation to modify the name and description of a route table within the specified period of time.
       *
       * @param request ModifyRouteTableAttributesRequest
       * @return ModifyRouteTableAttributesResponse
       */
      Models::ModifyRouteTableAttributesResponse modifyRouteTableAttributes(const Models::ModifyRouteTableAttributesRequest &request);

      /**
       * @summary Modifies the configuration of a router interface.
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttributeWithOptions(const Models::ModifyRouterInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a router interface.
       *
       * @param request ModifyRouterInterfaceAttributeRequest
       * @return ModifyRouterInterfaceAttributeResponse
       */
      Models::ModifyRouterInterfaceAttributeResponse modifyRouterInterfaceAttribute(const Models::ModifyRouterInterfaceAttributeRequest &request);

      /**
       * @summary Modifies the specification of a router interface.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, the router interface enters the **Active** state.
       * >  You cannot modify the specification of a router interface that has overdue payments.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpecWithOptions(const Models::ModifyRouterInterfaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specification of a router interface.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, the router interface enters the **Active** state.
       * >  You cannot modify the specification of a router interface that has overdue payments.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpec(const Models::ModifyRouterInterfaceSpecRequest &request);

      /**
       * @summary Modifies an SNAT entry.
       *
       * @description ## [](#)
       * **ModifySnatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of the task.
       * *   **Pending**: indicates that the system is modifying the SNAT entry. You can only query the status of the SNAT entry, but cannot perform other operations.
       * *   **Available**: indicates that the SNAT entry is modified.
       * >  If an SNAT entry is in the **Pending** state, it indicates that you cannot modify the SNAT entry.
       * You cannot repeatedly call the **ModifySnatEntry** operation to modify an SNAT entry within a specific period of time.
       *
       * @param request ModifySnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntryWithOptions(const Models::ModifySnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an SNAT entry.
       *
       * @description ## [](#)
       * **ModifySnatEntry** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) operation to query the status of the task.
       * *   **Pending**: indicates that the system is modifying the SNAT entry. You can only query the status of the SNAT entry, but cannot perform other operations.
       * *   **Available**: indicates that the SNAT entry is modified.
       * >  If an SNAT entry is in the **Pending** state, it indicates that you cannot modify the SNAT entry.
       * You cannot repeatedly call the **ModifySnatEntry** operation to modify an SNAT entry within a specific period of time.
       *
       * @param request ModifySnatEntryRequest
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntry(const Models::ModifySnatEntryRequest &request);

      /**
       * @summary Modifies the name of an SSL-VPN client certificate.
       *
       * @param request ModifySslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySslVpnClientCertResponse
       */
      Models::ModifySslVpnClientCertResponse modifySslVpnClientCertWithOptions(const Models::ModifySslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an SSL-VPN client certificate.
       *
       * @param request ModifySslVpnClientCertRequest
       * @return ModifySslVpnClientCertResponse
       */
      Models::ModifySslVpnClientCertResponse modifySslVpnClientCert(const Models::ModifySslVpnClientCertRequest &request);

      /**
       * @summary Modifies the configurations of an SSL server.
       *
       * @description *   To enable two-factor authentication for an SSL server, make sure that the VPN gateway supports two-factor authentication. You may need to upgrade the VPN gateway. For more information, see [Two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * *   If you modify only **Name**, this operation is synchronous. If you modify other parameters besides **Name**, this operation is asynchronous.
       * *   **ModifySslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being modified.
       *     *   If the VPN gateway is in the **active** state, the SSL server is modified.
       * *   You cannot repeatedly call **ModifySslVpnServer** within the specified period of time.
       *
       * @param request ModifySslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServerWithOptions(const Models::ModifySslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an SSL server.
       *
       * @description *   To enable two-factor authentication for an SSL server, make sure that the VPN gateway supports two-factor authentication. You may need to upgrade the VPN gateway. For more information, see [Two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * *   If you modify only **Name**, this operation is synchronous. If you modify other parameters besides **Name**, this operation is asynchronous.
       * *   **ModifySslVpnServer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the SSL server is being modified.
       *     *   If the VPN gateway is in the **active** state, the SSL server is modified.
       * *   You cannot repeatedly call **ModifySslVpnServer** within the specified period of time.
       *
       * @param request ModifySslVpnServerRequest
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServer(const Models::ModifySslVpnServerRequest &request);

      /**
       * @summary Modifies a VPN tunnel.
       *
       * @param request ModifyTunnelAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTunnelAttributeResponse
       */
      Models::ModifyTunnelAttributeResponse modifyTunnelAttributeWithOptions(const Models::ModifyTunnelAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a VPN tunnel.
       *
       * @param request ModifyTunnelAttributeRequest
       * @return ModifyTunnelAttributeResponse
       */
      Models::ModifyTunnelAttributeResponse modifyTunnelAttribute(const Models::ModifyTunnelAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a vRouter.
       *
       * @description You cannot repeatedly call the **ModifyVRouterAttribute** operation within a specific period of time.
       *
       * @param request ModifyVRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttributeWithOptions(const Models::ModifyVRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a vRouter.
       *
       * @description You cannot repeatedly call the **ModifyVRouterAttribute** operation within a specific period of time.
       *
       * @param request ModifyVRouterAttributeRequest
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttribute(const Models::ModifyVRouterAttributeRequest &request);

      /**
       * @summary 修改VSwitch属性
       *
       * @description *   **ModifyVSwitchAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       *     *   If the vSwitch is in the **Pending** state, the name and description of the vSwitch are being modified.
       *     *   If the vSwitch is in the **Available** state, the name and description of the vSwitch are modified.
       * *   You cannot repeatedly call the **ModifyVSwitchAttribute** operation to modify the name and description of a vSwitch within the specified period of time.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改VSwitch属性
       *
       * @description *   **ModifyVSwitchAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task:
       *     *   If the vSwitch is in the **Pending** state, the name and description of the vSwitch are being modified.
       *     *   If the vSwitch is in the **Available** state, the name and description of the vSwitch are modified.
       * *   You cannot repeatedly call the **ModifyVSwitchAttribute** operation to modify the name and description of a vSwitch within the specified period of time.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @summary 修改交换机预留网段的名称和描述信息。
       *
       * @description ## [](#)Usage notes
       * You cannot repeatedly call **ModifyVSwitchCidrReservationAttribute** within a specific time period.
       *
       * @param request ModifyVSwitchCidrReservationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchCidrReservationAttributeResponse
       */
      Models::ModifyVSwitchCidrReservationAttributeResponse modifyVSwitchCidrReservationAttributeWithOptions(const Models::ModifyVSwitchCidrReservationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改交换机预留网段的名称和描述信息。
       *
       * @description ## [](#)Usage notes
       * You cannot repeatedly call **ModifyVSwitchCidrReservationAttribute** within a specific time period.
       *
       * @param request ModifyVSwitchCidrReservationAttributeRequest
       * @return ModifyVSwitchCidrReservationAttributeResponse
       */
      Models::ModifyVSwitchCidrReservationAttributeResponse modifyVSwitchCidrReservationAttribute(const Models::ModifyVSwitchCidrReservationAttributeRequest &request);

      /**
       * @summary Modifies the weight of a destination-based route for an IPsec-VPN connection.
       *
       * @description *   **ModifyVcoRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the associated IPsec-VPN connection and determine whether the weight of the specified destination-based route is modified.
       *     *   If the IPsec-VPN connection is in the **updating** state, the weight of the destination-based route is being modified.
       *     *   If the IPsec-VPN connection is in the **attached** state, the weight of the destination-based route is modified.
       * *   You cannot repeatedly call the **ModifyVcoRouteEntryWeight** operation for the same IPsec-VPN connection within the specified period of time.
       *
       * @param request ModifyVcoRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVcoRouteEntryWeightResponse
       */
      Models::ModifyVcoRouteEntryWeightResponse modifyVcoRouteEntryWeightWithOptions(const Models::ModifyVcoRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a destination-based route for an IPsec-VPN connection.
       *
       * @description *   **ModifyVcoRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the associated IPsec-VPN connection and determine whether the weight of the specified destination-based route is modified.
       *     *   If the IPsec-VPN connection is in the **updating** state, the weight of the destination-based route is being modified.
       *     *   If the IPsec-VPN connection is in the **attached** state, the weight of the destination-based route is modified.
       * *   You cannot repeatedly call the **ModifyVcoRouteEntryWeight** operation for the same IPsec-VPN connection within the specified period of time.
       *
       * @param request ModifyVcoRouteEntryWeightRequest
       * @return ModifyVcoRouteEntryWeightResponse
       */
      Models::ModifyVcoRouteEntryWeightResponse modifyVcoRouteEntryWeight(const Models::ModifyVcoRouteEntryWeightRequest &request);

      /**
       * @summary Modifies the configuration of a virtual border router (VBR).
       *
       * @description # [](#)
       * *   Only the owner of an Express Connect circuit can modify the **VlanId** parameter.
       * *   One VLAN ID of an Express Connect circuit cannot be used only by one VBR at the same time.
       * *   The VLAN ID of a VBR in the **Terminated** state is reserved for seven days and cannot be used by other VBRs. The VLAN ID can be used by other VBRs after 7 days.
       * *   You cannot set **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask** for VBRs that do not belong to your Alibaba Cloud account.
       * *   Set **PeeringSubnetMask** to a subnet mask with 24 to 30 bits in length (255.255.255.0～255.255.255.252).
       * *   Set **LocalGatewayIp** and **PeerGatewayIp** to IP addresses that belong to the same CIDR block. For example, you can set LocalGatewayIp to 192.168.XX.XX, PeerGatewayIp to 192.168.XX.XX, and PeeringSubnetMask to 255.255.255.248.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttributeWithOptions(const Models::ModifyVirtualBorderRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a virtual border router (VBR).
       *
       * @description # [](#)
       * *   Only the owner of an Express Connect circuit can modify the **VlanId** parameter.
       * *   One VLAN ID of an Express Connect circuit cannot be used only by one VBR at the same time.
       * *   The VLAN ID of a VBR in the **Terminated** state is reserved for seven days and cannot be used by other VBRs. The VLAN ID can be used by other VBRs after 7 days.
       * *   You cannot set **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask** for VBRs that do not belong to your Alibaba Cloud account.
       * *   Set **PeeringSubnetMask** to a subnet mask with 24 to 30 bits in length (255.255.255.0～255.255.255.252).
       * *   Set **LocalGatewayIp** and **PeerGatewayIp** to IP addresses that belong to the same CIDR block. For example, you can set LocalGatewayIp to 192.168.XX.XX, PeerGatewayIp to 192.168.XX.XX, and PeeringSubnetMask to 255.255.255.248.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttribute(const Models::ModifyVirtualBorderRouterAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a virtual private cloud (VPC).
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **ModifyVpcAttribute** operation to modify the name and description of a VPC within the specified period of time.
       *
       * @param request ModifyVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttributeWithOptions(const Models::ModifyVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a virtual private cloud (VPC).
       *
       * @description ## [](#)Description
       * You cannot repeatedly call the **ModifyVpcAttribute** operation to modify the name and description of a VPC within the specified period of time.
       *
       * @param request ModifyVpcAttributeRequest
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttribute(const Models::ModifyVpcAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a prefix list.
       *
       * @description *   **ModifyVpcPrefixList** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPrefixLists](https://help.aliyun.com/document_detail/311535.html) to query the status of the task.
       *     *   If the prefix list is in the **Modifying** state, the configuration of the prefix list is being modified.
       *     *   If the prefix list is in the **Created** state, the configuration of the prefix list is modified.
       *     *   After the configuration of the prefix list is modified, you can call the [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) operation to query the information about the network instances that are associated with the prefix list and determine whether the associated network instances use the new CIDR blocks. If the association **status** of the prefix list is **Created**, the new CIDR blocks are used by the network instances that are associated with the prefix list.
       * *   You cannot repeatedly call **ModifyVpcPrefixList** to modify the configuration of a prefix list within the specified period of time.
       *
       * @param request ModifyVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcPrefixListResponse
       */
      Models::ModifyVpcPrefixListResponse modifyVpcPrefixListWithOptions(const Models::ModifyVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a prefix list.
       *
       * @description *   **ModifyVpcPrefixList** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListPrefixLists](https://help.aliyun.com/document_detail/311535.html) to query the status of the task.
       *     *   If the prefix list is in the **Modifying** state, the configuration of the prefix list is being modified.
       *     *   If the prefix list is in the **Created** state, the configuration of the prefix list is modified.
       *     *   After the configuration of the prefix list is modified, you can call the [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) operation to query the information about the network instances that are associated with the prefix list and determine whether the associated network instances use the new CIDR blocks. If the association **status** of the prefix list is **Created**, the new CIDR blocks are used by the network instances that are associated with the prefix list.
       * *   You cannot repeatedly call **ModifyVpcPrefixList** to modify the configuration of a prefix list within the specified period of time.
       *
       * @param request ModifyVpcPrefixListRequest
       * @return ModifyVpcPrefixListResponse
       */
      Models::ModifyVpcPrefixListResponse modifyVpcPrefixList(const Models::ModifyVpcPrefixListRequest &request);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description *   When you modify a IPsec-VPN connection in dual-tunnel mode, you can configure the following parameters in addition to the required request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * *   When you modify a IPsec-VPN connection in single tunnel mode, you can configure the following parameters in addition to the required request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **CustomerGatewayId**.
       * *   **ModifyVpnAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the task:
       *     *   If the IPsec-VPN connection is in the **updating** state, the IPsec-VPN connection is being modified.
       *     *   If the IPsec-VPN connection is in the **attached** state, the IPsec-VPN connection is modified.
       * *   You cannot concurrently call **ModifyVpnAttachmentAttribute** within the specified period of time.
       * *   You cannot call **ModifyVpnAttachmentAttribute** to modify the gateway type of an IPsec-VPN connection.
       *
       * @param request ModifyVpnAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnAttachmentAttributeResponse
       */
      Models::ModifyVpnAttachmentAttributeResponse modifyVpnAttachmentAttributeWithOptions(const Models::ModifyVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description *   When you modify a IPsec-VPN connection in dual-tunnel mode, you can configure the following parameters in addition to the required request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * *   When you modify a IPsec-VPN connection in single tunnel mode, you can configure the following parameters in addition to the required request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **CustomerGatewayId**.
       * *   **ModifyVpnAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) operation to query the status of the task:
       *     *   If the IPsec-VPN connection is in the **updating** state, the IPsec-VPN connection is being modified.
       *     *   If the IPsec-VPN connection is in the **attached** state, the IPsec-VPN connection is modified.
       * *   You cannot concurrently call **ModifyVpnAttachmentAttribute** within the specified period of time.
       * *   You cannot call **ModifyVpnAttachmentAttribute** to modify the gateway type of an IPsec-VPN connection.
       *
       * @param request ModifyVpnAttachmentAttributeRequest
       * @return ModifyVpnAttachmentAttributeResponse
       */
      Models::ModifyVpnAttachmentAttributeResponse modifyVpnAttachmentAttribute(const Models::ModifyVpnAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description *   If you want to modify a IPsec-VPN connection in dual-tunnel mode, call the `ModifyVpnConnectionAttribute` operation. You can modify the required parameters and the following request parameters:
       *     **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification**, and **EnableTunnelsBgp**.
       * *   If you want to modify a IPsec-VPN connection in single-tunnel mode, call the `ModifyVpnConnectionAttribute` operation. You can modify the required parameters and the following request parameters:
       *     **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **RemoteCaCertificate**.
       * *   **ModifyVpnConnectionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and modifies the configuration of the IPsec-VPN connection in the backend. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of a VPN gateway.
       *     *   If the VPN gateway is in the **updating** state, the configuration of the IPsec-VPN connection is being modified.
       *     *   If the VPN gateway is in the **active** state, the configuration of the IPsec-VPN connection is modified.
       * *   You cannot repeatedly call the **ModifyVpnConnectionAttribute** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnConnectionAttributeResponse
       */
      Models::ModifyVpnConnectionAttributeResponse modifyVpnConnectionAttributeWithOptions(const Models::ModifyVpnConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description *   If you want to modify a IPsec-VPN connection in dual-tunnel mode, call the `ModifyVpnConnectionAttribute` operation. You can modify the required parameters and the following request parameters:
       *     **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification**, and **EnableTunnelsBgp**.
       * *   If you want to modify a IPsec-VPN connection in single-tunnel mode, call the `ModifyVpnConnectionAttribute` operation. You can modify the required parameters and the following request parameters:
       *     **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **RemoteCaCertificate**.
       * *   **ModifyVpnConnectionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and modifies the configuration of the IPsec-VPN connection in the backend. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of a VPN gateway.
       *     *   If the VPN gateway is in the **updating** state, the configuration of the IPsec-VPN connection is being modified.
       *     *   If the VPN gateway is in the **active** state, the configuration of the IPsec-VPN connection is modified.
       * *   You cannot repeatedly call the **ModifyVpnConnectionAttribute** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnConnectionAttributeRequest
       * @return ModifyVpnConnectionAttributeResponse
       */
      Models::ModifyVpnConnectionAttributeResponse modifyVpnConnectionAttribute(const Models::ModifyVpnConnectionAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a VPN gateway.
       *
       * @description *   **ModifyVpnGatewayAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the VPN gateway is being modified.
       *     *   If the VPN gateway is in the **active** state, the VPN gateway is modified.
       * *   You cannot repeatedly call **ModifyVpnGatewayAttribute** to modify a VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnGatewayAttributeResponse
       */
      Models::ModifyVpnGatewayAttributeResponse modifyVpnGatewayAttributeWithOptions(const Models::ModifyVpnGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a VPN gateway.
       *
       * @description *   **ModifyVpnGatewayAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the VPN gateway is being modified.
       *     *   If the VPN gateway is in the **active** state, the VPN gateway is modified.
       * *   You cannot repeatedly call **ModifyVpnGatewayAttribute** to modify a VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnGatewayAttributeRequest
       * @return ModifyVpnGatewayAttributeResponse
       */
      Models::ModifyVpnGatewayAttributeResponse modifyVpnGatewayAttribute(const Models::ModifyVpnGatewayAttributeRequest &request);

      /**
       * @summary Modifies the weight and priority of a policy-based route.
       *
       * @description *   You can call the **ModifyVpnPbrRouteEntryAttribute** operation to modify the weight and priority of a policy-based route.
       *     *   If you want to modify only the weight of a policy-based route, call [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html).
       *     *   If you want to modify only the priority of a policy-based route, call [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html).
       *     *   If a policy-based route does not support priorities, you can only call [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) to modify its weight.
       * *   The **ModifyVpnPbrRouteEntryAttribute** operation is asynchronous. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of a VPN gateway.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If a VPN gateway is in the **active** state, the policy-based route entry is modified.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryAttribute** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttributeWithOptions(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight and priority of a policy-based route.
       *
       * @description *   You can call the **ModifyVpnPbrRouteEntryAttribute** operation to modify the weight and priority of a policy-based route.
       *     *   If you want to modify only the weight of a policy-based route, call [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html).
       *     *   If you want to modify only the priority of a policy-based route, call [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html).
       *     *   If a policy-based route does not support priorities, you can only call [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) to modify its weight.
       * *   The **ModifyVpnPbrRouteEntryAttribute** operation is asynchronous. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of a VPN gateway.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If a VPN gateway is in the **active** state, the policy-based route entry is modified.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryAttribute** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttribute(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request);

      /**
       * @summary Modifies the priority of a policy-based route.
       *
       * @description *   **ModifyVpnPbrRouteEntryPriority** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If the VPN gateway is in the **active** state, the policy-based route is created.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryPriority** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryPriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryPriorityResponse
       */
      Models::ModifyVpnPbrRouteEntryPriorityResponse modifyVpnPbrRouteEntryPriorityWithOptions(const Models::ModifyVpnPbrRouteEntryPriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of a policy-based route.
       *
       * @description *   **ModifyVpnPbrRouteEntryPriority** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If the VPN gateway is in the **active** state, the policy-based route is created.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryPriority** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryPriorityRequest
       * @return ModifyVpnPbrRouteEntryPriorityResponse
       */
      Models::ModifyVpnPbrRouteEntryPriorityResponse modifyVpnPbrRouteEntryPriority(const Models::ModifyVpnPbrRouteEntryPriorityRequest &request);

      /**
       * @summary Modifies the weight of a policy-based route of a VPN gateway.
       *
       * @description *   **ModifyVpnPbrRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If a VPN gateway is in the **active** state, the policy-based route entry is modified.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryWeight** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryWeightResponse
       */
      Models::ModifyVpnPbrRouteEntryWeightResponse modifyVpnPbrRouteEntryWeightWithOptions(const Models::ModifyVpnPbrRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a policy-based route of a VPN gateway.
       *
       * @description *   **ModifyVpnPbrRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If a VPN gateway is in the **updating** state, the policy-based route entry is being modified.
       *     *   If a VPN gateway is in the **active** state, the policy-based route entry is modified.
       * *   You cannot repeatedly call the **ModifyVpnPbrRouteEntryWeight** operation for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnPbrRouteEntryWeightRequest
       * @return ModifyVpnPbrRouteEntryWeightResponse
       */
      Models::ModifyVpnPbrRouteEntryWeightResponse modifyVpnPbrRouteEntryWeight(const Models::ModifyVpnPbrRouteEntryWeightRequest &request);

      /**
       * @summary Modifies the weight of a destination-based route.
       *
       * @description *   In scenarios where a VPN gateway has an active and a standby destination-based route, if you need to modify the weight of the active destination-based route, you must first delete the standby destination-based route. After you modify the active destination-based route, configure a standby destination-based route. If you need to modify the weight of the standby destination-based route, you also need to delete the active destination-based route first. After you modify the standby destination-based route, configure an active destination-based route. For more information about how to delete a destination-based route, see [DeleteVpnRouteEntry](https://help.aliyun.com/document_detail/2526961.html).
       * *   **ModifyVpnRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the weight of the destination-based route is being modified.
       *     *   If the VPN gateway is in the **active** state, the weight of the destination-based route is modified.
       * *   You cannot repeatedly call the **ModifyVpnRouteEntryWeight** operation to modify the weight of destination-based route for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnRouteEntryWeightResponse
       */
      Models::ModifyVpnRouteEntryWeightResponse modifyVpnRouteEntryWeightWithOptions(const Models::ModifyVpnRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a destination-based route.
       *
       * @description *   In scenarios where a VPN gateway has an active and a standby destination-based route, if you need to modify the weight of the active destination-based route, you must first delete the standby destination-based route. After you modify the active destination-based route, configure a standby destination-based route. If you need to modify the weight of the standby destination-based route, you also need to delete the active destination-based route first. After you modify the standby destination-based route, configure an active destination-based route. For more information about how to delete a destination-based route, see [DeleteVpnRouteEntry](https://help.aliyun.com/document_detail/2526961.html).
       * *   **ModifyVpnRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the weight of the destination-based route is being modified.
       *     *   If the VPN gateway is in the **active** state, the weight of the destination-based route is modified.
       * *   You cannot repeatedly call the **ModifyVpnRouteEntryWeight** operation to modify the weight of destination-based route for the same VPN gateway within the specified period of time.
       *
       * @param request ModifyVpnRouteEntryWeightRequest
       * @return ModifyVpnRouteEntryWeightResponse
       */
      Models::ModifyVpnRouteEntryWeightResponse modifyVpnRouteEntryWeight(const Models::ModifyVpnRouteEntryWeightRequest &request);

      /**
       * @summary Moves a resource to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Moves a VPN gateway resource to a new resource group.
       *
       * @param request MoveVpnResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveVpnResourceGroupResponse
       */
      Models::MoveVpnResourceGroupResponse moveVpnResourceGroupWithOptions(const Models::MoveVpnResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a VPN gateway resource to a new resource group.
       *
       * @param request MoveVpnResourceGroupRequest
       * @return MoveVpnResourceGroupResponse
       */
      Models::MoveVpnResourceGroupResponse moveVpnResourceGroup(const Models::MoveVpnResourceGroupRequest &request);

      /**
       * @summary Enables the flow log feature.
       *
       * @description *   You cannot repeatedly call the **OpenFlowLogService** operation within the specified period of time by using an Alibaba Cloud account.
       * *   You can call the [GetFlowLogServiceStatus](https://help.aliyun.com/document_detail/449624.html) operation to query the status of the flow log feature.
       *
       * @param request OpenFlowLogServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenFlowLogServiceResponse
       */
      Models::OpenFlowLogServiceResponse openFlowLogServiceWithOptions(const Models::OpenFlowLogServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the flow log feature.
       *
       * @description *   You cannot repeatedly call the **OpenFlowLogService** operation within the specified period of time by using an Alibaba Cloud account.
       * *   You can call the [GetFlowLogServiceStatus](https://help.aliyun.com/document_detail/449624.html) operation to query the status of the flow log feature.
       *
       * @param request OpenFlowLogServiceRequest
       * @return OpenFlowLogServiceResponse
       */
      Models::OpenFlowLogServiceResponse openFlowLogService(const Models::OpenFlowLogServiceRequest &request);

      /**
       * @summary Enables billing for outbound data transfer.
       *
       * @param request OpenPhysicalConnectionServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPhysicalConnectionServiceResponse
       */
      Models::OpenPhysicalConnectionServiceResponse openPhysicalConnectionServiceWithOptions(const Models::OpenPhysicalConnectionServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables billing for outbound data transfer.
       *
       * @param request OpenPhysicalConnectionServiceRequest
       * @return OpenPhysicalConnectionServiceResponse
       */
      Models::OpenPhysicalConnectionServiceResponse openPhysicalConnectionService(const Models::OpenPhysicalConnectionServiceRequest &request);

      /**
       * @summary Enables the IP address pool feature.
       *
       * @param request OpenPublicIpAddressPoolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPublicIpAddressPoolServiceResponse
       */
      Models::OpenPublicIpAddressPoolServiceResponse openPublicIpAddressPoolServiceWithOptions(const Models::OpenPublicIpAddressPoolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the IP address pool feature.
       *
       * @param request OpenPublicIpAddressPoolServiceRequest
       * @return OpenPublicIpAddressPoolServiceResponse
       */
      Models::OpenPublicIpAddressPoolServiceResponse openPublicIpAddressPoolService(const Models::OpenPublicIpAddressPoolServiceRequest &request);

      /**
       * @summary Enables traffic mirror.
       *
       * @description ## [](#)Usage notes
       * You can enable traffic mirror for different regions. You cannot repeatedly call the **OpenTrafficMirrorService** operation to enable traffic mirror for one region within the specified period of time.
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorServiceWithOptions(const Models::OpenTrafficMirrorServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables traffic mirror.
       *
       * @description ## [](#)Usage notes
       * You can enable traffic mirror for different regions. You cannot repeatedly call the **OpenTrafficMirrorService** operation to enable traffic mirror for one region within the specified period of time.
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorService(const Models::OpenTrafficMirrorServiceRequest &request);

      /**
       * @summary Advertises VPC routes to an external component.
       *
       * @param request PublishVpcRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntriesWithOptions(const Models::PublishVpcRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Advertises VPC routes to an external component.
       *
       * @param request PublishVpcRouteEntriesRequest
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntries(const Models::PublishVpcRouteEntriesRequest &request);

      /**
       * @summary Advertises a VPN route to a VPC.
       *
       * @param request PublishVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntryWithOptions(const Models::PublishVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Advertises a VPN route to a VPC.
       *
       * @param request PublishVpnRouteEntryRequest
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntry(const Models::PublishVpnRouteEntryRequest &request);

      /**
       * @summary Resumes an Express Connect circuit.
       *
       * @description # [](#)Description
       * You can call this API operation to resume a suspended Express Connect circuit. You can resume only shared Express Connect circuits by calling this API operation.
       *
       * @param request RecoverPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverPhysicalConnectionResponse
       */
      Models::RecoverPhysicalConnectionResponse recoverPhysicalConnectionWithOptions(const Models::RecoverPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an Express Connect circuit.
       *
       * @description # [](#)Description
       * You can call this API operation to resume a suspended Express Connect circuit. You can resume only shared Express Connect circuits by calling this API operation.
       *
       * @param request RecoverPhysicalConnectionRequest
       * @return RecoverPhysicalConnectionResponse
       */
      Models::RecoverPhysicalConnectionResponse recoverPhysicalConnection(const Models::RecoverPhysicalConnectionRequest &request);

      /**
       * @summary Enables a disabled virtual border router (VBR).
       *
       * @description After you call this operation, the VBR changes from the **terminated** state to the **recovering** state. After the operation is performed, the VBR enters the **active** state.
       * When you call this operation, take note of the following items:
       * *   Only the owner of the Express Connect circuit can call this operation.
       * *   The Express Connect circuit to which the VBR connects must be in the **Enabled** state.
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouterWithOptions(const Models::RecoverVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a disabled virtual border router (VBR).
       *
       * @description After you call this operation, the VBR changes from the **terminated** state to the **recovering** state. After the operation is performed, the VBR enters the **active** state.
       * When you call this operation, take note of the following items:
       * *   Only the owner of the Express Connect circuit can call this operation.
       * *   The Express Connect circuit to which the VBR connects must be in the **Enabled** state.
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouter(const Models::RecoverVirtualBorderRouterRequest &request);

      /**
       * @summary Releases an elastic IP address (EIP).
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you release an EIP, make sure that the EIP meets the following requirements:
       *     *   You can release only an EIP that is in the **Available** state.
       *     *   You can release only a pay-as-you-go EIP. You cannot release a subscription EIP.
       * *   **ReleaseEipAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task:
       *     *   If the EIP is in the **Releasing** state, the EIP is being released. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If you cannot query the EIP, the EIP is released.
       * *   You cannot repeatedly call the **ReleaseEipAddress** operation to release an EIP within the specified period of time.
       *
       * @param request ReleaseEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddressWithOptions(const Models::ReleaseEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an elastic IP address (EIP).
       *
       * @description Before you call this operation, take note of the following items:
       * *   Before you release an EIP, make sure that the EIP meets the following requirements:
       *     *   You can release only an EIP that is in the **Available** state.
       *     *   You can release only a pay-as-you-go EIP. You cannot release a subscription EIP.
       * *   **ReleaseEipAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task:
       *     *   If the EIP is in the **Releasing** state, the EIP is being released. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If you cannot query the EIP, the EIP is released.
       * *   You cannot repeatedly call the **ReleaseEipAddress** operation to release an EIP within the specified period of time.
       *
       * @param request ReleaseEipAddressRequest
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddress(const Models::ReleaseEipAddressRequest &request);

      /**
       * @summary Releases contiguous elastic IP addresses (EIPs).
       *
       * @description *   After you call the **ReleaseEipSegmentAddress** operation, all EIPs in the specified group are released.
       * *   **ReleaseEipSegmentAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) operation to query the status of the task.
       *     *   If the group is in the **Releasing** state, EIPs in the group are being released. In this state, you can only query the group and cannot perform other operations.
       *     *   If you cannot query the group of contiguous EIPs, the contiguous EIPs are released.
       * *   You cannot repeatedly call the **ReleaseEipSegmentAddress** operation to release a group of contiguous EIPs within the specified period of time.
       *
       * @param request ReleaseEipSegmentAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipSegmentAddressResponse
       */
      Models::ReleaseEipSegmentAddressResponse releaseEipSegmentAddressWithOptions(const Models::ReleaseEipSegmentAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases contiguous elastic IP addresses (EIPs).
       *
       * @description *   After you call the **ReleaseEipSegmentAddress** operation, all EIPs in the specified group are released.
       * *   **ReleaseEipSegmentAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) operation to query the status of the task.
       *     *   If the group is in the **Releasing** state, EIPs in the group are being released. In this state, you can only query the group and cannot perform other operations.
       *     *   If you cannot query the group of contiguous EIPs, the contiguous EIPs are released.
       * *   You cannot repeatedly call the **ReleaseEipSegmentAddress** operation to release a group of contiguous EIPs within the specified period of time.
       *
       * @param request ReleaseEipSegmentAddressRequest
       * @return ReleaseEipSegmentAddressResponse
       */
      Models::ReleaseEipSegmentAddressResponse releaseEipSegmentAddress(const Models::ReleaseEipSegmentAddressRequest &request);

      /**
       * @summary Releases an idle IPv6 address.
       *
       * @param request ReleaseIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseIpv6AddressResponse
       */
      Models::ReleaseIpv6AddressResponse releaseIpv6AddressWithOptions(const Models::ReleaseIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an idle IPv6 address.
       *
       * @param request ReleaseIpv6AddressRequest
       * @return ReleaseIpv6AddressResponse
       */
      Models::ReleaseIpv6AddressResponse releaseIpv6Address(const Models::ReleaseIpv6AddressRequest &request);

      /**
       * @summary Disassociates an EIP from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveCommonBandwidthPackageIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCommonBandwidthPackageIpResponse
       */
      Models::RemoveCommonBandwidthPackageIpResponse removeCommonBandwidthPackageIpWithOptions(const Models::RemoveCommonBandwidthPackageIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an EIP from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveCommonBandwidthPackageIpRequest
       * @return RemoveCommonBandwidthPackageIpResponse
       */
      Models::RemoveCommonBandwidthPackageIpResponse removeCommonBandwidthPackageIp(const Models::RemoveCommonBandwidthPackageIpRequest &request);

      /**
       * @param request RemoveGlobalAccelerationInstanceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGlobalAccelerationInstanceIpResponse
       */
      Models::RemoveGlobalAccelerationInstanceIpResponse removeGlobalAccelerationInstanceIpWithOptions(const Models::RemoveGlobalAccelerationInstanceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveGlobalAccelerationInstanceIpRequest
       * @return RemoveGlobalAccelerationInstanceIpResponse
       */
      Models::RemoveGlobalAccelerationInstanceIpResponse removeGlobalAccelerationInstanceIp(const Models::RemoveGlobalAccelerationInstanceIpRequest &request);

      /**
       * @summary Deletes an IP entry from an ACL.
       *
       * @param request RemoveIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIPv6TranslatorAclListEntryResponse
       */
      Models::RemoveIPv6TranslatorAclListEntryResponse removeIPv6TranslatorAclListEntryWithOptions(const Models::RemoveIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IP entry from an ACL.
       *
       * @param request RemoveIPv6TranslatorAclListEntryRequest
       * @return RemoveIPv6TranslatorAclListEntryResponse
       */
      Models::RemoveIPv6TranslatorAclListEntryResponse removeIPv6TranslatorAclListEntry(const Models::RemoveIPv6TranslatorAclListEntryRequest &request);

      /**
       * @summary Deletes a traffic mirror source from a traffic mirror session.
       *
       * @description *   **RemoveSourcesFromTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being deleted.
       *     *   If the traffic mirror session is in the **Created** state, the traffic mirror source is deleted.
       * *   You cannot repeatedly call **RemoveSourcesFromTrafficMirrorSession** within the specified period of time.
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSessionWithOptions(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic mirror source from a traffic mirror session.
       *
       * @description *   **RemoveSourcesFromTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being deleted.
       *     *   If the traffic mirror session is in the **Created** state, the traffic mirror source is deleted.
       * *   You cannot repeatedly call **RemoveSourcesFromTrafficMirrorSession** within the specified period of time.
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSession(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request);

      /**
       * @summary 更改DHCP选项集与VPC的关联。
       *
       * @description *   The **ReplaceVpcDhcpOptionsSet** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a DHCP options set:
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being replaced.
       *     *   If the DHCP options set is in the **InUse** state, the DHCP options set is replaced.
       * *   You cannot repeatedly call the **ReplaceVpcDhcpOptionsSet** operation to replace the DHCP options set associated with a VPC within the specified period of time.
       *
       * @param request ReplaceVpcDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceVpcDhcpOptionsSetResponse
       */
      Models::ReplaceVpcDhcpOptionsSetResponse replaceVpcDhcpOptionsSetWithOptions(const Models::ReplaceVpcDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改DHCP选项集与VPC的关联。
       *
       * @description *   The **ReplaceVpcDhcpOptionsSet** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the status of a DHCP options set:
       *     *   If the DHCP options set is in the **Pending** state, the DHCP options set is being replaced.
       *     *   If the DHCP options set is in the **InUse** state, the DHCP options set is replaced.
       * *   You cannot repeatedly call the **ReplaceVpcDhcpOptionsSet** operation to replace the DHCP options set associated with a VPC within the specified period of time.
       *
       * @param request ReplaceVpcDhcpOptionsSetRequest
       * @return ReplaceVpcDhcpOptionsSetResponse
       */
      Models::ReplaceVpcDhcpOptionsSetResponse replaceVpcDhcpOptionsSet(const Models::ReplaceVpcDhcpOptionsSetRequest &request);

      /**
       * @summary Re-applies a prefix list.
       *
       * @description *   If you modify the information about a prefix list but the modification is not automatically applied to the route table that is associated with the prefix list, you can call this operation to apply the latest prefix list to the associated route table.
       * *   The **RetryVpcPrefixListAssociation** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to check whether the prefix list is re-applied.
       *     *   If the prefix list is in the **Modifying** state, the prefix list is being re-applied.
       *     *   If the prefix list is in the **ModifyFailed** state, the prefix list fails to be re-applied.
       *     *   If the prefix list is in the **Created** state, the prefix list is re-applied.
       * *   After you call the **RetryVpcPrefixListAssociation** operation to re-apply a prefix list, you cannot call the operation again until the current task is complete.
       *
       * @param request RetryVpcPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryVpcPrefixListAssociationResponse
       */
      Models::RetryVpcPrefixListAssociationResponse retryVpcPrefixListAssociationWithOptions(const Models::RetryVpcPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-applies a prefix list.
       *
       * @description *   If you modify the information about a prefix list but the modification is not automatically applied to the route table that is associated with the prefix list, you can call this operation to apply the latest prefix list to the associated route table.
       * *   The **RetryVpcPrefixListAssociation** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to check whether the prefix list is re-applied.
       *     *   If the prefix list is in the **Modifying** state, the prefix list is being re-applied.
       *     *   If the prefix list is in the **ModifyFailed** state, the prefix list fails to be re-applied.
       *     *   If the prefix list is in the **Created** state, the prefix list is re-applied.
       * *   After you call the **RetryVpcPrefixListAssociation** operation to re-apply a prefix list, you cannot call the operation again until the current task is complete.
       *
       * @param request RetryVpcPrefixListAssociationRequest
       * @return RetryVpcPrefixListAssociationResponse
       */
      Models::RetryVpcPrefixListAssociationResponse retryVpcPrefixListAssociation(const Models::RetryVpcPrefixListAssociationRequest &request);

      /**
       * @summary Revokes the permissions granted to a Cloud Enterprise Network (CEN) instance on a network instance.
       *
       * @description ## [](#)Usage notes
       * *   **RevokeInstanceFromCen** is a Virtual Private Cloud (VPC) operation. Therefore, you must use `vpc.aliyuncs.com` as the domain name when you call this operation. The API version is `2016-04-28`.
       * *   You cannot repeatedly call the **RevokeInstanceFromCen** operation to revoke the permissions on a network instance that is attached to a CEN instance within the specified period of time. The network instance can be a VPC, virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeInstanceFromCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromCenResponse
       */
      Models::RevokeInstanceFromCenResponse revokeInstanceFromCenWithOptions(const Models::RevokeInstanceFromCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions granted to a Cloud Enterprise Network (CEN) instance on a network instance.
       *
       * @description ## [](#)Usage notes
       * *   **RevokeInstanceFromCen** is a Virtual Private Cloud (VPC) operation. Therefore, you must use `vpc.aliyuncs.com` as the domain name when you call this operation. The API version is `2016-04-28`.
       * *   You cannot repeatedly call the **RevokeInstanceFromCen** operation to revoke the permissions on a network instance that is attached to a CEN instance within the specified period of time. The network instance can be a VPC, virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeInstanceFromCenRequest
       * @return RevokeInstanceFromCenResponse
       */
      Models::RevokeInstanceFromCenResponse revokeInstanceFromCen(const Models::RevokeInstanceFromCenRequest &request);

      /**
       * @summary Revokes the permissions granted to a virtual border router (VBR) on a virtual private cloud (VPC).
       *
       * @param tmpReq RevokeInstanceFromVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbrWithOptions(const Models::RevokeInstanceFromVbrRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions granted to a virtual border router (VBR) on a virtual private cloud (VPC).
       *
       * @param request RevokeInstanceFromVbrRequest
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbr(const Models::RevokeInstanceFromVbrRequest &request);

      /**
       * @summary If your application for a Letter of Authorization (LOA) by calling the ApplyPhysicalConnectionLOA operation is denied, you can call this operation to apply again.
       *
       * @param request SecondApplyPhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SecondApplyPhysicalConnectionLOAResponse
       */
      Models::SecondApplyPhysicalConnectionLOAResponse secondApplyPhysicalConnectionLOAWithOptions(const Models::SecondApplyPhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If your application for a Letter of Authorization (LOA) by calling the ApplyPhysicalConnectionLOA operation is denied, you can call this operation to apply again.
       *
       * @param request SecondApplyPhysicalConnectionLOARequest
       * @return SecondApplyPhysicalConnectionLOAResponse
       */
      Models::SecondApplyPhysicalConnectionLOAResponse secondApplyPhysicalConnectionLOA(const Models::SecondApplyPhysicalConnectionLOARequest &request);

      /**
       * @summary Configures fine-grained monitoring for an elastic IP address (EIP).
       *
       * @description You cannot repeatedly call **SetHighDefinitionMonitorLogStatus** within a specific period of time.
       *
       * @param request SetHighDefinitionMonitorLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHighDefinitionMonitorLogStatusResponse
       */
      Models::SetHighDefinitionMonitorLogStatusResponse setHighDefinitionMonitorLogStatusWithOptions(const Models::SetHighDefinitionMonitorLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures fine-grained monitoring for an elastic IP address (EIP).
       *
       * @description You cannot repeatedly call **SetHighDefinitionMonitorLogStatus** within a specific period of time.
       *
       * @param request SetHighDefinitionMonitorLogStatusRequest
       * @return SetHighDefinitionMonitorLogStatusResponse
       */
      Models::SetHighDefinitionMonitorLogStatusResponse setHighDefinitionMonitorLogStatus(const Models::SetHighDefinitionMonitorLogStatusRequest &request);

      /**
       * @summary Performs a failover test.
       *
       * @description You can perform only failover tests that are in the **Pending** state.
       *
       * @param request StartFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJobWithOptions(const Models::StartFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a failover test.
       *
       * @description You can perform only failover tests that are in the **Pending** state.
       *
       * @param request StartFailoverTestJobRequest
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJob(const Models::StartFailoverTestJobRequest &request);

      /**
       * @summary Terminates a failover test.
       *
       * @param request StopFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopFailoverTestJobResponse
       */
      Models::StopFailoverTestJobResponse stopFailoverTestJobWithOptions(const Models::StopFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a failover test.
       *
       * @param request StopFailoverTestJobRequest
       * @return StopFailoverTestJobResponse
       */
      Models::StopFailoverTestJobResponse stopFailoverTestJob(const Models::StopFailoverTestJobRequest &request);

      /**
       * @summary Switch Active and Standby For RouteTargetGroup.
       *
       * @description Switch Active and Standby For RouteTargetGroup.
       *
       * @param request SwitchActiveRouteTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchActiveRouteTargetResponse
       */
      Models::SwitchActiveRouteTargetResponse switchActiveRouteTargetWithOptions(const Models::SwitchActiveRouteTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switch Active and Standby For RouteTargetGroup.
       *
       * @description Switch Active and Standby For RouteTargetGroup.
       *
       * @param request SwitchActiveRouteTargetRequest
       * @return SwitchActiveRouteTargetResponse
       */
      Models::SwitchActiveRouteTargetResponse switchActiveRouteTarget(const Models::SwitchActiveRouteTargetRequest &request);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @description Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following limits:
       * *   The keys of tags that are added to the same instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   Virtual private clouds (VPCs), route tables, vSwitches, and elastic IP addresses (EIPs) that belong to the same Alibaba Cloud account and are deployed in the same region share tag information with each other.
       *     For example, if you added a tag to a VPC, the tag is available to vSwitches, route tables, and EIPs that belong to the same account and are deployed in the same region in which the VPC is created. You can select this tag from the editing page without the need to enter the tag again. You can modify the key and the value of a tag or remove a tag from an instance. After you delete an instance, all tags that are added to the instance are deleted.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @description Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following limits:
       * *   The keys of tags that are added to the same instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   Virtual private clouds (VPCs), route tables, vSwitches, and elastic IP addresses (EIPs) that belong to the same Alibaba Cloud account and are deployed in the same region share tag information with each other.
       *     For example, if you added a tag to a VPC, the tag is available to vSwitches, route tables, and EIPs that belong to the same account and are deployed in the same region in which the VPC is created. You can select this tag from the editing page without the need to enter the tag again. You can modify the key and the value of a tag or remove a tag from an instance. After you delete an instance, all tags that are added to the instance are deleted.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Creates tags and adds the tags to an Express Connect circuit.
       *
       * @description ## [](#)
       * Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following items:
       * *   Each tag key that is added to an instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesForExpressConnectResponse
       */
      Models::TagResourcesForExpressConnectResponse tagResourcesForExpressConnectWithOptions(const Models::TagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds the tags to an Express Connect circuit.
       *
       * @description ## [](#)
       * Tags are used to classify instances. Each tag consists of a key-value pair. Before you use tags, take note of the following items:
       * *   Each tag key that is added to an instance must be unique.
       * *   You cannot create tags without adding them to instances. All tags must be added to instances.
       * *   Tag information is not shared across regions.
       *     For example, you cannot view the tags that are created in the China (Hangzhou) region from the China (Shanghai) region.
       * *   You can add up to 20 tags to each instance. Before you add a tag to an instance, the system automatically checks the number of existing tags. An error message is returned if the maximum number of tags is reached.
       *
       * @param request TagResourcesForExpressConnectRequest
       * @return TagResourcesForExpressConnectResponse
       */
      Models::TagResourcesForExpressConnectResponse tagResourcesForExpressConnect(const Models::TagResourcesForExpressConnectRequest &request);

      /**
       * @summary Disables an Express Connect circuit after it is enabled.
       *
       * @description After you call this operation, the specified Express Connect circuit changes to the **Terminating** state. After the Express Connect circuit is disabled, it changes to the **Terminated** state. When you call this operation, take note of the following limits:
       * *   You can only disable an Express Connect circuit that is in the **Enabled** state.
       * *   Before you disable an Express Connect circuit, you must delete the virtual border routers (VBRs) associated with it.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnectionWithOptions(const Models::TerminatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an Express Connect circuit after it is enabled.
       *
       * @description After you call this operation, the specified Express Connect circuit changes to the **Terminating** state. After the Express Connect circuit is disabled, it changes to the **Terminated** state. When you call this operation, take note of the following limits:
       * *   You can only disable an Express Connect circuit that is in the **Enabled** state.
       * *   Before you disable an Express Connect circuit, you must delete the virtual border routers (VBRs) associated with it.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnection(const Models::TerminatePhysicalConnectionRequest &request);

      /**
       * @summary Terminates a virtual border router (VBR).
       *
       * @description After you call this operation, the VBR enters the **terminating** state from the **active** state. After the VBR is terminated, the VBR enters the **terminated** state.
       * >  Only the owner of an Express Connect circuit can call this operation.
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouterWithOptions(const Models::TerminateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a virtual border router (VBR).
       *
       * @description After you call this operation, the VBR enters the **terminating** state from the **active** state. After the VBR is terminated, the VBR enters the **terminated** state.
       * >  Only the owner of an Express Connect circuit can call this operation.
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouter(const Models::TerminateVirtualBorderRouterRequest &request);

      /**
       * @summary Migrate a contiguous EIP group to an IP address pool.
       *
       * @param request TransformEipSegmentToPublicIpAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformEipSegmentToPublicIpAddressPoolResponse
       */
      Models::TransformEipSegmentToPublicIpAddressPoolResponse transformEipSegmentToPublicIpAddressPoolWithOptions(const Models::TransformEipSegmentToPublicIpAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrate a contiguous EIP group to an IP address pool.
       *
       * @param request TransformEipSegmentToPublicIpAddressPoolRequest
       * @return TransformEipSegmentToPublicIpAddressPoolResponse
       */
      Models::TransformEipSegmentToPublicIpAddressPoolResponse transformEipSegmentToPublicIpAddressPool(const Models::TransformEipSegmentToPublicIpAddressPoolRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Disassociates an elastic IP address (EIP) from a cloud resource.
       *
       * @description *   **UnassociateEipAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Unassociating** state, the EIP is being disassociated. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **Available** state, the EIP is disassociated.
       * *   You cannot repeatedly call the **UnassociateEipAddress** operation within the specified period of time.
       *
       * @param request UnassociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddressWithOptions(const Models::UnassociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an elastic IP address (EIP) from a cloud resource.
       *
       * @description *   **UnassociateEipAddress** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) operation to query the status of the task.
       *     *   If the EIP is in the **Unassociating** state, the EIP is being disassociated. In this state, you can only query the EIP and cannot perform other operations.
       *     *   If the EIP is in the **Available** state, the EIP is disassociated.
       * *   You cannot repeatedly call the **UnassociateEipAddress** operation within the specified period of time.
       *
       * @param request UnassociateEipAddressRequest
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddress(const Models::UnassociateEipAddressRequest &request);

      /**
       * @summary Disassociates a Global Accelerator (GA) instance from a backend server.
       *
       * @param request UnassociateGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateGlobalAccelerationInstanceResponse
       */
      Models::UnassociateGlobalAccelerationInstanceResponse unassociateGlobalAccelerationInstanceWithOptions(const Models::UnassociateGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Global Accelerator (GA) instance from a backend server.
       *
       * @param request UnassociateGlobalAccelerationInstanceRequest
       * @return UnassociateGlobalAccelerationInstanceResponse
       */
      Models::UnassociateGlobalAccelerationInstanceResponse unassociateGlobalAccelerationInstance(const Models::UnassociateGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Disassociates a high-availability virtual IP address (HaVip) from an Elastic Compute Service (ECS) in a virtual private cloud (VPC) or from an elastic network interface (ENI).
       *
       * @description ## [](#)
       * When you call this operation, take note of the following limits:
       * *   The ECS instance must be in the **Running** or **Stopped** state.
       * *   The HaVip must be in the **Available** or **InUse** state.
       * *   **UnassociateHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID and an instance ID and runs the task in the background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   If the HaVip is in the **Unassociating** state, the HaVip is being disassociated.
       *     *   If the HaVip is in the **Inuse** or **Available** state, the HaVip is disassociated.
       * *   You cannot repeatedly call the **UnassociateHaVip** operation to disassociate an HaVip within the specified period of time.
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a high-availability virtual IP address (HaVip) from an Elastic Compute Service (ECS) in a virtual private cloud (VPC) or from an elastic network interface (ENI).
       *
       * @description ## [](#)
       * When you call this operation, take note of the following limits:
       * *   The ECS instance must be in the **Running** or **Stopped** state.
       * *   The HaVip must be in the **Available** or **InUse** state.
       * *   **UnassociateHaVip** is an asynchronous operation. After a request is sent, the system returns a request ID and an instance ID and runs the task in the background. You can call the [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) operation to query the status of an HaVip:
       *     *   If the HaVip is in the **Unassociating** state, the HaVip is being disassociated.
       *     *   If the HaVip is in the **Inuse** or **Available** state, the HaVip is disassociated.
       * *   You cannot repeatedly call the **UnassociateHaVip** operation to disassociate an HaVip within the specified period of time.
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

      /**
       * @summary Disassociates a network access control list (ACL) from a vSwitch.
       *
       * @description ## [](#)Description
       * *   **UnassociateNetworkAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **UNBINDING** state, the network ACL is being disassociated from the vSwitch.
       *     *   If the network ACL is in the **UNBINDED** state, the network ACL is disassociated from the vSwitch.
       * *   You cannot repeatedly call the **UnassociateNetworkAcl** operation to disassociate a network ACL from a vSwitch within the specified period of time.
       *
       * @param request UnassociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAclWithOptions(const Models::UnassociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a network access control list (ACL) from a vSwitch.
       *
       * @description ## [](#)Description
       * *   **UnassociateNetworkAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of the task.
       *     *   If the network ACL is in the **UNBINDING** state, the network ACL is being disassociated from the vSwitch.
       *     *   If the network ACL is in the **UNBINDED** state, the network ACL is disassociated from the vSwitch.
       * *   You cannot repeatedly call the **UnassociateNetworkAcl** operation to disassociate a network ACL from a vSwitch within the specified period of time.
       *
       * @param request UnassociateNetworkAclRequest
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAcl(const Models::UnassociateNetworkAclRequest &request);

      /**
       * @summary Disassociates a virtual border router (VBR) from an Express Connect circuit.
       *
       * @param request UnassociatePhysicalConnectionFromVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociatePhysicalConnectionFromVirtualBorderRouterResponse
       */
      Models::UnassociatePhysicalConnectionFromVirtualBorderRouterResponse unassociatePhysicalConnectionFromVirtualBorderRouterWithOptions(const Models::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a virtual border router (VBR) from an Express Connect circuit.
       *
       * @param request UnassociatePhysicalConnectionFromVirtualBorderRouterRequest
       * @return UnassociatePhysicalConnectionFromVirtualBorderRouterResponse
       */
      Models::UnassociatePhysicalConnectionFromVirtualBorderRouterResponse unassociatePhysicalConnectionFromVirtualBorderRouter(const Models::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request);

      /**
       * @summary Disassociates a route table from a vSwitch.
       *
       * @description ## [](#)References
       * *   **UnassociateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the route table is being disassociated.
       *     *   If the vSwitch is in the **Available** state, the route table is disassociated.
       * *   You cannot repeatedly call the **UnassociateRouteTable** operation to disassociate a route table from a vSwitch within the specified period of time.
       *
       * @param request UnassociateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateRouteTableResponse
       */
      Models::UnassociateRouteTableResponse unassociateRouteTableWithOptions(const Models::UnassociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a route table from a vSwitch.
       *
       * @description ## [](#)References
       * *   **UnassociateRouteTable** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) operation to query the status of the task.
       *     *   If the vSwitch is in the **Pending** state, the route table is being disassociated.
       *     *   If the vSwitch is in the **Available** state, the route table is disassociated.
       * *   You cannot repeatedly call the **UnassociateRouteTable** operation to disassociate a route table from a vSwitch within the specified period of time.
       *
       * @param request UnassociateRouteTableRequest
       * @return UnassociateRouteTableResponse
       */
      Models::UnassociateRouteTableResponse unassociateRouteTable(const Models::UnassociateRouteTableRequest &request);

      /**
       * @summary Removes a secondary CIDR block from a virtual private cloud (VPC).
       *
       * @description *   Before you delete a secondary CIDR block from a VPC, delete the vSwitch which is created with the CIDR block. For more information, see [DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html).
       * *   You cannot repeatedly call the **UnassociateVpcCidrBlock** operation to delete a secondary CIDR block from a VPC within the specified period of time.
       *
       * @param request UnassociateVpcCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateVpcCidrBlockResponse
       */
      Models::UnassociateVpcCidrBlockResponse unassociateVpcCidrBlockWithOptions(const Models::UnassociateVpcCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a secondary CIDR block from a virtual private cloud (VPC).
       *
       * @description *   Before you delete a secondary CIDR block from a VPC, delete the vSwitch which is created with the CIDR block. For more information, see [DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html).
       * *   You cannot repeatedly call the **UnassociateVpcCidrBlock** operation to delete a secondary CIDR block from a VPC within the specified period of time.
       *
       * @param request UnassociateVpcCidrBlockRequest
       * @return UnassociateVpcCidrBlockResponse
       */
      Models::UnassociateVpcCidrBlockResponse unassociateVpcCidrBlock(const Models::UnassociateVpcCidrBlockRequest &request);

      /**
       * @summary Removes tags from an Express Connect circuit at a time.
       *
       * @param request UntagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesForExpressConnectResponse
       */
      Models::UntagResourcesForExpressConnectResponse untagResourcesForExpressConnectWithOptions(const Models::UntagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from an Express Connect circuit at a time.
       *
       * @param request UntagResourcesForExpressConnectRequest
       * @return UntagResourcesForExpressConnectResponse
       */
      Models::UntagResourcesForExpressConnectResponse untagResourcesForExpressConnect(const Models::UntagResourcesForExpressConnectRequest &request);

      /**
       * @summary 修改Dhcp选项集信息
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttributeWithOptions(const Models::UpdateDhcpOptionsSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Dhcp选项集信息
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttribute(const Models::UpdateDhcpOptionsSetAttributeRequest &request);

      /**
       * @summary Updates a failover test.
       *
       * @param request UpdateFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFailoverTestJobResponse
       */
      Models::UpdateFailoverTestJobResponse updateFailoverTestJobWithOptions(const Models::UpdateFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a failover test.
       *
       * @param request UpdateFailoverTestJobRequest
       * @return UpdateFailoverTestJobResponse
       */
      Models::UpdateFailoverTestJobResponse updateFailoverTestJob(const Models::UpdateFailoverTestJobRequest &request);

      /**
       * @summary Modifies the next hop type and next hop of the route entry in a gateway route table.
       *
       * @param request UpdateGatewayRouteTableEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteTableEntryAttributeResponse
       */
      Models::UpdateGatewayRouteTableEntryAttributeResponse updateGatewayRouteTableEntryAttributeWithOptions(const Models::UpdateGatewayRouteTableEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the next hop type and next hop of the route entry in a gateway route table.
       *
       * @param request UpdateGatewayRouteTableEntryAttributeRequest
       * @return UpdateGatewayRouteTableEntryAttributeResponse
       */
      Models::UpdateGatewayRouteTableEntryAttributeResponse updateGatewayRouteTableEntryAttribute(const Models::UpdateGatewayRouteTableEntryAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an IPsec server.
       *
       * @description *   If you modify only **IpsecServerName** of the IPsec server, this operation is synchronous. If you modify other parameters besides **IpsecServerName**, this operation is asynchronous.
       * *   If **UpdateIpsecServer** is an asynchronous operation, after a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being modified.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is modified.
       * *   You cannot repeatedly call **UpdateIpsecServer** within the specified period of time.
       *
       * @param request UpdateIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpsecServerResponse
       */
      Models::UpdateIpsecServerResponse updateIpsecServerWithOptions(const Models::UpdateIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an IPsec server.
       *
       * @description *   If you modify only **IpsecServerName** of the IPsec server, this operation is synchronous. If you modify other parameters besides **IpsecServerName**, this operation is asynchronous.
       * *   If **UpdateIpsecServer** is an asynchronous operation, after a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the task.
       *     *   If the VPN gateway is in the **updating** state, the IPsec server is being modified.
       *     *   If the VPN gateway is in the **active** state, the IPsec server is modified.
       * *   You cannot repeatedly call **UpdateIpsecServer** within the specified period of time.
       *
       * @param request UpdateIpsecServerRequest
       * @return UpdateIpsecServerResponse
       */
      Models::UpdateIpsecServerResponse updateIpsecServer(const Models::UpdateIpsecServerRequest &request);

      /**
       * @summary Modifies the description or name of an IPv4 gateway.
       *
       * @description You cannot repeatedly call the **UpdateIpv4GatewayAttribute** operation to modify the name or description of an IPv4 gateway within the specified period of time.
       *
       * @param request UpdateIpv4GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpv4GatewayAttributeResponse
       */
      Models::UpdateIpv4GatewayAttributeResponse updateIpv4GatewayAttributeWithOptions(const Models::UpdateIpv4GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description or name of an IPv4 gateway.
       *
       * @description You cannot repeatedly call the **UpdateIpv4GatewayAttribute** operation to modify the name or description of an IPv4 gateway within the specified period of time.
       *
       * @param request UpdateIpv4GatewayAttributeRequest
       * @return UpdateIpv4GatewayAttributeResponse
       */
      Models::UpdateIpv4GatewayAttributeResponse updateIpv4GatewayAttribute(const Models::UpdateIpv4GatewayAttributeRequest &request);

      /**
       * @deprecated OpenAPI UpdateNatGatewayNatType is deprecated
       *
       * @summary Upgrades a standard NAT gateway to an enhanced NAT gateway.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   **UpdateNatGatewayNatType** is an asynchronous operation. After you send a request to call this operation, the system returns a request ID and the NAT gateway is still being upgraded in the backend. You can call the GetNatGatewayConvertStatus operation to query the upgrade progress of a NAT gateway. For more information, see [GetNatGatewayConvertStatus](https://help.aliyun.com/document_detail/184744.html).
       *     *   If the NAT gateway is in the **processing** state, the NAT gateway is being upgraded. You can only query the status of the NAT gateway but cannot perform other operations.
       *     *   If the NAT gateway is in the **successful** state, the NAT gateway is upgraded.
       *     *   If the NAT gateway is in the **failed** state, the system failed to upgrade the NAT gateway.
       * *   You cannot repeatedly call the **UpdateNatGatewayNatType** operation for the same VPN gateway within the specified period of time.
       * *   The billing method and billable items remain the same after the upgrade.
       * *   It takes about five minutes to upgrade a standard NAT gateway to an enhanced NAT gateway. During the upgrade, transient connection errors may occur once or twice. The service can be recovered by reconnection. You can determine whether to enable automatic reconnection or use manual reconnection based on your business requirements.
       * *   You can only upgrade standard NAT gateways to enhanced NAT gateways. You are not allowed to downgrade enhanced NAT gateways to standard NAT gateways.
       *
       * @param request UpdateNatGatewayNatTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNatGatewayNatTypeResponse
       */
      Models::UpdateNatGatewayNatTypeResponse updateNatGatewayNatTypeWithOptions(const Models::UpdateNatGatewayNatTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateNatGatewayNatType is deprecated
       *
       * @summary Upgrades a standard NAT gateway to an enhanced NAT gateway.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   **UpdateNatGatewayNatType** is an asynchronous operation. After you send a request to call this operation, the system returns a request ID and the NAT gateway is still being upgraded in the backend. You can call the GetNatGatewayConvertStatus operation to query the upgrade progress of a NAT gateway. For more information, see [GetNatGatewayConvertStatus](https://help.aliyun.com/document_detail/184744.html).
       *     *   If the NAT gateway is in the **processing** state, the NAT gateway is being upgraded. You can only query the status of the NAT gateway but cannot perform other operations.
       *     *   If the NAT gateway is in the **successful** state, the NAT gateway is upgraded.
       *     *   If the NAT gateway is in the **failed** state, the system failed to upgrade the NAT gateway.
       * *   You cannot repeatedly call the **UpdateNatGatewayNatType** operation for the same VPN gateway within the specified period of time.
       * *   The billing method and billable items remain the same after the upgrade.
       * *   It takes about five minutes to upgrade a standard NAT gateway to an enhanced NAT gateway. During the upgrade, transient connection errors may occur once or twice. The service can be recovered by reconnection. You can determine whether to enable automatic reconnection or use manual reconnection based on your business requirements.
       * *   You can only upgrade standard NAT gateways to enhanced NAT gateways. You are not allowed to downgrade enhanced NAT gateways to standard NAT gateways.
       *
       * @param request UpdateNatGatewayNatTypeRequest
       * @return UpdateNatGatewayNatTypeResponse
       */
      Models::UpdateNatGatewayNatTypeResponse updateNatGatewayNatType(const Models::UpdateNatGatewayNatTypeRequest &request);

      /**
       * @summary Updates the rules of a network access control list (ACL).
       *
       * @description *   **UpdateNetworkAclEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of a network ACL:
       *     *   If the network ACL is in the **Modifying** state, the rules of the network ACL are being updated.
       *     *   If the network ACL is in the **Available** state, the rules of the network ACL are updated.
       * *   You cannot repeatedly call the **UpdateNetworkAclEntries** operation to update the rules of a network ACL within the specified period of time.
       *
       * @param request UpdateNetworkAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAclEntriesResponse
       */
      Models::UpdateNetworkAclEntriesResponse updateNetworkAclEntriesWithOptions(const Models::UpdateNetworkAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rules of a network access control list (ACL).
       *
       * @description *   **UpdateNetworkAclEntries** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) operation to query the status of a network ACL:
       *     *   If the network ACL is in the **Modifying** state, the rules of the network ACL are being updated.
       *     *   If the network ACL is in the **Available** state, the rules of the network ACL are updated.
       * *   You cannot repeatedly call the **UpdateNetworkAclEntries** operation to update the rules of a network ACL within the specified period of time.
       *
       * @param request UpdateNetworkAclEntriesRequest
       * @return UpdateNetworkAclEntriesResponse
       */
      Models::UpdateNetworkAclEntriesResponse updateNetworkAclEntries(const Models::UpdateNetworkAclEntriesRequest &request);

      /**
       * @summary Modifies the attributes of an IP address pool.
       *
       * @description You cannot repeatedly call the **UpdatePublicIpAddressPoolAttribute** operation to modify the attributes of an IP address pool within the specified period of time.
       *
       * @param request UpdatePublicIpAddressPoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicIpAddressPoolAttributeResponse
       */
      Models::UpdatePublicIpAddressPoolAttributeResponse updatePublicIpAddressPoolAttributeWithOptions(const Models::UpdatePublicIpAddressPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an IP address pool.
       *
       * @description You cannot repeatedly call the **UpdatePublicIpAddressPoolAttribute** operation to modify the attributes of an IP address pool within the specified period of time.
       *
       * @param request UpdatePublicIpAddressPoolAttributeRequest
       * @return UpdatePublicIpAddressPoolAttributeResponse
       */
      Models::UpdatePublicIpAddressPoolAttributeResponse updatePublicIpAddressPoolAttribute(const Models::UpdatePublicIpAddressPoolAttributeRequest &request);

      /**
       * @summary Update Route Target Group
       *
       * @description - The **UpdateRouteTargetGroup** interface is an asynchronous API, meaning the system will return a request ID, but the route target group has not yet been fully updated, and the system\\"s background update task is still in progress. You can call ListRouteTargetGroup to query the update status of the route target group:
       *     - When the route target group is in the **Updating** state, it indicates that the route target group is being created.
       *     - When the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, it indicates that the route target group has completed its update.
       *
       * @param request UpdateRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRouteTargetGroupResponse
       */
      Models::UpdateRouteTargetGroupResponse updateRouteTargetGroupWithOptions(const Models::UpdateRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Route Target Group
       *
       * @description - The **UpdateRouteTargetGroup** interface is an asynchronous API, meaning the system will return a request ID, but the route target group has not yet been fully updated, and the system\\"s background update task is still in progress. You can call ListRouteTargetGroup to query the update status of the route target group:
       *     - When the route target group is in the **Updating** state, it indicates that the route target group is being created.
       *     - When the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, it indicates that the route target group has completed its update.
       *
       * @param request UpdateRouteTargetGroupRequest
       * @return UpdateRouteTargetGroupResponse
       */
      Models::UpdateRouteTargetGroupResponse updateRouteTargetGroup(const Models::UpdateRouteTargetGroupRequest &request);

      /**
       * @summary Modifies the configuration of a filter for traffic mirror.
       *
       * @description You cannot repeatedly call the **UpdateTrafficMirrorFilterAttribute** operation to modify the configuration of a filter for traffic mirror within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttributeWithOptions(const Models::UpdateTrafficMirrorFilterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a filter for traffic mirror.
       *
       * @description You cannot repeatedly call the **UpdateTrafficMirrorFilterAttribute** operation to modify the configuration of a filter for traffic mirror within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttribute(const Models::UpdateTrafficMirrorFilterAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an inbound or outbound rule for traffic mirroring.
       *
       * @description *   The **UpdateTrafficMirrorFilterRuleAttribute** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of an inbound or outbound rule:
       *     *   If the rule is in the **Modifying** state, the rule is being modified.
       *     *   If the rule is in the **Created** state, the rule is modified.
       * *   You cannot repeatedly call the **UpdateTrafficMirrorFilterRuleAttribute** operation to modify an inbound or outbound rule within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttributeWithOptions(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an inbound or outbound rule for traffic mirroring.
       *
       * @description *   The **UpdateTrafficMirrorFilterRuleAttribute** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of an inbound or outbound rule:
       *     *   If the rule is in the **Modifying** state, the rule is being modified.
       *     *   If the rule is in the **Created** state, the rule is modified.
       * *   You cannot repeatedly call the **UpdateTrafficMirrorFilterRuleAttribute** operation to modify an inbound or outbound rule within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttribute(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @description ## Usage notes
       * *   **UpdateTrafficMirrorSessionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the configuration of the traffic mirror session is being modified.
       *     *   If the traffic mirror session is in the **Created** state, the configuration of the traffic mirror session is modified.
       * *   You cannot repeatedly call the **UpdateTrafficMirrorSessionAttribute** operation within a specific period of time.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttributeWithOptions(const Models::UpdateTrafficMirrorSessionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @description ## Usage notes
       * *   **UpdateTrafficMirrorSessionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) operation to query the status of the task.
       *     *   If the traffic mirror session is in the **Modifying** state, the configuration of the traffic mirror session is being modified.
       *     *   If the traffic mirror session is in the **Created** state, the configuration of the traffic mirror session is modified.
       * *   You cannot repeatedly call the **UpdateTrafficMirrorSessionAttribute** operation within a specific period of time.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttribute(const Models::UpdateTrafficMirrorSessionAttributeRequest &request);

      /**
       * @summary Updates the maximum bandwidth value of outbound data transfer for a virtual border router (VBR).
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidthWithOptions(const Models::UpdateVirtualBorderBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the maximum bandwidth value of outbound data transfer for a virtual border router (VBR).
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidth(const Models::UpdateVirtualBorderBandwidthRequest &request);

      /**
       * @summary Changes the virtual local area network (VLAN) ID of a hosted connection over Express Connect circuit.
       *
       * @param request UpdateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualPhysicalConnectionResponse
       */
      Models::UpdateVirtualPhysicalConnectionResponse updateVirtualPhysicalConnectionWithOptions(const Models::UpdateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the virtual local area network (VLAN) ID of a hosted connection over Express Connect circuit.
       *
       * @param request UpdateVirtualPhysicalConnectionRequest
       * @return UpdateVirtualPhysicalConnectionResponse
       */
      Models::UpdateVirtualPhysicalConnectionResponse updateVirtualPhysicalConnection(const Models::UpdateVirtualPhysicalConnectionRequest &request);

      /**
       * @summary Modifies the configuration of a gateway endpoint.
       *
       * @description *   **UpdateVpcGatewayEndpointAttribute** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) operation to query the status of the task.
       *     *   If the gateway endpoint is in the **Updating** state, it is being modified.
       *     *   If the gateway endpoint is in the **Created** state, it is modified.
       * *   You cannot call the **UpdateVpcGatewayEndpointAttribute** operation within a specific period of time.
       *
       * @param request UpdateVpcGatewayEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcGatewayEndpointAttributeResponse
       */
      Models::UpdateVpcGatewayEndpointAttributeResponse updateVpcGatewayEndpointAttributeWithOptions(const Models::UpdateVpcGatewayEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a gateway endpoint.
       *
       * @description *   **UpdateVpcGatewayEndpointAttribute** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) operation to query the status of the task.
       *     *   If the gateway endpoint is in the **Updating** state, it is being modified.
       *     *   If the gateway endpoint is in the **Created** state, it is modified.
       * *   You cannot call the **UpdateVpcGatewayEndpointAttribute** operation within a specific period of time.
       *
       * @param request UpdateVpcGatewayEndpointAttributeRequest
       * @return UpdateVpcGatewayEndpointAttributeResponse
       */
      Models::UpdateVpcGatewayEndpointAttributeResponse updateVpcGatewayEndpointAttribute(const Models::UpdateVpcGatewayEndpointAttributeRequest &request);

      /**
       * @summary 查看eni quota
       *
       * @description Before you call this operation, make sure that a VPC NAT gateway is created. For more information, see [CreateNatGateway](https://help.aliyun.com/document_detail/120219.html).
       *
       * @param request VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse
       */
      Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse vpcDescribeVpcNatGatewayNetworkInterfaceQuotaWithOptions(const Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看eni quota
       *
       * @description Before you call this operation, make sure that a VPC NAT gateway is created. For more information, see [CreateNatGateway](https://help.aliyun.com/document_detail/120219.html).
       *
       * @param request VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest
       * @return VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse
       */
      Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse vpcDescribeVpcNatGatewayNetworkInterfaceQuota(const Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest &request);

      /**
       * @summary Withdraw advertised Virtual Private Cloud (VPC) routes.
       *
       * @param request WithdrawVpcPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawVpcPublishedRouteEntriesResponse
       */
      Models::WithdrawVpcPublishedRouteEntriesResponse withdrawVpcPublishedRouteEntriesWithOptions(const Models::WithdrawVpcPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraw advertised Virtual Private Cloud (VPC) routes.
       *
       * @param request WithdrawVpcPublishedRouteEntriesRequest
       * @return WithdrawVpcPublishedRouteEntriesResponse
       */
      Models::WithdrawVpcPublishedRouteEntriesResponse withdrawVpcPublishedRouteEntries(const Models::WithdrawVpcPublishedRouteEntriesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
