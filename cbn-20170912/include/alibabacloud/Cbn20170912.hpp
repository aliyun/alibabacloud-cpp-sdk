// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CBN20170912_HPP_
#define ALIBABACLOUD_CBN20170912_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cbn20170912Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cbn20170912.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enables a flow log. After the flow log is enabled, the system collects traffic information about a specified resource.
       *
       * @description *   After you create a flow log, it is enabled by default. You can call this operation to enable a disabled flow log.
       * *   `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *     *   If a flow log is in the **Modifying** state, the flow log is being enabled. In this case, you can query the flow log but cannot perform other operations.
       *     *   If a flow log is in the **Active** state, the flow log is enabled.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a flow log. After the flow log is enabled, the system collects traffic information about a specified resource.
       *
       * @description *   After you create a flow log, it is enabled by default. You can call this operation to enable a disabled flow log.
       * *   `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *     *   If a flow log is in the **Modifying** state, the flow log is being enabled. In this case, you can query the flow log but cannot perform other operations.
       *     *   If a flow log is in the **Active** state, the flow log is enabled.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Adds a traffic classification rule to a traffic marking policy.
       *
       * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       * *   If a traffic classification rule is in the **Creating** state, the traffic classification rule is being created. In this case, you can query the traffic classification rule but cannot perform other operations.
       * *   If a traffic classification rule is in the **Active** state, the traffic classification rule is added to the traffic marking policy.
       *
       * @param request AddTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTrafficMatchRuleToTrafficMarkingPolicyResponse addTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a traffic classification rule to a traffic marking policy.
       *
       * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       * *   If a traffic classification rule is in the **Creating** state, the traffic classification rule is being created. In this case, you can query the traffic classification rule but cannot perform other operations.
       * *   If a traffic classification rule is in the **Active** state, the traffic classification rule is added to the traffic marking policy.
       *
       * @param request AddTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @return AddTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTrafficMatchRuleToTrafficMarkingPolicyResponse addTrafficMatchRuleToTrafficMarkingPolicy(const Models::AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @deprecated OpenAPI AddTraficMatchRuleToTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::AddTrafficMatchRuleToTrafficMarkingPolicy instead.
       *
       * @summary Adds a traffic classification rule to a traffic marking policy.
       *
       * @description ### Usage notes
       * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. If you need to add a traffic classification rule to a traffic marking policy, call the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation.
       *
       * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::AddTraficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTraficMatchRuleToTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::AddTrafficMatchRuleToTrafficMarkingPolicy instead.
       *
       * @summary Adds a traffic classification rule to a traffic marking policy.
       *
       * @description ### Usage notes
       * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. If you need to add a traffic classification rule to a traffic marking policy, call the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation.
       *
       * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
       * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicy(const Models::AddTraficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @summary Associates a bandwidth plan with a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can associate multiple bandwidth plans with a CEN instance. However, the pair of areas connected by each bandwidth plan must be unique.
       * For example, if a CEN instance is associated with a bandwidth plan that connects networks in the Chinese mainland, you cannot associate another bandwidth plan that also connects networks in the Chinese mainland with the CEN instance. However, you can associate a bandwidth plan that connects the Chinese mainland to North America with the CEN instance.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackageWithOptions(const Models::AssociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a bandwidth plan with a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can associate multiple bandwidth plans with a CEN instance. However, the pair of areas connected by each bandwidth plan must be unique.
       * For example, if a CEN instance is associated with a bandwidth plan that connects networks in the Chinese mainland, you cannot associate another bandwidth plan that also connects networks in the Chinese mainland with the CEN instance. However, you can associate a bandwidth plan that connects the Chinese mainland to North America with the CEN instance.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackage(const Models::AssociateCenBandwidthPackageRequest &request);

      /**
       * @summary Creates an associated forwarding correlation.
       *
       * @description After you create a network instance connection on a transit router, you can configure an associated forwarding correlation to associate the network instance connection with the route table of an Enterprise Edition transit router. The Enterprise Edition transit router forwards traffic for the network instance based on the routes in the route table. Before you begin, we recommend that you take note of the following rules:
       * *   Only route tables of Enterprise Edition transit routers support associated forwarding correlations. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   Each network instance connection can have an associated forwarding correlation with only one route table of only one Enterprise Edition transit router.
       * *   **AssociateTransitRouterAttachmentWithRouteTable** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of an associated forwarding correlation.
       *     *   If an associated forwarding correlation is in the **Associating** state, the associated forwarding correlation is being created. You can query the associated forwarding correlation but cannot perform other operations.
       *     *   If an associated forwarding correlation is in the **Active** state, the associated forwarding correlation is created.
       *
       * @param request AssociateTransitRouterAttachmentWithRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTransitRouterAttachmentWithRouteTableResponse
       */
      Models::AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTableWithOptions(const Models::AssociateTransitRouterAttachmentWithRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an associated forwarding correlation.
       *
       * @description After you create a network instance connection on a transit router, you can configure an associated forwarding correlation to associate the network instance connection with the route table of an Enterprise Edition transit router. The Enterprise Edition transit router forwards traffic for the network instance based on the routes in the route table. Before you begin, we recommend that you take note of the following rules:
       * *   Only route tables of Enterprise Edition transit routers support associated forwarding correlations. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   Each network instance connection can have an associated forwarding correlation with only one route table of only one Enterprise Edition transit router.
       * *   **AssociateTransitRouterAttachmentWithRouteTable** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of an associated forwarding correlation.
       *     *   If an associated forwarding correlation is in the **Associating** state, the associated forwarding correlation is being created. You can query the associated forwarding correlation but cannot perform other operations.
       *     *   If an associated forwarding correlation is in the **Active** state, the associated forwarding correlation is created.
       *
       * @param request AssociateTransitRouterAttachmentWithRouteTableRequest
       * @return AssociateTransitRouterAttachmentWithRouteTableResponse
       */
      Models::AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTable(const Models::AssociateTransitRouterAttachmentWithRouteTableRequest &request);

      /**
       * @summary Associates the vSwitch of a virtual private cloud (VPC) with a multicast domain.
       *
       * @description - A vSwitch can be associated with only one multicast domain. Make sure that the vSwitch is not associated with other multicast domains. For more information about how to disassociate a vSwitch from a multicast domain, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - AssociateTransitRouterMulticastDomain is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterMulticastDomainAssociations operation to query whether a vSwitch is associated with the specified multicast domain.
       *   - If the status is Associating, it indicates that the vSwitch is being associated with the specified multicast domain. You can query the vSwitch but cannot perform other operations on the vSwitch.
       *   - If the status is Associated, the vSwitch is associated with the specified multicast domain.
       * - The VPC of the vSwitch must be associated with an Enterprise Edition transit router. For more information about how to associate a VPC with an Enterprise Edition transit router, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request AssociateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTransitRouterMulticastDomainResponse
       */
      Models::AssociateTransitRouterMulticastDomainResponse associateTransitRouterMulticastDomainWithOptions(const Models::AssociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the vSwitch of a virtual private cloud (VPC) with a multicast domain.
       *
       * @description - A vSwitch can be associated with only one multicast domain. Make sure that the vSwitch is not associated with other multicast domains. For more information about how to disassociate a vSwitch from a multicast domain, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - AssociateTransitRouterMulticastDomain is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterMulticastDomainAssociations operation to query whether a vSwitch is associated with the specified multicast domain.
       *   - If the status is Associating, it indicates that the vSwitch is being associated with the specified multicast domain. You can query the vSwitch but cannot perform other operations on the vSwitch.
       *   - If the status is Associated, the vSwitch is associated with the specified multicast domain.
       * - The VPC of the vSwitch must be associated with an Enterprise Edition transit router. For more information about how to associate a VPC with an Enterprise Edition transit router, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request AssociateTransitRouterMulticastDomainRequest
       * @return AssociateTransitRouterMulticastDomainResponse
       */
      Models::AssociateTransitRouterMulticastDomainResponse associateTransitRouterMulticastDomain(const Models::AssociateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Attaches a network instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description CEN allows you to attach a network instance that belongs to another Alibaba Cloud account to your CEN instance. Before you attach the network instance, CEN must acquire permissions to access the network instance that belongs to another Alibaba Cloud account.
       * *   For more information about how to grant CEN permissions on virtual private clouds (VPCs) that belong to another Alibaba Cloud account, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * *   For more information about how to grant CEN permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, see [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * *   By default, you cannot grant permissions on virtual border routers (VBRs) that belong to another Alibaba Cloud account to a CEN instance. If you need to use this feature, contact your account manager.
       *
       * @param request AttachCenChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCenChildInstanceResponse
       */
      Models::AttachCenChildInstanceResponse attachCenChildInstanceWithOptions(const Models::AttachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a network instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description CEN allows you to attach a network instance that belongs to another Alibaba Cloud account to your CEN instance. Before you attach the network instance, CEN must acquire permissions to access the network instance that belongs to another Alibaba Cloud account.
       * *   For more information about how to grant CEN permissions on virtual private clouds (VPCs) that belong to another Alibaba Cloud account, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * *   For more information about how to grant CEN permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, see [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * *   By default, you cannot grant permissions on virtual border routers (VBRs) that belong to another Alibaba Cloud account to a CEN instance. If you need to use this feature, contact your account manager.
       *
       * @param request AttachCenChildInstanceRequest
       * @return AttachCenChildInstanceResponse
       */
      Models::AttachCenChildInstanceResponse attachCenChildInstance(const Models::AttachCenChildInstanceRequest &request);

      /**
       * @summary Queries whether your Alibaba Cloud account has the transit router feature activated.
       *
       * @param request CheckTransitRouterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTransitRouterServiceResponse
       */
      Models::CheckTransitRouterServiceResponse checkTransitRouterServiceWithOptions(const Models::CheckTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether your Alibaba Cloud account has the transit router feature activated.
       *
       * @param request CheckTransitRouterServiceRequest
       * @return CheckTransitRouterServiceResponse
       */
      Models::CheckTransitRouterServiceResponse checkTransitRouterService(const Models::CheckTransitRouterServiceRequest &request);

      /**
       * @summary Cloud Enterprise Network (CEN) instances are basic network resources that are used to manage interconnected networks. You can use a CEN instance to manage a network that covers one or multiple regions. Before you can connect network instances, you must first call the CreateCen operation to create a CEN instance.
       *
       * @description **CreateCen** is an asynchronous operation. After you a request is sent, the system returns a request ID and runs the task in the background. You can call **DescribeCens** to query the status of the task.
       * *   If a CEN instance is in the **Creating** state, the CEN instance is being created. You can query the CEN instance but cannot perform other operations.
       * *   If a CEN instance is in the **Active** state, the CEN instance is created.
       *
       * @param request CreateCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCenWithOptions(const Models::CreateCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cloud Enterprise Network (CEN) instances are basic network resources that are used to manage interconnected networks. You can use a CEN instance to manage a network that covers one or multiple regions. Before you can connect network instances, you must first call the CreateCen operation to create a CEN instance.
       *
       * @description **CreateCen** is an asynchronous operation. After you a request is sent, the system returns a request ID and runs the task in the background. You can call **DescribeCens** to query the status of the task.
       * *   If a CEN instance is in the **Creating** state, the CEN instance is being created. You can query the CEN instance but cannot perform other operations.
       * *   If a CEN instance is in the **Active** state, the CEN instance is created.
       *
       * @param request CreateCenRequest
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCen(const Models::CreateCenRequest &request);

      /**
       * @summary Creates a bandwidth plan.
       *
       * @description *   You must specify the areas to be connected when you create a bandwidth plan. An area contains one or more Alibaba Cloud regions. When you select areas for a bandwidth plan, make sure that the areas contain the regions that you want to connect. For more information about the supported areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * *   For more information about the billing rules, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * *   **CreateCenBandwidthPackage** is an asynchronous operation. After you send a request, the system returns a bandwidth plan instance ID and runs the task in the background. You can call the **DescribeCenBandwidthPackages** operation to query the status of a bandwidth plan. If a bandwidth plan is in the **Idle** or **InUse** state, the bandwidth plan is created.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackageWithOptions(const Models::CreateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a bandwidth plan.
       *
       * @description *   You must specify the areas to be connected when you create a bandwidth plan. An area contains one or more Alibaba Cloud regions. When you select areas for a bandwidth plan, make sure that the areas contain the regions that you want to connect. For more information about the supported areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * *   For more information about the billing rules, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * *   **CreateCenBandwidthPackage** is an asynchronous operation. After you send a request, the system returns a bandwidth plan instance ID and runs the task in the background. You can call the **DescribeCenBandwidthPackages** operation to query the status of a bandwidth plan. If a bandwidth plan is in the **Idle** or **InUse** state, the bandwidth plan is created.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackage(const Models::CreateCenBandwidthPackageRequest &request);

      /**
       * @summary Adds a route entry to a network instance and sets the next hop of the destination CIDR block to the transit router in the current region.
       *
       * @description *   You can add routes only to virtual private clouds (VPCs) or virtual border routers (VBRs) that are connected to an Enterprise Edition transit router.
       * *   By default, the next hop of the routes is the **transit router connection**, which is the connection between the VBR and the Enterprise Edition transit router. You cannot modify the next hop.
       * *   **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeRouteEntryList** operation to query the status of a route.
       *     *   If a route is in the **Pending** state, the route is being created. You can query the route but cannot perform other operations.
       *     *   If a route is in the **Available** state, the route is created.
       *
       * @param request CreateCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::CreateCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a route entry to a network instance and sets the next hop of the destination CIDR block to the transit router in the current region.
       *
       * @description *   You can add routes only to virtual private clouds (VPCs) or virtual border routers (VBRs) that are connected to an Enterprise Edition transit router.
       * *   By default, the next hop of the routes is the **transit router connection**, which is the connection between the VBR and the Enterprise Edition transit router. You cannot modify the next hop.
       * *   **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeRouteEntryList** operation to query the status of a route.
       *     *   If a route is in the **Pending** state, the route is being created. You can query the route but cannot perform other operations.
       *     *   If a route is in the **Available** state, the route is created.
       *
       * @param request CreateCenChildInstanceRouteEntryToAttachmentRequest
       * @return CreateCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachment(const Models::CreateCenChildInstanceRouteEntryToAttachmentRequest &request);

      /**
       * @summary Adds routes to a network instance.
       *
       * @description ## Limits
       * *   By default, the CreateCenChildInstanceRouteEntryToCen operation is unavailable. To call this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   You cannot add a route entry to an Enterprise Edition transit router by calling the CreateCenChildInstanceRouteEntryToCen operation.
       * *   By default, the next hop of the route entry is the regional gateway of the Cloud Enterprise Network (CEN) instance. You cannot modify the next hop.
       *
       * @param request CreateCenChildInstanceRouteEntryToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenChildInstanceRouteEntryToCenResponse
       */
      Models::CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCenWithOptions(const Models::CreateCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds routes to a network instance.
       *
       * @description ## Limits
       * *   By default, the CreateCenChildInstanceRouteEntryToCen operation is unavailable. To call this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   You cannot add a route entry to an Enterprise Edition transit router by calling the CreateCenChildInstanceRouteEntryToCen operation.
       * *   By default, the next hop of the route entry is the regional gateway of the Cloud Enterprise Network (CEN) instance. You cannot modify the next hop.
       *
       * @param request CreateCenChildInstanceRouteEntryToCenRequest
       * @return CreateCenChildInstanceRouteEntryToCenResponse
       */
      Models::CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCen(const Models::CreateCenChildInstanceRouteEntryToCenRequest &request);

      /**
       * @summary Creates a quality of service (QoS) policy for an inter-region connection on an Enterprise Edition transit router.
       *
       * @description *   Only inter-region connections created on Enterprise Edition transit routers support QoS policies.
       * *   Traffic scheduling applies only to outbound traffic on Enterprise Edition transit routers.
       *     For example, you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions, and create a QoS policy for the transit router in the China (Hangzhou) region. In this case, the QoS policy can ensure bandwidth for network traffic from the China (Hangzhou) region to the China (Qingdao) region. However, the QoS policy does not apply to network traffic from the China (Qingdao) region to the China (Hangzhou) region.
       * *   **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the task.
       *     *   If the QoS policy is in the **Creating** state, the QoS policy is being created. You can query the QoS policy but cannot perform other operations on the QoS policy.
       *     *   If the QoS policy is in the **Active** state, the QoS policy is created.
       * ### [](#)Prerequisites
       * Before you call the **CreateCenInterRegionTrafficQosPolicy** operation, make sure that the following requirements are met:
       * *   An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * *   A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
       *
       * @param request CreateCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenInterRegionTrafficQosPolicyResponse
       */
      Models::CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicyWithOptions(const Models::CreateCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) policy for an inter-region connection on an Enterprise Edition transit router.
       *
       * @description *   Only inter-region connections created on Enterprise Edition transit routers support QoS policies.
       * *   Traffic scheduling applies only to outbound traffic on Enterprise Edition transit routers.
       *     For example, you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions, and create a QoS policy for the transit router in the China (Hangzhou) region. In this case, the QoS policy can ensure bandwidth for network traffic from the China (Hangzhou) region to the China (Qingdao) region. However, the QoS policy does not apply to network traffic from the China (Qingdao) region to the China (Hangzhou) region.
       * *   **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the task.
       *     *   If the QoS policy is in the **Creating** state, the QoS policy is being created. You can query the QoS policy but cannot perform other operations on the QoS policy.
       *     *   If the QoS policy is in the **Active** state, the QoS policy is created.
       * ### [](#)Prerequisites
       * Before you call the **CreateCenInterRegionTrafficQosPolicy** operation, make sure that the following requirements are met:
       * *   An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * *   A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
       *
       * @param request CreateCenInterRegionTrafficQosPolicyRequest
       * @return CreateCenInterRegionTrafficQosPolicyResponse
       */
      Models::CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicy(const Models::CreateCenInterRegionTrafficQosPolicyRequest &request);

      /**
       * @summary Creates queues in a quality of service (QoS) policy to manage network traffic based on finer granularities, improve service performance, and meet service-level agreements (SLAs).
       *
       * @description The **CreateCenInterRegionTrafficQosQueue** operation is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the QoS policy to determine the status of the queue. When you call this operation, you must set the **TrafficQosPolicyId** parameter.
       * - If a QoS policy is in the **Modifying** state, the queue is being created. In this case, you can query the QoS policy and queue but cannot perform other operations.
       * - If a QoS policy is in the **Active** state, the queue is created.
       *
       * @param request CreateCenInterRegionTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenInterRegionTrafficQosQueueResponse
       */
      Models::CreateCenInterRegionTrafficQosQueueResponse createCenInterRegionTrafficQosQueueWithOptions(const Models::CreateCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates queues in a quality of service (QoS) policy to manage network traffic based on finer granularities, improve service performance, and meet service-level agreements (SLAs).
       *
       * @description The **CreateCenInterRegionTrafficQosQueue** operation is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the QoS policy to determine the status of the queue. When you call this operation, you must set the **TrafficQosPolicyId** parameter.
       * - If a QoS policy is in the **Modifying** state, the queue is being created. In this case, you can query the QoS policy and queue but cannot perform other operations.
       * - If a QoS policy is in the **Active** state, the queue is created.
       *
       * @param request CreateCenInterRegionTrafficQosQueueRequest
       * @return CreateCenInterRegionTrafficQosQueueResponse
       */
      Models::CreateCenInterRegionTrafficQosQueueResponse createCenInterRegionTrafficQosQueue(const Models::CreateCenInterRegionTrafficQosQueueRequest &request);

      /**
       * @summary Creates a routing policy. A routing policy filters routing information and facilitates network management.
       *
       * @description Routing policies are sorted by priority. A smaller value indicates a higher priority. Each routing policy is a collection of conditional statements and execution statements. Starting from the routing policy with the highest priority, the system matches routes against the match conditions specified by routing policies. If a route meets all the match conditions of a routing policy, the system permits or denies the route based on the action specified in the routing policy. You can also modify the attributes of permitted routes. By default, the system permits routes that meet none of the match conditions. For more information, see [Routing policy overview](https://help.aliyun.com/document_detail/124157.html).
       * `CreateCenRouteMap` is an asynchronous operation. After you send a request, the routing policy ID is returned but the operation is still being performed in the system background. You can call `DescribeCenRouteMaps` to query the status of a routing policy.
       * *   If a routing policy is in the **Creating** state, the routing policy is being created. In this case, you can query the routing policy but cannot perform other operations.
       * *   If a routing policy is in the **Active** state, the routing policy is created.
       *
       * @param request CreateCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenRouteMapResponse
       */
      Models::CreateCenRouteMapResponse createCenRouteMapWithOptions(const Models::CreateCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing policy. A routing policy filters routing information and facilitates network management.
       *
       * @description Routing policies are sorted by priority. A smaller value indicates a higher priority. Each routing policy is a collection of conditional statements and execution statements. Starting from the routing policy with the highest priority, the system matches routes against the match conditions specified by routing policies. If a route meets all the match conditions of a routing policy, the system permits or denies the route based on the action specified in the routing policy. You can also modify the attributes of permitted routes. By default, the system permits routes that meet none of the match conditions. For more information, see [Routing policy overview](https://help.aliyun.com/document_detail/124157.html).
       * `CreateCenRouteMap` is an asynchronous operation. After you send a request, the routing policy ID is returned but the operation is still being performed in the system background. You can call `DescribeCenRouteMaps` to query the status of a routing policy.
       * *   If a routing policy is in the **Creating** state, the routing policy is being created. In this case, you can query the routing policy but cannot perform other operations.
       * *   If a routing policy is in the **Active** state, the routing policy is created.
       *
       * @param request CreateCenRouteMapRequest
       * @return CreateCenRouteMapResponse
       */
      Models::CreateCenRouteMapResponse createCenRouteMap(const Models::CreateCenRouteMapRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @description Flow logs can be used to capture traffic information about transit routers and network instance connections, including inter-region connections, virtual private cloud (VPC) connections, VPN connections, Express Connect Router (ECR) connections, and virtual border router (VBR) connections. Before you create a flow log, take note of the following items:
       * *   Flow logs are supported only by Enterprise Edition transit routers.
       * *   Flow logs are used to capture information about outbound traffic on transit routers. Information about inbound traffic on transit routers is not captured.
       *     For example, an Elastic Compute Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). After you enable the flow log feature for the transit router in the US (Virginia) region, you can check the log entries about packets sent from the ECS instance in the US (Virginia) region to the ECS instance in the US (Silicon Valley) region. However, packets sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region are not recorded. If you want to record the packets sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region, you must also enable the flow log feature on the transit router that is in the US (Silicon Valley) region.
       * *   If you use a flow log to capture traffic information about VPC connections, the flow log captures information only about traffic on the elastic network interface (ENI) of the transit router. For more information about how to view traffic information about other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * *   `CreateFlowLog` is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *     *   If the flow log is in the **Creating** state, the flow log is being created. In this case, you can query the flow log but cannot perform other operations.
       *     *   If the flow log is in the **Active** state, the flow log is created.
       * ### [](#)Prerequisites
       * Required resources are created. For more information about how to create resources, see the following topics:
       * *   [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html)
       * *   [CreateTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715446.html)
       * *   [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html)
       * *   [CreateTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/468243.html)
       * *   [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/468270.html)
       * *   [CreateTransitRouter](https://help.aliyun.com/document_detail/468222.html)
       *
       * @param request CreateFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowlogResponse
       */
      Models::CreateFlowlogResponse createFlowlogWithOptions(const Models::CreateFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log.
       *
       * @description Flow logs can be used to capture traffic information about transit routers and network instance connections, including inter-region connections, virtual private cloud (VPC) connections, VPN connections, Express Connect Router (ECR) connections, and virtual border router (VBR) connections. Before you create a flow log, take note of the following items:
       * *   Flow logs are supported only by Enterprise Edition transit routers.
       * *   Flow logs are used to capture information about outbound traffic on transit routers. Information about inbound traffic on transit routers is not captured.
       *     For example, an Elastic Compute Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). After you enable the flow log feature for the transit router in the US (Virginia) region, you can check the log entries about packets sent from the ECS instance in the US (Virginia) region to the ECS instance in the US (Silicon Valley) region. However, packets sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region are not recorded. If you want to record the packets sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region, you must also enable the flow log feature on the transit router that is in the US (Silicon Valley) region.
       * *   If you use a flow log to capture traffic information about VPC connections, the flow log captures information only about traffic on the elastic network interface (ENI) of the transit router. For more information about how to view traffic information about other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * *   `CreateFlowLog` is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *     *   If the flow log is in the **Creating** state, the flow log is being created. In this case, you can query the flow log but cannot perform other operations.
       *     *   If the flow log is in the **Active** state, the flow log is created.
       * ### [](#)Prerequisites
       * Required resources are created. For more information about how to create resources, see the following topics:
       * *   [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html)
       * *   [CreateTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715446.html)
       * *   [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html)
       * *   [CreateTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/468243.html)
       * *   [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/468270.html)
       * *   [CreateTransitRouter](https://help.aliyun.com/document_detail/468222.html)
       *
       * @param request CreateFlowlogRequest
       * @return CreateFlowlogResponse
       */
      Models::CreateFlowlogResponse createFlowlog(const Models::CreateFlowlogRequest &request);

      /**
       * @summary Creates a traffic marking policy. A traffic marking policy captures network traffic based on traffic classification rules and marks the traffic with the Differentiated Services Code Point (DSCP) values that you specify.
       *
       * @description *   Only Enterprise Edition transit routers support traffic marking policies.
       * *   **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *     *   If a traffic marking policy is in the **Creating** state, the traffic marking policy is being created. You can query the traffic marking policy but cannot perform other operations.
       *     *   If a traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicyWithOptions(const Models::CreateTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic marking policy. A traffic marking policy captures network traffic based on traffic classification rules and marks the traffic with the Differentiated Services Code Point (DSCP) values that you specify.
       *
       * @description *   Only Enterprise Edition transit routers support traffic marking policies.
       * *   **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *     *   If a traffic marking policy is in the **Creating** state, the traffic marking policy is being created. You can query the traffic marking policy but cannot perform other operations.
       *     *   If a traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicy(const Models::CreateTrafficMarkingPolicyRequest &request);

      /**
       * @summary Creates an aggregate route.
       *
       * @description After you add an aggregate route to a route table of an Enterprise Edition transit router, the transit router advertises its routes only to route tables of associated virtual private clouds (VPCs) and have route synchronization enabled.
       * Perform the following operations before you create an aggregate route. Otherwise, the Enterprise Edition transit router does not advertise routes to VPC route tables:
       * *   Associated forwarding is enabled between the VPCs and the Enterprise Edition transit router. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
       * *   Route synchronization is enabled for the VPCs. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param tmpReq CreateTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouteTableAggregationResponse
       */
      Models::CreateTransitRouteTableAggregationResponse createTransitRouteTableAggregationWithOptions(const Models::CreateTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an aggregate route.
       *
       * @description After you add an aggregate route to a route table of an Enterprise Edition transit router, the transit router advertises its routes only to route tables of associated virtual private clouds (VPCs) and have route synchronization enabled.
       * Perform the following operations before you create an aggregate route. Otherwise, the Enterprise Edition transit router does not advertise routes to VPC route tables:
       * *   Associated forwarding is enabled between the VPCs and the Enterprise Edition transit router. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
       * *   Route synchronization is enabled for the VPCs. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request CreateTransitRouteTableAggregationRequest
       * @return CreateTransitRouteTableAggregationResponse
       */
      Models::CreateTransitRouteTableAggregationResponse createTransitRouteTableAggregation(const Models::CreateTransitRouteTableAggregationRequest &request);

      /**
       * @summary Creates an Enterprise Edition transit router.
       *
       * @description *   You can call **CreateTransitRouter** to create an Enterprise Edition transit router. For more information about the regions that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **CreateTransitRouter** is an asynchronous operation. After you send a request, the transit router ID is returned but the operation is still being performed in the system background. You can call [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) to query the status of an Enterprise Edition transit router.
       *     *   If an Enterprise Edition transit router is in the **Creating** state, the Enterprise Edition transit router is being created. In this case, you can query the Enterprise Edition transit router but cannot perform other operations.
       *     *   If an Enterprise Edition transit router is in the **Active** state, the Enterprise Edition transit router is created.
       *
       * @param tmpReq CreateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouterWithOptions(const Models::CreateTransitRouterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Enterprise Edition transit router.
       *
       * @description *   You can call **CreateTransitRouter** to create an Enterprise Edition transit router. For more information about the regions that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **CreateTransitRouter** is an asynchronous operation. After you send a request, the transit router ID is returned but the operation is still being performed in the system background. You can call [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) to query the status of an Enterprise Edition transit router.
       *     *   If an Enterprise Edition transit router is in the **Creating** state, the Enterprise Edition transit router is being created. In this case, you can query the Enterprise Edition transit router but cannot perform other operations.
       *     *   If an Enterprise Edition transit router is in the **Active** state, the Enterprise Edition transit router is created.
       *
       * @param request CreateTransitRouterRequest
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouter(const Models::CreateTransitRouterRequest &request);

      /**
       * @summary Creates a custom CIDR block for a transit router. Custom CIDR blocks of a transit router are similar to the CIDR blocks of the loopback interface of a router.
       *
       * @description You can specify a CIDR block for a transit router. The CIDR block works in a similar way as the CIDR block of the loopback interface on a router. IP addresses within the CIDR block can be assigned to IPsec-VPN connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation can be used to create a CIDR block only after you create a transit router.
       * The CIDR block must meet the following requirements:
       * *   Only Enterprise Edition transit routers support custom CIDR blocks.
       * *   For more information, see [Limits in transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * *   Each transit router supports at most five CIDR blocks. The subnet mask of a CIDR block must be 16 bits to 24 bits in length.
       * *   The following CIDR blocks and their subnets are not supported: 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, and 169.254.0.0/16.
       * *   The CIDR block cannot overlap with the CIDR blocks of the network instances that communicate with each other by using the CEN instance.
       * *   On the same CEN instance, each transit router CIDR block must be unique.
       * *   When you create the first VPN connection after you add a CIDR block for a transit router, three CIDR blocks within the CIDR block are reserved. An IP address is allocated from the remaining CIDR blocks to the IPsec-VPN connection.
       *     You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query reserved CIDR blocks and IP addresses allocated to network connections.
       *
       * @param request CreateTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidrWithOptions(const Models::CreateTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom CIDR block for a transit router. Custom CIDR blocks of a transit router are similar to the CIDR blocks of the loopback interface of a router.
       *
       * @description You can specify a CIDR block for a transit router. The CIDR block works in a similar way as the CIDR block of the loopback interface on a router. IP addresses within the CIDR block can be assigned to IPsec-VPN connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation can be used to create a CIDR block only after you create a transit router.
       * The CIDR block must meet the following requirements:
       * *   Only Enterprise Edition transit routers support custom CIDR blocks.
       * *   For more information, see [Limits in transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * *   Each transit router supports at most five CIDR blocks. The subnet mask of a CIDR block must be 16 bits to 24 bits in length.
       * *   The following CIDR blocks and their subnets are not supported: 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, and 169.254.0.0/16.
       * *   The CIDR block cannot overlap with the CIDR blocks of the network instances that communicate with each other by using the CEN instance.
       * *   On the same CEN instance, each transit router CIDR block must be unique.
       * *   When you create the first VPN connection after you add a CIDR block for a transit router, three CIDR blocks within the CIDR block are reserved. An IP address is allocated from the remaining CIDR blocks to the IPsec-VPN connection.
       *     You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query reserved CIDR blocks and IP addresses allocated to network connections.
       *
       * @param request CreateTransitRouterCidrRequest
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidr(const Models::CreateTransitRouterCidrRequest &request);

      /**
       * @summary Attaches an Express Connect Router (ECR) connection to the transit router in the same region.
       *
       * @description *   Only Enterprise Edition transit routers support ECR connections.
       * *   The following methods describe how to attach an ECR connection to an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is created in the region, specify the **EcrId**, **RegionId**, and **TransitRouterId** parameters.
       *     *   If no Enterprise Edition transit router is created in the region, specify the **EcrId**, **CenId**, and **RegionId** parameters. An Enterprise Edition transit router is automatically created when you create an ECR connection.
       * *   CreateTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListTransitRouterEcrAttachments** operation to query the status of an ECR connection.
       *     *   If the ECR connection is in the **Attaching** state, the ECR connection is being created. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection.
       *     *   If the ECR connection is in the **Attached** state, the ECR connection is created.
       * *   After you create an ECR connection, the ECR connection is not in route learning or associated forwarding relationships with Enterprise Edition transit routers.
       *     After you enable [route learning](https://help.aliyun.com/document_detail/468300.html) between the ECR connection and an Enterprise Edition transit router, the routes of the ECR are automatically advertised to the route tables of the Enterprise Edition transit router.
       * *   After you create an ECR connection, the routes in the route tables of the Enterprise Edition transit router to which the ECR connection is attached are automatically advertised to the route table of the ECR.
       * ### [](#)Prerequisite
       * *   The Alibaba Cloud account of the Enterprise Edition transit router and the Alibaba Cloud account of the ECR belong to the same enterprise.
       * *   The Enterprise Edition transit router and ECR can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. If the Enterprise Edition transit router and ECR belong to different Alibaba Cloud accounts, grant the transit router permissions on the ECR before you can attach the ECR to the transit router. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   **Before you call this operation to attach an ECR connection to an Enterprise Edition transit router, you must call the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to create an association between the ECR and transit router.**
       *     **If you call the DeleteTransitRouterEcrAttachment operation to forcefully delete an ECR connection, the association between the ECR connection and Enterprise Edition transit router is deleted.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachmentWithOptions(const Models::CreateTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an Express Connect Router (ECR) connection to the transit router in the same region.
       *
       * @description *   Only Enterprise Edition transit routers support ECR connections.
       * *   The following methods describe how to attach an ECR connection to an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is created in the region, specify the **EcrId**, **RegionId**, and **TransitRouterId** parameters.
       *     *   If no Enterprise Edition transit router is created in the region, specify the **EcrId**, **CenId**, and **RegionId** parameters. An Enterprise Edition transit router is automatically created when you create an ECR connection.
       * *   CreateTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListTransitRouterEcrAttachments** operation to query the status of an ECR connection.
       *     *   If the ECR connection is in the **Attaching** state, the ECR connection is being created. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection.
       *     *   If the ECR connection is in the **Attached** state, the ECR connection is created.
       * *   After you create an ECR connection, the ECR connection is not in route learning or associated forwarding relationships with Enterprise Edition transit routers.
       *     After you enable [route learning](https://help.aliyun.com/document_detail/468300.html) between the ECR connection and an Enterprise Edition transit router, the routes of the ECR are automatically advertised to the route tables of the Enterprise Edition transit router.
       * *   After you create an ECR connection, the routes in the route tables of the Enterprise Edition transit router to which the ECR connection is attached are automatically advertised to the route table of the ECR.
       * ### [](#)Prerequisite
       * *   The Alibaba Cloud account of the Enterprise Edition transit router and the Alibaba Cloud account of the ECR belong to the same enterprise.
       * *   The Enterprise Edition transit router and ECR can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. If the Enterprise Edition transit router and ECR belong to different Alibaba Cloud accounts, grant the transit router permissions on the ECR before you can attach the ECR to the transit router. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   **Before you call this operation to attach an ECR connection to an Enterprise Edition transit router, you must call the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to create an association between the ECR and transit router.**
       *     **If you call the DeleteTransitRouterEcrAttachment operation to forcefully delete an ECR connection, the association between the ECR connection and Enterprise Edition transit router is deleted.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachment(const Models::CreateTransitRouterEcrAttachmentRequest &request);

      /**
       * @summary Creates a multicast domain. A multicast domain is a multicast network in a region. Only resources in the same multicast domain can transmit and receive multicast packets.
       *
       * @description Before you call this operation, read the following rules:
       * *   Make sure that an Enterprise Edition transit router is deployed in the region where you want to create the multicast domain, and the multicast feature is enabled for the Enterprise Edition transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *     If an Enterprise Edition transit router was created before you apply for multicast resources, the transit router does not support multicast. You can delete the transit router and create a new one. For more information about how to delete an Enterprise Edition transit router, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * *   When you call **CreateTransitRouterMulticastDomain**, if you set **CenId** and **RegionId**, you do not need to set **TransitRouterId**. If you set **TransitRouterId**, you do not need to set **CenId** or **RegionId**.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomainWithOptions(const Models::CreateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multicast domain. A multicast domain is a multicast network in a region. Only resources in the same multicast domain can transmit and receive multicast packets.
       *
       * @description Before you call this operation, read the following rules:
       * *   Make sure that an Enterprise Edition transit router is deployed in the region where you want to create the multicast domain, and the multicast feature is enabled for the Enterprise Edition transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *     If an Enterprise Edition transit router was created before you apply for multicast resources, the transit router does not support multicast. You can delete the transit router and create a new one. For more information about how to delete an Enterprise Edition transit router, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * *   When you call **CreateTransitRouterMulticastDomain**, if you set **CenId** and **RegionId**, you do not need to set **TransitRouterId**. If you set **TransitRouterId**, you do not need to set **CenId** or **RegionId**.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomain(const Models::CreateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary To connect network instances across regions, such as virtual private clouds (VPCs), virtual border routers (VBRs), and IPsec-VPN connections that are connected to transit routers, you must create an inter-region connection between the network instances that you want to connect. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection on an Enterprise Edition transit router.
       *
       * @description *   Enterprise Edition transit routers allow you to allocate bandwidth resources to inter-region connections by using the following methods:
       *     *   **Allocate bandwidth resources from a bandwidth plan**:
       *         You must purchase a bandwidth plan, and then allocate bandwidth resources from the bandwidth plan to inter-region connections. For more information about how to purchase a bandwidth plan, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *     *   **Use pay-by-data-transfer bandwidth resources**:
       *         You can set a maximum bandwidth value for an inter-region connection. Then, you are charged for the amount of data transfer over the connection. For more information, see [Inter-region data transfer](https://help.aliyun.com/document_detail/337827.html).
       * *   **CreateTransitRouterPeerAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
       *     *   If the inter-region connection is in the **Attaching** state, the inter-region connection is being created. In this case, you can query the connection but cannot perform other operations on the connection.
       *     *   If the inter-region connection is in the **Attached** state, the inter-region connection is created.
       *
       * @param request CreateTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterPeerAttachmentResponse
       */
      Models::CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachmentWithOptions(const Models::CreateTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To connect network instances across regions, such as virtual private clouds (VPCs), virtual border routers (VBRs), and IPsec-VPN connections that are connected to transit routers, you must create an inter-region connection between the network instances that you want to connect. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection on an Enterprise Edition transit router.
       *
       * @description *   Enterprise Edition transit routers allow you to allocate bandwidth resources to inter-region connections by using the following methods:
       *     *   **Allocate bandwidth resources from a bandwidth plan**:
       *         You must purchase a bandwidth plan, and then allocate bandwidth resources from the bandwidth plan to inter-region connections. For more information about how to purchase a bandwidth plan, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *     *   **Use pay-by-data-transfer bandwidth resources**:
       *         You can set a maximum bandwidth value for an inter-region connection. Then, you are charged for the amount of data transfer over the connection. For more information, see [Inter-region data transfer](https://help.aliyun.com/document_detail/337827.html).
       * *   **CreateTransitRouterPeerAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
       *     *   If the inter-region connection is in the **Attaching** state, the inter-region connection is being created. In this case, you can query the connection but cannot perform other operations on the connection.
       *     *   If the inter-region connection is in the **Attached** state, the inter-region connection is created.
       *
       * @param request CreateTransitRouterPeerAttachmentRequest
       * @return CreateTransitRouterPeerAttachmentResponse
       */
      Models::CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachment(const Models::CreateTransitRouterPeerAttachmentRequest &request);

      /**
       * @summary Associates the route table of an Enterprise Edition transit router with a prefix list.
       *
       * @description To associate an Enterprise Edition transit router with a route prefix, you must meet the following requirements:
       * *   You are familiar with the limits and route compatibility notes of prefix lists. For more information, see [Prefix lists](https://help.aliyun.com/document_detail/445605.html).
       * *   A prefix list is created. For more information, see [CreateVpcPrefixList](https://help.aliyun.com/document_detail/437367.html).
       * *   If the prefix list and the Enterprise Edition transit router belong to different Alibaba Cloud accounts, the prefix list is shared with the Alibaba Cloud account that owns the Enterprise Edition transit router. For more information, see [Resource sharing](https://help.aliyun.com/document_detail/160622.html) and [API references for resource sharing](https://help.aliyun.com/document_detail/193445.html).
       *
       * @param request CreateTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterPrefixListAssociationResponse
       */
      Models::CreateTransitRouterPrefixListAssociationResponse createTransitRouterPrefixListAssociationWithOptions(const Models::CreateTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the route table of an Enterprise Edition transit router with a prefix list.
       *
       * @description To associate an Enterprise Edition transit router with a route prefix, you must meet the following requirements:
       * *   You are familiar with the limits and route compatibility notes of prefix lists. For more information, see [Prefix lists](https://help.aliyun.com/document_detail/445605.html).
       * *   A prefix list is created. For more information, see [CreateVpcPrefixList](https://help.aliyun.com/document_detail/437367.html).
       * *   If the prefix list and the Enterprise Edition transit router belong to different Alibaba Cloud accounts, the prefix list is shared with the Alibaba Cloud account that owns the Enterprise Edition transit router. For more information, see [Resource sharing](https://help.aliyun.com/document_detail/160622.html) and [API references for resource sharing](https://help.aliyun.com/document_detail/193445.html).
       *
       * @param request CreateTransitRouterPrefixListAssociationRequest
       * @return CreateTransitRouterPrefixListAssociationResponse
       */
      Models::CreateTransitRouterPrefixListAssociationResponse createTransitRouterPrefixListAssociation(const Models::CreateTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Adds a route to a route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the route ID is returned but the operation is still being performed in the system background. You can call **ListTransitRouterRouteEntries** to query the status of a route.
       * *   If a route is in the **Creating** state, the route is being created. In this case, you can query the route but cannot perform other operations.
       * *   If a route is in the **Active** state, the route is created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntryWithOptions(const Models::CreateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a route to a route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the route ID is returned but the operation is still being performed in the system background. You can call **ListTransitRouterRouteEntries** to query the status of a route.
       * *   If a route is in the **Creating** state, the route is being created. In this case, you can query the route but cannot perform other operations.
       * *   If a route is in the **Active** state, the route is created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntry(const Models::CreateTransitRouterRouteEntryRequest &request);

      /**
       * @summary Creates a custom route table for an Enterprise Edition transit router.
       *
       * @description *   Only Enterprise Edition transit routers support custom route tables. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, the route table ID is returned but the operation is still being performed in the system background. You can call **ListTransitRouterRouteTables** to query the status of a route table.
       *     *   If a route table is in the **Creating** state, the route table is being created. In this case, you can query the route table but cannot perform other operations.
       *     *   If a route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTableWithOptions(const Models::CreateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route table for an Enterprise Edition transit router.
       *
       * @description *   Only Enterprise Edition transit routers support custom route tables. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, the route table ID is returned but the operation is still being performed in the system background. You can call **ListTransitRouterRouteTables** to query the status of a route table.
       *     *   If a route table is in the **Creating** state, the route table is being created. In this case, you can query the route table but cannot perform other operations.
       *     *   If a route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTable(const Models::CreateTransitRouterRouteTableRequest &request);

      /**
       * @summary Connects the virtual border routers (VBRs) among which you want to establish network communication to the transit router in the region. Then, the transit router can exchange data between the VBR and CEN instance over private connections.
       *
       * @description *   For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   You can use the following methods to create a VBR connection on an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is already created in the region, specify the **VbrId**, **RegionId**, and **TransitRouterId** parameters to create a VBR connection.
       *     *   If no Enterprise Edition transit router is already created in the region, specify the **VbrId**, **CenId**, and **RegionId** parameters to create a VBR connection. When you create a VBR connection, the system automatically creates an Enterprise Edition transit router in the specified region.
       * *   **CreateTransitRouterVbrAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call **ListTransitRouterVbrAttachments** to query the status of a VBR connection.
       *     *   If the VBR connection is in the **Attaching** state, the VBR connection is being created. In this case, you can query the VBR connection but cannot perform other operations.
       *     *   If the VBR connection is in the **Attached** state, the VBR connection is created.
       * *   The transit router and the VBR must belong to the same Alibaba Cloud account.
       * *   Transit routers can connect to VBRs that belong to the same or a different Alibaba Cloud account. To connect a transit router to a VBR that belongs to a different Alibaba Cloud account, grant permissions on the VBR to the transit router. For more information, see [Grant a transit router permissions on a network instance that belongs to another Alibaba Cloud account](https://help.aliyun.com/document_detail/181553.html).
       * *   After you create a VBR connection, it is not in route learning or associated forwarding relationship with transit router route tables by default.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachmentWithOptions(const Models::CreateTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connects the virtual border routers (VBRs) among which you want to establish network communication to the transit router in the region. Then, the transit router can exchange data between the VBR and CEN instance over private connections.
       *
       * @description *   For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   You can use the following methods to create a VBR connection on an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is already created in the region, specify the **VbrId**, **RegionId**, and **TransitRouterId** parameters to create a VBR connection.
       *     *   If no Enterprise Edition transit router is already created in the region, specify the **VbrId**, **CenId**, and **RegionId** parameters to create a VBR connection. When you create a VBR connection, the system automatically creates an Enterprise Edition transit router in the specified region.
       * *   **CreateTransitRouterVbrAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call **ListTransitRouterVbrAttachments** to query the status of a VBR connection.
       *     *   If the VBR connection is in the **Attaching** state, the VBR connection is being created. In this case, you can query the VBR connection but cannot perform other operations.
       *     *   If the VBR connection is in the **Attached** state, the VBR connection is created.
       * *   The transit router and the VBR must belong to the same Alibaba Cloud account.
       * *   Transit routers can connect to VBRs that belong to the same or a different Alibaba Cloud account. To connect a transit router to a VBR that belongs to a different Alibaba Cloud account, grant permissions on the VBR to the transit router. For more information, see [Grant a transit router permissions on a network instance that belongs to another Alibaba Cloud account](https://help.aliyun.com/document_detail/181553.html).
       * *   After you create a VBR connection, it is not in route learning or associated forwarding relationship with transit router route tables by default.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachment(const Models::CreateTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Attaches virtual private clouds (VPCs) that you want to connect to a transit router. After you attach the VPCs to the same transit router, the VPCs can communicate with each other.
       *
       * @description *   You can use the following methods to create a VPC connection from an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is already created in the region where you want to create a VPC connection, configure the **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId** parameters.
       *     *   If no Enterprise Edition transit router is created in the region where you want to create a VPC connection, configure the **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId** parameters. Then, the system automatically creates an Enterprise Edition transit router in the specified region.
       * *   **CreateTransitRouterVpcAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of a VPC connection.
       *     *   If the VPC connection is in the **Attaching** state, the VPC connection is being created. You can query the VPC connection but cannot perform other operations.
       *     *   If the VPC connection is in the **Attached** state, the VPC connection is created.
       * *   By default, route learning and associated forwarding are disabled between transit router route tables and VPC connections.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The VPC in the zones of the Enterprise Edition transit router contains at least one vSwitch. Each vSwitch must have at least one idle IP address. For more information, see [Regions and zones supported by Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * *   To connect to a network instance that belongs to another Alibaba Cloud account, you must first acquire the permissions from the account. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   VPC connections incur fees. Make sure that you understand the billing rules of VPC connections before you create a VPC connection. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param tmpReq CreateTransitRouterVpcAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachmentWithOptions(const Models::CreateTransitRouterVpcAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches virtual private clouds (VPCs) that you want to connect to a transit router. After you attach the VPCs to the same transit router, the VPCs can communicate with each other.
       *
       * @description *   You can use the following methods to create a VPC connection from an Enterprise Edition transit router:
       *     *   If an Enterprise Edition transit router is already created in the region where you want to create a VPC connection, configure the **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId** parameters.
       *     *   If no Enterprise Edition transit router is created in the region where you want to create a VPC connection, configure the **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId** parameters. Then, the system automatically creates an Enterprise Edition transit router in the specified region.
       * *   **CreateTransitRouterVpcAttachment** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of a VPC connection.
       *     *   If the VPC connection is in the **Attaching** state, the VPC connection is being created. You can query the VPC connection but cannot perform other operations.
       *     *   If the VPC connection is in the **Attached** state, the VPC connection is created.
       * *   By default, route learning and associated forwarding are disabled between transit router route tables and VPC connections.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The VPC in the zones of the Enterprise Edition transit router contains at least one vSwitch. Each vSwitch must have at least one idle IP address. For more information, see [Regions and zones supported by Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * *   To connect to a network instance that belongs to another Alibaba Cloud account, you must first acquire the permissions from the account. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   VPC connections incur fees. Make sure that you understand the billing rules of VPC connections before you create a VPC connection. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param request CreateTransitRouterVpcAttachmentRequest
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachment(const Models::CreateTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary Attaches an IPsec-VPN connection to a transit router.
       *
       * @description *   By default, route learning and associated forwarding are disabled between transit router route tables and IPsec-VPN attachments.
       * *   When you call `CreateTransitRouterVpnAttachment`, if you set **CenId** and **RegionId**, you do not need to set **TransitRouterId**. If you set **TransitRouterId** and **RegionId**, you do not need to set **CenId**.
       * ### Prerequisites
       * *   Before you attach an IPsec-VPN connection to a transit router, make sure that at least one IPsec-VPN connection is created in the region where the transit router is deployed. Make sure the IPsec-VPN connection is not associated with a resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * *   If the IPsec-VPN connection to be attached to the transit router belongs to a different Alibaba Cloud account, make sure that the transit router has obtained the required permissions from the IPsec-VPN connection. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachmentWithOptions(const Models::CreateTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an IPsec-VPN connection to a transit router.
       *
       * @description *   By default, route learning and associated forwarding are disabled between transit router route tables and IPsec-VPN attachments.
       * *   When you call `CreateTransitRouterVpnAttachment`, if you set **CenId** and **RegionId**, you do not need to set **TransitRouterId**. If you set **TransitRouterId** and **RegionId**, you do not need to set **CenId**.
       * ### Prerequisites
       * *   Before you attach an IPsec-VPN connection to a transit router, make sure that at least one IPsec-VPN connection is created in the region where the transit router is deployed. Make sure the IPsec-VPN connection is not associated with a resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * *   If the IPsec-VPN connection to be attached to the transit router belongs to a different Alibaba Cloud account, make sure that the transit router has obtained the required permissions from the IPsec-VPN connection. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachment(const Models::CreateTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary Disables a flow log. A disabled flow log no longer captures information about network traffic.
       *
       * @description `DeactiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Modifying** state, the flow log is being disabled. You can query the flow log but cannot perform other operations.
       * *   If a flow log is in the **Inactive** state, the flow log is disabled.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a flow log. A disabled flow log no longer captures information about network traffic.
       *
       * @description `DeactiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Modifying** state, the flow log is being disabled. You can query the flow log but cannot perform other operations.
       * *   If a flow log is in the **Inactive** state, the flow log is disabled.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes a Cloud Enterprise Network (CEN) instance.
       *
       * @description **DeleteCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeCens** to query the status of a CEN instance.
       * *   If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this case, you can query the CEN instance but cannot perform other operations.
       * *   If the CEN instance cannot be found, the CEN instance is deleted.
       * ### [](#)Prerequisites
       * The CEN instance that you want to delete is not associated with a bandwidth plan, and the transit router associated with the CEN instance does not have a network instance connection or a custom route table.
       * *   For more information about how to detach a network instance, see the following topics:
       *     *   [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *     *   [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *     *   [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *     *   [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *     > For more information about how to detach network instances from a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * *   For more information about how to delete custom route tables from an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * *   For more information about how to disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenResponse
       */
      Models::DeleteCenResponse deleteCenWithOptions(const Models::DeleteCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Enterprise Network (CEN) instance.
       *
       * @description **DeleteCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeCens** to query the status of a CEN instance.
       * *   If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this case, you can query the CEN instance but cannot perform other operations.
       * *   If the CEN instance cannot be found, the CEN instance is deleted.
       * ### [](#)Prerequisites
       * The CEN instance that you want to delete is not associated with a bandwidth plan, and the transit router associated with the CEN instance does not have a network instance connection or a custom route table.
       * *   For more information about how to detach a network instance, see the following topics:
       *     *   [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *     *   [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *     *   [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *     *   [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *     > For more information about how to detach network instances from a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * *   For more information about how to delete custom route tables from an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * *   For more information about how to disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenRequest
       * @return DeleteCenResponse
       */
      Models::DeleteCenResponse deleteCen(const Models::DeleteCenRequest &request);

      /**
       * @param request DeleteCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackageWithOptions(const Models::DeleteCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCenBandwidthPackageRequest
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackage(const Models::DeleteCenBandwidthPackageRequest &request);

      /**
       * @summary Deletes a route of a network instance from an Enterprise Edition transit router.
       *
       * @description *   You can delete routes only from virtual private clouds (VPCs) and virtual border routers (VBRs) whose next hop is an **Enterprise Edition transit router connection**, which is the connection to the network instance.
       * *   **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeRouteEntryList** operation to query the status of a route.
       *     *   If a route is in the **Deleting** state, the route is being deleted. You can query the route but cannot perform other operations.
       *     *   If a route cannot be found, the route is deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route of a network instance from an Enterprise Edition transit router.
       *
       * @description *   You can delete routes only from virtual private clouds (VPCs) and virtual border routers (VBRs) whose next hop is an **Enterprise Edition transit router connection**, which is the connection to the network instance.
       * *   **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeRouteEntryList** operation to query the status of a route.
       *     *   If a route is in the **Deleting** state, the route is being deleted. You can query the route but cannot perform other operations.
       *     *   If a route cannot be found, the route is deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachment(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request);

      /**
       * @summary Deletes a route from a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description ## Limits
       * *   By default, the DeleteCenChildInstanceRouteEntryToCen operation is unavailable. To call this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   You cannot delete a route entry from an Enterprise Edition transit router by calling the DeleteCenChildInstanceRouteEntryToCen operation.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCenWithOptions(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route from a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description ## Limits
       * *   By default, the DeleteCenChildInstanceRouteEntryToCen operation is unavailable. To call this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   You cannot delete a route entry from an Enterprise Edition transit router by calling the DeleteCenChildInstanceRouteEntryToCen operation.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCen(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @description *   Before you delete a QoS policy, you must delete all queues in the QoS policy except the default queue. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * *   **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a QoS policy.
       *     *   If a QoS policy is in the **Deleting** state, the QoS policy is being deleted. You can query the QoS policy but cannot perform other operations.
       *     *   If a QoS policy cannot be found, the QoS policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicyWithOptions(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @description *   Before you delete a QoS policy, you must delete all queues in the QoS policy except the default queue. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * *   **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a QoS policy.
       *     *   If a QoS policy is in the **Deleting** state, the QoS policy is being deleted. You can query the QoS policy but cannot perform other operations.
       *     *   If a QoS policy cannot be found, the QoS policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicy(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request);

      /**
       * @summary Deletes a queue from a quality of service (QoS) policy.
       *
       * @description *   You cannot delete the default queue.
       * *   **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a queue. If a queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueueWithOptions(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a queue from a quality of service (QoS) policy.
       *
       * @description *   You cannot delete the default queue.
       * *   **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a queue. If a queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueue(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request);

      /**
       * @summary Deletes a routing policy.
       *
       * @description `DeleteCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
       * *   If a routing policy is in the **Deleting** state, the routing policy is being deleted. You can query the routing policy but cannot perform other operations.
       * *   If a routing policy cannot be found, it is deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMapWithOptions(const Models::DeleteCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routing policy.
       *
       * @description `DeleteCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
       * *   If a routing policy is in the **Deleting** state, the routing policy is being deleted. You can query the routing policy but cannot perform other operations.
       * *   If a routing policy cannot be found, it is deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMap(const Models::DeleteCenRouteMapRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @description `DeleteFlowlog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Deleting** state, the flow log is being deleted. In this case, you can query the flow log but cannot perform other operations.
       * *   If a flow log cannot be found, the flow log is deleted.
       *
       * @param request DeleteFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlogWithOptions(const Models::DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @description `DeleteFlowlog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Deleting** state, the flow log is being deleted. In this case, you can query the flow log but cannot perform other operations.
       * *   If a flow log cannot be found, the flow log is deleted.
       *
       * @param request DeleteFlowlogRequest
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlog(const Models::DeleteFlowlogRequest &request);

      /**
       * @summary Deletes the configuration of a cloud service connected to a Basic Edition transit router.
       *
       * @description **DeleteRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. If the request parameters are invalid, the system returns a request ID, but the cloud service configuration is not deleted. You can call **DescribeRouteServicesInCen** to query the status of the task.
       * *   If a cloud service is in the **Deleting** state, the cloud service configuration is being deleted. In this case, you can only query the cloud service configuration and cannot perform other operations.
       * *   If the specified cloud service configuration cannot be found, the cloud service configuration is deleted.
       *
       * @param request DeleteRouteServiceInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteServiceInCenResponse
       */
      Models::DeleteRouteServiceInCenResponse deleteRouteServiceInCenWithOptions(const Models::DeleteRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of a cloud service connected to a Basic Edition transit router.
       *
       * @description **DeleteRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. If the request parameters are invalid, the system returns a request ID, but the cloud service configuration is not deleted. You can call **DescribeRouteServicesInCen** to query the status of the task.
       * *   If a cloud service is in the **Deleting** state, the cloud service configuration is being deleted. In this case, you can only query the cloud service configuration and cannot perform other operations.
       * *   If the specified cloud service configuration cannot be found, the cloud service configuration is deleted.
       *
       * @param request DeleteRouteServiceInCenRequest
       * @return DeleteRouteServiceInCenResponse
       */
      Models::DeleteRouteServiceInCenResponse deleteRouteServiceInCen(const Models::DeleteRouteServiceInCenRequest &request);

      /**
       * @summary Deletes a specified traffic marking policy.
       *
       * @description *   **DeleteTrafficMarkingPolicy** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *     *   If a traffic marking policy is in the **Deleting** state, the traffic marking policy is being deleted. You can query the traffic marking policy but cannot perform other operations.
       *     *   If a traffic marking policy cannot be found, the traffic marking policy is deleted.
       * *   Before you delete a traffic marking policy, you must delete all traffic classification rules from the policy. For more information, see [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468330.html).
       *
       * @param request DeleteTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMarkingPolicyResponse
       */
      Models::DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicyWithOptions(const Models::DeleteTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified traffic marking policy.
       *
       * @description *   **DeleteTrafficMarkingPolicy** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *     *   If a traffic marking policy is in the **Deleting** state, the traffic marking policy is being deleted. You can query the traffic marking policy but cannot perform other operations.
       *     *   If a traffic marking policy cannot be found, the traffic marking policy is deleted.
       * *   Before you delete a traffic marking policy, you must delete all traffic classification rules from the policy. For more information, see [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468330.html).
       *
       * @param request DeleteTrafficMarkingPolicyRequest
       * @return DeleteTrafficMarkingPolicyResponse
       */
      Models::DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicy(const Models::DeleteTrafficMarkingPolicyRequest &request);

      /**
       * @summary Deletes an aggregate route.
       *
       * @description *   Before you delete an aggregate route, make sure that your network has a redundant route to prevent service interruptions.
       * *   After an aggregate route is deleted, the aggregate route is automatically withdrawn from virtual private clouds (VPCs). Specific routes that fall within the aggregate route are advertised to the VPCs.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregationWithOptions(const Models::DeleteTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an aggregate route.
       *
       * @description *   Before you delete an aggregate route, make sure that your network has a redundant route to prevent service interruptions.
       * *   After an aggregate route is deleted, the aggregate route is automatically withdrawn from virtual private clouds (VPCs). Specific routes that fall within the aggregate route are advertised to the VPCs.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregation(const Models::DeleteTransitRouteTableAggregationRequest &request);

      /**
       * @summary Deletes a transit router.
       *
       * @description **DeleteTransitRouter** is an asynchronous operation. After you send a request, the **request ID** is returned but the operation is still being performed in the system background. You can call **ListTransitRouters** to query the status of a transit router.
       * *   If a transit router is in the **Deleting** state, the transit router is being deleted. In this case, you can query the transit router but cannot perform other operations.
       * *   If a transit router cannot be found, the transit router is deleted.
       * #### Prerequisites
       * Before you delete a transit router, make sure that the following prerequisites are met:
       * - No network instance connections are created on the transit router. 
       * 	
       *     - For more information about how to delete a virtual private cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html). 
       *     - For more information about how to delete a virtual border router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html). 
       *     - For more information about how to delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html). 
       *     - For more information about how to delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *     - For more information about how to delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html). 
       * - No custom route tables are created on the transit router. For more information about how to delete a custom route table, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       *
       * @param request DeleteTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterResponse
       */
      Models::DeleteTransitRouterResponse deleteTransitRouterWithOptions(const Models::DeleteTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a transit router.
       *
       * @description **DeleteTransitRouter** is an asynchronous operation. After you send a request, the **request ID** is returned but the operation is still being performed in the system background. You can call **ListTransitRouters** to query the status of a transit router.
       * *   If a transit router is in the **Deleting** state, the transit router is being deleted. In this case, you can query the transit router but cannot perform other operations.
       * *   If a transit router cannot be found, the transit router is deleted.
       * #### Prerequisites
       * Before you delete a transit router, make sure that the following prerequisites are met:
       * - No network instance connections are created on the transit router. 
       * 	
       *     - For more information about how to delete a virtual private cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html). 
       *     - For more information about how to delete a virtual border router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html). 
       *     - For more information about how to delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html). 
       *     - For more information about how to delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *     - For more information about how to delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html). 
       * - No custom route tables are created on the transit router. For more information about how to delete a custom route table, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       *
       * @param request DeleteTransitRouterRequest
       * @return DeleteTransitRouterResponse
       */
      Models::DeleteTransitRouterResponse deleteTransitRouter(const Models::DeleteTransitRouterRequest &request);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description If IP addresses within the CIDR block have been allocated to network instances, the CIDR block cannot be deleted.
       *
       * @param request DeleteTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterCidrResponse
       */
      Models::DeleteTransitRouterCidrResponse deleteTransitRouterCidrWithOptions(const Models::DeleteTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description If IP addresses within the CIDR block have been allocated to network instances, the CIDR block cannot be deleted.
       *
       * @param request DeleteTransitRouterCidrRequest
       * @return DeleteTransitRouterCidrResponse
       */
      Models::DeleteTransitRouterCidrResponse deleteTransitRouterCidr(const Models::DeleteTransitRouterCidrRequest &request);

      /**
       * @summary Deletes an Express Connect Router (ECR) connection from an Enterprise Edition transit router.
       *
       * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
       * If the ECR connection is in the Detaching state, the ECR connection is being deleted. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If the ECR connection cannot be found, the ECR connection is deleted. Before you call the DeleteTransitRouterEcrAttachment operation, make sure that all request parameters are valid. If a request is invalid, a request ID is returned but the ECR connection is not deleted.
       *
       * @param request DeleteTransitRouterEcrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterEcrAttachmentResponse
       */
      Models::DeleteTransitRouterEcrAttachmentResponse deleteTransitRouterEcrAttachmentWithOptions(const Models::DeleteTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect Router (ECR) connection from an Enterprise Edition transit router.
       *
       * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
       * If the ECR connection is in the Detaching state, the ECR connection is being deleted. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If the ECR connection cannot be found, the ECR connection is deleted. Before you call the DeleteTransitRouterEcrAttachment operation, make sure that all request parameters are valid. If a request is invalid, a request ID is returned but the ECR connection is not deleted.
       *
       * @param request DeleteTransitRouterEcrAttachmentRequest
       * @return DeleteTransitRouterEcrAttachmentResponse
       */
      Models::DeleteTransitRouterEcrAttachmentResponse deleteTransitRouterEcrAttachment(const Models::DeleteTransitRouterEcrAttachmentRequest &request);

      /**
       * @summary Deletes a multicast domain.
       *
       * @description Before you delete a multicast domain, make sure that the following requirements are met:
       * *   The multicast domain is disassociated from all vSwitches. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * *   All multicast sources and members are removed from the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * *   The multicast domain is not added to other multicast domains as a multicast member. If the multicast domain is added to another multicast domain as a multicast member, you must remove the multicast domain from the other multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * *   Make sure all the request parameters are valid. If a request parameter is invalid, a request ID is returned after you call the operation, but the multicast domain is not deleted.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomainWithOptions(const Models::DeleteTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multicast domain.
       *
       * @description Before you delete a multicast domain, make sure that the following requirements are met:
       * *   The multicast domain is disassociated from all vSwitches. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * *   All multicast sources and members are removed from the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * *   The multicast domain is not added to other multicast domains as a multicast member. If the multicast domain is added to another multicast domain as a multicast member, you must remove the multicast domain from the other multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * *   Make sure all the request parameters are valid. If a request parameter is invalid, a request ID is returned after you call the operation, but the multicast domain is not deleted.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomain(const Models::DeleteTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Deletes an inter-region connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterPeerAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call **ListTransitRouterPeerAttachments** to query the status of an inter-region connection.
       * *   If an inter-region connection is in the **Detaching** state, the inter-region connection is being deleted. You can query the inter-region connection but cannot perform other operations.
       * *   If an inter-region connection cannot be found, the inter-region connection is deleted.
       * ## Prerequisites
       * Before you begin, make sure that the Enterprise Edition transit router that you use to create inter-region connections meets the following prerequisites:
       * *   No associated forwarding correlation is established between the inter-region connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the inter-region connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from route tables of Enterprise Edition transit routers, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route table does not contain a route whose next hop is the inter-region connection and that is generated from a prefix list. You can delete routes from a route table by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       * *   No quality of service (QoS) policy is configured for the inter-region connection. For more information about how to delete QoS policies, see [DeleteCenInterRegionTrafficQosPolicy](https://help.aliyun.com/document_detail/427547.html).
       *
       * @param request DeleteTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterPeerAttachmentResponse
       */
      Models::DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachmentWithOptions(const Models::DeleteTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an inter-region connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterPeerAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call **ListTransitRouterPeerAttachments** to query the status of an inter-region connection.
       * *   If an inter-region connection is in the **Detaching** state, the inter-region connection is being deleted. You can query the inter-region connection but cannot perform other operations.
       * *   If an inter-region connection cannot be found, the inter-region connection is deleted.
       * ## Prerequisites
       * Before you begin, make sure that the Enterprise Edition transit router that you use to create inter-region connections meets the following prerequisites:
       * *   No associated forwarding correlation is established between the inter-region connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the inter-region connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from route tables of Enterprise Edition transit routers, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route table does not contain a route whose next hop is the inter-region connection and that is generated from a prefix list. You can delete routes from a route table by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       * *   No quality of service (QoS) policy is configured for the inter-region connection. For more information about how to delete QoS policies, see [DeleteCenInterRegionTrafficQosPolicy](https://help.aliyun.com/document_detail/427547.html).
       *
       * @param request DeleteTransitRouterPeerAttachmentRequest
       * @return DeleteTransitRouterPeerAttachmentResponse
       */
      Models::DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachment(const Models::DeleteTransitRouterPeerAttachmentRequest &request);

      /**
       * @summary Disassociates the route table of an Enterprise Edition transit router from a prefix list.
       *
       * @description After you disassociate a route table of an Enterprise Edition transit router from a prefix list, the routes that point to the CIDR blocks in the prefix list are automatically withdrawn from the route table. Before you disassociate the route table of an Enterprise Edition transit router from a prefix list, you must migrate workloads that use the routes in case services are interrupted.
       *
       * @param request DeleteTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterPrefixListAssociationResponse
       */
      Models::DeleteTransitRouterPrefixListAssociationResponse deleteTransitRouterPrefixListAssociationWithOptions(const Models::DeleteTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates the route table of an Enterprise Edition transit router from a prefix list.
       *
       * @description After you disassociate a route table of an Enterprise Edition transit router from a prefix list, the routes that point to the CIDR blocks in the prefix list are automatically withdrawn from the route table. Before you disassociate the route table of an Enterprise Edition transit router from a prefix list, you must migrate workloads that use the routes in case services are interrupted.
       *
       * @param request DeleteTransitRouterPrefixListAssociationRequest
       * @return DeleteTransitRouterPrefixListAssociationResponse
       */
      Models::DeleteTransitRouterPrefixListAssociationResponse deleteTransitRouterPrefixListAssociation(const Models::DeleteTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Deletes blackhole routes and static routes that point to network instance connections from the route tables of an Enterprise Edition transit router.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If you specify the **TransitRouterRouteEntryId** parameter to delete a specific route, you do not need to configure the **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock**. Otherwise, parameter conflicts occur.
       * *   If you do not specify the **TransitRouterRouteEntryId** parameter, configure the following parameters based on the next hop type of the route that you want to delete:
       *     *   To delete a blackhole route, configure the following parameters: **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType**.
       *     *   To delete routes other than blackhole routes, configure the following parameters: **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId**.
       * *   **DeleteTransitRouterRouteEntry** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of a route entry.
       *     *   If the route entry is in the **Deleting** state, the route entry is being deleted. In this case, you can query the route entry but cannot perform other operations.
       *     *   If a route entry cannot be found, it is deleted.
       * ### [](#)Limits
       * You can call this operation to delete only static routes. Automatically learned routes are not supported. You can call the [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) operation to query route types.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntryWithOptions(const Models::DeleteTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes blackhole routes and static routes that point to network instance connections from the route tables of an Enterprise Edition transit router.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If you specify the **TransitRouterRouteEntryId** parameter to delete a specific route, you do not need to configure the **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock**. Otherwise, parameter conflicts occur.
       * *   If you do not specify the **TransitRouterRouteEntryId** parameter, configure the following parameters based on the next hop type of the route that you want to delete:
       *     *   To delete a blackhole route, configure the following parameters: **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType**.
       *     *   To delete routes other than blackhole routes, configure the following parameters: **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId**.
       * *   **DeleteTransitRouterRouteEntry** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of a route entry.
       *     *   If the route entry is in the **Deleting** state, the route entry is being deleted. In this case, you can query the route entry but cannot perform other operations.
       *     *   If a route entry cannot be found, it is deleted.
       * ### [](#)Limits
       * You can call this operation to delete only static routes. Automatically learned routes are not supported. You can call the [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) operation to query route types.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntry(const Models::DeleteTransitRouterRouteEntryRequest &request);

      /**
       * @summary Deletes a custom route table from an Enterprise Edition transit router.
       *
       * @description *   You cannot delete the default route table of an Enterprise Edition transit router.
       * *   **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of a custom route table.
       *     *   If a custom route table is in the Deleting state, the custom route table is being deleted. In this case, you can query the custom route table but cannot perform other operations.
       *     *   If a custom route table cannot be found, the custom route table is deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTableWithOptions(const Models::DeleteTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom route table from an Enterprise Edition transit router.
       *
       * @description *   You cannot delete the default route table of an Enterprise Edition transit router.
       * *   **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of a custom route table.
       *     *   If a custom route table is in the Deleting state, the custom route table is being deleted. In this case, you can query the custom route table but cannot perform other operations.
       *     *   If a custom route table cannot be found, the custom route table is deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTable(const Models::DeleteTransitRouterRouteTableRequest &request);

      /**
       * @summary Deletes a virtual border router (VBR) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of a VBR connection.
       * *   If a VBR connection is in the **Detaching** state, the VBR connection is being deleted. You can query the VBR connection but cannot perform other operations.
       * *   If a VBR connection cannot be found, the VBR connection is deleted.
       * ## Prerequisites
       * Before you delete a VBR connection for an Enterprise Edition transit router, make sure that the following requirements are met:
       * *   No associated forwarding correlation is established between the VBR connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the VBR connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom route entries, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a route whose next hop is the VBR connection and that is generated from a prefix list. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachmentWithOptions(const Models::DeleteTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual border router (VBR) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of a VBR connection.
       * *   If a VBR connection is in the **Detaching** state, the VBR connection is being deleted. You can query the VBR connection but cannot perform other operations.
       * *   If a VBR connection cannot be found, the VBR connection is deleted.
       * ## Prerequisites
       * Before you delete a VBR connection for an Enterprise Edition transit router, make sure that the following requirements are met:
       * *   No associated forwarding correlation is established between the VBR connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the VBR connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom route entries, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a route whose next hop is the VBR connection and that is generated from a prefix list. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachment(const Models::DeleteTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       * *   If a VPC connection is in the **Detaching** state, the VPC connection is being deleted. You can query the VPC connection but cannot perform other operations.
       * *   If a VPC connection cannot be found, it is deleted.
       * ## Prerequisites
       * Before you delete a VPC connection, make sure that the following requirements are met:
       * *   No associated forwarding correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route table of the VPC does not contain routes that point to the VPC connection. For more information about how to delete routes from a VPC route table, see [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from the route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a route that is generated from a prefix list and the next hop is the VPC connection. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       *
       * @param request DeleteTransitRouterVpcAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVpcAttachmentResponse
       */
      Models::DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachmentWithOptions(const Models::DeleteTransitRouterVpcAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       * *   If a VPC connection is in the **Detaching** state, the VPC connection is being deleted. You can query the VPC connection but cannot perform other operations.
       * *   If a VPC connection cannot be found, it is deleted.
       * ## Prerequisites
       * Before you delete a VPC connection, make sure that the following requirements are met:
       * *   No associated forwarding correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * *   No route learning correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * *   The route table of the VPC does not contain routes that point to the VPC connection. For more information about how to delete routes from a VPC route table, see [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from the route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * *   The route tables of the Enterprise Edition transit router do not contain a route that is generated from a prefix list and the next hop is the VPC connection. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       *
       * @param request DeleteTransitRouterVpcAttachmentRequest
       * @return DeleteTransitRouterVpcAttachmentResponse
       */
      Models::DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachment(const Models::DeleteTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary Deletes a VPN attachment.
       *
       * @description Before you call the **DeleteTransitRouterVpnAttachment** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the VPN attachment is not deleted.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachmentWithOptions(const Models::DeleteTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPN attachment.
       *
       * @description Before you call the **DeleteTransitRouterVpnAttachment** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the VPN attachment is not deleted.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachment(const Models::DeleteTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary Removes a multicast member from a multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       * *   If the multicast member is in the **Deregistering** state, the multicast member is being removed. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       * *   If a multicast member cannot be found, the multicast member is removed from the multicast group.``
       * Before you call the DeregisterTransitRouterMulticastGroupMembers operation, make sure that all request parameters are valid. If a request parameter is invalid, a request ID is returned but the multicast member is not removed.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembersWithOptions(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a multicast member from a multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       * *   If the multicast member is in the **Deregistering** state, the multicast member is being removed. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       * *   If a multicast member cannot be found, the multicast member is removed from the multicast group.``
       * Before you call the DeregisterTransitRouterMulticastGroupMembers operation, make sure that all request parameters are valid. If a request parameter is invalid, a request ID is returned but the multicast member is not removed.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembers(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary Deletes a multicast source from a multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After a request a sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast source.
       * *   If a multicast source is in the **Deregistering** state, the multicast source is being deleted. You can query the multicast source but cannot perform other operations.
       * *   If a multicast source cannot be found, the multicast source is deleted.
       * Before you call DeregisterTransitRouterMulticastGroupSources, make sure that all the request parameters are valid. If a request parameter is invalid, a request ID is returned but the multicast source is not deleted.
       *
       * @param request DeregisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::DeregisterTransitRouterMulticastGroupSourcesResponse deregisterTransitRouterMulticastGroupSourcesWithOptions(const Models::DeregisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multicast source from a multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After a request a sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast source.
       * *   If a multicast source is in the **Deregistering** state, the multicast source is being deleted. You can query the multicast source but cannot perform other operations.
       * *   If a multicast source cannot be found, the multicast source is deleted.
       * Before you call DeregisterTransitRouterMulticastGroupSources, make sure that all the request parameters are valid. If a request parameter is invalid, a request ID is returned but the multicast source is not deleted.
       *
       * @param request DeregisterTransitRouterMulticastGroupSourcesRequest
       * @return DeregisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::DeregisterTransitRouterMulticastGroupSourcesResponse deregisterTransitRouterMulticastGroupSources(const Models::DeregisterTransitRouterMulticastGroupSourcesRequest &request);

      /**
       * @summary Queries the information about a network instance, such as a virtual private cloud (VPC), a virtual border router, or a Cloud Connect Network (CCN) instance, that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenAttachedChildInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenAttachedChildInstanceAttributeResponse
       */
      Models::DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttributeWithOptions(const Models::DescribeCenAttachedChildInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a network instance, such as a virtual private cloud (VPC), a virtual border router, or a Cloud Connect Network (CCN) instance, that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenAttachedChildInstanceAttributeRequest
       * @return DescribeCenAttachedChildInstanceAttributeResponse
       */
      Models::DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttribute(const Models::DescribeCenAttachedChildInstanceAttributeRequest &request);

      /**
       * @summary Queries the network instances that are attached to a CEN instance.
       *
       * @description You can use one of the following methods to query the information about the network instances that are attached to a CEN instance:
       * *   You can query all the network instances that are attached to a CEN instance by setting the `CenId` parameter.
       * *   You can query the network instances that are attached to a CEN instance in a specified region by setting the `CenId` and `ChildInstanceRegionId` parameters.
       * *   You can query a specified type of network instances that are attached to a CEN instance by setting the `CenId` and `ChildInstanceType` parameters.
       *
       * @param request DescribeCenAttachedChildInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenAttachedChildInstancesResponse
       */
      Models::DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstancesWithOptions(const Models::DescribeCenAttachedChildInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network instances that are attached to a CEN instance.
       *
       * @description You can use one of the following methods to query the information about the network instances that are attached to a CEN instance:
       * *   You can query all the network instances that are attached to a CEN instance by setting the `CenId` parameter.
       * *   You can query the network instances that are attached to a CEN instance in a specified region by setting the `CenId` and `ChildInstanceRegionId` parameters.
       * *   You can query a specified type of network instances that are attached to a CEN instance by setting the `CenId` and `ChildInstanceType` parameters.
       *
       * @param request DescribeCenAttachedChildInstancesRequest
       * @return DescribeCenAttachedChildInstancesResponse
       */
      Models::DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstances(const Models::DescribeCenAttachedChildInstancesRequest &request);

      /**
       * @summary Queries the information about bandwidth plans.
       *
       * @param request DescribeCenBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenBandwidthPackagesResponse
       */
      Models::DescribeCenBandwidthPackagesResponse describeCenBandwidthPackagesWithOptions(const Models::DescribeCenBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about bandwidth plans.
       *
       * @param request DescribeCenBandwidthPackagesRequest
       * @return DescribeCenBandwidthPackagesResponse
       */
      Models::DescribeCenBandwidthPackagesResponse describeCenBandwidthPackages(const Models::DescribeCenBandwidthPackagesRequest &request);

      /**
       * @summary Queries the routes of a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenChildInstanceRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenChildInstanceRouteEntriesResponse
       */
      Models::DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntriesWithOptions(const Models::DescribeCenChildInstanceRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes of a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenChildInstanceRouteEntriesRequest
       * @return DescribeCenChildInstanceRouteEntriesResponse
       */
      Models::DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntries(const Models::DescribeCenChildInstanceRouteEntriesRequest &request);

      /**
       * @summary Queries the remaining bandwidth of a bandwidth plan.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidthWithOptions(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining bandwidth of a bandwidth plan.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidth(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request);

      /**
       * @summary Queries the areas that a Cloud Enterprise Network (CEN) instance can connect.
       *
       * @param request DescribeCenGeographicSpansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpansWithOptions(const Models::DescribeCenGeographicSpansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the areas that a Cloud Enterprise Network (CEN) instance can connect.
       *
       * @param request DescribeCenGeographicSpansRequest
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpans(const Models::DescribeCenGeographicSpansRequest &request);

      /**
       * @summary Queries the bandwidth of connections between regions.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimitsWithOptions(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth of connections between regions.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimits(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request);

      /**
       * @summary Queries the connections to PrivateZone.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutesWithOptions(const Models::DescribeCenPrivateZoneRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connections to PrivateZone.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutes(const Models::DescribeCenPrivateZoneRoutesRequest &request);

      /**
       * @summary Queries the details about routes in a region for a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntriesWithOptions(const Models::DescribeCenRegionDomainRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about routes in a region for a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntries(const Models::DescribeCenRegionDomainRouteEntriesRequest &request);

      /**
       * @summary Queries routing policies.
       *
       * @param request DescribeCenRouteMapsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMapsWithOptions(const Models::DescribeCenRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries routing policies.
       *
       * @param request DescribeCenRouteMapsRequest
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMaps(const Models::DescribeCenRouteMapsRequest &request);

      /**
       * @summary Queries the health check configurations of virtual border routers (VBRs) in a region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheckWithOptions(const Models::DescribeCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check configurations of virtual border routers (VBRs) in a region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheck(const Models::DescribeCenVbrHealthCheckRequest &request);

      /**
       * @summary Queries the information about your Cloud Enterprise Network (CEN) instances.
       *
       * @param request DescribeCensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCensWithOptions(const Models::DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about your Cloud Enterprise Network (CEN) instances.
       *
       * @param request DescribeCensRequest
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCens(const Models::DescribeCensRequest &request);

      /**
       * @summary Queries the regions in which you can attach network instances to Cloud Enterprise Network (CEN) instances.
       *
       * @description The regions that support CEN vary based on the network instance type. To query the regions where you can attach a specified type of network instance to CEN, set the `ProductType` parameter. If you do not set the `ProductType` parameter, the system queries all regions in which you can attach network instances to CEN, regardless of the network instance type.
       *
       * @param request DescribeChildInstanceRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChildInstanceRegionsResponse
       */
      Models::DescribeChildInstanceRegionsResponse describeChildInstanceRegionsWithOptions(const Models::DescribeChildInstanceRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which you can attach network instances to Cloud Enterprise Network (CEN) instances.
       *
       * @description The regions that support CEN vary based on the network instance type. To query the regions where you can attach a specified type of network instance to CEN, set the `ProductType` parameter. If you do not set the `ProductType` parameter, the system queries all regions in which you can attach network instances to CEN, regardless of the network instance type.
       *
       * @param request DescribeChildInstanceRegionsRequest
       * @return DescribeChildInstanceRegionsResponse
       */
      Models::DescribeChildInstanceRegionsResponse describeChildInstanceRegions(const Models::DescribeChildInstanceRegionsRequest &request);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowlogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowlogsResponse
       */
      Models::DescribeFlowlogsResponse describeFlowlogsWithOptions(const Models::DescribeFlowlogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowlogsRequest
       * @return DescribeFlowlogsResponse
       */
      Models::DescribeFlowlogsResponse describeFlowlogs(const Models::DescribeFlowlogsRequest &request);

      /**
       * @summary Queries regions in an area.
       *
       * @param request DescribeGeographicRegionMembershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGeographicRegionMembershipResponse
       */
      Models::DescribeGeographicRegionMembershipResponse describeGeographicRegionMembershipWithOptions(const Models::DescribeGeographicRegionMembershipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions in an area.
       *
       * @param request DescribeGeographicRegionMembershipRequest
       * @return DescribeGeographicRegionMembershipResponse
       */
      Models::DescribeGeographicRegionMembershipResponse describeGeographicRegionMembership(const Models::DescribeGeographicRegionMembershipRequest &request);

      /**
       * @summary Queries the network instances of other Alibaba Cloud accounts that have granted permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you call the **DescribeGrantRulesToCen** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the network instances are not returned.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network instances of other Alibaba Cloud accounts that have granted permissions to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you call the **DescribeGrantRulesToCen** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the network instances are not returned.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCen(const Models::DescribeGrantRulesToCenRequest &request);

      /**
       * @summary Queries the information about the permissions that the Alibaba Cloud account of a network instance granted to a Cloud Enterprise Network (CEN) instance in a different Alibaba Cloud account, the ID of the CEN instance, and the Alibaba Cloud account that pays the fees of the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResourceWithOptions(const Models::DescribeGrantRulesToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the permissions that the Alibaba Cloud account of a network instance granted to a Cloud Enterprise Network (CEN) instance in a different Alibaba Cloud account, the ID of the CEN instance, and the Alibaba Cloud account that pays the fees of the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResource(const Models::DescribeGrantRulesToResourceRequest &request);

      /**
       * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntriesWithOptions(const Models::DescribePublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntries(const Models::DescribePublishedRouteEntriesRequest &request);

      /**
       * @summary Queries overlapping routes.
       *
       * @param request DescribeRouteConflictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflictWithOptions(const Models::DescribeRouteConflictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries overlapping routes.
       *
       * @param request DescribeRouteConflictRequest
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflict(const Models::DescribeRouteConflictRequest &request);

      /**
       * @summary Queries the configurations of cloud services, such as the cloud service status and the ID of the associated VPC.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCenWithOptions(const Models::DescribeRouteServicesInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of cloud services, such as the cloud service status and the ID of the associated VPC.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCen(const Models::DescribeRouteServicesInCenRequest &request);

      /**
       * @summary Queries the aggregate routes on an Enterprise Edition transit router.
       *
       * @description You can specify the values of the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specified aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregated routes in the route table are queried.
       *
       * @param request DescribeTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouteTableAggregationResponse
       */
      Models::DescribeTransitRouteTableAggregationResponse describeTransitRouteTableAggregationWithOptions(const Models::DescribeTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregate routes on an Enterprise Edition transit router.
       *
       * @description You can specify the values of the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specified aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregated routes in the route table are queried.
       *
       * @param request DescribeTransitRouteTableAggregationRequest
       * @return DescribeTransitRouteTableAggregationResponse
       */
      Models::DescribeTransitRouteTableAggregationResponse describeTransitRouteTableAggregation(const Models::DescribeTransitRouteTableAggregationRequest &request);

      /**
       * @summary Queries the configuration of an aggregate route.
       *
       * @param request DescribeTransitRouteTableAggregationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouteTableAggregationDetailResponse
       */
      Models::DescribeTransitRouteTableAggregationDetailResponse describeTransitRouteTableAggregationDetailWithOptions(const Models::DescribeTransitRouteTableAggregationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an aggregate route.
       *
       * @param request DescribeTransitRouteTableAggregationDetailRequest
       * @return DescribeTransitRouteTableAggregationDetailResponse
       */
      Models::DescribeTransitRouteTableAggregationDetailResponse describeTransitRouteTableAggregationDetail(const Models::DescribeTransitRouteTableAggregationDetailRequest &request);

      /**
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DetachCenChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCenChildInstanceResponse
       */
      Models::DetachCenChildInstanceResponse detachCenChildInstanceWithOptions(const Models::DetachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DetachCenChildInstanceRequest
       * @return DetachCenChildInstanceResponse
       */
      Models::DetachCenChildInstanceResponse detachCenChildInstance(const Models::DetachCenChildInstanceRequest &request);

      /**
       * @summary Disables the health check feature for a virtual border router (VBR).
       *
       * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If the health check configurations cannot be found, the health check configurations are deleted.
       *
       * @param request DisableCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCenVbrHealthCheckResponse
       */
      Models::DisableCenVbrHealthCheckResponse disableCenVbrHealthCheckWithOptions(const Models::DisableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the health check feature for a virtual border router (VBR).
       *
       * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If the health check configurations cannot be found, the health check configurations are deleted.
       *
       * @param request DisableCenVbrHealthCheckRequest
       * @return DisableCenVbrHealthCheckResponse
       */
      Models::DisableCenVbrHealthCheckResponse disableCenVbrHealthCheck(const Models::DisableCenVbrHealthCheckRequest &request);

      /**
       * @summary Deletes a route learning correlation.
       *
       * @description **DisableTransitRouterRouteTablePropagation** is an synchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the status of a route learning correlation.
       * *   If a route learning correlation is in the **Disabling** state, the route learning correlation is being deleted. You can query the route learning correlation but cannot perform other operations.
       * *   If a route learning correlation cannot be found, the route learning correlation is deleted.
       *
       * @param request DisableTransitRouterRouteTablePropagationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableTransitRouterRouteTablePropagationResponse
       */
      Models::DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagationWithOptions(const Models::DisableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route learning correlation.
       *
       * @description **DisableTransitRouterRouteTablePropagation** is an synchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the status of a route learning correlation.
       * *   If a route learning correlation is in the **Disabling** state, the route learning correlation is being deleted. You can query the route learning correlation but cannot perform other operations.
       * *   If a route learning correlation cannot be found, the route learning correlation is deleted.
       *
       * @param request DisableTransitRouterRouteTablePropagationRequest
       * @return DisableTransitRouterRouteTablePropagationResponse
       */
      Models::DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagation(const Models::DisableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Disassociates a vSwitch from a multicast domain.
       *
       * @description *   Before you delete a vSwitch from a multicast domain, make sure that the vSwitch does not contain a multicast source or a multicast member. For more information about how to remove a multicast source or member from a vSwitch, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * *   If a request parameter is invalid, the system returns a request ID but does not disassociate the vSwitch from the multicast domain.
       * *   **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterMulticastDomainAssociations** operation to query whether a vSwitch is disassociated from the specified multicast domain.
       *     *   If the status is **Dissociating**, it indicates that the vSwitch is being disassociated from the specified multicast domain. You can query the vSwitch but cannot perform other operations on the vSwitch.
       *     *   If the vSwitch cannot be found, the vSwitch is disassociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomainWithOptions(const Models::DisassociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a vSwitch from a multicast domain.
       *
       * @description *   Before you delete a vSwitch from a multicast domain, make sure that the vSwitch does not contain a multicast source or a multicast member. For more information about how to remove a multicast source or member from a vSwitch, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * *   If a request parameter is invalid, the system returns a request ID but does not disassociate the vSwitch from the multicast domain.
       * *   **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterMulticastDomainAssociations** operation to query whether a vSwitch is disassociated from the specified multicast domain.
       *     *   If the status is **Dissociating**, it indicates that the vSwitch is being disassociated from the specified multicast domain. You can query the vSwitch but cannot perform other operations on the vSwitch.
       *     *   If the vSwitch cannot be found, the vSwitch is disassociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomain(const Models::DisassociateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Deletes an associated forwarding correlation.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query an associated forwarding correlation between a network instance connection and a route table.
       * *   If an associated forwarding correlation is in the **Dissociating** state, the associated forwarding correlation is being deleted. You can query the associated forwarding correlation but cannot perform other operations.
       * *   If an associated forwarding correlation cannot be found, the associated forwarding correlation is deleted.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTableWithOptions(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an associated forwarding correlation.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query an associated forwarding correlation between a network instance connection and a route table.
       * *   If an associated forwarding correlation is in the **Dissociating** state, the associated forwarding correlation is being deleted. You can query the associated forwarding correlation but cannot perform other operations.
       * *   If an associated forwarding correlation cannot be found, the associated forwarding correlation is deleted.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTable(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) to detect anomalies on Express Connect circuits. You can modify the health check configuration of a VBR based on business requirements.
       *
       * @description You can enable the health check feature for a VBR to monitor the Express Connect circuit between your data center and Alibaba Cloud. This helps you detect connection issues in a timely manner.
       * Before you use the health check feature, take note of the following information:
       * *   If your VBR uses static routing, you must add a static route for the data center that is connected to the VBR after you configure the health check feature. Set the destination CIDR block to the source IP address of health checks, set the mask length to 32, and set the next hop to the IP address of the VBR on the Alibaba Cloud side.
       * *   If your VBR uses dynamic Border Gateway Protocol (BGP) routing, you do not need to add routes for the data center.
       * *   **EnableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If health check configurations are returned, health check is configured or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheckWithOptions(const Models::EnableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) to detect anomalies on Express Connect circuits. You can modify the health check configuration of a VBR based on business requirements.
       *
       * @description You can enable the health check feature for a VBR to monitor the Express Connect circuit between your data center and Alibaba Cloud. This helps you detect connection issues in a timely manner.
       * Before you use the health check feature, take note of the following information:
       * *   If your VBR uses static routing, you must add a static route for the data center that is connected to the VBR after you configure the health check feature. Set the destination CIDR block to the source IP address of health checks, set the mask length to 32, and set the next hop to the IP address of the VBR on the Alibaba Cloud side.
       * *   If your VBR uses dynamic Border Gateway Protocol (BGP) routing, you do not need to add routes for the data center.
       * *   **EnableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If health check configurations are returned, health check is configured or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheck(const Models::EnableCenVbrHealthCheckRequest &request);

      /**
       * @summary Creates a route learning correlation.
       *
       * @description After you establish a network instance connection on a transit router, you can create a route learning correlation for the network instance connection. Then, the routes of the connected network instance are automatically advertised to the route table of the transit router. Before you begin, we recommend that you take note of the following rules:
       * *   You can create route learning correlations only on Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **EnableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning status between a network instance connection and a route table.
       *     *   **Enabling** indicates that a route learning correlation is being created between the network instance connection and route table. You can query the route learning correlation but cannot perform other operations.
       *     *   **Active** indicates that the route learning correlation is created between the network instance connection and route table.
       *
       * @param request EnableTransitRouterRouteTablePropagationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableTransitRouterRouteTablePropagationResponse
       */
      Models::EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagationWithOptions(const Models::EnableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route learning correlation.
       *
       * @description After you establish a network instance connection on a transit router, you can create a route learning correlation for the network instance connection. Then, the routes of the connected network instance are automatically advertised to the route table of the transit router. Before you begin, we recommend that you take note of the following rules:
       * *   You can create route learning correlations only on Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * *   **EnableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning status between a network instance connection and a route table.
       *     *   **Enabling** indicates that a route learning correlation is being created between the network instance connection and route table. You can query the route learning correlation but cannot perform other operations.
       *     *   **Active** indicates that the route learning correlation is created between the network instance connection and route table.
       *
       * @param request EnableTransitRouterRouteTablePropagationRequest
       * @return EnableTransitRouterRouteTablePropagationResponse
       */
      Models::EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagation(const Models::EnableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Grants a transit router permissions on network instances that belong to another Alibaba Cloud account. To connect a transit router of Account B to a network instance of Account A, you must use Account A to grant permissions to the transit router of Account B.
       *
       * @description *   The `GrantInstanceToTransitRouter` operation can be used to grant transit routers permissions on network instances that belong to other Alibaba Cloud accounts, including virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs).
       *     To grant transit routers permissions on Cloud Connect Network (CCN) instances, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * *   Before you call `GrantInstanceToTransitRouter`, take note of the billing rules, permission limits, and prerequisites on permission management of transit routers. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   Before you grant a transit router permissions on a network instance, make sure that the following requirements are met:
       *     The account to which the network instance belongs and the account to which the transit router belongs are of the same type.
       *     The ID of the Alibaba Cloud account to which the transit router belongs is obtained.
       *     The ID of the Cloud Enterprise Network (CEN) instance to which the Enterprise Edition transit router belongs is obtained.
       *     Before you grant a transit router permissions on a VBR, contact your account manager to acquire permissions on the VBR.
       *     Before you grant a transit router permissions on an IPsec-VPN connection, make sure that the IPsec-VPN connection is not associated with a resource.
       *     If the IPsec-VPN connection is attached to a VPN gateway, the IPsec-VPN connection cannot be attached to transit routers within the same account or different accounts.
       *     If the IPsec-VPN connection is attached to a transit router, detach the IPsec-VPN connection from the transit router. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouterWithOptions(const Models::GrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a transit router permissions on network instances that belong to another Alibaba Cloud account. To connect a transit router of Account B to a network instance of Account A, you must use Account A to grant permissions to the transit router of Account B.
       *
       * @description *   The `GrantInstanceToTransitRouter` operation can be used to grant transit routers permissions on network instances that belong to other Alibaba Cloud accounts, including virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs).
       *     To grant transit routers permissions on Cloud Connect Network (CCN) instances, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * *   Before you call `GrantInstanceToTransitRouter`, take note of the billing rules, permission limits, and prerequisites on permission management of transit routers. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * *   Before you grant a transit router permissions on a network instance, make sure that the following requirements are met:
       *     The account to which the network instance belongs and the account to which the transit router belongs are of the same type.
       *     The ID of the Alibaba Cloud account to which the transit router belongs is obtained.
       *     The ID of the Cloud Enterprise Network (CEN) instance to which the Enterprise Edition transit router belongs is obtained.
       *     Before you grant a transit router permissions on a VBR, contact your account manager to acquire permissions on the VBR.
       *     Before you grant a transit router permissions on an IPsec-VPN connection, make sure that the IPsec-VPN connection is not associated with a resource.
       *     If the IPsec-VPN connection is attached to a VPN gateway, the IPsec-VPN connection cannot be attached to transit routers within the same account or different accounts.
       *     If the IPsec-VPN connection is attached to a transit router, detach the IPsec-VPN connection from the transit router. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouter(const Models::GrantInstanceToTransitRouterRequest &request);

      /**
       * @summary Queries routes in route tables of network instances that point to network instance connections on Enterprise Edition transit routers.
       *
       * @description Before you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that all request parameter values are valid. If a parameter is set to an invalid value, a request ID is returned, but the routes to the network instance are not returned.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachmentWithOptions(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries routes in route tables of network instances that point to network instance connections on Enterprise Edition transit routers.
       *
       * @description Before you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that all request parameter values are valid. If a parameter is set to an invalid value, a request ID is returned, but the routes to the network instance are not returned.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachment(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request);

      /**
       * @summary Queries quality of service (QoS) policies.
       *
       * @description Before you call the **ListCenInterRegionTrafficQosPolicies** operation, take note of the following information:
       * *   You must specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * *   If you do not specify a QoS policy ID (**TrafficQosPolicyId**), the system returns information based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. The information about the queues in the QoS policies is not returned. In this case, the **TrafficQosQueues** parameter is not included in the response.
       * *   If you specify a QoS policy ID (**TrafficQosPolicyId**), the system returns the information about the QoS policy and queues in the QoS policy. In this case, the **TrafficQosQueues** parameter is included in the response. If the value of the **TrafficQosQueues** parameter is an empty string, it indicates that the QoS policy contains only the default queue.
       * *   Make sure that all the request parameters are valid. If a request parameter is invalid, a request ID is returned but the information about the QoS policy is not returned.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPoliciesWithOptions(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality of service (QoS) policies.
       *
       * @description Before you call the **ListCenInterRegionTrafficQosPolicies** operation, take note of the following information:
       * *   You must specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * *   If you do not specify a QoS policy ID (**TrafficQosPolicyId**), the system returns information based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. The information about the queues in the QoS policies is not returned. In this case, the **TrafficQosQueues** parameter is not included in the response.
       * *   If you specify a QoS policy ID (**TrafficQosPolicyId**), the system returns the information about the QoS policy and queues in the QoS policy. In this case, the **TrafficQosQueues** parameter is included in the response. If the value of the **TrafficQosQueues** parameter is an empty string, it indicates that the QoS policy contains only the default queue.
       * *   Make sure that all the request parameters are valid. If a request parameter is invalid, a request ID is returned but the information about the QoS policy is not returned.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPolicies(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request);

      /**
       * @summary Queries the information about quality of service (QoS) queues.
       *
       * @description You must specify at least one of the **TransitRouterId**, **TrafficQosPolicyId**, and **TrafficQosQueueId** parameters.
       * Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the QoS queue information is not returned.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueuesWithOptions(const Models::ListCenInterRegionTrafficQosQueuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about quality of service (QoS) queues.
       *
       * @description You must specify at least one of the **TransitRouterId**, **TrafficQosPolicyId**, and **TrafficQosQueueId** parameters.
       * Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the QoS queue information is not returned.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueues(const Models::ListCenInterRegionTrafficQosQueuesRequest &request);

      /**
       * @summary Queries the elastic network interfaces (ENIs) that can be used as multicast sources or members in a specified virtual private cloud (VPC).
       *
       * @description Before you call `ListGrantVSwitchEnis`, make sure that the VPC is attached to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnisWithOptions(const Models::ListGrantVSwitchEnisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the elastic network interfaces (ENIs) that can be used as multicast sources or members in a specified virtual private cloud (VPC).
       *
       * @description Before you call `ListGrantVSwitchEnis`, make sure that the VPC is attached to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnis(const Models::ListGrantVSwitchEnisRequest &request);

      /**
       * @summary Queries the vSwitches in a virtual private cloud (VPC) that belongs to another Alibaba Cloud account and is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you call the `ListGrantVSwitchesToCen` operation, make sure that the following requirements are met:
       * *   The permissions on the VPC are granted to the CEN instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * *   The VPC is attached to the CEN instance.
       *     *   For more information about how to connect an Enterprise Edition transit router to a VPC, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *     *   For more information about how to connect a Basic Edition transit router to a VPC, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCenWithOptions(const Models::ListGrantVSwitchesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vSwitches in a virtual private cloud (VPC) that belongs to another Alibaba Cloud account and is attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you call the `ListGrantVSwitchesToCen` operation, make sure that the following requirements are met:
       * *   The permissions on the VPC are granted to the CEN instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * *   The VPC is attached to the CEN instance.
       *     *   For more information about how to connect an Enterprise Edition transit router to a VPC, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *     *   For more information about how to connect a Basic Edition transit router to a VPC, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCen(const Models::ListGrantVSwitchesToCenRequest &request);

      /**
       * @summary Queries the information about tags that are added to a Cloud Enterprise Network (CEN) instance.
       *
       * @description To call this operation, you must set at least one of **ResourceId.N** and **Tag.N.Key**.
       * *   If you set only **ResourceId.N**, the tags that are added to the specified CEN instances are returned.
       * *   If you set only **Tag.N.Key**, the CEN instances that have the specified tags are returned.
       * *   If you set both **ResourceId.N** and **Tag.N.Key**, the specified tags that are added to the specified CEN instances are returned.
       *     *   Make sure that the CEN instance specified by **ResourceId.N** has the tag specified by **Tag.N.Key**. Otherwise, the response returns null.
       *     *   If multiple tag keys are specified, the logical operator among these tag keys is **AND**.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about tags that are added to a Cloud Enterprise Network (CEN) instance.
       *
       * @description To call this operation, you must set at least one of **ResourceId.N** and **Tag.N.Key**.
       * *   If you set only **ResourceId.N**, the tags that are added to the specified CEN instances are returned.
       * *   If you set only **Tag.N.Key**, the CEN instances that have the specified tags are returned.
       * *   If you set both **ResourceId.N** and **Tag.N.Key**, the specified tags that are added to the specified CEN instances are returned.
       *     *   Make sure that the CEN instance specified by **ResourceId.N** has the tag specified by **Tag.N.Key**. Otherwise, the response returns null.
       *     *   If multiple tag keys are specified, the logical operator among these tag keys is **AND**.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the details about a traffic marking policy, such as the status and priority.
       *
       * @description Before you call the **ListTrafficMarkingPolicies** operation, take note of the following limits:
       * *   Specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * *   If you do not specify a traffic marking policy ID (**TrafficMarkingPolicyId**), the operation queries only the information about the traffic marking policy based on the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. The **TrafficMatchRules** parameter that contains the information about the traffic classification rules is not returned.
       * *   If you specify a traffic marking policy ID (**TrafficMarkingPolicyId**), the operation queries the information about the traffic marking policy and traffic classification rules. The **TrafficMatchRules** parameter is returned in the response. If the value of the **TrafficMatchRules** parameter is an empty array, the traffic marking policy does not contain a traffic classification rule.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPoliciesWithOptions(const Models::ListTrafficMarkingPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a traffic marking policy, such as the status and priority.
       *
       * @description Before you call the **ListTrafficMarkingPolicies** operation, take note of the following limits:
       * *   Specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * *   If you do not specify a traffic marking policy ID (**TrafficMarkingPolicyId**), the operation queries only the information about the traffic marking policy based on the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. The **TrafficMatchRules** parameter that contains the information about the traffic classification rules is not returned.
       * *   If you specify a traffic marking policy ID (**TrafficMarkingPolicyId**), the operation queries the information about the traffic marking policy and traffic classification rules. The **TrafficMatchRules** parameter is returned in the response. If the value of the **TrafficMatchRules** parameter is an empty array, the traffic marking policy does not contain a traffic classification rule.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPolicies(const Models::ListTrafficMarkingPoliciesRequest &request);

      /**
       * @summary Queries the zones that support Enterprise Edition transit routers in a region.
       *
       * @description *   You can call the **ListTransitRouterAvailableResource** operation to query the zones that support Enterprise Edition transit routers in a specified region.
       *     *   If you do not set **SupportMulticast** to **true**, general-purpose zones that support Enterprise Edition transit routers are queried.
       *     *   If you set **SupportMulticast** to **true**, zones in which Enterprise Edition transit routers support multicast are queried.
       * *   On May 31, 2022, VPC-connected Enterprise Edition transit routers were optimized. Optimized Enterprise Edition transit routers do not require you to specify the primary and secondary zones when you connect VPCs to the Enterprise Edition transit routers. You can specify one or more zones.
       *     *   If your Enterprise Edition transit router has not been optimized, you must specify the primary and secondary zones when you connect a VPC to your Enterprise Edition transit router. After you call **ListTransitRouterAvailableResource**, you can call **MasterZones** and **SlaveZones** to query the primary and secondary zones.
       *     *   If your Enterprise Edition transit router has been optimized, you can specify a zone as needed when you connect a VPC to your Enterprise Edition transit router. After you call **ListTransitRouterAvailableResource**, you can call **AvailableZones** to query the zones.
       * For more information about the optimization, see [Announcement: Optimization on VPC-connected Enterprise Edition transit routers](https://help.aliyun.com/document_detail/434191.html).
       *
       * @param request ListTransitRouterAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterAvailableResourceResponse
       */
      Models::ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResourceWithOptions(const Models::ListTransitRouterAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that support Enterprise Edition transit routers in a region.
       *
       * @description *   You can call the **ListTransitRouterAvailableResource** operation to query the zones that support Enterprise Edition transit routers in a specified region.
       *     *   If you do not set **SupportMulticast** to **true**, general-purpose zones that support Enterprise Edition transit routers are queried.
       *     *   If you set **SupportMulticast** to **true**, zones in which Enterprise Edition transit routers support multicast are queried.
       * *   On May 31, 2022, VPC-connected Enterprise Edition transit routers were optimized. Optimized Enterprise Edition transit routers do not require you to specify the primary and secondary zones when you connect VPCs to the Enterprise Edition transit routers. You can specify one or more zones.
       *     *   If your Enterprise Edition transit router has not been optimized, you must specify the primary and secondary zones when you connect a VPC to your Enterprise Edition transit router. After you call **ListTransitRouterAvailableResource**, you can call **MasterZones** and **SlaveZones** to query the primary and secondary zones.
       *     *   If your Enterprise Edition transit router has been optimized, you can specify a zone as needed when you connect a VPC to your Enterprise Edition transit router. After you call **ListTransitRouterAvailableResource**, you can call **AvailableZones** to query the zones.
       * For more information about the optimization, see [Announcement: Optimization on VPC-connected Enterprise Edition transit routers](https://help.aliyun.com/document_detail/434191.html).
       *
       * @param request ListTransitRouterAvailableResourceRequest
       * @return ListTransitRouterAvailableResourceResponse
       */
      Models::ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResource(const Models::ListTransitRouterAvailableResourceRequest &request);

      /**
       * @summary Queries the CIDR blocks of a transit router.
       *
       * @param request ListTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterCidrResponse
       */
      Models::ListTransitRouterCidrResponse listTransitRouterCidrWithOptions(const Models::ListTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR blocks of a transit router.
       *
       * @param request ListTransitRouterCidrRequest
       * @return ListTransitRouterCidrResponse
       */
      Models::ListTransitRouterCidrResponse listTransitRouterCidr(const Models::ListTransitRouterCidrRequest &request);

      /**
       * @summary Queries how a CIDR block is allocated.
       *
       * @param request ListTransitRouterCidrAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterCidrAllocationResponse
       */
      Models::ListTransitRouterCidrAllocationResponse listTransitRouterCidrAllocationWithOptions(const Models::ListTransitRouterCidrAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries how a CIDR block is allocated.
       *
       * @param request ListTransitRouterCidrAllocationRequest
       * @return ListTransitRouterCidrAllocationResponse
       */
      Models::ListTransitRouterCidrAllocationResponse listTransitRouterCidrAllocation(const Models::ListTransitRouterCidrAllocationRequest &request);

      /**
       * @summary Queries the information about Express Connect Router (ECR) connections on an Enterprise Edition transit router, such as the connection status, connection ID, and the payer of instance fees.
       *
       * @description You can use the following methods to query ECR connection information:
       * *   Specify the ID of an Enterprise Edition transit router.
       * *   Specify the ID of an Enterprise Edition transit router and the ID of the region in which the Enterprise Edition transit router is deployed.
       * *   Configure the **TransitRouterAttachmentId** parameter to specify the ECR connection that you want to query.
       *
       * @param request ListTransitRouterEcrAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterEcrAttachmentsResponse
       */
      Models::ListTransitRouterEcrAttachmentsResponse listTransitRouterEcrAttachmentsWithOptions(const Models::ListTransitRouterEcrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Express Connect Router (ECR) connections on an Enterprise Edition transit router, such as the connection status, connection ID, and the payer of instance fees.
       *
       * @description You can use the following methods to query ECR connection information:
       * *   Specify the ID of an Enterprise Edition transit router.
       * *   Specify the ID of an Enterprise Edition transit router and the ID of the region in which the Enterprise Edition transit router is deployed.
       * *   Configure the **TransitRouterAttachmentId** parameter to specify the ECR connection that you want to query.
       *
       * @param request ListTransitRouterEcrAttachmentsRequest
       * @return ListTransitRouterEcrAttachmentsResponse
       */
      Models::ListTransitRouterEcrAttachmentsResponse listTransitRouterEcrAttachments(const Models::ListTransitRouterEcrAttachmentsRequest &request);

      /**
       * @summary Queries whether a multicast domain is associated with a vSwitch.
       *
       * @description *   You must set at least **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. If you set **TransitRouterAttachmentId**, the information about the vSwitches in a virtual private cloud (VPC) that are associated with a multicast domain is returned. If you set **TransitRouterMulticastDomainId**, the information about the vSwitches that are associated with a multicast domain is returned.
       * *   Before you call **ListTransitRouterMulticastDomainAssociations**, make sure that all the request parameters are valid. If a request parameter is invalid, the system returns a **request ID** but does not return the vSwitches that are associated with the multicast domain.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociationsWithOptions(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a multicast domain is associated with a vSwitch.
       *
       * @description *   You must set at least **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. If you set **TransitRouterAttachmentId**, the information about the vSwitches in a virtual private cloud (VPC) that are associated with a multicast domain is returned. If you set **TransitRouterMulticastDomainId**, the information about the vSwitches that are associated with a multicast domain is returned.
       * *   Before you call **ListTransitRouterMulticastDomainAssociations**, make sure that all the request parameters are valid. If a request parameter is invalid, the system returns a **request ID** but does not return the vSwitches that are associated with the multicast domain.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociations(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request);

      /**
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitchesWithOptions(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitches(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request);

      /**
       * @summary Queries the information about a multicast domain, such as the status, ID, and description.
       *
       * @description *   If you configure one of the RegionId and CenId parameters, you must configure the other parameter. Otherwise, no information about the multicast domain is returned. You can configure only one of the TransitRouterId and TransitRouterMulticastDomainId parameters.
       * *   Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the information about the multicast domain is not returned.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomainsWithOptions(const Models::ListTransitRouterMulticastDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a multicast domain, such as the status, ID, and description.
       *
       * @description *   If you configure one of the RegionId and CenId parameters, you must configure the other parameter. Otherwise, no information about the multicast domain is returned. You can configure only one of the TransitRouterId and TransitRouterMulticastDomainId parameters.
       * *   Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the information about the multicast domain is not returned.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomains(const Models::ListTransitRouterMulticastDomainsRequest &request);

      /**
       * @summary Queries the detailed information about the multicast members and sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query the multicast sources and members in a multicast domain. Multicast sources and members are also known as multicast resources.
       * *   If you set **GroupIpAddress**, the system queries multicast resources in the multicast domain by multicast group.
       * *   If you set **VSwitchIds**, the system queries multicast resources in the multicast domain by vSwitch.
       * *   If you set **PeerTransitRouterMulticastDomains**, the system queries multicast resources that are also deployed in a different region.
       * *   If you set **ResourceType**, the system queries the multicast resources of the specified type in the multicast domain.
       * *   If you set **ResourceId**, the system queries multicast resources by resource.
       * *   If you set only **TransitRouterMulticastDomainId**, the system queries all the multicast resources in the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroupsWithOptions(const Models::ListTransitRouterMulticastGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about the multicast members and sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query the multicast sources and members in a multicast domain. Multicast sources and members are also known as multicast resources.
       * *   If you set **GroupIpAddress**, the system queries multicast resources in the multicast domain by multicast group.
       * *   If you set **VSwitchIds**, the system queries multicast resources in the multicast domain by vSwitch.
       * *   If you set **PeerTransitRouterMulticastDomains**, the system queries multicast resources that are also deployed in a different region.
       * *   If you set **ResourceType**, the system queries the multicast resources of the specified type in the multicast domain.
       * *   If you set **ResourceId**, the system queries multicast resources by resource.
       * *   If you set only **TransitRouterMulticastDomainId**, the system queries all the multicast resources in the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroups(const Models::ListTransitRouterMulticastGroupsRequest &request);

      /**
       * @summary Queries inter-region connections on an Enterprise Edition transit router.
       *
       * @description You can use the following methods to query inter-region connections on an Enterprise Edition transit router:
       * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Enterprise Edition transit router.
       * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Cloud Enterprise Network (CEN) instance and the ID of the region where the transit router is deployed.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachmentsWithOptions(const Models::ListTransitRouterPeerAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries inter-region connections on an Enterprise Edition transit router.
       *
       * @description You can use the following methods to query inter-region connections on an Enterprise Edition transit router:
       * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Enterprise Edition transit router.
       * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Cloud Enterprise Network (CEN) instance and the ID of the region where the transit router is deployed.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachments(const Models::ListTransitRouterPeerAttachmentsRequest &request);

      /**
       * @summary Queries the prefix lists that are associated with an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPrefixListAssociationResponse
       */
      Models::ListTransitRouterPrefixListAssociationResponse listTransitRouterPrefixListAssociationWithOptions(const Models::ListTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prefix lists that are associated with an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterPrefixListAssociationRequest
       * @return ListTransitRouterPrefixListAssociationResponse
       */
      Models::ListTransitRouterPrefixListAssociationResponse listTransitRouterPrefixListAssociation(const Models::ListTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Queries the details about routes in the route tables of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteEntriesResponse
       */
      Models::ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntriesWithOptions(const Models::ListTransitRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about routes in the route tables of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteEntriesRequest
       * @return ListTransitRouterRouteEntriesResponse
       */
      Models::ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntries(const Models::ListTransitRouterRouteEntriesRequest &request);

      /**
       * @summary Queries the associated forwarding correlations that are created for a route table of an Enterprise Edition transit router or a network instance connection.
       *
       * @description When you call **ListTransitRouterRouteTableAssociations**, you must set at least one of **TransitRouterRouteTableId** and **TransitRouterAttachmentId**.
       * *   If you set only **TransitRouterRouteTableId**, the network instance connections that are in associated forwarding correlation with a route table of an Enterprise Edition transit router are queried.
       * *   If you set only **TransitRouterAttachmentId**, the route table of an Enterprise Edition transit router that is in associated forwarding correlation with a network instance connection is queried.
       * *   If you set both **TransitRouterRouteTableId** and **TransitRouterAttachmentId**, the associated forwarding correlations between a specified network instance connection and a specified route table of an Enterprise Edition transit router are queried.
       *     *   If an associated forwarding correlation is created between the network instance connection and the route table of the Enterprise Edition transit router, the information about the associated forwarding correlation is returned.
       *     *   If no associated forwarding correlation is created between the network instance connection and the route table of the Enterprise Edition transit router, **TransitRouterAssociations** in the response is empty.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociationsWithOptions(const Models::ListTransitRouterRouteTableAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associated forwarding correlations that are created for a route table of an Enterprise Edition transit router or a network instance connection.
       *
       * @description When you call **ListTransitRouterRouteTableAssociations**, you must set at least one of **TransitRouterRouteTableId** and **TransitRouterAttachmentId**.
       * *   If you set only **TransitRouterRouteTableId**, the network instance connections that are in associated forwarding correlation with a route table of an Enterprise Edition transit router are queried.
       * *   If you set only **TransitRouterAttachmentId**, the route table of an Enterprise Edition transit router that is in associated forwarding correlation with a network instance connection is queried.
       * *   If you set both **TransitRouterRouteTableId** and **TransitRouterAttachmentId**, the associated forwarding correlations between a specified network instance connection and a specified route table of an Enterprise Edition transit router are queried.
       *     *   If an associated forwarding correlation is created between the network instance connection and the route table of the Enterprise Edition transit router, the information about the associated forwarding correlation is returned.
       *     *   If no associated forwarding correlation is created between the network instance connection and the route table of the Enterprise Edition transit router, **TransitRouterAssociations** in the response is empty.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociations(const Models::ListTransitRouterRouteTableAssociationsRequest &request);

      /**
       * @summary Queries the route learning correlations of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagationsWithOptions(const Models::ListTransitRouterRouteTablePropagationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route learning correlations of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagations(const Models::ListTransitRouterRouteTablePropagationsRequest &request);

      /**
       * @summary Queries the route tables of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTablesWithOptions(const Models::ListTransitRouterRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route tables of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTables(const Models::ListTransitRouterRouteTablesRequest &request);

      /**
       * @summary Queries the virtual border router (VBR) connections on an Enterprise Edition transit router.
       *
       * @description You can use the following methods to query VBR connections on an Enterprise Edition transit router:
       * *   Specify the ID of the Enterprise Edition transit router.
       * *   Specify the ID of the relevant Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachmentsWithOptions(const Models::ListTransitRouterVbrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual border router (VBR) connections on an Enterprise Edition transit router.
       *
       * @description You can use the following methods to query VBR connections on an Enterprise Edition transit router:
       * *   Specify the ID of the Enterprise Edition transit router.
       * *   Specify the ID of the relevant Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachments(const Models::ListTransitRouterVbrAttachmentsRequest &request);

      /**
       * @summary Queries the status, billing method, zones, vSwitches, and elastic network interfaces (ENIs) of virtual private cloud (VPC) connections.
       *
       * @description You can use the following methods to query VPC connections on an Enterprise Edition transit router:
       * *   Specify the ID of the Enterprise Edition transit router.
       * *   Specify the ID of the relevant Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router.
       * *   Specify the ID of the region where the Enterprise Edition transit router is deployed.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachmentsWithOptions(const Models::ListTransitRouterVpcAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, billing method, zones, vSwitches, and elastic network interfaces (ENIs) of virtual private cloud (VPC) connections.
       *
       * @description You can use the following methods to query VPC connections on an Enterprise Edition transit router:
       * *   Specify the ID of the Enterprise Edition transit router.
       * *   Specify the ID of the relevant Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router.
       * *   Specify the ID of the region where the Enterprise Edition transit router is deployed.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachments(const Models::ListTransitRouterVpcAttachmentsRequest &request);

      /**
       * @summary Queries the information about VPN attachments, such as the status and billing method of a VPN attachment, and the ID of an IPsec-VPN connection.
       *
       * @description You can use the following methods to call the ListTransitRouterVpnAttachments operation:
       * *   Specify only the **TransitRouterAttachmentId** parameter to query the information about a VPN attachment.
       * *   Specify only the **TransitRouterId** parameter to query the information about all VPN attachments on a transit router.
       * *   Specify the **CenId** and **RegionId** parameter to query the information about VPN attachments in a specified region.
       * Before you call the **ListTransitRouterVpnAttachments** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the information about the VPN attachments is not returned.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachmentsWithOptions(const Models::ListTransitRouterVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about VPN attachments, such as the status and billing method of a VPN attachment, and the ID of an IPsec-VPN connection.
       *
       * @description You can use the following methods to call the ListTransitRouterVpnAttachments operation:
       * *   Specify only the **TransitRouterAttachmentId** parameter to query the information about a VPN attachment.
       * *   Specify only the **TransitRouterId** parameter to query the information about all VPN attachments on a transit router.
       * *   Specify the **CenId** and **RegionId** parameter to query the information about VPN attachments in a specified region.
       * Before you call the **ListTransitRouterVpnAttachments** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the information about the VPN attachments is not returned.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachments(const Models::ListTransitRouterVpnAttachmentsRequest &request);

      /**
       * @summary Queries the information about transit routers that are connected to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can set the **RegionId** and **TransitRouterId** parameters based on your requirements.
       * *   If you do not set **RegionId** or **TransitRouterId**, the system queries all transit routers that are connected to the specified CEN instance.
       * *   If you set only **RegionId**, the system queries transit routers that are deployed in the specified region.
       * *   If you set only **TransitRouterId**, the system queries the specified transit router.
       * *   If you set both **RegionId** and **TransitRouterId**, the system queries the specified transit router in the specified region.
       *
       * @param request ListTransitRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRoutersWithOptions(const Models::ListTransitRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about transit routers that are connected to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can set the **RegionId** and **TransitRouterId** parameters based on your requirements.
       * *   If you do not set **RegionId** or **TransitRouterId**, the system queries all transit routers that are connected to the specified CEN instance.
       * *   If you set only **RegionId**, the system queries transit routers that are deployed in the specified region.
       * *   If you set only **TransitRouterId**, the system queries the specified transit router.
       * *   If you set both **RegionId** and **TransitRouterId**, the system queries the specified transit router in the specified region.
       *
       * @param request ListTransitRoutersRequest
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRouters(const Models::ListTransitRoutersRequest &request);

      /**
       * @summary Modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns the **request ID** but the operation is still being performed in the system background. You can call **DescribeCens** to query the status of a CEN instance.
       * *   If a CEN instance is in the **Modifying** state, the CEN instance is being modified. You can query the CEN instance but cannot perform other operations.
       * *   If a CEN instance is in the **Active** state, the CEN instance is modified.
       *
       * @param request ModifyCenAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttributeWithOptions(const Models::ModifyCenAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns the **request ID** but the operation is still being performed in the system background. You can call **DescribeCens** to query the status of a CEN instance.
       * *   If a CEN instance is in the **Modifying** state, the CEN instance is being modified. You can query the CEN instance but cannot perform other operations.
       * *   If a CEN instance is in the **Active** state, the CEN instance is modified.
       *
       * @param request ModifyCenAttributeRequest
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttribute(const Models::ModifyCenAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a bandwidth plan.
       *
       * @param request ModifyCenBandwidthPackageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenBandwidthPackageAttributeResponse
       */
      Models::ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttributeWithOptions(const Models::ModifyCenBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a bandwidth plan.
       *
       * @param request ModifyCenBandwidthPackageAttributeRequest
       * @return ModifyCenBandwidthPackageAttributeResponse
       */
      Models::ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttribute(const Models::ModifyCenBandwidthPackageAttributeRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of a bandwidth plan.
       *
       * @param request ModifyCenBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenBandwidthPackageSpecResponse
       */
      Models::ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpecWithOptions(const Models::ModifyCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of a bandwidth plan.
       *
       * @param request ModifyCenBandwidthPackageSpecRequest
       * @return ModifyCenBandwidthPackageSpecResponse
       */
      Models::ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpec(const Models::ModifyCenBandwidthPackageSpecRequest &request);

      /**
       * @summary Modifies a routing policy of a Cloud Enterprise Network (CEN) instance.
       *
       * @description `ModifyCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
       * *   **Modifying**: indicates that the system is modifying the routing policy. You can only query the routing policy, but cannot perform other operations.
       * *   **Active**: indicates that the routing policy is modified.
       *
       * @param request ModifyCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenRouteMapResponse
       */
      Models::ModifyCenRouteMapResponse modifyCenRouteMapWithOptions(const Models::ModifyCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a routing policy of a Cloud Enterprise Network (CEN) instance.
       *
       * @description `ModifyCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
       * *   **Modifying**: indicates that the system is modifying the routing policy. You can only query the routing policy, but cannot perform other operations.
       * *   **Active**: indicates that the routing policy is modified.
       *
       * @param request ModifyCenRouteMapRequest
       * @return ModifyCenRouteMapResponse
       */
      Models::ModifyCenRouteMapResponse modifyCenRouteMap(const Models::ModifyCenRouteMapRequest &request);

      /**
       * @summary Modifies the name, description, and capture window of a flow log.
       *
       * @description `ModifyFlowLogAttribute` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Modifying** state, the flow log is being modified. In this case, you can query the flow log but cannot perform other operations.
       * *   If a flow log is in the **Active** state, the flow log is modified.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and capture window of a flow log.
       *
       * @description `ModifyFlowLogAttribute` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       * *   If a flow log is in the **Modifying** state, the flow log is being modified. In this case, you can query the flow log but cannot perform other operations.
       * *   If a flow log is in the **Active** state, the flow log is modified.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a traffic classification rule.
       *
       * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse modifyTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a traffic classification rule.
       *
       * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse modifyTrafficMatchRuleToTrafficMarkingPolicy(const Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @summary Edit an aggregate route.
       *
       * @param tmpReq ModifyTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouteTableAggregationResponse
       */
      Models::ModifyTransitRouteTableAggregationResponse modifyTransitRouteTableAggregationWithOptions(const Models::ModifyTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit an aggregate route.
       *
       * @param request ModifyTransitRouteTableAggregationRequest
       * @return ModifyTransitRouteTableAggregationResponse
       */
      Models::ModifyTransitRouteTableAggregationResponse modifyTransitRouteTableAggregation(const Models::ModifyTransitRouteTableAggregationRequest &request);

      /**
       * @summary Modifies the CIDR block of a transit router.
       *
       * @description *   Before you modify the CIDR block of a transit router, we recommend that you read the [limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * *   If IP addresses within the CIDR block have been allocated to network instances, you cannot modify the CIDR block.
       * *   When you call **ModifyTransitRouterCidr**, if no parameter of the **PublishCidrRoute** operation is modified, ModifyTransitRouterCidr is a synchronous operation. After you call the operation, the new settings are immediately applied.
       * *   If a parameter of the **PublishCidrRoute** operation is modified, **ModifyTransitRouterCidr** is an asynchronous operation. After you call the operation, the request ID (**RequestId**) is returned but the operation is still being performed in the system background. You can call **ListTransitRouterCidr** to query the status of the CIDR block of the transit router.
       *     *   If the CIDR block of the transit router remains unchanged, the CIDR block is still being modified.
       *     *   If the CIDR block of the transit router is changed to the one that you specify in the request, the CIDR block has been modified.
       *
       * @param request ModifyTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouterCidrResponse
       */
      Models::ModifyTransitRouterCidrResponse modifyTransitRouterCidrWithOptions(const Models::ModifyTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the CIDR block of a transit router.
       *
       * @description *   Before you modify the CIDR block of a transit router, we recommend that you read the [limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * *   If IP addresses within the CIDR block have been allocated to network instances, you cannot modify the CIDR block.
       * *   When you call **ModifyTransitRouterCidr**, if no parameter of the **PublishCidrRoute** operation is modified, ModifyTransitRouterCidr is a synchronous operation. After you call the operation, the new settings are immediately applied.
       * *   If a parameter of the **PublishCidrRoute** operation is modified, **ModifyTransitRouterCidr** is an asynchronous operation. After you call the operation, the request ID (**RequestId**) is returned but the operation is still being performed in the system background. You can call **ListTransitRouterCidr** to query the status of the CIDR block of the transit router.
       *     *   If the CIDR block of the transit router remains unchanged, the CIDR block is still being modified.
       *     *   If the CIDR block of the transit router is changed to the one that you specify in the request, the CIDR block has been modified.
       *
       * @param request ModifyTransitRouterCidrRequest
       * @return ModifyTransitRouterCidrResponse
       */
      Models::ModifyTransitRouterCidrResponse modifyTransitRouterCidr(const Models::ModifyTransitRouterCidrRequest &request);

      /**
       * @summary You can call the ModifyTransitRouterMulticastDomain operation to modify the name, description, and feature options of a multicast domain.
       *
       * @param request ModifyTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouterMulticastDomainResponse
       */
      Models::ModifyTransitRouterMulticastDomainResponse modifyTransitRouterMulticastDomainWithOptions(const Models::ModifyTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyTransitRouterMulticastDomain operation to modify the name, description, and feature options of a multicast domain.
       *
       * @param request ModifyTransitRouterMulticastDomainRequest
       * @return ModifyTransitRouterMulticastDomainResponse
       */
      Models::ModifyTransitRouterMulticastDomainResponse modifyTransitRouterMulticastDomain(const Models::ModifyTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Moves a Cloud Enterprise Network (CEN) instance or a bandwidth plan to another resource group.
       *
       * @description By default, CEN instances and bandwidth plans are in the default resource group. You can call the `MoveResourceGroup` operation to move CEN instances or bandwidth plans to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a Cloud Enterprise Network (CEN) instance or a bandwidth plan to another resource group.
       *
       * @description By default, CEN instances and bandwidth plans are in the default resource group. You can call the `MoveResourceGroup` operation to move CEN instances or bandwidth plans to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Activates the transit router feature.
       *
       * @description You can call the `OpenTransitRouterService` operation to activate the transit router feature free of charge. After the `OpenTransitRouterService` operation succeeds, an order is automatically generated. You can use the returned order ID to query the order information in [Alibaba Cloud User Center](https://usercenter2-intl.aliyun.com/billing/#/account/overview).
       *
       * @param request OpenTransitRouterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTransitRouterServiceResponse
       */
      Models::OpenTransitRouterServiceResponse openTransitRouterServiceWithOptions(const Models::OpenTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the transit router feature.
       *
       * @description You can call the `OpenTransitRouterService` operation to activate the transit router feature free of charge. After the `OpenTransitRouterService` operation succeeds, an order is automatically generated. You can use the returned order ID to query the order information in [Alibaba Cloud User Center](https://usercenter2-intl.aliyun.com/billing/#/account/overview).
       *
       * @param request OpenTransitRouterServiceRequest
       * @return OpenTransitRouterServiceResponse
       */
      Models::OpenTransitRouterServiceResponse openTransitRouterService(const Models::OpenTransitRouterServiceRequest &request);

      /**
       * @summary Cloud Enterprise Network (CEN) supports route advertisement. You can call this operation to advertise routes of virtual private clouds (VPCs) or virtual border routers (VBRs) attached to a CEN instance to the CEN instance. Other network instances attached to the CEN instance can learn the routes if route conflicts do not exist.
       *
       * @description The following table describes whether routes of different types are advertised to CEN by default. You can call the PublishRouteEntries operation to advertise routes to CEN.
       * |Route|Network instance|Advertised to CEN by default|
       * |---|---|---|
       * |Routes that route network traffic to Elastic Compute Service (ECS) instances|VPC|No|
       * |Routes that route network traffic to VPN gateways|VPC|No|
       * |Routes that route network traffic to high-availability virtual IP addresses (HAVIPs)|VPC|No|
       * |Routes that route network traffic to router interfaces|VPC|No|
       * |Routes that route network traffic to elastic network interfaces (ENIs)|VPC|No|
       * |Routes that route network traffic to IPv6 gateways|VPC|No|
       * |Routes that route network traffic to NAT gateways|VPC|No|
       * |System routes of VPCs|VPC|Yes|
       * |Routes that route network traffic to data centers|VBR|Yes|
       * |Border Gateway Protocol (BGP) routes|VBR|Yes|
       *
       * @param request PublishRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntriesWithOptions(const Models::PublishRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cloud Enterprise Network (CEN) supports route advertisement. You can call this operation to advertise routes of virtual private clouds (VPCs) or virtual border routers (VBRs) attached to a CEN instance to the CEN instance. Other network instances attached to the CEN instance can learn the routes if route conflicts do not exist.
       *
       * @description The following table describes whether routes of different types are advertised to CEN by default. You can call the PublishRouteEntries operation to advertise routes to CEN.
       * |Route|Network instance|Advertised to CEN by default|
       * |---|---|---|
       * |Routes that route network traffic to Elastic Compute Service (ECS) instances|VPC|No|
       * |Routes that route network traffic to VPN gateways|VPC|No|
       * |Routes that route network traffic to high-availability virtual IP addresses (HAVIPs)|VPC|No|
       * |Routes that route network traffic to router interfaces|VPC|No|
       * |Routes that route network traffic to elastic network interfaces (ENIs)|VPC|No|
       * |Routes that route network traffic to IPv6 gateways|VPC|No|
       * |Routes that route network traffic to NAT gateways|VPC|No|
       * |System routes of VPCs|VPC|Yes|
       * |Routes that route network traffic to data centers|VBR|Yes|
       * |Border Gateway Protocol (BGP) routes|VBR|Yes|
       *
       * @param request PublishRouteEntriesRequest
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntries(const Models::PublishRouteEntriesRequest &request);

      /**
       * @summary Re-advertises an aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregationWithOptions(const Models::RefreshTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-advertises an aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregation(const Models::RefreshTransitRouteTableAggregationRequest &request);

      /**
       * @summary Creates or adds a multicast member.
       *
       * @description Enterprise Edition transit routers support only elastic network interfaces (ENIs) as multicast members. You can call the `RegisterTransitRouterMulticastGroupMembers` operation to specify an ENI in the current region or a different region as a multicast member.
       * *   If you specify a value for the **NetworkInterfaceIds** parameter, an ENI in the current region is to be specified as a multicast member. Make sure that the ENI and vSwitch are associated with the multicast group. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * *   If you specify a value for the **PeerTransitRouterMulticastDomains**, a multicast member in a multicast group that belongs to another region but has the same IP address as the current multicast group is to be specified as a multicast member for the current multicast group. Make sure that an inter-region connection is established between the regions. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *     For example, you created Multicast Group 1 in Multicast Domain 1, which is in the China (Hangzhou) region. You created Multicast Group 2 in Multicast Domain 2, which is in the China (Shanghai) region. Multicast Group 1 and Multicast Group 2 use the same multicast IP address, and Multicast Member 2 is in Multicast Group 2 in the China (Shanghai) region. If you call the `RegisterTransitRouterMulticastGroupMembers` operation to add multicast members to Multicast Group 1 in the China (Hangzhou) region and set **PeerTransitRouterMulticastDomains** to the ID of Multicast Group 2, which is in the China (Shanghai) region, Multicast Member 2, which is in Multicast Domain 2 in the China (Shanghai) region is added to Multicast Group 1 in the China (Hangzhou) region.
       * *   `RegisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       *     *   If the multicast member is in the **Registering**, the multicast member is being created. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       *     *   If the multicast member is in the **Registered** state, the multicast member is created.
       *
       * @param request RegisterTransitRouterMulticastGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterTransitRouterMulticastGroupMembersResponse
       */
      Models::RegisterTransitRouterMulticastGroupMembersResponse registerTransitRouterMulticastGroupMembersWithOptions(const Models::RegisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or adds a multicast member.
       *
       * @description Enterprise Edition transit routers support only elastic network interfaces (ENIs) as multicast members. You can call the `RegisterTransitRouterMulticastGroupMembers` operation to specify an ENI in the current region or a different region as a multicast member.
       * *   If you specify a value for the **NetworkInterfaceIds** parameter, an ENI in the current region is to be specified as a multicast member. Make sure that the ENI and vSwitch are associated with the multicast group. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * *   If you specify a value for the **PeerTransitRouterMulticastDomains**, a multicast member in a multicast group that belongs to another region but has the same IP address as the current multicast group is to be specified as a multicast member for the current multicast group. Make sure that an inter-region connection is established between the regions. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *     For example, you created Multicast Group 1 in Multicast Domain 1, which is in the China (Hangzhou) region. You created Multicast Group 2 in Multicast Domain 2, which is in the China (Shanghai) region. Multicast Group 1 and Multicast Group 2 use the same multicast IP address, and Multicast Member 2 is in Multicast Group 2 in the China (Shanghai) region. If you call the `RegisterTransitRouterMulticastGroupMembers` operation to add multicast members to Multicast Group 1 in the China (Hangzhou) region and set **PeerTransitRouterMulticastDomains** to the ID of Multicast Group 2, which is in the China (Shanghai) region, Multicast Member 2, which is in Multicast Domain 2 in the China (Shanghai) region is added to Multicast Group 1 in the China (Hangzhou) region.
       * *   `RegisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       *     *   If the multicast member is in the **Registering**, the multicast member is being created. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       *     *   If the multicast member is in the **Registered** state, the multicast member is created.
       *
       * @param request RegisterTransitRouterMulticastGroupMembersRequest
       * @return RegisterTransitRouterMulticastGroupMembersResponse
       */
      Models::RegisterTransitRouterMulticastGroupMembersResponse registerTransitRouterMulticastGroupMembers(const Models::RegisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary Creates a multicast source for a one-to-many multicast network.
       *
       * @description *   You can specify only elastic network interfaces (ENIs) as multicast sources.
       * *   `RegisterTransitRouterMulticastGroupSources` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast source.
       *     *   If a multicast source is in the **Registering** state, the multicast source is being created. You can query the multicast source but cannot perform other operations on the multicast source.
       *     *   If a multicast source is in the **Registered** state, the multicast source is created.
       * ### Prerequisite
       * Before you call `RegisterTransitRouterMulticastGroupSources`, make sure that the vSwitch on which the ENI is created is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSourcesWithOptions(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multicast source for a one-to-many multicast network.
       *
       * @description *   You can specify only elastic network interfaces (ENIs) as multicast sources.
       * *   `RegisterTransitRouterMulticastGroupSources` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast source.
       *     *   If a multicast source is in the **Registering** state, the multicast source is being created. You can query the multicast source but cannot perform other operations on the multicast source.
       *     *   If a multicast source is in the **Registered** state, the multicast source is created.
       * ### Prerequisite
       * Before you call `RegisterTransitRouterMulticastGroupSources`, make sure that the vSwitch on which the ENI is created is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSources(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request);

      /**
       * @summary Deletes specified traffic classification rules from a traffic marking policy.
       *
       * @description *   When you call **RemoveTrafficMatchRuleFromTrafficMarkingPolicy**, take note of the following rules:
       *     *   If you specify the ID of a traffic classification rule in the **TrafficMarkRuleIds** parameter, the specified traffic classification rule is deleted.
       *     *   If you do not specify a traffic classification rule ID in the **TrafficMarkRuleIds** parameter, no operation is performed after you call this operation.
       *     If you want to delete a traffic classification rule, you must specify the rule ID before you call this operation.
       * *   **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       *     *   If a traffic classification rule is in the **Deleting** state, the traffic classification rule is being deleted. In this case, you can query the traffic classification rule but cannot perform other operations.
       *     *   If a traffic classification rule cannot be found, the traffic classification rule is deleted.
       *
       * @param request RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(const Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified traffic classification rules from a traffic marking policy.
       *
       * @description *   When you call **RemoveTrafficMatchRuleFromTrafficMarkingPolicy**, take note of the following rules:
       *     *   If you specify the ID of a traffic classification rule in the **TrafficMarkRuleIds** parameter, the specified traffic classification rule is deleted.
       *     *   If you do not specify a traffic classification rule ID in the **TrafficMarkRuleIds** parameter, no operation is performed after you call this operation.
       *     If you want to delete a traffic classification rule, you must specify the rule ID before you call this operation.
       * *   **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       *     *   If a traffic classification rule is in the **Deleting** state, the traffic classification rule is being deleted. In this case, you can query the traffic classification rule but cannot perform other operations.
       *     *   If a traffic classification rule cannot be found, the traffic classification rule is deleted.
       *
       * @param request RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest
       * @return RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse removeTrafficMatchRuleFromTrafficMarkingPolicy(const Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request);

      /**
       * @deprecated OpenAPI RemoveTraficMatchRuleFromTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::RemoveTrafficMatchRuleFromTrafficMarkingPolicy instead.
       *
       * @summary Removes a traffic classification rule from a traffic marking policy.
       *
       * @description ### [](#)Precautions
       * The **RemoveTraficMatchRuleFromTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. To delete a traffic classification rule, call the [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/452726.html) operation. Maintenance on this document has stopped.
       *
       * @param request RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(const Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveTraficMatchRuleFromTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::RemoveTrafficMatchRuleFromTrafficMarkingPolicy instead.
       *
       * @summary Removes a traffic classification rule from a traffic marking policy.
       *
       * @description ### [](#)Precautions
       * The **RemoveTraficMatchRuleFromTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. To delete a traffic classification rule, call the [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/452726.html) operation. Maintenance on this document has stopped.
       *
       * @param request RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest
       * @return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicy(const Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request);

      /**
       * @summary Associates a network instance connection with another route table of a transit router.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociationWithOptions(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a network instance connection with another route table of a transit router.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociation(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request);

      /**
       * @summary Connects an on-premises network to a cloud service.
       *
       * @description Cloud services refer to Alibaba Cloud services that use the 100.64.0.0/10 CIDR block to provide services. These cloud services include Object Storage Service (OSS), Simple Log Service (SLS), and Data Transmission Service (DTS). If your on-premises network needs to access a cloud service, you must attach the virtual border router (VBR) or Cloud Connect Network (CCN) instance that is connected to your on-premises network to a Cloud Enterprise Network (CEN) instance. In addition, you must attach a virtual private cloud (VPC) that is deployed in the same region as the cloud service to the CEN instance. This way, your on-premises network can connect to the VPC that is deployed in the same region as the cloud service and access the cloud service through the VPC.
       * *   This operation is supported only by Basic Edition transit routers. An on-premises network associated with a VBR can use CEN to access only a cloud service that is deployed in the same region.
       *     For example, if cloud services are deployed in the China (Beijing) region, only on-premises networks connected to VBRs in the China (Beijing) region can access the cloud services.
       * *   **ResolveAndRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeRouteServicesInCen** to query the status of a cloud service.
       *     *   If the cloud service is in the **Creating** state, the connection to the cloud service is being created. In this case, you can query the cloud service but cannot perform other operations.
       *     *   If the cloud service is in the **Active** state, the connection to the cloud service is created.
       *     *   If the cloud service is in the **Failed** state, the connection to the cloud service failed.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following conditions are met:
       * *   The VBR or CCN instance to which your on-premises network is connected is attached to a CEN instance.
       * *   A VPC that is deployed in the same region as the cloud service is attached to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ResolveAndRouteServiceInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResolveAndRouteServiceInCenResponse
       */
      Models::ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCenWithOptions(const Models::ResolveAndRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connects an on-premises network to a cloud service.
       *
       * @description Cloud services refer to Alibaba Cloud services that use the 100.64.0.0/10 CIDR block to provide services. These cloud services include Object Storage Service (OSS), Simple Log Service (SLS), and Data Transmission Service (DTS). If your on-premises network needs to access a cloud service, you must attach the virtual border router (VBR) or Cloud Connect Network (CCN) instance that is connected to your on-premises network to a Cloud Enterprise Network (CEN) instance. In addition, you must attach a virtual private cloud (VPC) that is deployed in the same region as the cloud service to the CEN instance. This way, your on-premises network can connect to the VPC that is deployed in the same region as the cloud service and access the cloud service through the VPC.
       * *   This operation is supported only by Basic Edition transit routers. An on-premises network associated with a VBR can use CEN to access only a cloud service that is deployed in the same region.
       *     For example, if cloud services are deployed in the China (Beijing) region, only on-premises networks connected to VBRs in the China (Beijing) region can access the cloud services.
       * *   **ResolveAndRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeRouteServicesInCen** to query the status of a cloud service.
       *     *   If the cloud service is in the **Creating** state, the connection to the cloud service is being created. In this case, you can query the cloud service but cannot perform other operations.
       *     *   If the cloud service is in the **Active** state, the connection to the cloud service is created.
       *     *   If the cloud service is in the **Failed** state, the connection to the cloud service failed.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following conditions are met:
       * *   The VBR or CCN instance to which your on-premises network is connected is attached to a CEN instance.
       * *   A VPC that is deployed in the same region as the cloud service is attached to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ResolveAndRouteServiceInCenRequest
       * @return ResolveAndRouteServiceInCenResponse
       */
      Models::ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCen(const Models::ResolveAndRouteServiceInCenRequest &request);

      /**
       * @summary Revokes the permissions that a transit router has on network instances that belong to another Alibaba Cloud account.
       *
       * @description `RevokeInstanceFromTransitRouter` can be used to revoke permissions on virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs) that belong to another Alibaba Cloud account.
       * To revoke permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, call the [RevokeInstanceFromCbn](https://help.aliyun.com/document_detail/126142.html) operation.
       * ### [](#)Prerequisites
       * Before you call `RevokeInstanceFromTransitRouter`, you must detach the network instances from the transit router.
       * *   For more information about how to detach VPCs from Enterprise Edition transit routers, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * *   For more information about how to detach VBRs from Enterprise Edition transit routers, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * *   For more information about how to detach IPsec-VPN connections from Enterprise Edition transit routers, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * *   For more information about how to detach ECRs from Enterprise Edition transit routers, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * *   For more information about how to detach network instances from Basic Edition transit routers, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *
       * @param request RevokeInstanceFromTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromTransitRouterResponse
       */
      Models::RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouterWithOptions(const Models::RevokeInstanceFromTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions that a transit router has on network instances that belong to another Alibaba Cloud account.
       *
       * @description `RevokeInstanceFromTransitRouter` can be used to revoke permissions on virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs) that belong to another Alibaba Cloud account.
       * To revoke permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, call the [RevokeInstanceFromCbn](https://help.aliyun.com/document_detail/126142.html) operation.
       * ### [](#)Prerequisites
       * Before you call `RevokeInstanceFromTransitRouter`, you must detach the network instances from the transit router.
       * *   For more information about how to detach VPCs from Enterprise Edition transit routers, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * *   For more information about how to detach VBRs from Enterprise Edition transit routers, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * *   For more information about how to detach IPsec-VPN connections from Enterprise Edition transit routers, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * *   For more information about how to detach ECRs from Enterprise Edition transit routers, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * *   For more information about how to detach network instances from Basic Edition transit routers, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *
       * @param request RevokeInstanceFromTransitRouterRequest
       * @return RevokeInstanceFromTransitRouterResponse
       */
      Models::RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouter(const Models::RevokeInstanceFromTransitRouterRequest &request);

      /**
       * @summary Configures PrivateZone.
       *
       * @description Alibaba Cloud DNS PrivateZone (PrivateZone) is an Alibaba Cloud private domain name resolution and management service based on Virtual Private Cloud (VPC). After you attach virtual border routers (VBRs) and Cloud Connect Network (CCN) instances to a Cloud Enterprise Network (CEN) instance, you can enable the on-premises networks connected to the VBRs and CCN instances to access PrivateZone through the CEN instance. 
       * #### Usage notes
       * - The on-premises networks connected to VBRs or CCN instances must be deployed in the same region as the PrivateZone service. For example, if the PrivateZone service is deployed in the China (Beijing) region, only on-premises networks connected to VBRs or CCN instances in the China (Beijing) region can access the PrivateZone service. 
       * - **RoutePrivateZoneInCenToVpc** is an asynchronous operation. After you send a request, the **request ID** is returned but the operation is still being performed in the system background. You can call **DescribeCenPrivateZoneRoutes** to query the status of PrivateZone. 
       *     - If PrivateZone is in the **Creating** state, access to PrivateZone is being configured. In this case, you can query PrivateZone configurations but cannot perform other operations. 
       *     - If PrivateZone is in the **Active** state, access to PrivateZone is enabled. 
       *     - If PrivateZone is in the **Failed** state, configurations of access to PrivateZone failed. 
       * #### Prerequisites
       * Before you call **RoutePrivateZoneInCenToVpc**, make sure that the following conditions are met:
       * - PrivateZone is deployed. For more information, see [PrivateZone quick start](https://help.aliyun.com/document_detail/64627.html).
       * - The following network instances are attached to the same CEN instance: the VPC that is associated with the PrivateZone service, and the VBR and CCN instance that want to access the PrivateZone service. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/468684.html). 
       * - If your on-premises network uses a CCN instance to connect to Alibaba Cloud and the account that owns the CCN instance is different from the account that owns the VPC or CEN instance, you must grant the CCN instance required permissions. For more information, see [Grant permissions to CCN](https://help.aliyun.com/document_detail/181654.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpcWithOptions(const Models::RoutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures PrivateZone.
       *
       * @description Alibaba Cloud DNS PrivateZone (PrivateZone) is an Alibaba Cloud private domain name resolution and management service based on Virtual Private Cloud (VPC). After you attach virtual border routers (VBRs) and Cloud Connect Network (CCN) instances to a Cloud Enterprise Network (CEN) instance, you can enable the on-premises networks connected to the VBRs and CCN instances to access PrivateZone through the CEN instance. 
       * #### Usage notes
       * - The on-premises networks connected to VBRs or CCN instances must be deployed in the same region as the PrivateZone service. For example, if the PrivateZone service is deployed in the China (Beijing) region, only on-premises networks connected to VBRs or CCN instances in the China (Beijing) region can access the PrivateZone service. 
       * - **RoutePrivateZoneInCenToVpc** is an asynchronous operation. After you send a request, the **request ID** is returned but the operation is still being performed in the system background. You can call **DescribeCenPrivateZoneRoutes** to query the status of PrivateZone. 
       *     - If PrivateZone is in the **Creating** state, access to PrivateZone is being configured. In this case, you can query PrivateZone configurations but cannot perform other operations. 
       *     - If PrivateZone is in the **Active** state, access to PrivateZone is enabled. 
       *     - If PrivateZone is in the **Failed** state, configurations of access to PrivateZone failed. 
       * #### Prerequisites
       * Before you call **RoutePrivateZoneInCenToVpc**, make sure that the following conditions are met:
       * - PrivateZone is deployed. For more information, see [PrivateZone quick start](https://help.aliyun.com/document_detail/64627.html).
       * - The following network instances are attached to the same CEN instance: the VPC that is associated with the PrivateZone service, and the VBR and CCN instance that want to access the PrivateZone service. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/468684.html). 
       * - If your on-premises network uses a CCN instance to connect to Alibaba Cloud and the account that owns the CCN instance is different from the account that owns the VPC or CEN instance, you must grant the CCN instance required permissions. For more information, see [Grant permissions to CCN](https://help.aliyun.com/document_detail/181654.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpc(const Models::RoutePrivateZoneInCenToVpcRequest &request);

      /**
       * @summary Configures, modifies, or deletes the bandwidth of inter-region connections for a Basic Edition transit router.
       *
       * @description This operation is used to manage bandwidth of inter-region connections only for Basic Edition transit routers.
       * ### [](#)Prerequisites
       * The Cloud Enterprise Network (CEN) instance is associated with a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call the **SetCenInterRegionBandwidthLimit** operation to configure, change, or remove the bandwidth limit of an inter-region connection.
       * *   If you set **BandwidthLimit** to a value other than 0, the bandwidth of the inter-region connection is set to the specified value.
       * *   If you set **BandwidthLimit** to 0, the bandwidth of the inter-region connection is no longer limited.
       * ### [](#)Limits
       * *   The bandwidth limit of an inter-region connection cannot exceed the bandwidth limit of the associated bandwidth plan.
       * *   The sum of bandwidth limits of all inter-region connections cannot exceed the bandwidth limit of the associated bandwidth plan.
       * *   If bandwidth multiplexing is enabled for an inter-region connection, you cannot change the bandwidth of the inter-region connection.
       * *   The **SetCenInterRegionBandwidthLimit** operation can be used to configure, modify, or delete the bandwidth of inter-region connections only for Basic Edition transit routers.
       *     To configure, modify, or delete the bandwidth of inter-region connections for Enterprise Edition transit routers, call the [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), or [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html) operation.
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimitWithOptions(const Models::SetCenInterRegionBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures, modifies, or deletes the bandwidth of inter-region connections for a Basic Edition transit router.
       *
       * @description This operation is used to manage bandwidth of inter-region connections only for Basic Edition transit routers.
       * ### [](#)Prerequisites
       * The Cloud Enterprise Network (CEN) instance is associated with a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call the **SetCenInterRegionBandwidthLimit** operation to configure, change, or remove the bandwidth limit of an inter-region connection.
       * *   If you set **BandwidthLimit** to a value other than 0, the bandwidth of the inter-region connection is set to the specified value.
       * *   If you set **BandwidthLimit** to 0, the bandwidth of the inter-region connection is no longer limited.
       * ### [](#)Limits
       * *   The bandwidth limit of an inter-region connection cannot exceed the bandwidth limit of the associated bandwidth plan.
       * *   The sum of bandwidth limits of all inter-region connections cannot exceed the bandwidth limit of the associated bandwidth plan.
       * *   If bandwidth multiplexing is enabled for an inter-region connection, you cannot change the bandwidth of the inter-region connection.
       * *   The **SetCenInterRegionBandwidthLimit** operation can be used to configure, modify, or delete the bandwidth of inter-region connections only for Basic Edition transit routers.
       *     To configure, modify, or delete the bandwidth of inter-region connections for Enterprise Edition transit routers, call the [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), or [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html) operation.
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimit(const Models::SetCenInterRegionBandwidthLimitRequest &request);

      /**
       * @summary Creates tags and adds them to a resource.
       *
       * @description *   Each tag consists of a tag key and a tag value. When you add a tag, you must specify the tag key and tag value.
       * *   If you want to add multiple tags to a Cloud Enterprise Network (CEN) instance, each tag key must be unique.
       * *   You can add at most 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds them to a resource.
       *
       * @description *   Each tag consists of a tag key and a tag value. When you add a tag, you must specify the tag key and tag value.
       * *   If you want to add multiple tags to a Cloud Enterprise Network (CEN) instance, each tag key must be unique.
       * *   You can add at most 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 进行云企业网预付费带宽包临时升配
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpecWithOptions(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行云企业网预付费带宽包临时升配
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpec(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request);

      /**
       * @summary Disassociates a Cloud Enterprise Network (CEN) from a bandwidth plan. After the disassociation, the bandwidth can be associated with another CEN instance.
       *
       * @description No inter-region connections are configured in the bandwidth plan. For more information about how to delete inter-region connections, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackageWithOptions(const Models::UnassociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Cloud Enterprise Network (CEN) from a bandwidth plan. After the disassociation, the bandwidth can be associated with another CEN instance.
       *
       * @description No inter-region connections are configured in the bandwidth plan. For more information about how to delete inter-region connections, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackage(const Models::UnassociateCenBandwidthPackageRequest &request);

      /**
       * @summary 删除PrivateZone
       *
       * @param request UnroutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnroutePrivateZoneInCenToVpcResponse
       */
      Models::UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpcWithOptions(const Models::UnroutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除PrivateZone
       *
       * @param request UnroutePrivateZoneInCenToVpcRequest
       * @return UnroutePrivateZoneInCenToVpcResponse
       */
      Models::UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpc(const Models::UnroutePrivateZoneInCenToVpcRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the name and description of a quality of service (QoS) policy.
       *
       * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttributeWithOptions(const Models::UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a quality of service (QoS) policy.
       *
       * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
       * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttribute(const Models::UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request);

      /**
       * @summary Modifies the name, description, inter-region bandwidth, and Differentiated Services Code Point (DSCP) value of a quality of service (QoS) queue.
       *
       * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosQueueAttributeResponse updateCenInterRegionTrafficQosQueueAttributeWithOptions(const Models::UpdateCenInterRegionTrafficQosQueueAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, inter-region bandwidth, and Differentiated Services Code Point (DSCP) value of a quality of service (QoS) queue.
       *
       * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
       * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosQueueAttributeResponse updateCenInterRegionTrafficQosQueueAttribute(const Models::UpdateCenInterRegionTrafficQosQueueAttributeRequest &request);

      /**
       * @summary Modifies the name, description, and traffic classification rules of a traffic marking policy.
       *
       * @param request UpdateTrafficMarkingPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficMarkingPolicyAttributeResponse
       */
      Models::UpdateTrafficMarkingPolicyAttributeResponse updateTrafficMarkingPolicyAttributeWithOptions(const Models::UpdateTrafficMarkingPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and traffic classification rules of a traffic marking policy.
       *
       * @param request UpdateTrafficMarkingPolicyAttributeRequest
       * @return UpdateTrafficMarkingPolicyAttributeResponse
       */
      Models::UpdateTrafficMarkingPolicyAttributeResponse updateTrafficMarkingPolicyAttribute(const Models::UpdateTrafficMarkingPolicyAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a transit router.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouters** operation to query the status of a transit router.
       * *   If a transit router is in the **Modifying** state, the configuration of the transit router is being modified. You can query the transit router but cannot perform other operations.
       * *   If a transit router is in the **Active** state, the configuration of the transit router is modified.
       *
       * @param request UpdateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouterWithOptions(const Models::UpdateTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a transit router.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouters** operation to query the status of a transit router.
       * *   If a transit router is in the **Modifying** state, the configuration of the transit router is being modified. You can query the transit router but cannot perform other operations.
       * *   If a transit router is in the **Active** state, the configuration of the transit router is modified.
       *
       * @param request UpdateTransitRouterRequest
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouter(const Models::UpdateTransitRouterRequest &request);

      /**
       * @summary Modifies the name and description of an Express Connect Router (ECR) connection on a Enterprise Edition transit router.
       *
       * @description UpdateTransitRouterEcrAttachmentAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
       * If an ECR connection is in the Modifying state, the ECR connection is being modified. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If an ECR connection is in the Attached state, the ECR connection is modified.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an Express Connect Router (ECR) connection on a Enterprise Edition transit router.
       *
       * @description UpdateTransitRouterEcrAttachmentAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
       * If an ECR connection is in the Modifying state, the ECR connection is being modified. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If an ECR connection is in the Attached state, the ECR connection is modified.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttribute(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request);

      /**
       * @summary Modifies an inter-region connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
       * *   If an inter-region connection is in the **Modifying** state, the inter-region connection is being modified. You can query the inter-region connection but cannot perform other operations.
       * *   If an inter-region connection is in the **Attached** state, the inter-region connection is modified.
       *
       * @param request UpdateTransitRouterPeerAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterPeerAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttributeWithOptions(const Models::UpdateTransitRouterPeerAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an inter-region connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
       * *   If an inter-region connection is in the **Modifying** state, the inter-region connection is being modified. You can query the inter-region connection but cannot perform other operations.
       * *   If an inter-region connection is in the **Attached** state, the inter-region connection is modified.
       *
       * @param request UpdateTransitRouterPeerAttachmentAttributeRequest
       * @return UpdateTransitRouterPeerAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttribute(const Models::UpdateTransitRouterPeerAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a route in a route table of an Enterprise Edition transit router.
       *
       * @param request UpdateTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterRouteEntryResponse
       */
      Models::UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntryWithOptions(const Models::UpdateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a route in a route table of an Enterprise Edition transit router.
       *
       * @param request UpdateTransitRouterRouteEntryRequest
       * @return UpdateTransitRouterRouteEntryResponse
       */
      Models::UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntry(const Models::UpdateTransitRouterRouteEntryRequest &request);

      /**
       * @summary Modifies the name and description of a route table of an Enterprise Edition transit router and enables or disables multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTableWithOptions(const Models::UpdateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a route table of an Enterprise Edition transit router and enables or disables multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTable(const Models::UpdateTransitRouterRouteTableRequest &request);

      /**
       * @summary Modifies the name, description, and enables or disables automatic route advertisement for a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of a VBR connection.
       * *   If a VBR connection is in the **Modifying** state, the VBR connection is being modified. You can query the VBR connection but cannot perform other operations.
       * *   If the VBR connection is in the **Attached** state, the VBR connection is modified.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and enables or disables automatic route advertisement for a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of a VBR connection.
       * *   If a VBR connection is in the **Modifying** state, the VBR connection is being modified. You can query the VBR connection but cannot perform other operations.
       * *   If the VBR connection is in the **Attached** state, the VBR connection is modified.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttribute(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a virtual private cloud (VPC) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       * *   If a VPC connection is in the **Modifying** state, the VPC connection is being modified. You can query the VPC connection but cannot perform other operations.
       * *   If a VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param tmpReq UpdateTransitRouterVpcAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpcAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpcAttachmentAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a virtual private cloud (VPC) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       * *   If a VPC connection is in the **Modifying** state, the VPC connection is being modified. You can query the VPC connection but cannot perform other operations.
       * *   If a VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param request UpdateTransitRouterVpcAttachmentAttributeRequest
       * @return UpdateTransitRouterVpcAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttribute(const Models::UpdateTransitRouterVpcAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the zones and vSwitches that are associated with a virtual private cloud (VPC) connection.
       *
       * @description *   When you add a zone and a vSwitch for a VPC connection, make sure that the vSwitch has at least one idle IP address. When you modify the zones and vSwitches of a VPC connection, the Enterprise Edition transit router creates an elastic network interface (ENI) in the vSwitch. The ENI occupies one IP address in the vSwitch. The ENI forwards traffic between the VPC and the Enterprise Edition transit router.
       * *   **UpdateTransitRouterVpcAttachmentZones** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       *     *   If a VPC connection is in the **Modifying** state, the VPC connection is being modified. You can query the VPC connection but cannot perform other operations.
       *     *   If a VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param request UpdateTransitRouterVpcAttachmentZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpcAttachmentZonesResponse
       */
      Models::UpdateTransitRouterVpcAttachmentZonesResponse updateTransitRouterVpcAttachmentZonesWithOptions(const Models::UpdateTransitRouterVpcAttachmentZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the zones and vSwitches that are associated with a virtual private cloud (VPC) connection.
       *
       * @description *   When you add a zone and a vSwitch for a VPC connection, make sure that the vSwitch has at least one idle IP address. When you modify the zones and vSwitches of a VPC connection, the Enterprise Edition transit router creates an elastic network interface (ENI) in the vSwitch. The ENI occupies one IP address in the vSwitch. The ENI forwards traffic between the VPC and the Enterprise Edition transit router.
       * *   **UpdateTransitRouterVpcAttachmentZones** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       *     *   If a VPC connection is in the **Modifying** state, the VPC connection is being modified. You can query the VPC connection but cannot perform other operations.
       *     *   If a VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param request UpdateTransitRouterVpcAttachmentZonesRequest
       * @return UpdateTransitRouterVpcAttachmentZonesResponse
       */
      Models::UpdateTransitRouterVpcAttachmentZonesResponse updateTransitRouterVpcAttachmentZones(const Models::UpdateTransitRouterVpcAttachmentZonesRequest &request);

      /**
       * @summary Modifies the configuration of a VPN attachment.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a VPN attachment.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttribute(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request);

      /**
       * @summary Withdraws the routes of a virtual private cloud (VPC) or a virtual border router (VBR) from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntriesWithOptions(const Models::WithdrawPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraws the routes of a virtual private cloud (VPC) or a virtual border router (VBR) from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntries(const Models::WithdrawPublishedRouteEntriesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
