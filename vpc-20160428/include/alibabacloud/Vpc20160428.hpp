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
       * @description * The **ActiveFlowLog** operation is asynchronous. After you call this operation, the system returns a request ID, but the flow log has not been activated yet because the activation task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the activation status of the flow log:
       *     - If the flow log is in the **Activating** state, the flow log is being activated.
       *     - If the flow log is in the **Active** state, the flow log has been activated.
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
       * @description * The **ActiveFlowLog** operation is asynchronous. After you call this operation, the system returns a request ID, but the flow log has not been activated yet because the activation task is still running in the background. You can call [DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html) to query the activation status of the flow log:
       *     - If the flow log is in the **Activating** state, the flow log is being activated.
       *     - If the flow log is in the **Active** state, the flow log has been activated.
       * * The **ActiveFlowLog** operation does not support concurrent activation of the same flow log.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Invokes AddBgpNetwork to advertise a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetworkWithOptions(const Models::AddBgpNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes AddBgpNetwork to advertise a Border Gateway Protocol (BGP) network.
       *
       * @param request AddBgpNetworkRequest
       * @return AddBgpNetworkResponse
       */
      Models::AddBgpNetworkResponse addBgpNetwork(const Models::AddBgpNetworkRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with an Internet Shared Bandwidth instance.
       *
       * @description Before invoking this API, note the following:
       * - The EIP must meet the following conditions when you add it to an Internet Shared Bandwidth instance by using this API:
       *     - The metering method of the EIP is pay-as-you-go.
       *     - The Region of the EIP is the same as that of the Internet Shared Bandwidth instance to which you want to add the EIP.
       *     - The line type of the EIP matches the line type of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIp** API is asynchronous. After you invoke this API, the system immediately returns a RequestId, but the EIP is not yet successfully added to the Internet Shared Bandwidth instance. The system continues to process the addition task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) API to query the association status between the Internet Shared Bandwidth instance and the EIP.
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance and the EIP are being associated. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the association status is **BINDED**, the association between the Internet Shared Bandwidth instance and the EIP is complete.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIpWithOptions(const Models::AddCommonBandwidthPackageIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with an Internet Shared Bandwidth instance.
       *
       * @description Before invoking this API, note the following:
       * - The EIP must meet the following conditions when you add it to an Internet Shared Bandwidth instance by using this API:
       *     - The metering method of the EIP is pay-as-you-go.
       *     - The Region of the EIP is the same as that of the Internet Shared Bandwidth instance to which you want to add the EIP.
       *     - The line type of the EIP matches the line type of the Internet Shared Bandwidth instance.
       * - The **AddCommonBandwidthPackageIp** API is asynchronous. After you invoke this API, the system immediately returns a RequestId, but the EIP is not yet successfully added to the Internet Shared Bandwidth instance. The system continues to process the addition task in the background. You can call the [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) API to query the association status between the Internet Shared Bandwidth instance and the EIP.
       *     - If the association status is **BINDING**, the Internet Shared Bandwidth instance and the EIP are being associated. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the association status is **BINDED**, the association between the Internet Shared Bandwidth instance and the EIP is complete.
       *
       * @param request AddCommonBandwidthPackageIpRequest
       * @return AddCommonBandwidthPackageIpResponse
       */
      Models::AddCommonBandwidthPackageIpResponse addCommonBandwidthPackageIp(const Models::AddCommonBandwidthPackageIpRequest &request);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an Internet Shared Bandwidth instance.
       *
       * @description - 调用本接口批量添加EIP到共享带宽中时，EIP需满足以下条件：
       *     - EIP的计费方式为按量付费。
       *     - EIP的地域与要加入的共享带宽的地域相同。
       *     - EIP的线路类型与要加入的共享带宽的线路类型一致。
       * - **AddCommonBandwidthPackageIps**接口属于异步接口，即系统会先返回一个请求ID，但EIP并未成功添加到共享带宽，系统后台的添加任务仍在进行。您可以调用[DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~)查询共享带宽和EIP的关联状态。 
       *     - 当共享带宽和EIP的关联状态处于**BINDING**时，表示共享带宽与EIP关联中，在该状态下，您只能执行查询操作，不能执行其他操作。
       *     - 当共享带宽和EIP的关联状态处于**BINDED**时，表示共享带宽与EIP关联完成。
       *
       * @param request AddCommonBandwidthPackageIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCommonBandwidthPackageIpsResponse
       */
      Models::AddCommonBandwidthPackageIpsResponse addCommonBandwidthPackageIpsWithOptions(const Models::AddCommonBandwidthPackageIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates multiple elastic IP addresses (EIPs) with an Internet Shared Bandwidth instance.
       *
       * @description - 调用本接口批量添加EIP到共享带宽中时，EIP需满足以下条件：
       *     - EIP的计费方式为按量付费。
       *     - EIP的地域与要加入的共享带宽的地域相同。
       *     - EIP的线路类型与要加入的共享带宽的线路类型一致。
       * - **AddCommonBandwidthPackageIps**接口属于异步接口，即系统会先返回一个请求ID，但EIP并未成功添加到共享带宽，系统后台的添加任务仍在进行。您可以调用[DescribeCommonBandwidthPackages](~~DescribeCommonBandwidthPackages~~)查询共享带宽和EIP的关联状态。 
       *     - 当共享带宽和EIP的关联状态处于**BINDING**时，表示共享带宽与EIP关联中，在该状态下，您只能执行查询操作，不能执行其他操作。
       *     - 当共享带宽和EIP的关联状态处于**BINDED**时，表示共享带宽与EIP关联完成。
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
       * @summary Request an Elastic IP Address (EIP).
       *
       * @description Before using this API, ensure that you fully understand the billing method and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After invoking this API, a randomly selected Elastic IP Address with the status **Available** will be allocated in the specified region. At the transport layer, EIPs currently support parsing content for ICMP, TCP, and UDP protocols only, and do not support parsing content for protocols such as IGMP and SCTP.
       *
       * @param request AllocateEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddressWithOptions(const Models::AllocateEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Request an Elastic IP Address (EIP).
       *
       * @description Before using this API, ensure that you fully understand the billing method and pricing of EIPs. For more information, see [Billing overview](https://help.aliyun.com/document_detail/122035.html).
       * After invoking this API, a randomly selected Elastic IP Address with the status **Available** will be allocated in the specified region. At the transport layer, EIPs currently support parsing content for ICMP, TCP, and UDP protocols only, and do not support parsing content for protocols such as IGMP and SCTP.
       *
       * @param request AllocateEipAddressRequest
       * @return AllocateEipAddressResponse
       */
      Models::AllocateEipAddressResponse allocateEipAddress(const Models::AllocateEipAddressRequest &request);

      /**
       * @summary Call AllocateEipAddressPro to allocate a specified elastic IP address for use in custom network configurations.
       *
       * @param request AllocateEipAddressProRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateEipAddressProResponse
       */
      Models::AllocateEipAddressProResponse allocateEipAddressProWithOptions(const Models::AllocateEipAddressProRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call AllocateEipAddressPro to allocate a specified elastic IP address for use in custom network configurations.
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
       * @summary Invokes the AllocateIpv6Address operation to allocate a free IPv6 address or IPv6 prefix CIDR block. The address is not associated with any resource instance (such as an elastic network interface (ENI) or Network Load Balancer (NLB) instance) and exists as an independent IPv6 address in a virtual private cloud (VPC).
       *
       * @description Scenarios: After you enable Internet bandwidth for a free IPv6 address, configure an inbound routing rule in the IPv6 gateway route table to direct public IPv6 traffic to an Internet Data Center (IDC) through an Express Connect circuit. This way, IDC resources can provide services over the Internet by using an Alibaba Cloud IPv6 address.
       * > To allocate an IPv6 address to an elastic network interface (ENI) of an ECS instance, invoke the [AssignIpv6Addresses](https://www.alibabacloud.com/help/en/ecs/developer-reference/api-ecs-2014-05-26-assignipv6addresses) operation of ECS.
       *
       * @param request AllocateIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6AddressWithOptions(const Models::AllocateIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AllocateIpv6Address operation to allocate a free IPv6 address or IPv6 prefix CIDR block. The address is not associated with any resource instance (such as an elastic network interface (ENI) or Network Load Balancer (NLB) instance) and exists as an independent IPv6 address in a virtual private cloud (VPC).
       *
       * @description Scenarios: After you enable Internet bandwidth for a free IPv6 address, configure an inbound routing rule in the IPv6 gateway route table to direct public IPv6 traffic to an Internet Data Center (IDC) through an Express Connect circuit. This way, IDC resources can provide services over the Internet by using an Alibaba Cloud IPv6 address.
       * > To allocate an IPv6 address to an elastic network interface (ENI) of an ECS instance, invoke the [AssignIpv6Addresses](https://www.alibabacloud.com/help/en/ecs/developer-reference/api-ecs-2014-05-26-assignipv6addresses) operation of ECS.
       *
       * @param request AllocateIpv6AddressRequest
       * @return AllocateIpv6AddressResponse
       */
      Models::AllocateIpv6AddressResponse allocateIpv6Address(const Models::AllocateIpv6AddressRequest &request);

      /**
       * @summary Invokes the AllocateIpv6InternetBandwidth operation to allocate Internet bandwidth for an IPv6 address in a VPC to enable public network communication. After the bandwidth is allocated, the IPv6 address can both initiate outbound access to the Internet and be accessed from the Internet.
       *
       * @description - You can allocate public Internet bandwidth for the following types of IPv6 addresses:
       *     - IPv6 addresses assigned to elastic network interfaces (ENIs) of ECS instances.
       *     - Unassociated IPv6 addresses that are not attached to any resource instance.
       * - Before you call this operation, make sure that the target IPv6 address already exists. This means that an ECS instance in the VPC has been assigned an IPv6 address, or an unassociated IPv6 address has been created by calling [AllocateIpv6Address](https://www.alibabacloud.com/help/en/vpc/developer-reference/api-vpc-2016-04-28-allocateipv6address).
       * - After the bandwidth is allocated, the IPv6 address can both initiate outbound connections to the Internet and receive inbound connections from the Internet. To allow only outbound access to the Internet, call [CreateIpv6EgressOnlyRule](https://www.alibabacloud.com/help/en/ipv6-gateway/developer-reference/api-vpc-2016-04-28-createipv6egressonlyrule-ipv6s)
       *   to configure an IPv6 egress-only rule.
       * - The **AllocateIpv6InternetBandwidth** operation does not support concurrent purchases of the same IPv6 public Internet bandwidth.
       * - Scenarios:
       *     - IPv6 public network access for ECS instances: Allows ECS instances to access the Internet or provide services over IPv6.
       *     - Unassociated IPv6 public network access: Works with IPv6 gateway route tables to route Internet traffic to on-premises IDCs.
       *     - Outbound-only communication: Works with CreateIpv6EgressOnlyRule to allow only outbound access and deny inbound connections from the Internet.
       *
       * @param request AllocateIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpv6InternetBandwidthResponse
       */
      Models::AllocateIpv6InternetBandwidthResponse allocateIpv6InternetBandwidthWithOptions(const Models::AllocateIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AllocateIpv6InternetBandwidth operation to allocate Internet bandwidth for an IPv6 address in a VPC to enable public network communication. After the bandwidth is allocated, the IPv6 address can both initiate outbound access to the Internet and be accessed from the Internet.
       *
       * @description - You can allocate public Internet bandwidth for the following types of IPv6 addresses:
       *     - IPv6 addresses assigned to elastic network interfaces (ENIs) of ECS instances.
       *     - Unassociated IPv6 addresses that are not attached to any resource instance.
       * - Before you call this operation, make sure that the target IPv6 address already exists. This means that an ECS instance in the VPC has been assigned an IPv6 address, or an unassociated IPv6 address has been created by calling [AllocateIpv6Address](https://www.alibabacloud.com/help/en/vpc/developer-reference/api-vpc-2016-04-28-allocateipv6address).
       * - After the bandwidth is allocated, the IPv6 address can both initiate outbound connections to the Internet and receive inbound connections from the Internet. To allow only outbound access to the Internet, call [CreateIpv6EgressOnlyRule](https://www.alibabacloud.com/help/en/ipv6-gateway/developer-reference/api-vpc-2016-04-28-createipv6egressonlyrule-ipv6s)
       *   to configure an IPv6 egress-only rule.
       * - The **AllocateIpv6InternetBandwidth** operation does not support concurrent purchases of the same IPv6 public Internet bandwidth.
       * - Scenarios:
       *     - IPv6 public network access for ECS instances: Allows ECS instances to access the Internet or provide services over IPv6.
       *     - Unassociated IPv6 public network access: Works with IPv6 gateway route tables to route Internet traffic to on-premises IDCs.
       *     - Outbound-only communication: Works with CreateIpv6EgressOnlyRule to allow only outbound access and deny inbound connections from the Internet.
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
       * @summary Invokes the AssociateHaVip operation to attach an HaVip to an ECS instance or a network interface controller (NIC) in a virtual private cloud (VPC).
       *
       * @description When you call this operation to associate an HaVip, take note of the following items:
       * - The HaVip takes effect immediately after it is attached without the need to restart the ECS instance. However, you must configure the HaVip on the elastic network interfaces (ENIs) of the ECS instance.
       * - The HaVip and the ECS instance to be associated must belong to the same vSwitch.
       * - An HaVip can be attached to up to 10 ECS instances or up to 10 network interface controllers (NICs) at the same time. However, an HaVip cannot be associated with ECS instances and network interface controllers (NICs) simultaneously.
       * - The ECS instance to be associated must be in the **Running** or **Stopped** state.
       * - The HaVip instance must be in the **Available** or **InUse** state.
       * - The **AssociateHaVip** operation is asynchronous. After you send a request, the system returns a request ID, but the HaVip association has not been completed. The association task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the association status of the HaVip:
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
       * @summary Invokes the AssociateHaVip operation to attach an HaVip to an ECS instance or a network interface controller (NIC) in a virtual private cloud (VPC).
       *
       * @description When you call this operation to associate an HaVip, take note of the following items:
       * - The HaVip takes effect immediately after it is attached without the need to restart the ECS instance. However, you must configure the HaVip on the elastic network interfaces (ENIs) of the ECS instance.
       * - The HaVip and the ECS instance to be associated must belong to the same vSwitch.
       * - An HaVip can be attached to up to 10 ECS instances or up to 10 network interface controllers (NICs) at the same time. However, an HaVip cannot be associated with ECS instances and network interface controllers (NICs) simultaneously.
       * - The ECS instance to be associated must be in the **Running** or **Stopped** state.
       * - The HaVip instance must be in the **Available** or **InUse** state.
       * - The **AssociateHaVip** operation is asynchronous. After you send a request, the system returns a request ID, but the HaVip association has not been completed. The association task is still running in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the association status of the HaVip:
       *     - If the HaVip is in the **Associating** state, the HaVip is being associated.
       *     - If the HaVip is in the **InUse** state, the HaVip is associated.
       * - The **AssociateHaVip** operation does not support concurrent association of the same HaVip.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary This operation associates a MacSec key with a port on a dedicated physical connection. It uses dedicated encryption hardware, such as a NIC or switch, to perform low-latency encryption and decryption. It directly encrypts the physical link, such as a fiber optic or Ethernet cable, to protect all traffic from the sender to the receiver.
       *
       * @description This operation has the following prerequisites:
       * - The device that hosts the Express Connect physical connection supports the MacSec feature.
       * - The Express Connect physical connection must be fully paid.
       * - MacSec can be configured only on a dedicated physical connection.
       * Note the following:
       * - You can configure a maximum of three sets of Ckn and Cak.
       * - If you associate a key that is in the Disassociated state, the system disassociates the previously active key.
       * - If you associate a key that is in the AssociatedFailed state, the device renegotiates the session.
       *
       * @param request AssociateMacSecKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateMacSecKeyResponse
       */
      Models::AssociateMacSecKeyResponse associateMacSecKeyWithOptions(const Models::AssociateMacSecKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation associates a MacSec key with a port on a dedicated physical connection. It uses dedicated encryption hardware, such as a NIC or switch, to perform low-latency encryption and decryption. It directly encrypts the physical link, such as a fiber optic or Ethernet cable, to protect all traffic from the sender to the receiver.
       *
       * @description This operation has the following prerequisites:
       * - The device that hosts the Express Connect physical connection supports the MacSec feature.
       * - The Express Connect physical connection must be fully paid.
       * - MacSec can be configured only on a dedicated physical connection.
       * Note the following:
       * - You can configure a maximum of three sets of Ckn and Cak.
       * - If you associate a key that is in the Disassociated state, the system disassociates the previously active key.
       * - If you associate a key that is in the AssociatedFailed state, the device renegotiates the session.
       *
       * @param request AssociateMacSecKeyRequest
       * @return AssociateMacSecKeyResponse
       */
      Models::AssociateMacSecKeyResponse associateMacSecKey(const Models::AssociateMacSecKeyRequest &request);

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
       * @summary Calls the AssociateRouteTablesWithVpcGatewayEndpoint operation to associate route tables with a gateway endpoint.
       *
       * @description Before you call this operation to associate route tables with a gateway endpoint, take note of the following information:
       * - The gateway endpoint instance with which you want to associate route tables cannot be in a transient state, such as **Creating**, **Modifying**, **Associating** (attaching), **Dissociating** (detaching), or **Deleting** (deleting).
       * - The route tables that you want to associate cannot be in a transient state, such as **Creating**, **Modifying**, **Associating** (attaching), **Dissociating** (detaching), or **Deleting** (deleting).
       * - The route tables and the gateway endpoint must belong to the same VPC.
       * - The route tables to be associated cannot be shared route tables.
       * - Virtual Border Router (VBR) route tables are not supported.
       * - You can associate up to 20 route tables at a time.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation is asynchronous. After you send a request, the system returns an endpoint instance ID, but the route tables have not been associated with the gateway endpoint yet. The association task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the association status of the route tables and the gateway endpoint:
       *     - If the route tables and the gateway endpoint are in the **Associating** state, the route tables are being associated with the gateway endpoint.
       *     - If the route tables and the gateway endpoint are in the **Created** state, the route tables have been associated with the gateway endpoint.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation does not support concurrent association of the same route table with a gateway endpoint.
       *
       * @param request AssociateRouteTablesWithVpcGatewayEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTablesWithVpcGatewayEndpointResponse
       */
      Models::AssociateRouteTablesWithVpcGatewayEndpointResponse associateRouteTablesWithVpcGatewayEndpointWithOptions(const Models::AssociateRouteTablesWithVpcGatewayEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AssociateRouteTablesWithVpcGatewayEndpoint operation to associate route tables with a gateway endpoint.
       *
       * @description Before you call this operation to associate route tables with a gateway endpoint, take note of the following information:
       * - The gateway endpoint instance with which you want to associate route tables cannot be in a transient state, such as **Creating**, **Modifying**, **Associating** (attaching), **Dissociating** (detaching), or **Deleting** (deleting).
       * - The route tables that you want to associate cannot be in a transient state, such as **Creating**, **Modifying**, **Associating** (attaching), **Dissociating** (detaching), or **Deleting** (deleting).
       * - The route tables and the gateway endpoint must belong to the same VPC.
       * - The route tables to be associated cannot be shared route tables.
       * - Virtual Border Router (VBR) route tables are not supported.
       * - You can associate up to 20 route tables at a time.
       * - The **AssociateRouteTablesWithVpcGatewayEndpoint** operation is asynchronous. After you send a request, the system returns an endpoint instance ID, but the route tables have not been associated with the gateway endpoint yet. The association task is still running in the background. You can call [GetVpcGatewayEndpointAttribute](https://help.aliyun.com/document_detail/311017.html) to query the association status of the route tables and the gateway endpoint:
       *     - If the route tables and the gateway endpoint are in the **Associating** state, the route tables are being associated with the gateway endpoint.
       *     - If the route tables and the gateway endpoint are in the **Created** state, the route tables have been associated with the gateway endpoint.
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
       * @summary Associates a DHCP options set with a virtual private cloud (VPC).
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
       * @summary Associates a DHCP options set with a virtual private cloud (VPC).
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
       * @summary Cancels access to an Express Connect circuit. After the cancellation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel access only for Express Connect circuits that are in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state (not yet activated).
       *
       * @param request CancelPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPhysicalConnectionResponse
       */
      Models::CancelPhysicalConnectionResponse cancelPhysicalConnectionWithOptions(const Models::CancelPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels access to an Express Connect circuit. After the cancellation, the Express Connect circuit enters the Canceled state.
       *
       * @description You can cancel access only for Express Connect circuits that are in the **Initial**, **Approved**, **Allocated**, or **Confirmed** state (not yet activated).
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
       * @summary Copies network ACL rules by calling the CopyNetworkAclEntries operation.
       *
       * @description - **CopyNetworkAclEntries** is an asynchronous operation. After you invoke this operation, the system returns a request ID, but the network ACL rules have not been replicated yet. The replication node continues to run in the background. You can invoke [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the replication status of the network ACL rules:
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
       * @summary Copies network ACL rules by calling the CopyNetworkAclEntries operation.
       *
       * @description - **CopyNetworkAclEntries** is an asynchronous operation. After you invoke this operation, the system returns a request ID, but the network ACL rules have not been replicated yet. The replication node continues to run in the background. You can invoke [DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html) to query the replication status of the network ACL rules:
       *     - If the network ACL rules are in the **Modifying** state, the network ACL rules are being replicated.
       *     - If the network ACL rules are in the **Available** state, the network ACL rules are replicated. Copy succeeded.
       * - **CopyNetworkAclEntries** does not support concurrent replication of the same network ACL rules.
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
       * @summary Calls the CreateBgpPeer API to add a BGP peer to the specified BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeerWithOptions(const Models::CreateBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateBgpPeer API to add a BGP peer to the specified BGP group.
       *
       * @param request CreateBgpPeerRequest
       * @return CreateBgpPeerResponse
       */
      Models::CreateBgpPeerResponse createBgpPeer(const Models::CreateBgpPeerRequest &request);

      /**
       * @summary Creates an Internet Shared Bandwidth instance by calling the CreateCommonBandwidthPackage operation.
       *
       * @description <props="china"><ph>This operation supports only the creation of pay-as-you-go Internet Shared Bandwidth instances. To create a subscription Internet Shared Bandwidth instance, see [Create an Internet Shared Bandwidth instance](https://help.aliyun.com/document_detail/65223.html).</ph>.
       *
       * @param request CreateCommonBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommonBandwidthPackageResponse
       */
      Models::CreateCommonBandwidthPackageResponse createCommonBandwidthPackageWithOptions(const Models::CreateCommonBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Internet Shared Bandwidth instance by calling the CreateCommonBandwidthPackage operation.
       *
       * @description <props="china"><ph>This operation supports only the creation of pay-as-you-go Internet Shared Bandwidth instances. To create a subscription Internet Shared Bandwidth instance, see [Create an Internet Shared Bandwidth instance](https://help.aliyun.com/document_detail/65223.html).</ph>.
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
       * @description When you call this operation to create a default vSwitch, take note of the following items:
       * - The first and last three IP addresses of each default vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses of 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a default vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - Default vSwitches do not support multicast or broadcast.
       * - After a default vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateDefaultVSwitch** operation is asynchronous. After you send a request, the system returns an instance ID, but the default vSwitch is not yet created. A background task is still in progress. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the default vSwitch:
       *     - If the default vSwitch is in the **Pending** state, the default vSwitch is being configured.
       *     - If the default vSwitch is in the **Available** state, the default vSwitch is available.
       * - If a default vSwitch already exists in a zone of the specified region, the call to this operation fails.
       * - Before you create a default vSwitch, create a default VPC first. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
       *
       * @param request CreateDefaultVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefaultVSwitchResponse
       */
      Models::CreateDefaultVSwitchResponse createDefaultVSwitchWithOptions(const Models::CreateDefaultVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a default vSwitch.
       *
       * @description When you call this operation to create a default vSwitch, take note of the following items:
       * - The first and last three IP addresses of each default vSwitch CIDR block are reserved by the system. For example, the system reserved IP addresses of 192.168.1.0/24 are 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
       * - The number of cloud service instances in a default vSwitch cannot exceed the remaining available cloud service instances in the VPC (15,000 minus the current number of cloud service instances).
       * - Default vSwitches do not support multicast or broadcast.
       * - After a default vSwitch is created, you cannot modify its CIDR block.
       * - The **CreateDefaultVSwitch** operation is asynchronous. After you send a request, the system returns an instance ID, but the default vSwitch is not yet created. A background task is still in progress. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the creation status of the default vSwitch:
       *     - If the default vSwitch is in the **Pending** state, the default vSwitch is being configured.
       *     - If the default vSwitch is in the **Available** state, the default vSwitch is available.
       * - If a default vSwitch already exists in a zone of the specified region, the call to this operation fails.
       * - Before you create a default vSwitch, create a default VPC first. You can call the [CreateDefaultVpc](https://help.aliyun.com/document_detail/609152.html) operation to create a default VPC.
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
       * - Each default VPC supports up to 300,000 private network IP addresses for cloud resources, and this quota cannot be upgraded.
       *   
       * - After a default VPC is created, a vRouter and a route table are automatically created.
       *   
       * - Each default VPC supports up to three user CIDR blocks. If multiple user CIDR blocks overlap, the CIDR block with the shorter mask takes effect. For example, if both 10.0.0.0/16 and 10.0.0.0/24 exist, 10.0.0.0/16 takes effect.
       * - The **CreateDefaultVpc** operation is asynchronous. After you send a request, the system returns an instance ID while the default VPC is still being created in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the creation status of the default VPC:
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
       * - Each default VPC supports up to 300,000 private network IP addresses for cloud resources, and this quota cannot be upgraded.
       *   
       * - After a default VPC is created, a vRouter and a route table are automatically created.
       *   
       * - Each default VPC supports up to three user CIDR blocks. If multiple user CIDR blocks overlap, the CIDR block with the shorter mask takes effect. For example, if both 10.0.0.0/16 and 10.0.0.0/24 exist, 10.0.0.0/16 takes effect.
       * - The **CreateDefaultVpc** operation is asynchronous. After you send a request, the system returns an instance ID while the default VPC is still being created in the background. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) to query the creation status of the default VPC:
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
       * @summary Use the `CreateEnhancedVpnGateway` API to create an Enhanced VPN Gateway.
       *
       * @description - Before you create an enhanced VPN gateway, we recommend that you review the [VPN Gateway Usage Limits](https://help.aliyun.com/zh/vpn/sub-product-ipsec-vpn/user-guide/vpn-gateway-instance/?spm=a2c4g.11186623.0.0.6c6919591peeAe).
       * - An enhanced VPN gateway supports only dual-tunnel mode IPsec-VPN connections. When you call the `CreateEnhancedVpnGateway` operation to create a VPN Gateway instance, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to other required parameters.
       * - **CreateEnhancedVpnGateway** is an asynchronous operation. After you send a request, the system returns an instance ID and starts creating the enhanced VPN gateway in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/zh/vpn/sub-product-ipsec-vpn/developer-reference/api-vpc-2016-04-28-describevpngateway-vpns?spm=a2c4g.11186623.0.0.6c6919591peeAe) to query the creation status of the enhanced VPN gateway:
       *   - The **provisioning** state indicates that the gateway is being created.
       *   - The **active** state indicates that the gateway has been created.
       *
       * @param request CreateEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnhancedVpnGatewayResponse
       */
      Models::CreateEnhancedVpnGatewayResponse createEnhancedVpnGatewayWithOptions(const Models::CreateEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the `CreateEnhancedVpnGateway` API to create an Enhanced VPN Gateway.
       *
       * @description - Before you create an enhanced VPN gateway, we recommend that you review the [VPN Gateway Usage Limits](https://help.aliyun.com/zh/vpn/sub-product-ipsec-vpn/user-guide/vpn-gateway-instance/?spm=a2c4g.11186623.0.0.6c6919591peeAe).
       * - An enhanced VPN gateway supports only dual-tunnel mode IPsec-VPN connections. When you call the `CreateEnhancedVpnGateway` operation to create a VPN Gateway instance, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to other required parameters.
       * - **CreateEnhancedVpnGateway** is an asynchronous operation. After you send a request, the system returns an instance ID and starts creating the enhanced VPN gateway in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/zh/vpn/sub-product-ipsec-vpn/developer-reference/api-vpc-2016-04-28-describevpngateway-vpns?spm=a2c4g.11186623.0.0.6c6919591peeAe) to query the creation status of the enhanced VPN gateway:
       *   - The **provisioning** state indicates that the gateway is being created.
       *   - The **active** state indicates that the gateway has been created.
       *
       * @param request CreateEnhancedVpnGatewayRequest
       * @return CreateEnhancedVpnGatewayResponse
       */
      Models::CreateEnhancedVpnGatewayResponse createEnhancedVpnGateway(const Models::CreateEnhancedVpnGatewayRequest &request);

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
       * @summary Creates a Quality of Service (QoS) policy for Express Connect.
       *
       * @description - The Express Connect QoS feature is in invitational preview. To call this operation, contact your account manager to be added to the whitelist.
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
       * @description - The Express Connect QoS feature is in invitational preview. To call this operation, contact your account manager to be added to the whitelist.
       * - The number of QoS policies that each user can create is subject to a quota limit. To increase the quota, contact your account manager.
       *
       * @param request CreateExpressConnectTrafficQosRequest
       * @return CreateExpressConnectTrafficQosResponse
       */
      Models::CreateExpressConnectTrafficQosResponse createExpressConnectTrafficQos(const Models::CreateExpressConnectTrafficQosRequest &request);

      /**
       * @summary Calls the CreateExpressConnectTrafficQosQueue operation to create an Express Connect QoS queue.
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
       * @summary Calls the CreateExpressConnectTrafficQosQueue operation to create an Express Connect QoS queue.
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
       * @summary Creates a quality of service (QoS) rule.
       *
       * @description - QoS规则的优先级，需要在一个QoS策略中唯一。
       * - 单个QoS队列的QoS规则数量有限制，如果想要提升配额，请联系商务经理。
       *
       * @param request CreateExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectTrafficQosRuleResponse
       */
      Models::CreateExpressConnectTrafficQosRuleResponse createExpressConnectTrafficQosRuleWithOptions(const Models::CreateExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) rule.
       *
       * @description - QoS规则的优先级，需要在一个QoS策略中唯一。
       * - 单个QoS队列的QoS规则数量有限制，如果想要提升配额，请联系商务经理。
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
       * @description **CreateFlowLog** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the flow log has not been created yet. The creation node is still running in the background. You can invoke [DescribeFlowLogs](https://help.aliyun.com/document_detail/448670.html) to query the creation status of the flow log:
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
       * @description **CreateFlowLog** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the flow log has not been created yet. The creation node is still running in the background. You can invoke [DescribeFlowLogs](https://help.aliyun.com/document_detail/448670.html) to query the creation status of the flow log:
       * - If the flow log is in the **Activating** state, the flow log is being created.
       * - If the flow log is in the **Active** state, the flow log is created and activated.
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
       * @summary Creates a high-availability virtual IP address (HAVIP).
       *
       * @description **CreateHaVip** is an asynchronous operation. After you invoke this operation, the system returns the HAVIP ID, but the HAVIP is not yet created. The creation node is still running in the background. You can invoke [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the creation status of the HAVIP:
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
       * @description **CreateHaVip** is an asynchronous operation. After you invoke this operation, the system returns the HAVIP ID, but the HAVIP is not yet created. The creation node is still running in the background. You can invoke [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the creation status of the HAVIP:
       * - If the HAVIP is in the **Creating** state, the HAVIP is being created.
       * - If the HAVIP is in the **Available** state, the HAVIP is created.
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates Express Connect circuits in zone-redundancy mode to ensure the stability of multi-line access to your workloads on Alibaba Cloud and to avoid service disruptions caused by single-line failures through multi-line disaster recovery.
       *
       * @description When you purchase ports, you can select one of the following three combination types to provide disaster recovery capabilities for your workloads.
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
       * @summary Creates Express Connect circuits in zone-redundancy mode to ensure the stability of multi-line access to your workloads on Alibaba Cloud and to avoid service disruptions caused by single-line failures through multi-line disaster recovery.
       *
       * @description When you purchase ports, you can select one of the following three combination types to provide disaster recovery capabilities for your workloads.
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
       * @summary Creates an IPv4 gateway.
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
       * @summary Creates an IPv4 gateway.
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
       * @summary You can create an egress-only rule to allow ECS instances in a VPC with an IPv6 CIDR block to initiate outbound access to IPv6 endpoints of clients, while preventing IPv6 endpoints of clients from accessing ECS instances in the VPC over the Internet. Invoke CreateIpv6EgressOnlyRule to add an egress-only rule for an IPv6 address.
       *
       * @description - The **CreateIpv6EgressOnlyRule** API is asynchronous. The system returns an instance ID immediately, but the egress-only rule for the IPv6 address has not yet been successfully created, as the creation job continues in the background. You can invoke [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the creation status of the egress-only rule for the IPv6 address:
       *     - When the egress-only rule for the IPv6 address is in the **Creating** status, it indicates that the rule is still being created.
       *     - When the egress-only rule for the IPv6 address is in the **Created** status, it indicates that the rule has been successfully created.
       * - The **CreateIpv6EgressOnlyRule** API does not support concurrent addition of egress-only rules for the same IPv6 address.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRuleWithOptions(const Models::CreateIpv6EgressOnlyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create an egress-only rule to allow ECS instances in a VPC with an IPv6 CIDR block to initiate outbound access to IPv6 endpoints of clients, while preventing IPv6 endpoints of clients from accessing ECS instances in the VPC over the Internet. Invoke CreateIpv6EgressOnlyRule to add an egress-only rule for an IPv6 address.
       *
       * @description - The **CreateIpv6EgressOnlyRule** API is asynchronous. The system returns an instance ID immediately, but the egress-only rule for the IPv6 address has not yet been successfully created, as the creation job continues in the background. You can invoke [DescribeIpv6EgressOnlyRules](https://help.aliyun.com/document_detail/102208.html) to query the creation status of the egress-only rule for the IPv6 address:
       *     - When the egress-only rule for the IPv6 address is in the **Creating** status, it indicates that the rule is still being created.
       *     - When the egress-only rule for the IPv6 address is in the **Created** status, it indicates that the rule has been successfully created.
       * - The **CreateIpv6EgressOnlyRule** API does not support concurrent addition of egress-only rules for the same IPv6 address.
       *
       * @param request CreateIpv6EgressOnlyRuleRequest
       * @return CreateIpv6EgressOnlyRuleResponse
       */
      Models::CreateIpv6EgressOnlyRuleResponse createIpv6EgressOnlyRule(const Models::CreateIpv6EgressOnlyRuleRequest &request);

      /**
       * @summary An IPv6 gateway controls IPv6 network traffic for a virtual private cloud (VPC). Creates an IPv6 gateway by calling the CreateIpv6Gateway operation.
       *
       * @description - Before you create an IPv6 gateway, make sure that the target VPC and vSwitch have IPv6 CIDR blocks enabled. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/448582.html) to query the VPC configuration.
       * - You can create only one IPv6 gateway for each VPC.
       * - **CreateIpv6Gateway** is an asynchronous operation. After you send a request, the system returns an instance ID while enable IPv6 gateway is being created in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the creation status of enable IPv6 gateway:
       *     - If enable IPv6 gateway is in the **Creating** state, enable IPv6 gateway is being created.
       *     - If enable IPv6 gateway is in the **Created** state, enable IPv6 gateway is created.
       * - You cannot call **CreateIpv6Gateway** to concurrently create IPv6 gateways in the same VPC.
       *
       * @param request CreateIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6GatewayWithOptions(const Models::CreateIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An IPv6 gateway controls IPv6 network traffic for a virtual private cloud (VPC). Creates an IPv6 gateway by calling the CreateIpv6Gateway operation.
       *
       * @description - Before you create an IPv6 gateway, make sure that the target VPC and vSwitch have IPv6 CIDR blocks enabled. You can call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/448582.html) to query the VPC configuration.
       * - You can create only one IPv6 gateway for each VPC.
       * - **CreateIpv6Gateway** is an asynchronous operation. After you send a request, the system returns an instance ID while enable IPv6 gateway is being created in the background. You can call [DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html) to query the creation status of enable IPv6 gateway:
       *     - If enable IPv6 gateway is in the **Creating** state, enable IPv6 gateway is being created.
       *     - If enable IPv6 gateway is in the **Created** state, enable IPv6 gateway is created.
       * - You cannot call **CreateIpv6Gateway** to concurrently create IPv6 gateways in the same VPC.
       *
       * @param request CreateIpv6GatewayRequest
       * @return CreateIpv6GatewayResponse
       */
      Models::CreateIpv6GatewayResponse createIpv6Gateway(const Models::CreateIpv6GatewayRequest &request);

      /**
       * @summary Createa an enhanced public NAT gateway or a VPC NAT gateway.
       *
       * @description Before you call this operation, note the following:
       * - When you create a NAT gateway for the first time, a service-linked role named AliyunServiceRoleForNatgw is automatically created. A permission policy named AliyunServiceRolePolicyForNatgw is attached to this role to allow the NAT gateway to access other cloud resources. For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/174251.html).
       * - After an enhanced public NAT gateway is created, the system automatically adds a route entry to the VPC\\"s route table to route traffic to the NAT gateway. This entry sets the destination CIDR block to 0.0.0.0/0 and the next hop to the NAT gateway.
       * - The **CreateNatGateway** operation is asynchronous. After you send a request, the system returns a NAT gateway (public or VPC) instance ID while the creation task runs in the background. Call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) operation to query the status of the NAT gateway.
       *   - A status of **Creating** indicates that the NAT gateway is being created. You can perform only query operations.
       *   - A status of **Available** indicates that the NAT gateway has been created.
       * Creating a NAT gateway takes about 1 to 3 minutes.
       *
       * @param tmpReq CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Createa an enhanced public NAT gateway or a VPC NAT gateway.
       *
       * @description Before you call this operation, note the following:
       * - When you create a NAT gateway for the first time, a service-linked role named AliyunServiceRoleForNatgw is automatically created. A permission policy named AliyunServiceRolePolicyForNatgw is attached to this role to allow the NAT gateway to access other cloud resources. For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/174251.html).
       * - After an enhanced public NAT gateway is created, the system automatically adds a route entry to the VPC\\"s route table to route traffic to the NAT gateway. This entry sets the destination CIDR block to 0.0.0.0/0 and the next hop to the NAT gateway.
       * - The **CreateNatGateway** operation is asynchronous. After you send a request, the system returns a NAT gateway (public or VPC) instance ID while the creation task runs in the background. Call the [DescribeNatGateways](https://help.aliyun.com/document_detail/36054.html) operation to query the status of the NAT gateway.
       *   - A status of **Creating** indicates that the NAT gateway is being created. You can perform only query operations.
       *   - A status of **Available** indicates that the NAT gateway has been created.
       * Creating a NAT gateway takes about 1 to 3 minutes.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a NAT IP address for a VPC NAT gateway instance.
       *
       * @description **CreateNatIp** is an asynchronous operation. After you send a request, the system returns a NAT IP address, but the NAT IP address is not yet created. The creation task is still running in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/287000.html) to query the status of the NAT IP address:
       * - If the NAT IP address is in the **Creating** state, the NAT IP address is being created. In this state, you can only perform query operations.
       * - If the NAT IP address is in the **Available** state, the NAT IP address is created.
       * **CreateNatIp** does not support concurrent creation of NAT IP addresses within the same NAT gateway.
       *
       * @param request CreateNatIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatIpResponse
       */
      Models::CreateNatIpResponse createNatIpWithOptions(const Models::CreateNatIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT IP address for a VPC NAT gateway instance.
       *
       * @description **CreateNatIp** is an asynchronous operation. After you send a request, the system returns a NAT IP address, but the NAT IP address is not yet created. The creation task is still running in the background. You can call [ListNatIps](https://help.aliyun.com/document_detail/287000.html) to query the status of the NAT IP address:
       * - If the NAT IP address is in the **Creating** state, the NAT IP address is being created. In this state, you can only perform query operations.
       * - If the NAT IP address is in the **Available** state, the NAT IP address is created.
       * **CreateNatIp** does not support concurrent creation of NAT IP addresses within the same NAT gateway.
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
       * @summary Invoke the CreatePhysicalConnectionOccupancyOrder API to create an order for resource occupancy fees.
       *
       * @description > This operation is allowed only for instances whose Express Connect circuit status is **Complete** (waiting for user payment).
       *
       * @param request CreatePhysicalConnectionOccupancyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhysicalConnectionOccupancyOrderResponse
       */
      Models::CreatePhysicalConnectionOccupancyOrderResponse createPhysicalConnectionOccupancyOrderWithOptions(const Models::CreatePhysicalConnectionOccupancyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CreatePhysicalConnectionOccupancyOrder API to create an order for resource occupancy fees.
       *
       * @description > This operation is allowed only for instances whose Express Connect circuit status is **Complete** (waiting for user payment).
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
       * @summary Adds custom routes in a batch to the route table of a VPC router.
       *
       * @description - **CreateRouteEntries** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the status of a route:
       *   - If a route is in the **Creating** state, the route is being created.
       *   - If a route is in the **Created** state, the route is created.
       * - **CreateRouteEntries** does not support concurrent batch operations to add custom routes to the same VPC.
       * **Note the following when you add custom routes to the route table of a VPC router:**
       * - A route table can contain a maximum of 200 custom routes.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route cannot be the same as, overlap with, or be a subset of the CIDR block of a vSwitch in the VPC.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route cannot be 100.64.0.0/10 or a subset of 100.64.0.0/10.
       * - The destination CIDR blocks (**DstCidrBlock**) of routes in the same route table cannot be the same.
       * - An IP address specified as the destination CIDR block (**DstCidrBlock**) is processed with a 32-bit subnet mask.
       * - Multiple custom routes can point to the same next hop (**NextHop**).
       * - The next hop (**NextHop**) of a custom route must be in the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntriesWithOptions(const Models::CreateRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds custom routes in a batch to the route table of a VPC router.
       *
       * @description - **CreateRouteEntries** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the status of a route:
       *   - If a route is in the **Creating** state, the route is being created.
       *   - If a route is in the **Created** state, the route is created.
       * - **CreateRouteEntries** does not support concurrent batch operations to add custom routes to the same VPC.
       * **Note the following when you add custom routes to the route table of a VPC router:**
       * - A route table can contain a maximum of 200 custom routes.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route cannot be the same as, overlap with, or be a subset of the CIDR block of a vSwitch in the VPC.
       * - The destination CIDR block (**DstCidrBlock**) of a custom route cannot be 100.64.0.0/10 or a subset of 100.64.0.0/10.
       * - The destination CIDR blocks (**DstCidrBlock**) of routes in the same route table cannot be the same.
       * - An IP address specified as the destination CIDR block (**DstCidrBlock**) is processed with a 32-bit subnet mask.
       * - Multiple custom routes can point to the same next hop (**NextHop**).
       * - The next hop (**NextHop**) of a custom route must be in the same VPC as the route table.
       *
       * @param request CreateRouteEntriesRequest
       * @return CreateRouteEntriesResponse
       */
      Models::CreateRouteEntriesResponse createRouteEntries(const Models::CreateRouteEntriesRequest &request);

      /**
       * @summary Creates a custom route entry on a vRouter or Virtual Border Router (VBR).
       *
       * @description - The **CreateRouteEntry** operation is asynchronous. After you send a request, the system returns an instance ID, but the custom route entry has not been created yet. The system continues to run the node in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the status of the route:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route is created.
       * - The **CreateRouteEntry** operation does not support concurrent creation of custom route entries in the same VPC or the same VBR.
       * - The **CreateRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       * **Take note of the following items when you use this operation to add custom route entries to a route table of a vRouter:**
       * > When the route to be added is a prefix list route, the routing quota is calculated based on the sum of existing routes and the maximum number of entries in the prefix list route. The sum cannot exceed the routing quota.
       * - A route table can contain up to 200 custom route entries.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as a vSwitch CIDR block in the VPC. The destination CIDR block can contain a vSwitch CIDR block but cannot be contained by a vSwitch CIDR block.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as that CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>.
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).
       * - The next hop (**NextHopId**) of a custom route entry must be in the same VPC as the route table.
       * - You can configure ECMP routing by using the **NextHopList** parameter settings:
       *   * To add a non-ECMP custom route, specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.   
       *  
       *   * To add an ECMP route, specify the **DestinationCidrBlock** and **NextHopList** parameters. Do not specify the **NextHopType** or **NextHopId** parameter.
       * **Take note of the following items when you use this operation to add custom route entries to a route table of a Virtual Border Router (VBR):**
       * - A route table can contain up to 200 custom route entries.  
       *        
       * - The **NextHopList** parameter is not supported.   
       *        
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as that CIDR block.
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
       * - You can create route entries on a VBR only when the VBR is in the **Active** state, the corresponding Express Connect circuit is in the **Enabled** state, and the circuit is not under overdue payment lock.  
       *       
       * - Only non-ECMP route entries are supported. Specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.
       *
       * @param request CreateRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntryWithOptions(const Models::CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route entry on a vRouter or Virtual Border Router (VBR).
       *
       * @description - The **CreateRouteEntry** operation is asynchronous. After you send a request, the system returns an instance ID, but the custom route entry has not been created yet. The system continues to run the node in the background. You can invoke [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the status of the route:
       *     - If the route is in the **Creating** state, the route is being created.
       *     - If the route is in the **Created** state, the route is created.
       * - The **CreateRouteEntry** operation does not support concurrent creation of custom route entries in the same VPC or the same VBR.
       * - The **CreateRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry the operation as needed.
       * **Take note of the following items when you use this operation to add custom route entries to a route table of a vRouter:**
       * > When the route to be added is a prefix list route, the routing quota is calculated based on the sum of existing routes and the maximum number of entries in the prefix list route. The sum cannot exceed the routing quota.
       * - A route table can contain up to 200 custom route entries.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry cannot be the same as a vSwitch CIDR block in the VPC. The destination CIDR block can contain a vSwitch CIDR block but cannot be contained by a vSwitch CIDR block.
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as that CIDR block.
       * <notice>The system route with the destination CIDR block `100.64.0.0/10` is used for communication among cloud services within the VPC. Exercise caution when you configure a more specific route. Incorrect configurations may cause cloud services to become inaccessible.</notice>.
       * - The destination CIDR blocks (**DestinationCidrBlock**) of route entries in the same route table must be unique.
       * - If the specified destination CIDR block (**DestinationCidrBlock**) is an IP address, it is treated as a CIDR block with a 32-bit mask.
       * - Multiple custom route entries can point to the same next hop (**NextHopId**).
       * - The next hop (**NextHopId**) of a custom route entry must be in the same VPC as the route table.
       * - You can configure ECMP routing by using the **NextHopList** parameter settings:
       *   * To add a non-ECMP custom route, specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.   
       *  
       *   * To add an ECMP route, specify the **DestinationCidrBlock** and **NextHopList** parameters. Do not specify the **NextHopType** or **NextHopId** parameter.
       * **Take note of the following items when you use this operation to add custom route entries to a route table of a Virtual Border Router (VBR):**
       * - A route table can contain up to 200 custom route entries.  
       *        
       * - The **NextHopList** parameter is not supported.   
       *        
       * - The destination CIDR block (**DestinationCidrBlock**) of a custom route entry can be a more specific CIDR block than the cloud service system route CIDR block `100.64.0.0/10`, but cannot be the same as that CIDR block.
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
       * - You can create route entries on a VBR only when the VBR is in the **Active** state, the corresponding Express Connect circuit is in the **Enabled** state, and the circuit is not under overdue payment lock.  
       *       
       * - Only non-ECMP route entries are supported. Specify the **DestinationCidrBlock**, **NextHopType**, and **NextHopId** parameters. Do not specify the **NextHopList** parameter.
       *
       * @param request CreateRouteEntryRequest
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntry(const Models::CreateRouteEntryRequest &request);

      /**
       * @summary Creates a custom route table.
       *
       * @description - **CreateRouteTable**接口属于异步接口，即系统会返回一个实例ID，但该自定义路由表尚未创建完成，系统后台的创建任务仍在进行。您可以调用[DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html)查询自定义路由表的创建状态：
       *     - 当自定义路由表处于**Creating**状态时，表示自定义路由表创建中。
       *     - 当自定义路由表处于**Available**状态时，表示自定义路由表创建完成。
       * - **CreateRouteTable**接口不支持在同一个VPC中并发创建自定义路由表。
       *
       * @param request CreateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTableWithOptions(const Models::CreateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route table.
       *
       * @description - **CreateRouteTable**接口属于异步接口，即系统会返回一个实例ID，但该自定义路由表尚未创建完成，系统后台的创建任务仍在进行。您可以调用[DescribeRouteTableList](https://help.aliyun.com/document_detail/87602.html)查询自定义路由表的创建状态：
       *     - 当自定义路由表处于**Creating**状态时，表示自定义路由表创建中。
       *     - 当自定义路由表处于**Available**状态时，表示自定义路由表创建完成。
       * - **CreateRouteTable**接口不支持在同一个VPC中并发创建自定义路由表。
       *
       * @param request CreateRouteTableRequest
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTable(const Models::CreateRouteTableRequest &request);

      /**
       * @summary Creates a route target group instance.
       *
       * @description - **CreateRouteTargetGroup** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route target group instance is not yet created. The creation node continues in the background. You can invoke **ListRouteTargetGroup** to query the creation status of the routing target group:
       *     - If the routing target group is in the **Pending** state, the routing target group is being created.
       *     - If the routing target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the routing target group is created.
       * - **Active/standby pattern**: When you create a routing target group, configure primary and secondary instances that are in different zones and of the same type.
       * - **Primary instance**: The weight is 100. The primary instance handles all traffic under normal conditions and takes effect when health checks are successful.
       * - **Secondary instance**: The weight is 0. The secondary instance takes over traffic when the primary instance fails and serves as disaster recovery and backup.
       *
       * @param request CreateRouteTargetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTargetGroupResponse
       */
      Models::CreateRouteTargetGroupResponse createRouteTargetGroupWithOptions(const Models::CreateRouteTargetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route target group instance.
       *
       * @description - **CreateRouteTargetGroup** is an asynchronous operation. After you invoke this operation, the system returns an instance ID, but the route target group instance is not yet created. The creation node continues in the background. You can invoke **ListRouteTargetGroup** to query the creation status of the routing target group:
       *     - If the routing target group is in the **Pending** state, the routing target group is being created.
       *     - If the routing target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the routing target group is created.
       * - **Active/standby pattern**: When you create a routing target group, configure primary and secondary instances that are in different zones and of the same type.
       * - **Primary instance**: The weight is 100. The primary instance handles all traffic under normal conditions and takes effect when health checks are successful.
       * - **Secondary instance**: The weight is 0. The secondary instance takes over traffic when the primary instance fails and serves as disaster recovery and backup.
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
       * @summary Creates an SSL-VPN client certificate by calling the CreateSslVpnClientCert operation.
       *
       * @description Before you create an SSL-VPN client certificate, make sure that an SSL-VPN server has been created for the VPN gateway instance. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCertWithOptions(const Models::CreateSslVpnClientCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSL-VPN client certificate by calling the CreateSslVpnClientCert operation.
       *
       * @description Before you create an SSL-VPN client certificate, make sure that an SSL-VPN server has been created for the VPN gateway instance. For more information, see [CreateSslVpnServer](https://help.aliyun.com/document_detail/2794075.html).
       *
       * @param request CreateSslVpnClientCertRequest
       * @return CreateSslVpnClientCertResponse
       */
      Models::CreateSslVpnClientCertResponse createSslVpnClientCert(const Models::CreateSslVpnClientCertRequest &request);

      /**
       * @summary Creates an SSL server.
       *
       * @description - **CreateSslVpnServer** is an asynchronous operation. After you send a request, the system returns an instance ID but the SSL server has not been created yet. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the SSL server:
       *   - If the VPN gateway instance is in the **updating** state, the SSL server is being created.
       *   - If the VPN gateway instance is in the **active** state, the SSL server is created.
       * - **CreateSslVpnServer** does not support concurrent creation of SSL servers under the same VPN gateway.
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
       * @summary Creates an SSL server.
       *
       * @description - **CreateSslVpnServer** is an asynchronous operation. After you send a request, the system returns an instance ID but the SSL server has not been created yet. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance to determine the creation status of the SSL server:
       *   - If the VPN gateway instance is in the **updating** state, the SSL server is being created.
       *   - If the VPN gateway instance is in the **active** state, the SSL server is created.
       * - **CreateSslVpnServer** does not support concurrent creation of SSL servers under the same VPN gateway.
       * ### Before you begin
       * - You have created a VPN gateway with the SSL-VPN feature enabled. For more information, see [CreateVpnGateway](https://help.aliyun.com/document_detail/2794049.html).
       * - If you want to enable two-factor authentication for the SSL server, make sure that the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       *
       * @param request CreateSslVpnServerRequest
       * @return CreateSslVpnServerResponse
       */
      Models::CreateSslVpnServerResponse createSslVpnServer(const Models::CreateSslVpnServerRequest &request);

      /**
       * @summary Calls the CreateTrafficMirrorFilter operation to create a traffic mirror filter.
       *
       * @description The **CreateTrafficMirrorFilter** operation is an asynchronous operation. After you send the request, the system returns an instance ID but the traffic mirror filter is not yet created. The creation task is still running in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the traffic mirror filter:
       * - If the traffic mirror filter is in the **Creating** state, the traffic mirror filter is being created.
       * - If the traffic mirror filter is in the **Created** state, the traffic mirror filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilterWithOptions(const Models::CreateTrafficMirrorFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateTrafficMirrorFilter operation to create a traffic mirror filter.
       *
       * @description The **CreateTrafficMirrorFilter** operation is an asynchronous operation. After you send the request, the system returns an instance ID but the traffic mirror filter is not yet created. The creation task is still running in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the status of the traffic mirror filter:
       * - If the traffic mirror filter is in the **Creating** state, the traffic mirror filter is being created.
       * - If the traffic mirror filter is in the **Created** state, the traffic mirror filter is created.
       *
       * @param request CreateTrafficMirrorFilterRequest
       * @return CreateTrafficMirrorFilterResponse
       */
      Models::CreateTrafficMirrorFilterResponse createTrafficMirrorFilter(const Models::CreateTrafficMirrorFilterRequest &request);

      /**
       * @summary Creates an inbound or outbound rule for traffic mirror.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRulesWithOptions(const Models::CreateTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an inbound or outbound rule for traffic mirror.
       *
       * @param request CreateTrafficMirrorFilterRulesRequest
       * @return CreateTrafficMirrorFilterRulesResponse
       */
      Models::CreateTrafficMirrorFilterRulesResponse createTrafficMirrorFilterRules(const Models::CreateTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Creates a traffic mirror session.
       *
       * @description **CreateTrafficMirrorSession**接口属于异步接口，即系统返回一个实例ID，但该镜像会话尚未创建成功，系统后台的创建任务仍在进行。您可以调用[ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html)查询镜像会话的创建状态：
       * - 当镜像会话处于**Creating**状态时，表示镜像会话正在创建中。
       * - 当镜像会话处于**Created**状态时，表示镜像会话创建完成。
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSessionWithOptions(const Models::CreateTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic mirror session.
       *
       * @description **CreateTrafficMirrorSession**接口属于异步接口，即系统返回一个实例ID，但该镜像会话尚未创建成功，系统后台的创建任务仍在进行。您可以调用[ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html)查询镜像会话的创建状态：
       * - 当镜像会话处于**Creating**状态时，表示镜像会话正在创建中。
       * - 当镜像会话处于**Created**状态时，表示镜像会话创建完成。
       *
       * @param request CreateTrafficMirrorSessionRequest
       * @return CreateTrafficMirrorSessionResponse
       */
      Models::CreateTrafficMirrorSessionResponse createTrafficMirrorSession(const Models::CreateTrafficMirrorSessionRequest &request);

      /**
       * @summary Creates a vSwitch.
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
       * @summary Creates a vSwitch.
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
       * @summary Adds a destination-based route for an IPsec-VPN connection.
       *
       * @description - The IPsec-VPN connection must be attached to a transit router instance. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).  
       * - You cannot add a destination-based route with a destination CIDR block of 0.0.0.0/0.  
       * - Do not add destination-based routes with a destination CIDR block of 100.64.0.0/10, any subnet within 100.64.0.0/10, or any CIDR block that includes 100.64.0.0/10. Such route entries may cause the console to fail to display the status of the IPsec-VPN connection or cause IPsec tunnel negotiation to fail.  
       * - The **CreateVcoRouteEntry** API is asynchronous. The system immediately returns an instance ID, but the destination-based route entry is not yet created successfully. The creation task continues in the background. You can invoke [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the creation status of the destination-based route entry:  
       *     - If the IPsec-VPN connection is in the **updating** state, the destination-based route entry is being created.  
       *     - If the IPsec-VPN connection is in the **attached** state, the destination-based route entry has been created successfully.  
       * - The **CreateVcoRouteEntry** API does not support concurrent creation of destination-based route entries under the same IPsec-VPN connection.
       *
       * @param request CreateVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVcoRouteEntryResponse
       */
      Models::CreateVcoRouteEntryResponse createVcoRouteEntryWithOptions(const Models::CreateVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a destination-based route for an IPsec-VPN connection.
       *
       * @description - The IPsec-VPN connection must be attached to a transit router instance. For more information, see [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html).  
       * - You cannot add a destination-based route with a destination CIDR block of 0.0.0.0/0.  
       * - Do not add destination-based routes with a destination CIDR block of 100.64.0.0/10, any subnet within 100.64.0.0/10, or any CIDR block that includes 100.64.0.0/10. Such route entries may cause the console to fail to display the status of the IPsec-VPN connection or cause IPsec tunnel negotiation to fail.  
       * - The **CreateVcoRouteEntry** API is asynchronous. The system immediately returns an instance ID, but the destination-based route entry is not yet created successfully. The creation task continues in the background. You can invoke [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the creation status of the destination-based route entry:  
       *     - If the IPsec-VPN connection is in the **updating** state, the destination-based route entry is being created.  
       *     - If the IPsec-VPN connection is in the **attached** state, the destination-based route entry has been created successfully.  
       * - The **CreateVcoRouteEntry** API does not support concurrent creation of destination-based route entries under the same IPsec-VPN connection.
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
       * @summary Invokes the CreateVirtualPhysicalConnection operation to create shared Express Connect circuits.
       *
       * @description Before calling this operation, familiarize yourself with the creation process and environment requirements for shared Express Connect circuits. For more information, see [Overview of shared Express Connect circuits](https://help.aliyun.com/document_detail/146571.html) and [Partner operation guide](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnectionWithOptions(const Models::CreateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateVirtualPhysicalConnection operation to create shared Express Connect circuits.
       *
       * @description Before calling this operation, familiarize yourself with the creation process and environment requirements for shared Express Connect circuits. For more information, see [Overview of shared Express Connect circuits](https://help.aliyun.com/document_detail/146571.html) and [Partner operation guide](https://help.aliyun.com/document_detail/155987.html).
       *
       * @param request CreateVirtualPhysicalConnectionRequest
       * @return CreateVirtualPhysicalConnectionResponse
       */
      Models::CreateVirtualPhysicalConnectionResponse createVirtualPhysicalConnection(const Models::CreateVirtualPhysicalConnectionRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this API, keep the following in mind:
       * - Each VPC can have only one primary IPv4 CIDR block. Add secondary IPv4 CIDR blocks to extend the address space.
       * - After the VPC is created, you can resize the IPv4 CIDR within the original range. Shrinking may fail if any allocated private IP addresses fall outside the target CIDR.
       * - Each VPC supports up to 300,000 private addresses for cloud resources. This quota cannot be increased.
       * - Creating a VPC automatically creates a router and a route table for that VPC.
       * - Each VPC supports up to three user-side CIDR blocks. If one block is a superset of another, the block with the shorter mask takes effect. For example, between `10.0.0.0/16` and `10.0.0.0/24`, `10.0.0.0/16` is the one that applies.
       * - CreateVpc is asynchronous: the response returns a VPC ID while creation continues in the background. Call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) for status:
       *   - **Creating**: The VPC is still being provisioned.
       *   - **Created**:**&#x20;**&#x54;he VPC is ready to use.
       * - You can create multiple non-default VPCs concurrently in the same region, subject to your account [quotas](https://help.aliyun.com/document_detail/27750.html).
       *
       * @param request CreateVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcResponse
       */
      Models::CreateVpcResponse createVpcWithOptions(const Models::CreateVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description When you call this API, keep the following in mind:
       * - Each VPC can have only one primary IPv4 CIDR block. Add secondary IPv4 CIDR blocks to extend the address space.
       * - After the VPC is created, you can resize the IPv4 CIDR within the original range. Shrinking may fail if any allocated private IP addresses fall outside the target CIDR.
       * - Each VPC supports up to 300,000 private addresses for cloud resources. This quota cannot be increased.
       * - Creating a VPC automatically creates a router and a route table for that VPC.
       * - Each VPC supports up to three user-side CIDR blocks. If one block is a superset of another, the block with the shorter mask takes effect. For example, between `10.0.0.0/16` and `10.0.0.0/24`, `10.0.0.0/16` is the one that applies.
       * - CreateVpc is asynchronous: the response returns a VPC ID while creation continues in the background. Call [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) for status:
       *   - **Creating**: The VPC is still being provisioned.
       *   - **Created**:**&#x20;**&#x54;he VPC is ready to use.
       * - You can create multiple non-default VPCs concurrently in the same region, subject to your account [quotas](https://help.aliyun.com/document_detail/27750.html).
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
       * @summary Invoke the CreateVpnAttachment API to create an IPsec-VPN connection for attaching a transit router instance.
       *
       * @description >Notice: 
       * - In the scenario of attaching a transit router, IPsec-VPN connections have been upgraded to dual-tunnel mode. When creating an IPsec-VPN connection, in addition to required parameters, you can configure only the following request parameters related to dual-tunnel mode: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**. For more information, see [Dual-Tunnel IPsec-VPN Connection Description for Attaching Transit Router Scenario](https://help.aliyun.com/document_detail/2853535.html).
       * - By default, an IPsec-VPN connection created by invoking the `CreateVpnAttachment` API is not attached to any resource. You can later attach it to a transit router instance by invoking the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) API. After the attachment, the system assigns a gateway IP address to the IPsec-VPN connection. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) API to view this information.
       * ### Prerequisites
       * Before creating an IPsec-VPN connection, ensure that you have already created a customer gateway in the same Region where the IPsec-VPN connection will be created. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       * If you need to add Border Gateway Protocol (BGP) configuration to the IPsec-VPN connection, ensure that an autonomous system number has been added to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachmentWithOptions(const Models::CreateVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CreateVpnAttachment API to create an IPsec-VPN connection for attaching a transit router instance.
       *
       * @description >Notice: 
       * - In the scenario of attaching a transit router, IPsec-VPN connections have been upgraded to dual-tunnel mode. When creating an IPsec-VPN connection, in addition to required parameters, you can configure only the following request parameters related to dual-tunnel mode: **ClientToken**, **Name**, **NetworkType**, **EffectImmediately**, **Tags** array, **ResourceGroupId**, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**. For more information, see [Dual-Tunnel IPsec-VPN Connection Description for Attaching Transit Router Scenario](https://help.aliyun.com/document_detail/2853535.html).
       * - By default, an IPsec-VPN connection created by invoking the `CreateVpnAttachment` API is not attached to any resource. You can later attach it to a transit router instance by invoking the [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443993.html) API. After the attachment, the system assigns a gateway IP address to the IPsec-VPN connection. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) API to view this information.
       * ### Prerequisites
       * Before creating an IPsec-VPN connection, ensure that you have already created a customer gateway in the same Region where the IPsec-VPN connection will be created. For more information, see [CreateCustomerGateway](https://help.aliyun.com/document_detail/120368.html).
       * If you need to add Border Gateway Protocol (BGP) configuration to the IPsec-VPN connection, ensure that an autonomous system number has been added to the customer gateway.
       *
       * @param request CreateVpnAttachmentRequest
       * @return CreateVpnAttachmentResponse
       */
      Models::CreateVpnAttachmentResponse createVpnAttachment(const Models::CreateVpnAttachmentRequest &request);

      /**
       * @summary Invoke the CreateVpnConnection API to create an IPsec-VPN connection.
       *
       * @description - If the VPN Gateway instance supports creating IPsec-VPN connections in dual-tunnel mode, when you invoke the `CreateVpnConnection` API, in addition to required parameters, you can also configure the following request parameters:  
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.  
       *     For information about regions and zones that support creating IPsec-VPN connections in dual-tunnel mode, see [Upgrade IPsec-VPN connections to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).  
       * - If the VPN Gateway instance only supports creating IPsec-VPN connections in single-tunnel mode, when you invoke the `CreateVpnConnection` API, in addition to required parameters, you can also configure the following request parameters:  
       *     **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.  
       * - The **CreateVpnConnection** API is asynchronous. This means that the system returns an instance ID immediately, but the IPsec-VPN connection has not yet been successfully created, and the creation task continues in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN Gateway instance and determine the creation status of the IPsec-VPN connection:  
       *     - If the VPN Gateway instance is in the **updating** status, the IPsec-VPN connection is being created.  
       *     - If the VPN Gateway instance is in the **active** status, the IPsec-VPN connection has been successfully created.  
       * - The **CreateVpnConnection** API does not support concurrent creation of IPsec-VPN connections under the same VPN Gateway.
       *
       * @param request CreateVpnConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnectionWithOptions(const Models::CreateVpnConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CreateVpnConnection API to create an IPsec-VPN connection.
       *
       * @description - If the VPN Gateway instance supports creating IPsec-VPN connections in dual-tunnel mode, when you invoke the `CreateVpnConnection` API, in addition to required parameters, you can also configure the following request parameters:  
       *     **ClientToken**, **Name**, **EffectImmediately**, **AutoConfigRoute**, **Tags** array, **TunnelOptionsSpecification** array, and **EnableTunnelsBgp**.  
       *     For information about regions and zones that support creating IPsec-VPN connections in dual-tunnel mode, see [Upgrade IPsec-VPN connections to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).  
       * - If the VPN Gateway instance only supports creating IPsec-VPN connections in single-tunnel mode, when you invoke the `CreateVpnConnection` API, in addition to required parameters, you can also configure the following request parameters:  
       *     **ClientToken**, **CustomerGatewayId**, **Name**, **EffectImmediately**, **IkeConfig**, **IpsecConfig**, **HealthCheckConfig**, **AutoConfigRoute**, **EnableDpd**, **EnableNatTraversal**, **BgpConfig**, **RemoteCaCertificate**, and **Tags** array.  
       * - The **CreateVpnConnection** API is asynchronous. This means that the system returns an instance ID immediately, but the IPsec-VPN connection has not yet been successfully created, and the creation task continues in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the status of the VPN Gateway instance and determine the creation status of the IPsec-VPN connection:  
       *     - If the VPN Gateway instance is in the **updating** status, the IPsec-VPN connection is being created.  
       *     - If the VPN Gateway instance is in the **active** status, the IPsec-VPN connection has been successfully created.  
       * - The **CreateVpnConnection** API does not support concurrent creation of IPsec-VPN connections under the same VPN Gateway.
       *
       * @param request CreateVpnConnectionRequest
       * @return CreateVpnConnectionResponse
       */
      Models::CreateVpnConnectionResponse createVpnConnection(const Models::CreateVpnConnectionRequest &request);

      /**
       * @summary Creates a VPN gateway by calling the CreateVpnGateway operation.
       *
       * @description - Before you create a VPN gateway, we recommend that you familiarize yourself with the limits of VPN gateways. For more information, see [VPN gateway limits](https://help.aliyun.com/document_detail/65290.html).
       * - VPN gateway instances in some regions support only dual-tunnel IPsec-VPN connections by default. When you call the `CreateVpnGateway` operation to create a VPN gateway instance in these regions, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to the required parameters. For information about the regions and zones that support dual-tunnel IPsec-VPN connections, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - **CreateVpnGateway** is an asynchronous operation. After you send a request, the system returns an instance ID but the VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the VPN gateway:
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
       * @summary Creates a VPN gateway by calling the CreateVpnGateway operation.
       *
       * @description - Before you create a VPN gateway, we recommend that you familiarize yourself with the limits of VPN gateways. For more information, see [VPN gateway limits](https://help.aliyun.com/document_detail/65290.html).
       * - VPN gateway instances in some regions support only dual-tunnel IPsec-VPN connections by default. When you call the `CreateVpnGateway` operation to create a VPN gateway instance in these regions, you must specify the **VSwitchId** and **DisasterRecoveryVSwitchId** parameters in addition to the required parameters. For information about the regions and zones that support dual-tunnel IPsec-VPN connections, see [Upgrade an IPsec-VPN connection to dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
       * - **CreateVpnGateway** is an asynchronous operation. After you send a request, the system returns an instance ID but the VPN gateway is not yet created. The creation task is still running in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the VPN gateway:
       *         
       *     - If the VPN gateway is in the **provisioning** state, the VPN gateway is being created.
       *     - If the VPN gateway is in the **active** state, the VPN gateway is created.
       *
       * @param request CreateVpnGatewayRequest
       * @return CreateVpnGatewayResponse
       */
      Models::CreateVpnGatewayResponse createVpnGateway(const Models::CreateVpnGatewayRequest &request);

      /**
       * @summary Creates a policy-based route for a VPN gateway.
       *
       * @description ### 前提条件
       * - 创建策略路由前，请确保您已经创建了IPsec连接。具体操作，请参见[CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html)。
       * - 创建策略路由前，建议您先了解策略路由的使用限制、匹配规则等信息。更多信息，请参见[使用策略路由](https://help.aliyun.com/document_detail/110777.html)。
       * ### 使用限制
       * - 不支持添加目标网段为0.0.0.0/0的策略路由。
       * - 请勿添加目标网段为100.64.0.0/10、100.64.0.0/10下的子网段或者包含100.64.0.0/10网段的策略路由，该类策略路由会导致控制台无法显示IPsec连接的状态或者导致IPsec连接协商失败。
       * - **CreateVpnPbrRouteEntry**接口属于异步接口，即系统先返回策略路由的信息，但该策略路由尚未创建成功，系统后台的创建任务仍在进行。您可以调用[DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html)接口查询VPN网关实例状态，来确定策略路由的创建状态：
       *     - 当VPN网关实例处于**updating**状态时，表示策略路由正在创建中。
       *     - 当VPN网关实例处于**active**状态时，表示策略路由创建成功。
       * - **CreateVpnPbrRouteEntry**接口不支持在同一个VPN网关实例下并发创建策略路由。
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntryWithOptions(const Models::CreateVpnPbrRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy-based route for a VPN gateway.
       *
       * @description ### 前提条件
       * - 创建策略路由前，请确保您已经创建了IPsec连接。具体操作，请参见[CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html)。
       * - 创建策略路由前，建议您先了解策略路由的使用限制、匹配规则等信息。更多信息，请参见[使用策略路由](https://help.aliyun.com/document_detail/110777.html)。
       * ### 使用限制
       * - 不支持添加目标网段为0.0.0.0/0的策略路由。
       * - 请勿添加目标网段为100.64.0.0/10、100.64.0.0/10下的子网段或者包含100.64.0.0/10网段的策略路由，该类策略路由会导致控制台无法显示IPsec连接的状态或者导致IPsec连接协商失败。
       * - **CreateVpnPbrRouteEntry**接口属于异步接口，即系统先返回策略路由的信息，但该策略路由尚未创建成功，系统后台的创建任务仍在进行。您可以调用[DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html)接口查询VPN网关实例状态，来确定策略路由的创建状态：
       *     - 当VPN网关实例处于**updating**状态时，表示策略路由正在创建中。
       *     - 当VPN网关实例处于**active**状态时，表示策略路由创建成功。
       * - **CreateVpnPbrRouteEntry**接口不支持在同一个VPN网关实例下并发创建策略路由。
       *
       * @param request CreateVpnPbrRouteEntryRequest
       * @return CreateVpnPbrRouteEntryResponse
       */
      Models::CreateVpnPbrRouteEntryResponse createVpnPbrRouteEntry(const Models::CreateVpnPbrRouteEntryRequest &request);

      /**
       * @summary Creates a destination route for a VPN gateway instance. After the destination route is created, the VPN gateway instance matches the destination IP address of traffic against destination routes and forwards the traffic based on the matched destination route.
       *
       * @description ### Before you begin
       * - Before you create a destination route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/2526947.html).
       * - Before you create a destination route, we recommend that you understand the matching rules of destination routes. For more information, see [Configure destination routes](https://help.aliyun.com/document_detail/112476.html).
       * ### Limits
       * - Destination routes with a destination CIDR block of 0.0.0.0/0 are not supported.
       * - Do not add destination routes with a destination CIDR block of 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such routing entries may cause the console to fail to display the status of IPsec-VPN connections or cause IPsec-VPN connection negotiation to be failed.
       * - The **CreateVpnRouteEntry** operation is asynchronous. After you invoke this operation, the system returns the destination route configuration, but the destination route has not been created yet. The background creation node is still in progress. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the destination route:
       *     - If the VPN gateway instance is in the **updating** state, the destination route is being created.
       *     - If the VPN gateway instance is in the **active** state, the destination route has been created.
       * - The **CreateVpnRouteEntry** operation does not support concurrent creation of destination routes for the same VPN gateway.
       *
       * @param request CreateVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntryWithOptions(const Models::CreateVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a destination route for a VPN gateway instance. After the destination route is created, the VPN gateway instance matches the destination IP address of traffic against destination routes and forwards the traffic based on the matched destination route.
       *
       * @description ### Before you begin
       * - Before you create a destination route, make sure that you have created an IPsec-VPN connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/2526947.html).
       * - Before you create a destination route, we recommend that you understand the matching rules of destination routes. For more information, see [Configure destination routes](https://help.aliyun.com/document_detail/112476.html).
       * ### Limits
       * - Destination routes with a destination CIDR block of 0.0.0.0/0 are not supported.
       * - Do not add destination routes with a destination CIDR block of 100.64.0.0/10, a subnet of 100.64.0.0/10, or a CIDR block that contains 100.64.0.0/10. Such routing entries may cause the console to fail to display the status of IPsec-VPN connections or cause IPsec-VPN connection negotiation to be failed.
       * - The **CreateVpnRouteEntry** operation is asynchronous. After you invoke this operation, the system returns the destination route configuration, but the destination route has not been created yet. The background creation node is still in progress. You can invoke [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to query the creation status of the destination route:
       *     - If the VPN gateway instance is in the **updating** state, the destination route is being created.
       *     - If the VPN gateway instance is in the **active** state, the destination route has been created.
       * - The **CreateVpnRouteEntry** operation does not support concurrent creation of destination routes for the same VPN gateway.
       *
       * @param request CreateVpnRouteEntryRequest
       * @return CreateVpnRouteEntryResponse
       */
      Models::CreateVpnRouteEntryResponse createVpnRouteEntry(const Models::CreateVpnRouteEntryRequest &request);

      /**
       * @summary Deactivates a router interface.
       *
       * @param request DeactivateRouterInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateRouterInterfaceResponse
       */
      Models::DeactivateRouterInterfaceResponse deactivateRouterInterfaceWithOptions(const Models::DeactivateRouterInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivates a router interface.
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
       * @summary Calls DeleteBgpPeer to delete a specified BGP peer.
       *
       * @param request DeleteBgpPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBgpPeerResponse
       */
      Models::DeleteBgpPeerResponse deleteBgpPeerWithOptions(const Models::DeleteBgpPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteBgpPeer to delete a specified BGP peer.
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
       * @summary Calls the DeleteCustomerGateway operation to delete a specified customer gateway.
       *
       * @description Before deleting a customer gateway, make sure that the customer gateway is not associated with any IPsec connections. To delete IPsec connections, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
       *
       * @param request DeleteCustomerGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomerGatewayResponse
       */
      Models::DeleteCustomerGatewayResponse deleteCustomerGatewayWithOptions(const Models::DeleteCustomerGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteCustomerGateway operation to delete a specified customer gateway.
       *
       * @description Before deleting a customer gateway, make sure that the customer gateway is not associated with any IPsec connections. To delete IPsec connections, see [DeleteVpnAttachment](https://help.aliyun.com/document_detail/2526938.html) or [DeleteVpnConnection](https://help.aliyun.com/document_detail/2526948.html).
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
       * @summary Deletes a specified enhanced VPN gateway.
       *
       * @description > You cannot delete an enhanced VPN gateway that has an existing IPsec connection.
       *
       * @param request DeleteEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnhancedVpnGatewayResponse
       */
      Models::DeleteEnhancedVpnGatewayResponse deleteEnhancedVpnGatewayWithOptions(const Models::DeleteEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified enhanced VPN gateway.
       *
       * @description > You cannot delete an enhanced VPN gateway that has an existing IPsec connection.
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
       * @summary Calls the DeleteExpressConnectTrafficQos operation to delete an Express Connect traffic QoS policy.
       *
       * @description A QoS policy that is associated with an Express Connect circuit cannot be directly deleted. You must disassociate it first.
       *
       * @param request DeleteExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosResponse
       */
      Models::DeleteExpressConnectTrafficQosResponse deleteExpressConnectTrafficQosWithOptions(const Models::DeleteExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQos operation to delete an Express Connect traffic QoS policy.
       *
       * @description A QoS policy that is associated with an Express Connect circuit cannot be directly deleted. You must disassociate it first.
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
       * @summary Calls the DeleteExpressConnectTrafficQosRule operation to delete an Express Connect QoS rule.
       *
       * @param request DeleteExpressConnectTrafficQosRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectTrafficQosRuleResponse
       */
      Models::DeleteExpressConnectTrafficQosRuleResponse deleteExpressConnectTrafficQosRuleWithOptions(const Models::DeleteExpressConnectTrafficQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteExpressConnectTrafficQosRule operation to delete an Express Connect QoS rule.
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
       * @summary Deletes a GA instance.
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
       * @summary Deletes a GA instance.
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
       * @description Before you begin:
       * - The HaVip must be in the available state before it can be deleted.
       * - Make sure that no routes point to the HaVip that you want to delete.
       * - Make sure that the HaVip that you want to delete is not associated with any elastic IP address (EIP).
       * - The **DeleteHaVip** operation is asynchronous. After you send a request, the system returns a request ID. However, the HaVip is not yet deleted. The deletion task runs in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the deletion status of the HaVip:
       *     - If the HaVip is in the **Deleting** state, the HaVip is being deleted.
       *     - If the specified HaVip cannot be found, the HaVip is deleted.
       * - The **DeleteHaVip** operation does not support concurrent deletion of the same HaVip.
       *
       * @param request DeleteHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipResponse
       */
      Models::DeleteHaVipResponse deleteHaVipWithOptions(const Models::DeleteHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a high-availability virtual IP address (HaVip).
       *
       * @description Before you begin:
       * - The HaVip must be in the available state before it can be deleted.
       * - Make sure that no routes point to the HaVip that you want to delete.
       * - Make sure that the HaVip that you want to delete is not associated with any elastic IP address (EIP).
       * - The **DeleteHaVip** operation is asynchronous. After you send a request, the system returns a request ID. However, the HaVip is not yet deleted. The deletion task runs in the background. You can call [DescribeHaVips](https://help.aliyun.com/document_detail/114611.html) to query the deletion status of the HaVip:
       *     - If the HaVip is in the **Deleting** state, the HaVip is being deleted.
       *     - If the specified HaVip cannot be found, the HaVip is deleted.
       * - The **DeleteHaVip** operation does not support concurrent deletion of the same HaVip.
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
       * @description 删除IPv6网关前，请先删除仅主动出规则。更多信息，请参见[DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html)。
       * - **DeleteIpv6Gateway**接口属于异步接口，即系统返回一个请求ID，但该IPv6网关尚未删除成功，系统后台的删除任务仍在进行。您可以调用[DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html)查询IPv6网关的删除状态：
       *     - 当IPv6网关处于**Deleting**状态时，表示IPv6网关正在删除中。
       *     - 当查询不到指定的IPv6网关时，表示IPv6网关删除成功。
       * - **DeleteIpv6Gateway**接口不支持并发删除同一个IPv6网关。
       *
       * @param request DeleteIpv6GatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6GatewayWithOptions(const Models::DeleteIpv6GatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IPv6 gateway.
       *
       * @description 删除IPv6网关前，请先删除仅主动出规则。更多信息，请参见[DeleteIpv6EgressOnlyRule](https://help.aliyun.com/document_detail/102201.html)。
       * - **DeleteIpv6Gateway**接口属于异步接口，即系统返回一个请求ID，但该IPv6网关尚未删除成功，系统后台的删除任务仍在进行。您可以调用[DescribeIpv6GatewayAttribute](https://help.aliyun.com/document_detail/102226.html)查询IPv6网关的删除状态：
       *     - 当IPv6网关处于**Deleting**状态时，表示IPv6网关正在删除中。
       *     - 当查询不到指定的IPv6网关时，表示IPv6网关删除成功。
       * - **DeleteIpv6Gateway**接口不支持并发删除同一个IPv6网关。
       *
       * @param request DeleteIpv6GatewayRequest
       * @return DeleteIpv6GatewayResponse
       */
      Models::DeleteIpv6GatewayResponse deleteIpv6Gateway(const Models::DeleteIpv6GatewayRequest &request);

      /**
       * @summary Calls the DeleteIpv6InternetBandwidth operation to delete Internet bandwidth.
       *
       * @description The **DeleteIpv6InternetBandwidth** operation does not support concurrent deletion of the same Internet bandwidth.
       *
       * @param request DeleteIpv6InternetBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpv6InternetBandwidthResponse
       */
      Models::DeleteIpv6InternetBandwidthResponse deleteIpv6InternetBandwidthWithOptions(const Models::DeleteIpv6InternetBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteIpv6InternetBandwidth operation to delete Internet bandwidth.
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
       * @summary Calls the DeletePhysicalConnection operation to delete an Express Connect circuit.
       *
       * @description You can delete only Express Connect circuits that are in the **Allocated**, **Confirmed**, **Rejected**, **Canceled**, **AllocationFailed**, or **Terminated** state.
       *
       * @param request DeletePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhysicalConnectionResponse
       */
      Models::DeletePhysicalConnectionResponse deletePhysicalConnectionWithOptions(const Models::DeletePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeletePhysicalConnection operation to delete an Express Connect circuit.
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
       * @summary Deletes a CIDR block from an IP address pool by calling the DeletePublicIpAddressPoolCidrBlock operation.
       *
       * @description Before you call this operation, take note of the following items:
       * - Before you delete a CIDR block, make sure that the CIDR block is not in use.
       * - **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the deletion task in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool. 
       *     - If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only perform query operations.
       *     - If the CIDR block cannot be found, the CIDR block is deleted.
       * - **DeletePublicIpAddressPoolCidrBlock** does not support concurrent deletion of the same CIDR block.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlockWithOptions(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from an IP address pool by calling the DeletePublicIpAddressPoolCidrBlock operation.
       *
       * @description Before you call this operation, take note of the following items:
       * - Before you delete a CIDR block, make sure that the CIDR block is not in use.
       * - **DeletePublicIpAddressPoolCidrBlock** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the deletion task in the background. You can call [ListPublicIpAddressPoolCidrBlocks](https://help.aliyun.com/document_detail/429436.html) to query the status of the CIDR block in the IP address pool. 
       *     - If the CIDR block is in the **Deleting** state, the CIDR block is being deleted. In this state, you can only perform query operations.
       *     - If the CIDR block cannot be found, the CIDR block is deleted.
       * - **DeletePublicIpAddressPoolCidrBlock** does not support concurrent deletion of the same CIDR block.
       *
       * @param request DeletePublicIpAddressPoolCidrBlockRequest
       * @return DeletePublicIpAddressPoolCidrBlockResponse
       */
      Models::DeletePublicIpAddressPoolCidrBlockResponse deletePublicIpAddressPoolCidrBlock(const Models::DeletePublicIpAddressPoolCidrBlockRequest &request);

      /**
       * @summary Deletes multiple custom route entries at a time.
       *
       * @description 调用本接口删除路由条目时，请注意： 
       * - 只有处于**Available**状态的路由条目可以被删除。  
       * - 路由表所在的VPC正在进行创建或删除交换机或路由条目时，无法删除路由条目。 
       * - **DeleteRouteEntries**接口属于异步接口，即系统会返回一个请求ID，但该路由条目尚未删除成功，系统后台的删除任务仍在进行。您可以调用[DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html)查询路由条目的删除状态：
       *     - 当路由条目处于**Deleting**状态时，表示路由条目正在删除中。
       *     - 当查询不到指定的路由条目时，表示路由条目删除成功。
       * - **DeleteRouteEntries**接口不支持在同一个VPC中并发批量删除路由表中的路由条目。
       *
       * @param request DeleteRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntriesWithOptions(const Models::DeleteRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple custom route entries at a time.
       *
       * @description 调用本接口删除路由条目时，请注意： 
       * - 只有处于**Available**状态的路由条目可以被删除。  
       * - 路由表所在的VPC正在进行创建或删除交换机或路由条目时，无法删除路由条目。 
       * - **DeleteRouteEntries**接口属于异步接口，即系统会返回一个请求ID，但该路由条目尚未删除成功，系统后台的删除任务仍在进行。您可以调用[DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html)查询路由条目的删除状态：
       *     - 当路由条目处于**Deleting**状态时，表示路由条目正在删除中。
       *     - 当查询不到指定的路由条目时，表示路由条目删除成功。
       * - **DeleteRouteEntries**接口不支持在同一个VPC中并发批量删除路由表中的路由条目。
       *
       * @param request DeleteRouteEntriesRequest
       * @return DeleteRouteEntriesResponse
       */
      Models::DeleteRouteEntriesResponse deleteRouteEntries(const Models::DeleteRouteEntriesRequest &request);

      /**
       * @summary Calls the DeleteRouteEntry operation to delete a route from the route table of a vRouter or Virtual Border Router (VBR).
       *
       * @description When you call this operation to delete a route, take note of the following items:
       * - Only routes in the **Available** state can be deleted.
       * - A route cannot be deleted if the VPC that contains the route table is creating or deleting a vSwitch or route.
       * - To delete a route from the route table of a VBR, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route that you want to delete, and then call this operation to delete the route.
       * - The **DeleteRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the route has not been deleted yet. The deletion task runs in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the route:
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
       * @summary Calls the DeleteRouteEntry operation to delete a route from the route table of a vRouter or Virtual Border Router (VBR).
       *
       * @description When you call this operation to delete a route, take note of the following items:
       * - Only routes in the **Available** state can be deleted.
       * - A route cannot be deleted if the VPC that contains the route table is creating or deleting a vSwitch or route.
       * - To delete a route from the route table of a VBR, call the [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) operation to query the **NextHopId** of the route that you want to delete, and then call this operation to delete the route.
       * - The **DeleteRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the route has not been deleted yet. The deletion task runs in the background. You can call [DescribeRouteEntryList](https://help.aliyun.com/document_detail/138148.html) to query the deletion status of the route:
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
       * @summary Deletes an SSL-VPN client certificate.
       *
       * @description - Deleting an SSL-VPN client certificate disconnects all clients under the SSL server from their SSL-VPN connections. If clients need to continue using SSL-VPN connections, they must re-initiate the SSL-VPN connections.
       *   For example, if SSL-VPN client certificate 1 and SSL-VPN client certificate 2 are created under an SSL server, deleting SSL-VPN client certificate 1 disconnects all clients associated with both SSL-VPN client certificate 1 and SSL-VPN client certificate 2.
       *   - If clients associated with SSL-VPN client certificate 1 need to continue using SSL-VPN connections, they must install another certificate and then re-initiate the SSL-VPN connections.
       *   - If clients associated with SSL-VPN client certificate 2 need to continue using SSL-VPN connections, they only need to re-initiate the SSL-VPN connections.
       * - The **DeleteSslVpnClientCert** operation is asynchronous. After a request is sent, the system returns a request ID. However, the SSL-VPN client certificate is not immediately deleted. The deletion task runs in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance associated with the SSL server to check the deletion status of the SSL-VPN client certificate:
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
       * @description - Deleting an SSL-VPN client certificate disconnects all clients under the SSL server from their SSL-VPN connections. If clients need to continue using SSL-VPN connections, they must re-initiate the SSL-VPN connections.
       *   For example, if SSL-VPN client certificate 1 and SSL-VPN client certificate 2 are created under an SSL server, deleting SSL-VPN client certificate 1 disconnects all clients associated with both SSL-VPN client certificate 1 and SSL-VPN client certificate 2.
       *   - If clients associated with SSL-VPN client certificate 1 need to continue using SSL-VPN connections, they must install another certificate and then re-initiate the SSL-VPN connections.
       *   - If clients associated with SSL-VPN client certificate 2 need to continue using SSL-VPN connections, they only need to re-initiate the SSL-VPN connections.
       * - The **DeleteSslVpnClientCert** operation is asynchronous. After a request is sent, the system returns a request ID. However, the SSL-VPN client certificate is not immediately deleted. The deletion task runs in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the status of the VPN gateway instance associated with the SSL server to check the deletion status of the SSL-VPN client certificate:
       *     - If the VPN gateway instance is in the **updating** state, the SSL-VPN client certificate is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the SSL-VPN client certificate is deleted.
       * - The **DeleteSslVpnClientCert** operation does not support concurrent deletion of SSL-VPN client certificates under the same VPN gateway instance.
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
       * @summary Invokes the DeleteTrafficMirrorFilter operation to delete a traffic mirror filter.
       *
       * @description - **DeleteTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns a request ID, but the traffic mirror filter is not yet deleted. The deletion task runs in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the traffic mirror filter:
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
       * @description - **DeleteTrafficMirrorFilter** is an asynchronous operation. After you send a request, the system returns a request ID, but the traffic mirror filter is not yet deleted. The deletion task runs in the background. You can call [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) to query the deletion status of the traffic mirror filter:
       *     - If the traffic mirror filter is in the **Deleting** state, the traffic mirror filter is being deleted.
       *     - If the specified traffic mirror filter cannot be found, the traffic mirror filter is deleted.
       * - **DeleteTrafficMirrorFilter** does not support concurrent deletion of the same traffic mirror filter.
       *
       * @param request DeleteTrafficMirrorFilterRequest
       * @return DeleteTrafficMirrorFilterResponse
       */
      Models::DeleteTrafficMirrorFilterResponse deleteTrafficMirrorFilter(const Models::DeleteTrafficMirrorFilterRequest &request);

      /**
       * @summary Deletes an inbound or outbound rule of a filter for traffic mirror.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRulesWithOptions(const Models::DeleteTrafficMirrorFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an inbound or outbound rule of a filter for traffic mirror.
       *
       * @param request DeleteTrafficMirrorFilterRulesRequest
       * @return DeleteTrafficMirrorFilterRulesResponse
       */
      Models::DeleteTrafficMirrorFilterRulesResponse deleteTrafficMirrorFilterRules(const Models::DeleteTrafficMirrorFilterRulesRequest &request);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSessionWithOptions(const Models::DeleteTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic mirror session.
       *
       * @param request DeleteTrafficMirrorSessionRequest
       * @return DeleteTrafficMirrorSessionResponse
       */
      Models::DeleteTrafficMirrorSessionResponse deleteTrafficMirrorSession(const Models::DeleteTrafficMirrorSessionRequest &request);

      /**
       * @summary Deletes a VSwitch.
       *
       * @description When you call this operation to delete a VSwitch, take note of the following items:
       * - Before you delete a VSwitch, you must release or migrate all resources in the VPC, including VSwitches, cloud product instances, router interfaces, and HaVip resources.
       * - Only VSwitches in the **Available** state can be deleted.
       * - A VSwitch cannot be deleted if the VPC to which it belongs is creating or deleting a VSwitch or route entry.
       * - The **DeleteVSwitch** operation is asynchronous. After you send a request, the system returns a request ID, but the VSwitch is not yet deleted. The deletion task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the deletion status of the VSwitch:
       *     - If the VSwitch is in the **Pending** state, the VSwitch is being deleted.
       *     - If the specified VSwitch cannot be found, the VSwitch is deleted.
       * - The **DeleteVSwitch** operation does not support concurrent deletion of the same VSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VSwitch.
       *
       * @description When you call this operation to delete a VSwitch, take note of the following items:
       * - Before you delete a VSwitch, you must release or migrate all resources in the VPC, including VSwitches, cloud product instances, router interfaces, and HaVip resources.
       * - Only VSwitches in the **Available** state can be deleted.
       * - A VSwitch cannot be deleted if the VPC to which it belongs is creating or deleting a VSwitch or route entry.
       * - The **DeleteVSwitch** operation is asynchronous. After you send a request, the system returns a request ID, but the VSwitch is not yet deleted. The deletion task is still running in the background. You can call [DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html) to query the deletion status of the VSwitch:
       *     - If the VSwitch is in the **Pending** state, the VSwitch is being deleted.
       *     - If the specified VSwitch cannot be found, the VSwitch is deleted.
       * - The **DeleteVSwitch** operation does not support concurrent deletion of the same VSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @summary Deletes a reserved CIDR block of a vSwitch.
       *
       * @description - 在您调用该接口删除交换机预留网段前，请确保从该预留网段给弹性网卡ENI（Elastic Network Interface）分配的前缀网段均已删除。如有请先调用[UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html)或[UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html)接口释放弹性网卡的IPv4或者IPv6地址。
       * - **DeleteVSwitchCidrReservation**接口属于异步接口，即系统会返回一个实例ID，但该交换机预留网段尚未删除成功，系统后台任务仍在进行中。您可以调用
       * [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html)查询交换机预留网段的删除状态：
       *     - 当交换机预留网段处于**Releasing**状态时，表示交换机预留网段正在释放中。
       *     - 当交换机预留网段处于**Released**状态时，表示交换机预留网段已释放。
       *
       * @param request DeleteVSwitchCidrReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchCidrReservationResponse
       */
      Models::DeleteVSwitchCidrReservationResponse deleteVSwitchCidrReservationWithOptions(const Models::DeleteVSwitchCidrReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a reserved CIDR block of a vSwitch.
       *
       * @description - 在您调用该接口删除交换机预留网段前，请确保从该预留网段给弹性网卡ENI（Elastic Network Interface）分配的前缀网段均已删除。如有请先调用[UnassignPrivateIpAddresses](https://help.aliyun.com/document_detail/85919.html)或[UnassignIpv6Addresses](https://help.aliyun.com/document_detail/98611.html)接口释放弹性网卡的IPv4或者IPv6地址。
       * - **DeleteVSwitchCidrReservation**接口属于异步接口，即系统会返回一个实例ID，但该交换机预留网段尚未删除成功，系统后台任务仍在进行中。您可以调用
       * [ListVSwitchCidrReservations](https://help.aliyun.com/document_detail/610155.html)查询交换机预留网段的删除状态：
       *     - 当交换机预留网段处于**Releasing**状态时，表示交换机预留网段正在释放中。
       *     - 当交换机预留网段处于**Released**状态时，表示交换机预留网段已释放。
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
       * @summary Calls the DeleteVcoRouteEntry operation to delete a destination route entry from an IPsec connection.
       *
       * @description - The **DeleteVcoRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the destination route entry is not immediately deleted. The deletion task runs in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the deletion status of the destination route entry:
       *     - If the IPsec connection is in the **updating** state, the destination route entry is being deleted.
       *     - If the IPsec connection is in the **attached** state, the destination route entry is deleted.
       * - The **DeleteVcoRouteEntry** operation does not support concurrent deletion of destination route entries from the same IPsec connection.
       *
       * @param request DeleteVcoRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVcoRouteEntryResponse
       */
      Models::DeleteVcoRouteEntryResponse deleteVcoRouteEntryWithOptions(const Models::DeleteVcoRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteVcoRouteEntry operation to delete a destination route entry from an IPsec connection.
       *
       * @description - The **DeleteVcoRouteEntry** operation is asynchronous. After you send a request, the system returns a request ID, but the destination route entry is not immediately deleted. The deletion task runs in the background. You can call [DescribeVpnConnection](https://help.aliyun.com/document_detail/53046.html) to query the deletion status of the destination route entry:
       *     - If the IPsec connection is in the **updating** state, the destination route entry is being deleted.
       *     - If the IPsec connection is in the **attached** state, the destination route entry is deleted.
       * - The **DeleteVcoRouteEntry** operation does not support concurrent deletion of destination route entries from the same IPsec connection.
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
       * @summary Calls the DeleteVpc operation to delete a Virtual Private Cloud (VPC).
       *
       * @description When calling this operation to delete a VPC, note the following:
       * - Before deleting a VPC, you must release or migrate all resources in the VPC, including vSwitches, cloud product instances, and high-availability virtual IP addresses (HAVIPs).
       *   
       * - Only VPCs in the **Available** state can be deleted.
       * - The **DeleteVpc** operation is asynchronous. After a request is sent, a request ID is returned, but the VPC is not immediately deleted. The deletion task continues in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the deletion status of the VPC:
       *     - When the VPC is in the **Deleting** state, the VPC is being deleted.
       *     - When the specified VPC cannot be found, the VPC is deleted.
       * - The **DeleteVpc** operation does not support concurrent deletion of the same VPC.
       *
       * @param request DeleteVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcResponse
       */
      Models::DeleteVpcResponse deleteVpcWithOptions(const Models::DeleteVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteVpc operation to delete a Virtual Private Cloud (VPC).
       *
       * @description When calling this operation to delete a VPC, note the following:
       * - Before deleting a VPC, you must release or migrate all resources in the VPC, including vSwitches, cloud product instances, and high-availability virtual IP addresses (HAVIPs).
       *   
       * - Only VPCs in the **Available** state can be deleted.
       * - The **DeleteVpc** operation is asynchronous. After a request is sent, a request ID is returned, but the VPC is not immediately deleted. The deletion task continues in the background. You can call the [DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html) operation to query the deletion status of the VPC:
       *     - When the VPC is in the **Deleting** state, the VPC is being deleted.
       *     - When the specified VPC cannot be found, the VPC is deleted.
       * - The **DeleteVpc** operation does not support concurrent deletion of the same VPC.
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
       * @summary Calls the DeleteVpnAttachment operation to delete an IPsec-VPN connection.
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
       * @summary Calls the DeleteVpnAttachment operation to delete an IPsec-VPN connection.
       *
       * @description - If the IPsec-VPN connection is associated with a transit router instance, disassociate the IPsec-VPN connection from the transit router instance before you delete the IPsec-VPN connection. For more information, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468251.html).
       * - If the IPsec-VPN connection is not associated with any resource, you can call the `DeleteVpnAttachment` operation to directly delete the IPsec-VPN connection.
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
       * @summary Deletes a policy-based route by calling the DeleteVpnPbrRouteEntry operation.
       *
       * @description - **DeleteVpnPbrRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based routing is not yet deleted. The deletion node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the deletion status of the policy-based routing:
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
       * @description - **DeleteVpnPbrRouteEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based routing is not yet deleted. The deletion node continues to run in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the deletion status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based routing is being deleted.
       *     - If the VPN gateway instance is in the **active** state, the policy-based routing is deleted.
       * - **DeleteVpnPbrRouteEntry** does not support concurrent deletion of policy-based routing for the same VPN gateway instance.
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
       * @summary Enables or disables deletion protection for an instance.
       *
       * @description ## Operation description
       * After you enable deletion protection for an instance, you cannot delete the instance. To delete the instance, disable deletion protection first.
       *
       * @param request DeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtectionWithOptions(const Models::DeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables deletion protection for an instance.
       *
       * @description ## Operation description
       * After you enable deletion protection for an instance, you cannot delete the instance. To delete the instance, disable deletion protection first.
       *
       * @param request DeletionProtectionRequest
       * @return DeletionProtectionResponse
       */
      Models::DeletionProtectionResponse deletionProtection(const Models::DeletionProtectionRequest &request);

      /**
       * @summary Call the Describe95Traffic operation to query 95th percentile traffic data for Internet Shared Bandwidth billed based on the enhanced 95th percentile method.
       *
       * @param request Describe95TrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95TrafficWithOptions(const Models::Describe95TrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the Describe95Traffic operation to query 95th percentile traffic data for Internet Shared Bandwidth billed based on the enhanced 95th percentile method.
       *
       * @param request Describe95TrafficRequest
       * @return Describe95TrafficResponse
       */
      Models::Describe95TrafficResponse describe95Traffic(const Models::Describe95TrafficRequest &request);

      /**
       * @summary Call the DescribeAccessPoints operation to query Express Connect access points in a specified region.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeAccessPoints operation to query Express Connect access points in a specified region.
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
       * @description 本接口可以查询指定地域已创建的EIP信息，包括EIP的带宽峰值、计费方式，当前绑定的实例类型等。
       *
       * @param request DescribeEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEipAddressesResponse
       */
      Models::DescribeEipAddressesResponse describeEipAddressesWithOptions(const Models::DescribeEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic IP addresses (EIPs) created in a region.
       *
       * @description 本接口可以查询指定地域已创建的EIP信息，包括EIP的带宽峰值、计费方式，当前绑定的实例类型等。
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
       * @summary Queries Express Connect QoS queues by calling DescribeExpressConnectTrafficQosQueue.
       *
       * @param request DescribeExpressConnectTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectTrafficQosQueueResponse
       */
      Models::DescribeExpressConnectTrafficQosQueueResponse describeExpressConnectTrafficQosQueueWithOptions(const Models::DescribeExpressConnectTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Express Connect QoS queues by calling DescribeExpressConnectTrafficQosQueue.
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
       * @summary Queries cross-account authorization on virtual private clouds (VPCs), virtual border routers (VBRs), and Cloud Connect Network (CCN) instances.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cross-account authorization on virtual private clouds (VPCs), virtual border routers (VBRs), and Cloud Connect Network (CCN) instances.
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
       * @summary Queries IPv6 gateways created in a specified region by calling the DescribeIpv6Gateways operation.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6GatewaysWithOptions(const Models::DescribeIpv6GatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IPv6 gateways created in a specified region by calling the DescribeIpv6Gateways operation.
       *
       * @param request DescribeIpv6GatewaysRequest
       * @return DescribeIpv6GatewaysResponse
       */
      Models::DescribeIpv6GatewaysResponse describeIpv6Gateways(const Models::DescribeIpv6GatewaysRequest &request);

      /**
       * @summary Queries the list of elastic network interfaces (ENIs) associated with a VPC NAT gateway when the VPC NAT gateway is referenced as an EPS resource by PrivateLink. This feature is currently unavailable.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfacesWithOptions(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of elastic network interfaces (ENIs) associated with a VPC NAT gateway when the VPC NAT gateway is referenced as an EPS resource by PrivateLink. This feature is currently unavailable.
       *
       * @param request DescribeNatGatewayAssociateNetworkInterfacesRequest
       * @return DescribeNatGatewayAssociateNetworkInterfacesResponse
       */
      Models::DescribeNatGatewayAssociateNetworkInterfacesResponse describeNatGatewayAssociateNetworkInterfaces(const Models::DescribeNatGatewayAssociateNetworkInterfacesRequest &request);

      /**
       * @summary Calls DescribeNatGateways to query the detailed information of NAT gateways that meet specified conditions in a specified region in list form.
       *
       * @description This operation supports querying detailed information about Internet NAT gateways or VPC NAT gateways. The term "NAT gateway" used in this document does not distinguish between the two types.
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeNatGateways to query the detailed information of NAT gateways that meet specified conditions in a specified region in list form.
       *
       * @description This operation supports querying detailed information about Internet NAT gateways or VPC NAT gateways. The term "NAT gateway" used in this document does not distinguish between the two types.
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
       * @summary Use `DescribePhysicalConnectionLOA` to query the LOA for a physical connection.
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOAWithOptions(const Models::DescribePhysicalConnectionLOARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use `DescribePhysicalConnectionLOA` to query the LOA for a physical connection.
       *
       * @param request DescribePhysicalConnectionLOARequest
       * @return DescribePhysicalConnectionLOAResponse
       */
      Models::DescribePhysicalConnectionLOAResponse describePhysicalConnectionLOA(const Models::DescribePhysicalConnectionLOARequest &request);

      /**
       * @summary Queries information about Express Connect circuits in a specified region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can use the filter options provided by the **DescribePhysicalConnections** operation to query information about specific Express Connect circuits. For the supported filter options, see the description of **Key** in the **request parameters** section of this topic.
       *
       * @param request DescribePhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhysicalConnectionsResponse
       */
      Models::DescribePhysicalConnectionsResponse describePhysicalConnectionsWithOptions(const Models::DescribePhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Express Connect circuits in a specified region.
       *
       * @description By default, the system queries information about all Express Connect circuits in the specified region. You can use the filter options provided by the **DescribePhysicalConnections** operation to query information about specific Express Connect circuits. For the supported filter options, see the description of **Key** in the **request parameters** section of this topic.
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
       * @summary Queries available regions by calling the DescribeRegions operation.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions by calling the DescribeRegions operation.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Calls DescribeRouteEntryList to query the list of route entries.
       *
       * @description Before calling the [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) operation to delete a route entry, you can call this operation to query the next hop information of the route entry to be deleted.
       *
       * @param request DescribeRouteEntryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryListWithOptions(const Models::DescribeRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeRouteEntryList to query the list of route entries.
       *
       * @description Before calling the [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html) operation to delete a route entry, you can call this operation to query the next hop information of the route entry to be deleted.
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
       * @summary Calls the DescribeRouteTables operation to query route tables.
       *
       * @param request DescribeRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTablesResponse
       */
      Models::DescribeRouteTablesResponse describeRouteTablesWithOptions(const Models::DescribeRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRouteTables is deprecated, please use Vpc::2016-04-28::DescribeRouteTableList instead.
       *
       * @summary Calls the DescribeRouteTables operation to query route tables.
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
       * @summary Queries the GA instances that are associated with a specified backend server.
       *
       * @description > You can call this operation to query only dedicated-bandwidth GA instances.
       *
       * @param request DescribeServerRelatedGlobalAccelerationInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerRelatedGlobalAccelerationInstancesResponse
       */
      Models::DescribeServerRelatedGlobalAccelerationInstancesResponse describeServerRelatedGlobalAccelerationInstancesWithOptions(const Models::DescribeServerRelatedGlobalAccelerationInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the GA instances that are associated with a specified backend server.
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
       * @summary Queries created SSL client certificates by calling the DescribeSslVpnClientCerts operation.
       *
       * @param request DescribeSslVpnClientCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnClientCertsResponse
       */
      Models::DescribeSslVpnClientCertsResponse describeSslVpnClientCertsWithOptions(const Models::DescribeSslVpnClientCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created SSL client certificates by calling the DescribeSslVpnClientCerts operation.
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
       * @summary Queries the SSL servers that have been created by calling the DescribeSslVpnServers operation.
       *
       * @param request DescribeSslVpnServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSslVpnServersResponse
       */
      Models::DescribeSslVpnServersResponse describeSslVpnServersWithOptions(const Models::DescribeSslVpnServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL servers that have been created by calling the DescribeSslVpnServers operation.
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
       * @summary Calls the DescribeVRouters operation to query the list of vRouters in a specified region.
       *
       * @param request DescribeVRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVRoutersResponse
       */
      Models::DescribeVRoutersResponse describeVRoutersWithOptions(const Models::DescribeVRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeVRouters operation to query the list of vRouters in a specified region.
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
       * @summary Queries Virtual Border Router (VBR) instances that you have created.
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRoutersWithOptions(const Models::DescribeVirtualBorderRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Virtual Border Router (VBR) instances that you have created.
       *
       * @param request DescribeVirtualBorderRoutersRequest
       * @return DescribeVirtualBorderRoutersResponse
       */
      Models::DescribeVirtualBorderRoutersResponse describeVirtualBorderRouters(const Models::DescribeVirtualBorderRoutersRequest &request);

      /**
       * @summary Query the virtual border routers (VBRs) under a specified Express Connect circuit, including VBRs owned by the Express Connect circuit owner and VBRs from other accounts.
       *
       * @param request DescribeVirtualBorderRoutersForPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualBorderRoutersForPhysicalConnectionResponse
       */
      Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponse describeVirtualBorderRoutersForPhysicalConnectionWithOptions(const Models::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the virtual border routers (VBRs) under a specified Express Connect circuit, including VBRs owned by the Express Connect circuit owner and VBRs from other accounts.
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
       * @summary Queries the cross-account authorizations between a network instance and an Express Connect Router.
       *
       * @param request DescribeVpcGrantRulesToEcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcGrantRulesToEcrResponse
       */
      Models::DescribeVpcGrantRulesToEcrResponse describeVpcGrantRulesToEcrWithOptions(const Models::DescribeVpcGrantRulesToEcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account authorizations between a network instance and an Express Connect Router.
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
       * @summary Queries the details of a specified VPN gateway by calling the DescribeVpnGateway operation.
       *
       * @param request DescribeVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGatewayWithOptions(const Models::DescribeVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified VPN gateway by calling the DescribeVpnGateway operation.
       *
       * @param request DescribeVpnGatewayRequest
       * @return DescribeVpnGatewayResponse
       */
      Models::DescribeVpnGatewayResponse describeVpnGateway(const Models::DescribeVpnGatewayRequest &request);

      /**
       * @summary Queries the list of zones that support IPsec-VPN connection deployment in a specified region by calling the DescribeVpnGatewayAvailableZones operation.
       *
       * @param request DescribeVpnGatewayAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnGatewayAvailableZonesResponse
       */
      Models::DescribeVpnGatewayAvailableZonesResponse describeVpnGatewayAvailableZonesWithOptions(const Models::DescribeVpnGatewayAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones that support IPsec-VPN connection deployment in a specified region by calling the DescribeVpnGatewayAvailableZones operation.
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
       * @summary Queries the destination route and BGP route information of a VPN gateway instance by calling the DescribeVpnRouteEntries operation.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntriesWithOptions(const Models::DescribeVpnRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the destination route and BGP route information of a VPN gateway instance by calling the DescribeVpnRouteEntries operation.
       *
       * @param request DescribeVpnRouteEntriesRequest
       * @return DescribeVpnRouteEntriesResponse
       */
      Models::DescribeVpnRouteEntriesResponse describeVpnRouteEntries(const Models::DescribeVpnRouteEntriesRequest &request);

      /**
       * @summary Queries the log of an SSL server.
       *
       * @param request DescribeVpnSslServerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpnSslServerLogsResponse
       */
      Models::DescribeVpnSslServerLogsResponse describeVpnSslServerLogsWithOptions(const Models::DescribeVpnSslServerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of an SSL server.
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
       * @description - **DetachDhcpOptionsSetFromVpc**接口属于异步接口，即系统返回一个请求ID，但该DHCP选项集尚未解绑成功，系统后台的解绑任务仍在进行。您可以调用[DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html)查询DHCP选项集的解绑状态：
       *     - 当DHCP选项集处于**Pending**状态时，表示DHCP选项集正在解绑中。
       *     - 当DHCP选项集处于**UnUsed**状态时，表示DHCP选项集解绑成功。
       * - **DetachDhcpOptionsSetFromVpc**接口不支持在同一个VPC中并发解绑DHCP选项集。
       *
       * @param request DetachDhcpOptionsSetFromVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDhcpOptionsSetFromVpcResponse
       */
      Models::DetachDhcpOptionsSetFromVpcResponse detachDhcpOptionsSetFromVpcWithOptions(const Models::DetachDhcpOptionsSetFromVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a DHCP options set from a virtual private cloud (VPC).
       *
       * @description - **DetachDhcpOptionsSetFromVpc**接口属于异步接口，即系统返回一个请求ID，但该DHCP选项集尚未解绑成功，系统后台的解绑任务仍在进行。您可以调用[DescribeVpcAttribute](https://help.aliyun.com/document_detail/94565.html)查询DHCP选项集的解绑状态：
       *     - 当DHCP选项集处于**Pending**状态时，表示DHCP选项集正在解绑中。
       *     - 当DHCP选项集处于**UnUsed**状态时，表示DHCP选项集解绑成功。
       * - **DetachDhcpOptionsSetFromVpc**接口不支持在同一个VPC中并发解绑DHCP选项集。
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
       * @description 仅部分地域下的VPN网关实例支持一键诊断功能。关于地域的更多信息，请参见[VPN网关功能支持的地域](https://help.aliyun.com/document_detail/430697.html)。
       *
       * @param request DiagnoseVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGatewayWithOptions(const Models::DiagnoseVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses a VPN gateway.
       *
       * @description 仅部分地域下的VPN网关实例支持一键诊断功能。关于地域的更多信息，请参见[VPN网关功能支持的地域](https://help.aliyun.com/document_detail/430697.html)。
       *
       * @param request DiagnoseVpnGatewayRequest
       * @return DiagnoseVpnGatewayResponse
       */
      Models::DiagnoseVpnGatewayResponse diagnoseVpnGateway(const Models::DiagnoseVpnGatewayRequest &request);

      /**
       * @deprecated OpenAPI DisableVpcClassicLink is deprecated
       *
       * @summary Performs a shutdown of ClassicLink to disable ClassicLink.
       *
       * @param request DisableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLinkWithOptions(const Models::DisableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DisableVpcClassicLink is deprecated
       *
       * @summary Performs a shutdown of ClassicLink to disable ClassicLink.
       *
       * @param request DisableVpcClassicLinkRequest
       * @return DisableVpcClassicLinkResponse
       */
      Models::DisableVpcClassicLinkResponse disableVpcClassicLink(const Models::DisableVpcClassicLinkRequest &request);

      /**
       * @summary Dissociates a MACsec key from a dedicated Express Connect circuit port.
       *
       * @description - If you dissociate a key that is in the Associated state, the most recently activated key is automatically associated.
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
       * @description - If you dissociate a key that is in the Associated state, the most recently activated key is automatically associated.
       * - If you dissociate a key that is in the Disassociated state, the key is deleted.
       *
       * @param request DisassociateMacSecKeyRequest
       * @return DisassociateMacSecKeyResponse
       */
      Models::DisassociateMacSecKeyResponse disassociateMacSecKey(const Models::DisassociateMacSecKeyRequest &request);

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
       * @summary Enables a physical connection in the Confirmed state. After the operation is complete, the connection enters the Enabled state.
       *
       * @description Note the following when you call this API:
       * - You can enable only a physical connection that is in the **Confirmed** state.
       * - After the physical connection is enabled, it enters the **Enabled** state.
       * - This is an asynchronous API call. The system returns a request ID immediately, but the connection is enabled in the background. You can call [DescribePhysicalConnections](https://help.aliyun.com/document_detail/2982519.html) to query the connection status.
       * - Do not call **EnablePhysicalConnection** concurrently on the same physical connection in the **Confirmed** state.
       *
       * @param request EnablePhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnectionWithOptions(const Models::EnablePhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a physical connection in the Confirmed state. After the operation is complete, the connection enters the Enabled state.
       *
       * @description Note the following when you call this API:
       * - You can enable only a physical connection that is in the **Confirmed** state.
       * - After the physical connection is enabled, it enters the **Enabled** state.
       * - This is an asynchronous API call. The system returns a request ID immediately, but the connection is enabled in the background. You can call [DescribePhysicalConnections](https://help.aliyun.com/document_detail/2982519.html) to query the connection status.
       * - Do not call **EnablePhysicalConnection** concurrently on the same physical connection in the **Confirmed** state.
       *
       * @param request EnablePhysicalConnectionRequest
       * @return EnablePhysicalConnectionResponse
       */
      Models::EnablePhysicalConnectionResponse enablePhysicalConnection(const Models::EnablePhysicalConnectionRequest &request);

      /**
       * @deprecated OpenAPI EnableVpcClassicLink is deprecated
       *
       * @summary Enables ClassicLink for a VPC.
       *
       * @param request EnableVpcClassicLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableVpcClassicLinkResponse
       */
      Models::EnableVpcClassicLinkResponse enableVpcClassicLinkWithOptions(const Models::EnableVpcClassicLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI EnableVpcClassicLink is deprecated
       *
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
       * @summary Queries the activation status of the flow log feature by calling the GetFlowLogServiceStatus operation.
       *
       * @param request GetFlowLogServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowLogServiceStatusResponse
       */
      Models::GetFlowLogServiceStatusResponse getFlowLogServiceStatusWithOptions(const Models::GetFlowLogServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of the flow log feature by calling the GetFlowLogServiceStatus operation.
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
       * @summary Queries the details of a NAT gateway instance.
       *
       * @description Queries a public NAT gateway or VPC NAT gateway. In this topic, NAT Gateway refers to either type.
       *
       * @param request GetNatGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttributeWithOptions(const Models::GetNatGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a NAT gateway instance.
       *
       * @description Queries a public NAT gateway or VPC NAT gateway. In this topic, NAT Gateway refers to either type.
       *
       * @param request GetNatGatewayAttributeRequest
       * @return GetNatGatewayAttributeResponse
       */
      Models::GetNatGatewayAttributeResponse getNatGatewayAttribute(const Models::GetNatGatewayAttributeRequest &request);

      /**
       * @summary Checks whether outbound data transfer billing is enabled for the current account.
       *
       * @description You can call this API operation to query the status of outbound data transfer billing for the current account. For more information about outbound data transfer billing, see [Outbound data transfer billing](https://help.aliyun.com/document_detail/274385.html) and [Billing](https://help.aliyun.com/document_detail/54582.html).
       *
       * @param request GetPhysicalConnectionServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalConnectionServiceStatusResponse
       */
      Models::GetPhysicalConnectionServiceStatusResponse getPhysicalConnectionServiceStatusWithOptions(const Models::GetPhysicalConnectionServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether outbound data transfer billing is enabled for the current account.
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
       * @summary Queries the associations of a prefix list by calling the GetVpcPrefixListAssociations operation.
       *
       * @param request GetVpcPrefixListAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcPrefixListAssociationsResponse
       */
      Models::GetVpcPrefixListAssociationsResponse getVpcPrefixListAssociationsWithOptions(const Models::GetVpcPrefixListAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associations of a prefix list by calling the GetVpcPrefixListAssociations operation.
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
       * @summary Queries route types.
       *
       * @param request GetVpcRouteEntrySummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcRouteEntrySummaryResponse
       */
      Models::GetVpcRouteEntrySummaryResponse getVpcRouteEntrySummaryWithOptions(const Models::GetVpcRouteEntrySummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route types.
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
       * @summary Grants permissions to a CEN instance.
       *
       * @description - 在加载其他阿里云账号（主账号）的网络实例前，需要在网络实例所在的阿里云账号下为云企业网实例授权。
       * >**GrantInstanceToCen**接口是VPC的API，所以调用该接口需要使用`vpc.aliyuncs.com`域名。API version为`2016-04-28`。 
       * - **GrantInstanceToCen**接口不支持在同一个VPC、VBR或者CCN中并发为云企业网实例授权。
       *
       * @param request GrantInstanceToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCenWithOptions(const Models::GrantInstanceToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a CEN instance.
       *
       * @description - 在加载其他阿里云账号（主账号）的网络实例前，需要在网络实例所在的阿里云账号下为云企业网实例授权。
       * >**GrantInstanceToCen**接口是VPC的API，所以调用该接口需要使用`vpc.aliyuncs.com`域名。API version为`2016-04-28`。 
       * - **GrantInstanceToCen**接口不支持在同一个VPC、VBR或者CCN中并发为云企业网实例授权。
       *
       * @param request GrantInstanceToCenRequest
       * @return GrantInstanceToCenResponse
       */
      Models::GrantInstanceToCenResponse grantInstanceToCen(const Models::GrantInstanceToCenRequest &request);

      /**
       * @summary Calls the GrantInstanceToVbr operation to grant authorization of a VPC instance to a VBR instance for cross-account VBR uplink scenarios.
       *
       * @description When creating a cross-account VBR uplink connection, you must grant authorization of the VPC instance to the VBR instance.
       *
       * @param tmpReq GrantInstanceToVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbrWithOptions(const Models::GrantInstanceToVbrRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the GrantInstanceToVbr operation to grant authorization of a VPC instance to a VBR instance for cross-account VBR uplink scenarios.
       *
       * @description When creating a cross-account VBR uplink connection, you must grant authorization of the VPC instance to the VBR instance.
       *
       * @param request GrantInstanceToVbrRequest
       * @return GrantInstanceToVbrResponse
       */
      Models::GrantInstanceToVbrResponse grantInstanceToVbr(const Models::GrantInstanceToVbrRequest &request);

      /**
       * @summary Queries the access points for Express Connect circuits.
       *
       * @param request ListBusinessAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPointsWithOptions(const Models::ListBusinessAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access points for Express Connect circuits.
       *
       * @param request ListBusinessAccessPointsRequest
       * @return ListBusinessAccessPointsResponse
       */
      Models::ListBusinessAccessPointsResponse listBusinessAccessPoints(const Models::ListBusinessAccessPointsRequest &request);

      /**
       * @summary Queries the list of regions available for an Express Connect circuit.
       *
       * @param request ListBusinessRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessRegionsResponse
       */
      Models::ListBusinessRegionsResponse listBusinessRegionsWithOptions(const Models::ListBusinessRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions available for an Express Connect circuit.
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
       * @summary Queries the route entries in a gateway route table by calling the ListGatewayRouteTableEntries operation.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntriesWithOptions(const Models::ListGatewayRouteTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route entries in a gateway route table by calling the ListGatewayRouteTableEntries operation.
       *
       * @param request ListGatewayRouteTableEntriesRequest
       * @return ListGatewayRouteTableEntriesResponse
       */
      Models::ListGatewayRouteTableEntriesResponse listGatewayRouteTableEntries(const Models::ListGatewayRouteTableEntriesRequest &request);

      /**
       * @summary Queries the most recent region list.
       *
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
       * @summary Queries he connection features supported by a Express Connect circuit.
       *
       * @param request ListPhysicalConnectionFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhysicalConnectionFeaturesResponse
       */
      Models::ListPhysicalConnectionFeaturesResponse listPhysicalConnectionFeaturesWithOptions(const Models::ListPhysicalConnectionFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries he connection features supported by a Express Connect circuit.
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
       * @summary Queries CIDR blocks in an IP address pool.
       *
       * @param request ListPublicIpAddressPoolCidrBlocksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicIpAddressPoolCidrBlocksResponse
       */
      Models::ListPublicIpAddressPoolCidrBlocksResponse listPublicIpAddressPoolCidrBlocksWithOptions(const Models::ListPublicIpAddressPoolCidrBlocksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR blocks in an IP address pool.
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
       * @summary Query the list of tags that are bound to cloud resources.
       *
       * @description - You must specify at least the **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) parameter in the request to determine the query object.
       * - **Tag.N** is a tag of the resource, which consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the results contain resources that include all the specified key-value pairs.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of tags that are bound to cloud resources.
       *
       * @description - You must specify at least the **ResourceId.N** or **Tag.N** (**Tag.N.Key** and **Tag.N.Value**) parameter in the request to determine the query object.
       * - **Tag.N** is a tag of the resource, which consists of a key-value pair. If you specify only **Tag.N.Key**, all tag values associated with the specified tag key are returned. If you specify only **Tag.N.Value**, an error is returned.
       * - If you specify both **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, the results contain resources that include all the specified key-value pairs.
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
       * @summary Call the ListVirtualPhysicalConnections operation to query virtual physical connections.
       *
       * @param request ListVirtualPhysicalConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualPhysicalConnectionsResponse
       */
      Models::ListVirtualPhysicalConnectionsResponse listVirtualPhysicalConnectionsWithOptions(const Models::ListVirtualPhysicalConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListVirtualPhysicalConnections operation to query virtual physical connections.
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
       * @summary Query the route publishing status
       *
       * @param request ListVpcPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcPublishedRouteEntriesResponse
       */
      Models::ListVpcPublishedRouteEntriesResponse listVpcPublishedRouteEntriesWithOptions(const Models::ListVpcPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the route publishing status
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
       * @summary Calls the ModifyCommonBandwidthPackageSpec operation to modify the peak bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following information:
       * - **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After you send a request, the system returns a request ID, but the peak bandwidth of the Internet Shared Bandwidth instance has not been modified yet. The modification task is still running in the background. You can call [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the status of the Internet Shared Bandwidth instance.
       *     - If the Internet Shared Bandwidth instance is in the **Modifying** state, the peak bandwidth is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the Internet Shared Bandwidth instance is in the **Available** state, the peak bandwidth has been modified.
       * - **ModifyCommonBandwidthPackageSpec** does not support concurrent modifications to the peak bandwidth of the same Internet Shared Bandwidth instance.
       *
       * @param request ModifyCommonBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCommonBandwidthPackageSpecResponse
       */
      Models::ModifyCommonBandwidthPackageSpecResponse modifyCommonBandwidthPackageSpecWithOptions(const Models::ModifyCommonBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyCommonBandwidthPackageSpec operation to modify the peak bandwidth of an Internet Shared Bandwidth instance.
       *
       * @description Before you call this operation, take note of the following information:
       * - **ModifyCommonBandwidthPackageSpec** is an asynchronous operation. After you send a request, the system returns a request ID, but the peak bandwidth of the Internet Shared Bandwidth instance has not been modified yet. The modification task is still running in the background. You can call [DescribeCommonBandwidthPackages](https://help.aliyun.com/document_detail/120309.html) to query the status of the Internet Shared Bandwidth instance.
       *     - If the Internet Shared Bandwidth instance is in the **Modifying** state, the peak bandwidth is being modified. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the Internet Shared Bandwidth instance is in the **Available** state, the peak bandwidth has been modified.
       * - **ModifyCommonBandwidthPackageSpec** does not support concurrent modifications to the peak bandwidth of the same Internet Shared Bandwidth instance.
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
       * @summary Modifies the name, description, and bandwidth limit of a specified elastic IP address (EIP).
       *
       * @param request ModifyEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEipAddressAttributeResponse
       */
      Models::ModifyEipAddressAttributeResponse modifyEipAddressAttributeWithOptions(const Models::ModifyEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and bandwidth limit of a specified elastic IP address (EIP).
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
       * @summary Modifies an Express Connect Quality of Service (QoS) policy. You can also use this operation to associate dedicated Express Connect circuits.
       *
       * @description - Only dedicated Express Connect circuits that are in the Normal state and do not have overdue payments can be associated. Shared Express Connect circuit ports and Virtual Border Router (VBR) instances are not supported.
       * - When you associate dedicated Express Connect circuits, only full replacement is supported. To disassociate all circuits, pass an empty string.
       * - If a dedicated Express Connect circuit has shared Express Connect circuits or cross-account VBRs, you must be added to the whitelist before you can associate the circuit.
       * - The device on which the dedicated Express Connect circuit resides must support the QoS feature before the circuit can be associated.
       * - If a single VBR is associated with multiple Express Connect circuits, you must associate all Express Connect circuits of the VBR at the same time.
       *
       * @param request ModifyExpressConnectTrafficQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectTrafficQosResponse
       */
      Models::ModifyExpressConnectTrafficQosResponse modifyExpressConnectTrafficQosWithOptions(const Models::ModifyExpressConnectTrafficQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Express Connect Quality of Service (QoS) policy. You can also use this operation to associate dedicated Express Connect circuits.
       *
       * @description - Only dedicated Express Connect circuits that are in the Normal state and do not have overdue payments can be associated. Shared Express Connect circuit ports and Virtual Border Router (VBR) instances are not supported.
       * - When you associate dedicated Express Connect circuits, only full replacement is supported. To disassociate all circuits, pass an empty string.
       * - If a dedicated Express Connect circuit has shared Express Connect circuits or cross-account VBRs, you must be added to the whitelist before you can associate the circuit.
       * - The device on which the dedicated Express Connect circuit resides must support the QoS feature before the circuit can be associated.
       * - If a single VBR is associated with multiple Express Connect circuits, you must associate all Express Connect circuits of the VBR at the same time.
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
       * @description - **ModifyFlowLogAttribute**接口属于异步接口，即系统会返回一个请求ID，但该流日志尚未修改成功，系统后台的修改任务仍在进行。您可以调用[DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html)查询流日志的修改状态：
       *     - 当流日志处于**Modifying**状态时，表示流日志正在修改中。
       *     - 当流日志处于**Active**或者**Inactive**状态时，表示流日志修改成功。
       * - **ModifyFlowLogAttribute**接口不支持并发修改同一个流日志的属性。
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a flow log.
       *
       * @description - **ModifyFlowLogAttribute**接口属于异步接口，即系统会返回一个请求ID，但该流日志尚未修改成功，系统后台的修改任务仍在进行。您可以调用[DescribeFlowLogs](https://help.aliyun.com/document_detail/87923.html)查询流日志的修改状态：
       *     - 当流日志处于**Modifying**状态时，表示流日志正在修改中。
       *     - 当流日志处于**Active**或者**Inactive**状态时，表示流日志修改成功。
       * - **ModifyFlowLogAttribute**接口不支持并发修改同一个流日志的属性。
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies a specified DNAT entry.
       *
       * @description - **ModifyForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry has not been modified yet. The modification task runs in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being modified. In this state, you can only perform query operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry is modified.
       * - **ModifyForwardEntry** does not support concurrent modifications of a DNAT entry within the same DNAT table.
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specified DNAT entry.
       *
       * @description - **ModifyForwardEntry** is an asynchronous operation. After you send a request, the system returns a request ID, but the DNAT entry has not been modified yet. The modification task runs in the background. You can call [DescribeForwardTableEntries](https://help.aliyun.com/document_detail/36053.html) to query the status of the DNAT entry:
       *     - If the DNAT entry is in the **Pending** state, the DNAT entry is being modified. In this state, you can only perform query operations.
       *     - If the DNAT entry is in the **Available** state, the DNAT entry is modified.
       * - **ModifyForwardEntry** does not support concurrent modifications of a DNAT entry within the same DNAT table.
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
       * @description **ModifyHaVipAttribute**不支持并发修改同一个HaVip的名称和描述。
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a high-availability virtual IP address (HaVip).
       *
       * @description **ModifyHaVipAttribute**不支持并发修改同一个HaVip的名称和描述。
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
       * @summary Calls the ModifyRouteEntry operation to modify the name, description, and next hop of a custom route entry.
       *
       * @description - The **ModifyRouteEntry** operation does not support concurrent modifications to the name and description of the same custom route entry.
       * - The **ModifyRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry as appropriate.
       *
       * @param request ModifyRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntryWithOptions(const Models::ModifyRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyRouteEntry operation to modify the name, description, and next hop of a custom route entry.
       *
       * @description - The **ModifyRouteEntry** operation does not support concurrent modifications to the name and description of the same custom route entry.
       * - The **ModifyRouteEntry** operation may return the **TaskConflict** error code in concurrent scenarios. Retry as appropriate.
       *
       * @param request ModifyRouteEntryRequest
       * @return ModifyRouteEntryResponse
       */
      Models::ModifyRouteEntryResponse modifyRouteEntry(const Models::ModifyRouteEntryRequest &request);

      /**
       * @summary Modifies the name and description of a route table.
       *
       * @description **ModifyRouteTableAttributes**接口不支持并发修改同一个路由表的属性，如名称、描述，或是否接收动态路由。
       * 当调用**ModifyRouteTableAttributes**接口开启或关闭传播路由时，请注意：
       * - 开启或者关闭传播路由操作是异步操作。
       * - 开启或者关闭传播路由操作的完成时间与传播路由数量相关。
       *
       * @param request ModifyRouteTableAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteTableAttributesResponse
       */
      Models::ModifyRouteTableAttributesResponse modifyRouteTableAttributesWithOptions(const Models::ModifyRouteTableAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a route table.
       *
       * @description **ModifyRouteTableAttributes**接口不支持并发修改同一个路由表的属性，如名称、描述，或是否接收动态路由。
       * 当调用**ModifyRouteTableAttributes**接口开启或关闭传播路由时，请注意：
       * - 开启或者关闭传播路由操作是异步操作。
       * - 开启或者关闭传播路由操作的完成时间与传播路由数量相关。
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
       * @summary Modifies the specification of a router interface by calling the ModifyRouterInterfaceSpec operation.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state. 
       *       
       * > You cannot modify the specification of a router interface that has an overdue payment.
       *
       * @param request ModifyRouterInterfaceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouterInterfaceSpecResponse
       */
      Models::ModifyRouterInterfaceSpecResponse modifyRouterInterfaceSpecWithOptions(const Models::ModifyRouterInterfaceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specification of a router interface by calling the ModifyRouterInterfaceSpec operation.
       *
       * @description After you call this operation, the router interface enters the **Activating** state. After the router interface is activated, it enters the **Active** state. 
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
       * - If the SNAT entry is in the **Available** state, the SNAT entry has been modified.
       * > If any SNAT entry in an SNAT table is in the **Pending** state, you cannot modify SNAT entries in the SNAT table.
       * The **ModifySnatEntry** operation does not support concurrent modifications of a specified SNAT entry within the same SNAT entry instance.
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
       * - If the SNAT entry is in the **Available** state, the SNAT entry has been modified.
       * > If any SNAT entry in an SNAT table is in the **Pending** state, you cannot modify SNAT entries in the SNAT table.
       * The **ModifySnatEntry** operation does not support concurrent modifications of a specified SNAT entry within the same SNAT entry instance.
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
       * @summary Calls the ModifySslVpnServer operation to modify the configuration of an SSL-VPN server.
       *
       * @description - If you want to enable two-factor authentication for the SSL server, first make sure the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * - When only the **Name** of the SSL-VPN server is modified, this operation is synchronous. If configurations other than **Name** are also modified, this operation is asynchronous.
       * - When the **ModifySslVpnServer** operation is asynchronous, the system first returns a request ID, but the configuration of the SSL-VPN server has not been modified yet, and the modification task is still in progress in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the VPN gateway instance associated with the SSL-VPN server to confirm the modification status of the SSL-VPN server configuration:
       *     - When the VPN gateway instance is in the **updating** state, the configuration of the SSL-VPN server is being modified.
       *     - When the VPN gateway instance is in the **active** state, the configuration of the SSL-VPN server has been modified successfully.
       * - The **ModifySslVpnServer** operation does not support concurrent modification of SSL-VPN server configurations under the same VPN gateway.
       *
       * @param request ModifySslVpnServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServerWithOptions(const Models::ModifySslVpnServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifySslVpnServer operation to modify the configuration of an SSL-VPN server.
       *
       * @description - If you want to enable two-factor authentication for the SSL server, first make sure the VPN gateway instance supports this feature. You may need to upgrade the VPN gateway instance. For more information, see [SSL-VPN two-factor authentication supports IDaaS EIAM 2.0](https://help.aliyun.com/document_detail/2785320.html).
       * - When only the **Name** of the SSL-VPN server is modified, this operation is synchronous. If configurations other than **Name** are also modified, this operation is asynchronous.
       * - When the **ModifySslVpnServer** operation is asynchronous, the system first returns a request ID, but the configuration of the SSL-VPN server has not been modified yet, and the modification task is still in progress in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) operation to query the status of the VPN gateway instance associated with the SSL-VPN server to confirm the modification status of the SSL-VPN server configuration:
       *     - When the VPN gateway instance is in the **updating** state, the configuration of the SSL-VPN server is being modified.
       *     - When the VPN gateway instance is in the **active** state, the configuration of the SSL-VPN server has been modified successfully.
       * - The **ModifySslVpnServer** operation does not support concurrent modification of SSL-VPN server configurations under the same VPN gateway.
       *
       * @param request ModifySslVpnServerRequest
       * @return ModifySslVpnServerResponse
       */
      Models::ModifySslVpnServerResponse modifySslVpnServer(const Models::ModifySslVpnServerRequest &request);

      /**
       * @summary Calls the ModifyTunnelAttribute operation to modify the tunnel configuration of a highly available VPN gateway.
       *
       * @param request ModifyTunnelAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTunnelAttributeResponse
       */
      Models::ModifyTunnelAttributeResponse modifyTunnelAttributeWithOptions(const Models::ModifyTunnelAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyTunnelAttribute operation to modify the tunnel configuration of a highly available VPN gateway.
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
       * @summary Modifies the name, description, and IPv6 settings of a vSwitch.
       *
       * @description - **ModifyVSwitchAttribute**接口属于异步接口，即系统会返回一个请求ID，但该交换机的配置信息尚未修改成功，系统后台的修改任务仍在进行。您可以调用[DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html)查询交换机的修改状态：
       *     - 当交换机的状态处于**Pending**状态时，表示交换机的配置信息正在修改中。
       *     - 当交换机状态处于**Available**状态时，表示交换机可用。
       * - **ModifyVSwitchAttribute**接口不支持并发修改同一个交换机的配置信息。
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and IPv6 settings of a vSwitch.
       *
       * @description - **ModifyVSwitchAttribute**接口属于异步接口，即系统会返回一个请求ID，但该交换机的配置信息尚未修改成功，系统后台的修改任务仍在进行。您可以调用[DescribeVSwitchAttributes](https://help.aliyun.com/document_detail/94567.html)查询交换机的修改状态：
       *     - 当交换机的状态处于**Pending**状态时，表示交换机的配置信息正在修改中。
       *     - 当交换机状态处于**Available**状态时，表示交换机可用。
       * - **ModifyVSwitchAttribute**接口不支持并发修改同一个交换机的配置信息。
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @summary Modify the name and description of a reserved CIDR block for a vSwitch.
       *
       * @description The **ModifyVSwitchCidrReservationAttribute** API does not support concurrent modification of the name and description of a reserved CIDR block within the same vSwitch.
       *
       * @param request ModifyVSwitchCidrReservationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchCidrReservationAttributeResponse
       */
      Models::ModifyVSwitchCidrReservationAttributeResponse modifyVSwitchCidrReservationAttributeWithOptions(const Models::ModifyVSwitchCidrReservationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the name and description of a reserved CIDR block for a vSwitch.
       *
       * @description The **ModifyVSwitchCidrReservationAttribute** API does not support concurrent modification of the name and description of a reserved CIDR block within the same vSwitch.
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
       * @summary You can invoke the ModifyVirtualBorderRouterAttribute API to modify the configuration of a virtual border router (VBR).
       *
       * @description * **VlanId** can only be modified by the owner of the Express Connect circuit.
       * * The same VLAN ID under the same Express Connect circuit cannot be used by two VBRs simultaneously.
       * * A VBR in the **terminated** status retains its VLAN ID exclusively for 7 days, during which no other VBR can use it. After 7 days, the VLAN ID becomes available for other VBRs.
       * * VBR instances owned by other accounts cannot configure **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask**.
       * * **PeeringSubnetMask** supports subnet masks from /24 to /30 (255.255.255.0 to 255.255.255.252).
       * * **LocalGatewayIp** and **PeerGatewayIp** must belong to the same network segment. For example: LocalGatewayIp: 192.168.XX.XX, PeerGatewayIp: 192.168.XX.XX, PeeringSubnetMask: 255.255.255.248.
       *
       * @param request ModifyVirtualBorderRouterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualBorderRouterAttributeResponse
       */
      Models::ModifyVirtualBorderRouterAttributeResponse modifyVirtualBorderRouterAttributeWithOptions(const Models::ModifyVirtualBorderRouterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the ModifyVirtualBorderRouterAttribute API to modify the configuration of a virtual border router (VBR).
       *
       * @description * **VlanId** can only be modified by the owner of the Express Connect circuit.
       * * The same VLAN ID under the same Express Connect circuit cannot be used by two VBRs simultaneously.
       * * A VBR in the **terminated** status retains its VLAN ID exclusively for 7 days, during which no other VBR can use it. After 7 days, the VLAN ID becomes available for other VBRs.
       * * VBR instances owned by other accounts cannot configure **LocalGatewayIp**, **PeerGatewayIp**, or **PeeringSubnetMask**.
       * * **PeeringSubnetMask** supports subnet masks from /24 to /30 (255.255.255.0 to 255.255.255.252).
       * * **LocalGatewayIp** and **PeerGatewayIp** must belong to the same network segment. For example: LocalGatewayIp: 192.168.XX.XX, PeerGatewayIp: 192.168.XX.XX, PeeringSubnetMask: 255.255.255.248.
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
       * @description - **ModifyVpcPrefixList**接口属于异步接口，即系统返回一个请求ID，但该前缀列表实例的配置信息尚未修改成功，系统后台的修改任务仍在进行。您可以调用[ListPrefixLists](https://help.aliyun.com/document_detail/311535.html)查询前缀列表实例的状态。
       *     - 当前缀列表实例处于**Modifying**状态时，表示前缀列表实例的配置信息正在修改中。
       *     - 当前缀列表实例处于**Created**状态时，表示前缀列表实例的配置信息修改成功。
       *     - 前缀列表实例的配置信息修改成功后，您可以调用[GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html)接口查询前缀列表的关联关系来确定关联的资源是否使用的是修改后的CIDR地址块，当前缀列表的关联状态即**Status**参数取值为**Created**时，表示关联的资源使用的CIDR地址块为修改后的CIDR地址块。
       * - **ModifyVpcPrefixList**接口不支持并发修改同一个前缀列表实例的配置信息。
       *
       * @param request ModifyVpcPrefixListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcPrefixListResponse
       */
      Models::ModifyVpcPrefixListResponse modifyVpcPrefixListWithOptions(const Models::ModifyVpcPrefixListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a prefix list.
       *
       * @description - **ModifyVpcPrefixList**接口属于异步接口，即系统返回一个请求ID，但该前缀列表实例的配置信息尚未修改成功，系统后台的修改任务仍在进行。您可以调用[ListPrefixLists](https://help.aliyun.com/document_detail/311535.html)查询前缀列表实例的状态。
       *     - 当前缀列表实例处于**Modifying**状态时，表示前缀列表实例的配置信息正在修改中。
       *     - 当前缀列表实例处于**Created**状态时，表示前缀列表实例的配置信息修改成功。
       *     - 前缀列表实例的配置信息修改成功后，您可以调用[GetVpcPrefixListAssociations](https://help.aliyun.com/document_detail/445478.html)接口查询前缀列表的关联关系来确定关联的资源是否使用的是修改后的CIDR地址块，当前缀列表的关联状态即**Status**参数取值为**Created**时，表示关联的资源使用的CIDR地址块为修改后的CIDR地址块。
       * - **ModifyVpcPrefixList**接口不支持并发修改同一个前缀列表实例的配置信息。
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
       * @summary Modifies the weight and policy priority of a policy-based route by calling the ModifyVpnPbrRouteEntryAttribute operation.
       *
       * @description - **ModifyVpnPbrRouteEntryAttribute** is used to modify both the weight and policy priority of a policy-based route that supports policy priority.
       *     - To modify only the weight of a policy-based route, call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation.
       *     - To modify only the policy priority of a policy-based route, call the [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html) operation.
       *     - If your policy-based route does not support policy priority, you can only call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation to modify the weight of the policy-based route.
       *   > For VPN gateway instances that support dual-tunnel mode IPsec-VPN connections, you can only call this operation to modify the priority of policy-based routes.
       * - **ModifyVpnPbrRouteEntryAttribute** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based route has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been modified.
       * - **ModifyVpnPbrRouteEntryAttribute** does not support concurrent modifications of policy-based routes under the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttributeWithOptions(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight and policy priority of a policy-based route by calling the ModifyVpnPbrRouteEntryAttribute operation.
       *
       * @description - **ModifyVpnPbrRouteEntryAttribute** is used to modify both the weight and policy priority of a policy-based route that supports policy priority.
       *     - To modify only the weight of a policy-based route, call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation.
       *     - To modify only the policy priority of a policy-based route, call the [ModifyVpnPbrRouteEntryPriority](https://help.aliyun.com/document_detail/466870.html) operation.
       *     - If your policy-based route does not support policy priority, you can only call the [ModifyVpnPbrRouteEntryWeight](https://help.aliyun.com/document_detail/127249.html) operation to modify the weight of the policy-based route.
       *   > For VPN gateway instances that support dual-tunnel mode IPsec-VPN connections, you can only call this operation to modify the priority of policy-based routes.
       * - **ModifyVpnPbrRouteEntryAttribute** is an asynchronous operation. After you send a request, the system returns a request ID, but the policy-based route has not been modified yet. The modification node is still running in the background. You can invoke the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the instance status of the VPN gateway to determine the modification status of the policy-based routing:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route has been modified.
       * - **ModifyVpnPbrRouteEntryAttribute** does not support concurrent modifications of policy-based routes under the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryAttributeRequest
       * @return ModifyVpnPbrRouteEntryAttributeResponse
       */
      Models::ModifyVpnPbrRouteEntryAttributeResponse modifyVpnPbrRouteEntryAttribute(const Models::ModifyVpnPbrRouteEntryAttributeRequest &request);

      /**
       * @summary Calls the ModifyVpnPbrRouteEntryPriority operation to modify the priority of a policy-based route.
       *
       * @description - The **ModifyVpnPbrRouteEntryPriority** operation is asynchronous. After you send the request, the system returns a request ID, but the policy-based route has not been modified yet. The modification task is still running in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway instance to determine the modification status of the policy-based route:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route is modified.
       * - The **ModifyVpnPbrRouteEntryPriority** operation does not support concurrent modifications to policy-based routes of the same VPN gateway instance.
       *
       * @param request ModifyVpnPbrRouteEntryPriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpnPbrRouteEntryPriorityResponse
       */
      Models::ModifyVpnPbrRouteEntryPriorityResponse modifyVpnPbrRouteEntryPriorityWithOptions(const Models::ModifyVpnPbrRouteEntryPriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyVpnPbrRouteEntryPriority operation to modify the priority of a policy-based route.
       *
       * @description - The **ModifyVpnPbrRouteEntryPriority** operation is asynchronous. After you send the request, the system returns a request ID, but the policy-based route has not been modified yet. The modification task is still running in the background. You can call the [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) operation to query the status of the VPN gateway instance to determine the modification status of the policy-based route:
       *     - If the VPN gateway instance is in the **updating** state, the policy-based route is being modified.
       *     - If the VPN gateway instance is in the **active** state, the policy-based route is modified.
       * - The **ModifyVpnPbrRouteEntryPriority** operation does not support concurrent modifications to policy-based routes of the same VPN gateway instance.
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
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications of the resource group for Express Connect circuit resources within the same Express Connect circuit instance.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications of the resource group for Express Connect circuit resources within the same Express Connect circuit instance.
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
       * @summary Calls the OpenPublicIpAddressPoolService operation to activate the IP address pool feature.
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
       * @summary Calls the OpenPublicIpAddressPoolService operation to activate the IP address pool feature.
       *
       * @description - The **OpenPublicIpAddressPoolService** operation does not support concurrent activation of the IP address pool feature within the same Alibaba Cloud account.
       * - You can call the GetPublicIpAddressPoolServiceStatu operation to query the activation status of the IP address pool feature.
       *
       * @param request OpenPublicIpAddressPoolServiceRequest
       * @return OpenPublicIpAddressPoolServiceResponse
       */
      Models::OpenPublicIpAddressPoolServiceResponse openPublicIpAddressPoolService(const Models::OpenPublicIpAddressPoolServiceRequest &request);

      /**
       * @summary Enables traffic mirror.
       *
       * @description 流量镜像功能是按照地域粒度开通，**OpenTrafficMirrorService**接口不支持在同一个地域内并发开通流量镜像功能。
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorServiceWithOptions(const Models::OpenTrafficMirrorServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables traffic mirror.
       *
       * @description 流量镜像功能是按照地域粒度开通，**OpenTrafficMirrorService**接口不支持在同一个地域内并发开通流量镜像功能。
       *
       * @param request OpenTrafficMirrorServiceRequest
       * @return OpenTrafficMirrorServiceResponse
       */
      Models::OpenTrafficMirrorServiceResponse openTrafficMirrorService(const Models::OpenTrafficMirrorServiceRequest &request);

      /**
       * @summary Publish VPC Routes
       *
       * @param request PublishVpcRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntriesWithOptions(const Models::PublishVpcRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publish VPC Routes
       *
       * @param request PublishVpcRouteEntriesRequest
       * @return PublishVpcRouteEntriesResponse
       */
      Models::PublishVpcRouteEntriesResponse publishVpcRouteEntries(const Models::PublishVpcRouteEntriesRequest &request);

      /**
       * @summary Calls the PublishVpnRouteEntry operation to publish destination routes or policy routes to the system route table of a VPC, or withdraw published destination routes or policy routes from the VPC system route table.
       *
       * @param request PublishVpnRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntryWithOptions(const Models::PublishVpnRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the PublishVpnRouteEntry operation to publish destination routes or policy routes to the system route table of a VPC, or withdraw published destination routes or policy routes from the VPC system route table.
       *
       * @param request PublishVpnRouteEntryRequest
       * @return PublishVpnRouteEntryResponse
       */
      Models::PublishVpnRouteEntryResponse publishVpnRouteEntry(const Models::PublishVpnRouteEntryRequest &request);

      /**
       * @summary Recovers access to an Express Connect circuit by calling the RecoverPhysicalConnection operation.
       *
       * @description ### Operation description
       * You can call the RecoverPhysicalConnection operation to recover access to an Express Connect circuit that has been terminated. Currently, only shared Express Connect circuits can be recovered.
       *
       * @param request RecoverPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverPhysicalConnectionResponse
       */
      Models::RecoverPhysicalConnectionResponse recoverPhysicalConnectionWithOptions(const Models::RecoverPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers access to an Express Connect circuit by calling the RecoverPhysicalConnection operation.
       *
       * @description ### Operation description
       * You can call the RecoverPhysicalConnection operation to recover access to an Express Connect circuit that has been terminated. Currently, only shared Express Connect circuits can be recovered.
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
       * @summary Releases a contiguous Elastic IP Address (EIP) group by calling ReleaseEipSegmentAddress.
       *
       * @description - The **ReleaseEipSegmentAddress** operation releases all EIPs in a contiguous EIP group.
       * - Before you call **ReleaseEipSegmentAddress**, make sure that:
       *      - All EIPs in the contiguous EIP group are in the unassociated state. To disassociate an EIP from a cloud resource, call [UnassociateEipAddress](https://help.aliyun.com/document_detail/2518066.html).
       *      - All EIPs in the contiguous EIP group are not added to an Internet Shared Bandwidth instance. To remove an EIP from an Internet Shared Bandwidth instance, call [RemoveCommonBandwidthPackageIp](https://help.aliyun.com/document_detail/2518602.html).
       * -  **ReleaseEipSegmentAddress** is an asynchronous operation. After you send a request, the system returns a request ID, but the contiguous EIP group is not yet released. The release task continues to run in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group: 
       *     - If the contiguous EIP group is in the **Releasing** state, the EIPs are being released. In this state, you can only perform query operations.
       *     - If the contiguous EIP group cannot be found, the EIPs have been released.
       * - **ReleaseEipSegmentAddress** does not support concurrent release of the same contiguous EIP group.
       *
       * @param request ReleaseEipSegmentAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseEipSegmentAddressResponse
       */
      Models::ReleaseEipSegmentAddressResponse releaseEipSegmentAddressWithOptions(const Models::ReleaseEipSegmentAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a contiguous Elastic IP Address (EIP) group by calling ReleaseEipSegmentAddress.
       *
       * @description - The **ReleaseEipSegmentAddress** operation releases all EIPs in a contiguous EIP group.
       * - Before you call **ReleaseEipSegmentAddress**, make sure that:
       *      - All EIPs in the contiguous EIP group are in the unassociated state. To disassociate an EIP from a cloud resource, call [UnassociateEipAddress](https://help.aliyun.com/document_detail/2518066.html).
       *      - All EIPs in the contiguous EIP group are not added to an Internet Shared Bandwidth instance. To remove an EIP from an Internet Shared Bandwidth instance, call [RemoveCommonBandwidthPackageIp](https://help.aliyun.com/document_detail/2518602.html).
       * -  **ReleaseEipSegmentAddress** is an asynchronous operation. After you send a request, the system returns a request ID, but the contiguous EIP group is not yet released. The release task continues to run in the background. You can call [DescribeEipSegment](https://help.aliyun.com/document_detail/156063.html) to query the status of the contiguous EIP group: 
       *     - If the contiguous EIP group is in the **Releasing** state, the EIPs are being released. In this state, you can only perform query operations.
       *     - If the contiguous EIP group cannot be found, the EIPs have been released.
       * - **ReleaseEipSegmentAddress** does not support concurrent release of the same contiguous EIP group.
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
       * @summary Invoke the RemoveGlobalAccelerationInstanceIp API to remove an elastic IP address (EIP) from a bandwidth-sharing instance.
       *
       * @param request RemoveGlobalAccelerationInstanceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGlobalAccelerationInstanceIpResponse
       */
      Models::RemoveGlobalAccelerationInstanceIpResponse removeGlobalAccelerationInstanceIpWithOptions(const Models::RemoveGlobalAccelerationInstanceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the RemoveGlobalAccelerationInstanceIp API to remove an elastic IP address (EIP) from a bandwidth-sharing instance.
       *
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
       * @description - **RemoveSourcesFromTrafficMirrorSession**接口属于异步接口，即系统返回一个请求ID，但该镜像源尚未删除成功，系统后台的删除任务仍在进行。您可以调用[ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html)查询镜像会话的状态：
       *     - 当镜像会话处于**Modifying**状态时，表示镜像源正在删除中。
       *     - 当镜像会话处于**Created**状态时，表示镜像源删除成功。
       * - **RemoveSourcesFromTrafficMirrorSession**接口不支持并发删除同一个镜像会话中的镜像源。
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSessionWithOptions(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic mirror source from a traffic mirror session.
       *
       * @description - **RemoveSourcesFromTrafficMirrorSession**接口属于异步接口，即系统返回一个请求ID，但该镜像源尚未删除成功，系统后台的删除任务仍在进行。您可以调用[ListTrafficMirrorSessions](https://help.aliyun.com/document_detail/261367.html)查询镜像会话的状态：
       *     - 当镜像会话处于**Modifying**状态时，表示镜像源正在删除中。
       *     - 当镜像会话处于**Created**状态时，表示镜像源删除成功。
       * - **RemoveSourcesFromTrafficMirrorSession**接口不支持并发删除同一个镜像会话中的镜像源。
       *
       * @param request RemoveSourcesFromTrafficMirrorSessionRequest
       * @return RemoveSourcesFromTrafficMirrorSessionResponse
       */
      Models::RemoveSourcesFromTrafficMirrorSessionResponse removeSourcesFromTrafficMirrorSession(const Models::RemoveSourcesFromTrafficMirrorSessionRequest &request);

      /**
       * @summary Replaces the DHCP options set that is associated with a virtual private cloud (VPC).
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
       * @summary Replaces the DHCP options set that is associated with a virtual private cloud (VPC).
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
       * @description - **RevokeInstanceFromCen**接口是VPC的API，所以调用该接口必须使用`vpc.aliyuncs.com`域名。API version为`2016-04-28`。
       * - **RevokeInstanceFromCen**接口不支持在同一个VPC、VBR或者CCN中并发撤销网络实例对指定云企业网实例的授权。
       *
       * @param request RevokeInstanceFromCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromCenResponse
       */
      Models::RevokeInstanceFromCenResponse revokeInstanceFromCenWithOptions(const Models::RevokeInstanceFromCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions granted to a Cloud Enterprise Network (CEN) instance on a network instance.
       *
       * @description - **RevokeInstanceFromCen**接口是VPC的API，所以调用该接口必须使用`vpc.aliyuncs.com`域名。API version为`2016-04-28`。
       * - **RevokeInstanceFromCen**接口不支持在同一个VPC、VBR或者CCN中并发撤销网络实例对指定云企业网实例的授权。
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
       * @summary Calls the StartFailoverTestJob operation to start an Express Connect failover test job.
       *
       * @description You can start only failover test jobs that are in the **Pending** state.
       *
       * @param request StartFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJobWithOptions(const Models::StartFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the StartFailoverTestJob operation to start an Express Connect failover test job.
       *
       * @description You can start only failover test jobs that are in the **Pending** state.
       *
       * @param request StartFailoverTestJobRequest
       * @return StartFailoverTestJobResponse
       */
      Models::StartFailoverTestJobResponse startFailoverTestJob(const Models::StartFailoverTestJobRequest &request);

      /**
       * @summary Terminates a failover test.
       *
       * @description 只支持结束处于**演练中**状态的故障演练任务。
       *
       * @param request StopFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopFailoverTestJobResponse
       */
      Models::StopFailoverTestJobResponse stopFailoverTestJobWithOptions(const Models::StopFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a failover test.
       *
       * @description 只支持结束处于**演练中**状态的故障演练任务。
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
       * @summary Creates and binds tags to specified Express Connect circuit instances by calling the TagResourcesForExpressConnect operation.
       *
       * @description Tags are labels that you assign to instances. Each tag consists of a key-value pair. Take note of the following items when you use tags: 
       * - The tag key of each tag on an instance must be unique.
       * - Tags cannot exist without being bound to an instance. Empty tags that are not bound to instances are not supported.
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
       * @summary Creates and binds tags to specified Express Connect circuit instances by calling the TagResourcesForExpressConnect operation.
       *
       * @description Tags are labels that you assign to instances. Each tag consists of a key-value pair. Take note of the following items when you use tags: 
       * - The tag key of each tag on an instance must be unique.
       * - Tags cannot exist without being bound to an instance. Empty tags that are not bound to instances are not supported.
       * - Tag information is not shared across regions. 
       *     For example, tags created in the China (Hangzhou) region are not visible in the China (Shanghai) region.
       * - You can bind up to 20 tags to a single instance. Before binding tags, Alibaba Cloud checks the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
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
       * @description 在调用本接口将HaVip与专有网络ECS实例或弹性网卡解绑时，请注意： 
       * - 要解绑的ECS实例的状态必须为**运行中**或**停止**。 
       * - 要解绑的HaVip状态必须为**Available**或**InUse**。
       * - **UnassociateHaVip**接口属于异步接口，即系统会返回一个请求ID，但该HaVip尚未解绑成功，系统后台的解绑任务仍在进行。您可以调用[DescribeHaVips](https://help.aliyun.com/document_detail/114611.html)查询HaVip的解绑状态：
       *     - 当HaVip处于**Unassociating**状态时，表示HaVip正在解绑中。
       *     - 当HaVip处于**Inuse**或者**Available**状态时，表示HaVip解绑成功。
       * - **UnassociateHaVip**接口不支持并发解绑同一个HaVip。
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a high-availability virtual IP address (HaVip) from an Elastic Compute Service (ECS) in a virtual private cloud (VPC) or from an elastic network interface (ENI).
       *
       * @description 在调用本接口将HaVip与专有网络ECS实例或弹性网卡解绑时，请注意： 
       * - 要解绑的ECS实例的状态必须为**运行中**或**停止**。 
       * - 要解绑的HaVip状态必须为**Available**或**InUse**。
       * - **UnassociateHaVip**接口属于异步接口，即系统会返回一个请求ID，但该HaVip尚未解绑成功，系统后台的解绑任务仍在进行。您可以调用[DescribeHaVips](https://help.aliyun.com/document_detail/114611.html)查询HaVip的解绑状态：
       *     - 当HaVip处于**Unassociating**状态时，表示HaVip正在解绑中。
       *     - 当HaVip处于**Inuse**或者**Available**状态时，表示HaVip解绑成功。
       * - **UnassociateHaVip**接口不支持并发解绑同一个HaVip。
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
       * @description - 删除VPC的附加网段前，请先删除以附加网段创建的交换机。更多信息，请参见[DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html)。
       * - **UnassociateVpcCidrBlock**接口不支持在同一个VPC下并发删除附加网段。
       *
       * @param request UnassociateVpcCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateVpcCidrBlockResponse
       */
      Models::UnassociateVpcCidrBlockResponse unassociateVpcCidrBlockWithOptions(const Models::UnassociateVpcCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a secondary CIDR block from a virtual private cloud (VPC).
       *
       * @description - 删除VPC的附加网段前，请先删除以附加网段创建的交换机。更多信息，请参见[DeleteVSwitch](https://help.aliyun.com/document_detail/35746.html)。
       * - **UnassociateVpcCidrBlock**接口不支持在同一个VPC下并发删除附加网段。
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
       * @summary Modifies the configuration of a DHCP options set.
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttributeWithOptions(const Models::UpdateDhcpOptionsSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a DHCP options set.
       *
       * @param request UpdateDhcpOptionsSetAttributeRequest
       * @return UpdateDhcpOptionsSetAttributeResponse
       */
      Models::UpdateDhcpOptionsSetAttributeResponse updateDhcpOptionsSetAttribute(const Models::UpdateDhcpOptionsSetAttributeRequest &request);

      /**
       * @summary Call UpdateEnhancedVpnGateway to modify the name, description, or automatic route propagation of an enhanced VPN gateway.
       *
       * @description - **UpdateEnhancedVpnGateway** is an asynchronous API. A call returns information about the Enhanced VPN Gateway, but the configuration is updated in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to check the status of the update:
       *   - If the Enhanced VPN Gateway\\"s status is **updating**, the configuration update is in progress.
       *   - If the Enhanced VPN Gateway\\"s status is **active**, the configuration update is complete.
       * - **UpdateEnhancedVpnGateway** does not support concurrent updates on the same Enhanced VPN Gateway.
       *
       * @param request UpdateEnhancedVpnGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnhancedVpnGatewayResponse
       */
      Models::UpdateEnhancedVpnGatewayResponse updateEnhancedVpnGatewayWithOptions(const Models::UpdateEnhancedVpnGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateEnhancedVpnGateway to modify the name, description, or automatic route propagation of an enhanced VPN gateway.
       *
       * @description - **UpdateEnhancedVpnGateway** is an asynchronous API. A call returns information about the Enhanced VPN Gateway, but the configuration is updated in the background. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/73720.html) to check the status of the update:
       *   - If the Enhanced VPN Gateway\\"s status is **updating**, the configuration update is in progress.
       *   - If the Enhanced VPN Gateway\\"s status is **active**, the configuration update is complete.
       * - **UpdateEnhancedVpnGateway** does not support concurrent updates on the same Enhanced VPN Gateway.
       *
       * @param request UpdateEnhancedVpnGatewayRequest
       * @return UpdateEnhancedVpnGatewayResponse
       */
      Models::UpdateEnhancedVpnGatewayResponse updateEnhancedVpnGateway(const Models::UpdateEnhancedVpnGatewayRequest &request);

      /**
       * @summary Updates a failover test.
       *
       * @description 只支持更新处于**待演练**状态的故障演练任务。
       *
       * @param request UpdateFailoverTestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFailoverTestJobResponse
       */
      Models::UpdateFailoverTestJobResponse updateFailoverTestJobWithOptions(const Models::UpdateFailoverTestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a failover test.
       *
       * @description 只支持更新处于**待演练**状态的故障演练任务。
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
       * @description - **UpdateNetworkAclEntries**接口属于异步接口，即系统返回一个请求ID，但该网络ACL规则尚未更新成功，系统后台的更新任务仍在进行。您可以调用[DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html)查询网络ACL规则的更新状态：
       *     - 当网络ACL规则处于**Modifying**状态时，表示网络ACL规则正在更新中。
       *     - 当网络ACL规则处于**Available**状态时，表示网络ACL规则更新成功。
       * - **UpdateNetworkAclEntries**接口不支持并发更新同一个网络ACL规则。
       *
       * @param request UpdateNetworkAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAclEntriesResponse
       */
      Models::UpdateNetworkAclEntriesResponse updateNetworkAclEntriesWithOptions(const Models::UpdateNetworkAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rules of a network access control list (ACL).
       *
       * @description - **UpdateNetworkAclEntries**接口属于异步接口，即系统返回一个请求ID，但该网络ACL规则尚未更新成功，系统后台的更新任务仍在进行。您可以调用[DescribeNetworkAclAttributes](https://help.aliyun.com/document_detail/116542.html)查询网络ACL规则的更新状态：
       *     - 当网络ACL规则处于**Modifying**状态时，表示网络ACL规则正在更新中。
       *     - 当网络ACL规则处于**Available**状态时，表示网络ACL规则更新成功。
       * - **UpdateNetworkAclEntries**接口不支持并发更新同一个网络ACL规则。
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
       * @summary Updates the information of a route target group instance, including the name, description, and disabled members.
       *
       * @description - **UpdateRouteTargetGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the route target group has not been updated yet. The update task is still running in the background. You can call ListRouteTargetGroup to query the update status of the route target group:
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
       * @description - **UpdateRouteTargetGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the route target group has not been updated yet. The update task is still running in the background. You can call ListRouteTargetGroup to query the update status of the route target group:
       *     - If the route target group is in the **Updating** state, the route target group is being updated.
       *     - If the route target group is in the **Available**, **Unavailable**, **Switched**, or **Abnormal** state, the route target group has been updated.
       *
       * @param request UpdateRouteTargetGroupRequest
       * @return UpdateRouteTargetGroupResponse
       */
      Models::UpdateRouteTargetGroupResponse updateRouteTargetGroup(const Models::UpdateRouteTargetGroupRequest &request);

      /**
       * @summary Modifies the configuration of a filter for traffic mirror.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttributeWithOptions(const Models::UpdateTrafficMirrorFilterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a filter for traffic mirror.
       *
       * @param request UpdateTrafficMirrorFilterAttributeRequest
       * @return UpdateTrafficMirrorFilterAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterAttributeResponse updateTrafficMirrorFilterAttribute(const Models::UpdateTrafficMirrorFilterAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an inbound or outbound rule for traffic mirror.
       *
       * @description - The **UpdateTrafficMirrorFilterRuleAttribute** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of an inbound or outbound rule:
       *   - If the rule is in the **Modifying** state, the rule is being modified.
       *   - If the rule is in the **Created** state, the rule is modified.
       * - You cannot repeatedly call the **UpdateTrafficMirrorFilterRuleAttribute** operation to modify an inbound or outbound rule within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttributeWithOptions(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an inbound or outbound rule for traffic mirror.
       *
       * @description - The **UpdateTrafficMirrorFilterRuleAttribute** operation is asynchronous. After you send the request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListTrafficMirrorFilters](https://help.aliyun.com/document_detail/261353.html) operation to query the status of an inbound or outbound rule:
       *   - If the rule is in the **Modifying** state, the rule is being modified.
       *   - If the rule is in the **Created** state, the rule is modified.
       * - You cannot repeatedly call the **UpdateTrafficMirrorFilterRuleAttribute** operation to modify an inbound or outbound rule within the specified period of time.
       *
       * @param request UpdateTrafficMirrorFilterRuleAttributeRequest
       * @return UpdateTrafficMirrorFilterRuleAttributeResponse
       */
      Models::UpdateTrafficMirrorFilterRuleAttributeResponse updateTrafficMirrorFilterRuleAttribute(const Models::UpdateTrafficMirrorFilterRuleAttributeRequest &request);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttributeWithOptions(const Models::UpdateTrafficMirrorSessionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a traffic mirror session.
       *
       * @param request UpdateTrafficMirrorSessionAttributeRequest
       * @return UpdateTrafficMirrorSessionAttributeResponse
       */
      Models::UpdateTrafficMirrorSessionAttributeResponse updateTrafficMirrorSessionAttribute(const Models::UpdateTrafficMirrorSessionAttributeRequest &request);

      /**
       * @summary Calls the UpdateVirtualBorderBandwidth operation to update the bandwidth throttling for both the upstream and downstream routing directions on a Virtual Border Router (VBR).
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidthWithOptions(const Models::UpdateVirtualBorderBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateVirtualBorderBandwidth operation to update the bandwidth throttling for both the upstream and downstream routing directions on a Virtual Border Router (VBR).
       *
       * @param request UpdateVirtualBorderBandwidthRequest
       * @return UpdateVirtualBorderBandwidthResponse
       */
      Models::UpdateVirtualBorderBandwidthResponse updateVirtualBorderBandwidth(const Models::UpdateVirtualBorderBandwidthRequest &request);

      /**
       * @summary This operation modifies a virtual physical connection.
       *
       * @param request UpdateVirtualPhysicalConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVirtualPhysicalConnectionResponse
       */
      Models::UpdateVirtualPhysicalConnectionResponse updateVirtualPhysicalConnectionWithOptions(const Models::UpdateVirtualPhysicalConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies a virtual physical connection.
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
