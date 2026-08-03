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
       * @description After you call the ActivateRouterInterface operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state. 
       * > You cannot activate a router interface that has an overdue payment.
       *
       * @param request ActivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterfaceWithOptions(const Models::ActivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a router interface that is in the Inactive state.
       *
       * @description After you call the ActivateRouterInterface operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state. 
       * > You cannot activate a router interface that has an overdue payment.
       *
       * @param request ActivateRouterInterfaceRequest
       * @return ActivateRouterInterfaceResponse
       */
      Models::ActivateRouterInterfaceResponse activateRouterInterface(const Models::ActivateRouterInterfaceRequest &request);

      /**
       * @summary Calls the ActiveFlowLog operation to activate a flow log and start capturing traffic of the specified resource.
       *
       * @description * The **ActiveFlowLog** operation is asynchronous. After you send a request, the system returns a request ID. However, the flow log is not yet activated, and the activation task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the activation status of the flow log:
       *     - If the flow log is in the **Activating** state, the flow log is being activated.
       *     - If the flow log is in the **Active** state, the flow log is activated.
       * * The **ActiveFlowLog** operation does not support concurrent activation of the same flow log.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ActiveFlowLog operation to activate a flow log and start capturing traffic of the specified resource.
       *
       * @description * The **ActiveFlowLog** operation is asynchronous. After you send a request, the system returns a request ID. However, the flow log is not yet activated, and the activation task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the activation status of the flow log:
       *     - If the flow log is in the **Activating** state, the flow log is being activated.
       *     - If the flow log is in the **Active** state, the flow log is activated.
       * * The **ActiveFlowLog** operation does not support concurrent activation of the same flow log.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Invokes the AddBgpNetwork operation to advertise a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetworkWithOptions(const Models::AddBgpNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AddBgpNetwork operation to advertise a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetwork(const Models::AddBgpNetworkRequest &request);

      /**
       * @summary Adds an elastic IP address (EIP) to an Internet Shared Bandwidth instance.
       *
       * @description Before invoking this operation, note the following:
       * - When you invoke this operation to add an EIP to an Internet Shared Bandwidth instance, the EIP must meet the following conditions:
       *     - The EIP uses the pay-as-you-go billing method.
       *     - The EIP is in the same region as the Internet Shared Bandwidth instance.
       *     - The line type of the EIP is the same as that of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIp** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP is not yet added to the Internet Shared Bandwidth instance. The addition task is still running in the background. You can invoke [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the association status between the Internet Shared Bandwidth instance and the EIP. 
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance is being associated with the EIP. In this state, you can only execute query operations.
       *     - If the association status is **BINDED**, the Internet Shared Bandwidth instance is associated with the EIP.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIpWithOptions(const Models::AddCommonBandwidthPackageIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an elastic IP address (EIP) to an Internet Shared Bandwidth instance.
       *
       * @description Before invoking this operation, note the following:
       * - When you invoke this operation to add an EIP to an Internet Shared Bandwidth instance, the EIP must meet the following conditions:
       *     - The EIP uses the pay-as-you-go billing method.
       *     - The EIP is in the same region as the Internet Shared Bandwidth instance.
       *     - The line type of the EIP is the same as that of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIp** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP is not yet added to the Internet Shared Bandwidth instance. The addition task is still running in the background. You can invoke [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the association status between the Internet Shared Bandwidth instance and the EIP. 
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance is being associated with the EIP. In this state, you can only execute query operations.
       *     - If the association status is **BINDED**, the Internet Shared Bandwidth instance is associated with the EIP.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIp(const Models::AddCommonBandwidthPackageIpRequest &request);

      /**
       * @summary Adds multiple elastic IP addresses (EIPs) to an Internet Shared Bandwidth instance.
       *
       * @description - When you invoke this operation to add multiple EIPs to an Internet Shared Bandwidth instance, the EIPs must meet the following conditions:
       *     - The EIPs use the pay-as-you-go billing method.
       *     - The EIPs are in the same region as the Internet Shared Bandwidth instance.
       *     - The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIps** operation is asynchronous. After you send a request, the system returns a request ID. However, the EIPs are not immediately added to the Internet Shared Bandwidth instance. The addition node is still running in the background. You can invoke [DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~) to query the association status between the Internet Shared Bandwidth instance and the EIPs. 
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance is being associated with the EIPs. In this state, you can only execute query operations.
       *     - If the association status is **BINDED**, the Internet Shared Bandwidth instance is associated with the EIPs.
       * Billable methods: The EIPs must use the pay-as-you-go billing method.
       *
       * @param request AddCommonBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpsResponse
       */
      Models::AddCommonBandwidthPackageIpsResponse addCommonBandwidthPackageIpsWithOptions(const Models::AddCommonBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple elastic IP addresses (EIPs) to an Internet Shared Bandwidth instance.
       *
       * @description - When you invoke this operation to add multiple EIPs to an Internet Shared Bandwidth instance, the EIPs must meet the following conditions:
       *     - The EIPs use the pay-as-you-go billing method.
       *     - The EIPs are in the same region as the Internet Shared Bandwidth instance.
       *     - The line type of the EIPs is the same as that of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIps** operation is asynchronous. After you send a request, the system returns a request ID. However, the EIPs are not immediately added to the Internet Shared Bandwidth instance. The addition node is still running in the background. You can invoke [DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~) to query the association status between the Internet Shared Bandwidth instance and the EIPs. 
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance is being associated with the EIPs. In this state, you can only execute query operations.
       *     - If the association status is **BINDED**, the Internet Shared Bandwidth instance is associated with the EIPs.
       * Billable methods: The EIPs must use the pay-as-you-go billing method.
       *
       * @param request AddCommonBandwidthPackageIpsRequest
       * @return AddCommonBandwidthPackageIpsResponse
       */
      Models::AddCommonBandwidthPackageIpsResponse addCommonBandwidthPackageIps(const Models::AddCommonBandwidthPackageIpsRequest &request);

      /**
       * @summary Adds an Elastic IP Address (EIP) to a specified Internet Shared Bandwidth instance.
       *
       * @param request AddGlobalAccelerationInstanceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGlobalAccelerationInstanceIpResponse
       */
      Models::AddGlobalAccelerationInstanceIpResponse addGlobalAccelerationInstanceIpWithOptions(const Models::AddGlobalAccelerationInstanceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Elastic IP Address (EIP) to a specified Internet Shared Bandwidth instance.
       *
       * @param request AddGlobalAccelerationInstanceIpRequest
       * @return AddGlobalAccelerationInstanceIpResponse
       */
      Models::AddGlobalAccelerationInstanceIpResponse addGlobalAccelerationInstanceIp(const Models::AddGlobalAccelerationInstanceIpRequest &request);

      /**
       * @deprecated OpenAPI AddIPv6TranslatorAclListEntry is deprecated
       *
       * @summary Adds an IP entry to an access control policy group.
       *
       * @param request AddIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIPv6TranslatorAclListEntryResponse
       */
      Models::AddIPv6TranslatorAclListEntryResponse addIPv6TranslatorAclListEntryWithOptions(const Models::AddIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddIPv6TranslatorAclListEntry is deprecated
       *
       * @summary Adds an IP entry to an access control policy group.
       *
       * @param request AddIPv6TranslatorAclListEntryRequest
       * @return AddIPv6TranslatorAclListEntryResponse
       */
      Models::AddIPv6TranslatorAclListEntryResponse addIPv6TranslatorAclListEntry(const Models::AddIPv6TranslatorAclListEntryRequest &request);

      /**
       * @summary Adds a CIDR block to an IP address pool.
       *
       * @description Before calling this operation, note the following:
       * - The CIDR block and the IP address pool must belong to the same region.
       * - The CIDR block and the IP address pool must belong to the same ISP line type.
       * - **AddPublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID, but the CIDR block has not been added yet. The system continues to process the addition task in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool.
       *     - If the CIDR block is in the **Modifying** state, the CIDR block is being added. In this state, you can only perform query operations.
       *     - If the CIDR block is in the **Created** state, the CIDR block has been added.
       * - **AddPublicIpAddressPoolCidrBlock** does not support concurrently adding the same CIDR block to an IP address pool.
       *
       * @param request AddPublicIpAddressPoolCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPublicIpAddressPoolCidrBlockResponse
       */
      Models::AddPublicIpAddressPoolCidrBlockResponse addPublicIpAddressPoolCidrBlockWithOptions(const Models::AddPublicIpAddressPoolCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a CIDR block to an IP address pool.
       *
       * @description Before calling this operation, note the following:
       * - The CIDR block and the IP address pool must belong to the same region.
       * - The CIDR block and the IP address pool must belong to the same ISP line type.
       * - **AddPublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID, but the CIDR block has not been added yet. The system continues to process the addition task in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool.
       *     - If the CIDR block is in the **Modifying** state, the CIDR block is being added. In this state, you can only perform query operations.
       *     - If the CIDR block is in the **Created** state, the CIDR block has been added.
       * - **AddPublicIpAddressPoolCidrBlock** does not support concurrently adding the same CIDR block to an IP address pool.
       *
       * @param request AddPublicIpAddressPoolCidrBlockRequest
       * @return AddPublicIpAddressPoolCidrBlockResponse
       */
      Models::AddPublicIpAddressPoolCidrBlockResponse addPublicIpAddressPoolCidrBlock(const Models::AddPublicIpAddressPoolCidrBlockRequest &request);

      /**
       * @summary Adds traffic mirror sources to a traffic mirror session by calling the AddSourcesToTrafficMirrorSession operation.
       *
       * @description - **AddSourcesToTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the traffic mirror source is not yet added, and the addition task is still running in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the traffic mirror source addition:
       *     - If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being added.
       *     - If the traffic mirror session is in the **Created** state, the traffic mirror source is added.
       * - **AddSourcesToTrafficMirrorSession** does not support concurrent requests to add traffic mirror sources to the same traffic mirror session.
       *
       * @param request AddSourcesToTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSourcesToTrafficMirrorSessionResponse
       */
      Models::AddSourcesToTrafficMirrorSessionResponse addSourcesToTrafficMirrorSessionWithOptions(const Models::AddSourcesToTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds traffic mirror sources to a traffic mirror session by calling the AddSourcesToTrafficMirrorSession operation.
       *
       * @description - **AddSourcesToTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the traffic mirror source is not yet added, and the addition task is still running in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the traffic mirror source addition:
       *     - If the traffic mirror session is in the **Modifying** state, the traffic mirror source is being added.
       *     - If the traffic mirror session is in the **Created** state, the traffic mirror source is added.
       * - **AddSourcesToTrafficMirrorSession** does not support concurrent requests to add traffic mirror sources to the same traffic mirror session.
       *
       * @param request AddSourcesToTrafficMirrorSessionRequest
       * @return AddSourcesToTrafficMirrorSessionResponse
       */
      Models::AddSourcesToTrafficMirrorSessionResponse addSourcesToTrafficMirrorSession(const Models::AddSourcesToTrafficMirrorSessionRequest &request);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After you call this operation, an EIP in the **Available** state is randomly allocated in the specified region. EIPs support only ICMP, TCP, and UDP at the transport layer. EIPs do not support IGMP or SCTP.
       *
       * @param request AllocateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddressWithOptions(const Models::AllocateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After you call this operation, an EIP in the **Available** state is randomly allocated in the specified region. EIPs support only ICMP, TCP, and UDP at the transport layer. EIPs do not support IGMP or SCTP.
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Allocates a specified elastic IP address (EIP) for specific network configuration requirements.
       *
       * @param request AllocateEipAddressProRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressProResponse
       */
      Models::AllocateEipAddressProResponse allocateEipAddressProWithOptions(const Models::AllocateEipAddressProRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates a specified elastic IP address (EIP) for specific network configuration requirements.
       *
       * @param request AllocateEipAddressProRequest
       * @return AllocateEipAddressProResponse
       */
      Models::AllocateEipAddressProResponse allocateEipAddressPro(const Models::AllocateEipAddressProRequest &request);

      /**
       * @deprecated OpenAPI AllocateEipSegmentAddress is deprecated
       *
       * @summary Contiguous Elastic IP (EIP) addresses are a group of sequentially ordered elastic public IP addresses. When designing your network, you can apply for and use these IP addresses in bulk for cloud resources that require contiguous public IP addresses. You can call the AllocateEipSegmentAddress operation to apply for contiguous EIPs.
       *
       * @description **AllocateEipSegmentAddress** is an asynchronous operation. After you call this operation, the system returns the instance ID of a contiguous EIP group, but the contiguous EIP group is not yet created. The creation task is still running in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group.
       * - If the contiguous EIP group is in the **Allocating** state, the contiguous EIP group is being allocated. In this state, you can only perform query operations.
       * - If the contiguous EIP group is in the **Allocated** state, the contiguous EIP group is allocated.
       *
       * @param request AllocateEipSegmentAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipSegmentAddressResponse
       */
      Models::AllocateEipSegmentAddressResponse allocateEipSegmentAddressWithOptions(const Models::AllocateEipSegmentAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AllocateEipSegmentAddress is deprecated
       *
       * @summary Contiguous Elastic IP (EIP) addresses are a group of sequentially ordered elastic public IP addresses. When designing your network, you can apply for and use these IP addresses in bulk for cloud resources that require contiguous public IP addresses. You can call the AllocateEipSegmentAddress operation to apply for contiguous EIPs.
       *
       * @description **AllocateEipSegmentAddress** is an asynchronous operation. After you call this operation, the system returns the instance ID of a contiguous EIP group, but the contiguous EIP group is not yet created. The creation task is still running in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group.
       * - If the contiguous EIP group is in the **Allocating** state, the contiguous EIP group is being allocated. In this state, you can only perform query operations.
       * - If the contiguous EIP group is in the **Allocated** state, the contiguous EIP group is allocated.
       *
       * @param request AllocateEipSegmentAddressRequest
       * @return AllocateEipSegmentAddressResponse
       */
      Models::AllocateEipSegmentAddressResponse allocateEipSegmentAddress(const Models::AllocateEipSegmentAddressRequest &request);

      /**
       * @summary Invokes the AllocateIpv6Address operation to allocate a free IPv6 address or IPv6 prefix CIDR block. The address is not associated with any resource instance (such as a network interface controller (NIC) or Network Load Balancer (NLB)) and exists as an independent IPv6 address in the virtual private cloud (VPC).
       *
       * @description Scenarios: After you enable Internet bandwidth for a free IPv6 address, configure an inbound routing rule in the IPv6 gateway route table to direct public IPv6 traffic to the data center through an Express Connect circuit. This way, data center resources can provide services over the Internet by using an Alibaba Cloud IPv6 address.
       * > To allocate an IPv6 address to a network interface controller (NIC) of an ECS instance, invoke the [AssignIpv6Addresses](https://www.alibabacloud.com/help/en/ecs/developer-reference/api-ecs-2014-05-26-assignipv6addresses) operation of ECS.
       *
       * @param request AllocateIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6AddressWithOptions(const Models::AllocateIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AllocateIpv6Address operation to allocate a free IPv6 address or IPv6 prefix CIDR block. The address is not associated with any resource instance (such as a network interface controller (NIC) or Network Load Balancer (NLB)) and exists as an independent IPv6 address in the virtual private cloud (VPC).
       *
       * @description Scenarios: After you enable Internet bandwidth for a free IPv6 address, configure an inbound routing rule in the IPv6 gateway route table to direct public IPv6 traffic to the data center through an Express Connect circuit. This way, data center resources can provide services over the Internet by using an Alibaba Cloud IPv6 address.
       * > To allocate an IPv6 address to a network interface controller (NIC) of an ECS instance, invoke the [AssignIpv6Addresses](https://www.alibabacloud.com/help/en/ecs/developer-reference/api-ecs-2014-05-26-assignipv6addresses) operation of ECS.
       *
       * @param request AllocateIpv6AddressRequest
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6Address(const Models::AllocateIpv6AddressRequest &request);

      /**
       * @summary Enables Internet bandwidth for an IPv6 address in a VPC so that the IPv6 address can communicate over the Internet. After Internet bandwidth is enabled, the IPv6 address can both initiate outbound connections to the Internet and be accessed from the Internet.
       *
       * @description - You can enable Internet bandwidth for the following types of IPv6 addresses:
       *     - IPv6 addresses assigned to elastic network interfaces (ENIs) of ECS instances.
       *     - Unassociated IPv6 addresses that are not attached to any resource instance.
       * - Before you call this operation, make sure that the target IPv6 address already exists. This means that an ECS instance in the VPC has been assigned an IPv6 address, or an unassociated IPv6 address has been created by calling [AllocateIpv6Address](https://www.alibabacloud.com/help/en/vpc/developer-reference/api-vpc-2016-04-28-allocateipv6address).
       * - After Internet bandwidth is enabled, the IPv6 address can both initiate outbound connections to the Internet and be accessed from the Internet. To allow public network access to the Internet, call [CreateIpv6EgressOnlyRule](https://www.alibabacloud.com/help/en/ipv6-gateway/developer-reference/api-vpc-2016-04-28-createipv6egressonlyrule-ipv6s)
       *   to configure an IPv6 egress-only rule.
       * - The **AllocateIpv6InternetBandwidth** operation does not support concurrent purchases of Internet bandwidth for the same IPv6 address.
       * - Scenarios:
       *     - ECS instance IPv6 Internet access: Allows an ECS instance to access the Internet or provide services over IPv6.
       *     - Unassociated IPv6 Internet access: Works with IPv6 gateway route tables to route Internet traffic to on-premises IDCs.
       *     - Outbound-only communication: Works with CreateIpv6EgressOnlyRule to allow public network access and reject inbound connections from the Internet.
       *
       * @param request AllocateIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6InternetBandwidthResponse
       */
      Models::AllocateIpv6InternetBandwidthResponse allocateIpv6InternetBandwidthWithOptions(const Models::AllocateIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Internet bandwidth for an IPv6 address in a VPC so that the IPv6 address can communicate over the Internet. After Internet bandwidth is enabled, the IPv6 address can both initiate outbound connections to the Internet and be accessed from the Internet.
       *
       * @description - You can enable Internet bandwidth for the following types of IPv6 addresses:
       *     - IPv6 addresses assigned to elastic network interfaces (ENIs) of ECS instances.
       *     - Unassociated IPv6 addresses that are not attached to any resource instance.
       * - Before you call this operation, make sure that the target IPv6 address already exists. This means that an ECS instance in the VPC has been assigned an IPv6 address, or an unassociated IPv6 address has been created by calling [AllocateIpv6Address](https://www.alibabacloud.com/help/en/vpc/developer-reference/api-vpc-2016-04-28-allocateipv6address).
       * - After Internet bandwidth is enabled, the IPv6 address can both initiate outbound connections to the Internet and be accessed from the Internet. To allow public network access to the Internet, call [CreateIpv6EgressOnlyRule](https://www.alibabacloud.com/help/en/ipv6-gateway/developer-reference/api-vpc-2016-04-28-createipv6egressonlyrule-ipv6s)
       *   to configure an IPv6 egress-only rule.
       * - The **AllocateIpv6InternetBandwidth** operation does not support concurrent purchases of Internet bandwidth for the same IPv6 address.
       * - Scenarios:
       *     - ECS instance IPv6 Internet access: Allows an ECS instance to access the Internet or provide services over IPv6.
       *     - Unassociated IPv6 Internet access: Works with IPv6 gateway route tables to route Internet traffic to on-premises IDCs.
       *     - Outbound-only communication: Works with CreateIpv6EgressOnlyRule to allow public network access and reject inbound connections from the Internet.
       *
       * @param request AllocateIpv6InternetBandwidthRequest
       * @return AllocateIpv6InternetBandwidthResponse
       */
      Models::AllocateIpv6InternetBandwidthResponse allocateIpv6InternetBandwidth(const Models::AllocateIpv6InternetBandwidthRequest &request);

      /**
       * @summary Reserves a specified IPv6 CIDR block.
       *
       * @description To assign a specified IPv6 CIDR block to a VPC, perform the following steps:
       * 1. Call this operation to reserve the specified IPv6 CIDR block.
       * 2. To assign the specified IPv6 CIDR block to an existing VPC, call the [AssociateVpcCidrBlock](https://help.aliyun.com/document_detail/146745.html) operation and set **RegionId**, **VpcId**, and **IPv6CidrBlock** to the specified IPv6 CIDR block, and set **IpVersion** to **ipv6**. To assign the specified IPv6 CIDR block to a new VPC, call the [CreateVpc](https://help.aliyun.com/document_detail/35737.html) operation and set **RegionId** and **Ipv6CidrBlock** to the specified IPv6 CIDR block, and set **EnableIpv6** to **true**.
       *
       * @param request AllocateVpcIpv6CidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateVpcIpv6CidrResponse
       */
      Models::AllocateVpcIpv6CidrResponse allocateVpcIpv6CidrWithOptions(const Models::AllocateVpcIpv6CidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reserves a specified IPv6 CIDR block.
       *
       * @description To assign a specified IPv6 CIDR block to a VPC, perform the following steps:
       * 1. Call this operation to reserve the specified IPv6 CIDR block.
       * 2. To assign the specified IPv6 CIDR block to an existing VPC, call the [AssociateVpcCidrBlock](https://help.aliyun.com/document_detail/146745.html) operation and set **RegionId**, **VpcId**, and **IPv6CidrBlock** to the specified IPv6 CIDR block, and set **IpVersion** to **ipv6**. To assign the specified IPv6 CIDR block to a new VPC, call the [CreateVpc](https://help.aliyun.com/document_detail/35737.html) operation and set **RegionId** and **Ipv6CidrBlock** to the specified IPv6 CIDR block, and set **EnableIpv6** to **true**.
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
       * @summary Associates an elastic IP address (EIP) with a cloud resource instance in the same region.
       *
       * @description - An EIP can be associated with an Elastic Compute Service (ECS) instance of the virtual private cloud (VPC) network type, a CLB instance of the VPC network type, a secondary elastic network interface, a NAT gateway, or a high-availability virtual IP address (HAVIP) in the same region.
       * - The **AssociateEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the association between the EIP and the cloud resource instance is not yet complete. The association task continues to run in the background. You can call [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP:
       *     - If the EIP is in the **Associating** state, the EIP is being associated. In this state, you can only perform query operations.
       *     - If the EIP is in the **InUse** state, the EIP is associated.
       * - The **AssociateEipAddress** operation does not support concurrent requests to associate the same EIP with cloud resource instances.
       *
       * @param request AssociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddressWithOptions(const Models::AssociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with a cloud resource instance in the same region.
       *
       * @description - An EIP can be associated with an Elastic Compute Service (ECS) instance of the virtual private cloud (VPC) network type, a CLB instance of the VPC network type, a secondary elastic network interface, a NAT gateway, or a high-availability virtual IP address (HAVIP) in the same region.
       * - The **AssociateEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the association between the EIP and the cloud resource instance is not yet complete. The association task continues to run in the background. You can call [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP:
       *     - If the EIP is in the **Associating** state, the EIP is being associated. In this state, you can only perform query operations.
       *     - If the EIP is in the **InUse** state, the EIP is associated.
       * - The **AssociateEipAddress** operation does not support concurrent requests to associate the same EIP with cloud resource instances.
       *
       * @param request AssociateEipAddressRequest
       * @return AssociateEipAddressResponse
       */
      Models::AssociateEipAddressResponse associateEipAddress(const Models::AssociateEipAddressRequest &request);

      /**
       * @summary Associates multiple Elastic IP Addresses (EIPs) with a cloud service instance in the same region in a batch.
       *
       * @description - **AssociateEipAddressBatch** associates multiple EIPs with a cloud service instance in a batch. This operation supports only associating EIPs with an Internet NAT gateway instance or a secondary elastic network interface (ENI) in the same region. To associate an EIP with other cloud service instances, call [AssociateEipAddress](https://help.aliyun.com/document_detail/120195.html).
       * - **AssociateEipAddressBatch** is an asynchronous operation. After you send a request, the system returns a request ID. However, the association is not complete. The association task runs in the background. You can invoke [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of an EIP:
       *     - If the EIP is in the **Associating** state, the EIP is being attached. In this state, you can only execute query operations.
       *     - If the EIP is in the **InUse** state, the association is complete.
       * - **AssociateEipAddressBatch** does not support concurrent attachment of the same EIP with cloud service instances.
       *
       * @param request AssociateEipAddressBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressBatchResponse
       */
      Models::AssociateEipAddressBatchResponse associateEipAddressBatchWithOptions(const Models::AssociateEipAddressBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates multiple Elastic IP Addresses (EIPs) with a cloud service instance in the same region in a batch.
       *
       * @description - **AssociateEipAddressBatch** associates multiple EIPs with a cloud service instance in a batch. This operation supports only associating EIPs with an Internet NAT gateway instance or a secondary elastic network interface (ENI) in the same region. To associate an EIP with other cloud service instances, call [AssociateEipAddress](https://help.aliyun.com/document_detail/120195.html).
       * - **AssociateEipAddressBatch** is an asynchronous operation. After you send a request, the system returns a request ID. However, the association is not complete. The association task runs in the background. You can invoke [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of an EIP:
       *     - If the EIP is in the **Associating** state, the EIP is being attached. In this state, you can only execute query operations.
       *     - If the EIP is in the **InUse** state, the association is complete.
       * - **AssociateEipAddressBatch** does not support concurrent attachment of the same EIP with cloud service instances.
       *
       * @param request AssociateEipAddressBatchRequest
       * @return AssociateEipAddressBatchResponse
       */
      Models::AssociateEipAddressBatchResponse associateEipAddressBatch(const Models::AssociateEipAddressBatchRequest &request);

      /**
       * @summary Invokes the AssociateHaVip operation to attach an HaVip to an ECS instance or elastic network interface (ENI) in a virtual private cloud (VPC).
       *
       * @description When you call this operation to associate an HaVip, take note of the following items:
       * - The HaVip takes effect immediately after being attached without the need to restart the ECS instance. However, you must configure the HaVip on the elastic network interface (ENI) of the ECS instance.
       * - The HaVip and the ECS instance to be associated must belong to the same vSwitch.
       * - An HaVip can be attached to up to 10 ECS instances or up to 10 elastic network interfaces (ENIs) at the same time. However, an HaVip cannot be associated with both ECS instances and ENIs simultaneously.
       * - The ECS instance to be associated must be in the **Running** or **Stopped** state.
       * - The HaVip instance must be in the **Available** or **InUse** state.
       * - **AssociateHaVip** is an asynchronous operation. After you call this operation, the system returns a request ID, but the HaVip is not yet associated. The association task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the association status of the HaVip:
       *     - If the HaVip is in the **Associating** state, the HaVip is being associated.
       *     - If the HaVip is in the **InUse** state, the HaVip is associated.
       * - The **AssociateHaVip** operation does not support concurrent association of the same HaVip.
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AssociateHaVip operation to attach an HaVip to an ECS instance or elastic network interface (ENI) in a virtual private cloud (VPC).
       *
       * @description When you call this operation to associate an HaVip, take note of the following items:
       * - The HaVip takes effect immediately after being attached without the need to restart the ECS instance. However, you must configure the HaVip on the elastic network interface (ENI) of the ECS instance.
       * - The HaVip and the ECS instance to be associated must belong to the same vSwitch.
       * - An HaVip can be attached to up to 10 ECS instances or up to 10 elastic network interfaces (ENIs) at the same time. However, an HaVip cannot be associated with both ECS instances and ENIs simultaneously.
       * - The ECS instance to be associated must be in the **Running** or **Stopped** state.
       * - The HaVip instance must be in the **Available** or **InUse** state.
       * - **AssociateHaVip** is an asynchronous operation. After you call this operation, the system returns a request ID, but the HaVip is not yet associated. The association task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the association status of the HaVip:
       *     - If the HaVip is in the **Associating** state, the HaVip is being associated.
       *     - If the HaVip is in the **InUse** state, the HaVip is associated.
       * - The **AssociateHaVip** operation does not support concurrent association of the same HaVip.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Associates a MACsec key with a dedicated Express Connect circuit port. MACsec uses dedicated encryption chips (such as NICs or switches) to implement low-latency encryption and decryption, directly encrypting physical links (such as optical fiber or Ethernet) to cover all traffic from sender to receiver.
       *
       * @description To use this feature, the following conditions must be met:
       * - The device on which the Express Connect circuit resides supports the MACsec feature.
       * - The Express Connect circuit payment must be completed.
       * - Only dedicated Express Connect circuits are supported.
       * Other notes:
       * - A maximum of three CKN and CAK pairs can be configured.
       * - Associating a key that is currently in the Disassociated state cancels the previously associated key.
       * - Associating a key that is currently in the AssociatedFailed state triggers the device to renegotiate the session.
       *
       * @param request AssociateMacSecKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateMacSecKeyResponse
       */
      Models::AssociateMacSecKeyResponse associateMacSecKeyWithOptions(const Models::AssociateMacSecKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a MACsec key with a dedicated Express Connect circuit port. MACsec uses dedicated encryption chips (such as NICs or switches) to implement low-latency encryption and decryption, directly encrypting physical links (such as optical fiber or Ethernet) to cover all traffic from sender to receiver.
       *
       * @description To use this feature, the following conditions must be met:
       * - The device on which the Express Connect circuit resides supports the MACsec feature.
       * - The Express Connect circuit payment must be completed.
       * - Only dedicated Express Connect circuits are supported.
       * Other notes:
       * - A maximum of three CKN and CAK pairs can be configured.
       * - Associating a key that is currently in the Disassociated state cancels the previously associated key.
       * - Associating a key that is currently in the AssociatedFailed state triggers the device to renegotiate the session.
       *
       * @param request AssociateMacSecKeyRequest
       * @return AssociateMacSecKeyResponse
       */
      Models::AssociateMacSecKeyResponse associateMacSecKey(const Models::AssociateMacSecKeyRequest &request);

      /**
       * @summary Attaches a network ACL to a vSwitch.
       *
       * @description - **AssociateNetworkAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL is not yet associated. The association task continues to run in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the association status of the network ACL:
       *     - If the network ACL is in the **BINDING** state, the network ACL is being associated.
       *     - If the network ACL is in the **BINDED** state, the network ACL is associated.
       * - **AssociateNetworkAcl** does not support concurrent association of the same network ACL.
       *
       * @param request AssociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateNetworkAclResponse
       */
      Models::AssociateNetworkAclResponse associateNetworkAclWithOptions(const Models::AssociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a network ACL to a vSwitch.
       *
       * @description - **AssociateNetworkAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL is not yet associated. The association task continues to run in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the association status of the network ACL:
       *     - If the network ACL is in the **BINDING** state, the network ACL is being associated.
       *     - If the network ACL is in the **BINDED** state, the network ACL is associated.
       * - **AssociateNetworkAcl** does not support concurrent association of the same network ACL.
       *
       * @param request AssociateNetworkAclRequest
       * @return AssociateNetworkAclResponse
       */
      Models::AssociateNetworkAclResponse associateNetworkAcl(const Models::AssociateNetworkAclRequest &request);

      /**
       * @summary Associates a Virtual Border Router (VBR) with an Express Connect circuit.
       *
       * @param request AssociatePhysicalConnectionToVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociatePhysicalConnectionToVirtualBorderRouterResponse
       */
      Models::AssociatePhysicalConnectionToVirtualBorderRouterResponse associatePhysicalConnectionToVirtualBorderRouterWithOptions(const Models::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Virtual Border Router (VBR) with an Express Connect circuit.
       *
       * @param request AssociatePhysicalConnectionToVirtualBorderRouterRequest
       * @return AssociatePhysicalConnectionToVirtualBorderRouterResponse
       */
      Models::AssociatePhysicalConnectionToVirtualBorderRouterResponse associatePhysicalConnectionToVirtualBorderRouter(const Models::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request);

      /**
       * @summary Associates a custom route table with a vSwitch in the same VPC.
       *
       * @description **AssociateRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the association is not yet complete. The association task continues to run in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the association status of the route table:
       * - If the vSwitch is in the **Pending** state, the route table is being associated.
       * - If the vSwitch is in the **Available** state, the route table is associated.
       *
       * @param request AssociateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTableWithOptions(const Models::AssociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a custom route table with a vSwitch in the same VPC.
       *
       * @description **AssociateRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the association is not yet complete. The association task continues to run in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the association status of the route table:
       * - If the vSwitch is in the **Pending** state, the route table is being associated.
       * - If the vSwitch is in the **Available** state, the route table is associated.
       *
       * @param request AssociateRouteTableRequest
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTable(const Models::AssociateRouteTableRequest &request);

      /**
       * @summary Associates a gateway route table with an IPv4 gateway or IPv6 gateway instance in the same VPC by calling the AssociateRouteTableWithGateway operation.
       *
       * @param request AssociateRouteTableWithGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTableWithGatewayResponse
       */
      Models::AssociateRouteTableWithGatewayResponse associateRouteTableWithGatewayWithOptions(const Models::AssociateRouteTableWithGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a gateway route table with an IPv4 gateway or IPv6 gateway instance in the same VPC by calling the AssociateRouteTableWithGateway operation.
       *
       * @param request AssociateRouteTableWithGatewayRequest
       * @return AssociateRouteTableWithGatewayResponse
       */
      Models::AssociateRouteTableWithGatewayResponse associateRouteTableWithGateway(const Models::AssociateRouteTableWithGatewayRequest &request);

      /**
       * @summary Associates route tables with a VPC gateway endpoint by calling the AssociateRouteTablesWithVpcGatewayEndpoint operation.
       *
       * @description Before you call this operation to associate route tables with a gateway endpoint, take note of the following items:
       * - The gateway endpoint instance with which you want to associate route tables cannot be in a transient state, such as **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * - The route tables that you want to associate cannot be in a transient state, such as **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * - The route tables and the gateway endpoint must belong to the same VPC.
       * - The route tables to be associated cannot be shared route tables.
       * - Virtual Border Router (VBR) route tables are not supported.
       * - You can associate up to 20 route tables at a time.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation is asynchronous. After you send a request, the system returns an instance ID, but the route tables have not yet been associated with the gateway endpoint. The association task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the association status of the route tables and the gateway endpoint:
       *     - If the route tables and the gateway endpoint are in the **Associating** state, the association is in progress.
       *     - If the route tables and the gateway endpoint are in the **Created** state, the association is complete.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation does not support concurrent association of the same route table with a gateway endpoint.
       *
       * @param request AssociateRouteTablesWithVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTablesWithVpcGatewayEndpointResponse
       */
      Models::AssociateRouteTablesWithVpcGatewayEndpointResponse associateRouteTablesWithVpcGatewayEndpointWithOptions(const Models::AssociateRouteTablesWithVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates route tables with a VPC gateway endpoint by calling the AssociateRouteTablesWithVpcGatewayEndpoint operation.
       *
       * @description Before you call this operation to associate route tables with a gateway endpoint, take note of the following items:
       * - The gateway endpoint instance with which you want to associate route tables cannot be in a transient state, such as **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * - The route tables that you want to associate cannot be in a transient state, such as **Creating**, **Modifying**, **Associating**, **Dissociating**, or **Deleting**.
       * - The route tables and the gateway endpoint must belong to the same VPC.
       * - The route tables to be associated cannot be shared route tables.
       * - Virtual Border Router (VBR) route tables are not supported.
       * - You can associate up to 20 route tables at a time.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation is asynchronous. After you send a request, the system returns an instance ID, but the route tables have not yet been associated with the gateway endpoint. The association task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the association status of the route tables and the gateway endpoint:
       *     - If the route tables and the gateway endpoint are in the **Associating** state, the association is in progress.
       *     - If the route tables and the gateway endpoint are in the **Created** state, the association is complete.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation does not support concurrent association of the same route table with a gateway endpoint.
       *
       * @param request AssociateRouteTablesWithVpcGatewayEndpointRequest
       * @return AssociateRouteTablesWithVpcGatewayEndpointResponse
       */
      Models::AssociateRouteTablesWithVpcGatewayEndpointResponse associateRouteTablesWithVpcGatewayEndpoint(const Models::AssociateRouteTablesWithVpcGatewayEndpointRequest &request);

      /**
       * @summary Adds a secondary CIDR block to a VPC.
       *
       * @description - The maximum number of secondary CIDR blocks that can be added to a VPC is as follows:
       *     - A maximum of 5 secondary IPv4 CIDR blocks can be added to a VPC.
       *     - A maximum of 5 secondary IPv6 CIDR blocks can be added to a VPC.
       * - The **AssociateVpcCidrBlock** operation does not support concurrently adding secondary CIDR blocks to the same VPC.
       *
       * @param request AssociateVpcCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateVpcCidrBlockResponse
       */
      Models::AssociateVpcCidrBlockResponse associateVpcCidrBlockWithOptions(const Models::AssociateVpcCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a secondary CIDR block to a VPC.
       *
       * @description - The maximum number of secondary CIDR blocks that can be added to a VPC is as follows:
       *     - A maximum of 5 secondary IPv4 CIDR blocks can be added to a VPC.
       *     - A maximum of 5 secondary IPv6 CIDR blocks can be added to a VPC.
       * - The **AssociateVpcCidrBlock** operation does not support concurrently adding secondary CIDR blocks to the same VPC.
       *
       * @param request AssociateVpcCidrBlockRequest
       * @return AssociateVpcCidrBlockResponse
       */
      Models::AssociateVpcCidrBlockResponse associateVpcCidrBlock(const Models::AssociateVpcCidrBlockRequest &request);

      /**
       * @summary Associates a certificate with a VPN gateway by calling the AssociateVpnGatewayWithCertificate operation.
       *
       * @description Before you attach a VPN gateway to an SSL certificate, take note of the following information:
       * - Only Chinese SM VPN gateways support SSL certificate attachment. You must attach two SSL certificates to a Chinese SM VPN gateway: one as the encryption certificate and the other as the signing certificate.
       * - The SSL certificates must use Chinese SM algorithms.
       * - You cannot specify the same SSL certificate as both the encryption certificate and the signing certificate for the same VPN gateway instance.
       * <props="china">
       * - When you attach a VPN gateway to an SSL certificate for the first time, the system performs automatic creation of a service-linked role named AliyunServiceRoleForVPNCertificate and adds the access policy AliyunServiceRolePolicyForVPNCertificate to the role. This grants the VPN gateway permissions to access other cloud resources. For more information, see [AliyunServiceRoleForVPNCertificate](https://help.aliyun.com/document_detail/203323.html).
       * - The **AssociateVpnGatewayWithCertificate** operation is asynchronous. After you send a request, the system returns a request ID, but the SSL certificate is not yet attached to the VPN gateway. The attachment node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the attachment status of the SSL certificate:
       *     - If the VPN gateway is in the **updating** state, the SSL certificate is being attached.
       *     - If the VPN gateway is in the **active** state, the SSL certificate is attached.
       * - The **AssociateVpnGatewayWithCertificate** operation does not support concurrent SSL certificate attachment for the same VPN gateway.
       * ### Before you begin
       * Make sure that you have two SSL certificates that use Chinese SM algorithms in the Alibaba Cloud Certificate Management Service console. For more information about SSL certificates, see [What is Certificate Management Service?](https://help.aliyun.com/document_detail/28535.html).
       *
       * @param request AssociateVpnGatewayWithCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateVpnGatewayWithCertificateResponse
       */
      Models::AssociateVpnGatewayWithCertificateResponse associateVpnGatewayWithCertificateWithOptions(const Models::AssociateVpnGatewayWithCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a certificate with a VPN gateway by calling the AssociateVpnGatewayWithCertificate operation.
       *
       * @description Before you attach a VPN gateway to an SSL certificate, take note of the following information:
       * - Only Chinese SM VPN gateways support SSL certificate attachment. You must attach two SSL certificates to a Chinese SM VPN gateway: one as the encryption certificate and the other as the signing certificate.
       * - The SSL certificates must use Chinese SM algorithms.
       * - You cannot specify the same SSL certificate as both the encryption certificate and the signing certificate for the same VPN gateway instance.
       * <props="china">
       * - When you attach a VPN gateway to an SSL certificate for the first time, the system performs automatic creation of a service-linked role named AliyunServiceRoleForVPNCertificate and adds the access policy AliyunServiceRolePolicyForVPNCertificate to the role. This grants the VPN gateway permissions to access other cloud resources. For more information, see [AliyunServiceRoleForVPNCertificate](https://help.aliyun.com/document_detail/203323.html).
       * - The **AssociateVpnGatewayWithCertificate** operation is asynchronous. After you send a request, the system returns a request ID, but the SSL certificate is not yet attached to the VPN gateway. The attachment node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the attachment status of the SSL certificate:
       *     - If the VPN gateway is in the **updating** state, the SSL certificate is being attached.
       *     - If the VPN gateway is in the **active** state, the SSL certificate is attached.
       * - The **AssociateVpnGatewayWithCertificate** operation does not support concurrent SSL certificate attachment for the same VPN gateway.
       * ### Before you begin
       * Make sure that you have two SSL certificates that use Chinese SM algorithms in the Alibaba Cloud Certificate Management Service console. For more information about SSL certificates, see [What is Certificate Management Service?](https://help.aliyun.com/document_detail/28535.html).
       *
       * @param request AssociateVpnGatewayWithCertificateRequest
       * @return AssociateVpnGatewayWithCertificateResponse
       */
      Models::AssociateVpnGatewayWithCertificateResponse associateVpnGatewayWithCertificate(const Models::AssociateVpnGatewayWithCertificateRequest &request);

      /**
       * @summary Calls the AttachDhcpOptionsSetToVpc operation to attach a DHCP options set to a VPC.
       *
       * @description - **AttachDhcpOptionsSetToVpc** is an asynchronous operation. After you send a request, the system returns a request ID, but the DHCP options set is not yet attached to the VPC. The attachment task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the attachment status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being attached.
       *     - If the DHCP options set is in the **InUse** state, the DHCP options set is attached.
       * - **AttachDhcpOptionsSetToVpc** does not support concurrent attachment of DHCP options sets to the same VPC.
       *
       * @param request AttachDhcpOptionsSetToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDhcpOptionsSetToVpcResponse
       */
      Models::AttachDhcpOptionsSetToVpcResponse attachDhcpOptionsSetToVpcWithOptions(const Models::AttachDhcpOptionsSetToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AttachDhcpOptionsSetToVpc operation to attach a DHCP options set to a VPC.
       *
       * @description - **AttachDhcpOptionsSetToVpc** is an asynchronous operation. After you send a request, the system returns a request ID, but the DHCP options set is not yet attached to the VPC. The attachment task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the attachment status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being attached.
       *     - If the DHCP options set is in the **InUse** state, the DHCP options set is attached.
       * - **AttachDhcpOptionsSetToVpc** does not support concurrent attachment of DHCP options sets to the same VPC.
       *
       * @param request AttachDhcpOptionsSetToVpcRequest
       * @return AttachDhcpOptionsSetToVpcResponse
       */
      Models::AttachDhcpOptionsSetToVpcResponse attachDhcpOptionsSetToVpc(const Models::AttachDhcpOptionsSetToVpcRequest &request);

      /**
       * @summary Associates a Virtual Border Router (VBR) instance with shared Express Connect circuits.
       *
       * @param request AttachVbrToVpconnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVbrToVpconnResponse
       */
      Models::AttachVbrToVpconnResponse attachVbrToVpconnWithOptions(const Models::AttachVbrToVpconnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Virtual Border Router (VBR) instance with shared Express Connect circuits.
       *
       * @param request AttachVbrToVpconnRequest
       * @return AttachVbrToVpconnResponse
       */
      Models::AttachVbrToVpconnResponse attachVbrToVpconn(const Models::AttachVbrToVpconnRequest &request);

      /**
       * @summary Cancels the maximum available bandwidth setting for an EIP that has been added to an Internet Shared Bandwidth instance.
       *
       * @description Before you begin:
       * - After the setting is canceled, the maximum available bandwidth of the EIP becomes the same as that of the Internet Shared Bandwidth instance.
       * - The **CancelCommonBandwidthPackageIpBandwidth** operation does not support concurrent requests to cancel the maximum available bandwidth setting for the same EIP.
       *
       * @param request CancelCommonBandwidthPackageIpBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCommonBandwidthPackageIpBandwidthResponse
       */
      Models::CancelCommonBandwidthPackageIpBandwidthResponse cancelCommonBandwidthPackageIpBandwidthWithOptions(const Models::CancelCommonBandwidthPackageIpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the maximum available bandwidth setting for an EIP that has been added to an Internet Shared Bandwidth instance.
       *
       * @description Before you begin:
       * - After the setting is canceled, the maximum available bandwidth of the EIP becomes the same as that of the Internet Shared Bandwidth instance.
       * - The **CancelCommonBandwidthPackageIpBandwidth** operation does not support concurrent requests to cancel the maximum available bandwidth setting for the same EIP.
       *
       * @param request CancelCommonBandwidthPackageIpBandwidthRequest
       * @return CancelCommonBandwidthPackageIpBandwidthResponse
       */
      Models::CancelCommonBandwidthPackageIpBandwidthResponse cancelCommonBandwidthPackageIpBandwidth(const Models::CancelCommonBandwidthPackageIpBandwidthRequest &request);

      /**
       * @summary Cancels access to an Express Connect circuit. After the cancellation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel access only for Express Connect circuits in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state (not yet activated).
       *
       * @param request CancelPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnectionWithOptions(const Models::CancelPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels access to an Express Connect circuit. After the cancellation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel access only for Express Connect circuits in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state (not yet activated).
       *
       * @param request CancelPhysicalConnectionRequest
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnection(const Models::CancelPhysicalConnectionRequest &request);

      /**
       * @summary Calls the ChangeResourceGroup operation to modify the resource group to which an Express Connect circuit resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications of the resource group to which an Express Connect circuit resource belongs within the same Express Connect circuit instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ChangeResourceGroup operation to modify the resource group to which an Express Connect circuit resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications of the resource group to which an Express Connect circuit resource belongs within the same Express Connect circuit instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks whether a private IP address in a vSwitch is available.
       *
       * @description - The first and last 3 IPv4 addresses of each vSwitch are system reserved IP addresses, and the first and last 9 IPv6 addresses are system reserved IP addresses. These addresses cannot be allocated.
       *
       * @param request CheckCanAllocateVpcPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCanAllocateVpcPrivateIpAddressResponse
       */
      Models::CheckCanAllocateVpcPrivateIpAddressResponse checkCanAllocateVpcPrivateIpAddressWithOptions(const Models::CheckCanAllocateVpcPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a private IP address in a vSwitch is available.
       *
       * @description - The first and last 3 IPv4 addresses of each vSwitch are system reserved IP addresses, and the first and last 9 IPv6 addresses are system reserved IP addresses. These addresses cannot be allocated.
       *
       * @param request CheckCanAllocateVpcPrivateIpAddressRequest
       * @return CheckCanAllocateVpcPrivateIpAddressResponse
       */
      Models::CheckCanAllocateVpcPrivateIpAddressResponse checkCanAllocateVpcPrivateIpAddress(const Models::CheckCanAllocateVpcPrivateIpAddressRequest &request);

      /**
       * @summary Calls the CheckVpnBgpEnabled operation to query whether the region of an IPsec-VPN connection supports the BGP feature.
       *
       * @param request CheckVpnBgpEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckVpnBgpEnabledResponse
       */
      Models::CheckVpnBgpEnabledResponse checkVpnBgpEnabledWithOptions(const Models::CheckVpnBgpEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CheckVpnBgpEnabled operation to query whether the region of an IPsec-VPN connection supports the BGP feature.
       *
       * @param request CheckVpnBgpEnabledRequest
       * @return CheckVpnBgpEnabledResponse
       */
      Models::CheckVpnBgpEnabledResponse checkVpnBgpEnabled(const Models::CheckVpnBgpEnabledRequest &request);

      /**
       * @summary Calls CompletePhysicalConnectionLOA to complete the construction.
       *
       * @param request CompletePhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompletePhysicalConnectionLOAResponse
       */
      Models::CompletePhysicalConnectionLOAResponse completePhysicalConnectionLOAWithOptions(const Models::CompletePhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CompletePhysicalConnectionLOA to complete the construction.
       *
       * @param request CompletePhysicalConnectionLOARequest
       * @return CompletePhysicalConnectionLOAResponse
       */
      Models::CompletePhysicalConnectionLOAResponse completePhysicalConnectionLOA(const Models::CompletePhysicalConnectionLOARequest &request);

      /**
       * @summary Confirms that an Express Connect circuit is available. The status of the Express Connect circuit changes to Confirmed.
       *
       * @param request ConfirmPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmPhysicalConnectionResponse
       */
      Models::ConfirmPhysicalConnectionResponse confirmPhysicalConnectionWithOptions(const Models::ConfirmPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms that an Express Connect circuit is available. The status of the Express Connect circuit changes to Confirmed.
       *
       * @param request ConfirmPhysicalConnectionRequest
       * @return ConfirmPhysicalConnectionResponse
       */
      Models::ConfirmPhysicalConnectionResponse confirmPhysicalConnection(const Models::ConfirmPhysicalConnectionRequest &request);

      /**
       * @summary Initiates a connection from the requester VPC router interface to the accepter.
       *
       * @description After you call this operation, the router interface enters the **Connecting** state. After the connection is established, the router interface enters the **Active** state.
       * When you call this operation to create a VPC, note the following items: 
       * - Only a requester VPC router interface in the **Idle** state can initiate a connection to the accepter VPC. 
       * - A maximum of one pair of interconnected router interfaces can exist between any two routers. 
       * - If your account has a router interface with an overdue payment, you cannot initiate a connection.
       *
       * @param request ConnectRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterfaceWithOptions(const Models::ConnectRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a connection from the requester VPC router interface to the accepter.
       *
       * @description After you call this operation, the router interface enters the **Connecting** state. After the connection is established, the router interface enters the **Active** state.
       * When you call this operation to create a VPC, note the following items: 
       * - Only a requester VPC router interface in the **Idle** state can initiate a connection to the accepter VPC. 
       * - A maximum of one pair of interconnected router interfaces can exist between any two routers. 
       * - If your account has a router interface with an overdue payment, you cannot initiate a connection.
       *
       * @param request ConnectRouterInterfaceRequest
       * @return ConnectRouterInterfaceResponse
       */
      Models::ConnectRouterInterfaceResponse connectRouterInterface(const Models::ConnectRouterInterfaceRequest &request);

      /**
       * @summary Calls the CopyNetworkAclEntries operation to copy network ACL rules.
       *
       * @description - **CopyNetworkAclEntries** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL rules have not been replicated yet. The replication node is still running in the background. You can invoke [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the replication status of the network ACL rules:
       *     - If the network ACL rules are in the **Modifying** state, the network ACL rules are being replicated.
       *     - If the network ACL rules are in the **Available** state, the network ACL rules are replicated. Copy succeeded.
       * - **CopyNetworkAclEntries** does not support concurrent replication of the same network ACL rules.
       *
       * @param request CopyNetworkAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyNetworkAclEntriesResponse
       */
      Models::CopyNetworkAclEntriesResponse copyNetworkAclEntriesWithOptions(const Models::CopyNetworkAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CopyNetworkAclEntries operation to copy network ACL rules.
       *
       * @description - **CopyNetworkAclEntries** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL rules have not been replicated yet. The replication node is still running in the background. You can invoke [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the replication status of the network ACL rules:
       *     - If the network ACL rules are in the **Modifying** state, the network ACL rules are being replicated.
       *     - If the network ACL rules are in the **Available** state, the network ACL rules are replicated. Copy succeeded.
       * - **CopyNetworkAclEntries** does not support concurrent replication of the same network ACL rules.
       *
       * @param request CopyNetworkAclEntriesRequest
       * @return CopyNetworkAclEntriesResponse
       */
      Models::CopyNetworkAclEntriesResponse copyNetworkAclEntries(const Models::CopyNetworkAclEntriesRequest &request);

      /**
       * @summary Creates a BGP group for a specified Virtual Border Router (VBR).
       *
       * @description You can use Border Gateway Protocol (BGP) to enable communication between a VBR and an on-premises data center. Each BGP group is associated with a VBR. You only need to add the BGP peers that communicate with the VBR to the corresponding BGP group, and then advertise the Border Gateway Protocol (BGP) networks in the VBR. 
       * BGP groups simplify BGP configurations by merging BGP peers with the same configurations into a single BGP group, which reduces configuration complexity. Create a BGP group based on the requested Autonomous System Number (ASN). 
       * When you invoke this operation to create a BGP group, take note of the following items: 
       * - A VBR supports establishing BGP peers only with the on-premises data center at the other end of the Express Connect circuit.
       * - The BGP version supported by VBRs is BGP-4.
       * - Each VBR supports up to 8 BGP peers.
       * - Each BGP peer supports up to 110 dynamic routes.
       * - The ASN on the Alibaba Cloud side is 45104. The ASN on the user side can be a 2-byte or 4-byte value.
       *
       * @param request CreateBgpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBgpGroupResponse
       */
      Models::CreateBgpGroupResponse createBgpGroupWithOptions(const Models::CreateBgpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a BGP group for a specified Virtual Border Router (VBR).
       *
       * @description You can use Border Gateway Protocol (BGP) to enable communication between a VBR and an on-premises data center. Each BGP group is associated with a VBR. You only need to add the BGP peers that communicate with the VBR to the corresponding BGP group, and then advertise the Border Gateway Protocol (BGP) networks in the VBR. 
       * BGP groups simplify BGP configurations by merging BGP peers with the same configurations into a single BGP group, which reduces configuration complexity. Create a BGP group based on the requested Autonomous System Number (ASN). 
       * When you invoke this operation to create a BGP group, take note of the following items: 
       * - A VBR supports establishing BGP peers only with the on-premises data center at the other end of the Express Connect circuit.
       * - The BGP version supported by VBRs is BGP-4.
       * - Each VBR supports up to 8 BGP peers.
       * - Each BGP peer supports up to 110 dynamic routes.
       * - The ASN on the Alibaba Cloud side is 45104. The ASN on the user side can be a 2-byte or 4-byte value.
       *
       * @param request CreateBgpGroupRequest
       * @return CreateBgpGroupResponse
       */
      Models::CreateBgpGroupResponse createBgpGroup(const Models::CreateBgpGroupRequest &request);

      /**
       * @summary Adds a BGP peer to a specified BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeerWithOptions(const Models::CreateBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a BGP peer to a specified BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeer(const Models::CreateBgpPeerRequest &request);

      /**
       * @summary Creates an Internet Shared Bandwidth instance by calling the CreateCommonBandwidthPackage operation.
       *
       * @description <props="china"><ph>This operation supports only the creation of pay-as-you-go Internet Shared Bandwidth instances. To create a subscription Internet Shared Bandwidth instance, see [Create an Internet Shared Bandwidth instance](https://help.aliyun.com/document_detail/65223.html).</ph>
       *
       * @param request CreateCommonBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommonBandwidthPackageResponse
       */
      Models::CreateCommonBandwidthPackageResponse createCommonBandwidthPackageWithOptions(const Models::CreateCommonBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Internet Shared Bandwidth instance by calling the CreateCommonBandwidthPackage operation.
       *
       * @description <props="china"><ph>This operation supports only the creation of pay-as-you-go Internet Shared Bandwidth instances. To create a subscription Internet Shared Bandwidth instance, see [Create an Internet Shared Bandwidth instance](https://help.aliyun.com/document_detail/65223.html).</ph>
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
       * @summary Creates a default vSwitch by calling the CreateDefaultVSwitch operation.
       *
       * @description When you call this operation to create a default vSwitch, take note of the following items:
       * - The first and last three IP addresses of each default vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses for 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a default vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - Default vSwitches do not support multicast or broadcast.
       * - After a default vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateDefaultVSwitch** operation is asynchronous. After you call this operation, the system returns an instance ID, but the default vSwitch has not been created yet. The background task is still in progress. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the default vSwitch:
       *     - If the default vSwitch is in the **Pending** state, the default vSwitch is being configured.
       *     - If the default vSwitch is in the **Available** state, the default vSwitch is available.
       * - If a default vSwitch already exists in a zone of the specified region, the call to this operation fails.
       * - Before creating a default vSwitch, create a default VPC first. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
       *
       * @param request CreateDefaultVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultVSwitchResponse
       */
      Models::CreateDefaultVSwitchResponse createDefaultVSwitchWithOptions(const Models::CreateDefaultVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a default vSwitch by calling the CreateDefaultVSwitch operation.
       *
       * @description When you call this operation to create a default vSwitch, take note of the following items:
       * - The first and last three IP addresses of each default vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses for 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a default vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - Default vSwitches do not support multicast or broadcast.
       * - After a default vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateDefaultVSwitch** operation is asynchronous. After you call this operation, the system returns an instance ID, but the default vSwitch has not been created yet. The background task is still in progress. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the default vSwitch:
       *     - If the default vSwitch is in the **Pending** state, the default vSwitch is being configured.
       *     - If the default vSwitch is in the **Available** state, the default vSwitch is available.
       * - If a default vSwitch already exists in a zone of the specified region, the call to this operation fails.
       * - Before creating a default vSwitch, create a default VPC first. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
       *
       * @param request CreateDefaultVSwitchRequest
       * @return CreateDefaultVSwitchResponse
       */
      Models::CreateDefaultVSwitchResponse createDefaultVSwitch(const Models::CreateDefaultVSwitchRequest &request);

      /**
       * @summary Creates a default virtual private cloud (VPC).
       *
       * @description When you call this operation to create a default VPC, note the following items:
       * - After a default VPC is created, you cannot modify its CIDR block, but you can add secondary IPv4 CIDR blocks.
       * - Each default VPC supports up to 300,000 private network IP addresses for cloud resources. This quota cannot be upgraded.
       *   
       * - After a default VPC is created, a vRouter and a route table are automatically created.
       *   
       * - Each default VPC supports up to three user CIDR blocks. If one user CIDR block contains another, the CIDR block with the shorter mask takes effect. For example, if both 10.0.0.0/16 and 10.0.0.0/24 are specified, 10.0.0.0/16 takes effect.
       * - The **CreateDefaultVpc** operation is asynchronous. After you call this operation, the system returns an instance ID, but the default VPC is not yet created. The creation task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the creation status of the default VPC:
       *     - If the default VPC is in the **Pending** state, the default VPC is being configured.
       *     - If the default VPC is in the **Available** state, the default VPC is available.
       * - The **CreateDefaultVpc** operation does not support concurrent creation of default VPCs in the same region.
       * - Only one default VPC can exist in a region.
       *
       * @param request CreateDefaultVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultVpcResponse
       */
      Models::CreateDefaultVpcResponse createDefaultVpcWithOptions(const Models::CreateDefaultVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a default virtual private cloud (VPC).
       *
       * @description When you call this operation to create a default VPC, note the following items:
       * - After a default VPC is created, you cannot modify its CIDR block, but you can add secondary IPv4 CIDR blocks.
       * - Each default VPC supports up to 300,000 private network IP addresses for cloud resources. This quota cannot be upgraded.
       *   
       * - After a default VPC is created, a vRouter and a route table are automatically created.
       *   
       * - Each default VPC supports up to three user CIDR blocks. If one user CIDR block contains another, the CIDR block with the shorter mask takes effect. For example, if both 10.0.0.0/16 and 10.0.0.0/24 are specified, 10.0.0.0/16 takes effect.
       * - The **CreateDefaultVpc** operation is asynchronous. After you call this operation, the system returns an instance ID, but the default VPC is not yet created. The creation task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the creation status of the default VPC:
       *     - If the default VPC is in the **Pending** state, the default VPC is being configured.
       *     - If the default VPC is in the **Available** state, the default VPC is available.
       * - The **CreateDefaultVpc** operation does not support concurrent creation of default VPCs in the same region.
       * - Only one default VPC can exist in a region.
       *
       * @param request CreateDefaultVpcRequest
       * @return CreateDefaultVpcResponse
       */
      Models::CreateDefaultVpcResponse createDefaultVpc(const Models::CreateDefaultVpcRequest &request);

      /**
       * @summary Creates a DHCP options set.
       *
       * @description - **CreateDhcpOptionsSet** is an asynchronous operation. After you invoke this operation, the system returns an instance ID but the DHCP options set is not yet created. The background node is still in progress. You can invoke [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the creation status of the DHCP options set:
       *     - If the vSwitch is in the **Pending** state, the DHCP options set is being configured.
       *     - If the vSwitch is in the **Available** state, the DHCP options set is active.
       *
       * @param request CreateDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDhcpOptionsSetResponse
       */
      Models::CreateDhcpOptionsSetResponse createDhcpOptionsSetWithOptions(const Models::CreateDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DHCP options set.
       *
       * @description - **CreateDhcpOptionsSet** is an asynchronous operation. After you invoke this operation, the system returns an instance ID but the DHCP options set is not yet created. The background node is still in progress. You can invoke [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the creation status of the DHCP options set:
       *     - If the vSwitch is in the **Pending** state, the DHCP options set is being configured.
       *     - If the vSwitch is in the **Available** state, the DHCP options set is active.
       *
       * @param request CreateDhcpOptionsSetRequest
       * @return CreateDhcpOptionsSetResponse
       */
      Models::CreateDhcpOptionsSetResponse createDhcpOptionsSet(const Models::CreateDhcpOptionsSetRequest &request);

      /**
       * @summary Creates an enhanced VPN gateway by calling the CreateEnhancedVpnGateway operation.
       *
       * @description - Before you create an enhanced VPN gateway, we recommend that you understand the limits of VPN gateways. For more information, see [Limits of VPN Gateway](https://www.alibabacloud.com/help/en/vpn/sub-product-ipsec-vpn/user-guide/vpn-gateway-instance/).
       * - Enhanced VPN gateway instances support only dual-tunnel IPsec-VPN connections. When you call the `CreateEnhancedVpnGateway` operation to create a VPN gateway instance, in addition to the required parameters, you must also specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters.
       * - The **CreateEnhancedVpnGateway** operation is asynchronous. After you send a request, the system returns an instance ID, but the enhanced VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://www.alibabacloud.com/help/en/vpn/sub-product-ipsec-vpn/developer-reference/api-vpc-2016-04-28-describevpngateway-vpns) to query the creation status of the enhanced VPN gateway:
       *   - If the enhanced VPN gateway is in the **provisioning** state, the enhanced VPN gateway is being created.
       *   - If the enhanced VPN gateway is in the **active** state, the enhanced VPN gateway is created.
       *
       * @param request CreateEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnhancedVpnGatewayResponse
       */
      Models::CreateEnhancedVpnGatewayResponse createEnhancedVpnGatewayWithOptions(const Models::CreateEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enhanced VPN gateway by calling the CreateEnhancedVpnGateway operation.
       *
       * @description - Before you create an enhanced VPN gateway, we recommend that you understand the limits of VPN gateways. For more information, see [Limits of VPN Gateway](https://www.alibabacloud.com/help/en/vpn/sub-product-ipsec-vpn/user-guide/vpn-gateway-instance/).
       * - Enhanced VPN gateway instances support only dual-tunnel IPsec-VPN connections. When you call the `CreateEnhancedVpnGateway` operation to create a VPN gateway instance, in addition to the required parameters, you must also specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters.
       * - The **CreateEnhancedVpnGateway** operation is asynchronous. After you send a request, the system returns an instance ID, but the enhanced VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://www.alibabacloud.com/help/en/vpn/sub-product-ipsec-vpn/developer-reference/api-vpc-2016-04-28-describevpngateway-vpns) to query the creation status of the enhanced VPN gateway:
       *   - If the enhanced VPN gateway is in the **provisioning** state, the enhanced VPN gateway is being created.
       *   - If the enhanced VPN gateway is in the **active** state, the enhanced VPN gateway is created.
       *
       * @param request CreateEnhancedVpnGatewayRequest
       * @return CreateEnhancedVpnGatewayResponse
       */
      Models::CreateEnhancedVpnGatewayResponse createEnhancedVpnGateway(const Models::CreateEnhancedVpnGatewayRequest &request);

      /**
       * @summary Creates an Express Cloud Connection (ECC) instance.
       *
       * @param request CreateExpressCloudConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressCloudConnectionResponse
       */
      Models::CreateExpressCloudConnectionResponse createExpressCloudConnectionWithOptions(const Models::CreateExpressCloudConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Express Cloud Connection (ECC) instance.
       *
       * @param request CreateExpressCloudConnectionRequest
       * @return CreateExpressCloudConnectionResponse
       */
      Models::CreateExpressCloudConnectionResponse createExpressCloudConnection(const Models::CreateExpressCloudConnectionRequest &request);

      /**
       * @summary Creates a Quality of Service (QoS) policy for Express Connect.
       *
       * @description - The Express Connect QoS feature is currently in invitational preview. To call this operation, contact your account manager to be added to the whitelist.
       * - The number of QoS policies that each user can create is subject to a quota limit. To increase the quota, contact your account manager.
       *
       * @param request CreateExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosResponse
       */
      Models::CreateExpressConnectTrafficQosResponse createExpressConnectTrafficQosWithOptions(const Models::CreateExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Quality of Service (QoS) policy for Express Connect.
       *
       * @description - The Express Connect QoS feature is currently in invitational preview. To call this operation, contact your account manager to be added to the whitelist.
       * - The number of QoS policies that each user can create is subject to a quota limit. To increase the quota, contact your account manager.
       *
       * @param request CreateExpressConnectTrafficQosRequest
       * @return CreateExpressConnectTrafficQosResponse
       */
      Models::CreateExpressConnectTrafficQosResponse createExpressConnectTrafficQos(const Models::CreateExpressConnectTrafficQosRequest &request);

      /**
       * @summary Creates a QoS queue for Express Connect.
       *
       * @description - The default queue cannot be created.
       * - The number of high-priority queues has an upper limit. To increase the quota, contact your account manager.
       * - The number of lower-priority queues has an upper limit. To increase the quota, contact your account manager.
       * - The total bandwidth percentage of all lower-priority queues has an upper limit.
       *
       * @param request CreateExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosQueueResponse
       */
      Models::CreateExpressConnectTrafficQosQueueResponse createExpressConnectTrafficQosQueueWithOptions(const Models::CreateExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a QoS queue for Express Connect.
       *
       * @description - The default queue cannot be created.
       * - The number of high-priority queues has an upper limit. To increase the quota, contact your account manager.
       * - The number of lower-priority queues has an upper limit. To increase the quota, contact your account manager.
       * - The total bandwidth percentage of all lower-priority queues has an upper limit.
       *
       * @param request CreateExpressConnectTrafficQosQueueRequest
       * @return CreateExpressConnectTrafficQosQueueResponse
       */
      Models::CreateExpressConnectTrafficQosQueueResponse createExpressConnectTrafficQosQueue(const Models::CreateExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Creates a QoS rule for Express Connect.
       *
       * @description - The priority of a QoS rule must be unique within a QoS policy.
       * - The number of QoS rules in a single QoS queue is limited. To increase the quota, contact your account manager.
       *
       * @param request CreateExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosRuleResponse
       */
      Models::CreateExpressConnectTrafficQosRuleResponse createExpressConnectTrafficQosRuleWithOptions(const Models::CreateExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a QoS rule for Express Connect.
       *
       * @description - The priority of a QoS rule must be unique within a QoS policy.
       * - The number of QoS rules in a single QoS queue is limited. To increase the quota, contact your account manager.
       *
       * @param request CreateExpressConnectTrafficQosRuleRequest
       * @return CreateExpressConnectTrafficQosRuleResponse
       */
      Models::CreateExpressConnectTrafficQosRuleResponse createExpressConnectTrafficQosRule(const Models::CreateExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Creates a failover test job for Express Connect.
       *
       * @description You cannot create a failover test job in the following scenarios:
       * - A failover test job is already running in the current region, and the job type of the new failover test job is set to StartNow.
       * - The Express Connect circuit instance or shared Express Connect circuit instance has not been paid for or has an overdue payment.
       * - The Express Connect circuit instance or shared Express Connect circuit instance is already in another running failover test job.
       *  
       * - The Express Connect circuit instance has more than one shared Express Connect circuit.
       * - The Express Connect circuit instance has more than one cross-account Virtual Border Router (VBR).
       * - The shared Express Connect circuit instance is not associated with a VBR.
       * - The VLAN of the shared Express Connect circuit instance is set to 0.
       *
       * @param request CreateFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFailoverTestJobResponse
       */
      Models::CreateFailoverTestJobResponse createFailoverTestJobWithOptions(const Models::CreateFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a failover test job for Express Connect.
       *
       * @description You cannot create a failover test job in the following scenarios:
       * - A failover test job is already running in the current region, and the job type of the new failover test job is set to StartNow.
       * - The Express Connect circuit instance or shared Express Connect circuit instance has not been paid for or has an overdue payment.
       * - The Express Connect circuit instance or shared Express Connect circuit instance is already in another running failover test job.
       *  
       * - The Express Connect circuit instance has more than one shared Express Connect circuit.
       * - The Express Connect circuit instance has more than one cross-account Virtual Border Router (VBR).
       * - The shared Express Connect circuit instance is not associated with a VBR.
       * - The VLAN of the shared Express Connect circuit instance is set to 0.
       *
       * @param request CreateFailoverTestJobRequest
       * @return CreateFailoverTestJobResponse
       */
      Models::CreateFailoverTestJobResponse createFailoverTestJob(const Models::CreateFailoverTestJobRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @description **CreateFlowLog** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the flow log is not yet created. The creation node is still running in the background. You can invoke [DescribeFlowLogs](https://help.aliyun.com/document_detail/448670.html) to query the creation status of the flow log:
       * - If the flow log is in the **Activating** state, the flow log is being created.
       * - If the flow log is in the **Active** state, the flow log is created and activated.
       *
       * @param request CreateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLogWithOptions(const Models::CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log.
       *
       * @description **CreateFlowLog** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the flow log is not yet created. The creation node is still running in the background. You can invoke [DescribeFlowLogs](https://help.aliyun.com/document_detail/448670.html) to query the creation status of the flow log:
       * - If the flow log is in the **Activating** state, the flow log is being created.
       * - If the flow log is in the **Active** state, the flow log is created and activated.
       *
       * @param request CreateFlowLogRequest
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLog(const Models::CreateFlowLogRequest &request);

      /**
       * @summary Adds a DNAT entry to a DNAT table by calling the CreateForwardEntry operation.
       *
       * @description Each DNAT entry consists of five parts: **ExternalIp**, **ExternalPort**, **IpProtocol**, **InternalIp**, and **InternalPort**. After you add a DNAT entry, the NAT gateway forwards packets of the specified protocol received on **ExternalIp:ExternalPort** to **InternalIp:InternalPort** and returns responses along the same path.
       * Note the following when you call this operation to add a DNAT entry: 
       *      
       * - The **CreateForwardEntry** operation is asynchronous. After you send a request, the system returns a DNAT entry ID, but the DNAT entry is not yet added. The system adds the entry in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being added. In this state, you can only perform query operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry is added.
       *  
       * - The combination of **ExternalIp**, **ExternalPort**, and **IpProtocol** of each DNAT entry must be unique. You cannot forward packets from the same source IP address, port, and protocol to multiple destination ECS instances.
       * - The combination of **InternalIp**, **InternalPort**, and **IpProtocol** of each DNAT entry must also be unique.
       * - The IP addresses specified by **ExternalIp** and **InternalIp** in a DNAT entry cannot be the same. If your business requires the two IP addresses to be the same, contact your account manager.
       * - A maximum of 100 DNAT entries can be added to a DNAT table.
       * - An IP address configured with IP mapping in a DNAT entry (an EIP used by an Internet NAT gateway or a NAT IP address used by a VPC NAT gateway) cannot be used by other DNAT entries or SNAT entries.
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a DNAT entry to a DNAT table by calling the CreateForwardEntry operation.
       *
       * @description Each DNAT entry consists of five parts: **ExternalIp**, **ExternalPort**, **IpProtocol**, **InternalIp**, and **InternalPort**. After you add a DNAT entry, the NAT gateway forwards packets of the specified protocol received on **ExternalIp:ExternalPort** to **InternalIp:InternalPort** and returns responses along the same path.
       * Note the following when you call this operation to add a DNAT entry: 
       *      
       * - The **CreateForwardEntry** operation is asynchronous. After you send a request, the system returns a DNAT entry ID, but the DNAT entry is not yet added. The system adds the entry in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being added. In this state, you can only perform query operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry is added.
       *  
       * - The combination of **ExternalIp**, **ExternalPort**, and **IpProtocol** of each DNAT entry must be unique. You cannot forward packets from the same source IP address, port, and protocol to multiple destination ECS instances.
       * - The combination of **InternalIp**, **InternalPort**, and **IpProtocol** of each DNAT entry must also be unique.
       * - The IP addresses specified by **ExternalIp** and **InternalIp** in a DNAT entry cannot be the same. If your business requires the two IP addresses to be the same, contact your account manager.
       * - A maximum of 100 DNAT entries can be added to a DNAT table.
       * - An IP address configured with IP mapping in a DNAT entry (an EIP used by an Internet NAT gateway or a NAT IP address used by a VPC NAT gateway) cannot be used by other DNAT entries or SNAT entries.
       *
       * @param request CreateForwardEntryRequest
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntry(const Models::CreateForwardEntryRequest &request);

      /**
       * @summary Adds a FULLNAT entry to a FULLNAT table by calling the CreateFullNatEntry operation.
       *
       * @description **CreateFullNatEntry** is an asynchronous operation. After you send a request, the system returns a FULLNAT entry, but the FULLNAT entry has not been added yet. The addition task is still running in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the status of the FULLNAT entry:
       * - If the FULLNAT entry is in the **Creating** state, the FULLNAT entry is being added. In this state, you can only perform query operations and cannot perform other operations.
       * - If the FULLNAT entry is in the **Available** state, the FULLNAT entry has been added.
       *
       * @param request CreateFullNatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFullNatEntryResponse
       */
      Models::CreateFullNatEntryResponse createFullNatEntryWithOptions(const Models::CreateFullNatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a FULLNAT entry to a FULLNAT table by calling the CreateFullNatEntry operation.
       *
       * @description **CreateFullNatEntry** is an asynchronous operation. After you send a request, the system returns a FULLNAT entry, but the FULLNAT entry has not been added yet. The addition task is still running in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the status of the FULLNAT entry:
       * - If the FULLNAT entry is in the **Creating** state, the FULLNAT entry is being added. In this state, you can only perform query operations and cannot perform other operations.
       * - If the FULLNAT entry is in the **Available** state, the FULLNAT entry has been added.
       *
       * @param request CreateFullNatEntryRequest
       * @return CreateFullNatEntryResponse
       */
      Models::CreateFullNatEntryResponse createFullNatEntry(const Models::CreateFullNatEntryRequest &request);

      /**
       * @deprecated OpenAPI CreateGlobalAccelerationInstance is deprecated
       *
       * @summary Creates an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description ## Operation description
       * This operation supports only the creation of pay-as-you-go Alibaba Cloud Global Accelerator (GA) instances.
       *
       * @param request CreateGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalAccelerationInstanceResponse
       */
      Models::CreateGlobalAccelerationInstanceResponse createGlobalAccelerationInstanceWithOptions(const Models::CreateGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateGlobalAccelerationInstance is deprecated
       *
       * @summary Creates an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description ## Operation description
       * This operation supports only the creation of pay-as-you-go Alibaba Cloud Global Accelerator (GA) instances.
       *
       * @param request CreateGlobalAccelerationInstanceRequest
       * @return CreateGlobalAccelerationInstanceResponse
       */
      Models::CreateGlobalAccelerationInstanceResponse createGlobalAccelerationInstance(const Models::CreateGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Creates a high-availability virtual IP address (HAVIP).
       *
       * @description **CreateHaVip** is an asynchronous operation. After you call this operation, the system returns the HAVIP ID, but the HAVIP is not yet created. The creation task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the creation status of the HAVIP:
       * - If the HAVIP is in the **Creating** state, the HAVIP is being created.
       * - If the HAVIP is in the **Available** state, the HAVIP is created.
       *
       * @param request CreateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVipWithOptions(const Models::CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a high-availability virtual IP address (HAVIP).
       *
       * @description **CreateHaVip** is an asynchronous operation. After you call this operation, the system returns the HAVIP ID, but the HAVIP is not yet created. The creation task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the creation status of the HAVIP:
       * - If the HAVIP is in the **Creating** state, the HAVIP is being created.
       * - If the HAVIP is in the **Available** state, the HAVIP is created.
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates Express Connect circuits in zone redundancy mode to ensure service stability through multi-line access to Alibaba Cloud and to prevent service disruptions caused by single-line failures through multi-line disaster recovery.
       *
       * @description When you purchase ports, you can select one of the following three combination types to provide disaster recovery capabilities for your business or workloads.
       * - Maximum disaster recovery: You apply for resources in two access points and establish four independent Express Connect circuit connections. The SLA availability for maximum disaster recovery is no less than 99.99%.
       * - Enhanced disaster recovery: You apply for resources in two access points and establish two independent Express Connect circuit connections. The SLA availability for enhanced disaster recovery is no less than 99.95%.
       * - Development and testing: You apply for resources in one access point and establish two independent Express Connect circuit connections.
       *
       * @param request CreateHighReliablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHighReliablePhysicalConnectionResponse
       */
      Models::CreateHighReliablePhysicalConnectionResponse createHighReliablePhysicalConnectionWithOptions(const Models::CreateHighReliablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates Express Connect circuits in zone redundancy mode to ensure service stability through multi-line access to Alibaba Cloud and to prevent service disruptions caused by single-line failures through multi-line disaster recovery.
       *
       * @description When you purchase ports, you can select one of the following three combination types to provide disaster recovery capabilities for your business or workloads.
       * - Maximum disaster recovery: You apply for resources in two access points and establish four independent Express Connect circuit connections. The SLA availability for maximum disaster recovery is no less than 99.99%.
       * - Enhanced disaster recovery: You apply for resources in two access points and establish two independent Express Connect circuit connections. The SLA availability for enhanced disaster recovery is no less than 99.95%.
       * - Development and testing: You apply for resources in one access point and establish two independent Express Connect circuit connections.
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
       * @summary Creates an access control policy group.
       *
       * @param request CreateIPv6TranslatorAclListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIPv6TranslatorAclListResponse
       */
      Models::CreateIPv6TranslatorAclListResponse createIPv6TranslatorAclListWithOptions(const Models::CreateIPv6TranslatorAclListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorAclList is deprecated
       *
       * @summary Creates an access control policy group.
       *
       * @param request CreateIPv6TranslatorAclListRequest
       * @return CreateIPv6TranslatorAclListResponse
       */
      Models::CreateIPv6TranslatorAclListResponse createIPv6TranslatorAclList(const Models::CreateIPv6TranslatorAclListRequest &request);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorEntry is deprecated
       *
       * @summary Adds an IPv6 translation mapping entry to a specified IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIPv6TranslatorEntryResponse
       */
      Models::CreateIPv6TranslatorEntryResponse createIPv6TranslatorEntryWithOptions(const Models::CreateIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateIPv6TranslatorEntry is deprecated
       *
       * @summary Adds an IPv6 translation mapping entry to a specified IPv6 Translation Service instance.
       *
       * @param request CreateIPv6TranslatorEntryRequest
       * @return CreateIPv6TranslatorEntryResponse
       */
      Models::CreateIPv6TranslatorEntryResponse createIPv6TranslatorEntry(const Models::CreateIPv6TranslatorEntryRequest &request);

      /**
       * @summary Creates an IPsec server by calling the CreateIpsecServer operation.
       *
       * @description - Before you create an IPsec server, create a VPN gateway and make sure that the SSL-VPN feature is enabled for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * - Before you create an IPsec server, make sure that no IPsec-VPN connections exist on the VPN gateway instance. For more information, see [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       * - **CreateIpsecServer** is an asynchronous operation. After you send a request, the system returns an instance ID but the IPsec server is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the IPsec server:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server is being created.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server is created.
       * - **CreateIpsecServer** does not support concurrent creation of IPsec servers on the same VPN gateway.
       *
       * @param request CreateIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpsecServerResponse
       */
      Models::CreateIpsecServerResponse createIpsecServerWithOptions(const Models::CreateIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec server by calling the CreateIpsecServer operation.
       *
       * @description - Before you create an IPsec server, create a VPN gateway and make sure that the SSL-VPN feature is enabled for the VPN gateway. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * - Before you create an IPsec server, make sure that no IPsec-VPN connections exist on the VPN gateway instance. For more information, see [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       * - **CreateIpsecServer** is an asynchronous operation. After you send a request, the system returns an instance ID but the IPsec server is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the IPsec server:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server is being created.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server is created.
       * - **CreateIpsecServer** does not support concurrent creation of IPsec servers on the same VPN gateway.
       *
       * @param request CreateIpsecServerRequest
       * @return CreateIpsecServerResponse
       */
      Models::CreateIpsecServerResponse createIpsecServer(const Models::CreateIpsecServerRequest &request);

      /**
       * @summary Creates an IPv4 gateway.
       *
       * @description - **CreateIpv4Gateway** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the IPv4 gateway is not yet created. The creation task is still running in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the creation status of the IPv4 gateway:
       *     - If the IPv4 gateway is in the **Creating** state, the IPv4 gateway is being created.
       *     - If the IPv4 gateway is in the **Created** state, the IPv4 gateway is created.
       * - You cannot call **CreateIpv4Gateway** to concurrently create IPv4 gateways in the same VPC.
       *
       * @param request CreateIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv4GatewayResponse
       */
      Models::CreateIpv4GatewayResponse createIpv4GatewayWithOptions(const Models::CreateIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPv4 gateway.
       *
       * @description - **CreateIpv4Gateway** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the IPv4 gateway is not yet created. The creation task is still running in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the creation status of the IPv4 gateway:
       *     - If the IPv4 gateway is in the **Creating** state, the IPv4 gateway is being created.
       *     - If the IPv4 gateway is in the **Created** state, the IPv4 gateway is created.
       * - You cannot call **CreateIpv4Gateway** to concurrently create IPv4 gateways in the same VPC.
       *
       * @param request CreateIpv4GatewayRequest
       * @return CreateIpv4GatewayResponse
       */
      Models::CreateIpv4GatewayResponse createIpv4Gateway(const Models::CreateIpv4GatewayRequest &request);

      /**
       * @summary Creates an IPv6 egress-only rule for an IPv6 address by calling CreateIpv6EgressOnlyRule. You can create an egress-only rule to allow ECS instances in a VPC with an IPv6 CIDR block to proactively access IPv6 endpoints on the client side, while preventing IPv6 endpoints on the client side from accessing ECS instances in the VPC over the Internet.
       *
       * @description - **CreateIpv6EgressOnlyRule** is an asynchronous operation. After you send a request, the system returns an instance ID but the IPv6 egress-only rule is not yet created. The creation task is still running in the background. You can call [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the creation status of the IPv6 egress-only rule:
       *     - When the IPv6 egress-only rule is in the **Creating** state, the rule is being created.
       *     - When the IPv6 egress-only rule is in the **Created** state, the rule is created.
       * - **CreateIpv6EgressOnlyRule** does not support concurrent creation of egress-only rules for the same IPv6 address.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRuleWithOptions(const Models::CreateIpv6EgressOnlyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPv6 egress-only rule for an IPv6 address by calling CreateIpv6EgressOnlyRule. You can create an egress-only rule to allow ECS instances in a VPC with an IPv6 CIDR block to proactively access IPv6 endpoints on the client side, while preventing IPv6 endpoints on the client side from accessing ECS instances in the VPC over the Internet.
       *
       * @description - **CreateIpv6EgressOnlyRule** is an asynchronous operation. After you send a request, the system returns an instance ID but the IPv6 egress-only rule is not yet created. The creation task is still running in the background. You can call [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the creation status of the IPv6 egress-only rule:
       *     - When the IPv6 egress-only rule is in the **Creating** state, the rule is being created.
       *     - When the IPv6 egress-only rule is in the **Created** state, the rule is created.
       * - **CreateIpv6EgressOnlyRule** does not support concurrent creation of egress-only rules for the same IPv6 address.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRule(const Models::CreateIpv6EgressOnlyRuleRequest &request);

      /**
       * @summary Creates an IPv6 gateway. An IPv6 gateway is used to control IPv6 network traffic for a virtual private cloud (VPC).
       *
       * @description - Before you create an IPv6 gateway, make sure that the target VPC and vSwitch have IPv6 CIDR blocks enabled. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/448582.html) to query the VPC configurations.
       * - You can create only one IPv6 gateway for each VPC.
       * - **CreateIpv6Gateway** is an asynchronous operation. After you send a request, the system returns an instance ID but enable IPv6 gateway is not yet created. The creation task is still running in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the creation status of enable IPv6 gateway:
       *     - If enable IPv6 gateway is in the **Creating** state, enable IPv6 gateway is being created.
       *     - If enable IPv6 gateway is in the **Created** state, enable IPv6 gateway is created.
       * - **CreateIpv6Gateway** does not support concurrent creation of IPv6 gateways in the same VPC.
       *
       * @param request CreateIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6GatewayWithOptions(const Models::CreateIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPv6 gateway. An IPv6 gateway is used to control IPv6 network traffic for a virtual private cloud (VPC).
       *
       * @description - Before you create an IPv6 gateway, make sure that the target VPC and vSwitch have IPv6 CIDR blocks enabled. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/448582.html) to query the VPC configurations.
       * - You can create only one IPv6 gateway for each VPC.
       * - **CreateIpv6Gateway** is an asynchronous operation. After you send a request, the system returns an instance ID but enable IPv6 gateway is not yet created. The creation task is still running in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the creation status of enable IPv6 gateway:
       *     - If enable IPv6 gateway is in the **Creating** state, enable IPv6 gateway is being created.
       *     - If enable IPv6 gateway is in the **Created** state, enable IPv6 gateway is created.
       * - **CreateIpv6Gateway** does not support concurrent creation of IPv6 gateways in the same VPC.
       *
       * @param request CreateIpv6GatewayRequest
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6Gateway(const Models::CreateIpv6GatewayRequest &request);

      /**
       * @summary Creates an enhanced Internet NAT gateway or a VPC NAT gateway by calling the CreateNatGateway operation.
       *
       * @description Before you call this operation, take note of the following information:
       * - When you create a NAT gateway for the first time, the system performs automatic creation of a service-linked role named AliyunServiceRoleForNatgw and associates the access policy named AliyunServiceRolePolicyForNatgw with the role. This grants the NAT gateway permissions to access other cloud resources. For more information, see [Service-linked role](https://help.aliyun.com/document_detail/174251.html).
       * - After an enhanced Internet NAT gateway is created, the system automatically adds a route to the VPC route table with the destination CIDR block 0.0.0.0/0 and the next hop set to the NAT gateway. This route directs traffic to the NAT gateway.
       * - The **CreateNatGateway** operation is asynchronous. After you call this operation, the system returns the instance ID of a NAT gateway (Internet NAT gateway or VPC NAT gateway), but the NAT gateway instance is not yet created. The creation task is still running in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the NAT gateway.
       *     - If the NAT gateway is in the **Creating** state, the NAT gateway is being created. In this state, you can only perform query operations.
       *     - If the NAT gateway is in the **Available** state, the NAT gateway is created.
       *  
       *  It takes 1 to 3 minutes to create a NAT gateway.
       *
       * @param tmpReq CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enhanced Internet NAT gateway or a VPC NAT gateway by calling the CreateNatGateway operation.
       *
       * @description Before you call this operation, take note of the following information:
       * - When you create a NAT gateway for the first time, the system performs automatic creation of a service-linked role named AliyunServiceRoleForNatgw and associates the access policy named AliyunServiceRolePolicyForNatgw with the role. This grants the NAT gateway permissions to access other cloud resources. For more information, see [Service-linked role](https://help.aliyun.com/document_detail/174251.html).
       * - After an enhanced Internet NAT gateway is created, the system automatically adds a route to the VPC route table with the destination CIDR block 0.0.0.0/0 and the next hop set to the NAT gateway. This route directs traffic to the NAT gateway.
       * - The **CreateNatGateway** operation is asynchronous. After you call this operation, the system returns the instance ID of a NAT gateway (Internet NAT gateway or VPC NAT gateway), but the NAT gateway instance is not yet created. The creation task is still running in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the NAT gateway.
       *     - If the NAT gateway is in the **Creating** state, the NAT gateway is being created. In this state, you can only perform query operations.
       *     - If the NAT gateway is in the **Available** state, the NAT gateway is created.
       *  
       *  It takes 1 to 3 minutes to create a NAT gateway.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a NAT IP address for a VPC NAT gateway instance.
       *
       * @description **CreateNatIp** is an asynchronous operation. After you call this operation, the system returns a NAT IP address, but the NAT IP address is not yet created. The creation task is still running in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/287000.html) to query the status of the NAT IP address:
       * - If the NAT IP address is in the **Creating** state, the NAT IP address is being created. In this state, you can only perform query operations.
       * - If the NAT IP address is in the **Available** state, the NAT IP address is created.
       * The **CreateNatIp** operation does not support concurrent creation of NAT IP addresses within the same NAT gateway.
       *
       * @param request CreateNatIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatIpResponse
       */
      Models::CreateNatIpResponse createNatIpWithOptions(const Models::CreateNatIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT IP address for a VPC NAT gateway instance.
       *
       * @description **CreateNatIp** is an asynchronous operation. After you call this operation, the system returns a NAT IP address, but the NAT IP address is not yet created. The creation task is still running in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/287000.html) to query the status of the NAT IP address:
       * - If the NAT IP address is in the **Creating** state, the NAT IP address is being created. In this state, you can only perform query operations.
       * - If the NAT IP address is in the **Available** state, the NAT IP address is created.
       * The **CreateNatIp** operation does not support concurrent creation of NAT IP addresses within the same NAT gateway.
       *
       * @param request CreateNatIpRequest
       * @return CreateNatIpResponse
       */
      Models::CreateNatIpResponse createNatIp(const Models::CreateNatIpRequest &request);

      /**
       * @summary Creates a NAT CIDR block for a VPC NAT gateway instance.
       *
       * @description The **CreateNatIpCidr** operation does not support concurrent creation of NAT IP CIDR blocks within the same NAT gateway.
       *
       * @param request CreateNatIpCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatIpCidrResponse
       */
      Models::CreateNatIpCidrResponse createNatIpCidrWithOptions(const Models::CreateNatIpCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT CIDR block for a VPC NAT gateway instance.
       *
       * @description The **CreateNatIpCidr** operation does not support concurrent creation of NAT IP CIDR blocks within the same NAT gateway.
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
       * @summary Calls the CreatePhysicalConnection operation to apply for an Express Connect circuit.
       *
       * @description You can apply for a dedicated Express Connect circuit or apply for a shared Express Connect circuit for a tenant. After the application is complete, the Express Connect circuit enters the **Initial** state. Contact the carrier to start construction. 
       *     
       * When you call this operation, note the following items: 
       *       
       * - When you apply for an Express Connect circuit, the number of Express Connect circuits that are not in the **Enabled** state cannot exceed 5.  
       * - If your account has an Express Connect circuit with an overdue payment, you cannot apply for a new Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnectionWithOptions(const Models::CreatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreatePhysicalConnection operation to apply for an Express Connect circuit.
       *
       * @description You can apply for a dedicated Express Connect circuit or apply for a shared Express Connect circuit for a tenant. After the application is complete, the Express Connect circuit enters the **Initial** state. Contact the carrier to start construction. 
       *     
       * When you call this operation, note the following items: 
       *       
       * - When you apply for an Express Connect circuit, the number of Express Connect circuits that are not in the **Enabled** state cannot exceed 5.  
       * - If your account has an Express Connect circuit with an overdue payment, you cannot apply for a new Express Connect circuit.
       *
       * @param request CreatePhysicalConnectionRequest
       * @return CreatePhysicalConnectionResponse
       */
      Models::CreatePhysicalConnectionResponse createPhysicalConnection(const Models::CreatePhysicalConnectionRequest &request);

      /**
       * @summary Creates an order for resource occupation fees by calling the CreatePhysicalConnectionOccupancyOrder operation.
       *
       * @description > Only Express Connect circuits in the Waiting for Payment (**Complete**) state support this operation.
       *
       * @param request CreatePhysicalConnectionOccupancyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionOccupancyOrderResponse
       */
      Models::CreatePhysicalConnectionOccupancyOrderResponse createPhysicalConnectionOccupancyOrderWithOptions(const Models::CreatePhysicalConnectionOccupancyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order for resource occupation fees by calling the CreatePhysicalConnectionOccupancyOrder operation.
       *
       * @description > Only Express Connect circuits in the Waiting for Payment (**Complete**) state support this operation.
       *
       * @param request CreatePhysicalConnectionOccupancyOrderRequest
       * @return CreatePhysicalConnectionOccupancyOrderResponse
       */
      Models::CreatePhysicalConnectionOccupancyOrderResponse createPhysicalConnectionOccupancyOrder(const Models::CreatePhysicalConnectionOccupancyOrderRequest &request);

      /**
       * @summary Creates an order for the initial installation fee of an Express Connect circuit port by calling CreatePhysicalConnectionSetupOrder.
       *
       * @param request CreatePhysicalConnectionSetupOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionSetupOrderResponse
       */
      Models::CreatePhysicalConnectionSetupOrderResponse createPhysicalConnectionSetupOrderWithOptions(const Models::CreatePhysicalConnectionSetupOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order for the initial installation fee of an Express Connect circuit port by calling CreatePhysicalConnectionSetupOrder.
       *
       * @param request CreatePhysicalConnectionSetupOrderRequest
       * @return CreatePhysicalConnectionSetupOrderResponse
       */
      Models::CreatePhysicalConnectionSetupOrderResponse createPhysicalConnectionSetupOrder(const Models::CreatePhysicalConnectionSetupOrderRequest &request);

      /**
       * @summary Creates an IP address pool.
       *
       * @description The IP address pool feature is not available by default. To use this feature, apply for the **IP address pool feature** privilege quota in Quota Center. For more information, see [Increase a quota in Quota Center](https://help.aliyun.com/document_detail/108213.html).
       *
       * @param request CreatePublicIpAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublicIpAddressPoolResponse
       */
      Models::CreatePublicIpAddressPoolResponse createPublicIpAddressPoolWithOptions(const Models::CreatePublicIpAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address pool.
       *
       * @description The IP address pool feature is not available by default. To use this feature, apply for the **IP address pool feature** privilege quota in Quota Center. For more information, see [Increase a quota in Quota Center](https://help.aliyun.com/document_detail/108213.html).
       *
       * @param request CreatePublicIpAddressPoolRequest
       * @return CreatePublicIpAddressPoolResponse
       */
      Models::CreatePublicIpAddressPoolResponse createPublicIpAddressPool(const Models::CreatePublicIpAddressPoolRequest &request);

      /**
       * @summary Creates custom route entries in a route table of a VPC vRouter in a batch.
       *
       * @description - **CreateRouteEntries** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route has not been created yet. The system continues to run the task in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the creation status of the route:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route is created.
       * - **CreateRouteEntries** does not support concurrent batch creation of custom route entries in the same VPC.
       * **Before you add custom route entries to a route table of a VPC vRouter, take note of the following items:**
       * - A route table can contain a maximum of 200 custom route entries.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be the same as, contain, or be contained by the CIDR block of a vSwitch in the VPC.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot point to or be contained by 100.64.0.0/10.
       * - The destination CIDR blocks (**DstCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DstCidrBlock**) is an IP address, the system processes it with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHop**).
       * - The next hop (**NextHop**) of a custom route entry must be in the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntriesWithOptions(const Models::CreateRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates custom route entries in a route table of a VPC vRouter in a batch.
       *
       * @description - **CreateRouteEntries** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route has not been created yet. The system continues to run the task in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the creation status of the route:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route is created.
       * - **CreateRouteEntries** does not support concurrent batch creation of custom route entries in the same VPC.
       * **Before you add custom route entries to a route table of a VPC vRouter, take note of the following items:**
       * - A route table can contain a maximum of 200 custom route entries.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot be the same as, contain, or be contained by the CIDR block of a vSwitch in the VPC.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route entry cannot point to or be contained by 100.64.0.0/10.
       * - The destination CIDR blocks (**DstCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DstCidrBlock**) is an IP address, the system processes it with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHop**).
       * - The next hop (**NextHop**) of a custom route entry must be in the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntries(const Models::CreateRouteEntriesRequest &request);

      /**
       * @summary Creates a custom route entry on a vRouter or Virtual Border Router (VBR).
       *
       * @description - **CreateRouteEntry** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route has not been created yet. The system is still running the task in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the route creation status:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route has been created.
       * - **CreateRouteEntry** does not support concurrent creation of custom route entries in the same VPC or the same VBR.
       * - **CreateRouteEntry** may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       * **When you use this operation to add a custom route entry to a route table of a vRouter, take note of the following items:**
       * > When the route to be added is a prefix list route, the route quota is calculated based on the sum of existing routes and the maximum number of entries in the prefix list route. The sum cannot exceed the route quota.
       * - A route table can contain up to 200 custom route entries.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as a vSwitch CIDR block in the VPC. It can contain a vSwitch CIDR block but cannot be contained by a vSwitch CIDR block.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as this CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).
       * - The next hop (**NextHopId**) of a custom route entry must be in the same VPC as the route table.
       * - You can configure ECMP routing by using the **NextHopList** parameter settings:
       *   * To add a non-ECMP custom route, specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.   
       *  
       *   * To add an ECMP route, specify the **DestinationCidrBlock** and **NextHopList** parameters. Do not specify the **NextHopType** or **NextHopId** parameter.
       * **When you use this operation to add a custom route entry to a route table of a VBR, take note of the following items:**
       * - A route table can contain up to 200 custom route entries.  
       *        
       * - The **NextHopList** parameter is not supported.   
       *        
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as this CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>
       *       
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.   
       *        
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.   
       *       
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).  
       *       
       * - The next hop (**NextHopId**) of a custom route entry must be a vRouter interface associated with the VBR.  
       *        
       * - You can create route entries on a VBR only when the VBR is in the **Active** state, the corresponding Express Connect circuit is in the **Enabled** state, and the circuit is not locked due to overdue payment.  
       *       
       * - Only Normal (non-ECMP) routes are supported. Specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.
       *
       * @param request CreateRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntryWithOptions(const Models::CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route entry on a vRouter or Virtual Border Router (VBR).
       *
       * @description - **CreateRouteEntry** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route has not been created yet. The system is still running the task in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the route creation status:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route has been created.
       * - **CreateRouteEntry** does not support concurrent creation of custom route entries in the same VPC or the same VBR.
       * - **CreateRouteEntry** may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       * **When you use this operation to add a custom route entry to a route table of a vRouter, take note of the following items:**
       * > When the route to be added is a prefix list route, the route quota is calculated based on the sum of existing routes and the maximum number of entries in the prefix list route. The sum cannot exceed the route quota.
       * - A route table can contain up to 200 custom route entries.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as a vSwitch CIDR block in the VPC. It can contain a vSwitch CIDR block but cannot be contained by a vSwitch CIDR block.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as this CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).
       * - The next hop (**NextHopId**) of a custom route entry must be in the same VPC as the route table.
       * - You can configure ECMP routing by using the **NextHopList** parameter settings:
       *   * To add a non-ECMP custom route, specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.   
       *  
       *   * To add an ECMP route, specify the **DestinationCidrBlock** and **NextHopList** parameters. Do not specify the **NextHopType** or **NextHopId** parameter.
       * **When you use this operation to add a custom route entry to a route table of a VBR, take note of the following items:**
       * - A route table can contain up to 200 custom route entries.  
       *        
       * - The **NextHopList** parameter is not supported.   
       *        
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as this CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>
       *       
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.   
       *        
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.   
       *       
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).  
       *       
       * - The next hop (**NextHopId**) of a custom route entry must be a vRouter interface associated with the VBR.  
       *        
       * - You can create route entries on a VBR only when the VBR is in the **Active** state, the corresponding Express Connect circuit is in the **Enabled** state, and the circuit is not locked due to overdue payment.  
       *       
       * - Only Normal (non-ECMP) routes are supported. Specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.
       *
       * @param request CreateRouteEntryRequest
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntry(const Models::CreateRouteEntryRequest &request);

      /**
       * @summary Creates a custom route table.
       *
       * @description - **CreateRouteTable** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the custom route table has not been created yet. The creation task is still running in the background. You can call [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) to query the creation status of the custom route table:
       *     - If the custom route table is in the **Creating** state, the custom route table is being created.
       *     - If the custom route table is in the **Available** state, the custom route table is created.
       * - **CreateRouteTable** does not support concurrent creation of custom route tables in the same VPC.
       *
       * @param request CreateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTableWithOptions(const Models::CreateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route table.
       *
       * @description - **CreateRouteTable** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the custom route table has not been created yet. The creation task is still running in the background. You can call [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) to query the creation status of the custom route table:
       *     - If the custom route table is in the **Creating** state, the custom route table is being created.
       *     - If the custom route table is in the **Available** state, the custom route table is created.
       * - **CreateRouteTable** does not support concurrent creation of custom route tables in the same VPC.
       *
       * @param request CreateRouteTableRequest
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTable(const Models::CreateRouteTableRequest &request);

      /**
       * @summary Creates a route target group instance.
       *
       * @description - **CreateRouteTargetGroup** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the routing target group instance is not yet created. The creation node continues in the background. You can invoke **ListRouteTargetGroup** to query the creation status of the routing target group:
       *     - If the routing target group is in the **Pending** state, the routing target group is being created.
       *     - If the routing target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the routing target group is created.
       * - **Active/standby pattern**: When you create a routing target group, you must configure primary and secondary instances that are in different zones and of the same type.
       * - **Primary instance**: The weight is 100. The primary instance handles all traffic under normal conditions and takes effect when health checks pass.
       * - **Secondary instance**: The weight is 0. The secondary instance takes over traffic when the primary instance fails, serving as disaster recovery and backup.
       *
       * @param request CreateRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTargetGroupResponse
       */
      Models::CreateRouteTargetGroupResponse createRouteTargetGroupWithOptions(const Models::CreateRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route target group instance.
       *
       * @description - **CreateRouteTargetGroup** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the routing target group instance is not yet created. The creation node continues in the background. You can invoke **ListRouteTargetGroup** to query the creation status of the routing target group:
       *     - If the routing target group is in the **Pending** state, the routing target group is being created.
       *     - If the routing target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the routing target group is created.
       * - **Active/standby pattern**: When you create a routing target group, you must configure primary and secondary instances that are in different zones and of the same type.
       * - **Primary instance**: The weight is 100. The primary instance handles all traffic under normal conditions and takes effect when health checks pass.
       * - **Secondary instance**: The weight is 0. The secondary instance takes over traffic when the primary instance fails, serving as disaster recovery and backup.
       *
       * @param request CreateRouteTargetGroupRequest
       * @return CreateRouteTargetGroupResponse
       */
      Models::CreateRouteTargetGroupResponse createRouteTargetGroup(const Models::CreateRouteTargetGroupRequest &request);

      /**
       * @summary Creates a router interface.
       *
       * @description When you call this operation to create a router interface, take note of the following items: 
       * - A maximum of one pair of interconnected router interfaces can exist between any two routers.  
       * - A maximum of five router interfaces can be created on a router.  
       * - If your account has router interfaces with overdue payments, you cannot create router interfaces.  
       * - Route entries in the same route table cannot have the same destination CIDR block (DestinationCidrBlock).   
       * - A Virtual Border Router (VBR) can only be the requester and must be in the activated state.  
       *       
       * - You can use this operation to create subscription and pay-as-you-go router interfaces.
       *
       * @param request CreateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterfaceWithOptions(const Models::CreateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a router interface.
       *
       * @description When you call this operation to create a router interface, take note of the following items: 
       * - A maximum of one pair of interconnected router interfaces can exist between any two routers.  
       * - A maximum of five router interfaces can be created on a router.  
       * - If your account has router interfaces with overdue payments, you cannot create router interfaces.  
       * - Route entries in the same route table cannot have the same destination CIDR block (DestinationCidrBlock).   
       * - A Virtual Border Router (VBR) can only be the requester and must be in the activated state.  
       *       
       * - You can use this operation to create subscription and pay-as-you-go router interfaces.
       *
       * @param request CreateRouterInterfaceRequest
       * @return CreateRouterInterfaceResponse
       */
      Models::CreateRouterInterfaceResponse createRouterInterface(const Models::CreateRouterInterfaceRequest &request);

      /**
       * @summary Calls the CreateSnatEntry operation to add an SNAT entry to an SNAT table.
       *
       * @description This operation can add SNAT entries for enhanced Internet NAT gateways and VPC NAT gateways. The term **NAT gateway** in this topic refers to both types without distinction.
       * Before you call this operation to add an SNAT entry, take note of the following information:
       * - **CreateSnatEntry** is an asynchronous operation. After you call this operation, the system returns an SNAT entry ID but the SNAT entry is not yet added. The system adds the SNAT entry in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       *     - If the SNAT entry is in the **Pending** state, the SNAT entry is being added. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the SNAT entry is in the **Available** state, the SNAT entry is added.
       * - The vSwitch and ECS instance specified in the SNAT entry must be in the VPC to which the NAT gateway belongs.
       * - Each vSwitch and ECS instance can belong to only one SNAT entry.
       *   
       * - If a high-availability virtual IP address instance exists in the vSwitch, you cannot add an SNAT entry.
       *
       * @param request CreateSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntryWithOptions(const Models::CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateSnatEntry operation to add an SNAT entry to an SNAT table.
       *
       * @description This operation can add SNAT entries for enhanced Internet NAT gateways and VPC NAT gateways. The term **NAT gateway** in this topic refers to both types without distinction.
       * Before you call this operation to add an SNAT entry, take note of the following information:
       * - **CreateSnatEntry** is an asynchronous operation. After you call this operation, the system returns an SNAT entry ID but the SNAT entry is not yet added. The system adds the SNAT entry in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       *     - If the SNAT entry is in the **Pending** state, the SNAT entry is being added. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the SNAT entry is in the **Available** state, the SNAT entry is added.
       * - The vSwitch and ECS instance specified in the SNAT entry must be in the VPC to which the NAT gateway belongs.
       * - Each vSwitch and ECS instance can belong to only one SNAT entry.
       *   
       * - If a high-availability virtual IP address instance exists in the vSwitch, you cannot add an SNAT entry.
       *
       * @param request CreateSnatEntryRequest
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntry(const Models::CreateSnatEntryRequest &request);

      /**
       * @summary Calls the CreateSslVpnClientCert operation to create an SSL client certificate.
       *
       * @description Before you create an SSL client certificate, make sure that an SSL server has been created for the VPN gateway instance. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCertWithOptions(const Models::CreateSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateSslVpnClientCert operation to create an SSL client certificate.
       *
       * @description Before you create an SSL client certificate, make sure that an SSL server has been created for the VPN gateway instance. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCert(const Models::CreateSslVpnClientCertRequest &request);

      /**
       * @summary Creates an SSL-VPN server.
       *
       * @description - **CreateSslVpnServer** is an asynchronous operation. After you call this operation, the system returns an instance ID but the SSL-VPN server is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the SSL-VPN server:
       *   - If the VPN gateway instance is in the **updating** state, the SSL-VPN server is being created.
       *   - If the VPN gateway instance is in the **active** state, the SSL-VPN server is created.
       * - **CreateSslVpnServer** does not support concurrent creation of SSL-VPN servers under the same VPN gateway.
       * ### Before you begin
       * - You have created a VPN gateway with the SSL-VPN feature enabled. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * - If you want to enable two-factor authentication for the SSL server, make sure that the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       *
       * @param request CreateSslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSslVpnServerResponse
       */
      Models::CreateSslVpnServerResponse createSslVpnServerWithOptions(const Models::CreateSslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSL-VPN server.
       *
       * @description - **CreateSslVpnServer** is an asynchronous operation. After you call this operation, the system returns an instance ID but the SSL-VPN server is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the SSL-VPN server:
       *   - If the VPN gateway instance is in the **updating** state, the SSL-VPN server is being created.
       *   - If the VPN gateway instance is in the **active** state, the SSL-VPN server is created.
       * - **CreateSslVpnServer** does not support concurrent creation of SSL-VPN servers under the same VPN gateway.
       * ### Before you begin
       * - You have created a VPN gateway with the SSL-VPN feature enabled. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * - If you want to enable two-factor authentication for the SSL server, make sure that the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       *
       * @param request CreateSslVpnServerRequest
       * @return CreateSslVpnServerResponse
       */
      Models::CreateSslVpnServerResponse createSslVpnServer(const Models::CreateSslVpnServerRequest &request);

      /**
       * @summary Invokes the CreateTrafficMirrorFilter operation to create a traffic mirror filter.
       *
       * @description **CreateTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns an instance ID but the traffic mirror filter is not yet created. The creation task is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the creation status of the traffic mirror filter:
       * - If the traffic mirror filter is in the **Creating** state, the traffic mirror filter is being created.
       * - If the traffic mirror filter is in the **Created** state, the traffic mirror filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilterWithOptions(const Models::CreateTrafficMirrorFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateTrafficMirrorFilter operation to create a traffic mirror filter.
       *
       * @description **CreateTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns an instance ID but the traffic mirror filter is not yet created. The creation task is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the creation status of the traffic mirror filter:
       * - If the traffic mirror filter is in the **Creating** state, the traffic mirror filter is being created.
       * - If the traffic mirror filter is in the **Created** state, the traffic mirror filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilter(const Models::CreateTrafficMirrorFilterRequest &request);

      /**
       * @summary Invokes the CreateTrafficMirrorFilterRules operation to create inbound or outbound rules for a traffic mirror filter.
       *
       * @description - **CreateTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns an instance ID but the inbound or outbound traffic mirroring filter rule is not yet created. The creation node is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the creation status of the inbound or outbound traffic mirroring filter rule:
       *     - If the inbound or outbound traffic mirroring filter rule is in the **Creating** state, the rule is being created.
       *     - If the inbound or outbound traffic mirroring filter rule is in the **Created** state, the rule is created.
       * - **CreateTrafficMirrorFilterRules** does not support concurrent creation of inbound or outbound traffic mirroring filter rules for the same traffic mirror filter.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRulesWithOptions(const Models::CreateTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateTrafficMirrorFilterRules operation to create inbound or outbound rules for a traffic mirror filter.
       *
       * @description - **CreateTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns an instance ID but the inbound or outbound traffic mirroring filter rule is not yet created. The creation node is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the creation status of the inbound or outbound traffic mirroring filter rule:
       *     - If the inbound or outbound traffic mirroring filter rule is in the **Creating** state, the rule is being created.
       *     - If the inbound or outbound traffic mirroring filter rule is in the **Created** state, the rule is created.
       * - **CreateTrafficMirrorFilterRules** does not support concurrent creation of inbound or outbound traffic mirroring filter rules for the same traffic mirror filter.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRules(const Models::CreateTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Creates a traffic mirror session by calling CreateTrafficMirrorSession.
       *
       * @description **CreateTrafficMirrorSession** is an asynchronous operation. After you send a request, the system returns an instance ID while the traffic mirror session is still being created in the background. You can invoke [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the creation status of the traffic mirror session:
       * - If the traffic mirror session is in the **Creating** state, the traffic mirror session is being created.
       * - If the traffic mirror session is in the **Created** state, the traffic mirror session is created.
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSessionWithOptions(const Models::CreateTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic mirror session by calling CreateTrafficMirrorSession.
       *
       * @description **CreateTrafficMirrorSession** is an asynchronous operation. After you send a request, the system returns an instance ID while the traffic mirror session is still being created in the background. You can invoke [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the creation status of the traffic mirror session:
       * - If the traffic mirror session is in the **Creating** state, the traffic mirror session is being created.
       * - If the traffic mirror session is in the **Created** state, the traffic mirror session is created.
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSession(const Models::CreateTrafficMirrorSessionRequest &request);

      /**
       * @summary Creates a vSwitch.
       *
       * @description Before you begin:
       * - The number of vSwitches in each VPC cannot exceed 150.
       * - The first and last three IP addresses of each vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses of 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - A cloud service instance can belong to only one vSwitch.
       * - vSwitches do not support multicast or broadcast.
       * - After a vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateVSwitch** operation is asynchronous. After you send a request, the system returns an instance ID, but the vSwitch is not yet created. The background node is still in progress. You can invoke [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the vSwitch is being configured.
       *     - If the vSwitch is in the **Available** state, the vSwitch is active.
       * - The **CreateVSwitch** operation does not support concurrent creation of vSwitches in the same VPC.
       * - The **CreateVSwitch** operation does not support creating vSwitches with the CIDR block 100.64.0.0/10 or its subnets.
       *
       * @param request CreateVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitchWithOptions(const Models::CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vSwitch.
       *
       * @description Before you begin:
       * - The number of vSwitches in each VPC cannot exceed 150.
       * - The first and last three IP addresses of each vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses of 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - A cloud service instance can belong to only one vSwitch.
       * - vSwitches do not support multicast or broadcast.
       * - After a vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateVSwitch** operation is asynchronous. After you send a request, the system returns an instance ID, but the vSwitch is not yet created. The background node is still in progress. You can invoke [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the vSwitch is being configured.
       *     - If the vSwitch is in the **Available** state, the vSwitch is active.
       * - The **CreateVSwitch** operation does not support concurrent creation of vSwitches in the same VPC.
       * - The **CreateVSwitch** operation does not support creating vSwitches with the CIDR block 100.64.0.0/10 or its subnets.
       *
       * @param request CreateVSwitchRequest
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitch(const Models::CreateVSwitchRequest &request);

      /**
       * @summary Creates a reserved CIDR block for a vSwitch.
       *
       * @description When you invoke this operation to create a reserved CIDR block for a vSwitch, take note of the following items:
       * - The maximum number of reserved IPv4 and IPv6 CIDR blocks in a VPC is 100 each.
       * - A reserved CIDR block cannot contain the system reserved IP addresses of the vSwitch to which it belongs.
       *     - IPv4 CIDR block: The first and last three IP addresses of the vSwitch are system reserved IP addresses.
       *     - IPv6 CIDR block: The first and last nine IP addresses of the vSwitch are system reserved IP addresses.
       * - The **CreateVSwitchCidrReservation** operation is asynchronous. After you send a request, the system returns an instance ID, but the reserved CIDR block for a vSwitch has not been created. The system continues to run the background node. You can invoke [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the creation status of the reserved CIDR block for a vSwitch:
       *     - If the reserved CIDR block for a vSwitch is in the **Assigning** state, the reserved CIDR block for a vSwitch is being allocated.
       *     - If the reserved CIDR block for a vSwitch is in the **Assigned** state, the reserved CIDR block for a vSwitch has been allocated.
       *
       * @param request CreateVSwitchCidrReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchCidrReservationResponse
       */
      Models::CreateVSwitchCidrReservationResponse createVSwitchCidrReservationWithOptions(const Models::CreateVSwitchCidrReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reserved CIDR block for a vSwitch.
       *
       * @description When you invoke this operation to create a reserved CIDR block for a vSwitch, take note of the following items:
       * - The maximum number of reserved IPv4 and IPv6 CIDR blocks in a VPC is 100 each.
       * - A reserved CIDR block cannot contain the system reserved IP addresses of the vSwitch to which it belongs.
       *     - IPv4 CIDR block: The first and last three IP addresses of the vSwitch are system reserved IP addresses.
       *     - IPv6 CIDR block: The first and last nine IP addresses of the vSwitch are system reserved IP addresses.
       * - The **CreateVSwitchCidrReservation** operation is asynchronous. After you send a request, the system returns an instance ID, but the reserved CIDR block for a vSwitch has not been created. The system continues to run the background node. You can invoke [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the creation status of the reserved CIDR block for a vSwitch:
       *     - If the reserved CIDR block for a vSwitch is in the **Assigning** state, the reserved CIDR block for a vSwitch is being allocated.
       *     - If the reserved CIDR block for a vSwitch is in the **Assigned** state, the reserved CIDR block for a vSwitch has been allocated.
       *
       * @param request CreateVSwitchCidrReservationRequest
       * @return CreateVSwitchCidrReservationResponse
       */
      Models::CreateVSwitchCidrReservationResponse createVSwitchCidrReservation(const Models::CreateVSwitchCidrReservationRequest &request);

      /**
       * @summary Creates a VBR failover group by calling the CreateVbrHa operation.
       *
       * @param request CreateVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVbrHaResponse
       */
      Models::CreateVbrHaResponse createVbrHaWithOptions(const Models::CreateVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VBR failover group by calling the CreateVbrHa operation.
       *
       * @param request CreateVbrHaRequest
       * @return CreateVbrHaResponse
       */
      Models::CreateVbrHaResponse createVbrHa(const Models::CreateVbrHaRequest &request);

      /**
       * @summary Calls the CreateVcoRouteEntry operation to add a destination route entry to an IPsec-VPN connection.
       *
       * @description - The IPsec-VPN connection must be associated with a transit router instance. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).
       * - Adding a destination route with a destination CIDR block of 0.0.0.0/0 is not supported.
       * - Do not add a destination route with a destination CIDR block of 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such route entries cause the console to fail to display the status of the IPsec-VPN connection or cause IPsec negotiation to fail.
       * - **CreateVcoRouteEntry** is an asynchronous operation. After you send a request, the system returns an instance ID but the destination route entry is not yet created. The creation task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the creation status of the destination route entry:
       *     - If the IPsec-VPN connection is in the **updating** state, the destination route entry is being created.
       *     - If the IPsec-VPN connection is in the **attached** state, the destination route entry is created.
       * - **CreateVcoRouteEntry** does not support concurrent creation of destination route entries for the same IPsec-VPN connection.
       *
       * @param request CreateVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVcoRouteEntryResponse
       */
      Models::CreateVcoRouteEntryResponse createVcoRouteEntryWithOptions(const Models::CreateVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateVcoRouteEntry operation to add a destination route entry to an IPsec-VPN connection.
       *
       * @description - The IPsec-VPN connection must be associated with a transit router instance. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).
       * - Adding a destination route with a destination CIDR block of 0.0.0.0/0 is not supported.
       * - Do not add a destination route with a destination CIDR block of 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such route entries cause the console to fail to display the status of the IPsec-VPN connection or cause IPsec negotiation to fail.
       * - **CreateVcoRouteEntry** is an asynchronous operation. After you send a request, the system returns an instance ID but the destination route entry is not yet created. The creation task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the creation status of the destination route entry:
       *     - If the IPsec-VPN connection is in the **updating** state, the destination route entry is being created.
       *     - If the IPsec-VPN connection is in the **attached** state, the destination route entry is created.
       * - **CreateVcoRouteEntry** does not support concurrent creation of destination route entries for the same IPsec-VPN connection.
       *
       * @param request CreateVcoRouteEntryRequest
       * @return CreateVcoRouteEntryResponse
       */
      Models::CreateVcoRouteEntryResponse createVcoRouteEntry(const Models::CreateVcoRouteEntryRequest &request);

      /**
       * @summary Creates a Virtual Border Router (VBR) instance by calling the CreateVirtualBorderRouter operation.
       *
       * @description After a VBR instance is created, the VBR instance status is **active**.
       *
       * @param request CreateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouterWithOptions(const Models::CreateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Virtual Border Router (VBR) instance by calling the CreateVirtualBorderRouter operation.
       *
       * @description After a VBR instance is created, the VBR instance status is **active**.
       *
       * @param request CreateVirtualBorderRouterRequest
       * @return CreateVirtualBorderRouterResponse
       */
      Models::CreateVirtualBorderRouterResponse createVirtualBorderRouter(const Models::CreateVirtualBorderRouterRequest &request);

      /**
       * @summary Invokes the CreateVirtualPhysicalConnection operation to create shared Express Connect circuits.
       *
       * @description Before calling this operation, understand the creation process and environment requirements for shared Express Connect circuits. For more information, see [Overview of shared Express Connect circuits](https://help.aliyun.com/document_detail/146571.html) and [Partner operation guide](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnectionWithOptions(const Models::CreateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateVirtualPhysicalConnection operation to create shared Express Connect circuits.
       *
       * @description Before calling this operation, understand the creation process and environment requirements for shared Express Connect circuits. For more information, see [Overview of shared Express Connect circuits](https://help.aliyun.com/document_detail/146571.html) and [Partner operation guide](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnection(const Models::CreateVirtualPhysicalConnectionRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this operation to create a VPC, take note of the following items:
       * - A VPC can have only one primary IPv4 CIDR block. You can add IPv4 secondary CIDR blocks to expand the address space.
       * - After a VPC is created, you can expand or shrink the original IPv4 CIDR block. When you shrink the IPv4 CIDR block of a VPC, if IP addresses already in use fall outside the target CIDR block, the modification fails.
       * - Each VPC supports up to 300,000 private network IP addresses for cloud resources. This quota cannot be upgraded.
       *   
       * - After a VPC is created, a vRouter and a routing table are automatically created.
       *   
       * - Each VPC supports up to three user CIDR blocks. If multiple user CIDR blocks overlap, the CIDR block with the shorter mask takes effect. For example, between 10.0.0.0/16 and 10.0.0.0/24, 10.0.0.0/16 takes effect.
       * - **CreateVpc** is an asynchronous operation. After you send a request, the system returns an instance ID, but the VPC is not yet created. The creation task is still running in the background. You can invoke [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the VPC creation status:
       *     - If the VPC is in the **Creating** state, the VPC is being created.
       *     - If the VPC is in the **Created** state, the VPC is created.
       * - **CreateVpc** supports concurrent creation of non-default VPCs in the same region, subject to [quota](https://help.aliyun.com/document_detail/27750.html) limits.
       *
       * @param request CreateVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpcWithOptions(const Models::CreateVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this operation to create a VPC, take note of the following items:
       * - A VPC can have only one primary IPv4 CIDR block. You can add IPv4 secondary CIDR blocks to expand the address space.
       * - After a VPC is created, you can expand or shrink the original IPv4 CIDR block. When you shrink the IPv4 CIDR block of a VPC, if IP addresses already in use fall outside the target CIDR block, the modification fails.
       * - Each VPC supports up to 300,000 private network IP addresses for cloud resources. This quota cannot be upgraded.
       *   
       * - After a VPC is created, a vRouter and a routing table are automatically created.
       *   
       * - Each VPC supports up to three user CIDR blocks. If multiple user CIDR blocks overlap, the CIDR block with the shorter mask takes effect. For example, between 10.0.0.0/16 and 10.0.0.0/24, 10.0.0.0/16 takes effect.
       * - **CreateVpc** is an asynchronous operation. After you send a request, the system returns an instance ID, but the VPC is not yet created. The creation task is still running in the background. You can invoke [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the VPC creation status:
       *     - If the VPC is in the **Creating** state, the VPC is being created.
       *     - If the VPC is in the **Created** state, the VPC is created.
       * - **CreateVpc** supports concurrent creation of non-default VPCs in the same region, subject to [quota](https://help.aliyun.com/document_detail/27750.html) limits.
       *
       * @param request CreateVpcRequest
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpc(const Models::CreateVpcRequest &request);

      /**
       * @summary Creates a VPC gateway endpoint.
       *
       * @description - **CreateVpcGatewayEndpoint** is an asynchronous operation. After you send a request, the system returns an **EndpointId** but the gateway endpoint is not yet created. The creation task continues to run in the background. You can call [ListVpcGatewayEndpoints](https://help.aliyun.com/document_detail/448682.html) to query the creation status of the gateway endpoint:
       *     - If the gateway endpoint is in the **Creating** state, the gateway endpoint is being created.
       *     - If the gateway endpoint is in the **Created** state, the gateway endpoint is created.
       * - You cannot call **CreateVpcGatewayEndpoint** to concurrently create gateway endpoints for the same endpoint service.
       *
       * @param request CreateVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcGatewayEndpointResponse
       */
      Models::CreateVpcGatewayEndpointResponse createVpcGatewayEndpointWithOptions(const Models::CreateVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC gateway endpoint.
       *
       * @description - **CreateVpcGatewayEndpoint** is an asynchronous operation. After you send a request, the system returns an **EndpointId** but the gateway endpoint is not yet created. The creation task continues to run in the background. You can call [ListVpcGatewayEndpoints](https://help.aliyun.com/document_detail/448682.html) to query the creation status of the gateway endpoint:
       *     - If the gateway endpoint is in the **Creating** state, the gateway endpoint is being created.
       *     - If the gateway endpoint is in the **Created** state, the gateway endpoint is created.
       * - You cannot call **CreateVpcGatewayEndpoint** to concurrently create gateway endpoints for the same endpoint service.
       *
       * @param request CreateVpcGatewayEndpointRequest
       * @return CreateVpcGatewayEndpointResponse
       */
      Models::CreateVpcGatewayEndpointResponse createVpcGatewayEndpoint(const Models::CreateVpcGatewayEndpointRequest &request);

      /**
       * @summary Creates a prefix list.
       *
       * @description The **CreateVpcPrefixList** operation does not support concurrent creation of prefix lists within the same region.
       *
       * @param request CreateVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcPrefixListResponse
       */
      Models::CreateVpcPrefixListResponse createVpcPrefixListWithOptions(const Models::CreateVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a prefix list.
       *
       * @description The **CreateVpcPrefixList** operation does not support concurrent creation of prefix lists within the same region.
       *
       * @param request CreateVpcPrefixListRequest
       * @return CreateVpcPrefixListResponse
       */
      Models::CreateVpcPrefixListResponse createVpcPrefixList(const Models::CreateVpcPrefixListRequest &request);

      /**
       * @summary Transforms the sharing mode of shared Express Connect circuits from cross-account Virtual Border Router (VBR) routing push to cross-account shared port push.
       *
       * @description By invoking the CreateVpconnFromVbr operation, a partner can transform the sharing mode of shared Express Connect circuits used by a tenant from cross-account VBR push to cross-account shared port push. The transform procedure does not affect the tenant\\"s services.
       * Before you execute the transform:
       * The partner must notify the tenant about the service upgrade in advance and ensure that the tenant has enabled outbound traffic billing. For information about how to enable outbound traffic billing, see [Enable outbound traffic billing](https://help.aliyun.com/document_detail/274385.html).
       * After the transform is complete:
       * 1. A shared port is added to the tenant\\"s account. The tenant must invoke the [ConfirmPhysicalConnection](https://help.aliyun.com/document_detail/324198.html) operation to accept the shared port.
       * 2. After the tenant accepts the shared port, the partner must invoke the [AttachVbrToVpconn](https://help.aliyun.com/document_detail/324191.html) operation to associate the VBR instance with the tenant\\"s shared Express Connect circuits instance.
       *
       * @param request CreateVpconnFromVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpconnFromVbrResponse
       */
      Models::CreateVpconnFromVbrResponse createVpconnFromVbrWithOptions(const Models::CreateVpconnFromVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transforms the sharing mode of shared Express Connect circuits from cross-account Virtual Border Router (VBR) routing push to cross-account shared port push.
       *
       * @description By invoking the CreateVpconnFromVbr operation, a partner can transform the sharing mode of shared Express Connect circuits used by a tenant from cross-account VBR push to cross-account shared port push. The transform procedure does not affect the tenant\\"s services.
       * Before you execute the transform:
       * The partner must notify the tenant about the service upgrade in advance and ensure that the tenant has enabled outbound traffic billing. For information about how to enable outbound traffic billing, see [Enable outbound traffic billing](https://help.aliyun.com/document_detail/274385.html).
       * After the transform is complete:
       * 1. A shared port is added to the tenant\\"s account. The tenant must invoke the [ConfirmPhysicalConnection](https://help.aliyun.com/document_detail/324198.html) operation to accept the shared port.
       * 2. After the tenant accepts the shared port, the partner must invoke the [AttachVbrToVpconn](https://help.aliyun.com/document_detail/324191.html) operation to associate the VBR instance with the tenant\\"s shared Express Connect circuits instance.
       *
       * @param request CreateVpconnFromVbrRequest
       * @return CreateVpconnFromVbrResponse
       */
      Models::CreateVpconnFromVbrResponse createVpconnFromVbr(const Models::CreateVpconnFromVbrRequest &request);

      /**
       * @summary Creates an IPsec-VPN connection for bindng to a transit router instance by calling the CreateVpnAttachment operation.
       *
       * @description >Notice: 
       * - In the transit router binding scenario, IPsec-VPN connections have been upgraded to dual-tunnel mode. When you create an IPsec-VPN connection, in addition to the required request parameters, only the following dual-tunnel mode-related request parameters are supported: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**. For more information, see [Dual-tunnel IPsec-VPN connections bound to transit routers](https://help.aliyun.com/document_detail/2853535.html).
       * - An IPsec-VPN connection created by calling the `CreateVpnAttachment` operation is not bound to any resource by default. You can call the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) operation to bind the IPsec-VPN connection to a transit router instance. After the IPsec-VPN connection is bound to a transit router instance, the system allocates a gateway IP address to the IPsec-VPN connection. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) operation to view the gateway IP address.
       * ### Before you begin
       * Before you create an IPsec-VPN connection, make sure that you have created a customer gateway in the region where the IPsec-VPN connection resides. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       *         
       * If you want to add BGP configurations to the IPsec-VPN connection, make sure that an autonomous system number has been added to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachmentWithOptions(const Models::CreateVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec-VPN connection for bindng to a transit router instance by calling the CreateVpnAttachment operation.
       *
       * @description >Notice: 
       * - In the transit router binding scenario, IPsec-VPN connections have been upgraded to dual-tunnel mode. When you create an IPsec-VPN connection, in addition to the required request parameters, only the following dual-tunnel mode-related request parameters are supported: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**. For more information, see [Dual-tunnel IPsec-VPN connections bound to transit routers](https://help.aliyun.com/document_detail/2853535.html).
       * - An IPsec-VPN connection created by calling the `CreateVpnAttachment` operation is not bound to any resource by default. You can call the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) operation to bind the IPsec-VPN connection to a transit router instance. After the IPsec-VPN connection is bound to a transit router instance, the system allocates a gateway IP address to the IPsec-VPN connection. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) operation to view the gateway IP address.
       * ### Before you begin
       * Before you create an IPsec-VPN connection, make sure that you have created a customer gateway in the region where the IPsec-VPN connection resides. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       *         
       * If you want to add BGP configurations to the IPsec-VPN connection, make sure that an autonomous system number has been added to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachment(const Models::CreateVpnAttachmentRequest &request);

      /**
       * @summary Creates an IPsec-VPN connection by calling the CreateVpnConnection operation.
       *
       * @description - If the VPN gateway instance supports creating IPsec-VPN connections in dual-tunnel mode, you can configure the following request parameters in addition to the required parameters when you call the `CreateVpnConnection` operation:
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     For information about the regions and zones that support IPsec-VPN connections in dual-tunnel mode, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - If the VPN gateway instance supports only creating IPsec-VPN connections in single-tunnel mode, you can configure the following request parameters in addition to the required parameters when you call the `CreateVpnConnection` operation:
       *      **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.
       * - The **CreateVpnConnection** operation is asynchronous. After you send a request, the system returns an instance ID, but the IPsec-VPN connection is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN gateway instance to determine the creation status of the IPsec-VPN connection:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec-VPN connection is being created.
       *     - If the VPN gateway instance is in the **active** state, the IPsec-VPN connection is created.
       * - The **CreateVpnConnection** operation does not support concurrent creation of IPsec-VPN connections under the same VPN gateway.
       *
       * @param request CreateVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnectionWithOptions(const Models::CreateVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPsec-VPN connection by calling the CreateVpnConnection operation.
       *
       * @description - If the VPN gateway instance supports creating IPsec-VPN connections in dual-tunnel mode, you can configure the following request parameters in addition to the required parameters when you call the `CreateVpnConnection` operation:
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       *     For information about the regions and zones that support IPsec-VPN connections in dual-tunnel mode, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - If the VPN gateway instance supports only creating IPsec-VPN connections in single-tunnel mode, you can configure the following request parameters in addition to the required parameters when you call the `CreateVpnConnection` operation:
       *      **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.
       * - The **CreateVpnConnection** operation is asynchronous. After you send a request, the system returns an instance ID, but the IPsec-VPN connection is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN gateway instance to determine the creation status of the IPsec-VPN connection:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec-VPN connection is being created.
       *     - If the VPN gateway instance is in the **active** state, the IPsec-VPN connection is created.
       * - The **CreateVpnConnection** operation does not support concurrent creation of IPsec-VPN connections under the same VPN gateway.
       *
       * @param request CreateVpnConnectionRequest
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnection(const Models::CreateVpnConnectionRequest &request);

      /**
       * @summary Creates a VPN gateway.
       *
       * @description - Before you create a VPN gateway, familiarize yourself with the limits of VPN gateways. For more information, see [VPN gateway limits](https://help.aliyun.com/document_detail/65290.html).
       * - VPN gateway instances in some regions support only dual-tunnel IPsec-VPN connections by default. When you call the `CreateVpnGateway` operation to create a VPN gateway instance in these regions, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to the required parameters. For information about the regions and zones that support dual-tunnel IPsec-VPN connections, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - The **CreateVpnGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the VPN gateway:
       *         
       *     - If the VPN gateway is in the **provisioning** state, the VPN gateway is being created.
       *     - If the VPN gateway is in the **active** state, the VPN gateway is created.
       *
       * @param request CreateVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnGatewayResponse
       */
      Models::CreateVpnGatewayResponse createVpnGatewayWithOptions(const Models::CreateVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPN gateway.
       *
       * @description - Before you create a VPN gateway, familiarize yourself with the limits of VPN gateways. For more information, see [VPN gateway limits](https://help.aliyun.com/document_detail/65290.html).
       * - VPN gateway instances in some regions support only dual-tunnel IPsec-VPN connections by default. When you call the `CreateVpnGateway` operation to create a VPN gateway instance in these regions, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to the required parameters. For information about the regions and zones that support dual-tunnel IPsec-VPN connections, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - The **CreateVpnGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the VPN gateway:
       *         
       *     - If the VPN gateway is in the **provisioning** state, the VPN gateway is being created.
       *     - If the VPN gateway is in the **active** state, the VPN gateway is created.
       *
       * @param request CreateVpnGatewayRequest
       * @return CreateVpnGatewayResponse
       */
      Models::CreateVpnGatewayResponse createVpnGateway(const Models::CreateVpnGatewayRequest &request);

      /**
       * @summary Creates a policy-based route for a VPN gateway by calling the CreateVpnPbrRouteEntry operation.
       *
       * @description ### Before you begin
       * - Before creating a policy-based route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
       * - Before creating a policy-based route, we recommend that you understand the limits and matching rules of policy-based routes. For more information, see [Use policy-based routes](https://help.aliyun.com/document_detail/110777.html).
       * ### Limits
       * - Adding a policy-based route whose destination CIDR block is 0.0.0.0/0 is not supported.
       * - Do not add a policy-based route whose destination CIDR block is 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such policy-based routes cause the console to fail to display instance status of the IPsec-VPN connection or cause IPsec-VPN connection negotiation failures.
       * - The **CreateVpnPbrRouteEntry** operation is asynchronous. After you call this operation, the system returns the information about the policy-based route, but the route has not been created yet. The system creates the route in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query instance status of the VPN gateway instance to determine the creation status of the policy-based route:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being created.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been created.
       * - The **CreateVpnPbrRouteEntry** operation does not support concurrent creation of policy-based routes for the same VPN gateway instance.
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntryWithOptions(const Models::CreateVpnPbrRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy-based route for a VPN gateway by calling the CreateVpnPbrRouteEntry operation.
       *
       * @description ### Before you begin
       * - Before creating a policy-based route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
       * - Before creating a policy-based route, we recommend that you understand the limits and matching rules of policy-based routes. For more information, see [Use policy-based routes](https://help.aliyun.com/document_detail/110777.html).
       * ### Limits
       * - Adding a policy-based route whose destination CIDR block is 0.0.0.0/0 is not supported.
       * - Do not add a policy-based route whose destination CIDR block is 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such policy-based routes cause the console to fail to display instance status of the IPsec-VPN connection or cause IPsec-VPN connection negotiation failures.
       * - The **CreateVpnPbrRouteEntry** operation is asynchronous. After you call this operation, the system returns the information about the policy-based route, but the route has not been created yet. The system creates the route in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query instance status of the VPN gateway instance to determine the creation status of the policy-based route:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being created.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been created.
       * - The **CreateVpnPbrRouteEntry** operation does not support concurrent creation of policy-based routes for the same VPN gateway instance.
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntry(const Models::CreateVpnPbrRouteEntryRequest &request);

      /**
       * @summary Creates a destination route for a VPN gateway instance by calling the CreateVpnRouteEntry operation. After a destination route is created, the VPN gateway instance matches the destination route based on the destination IP address of the traffic and then forwards the traffic based on the matched destination route.
       *
       * @description ### Before you begin
       * - Before you create a destination route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/2526947.html).
       * - Before you create a destination route, we recommend that you understand the matching rules of destination routes. For more information, see [Configure destination routes](https://help.aliyun.com/document_detail/112476.html).
       * ### Limits
       * - Destination routes whose destination CIDR block is 0.0.0.0/0 are not supported.
       * - Do not add destination routes whose destination CIDR block is 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. These routes may cause the console to fail to display the status of IPsec-VPN connections or cause IPsec-VPN connection negotiation to be failed.
       * - The **CreateVpnRouteEntry** operation is asynchronous. After you send a request, the system returns the destination route configuration but the destination route is not yet created. The creation node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the destination route:
       *     - If the VPN gateway instance is in the **updating** state, the destination route is being created.
       *     - If the VPN gateway instance is in the **active** state, the destination route is created.
       * - The **CreateVpnRouteEntry** operation does not support concurrent creation of destination routes for the same VPN gateway.
       *
       * @param request CreateVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntryWithOptions(const Models::CreateVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a destination route for a VPN gateway instance by calling the CreateVpnRouteEntry operation. After a destination route is created, the VPN gateway instance matches the destination route based on the destination IP address of the traffic and then forwards the traffic based on the matched destination route.
       *
       * @description ### Before you begin
       * - Before you create a destination route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/2526947.html).
       * - Before you create a destination route, we recommend that you understand the matching rules of destination routes. For more information, see [Configure destination routes](https://help.aliyun.com/document_detail/112476.html).
       * ### Limits
       * - Destination routes whose destination CIDR block is 0.0.0.0/0 are not supported.
       * - Do not add destination routes whose destination CIDR block is 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. These routes may cause the console to fail to display the status of IPsec-VPN connections or cause IPsec-VPN connection negotiation to be failed.
       * - The **CreateVpnRouteEntry** operation is asynchronous. After you send a request, the system returns the destination route configuration but the destination route is not yet created. The creation node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the destination route:
       *     - If the VPN gateway instance is in the **updating** state, the destination route is being created.
       *     - If the VPN gateway instance is in the **active** state, the destination route is created.
       * - The **CreateVpnRouteEntry** operation does not support concurrent creation of destination routes for the same VPN gateway.
       *
       * @param request CreateVpnRouteEntryRequest
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntry(const Models::CreateVpnRouteEntryRequest &request);

      /**
       * @summary Freezes a router interface by calling the DeactivateRouterInterface operation.
       *
       * @param request DeactivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterfaceWithOptions(const Models::DeactivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Freezes a router interface by calling the DeactivateRouterInterface operation.
       *
       * @param request DeactivateRouterInterfaceRequest
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterface(const Models::DeactivateRouterInterfaceRequest &request);

      /**
       * @summary Stops a flow log instance. After the flow log is stopped, traffic of the specified resource is no longer captured.
       *
       * @description - **DeactiveFlowLog** is an asynchronous operation. After you send a request, the system returns a request ID. However, the flow log is not yet stopped, and the system is still processing the stop task in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the status of the flow log:
       *     - If the flow log is in the **Deactivating** state, the flow log is being stopped.
       *     - If the flow log is in the **Inactive** state, the flow log is stopped.
       * - You cannot concurrently stop the same flow log by calling **DeactiveFlowLog**.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a flow log instance. After the flow log is stopped, traffic of the specified resource is no longer captured.
       *
       * @description - **DeactiveFlowLog** is an asynchronous operation. After you send a request, the system returns a request ID. However, the flow log is not yet stopped, and the system is still processing the stop task in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the status of the flow log:
       *     - If the flow log is in the **Deactivating** state, the flow log is being stopped.
       *     - If the flow log is in the **Inactive** state, the flow log is stopped.
       * - You cannot concurrently stop the same flow log by calling **DeactiveFlowLog**.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes a specified Border Gateway Protocol (BGP) group.
       *
       * @param request DeleteBgpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpGroupResponse
       */
      Models::DeleteBgpGroupResponse deleteBgpGroupWithOptions(const Models::DeleteBgpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Border Gateway Protocol (BGP) group.
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
       * @summary Deletes a specified BGP peer.
       *
       * @param request DeleteBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpPeerResponse
       */
      Models::DeleteBgpPeerResponse deleteBgpPeerWithOptions(const Models::DeleteBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified BGP peer.
       *
       * @param request DeleteBgpPeerRequest
       * @return DeleteBgpPeerResponse
       */
      Models::DeleteBgpPeerResponse deleteBgpPeer(const Models::DeleteBgpPeerRequest &request);

      /**
       * @summary Deletes an Internet Shared Bandwidth instance.
       *
       * @description The **DeleteCommonBandwidthPackage** operation does not support concurrent deletion of the same Internet Shared Bandwidth instance.
       *
       * @param request DeleteCommonBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommonBandwidthPackageResponse
       */
      Models::DeleteCommonBandwidthPackageResponse deleteCommonBandwidthPackageWithOptions(const Models::DeleteCommonBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Internet Shared Bandwidth instance.
       *
       * @description The **DeleteCommonBandwidthPackage** operation does not support concurrent deletion of the same Internet Shared Bandwidth instance.
       *
       * @param request DeleteCommonBandwidthPackageRequest
       * @return DeleteCommonBandwidthPackageResponse
       */
      Models::DeleteCommonBandwidthPackageResponse deleteCommonBandwidthPackage(const Models::DeleteCommonBandwidthPackageRequest &request);

      /**
       * @summary Deletes a specified customer gateway.
       *
       * @description Before deleting a customer gateway, make sure that the customer gateway is not associated with any IPsec-VPN connections. To delete an IPsec-VPN connection, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       *
       * @param request DeleteCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomerGatewayResponse
       */
      Models::DeleteCustomerGatewayResponse deleteCustomerGatewayWithOptions(const Models::DeleteCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified customer gateway.
       *
       * @description Before deleting a customer gateway, make sure that the customer gateway is not associated with any IPsec-VPN connections. To delete an IPsec-VPN connection, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       *
       * @param request DeleteCustomerGatewayRequest
       * @return DeleteCustomerGatewayResponse
       */
      Models::DeleteCustomerGatewayResponse deleteCustomerGateway(const Models::DeleteCustomerGatewayRequest &request);

      /**
       * @summary Deletes a DHCP options set.
       *
       * @description - **DeleteDhcpOptionsSet** is an asynchronous operation. After you send a request, the system returns a request ID, but the DHCP options set is not yet deleted. The deletion task runs in the background. You can call [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the deletion status of the DHCP options set:
       *     - If the DHCP options set is in the **Deleting** state, the DHCP options set is being deleted.
       *     - If the specified DHCP options set cannot be found, the DHCP options set is deleted.
       * - **DeleteDhcpOptionsSet** does not support concurrent deletion of the same DHCP options set.
       *
       * @param request DeleteDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDhcpOptionsSetResponse
       */
      Models::DeleteDhcpOptionsSetResponse deleteDhcpOptionsSetWithOptions(const Models::DeleteDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DHCP options set.
       *
       * @description - **DeleteDhcpOptionsSet** is an asynchronous operation. After you send a request, the system returns a request ID, but the DHCP options set is not yet deleted. The deletion task runs in the background. You can call [GetDhcpOptionsSet](https://help.aliyun.com/document_detail/448820.html) to query the deletion status of the DHCP options set:
       *     - If the DHCP options set is in the **Deleting** state, the DHCP options set is being deleted.
       *     - If the specified DHCP options set cannot be found, the DHCP options set is deleted.
       * - **DeleteDhcpOptionsSet** does not support concurrent deletion of the same DHCP options set.
       *
       * @param request DeleteDhcpOptionsSetRequest
       * @return DeleteDhcpOptionsSetResponse
       */
      Models::DeleteDhcpOptionsSetResponse deleteDhcpOptionsSet(const Models::DeleteDhcpOptionsSetRequest &request);

      /**
       * @summary Deletes a specified enhanced VPN gateway.
       *
       * @description > You cannot delete an enhanced VPN gateway that has existing IPsec-VPN connections.
       *
       * @param request DeleteEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnhancedVpnGatewayResponse
       */
      Models::DeleteEnhancedVpnGatewayResponse deleteEnhancedVpnGatewayWithOptions(const Models::DeleteEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified enhanced VPN gateway.
       *
       * @description > You cannot delete an enhanced VPN gateway that has existing IPsec-VPN connections.
       *
       * @param request DeleteEnhancedVpnGatewayRequest
       * @return DeleteEnhancedVpnGatewayResponse
       */
      Models::DeleteEnhancedVpnGatewayResponse deleteEnhancedVpnGateway(const Models::DeleteEnhancedVpnGatewayRequest &request);

      /**
       * @summary Deletes an Express Connect instance, including the requester VPC and accepter VPC.
       *
       * @param request DeleteExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectResponse
       */
      Models::DeleteExpressConnectResponse deleteExpressConnectWithOptions(const Models::DeleteExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect instance, including the requester VPC and accepter VPC.
       *
       * @param request DeleteExpressConnectRequest
       * @return DeleteExpressConnectResponse
       */
      Models::DeleteExpressConnectResponse deleteExpressConnect(const Models::DeleteExpressConnectRequest &request);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQos operation to delete an Express Connect Quality of Service (QoS) policy.
       *
       * @description A QoS policy that is associated with an Express Connect circuit cannot be directly deleted. You must dissociate the QoS policy from the Express Connect circuit first.
       *
       * @param request DeleteExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosResponse
       */
      Models::DeleteExpressConnectTrafficQosResponse deleteExpressConnectTrafficQosWithOptions(const Models::DeleteExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQos operation to delete an Express Connect Quality of Service (QoS) policy.
       *
       * @description A QoS policy that is associated with an Express Connect circuit cannot be directly deleted. You must dissociate the QoS policy from the Express Connect circuit first.
       *
       * @param request DeleteExpressConnectTrafficQosRequest
       * @return DeleteExpressConnectTrafficQosResponse
       */
      Models::DeleteExpressConnectTrafficQosResponse deleteExpressConnectTrafficQos(const Models::DeleteExpressConnectTrafficQosRequest &request);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQosQueue operation to delete an Express Connect QoS queue.
       *
       * @param request DeleteExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosQueueResponse
       */
      Models::DeleteExpressConnectTrafficQosQueueResponse deleteExpressConnectTrafficQosQueueWithOptions(const Models::DeleteExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQosQueue operation to delete an Express Connect QoS queue.
       *
       * @param request DeleteExpressConnectTrafficQosQueueRequest
       * @return DeleteExpressConnectTrafficQosQueueResponse
       */
      Models::DeleteExpressConnectTrafficQosQueueResponse deleteExpressConnectTrafficQosQueue(const Models::DeleteExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Deletes a QoS rule for Express Connect.
       *
       * @param request DeleteExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosRuleResponse
       */
      Models::DeleteExpressConnectTrafficQosRuleResponse deleteExpressConnectTrafficQosRuleWithOptions(const Models::DeleteExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a QoS rule for Express Connect.
       *
       * @param request DeleteExpressConnectTrafficQosRuleRequest
       * @return DeleteExpressConnectTrafficQosRuleResponse
       */
      Models::DeleteExpressConnectTrafficQosRuleResponse deleteExpressConnectTrafficQosRule(const Models::DeleteExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Deletes an Express Connect failover test job.
       *
       * @description Only failover test jobs in the **Pending** or **Completed** state can be deleted.
       *
       * @param request DeleteFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFailoverTestJobResponse
       */
      Models::DeleteFailoverTestJobResponse deleteFailoverTestJobWithOptions(const Models::DeleteFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect failover test job.
       *
       * @description Only failover test jobs in the **Pending** or **Completed** state can be deleted.
       *
       * @param request DeleteFailoverTestJobRequest
       * @return DeleteFailoverTestJobResponse
       */
      Models::DeleteFailoverTestJobResponse deleteFailoverTestJob(const Models::DeleteFailoverTestJobRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @description - **DeleteFlowLog** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the flow log has not been deleted yet. The deletion task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the deletion status of the flow log:
       *     - If the flow log is in the **Deleting** state, the flow log is being deleted.
       *     - If the specified flow log cannot be found, the flow log is deleted.
       * - **DeleteFlowLog** does not support concurrent deletion of the same flow log.
       *
       * @param request DeleteFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLogWithOptions(const Models::DeleteFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @description - **DeleteFlowLog** is an asynchronous operation. After you call this operation, the system returns an instance ID, but the flow log has not been deleted yet. The deletion task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the deletion status of the flow log:
       *     - If the flow log is in the **Deleting** state, the flow log is being deleted.
       *     - If the specified flow log cannot be found, the flow log is deleted.
       * - **DeleteFlowLog** does not support concurrent deletion of the same flow log.
       *
       * @param request DeleteFlowLogRequest
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLog(const Models::DeleteFlowLogRequest &request);

      /**
       * @summary Deletes a specified DNAT entry.
       *
       * @description **DeleteForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       * - If the DNAT entry is in the **Deleting** state, the DNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the DNAT entry is no longer found, the DNAT entry is deleted.
       * >  If a DNAT entry in the DNAT table is in the **Pending** state, you cannot delete any DNAT entries from the DNAT table.
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified DNAT entry.
       *
       * @description **DeleteForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       * - If the DNAT entry is in the **Deleting** state, the DNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the DNAT entry is no longer found, the DNAT entry is deleted.
       * >  If a DNAT entry in the DNAT table is in the **Pending** state, you cannot delete any DNAT entries from the DNAT table.
       *
       * @param request DeleteForwardEntryRequest
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntry(const Models::DeleteForwardEntryRequest &request);

      /**
       * @summary Deletes a FULLNAT entry.
       *
       * @description **DeleteFullNatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the FULLNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the status of the FULLNAT entry:
       * - If the FULLNAT entry is in the **Deleting** state, the FULLNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the FULLNAT entry cannot be found, the FULLNAT entry is deleted.
       *
       * @param request DeleteFullNatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFullNatEntryResponse
       */
      Models::DeleteFullNatEntryResponse deleteFullNatEntryWithOptions(const Models::DeleteFullNatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a FULLNAT entry.
       *
       * @description **DeleteFullNatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the FULLNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the status of the FULLNAT entry:
       * - If the FULLNAT entry is in the **Deleting** state, the FULLNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the FULLNAT entry cannot be found, the FULLNAT entry is deleted.
       *
       * @param request DeleteFullNatEntryRequest
       * @return DeleteFullNatEntryResponse
       */
      Models::DeleteFullNatEntryResponse deleteFullNatEntry(const Models::DeleteFullNatEntryRequest &request);

      /**
       * @summary Deletes an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description Before calling this operation, note the following: 
       * - Only pay-as-you-go instances can be deleted.
       * - To delete a dedicated instance, disassociate all backend servers from the instance before deletion.
       * - To delete a shared instance, remove all EIPs from the instance before deletion.
       *
       * @param request DeleteGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalAccelerationInstanceResponse
       */
      Models::DeleteGlobalAccelerationInstanceResponse deleteGlobalAccelerationInstanceWithOptions(const Models::DeleteGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description Before calling this operation, note the following: 
       * - Only pay-as-you-go instances can be deleted.
       * - To delete a dedicated instance, disassociate all backend servers from the instance before deletion.
       * - To delete a shared instance, remove all EIPs from the instance before deletion.
       *
       * @param request DeleteGlobalAccelerationInstanceRequest
       * @return DeleteGlobalAccelerationInstanceResponse
       */
      Models::DeleteGlobalAccelerationInstanceResponse deleteGlobalAccelerationInstance(const Models::DeleteGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Deletes a high-availability virtual IP address (HaVip).
       *
       * @description When you call this operation to delete an HaVip, take note of the following items:
       * - The HaVip must be in the available state before it can be deleted.
       * - Make sure that no routes point to the HaVip that you want to delete.
       * - Make sure that the HaVip that you want to delete is not associated with any elastic IP address (EIP).
       * - **DeleteHaVip** is an asynchronous operation. After you send a request, the system returns a request ID. However, the HaVip is not yet deleted. The deletion task runs in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the deletion status of the HaVip:
       *     - If the HaVip is in the **Deleting** state, the HaVip is being deleted.
       *     - If the specified HaVip cannot be found, the HaVip is deleted.
       * - **DeleteHaVip** does not support concurrent deletion of the same HaVip.
       *
       * @param request DeleteHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVipWithOptions(const Models::DeleteHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a high-availability virtual IP address (HaVip).
       *
       * @description When you call this operation to delete an HaVip, take note of the following items:
       * - The HaVip must be in the available state before it can be deleted.
       * - Make sure that no routes point to the HaVip that you want to delete.
       * - Make sure that the HaVip that you want to delete is not associated with any elastic IP address (EIP).
       * - **DeleteHaVip** is an asynchronous operation. After you send a request, the system returns a request ID. However, the HaVip is not yet deleted. The deletion task runs in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the deletion status of the HaVip:
       *     - If the HaVip is in the **Deleting** state, the HaVip is being deleted.
       *     - If the specified HaVip cannot be found, the HaVip is deleted.
       * - **DeleteHaVip** does not support concurrent deletion of the same HaVip.
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
       * @summary Deletes an access control policy group. You can delete an access control policy group only when it is not associated with any IPv6 Translation Service mappings.
       *
       * @param request DeleteIPv6TranslatorAclListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIPv6TranslatorAclListResponse
       */
      Models::DeleteIPv6TranslatorAclListResponse deleteIPv6TranslatorAclListWithOptions(const Models::DeleteIPv6TranslatorAclListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorAclList is deprecated
       *
       * @summary Deletes an access control policy group. You can delete an access control policy group only when it is not associated with any IPv6 Translation Service mappings.
       *
       * @param request DeleteIPv6TranslatorAclListRequest
       * @return DeleteIPv6TranslatorAclListResponse
       */
      Models::DeleteIPv6TranslatorAclListResponse deleteIPv6TranslatorAclList(const Models::DeleteIPv6TranslatorAclListRequest &request);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorEntry is deprecated
       *
       * @summary Deletes an IPv6 Translation Service mapping entry.
       *
       * @param request DeleteIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIPv6TranslatorEntryResponse
       */
      Models::DeleteIPv6TranslatorEntryResponse deleteIPv6TranslatorEntryWithOptions(const Models::DeleteIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteIPv6TranslatorEntry is deprecated
       *
       * @summary Deletes an IPv6 Translation Service mapping entry.
       *
       * @param request DeleteIPv6TranslatorEntryRequest
       * @return DeleteIPv6TranslatorEntryResponse
       */
      Models::DeleteIPv6TranslatorEntryResponse deleteIPv6TranslatorEntry(const Models::DeleteIPv6TranslatorEntryRequest &request);

      /**
       * @summary Deletes an IPsec server.
       *
       * @description - **DeleteIpsecServer** is an asynchronous operation. After you send a request, the system returns a request ID. However, the IPsec server is not yet deleted. The deletion node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the instance status of the VPN gateway and determine the deletion status of the IPsec server:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server is deleted.
       * - **DeleteIpsecServer** does not support concurrent deletion of IPsec servers under the same VPN gateway.
       *
       * @param request DeleteIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpsecServerResponse
       */
      Models::DeleteIpsecServerResponse deleteIpsecServerWithOptions(const Models::DeleteIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPsec server.
       *
       * @description - **DeleteIpsecServer** is an asynchronous operation. After you send a request, the system returns a request ID. However, the IPsec server is not yet deleted. The deletion node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the instance status of the VPN gateway and determine the deletion status of the IPsec server:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server is deleted.
       * - **DeleteIpsecServer** does not support concurrent deletion of IPsec servers under the same VPN gateway.
       *
       * @param request DeleteIpsecServerRequest
       * @return DeleteIpsecServerResponse
       */
      Models::DeleteIpsecServerResponse deleteIpsecServer(const Models::DeleteIpsecServerRequest &request);

      /**
       * @summary Deletes an IPv4 gateway.
       *
       * @description - Before you delete an IPv4 gateway, make sure that the route table associated with the IPv4 gateway is disassociated.
       * - The **DeleteIpv4Gateway** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the IPv4 gateway is not yet deleted. The deletion task continues to run in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the status of the IPv4 gateway.
       *     - If the IPv4 gateway is in the **Deleting** state, the IPv4 gateway is being deleted.
       *     - If the IPv4 gateway cannot be found, the IPv4 gateway is deleted.
       * - The **DeleteIpv4Gateway** operation does not support concurrent deletion of the same IPv4 gateway.
       *
       * @param request DeleteIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv4GatewayResponse
       */
      Models::DeleteIpv4GatewayResponse deleteIpv4GatewayWithOptions(const Models::DeleteIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv4 gateway.
       *
       * @description - Before you delete an IPv4 gateway, make sure that the route table associated with the IPv4 gateway is disassociated.
       * - The **DeleteIpv4Gateway** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the IPv4 gateway is not yet deleted. The deletion task continues to run in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the status of the IPv4 gateway.
       *     - If the IPv4 gateway is in the **Deleting** state, the IPv4 gateway is being deleted.
       *     - If the IPv4 gateway cannot be found, the IPv4 gateway is deleted.
       * - The **DeleteIpv4Gateway** operation does not support concurrent deletion of the same IPv4 gateway.
       *
       * @param request DeleteIpv4GatewayRequest
       * @return DeleteIpv4GatewayResponse
       */
      Models::DeleteIpv4GatewayResponse deleteIpv4Gateway(const Models::DeleteIpv4GatewayRequest &request);

      /**
       * @summary Deletes an IPv6 egress-only rule.
       *
       * @description - **DeleteIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the IPv6 egress-only rule is not immediately deleted. The deletion task runs in the background. You can call [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the deletion status of the IPv6 egress-only rule:
       *     - If the IPv6 egress-only rule is in the **Deleting** state, the rule is being deleted.
       *     - If the specified IPv6 egress-only rule cannot be found, the rule is deleted.
       * - **DeleteIpv6EgressOnlyRule** does not support concurrent deletion of the same IPv6 egress-only rule.
       *
       * @param request DeleteIpv6EgressOnlyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6EgressOnlyRuleResponse
       */
      Models::DeleteIpv6EgressOnlyRuleResponse deleteIpv6EgressOnlyRuleWithOptions(const Models::DeleteIpv6EgressOnlyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv6 egress-only rule.
       *
       * @description - **DeleteIpv6EgressOnlyRule** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the IPv6 egress-only rule is not immediately deleted. The deletion task runs in the background. You can call [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the deletion status of the IPv6 egress-only rule:
       *     - If the IPv6 egress-only rule is in the **Deleting** state, the rule is being deleted.
       *     - If the specified IPv6 egress-only rule cannot be found, the rule is deleted.
       * - **DeleteIpv6EgressOnlyRule** does not support concurrent deletion of the same IPv6 egress-only rule.
       *
       * @param request DeleteIpv6EgressOnlyRuleRequest
       * @return DeleteIpv6EgressOnlyRuleResponse
       */
      Models::DeleteIpv6EgressOnlyRuleResponse deleteIpv6EgressOnlyRule(const Models::DeleteIpv6EgressOnlyRuleRequest &request);

      /**
       * @summary Deletes an IPv6 gateway.
       *
       * @description Before you delete an IPv6 gateway, delete the IPv6 egress-only rules first. For more information, see [DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html).
       * - The **DeleteIpv6Gateway** operation is asynchronous. After a request is sent, the system returns a request ID. However, the IPv6 gateway is not yet deleted. The deletion task is still running in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the deletion status of the IPv6 gateway:
       *     - If the IPv6 gateway is in the **Deleting** state, the IPv6 gateway is being deleted.
       *     - If the specified IPv6 gateway cannot be found, the IPv6 gateway is deleted.
       * - The **DeleteIpv6Gateway** operation does not support concurrent deletion of the same IPv6 gateway.
       *
       * @param request DeleteIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6GatewayWithOptions(const Models::DeleteIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv6 gateway.
       *
       * @description Before you delete an IPv6 gateway, delete the IPv6 egress-only rules first. For more information, see [DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html).
       * - The **DeleteIpv6Gateway** operation is asynchronous. After a request is sent, the system returns a request ID. However, the IPv6 gateway is not yet deleted. The deletion task is still running in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the deletion status of the IPv6 gateway:
       *     - If the IPv6 gateway is in the **Deleting** state, the IPv6 gateway is being deleted.
       *     - If the specified IPv6 gateway cannot be found, the IPv6 gateway is deleted.
       * - The **DeleteIpv6Gateway** operation does not support concurrent deletion of the same IPv6 gateway.
       *
       * @param request DeleteIpv6GatewayRequest
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6Gateway(const Models::DeleteIpv6GatewayRequest &request);

      /**
       * @summary Deletes the Internet bandwidth of an IPv6 address by calling the DeleteIpv6InternetBandwidth operation.
       *
       * @description The **DeleteIpv6InternetBandwidth** operation does not support concurrent deletion of the same Internet bandwidth.
       *
       * @param request DeleteIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6InternetBandwidthResponse
       */
      Models::DeleteIpv6InternetBandwidthResponse deleteIpv6InternetBandwidthWithOptions(const Models::DeleteIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Internet bandwidth of an IPv6 address by calling the DeleteIpv6InternetBandwidth operation.
       *
       * @description The **DeleteIpv6InternetBandwidth** operation does not support concurrent deletion of the same Internet bandwidth.
       *
       * @param request DeleteIpv6InternetBandwidthRequest
       * @return DeleteIpv6InternetBandwidthResponse
       */
      Models::DeleteIpv6InternetBandwidthResponse deleteIpv6InternetBandwidth(const Models::DeleteIpv6InternetBandwidthRequest &request);

      /**
       * @summary Deletes a specified Internet NAT gateway.
       *
       * @description **DeleteNatGateway** is an asynchronous operation. After you send a request, the system returns a request ID. However, the NAT gateway is not immediately deleted. The deletion task runs in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the NAT gateway:
       *    
       * - If the NAT gateway is in the **Deleting** state, the NAT gateway is being deleted. In this state, you can only perform query operations.
       * - If the NAT gateway cannot be found, the NAT gateway is deleted.
       *        
       * > The deletion of a NAT gateway is irreversible. Proceed with caution.
       *
       * @param request DeleteNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGatewayWithOptions(const Models::DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Internet NAT gateway.
       *
       * @description **DeleteNatGateway** is an asynchronous operation. After you send a request, the system returns a request ID. However, the NAT gateway is not immediately deleted. The deletion task runs in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) to query the status of the NAT gateway:
       *    
       * - If the NAT gateway is in the **Deleting** state, the NAT gateway is being deleted. In this state, you can only perform query operations.
       * - If the NAT gateway cannot be found, the NAT gateway is deleted.
       *        
       * > The deletion of a NAT gateway is irreversible. Proceed with caution.
       *
       * @param request DeleteNatGatewayRequest
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGateway(const Models::DeleteNatGatewayRequest &request);

      /**
       * @summary Deletes a NAT IP address.
       *
       * @description **DeleteNatIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the NAT IP address is not yet deleted. The deletion task continues to run in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/2522486.html) to query the deletion status of the NAT IP address:
       * - If the NAT IP address is in the **Deleting** state, the NAT IP address is being deleted. In this state, you can only perform query operations.
       * - If the NAT IP address cannot be found, the NAT IP address is deleted.
       *
       * @param request DeleteNatIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatIpResponse
       */
      Models::DeleteNatIpResponse deleteNatIpWithOptions(const Models::DeleteNatIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT IP address.
       *
       * @description **DeleteNatIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the NAT IP address is not yet deleted. The deletion task continues to run in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/2522486.html) to query the deletion status of the NAT IP address:
       * - If the NAT IP address is in the **Deleting** state, the NAT IP address is being deleted. In this state, you can only perform query operations.
       * - If the NAT IP address cannot be found, the NAT IP address is deleted.
       *
       * @param request DeleteNatIpRequest
       * @return DeleteNatIpResponse
       */
      Models::DeleteNatIpResponse deleteNatIp(const Models::DeleteNatIpRequest &request);

      /**
       * @summary Deletes a NAT CIDR block by calling the DeleteNatIpCidr operation.
       *
       * @param request DeleteNatIpCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatIpCidrResponse
       */
      Models::DeleteNatIpCidrResponse deleteNatIpCidrWithOptions(const Models::DeleteNatIpCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT CIDR block by calling the DeleteNatIpCidr operation.
       *
       * @param request DeleteNatIpCidrRequest
       * @return DeleteNatIpCidrResponse
       */
      Models::DeleteNatIpCidrResponse deleteNatIpCidr(const Models::DeleteNatIpCidrRequest &request);

      /**
       * @summary Deletes a network ACL.
       *
       * @description The **DeleteNetworkAcl** operation does not support concurrent deletion of the same network ACL.
       *
       * @param request DeleteNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAclWithOptions(const Models::DeleteNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network ACL.
       *
       * @description The **DeleteNetworkAcl** operation does not support concurrent deletion of the same network ACL.
       *
       * @param request DeleteNetworkAclRequest
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAcl(const Models::DeleteNetworkAclRequest &request);

      /**
       * @summary Deletes an Express Connect circuit.
       *
       * @description You can delete only Express Connect circuits that are in the **Allocated**, **Confirmed**, **Rejected**, **Canceled**, **AllocationFailed**, or **Terminated** state.
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect circuit.
       *
       * @description You can delete only Express Connect circuits that are in the **Allocated**, **Confirmed**, **Rejected**, **Canceled**, **AllocationFailed**, or **Terminated** state.
       *
       * @param request DeletePhysicalConnectionRequest
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnection(const Models::DeletePhysicalConnectionRequest &request);

      /**
       * @summary Deletes an IP address pool.
       *
       * @description Before you call this operation, take note of the following items:
       * - Before deleting an IP address pool, make sure that the IP addresses in the pool are not in use.
       * - **DeletePublicIpAddressPool** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListPublicIpAddressPools](https://help.aliyun.com/document_detail/429433.html) to query the status of the IP address pool. 
       *     - If the IP address pool is in the **Deleting** state, the IP address pool is being deleted. In this state, you can only perform query operations.
       *     - If the IP address pool cannot be found, the IP address pool is deleted.
       * - **DeletePublicIpAddressPool** does not support concurrent deletion of the same IP address pool.
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
       * - Before deleting an IP address pool, make sure that the IP addresses in the pool are not in use.
       * - **DeletePublicIpAddressPool** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListPublicIpAddressPools](https://help.aliyun.com/document_detail/429433.html) to query the status of the IP address pool. 
       *     - If the IP address pool is in the **Deleting** state, the IP address pool is being deleted. In this state, you can only perform query operations.
       *     - If the IP address pool cannot be found, the IP address pool is deleted.
       * - **DeletePublicIpAddressPool** does not support concurrent deletion of the same IP address pool.
       *
       * @param request DeletePublicIpAddressPoolRequest
       * @return DeletePublicIpAddressPoolResponse
       */
      Models::DeletePublicIpAddressPoolResponse deletePublicIpAddressPool(const Models::DeletePublicIpAddressPoolRequest &request);

      /**
       * @summary Deletes a CIDR block from an IP address pool by calling the DeletePublicIpAddressPoolCidrBlock operation.
       *
       * @description Before you call this operation, take note of the following information:
       * - Before deleting a CIDR block, make sure that the CIDR block is not in use.
       * - **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID, but the CIDR block is not yet deleted. The deletion task continues to run in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool. 
       *     - If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only perform query operations.
       *     - If the CIDR block cannot be found, the CIDR block is deleted.
       * - The **DeletePublicIpAddressPoolCidrBlock** operation does not support concurrent deletion of the same CIDR block.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlockWithOptions(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from an IP address pool by calling the DeletePublicIpAddressPoolCidrBlock operation.
       *
       * @description Before you call this operation, take note of the following information:
       * - Before deleting a CIDR block, make sure that the CIDR block is not in use.
       * - **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID, but the CIDR block is not yet deleted. The deletion task continues to run in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool. 
       *     - If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only perform query operations.
       *     - If the CIDR block cannot be found, the CIDR block is deleted.
       * - The **DeletePublicIpAddressPoolCidrBlock** operation does not support concurrent deletion of the same CIDR block.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlock(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request);

      /**
       * @summary Batch deletes custom route entries.
       *
       * @description When you call this operation to delete routing entries, note the following items: 
       * - Only routing entries in the **Available** state can be deleted.  
       * - Routing entries cannot be deleted if the VPC to which the route table belongs is creating or deleting a vSwitch or routing entries. 
       * - The **DeleteRouteEntries** operation is asynchronous. After you send a request, the system returns a request ID, but the custom route entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the custom route entry:
       *     - If the custom route entry is in the **Deleting** state, the custom route entry is being deleted.
       *     - If the specified custom route entry cannot be found, the custom route entry is deleted.
       * - The **DeleteRouteEntries** operation does not support concurrent batch deletion of routing entries from route tables in the same VPC.
       *
       * @param request DeleteRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntriesWithOptions(const Models::DeleteRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch deletes custom route entries.
       *
       * @description When you call this operation to delete routing entries, note the following items: 
       * - Only routing entries in the **Available** state can be deleted.  
       * - Routing entries cannot be deleted if the VPC to which the route table belongs is creating or deleting a vSwitch or routing entries. 
       * - The **DeleteRouteEntries** operation is asynchronous. After you send a request, the system returns a request ID, but the custom route entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the custom route entry:
       *     - If the custom route entry is in the **Deleting** state, the custom route entry is being deleted.
       *     - If the specified custom route entry cannot be found, the custom route entry is deleted.
       * - The **DeleteRouteEntries** operation does not support concurrent batch deletion of routing entries from route tables in the same VPC.
       *
       * @param request DeleteRouteEntriesRequest
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntries(const Models::DeleteRouteEntriesRequest &request);

      /**
       * @summary Invokes the DeleteRouteEntry operation to delete a route from the route table of a VPC vRouter or Virtual Border Router (VBR).
       *
       * @description When you call this operation to delete a route, note the following items:
       * - Only routes in the **Available** state can be deleted.
       * - A route cannot be deleted if the VPC that contains the route table is creating or deleting a vSwitch or route entry.
       * - To delete a route from the route table of a VBR, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route that you want to delete, and then call this operation to delete the route.
       * - The **DeleteRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the route has not been deleted yet. The deletion task is still running in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the route:
       *     - If the route is in the **Deleting** state, the route is being deleted.
       *     - If the specified route cannot be found, the route is deleted.
       * - The **DeleteRouteEntry** operation does not support concurrent deletion of routes from the route table within the same VPC or VBR.
       *
       * @param request DeleteRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntryWithOptions(const Models::DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteRouteEntry operation to delete a route from the route table of a VPC vRouter or Virtual Border Router (VBR).
       *
       * @description When you call this operation to delete a route, note the following items:
       * - Only routes in the **Available** state can be deleted.
       * - A route cannot be deleted if the VPC that contains the route table is creating or deleting a vSwitch or route entry.
       * - To delete a route from the route table of a VBR, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route that you want to delete, and then call this operation to delete the route.
       * - The **DeleteRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the route has not been deleted yet. The deletion task is still running in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the route:
       *     - If the route is in the **Deleting** state, the route is being deleted.
       *     - If the specified route cannot be found, the route is deleted.
       * - The **DeleteRouteEntry** operation does not support concurrent deletion of routes from the route table within the same VPC or VBR.
       *
       * @param request DeleteRouteEntryRequest
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntry(const Models::DeleteRouteEntryRequest &request);

      /**
       * @summary Deletes a custom route table.
       *
       * @description - **DeleteRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the custom route table is not yet deleted. The deletion task is still running in the background. You can call [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) to query the deletion status of the custom route table:
       *     - If the custom route table is in the **Deleting** state, the custom route table is being deleted.
       *     - If the specified custom route table cannot be found, the custom route table is deleted.
       * - **DeleteRouteTable** does not support concurrent deletion of custom route tables in the same VPC.
       *
       * @param request DeleteRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTableWithOptions(const Models::DeleteRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom route table.
       *
       * @description - **DeleteRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the custom route table is not yet deleted. The deletion task is still running in the background. You can call [DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html) to query the deletion status of the custom route table:
       *     - If the custom route table is in the **Deleting** state, the custom route table is being deleted.
       *     - If the specified custom route table cannot be found, the custom route table is deleted.
       * - **DeleteRouteTable** does not support concurrent deletion of custom route tables in the same VPC.
       *
       * @param request DeleteRouteTableRequest
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTable(const Models::DeleteRouteTableRequest &request);

      /**
       * @summary Deletes a route target group instance.
       *
       * @description - **DeleteRouteTargetGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the route target group is not yet deleted. The deletion task continues to run in the background. You can call ListRouteTargetGroup to query the deletion status of the route target group:
       *     - If the route target group is in the **Deleting** state, the route target group is being deleted.
       *     - If the specified route target group cannot be found, the route target group is deleted.
       *
       * @param request DeleteRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteTargetGroupResponse
       */
      Models::DeleteRouteTargetGroupResponse deleteRouteTargetGroupWithOptions(const Models::DeleteRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route target group instance.
       *
       * @description - **DeleteRouteTargetGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the route target group is not yet deleted. The deletion task continues to run in the background. You can call ListRouteTargetGroup to query the deletion status of the route target group:
       *     - If the route target group is in the **Deleting** state, the route target group is being deleted.
       *     - If the specified route target group cannot be found, the route target group is deleted.
       *
       * @param request DeleteRouteTargetGroupRequest
       * @return DeleteRouteTargetGroupResponse
       */
      Models::DeleteRouteTargetGroupResponse deleteRouteTargetGroup(const Models::DeleteRouteTargetGroupRequest &request);

      /**
       * @summary Deletes a router interface.
       *
       * @description When you invoke this operation to delete a router interface, take note of the following items: 
       * - You can delete only router interfaces that are in the **Idle** or **Inactive** state. 
       * - Before you delete a router interface, delete all custom route entries that point to it.
       *
       * @param request DeleteRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterfaceWithOptions(const Models::DeleteRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a router interface.
       *
       * @description When you invoke this operation to delete a router interface, take note of the following items: 
       * - You can delete only router interfaces that are in the **Idle** or **Inactive** state. 
       * - Before you delete a router interface, delete all custom route entries that point to it.
       *
       * @param request DeleteRouterInterfaceRequest
       * @return DeleteRouterInterfaceResponse
       */
      Models::DeleteRouterInterfaceResponse deleteRouterInterface(const Models::DeleteRouterInterfaceRequest &request);

      /**
       * @summary Deletes a specified SNAT entry.
       *
       * @description **DeleteSnatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the SNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       * - If the SNAT entry is in the **Deleting** state, the SNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the returned SNAT entry list is empty, the SNAT entry is deleted.
       * If a SNAT entry in the SNAT table is in the **Pending** state, you cannot delete SNAT entries from the SNAT table.
       *
       * @param request DeleteSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntryWithOptions(const Models::DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified SNAT entry.
       *
       * @description **DeleteSnatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the SNAT entry is not yet deleted. The deletion task continues to run in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       * - If the SNAT entry is in the **Deleting** state, the SNAT entry is being deleted. In this state, you can only perform query operations.
       * - If the returned SNAT entry list is empty, the SNAT entry is deleted.
       * If a SNAT entry in the SNAT table is in the **Pending** state, you cannot delete SNAT entries from the SNAT table.
       *
       * @param request DeleteSnatEntryRequest
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntry(const Models::DeleteSnatEntryRequest &request);

      /**
       * @summary Deletes an SSL-VPN client certificate.
       *
       * @description - Deleting an SSL-VPN client certificate disconnects all clients under the SSL server from their SSL-VPN connections. If clients need to continue using SSL-VPN connections, they must re-initiate the connections.
       *   For example, if SSL-VPN client certificate 1 and SSL-VPN client certificate 2 are created under an SSL server, deleting SSL-VPN client certificate 1 disconnects all clients associated with both SSL-VPN client certificate 1 and SSL-VPN client certificate 2.
       *   - If clients associated with SSL-VPN client certificate 1 need to continue using SSL-VPN connections, they must install another certificate and then re-initiate the connections.
       *   - If clients associated with SSL-VPN client certificate 2 need to continue using SSL-VPN connections, they only need to re-initiate the connections.
       * - The **DeleteSslVpnClientCert** operation is asynchronous. After a request is sent, the system returns a request ID, but the SSL-VPN client certificate is not yet deleted. The deletion task continues in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance associated with the SSL server to confirm the deletion status of the SSL-VPN client certificate:
       *     - If the VPN gateway instance is in the **updating** state, the SSL-VPN client certificate is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the SSL-VPN client certificate is deleted.
       * - The **DeleteSslVpnClientCert** operation does not support concurrent deletion of SSL-VPN client certificates under the same VPN gateway instance.
       *
       * @param request DeleteSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSslVpnClientCertResponse
       */
      Models::DeleteSslVpnClientCertResponse deleteSslVpnClientCertWithOptions(const Models::DeleteSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SSL-VPN client certificate.
       *
       * @description - Deleting an SSL-VPN client certificate disconnects all clients under the SSL server from their SSL-VPN connections. If clients need to continue using SSL-VPN connections, they must re-initiate the connections.
       *   For example, if SSL-VPN client certificate 1 and SSL-VPN client certificate 2 are created under an SSL server, deleting SSL-VPN client certificate 1 disconnects all clients associated with both SSL-VPN client certificate 1 and SSL-VPN client certificate 2.
       *   - If clients associated with SSL-VPN client certificate 1 need to continue using SSL-VPN connections, they must install another certificate and then re-initiate the connections.
       *   - If clients associated with SSL-VPN client certificate 2 need to continue using SSL-VPN connections, they only need to re-initiate the connections.
       * - The **DeleteSslVpnClientCert** operation is asynchronous. After a request is sent, the system returns a request ID, but the SSL-VPN client certificate is not yet deleted. The deletion task continues in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance associated with the SSL server to confirm the deletion status of the SSL-VPN client certificate:
       *     - If the VPN gateway instance is in the **updating** state, the SSL-VPN client certificate is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the SSL-VPN client certificate is deleted.
       * - The **DeleteSslVpnClientCert** operation does not support concurrent deletion of SSL-VPN client certificates under the same VPN gateway instance.
       *
       * @param request DeleteSslVpnClientCertRequest
       * @return DeleteSslVpnClientCertResponse
       */
      Models::DeleteSslVpnClientCertResponse deleteSslVpnClientCert(const Models::DeleteSslVpnClientCertRequest &request);

      /**
       * @summary Deletes an SSL server. After the SSL server is deleted, the system automatically deletes all SSL client certificates associated with the SSL server, and clients that have installed these SSL client certificates are automatically disconnected from the SSL-VPN connection.
       *
       * @description - **DeleteSslVpnServer** is an asynchronous operation. After you send a request, the system returns a request ID, but the SSL server has not yet been deleted. The deletion task continues to run in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the deletion status of the SSL server:
       *     - If the VPN gateway instance is in the **updating** state, the SSL server is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the SSL server is deleted.
       * - **DeleteSslVpnServer** does not support concurrent deletion of SSL server instances under the same VPN gateway.
       *
       * @param request DeleteSslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSslVpnServerResponse
       */
      Models::DeleteSslVpnServerResponse deleteSslVpnServerWithOptions(const Models::DeleteSslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SSL server. After the SSL server is deleted, the system automatically deletes all SSL client certificates associated with the SSL server, and clients that have installed these SSL client certificates are automatically disconnected from the SSL-VPN connection.
       *
       * @description - **DeleteSslVpnServer** is an asynchronous operation. After you send a request, the system returns a request ID, but the SSL server has not yet been deleted. The deletion task continues to run in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the deletion status of the SSL server:
       *     - If the VPN gateway instance is in the **updating** state, the SSL server is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the SSL server is deleted.
       * - **DeleteSslVpnServer** does not support concurrent deletion of SSL server instances under the same VPN gateway.
       *
       * @param request DeleteSslVpnServerRequest
       * @return DeleteSslVpnServerResponse
       */
      Models::DeleteSslVpnServerResponse deleteSslVpnServer(const Models::DeleteSslVpnServerRequest &request);

      /**
       * @summary Invokes the DeleteTrafficMirrorFilter operation to delete a traffic mirror filter.
       *
       * @description - **DeleteTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns a request ID, but the traffic mirror filter is not yet deleted. The deletion task runs in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the traffic mirror filter:
       *     - If the traffic mirror filter is in the **Deleting** state, the traffic mirror filter is being deleted.
       *     - If the specified traffic mirror filter cannot be found, the traffic mirror filter is deleted.
       * - **DeleteTrafficMirrorFilter** does not support concurrent deletion of the same traffic mirror filter.
       *
       * @param request DeleteTrafficMirrorFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorFilterResponse
       */
      Models::DeleteTrafficMirrorFilterResponse deleteTrafficMirrorFilterWithOptions(const Models::DeleteTrafficMirrorFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteTrafficMirrorFilter operation to delete a traffic mirror filter.
       *
       * @description - **DeleteTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns a request ID, but the traffic mirror filter is not yet deleted. The deletion task runs in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the traffic mirror filter:
       *     - If the traffic mirror filter is in the **Deleting** state, the traffic mirror filter is being deleted.
       *     - If the specified traffic mirror filter cannot be found, the traffic mirror filter is deleted.
       * - **DeleteTrafficMirrorFilter** does not support concurrent deletion of the same traffic mirror filter.
       *
       * @param request DeleteTrafficMirrorFilterRequest
       * @return DeleteTrafficMirrorFilterResponse
       */
      Models::DeleteTrafficMirrorFilterResponse deleteTrafficMirrorFilter(const Models::DeleteTrafficMirrorFilterRequest &request);

      /**
       * @summary Invokes the DeleteTrafficMirrorFilterRules operation to delete inbound or outbound rules of a traffic mirror filter.
       *
       * @description - **DeleteTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID, but the inbound or outbound rules of the traffic mirror filter have not been deleted yet. The deletion task is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the inbound or outbound rules of the traffic mirror filter:
       *     - If the inbound or outbound rules of the traffic mirror filter are in the **Deleting** state, the rules are being deleted.
       *     - If the specified inbound or outbound rules of the traffic mirror filter cannot be found, the rules have been deleted.
       * - **DeleteTrafficMirrorFilterRules** does not support concurrent deletion of inbound or outbound rules of the same traffic mirror filter.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRulesWithOptions(const Models::DeleteTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteTrafficMirrorFilterRules operation to delete inbound or outbound rules of a traffic mirror filter.
       *
       * @description - **DeleteTrafficMirrorFilterRules** is an asynchronous operation. After a request is sent, the system returns a request ID, but the inbound or outbound rules of the traffic mirror filter have not been deleted yet. The deletion task is still running in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the inbound or outbound rules of the traffic mirror filter:
       *     - If the inbound or outbound rules of the traffic mirror filter are in the **Deleting** state, the rules are being deleted.
       *     - If the specified inbound or outbound rules of the traffic mirror filter cannot be found, the rules have been deleted.
       * - **DeleteTrafficMirrorFilterRules** does not support concurrent deletion of inbound or outbound rules of the same traffic mirror filter.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRules(const Models::DeleteTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @description - **DeleteTrafficMirrorSession** is an asynchronous operation. After you send a request, the system returns a request ID. However, the traffic mirror session is not yet deleted. The deletion task runs in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the deletion status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Deleting** state, the traffic mirror session is being deleted.
       *     - If the specified traffic mirror session cannot be found, the traffic mirror session is deleted.
       * - **DeleteTrafficMirrorSession** does not support concurrent deletion of the same traffic mirror session.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSessionWithOptions(const Models::DeleteTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @description - **DeleteTrafficMirrorSession** is an asynchronous operation. After you send a request, the system returns a request ID. However, the traffic mirror session is not yet deleted. The deletion task runs in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the deletion status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Deleting** state, the traffic mirror session is being deleted.
       *     - If the specified traffic mirror session cannot be found, the traffic mirror session is deleted.
       * - **DeleteTrafficMirrorSession** does not support concurrent deletion of the same traffic mirror session.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSession(const Models::DeleteTrafficMirrorSessionRequest &request);

      /**
       * @summary Invokes the DeleteVSwitch operation to delete a vSwitch.
       *
       * @description Before you call this operation to delete a vSwitch, take note of the following items: 
       * - Before deleting a vSwitch, release or move all resources in the VPC, including vSwitches, cloud service instances, router interfaces, and HaVips.  
       * - Only vSwitches in the **Available** state can be deleted.  
       * - A vSwitch cannot be deleted if the VPC to which it belongs is creating or deleting a vSwitch or route. 
       * - The **DeleteVSwitch** operation is asynchronous. After you send a request, the system returns a request ID, but the vSwitch is not yet deleted. The deletion task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the deletion status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the vSwitch is being deleted.
       *     - If the specified vSwitch cannot be found, the vSwitch is deleted.
       * - The **DeleteVSwitch** operation does not support concurrent deletion of the same vSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteVSwitch operation to delete a vSwitch.
       *
       * @description Before you call this operation to delete a vSwitch, take note of the following items: 
       * - Before deleting a vSwitch, release or move all resources in the VPC, including vSwitches, cloud service instances, router interfaces, and HaVips.  
       * - Only vSwitches in the **Available** state can be deleted.  
       * - A vSwitch cannot be deleted if the VPC to which it belongs is creating or deleting a vSwitch or route. 
       * - The **DeleteVSwitch** operation is asynchronous. After you send a request, the system returns a request ID, but the vSwitch is not yet deleted. The deletion task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the deletion status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the vSwitch is being deleted.
       *     - If the specified vSwitch cannot be found, the vSwitch is deleted.
       * - The **DeleteVSwitch** operation does not support concurrent deletion of the same vSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @summary Deletes a reserved vSwitch CIDR block.
       *
       * @description - Before you invoke this operation to delete a reserved vSwitch CIDR block, make sure that all prefix CIDR blocks allocated from the reserved CIDR block to elastic network interfaces (ENIs) are deleted. If any exist, first invoke [UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html) or [UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html) to release the IPv4 or IPv6 addresses of the ENI.
       * - **DeleteVSwitchCidrReservation** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the reserved vSwitch CIDR block is not yet deleted. The background task is still in progress. You can invoke [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the deletion status of the reserved vSwitch CIDR block:
       *     - If the reserved vSwitch CIDR block is in the **Releasing** state, the reserved vSwitch CIDR block is being released.
       *     - If the reserved vSwitch CIDR block is in the **Released** state, the reserved vSwitch CIDR block is released.
       *
       * @param request DeleteVSwitchCidrReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchCidrReservationResponse
       */
      Models::DeleteVSwitchCidrReservationResponse deleteVSwitchCidrReservationWithOptions(const Models::DeleteVSwitchCidrReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a reserved vSwitch CIDR block.
       *
       * @description - Before you invoke this operation to delete a reserved vSwitch CIDR block, make sure that all prefix CIDR blocks allocated from the reserved CIDR block to elastic network interfaces (ENIs) are deleted. If any exist, first invoke [UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html) or [UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html) to release the IPv4 or IPv6 addresses of the ENI.
       * - **DeleteVSwitchCidrReservation** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the reserved vSwitch CIDR block is not yet deleted. The background task is still in progress. You can invoke [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html) to query the deletion status of the reserved vSwitch CIDR block:
       *     - If the reserved vSwitch CIDR block is in the **Releasing** state, the reserved vSwitch CIDR block is being released.
       *     - If the reserved vSwitch CIDR block is in the **Released** state, the reserved vSwitch CIDR block is released.
       *
       * @param request DeleteVSwitchCidrReservationRequest
       * @return DeleteVSwitchCidrReservationResponse
       */
      Models::DeleteVSwitchCidrReservationResponse deleteVSwitchCidrReservation(const Models::DeleteVSwitchCidrReservationRequest &request);

      /**
       * @summary Deletes a VBR failover group.
       *
       * @param request DeleteVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVbrHaResponse
       */
      Models::DeleteVbrHaResponse deleteVbrHaWithOptions(const Models::DeleteVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VBR failover group.
       *
       * @param request DeleteVbrHaRequest
       * @return DeleteVbrHaResponse
       */
      Models::DeleteVbrHaResponse deleteVbrHa(const Models::DeleteVbrHaRequest &request);

      /**
       * @summary Deletes a destination route entry from an IPsec-VPN connection.
       *
       * @description - **DeleteVcoRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the destination route entry has not been deleted yet. The deletion task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the deletion status of the destination route entry:
       *     - If the IPsec-VPN connection is in the **updating** state, the destination route entry is being deleted.
       *     - If the IPsec-VPN connection is in the **attached** state, the destination route entry is deleted.
       * - **DeleteVcoRouteEntry** does not support concurrent deletion of destination route entries for the same IPsec-VPN connection.
       *
       * @param request DeleteVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVcoRouteEntryResponse
       */
      Models::DeleteVcoRouteEntryResponse deleteVcoRouteEntryWithOptions(const Models::DeleteVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a destination route entry from an IPsec-VPN connection.
       *
       * @description - **DeleteVcoRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the destination route entry has not been deleted yet. The deletion task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the deletion status of the destination route entry:
       *     - If the IPsec-VPN connection is in the **updating** state, the destination route entry is being deleted.
       *     - If the IPsec-VPN connection is in the **attached** state, the destination route entry is deleted.
       * - **DeleteVcoRouteEntry** does not support concurrent deletion of destination route entries for the same IPsec-VPN connection.
       *
       * @param request DeleteVcoRouteEntryRequest
       * @return DeleteVcoRouteEntryResponse
       */
      Models::DeleteVcoRouteEntryResponse deleteVcoRouteEntry(const Models::DeleteVcoRouteEntryRequest &request);

      /**
       * @summary Deletes a Virtual Border Router (VBR) instance.
       *
       * @description Before you call the DeleteVirtualBorderRouter operation to delete a VBR instance, note the following: 
       * - Before deleting a VBR instance, you must delete all router interfaces on the VBR instance. 
       * - You can delete only VBR instances in the **unconfirmed**, **active**, or **terminated** state. 
       * - A VBR instance owned by another account can be deleted by the Express Connect circuit owner only when the VBR instance is in the **unconfirmed** state.
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouterWithOptions(const Models::DeleteVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Virtual Border Router (VBR) instance.
       *
       * @description Before you call the DeleteVirtualBorderRouter operation to delete a VBR instance, note the following: 
       * - Before deleting a VBR instance, you must delete all router interfaces on the VBR instance. 
       * - You can delete only VBR instances in the **unconfirmed**, **active**, or **terminated** state. 
       * - A VBR instance owned by another account can be deleted by the Express Connect circuit owner only when the VBR instance is in the **unconfirmed** state.
       *
       * @param request DeleteVirtualBorderRouterRequest
       * @return DeleteVirtualBorderRouterResponse
       */
      Models::DeleteVirtualBorderRouterResponse deleteVirtualBorderRouter(const Models::DeleteVirtualBorderRouterRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @description When you call this operation to delete a VPC, take note of the following items: 
       * - Before deleting a VPC, release or migrate all resources in the VPC, including vSwitches, cloud service instances, and high-availability virtual IP addresses.
       *   
       * - Only VPCs in the **Available** state can be deleted.  
       * - **DeleteVpc** is an asynchronous operation. After you send a request, the system returns a request ID, but the VPC is not yet deleted. The deletion task runs in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the deletion status of the VPC:
       *     - If the VPC is in the **Deleting** state, the VPC is being deleted.
       *     - If the VPC cannot be found, the VPC is deleted.
       * - **DeleteVpc** does not support concurrent deletion of the same VPC.
       *
       * @param request DeleteVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpcWithOptions(const Models::DeleteVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @description When you call this operation to delete a VPC, take note of the following items: 
       * - Before deleting a VPC, release or migrate all resources in the VPC, including vSwitches, cloud service instances, and high-availability virtual IP addresses.
       *   
       * - Only VPCs in the **Available** state can be deleted.  
       * - **DeleteVpc** is an asynchronous operation. After you send a request, the system returns a request ID, but the VPC is not yet deleted. The deletion task runs in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the deletion status of the VPC:
       *     - If the VPC is in the **Deleting** state, the VPC is being deleted.
       *     - If the VPC cannot be found, the VPC is deleted.
       * - **DeleteVpc** does not support concurrent deletion of the same VPC.
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
       * @description The **DeleteVpcPrefixList** operation does not support concurrent deletion of the same prefix list instance.
       *
       * @param request DeleteVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcPrefixListResponse
       */
      Models::DeleteVpcPrefixListResponse deleteVpcPrefixListWithOptions(const Models::DeleteVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a prefix list.
       *
       * @description The **DeleteVpcPrefixList** operation does not support concurrent deletion of the same prefix list instance.
       *
       * @param request DeleteVpcPrefixListRequest
       * @return DeleteVpcPrefixListResponse
       */
      Models::DeleteVpcPrefixListResponse deleteVpcPrefixList(const Models::DeleteVpcPrefixListRequest &request);

      /**
       * @summary Deletes an IPsec-VPN connection by calling the DeleteVpnAttachment operation.
       *
       * @description - If the IPsec-VPN connection is associated with a transit router instance, disassociate the IPsec-VPN connection from the transit router instance before you delete the IPsec-VPN connection. For more information, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468251.html).
       * - If the IPsec-VPN connection is not associated with any resource, you can call the `DeleteVpnAttachment` operation to directly delete the IPsec-VPN connection.
       *
       * @param request DeleteVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnAttachmentResponse
       */
      Models::DeleteVpnAttachmentResponse deleteVpnAttachmentWithOptions(const Models::DeleteVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPsec-VPN connection by calling the DeleteVpnAttachment operation.
       *
       * @description - If the IPsec-VPN connection is associated with a transit router instance, disassociate the IPsec-VPN connection from the transit router instance before you delete the IPsec-VPN connection. For more information, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468251.html).
       * - If the IPsec-VPN connection is not associated with any resource, you can call the `DeleteVpnAttachment` operation to directly delete the IPsec-VPN connection.
       *
       * @param request DeleteVpnAttachmentRequest
       * @return DeleteVpnAttachmentResponse
       */
      Models::DeleteVpnAttachmentResponse deleteVpnAttachment(const Models::DeleteVpnAttachmentRequest &request);

      /**
       * @summary Deletes a specified IPsec-VPN connection.
       *
       * @description - **DeleteVpnConnection** is an asynchronous operation. After you send a request, the system returns a request ID, but the IPsec-VPN connection is not yet deleted. The deletion task continues to run in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN gateway instance and determine the deletion status of the IPsec-VPN connection:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec-VPN connection is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the IPsec-VPN connection is deleted.
       * - **DeleteVpnConnection** does not support concurrent deletion of IPsec-VPN connections under the same VPN gateway.
       * > After the IPsec-VPN connection is deleted, the connection between the on-premises data center and Alibaba Cloud is interrupted.
       *
       * @param request DeleteVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnConnectionResponse
       */
      Models::DeleteVpnConnectionResponse deleteVpnConnectionWithOptions(const Models::DeleteVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified IPsec-VPN connection.
       *
       * @description - **DeleteVpnConnection** is an asynchronous operation. After you send a request, the system returns a request ID, but the IPsec-VPN connection is not yet deleted. The deletion task continues to run in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN gateway instance and determine the deletion status of the IPsec-VPN connection:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec-VPN connection is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the IPsec-VPN connection is deleted.
       * - **DeleteVpnConnection** does not support concurrent deletion of IPsec-VPN connections under the same VPN gateway.
       * > After the IPsec-VPN connection is deleted, the connection between the on-premises data center and Alibaba Cloud is interrupted.
       *
       * @param request DeleteVpnConnectionRequest
       * @return DeleteVpnConnectionResponse
       */
      Models::DeleteVpnConnectionResponse deleteVpnConnection(const Models::DeleteVpnConnectionRequest &request);

      /**
       * @summary Deletes a specified VPN gateway.
       *
       * @description > You cannot delete a VPN gateway that has existing IPsec-VPN connections.
       *
       * @param request DeleteVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnGatewayResponse
       */
      Models::DeleteVpnGatewayResponse deleteVpnGatewayWithOptions(const Models::DeleteVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified VPN gateway.
       *
       * @description > You cannot delete a VPN gateway that has existing IPsec-VPN connections.
       *
       * @param request DeleteVpnGatewayRequest
       * @return DeleteVpnGatewayResponse
       */
      Models::DeleteVpnGatewayResponse deleteVpnGateway(const Models::DeleteVpnGatewayRequest &request);

      /**
       * @summary Deletes a policy-based route by calling the DeleteVpnPbrRouteEntry operation.
       *
       * @description - **DeleteVpnPbrRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based route is not yet deleted. The deletion node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the deletion status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing is deleted.
       * - **DeleteVpnPbrRouteEntry** does not support concurrent deletion of policy-based routing for the same VPN gateway instance.
       *
       * @param request DeleteVpnPbrRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnPbrRouteEntryResponse
       */
      Models::DeleteVpnPbrRouteEntryResponse deleteVpnPbrRouteEntryWithOptions(const Models::DeleteVpnPbrRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy-based route by calling the DeleteVpnPbrRouteEntry operation.
       *
       * @description - **DeleteVpnPbrRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based route is not yet deleted. The deletion node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the deletion status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing is deleted.
       * - **DeleteVpnPbrRouteEntry** does not support concurrent deletion of policy-based routing for the same VPN gateway instance.
       *
       * @param request DeleteVpnPbrRouteEntryRequest
       * @return DeleteVpnPbrRouteEntryResponse
       */
      Models::DeleteVpnPbrRouteEntryResponse deleteVpnPbrRouteEntry(const Models::DeleteVpnPbrRouteEntryRequest &request);

      /**
       * @summary Deletes a VPN destination route by calling the DeleteVpnRouteEntry operation.
       *
       * @description - **DeleteVpnRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID. However, the VPN destination route is not yet deleted, and the deletion node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway and determine the deletion status of the VPN destination routing:
       *     - If the VPN gateway instance is in the **updating** state, the VPN destination route is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the VPN destination route is deleted.
       * - **DeleteVpnRouteEntry** does not support concurrent deletion of VPN destination routes for the same VPN gateway.
       *
       * @param request DeleteVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpnRouteEntryResponse
       */
      Models::DeleteVpnRouteEntryResponse deleteVpnRouteEntryWithOptions(const Models::DeleteVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPN destination route by calling the DeleteVpnRouteEntry operation.
       *
       * @description - **DeleteVpnRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID. However, the VPN destination route is not yet deleted, and the deletion node is still running in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway and determine the deletion status of the VPN destination routing:
       *     - If the VPN gateway instance is in the **updating** state, the VPN destination route is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the VPN destination route is deleted.
       * - **DeleteVpnRouteEntry** does not support concurrent deletion of VPN destination routes for the same VPN gateway.
       *
       * @param request DeleteVpnRouteEntryRequest
       * @return DeleteVpnRouteEntryResponse
       */
      Models::DeleteVpnRouteEntryResponse deleteVpnRouteEntry(const Models::DeleteVpnRouteEntryRequest &request);

      /**
       * @summary Sets the deletion protection feature for an instance.
       *
       * @description ## API description
       * After you enable deletion protection for an instance, you cannot delete the instance. To delete the instance, disable deletion protection first.
       *
       * @param request DeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtectionWithOptions(const Models::DeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the deletion protection feature for an instance.
       *
       * @description ## API description
       * After you enable deletion protection for an instance, you cannot delete the instance. To delete the instance, disable deletion protection first.
       *
       * @param request DeletionProtectionRequest
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtection(const Models::DeletionProtectionRequest &request);

      /**
       * @summary Queries the 95th percentile traffic data of an Internet Shared Bandwidth instance that uses the enhanced 95th percentile billing method.
       *
       * @param request Describe95TrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95TrafficWithOptions(const Models::Describe95TrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the 95th percentile traffic data of an Internet Shared Bandwidth instance that uses the enhanced 95th percentile billing method.
       *
       * @param request Describe95TrafficRequest
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95Traffic(const Models::Describe95TrafficRequest &request);

      /**
       * @summary Queries the access points of Express Connect circuits in a specified region by calling the DescribeAccessPoints operation.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access points of Express Connect circuits in a specified region by calling the DescribeAccessPoints operation.
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries BGP groups in a specified region.
       *
       * @param request DescribeBgpGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpGroupsResponse
       */
      Models::DescribeBgpGroupsResponse describeBgpGroupsWithOptions(const Models::DescribeBgpGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries BGP groups in a specified region.
       *
       * @param request DescribeBgpGroupsRequest
       * @return DescribeBgpGroupsResponse
       */
      Models::DescribeBgpGroupsResponse describeBgpGroups(const Models::DescribeBgpGroupsRequest &request);

      /**
       * @summary Invokes DescribeBgpNetworks to query advertised Border Gateway Protocol (BGP) networks.
       *
       * @param request DescribeBgpNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpNetworksResponse
       */
      Models::DescribeBgpNetworksResponse describeBgpNetworksWithOptions(const Models::DescribeBgpNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeBgpNetworks to query advertised Border Gateway Protocol (BGP) networks.
       *
       * @param request DescribeBgpNetworksRequest
       * @return DescribeBgpNetworksResponse
       */
      Models::DescribeBgpNetworksResponse describeBgpNetworks(const Models::DescribeBgpNetworksRequest &request);

      /**
       * @summary Queries BGP peers in a specified region.
       *
       * @param request DescribeBgpPeersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpPeersResponse
       */
      Models::DescribeBgpPeersResponse describeBgpPeersWithOptions(const Models::DescribeBgpPeersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries BGP peers in a specified region.
       *
       * @param request DescribeBgpPeersRequest
       * @return DescribeBgpPeersResponse
       */
      Models::DescribeBgpPeersResponse describeBgpPeers(const Models::DescribeBgpPeersRequest &request);

      /**
       * @summary Queries the list and information of Internet Shared Bandwidth instances in a specified region.
       *
       * @param request DescribeCommonBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonBandwidthPackagesResponse
       */
      Models::DescribeCommonBandwidthPackagesResponse describeCommonBandwidthPackagesWithOptions(const Models::DescribeCommonBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and information of Internet Shared Bandwidth instances in a specified region.
       *
       * @param request DescribeCommonBandwidthPackagesRequest
       * @return DescribeCommonBandwidthPackagesResponse
       */
      Models::DescribeCommonBandwidthPackagesResponse describeCommonBandwidthPackages(const Models::DescribeCommonBandwidthPackagesRequest &request);

      /**
       * @summary Queries the details of a created customer gateway.
       *
       * @param request DescribeCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerGatewayResponse
       */
      Models::DescribeCustomerGatewayResponse describeCustomerGatewayWithOptions(const Models::DescribeCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a created customer gateway.
       *
       * @param request DescribeCustomerGatewayRequest
       * @return DescribeCustomerGatewayResponse
       */
      Models::DescribeCustomerGatewayResponse describeCustomerGateway(const Models::DescribeCustomerGatewayRequest &request);

      /**
       * @summary Queries information about customer gateways.
       *
       * @param request DescribeCustomerGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerGatewaysResponse
       */
      Models::DescribeCustomerGatewaysResponse describeCustomerGatewaysWithOptions(const Models::DescribeCustomerGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about customer gateways.
       *
       * @param request DescribeCustomerGatewaysRequest
       * @return DescribeCustomerGatewaysResponse
       */
      Models::DescribeCustomerGatewaysResponse describeCustomerGateways(const Models::DescribeCustomerGatewaysRequest &request);

      /**
       * @summary Invokes the DescribeEcGrantRelation operation to query the authorization relationship of a VPC-connected instance to a VBR instance in a cross-account VBR uplink scenario.
       *
       * @param request DescribeEcGrantRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEcGrantRelationResponse
       */
      Models::DescribeEcGrantRelationResponse describeEcGrantRelationWithOptions(const Models::DescribeEcGrantRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeEcGrantRelation operation to query the authorization relationship of a VPC-connected instance to a VBR instance in a cross-account VBR uplink scenario.
       *
       * @param request DescribeEcGrantRelationRequest
       * @return DescribeEcGrantRelationResponse
       */
      Models::DescribeEcGrantRelationResponse describeEcGrantRelation(const Models::DescribeEcGrantRelationRequest &request);

      /**
       * @summary Queries Elastic IP Addresses (EIPs) created in a specified region.
       *
       * @description Queries information about EIPs created in a specified region, including the bandwidth peak, billing method, and the type of instance currently attached with each EIP.
       *
       * @param request DescribeEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddressesWithOptions(const Models::DescribeEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Elastic IP Addresses (EIPs) created in a specified region.
       *
       * @description Queries information about EIPs created in a specified region, including the bandwidth peak, billing method, and the type of instance currently attached with each EIP.
       *
       * @param request DescribeEipAddressesRequest
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddresses(const Models::DescribeEipAddressesRequest &request);

      /**
       * @summary Queries the gateway and subnet mask information of an elastic IP address (EIP) by calling the DescribeEipGatewayInfo operation.
       *
       * @description Only EIPs that are associated with secondary elastic network interfaces (ENIs) in multi-EIP-to-ENI mode are supported.
       *
       * @param request DescribeEipGatewayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipGatewayInfoResponse
       */
      Models::DescribeEipGatewayInfoResponse describeEipGatewayInfoWithOptions(const Models::DescribeEipGatewayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the gateway and subnet mask information of an elastic IP address (EIP) by calling the DescribeEipGatewayInfo operation.
       *
       * @description Only EIPs that are associated with secondary elastic network interfaces (ENIs) in multi-EIP-to-ENI mode are supported.
       *
       * @param request DescribeEipGatewayInfoRequest
       * @return DescribeEipGatewayInfoResponse
       */
      Models::DescribeEipGatewayInfoResponse describeEipGatewayInfo(const Models::DescribeEipGatewayInfoRequest &request);

      /**
       * @summary Queries the monitoring data of an elastic IP address (EIP). You can query data for up to 31 days and retrieve a maximum of 400 data points per request.
       *
       * @description For a better experience when retrieving monitoring data, use the DescribeMetricList operation provided by CloudMonitor to query EIP-related data. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [EIP-related metrics](https://help.aliyun.com/document_detail/162874.html).
       *
       * @param request DescribeEipMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorDataWithOptions(const Models::DescribeEipMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of an elastic IP address (EIP). You can query data for up to 31 days and retrieve a maximum of 400 data points per request.
       *
       * @description For a better experience when retrieving monitoring data, use the DescribeMetricList operation provided by CloudMonitor to query EIP-related data. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [EIP-related metrics](https://help.aliyun.com/document_detail/162874.html).
       *
       * @param request DescribeEipMonitorDataRequest
       * @return DescribeEipMonitorDataResponse
       */
      Models::DescribeEipMonitorDataResponse describeEipMonitorData(const Models::DescribeEipMonitorDataRequest &request);

      /**
       * @summary Queries information about contiguous Elastic IP Address (EIP) groups.
       *
       * @param request DescribeEipSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipSegmentResponse
       */
      Models::DescribeEipSegmentResponse describeEipSegmentWithOptions(const Models::DescribeEipSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about contiguous Elastic IP Address (EIP) groups.
       *
       * @param request DescribeEipSegmentRequest
       * @return DescribeEipSegmentResponse
       */
      Models::DescribeEipSegmentResponse describeEipSegment(const Models::DescribeEipSegmentRequest &request);

      /**
       * @summary Queries Express Connect Quality of Service (QoS) policies. This operation supports pagination parameters.
       *
       * @param request DescribeExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosResponse
       */
      Models::DescribeExpressConnectTrafficQosResponse describeExpressConnectTrafficQosWithOptions(const Models::DescribeExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Express Connect Quality of Service (QoS) policies. This operation supports pagination parameters.
       *
       * @param request DescribeExpressConnectTrafficQosRequest
       * @return DescribeExpressConnectTrafficQosResponse
       */
      Models::DescribeExpressConnectTrafficQosResponse describeExpressConnectTrafficQos(const Models::DescribeExpressConnectTrafficQosRequest &request);

      /**
       * @summary Queries Express Connect QoS queues.
       *
       * @param request DescribeExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosQueueResponse
       */
      Models::DescribeExpressConnectTrafficQosQueueResponse describeExpressConnectTrafficQosQueueWithOptions(const Models::DescribeExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Express Connect QoS queues.
       *
       * @param request DescribeExpressConnectTrafficQosQueueRequest
       * @return DescribeExpressConnectTrafficQosQueueResponse
       */
      Models::DescribeExpressConnectTrafficQosQueueResponse describeExpressConnectTrafficQosQueue(const Models::DescribeExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Queries Express Connect traffic QoS rules. This operation does not support pagination parameters.
       *
       * @param request DescribeExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosRuleResponse
       */
      Models::DescribeExpressConnectTrafficQosRuleResponse describeExpressConnectTrafficQosRuleWithOptions(const Models::DescribeExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Express Connect traffic QoS rules. This operation does not support pagination parameters.
       *
       * @param request DescribeExpressConnectTrafficQosRuleRequest
       * @return DescribeExpressConnectTrafficQosRuleResponse
       */
      Models::DescribeExpressConnectTrafficQosRuleResponse describeExpressConnectTrafficQosRule(const Models::DescribeExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Queries the details of an Express Connect failover test job by calling the DescribeFailoverTestJob operation.
       *
       * @param request DescribeFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailoverTestJobResponse
       */
      Models::DescribeFailoverTestJobResponse describeFailoverTestJobWithOptions(const Models::DescribeFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Express Connect failover test job by calling the DescribeFailoverTestJob operation.
       *
       * @param request DescribeFailoverTestJobRequest
       * @return DescribeFailoverTestJobResponse
       */
      Models::DescribeFailoverTestJobResponse describeFailoverTestJob(const Models::DescribeFailoverTestJobRequest &request);

      /**
       * @summary Queries failover test jobs of Express Connect in batches.
       *
       * @param request DescribeFailoverTestJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailoverTestJobsResponse
       */
      Models::DescribeFailoverTestJobsResponse describeFailoverTestJobsWithOptions(const Models::DescribeFailoverTestJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries failover test jobs of Express Connect in batches.
       *
       * @param request DescribeFailoverTestJobsRequest
       * @return DescribeFailoverTestJobsResponse
       */
      Models::DescribeFailoverTestJobsResponse describeFailoverTestJobs(const Models::DescribeFailoverTestJobsRequest &request);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogsWithOptions(const Models::DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogs(const Models::DescribeFlowLogsRequest &request);

      /**
       * @summary Queries DNAT entries that have been created by calling the DescribeForwardTableEntries operation.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DNAT entries that have been created by calling the DescribeForwardTableEntries operation.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @summary Queries a list of created Alibaba Cloud Global Accelerator (GA) instances.
       *
       * @param request DescribeGlobalAccelerationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalAccelerationInstancesResponse
       */
      Models::DescribeGlobalAccelerationInstancesResponse describeGlobalAccelerationInstancesWithOptions(const Models::DescribeGlobalAccelerationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of created Alibaba Cloud Global Accelerator (GA) instances.
       *
       * @param request DescribeGlobalAccelerationInstancesRequest
       * @return DescribeGlobalAccelerationInstancesResponse
       */
      Models::DescribeGlobalAccelerationInstancesResponse describeGlobalAccelerationInstances(const Models::DescribeGlobalAccelerationInstancesRequest &request);

      /**
       * @summary Queries the cross-account authorization information of a specified network instance (VPC, VBR, or CCN) in Cloud Enterprise Network (CEN).
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization information of a specified network instance (VPC, VBR, or CCN) in Cloud Enterprise Network (CEN).
       *
       * @param request DescribeGrantRulesToCenRequest
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCen(const Models::DescribeGrantRulesToCenRequest &request);

      /**
       * @summary Queries the cross-account authorization list of Express Connect Router (ECR) for a VBR.
       *
       * @param request DescribeGrantRulesToEcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToEcrResponse
       */
      Models::DescribeGrantRulesToEcrResponse describeGrantRulesToEcrWithOptions(const Models::DescribeGrantRulesToEcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization list of Express Connect Router (ECR) for a VBR.
       *
       * @param request DescribeGrantRulesToEcrRequest
       * @return DescribeGrantRulesToEcrResponse
       */
      Models::DescribeGrantRulesToEcrResponse describeGrantRulesToEcr(const Models::DescribeGrantRulesToEcrRequest &request);

      /**
       * @summary Queries high-availability virtual IP addresses (HaVips) in a specified region.
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries high-availability virtual IP addresses (HaVips) in a specified region.
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries the configuration information of high-precision second-level monitoring for an EIP.
       *
       * @param request DescribeHighDefinitionMonitorLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHighDefinitionMonitorLogAttributeResponse
       */
      Models::DescribeHighDefinitionMonitorLogAttributeResponse describeHighDefinitionMonitorLogAttributeWithOptions(const Models::DescribeHighDefinitionMonitorLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of high-precision second-level monitoring for an EIP.
       *
       * @param request DescribeHighDefinitionMonitorLogAttributeRequest
       * @return DescribeHighDefinitionMonitorLogAttributeResponse
       */
      Models::DescribeHighDefinitionMonitorLogAttributeResponse describeHighDefinitionMonitorLogAttribute(const Models::DescribeHighDefinitionMonitorLogAttributeRequest &request);

      /**
       * @summary Queries the details of an access control policy group, including the IP addresses in the group and the specific information about associated IPv6 Translation Service mapping entries.
       *
       * @param request DescribeIPv6TranslatorAclListAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorAclListAttributesResponse
       */
      Models::DescribeIPv6TranslatorAclListAttributesResponse describeIPv6TranslatorAclListAttributesWithOptions(const Models::DescribeIPv6TranslatorAclListAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control policy group, including the IP addresses in the group and the specific information about associated IPv6 Translation Service mapping entries.
       *
       * @param request DescribeIPv6TranslatorAclListAttributesRequest
       * @return DescribeIPv6TranslatorAclListAttributesResponse
       */
      Models::DescribeIPv6TranslatorAclListAttributesResponse describeIPv6TranslatorAclListAttributes(const Models::DescribeIPv6TranslatorAclListAttributesRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorAclLists is deprecated
       *
       * @summary Queries created access control policy groups.
       *
       * @param request DescribeIPv6TranslatorAclListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorAclListsResponse
       */
      Models::DescribeIPv6TranslatorAclListsResponse describeIPv6TranslatorAclListsWithOptions(const Models::DescribeIPv6TranslatorAclListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorAclLists is deprecated
       *
       * @summary Queries created access control policy groups.
       *
       * @param request DescribeIPv6TranslatorAclListsRequest
       * @return DescribeIPv6TranslatorAclListsResponse
       */
      Models::DescribeIPv6TranslatorAclListsResponse describeIPv6TranslatorAclLists(const Models::DescribeIPv6TranslatorAclListsRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorEntries is deprecated
       *
       * @summary Queries IPv6 Translation mapping entries.
       *
       * @param request DescribeIPv6TranslatorEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorEntriesResponse
       */
      Models::DescribeIPv6TranslatorEntriesResponse describeIPv6TranslatorEntriesWithOptions(const Models::DescribeIPv6TranslatorEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6TranslatorEntries is deprecated
       *
       * @summary Queries IPv6 Translation mapping entries.
       *
       * @param request DescribeIPv6TranslatorEntriesRequest
       * @return DescribeIPv6TranslatorEntriesResponse
       */
      Models::DescribeIPv6TranslatorEntriesResponse describeIPv6TranslatorEntries(const Models::DescribeIPv6TranslatorEntriesRequest &request);

      /**
       * @deprecated OpenAPI DescribeIPv6Translators is deprecated
       *
       * @summary Queries a list of created IPv6 Translation Service instances.
       *
       * @param request DescribeIPv6TranslatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPv6TranslatorsResponse
       */
      Models::DescribeIPv6TranslatorsResponse describeIPv6TranslatorsWithOptions(const Models::DescribeIPv6TranslatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeIPv6Translators is deprecated
       *
       * @summary Queries a list of created IPv6 Translation Service instances.
       *
       * @param request DescribeIPv6TranslatorsRequest
       * @return DescribeIPv6TranslatorsResponse
       */
      Models::DescribeIPv6TranslatorsResponse describeIPv6Translators(const Models::DescribeIPv6TranslatorsRequest &request);

      /**
       * @summary Queries a list of IPv6 addresses.
       *
       * @param request DescribeIpv6AddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6AddressesResponse
       */
      Models::DescribeIpv6AddressesResponse describeIpv6AddressesWithOptions(const Models::DescribeIpv6AddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of IPv6 addresses.
       *
       * @param request DescribeIpv6AddressesRequest
       * @return DescribeIpv6AddressesResponse
       */
      Models::DescribeIpv6AddressesResponse describeIpv6Addresses(const Models::DescribeIpv6AddressesRequest &request);

      /**
       * @summary Queries IPv6 egress-only rules that you created.
       *
       * @param request DescribeIpv6EgressOnlyRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6EgressOnlyRulesResponse
       */
      Models::DescribeIpv6EgressOnlyRulesResponse describeIpv6EgressOnlyRulesWithOptions(const Models::DescribeIpv6EgressOnlyRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv6 egress-only rules that you created.
       *
       * @param request DescribeIpv6EgressOnlyRulesRequest
       * @return DescribeIpv6EgressOnlyRulesResponse
       */
      Models::DescribeIpv6EgressOnlyRulesResponse describeIpv6EgressOnlyRules(const Models::DescribeIpv6EgressOnlyRulesRequest &request);

      /**
       * @summary Queries the details of a specified IPv6 gateway, such as the region, VPC, running status, and billing method.
       *
       * @param request DescribeIpv6GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6GatewayAttributeResponse
       */
      Models::DescribeIpv6GatewayAttributeResponse describeIpv6GatewayAttributeWithOptions(const Models::DescribeIpv6GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified IPv6 gateway, such as the region, VPC, running status, and billing method.
       *
       * @param request DescribeIpv6GatewayAttributeRequest
       * @return DescribeIpv6GatewayAttributeResponse
       */
      Models::DescribeIpv6GatewayAttributeResponse describeIpv6GatewayAttribute(const Models::DescribeIpv6GatewayAttributeRequest &request);

      /**
       * @summary Queries IPv6 gateways created in a specified region.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6GatewaysWithOptions(const Models::DescribeIpv6GatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv6 gateways created in a specified region.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6Gateways(const Models::DescribeIpv6GatewaysRequest &request);

      /**
       * @summary Queries the list of elastic network interfaces (ENIs) associated with a VPC NAT gateway when the VPC NAT gateway is referenced as an EPS resource by PrivateLink. This feature is currently not available.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfacesWithOptions(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of elastic network interfaces (ENIs) associated with a VPC NAT gateway when the VPC NAT gateway is referenced as an EPS resource by PrivateLink. This feature is currently not available.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfaces(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request);

      /**
       * @summary Queries the details of NAT gateways that meet specified conditions in a specified region.
       *
       * @description This operation allows you to query the details of Internet NAT gateways or VPC NAT gateways. In this topic, "NAT gateway" refers to both types without distinction.
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of NAT gateways that meet specified conditions in a specified region.
       *
       * @description This operation allows you to query the details of Internet NAT gateways or VPC NAT gateways. In this topic, "NAT gateway" refers to both types without distinction.
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary Queries the details of a network ACL.
       *
       * @param request DescribeNetworkAclAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclAttributesResponse
       */
      Models::DescribeNetworkAclAttributesResponse describeNetworkAclAttributesWithOptions(const Models::DescribeNetworkAclAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a network ACL.
       *
       * @param request DescribeNetworkAclAttributesRequest
       * @return DescribeNetworkAclAttributesResponse
       */
      Models::DescribeNetworkAclAttributesResponse describeNetworkAclAttributes(const Models::DescribeNetworkAclAttributesRequest &request);

      /**
       * @summary Queries a list of network ACLs by calling the DescribeNetworkAcls operation.
       *
       * @param request DescribeNetworkAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAclsWithOptions(const Models::DescribeNetworkAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of network ACLs by calling the DescribeNetworkAcls operation.
       *
       * @param request DescribeNetworkAclsRequest
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAcls(const Models::DescribeNetworkAclsRequest &request);

      /**
       * @summary Queries the Letter of Authorization (LOA) information of an Express Connect circuit.
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOAWithOptions(const Models::DescribePhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Letter of Authorization (LOA) information of an Express Connect circuit.
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOA(const Models::DescribePhysicalConnectionLOARequest &request);

      /**
       * @summary Queries information about Express Connect circuits in a specified region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can use the filter options provided by the **DescribePhysicalConnections** operation to query information about specific Express Connect circuits. For the filter options supported by the system, refer to the description of **Key** in the **request parameters** section of this topic.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Express Connect circuits in a specified region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can use the filter options provided by the **DescribePhysicalConnections** operation to query information about specific Express Connect circuits. For the filter options supported by the system, refer to the description of **Key** in the **request parameters** section of this topic.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnections(const Models::DescribePhysicalConnectionsRequest &request);

      /**
       * @summary Queries the range of public IP addresses in a virtual private cloud (VPC) in a specified region.
       *
       * @description You cannot call the **DescribePublicIpAddress** operation to query the range of public IP addresses in the classic network.
       *
       * @param request DescribePublicIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublicIpAddressResponse
       */
      Models::DescribePublicIpAddressResponse describePublicIpAddressWithOptions(const Models::DescribePublicIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the range of public IP addresses in a virtual private cloud (VPC) in a specified region.
       *
       * @description You cannot call the **DescribePublicIpAddress** operation to query the range of public IP addresses in the classic network.
       *
       * @param request DescribePublicIpAddressRequest
       * @return DescribePublicIpAddressResponse
       */
      Models::DescribePublicIpAddressResponse describePublicIpAddress(const Models::DescribePublicIpAddressRequest &request);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries a list of routes.
       *
       * @description Before you call [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) to delete a route, you can call this operation to query the next hop information of the route that you want to delete.
       *
       * @param request DescribeRouteEntryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryListWithOptions(const Models::DescribeRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of routes.
       *
       * @description Before you call [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) to delete a route, you can call this operation to query the next hop information of the route that you want to delete.
       *
       * @param request DescribeRouteEntryListRequest
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryList(const Models::DescribeRouteEntryListRequest &request);

      /**
       * @summary Queries a list of route tables by calling the DescribeRouteTableList operation.
       *
       * @param request DescribeRouteTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTableListResponse
       */
      Models::DescribeRouteTableListResponse describeRouteTableListWithOptions(const Models::DescribeRouteTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of route tables by calling the DescribeRouteTableList operation.
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
       * @summary Queries router interfaces in a specified region by calling the DescribeRouterInterfaces operation.
       *
       * @param request DescribeRouterInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfacesWithOptions(const Models::DescribeRouterInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries router interfaces in a specified region by calling the DescribeRouterInterfaces operation.
       *
       * @param request DescribeRouterInterfacesRequest
       * @return DescribeRouterInterfacesResponse
       */
      Models::DescribeRouterInterfacesResponse describeRouterInterfaces(const Models::DescribeRouterInterfacesRequest &request);

      /**
       * @summary Queries the Alibaba Cloud Global Accelerator (GA) instances attached to a specified backend server.
       *
       * @description > This operation supports only dedicated-bandwidth instances.
       *
       * @param request DescribeServerRelatedGlobalAccelerationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerRelatedGlobalAccelerationInstancesResponse
       */
      Models::DescribeServerRelatedGlobalAccelerationInstancesResponse describeServerRelatedGlobalAccelerationInstancesWithOptions(const Models::DescribeServerRelatedGlobalAccelerationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud Global Accelerator (GA) instances attached to a specified backend server.
       *
       * @description > This operation supports only dedicated-bandwidth instances.
       *
       * @param request DescribeServerRelatedGlobalAccelerationInstancesRequest
       * @return DescribeServerRelatedGlobalAccelerationInstancesResponse
       */
      Models::DescribeServerRelatedGlobalAccelerationInstancesResponse describeServerRelatedGlobalAccelerationInstances(const Models::DescribeServerRelatedGlobalAccelerationInstancesRequest &request);

      /**
       * @summary Queries the SNAT entries that have been created.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntriesWithOptions(const Models::DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SNAT entries that have been created.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntries(const Models::DescribeSnatTableEntriesRequest &request);

      /**
       * @summary Queries the information about a specified SSL client certificate.
       *
       * @param request DescribeSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientCertResponse
       */
      Models::DescribeSslVpnClientCertResponse describeSslVpnClientCertWithOptions(const Models::DescribeSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified SSL client certificate.
       *
       * @param request DescribeSslVpnClientCertRequest
       * @return DescribeSslVpnClientCertResponse
       */
      Models::DescribeSslVpnClientCertResponse describeSslVpnClientCert(const Models::DescribeSslVpnClientCertRequest &request);

      /**
       * @summary Queries the SSL client certificates that have been created.
       *
       * @param request DescribeSslVpnClientCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientCertsResponse
       */
      Models::DescribeSslVpnClientCertsResponse describeSslVpnClientCertsWithOptions(const Models::DescribeSslVpnClientCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL client certificates that have been created.
       *
       * @param request DescribeSslVpnClientCertsRequest
       * @return DescribeSslVpnClientCertsResponse
       */
      Models::DescribeSslVpnClientCertsResponse describeSslVpnClientCerts(const Models::DescribeSslVpnClientCertsRequest &request);

      /**
       * @summary Queries information about clients that have established SSL-VPN connections to Alibaba Cloud under a specified VPN gateway instance by calling the DescribeSslVpnClients operation.
       *
       * @description If your VPN gateway instance was created before December 10, 2022, you must upgrade the VPN gateway instance to the latest version before you can view SSL client connection information. For more information, see [Upgrade a VPN gateway](https://help.aliyun.com/document_detail/2671058.html).
       * VPN gateway instances created after December 10, 2022 support viewing SSL client connection information by default.
       *
       * @param request DescribeSslVpnClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientsResponse
       */
      Models::DescribeSslVpnClientsResponse describeSslVpnClientsWithOptions(const Models::DescribeSslVpnClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about clients that have established SSL-VPN connections to Alibaba Cloud under a specified VPN gateway instance by calling the DescribeSslVpnClients operation.
       *
       * @description If your VPN gateway instance was created before December 10, 2022, you must upgrade the VPN gateway instance to the latest version before you can view SSL client connection information. For more information, see [Upgrade a VPN gateway](https://help.aliyun.com/document_detail/2671058.html).
       * VPN gateway instances created after December 10, 2022 support viewing SSL client connection information by default.
       *
       * @param request DescribeSslVpnClientsRequest
       * @return DescribeSslVpnClientsResponse
       */
      Models::DescribeSslVpnClientsResponse describeSslVpnClients(const Models::DescribeSslVpnClientsRequest &request);

      /**
       * @summary Queries the SSL servers that have been created.
       *
       * @param request DescribeSslVpnServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnServersResponse
       */
      Models::DescribeSslVpnServersResponse describeSslVpnServersWithOptions(const Models::DescribeSslVpnServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL servers that have been created.
       *
       * @param request DescribeSslVpnServersRequest
       * @return DescribeSslVpnServersResponse
       */
      Models::DescribeSslVpnServersResponse describeSslVpnServers(const Models::DescribeSslVpnServersRequest &request);

      /**
       * @summary Calls the DescribeTagKeys operation to return tag keys.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeTagKeys operation to return tag keys.
       *
       * @param request DescribeTagKeysRequest
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeys(const Models::DescribeTagKeysRequest &request);

      /**
       * @summary Calls the DescribeTagKeysForExpressConnect operation to return the tag list of Express Connect.
       *
       * @param request DescribeTagKeysForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysForExpressConnectResponse
       */
      Models::DescribeTagKeysForExpressConnectResponse describeTagKeysForExpressConnectWithOptions(const Models::DescribeTagKeysForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeTagKeysForExpressConnect operation to return the tag list of Express Connect.
       *
       * @param request DescribeTagKeysForExpressConnectRequest
       * @return DescribeTagKeysForExpressConnectResponse
       */
      Models::DescribeTagKeysForExpressConnectResponse describeTagKeysForExpressConnect(const Models::DescribeTagKeysForExpressConnectRequest &request);

      /**
       * @summary Queries a list of tags that meet the specified filter conditions.
       *
       * @description - Specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request to determine the objects to query.
       * - **Tag.N** is a tag of a resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match any of the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the results contain all tags that match any of the tag key-value pairs.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags that meet the specified filter conditions.
       *
       * @description - Specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request to determine the objects to query.
       * - **Tag.N** is a tag of a resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match any of the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the results contain all tags that match any of the tag key-value pairs.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the list of vRouters in a specified region.
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of vRouters in a specified region.
       *
       * @param request DescribeVRoutersRequest
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRouters(const Models::DescribeVRoutersRequest &request);

      /**
       * @summary Queries the configuration information of a specified vSwitch by calling the DescribeVSwitchAttributes operation.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributesWithOptions(const Models::DescribeVSwitchAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of a specified vSwitch by calling the DescribeVSwitchAttributes operation.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributes(const Models::DescribeVSwitchAttributesRequest &request);

      /**
       * @summary Queries networkable information. Internal networking is performed by vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries networkable information. Internal networking is performed by vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries a created VBR failover group by calling the DescribeVbrHa operation.
       *
       * @param request DescribeVbrHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVbrHaResponse
       */
      Models::DescribeVbrHaResponse describeVbrHaWithOptions(const Models::DescribeVbrHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a created VBR failover group by calling the DescribeVbrHa operation.
       *
       * @param request DescribeVbrHaRequest
       * @return DescribeVbrHaResponse
       */
      Models::DescribeVbrHaResponse describeVbrHa(const Models::DescribeVbrHaRequest &request);

      /**
       * @summary Queries the route information of an IPsec-VPN connection by calling the DescribeVcoRouteEntries operation.
       *
       * @param request DescribeVcoRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVcoRouteEntriesResponse
       */
      Models::DescribeVcoRouteEntriesResponse describeVcoRouteEntriesWithOptions(const Models::DescribeVcoRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route information of an IPsec-VPN connection by calling the DescribeVcoRouteEntries operation.
       *
       * @param request DescribeVcoRouteEntriesRequest
       * @return DescribeVcoRouteEntriesResponse
       */
      Models::DescribeVcoRouteEntriesResponse describeVcoRouteEntries(const Models::DescribeVcoRouteEntriesRequest &request);

      /**
       * @summary Queries the Virtual Border Routers (VBRs) that you have created.
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRoutersWithOptions(const Models::DescribeVirtualBorderRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Virtual Border Routers (VBRs) that you have created.
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRouters(const Models::DescribeVirtualBorderRoutersRequest &request);

      /**
       * @summary Queries the Virtual Border Routers (VBRs) under a specified Express Connect circuit, including VBRs owned by the circuit owner and VBRs owned by other accounts.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnectionWithOptions(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Virtual Border Routers (VBRs) under a specified Express Connect circuit, including VBRs owned by the circuit owner and VBRs owned by other accounts.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnection(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request);

      /**
       * @summary Queries the configuration of a specified VPC.
       *
       * @param request DescribeVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcAttributeResponse
       */
      Models::DescribeVpcAttributeResponse describeVpcAttributeWithOptions(const Models::DescribeVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a specified VPC.
       *
       * @param request DescribeVpcAttributeRequest
       * @return DescribeVpcAttributeResponse
       */
      Models::DescribeVpcAttributeResponse describeVpcAttribute(const Models::DescribeVpcAttributeRequest &request);

      /**
       * @summary Queries the cross-account authorization information of an Express Connect Router (ECR) for a specified network instance.
       *
       * @param request DescribeVpcGrantRulesToEcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcGrantRulesToEcrResponse
       */
      Models::DescribeVpcGrantRulesToEcrResponse describeVpcGrantRulesToEcrWithOptions(const Models::DescribeVpcGrantRulesToEcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization information of an Express Connect Router (ECR) for a specified network instance.
       *
       * @param request DescribeVpcGrantRulesToEcrRequest
       * @return DescribeVpcGrantRulesToEcrResponse
       */
      Models::DescribeVpcGrantRulesToEcrResponse describeVpcGrantRulesToEcr(const Models::DescribeVpcGrantRulesToEcrRequest &request);

      /**
       * @summary Queries created VPCs.
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created VPCs.
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries the configuration information of IPsec-VPN connections that are associated with transit router instances.
       *
       * @param request DescribeVpnAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnAttachmentsResponse
       */
      Models::DescribeVpnAttachmentsResponse describeVpnAttachmentsWithOptions(const Models::DescribeVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of IPsec-VPN connections that are associated with transit router instances.
       *
       * @param request DescribeVpnAttachmentsRequest
       * @return DescribeVpnAttachmentsResponse
       */
      Models::DescribeVpnAttachmentsResponse describeVpnAttachments(const Models::DescribeVpnAttachmentsRequest &request);

      /**
       * @summary Queries the information about a specified IPsec-VPN connection.
       *
       * @param request DescribeVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionResponse
       */
      Models::DescribeVpnConnectionResponse describeVpnConnectionWithOptions(const Models::DescribeVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified IPsec-VPN connection.
       *
       * @param request DescribeVpnConnectionRequest
       * @return DescribeVpnConnectionResponse
       */
      Models::DescribeVpnConnectionResponse describeVpnConnection(const Models::DescribeVpnConnectionRequest &request);

      /**
       * @summary Queries the log information of an IPsec-VPN connection by calling the DescribeVpnConnections operation.
       *
       * @param request DescribeVpnConnectionLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionLogsResponse
       */
      Models::DescribeVpnConnectionLogsResponse describeVpnConnectionLogsWithOptions(const Models::DescribeVpnConnectionLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log information of an IPsec-VPN connection by calling the DescribeVpnConnections operation.
       *
       * @param request DescribeVpnConnectionLogsRequest
       * @return DescribeVpnConnectionLogsResponse
       */
      Models::DescribeVpnConnectionLogsResponse describeVpnConnectionLogs(const Models::DescribeVpnConnectionLogsRequest &request);

      /**
       * @summary Queries information about IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnConnectionsResponse
       */
      Models::DescribeVpnConnectionsResponse describeVpnConnectionsWithOptions(const Models::DescribeVpnConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about IPsec-VPN connections.
       *
       * @param request DescribeVpnConnectionsRequest
       * @return DescribeVpnConnectionsResponse
       */
      Models::DescribeVpnConnectionsResponse describeVpnConnections(const Models::DescribeVpnConnectionsRequest &request);

      /**
       * @summary Queries the cross-account authorization information of an IPsec-VPN connection.
       *
       * @param request DescribeVpnCrossAccountAuthorizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnCrossAccountAuthorizationsResponse
       */
      Models::DescribeVpnCrossAccountAuthorizationsResponse describeVpnCrossAccountAuthorizationsWithOptions(const Models::DescribeVpnCrossAccountAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorization information of an IPsec-VPN connection.
       *
       * @param request DescribeVpnCrossAccountAuthorizationsRequest
       * @return DescribeVpnCrossAccountAuthorizationsResponse
       */
      Models::DescribeVpnCrossAccountAuthorizationsResponse describeVpnCrossAccountAuthorizations(const Models::DescribeVpnCrossAccountAuthorizationsRequest &request);

      /**
       * @summary Queries the details of a specified VPN gateway.
       *
       * @param request DescribeVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGatewayWithOptions(const Models::DescribeVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified VPN gateway.
       *
       * @param request DescribeVpnGatewayRequest
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGateway(const Models::DescribeVpnGatewayRequest &request);

      /**
       * @summary Queries the list of zones that support IPsec-VPN connection deployment in a specified region.
       *
       * @param request DescribeVpnGatewayAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayAvailableZonesResponse
       */
      Models::DescribeVpnGatewayAvailableZonesResponse describeVpnGatewayAvailableZonesWithOptions(const Models::DescribeVpnGatewayAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones that support IPsec-VPN connection deployment in a specified region.
       *
       * @param request DescribeVpnGatewayAvailableZonesRequest
       * @return DescribeVpnGatewayAvailableZonesResponse
       */
      Models::DescribeVpnGatewayAvailableZonesResponse describeVpnGatewayAvailableZones(const Models::DescribeVpnGatewayAvailableZonesRequest &request);

      /**
       * @summary Queries VPN gateways created in a specified region by calling the DescribeVpnGateways operation.
       *
       * @param request DescribeVpnGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewaysResponse
       */
      Models::DescribeVpnGatewaysResponse describeVpnGatewaysWithOptions(const Models::DescribeVpnGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries VPN gateways created in a specified region by calling the DescribeVpnGateways operation.
       *
       * @param request DescribeVpnGatewaysRequest
       * @return DescribeVpnGatewaysResponse
       */
      Models::DescribeVpnGatewaysResponse describeVpnGateways(const Models::DescribeVpnGatewaysRequest &request);

      /**
       * @summary Queries the policy-based routes configured for a VPN gateway instance by calling the DescribeVpnPbrRouteEntries operation.
       *
       * @param request DescribeVpnPbrRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnPbrRouteEntriesResponse
       */
      Models::DescribeVpnPbrRouteEntriesResponse describeVpnPbrRouteEntriesWithOptions(const Models::DescribeVpnPbrRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy-based routes configured for a VPN gateway instance by calling the DescribeVpnPbrRouteEntries operation.
       *
       * @param request DescribeVpnPbrRouteEntriesRequest
       * @return DescribeVpnPbrRouteEntriesResponse
       */
      Models::DescribeVpnPbrRouteEntriesResponse describeVpnPbrRouteEntries(const Models::DescribeVpnPbrRouteEntriesRequest &request);

      /**
       * @summary Queries the destination route entries and BGP route entries of a VPN gateway instance.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntriesWithOptions(const Models::DescribeVpnRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the destination route entries and BGP route entries of a VPN gateway instance.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntries(const Models::DescribeVpnRouteEntriesRequest &request);

      /**
       * @summary Queries the logs of an SSL server by calling the DescribeVpnSslServerLogs operation.
       *
       * @param request DescribeVpnSslServerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnSslServerLogsResponse
       */
      Models::DescribeVpnSslServerLogsResponse describeVpnSslServerLogsWithOptions(const Models::DescribeVpnSslServerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of an SSL server by calling the DescribeVpnSslServerLogs operation.
       *
       * @param request DescribeVpnSslServerLogsRequest
       * @return DescribeVpnSslServerLogsResponse
       */
      Models::DescribeVpnSslServerLogsResponse describeVpnSslServerLogs(const Models::DescribeVpnSslServerLogsRequest &request);

      /**
       * @summary Queries the list of zones in a specified region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones in a specified region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disassociates a DHCP options set from a VPC.
       *
       * @description - **DetachDhcpOptionsSetFromVpc** is an asynchronous operation. After you send a request, the system returns a request ID. However, the DHCP options set is not yet disassociated. The disassociation task runs in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the disassociation status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being disassociated.
       *     - If the DHCP options set is in the **UnUsed** state, the DHCP options set is disassociated.
       * - **DetachDhcpOptionsSetFromVpc** does not support concurrent disassociation of DHCP options sets from the same VPC.
       *
       * @param request DetachDhcpOptionsSetFromVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDhcpOptionsSetFromVpcResponse
       */
      Models::DetachDhcpOptionsSetFromVpcResponse detachDhcpOptionsSetFromVpcWithOptions(const Models::DetachDhcpOptionsSetFromVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a DHCP options set from a VPC.
       *
       * @description - **DetachDhcpOptionsSetFromVpc** is an asynchronous operation. After you send a request, the system returns a request ID. However, the DHCP options set is not yet disassociated. The disassociation task runs in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the disassociation status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being disassociated.
       *     - If the DHCP options set is in the **UnUsed** state, the DHCP options set is disassociated.
       * - **DetachDhcpOptionsSetFromVpc** does not support concurrent disassociation of DHCP options sets from the same VPC.
       *
       * @param request DetachDhcpOptionsSetFromVpcRequest
       * @return DetachDhcpOptionsSetFromVpcResponse
       */
      Models::DetachDhcpOptionsSetFromVpcResponse detachDhcpOptionsSetFromVpc(const Models::DetachDhcpOptionsSetFromVpcRequest &request);

      /**
       * @summary Diagnoses IPsec-VPN connections by calling the DiagnoseVpnConnections operation.
       *
       * @description - If the IPsec-VPN connection is in single-tunnel mode, the request parameter `VpnConnectionIds` is required when you call the **DiagnoseVpnConnections** operation.
       * - If the IPsec-VPN connection is in dual-tunnel mode, the request parameter `TunnelIds` is required when you call the **DiagnoseVpnConnections** operation.
       * - After you call the **DiagnoseVpnConnections** operation, if the current IPsec-VPN connection has issues, the operation returns the corresponding error code (the **FailedReasonCode** response parameter) and log information (the **SourceLog** response parameter). You can troubleshoot issues based on the error code and log information. For more information, see [Common errors and troubleshooting methods for IPsec-VPN connections](https://help.aliyun.com/document_detail/477862.html).
       *
       * @param request DiagnoseVpnConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseVpnConnectionsResponse
       */
      Models::DiagnoseVpnConnectionsResponse diagnoseVpnConnectionsWithOptions(const Models::DiagnoseVpnConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses IPsec-VPN connections by calling the DiagnoseVpnConnections operation.
       *
       * @description - If the IPsec-VPN connection is in single-tunnel mode, the request parameter `VpnConnectionIds` is required when you call the **DiagnoseVpnConnections** operation.
       * - If the IPsec-VPN connection is in dual-tunnel mode, the request parameter `TunnelIds` is required when you call the **DiagnoseVpnConnections** operation.
       * - After you call the **DiagnoseVpnConnections** operation, if the current IPsec-VPN connection has issues, the operation returns the corresponding error code (the **FailedReasonCode** response parameter) and log information (the **SourceLog** response parameter). You can troubleshoot issues based on the error code and log information. For more information, see [Common errors and troubleshooting methods for IPsec-VPN connections](https://help.aliyun.com/document_detail/477862.html).
       *
       * @param request DiagnoseVpnConnectionsRequest
       * @return DiagnoseVpnConnectionsResponse
       */
      Models::DiagnoseVpnConnectionsResponse diagnoseVpnConnections(const Models::DiagnoseVpnConnectionsRequest &request);

      /**
       * @summary Diagnoses a specified VPN gateway instance with one click by calling the DiagnoseVpnGateway operation.
       *
       * @description Only VPN gateway instances in specific regions support the one-click diagnostics feature. For more information about regions, see [Regions that support VPN Gateway features](https://help.aliyun.com/document_detail/430697.html).
       *
       * @param request DiagnoseVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGatewayWithOptions(const Models::DiagnoseVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses a specified VPN gateway instance with one click by calling the DiagnoseVpnGateway operation.
       *
       * @description Only VPN gateway instances in specific regions support the one-click diagnostics feature. For more information about regions, see [Regions that support VPN Gateway features](https://help.aliyun.com/document_detail/430697.html).
       *
       * @param request DiagnoseVpnGatewayRequest
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGateway(const Models::DiagnoseVpnGatewayRequest &request);

      /**
       * @deprecated OpenAPI DisableVpcClassicLink is deprecated
       *
       * @summary Shuts down ClassicLink.
       *
       * @param request DisableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLinkWithOptions(const Models::DisableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DisableVpcClassicLink is deprecated
       *
       * @summary Shuts down ClassicLink.
       *
       * @param request DisableVpcClassicLinkRequest
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLink(const Models::DisableVpcClassicLinkRequest &request);

      /**
       * @summary Dissociates a MACsec key from a dedicated Express Connect circuit port.
       *
       * @description - If you dissociate a key that is in the Associated state, the most recently effective key is automatically associated.
       * - If you dissociate a key that is in the Disassociated state, the key is deleted.
       *
       * @param request DisassociateMacSecKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateMacSecKeyResponse
       */
      Models::DisassociateMacSecKeyResponse disassociateMacSecKeyWithOptions(const Models::DisassociateMacSecKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a MACsec key from a dedicated Express Connect circuit port.
       *
       * @description - If you dissociate a key that is in the Associated state, the most recently effective key is automatically associated.
       * - If you dissociate a key that is in the Disassociated state, the key is deleted.
       *
       * @param request DisassociateMacSecKeyRequest
       * @return DisassociateMacSecKeyResponse
       */
      Models::DisassociateMacSecKeyResponse disassociateMacSecKey(const Models::DisassociateMacSecKeyRequest &request);

      /**
       * @summary Disassociates a gateway route table from an IPv4 gateway or IPv6 gateway instance.
       *
       * @param request DissociateRouteTableFromGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateRouteTableFromGatewayResponse
       */
      Models::DissociateRouteTableFromGatewayResponse dissociateRouteTableFromGatewayWithOptions(const Models::DissociateRouteTableFromGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a gateway route table from an IPv4 gateway or IPv6 gateway instance.
       *
       * @param request DissociateRouteTableFromGatewayRequest
       * @return DissociateRouteTableFromGatewayResponse
       */
      Models::DissociateRouteTableFromGatewayResponse dissociateRouteTableFromGateway(const Models::DissociateRouteTableFromGatewayRequest &request);

      /**
       * @summary Disassociates a gateway endpoint from route tables by calling the DissociateRouteTablesFromVpcGatewayEndpoint operation.
       *
       * @param request DissociateRouteTablesFromVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateRouteTablesFromVpcGatewayEndpointResponse
       */
      Models::DissociateRouteTablesFromVpcGatewayEndpointResponse dissociateRouteTablesFromVpcGatewayEndpointWithOptions(const Models::DissociateRouteTablesFromVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a gateway endpoint from route tables by calling the DissociateRouteTablesFromVpcGatewayEndpoint operation.
       *
       * @param request DissociateRouteTablesFromVpcGatewayEndpointRequest
       * @return DissociateRouteTablesFromVpcGatewayEndpointResponse
       */
      Models::DissociateRouteTablesFromVpcGatewayEndpointResponse dissociateRouteTablesFromVpcGatewayEndpoint(const Models::DissociateRouteTablesFromVpcGatewayEndpointRequest &request);

      /**
       * @summary Dissociates a VPN gateway from a certificate.
       *
       * @description - **DissociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the VPN gateway is not yet dissociated from the SSL certificate, and the dissociation task is still running in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway instance and check the dissociation status of the SSL certificate:
       *     - If the VPN gateway is in the **updating** state, the SSL certificate is being dissociated.
       *     - If the VPN gateway is in the **active** state, the SSL certificate is dissociated.
       * - **DissociateVpnGatewayWithCertificate** does not support concurrent SSL certificate dissociation for the same VPN gateway.
       *
       * @param request DissociateVpnGatewayWithCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateVpnGatewayWithCertificateResponse
       */
      Models::DissociateVpnGatewayWithCertificateResponse dissociateVpnGatewayWithCertificateWithOptions(const Models::DissociateVpnGatewayWithCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a VPN gateway from a certificate.
       *
       * @description - **DissociateVpnGatewayWithCertificate** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the VPN gateway is not yet dissociated from the SSL certificate, and the dissociation task is still running in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway instance and check the dissociation status of the SSL certificate:
       *     - If the VPN gateway is in the **updating** state, the SSL certificate is being dissociated.
       *     - If the VPN gateway is in the **active** state, the SSL certificate is dissociated.
       * - **DissociateVpnGatewayWithCertificate** does not support concurrent SSL certificate dissociation for the same VPN gateway.
       *
       * @param request DissociateVpnGatewayWithCertificateRequest
       * @return DissociateVpnGatewayWithCertificateResponse
       */
      Models::DissociateVpnGatewayWithCertificateResponse dissociateVpnGatewayWithCertificate(const Models::DissociateVpnGatewayWithCertificateRequest &request);

      /**
       * @summary Retrieves the configuration of an IPsec-VPN connection by calling the DownloadVpnConnectionConfig operation.
       *
       * @param request DownloadVpnConnectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadVpnConnectionConfigResponse
       */
      Models::DownloadVpnConnectionConfigResponse downloadVpnConnectionConfigWithOptions(const Models::DownloadVpnConnectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of an IPsec-VPN connection by calling the DownloadVpnConnectionConfig operation.
       *
       * @param request DownloadVpnConnectionConfigRequest
       * @return DownloadVpnConnectionConfigResponse
       */
      Models::DownloadVpnConnectionConfigResponse downloadVpnConnectionConfig(const Models::DownloadVpnConnectionConfigRequest &request);

      /**
       * @summary Enables an Express Connect circuit that is in the Confirmed state. After the circuit is enabled, it enters the Enabled state.
       *
       * @description When you call this operation, take note of the following items:
       * - You can enable only an Express Connect circuit that is in the **Confirmed** state.
       * - After the circuit is enabled, it enters the **Enabled** state.
       * - **EnablePhysicalConnection** is an asynchronous operation. After you send a request, the system returns an instance ID, but the Express Connect circuit is not yet enabled. The enabling task is still running in the background. You can call [DescribePhysicalConnections](https://help.aliyun.com/document_detail/2982519.html) to query the status of the Express Connect circuit.
       * - **EnablePhysicalConnection** does not support concurrent enabling of the same Express Connect circuit that is in the **Confirmed** state.
       *
       * @param request EnablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnectionWithOptions(const Models::EnablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an Express Connect circuit that is in the Confirmed state. After the circuit is enabled, it enters the Enabled state.
       *
       * @description When you call this operation, take note of the following items:
       * - You can enable only an Express Connect circuit that is in the **Confirmed** state.
       * - After the circuit is enabled, it enters the **Enabled** state.
       * - **EnablePhysicalConnection** is an asynchronous operation. After you send a request, the system returns an instance ID, but the Express Connect circuit is not yet enabled. The enabling task is still running in the background. You can call [DescribePhysicalConnections](https://help.aliyun.com/document_detail/2982519.html) to query the status of the Express Connect circuit.
       * - **EnablePhysicalConnection** does not support concurrent enabling of the same Express Connect circuit that is in the **Confirmed** state.
       *
       * @param request EnablePhysicalConnectionRequest
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnection(const Models::EnablePhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI EnableVpcClassicLink is deprecated
       *
       * @summary Enables ClassicLink.
       *
       * @param request EnableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcClassicLinkResponse
       */
      Models::EnableVpcClassicLinkResponse enableVpcClassicLinkWithOptions(const Models::EnableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI EnableVpcClassicLink is deprecated
       *
       * @summary Enables ClassicLink.
       *
       * @param request EnableVpcClassicLinkRequest
       * @return EnableVpcClassicLinkResponse
       */
      Models::EnableVpcClassicLinkResponse enableVpcClassicLink(const Models::EnableVpcClassicLinkRequest &request);

      /**
       * @summary Invokes the EnableVpcIpv4Gateway operation to activate IPv4 gateway.
       *
       * @description - The **EnableVpcIpv4Gateway** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the IPv4 gateway is not yet activated. The activation task continues to run in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the status of the IPv4 gateway.
       *     - If the IPv4 gateway is in the **Activating** state, the gateway is being activated.
       *     - If the IPv4 gateway is in the **Created** state, the gateway is activated.
       * - The **EnableVpcIpv4Gateway** operation does not support concurrent activation of the same IPv4 gateway.
       *
       * @param request EnableVpcIpv4GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcIpv4GatewayResponse
       */
      Models::EnableVpcIpv4GatewayResponse enableVpcIpv4GatewayWithOptions(const Models::EnableVpcIpv4GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the EnableVpcIpv4Gateway operation to activate IPv4 gateway.
       *
       * @description - The **EnableVpcIpv4Gateway** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the IPv4 gateway is not yet activated. The activation task continues to run in the background. You can call [GetIpv4GatewayAttribute](https://help.aliyun.com/document_detail/407670.html) to query the status of the IPv4 gateway.
       *     - If the IPv4 gateway is in the **Activating** state, the gateway is being activated.
       *     - If the IPv4 gateway is in the **Created** state, the gateway is activated.
       * - The **EnableVpcIpv4Gateway** operation does not support concurrent activation of the same IPv4 gateway.
       *
       * @param request EnableVpcIpv4GatewayRequest
       * @return EnableVpcIpv4GatewayResponse
       */
      Models::EnableVpcIpv4GatewayResponse enableVpcIpv4Gateway(const Models::EnableVpcIpv4GatewayRequest &request);

      /**
       * @summary Queries a created DHCP options set by calling the GetDhcpOptionsSet operation.
       *
       * @param request GetDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDhcpOptionsSetResponse
       */
      Models::GetDhcpOptionsSetResponse getDhcpOptionsSetWithOptions(const Models::GetDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a created DHCP options set by calling the GetDhcpOptionsSet operation.
       *
       * @param request GetDhcpOptionsSetRequest
       * @return GetDhcpOptionsSetResponse
       */
      Models::GetDhcpOptionsSetResponse getDhcpOptionsSet(const Models::GetDhcpOptionsSetRequest &request);

      /**
       * @summary Queries the activation status of the flow log service by calling the GetFlowLogServiceStatus operation.
       *
       * @param request GetFlowLogServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowLogServiceStatusResponse
       */
      Models::GetFlowLogServiceStatusResponse getFlowLogServiceStatusWithOptions(const Models::GetFlowLogServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of the flow log service by calling the GetFlowLogServiceStatus operation.
       *
       * @param request GetFlowLogServiceStatusRequest
       * @return GetFlowLogServiceStatusResponse
       */
      Models::GetFlowLogServiceStatusResponse getFlowLogServiceStatus(const Models::GetFlowLogServiceStatusRequest &request);

      /**
       * @summary Calls the GetIpv4GatewayAttribute operation.
       *
       * @param request GetIpv4GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpv4GatewayAttributeResponse
       */
      Models::GetIpv4GatewayAttributeResponse getIpv4GatewayAttributeWithOptions(const Models::GetIpv4GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the GetIpv4GatewayAttribute operation.
       *
       * @param request GetIpv4GatewayAttributeRequest
       * @return GetIpv4GatewayAttributeResponse
       */
      Models::GetIpv4GatewayAttributeResponse getIpv4GatewayAttribute(const Models::GetIpv4GatewayAttributeRequest &request);

      /**
       * @summary Queries the information about a single NAT gateway instance.
       *
       * @description This operation queries the information about a single Internet NAT gateway or VPC NAT gateway. The term "NAT gateway" in this topic refers to both types without distinction.
       *
       * @param request GetNatGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttributeWithOptions(const Models::GetNatGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a single NAT gateway instance.
       *
       * @description This operation queries the information about a single Internet NAT gateway or VPC NAT gateway. The term "NAT gateway" in this topic refers to both types without distinction.
       *
       * @param request GetNatGatewayAttributeRequest
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttribute(const Models::GetNatGatewayAttributeRequest &request);

      /**
       * @summary Queries whether outbound cloud traffic billing is enabled for the current account.
       *
       * @description ### Usage notes
       * You can call the GetPhysicalConnectionServiceStatus operation to check whether outbound traffic billing is enabled for the current account. For more information about outbound traffic billing, see [Enable outbound traffic billing](https://help.aliyun.com/document_detail/274385.html) and [Billing](https://help.aliyun.com/document_detail/54582.html).
       *
       * @param request GetPhysicalConnectionServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalConnectionServiceStatusResponse
       */
      Models::GetPhysicalConnectionServiceStatusResponse getPhysicalConnectionServiceStatusWithOptions(const Models::GetPhysicalConnectionServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether outbound cloud traffic billing is enabled for the current account.
       *
       * @description ### Usage notes
       * You can call the GetPhysicalConnectionServiceStatus operation to check whether outbound traffic billing is enabled for the current account. For more information about outbound traffic billing, see [Enable outbound traffic billing](https://help.aliyun.com/document_detail/274385.html) and [Billing](https://help.aliyun.com/document_detail/54582.html).
       *
       * @param request GetPhysicalConnectionServiceStatusRequest
       * @return GetPhysicalConnectionServiceStatusResponse
       */
      Models::GetPhysicalConnectionServiceStatusResponse getPhysicalConnectionServiceStatus(const Models::GetPhysicalConnectionServiceStatusRequest &request);

      /**
       * @summary Queries the activation status of the IP address pool feature by calling the GetPublicIpAddressPoolServiceStatus operation.
       *
       * @param request GetPublicIpAddressPoolServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicIpAddressPoolServiceStatusResponse
       */
      Models::GetPublicIpAddressPoolServiceStatusResponse getPublicIpAddressPoolServiceStatusWithOptions(const Models::GetPublicIpAddressPoolServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of the IP address pool feature by calling the GetPublicIpAddressPoolServiceStatus operation.
       *
       * @param request GetPublicIpAddressPoolServiceStatusRequest
       * @return GetPublicIpAddressPoolServiceStatusResponse
       */
      Models::GetPublicIpAddressPoolServiceStatusResponse getPublicIpAddressPoolServiceStatus(const Models::GetPublicIpAddressPoolServiceStatusRequest &request);

      /**
       * @summary Retrieves information about a route target group instance.
       *
       * @description Retrieves information about a route target group instance.
       *
       * @param request GetRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRouteTargetGroupResponse
       */
      Models::GetRouteTargetGroupResponse getRouteTargetGroupWithOptions(const Models::GetRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a route target group instance.
       *
       * @description Retrieves information about a route target group instance.
       *
       * @param request GetRouteTargetGroupRequest
       * @return GetRouteTargetGroupResponse
       */
      Models::GetRouteTargetGroupResponse getRouteTargetGroup(const Models::GetRouteTargetGroupRequest &request);

      /**
       * @summary Queries the status of the traffic mirroring feature by calling the GetTrafficMirrorServiceStatus operation.
       *
       * @param request GetTrafficMirrorServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficMirrorServiceStatusResponse
       */
      Models::GetTrafficMirrorServiceStatusResponse getTrafficMirrorServiceStatusWithOptions(const Models::GetTrafficMirrorServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the traffic mirroring feature by calling the GetTrafficMirrorServiceStatus operation.
       *
       * @param request GetTrafficMirrorServiceStatusRequest
       * @return GetTrafficMirrorServiceStatusResponse
       */
      Models::GetTrafficMirrorServiceStatusResponse getTrafficMirrorServiceStatus(const Models::GetTrafficMirrorServiceStatusRequest &request);

      /**
       * @summary Queries the usage of a reserved CIDR block for a vSwitch.
       *
       * @param request GetVSwitchCidrReservationUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVSwitchCidrReservationUsageResponse
       */
      Models::GetVSwitchCidrReservationUsageResponse getVSwitchCidrReservationUsageWithOptions(const Models::GetVSwitchCidrReservationUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of a reserved CIDR block for a vSwitch.
       *
       * @param request GetVSwitchCidrReservationUsageRequest
       * @return GetVSwitchCidrReservationUsageResponse
       */
      Models::GetVSwitchCidrReservationUsageResponse getVSwitchCidrReservationUsage(const Models::GetVSwitchCidrReservationUsageRequest &request);

      /**
       * @summary Queries the attributes of a VPC gateway endpoint.
       *
       * @param request GetVpcGatewayEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcGatewayEndpointAttributeResponse
       */
      Models::GetVpcGatewayEndpointAttributeResponse getVpcGatewayEndpointAttributeWithOptions(const Models::GetVpcGatewayEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a VPC gateway endpoint.
       *
       * @param request GetVpcGatewayEndpointAttributeRequest
       * @return GetVpcGatewayEndpointAttributeResponse
       */
      Models::GetVpcGatewayEndpointAttributeResponse getVpcGatewayEndpointAttribute(const Models::GetVpcGatewayEndpointAttributeRequest &request);

      /**
       * @summary Queries the associations of a prefix list.
       *
       * @param request GetVpcPrefixListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPrefixListAssociationsResponse
       */
      Models::GetVpcPrefixListAssociationsResponse getVpcPrefixListAssociationsWithOptions(const Models::GetVpcPrefixListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associations of a prefix list.
       *
       * @param request GetVpcPrefixListAssociationsRequest
       * @return GetVpcPrefixListAssociationsResponse
       */
      Models::GetVpcPrefixListAssociationsResponse getVpcPrefixListAssociations(const Models::GetVpcPrefixListAssociationsRequest &request);

      /**
       * @summary Calls the GetVpcPrefixListEntries operation to query information about a specified prefix list.
       *
       * @param request GetVpcPrefixListEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPrefixListEntriesResponse
       */
      Models::GetVpcPrefixListEntriesResponse getVpcPrefixListEntriesWithOptions(const Models::GetVpcPrefixListEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the GetVpcPrefixListEntries operation to query information about a specified prefix list.
       *
       * @param request GetVpcPrefixListEntriesRequest
       * @return GetVpcPrefixListEntriesResponse
       */
      Models::GetVpcPrefixListEntriesResponse getVpcPrefixListEntries(const Models::GetVpcPrefixListEntriesRequest &request);

      /**
       * @summary Queries the details of route types by calling the GetVpcRouteEntrySummary operation.
       *
       * @param request GetVpcRouteEntrySummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcRouteEntrySummaryResponse
       */
      Models::GetVpcRouteEntrySummaryResponse getVpcRouteEntrySummaryWithOptions(const Models::GetVpcRouteEntrySummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of route types by calling the GetVpcRouteEntrySummary operation.
       *
       * @param request GetVpcRouteEntrySummaryRequest
       * @return GetVpcRouteEntrySummaryResponse
       */
      Models::GetVpcRouteEntrySummaryResponse getVpcRouteEntrySummary(const Models::GetVpcRouteEntrySummaryRequest &request);

      /**
       * @summary Queries the one-click diagnostic result of a VPN gateway instance by calling the GetVpnGatewayDiagnoseResult operation.
       *
       * @description When you call the **GetVpnGatewayDiagnoseResult** operation, you must specify at least one of the **DiagnoseId** and **VpnGatewayId** parameters in addition to the required parameters.
       *
       * @param request GetVpnGatewayDiagnoseResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpnGatewayDiagnoseResultResponse
       */
      Models::GetVpnGatewayDiagnoseResultResponse getVpnGatewayDiagnoseResultWithOptions(const Models::GetVpnGatewayDiagnoseResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the one-click diagnostic result of a VPN gateway instance by calling the GetVpnGatewayDiagnoseResult operation.
       *
       * @description When you call the **GetVpnGatewayDiagnoseResult** operation, you must specify at least one of the **DiagnoseId** and **VpnGatewayId** parameters in addition to the required parameters.
       *
       * @param request GetVpnGatewayDiagnoseResultRequest
       * @return GetVpnGatewayDiagnoseResultResponse
       */
      Models::GetVpnGatewayDiagnoseResultResponse getVpnGatewayDiagnoseResult(const Models::GetVpnGatewayDiagnoseResultRequest &request);

      /**
       * @summary Grants permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description - Before you attach a network instance that belongs to a different Alibaba Cloud account, you must grant permissions to the CEN instance under the Alibaba Cloud account to which the network instance belongs.
       * >The **GrantInstanceToCen** operation is a VPC API operation. Therefore, you must use the `vpc.aliyuncs.com` endpoint to call this operation. The API version is `2016-04-28`. 
       * - The **GrantInstanceToCen** operation does not support concurrent calls to grant permissions to a CEN instance for the same VPC, VBR, or CCN.
       *
       * @param request GrantInstanceToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCenWithOptions(const Models::GrantInstanceToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description - Before you attach a network instance that belongs to a different Alibaba Cloud account, you must grant permissions to the CEN instance under the Alibaba Cloud account to which the network instance belongs.
       * >The **GrantInstanceToCen** operation is a VPC API operation. Therefore, you must use the `vpc.aliyuncs.com` endpoint to call this operation. The API version is `2016-04-28`. 
       * - The **GrantInstanceToCen** operation does not support concurrent calls to grant permissions to a CEN instance for the same VPC, VBR, or CCN.
       *
       * @param request GrantInstanceToCenRequest
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCen(const Models::GrantInstanceToCenRequest &request);

      /**
       * @summary Invokes the GrantInstanceToVbr operation to grant authorization of a VPC-connected instance to a VBR instance for cross-account VBR uplink scenarios.
       *
       * @description When creating a cross-account VBR uplink connection, you must grant authorization of the VPC-connected instance to the VBR instance.
       *
       * @param tmpReq GrantInstanceToVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbrWithOptions(const Models::GrantInstanceToVbrRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the GrantInstanceToVbr operation to grant authorization of a VPC-connected instance to a VBR instance for cross-account VBR uplink scenarios.
       *
       * @description When creating a cross-account VBR uplink connection, you must grant authorization of the VPC-connected instance to the VBR instance.
       *
       * @param request GrantInstanceToVbrRequest
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbr(const Models::GrantInstanceToVbrRequest &request);

      /**
       * @summary Calls the ListBusinessAccessPoints operation to query access point information for Express Connect circuits.
       *
       * @param request ListBusinessAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPointsWithOptions(const Models::ListBusinessAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ListBusinessAccessPoints operation to query access point information for Express Connect circuits.
       *
       * @param request ListBusinessAccessPointsRequest
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPoints(const Models::ListBusinessAccessPointsRequest &request);

      /**
       * @summary Queries the list of regions where Express Connect circuits are available for purchase.
       *
       * @param request ListBusinessRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessRegionsResponse
       */
      Models::ListBusinessRegionsResponse listBusinessRegionsWithOptions(const Models::ListBusinessRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions where Express Connect circuits are available for purchase.
       *
       * @param request ListBusinessRegionsRequest
       * @return ListBusinessRegionsResponse
       */
      Models::ListBusinessRegionsResponse listBusinessRegions(const Models::ListBusinessRegionsRequest &request);

      /**
       * @summary Queries a list of created DHCP options sets by calling the ListDhcpOptionsSets operation.
       *
       * @param request ListDhcpOptionsSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDhcpOptionsSetsResponse
       */
      Models::ListDhcpOptionsSetsResponse listDhcpOptionsSetsWithOptions(const Models::ListDhcpOptionsSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of created DHCP options sets by calling the ListDhcpOptionsSets operation.
       *
       * @param request ListDhcpOptionsSetsRequest
       * @return ListDhcpOptionsSetsResponse
       */
      Models::ListDhcpOptionsSetsResponse listDhcpOptionsSets(const Models::ListDhcpOptionsSetsRequest &request);

      /**
       * @summary Queries the zones where NAT gateway resources are available by calling the ListEnhanhcedNatGatewayAvailableZones operation.
       *
       * @description This operation queries the zones available for Internet NAT gateway or VPC NAT gateway resources. In this topic, "NAT gateway" refers to both types without distinction.
       *
       * @param request ListEnhanhcedNatGatewayAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnhanhcedNatGatewayAvailableZonesResponse
       */
      Models::ListEnhanhcedNatGatewayAvailableZonesResponse listEnhanhcedNatGatewayAvailableZonesWithOptions(const Models::ListEnhanhcedNatGatewayAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones where NAT gateway resources are available by calling the ListEnhanhcedNatGatewayAvailableZones operation.
       *
       * @description This operation queries the zones available for Internet NAT gateway or VPC NAT gateway resources. In this topic, "NAT gateway" refers to both types without distinction.
       *
       * @param request ListEnhanhcedNatGatewayAvailableZonesRequest
       * @return ListEnhanhcedNatGatewayAvailableZonesResponse
       */
      Models::ListEnhanhcedNatGatewayAvailableZonesResponse listEnhanhcedNatGatewayAvailableZones(const Models::ListEnhanhcedNatGatewayAvailableZonesRequest &request);

      /**
       * @summary Queries the list of FULLNAT entries.
       *
       * @param request ListFullNatEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFullNatEntriesResponse
       */
      Models::ListFullNatEntriesResponse listFullNatEntriesWithOptions(const Models::ListFullNatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of FULLNAT entries.
       *
       * @param request ListFullNatEntriesRequest
       * @return ListFullNatEntriesResponse
       */
      Models::ListFullNatEntriesResponse listFullNatEntries(const Models::ListFullNatEntriesRequest &request);

      /**
       * @summary Queries the route entries in a gateway route table.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntriesWithOptions(const Models::ListGatewayRouteTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route entries in a gateway route table.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntries(const Models::ListGatewayRouteTableEntriesRequest &request);

      /**
       * @summary Queries region information by calling the ListGeographicSubRegions operation.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeographicSubRegionsResponse
       */
      Models::ListGeographicSubRegionsResponse listGeographicSubRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries region information by calling the ListGeographicSubRegions operation.
       *
       * @return ListGeographicSubRegionsResponse
       */
      Models::ListGeographicSubRegionsResponse listGeographicSubRegions();

      /**
       * @summary Queries the logs of an IPsec server by calling the ListIpsecServerLogs operation.
       *
       * @param request ListIpsecServerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpsecServerLogsResponse
       */
      Models::ListIpsecServerLogsResponse listIpsecServerLogsWithOptions(const Models::ListIpsecServerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of an IPsec server by calling the ListIpsecServerLogs operation.
       *
       * @param request ListIpsecServerLogsRequest
       * @return ListIpsecServerLogsResponse
       */
      Models::ListIpsecServerLogsResponse listIpsecServerLogs(const Models::ListIpsecServerLogsRequest &request);

      /**
       * @summary Queries the IPsec servers that have been created.
       *
       * @param request ListIpsecServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpsecServersResponse
       */
      Models::ListIpsecServersResponse listIpsecServersWithOptions(const Models::ListIpsecServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPsec servers that have been created.
       *
       * @param request ListIpsecServersRequest
       * @return ListIpsecServersResponse
       */
      Models::ListIpsecServersResponse listIpsecServers(const Models::ListIpsecServersRequest &request);

      /**
       * @summary Queries a list of IPv4 gateway instances.
       *
       * @param request ListIpv4GatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpv4GatewaysResponse
       */
      Models::ListIpv4GatewaysResponse listIpv4GatewaysWithOptions(const Models::ListIpv4GatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of IPv4 gateway instances.
       *
       * @param request ListIpv4GatewaysRequest
       * @return ListIpv4GatewaysResponse
       */
      Models::ListIpv4GatewaysResponse listIpv4Gateways(const Models::ListIpv4GatewaysRequest &request);

      /**
       * @summary Queries a list of NAT CIDR blocks.
       *
       * @param request ListNatIpCidrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNatIpCidrsResponse
       */
      Models::ListNatIpCidrsResponse listNatIpCidrsWithOptions(const Models::ListNatIpCidrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of NAT CIDR blocks.
       *
       * @param request ListNatIpCidrsRequest
       * @return ListNatIpCidrsResponse
       */
      Models::ListNatIpCidrsResponse listNatIpCidrs(const Models::ListNatIpCidrsRequest &request);

      /**
       * @summary Queries a list of NAT IP addresses.
       *
       * @param request ListNatIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNatIpsResponse
       */
      Models::ListNatIpsResponse listNatIpsWithOptions(const Models::ListNatIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of NAT IP addresses.
       *
       * @param request ListNatIpsRequest
       * @return ListNatIpsResponse
       */
      Models::ListNatIpsResponse listNatIps(const Models::ListNatIpsRequest &request);

      /**
       * @summary Queries the device-level capabilities supported by an Express Connect circuit.
       *
       * @param request ListPhysicalConnectionFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhysicalConnectionFeaturesResponse
       */
      Models::ListPhysicalConnectionFeaturesResponse listPhysicalConnectionFeaturesWithOptions(const Models::ListPhysicalConnectionFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the device-level capabilities supported by an Express Connect circuit.
       *
       * @param request ListPhysicalConnectionFeaturesRequest
       * @return ListPhysicalConnectionFeaturesResponse
       */
      Models::ListPhysicalConnectionFeaturesResponse listPhysicalConnectionFeatures(const Models::ListPhysicalConnectionFeaturesRequest &request);

      /**
       * @summary Queries information about prefix lists.
       *
       * @param request ListPrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrefixListsResponse
       */
      Models::ListPrefixListsResponse listPrefixListsWithOptions(const Models::ListPrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about prefix lists.
       *
       * @param request ListPrefixListsRequest
       * @return ListPrefixListsResponse
       */
      Models::ListPrefixListsResponse listPrefixLists(const Models::ListPrefixListsRequest &request);

      /**
       * @summary Queries the CIDR block information in an IP address pool.
       *
       * @param request ListPublicIpAddressPoolCidrBlocksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicIpAddressPoolCidrBlocksResponse
       */
      Models::ListPublicIpAddressPoolCidrBlocksResponse listPublicIpAddressPoolCidrBlocksWithOptions(const Models::ListPublicIpAddressPoolCidrBlocksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR block information in an IP address pool.
       *
       * @param request ListPublicIpAddressPoolCidrBlocksRequest
       * @return ListPublicIpAddressPoolCidrBlocksResponse
       */
      Models::ListPublicIpAddressPoolCidrBlocksResponse listPublicIpAddressPoolCidrBlocks(const Models::ListPublicIpAddressPoolCidrBlocksRequest &request);

      /**
       * @summary Queries information about available IP address pools.
       *
       * @param request ListPublicIpAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicIpAddressPoolsResponse
       */
      Models::ListPublicIpAddressPoolsResponse listPublicIpAddressPoolsWithOptions(const Models::ListPublicIpAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about available IP address pools.
       *
       * @param request ListPublicIpAddressPoolsRequest
       * @return ListPublicIpAddressPoolsResponse
       */
      Models::ListPublicIpAddressPoolsResponse listPublicIpAddressPools(const Models::ListPublicIpAddressPoolsRequest &request);

      /**
       * @summary Queries a list of route target groups.
       *
       * @description Queries a list of route target groups.
       *
       * @param request ListRouteTargetGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRouteTargetGroupsResponse
       */
      Models::ListRouteTargetGroupsResponse listRouteTargetGroupsWithOptions(const Models::ListRouteTargetGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of route target groups.
       *
       * @description Queries a list of route target groups.
       *
       * @param request ListRouteTargetGroupsRequest
       * @return ListRouteTargetGroupsResponse
       */
      Models::ListRouteTargetGroupsResponse listRouteTargetGroups(const Models::ListRouteTargetGroupsRequest &request);

      /**
       * @summary Queries the tags that are bound to cloud resources.
       *
       * @description - Specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request to determine the query object.
       * - **Tag.N** is a tag of the resource, which consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned results contain resources that include all specified key-value pairs.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to cloud resources.
       *
       * @description - Specify at least **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request to determine the query object.
       * - **Tag.N** is a tag of the resource, which consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned results contain resources that include all specified key-value pairs.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tags that are bound to Express Connect resources by calling the ListTagResourcesForExpressConnect operation.
       *
       * @description - To specify the objects to query, set **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request parameters.
       * - **Tag.N** is a tag of a resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned results contain resources that include all specified key-value pairs.
       *
       * @param request ListTagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesForExpressConnectResponse
       */
      Models::ListTagResourcesForExpressConnectResponse listTagResourcesForExpressConnectWithOptions(const Models::ListTagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to Express Connect resources by calling the ListTagResourcesForExpressConnect operation.
       *
       * @description - To specify the objects to query, set **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) in the request parameters.
       * - **Tag.N** is a tag of a resource and consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the returned results contain resources that include all specified key-value pairs.
       *
       * @param request ListTagResourcesForExpressConnectRequest
       * @return ListTagResourcesForExpressConnectResponse
       */
      Models::ListTagResourcesForExpressConnectResponse listTagResourcesForExpressConnect(const Models::ListTagResourcesForExpressConnectRequest &request);

      /**
       * @summary Queries traffic mirror filters.
       *
       * @param request ListTrafficMirrorFiltersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMirrorFiltersResponse
       */
      Models::ListTrafficMirrorFiltersResponse listTrafficMirrorFiltersWithOptions(const Models::ListTrafficMirrorFiltersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic mirror filters.
       *
       * @param request ListTrafficMirrorFiltersRequest
       * @return ListTrafficMirrorFiltersResponse
       */
      Models::ListTrafficMirrorFiltersResponse listTrafficMirrorFilters(const Models::ListTrafficMirrorFiltersRequest &request);

      /**
       * @summary Queries the details of traffic mirror sessions.
       *
       * @param request ListTrafficMirrorSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMirrorSessionsResponse
       */
      Models::ListTrafficMirrorSessionsResponse listTrafficMirrorSessionsWithOptions(const Models::ListTrafficMirrorSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of traffic mirror sessions.
       *
       * @param request ListTrafficMirrorSessionsRequest
       * @return ListTrafficMirrorSessionsResponse
       */
      Models::ListTrafficMirrorSessionsResponse listTrafficMirrorSessions(const Models::ListTrafficMirrorSessionsRequest &request);

      /**
       * @summary Queries reserved CIDR blocks for a vSwitch.
       *
       * @param request ListVSwitchCidrReservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVSwitchCidrReservationsResponse
       */
      Models::ListVSwitchCidrReservationsResponse listVSwitchCidrReservationsWithOptions(const Models::ListVSwitchCidrReservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries reserved CIDR blocks for a vSwitch.
       *
       * @param request ListVSwitchCidrReservationsRequest
       * @return ListVSwitchCidrReservationsResponse
       */
      Models::ListVSwitchCidrReservationsResponse listVSwitchCidrReservations(const Models::ListVSwitchCidrReservationsRequest &request);

      /**
       * @summary Queries information about shared Express Connect circuits by calling the ListVirtualPhysicalConnections operation.
       *
       * @param request ListVirtualPhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualPhysicalConnectionsResponse
       */
      Models::ListVirtualPhysicalConnectionsResponse listVirtualPhysicalConnectionsWithOptions(const Models::ListVirtualPhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about shared Express Connect circuits by calling the ListVirtualPhysicalConnections operation.
       *
       * @param request ListVirtualPhysicalConnectionsRequest
       * @return ListVirtualPhysicalConnectionsResponse
       */
      Models::ListVirtualPhysicalConnectionsResponse listVirtualPhysicalConnections(const Models::ListVirtualPhysicalConnectionsRequest &request);

      /**
       * @summary Queries the endpoint services that are available to you.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUserWithOptions(const Models::ListVpcEndpointServicesByEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint services that are available to you.
       *
       * @param request ListVpcEndpointServicesByEndUserRequest
       * @return ListVpcEndpointServicesByEndUserResponse
       */
      Models::ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUser(const Models::ListVpcEndpointServicesByEndUserRequest &request);

      /**
       * @summary Queries a list of created VPC gateway endpoints.
       *
       * @param request ListVpcGatewayEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcGatewayEndpointsResponse
       */
      Models::ListVpcGatewayEndpointsResponse listVpcGatewayEndpointsWithOptions(const Models::ListVpcGatewayEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of created VPC gateway endpoints.
       *
       * @param request ListVpcGatewayEndpointsRequest
       * @return ListVpcGatewayEndpointsResponse
       */
      Models::ListVpcGatewayEndpointsResponse listVpcGatewayEndpoints(const Models::ListVpcGatewayEndpointsRequest &request);

      /**
       * @summary Queries the route publish status.
       *
       * @param request ListVpcPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcPublishedRouteEntriesResponse
       */
      Models::ListVpcPublishedRouteEntriesResponse listVpcPublishedRouteEntriesWithOptions(const Models::ListVpcPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route publish status.
       *
       * @param request ListVpcPublishedRouteEntriesRequest
       * @return ListVpcPublishedRouteEntriesResponse
       */
      Models::ListVpcPublishedRouteEntriesResponse listVpcPublishedRouteEntries(const Models::ListVpcPublishedRouteEntriesRequest &request);

      /**
       * @summary Queries the associations between VPN gateway instances and certificates in a specified region.
       *
       * @description When you call **ListVpnCertificateAssociations**:
       * - If you specify only the **RegionId** parameter, all associations between VPN gateway instances and SSL certificates in the specified region are queried.
       * - If you specify the **RegionId** and **CertificateType** parameters, the associations between VPN gateway instances and SSL certificates of the specified certificate type in the specified region are queried.
       * - If you specify the **RegionId** and **VpnGatewayId** parameters, the associations between the specified VPN gateway instances and SSL certificates in the specified region are queried.
       * - If you specify the **RegionId** and **CertificateId** parameters, the associations between the specified SSL certificates and VPN gateway instances in the specified region are queried.
       *
       * @param request ListVpnCertificateAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpnCertificateAssociationsResponse
       */
      Models::ListVpnCertificateAssociationsResponse listVpnCertificateAssociationsWithOptions(const Models::ListVpnCertificateAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associations between VPN gateway instances and certificates in a specified region.
       *
       * @description When you call **ListVpnCertificateAssociations**:
       * - If you specify only the **RegionId** parameter, all associations between VPN gateway instances and SSL certificates in the specified region are queried.
       * - If you specify the **RegionId** and **CertificateType** parameters, the associations between VPN gateway instances and SSL certificates of the specified certificate type in the specified region are queried.
       * - If you specify the **RegionId** and **VpnGatewayId** parameters, the associations between the specified VPN gateway instances and SSL certificates in the specified region are queried.
       * - If you specify the **RegionId** and **CertificateId** parameters, the associations between the specified SSL certificates and VPN gateway instances in the specified region are queried.
       *
       * @param request ListVpnCertificateAssociationsRequest
       * @return ListVpnCertificateAssociationsResponse
       */
      Models::ListVpnCertificateAssociationsResponse listVpnCertificateAssociations(const Models::ListVpnCertificateAssociationsRequest &request);

      /**
       * @summary Modifies the configurations of a BGP group by calling the ModifyBgpGroupAttribute operation.
       *
       * @param request ModifyBgpGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBgpGroupAttributeResponse
       */
      Models::ModifyBgpGroupAttributeResponse modifyBgpGroupAttributeWithOptions(const Models::ModifyBgpGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a BGP group by calling the ModifyBgpGroupAttribute operation.
       *
       * @param request ModifyBgpGroupAttributeRequest
       * @return ModifyBgpGroupAttributeResponse
       */
      Models::ModifyBgpGroupAttributeResponse modifyBgpGroupAttribute(const Models::ModifyBgpGroupAttributeRequest &request);

      /**
       * @summary Modifies the attributes of a BGP peer.
       *
       * @param request ModifyBgpPeerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBgpPeerAttributeResponse
       */
      Models::ModifyBgpPeerAttributeResponse modifyBgpPeerAttributeWithOptions(const Models::ModifyBgpPeerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a BGP peer.
       *
       * @param request ModifyBgpPeerAttributeRequest
       * @return ModifyBgpPeerAttributeResponse
       */
      Models::ModifyBgpPeerAttributeResponse modifyBgpPeerAttribute(const Models::ModifyBgpPeerAttributeRequest &request);

      /**
       * @summary Modifies the name and description of an Internet Shared Bandwidth instance.
       *
       * @param request ModifyCommonBandwidthPackageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageAttributeResponse
       */
      Models::ModifyCommonBandwidthPackageAttributeResponse modifyCommonBandwidthPackageAttributeWithOptions(const Models::ModifyCommonBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an Internet Shared Bandwidth instance.
       *
       * @param request ModifyCommonBandwidthPackageAttributeRequest
       * @return ModifyCommonBandwidthPackageAttributeResponse
       */
      Models::ModifyCommonBandwidthPackageAttributeResponse modifyCommonBandwidthPackageAttribute(const Models::ModifyCommonBandwidthPackageAttributeRequest &request);

      /**
       * @summary Sets the maximum available bandwidth for an EIP that has been added to an Internet Shared Bandwidth instance.
       *
       * @description By calling the **ModifyCommonBandwidthPackageIpBandwidth** operation, you can flexibly allocate the maximum available bandwidth for each EIP added to an Internet Shared Bandwidth instance, preventing the bandwidth from being consumed by a single EIP.
       * For example, if two EIPs are added to an 800 Mbps Internet Shared Bandwidth instance, you can set the maximum available bandwidth to 500 Mbps for the first EIP and 400 Mbps for the second EIP. After the configuration, the available bandwidth of the first EIP does not exceed 500 Mbps, and the available bandwidth of the second EIP does not exceed 400 Mbps.
       * Before you begin:
       * - This operation takes effect only when the EIP is associated with an ECS instance. The configuration does not take effect when the EIP is attached to a CLB instance, NAT gateway, secondary elastic network interface (ENI), or high-availability virtual IP address (HAVIP). This feature is not active in those scenarios.
       * - This operation is in public preview and can only be used through the API to set the maximum available bandwidth for an EIP that has been added to an Internet Shared Bandwidth instance. The console does not support this feature.
       * - This operation does not support concurrent requests to set the maximum available bandwidth for the same EIP.
       *
       * @param request ModifyCommonBandwidthPackageIpBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageIpBandwidthResponse
       */
      Models::ModifyCommonBandwidthPackageIpBandwidthResponse modifyCommonBandwidthPackageIpBandwidthWithOptions(const Models::ModifyCommonBandwidthPackageIpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the maximum available bandwidth for an EIP that has been added to an Internet Shared Bandwidth instance.
       *
       * @description By calling the **ModifyCommonBandwidthPackageIpBandwidth** operation, you can flexibly allocate the maximum available bandwidth for each EIP added to an Internet Shared Bandwidth instance, preventing the bandwidth from being consumed by a single EIP.
       * For example, if two EIPs are added to an 800 Mbps Internet Shared Bandwidth instance, you can set the maximum available bandwidth to 500 Mbps for the first EIP and 400 Mbps for the second EIP. After the configuration, the available bandwidth of the first EIP does not exceed 500 Mbps, and the available bandwidth of the second EIP does not exceed 400 Mbps.
       * Before you begin:
       * - This operation takes effect only when the EIP is associated with an ECS instance. The configuration does not take effect when the EIP is attached to a CLB instance, NAT gateway, secondary elastic network interface (ENI), or high-availability virtual IP address (HAVIP). This feature is not active in those scenarios.
       * - This operation is in public preview and can only be used through the API to set the maximum available bandwidth for an EIP that has been added to an Internet Shared Bandwidth instance. The console does not support this feature.
       * - This operation does not support concurrent requests to set the maximum available bandwidth for the same EIP.
       *
       * @param request ModifyCommonBandwidthPackageIpBandwidthRequest
       * @return ModifyCommonBandwidthPackageIpBandwidthResponse
       */
      Models::ModifyCommonBandwidthPackageIpBandwidthResponse modifyCommonBandwidthPackageIpBandwidth(const Models::ModifyCommonBandwidthPackageIpBandwidthRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following information:
       * - **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After a request is sent, the system returns a request ID, but the maximum bandwidth of the Internet Shared Bandwidth instance has not been modified yet. The modification task is still running in the background. You can call [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the status of the Internet Shared Bandwidth instance.
       *     - If the Internet Shared Bandwidth instance is in the **Modifying** state, the maximum bandwidth is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the Internet Shared Bandwidth instance is in the **Available** state, the maximum bandwidth has been modified.
       * - **ModifyCommonBandwidthPackageSpec** does not support concurrent modifications to the maximum bandwidth of the same Internet Shared Bandwidth instance.
       *
       * @param request ModifyCommonBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageSpecResponse
       */
      Models::ModifyCommonBandwidthPackageSpecResponse modifyCommonBandwidthPackageSpecWithOptions(const Models::ModifyCommonBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following information:
       * - **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After a request is sent, the system returns a request ID, but the maximum bandwidth of the Internet Shared Bandwidth instance has not been modified yet. The modification task is still running in the background. You can call [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the status of the Internet Shared Bandwidth instance.
       *     - If the Internet Shared Bandwidth instance is in the **Modifying** state, the maximum bandwidth is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the Internet Shared Bandwidth instance is in the **Available** state, the maximum bandwidth has been modified.
       * - **ModifyCommonBandwidthPackageSpec** does not support concurrent modifications to the maximum bandwidth of the same Internet Shared Bandwidth instance.
       *
       * @param request ModifyCommonBandwidthPackageSpecRequest
       * @return ModifyCommonBandwidthPackageSpecResponse
       */
      Models::ModifyCommonBandwidthPackageSpecResponse modifyCommonBandwidthPackageSpec(const Models::ModifyCommonBandwidthPackageSpecRequest &request);

      /**
       * @summary Modifies the configuration of a customer gateway by calling the ModifyCustomerGatewayAttribute operation.
       *
       * @description - When you call the **ModifyCustomerGatewayAttribute** operation, if the **AuthKey** parameter is not empty, this operation is asynchronous. The system returns the customer gateway information first, but the configuration has not been modified yet because the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the customer gateway configuration:
       *     - If the VPN gateway instance is in the **updating** state, the customer gateway configuration is being modified.
       *     - If the VPN gateway instance is in the **active** state, the customer gateway configuration has been modified.
       * - When you call the **ModifyCustomerGatewayAttribute** operation, if the **AuthKey** parameter is empty, this operation is synchronous.
       * - The **ModifyCustomerGatewayAttribute** operation does not support concurrent modifications to the configuration of the same customer gateway.
       *
       * @param request ModifyCustomerGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomerGatewayAttributeResponse
       */
      Models::ModifyCustomerGatewayAttributeResponse modifyCustomerGatewayAttributeWithOptions(const Models::ModifyCustomerGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a customer gateway by calling the ModifyCustomerGatewayAttribute operation.
       *
       * @description - When you call the **ModifyCustomerGatewayAttribute** operation, if the **AuthKey** parameter is not empty, this operation is asynchronous. The system returns the customer gateway information first, but the configuration has not been modified yet because the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the customer gateway configuration:
       *     - If the VPN gateway instance is in the **updating** state, the customer gateway configuration is being modified.
       *     - If the VPN gateway instance is in the **active** state, the customer gateway configuration has been modified.
       * - When you call the **ModifyCustomerGatewayAttribute** operation, if the **AuthKey** parameter is empty, this operation is synchronous.
       * - The **ModifyCustomerGatewayAttribute** operation does not support concurrent modifications to the configuration of the same customer gateway.
       *
       * @param request ModifyCustomerGatewayAttributeRequest
       * @return ModifyCustomerGatewayAttributeResponse
       */
      Models::ModifyCustomerGatewayAttributeResponse modifyCustomerGatewayAttribute(const Models::ModifyCustomerGatewayAttributeRequest &request);

      /**
       * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
       *
       * @param request ModifyEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttributeWithOptions(const Models::ModifyEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
       *
       * @param request ModifyEipAddressAttributeRequest
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttribute(const Models::ModifyEipAddressAttributeRequest &request);

      /**
       * @summary Modifies the forwarding mode of an Elastic IP Address (EIP).
       *
       * @param request ModifyEipForwardModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipForwardModeResponse
       */
      Models::ModifyEipForwardModeResponse modifyEipForwardModeWithOptions(const Models::ModifyEipForwardModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the forwarding mode of an Elastic IP Address (EIP).
       *
       * @param request ModifyEipForwardModeRequest
       * @return ModifyEipForwardModeResponse
       */
      Models::ModifyEipForwardModeResponse modifyEipForwardMode(const Models::ModifyEipForwardModeRequest &request);

      /**
       * @summary Modifies an Express Cloud Connection (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressCloudConnectionAttributeResponse
       */
      Models::ModifyExpressCloudConnectionAttributeResponse modifyExpressCloudConnectionAttributeWithOptions(const Models::ModifyExpressCloudConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Express Cloud Connection (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionAttributeRequest
       * @return ModifyExpressCloudConnectionAttributeResponse
       */
      Models::ModifyExpressCloudConnectionAttributeResponse modifyExpressCloudConnectionAttribute(const Models::ModifyExpressCloudConnectionAttributeRequest &request);

      /**
       * @summary Modifies the bandwidth of an Express Cloud Connection (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressCloudConnectionBandwidthResponse
       */
      Models::ModifyExpressCloudConnectionBandwidthResponse modifyExpressCloudConnectionBandwidthWithOptions(const Models::ModifyExpressCloudConnectionBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth of an Express Cloud Connection (ECC) instance.
       *
       * @param request ModifyExpressCloudConnectionBandwidthRequest
       * @return ModifyExpressCloudConnectionBandwidthResponse
       */
      Models::ModifyExpressCloudConnectionBandwidthResponse modifyExpressCloudConnectionBandwidth(const Models::ModifyExpressCloudConnectionBandwidthRequest &request);

      /**
       * @summary Calls the ModifyExpressConnectTrafficQos operation to modify an Express Connect Quality of Service (QoS) policy. You can also use this operation to associate dedicated Express Connect circuits.
       *
       * @description - Only dedicated Express Connect circuits that are in the Normal state and do not have overdue payments can be associated. Shared Express Connect circuit ports and Virtual Border Router (VBR) instances are not supported.
       * - When associating dedicated Express Connect circuits, only full operations are supported. To dissociate all circuits, pass an empty string.
       * - If a dedicated Express Connect circuit has shared Express Connect circuits or cross-account VBRs, you must apply for a whitelist before you can associate it.
       * - The device on which the dedicated Express Connect circuit resides must support the QoS feature before association.
       * - If a single VBR is associated with multiple Express Connect circuits, you must associate all Express Connect circuits of the VBR at the same time.
       *
       * @param request ModifyExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosResponse
       */
      Models::ModifyExpressConnectTrafficQosResponse modifyExpressConnectTrafficQosWithOptions(const Models::ModifyExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyExpressConnectTrafficQos operation to modify an Express Connect Quality of Service (QoS) policy. You can also use this operation to associate dedicated Express Connect circuits.
       *
       * @description - Only dedicated Express Connect circuits that are in the Normal state and do not have overdue payments can be associated. Shared Express Connect circuit ports and Virtual Border Router (VBR) instances are not supported.
       * - When associating dedicated Express Connect circuits, only full operations are supported. To dissociate all circuits, pass an empty string.
       * - If a dedicated Express Connect circuit has shared Express Connect circuits or cross-account VBRs, you must apply for a whitelist before you can associate it.
       * - The device on which the dedicated Express Connect circuit resides must support the QoS feature before association.
       * - If a single VBR is associated with multiple Express Connect circuits, you must associate all Express Connect circuits of the VBR at the same time.
       *
       * @param request ModifyExpressConnectTrafficQosRequest
       * @return ModifyExpressConnectTrafficQosResponse
       */
      Models::ModifyExpressConnectTrafficQosResponse modifyExpressConnectTrafficQos(const Models::ModifyExpressConnectTrafficQosRequest &request);

      /**
       * @summary Invokes the ModifyExpressConnectTrafficQosQueue operation to modify an Express Connect QoS queue.
       *
       * @param request ModifyExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosQueueResponse
       */
      Models::ModifyExpressConnectTrafficQosQueueResponse modifyExpressConnectTrafficQosQueueWithOptions(const Models::ModifyExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ModifyExpressConnectTrafficQosQueue operation to modify an Express Connect QoS queue.
       *
       * @param request ModifyExpressConnectTrafficQosQueueRequest
       * @return ModifyExpressConnectTrafficQosQueueResponse
       */
      Models::ModifyExpressConnectTrafficQosQueueResponse modifyExpressConnectTrafficQosQueue(const Models::ModifyExpressConnectTrafficQosQueueRequest &request);

      /**
       * @summary Modifies a QoS rule for Express Connect.
       *
       * @param request ModifyExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosRuleResponse
       */
      Models::ModifyExpressConnectTrafficQosRuleResponse modifyExpressConnectTrafficQosRuleWithOptions(const Models::ModifyExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a QoS rule for Express Connect.
       *
       * @param request ModifyExpressConnectTrafficQosRuleRequest
       * @return ModifyExpressConnectTrafficQosRuleResponse
       */
      Models::ModifyExpressConnectTrafficQosRuleResponse modifyExpressConnectTrafficQosRule(const Models::ModifyExpressConnectTrafficQosRuleRequest &request);

      /**
       * @summary Calls the ModifyFlowLogAttribute operation to modify the name and description of a flow log.
       *
       * @description - **ModifyFlowLogAttribute** is an asynchronous operation. After you send a request, the system returns a request ID. However, the flow log has not been modified yet because the modification task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the modification status of the flow log:
       *     - If the flow log is in the **Modifying** state, the flow log is being modified.
       *     - If the flow log is in the **Active** or **Inactive** state, the flow log has been modified.
       * - **ModifyFlowLogAttribute** does not support concurrent modifications to the same flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyFlowLogAttribute operation to modify the name and description of a flow log.
       *
       * @description - **ModifyFlowLogAttribute** is an asynchronous operation. After you send a request, the system returns a request ID. However, the flow log has not been modified yet because the modification task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the modification status of the flow log:
       *     - If the flow log is in the **Modifying** state, the flow log is being modified.
       *     - If the flow log is in the **Active** or **Inactive** state, the flow log has been modified.
       * - **ModifyFlowLogAttribute** does not support concurrent modifications to the same flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies a specified DNAT entry.
       *
       * @description - **ModifyForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry has not been modified yet. The modification task is still running in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry has been modified.
       * - **ModifyForwardEntry** does not support concurrent modifications of the same DNAT entry.
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specified DNAT entry.
       *
       * @description - **ModifyForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry has not been modified yet. The modification task is still running in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry has been modified.
       * - **ModifyForwardEntry** does not support concurrent modifications of the same DNAT entry.
       *
       * @param request ModifyForwardEntryRequest
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntry(const Models::ModifyForwardEntryRequest &request);

      /**
       * @summary Modifies a FULLNAT entry.
       *
       * @description - **ModifyFullNatEntryAttribute** is an asynchronous operation. After you send a request, the system returns a request ID, but the FULLNAT entry is not yet modified. The modification task runs in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the modification status of the FULLNAT entry:
       *     - If the FULLNAT entry is in the **Modifying** state, the FULLNAT entry is being modified. In this state, you can only perform query operations.
       *     - If the FULLNAT entry is in the **Available** state, the FULLNAT entry is modified.
       * - **ModifyFullNatEntryAttribute** does not support concurrent modifications of a specified FULLNAT entry within the same FULLNAT table.
       *
       * @param request ModifyFullNatEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFullNatEntryAttributeResponse
       */
      Models::ModifyFullNatEntryAttributeResponse modifyFullNatEntryAttributeWithOptions(const Models::ModifyFullNatEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a FULLNAT entry.
       *
       * @description - **ModifyFullNatEntryAttribute** is an asynchronous operation. After you send a request, the system returns a request ID, but the FULLNAT entry is not yet modified. The modification task runs in the background. You can call [ListFullNatEntries](https://help.aliyun.com/document_detail/348779.html) to query the modification status of the FULLNAT entry:
       *     - If the FULLNAT entry is in the **Modifying** state, the FULLNAT entry is being modified. In this state, you can only perform query operations.
       *     - If the FULLNAT entry is in the **Available** state, the FULLNAT entry is modified.
       * - **ModifyFullNatEntryAttribute** does not support concurrent modifications of a specified FULLNAT entry within the same FULLNAT table.
       *
       * @param request ModifyFullNatEntryAttributeRequest
       * @return ModifyFullNatEntryAttributeResponse
       */
      Models::ModifyFullNatEntryAttributeResponse modifyFullNatEntryAttribute(const Models::ModifyFullNatEntryAttributeRequest &request);

      /**
       * @summary Modifies the name and description of an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalAccelerationInstanceAttributesResponse
       */
      Models::ModifyGlobalAccelerationInstanceAttributesResponse modifyGlobalAccelerationInstanceAttributesWithOptions(const Models::ModifyGlobalAccelerationInstanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceAttributesRequest
       * @return ModifyGlobalAccelerationInstanceAttributesResponse
       */
      Models::ModifyGlobalAccelerationInstanceAttributesResponse modifyGlobalAccelerationInstanceAttributes(const Models::ModifyGlobalAccelerationInstanceAttributesRequest &request);

      /**
       * @summary Invokes the ModifyGlobalAccelerationInstanceSpec operation to modify the bandwidth of an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description ## Operation description
       * This operation does not support modifying the bandwidth of a subscription Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalAccelerationInstanceSpecResponse
       */
      Models::ModifyGlobalAccelerationInstanceSpecResponse modifyGlobalAccelerationInstanceSpecWithOptions(const Models::ModifyGlobalAccelerationInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ModifyGlobalAccelerationInstanceSpec operation to modify the bandwidth of an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description ## Operation description
       * This operation does not support modifying the bandwidth of a subscription Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ModifyGlobalAccelerationInstanceSpecRequest
       * @return ModifyGlobalAccelerationInstanceSpecResponse
       */
      Models::ModifyGlobalAccelerationInstanceSpecResponse modifyGlobalAccelerationInstanceSpec(const Models::ModifyGlobalAccelerationInstanceSpecRequest &request);

      /**
       * @summary Modifies the name and description of a HaVip.
       *
       * @description **ModifyHaVipAttribute** does not support concurrent modifications to the name and description of the same HaVip.
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a HaVip.
       *
       * @description **ModifyHaVipAttribute** does not support concurrent modifications to the name and description of the same HaVip.
       *
       * @param request ModifyHaVipAttributeRequest
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttribute(const Models::ModifyHaVipAttributeRequest &request);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorAclAttribute is deprecated
       *
       * @summary Modifies the name of an access control policy group.
       *
       * @param request ModifyIPv6TranslatorAclAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorAclAttributeResponse
       */
      Models::ModifyIPv6TranslatorAclAttributeResponse modifyIPv6TranslatorAclAttributeWithOptions(const Models::ModifyIPv6TranslatorAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorAclAttribute is deprecated
       *
       * @summary Modifies the name of an access control policy group.
       *
       * @param request ModifyIPv6TranslatorAclAttributeRequest
       * @return ModifyIPv6TranslatorAclAttributeResponse
       */
      Models::ModifyIPv6TranslatorAclAttributeResponse modifyIPv6TranslatorAclAttribute(const Models::ModifyIPv6TranslatorAclAttributeRequest &request);

      /**
       * @summary Modifies an IP entry in an access control policy group.
       *
       * @param request ModifyIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorAclListEntryResponse
       */
      Models::ModifyIPv6TranslatorAclListEntryResponse modifyIPv6TranslatorAclListEntryWithOptions(const Models::ModifyIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP entry in an access control policy group.
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
       * @summary Modifies the bandwidth of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorBandwidthResponse
       */
      Models::ModifyIPv6TranslatorBandwidthResponse modifyIPv6TranslatorBandwidthWithOptions(const Models::ModifyIPv6TranslatorBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth of an IPv6 Translation Service instance.
       *
       * @param request ModifyIPv6TranslatorBandwidthRequest
       * @return ModifyIPv6TranslatorBandwidthResponse
       */
      Models::ModifyIPv6TranslatorBandwidthResponse modifyIPv6TranslatorBandwidth(const Models::ModifyIPv6TranslatorBandwidthRequest &request);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorEntry is deprecated
       *
       * @summary Modifies an IPv6 Translation Service mapping entry.
       *
       * @param request ModifyIPv6TranslatorEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIPv6TranslatorEntryResponse
       */
      Models::ModifyIPv6TranslatorEntryResponse modifyIPv6TranslatorEntryWithOptions(const Models::ModifyIPv6TranslatorEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyIPv6TranslatorEntry is deprecated
       *
       * @summary Modifies an IPv6 Translation Service mapping entry.
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
       * @summary Modifies the information of an IPv6 gateway.
       *
       * @param request ModifyIpv6GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpv6GatewayAttributeResponse
       */
      Models::ModifyIpv6GatewayAttributeResponse modifyIpv6GatewayAttributeWithOptions(const Models::ModifyIpv6GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an IPv6 gateway.
       *
       * @param request ModifyIpv6GatewayAttributeRequest
       * @return ModifyIpv6GatewayAttributeResponse
       */
      Models::ModifyIpv6GatewayAttributeResponse modifyIpv6GatewayAttribute(const Models::ModifyIpv6GatewayAttributeRequest &request);

      /**
       * @summary Modifies the Internet bandwidth of an IPv6 address.
       *
       * @description The **ModifyIpv6InternetBandwidth** operation does not support concurrent modifications to the same IPv6 Internet bandwidth.
       *
       * @param request ModifyIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpv6InternetBandwidthResponse
       */
      Models::ModifyIpv6InternetBandwidthResponse modifyIpv6InternetBandwidthWithOptions(const Models::ModifyIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Internet bandwidth of an IPv6 address.
       *
       * @description The **ModifyIpv6InternetBandwidth** operation does not support concurrent modifications to the same IPv6 Internet bandwidth.
       *
       * @param request ModifyIpv6InternetBandwidthRequest
       * @return ModifyIpv6InternetBandwidthResponse
       */
      Models::ModifyIpv6InternetBandwidthResponse modifyIpv6InternetBandwidth(const Models::ModifyIpv6InternetBandwidthRequest &request);

      /**
       * @summary Modifies the attributes of a NAT gateway.
       *
       * @description The NAT gateways queried by this operation include Internet NAT gateways and VPC NAT gateways. The term "NAT gateway" in this topic is not specific to either type.
       *
       * @param tmpReq ModifyNatGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatGatewayAttributeResponse
       */
      Models::ModifyNatGatewayAttributeResponse modifyNatGatewayAttributeWithOptions(const Models::ModifyNatGatewayAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a NAT gateway.
       *
       * @description The NAT gateways queried by this operation include Internet NAT gateways and VPC NAT gateways. The term "NAT gateway" in this topic is not specific to either type.
       *
       * @param request ModifyNatGatewayAttributeRequest
       * @return ModifyNatGatewayAttributeResponse
       */
      Models::ModifyNatGatewayAttributeResponse modifyNatGatewayAttribute(const Models::ModifyNatGatewayAttributeRequest &request);

      /**
       * @summary Modifies the specification of a subscription Internet NAT gateway by calling the ModifyNatGatewaySpec operation.
       *
       * @description - The **ModifyNatGatewaySpec** operation does not support downgrading the specification of a subscription Internet NAT gateway. Perform the downgrade in the console.
       * - When you call the **ModifyNatGatewaySpec** operation to upgrade the specification of a subscription Internet NAT gateway, an upgrade order is generated. Complete the payment in the Order Center for the upgrade to take effect.
       * -  The **ModifyNatGatewaySpec** operation is asynchronous. After you call this operation, the system returns a request ID, but the specification change of the Internet NAT gateway is not yet complete because the task is still running in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/2522327.html) to query the status of the Internet NAT gateway:
       *     - If the Internet NAT gateway is in the **Modifying** state, the specification change is in progress. In this state, you can only perform query operations.
       *     - If the Internet NAT gateway is in the **Available** state, the specification change is complete.
       * - The **ModifyNatGatewaySpec** operation does not support concurrent specification changes for NAT gateway instances that are billed by specification.
       * Internet NAT gateways are available in different specifications. The specification of an Internet NAT gateway affects the maximum number of connections and the number of new connections per second for the SNAT feature, but does not affect data throughput. The following table describes the relationship between Internet NAT gateway specifications and SNAT performance.
       * | Specification   | Maximum connections | New connections per second
       * | ------------- |------------   | ------------   | 
       * | Small      | 10,000       |1,000 
       * | Medium      | 50,000     |   5,000 
       * | Large | 200,000      |    10,000
       *
       * @param request ModifyNatGatewaySpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatGatewaySpecResponse
       */
      Models::ModifyNatGatewaySpecResponse modifyNatGatewaySpecWithOptions(const Models::ModifyNatGatewaySpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specification of a subscription Internet NAT gateway by calling the ModifyNatGatewaySpec operation.
       *
       * @description - The **ModifyNatGatewaySpec** operation does not support downgrading the specification of a subscription Internet NAT gateway. Perform the downgrade in the console.
       * - When you call the **ModifyNatGatewaySpec** operation to upgrade the specification of a subscription Internet NAT gateway, an upgrade order is generated. Complete the payment in the Order Center for the upgrade to take effect.
       * -  The **ModifyNatGatewaySpec** operation is asynchronous. After you call this operation, the system returns a request ID, but the specification change of the Internet NAT gateway is not yet complete because the task is still running in the background. You can call [DescribeNatGateways](https://help.aliyun.com/document_detail/2522327.html) to query the status of the Internet NAT gateway:
       *     - If the Internet NAT gateway is in the **Modifying** state, the specification change is in progress. In this state, you can only perform query operations.
       *     - If the Internet NAT gateway is in the **Available** state, the specification change is complete.
       * - The **ModifyNatGatewaySpec** operation does not support concurrent specification changes for NAT gateway instances that are billed by specification.
       * Internet NAT gateways are available in different specifications. The specification of an Internet NAT gateway affects the maximum number of connections and the number of new connections per second for the SNAT feature, but does not affect data throughput. The following table describes the relationship between Internet NAT gateway specifications and SNAT performance.
       * | Specification   | Maximum connections | New connections per second
       * | ------------- |------------   | ------------   | 
       * | Small      | 10,000       |1,000 
       * | Medium      | 50,000     |   5,000 
       * | Large | 200,000      |    10,000
       *
       * @param request ModifyNatGatewaySpecRequest
       * @return ModifyNatGatewaySpecResponse
       */
      Models::ModifyNatGatewaySpecResponse modifyNatGatewaySpec(const Models::ModifyNatGatewaySpecRequest &request);

      /**
       * @summary Modifies the name and description of a NAT IP address.
       *
       * @description The **ModifyNatIpAttribute** operation does not support concurrent modifications to the name and description of the same NAT IP address.
       *
       * @param request ModifyNatIpAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatIpAttributeResponse
       */
      Models::ModifyNatIpAttributeResponse modifyNatIpAttributeWithOptions(const Models::ModifyNatIpAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a NAT IP address.
       *
       * @description The **ModifyNatIpAttribute** operation does not support concurrent modifications to the name and description of the same NAT IP address.
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
       * @summary Modifies the attributes of a network ACL.
       *
       * @param request ModifyNetworkAclAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkAclAttributesResponse
       */
      Models::ModifyNetworkAclAttributesResponse modifyNetworkAclAttributesWithOptions(const Models::ModifyNetworkAclAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a network ACL.
       *
       * @param request ModifyNetworkAclAttributesRequest
       * @return ModifyNetworkAclAttributesResponse
       */
      Models::ModifyNetworkAclAttributesResponse modifyNetworkAclAttributes(const Models::ModifyNetworkAclAttributesRequest &request);

      /**
       * @summary Modifies the configuration of an Express Connect circuit.
       *
       * @description When you call this operation, note the following items: 
       * - You can modify the specifications and redundant circuit ID only for Express Connect circuits in the **Initial**, **Enabled**, or **Rejected** state.  
       * - You cannot modify Express Connect circuits in the **Canceled**, **Allocating**, **AllocationFailed**, or **Terminated** state.  
       * - An Express Connect circuit in the **Rejected** state enters the **Initial** state after it is modified.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttributeWithOptions(const Models::ModifyPhysicalConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an Express Connect circuit.
       *
       * @description When you call this operation, note the following items: 
       * - You can modify the specifications and redundant circuit ID only for Express Connect circuits in the **Initial**, **Enabled**, or **Rejected** state.  
       * - You cannot modify Express Connect circuits in the **Canceled**, **Allocating**, **AllocationFailed**, or **Terminated** state.  
       * - An Express Connect circuit in the **Rejected** state enters the **Initial** state after it is modified.
       *
       * @param request ModifyPhysicalConnectionAttributeRequest
       * @return ModifyPhysicalConnectionAttributeResponse
       */
      Models::ModifyPhysicalConnectionAttributeResponse modifyPhysicalConnectionAttribute(const Models::ModifyPhysicalConnectionAttributeRequest &request);

      /**
       * @summary Invokes the ModifyRouteEntry operation to modify custom route entry name, description, and route next hop.
       *
       * @description - The **ModifyRouteEntry** operation does not support concurrent modifications to the name and description of the same custom route entry.
       * - The **ModifyRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       *
       * @param request ModifyRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntryWithOptions(const Models::ModifyRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ModifyRouteEntry operation to modify custom route entry name, description, and route next hop.
       *
       * @description - The **ModifyRouteEntry** operation does not support concurrent modifications to the name and description of the same custom route entry.
       * - The **ModifyRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       *
       * @param request ModifyRouteEntryRequest
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntry(const Models::ModifyRouteEntryRequest &request);

      /**
       * @summary Modifies the name or description of a route table, or specifies whether to receive dynamic routes.
       *
       * @description The **ModifyRouteTableAttributes** operation does not support concurrent modifications to the attributes of the same route table, such as the name, description, or whether to receive dynamic routes.
       * When you call the **ModifyRouteTableAttributes** operation to enable or disable route propagation, note the following:
       * - Enabling or disabling route propagation is an asynchronous operation.
       * - The time required to enable or disable route propagation depends on the number of propagated routes.
       *
       * @param request ModifyRouteTableAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteTableAttributesResponse
       */
      Models::ModifyRouteTableAttributesResponse modifyRouteTableAttributesWithOptions(const Models::ModifyRouteTableAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of a route table, or specifies whether to receive dynamic routes.
       *
       * @description The **ModifyRouteTableAttributes** operation does not support concurrent modifications to the attributes of the same route table, such as the name, description, or whether to receive dynamic routes.
       * When you call the **ModifyRouteTableAttributes** operation to enable or disable route propagation, note the following:
       * - Enabling or disabling route propagation is an asynchronous operation.
       * - The time required to enable or disable route propagation depends on the number of propagated routes.
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
       * @description After you call this operation, the router interface enters the Activating (**Activating**) state. After the activation succeeds, the router interface enters the Active (**Active**) state. 
       *       
       * > You cannot modify the specification of a router interface that has an overdue payment.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpecWithOptions(const Models::ModifyRouterInterfaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specification of a router interface.
       *
       * @description After you call this operation, the router interface enters the Activating (**Activating**) state. After the activation succeeds, the router interface enters the Active (**Active**) state. 
       *       
       * > You cannot modify the specification of a router interface that has an overdue payment.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpec(const Models::ModifyRouterInterfaceSpecRequest &request);

      /**
       * @summary Modifies a specified SNAT entry.
       *
       * @description **ModifySnatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the SNAT entry has not been modified yet. The modification task is still running in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       * - If the SNAT entry is in the **Pending** state, the SNAT entry is being modified. In this state, you can only perform query operations and cannot perform other operations.
       * - If the SNAT entry is in the **Available** state, the SNAT entry is modified.
       * > If a SNAT entry in the SNAT table is in the **Pending** state, you cannot modify SNAT entries in the SNAT table.
       * **ModifySnatEntry** does not support concurrent modifications of a specified SNAT entry within the same SNAT entry instance.
       *
       * @param request ModifySnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntryWithOptions(const Models::ModifySnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specified SNAT entry.
       *
       * @description **ModifySnatEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the SNAT entry has not been modified yet. The modification task is still running in the background. You can call [DescribeSnatTableEntries](https://help.aliyun.com/document_detail/42677.html) to query the status of the SNAT entry:
       * - If the SNAT entry is in the **Pending** state, the SNAT entry is being modified. In this state, you can only perform query operations and cannot perform other operations.
       * - If the SNAT entry is in the **Available** state, the SNAT entry is modified.
       * > If a SNAT entry in the SNAT table is in the **Pending** state, you cannot modify SNAT entries in the SNAT table.
       * **ModifySnatEntry** does not support concurrent modifications of a specified SNAT entry within the same SNAT entry instance.
       *
       * @param request ModifySnatEntryRequest
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntry(const Models::ModifySnatEntryRequest &request);

      /**
       * @summary Calls the ModifySslVpnClientCert operation to modify the name of an SSL-VPN client certificate.
       *
       * @param request ModifySslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySslVpnClientCertResponse
       */
      Models::ModifySslVpnClientCertResponse modifySslVpnClientCertWithOptions(const Models::ModifySslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifySslVpnClientCert operation to modify the name of an SSL-VPN client certificate.
       *
       * @param request ModifySslVpnClientCertRequest
       * @return ModifySslVpnClientCertResponse
       */
      Models::ModifySslVpnClientCertResponse modifySslVpnClientCert(const Models::ModifySslVpnClientCertRequest &request);

      /**
       * @summary Modifies the configuration of an SSL-VPN server.
       *
       * @description - If you want to enable two-factor identity authentication for the SSL server, make sure that the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * - When you modify only the **Name** of the SSL-VPN server, this operation is synchronous. If you modify any configuration other than **Name**, this operation is asynchronous.
       * - When **ModifySslVpnServer** is asynchronous, the system returns a request ID first, but the configuration of the SSL-VPN server has not been modified yet. The modification task continues in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the VPN gateway instance associated with the SSL-VPN server to check the modification status:
       *     - If the VPN gateway instance is in the **updating** state, the configuration of the SSL-VPN server is being modified.
       *     - If the VPN gateway instance is in the **active** state, the configuration of the SSL-VPN server has been modified.
       * - The **ModifySslVpnServer** operation does not support concurrent modifications to the configuration of SSL-VPN servers under the same VPN gateway.
       *
       * @param request ModifySslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServerWithOptions(const Models::ModifySslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an SSL-VPN server.
       *
       * @description - If you want to enable two-factor identity authentication for the SSL server, make sure that the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * - When you modify only the **Name** of the SSL-VPN server, this operation is synchronous. If you modify any configuration other than **Name**, this operation is asynchronous.
       * - When **ModifySslVpnServer** is asynchronous, the system returns a request ID first, but the configuration of the SSL-VPN server has not been modified yet. The modification task continues in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the VPN gateway instance associated with the SSL-VPN server to check the modification status:
       *     - If the VPN gateway instance is in the **updating** state, the configuration of the SSL-VPN server is being modified.
       *     - If the VPN gateway instance is in the **active** state, the configuration of the SSL-VPN server has been modified.
       * - The **ModifySslVpnServer** operation does not support concurrent modifications to the configuration of SSL-VPN servers under the same VPN gateway.
       *
       * @param request ModifySslVpnServerRequest
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServer(const Models::ModifySslVpnServerRequest &request);

      /**
       * @summary Calls the ModifyTunnelAttribute operation to modify the tunnel configuration of a high-availability VPN gateway.
       *
       * @param request ModifyTunnelAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTunnelAttributeResponse
       */
      Models::ModifyTunnelAttributeResponse modifyTunnelAttributeWithOptions(const Models::ModifyTunnelAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyTunnelAttribute operation to modify the tunnel configuration of a high-availability VPN gateway.
       *
       * @param request ModifyTunnelAttributeRequest
       * @return ModifyTunnelAttributeResponse
       */
      Models::ModifyTunnelAttributeResponse modifyTunnelAttribute(const Models::ModifyTunnelAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a vRouter.
       *
       * @description The **ModifyVRouterAttribute** operation does not support concurrent modifications to the name and description of the same vRouter.
       *
       * @param request ModifyVRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttributeWithOptions(const Models::ModifyVRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a vRouter.
       *
       * @description The **ModifyVRouterAttribute** operation does not support concurrent modifications to the name and description of the same vRouter.
       *
       * @param request ModifyVRouterAttributeRequest
       * @return ModifyVRouterAttributeResponse
       */
      Models::ModifyVRouterAttributeResponse modifyVRouterAttribute(const Models::ModifyVRouterAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a specified vSwitch.
       *
       * @description - **ModifyVSwitchAttribute** is an asynchronous operation. After you call this operation, the system returns a request ID, but the vSwitch configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the modification status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the configuration is being modified.
       *     - If the vSwitch is in the **Available** state, the vSwitch is available.
       * - **ModifyVSwitchAttribute** does not support concurrent modifications to the same vSwitch.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified vSwitch.
       *
       * @description - **ModifyVSwitchAttribute** is an asynchronous operation. After you call this operation, the system returns a request ID, but the vSwitch configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the modification status of the vSwitch:
       *     - If the vSwitch is in the **Pending** state, the configuration is being modified.
       *     - If the vSwitch is in the **Available** state, the vSwitch is available.
       * - **ModifyVSwitchAttribute** does not support concurrent modifications to the same vSwitch.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a reserved CIDR block for a vSwitch.
       *
       * @description The **ModifyVSwitchCidrReservationAttribute** operation does not support concurrently modifying the name and description of a reserved CIDR block within the same vSwitch.
       *
       * @param request ModifyVSwitchCidrReservationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchCidrReservationAttributeResponse
       */
      Models::ModifyVSwitchCidrReservationAttributeResponse modifyVSwitchCidrReservationAttributeWithOptions(const Models::ModifyVSwitchCidrReservationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a reserved CIDR block for a vSwitch.
       *
       * @description The **ModifyVSwitchCidrReservationAttribute** operation does not support concurrently modifying the name and description of a reserved CIDR block within the same vSwitch.
       *
       * @param request ModifyVSwitchCidrReservationAttributeRequest
       * @return ModifyVSwitchCidrReservationAttributeResponse
       */
      Models::ModifyVSwitchCidrReservationAttributeResponse modifyVSwitchCidrReservationAttribute(const Models::ModifyVSwitchCidrReservationAttributeRequest &request);

      /**
       * @summary Modifies the weight of a destination route entry for an IPsec-VPN connection.
       *
       * @description - **ModifyVcoRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID, but the weight of the destination route entry has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the modification status of the destination route entry weight:
       *     - If the IPsec-VPN connection is in the **updating** state, the weight of the destination route entry is being modified.
       *     - If the IPsec-VPN connection is in the **attached** state, the weight of the destination route entry has been modified.
       * - **ModifyVcoRouteEntryWeight** does not support concurrent modifications of destination route entry weights for the same IPsec-VPN connection.
       *
       * @param request ModifyVcoRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVcoRouteEntryWeightResponse
       */
      Models::ModifyVcoRouteEntryWeightResponse modifyVcoRouteEntryWeightWithOptions(const Models::ModifyVcoRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a destination route entry for an IPsec-VPN connection.
       *
       * @description - **ModifyVcoRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID, but the weight of the destination route entry has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the modification status of the destination route entry weight:
       *     - If the IPsec-VPN connection is in the **updating** state, the weight of the destination route entry is being modified.
       *     - If the IPsec-VPN connection is in the **attached** state, the weight of the destination route entry has been modified.
       * - **ModifyVcoRouteEntryWeight** does not support concurrent modifications of destination route entry weights for the same IPsec-VPN connection.
       *
       * @param request ModifyVcoRouteEntryWeightRequest
       * @return ModifyVcoRouteEntryWeightResponse
       */
      Models::ModifyVcoRouteEntryWeightResponse modifyVcoRouteEntryWeight(const Models::ModifyVcoRouteEntryWeightRequest &request);

      /**
       * @summary Modifies the configuration of a Virtual Border Router (VBR).
       *
       * @description * **VlanId** can be modified only by the owner of the Express Connect circuit.
       * * The same VLAN ID on the same Express Connect circuit cannot be used by two VBRs at the same time.
       * * A VBR that enters the **terminated** state automatically retains its VLAN ID for 7 days, during which other VBRs cannot use the VLAN ID. After 7 days, the VLAN ID can be used by other VBRs.
       * * For VBR instances owned by other accounts, you cannot configure **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask**.
       * * **PeeringSubnetMask** supports 24 to 30 bits (255.255.255.0 to 255.255.255.252).
       * * **LocalGatewayIp** and **PeerGatewayIp** must be in the same CIDR block. For example, LocalGatewayIp: 192.168.XX.XX, PeerGatewayIp: 192.168.XX.XX, PeeringSubnetMask: 255.255.255.248.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttributeWithOptions(const Models::ModifyVirtualBorderRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a Virtual Border Router (VBR).
       *
       * @description * **VlanId** can be modified only by the owner of the Express Connect circuit.
       * * The same VLAN ID on the same Express Connect circuit cannot be used by two VBRs at the same time.
       * * A VBR that enters the **terminated** state automatically retains its VLAN ID for 7 days, during which other VBRs cannot use the VLAN ID. After 7 days, the VLAN ID can be used by other VBRs.
       * * For VBR instances owned by other accounts, you cannot configure **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask**.
       * * **PeeringSubnetMask** supports 24 to 30 bits (255.255.255.0 to 255.255.255.252).
       * * **LocalGatewayIp** and **PeerGatewayIp** must be in the same CIDR block. For example, LocalGatewayIp: 192.168.XX.XX, PeerGatewayIp: 192.168.XX.XX, PeeringSubnetMask: 255.255.255.248.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttribute(const Models::ModifyVirtualBorderRouterAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a specified VPC.
       *
       * @description * The **ModifyVpcAttribute** operation does not support concurrent modifications to the configuration of the same VPC.
       * * The **ModifyVpcAttribute** operation can enable IPv6 for a VPC. However, you cannot modify the IPv6 CIDR block or IPv6 address type for a VPC that already has IPv6 enabled.
       *
       * @param request ModifyVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttributeWithOptions(const Models::ModifyVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified VPC.
       *
       * @description * The **ModifyVpcAttribute** operation does not support concurrent modifications to the configuration of the same VPC.
       * * The **ModifyVpcAttribute** operation can enable IPv6 for a VPC. However, you cannot modify the IPv6 CIDR block or IPv6 address type for a VPC that already has IPv6 enabled.
       *
       * @param request ModifyVpcAttributeRequest
       * @return ModifyVpcAttributeResponse
       */
      Models::ModifyVpcAttributeResponse modifyVpcAttribute(const Models::ModifyVpcAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a prefix list.
       *
       * @description - **ModifyVpcPrefixList** is an asynchronous operation. After you send a request, the system returns a request ID, but the prefix list instance configuration has not been modified yet. The modification node continues to run in the background. You can invoke [ListPrefixLists](https://help.aliyun.com/document_detail/311535.html) to query the status of the prefix list instance.
       *     - If the prefix list instance is in the **Modifying** state, the configuration is being modified.
       *     - If the prefix list instance is in the **Created** state, the configuration has been modified.
       *     - After the configuration is modified, you can invoke [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to query the associations of the prefix list and check whether the associated resources use the updated Classless Inter-Domain Routing blocks. If the **Status** parameter of the prefix list association is **Created**, the associated resources use the updated Classless Inter-Domain Routing blocks.
       * - **ModifyVpcPrefixList** does not support concurrent modifications to the same prefix list instance.
       *
       * @param request ModifyVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcPrefixListResponse
       */
      Models::ModifyVpcPrefixListResponse modifyVpcPrefixListWithOptions(const Models::ModifyVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a prefix list.
       *
       * @description - **ModifyVpcPrefixList** is an asynchronous operation. After you send a request, the system returns a request ID, but the prefix list instance configuration has not been modified yet. The modification node continues to run in the background. You can invoke [ListPrefixLists](https://help.aliyun.com/document_detail/311535.html) to query the status of the prefix list instance.
       *     - If the prefix list instance is in the **Modifying** state, the configuration is being modified.
       *     - If the prefix list instance is in the **Created** state, the configuration has been modified.
       *     - After the configuration is modified, you can invoke [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to query the associations of the prefix list and check whether the associated resources use the updated Classless Inter-Domain Routing blocks. If the **Status** parameter of the prefix list association is **Created**, the associated resources use the updated Classless Inter-Domain Routing blocks.
       * - **ModifyVpcPrefixList** does not support concurrent modifications to the same prefix list instance.
       *
       * @param request ModifyVpcPrefixListRequest
       * @return ModifyVpcPrefixListResponse
       */
      Models::ModifyVpcPrefixListResponse modifyVpcPrefixList(const Models::ModifyVpcPrefixListRequest &request);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description - When you modify a dual-tunnel IPsec-VPN connection, in addition to the required parameters, you can configure the following request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, the **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * - When you modify a single-tunnel IPsec-VPN connection, in addition to the required parameters, you can configure the following request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **CustomerGatewayId**.
       * - **ModifyVpnAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the operation is still being performed in the system background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the modification status of the IPsec-VPN connection:
       *     - If the IPsec-VPN connection is in the **updating** state, the configuration is being modified.
       *     - If the IPsec-VPN connection is in the **attached** state, the configuration has been modified.
       * - **ModifyVpnAttachmentAttribute** does not support concurrent modification of the IPsec-VPN connection configuration.
       * - When you call **ModifyVpnAttachmentAttribute**, you cannot modify the gateway type of the IPsec-VPN connection.
       *
       * @param request ModifyVpnAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnAttachmentAttributeResponse
       */
      Models::ModifyVpnAttachmentAttributeResponse modifyVpnAttachmentAttributeWithOptions(const Models::ModifyVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description - When you modify a dual-tunnel IPsec-VPN connection, in addition to the required parameters, you can configure the following request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, the **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * - When you modify a single-tunnel IPsec-VPN connection, in addition to the required parameters, you can configure the following request parameters: **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **CustomerGatewayId**.
       * - **ModifyVpnAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the operation is still being performed in the system background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the modification status of the IPsec-VPN connection:
       *     - If the IPsec-VPN connection is in the **updating** state, the configuration is being modified.
       *     - If the IPsec-VPN connection is in the **attached** state, the configuration has been modified.
       * - **ModifyVpnAttachmentAttribute** does not support concurrent modification of the IPsec-VPN connection configuration.
       * - When you call **ModifyVpnAttachmentAttribute**, you cannot modify the gateway type of the IPsec-VPN connection.
       *
       * @param request ModifyVpnAttachmentAttributeRequest
       * @return ModifyVpnAttachmentAttributeResponse
       */
      Models::ModifyVpnAttachmentAttributeResponse modifyVpnAttachmentAttribute(const Models::ModifyVpnAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description - To modify a dual-tunnel IPsec-VPN connection, the `ModifyVpnConnectionAttribute` operation supports the following request parameters in addition to the required parameters:
       *    **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * - To modify a single-tunnel IPsec-VPN connection, the `ModifyVpnConnectionAttribute` operation supports the following request parameters in addition to the required parameters:
       *      **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **RemoteCaCertificate**.
       * - The **ModifyVpnConnectionAttribute** operation is asynchronous. After a request is sent, the system returns a request ID. However, the configuration of the IPsec-VPN connection is not yet modified. The modification node runs in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway to determine the modification status of the IPsec-VPN connection configuration:
       *     - If the VPN gateway instance is in the **updating** state, the configuration of the IPsec-VPN connection is being modified.
       *     - If the VPN gateway instance is in the **active** state, the configuration of the IPsec-VPN connection is modified.
       * - The **ModifyVpnConnectionAttribute** operation does not support concurrent modifications to IPsec-VPN connection configurations under the same VPN gateway.
       *
       * @param request ModifyVpnConnectionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnConnectionAttributeResponse
       */
      Models::ModifyVpnConnectionAttributeResponse modifyVpnConnectionAttributeWithOptions(const Models::ModifyVpnConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an IPsec-VPN connection.
       *
       * @description - To modify a dual-tunnel IPsec-VPN connection, the `ModifyVpnConnectionAttribute` operation supports the following request parameters in addition to the required parameters:
       *    **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **AutoConfigRoute**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.
       * - To modify a single-tunnel IPsec-VPN connection, the `ModifyVpnConnectionAttribute` operation supports the following request parameters in addition to the required parameters:
       *      **ClientToken**, **Name**, **LocalSubnet**, **RemoteSubnet**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, and **RemoteCaCertificate**.
       * - The **ModifyVpnConnectionAttribute** operation is asynchronous. After a request is sent, the system returns a request ID. However, the configuration of the IPsec-VPN connection is not yet modified. The modification node runs in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway to determine the modification status of the IPsec-VPN connection configuration:
       *     - If the VPN gateway instance is in the **updating** state, the configuration of the IPsec-VPN connection is being modified.
       *     - If the VPN gateway instance is in the **active** state, the configuration of the IPsec-VPN connection is modified.
       * - The **ModifyVpnConnectionAttribute** operation does not support concurrent modifications to IPsec-VPN connection configurations under the same VPN gateway.
       *
       * @param request ModifyVpnConnectionAttributeRequest
       * @return ModifyVpnConnectionAttributeResponse
       */
      Models::ModifyVpnConnectionAttributeResponse modifyVpnConnectionAttribute(const Models::ModifyVpnConnectionAttributeRequest &request);

      /**
       * @summary Invokes the ModifyVpnGatewayAttribute operation to modify the name, description, or routing automatic propagation feature of a VPN gateway.
       *
       * @description - **ModifyVpnGatewayAttribute** is an asynchronous operation. After you call this operation, the system returns the VPN gateway information, but the configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the VPN gateway configuration:
       *     - If the VPN gateway is in the **updating** state, the configuration is being modified.
       *     - If the VPN gateway is in the **active** state, the configuration has been modified.
       * - **ModifyVpnGatewayAttribute** does not support concurrent modifications to the configuration of the same VPN gateway.
       *
       * @param request ModifyVpnGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnGatewayAttributeResponse
       */
      Models::ModifyVpnGatewayAttributeResponse modifyVpnGatewayAttributeWithOptions(const Models::ModifyVpnGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ModifyVpnGatewayAttribute operation to modify the name, description, or routing automatic propagation feature of a VPN gateway.
       *
       * @description - **ModifyVpnGatewayAttribute** is an asynchronous operation. After you call this operation, the system returns the VPN gateway information, but the configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the VPN gateway configuration:
       *     - If the VPN gateway is in the **updating** state, the configuration is being modified.
       *     - If the VPN gateway is in the **active** state, the configuration has been modified.
       * - **ModifyVpnGatewayAttribute** does not support concurrent modifications to the configuration of the same VPN gateway.
       *
       * @param request ModifyVpnGatewayAttributeRequest
       * @return ModifyVpnGatewayAttributeResponse
       */
      Models::ModifyVpnGatewayAttributeResponse modifyVpnGatewayAttribute(const Models::ModifyVpnGatewayAttributeRequest &request);

      /**
       * @summary Modifies the weight and policy priority of a policy-based route.
       *
       * @description - The **ModifyVpnPbrRouteEntryAttribute** operation is used to modify both the weight and policy priority of a policy-based route that supports policy priority.
       *     - If you only need to modify the weight of a policy-based route, call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation.
       *     - If you only need to modify the policy priority of a policy-based route, call the [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html) operation.
       *     - If your policy-based route does not support policy priority, you can only call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation to modify the weight of the policy-based route.
       *   > For VPN gateway instances that support dual-tunnel mode IPsec-VPN connections, you can only call this operation to modify the priority of policy-based routes.
       * - The **ModifyVpnPbrRouteEntryAttribute** operation is asynchronous. After you send a request, the system returns a request ID, but the policy-based route has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been modified.
       * - The **ModifyVpnPbrRouteEntryAttribute** operation does not support concurrent modifications of policy-based routes on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttributeWithOptions(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight and policy priority of a policy-based route.
       *
       * @description - The **ModifyVpnPbrRouteEntryAttribute** operation is used to modify both the weight and policy priority of a policy-based route that supports policy priority.
       *     - If you only need to modify the weight of a policy-based route, call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation.
       *     - If you only need to modify the policy priority of a policy-based route, call the [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html) operation.
       *     - If your policy-based route does not support policy priority, you can only call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation to modify the weight of the policy-based route.
       *   > For VPN gateway instances that support dual-tunnel mode IPsec-VPN connections, you can only call this operation to modify the priority of policy-based routes.
       * - The **ModifyVpnPbrRouteEntryAttribute** operation is asynchronous. After you send a request, the system returns a request ID, but the policy-based route has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been modified.
       * - The **ModifyVpnPbrRouteEntryAttribute** operation does not support concurrent modifications of policy-based routes on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttribute(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request);

      /**
       * @summary Invokes the ModifyVpnPbrRouteEntryPriority operation to modify the policy priority of a policy-based routing entry.
       *
       * @description - **ModifyVpnPbrRouteEntryPriority** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based routing entry has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing entry:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing entry is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing entry has been modified.
       * - **ModifyVpnPbrRouteEntryPriority** does not support concurrent modifications of policy-based routing entries on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryPriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryPriorityResponse
       */
      Models::ModifyVpnPbrRouteEntryPriorityResponse modifyVpnPbrRouteEntryPriorityWithOptions(const Models::ModifyVpnPbrRouteEntryPriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ModifyVpnPbrRouteEntryPriority operation to modify the policy priority of a policy-based routing entry.
       *
       * @description - **ModifyVpnPbrRouteEntryPriority** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based routing entry has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing entry:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing entry is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing entry has been modified.
       * - **ModifyVpnPbrRouteEntryPriority** does not support concurrent modifications of policy-based routing entries on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryPriorityRequest
       * @return ModifyVpnPbrRouteEntryPriorityResponse
       */
      Models::ModifyVpnPbrRouteEntryPriorityResponse modifyVpnPbrRouteEntryPriority(const Models::ModifyVpnPbrRouteEntryPriorityRequest &request);

      /**
       * @summary Modifies the weight of a VPN policy-based route.
       *
       * @description > This operation applies only to VPN gateway instances that support IPsec-VPN connections in single-tunnel mode. For VPN gateway instances that support IPsec-VPN connections in dual-tunnel mode, the weight does not take effect even if this operation is called successfully.
       * - If active/standby policy-based routing exists on a VPN gateway instance and you want to modify the weight of the active policy-based route, delete the standby policy-based route first, modify the active policy-based route, and then reconfigure the standby policy-based route. If you want to modify the weight of the standby policy-based route, delete the active policy-based route first, modify the standby policy-based route, and then reconfigure the active policy-based route. To delete a policy-based route, see [DeleteVpnPbrRouteEntry](https://help.aliyun.com/document_detail/2526956.html).
       * - **ModifyVpnPbrRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway, to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing is modified.
       * - **ModifyVpnPbrRouteEntryWeight** does not support concurrent modifications of policy-based routing on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryWeightResponse
       */
      Models::ModifyVpnPbrRouteEntryWeightResponse modifyVpnPbrRouteEntryWeightWithOptions(const Models::ModifyVpnPbrRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a VPN policy-based route.
       *
       * @description > This operation applies only to VPN gateway instances that support IPsec-VPN connections in single-tunnel mode. For VPN gateway instances that support IPsec-VPN connections in dual-tunnel mode, the weight does not take effect even if this operation is called successfully.
       * - If active/standby policy-based routing exists on a VPN gateway instance and you want to modify the weight of the active policy-based route, delete the standby policy-based route first, modify the active policy-based route, and then reconfigure the standby policy-based route. If you want to modify the weight of the standby policy-based route, delete the active policy-based route first, modify the standby policy-based route, and then reconfigure the active policy-based route. To delete a policy-based route, see [DeleteVpnPbrRouteEntry](https://help.aliyun.com/document_detail/2526956.html).
       * - **ModifyVpnPbrRouteEntryWeight** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the instance status of the VPN gateway, to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing is modified.
       * - **ModifyVpnPbrRouteEntryWeight** does not support concurrent modifications of policy-based routing on the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryWeightRequest
       * @return ModifyVpnPbrRouteEntryWeightResponse
       */
      Models::ModifyVpnPbrRouteEntryWeightResponse modifyVpnPbrRouteEntryWeight(const Models::ModifyVpnPbrRouteEntryWeightRequest &request);

      /**
       * @summary Modifies the weight of a destination route by calling the ModifyVpnRouteEntryWeight operation.
       *
       * @description > This operation is applicable only to VPN gateway instances that support IPsec-VPN connections in single-tunnel mode. For VPN gateway instances that support IPsec-VPN connections in dual-tunnel mode, the weight does not take effect even if you successfully modify it by calling this operation.
       * - If active/standby destination routes exist on a VPN gateway instance and you want to modify the weight of the active destination route, delete the standby destination route first. After the active destination route is modified, reconfigure the standby destination route. If you want to modify the weight of the standby destination route, delete the active destination route first. After the standby destination route is modified, reconfigure the active destination route. To delete a destination route, see [DeleteVpnRouteEntry](https://help.aliyun.com/document_detail/2526961.html).
       * - The **ModifyVpnRouteEntryWeight** operation is asynchronous. After a request is sent, the system returns a request ID. However, the weight of the VPN destination route is not yet modified, and the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the weight:
       *     - If the VPN destination route is in the **updating** state, the weight is being modified.
       *     - If the VPN destination route is in the **active** state, the weight is modified.
       * - The **ModifyVpnRouteEntryWeight** operation does not support concurrent weight modifications for destination routes on the same VPN gateway.
       *
       * @param request ModifyVpnRouteEntryWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnRouteEntryWeightResponse
       */
      Models::ModifyVpnRouteEntryWeightResponse modifyVpnRouteEntryWeightWithOptions(const Models::ModifyVpnRouteEntryWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a destination route by calling the ModifyVpnRouteEntryWeight operation.
       *
       * @description > This operation is applicable only to VPN gateway instances that support IPsec-VPN connections in single-tunnel mode. For VPN gateway instances that support IPsec-VPN connections in dual-tunnel mode, the weight does not take effect even if you successfully modify it by calling this operation.
       * - If active/standby destination routes exist on a VPN gateway instance and you want to modify the weight of the active destination route, delete the standby destination route first. After the active destination route is modified, reconfigure the standby destination route. If you want to modify the weight of the standby destination route, delete the active destination route first. After the standby destination route is modified, reconfigure the active destination route. To delete a destination route, see [DeleteVpnRouteEntry](https://help.aliyun.com/document_detail/2526961.html).
       * - The **ModifyVpnRouteEntryWeight** operation is asynchronous. After a request is sent, the system returns a request ID. However, the weight of the VPN destination route is not yet modified, and the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the weight:
       *     - If the VPN destination route is in the **updating** state, the weight is being modified.
       *     - If the VPN destination route is in the **active** state, the weight is modified.
       * - The **ModifyVpnRouteEntryWeight** operation does not support concurrent weight modifications for destination routes on the same VPN gateway.
       *
       * @param request ModifyVpnRouteEntryWeightRequest
       * @return ModifyVpnRouteEntryWeightResponse
       */
      Models::ModifyVpnRouteEntryWeightResponse modifyVpnRouteEntryWeight(const Models::ModifyVpnRouteEntryWeightRequest &request);

      /**
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications to the resource group of Express Connect circuit resources within the same Express Connect circuit instance.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications to the resource group of Express Connect circuit resources within the same Express Connect circuit instance.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Modifies the resource group to which a VPN gateway resource belongs.
       *
       * @param request MoveVpnResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveVpnResourceGroupResponse
       */
      Models::MoveVpnResourceGroupResponse moveVpnResourceGroupWithOptions(const Models::MoveVpnResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a VPN gateway resource belongs.
       *
       * @param request MoveVpnResourceGroupRequest
       * @return MoveVpnResourceGroupResponse
       */
      Models::MoveVpnResourceGroupResponse moveVpnResourceGroup(const Models::MoveVpnResourceGroupRequest &request);

      /**
       * @summary Activates the flow log service.
       *
       * @description - The **OpenFlowLogService** operation does not support concurrent activation of the flow log service within the same Alibaba Cloud account.
       * - You can call the [GetFlowLogServiceStatus](https://help.aliyun.com/document_detail/449624.html) operation to query the activation status of the flow log service.
       *
       * @param request OpenFlowLogServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenFlowLogServiceResponse
       */
      Models::OpenFlowLogServiceResponse openFlowLogServiceWithOptions(const Models::OpenFlowLogServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the flow log service.
       *
       * @description - The **OpenFlowLogService** operation does not support concurrent activation of the flow log service within the same Alibaba Cloud account.
       * - You can call the [GetFlowLogServiceStatus](https://help.aliyun.com/document_detail/449624.html) operation to query the activation status of the flow log service.
       *
       * @param request OpenFlowLogServiceRequest
       * @return OpenFlowLogServiceResponse
       */
      Models::OpenFlowLogServiceResponse openFlowLogService(const Models::OpenFlowLogServiceRequest &request);

      /**
       * @summary Calls the OpenPhysicalConnectionService operation to enable the outbound traffic service.
       *
       * @param request OpenPhysicalConnectionServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPhysicalConnectionServiceResponse
       */
      Models::OpenPhysicalConnectionServiceResponse openPhysicalConnectionServiceWithOptions(const Models::OpenPhysicalConnectionServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the OpenPhysicalConnectionService operation to enable the outbound traffic service.
       *
       * @param request OpenPhysicalConnectionServiceRequest
       * @return OpenPhysicalConnectionServiceResponse
       */
      Models::OpenPhysicalConnectionServiceResponse openPhysicalConnectionService(const Models::OpenPhysicalConnectionServiceRequest &request);

      /**
       * @summary Activates the IP address pool feature by calling the OpenPublicIpAddressPoolService operation.
       *
       * @description - The **OpenPublicIpAddressPoolService** operation does not support concurrent activation of the IP address pool feature within the same Alibaba Cloud account.
       * - You can call the GetPublicIpAddressPoolServiceStatu operation to query the activation status of the IP address pool feature.
       *
       * @param request OpenPublicIpAddressPoolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPublicIpAddressPoolServiceResponse
       */
      Models::OpenPublicIpAddressPoolServiceResponse openPublicIpAddressPoolServiceWithOptions(const Models::OpenPublicIpAddressPoolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the IP address pool feature by calling the OpenPublicIpAddressPoolService operation.
       *
       * @description - The **OpenPublicIpAddressPoolService** operation does not support concurrent activation of the IP address pool feature within the same Alibaba Cloud account.
       * - You can call the GetPublicIpAddressPoolServiceStatu operation to query the activation status of the IP address pool feature.
       *
       * @param request OpenPublicIpAddressPoolServiceRequest
       * @return OpenPublicIpAddressPoolServiceResponse
       */
      Models::OpenPublicIpAddressPoolServiceResponse openPublicIpAddressPoolService(const Models::OpenPublicIpAddressPoolServiceRequest &request);

      /**
       * @summary Activates the traffic mirroring feature.
       *
       * @description The traffic mirroring feature is activated on a per-region basis. The OpenTrafficMirrorService operation does not support concurrent activation of the traffic mirroring feature within the same region.
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorServiceWithOptions(const Models::OpenTrafficMirrorServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the traffic mirroring feature.
       *
       * @description The traffic mirroring feature is activated on a per-region basis. The OpenTrafficMirrorService operation does not support concurrent activation of the traffic mirroring feature within the same region.
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorService(const Models::OpenTrafficMirrorServiceRequest &request);

      /**
       * @summary Publishes VPC routes to external components.
       *
       * @param request PublishVpcRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntriesWithOptions(const Models::PublishVpcRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes VPC routes to external components.
       *
       * @param request PublishVpcRouteEntriesRequest
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntries(const Models::PublishVpcRouteEntriesRequest &request);

      /**
       * @summary Publishes a destination-based route or policy-based route to the system route table of a VPC, or withdraws a published destination-based route or policy-based route from the system route table of a VPC.
       *
       * @param request PublishVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntryWithOptions(const Models::PublishVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a destination-based route or policy-based route to the system route table of a VPC, or withdraws a published destination-based route or policy-based route from the system route table of a VPC.
       *
       * @param request PublishVpnRouteEntryRequest
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntry(const Models::PublishVpnRouteEntryRequest &request);

      /**
       * @summary Recovers the access of an Express Connect circuit by calling the RecoverPhysicalConnection operation.
       *
       * @description ### Usage notes
       * You can call the RecoverPhysicalConnection operation to recover the access of an Express Connect circuit that has been terminated. Currently, only shared Express Connect circuits can be recovered.
       *
       * @param request RecoverPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverPhysicalConnectionResponse
       */
      Models::RecoverPhysicalConnectionResponse recoverPhysicalConnectionWithOptions(const Models::RecoverPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers the access of an Express Connect circuit by calling the RecoverPhysicalConnection operation.
       *
       * @description ### Usage notes
       * You can call the RecoverPhysicalConnection operation to recover the access of an Express Connect circuit that has been terminated. Currently, only shared Express Connect circuits can be recovered.
       *
       * @param request RecoverPhysicalConnectionRequest
       * @return RecoverPhysicalConnectionResponse
       */
      Models::RecoverPhysicalConnectionResponse recoverPhysicalConnection(const Models::RecoverPhysicalConnectionRequest &request);

      /**
       * @summary Recovers a Virtual Border Router (VBR) instance that has been terminated.
       *
       * @description After you call this operation, the VBR changes from the **terminated** state to the **recovering** state. After the VBR is recovered, it enters the **active** state.
       * Before you call this operation to recover a VBR, take note of the following items: 
       *       
       * - Only the owner of the Express Connect circuit can call this operation.  
       * - The Express Connect circuit to which the VBR belongs must be in the **Enabled** state.
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouterWithOptions(const Models::RecoverVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers a Virtual Border Router (VBR) instance that has been terminated.
       *
       * @description After you call this operation, the VBR changes from the **terminated** state to the **recovering** state. After the VBR is recovered, it enters the **active** state.
       * Before you call this operation to recover a VBR, take note of the following items: 
       *       
       * - Only the owner of the Express Connect circuit can call this operation.  
       * - The Express Connect circuit to which the VBR belongs must be in the **Enabled** state.
       *
       * @param request RecoverVirtualBorderRouterRequest
       * @return RecoverVirtualBorderRouterResponse
       */
      Models::RecoverVirtualBorderRouterResponse recoverVirtualBorderRouter(const Models::RecoverVirtualBorderRouterRequest &request);

      /**
       * @summary Releases a specified Elastic IP Address (EIP).
       *
       * @description Before you invoke this operation, take note of the following items:
       * - Before releasing an EIP, make sure the following conditions are met:
       *     - Only EIPs in the **Available** state can be released.
       *     - Only EIPs that use the pay-as-you-go billing method can be released. Subscription EIPs cannot be released.
       * - The **ReleaseEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP instance has not been released yet. The release node is still running in the background. You can invoke [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP instance:
       *     - If the EIP instance is in the **Releasing** state, the EIP instance is being released. In this state, you can only execute query operations.
       *     - If the EIP instance cannot be found, the EIP instance has been released.
       * - The **ReleaseEipAddress** operation does not support concurrent release of the same EIP instance.
       *
       * @param request ReleaseEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddressWithOptions(const Models::ReleaseEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a specified Elastic IP Address (EIP).
       *
       * @description Before you invoke this operation, take note of the following items:
       * - Before releasing an EIP, make sure the following conditions are met:
       *     - Only EIPs in the **Available** state can be released.
       *     - Only EIPs that use the pay-as-you-go billing method can be released. Subscription EIPs cannot be released.
       * - The **ReleaseEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP instance has not been released yet. The release node is still running in the background. You can invoke [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP instance:
       *     - If the EIP instance is in the **Releasing** state, the EIP instance is being released. In this state, you can only execute query operations.
       *     - If the EIP instance cannot be found, the EIP instance has been released.
       * - The **ReleaseEipAddress** operation does not support concurrent release of the same EIP instance.
       *
       * @param request ReleaseEipAddressRequest
       * @return ReleaseEipAddressResponse
       */
      Models::ReleaseEipAddressResponse releaseEipAddress(const Models::ReleaseEipAddressRequest &request);

      /**
       * @summary Releases contiguous elastic IP addresses (EIPs) by calling ReleaseEipSegmentAddress.
       *
       * @description - The **ReleaseEipSegmentAddress** operation releases all EIPs in a contiguous EIP group.
       * - Before you call **ReleaseEipSegmentAddress**, make sure that:
       *      - All EIPs in the contiguous EIP group are in the unassociated state. To disassociate an EIP from a cloud resource, call [UnassociateEipAddress](https://help.aliyun.com/document_detail/2518066.html).
       *      - No EIPs in the contiguous EIP group are added to an Internet Shared Bandwidth instance. To remove an EIP from an Internet Shared Bandwidth instance, call [RemoveCommonBandwidthPackageIp](https://help.aliyun.com/document_detail/2518602.html).
       * -  **ReleaseEipSegmentAddress** is an asynchronous operation. After you call this operation, the system returns a request ID, but the contiguous EIPs are not yet released. The release task continues to run in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group: 
       *     - If the contiguous EIP group is in the **Releasing** state, the contiguous EIPs are being released. In this state, you can only perform query operations.
       *     - If the contiguous EIP group cannot be found, the contiguous EIPs are released.
       * - **ReleaseEipSegmentAddress** does not support concurrent release of the same contiguous EIP group.
       *
       * @param request ReleaseEipSegmentAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipSegmentAddressResponse
       */
      Models::ReleaseEipSegmentAddressResponse releaseEipSegmentAddressWithOptions(const Models::ReleaseEipSegmentAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases contiguous elastic IP addresses (EIPs) by calling ReleaseEipSegmentAddress.
       *
       * @description - The **ReleaseEipSegmentAddress** operation releases all EIPs in a contiguous EIP group.
       * - Before you call **ReleaseEipSegmentAddress**, make sure that:
       *      - All EIPs in the contiguous EIP group are in the unassociated state. To disassociate an EIP from a cloud resource, call [UnassociateEipAddress](https://help.aliyun.com/document_detail/2518066.html).
       *      - No EIPs in the contiguous EIP group are added to an Internet Shared Bandwidth instance. To remove an EIP from an Internet Shared Bandwidth instance, call [RemoveCommonBandwidthPackageIp](https://help.aliyun.com/document_detail/2518602.html).
       * -  **ReleaseEipSegmentAddress** is an asynchronous operation. After you call this operation, the system returns a request ID, but the contiguous EIPs are not yet released. The release task continues to run in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group: 
       *     - If the contiguous EIP group is in the **Releasing** state, the contiguous EIPs are being released. In this state, you can only perform query operations.
       *     - If the contiguous EIP group cannot be found, the contiguous EIPs are released.
       * - **ReleaseEipSegmentAddress** does not support concurrent release of the same contiguous EIP group.
       *
       * @param request ReleaseEipSegmentAddressRequest
       * @return ReleaseEipSegmentAddressResponse
       */
      Models::ReleaseEipSegmentAddressResponse releaseEipSegmentAddress(const Models::ReleaseEipSegmentAddressRequest &request);

      /**
       * @summary Releases an IPv6 address that is not associated with an instance.
       *
       * @param request ReleaseIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseIpv6AddressResponse
       */
      Models::ReleaseIpv6AddressResponse releaseIpv6AddressWithOptions(const Models::ReleaseIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an IPv6 address that is not associated with an instance.
       *
       * @param request ReleaseIpv6AddressRequest
       * @return ReleaseIpv6AddressResponse
       */
      Models::ReleaseIpv6AddressResponse releaseIpv6Address(const Models::ReleaseIpv6AddressRequest &request);

      /**
       * @summary Removes an elastic IP address (EIP) from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveCommonBandwidthPackageIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCommonBandwidthPackageIpResponse
       */
      Models::RemoveCommonBandwidthPackageIpResponse removeCommonBandwidthPackageIpWithOptions(const Models::RemoveCommonBandwidthPackageIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an elastic IP address (EIP) from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveCommonBandwidthPackageIpRequest
       * @return RemoveCommonBandwidthPackageIpResponse
       */
      Models::RemoveCommonBandwidthPackageIpResponse removeCommonBandwidthPackageIp(const Models::RemoveCommonBandwidthPackageIpRequest &request);

      /**
       * @summary Removes an EIP from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveGlobalAccelerationInstanceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGlobalAccelerationInstanceIpResponse
       */
      Models::RemoveGlobalAccelerationInstanceIpResponse removeGlobalAccelerationInstanceIpWithOptions(const Models::RemoveGlobalAccelerationInstanceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an EIP from an Internet Shared Bandwidth instance.
       *
       * @param request RemoveGlobalAccelerationInstanceIpRequest
       * @return RemoveGlobalAccelerationInstanceIpResponse
       */
      Models::RemoveGlobalAccelerationInstanceIpResponse removeGlobalAccelerationInstanceIp(const Models::RemoveGlobalAccelerationInstanceIpRequest &request);

      /**
       * @summary Deletes an IP entry from an access control policy group.
       *
       * @param request RemoveIPv6TranslatorAclListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIPv6TranslatorAclListEntryResponse
       */
      Models::RemoveIPv6TranslatorAclListEntryResponse removeIPv6TranslatorAclListEntryWithOptions(const Models::RemoveIPv6TranslatorAclListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IP entry from an access control policy group.
       *
       * @param request RemoveIPv6TranslatorAclListEntryRequest
       * @return RemoveIPv6TranslatorAclListEntryResponse
       */
      Models::RemoveIPv6TranslatorAclListEntryResponse removeIPv6TranslatorAclListEntry(const Models::RemoveIPv6TranslatorAclListEntryRequest &request);

      /**
       * @summary Removes traffic mirror sources from a traffic mirror session.
       *
       * @description - **RemoveSourcesFromTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID, but the traffic mirror sources have not been removed yet. The removal task is still running in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Modifying** state, the traffic mirror sources are being removed.
       *     - If the traffic mirror session is in the **Created** state, the traffic mirror sources have been removed.
       * - **RemoveSourcesFromTrafficMirrorSession** does not support concurrent removal of traffic mirror sources from the same traffic mirror session.
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSessionWithOptions(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes traffic mirror sources from a traffic mirror session.
       *
       * @description - **RemoveSourcesFromTrafficMirrorSession** is an asynchronous operation. After a request is sent, the system returns a request ID, but the traffic mirror sources have not been removed yet. The removal task is still running in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Modifying** state, the traffic mirror sources are being removed.
       *     - If the traffic mirror session is in the **Created** state, the traffic mirror sources have been removed.
       * - **RemoveSourcesFromTrafficMirrorSession** does not support concurrent removal of traffic mirror sources from the same traffic mirror session.
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSession(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request);

      /**
       * @summary Calls the ReplaceVpcDhcpOptionsSet operation to change the DHCP options set associated with a VPC.
       *
       * @description - **ReplaceVpcDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the DHCP options set has not been changed yet because the change task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the change status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being changed.
       *     - If the DHCP options set is in the **InUse** state, the DHCP options set has been changed.
       * - **ReplaceVpcDhcpOptionsSet** does not support concurrent changes to the DHCP options set associated with the same VPC.
       *
       * @param request ReplaceVpcDhcpOptionsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceVpcDhcpOptionsSetResponse
       */
      Models::ReplaceVpcDhcpOptionsSetResponse replaceVpcDhcpOptionsSetWithOptions(const Models::ReplaceVpcDhcpOptionsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ReplaceVpcDhcpOptionsSet operation to change the DHCP options set associated with a VPC.
       *
       * @description - **ReplaceVpcDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the DHCP options set has not been changed yet because the change task is still running in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the change status of the DHCP options set:
       *     - If the DHCP options set is in the **Pending** state, the DHCP options set is being changed.
       *     - If the DHCP options set is in the **InUse** state, the DHCP options set has been changed.
       * - **ReplaceVpcDhcpOptionsSet** does not support concurrent changes to the DHCP options set associated with the same VPC.
       *
       * @param request ReplaceVpcDhcpOptionsSetRequest
       * @return ReplaceVpcDhcpOptionsSetResponse
       */
      Models::ReplaceVpcDhcpOptionsSetResponse replaceVpcDhcpOptionsSet(const Models::ReplaceVpcDhcpOptionsSetRequest &request);

      /**
       * @summary Retries the delivery of the latest prefix list by calling the RetryVpcPrefixListAssociation operation.
       *
       * @description - After you modify the information of a prefix list instance, if the route table associated with the prefix list instance does not automatically update the prefix list instance information, you can call this operation to redeliver the latest prefix list instance to the associated route table.
       * - The **RetryVpcPrefixListAssociation** operation is asynchronous. After you send a request, the system returns a request ID, but the latest prefix list instance has not been redelivered yet. The redelivery task is still running in the background. You can call [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to query the latest delivery status of the prefix list instance:
       *     - If the delivery status is **Modifying**, the latest prefix list instance is being redelivered.
       *     - If the delivery status is **ModifyFailed**, the latest prefix list instance failed to be redelivered.
       *     - If the delivery status is **Created**, the latest prefix list instance is redelivered.
       * - The **RetryVpcPrefixListAssociation** operation does not support concurrent retry delivery of the latest prefix list instance for the same prefix list.
       * ## Scenarios
       * When you modify a prefix list instance, the modification succeeds as long as the CIDR blocks are valid, no conflicting CIDR blocks exist, and the maximum number of entries for the prefix list instance is not exceeded. However, the reference may fail due to issues on the referencing side, such as quota limits or a route conflict with existing routing entries. After you resolve the failed issue on the referencing side, invoke the **RetryVpcPrefixListAssociation** operation to redeliver the latest prefix list instance.
       *
       * @param request RetryVpcPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryVpcPrefixListAssociationResponse
       */
      Models::RetryVpcPrefixListAssociationResponse retryVpcPrefixListAssociationWithOptions(const Models::RetryVpcPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries the delivery of the latest prefix list by calling the RetryVpcPrefixListAssociation operation.
       *
       * @description - After you modify the information of a prefix list instance, if the route table associated with the prefix list instance does not automatically update the prefix list instance information, you can call this operation to redeliver the latest prefix list instance to the associated route table.
       * - The **RetryVpcPrefixListAssociation** operation is asynchronous. After you send a request, the system returns a request ID, but the latest prefix list instance has not been redelivered yet. The redelivery task is still running in the background. You can call [GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html) to query the latest delivery status of the prefix list instance:
       *     - If the delivery status is **Modifying**, the latest prefix list instance is being redelivered.
       *     - If the delivery status is **ModifyFailed**, the latest prefix list instance failed to be redelivered.
       *     - If the delivery status is **Created**, the latest prefix list instance is redelivered.
       * - The **RetryVpcPrefixListAssociation** operation does not support concurrent retry delivery of the latest prefix list instance for the same prefix list.
       * ## Scenarios
       * When you modify a prefix list instance, the modification succeeds as long as the CIDR blocks are valid, no conflicting CIDR blocks exist, and the maximum number of entries for the prefix list instance is not exceeded. However, the reference may fail due to issues on the referencing side, such as quota limits or a route conflict with existing routing entries. After you resolve the failed issue on the referencing side, invoke the **RetryVpcPrefixListAssociation** operation to redeliver the latest prefix list instance.
       *
       * @param request RetryVpcPrefixListAssociationRequest
       * @return RetryVpcPrefixListAssociationResponse
       */
      Models::RetryVpcPrefixListAssociationResponse retryVpcPrefixListAssociation(const Models::RetryVpcPrefixListAssociationRequest &request);

      /**
       * @summary Revokes the authorization of a network instance for a specified Cloud Enterprise Network (CEN) instance.
       *
       * @description - The **RevokeInstanceFromCen** operation is a VPC API operation. Therefore, you must use the `vpc.aliyuncs.com` endpoint to call this operation. The API version is `2016-04-28`.
       * - The **RevokeInstanceFromCen** operation does not support concurrent revocation of authorization of a network instance for a specified CEN instance within the same VPC, VBR, or CCN.
       *
       * @param request RevokeInstanceFromCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromCenResponse
       */
      Models::RevokeInstanceFromCenResponse revokeInstanceFromCenWithOptions(const Models::RevokeInstanceFromCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the authorization of a network instance for a specified Cloud Enterprise Network (CEN) instance.
       *
       * @description - The **RevokeInstanceFromCen** operation is a VPC API operation. Therefore, you must use the `vpc.aliyuncs.com` endpoint to call this operation. The API version is `2016-04-28`.
       * - The **RevokeInstanceFromCen** operation does not support concurrent revocation of authorization of a network instance for a specified CEN instance within the same VPC, VBR, or CCN.
       *
       * @param request RevokeInstanceFromCenRequest
       * @return RevokeInstanceFromCenResponse
       */
      Models::RevokeInstanceFromCenResponse revokeInstanceFromCen(const Models::RevokeInstanceFromCenRequest &request);

      /**
       * @summary Invokes the RevokeInstanceFromVbr operation to revoke the authorization of a VPC-connected instance on a VBR instance in a cross-account VBR uplink scenario.
       *
       * @param tmpReq RevokeInstanceFromVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbrWithOptions(const Models::RevokeInstanceFromVbrRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the RevokeInstanceFromVbr operation to revoke the authorization of a VPC-connected instance on a VBR instance in a cross-account VBR uplink scenario.
       *
       * @param request RevokeInstanceFromVbrRequest
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbr(const Models::RevokeInstanceFromVbrRequest &request);

      /**
       * @summary Reapplies for a Letter of Authorization (LOA) if a previous LOA application submitted by calling the ApplyPhysicalConnectionLOA operation was rejected.
       *
       * @param request SecondApplyPhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SecondApplyPhysicalConnectionLOAResponse
       */
      Models::SecondApplyPhysicalConnectionLOAResponse secondApplyPhysicalConnectionLOAWithOptions(const Models::SecondApplyPhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reapplies for a Letter of Authorization (LOA) if a previous LOA application submitted by calling the ApplyPhysicalConnectionLOA operation was rejected.
       *
       * @param request SecondApplyPhysicalConnectionLOARequest
       * @return SecondApplyPhysicalConnectionLOAResponse
       */
      Models::SecondApplyPhysicalConnectionLOAResponse secondApplyPhysicalConnectionLOA(const Models::SecondApplyPhysicalConnectionLOARequest &request);

      /**
       * @summary Configures high-definition second-level monitoring for an EIP.
       *
       * @description The **SetHighDefinitionMonitorLogStatus** operation does not support concurrent configuration of high-definition second-level monitoring for the same EIP instance.
       *
       * @param request SetHighDefinitionMonitorLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHighDefinitionMonitorLogStatusResponse
       */
      Models::SetHighDefinitionMonitorLogStatusResponse setHighDefinitionMonitorLogStatusWithOptions(const Models::SetHighDefinitionMonitorLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures high-definition second-level monitoring for an EIP.
       *
       * @description The **SetHighDefinitionMonitorLogStatus** operation does not support concurrent configuration of high-definition second-level monitoring for the same EIP instance.
       *
       * @param request SetHighDefinitionMonitorLogStatusRequest
       * @return SetHighDefinitionMonitorLogStatusResponse
       */
      Models::SetHighDefinitionMonitorLogStatusResponse setHighDefinitionMonitorLogStatus(const Models::SetHighDefinitionMonitorLogStatusRequest &request);

      /**
       * @summary Calls the StartFailoverTestJob operation to start an Express Connect disaster recovery drill task.
       *
       * @description Only disaster recovery drill tasks in the **Pending** state can be started.
       *
       * @param request StartFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJobWithOptions(const Models::StartFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the StartFailoverTestJob operation to start an Express Connect disaster recovery drill task.
       *
       * @description Only disaster recovery drill tasks in the **Pending** state can be started.
       *
       * @param request StartFailoverTestJobRequest
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJob(const Models::StartFailoverTestJobRequest &request);

      /**
       * @summary Calls the StopFailoverTestJob operation to stop an Express Connect failover test job.
       *
       * @description Only failover test jobs in the **Testing** state can be stopped.
       *
       * @param request StopFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopFailoverTestJobResponse
       */
      Models::StopFailoverTestJobResponse stopFailoverTestJobWithOptions(const Models::StopFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the StopFailoverTestJob operation to stop an Express Connect failover test job.
       *
       * @description Only failover test jobs in the **Testing** state can be stopped.
       *
       * @param request StopFailoverTestJobRequest
       * @return StopFailoverTestJobResponse
       */
      Models::StopFailoverTestJobResponse stopFailoverTestJob(const Models::StopFailoverTestJobRequest &request);

      /**
       * @summary Performs an active/standby switchover for a route target group.
       *
       * @description Performs an active/standby switchover for a route target group.
       *
       * @param request SwitchActiveRouteTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchActiveRouteTargetResponse
       */
      Models::SwitchActiveRouteTargetResponse switchActiveRouteTargetWithOptions(const Models::SwitchActiveRouteTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs an active/standby switchover for a route target group.
       *
       * @description Performs an active/standby switchover for a route target group.
       *
       * @param request SwitchActiveRouteTargetRequest
       * @return SwitchActiveRouteTargetResponse
       */
      Models::SwitchActiveRouteTargetResponse switchActiveRouteTarget(const Models::SwitchActiveRouteTargetRequest &request);

      /**
       * @summary Creates and binds tags to specified resources.
       *
       * @description Labels are marks that you allocate to instances. Each label consists of a key-value pair. The following rules apply to labels: 
       * - Each label key must be unique on an instance.
       * - Empty labels that are not attached to instances are not supported. Labels must be attached to instances.
       * - Label information is not shared across regions. 
       *     For example, labels created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - Within the same account and region, label information is shared among virtual private clouds (VPCs), route tables, vSwitches, and elastic IP addresses (EIPs). 
       *     For example, if a virtual private cloud (VPC) is attached with a label within the same account and region, you can directly select and attach that label to a vSwitch, route table, or EIP on the label editing page without manually entering the label key-value information. You can modify the key and value of a label, or delete labels from instances at any time. If you delete an instance, all labels attached to the instance are also deleted.
       * - A maximum of 20 labels can be attached to a single instance. Before attaching labels, Alibaba Cloud verifies the number of existing labels on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to specified resources.
       *
       * @description Labels are marks that you allocate to instances. Each label consists of a key-value pair. The following rules apply to labels: 
       * - Each label key must be unique on an instance.
       * - Empty labels that are not attached to instances are not supported. Labels must be attached to instances.
       * - Label information is not shared across regions. 
       *     For example, labels created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - Within the same account and region, label information is shared among virtual private clouds (VPCs), route tables, vSwitches, and elastic IP addresses (EIPs). 
       *     For example, if a virtual private cloud (VPC) is attached with a label within the same account and region, you can directly select and attach that label to a vSwitch, route table, or EIP on the label editing page without manually entering the label key-value information. You can modify the key and value of a label, or delete labels from instances at any time. If you delete an instance, all labels attached to the instance are also deleted.
       * - A maximum of 20 labels can be attached to a single instance. Before attaching labels, Alibaba Cloud verifies the number of existing labels on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Creates and binds tags to specified Express Connect circuit instances.
       *
       * @description Tags are labels that you assign to instances. Each tag consists of a key-value pair. Take note of the following items when you use tags: 
       * - Each tag key (Key) must be unique on an instance.
       * - Empty tags that are not bound to instances are not supported. A tag must be bound to an instance.
       * - Tag information is not shared across regions. 
       *     For example, tags created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - You can bind up to 20 tags to a single instance. Before binding tags, Alibaba Cloud checks the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesForExpressConnectResponse
       */
      Models::TagResourcesForExpressConnectResponse tagResourcesForExpressConnectWithOptions(const Models::TagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to specified Express Connect circuit instances.
       *
       * @description Tags are labels that you assign to instances. Each tag consists of a key-value pair. Take note of the following items when you use tags: 
       * - Each tag key (Key) must be unique on an instance.
       * - Empty tags that are not bound to instances are not supported. A tag must be bound to an instance.
       * - Tag information is not shared across regions. 
       *     For example, tags created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - You can bind up to 20 tags to a single instance. Before binding tags, Alibaba Cloud checks the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesForExpressConnectRequest
       * @return TagResourcesForExpressConnectResponse
       */
      Models::TagResourcesForExpressConnectResponse tagResourcesForExpressConnect(const Models::TagResourcesForExpressConnectRequest &request);

      /**
       * @summary Terminates access to an Express Connect circuit after the circuit is enabled.
       *
       * @description After you call the TerminatePhysicalConnection operation, the Express Connect circuit enters the **Terminating** state. After the operation is complete, the circuit enters the **Terminated** state.
       * When you call this operation to terminate an Express Connect circuit, note the following items:
       * - You can terminate only an Express Connect circuit that is in the **Enabled** state.
       * - Before you terminate an Express Connect circuit, you must delete the VBR associated with it.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnectionWithOptions(const Models::TerminatePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates access to an Express Connect circuit after the circuit is enabled.
       *
       * @description After you call the TerminatePhysicalConnection operation, the Express Connect circuit enters the **Terminating** state. After the operation is complete, the circuit enters the **Terminated** state.
       * When you call this operation to terminate an Express Connect circuit, note the following items:
       * - You can terminate only an Express Connect circuit that is in the **Enabled** state.
       * - Before you terminate an Express Connect circuit, you must delete the VBR associated with it.
       *
       * @param request TerminatePhysicalConnectionRequest
       * @return TerminatePhysicalConnectionResponse
       */
      Models::TerminatePhysicalConnectionResponse terminatePhysicalConnection(const Models::TerminatePhysicalConnectionRequest &request);

      /**
       * @summary Terminates a Virtual Border Router (VBR).
       *
       * @description After you call this operation, the VBR changes from the **active** state to the **terminating** state. After the VBR is terminated, it enters the **terminated** state. 
       * > Only the owner of the Express Connect circuit can call this operation.
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouterWithOptions(const Models::TerminateVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a Virtual Border Router (VBR).
       *
       * @description After you call this operation, the VBR changes from the **active** state to the **terminating** state. After the VBR is terminated, it enters the **terminated** state. 
       * > Only the owner of the Express Connect circuit can call this operation.
       *
       * @param request TerminateVirtualBorderRouterRequest
       * @return TerminateVirtualBorderRouterResponse
       */
      Models::TerminateVirtualBorderRouterResponse terminateVirtualBorderRouter(const Models::TerminateVirtualBorderRouterRequest &request);

      /**
       * @summary Migrates a contiguous Elastic IP Address (EIP) group to an IP address pool.
       *
       * @param request TransformEipSegmentToPublicIpAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformEipSegmentToPublicIpAddressPoolResponse
       */
      Models::TransformEipSegmentToPublicIpAddressPoolResponse transformEipSegmentToPublicIpAddressPoolWithOptions(const Models::TransformEipSegmentToPublicIpAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a contiguous Elastic IP Address (EIP) group to an IP address pool.
       *
       * @param request TransformEipSegmentToPublicIpAddressPoolRequest
       * @return TransformEipSegmentToPublicIpAddressPoolResponse
       */
      Models::TransformEipSegmentToPublicIpAddressPoolResponse transformEipSegmentToPublicIpAddressPool(const Models::TransformEipSegmentToPublicIpAddressPoolRequest &request);

      /**
       * @summary Unbinds tags from a specified list of resources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a specified list of resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Disassociates an elastic IP address (EIP) from the cloud resource to which it is bound.
       *
       * @description -  The **UnassociateEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP is not yet disassociated. The disassociation task continues to run in the background. You can call [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP: 
       *     - If the EIP is in the **Unassociating** state, the EIP is being disassociated. In this state, you can only perform query operations.
       *     - If the EIP is in the **Available** state, the EIP is disassociated.
       * - The **UnassociateEipAddress** operation does not support concurrent disassociation requests for the same EIP.
       *
       * @param request UnassociateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddressWithOptions(const Models::UnassociateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an elastic IP address (EIP) from the cloud resource to which it is bound.
       *
       * @description -  The **UnassociateEipAddress** operation is asynchronous. After you send a request, the system returns a request ID, but the EIP is not yet disassociated. The disassociation task continues to run in the background. You can call [DescribeEipAddresses](https://help.aliyun.com/document_detail/120193.html) to query the status of the EIP: 
       *     - If the EIP is in the **Unassociating** state, the EIP is being disassociated. In this state, you can only perform query operations.
       *     - If the EIP is in the **Available** state, the EIP is disassociated.
       * - The **UnassociateEipAddress** operation does not support concurrent disassociation requests for the same EIP.
       *
       * @param request UnassociateEipAddressRequest
       * @return UnassociateEipAddressResponse
       */
      Models::UnassociateEipAddressResponse unassociateEipAddress(const Models::UnassociateEipAddressRequest &request);

      /**
       * @summary Invokes the UnassociateGlobalAccelerationInstance operation to disassociate a backend service instance from an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request UnassociateGlobalAccelerationInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateGlobalAccelerationInstanceResponse
       */
      Models::UnassociateGlobalAccelerationInstanceResponse unassociateGlobalAccelerationInstanceWithOptions(const Models::UnassociateGlobalAccelerationInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UnassociateGlobalAccelerationInstance operation to disassociate a backend service instance from an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request UnassociateGlobalAccelerationInstanceRequest
       * @return UnassociateGlobalAccelerationInstanceResponse
       */
      Models::UnassociateGlobalAccelerationInstanceResponse unassociateGlobalAccelerationInstance(const Models::UnassociateGlobalAccelerationInstanceRequest &request);

      /**
       * @summary Invokes the UnassociateHaVip operation to disassociate a high-availability virtual IP address (HaVip) from an ECS instance or network interface controller (NIC) in a virtual private cloud (VPC).
       *
       * @description When you invoke this operation to disassociate an HaVip from an ECS instance or network interface controller (NIC) in a virtual private cloud (VPC), take note of the following items: 
       * - The ECS instance to be disassociated must be in the **Running** or **Stopped** state. 
       * - The HaVip to be disassociated must be in the **Available** or **InUse** state.
       * - The **UnassociateHaVip** operation is asynchronous. After you send a request, the system returns a request ID, but the HaVip is not yet disassociated. The disassociation task is still running in the background. You can invoke [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the disassociation status of the HaVip:
       *     - If the HaVip is in the **Unassociating** state, the HaVip is being disassociated.
       *     - If the HaVip is in the **Inuse** or **Available** state, the HaVip is disassociated.
       * - The **UnassociateHaVip** operation does not support concurrent disassociation of the same HaVip.
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UnassociateHaVip operation to disassociate a high-availability virtual IP address (HaVip) from an ECS instance or network interface controller (NIC) in a virtual private cloud (VPC).
       *
       * @description When you invoke this operation to disassociate an HaVip from an ECS instance or network interface controller (NIC) in a virtual private cloud (VPC), take note of the following items: 
       * - The ECS instance to be disassociated must be in the **Running** or **Stopped** state. 
       * - The HaVip to be disassociated must be in the **Available** or **InUse** state.
       * - The **UnassociateHaVip** operation is asynchronous. After you send a request, the system returns a request ID, but the HaVip is not yet disassociated. The disassociation task is still running in the background. You can invoke [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the disassociation status of the HaVip:
       *     - If the HaVip is in the **Unassociating** state, the HaVip is being disassociated.
       *     - If the HaVip is in the **Inuse** or **Available** state, the HaVip is disassociated.
       * - The **UnassociateHaVip** operation does not support concurrent disassociation of the same HaVip.
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

      /**
       * @summary Disassociates a network ACL from a vSwitch by calling the UnassociateNetworkAcl operation.
       *
       * @description - **UnassociateNetworkAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL is not yet disassociated from the vSwitch. The disassociation task is still running in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the disassociation status of the network ACL and the vSwitch:
       *     - If the network ACL and the vSwitch are in the **UNBINDING** state, the disassociation is in progress.
       *     - If no binding record is found, the network ACL is disassociated from the vSwitch.
       * - **UnassociateNetworkAcl** does not support concurrent disassociation of vSwitches from the same network ACL.
       *
       * @param request UnassociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAclWithOptions(const Models::UnassociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a network ACL from a vSwitch by calling the UnassociateNetworkAcl operation.
       *
       * @description - **UnassociateNetworkAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the network ACL is not yet disassociated from the vSwitch. The disassociation task is still running in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the disassociation status of the network ACL and the vSwitch:
       *     - If the network ACL and the vSwitch are in the **UNBINDING** state, the disassociation is in progress.
       *     - If no binding record is found, the network ACL is disassociated from the vSwitch.
       * - **UnassociateNetworkAcl** does not support concurrent disassociation of vSwitches from the same network ACL.
       *
       * @param request UnassociateNetworkAclRequest
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAcl(const Models::UnassociateNetworkAclRequest &request);

      /**
       * @summary Disassociates a Virtual Border Router (VBR) from an Express Connect circuit.
       *
       * @param request UnassociatePhysicalConnectionFromVirtualBorderRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociatePhysicalConnectionFromVirtualBorderRouterResponse
       */
      Models::UnassociatePhysicalConnectionFromVirtualBorderRouterResponse unassociatePhysicalConnectionFromVirtualBorderRouterWithOptions(const Models::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Virtual Border Router (VBR) from an Express Connect circuit.
       *
       * @param request UnassociatePhysicalConnectionFromVirtualBorderRouterRequest
       * @return UnassociatePhysicalConnectionFromVirtualBorderRouterResponse
       */
      Models::UnassociatePhysicalConnectionFromVirtualBorderRouterResponse unassociatePhysicalConnectionFromVirtualBorderRouter(const Models::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request);

      /**
       * @summary Disassociates a route table from a vSwitch by calling the UnassociateRouteTable operation.
       *
       * @description - **UnassociateRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the route table has not been disassociated yet. The disassociation task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the disassociation status of the route table:
       *     - If the vSwitch is in the **Pending** state, the route table is being disassociated.
       *     - If the vSwitch is in the **Available** state, the route table is disassociated.
       * - **UnassociateRouteTable** does not support concurrent disassociation of the same route table from the same vSwitch.
       *
       * @param request UnassociateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateRouteTableResponse
       */
      Models::UnassociateRouteTableResponse unassociateRouteTableWithOptions(const Models::UnassociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a route table from a vSwitch by calling the UnassociateRouteTable operation.
       *
       * @description - **UnassociateRouteTable** is an asynchronous operation. After you call this operation, the system returns a request ID, but the route table has not been disassociated yet. The disassociation task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the disassociation status of the route table:
       *     - If the vSwitch is in the **Pending** state, the route table is being disassociated.
       *     - If the vSwitch is in the **Available** state, the route table is disassociated.
       * - **UnassociateRouteTable** does not support concurrent disassociation of the same route table from the same vSwitch.
       *
       * @param request UnassociateRouteTableRequest
       * @return UnassociateRouteTableResponse
       */
      Models::UnassociateRouteTableResponse unassociateRouteTable(const Models::UnassociateRouteTableRequest &request);

      /**
       * @summary Calls the UnassociateVpcCidrBlock operation to delete a secondary CIDR block from a VPC.
       *
       * @description - Before you delete a secondary CIDR block from a VPC, delete the vSwitches created with the secondary CIDR block. For more information, see [DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html).
       * - The **UnassociateVpcCidrBlock** operation does not support concurrently deleting secondary CIDR blocks from the same VPC.
       *
       * @param request UnassociateVpcCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateVpcCidrBlockResponse
       */
      Models::UnassociateVpcCidrBlockResponse unassociateVpcCidrBlockWithOptions(const Models::UnassociateVpcCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UnassociateVpcCidrBlock operation to delete a secondary CIDR block from a VPC.
       *
       * @description - Before you delete a secondary CIDR block from a VPC, delete the vSwitches created with the secondary CIDR block. For more information, see [DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html).
       * - The **UnassociateVpcCidrBlock** operation does not support concurrently deleting secondary CIDR blocks from the same VPC.
       *
       * @param request UnassociateVpcCidrBlockRequest
       * @return UnassociateVpcCidrBlockResponse
       */
      Models::UnassociateVpcCidrBlockResponse unassociateVpcCidrBlock(const Models::UnassociateVpcCidrBlockRequest &request);

      /**
       * @summary Unbinds tags from a specified list of Express Connect resources.
       *
       * @param request UntagResourcesForExpressConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesForExpressConnectResponse
       */
      Models::UntagResourcesForExpressConnectResponse untagResourcesForExpressConnectWithOptions(const Models::UntagResourcesForExpressConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a specified list of Express Connect resources.
       *
       * @param request UntagResourcesForExpressConnectRequest
       * @return UntagResourcesForExpressConnectResponse
       */
      Models::UntagResourcesForExpressConnectResponse untagResourcesForExpressConnect(const Models::UntagResourcesForExpressConnectRequest &request);

      /**
       * @summary Modifies the configuration of a DHCP options set by calling the UpdateDhcpOptionsSetAttribute operation.
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttributeWithOptions(const Models::UpdateDhcpOptionsSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a DHCP options set by calling the UpdateDhcpOptionsSetAttribute operation.
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttribute(const Models::UpdateDhcpOptionsSetAttributeRequest &request);

      /**
       * @summary Invokes the UpdateEnhancedVpnGateway operation to modify the name, description, or routing automatic propagation feature of an enhanced VPN gateway.
       *
       * @description - **UpdateEnhancedVpnGateway** is an asynchronous operation. After you call this operation, the system returns the information about the enhanced VPN gateway, but the configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the enhanced VPN gateway:
       *   - If the enhanced VPN gateway is in the **updating** state, the configuration is being modified.
       *   - If the enhanced VPN gateway is in the **active** state, the configuration has been modified.
       * - **UpdateEnhancedVpnGateway** does not support concurrent modifications to the same enhanced VPN gateway.
       *
       * @param request UpdateEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnhancedVpnGatewayResponse
       */
      Models::UpdateEnhancedVpnGatewayResponse updateEnhancedVpnGatewayWithOptions(const Models::UpdateEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateEnhancedVpnGateway operation to modify the name, description, or routing automatic propagation feature of an enhanced VPN gateway.
       *
       * @description - **UpdateEnhancedVpnGateway** is an asynchronous operation. After you call this operation, the system returns the information about the enhanced VPN gateway, but the configuration has not been modified yet. The modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the modification status of the enhanced VPN gateway:
       *   - If the enhanced VPN gateway is in the **updating** state, the configuration is being modified.
       *   - If the enhanced VPN gateway is in the **active** state, the configuration has been modified.
       * - **UpdateEnhancedVpnGateway** does not support concurrent modifications to the same enhanced VPN gateway.
       *
       * @param request UpdateEnhancedVpnGatewayRequest
       * @return UpdateEnhancedVpnGatewayResponse
       */
      Models::UpdateEnhancedVpnGatewayResponse updateEnhancedVpnGateway(const Models::UpdateEnhancedVpnGatewayRequest &request);

      /**
       * @summary Updates a failover test job for Express Connect by calling the UpdateFailoverTestJob operation.
       *
       * @description Only failover test jobs in the **Pending** state can be updated.
       *
       * @param request UpdateFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFailoverTestJobResponse
       */
      Models::UpdateFailoverTestJobResponse updateFailoverTestJobWithOptions(const Models::UpdateFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a failover test job for Express Connect by calling the UpdateFailoverTestJob operation.
       *
       * @description Only failover test jobs in the **Pending** state can be updated.
       *
       * @param request UpdateFailoverTestJobRequest
       * @return UpdateFailoverTestJobResponse
       */
      Models::UpdateFailoverTestJobResponse updateFailoverTestJob(const Models::UpdateFailoverTestJobRequest &request);

      /**
       * @summary Modifies the next hop type and next hop of a gateway route table.
       *
       * @param request UpdateGatewayRouteTableEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteTableEntryAttributeResponse
       */
      Models::UpdateGatewayRouteTableEntryAttributeResponse updateGatewayRouteTableEntryAttributeWithOptions(const Models::UpdateGatewayRouteTableEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the next hop type and next hop of a gateway route table.
       *
       * @param request UpdateGatewayRouteTableEntryAttributeRequest
       * @return UpdateGatewayRouteTableEntryAttributeResponse
       */
      Models::UpdateGatewayRouteTableEntryAttributeResponse updateGatewayRouteTableEntryAttribute(const Models::UpdateGatewayRouteTableEntryAttributeRequest &request);

      /**
       * @summary Updates the configuration of an IPsec server by calling the UpdateIpsecServer operation.
       *
       * @description - If you modify only the **IpsecServerName** of the IPsec server, this operation is synchronous. If you modify configurations other than **IpsecServerName**, this operation is asynchronous.
       * - When the **UpdateIpsecServer** operation is asynchronous, the system returns a request ID first, but the IPsec server configuration has not been modified yet because the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the modification status of the IPsec server configuration:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server configuration is being modified.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server configuration has been modified.
       * - The **UpdateIpsecServer** operation does not support concurrent modifications to IPsec server configurations under the same VPN gateway.
       *
       * @param request UpdateIpsecServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpsecServerResponse
       */
      Models::UpdateIpsecServerResponse updateIpsecServerWithOptions(const Models::UpdateIpsecServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an IPsec server by calling the UpdateIpsecServer operation.
       *
       * @description - If you modify only the **IpsecServerName** of the IPsec server, this operation is synchronous. If you modify configurations other than **IpsecServerName**, this operation is asynchronous.
       * - When the **UpdateIpsecServer** operation is asynchronous, the system returns a request ID first, but the IPsec server configuration has not been modified yet because the modification task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the modification status of the IPsec server configuration:
       *     - If the VPN gateway instance is in the **updating** state, the IPsec server configuration is being modified.
       *     - If the VPN gateway instance is in the **active** state, the IPsec server configuration has been modified.
       * - The **UpdateIpsecServer** operation does not support concurrent modifications to IPsec server configurations under the same VPN gateway.
       *
       * @param request UpdateIpsecServerRequest
       * @return UpdateIpsecServerResponse
       */
      Models::UpdateIpsecServerResponse updateIpsecServer(const Models::UpdateIpsecServerRequest &request);

      /**
       * @summary Modifies the name or description of an IPv4 gateway.
       *
       * @description The **UpdateIpv4GatewayAttribute** operation does not support concurrent modifications to the name or description of the same IPv4 gateway.
       *
       * @param request UpdateIpv4GatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpv4GatewayAttributeResponse
       */
      Models::UpdateIpv4GatewayAttributeResponse updateIpv4GatewayAttributeWithOptions(const Models::UpdateIpv4GatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of an IPv4 gateway.
       *
       * @description The **UpdateIpv4GatewayAttribute** operation does not support concurrent modifications to the name or description of the same IPv4 gateway.
       *
       * @param request UpdateIpv4GatewayAttributeRequest
       * @return UpdateIpv4GatewayAttributeResponse
       */
      Models::UpdateIpv4GatewayAttributeResponse updateIpv4GatewayAttribute(const Models::UpdateIpv4GatewayAttributeRequest &request);

      /**
       * @deprecated OpenAPI UpdateNatGatewayNatType is deprecated
       *
       * @summary Switches a standard NAT gateway to an enhanced NAT gateway.
       *
       * @description ## Operation description
       * Before you invoke the UpdateNatGatewayNatType operation, take note of the following information:
       * - **UpdateNatGatewayNatType** is an asynchronous operation. After you send a request, the system returns a request ID, but the NAT gateway type has not been upgraded yet. The upgrade node is still running in the background. You can invoke GetNatGatewayConvertStatus to query the upgrade status of the NAT gateway. For more information, see [GetNatGatewayConvertStatus](https://help.aliyun.com/document_detail/184744.html).
       *     - If the upgrade status is **processing**, the NAT gateway is being upgraded. In this state, you can only execute query operations and cannot execute other operations.
       *     - If the upgrade status is **successful**, the NAT gateway type has been upgraded.
       *     - If the upgrade status is **failed**, the NAT gateway type failed to be upgraded.
       * - The **UpdateNatGatewayNatType** operation does not support concurrent upgrades of the NAT gateway type for the same NAT gateway.
       * - Enhanced NAT gateways and standard NAT gateways have the same billing. The billable methods do not change during or after the upgrade procedure.
       * - Each resource upgrade procedure may take up to 5 minutes. During the upgrade, 1 to 2 transient connections that last a few seconds may occur. Use the reconnection mechanism to recover the service. Whether the reconnection mechanism is automatic or manual depends on the service itself.
       * - You can only upgrade a standard NAT gateway to an enhanced NAT gateway. You cannot downgrade an enhanced NAT gateway to a standard NAT gateway.
       *
       * @param request UpdateNatGatewayNatTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNatGatewayNatTypeResponse
       */
      Models::UpdateNatGatewayNatTypeResponse updateNatGatewayNatTypeWithOptions(const Models::UpdateNatGatewayNatTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateNatGatewayNatType is deprecated
       *
       * @summary Switches a standard NAT gateway to an enhanced NAT gateway.
       *
       * @description ## Operation description
       * Before you invoke the UpdateNatGatewayNatType operation, take note of the following information:
       * - **UpdateNatGatewayNatType** is an asynchronous operation. After you send a request, the system returns a request ID, but the NAT gateway type has not been upgraded yet. The upgrade node is still running in the background. You can invoke GetNatGatewayConvertStatus to query the upgrade status of the NAT gateway. For more information, see [GetNatGatewayConvertStatus](https://help.aliyun.com/document_detail/184744.html).
       *     - If the upgrade status is **processing**, the NAT gateway is being upgraded. In this state, you can only execute query operations and cannot execute other operations.
       *     - If the upgrade status is **successful**, the NAT gateway type has been upgraded.
       *     - If the upgrade status is **failed**, the NAT gateway type failed to be upgraded.
       * - The **UpdateNatGatewayNatType** operation does not support concurrent upgrades of the NAT gateway type for the same NAT gateway.
       * - Enhanced NAT gateways and standard NAT gateways have the same billing. The billable methods do not change during or after the upgrade procedure.
       * - Each resource upgrade procedure may take up to 5 minutes. During the upgrade, 1 to 2 transient connections that last a few seconds may occur. Use the reconnection mechanism to recover the service. Whether the reconnection mechanism is automatic or manual depends on the service itself.
       * - You can only upgrade a standard NAT gateway to an enhanced NAT gateway. You cannot downgrade an enhanced NAT gateway to a standard NAT gateway.
       *
       * @param request UpdateNatGatewayNatTypeRequest
       * @return UpdateNatGatewayNatTypeResponse
       */
      Models::UpdateNatGatewayNatTypeResponse updateNatGatewayNatType(const Models::UpdateNatGatewayNatTypeRequest &request);

      /**
       * @summary Invokes the UpdateNetworkAclEntries operation to update network ACL rules.
       *
       * @description - **UpdateNetworkAclEntries** is an asynchronous operation. After you send a request, the system returns a request ID. However, the network ACL rules are not yet updated. The update task is still running in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the update status of the network ACL rules:
       *     - If the network ACL rules are in the **Modifying** state, the rules are being updated.
       *     - If the network ACL rules are in the **Available** state, the rules are updated.
       * - **UpdateNetworkAclEntries** does not support concurrent updates to the same network ACL rules.
       *
       * @param request UpdateNetworkAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAclEntriesResponse
       */
      Models::UpdateNetworkAclEntriesResponse updateNetworkAclEntriesWithOptions(const Models::UpdateNetworkAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateNetworkAclEntries operation to update network ACL rules.
       *
       * @description - **UpdateNetworkAclEntries** is an asynchronous operation. After you send a request, the system returns a request ID. However, the network ACL rules are not yet updated. The update task is still running in the background. You can call [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the update status of the network ACL rules:
       *     - If the network ACL rules are in the **Modifying** state, the rules are being updated.
       *     - If the network ACL rules are in the **Available** state, the rules are updated.
       * - **UpdateNetworkAclEntries** does not support concurrent updates to the same network ACL rules.
       *
       * @param request UpdateNetworkAclEntriesRequest
       * @return UpdateNetworkAclEntriesResponse
       */
      Models::UpdateNetworkAclEntriesResponse updateNetworkAclEntries(const Models::UpdateNetworkAclEntriesRequest &request);

      /**
       * @summary Modifies the attributes of an IP address pool by calling the UpdatePublicIpAddressPoolAttribute operation.
       *
       * @description The **UpdatePublicIpAddressPoolAttribute** operation does not support concurrent modifications to the attributes of the same IP address pool.
       *
       * @param request UpdatePublicIpAddressPoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicIpAddressPoolAttributeResponse
       */
      Models::UpdatePublicIpAddressPoolAttributeResponse updatePublicIpAddressPoolAttributeWithOptions(const Models::UpdatePublicIpAddressPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an IP address pool by calling the UpdatePublicIpAddressPoolAttribute operation.
       *
       * @description The **UpdatePublicIpAddressPoolAttribute** operation does not support concurrent modifications to the attributes of the same IP address pool.
       *
       * @param request UpdatePublicIpAddressPoolAttributeRequest
       * @return UpdatePublicIpAddressPoolAttributeResponse
       */
      Models::UpdatePublicIpAddressPoolAttributeResponse updatePublicIpAddressPoolAttribute(const Models::UpdatePublicIpAddressPoolAttributeRequest &request);

      /**
       * @summary Updates the information of a route target group instance, including the name, description, and disabled members.
       *
       * @description - **UpdateRouteTargetGroup** is an asynchronous operation. After you call this operation, the system returns a request ID, but the route target group has not been updated yet. The update task is still running in the background. You can call ListRouteTargetGroup to query the update status of the route target group:
       *     - If the route target group is in the **Updating** state, the route target group is being updated.
       *     - If the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the route target group has been updated.
       *
       * @param request UpdateRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRouteTargetGroupResponse
       */
      Models::UpdateRouteTargetGroupResponse updateRouteTargetGroupWithOptions(const Models::UpdateRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a route target group instance, including the name, description, and disabled members.
       *
       * @description - **UpdateRouteTargetGroup** is an asynchronous operation. After you call this operation, the system returns a request ID, but the route target group has not been updated yet. The update task is still running in the background. You can call ListRouteTargetGroup to query the update status of the route target group:
       *     - If the route target group is in the **Updating** state, the route target group is being updated.
       *     - If the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the route target group has been updated.
       *
       * @param request UpdateRouteTargetGroupRequest
       * @return UpdateRouteTargetGroupResponse
       */
      Models::UpdateRouteTargetGroupResponse updateRouteTargetGroup(const Models::UpdateRouteTargetGroupRequest &request);

      /**
       * @summary Invokes the UpdateTrafficMirrorFilterAttribute operation to modify the configuration of a traffic mirror filter.
       *
       * @description The **UpdateTrafficMirrorFilterAttribute** operation does not support concurrent modifications to the configuration of the same traffic mirror filter.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttributeWithOptions(const Models::UpdateTrafficMirrorFilterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateTrafficMirrorFilterAttribute operation to modify the configuration of a traffic mirror filter.
       *
       * @description The **UpdateTrafficMirrorFilterAttribute** operation does not support concurrent modifications to the configuration of the same traffic mirror filter.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttribute(const Models::UpdateTrafficMirrorFilterAttributeRequest &request);

      /**
       * @summary Invokes the UpdateTrafficMirrorFilterRuleAttribute operation to modify the configuration of an inbound or outbound rule of a traffic mirroring filter.
       *
       * @description - **UpdateTrafficMirrorFilterRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of an inbound or outbound rule of a traffic mirroring filter:
       *     - If the inbound or outbound rule is in the **Modifying** state, the configuration of the rule is being modified.
       *     - If the inbound or outbound rule is in the **Created** state, the configuration of the rule is modified.
       * - **UpdateTrafficMirrorFilterRuleAttribute** does not support concurrent modification of the same inbound or outbound rule of a traffic mirroring filter.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttributeWithOptions(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateTrafficMirrorFilterRuleAttribute operation to modify the configuration of an inbound or outbound rule of a traffic mirroring filter.
       *
       * @description - **UpdateTrafficMirrorFilterRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of an inbound or outbound rule of a traffic mirroring filter:
       *     - If the inbound or outbound rule is in the **Modifying** state, the configuration of the rule is being modified.
       *     - If the inbound or outbound rule is in the **Created** state, the configuration of the rule is modified.
       * - **UpdateTrafficMirrorFilterRuleAttribute** does not support concurrent modification of the same inbound or outbound rule of a traffic mirroring filter.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttribute(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @description - **UpdateTrafficMirrorSessionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the configuration of the traffic mirror session is not yet modified. The modification task runs in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the modification status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Modifying** state, the configuration is being modified.
       *     - If the traffic mirror session is in the **Created** state, the configuration is modified.
       * - **UpdateTrafficMirrorSessionAttribute** does not support concurrent modifications to the same traffic mirror session.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttributeWithOptions(const Models::UpdateTrafficMirrorSessionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @description - **UpdateTrafficMirrorSessionAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID. However, the configuration of the traffic mirror session is not yet modified. The modification task runs in the background. You can call [ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html) to query the modification status of the traffic mirror session:
       *     - If the traffic mirror session is in the **Modifying** state, the configuration is being modified.
       *     - If the traffic mirror session is in the **Created** state, the configuration is modified.
       * - **UpdateTrafficMirrorSessionAttribute** does not support concurrent modifications to the same traffic mirror session.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttribute(const Models::UpdateTrafficMirrorSessionAttributeRequest &request);

      /**
       * @summary Invokes the UpdateVirtualBorderBandwidth operation to update the bandwidth throttling for both the upload and download directions on a Virtual Border Router.
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidthWithOptions(const Models::UpdateVirtualBorderBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateVirtualBorderBandwidth operation to update the bandwidth throttling for both the upload and download directions on a Virtual Border Router.
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidth(const Models::UpdateVirtualBorderBandwidthRequest &request);

      /**
       * @summary Invokes the UpdateVirtualPhysicalConnection operation to modify shared Express Connect circuit information.
       *
       * @param request UpdateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualPhysicalConnectionResponse
       */
      Models::UpdateVirtualPhysicalConnectionResponse updateVirtualPhysicalConnectionWithOptions(const Models::UpdateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateVirtualPhysicalConnection operation to modify shared Express Connect circuit information.
       *
       * @param request UpdateVirtualPhysicalConnectionRequest
       * @return UpdateVirtualPhysicalConnectionResponse
       */
      Models::UpdateVirtualPhysicalConnectionResponse updateVirtualPhysicalConnection(const Models::UpdateVirtualPhysicalConnectionRequest &request);

      /**
       * @summary Calls the UpdateVpcGatewayEndpointAttribute operation to update the configuration of a VPC gateway endpoint.
       *
       * @description - **UpdateVpcGatewayEndpointAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the configuration of the gateway endpoint has not been updated yet. The update task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the status of the gateway endpoint.
       *     - If the gateway endpoint is in the **Updating** state, the configuration is being updated.
       *     - If the gateway endpoint is in the **Created** state, the configuration has been updated.
       * - **UpdateVpcGatewayEndpointAttribute** does not support concurrent updates to the same gateway endpoint.
       *
       * @param request UpdateVpcGatewayEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpcGatewayEndpointAttributeResponse
       */
      Models::UpdateVpcGatewayEndpointAttributeResponse updateVpcGatewayEndpointAttributeWithOptions(const Models::UpdateVpcGatewayEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateVpcGatewayEndpointAttribute operation to update the configuration of a VPC gateway endpoint.
       *
       * @description - **UpdateVpcGatewayEndpointAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the configuration of the gateway endpoint has not been updated yet. The update task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the status of the gateway endpoint.
       *     - If the gateway endpoint is in the **Updating** state, the configuration is being updated.
       *     - If the gateway endpoint is in the **Created** state, the configuration has been updated.
       * - **UpdateVpcGatewayEndpointAttribute** does not support concurrent updates to the same gateway endpoint.
       *
       * @param request UpdateVpcGatewayEndpointAttributeRequest
       * @return UpdateVpcGatewayEndpointAttributeResponse
       */
      Models::UpdateVpcGatewayEndpointAttributeResponse updateVpcGatewayEndpointAttribute(const Models::UpdateVpcGatewayEndpointAttributeRequest &request);

      /**
       * @summary Queries the number of endpoints (EPs) that can be created for reverse access on a VPC NAT gateway.
       *
       * @description Before you call this operation, make sure that you have created a VPC NAT gateway instance. For more information, see [CreateNatGateway](https://help.aliyun.com/document_detail/2522320.html).
       *
       * @param request VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse
       */
      Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse vpcDescribeVpcNatGatewayNetworkInterfaceQuotaWithOptions(const Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of endpoints (EPs) that can be created for reverse access on a VPC NAT gateway.
       *
       * @description Before you call this operation, make sure that you have created a VPC NAT gateway instance. For more information, see [CreateNatGateway](https://help.aliyun.com/document_detail/2522320.html).
       *
       * @param request VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest
       * @return VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse
       */
      Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponse vpcDescribeVpcNatGatewayNetworkInterfaceQuota(const Models::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest &request);

      /**
       * @summary Withdraws a VPC published routing entry.
       *
       * @param request WithdrawVpcPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawVpcPublishedRouteEntriesResponse
       */
      Models::WithdrawVpcPublishedRouteEntriesResponse withdrawVpcPublishedRouteEntriesWithOptions(const Models::WithdrawVpcPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraws a VPC published routing entry.
       *
       * @param request WithdrawVpcPublishedRouteEntriesRequest
       * @return WithdrawVpcPublishedRouteEntriesResponse
       */
      Models::WithdrawVpcPublishedRouteEntriesResponse withdrawVpcPublishedRouteEntries(const Models::WithdrawVpcPublishedRouteEntriesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
