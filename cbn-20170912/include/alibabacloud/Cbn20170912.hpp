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
       * @description - A flow log is enabled by default after creation. If the flow log was stopped, call this operation to re-enable it.
       * - `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *   - If a flow log is in the **Modifying** state, the flow log is being enabled. In this case, you can query the flow log but cannot perform other operations.
       *   - If a flow log is in the **Active** state, the flow log is enabled.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a flow log. After the flow log is enabled, the system collects traffic information about a specified resource.
       *
       * @description - A flow log is enabled by default after creation. If the flow log was stopped, call this operation to re-enable it.
       * - `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *   - If a flow log is in the **Modifying** state, the flow log is being enabled. In this case, you can query the flow log but cannot perform other operations.
       *   - If a flow log is in the **Active** state, the flow log is enabled.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Adds a traffic classification rule to a traffic marking policy.
       *
       * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       * - If a traffic classification rule is in the **Creating** state, the traffic classification rule is being created. In this case, you can query the traffic classification rule but cannot perform other operations.
       * - If a traffic classification rule is in the **Active** state, the traffic classification rule is added to the traffic marking policy.
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
       * - If a traffic classification rule is in the **Creating** state, the traffic classification rule is being created. In this case, you can query the traffic classification rule but cannot perform other operations.
       * - If a traffic classification rule is in the **Active** state, the traffic classification rule is added to the traffic marking policy.
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
       * @summary Attaches a bandwidth plan to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can attach multiple bandwidth plans to a CEN instance. However, you cannot attach more than one bandwidth plan for the same connected areas.
       * For example, if a bandwidth plan for connections within the Chinese mainland is attached to a CEN instance, you cannot attach another bandwidth plan for the same connected areas. However, you can attach a bandwidth plan for connections between the Chinese mainland and North America.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackageWithOptions(const Models::AssociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a bandwidth plan to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can attach multiple bandwidth plans to a CEN instance. However, you cannot attach more than one bandwidth plan for the same connected areas.
       * For example, if a bandwidth plan for connections within the Chinese mainland is attached to a CEN instance, you cannot attach another bandwidth plan for the same connected areas. However, you can attach a bandwidth plan for connections between the Chinese mainland and North America.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackage(const Models::AssociateCenBandwidthPackageRequest &request);

      /**
       * @summary You can create a forwarding association.
       *
       * @description After you create a network instance connection, you must associate it with the route table of an Enterprise Edition transit router. After the association is created, the Enterprise Edition transit router forwards traffic from the network instance based on the routes in the associated route table. Before you call this operation, take note of the following:
       * - Only route tables of Enterprise Edition transit routers support associations. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - A network instance connection can be associated with only one route table of an Enterprise Edition transit router.
       * - The **AssociateTransitRouterAttachmentWithRouteTable** operation is asynchronous. After you send a request, the system returns a **Request ID**, but the association is not immediately created. The system creates the association in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of the association.
       *   - If the association is in the **Associating** state, it is being created. In this state, you can only query the association and cannot perform other operations.
       *   - If the association is in the **Active** state, it is successfully created.
       *
       * @param request AssociateTransitRouterAttachmentWithRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTransitRouterAttachmentWithRouteTableResponse
       */
      Models::AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTableWithOptions(const Models::AssociateTransitRouterAttachmentWithRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create a forwarding association.
       *
       * @description After you create a network instance connection, you must associate it with the route table of an Enterprise Edition transit router. After the association is created, the Enterprise Edition transit router forwards traffic from the network instance based on the routes in the associated route table. Before you call this operation, take note of the following:
       * - Only route tables of Enterprise Edition transit routers support associations. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - A network instance connection can be associated with only one route table of an Enterprise Edition transit router.
       * - The **AssociateTransitRouterAttachmentWithRouteTable** operation is asynchronous. After you send a request, the system returns a **Request ID**, but the association is not immediately created. The system creates the association in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of the association.
       *   - If the association is in the **Associating** state, it is being created. In this state, you can only query the association and cannot perform other operations.
       *   - If the association is in the **Active** state, it is successfully created.
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
       * - For more information about how to grant CEN permissions on virtual private clouds (VPCs) that belong to another Alibaba Cloud account, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * - For more information about how to grant CEN permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, see [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * - By default, you cannot grant permissions on virtual border routers (VBRs) that belong to another Alibaba Cloud account to a CEN instance. If you need to use this feature, contact your account manager.
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
       * - For more information about how to grant CEN permissions on virtual private clouds (VPCs) that belong to another Alibaba Cloud account, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * - For more information about how to grant CEN permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, see [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * - By default, you cannot grant permissions on virtual border routers (VBRs) that belong to another Alibaba Cloud account to a CEN instance. If you need to use this feature, contact your account manager.
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
       * @summary A Cloud Enterprise Network (CEN) instance is the fundamental resource for managing an integrated network. A CEN instance manages a network that can span one or more regions. Before you enable communication between network instances, you must call the CreateCen operation to create a CEN instance.
       *
       * @description **CreateCen** is an asynchronous operation. After a request is sent, the system returns a CEN instance ID, but the CEN instance is not created immediately. The creation task runs in the background. You can call the **DescribeCens** operation to query the status of the CEN instance.
       * - If a CEN instance is in the **Creating** status, it is being created. In this status, you can only query the instance. You cannot perform other operations.
       * - If a CEN instance is in the **Active** status, the instance is created.
       *
       * @param request CreateCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCenWithOptions(const Models::CreateCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A Cloud Enterprise Network (CEN) instance is the fundamental resource for managing an integrated network. A CEN instance manages a network that can span one or more regions. Before you enable communication between network instances, you must call the CreateCen operation to create a CEN instance.
       *
       * @description **CreateCen** is an asynchronous operation. After a request is sent, the system returns a CEN instance ID, but the CEN instance is not created immediately. The creation task runs in the background. You can call the **DescribeCens** operation to query the status of the CEN instance.
       * - If a CEN instance is in the **Creating** status, it is being created. In this status, you can only query the instance. You cannot perform other operations.
       * - If a CEN instance is in the **Active** status, the instance is created.
       *
       * @param request CreateCenRequest
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCen(const Models::CreateCenRequest &request);

      /**
       * @summary To connect network instances in different regions, you must purchase a bandwidth plan. You can call the CreateCenBandwidthPackage operation to create a bandwidth plan.
       *
       * @description - When you create a bandwidth plan, you must specify the connected areas. A connected area is a collection of one or more Alibaba Cloud regions. You must select the connected areas based on the regions that you want to connect. For more information about the relationship between areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * - For more information about billing, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * - **CreateCenBandwidthPackage** is an asynchronous operation. After you send a request, the system returns a bandwidth plan ID. The bandwidth plan is created in the background. You can call the **DescribeCenBandwidthPackages** operation to query the status of the bandwidth plan. The bandwidth plan is successfully created when its status changes to **Idle** or **InUse**.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackageWithOptions(const Models::CreateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To connect network instances in different regions, you must purchase a bandwidth plan. You can call the CreateCenBandwidthPackage operation to create a bandwidth plan.
       *
       * @description - When you create a bandwidth plan, you must specify the connected areas. A connected area is a collection of one or more Alibaba Cloud regions. You must select the connected areas based on the regions that you want to connect. For more information about the relationship between areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * - For more information about billing, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * - **CreateCenBandwidthPackage** is an asynchronous operation. After you send a request, the system returns a bandwidth plan ID. The bandwidth plan is created in the background. You can call the **DescribeCenBandwidthPackages** operation to query the status of the bandwidth plan. The bandwidth plan is successfully created when its status changes to **Idle** or **InUse**.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackage(const Models::CreateCenBandwidthPackageRequest &request);

      /**
       * @summary You can call the CreateCenChildInstanceRouteEntryToAttachment operation to create a route for a network instance connected to an Enterprise Edition transit router. The next hop of the route points to the transit router in the current region.
       *
       * @description - You can create routes only for Virtual Private Cloud (VPC) and virtual border router (VBR) instances that are connected to an Enterprise Edition transit router.
       * - The next hop of the route is the **transit router connection** (the network instance connection) by default and cannot be modified.
       * - **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** and creates the route in the background. The route is not created immediately. You can call the **DescribeRouteEntryList** operation for the VPC to query the status of the route.
       *   - If the route is in the **Pending** state, it is being created. During this time, you can only query the route and cannot perform other operations.
       *   - If the route is in the **Available** state, the route is created.
       *
       * @param request CreateCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::CreateCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateCenChildInstanceRouteEntryToAttachment operation to create a route for a network instance connected to an Enterprise Edition transit router. The next hop of the route points to the transit router in the current region.
       *
       * @description - You can create routes only for Virtual Private Cloud (VPC) and virtual border router (VBR) instances that are connected to an Enterprise Edition transit router.
       * - The next hop of the route is the **transit router connection** (the network instance connection) by default and cannot be modified.
       * - **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** and creates the route in the background. The route is not created immediately. You can call the **DescribeRouteEntryList** operation for the VPC to query the status of the route.
       *   - If the route is in the **Pending** state, it is being created. During this time, you can only query the route and cannot perform other operations.
       *   - If the route is in the **Available** state, the route is created.
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
       * @description - Only inter-region connections created on Enterprise Edition transit routers support QoS policies.
       * - Traffic scheduling applies only to outbound traffic on Enterprise Edition transit routers.
       *   For example, you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions, and create a QoS policy for the transit router in the China (Hangzhou) region. In this case, the QoS policy can ensure bandwidth for network traffic from the China (Hangzhou) region to the China (Qingdao) region. However, the QoS policy does not apply to network traffic from the China (Qingdao) region to the China (Hangzhou) region.
       * - **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the task.
       *   - If the QoS policy is in the **Creating** state, the QoS policy is being created. You can query the QoS policy but cannot perform other operations on the QoS policy.
       *   - If the QoS policy is in the **Active** state, the QoS policy is created.
       * ### Prerequisites
       * Before you call the **CreateCenInterRegionTrafficQosPolicy** operation, make sure that the following requirements are met:
       * - An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * - A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
       *
       * @param request CreateCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenInterRegionTrafficQosPolicyResponse
       */
      Models::CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicyWithOptions(const Models::CreateCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) policy for an inter-region connection on an Enterprise Edition transit router.
       *
       * @description - Only inter-region connections created on Enterprise Edition transit routers support QoS policies.
       * - Traffic scheduling applies only to outbound traffic on Enterprise Edition transit routers.
       *   For example, you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions, and create a QoS policy for the transit router in the China (Hangzhou) region. In this case, the QoS policy can ensure bandwidth for network traffic from the China (Hangzhou) region to the China (Qingdao) region. However, the QoS policy does not apply to network traffic from the China (Qingdao) region to the China (Hangzhou) region.
       * - **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the task.
       *   - If the QoS policy is in the **Creating** state, the QoS policy is being created. You can query the QoS policy but cannot perform other operations on the QoS policy.
       *   - If the QoS policy is in the **Active** state, the QoS policy is created.
       * ### Prerequisites
       * Before you call the **CreateCenInterRegionTrafficQosPolicy** operation, make sure that the following requirements are met:
       * - An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * - A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
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
       * - If a routing policy is in the **Creating** state, the routing policy is being created. In this case, you can query the routing policy but cannot perform other operations.
       * - If a routing policy is in the **Active** state, the routing policy is created.
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
       * - If a routing policy is in the **Creating** state, the routing policy is being created. In this case, you can query the routing policy but cannot perform other operations.
       * - If a routing policy is in the **Active** state, the routing policy is created.
       *
       * @param request CreateCenRouteMapRequest
       * @return CreateCenRouteMapResponse
       */
      Models::CreateCenRouteMapResponse createCenRouteMap(const Models::CreateCenRouteMapRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @description You can use flow logs to capture traffic that is transmitted over transit router instances and network instance connections. Network instance connections include inter-region connections, VPC connections, VPN connections, ECR connections, and VBR connections. Before you create a flow log, note the following:
       * - Only Enterprise Edition transit routers support flow logs.
       * - For inter-region connections, flow logs capture only outbound traffic from the transit router. Inbound traffic is not captured.
       *   For example, an Elastic Compute Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). If you create a flow log for the transit router in the US (Virginia) region, you can view messages sent from the ECS instance in the US (Virginia) region to the ECS instance in the US (Silicon Valley) region in the Simple Log Service console. However, you cannot view messages sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region. To view these messages, you must also create a flow log for the transit router in the US (Silicon Valley) region.
       * - When a flow log captures traffic of a VPC connection, it captures only traffic transmitted over the transit router elastic network interface (ENI). To capture traffic transmitted over other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * - `CreateFlowlog` is an asynchronous operation. After you send a request, the system returns a flow log ID. However, the flow log is not immediately created. The system creates the flow log in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *   - If a flow log is in the **Creating** state, it is being created. In this state, you can only query the flow log.
       *   - If a flow log is in the **Active** state, it is created.
       * ### Prerequisites
       * Before you create a flow log for a resource, make sure that the resource has been created. To create a resource, see the following topics:
       * - [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html)
       * - [CreateTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715446.html)
       * - [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html)
       * - [CreateTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/468243.html)
       * - [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/468270.html)
       * - [CreateTransitRouter](https://help.aliyun.com/document_detail/468222.html)
       *
       * @param request CreateFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowlogResponse
       */
      Models::CreateFlowlogResponse createFlowlogWithOptions(const Models::CreateFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log.
       *
       * @description You can use flow logs to capture traffic that is transmitted over transit router instances and network instance connections. Network instance connections include inter-region connections, VPC connections, VPN connections, ECR connections, and VBR connections. Before you create a flow log, note the following:
       * - Only Enterprise Edition transit routers support flow logs.
       * - For inter-region connections, flow logs capture only outbound traffic from the transit router. Inbound traffic is not captured.
       *   For example, an Elastic Compute Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). If you create a flow log for the transit router in the US (Virginia) region, you can view messages sent from the ECS instance in the US (Virginia) region to the ECS instance in the US (Silicon Valley) region in the Simple Log Service console. However, you cannot view messages sent from the ECS instance in the US (Silicon Valley) region to the ECS instance in the US (Virginia) region. To view these messages, you must also create a flow log for the transit router in the US (Silicon Valley) region.
       * - When a flow log captures traffic of a VPC connection, it captures only traffic transmitted over the transit router elastic network interface (ENI). To capture traffic transmitted over other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * - `CreateFlowlog` is an asynchronous operation. After you send a request, the system returns a flow log ID. However, the flow log is not immediately created. The system creates the flow log in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
       *   - If a flow log is in the **Creating** state, it is being created. In this state, you can only query the flow log.
       *   - If a flow log is in the **Active** state, it is created.
       * ### Prerequisites
       * Before you create a flow log for a resource, make sure that the resource has been created. To create a resource, see the following topics:
       * - [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html)
       * - [CreateTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715446.html)
       * - [CreateTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/468249.html)
       * - [CreateTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/468243.html)
       * - [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/468270.html)
       * - [CreateTransitRouter](https://help.aliyun.com/document_detail/468222.html)
       *
       * @param request CreateFlowlogRequest
       * @return CreateFlowlogResponse
       */
      Models::CreateFlowlogResponse createFlowlog(const Models::CreateFlowlogRequest &request);

      /**
       * @summary Creates a traffic marking policy. A traffic marking policy captures network traffic based on traffic classification rules and marks the traffic with the Differentiated Services Code Point (DSCP) values that you specify.
       *
       * @description - Only Enterprise Edition transit routers support traffic marking policies.
       * - **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *   - If a traffic marking policy is in the **Creating** state, the traffic marking policy is being created. You can query the traffic marking policy but cannot perform other operations.
       *   - If a traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicyWithOptions(const Models::CreateTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic marking policy. A traffic marking policy captures network traffic based on traffic classification rules and marks the traffic with the Differentiated Services Code Point (DSCP) values that you specify.
       *
       * @description - Only Enterprise Edition transit routers support traffic marking policies.
       * - **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic marking policy.
       *   - If a traffic marking policy is in the **Creating** state, the traffic marking policy is being created. You can query the traffic marking policy but cannot perform other operations.
       *   - If a traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicy(const Models::CreateTrafficMarkingPolicyRequest &request);

      /**
       * @summary Creates an aggregate route.
       *
       * @description After you add an aggregate route to the route table of an Enterprise Edition transit router, the transit router propagates the aggregate route only to the route tables of VPC instances that are associated with the transit router route table and have route synchronization enabled.
       * Before you create an aggregate route, make sure that the following requirements are met. Otherwise, the Enterprise Edition transit router does not propagate the aggregate route to the route tables of VPC instances:
       * - The VPC instance is associated with the route table of the Enterprise Edition transit router. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
       * - Route synchronization is enabled for the VPC instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param tmpReq CreateTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouteTableAggregationResponse
       */
      Models::CreateTransitRouteTableAggregationResponse createTransitRouteTableAggregationWithOptions(const Models::CreateTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an aggregate route.
       *
       * @description After you add an aggregate route to the route table of an Enterprise Edition transit router, the transit router propagates the aggregate route only to the route tables of VPC instances that are associated with the transit router route table and have route synchronization enabled.
       * Before you create an aggregate route, make sure that the following requirements are met. Otherwise, the Enterprise Edition transit router does not propagate the aggregate route to the route tables of VPC instances:
       * - The VPC instance is associated with the route table of the Enterprise Edition transit router. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
       * - Route synchronization is enabled for the VPC instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request CreateTransitRouteTableAggregationRequest
       * @return CreateTransitRouteTableAggregationResponse
       */
      Models::CreateTransitRouteTableAggregationResponse createTransitRouteTableAggregation(const Models::CreateTransitRouteTableAggregationRequest &request);

      /**
       * @summary You can call the CreateTransitRouter operation to create an Enterprise Edition transit router instance.
       *
       * @description - You can call the **CreateTransitRouter** operation to create an Enterprise Edition transit router instance. Enterprise Edition transit routers are available only in some regions. For more information about the supported regions, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouter** is an asynchronous operation. After you send a request, the system returns an Enterprise Edition transit router instance ID, but the instance is still being created in the background. You can call the [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) operation to query the status of the Enterprise Edition transit router instance.
       *   - If an Enterprise Edition transit router instance is in the **Creating** state, you can only query the instance and cannot perform other operations.
       *   - If an Enterprise Edition transit router instance is in the **Active** state, the instance has been created.
       * - You can create only one transit router instance in each region for a CEN instance.
       *
       * @param tmpReq CreateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouterWithOptions(const Models::CreateTransitRouterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateTransitRouter operation to create an Enterprise Edition transit router instance.
       *
       * @description - You can call the **CreateTransitRouter** operation to create an Enterprise Edition transit router instance. Enterprise Edition transit routers are available only in some regions. For more information about the supported regions, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouter** is an asynchronous operation. After you send a request, the system returns an Enterprise Edition transit router instance ID, but the instance is still being created in the background. You can call the [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) operation to query the status of the Enterprise Edition transit router instance.
       *   - If an Enterprise Edition transit router instance is in the **Creating** state, you can only query the instance and cannot perform other operations.
       *   - If an Enterprise Edition transit router instance is in the **Active** state, the instance has been created.
       * - You can create only one transit router instance in each region for a CEN instance.
       *
       * @param request CreateTransitRouterRequest
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouter(const Models::CreateTransitRouterRequest &request);

      /**
       * @summary A transit router CIDR block is a custom CIDR block that you can create for a transit router. This CIDR block is similar to a CIDR block that is used to assign an IP address to a router\\"s loopback interface. Call the CreateTransitRouterCidr operation to create a CIDR block for a transit router.
       *
       * @description A transit router CIDR block is a custom CIDR block that you can create for a transit router. It is similar to a CIDR block used to assign an IP address to a router\\"s loopback interface. A transit router CIDR block is used to allocate IP addresses to network instance connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation is used to add a CIDR block to a transit router only after the transit router is created.
       * Before you create a transit router CIDR block, note the following information:
       * - Only Enterprise Edition transit routers support CIDR blocks.
       * - For more information about the limits on transit router CIDR blocks, see [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A transit router supports up to five CIDR blocks. The subnet mask of each CIDR block must be 16 to 24 bits in length.
       * - You cannot create CIDR blocks that are within 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16, or their subnets.
       * - Each CIDR block must not conflict with the CIDR blocks of interconnected network instances in the Cloud Enterprise Network (CEN) instance.
       * - Each CIDR block must be unique within the same CEN instance.
       * - After you add a CIDR block to a transit router and create the first VPN connection on it, the system automatically allocates three CIDR blocks from the specified CIDR block. These three CIDR blocks are reserved by the system for creating VPN connections. The system then allocates IP addresses to IPsec connections from the remaining CIDR blocks.
       *   You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query the CIDR blocks that are reserved by the system or allocated to IPsec connections.
       *
       * @param request CreateTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidrWithOptions(const Models::CreateTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A transit router CIDR block is a custom CIDR block that you can create for a transit router. This CIDR block is similar to a CIDR block that is used to assign an IP address to a router\\"s loopback interface. Call the CreateTransitRouterCidr operation to create a CIDR block for a transit router.
       *
       * @description A transit router CIDR block is a custom CIDR block that you can create for a transit router. It is similar to a CIDR block used to assign an IP address to a router\\"s loopback interface. A transit router CIDR block is used to allocate IP addresses to network instance connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation is used to add a CIDR block to a transit router only after the transit router is created.
       * Before you create a transit router CIDR block, note the following information:
       * - Only Enterprise Edition transit routers support CIDR blocks.
       * - For more information about the limits on transit router CIDR blocks, see [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A transit router supports up to five CIDR blocks. The subnet mask of each CIDR block must be 16 to 24 bits in length.
       * - You cannot create CIDR blocks that are within 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16, or their subnets.
       * - Each CIDR block must not conflict with the CIDR blocks of interconnected network instances in the Cloud Enterprise Network (CEN) instance.
       * - Each CIDR block must be unique within the same CEN instance.
       * - After you add a CIDR block to a transit router and create the first VPN connection on it, the system automatically allocates three CIDR blocks from the specified CIDR block. These three CIDR blocks are reserved by the system for creating VPN connections. The system then allocates IP addresses to IPsec connections from the remaining CIDR blocks.
       *   You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query the CIDR blocks that are reserved by the system or allocated to IPsec connections.
       *
       * @param request CreateTransitRouterCidrRequest
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidr(const Models::CreateTransitRouterCidrRequest &request);

      /**
       * @summary Call the CreateTransitRouterEcrAttachment operation to connect an Express Connect Router (ECR) instance to a transit router in the same region.
       *
       * @description - Only Enterprise Edition transit routers support ECR connections.
       * - You can create an ECR connection on an Enterprise Edition transit router in one of the following two ways:
       *   - If you have an Enterprise Edition transit router instance in the destination region, you can create an ECR connection by specifying **EcrId**, **RegionId**, and **TransitRouterId**.
       *   - If you do not have an Enterprise Edition transit router instance in the destination region, you can create an ECR connection by specifying **EcrId**, **CenId**, and **RegionId**. When you create the ECR connection, the system automatically creates an Enterprise Edition transit router instance for you.
       * - CreateTransitRouterEcrAttachment is an asynchronous operation. After you send a request, the system returns an ECR connection ID, but the connection is created in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of the ECR connection.
       *   - If an ECR connection is in the **Attaching** status, the connection is being created. In this status, you can only query the connection and cannot perform other operations.
       *   - If an ECR connection is in the **Attached** status, the connection is created.
       * - By default, after an ECR connection is created, it is not associated with any route table of the Enterprise Edition transit router for route learning or forwarding.
       *   After the ECR connection is associated with a route table of the Enterprise Edition transit router for [route learning](https://help.aliyun.com/document_detail/468300.html), the system automatically propagates the routes from the ECR instance to the route table of the Enterprise Edition transit router.
       * - After an ECR connection is created, the system automatically propagates routes from the route table of the Enterprise Edition transit router associated with the ECR connection to the route table of the ECR instance.
       * ### Prerequisites
       * - The Alibaba Cloud accounts that own the Enterprise Edition transit router and the ECR instance must belong to the same enterprise.
       * - An Enterprise Edition transit router can connect to ECR instances that belong to the same account or different accounts. Before you create a cross-account ECR connection, you must obtain authorization from the account that owns the ECR instance. For more information, see [Authorize a cross-account network instance](https://help.aliyun.com/document_detail/181553.html).
       * - **Before you call this operation to create an ECR connection, you must call the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to create an association between the ECR instance and the Enterprise Edition transit router instance.**
       *   **When you call the DeleteTransitRouterEcrAttachment operation to force delete an ECR connection, the system also deletes the association between the ECR instance and the Enterprise Edition transit router instance. You do not need to delete the association separately.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachmentWithOptions(const Models::CreateTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CreateTransitRouterEcrAttachment operation to connect an Express Connect Router (ECR) instance to a transit router in the same region.
       *
       * @description - Only Enterprise Edition transit routers support ECR connections.
       * - You can create an ECR connection on an Enterprise Edition transit router in one of the following two ways:
       *   - If you have an Enterprise Edition transit router instance in the destination region, you can create an ECR connection by specifying **EcrId**, **RegionId**, and **TransitRouterId**.
       *   - If you do not have an Enterprise Edition transit router instance in the destination region, you can create an ECR connection by specifying **EcrId**, **CenId**, and **RegionId**. When you create the ECR connection, the system automatically creates an Enterprise Edition transit router instance for you.
       * - CreateTransitRouterEcrAttachment is an asynchronous operation. After you send a request, the system returns an ECR connection ID, but the connection is created in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of the ECR connection.
       *   - If an ECR connection is in the **Attaching** status, the connection is being created. In this status, you can only query the connection and cannot perform other operations.
       *   - If an ECR connection is in the **Attached** status, the connection is created.
       * - By default, after an ECR connection is created, it is not associated with any route table of the Enterprise Edition transit router for route learning or forwarding.
       *   After the ECR connection is associated with a route table of the Enterprise Edition transit router for [route learning](https://help.aliyun.com/document_detail/468300.html), the system automatically propagates the routes from the ECR instance to the route table of the Enterprise Edition transit router.
       * - After an ECR connection is created, the system automatically propagates routes from the route table of the Enterprise Edition transit router associated with the ECR connection to the route table of the ECR instance.
       * ### Prerequisites
       * - The Alibaba Cloud accounts that own the Enterprise Edition transit router and the ECR instance must belong to the same enterprise.
       * - An Enterprise Edition transit router can connect to ECR instances that belong to the same account or different accounts. Before you create a cross-account ECR connection, you must obtain authorization from the account that owns the ECR instance. For more information, see [Authorize a cross-account network instance](https://help.aliyun.com/document_detail/181553.html).
       * - **Before you call this operation to create an ECR connection, you must call the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to create an association between the ECR instance and the Enterprise Edition transit router instance.**
       *   **When you call the DeleteTransitRouterEcrAttachment operation to force delete an ECR connection, the system also deletes the association between the ECR instance and the Enterprise Edition transit router instance. You do not need to delete the association separately.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachment(const Models::CreateTransitRouterEcrAttachmentRequest &request);

      /**
       * @summary A multicast domain defines the scope of a multicast network in a region. Only resources within the multicast domain can send and receive multicast traffic. You can call the CreateTransitRouterMulticastDomain operation to create a multicast domain.
       *
       * @description Before you call this operation, note the following:
       * - Make sure that you have created an Enterprise Edition transit router in the region where you want to create the multicast network and enabled the multicast feature for the transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *   If you created an Enterprise Edition transit router before you requested multicast resources, you cannot enable the multicast feature for the transit router. You must delete the current Enterprise Edition transit router and create a new one. For more information about how to delete an Enterprise Edition transit router, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * - When you call the **CreateTransitRouterMulticastDomain** operation, if you specify **CenId** and **RegionId**, you do not need to specify **TransitRouterId**. If you specify **TransitRouterId**, you do not need to specify **CenId** or **RegionId**.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomainWithOptions(const Models::CreateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A multicast domain defines the scope of a multicast network in a region. Only resources within the multicast domain can send and receive multicast traffic. You can call the CreateTransitRouterMulticastDomain operation to create a multicast domain.
       *
       * @description Before you call this operation, note the following:
       * - Make sure that you have created an Enterprise Edition transit router in the region where you want to create the multicast network and enabled the multicast feature for the transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *   If you created an Enterprise Edition transit router before you requested multicast resources, you cannot enable the multicast feature for the transit router. You must delete the current Enterprise Edition transit router and create a new one. For more information about how to delete an Enterprise Edition transit router, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * - When you call the **CreateTransitRouterMulticastDomain** operation, if you specify **CenId** and **RegionId**, you do not need to specify **TransitRouterId**. If you specify **TransitRouterId**, you do not need to specify **CenId** or **RegionId**.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomain(const Models::CreateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary After network instances (VPC, VBR, IPsec connection) are connected to a transit router, you need to create an inter-region connection to enable communication between network instances in different regions. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection for an Enterprise Edition transit router instance.
       *
       * @description - Enterprise Edition transit routers allow you to allocate bandwidth resources to inter-region connections using the following methods:
       *   - **From bandwidth plan**:
       *     You must purchase a bandwidth plan and then allocate bandwidth resources from the plan to inter-region connections. For more information about how to purchase a bandwidth plan, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *   - **Pay-by-traffic**:
       *     You can set a maximum bandwidth value for an inter-region connection. You are then charged based on the amount of data transferred over the connection. For more information about billing, see [Inter-region traffic](https://help.aliyun.com/document_detail/337827.html).
       * - The **CreateTransitRouterPeerAttachment** operation is asynchronous. After you call this operation, the system returns an inter-region connection ID. However, the inter-region connection is not created immediately. The creation task runs in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       *   - When the inter-region connection is in the **Attaching** state, the connection is being created. In this state, you can only query the inter-region connection. You cannot perform other operations.
       *   - When the inter-region connection is in the **Attached** state, the connection creation is complete.
       *
       * @param request CreateTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterPeerAttachmentResponse
       */
      Models::CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachmentWithOptions(const Models::CreateTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After network instances (VPC, VBR, IPsec connection) are connected to a transit router, you need to create an inter-region connection to enable communication between network instances in different regions. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection for an Enterprise Edition transit router instance.
       *
       * @description - Enterprise Edition transit routers allow you to allocate bandwidth resources to inter-region connections using the following methods:
       *   - **From bandwidth plan**:
       *     You must purchase a bandwidth plan and then allocate bandwidth resources from the plan to inter-region connections. For more information about how to purchase a bandwidth plan, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *   - **Pay-by-traffic**:
       *     You can set a maximum bandwidth value for an inter-region connection. You are then charged based on the amount of data transferred over the connection. For more information about billing, see [Inter-region traffic](https://help.aliyun.com/document_detail/337827.html).
       * - The **CreateTransitRouterPeerAttachment** operation is asynchronous. After you call this operation, the system returns an inter-region connection ID. However, the inter-region connection is not created immediately. The creation task runs in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       *   - When the inter-region connection is in the **Attaching** state, the connection is being created. In this state, you can only query the inter-region connection. You cannot perform other operations.
       *   - When the inter-region connection is in the **Attached** state, the connection creation is complete.
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
       * @summary Creates a route entry in the route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a route entry ID. The route entry is created in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of the route entry.
       * - If a route entry is in the **Creating** state, the route entry is being created. In this state, you can only query the route entry and cannot perform other operations.
       * - If a route entry is in the **Active** state, the route entry has been created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntryWithOptions(const Models::CreateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route entry in the route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a route entry ID. The route entry is created in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of the route entry.
       * - If a route entry is in the **Creating** state, the route entry is being created. In this state, you can only query the route entry and cannot perform other operations.
       * - If a route entry is in the **Active** state, the route entry has been created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntry(const Models::CreateTransitRouterRouteEntryRequest &request);

      /**
       * @summary Calls the CreateTransitRouterRouteTable operation to create a custom route table for an Enterprise Edition transit router.
       *
       * @description - You can create custom route tables only for Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, a route table ID is returned, but the route table is still being created in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of a route table.
       *   - If a route table is in the **Creating** state, it is being created. In this state, you can only query the route table and cannot perform other operations.
       *   - If a route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTableWithOptions(const Models::CreateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateTransitRouterRouteTable operation to create a custom route table for an Enterprise Edition transit router.
       *
       * @description - You can create custom route tables only for Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, a route table ID is returned, but the route table is still being created in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of a route table.
       *   - If a route table is in the **Creating** state, it is being created. In this state, you can only query the route table and cannot perform other operations.
       *   - If a route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTable(const Models::CreateTransitRouterRouteTableRequest &request);

      /**
       * @summary Connects a virtual border router (VBR) with a transit router in the same region.
       *
       * @description - For information about the regions and zones supported by Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * - You can create a VBR connection with or without an Enterprise Edition transit router:
       *   - If you already have an Enterprise Edition transit router in the target region, specify the **VbrId**, **RegionId**, and **TransitRouterId** parameters.
       *   - If you do not have an Enterprise Edition transit router in the target region, specify the **VbrId**, **CenId**, and **RegionId&#x20;**&#x70;arameters, and the system will automatically create an Enterprise Edition transit router when executing the operation.
       * - This operation is executed asynchronously. After receiving a request, the system returns a VBR connection ID before the VBR connection is fully ready, and it continues the creation task in the backend. You can call **ListTransitRouterVbrAttachments** to check whether the connection has been created.
       *   - If the VBR connection is in the **Attaching** state, it hasn\\"t been created. In this case, you can query information about the connection but cannot perform other operations on it.
       *   - If the VBR connection is in the **Attached** state, the creation task has been completed.
       * - The transit router and VBR can be in the same or different Alibaba Cloud accounts. In a cross-account scenario, both accounts must belong to the same enterprise, and you need to [grant the required permissions on the VBR to the transit router](https://help.aliyun.com/document_detail/181553.html).
       * - A newly created VBR connection is not in route learning or associated forwarding correlations with any route table on the transit router.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachmentWithOptions(const Models::CreateTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connects a virtual border router (VBR) with a transit router in the same region.
       *
       * @description - For information about the regions and zones supported by Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * - You can create a VBR connection with or without an Enterprise Edition transit router:
       *   - If you already have an Enterprise Edition transit router in the target region, specify the **VbrId**, **RegionId**, and **TransitRouterId** parameters.
       *   - If you do not have an Enterprise Edition transit router in the target region, specify the **VbrId**, **CenId**, and **RegionId&#x20;**&#x70;arameters, and the system will automatically create an Enterprise Edition transit router when executing the operation.
       * - This operation is executed asynchronously. After receiving a request, the system returns a VBR connection ID before the VBR connection is fully ready, and it continues the creation task in the backend. You can call **ListTransitRouterVbrAttachments** to check whether the connection has been created.
       *   - If the VBR connection is in the **Attaching** state, it hasn\\"t been created. In this case, you can query information about the connection but cannot perform other operations on it.
       *   - If the VBR connection is in the **Attached** state, the creation task has been completed.
       * - The transit router and VBR can be in the same or different Alibaba Cloud accounts. In a cross-account scenario, both accounts must belong to the same enterprise, and you need to [grant the required permissions on the VBR to the transit router](https://help.aliyun.com/document_detail/181553.html).
       * - A newly created VBR connection is not in route learning or associated forwarding correlations with any route table on the transit router.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachment(const Models::CreateTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Attaches a virtual private cloud (VPC) to a transit router. Once connected, the transit router enables private network communication.
       *
       * @description - You can create a VPC connection for an Enterprise Edition transit router in one of two ways:
       *   - If you have an Enterprise Edition transit router in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId**.
       *   - If you do not have an Enterprise Edition transit router in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId**. When you create the VPC connection, the system automatically creates an Enterprise Edition transit router.
       * - **CreateTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a VPC connection ID, and the connection is created in the background. Call the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of the VPC connection.
       *   - The **Attaching** state indicates that the VPC connection is being created. In this state, you can only query the VPC connection.
       *   - The **Attached** state indicates that the VPC connection has been created.
       * - By default, a newly created VPC connection is not associated with any transit router route table for route learning or forwarding.
       * ### Prerequisites
       * Before you call this API operation to create a VPC connection, ensure the following prerequisites are met:
       * - The VPC must have at least one vSwitch in a zone that supports Enterprise Edition transit routers. The vSwitch must have at least one available IP address. For more information about supported regions and zones, see [Regions and zones that support Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * - To connect a cross-account network instance, you must first have the required permissions. For more information, see [Grant permissions on a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * - Creating a VPC connection incurs costs. Ensure you understand the billing rules. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param tmpReq CreateTransitRouterVpcAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachmentWithOptions(const Models::CreateTransitRouterVpcAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a virtual private cloud (VPC) to a transit router. Once connected, the transit router enables private network communication.
       *
       * @description - You can create a VPC connection for an Enterprise Edition transit router in one of two ways:
       *   - If you have an Enterprise Edition transit router in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId**.
       *   - If you do not have an Enterprise Edition transit router in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId**. When you create the VPC connection, the system automatically creates an Enterprise Edition transit router.
       * - **CreateTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a VPC connection ID, and the connection is created in the background. Call the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of the VPC connection.
       *   - The **Attaching** state indicates that the VPC connection is being created. In this state, you can only query the VPC connection.
       *   - The **Attached** state indicates that the VPC connection has been created.
       * - By default, a newly created VPC connection is not associated with any transit router route table for route learning or forwarding.
       * ### Prerequisites
       * Before you call this API operation to create a VPC connection, ensure the following prerequisites are met:
       * - The VPC must have at least one vSwitch in a zone that supports Enterprise Edition transit routers. The vSwitch must have at least one available IP address. For more information about supported regions and zones, see [Regions and zones that support Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * - To connect a cross-account network instance, you must first have the required permissions. For more information, see [Grant permissions on a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * - Creating a VPC connection incurs costs. Ensure you understand the billing rules. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param request CreateTransitRouterVpcAttachmentRequest
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachment(const Models::CreateTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary A transit router supports IPsec-VPN connections, allowing a data center to connect to the transit router and communicate with other networks. You can call the CreateTransitRouterVpnAttachment operation to create a VPN connection.
       *
       * @description - After you create a VPN connection, the connection does not learn routes from or associate with any route table of the transit router by default.
       * - When you call the `CreateTransitRouterVpnAttachment` operation, you do not need to specify **TransitRouterId** if you specify **CenId** and **RegionId**. You do not need to specify **CenId** if you specify **TransitRouterId** and **RegionId**.
       * ### Prerequisites
       * - Before you create a VPN connection, make sure that you have created an IPsec-VPN connection in the same region as the transit router instance and that the IPsec-VPN connection is not attached to any resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * - If the transit router instance needs to connect to a cross-account IPsec-VPN connection, make sure that the transit router instance is granted the required permissions on the IPsec-VPN connection. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       * - Before you create a VPN connection, make sure that you have configured a CIDR block for the transit router. For more information, see [CreateTransitRouterCidr](https://help.aliyun.com/document_detail/468230.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachmentWithOptions(const Models::CreateTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A transit router supports IPsec-VPN connections, allowing a data center to connect to the transit router and communicate with other networks. You can call the CreateTransitRouterVpnAttachment operation to create a VPN connection.
       *
       * @description - After you create a VPN connection, the connection does not learn routes from or associate with any route table of the transit router by default.
       * - When you call the `CreateTransitRouterVpnAttachment` operation, you do not need to specify **TransitRouterId** if you specify **CenId** and **RegionId**. You do not need to specify **CenId** if you specify **TransitRouterId** and **RegionId**.
       * ### Prerequisites
       * - Before you create a VPN connection, make sure that you have created an IPsec-VPN connection in the same region as the transit router instance and that the IPsec-VPN connection is not attached to any resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * - If the transit router instance needs to connect to a cross-account IPsec-VPN connection, make sure that the transit router instance is granted the required permissions on the IPsec-VPN connection. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       * - Before you create a VPN connection, make sure that you have configured a CIDR block for the transit router. For more information, see [CreateTransitRouterCidr](https://help.aliyun.com/document_detail/468230.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachment(const Models::CreateTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary Disables a flow log. A disabled flow log no longer captures network traffic.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes disabling the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the flow log has been disabled.
       * - If the flow log is in the **Modifying** state, the task is still in progress. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the flow log is in the **Inactive** state, the flow log has been disabled.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a flow log. A disabled flow log no longer captures network traffic.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes disabling the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the flow log has been disabled.
       * - If the flow log is in the **Modifying** state, the task is still in progress. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the flow log is in the **Inactive** state, the flow log has been disabled.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes a Cloud Enterprise Network (CEN) instance.
       *
       * @description **DeleteCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeCens** to query the status of a CEN instance.
       * - If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this case, you can query the CEN instance but cannot perform other operations.
       * - If the CEN instance cannot be found, the CEN instance is deleted.
       * ### [](#)Prerequisites
       * The CEN instance that you want to delete is not associated with a bandwidth plan, and the transit router associated with the CEN instance does not have a network instance connection or a custom route table.
       * - For more information about how to detach a network instance, see the following topics:
       *   - [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *   - [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *   - [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *   - [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *   > For more information about how to detach network instances from a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * - For more information about how to delete custom route tables from an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - For more information about how to disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
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
       * - If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this case, you can query the CEN instance but cannot perform other operations.
       * - If the CEN instance cannot be found, the CEN instance is deleted.
       * ### [](#)Prerequisites
       * The CEN instance that you want to delete is not associated with a bandwidth plan, and the transit router associated with the CEN instance does not have a network instance connection or a custom route table.
       * - For more information about how to detach a network instance, see the following topics:
       *   - [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *   - [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *   - [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *   - [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *   > For more information about how to detach network instances from a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * - For more information about how to delete custom route tables from an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - For more information about how to disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenRequest
       * @return DeleteCenResponse
       */
      Models::DeleteCenResponse deleteCen(const Models::DeleteCenRequest &request);

      /**
       * @summary Deletes a bandwidth plan.
       *
       * @description <props="china">
       * - Before you delete a bandwidth plan, ensure that it is detached from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       * - If you want to delete a prepay bandwidth plan, you must go to the [Order Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from the bandwidth plan. If you have questions about unsubscription, see [Unsubscription rules](https://help.aliyun.com/zh/user-center/user-guide/unsubscription-rules#p-1qo-3ce-m7z). This operation does not support deleting bandwidth plans that use the subscription billing method.
       * <props="intl">
       * Before you delete a bandwidth plan, ensure that it is detached from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackageWithOptions(const Models::DeleteCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bandwidth plan.
       *
       * @description <props="china">
       * - Before you delete a bandwidth plan, ensure that it is detached from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       * - If you want to delete a prepay bandwidth plan, you must go to the [Order Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from the bandwidth plan. If you have questions about unsubscription, see [Unsubscription rules](https://help.aliyun.com/zh/user-center/user-guide/unsubscription-rules#p-1qo-3ce-m7z). This operation does not support deleting bandwidth plans that use the subscription billing method.
       * <props="intl">
       * Before you delete a bandwidth plan, ensure that it is detached from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenBandwidthPackageRequest
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackage(const Models::DeleteCenBandwidthPackageRequest &request);

      /**
       * @summary Call the DeleteCenChildInstanceRouteEntryToAttachment operation to delete a route entry from a network instance that is connected to an Enterprise Edition transit router.
       *
       * @description - You can delete route entries from Virtual Private Cloud (VPC) instances and virtual border router (VBR) instances only if the next hop of the route entry is a **transit router connection** (a network instance connection).
       * - **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the route entry is still being deleted in the background. You can call the **DescribeRouteEntryList** operation for VPC to query the status of the route entry.
       *   - If a route entry is in the **Deleting** state, it is being deleted. During this time, you can only query the route entry and cannot perform other operations on it.
       *   - If you cannot find the specified route entry, it has been deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DeleteCenChildInstanceRouteEntryToAttachment operation to delete a route entry from a network instance that is connected to an Enterprise Edition transit router.
       *
       * @description - You can delete route entries from Virtual Private Cloud (VPC) instances and virtual border router (VBR) instances only if the next hop of the route entry is a **transit router connection** (a network instance connection).
       * - **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the route entry is still being deleted in the background. You can call the **DescribeRouteEntryList** operation for VPC to query the status of the route entry.
       *   - If a route entry is in the **Deleting** state, it is being deleted. During this time, you can only query the route entry and cannot perform other operations on it.
       *   - If you cannot find the specified route entry, it has been deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachment(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request);

      /**
       * @summary You can call the DeleteCenChildInstanceRouteEntryToCen operation to delete a route from a network instance.
       *
       * @description - The DeleteCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - You cannot use the DeleteCenChildInstanceRouteEntryToCen operation to delete routes from a network instance that is attached to an Enterprise Edition transit router.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCenWithOptions(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteCenChildInstanceRouteEntryToCen operation to delete a route from a network instance.
       *
       * @description - The DeleteCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - You cannot use the DeleteCenChildInstanceRouteEntryToCen operation to delete routes from a network instance that is attached to an Enterprise Edition transit router.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCen(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @description - Before you delete a QoS policy, you must delete all queues in the QoS policy except the default queue. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * - **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a QoS policy.
       *   - If a QoS policy is in the **Deleting** state, the QoS policy is being deleted. You can query the QoS policy but cannot perform other operations.
       *   - If a QoS policy cannot be found, the QoS policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicyWithOptions(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quality of service (QoS) policy.
       *
       * @description - Before you delete a QoS policy, you must delete all queues in the QoS policy except the default queue. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * - **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a QoS policy.
       *   - If a QoS policy is in the **Deleting** state, the QoS policy is being deleted. You can query the QoS policy but cannot perform other operations.
       *   - If a QoS policy cannot be found, the QoS policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicy(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request);

      /**
       * @summary Deletes a queue from a quality of service (QoS) policy.
       *
       * @description - You cannot delete the default queue.
       * - **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a queue. If a queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueueWithOptions(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a queue from a quality of service (QoS) policy.
       *
       * @description - You cannot delete the default queue.
       * - **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a queue. If a queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueue(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request);

      /**
       * @summary The DeleteCenRouteMap operation deletes a specified routing policy.
       *
       * @description `DeleteCenRouteMap` is an asynchronous operation. After you call this operation, the system returns a request ID. The routing policy is then deleted in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If a routing policy is in the **Deleting** state, it is being deleted, and you can only perform query operations on it.
       * - If the routing policy cannot be found when you call `DescribeCenRouteMaps`, the policy has been deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMapWithOptions(const Models::DeleteCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteCenRouteMap operation deletes a specified routing policy.
       *
       * @description `DeleteCenRouteMap` is an asynchronous operation. After you call this operation, the system returns a request ID. The routing policy is then deleted in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If a routing policy is in the **Deleting** state, it is being deleted, and you can only perform query operations on it.
       * - If the routing policy cannot be found when you call `DescribeCenRouteMaps`, the policy has been deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMap(const Models::DeleteCenRouteMapRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes deleting the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the flow log has been deleted.
       * - If the flow log is in the **Deleting** state, it is still being deleted. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the `DescribeFlowlogs` call fails because the flow log is not found, it has been deleted.
       *
       * @param request DeleteFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlogWithOptions(const Models::DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes deleting the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the flow log has been deleted.
       * - If the flow log is in the **Deleting** state, it is still being deleted. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the `DescribeFlowlogs` call fails because the flow log is not found, it has been deleted.
       *
       * @param request DeleteFlowlogRequest
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlog(const Models::DeleteFlowlogRequest &request);

      /**
       * @summary Call the DeleteRouteServiceInCen operation to delete the configuration of an Alibaba Cloud service from a Basic Edition transit router.
       *
       * @description **DeleteRouteServiceInCen** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation continues in the background. The system returns a request ID even if you specify an invalid parameter. In this case, the Alibaba Cloud service configuration is not deleted. You can call the **DescribeRouteServicesInCen** operation to query the status of the Alibaba Cloud service.
       * - If the Alibaba Cloud service is in the **Deleting** state, you can only query its configuration. You cannot perform other operations.
       * - If the specified Alibaba Cloud service configuration is not found, the configuration has been deleted.
       *
       * @param request DeleteRouteServiceInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteServiceInCenResponse
       */
      Models::DeleteRouteServiceInCenResponse deleteRouteServiceInCenWithOptions(const Models::DeleteRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DeleteRouteServiceInCen operation to delete the configuration of an Alibaba Cloud service from a Basic Edition transit router.
       *
       * @description **DeleteRouteServiceInCen** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation continues in the background. The system returns a request ID even if you specify an invalid parameter. In this case, the Alibaba Cloud service configuration is not deleted. You can call the **DescribeRouteServicesInCen** operation to query the status of the Alibaba Cloud service.
       * - If the Alibaba Cloud service is in the **Deleting** state, you can only query its configuration. You cannot perform other operations.
       * - If the specified Alibaba Cloud service configuration is not found, the configuration has been deleted.
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
       * @description - Before you delete an aggregate route, make sure that your network has a redundant route to prevent service interruptions.
       * - After an aggregate route is deleted, the aggregate route is automatically withdrawn from virtual private clouds (VPCs). Specific routes that fall within the aggregate route are advertised to the VPCs.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregationWithOptions(const Models::DeleteTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an aggregate route.
       *
       * @description - Before you delete an aggregate route, make sure that your network has a redundant route to prevent service interruptions.
       * - After an aggregate route is deleted, the aggregate route is automatically withdrawn from virtual private clouds (VPCs). Specific routes that fall within the aggregate route are advertised to the VPCs.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregation(const Models::DeleteTransitRouteTableAggregationRequest &request);

      /**
       * @summary Deletes a transit router.
       *
       * @description **DeleteTransitRouter** is an asynchronous operation. After you send a request, the **request ID** is returned but the operation is still being performed in the system background. You can call **ListTransitRouters** to query the status of a transit router.
       * - If a transit router is in the **Deleting** state, the transit router is being deleted. In this case, you can query the transit router but cannot perform other operations.
       * - If a transit router cannot be found, the transit router is deleted.
       * #### Prerequisites
       * Before you delete a transit router, make sure that the following prerequisites are met:
       * - No network instance connections are created on the transit router.
       *   - For more information about how to delete a virtual private cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       *   - For more information about how to delete a virtual border router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       *   - For more information about how to delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *   - For more information about how to delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *   - For more information about how to delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
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
       * - If a transit router is in the **Deleting** state, the transit router is being deleted. In this case, you can query the transit router but cannot perform other operations.
       * - If a transit router cannot be found, the transit router is deleted.
       * #### Prerequisites
       * Before you delete a transit router, make sure that the following prerequisites are met:
       * - No network instance connections are created on the transit router.
       *   - For more information about how to delete a virtual private cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       *   - For more information about how to delete a virtual border router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       *   - For more information about how to delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *   - For more information about how to delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *   - For more information about how to delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
       * - No custom route tables are created on the transit router. For more information about how to delete a custom route table, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       *
       * @param request DeleteTransitRouterRequest
       * @return DeleteTransitRouterResponse
       */
      Models::DeleteTransitRouterResponse deleteTransitRouter(const Models::DeleteTransitRouterRequest &request);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description You cannot delete a CIDR block from which IP addresses have been allocated.
       *
       * @param request DeleteTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterCidrResponse
       */
      Models::DeleteTransitRouterCidrResponse deleteTransitRouterCidrWithOptions(const Models::DeleteTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description You cannot delete a CIDR block from which IP addresses have been allocated.
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
       * @summary You can call the DeleteTransitRouterMulticastDomain operation to delete a multicast domain.
       *
       * @description Before you delete a multicast domain, ensure that the following requirements are met:
       * - The multicast domain is not associated with any vSwitch. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - No multicast source or member exists in the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - The multicast domain is not associated with another multicast domain as a member. To disassociate the domains, delete the member from the other multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - Ensure that you enter the correct parameter values when you call the operation. If you enter an incorrect parameter value, a request ID is returned, but the multicast domain is not deleted.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomainWithOptions(const Models::DeleteTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteTransitRouterMulticastDomain operation to delete a multicast domain.
       *
       * @description Before you delete a multicast domain, ensure that the following requirements are met:
       * - The multicast domain is not associated with any vSwitch. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - No multicast source or member exists in the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - The multicast domain is not associated with another multicast domain as a member. To disassociate the domains, delete the member from the other multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - Ensure that you enter the correct parameter values when you call the operation. If you enter an incorrect parameter value, a request ID is returned, but the multicast domain is not deleted.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomain(const Models::DeleteTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Call the DeleteTransitRouterPeerAttachment operation to delete an inter-region connection from an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterPeerAttachment** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the inter-region connection is not immediately deleted. The system deletes the connection in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       * - If an inter-region connection is in the **Detaching** state, it is being deleted. In this state, you can only query the connection and cannot perform other operations.
       * - If the specified inter-region connection is not found, the connection has been deleted.
       * Make sure that you specify valid parameter values when you call the **DeleteTransitRouterPeerAttachment** operation. If you specify an invalid parameter value, the system returns a **RequestId** but does not delete the inter-region connection.
       *
       * @param request DeleteTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterPeerAttachmentResponse
       */
      Models::DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachmentWithOptions(const Models::DeleteTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DeleteTransitRouterPeerAttachment operation to delete an inter-region connection from an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterPeerAttachment** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the inter-region connection is not immediately deleted. The system deletes the connection in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       * - If an inter-region connection is in the **Detaching** state, it is being deleted. In this state, you can only query the connection and cannot perform other operations.
       * - If the specified inter-region connection is not found, the connection has been deleted.
       * Make sure that you specify valid parameter values when you call the **DeleteTransitRouterPeerAttachment** operation. If you specify an invalid parameter value, the system returns a **RequestId** but does not delete the inter-region connection.
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
       * @summary You can call the DeleteTransitRouterRouteEntry operation to delete a static route of the Blackhole or Attachment type from the route table of an Enterprise Edition transit router.
       *
       * @description Before you call this operation, note the following:
       * - If you delete a route entry by specifying **TransitRouterRouteEntryId**, you do not need to specify the **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock** parameters. These parameters are mutually exclusive.
       * - If you do not specify **TransitRouterRouteEntryId**, you must specify the required parameters based on the next hop type:
       *   - To delete a blackhole route, specify the **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType** parameters.
       *   - To delete a route that is not a blackhole route, specify the **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId** parameters.
       * - **DeleteTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the route entry is not immediately deleted. The system deletes the route entry in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of the route entry.
       *   - If a route entry is in the **Deleting** state, it is being deleted. You can only query the route entry and cannot perform other operations.
       *   - If the specified route entry cannot be found, the route entry has been deleted.
       * ### Limits
       * This operation deletes only static routes. It cannot delete routes that are automatically learned by the system. To query the type of a route entry, call the [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) operation.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntryWithOptions(const Models::DeleteTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteTransitRouterRouteEntry operation to delete a static route of the Blackhole or Attachment type from the route table of an Enterprise Edition transit router.
       *
       * @description Before you call this operation, note the following:
       * - If you delete a route entry by specifying **TransitRouterRouteEntryId**, you do not need to specify the **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock** parameters. These parameters are mutually exclusive.
       * - If you do not specify **TransitRouterRouteEntryId**, you must specify the required parameters based on the next hop type:
       *   - To delete a blackhole route, specify the **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType** parameters.
       *   - To delete a route that is not a blackhole route, specify the **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId** parameters.
       * - **DeleteTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the route entry is not immediately deleted. The system deletes the route entry in the background. You can call the **ListTransitRouterRouteEntries** operation to query the status of the route entry.
       *   - If a route entry is in the **Deleting** state, it is being deleted. You can only query the route entry and cannot perform other operations.
       *   - If the specified route entry cannot be found, the route entry has been deleted.
       * ### Limits
       * This operation deletes only static routes. It cannot delete routes that are automatically learned by the system. To query the type of a route entry, call the [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) operation.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntry(const Models::DeleteTransitRouterRouteEntryRequest &request);

      /**
       * @summary You can call the DeleteTransitRouterRouteTable operation to delete a custom route table of an Enterprise Edition transit router.
       *
       * @description - You cannot delete the default route table of an Enterprise Edition transit router.
       * - **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**. The custom route table is not deleted immediately because the system deletes the route table in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of the custom route table.
       *   - If a custom route table is in the Deleting state, the route table is being deleted. In this state, you can only query the route table. You cannot perform other operations.
       *   - If the specified custom route table cannot be found, the route table has been deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTableWithOptions(const Models::DeleteTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteTransitRouterRouteTable operation to delete a custom route table of an Enterprise Edition transit router.
       *
       * @description - You cannot delete the default route table of an Enterprise Edition transit router.
       * - **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**. The custom route table is not deleted immediately because the system deletes the route table in the background. You can call the **ListTransitRouterRouteTables** operation to query the status of the custom route table.
       *   - If a custom route table is in the Deleting state, the route table is being deleted. In this state, you can only query the route table. You cannot perform other operations.
       *   - If the specified custom route table cannot be found, the route table has been deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTable(const Models::DeleteTransitRouterRouteTableRequest &request);

      /**
       * @summary Deletes a virtual border router (VBR) connection for an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterVbrAttachment** operation is asynchronous. The system returns a **RequestId**, while running the deletion task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of the VBR connection.
       * - When the VBR connection is in the **Detaching** state, the VBR is being deleted. You can only query the VBR connection but cannot perform other operations.
       * - If a VBR connection cannot be found, the VBR connection is deleted.
       * Before you call the DeleteTransitRouterVbrAttachment operation, make sure that all request parameters are valid. If a parameter is invalid, the system returns a request ID and does not delete the VBR connection.
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachmentWithOptions(const Models::DeleteTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual border router (VBR) connection for an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterVbrAttachment** operation is asynchronous. The system returns a **RequestId**, while running the deletion task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of the VBR connection.
       * - When the VBR connection is in the **Detaching** state, the VBR is being deleted. You can only query the VBR connection but cannot perform other operations.
       * - If a VBR connection cannot be found, the VBR connection is deleted.
       * Before you call the DeleteTransitRouterVbrAttachment operation, make sure that all request parameters are valid. If a parameter is invalid, the system returns a request ID and does not delete the VBR connection.
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachment(const Models::DeleteTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
       * - If a VPC connection is in the **Detaching** state, the VPC connection is being deleted. You can query the VPC connection but cannot perform other operations.
       * - If a VPC connection cannot be found, it is deleted.
       * ## Prerequisites
       * Before you delete a VPC connection, make sure that the following requirements are met:
       * - No associated forwarding correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * - No route learning correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * - The route table of the VPC does not contain routes that point to the VPC connection. For more information about how to delete routes from a VPC route table, see [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html).
       * - The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from the route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * - The route tables of the Enterprise Edition transit router do not contain a route that is generated from a prefix list and the next hop is the VPC connection. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
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
       * - If a VPC connection is in the **Detaching** state, the VPC connection is being deleted. You can query the VPC connection but cannot perform other operations.
       * - If a VPC connection cannot be found, it is deleted.
       * ## Prerequisites
       * Before you delete a VPC connection, make sure that the following requirements are met:
       * - No associated forwarding correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete an associated forwarding correlation, see [DissociateTransitRouterAttachmentFromRouteTable](https://help.aliyun.com/document_detail/260944.html).
       * - No route learning correlation is established between the VPC connection and the route tables of the Enterprise Edition transit router. For more information about how to delete a route learning correlation, see [DisableTransitRouterRouteTablePropagation](https://help.aliyun.com/document_detail/260945.html).
       * - The route table of the VPC does not contain routes that point to the VPC connection. For more information about how to delete routes from a VPC route table, see [DeleteRouteEntry](https://help.aliyun.com/document_detail/36013.html).
       * - The route tables of the Enterprise Edition transit router do not contain a custom route entry whose next hop is the network instance connection. For more information about how to delete custom routes from the route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/261240.html).
       * - The route tables of the Enterprise Edition transit router do not contain a route that is generated from a prefix list and the next hop is the VPC connection. You can delete such routes by disassociating the route table from the prefix list. For more information, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/445486.html).
       *
       * @param request DeleteTransitRouterVpcAttachmentRequest
       * @return DeleteTransitRouterVpcAttachmentResponse
       */
      Models::DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachment(const Models::DeleteTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary Deletes a VPN connection.
       *
       * @description When you call the **DeleteTransitRouterVpnAttachment** operation, ensure that the parameter values are valid. If you specify invalid parameters, the system returns a **RequestId** but does not delete the VPN connection.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachmentWithOptions(const Models::DeleteTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPN connection.
       *
       * @description When you call the **DeleteTransitRouterVpnAttachment** operation, ensure that the parameter values are valid. If you specify invalid parameters, the system returns a **RequestId** but does not delete the VPN connection.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachment(const Models::DeleteTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary If a multicast member no longer needs to receive multicast traffic, you can call the DeregisterTransitRouterMulticastGroupMembers operation to delete the member from the multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the multicast member is not deleted immediately. The deletion task runs in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast member.
       * - If a multicast member is in the **Deregistering** state, it is being deleted. In this state, you can only query the member. You cannot perform other operations.
       * - If the `ListTransitRouterMulticastGroups` operation does not find the multicast member in the multicast domain, the member is deleted.
       * Ensure that you enter correct parameter values when you call the DeregisterTransitRouterMulticastGroupMembers operation. If you enter an incorrect parameter, the operation still returns a RequestId but does not delete the multicast member.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembersWithOptions(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If a multicast member no longer needs to receive multicast traffic, you can call the DeregisterTransitRouterMulticastGroupMembers operation to delete the member from the multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the multicast member is not deleted immediately. The deletion task runs in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast member.
       * - If a multicast member is in the **Deregistering** state, it is being deleted. In this state, you can only query the member. You cannot perform other operations.
       * - If the `ListTransitRouterMulticastGroups` operation does not find the multicast member in the multicast domain, the member is deleted.
       * Ensure that you enter correct parameter values when you call the DeregisterTransitRouterMulticastGroupMembers operation. If you enter an incorrect parameter, the operation still returns a RequestId but does not delete the multicast member.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembers(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary If a multicast source no longer needs to send multicast traffic, you can call the DeregisterTransitRouterMulticastGroupSources operation to remove the multicast source from the multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you send a request, the system returns a `RequestId`, but the multicast source is not deleted immediately. The system deletes the multicast source in the background. You can call `ListTransitRouterMulticastGroups` to query the status of the multicast source.
       * - If a multicast source is in the `Deregistering` state, it is being deleted. In this state, you can only query the multicast source. You cannot perform other operations.
       * - If you cannot find the multicast source in the multicast domain when you call `ListTransitRouterMulticastGroups`, the multicast source has been deleted.
       * Ensure that you specify correct parameter values when you call the DeregisterTransitRouterMulticastGroupSources operation. If you specify an incorrect parameter, the operation returns a RequestId but does not delete the multicast source.
       *
       * @param request DeregisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::DeregisterTransitRouterMulticastGroupSourcesResponse deregisterTransitRouterMulticastGroupSourcesWithOptions(const Models::DeregisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If a multicast source no longer needs to send multicast traffic, you can call the DeregisterTransitRouterMulticastGroupSources operation to remove the multicast source from the multicast group.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you send a request, the system returns a `RequestId`, but the multicast source is not deleted immediately. The system deletes the multicast source in the background. You can call `ListTransitRouterMulticastGroups` to query the status of the multicast source.
       * - If a multicast source is in the `Deregistering` state, it is being deleted. In this state, you can only query the multicast source. You cannot perform other operations.
       * - If you cannot find the multicast source in the multicast domain when you call `ListTransitRouterMulticastGroups`, the multicast source has been deleted.
       * Ensure that you specify correct parameter values when you call the DeregisterTransitRouterMulticastGroupSources operation. If you specify an incorrect parameter, the operation returns a RequestId but does not delete the multicast source.
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
       * - You can query all the network instances that are attached to a CEN instance by setting the `CenId` parameter.
       * - You can query the network instances that are attached to a CEN instance in a specified region by setting the `CenId` and `ChildInstanceRegionId` parameters.
       * - You can query a specified type of network instances that are attached to a CEN instance by setting the `CenId` and `ChildInstanceType` parameters.
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
       * - You can query all the network instances that are attached to a CEN instance by setting the `CenId` parameter.
       * - You can query the network instances that are attached to a CEN instance in a specified region by setting the `CenId` and `ChildInstanceRegionId` parameters.
       * - You can query a specified type of network instances that are attached to a CEN instance by setting the `CenId` and `ChildInstanceType` parameters.
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
       * @summary Queries the remaining bandwidth of a specified bandwidth plan.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidthWithOptions(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining bandwidth of a specified bandwidth plan.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidth(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request);

      /**
       * @summary You can call the DescribeCenGeographicSpans operation to query the connected areas supported by Cloud Enterprise Network (CEN).
       *
       * @param request DescribeCenGeographicSpansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpansWithOptions(const Models::DescribeCenGeographicSpansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeCenGeographicSpans operation to query the connected areas supported by Cloud Enterprise Network (CEN).
       *
       * @param request DescribeCenGeographicSpansRequest
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpans(const Models::DescribeCenGeographicSpansRequest &request);

      /**
       * @summary Call the DescribeCenInterRegionBandwidthLimits operation to query the bandwidth limits for inter-region communication.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimitsWithOptions(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeCenInterRegionBandwidthLimits operation to query the bandwidth limits for inter-region communication.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimits(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request);

      /**
       * @summary Queries the PrivateZone service configurations of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutesWithOptions(const Models::DescribeCenPrivateZoneRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PrivateZone service configurations of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutes(const Models::DescribeCenPrivateZoneRoutesRequest &request);

      /**
       * @summary Queries route entries in a specified region of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntriesWithOptions(const Models::DescribeCenRegionDomainRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries in a specified region of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntries(const Models::DescribeCenRegionDomainRouteEntriesRequest &request);

      /**
       * @summary You can call the DescribeCenRouteMaps operation to query the configurations of routing policies.
       *
       * @param request DescribeCenRouteMapsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMapsWithOptions(const Models::DescribeCenRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeCenRouteMaps operation to query the configurations of routing policies.
       *
       * @param request DescribeCenRouteMapsRequest
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMaps(const Models::DescribeCenRouteMapsRequest &request);

      /**
       * @summary Queries the health check information for a virtual border router (VBR) in a specified region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheckWithOptions(const Models::DescribeCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check information for a virtual border router (VBR) in a specified region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheck(const Models::DescribeCenVbrHealthCheckRequest &request);

      /**
       * @summary You can call the DescribeCens operation to query information about Cloud Enterprise Network (CEN) instances that belong to your Alibaba Cloud account. This information includes the status of the instances, whether IPv6 is enabled, and a list of attached bandwidth plans.
       *
       * @param request DescribeCensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCensWithOptions(const Models::DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeCens operation to query information about Cloud Enterprise Network (CEN) instances that belong to your Alibaba Cloud account. This information includes the status of the instances, whether IPv6 is enabled, and a list of attached bandwidth plans.
       *
       * @param request DescribeCensRequest
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCens(const Models::DescribeCensRequest &request);

      /**
       * @summary You can call the DescribeChildInstanceRegions operation to query the regions where you can attach network instances to a Cloud Enterprise Network (CEN) instance.
       *
       * @description The regions that CEN supports vary based on the network instance type. You can specify the `ProductType` parameter to query the regions that CEN supports for a specific type of network instance. If you do not specify the `ProductType` parameter, the system queries the regions supported for all network instance types by default.
       *
       * @param request DescribeChildInstanceRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChildInstanceRegionsResponse
       */
      Models::DescribeChildInstanceRegionsResponse describeChildInstanceRegionsWithOptions(const Models::DescribeChildInstanceRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeChildInstanceRegions operation to query the regions where you can attach network instances to a Cloud Enterprise Network (CEN) instance.
       *
       * @description The regions that CEN supports vary based on the network instance type. You can specify the `ProductType` parameter to query the regions that CEN supports for a specific type of network instance. If you do not specify the `ProductType` parameter, the system queries the regions supported for all network instance types by default.
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
       * @summary Queries the cross-account network instances that have been authorized for a Cloud Enterprise Network (CEN) instance.
       *
       * @description Calling the DescribeGrantRulesToCen operation with invalid parameters returns a **RequestId** but provides no information about the cross-account network instances that the CEN instance is permitted to access.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-account network instances that have been authorized for a Cloud Enterprise Network (CEN) instance.
       *
       * @description Calling the DescribeGrantRulesToCen operation with invalid parameters returns a **RequestId** but provides no information about the cross-account network instances that the CEN instance is permitted to access.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCen(const Models::DescribeGrantRulesToCenRequest &request);

      /**
       * @summary Queries the permissions that a network instance has on a Cloud Enterprise Network (CEN) instance owned by another Alibaba Cloud account. This operation returns details such as the main account that owns the CEN instance and the payer for the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResourceWithOptions(const Models::DescribeGrantRulesToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions that a network instance has on a Cloud Enterprise Network (CEN) instance owned by another Alibaba Cloud account. This operation returns details such as the main account that owns the CEN instance and the payer for the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResource(const Models::DescribeGrantRulesToResourceRequest &request);

      /**
       * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached, the instance type of the next hop of each route, and whether advertised routes can be withdrawn.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntriesWithOptions(const Models::DescribePublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached, the instance type of the next hop of each route, and whether advertised routes can be withdrawn.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntries(const Models::DescribePublishedRouteEntriesRequest &request);

      /**
       * @summary The DescribeRouteConflict operation queries conflicting routes in a network instance.
       *
       * @param request DescribeRouteConflictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflictWithOptions(const Models::DescribeRouteConflictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DescribeRouteConflict operation queries conflicting routes in a network instance.
       *
       * @param request DescribeRouteConflictRequest
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflict(const Models::DescribeRouteConflictRequest &request);

      /**
       * @summary Queries the configurations of Alibaba Cloud services that are configured in a Basic Edition transit router.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCenWithOptions(const Models::DescribeRouteServicesInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of Alibaba Cloud services that are configured in a Basic Edition transit router.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCen(const Models::DescribeRouteServicesInCenRequest &request);

      /**
       * @summary Queries the aggregate routes in the route table of an Enterprise Edition transit router.
       *
       * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregate routes in the route table of the Enterprise Edition transit router are queried by default.
       *
       * @param request DescribeTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouteTableAggregationResponse
       */
      Models::DescribeTransitRouteTableAggregationResponse describeTransitRouteTableAggregationWithOptions(const Models::DescribeTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregate routes in the route table of an Enterprise Edition transit router.
       *
       * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregate routes in the route table of the Enterprise Edition transit router are queried by default.
       *
       * @param request DescribeTransitRouteTableAggregationRequest
       * @return DescribeTransitRouteTableAggregationResponse
       */
      Models::DescribeTransitRouteTableAggregationResponse describeTransitRouteTableAggregation(const Models::DescribeTransitRouteTableAggregationRequest &request);

      /**
       * @summary Queries the configuration details of a specified aggregate route.
       *
       * @param request DescribeTransitRouteTableAggregationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouteTableAggregationDetailResponse
       */
      Models::DescribeTransitRouteTableAggregationDetailResponse describeTransitRouteTableAggregationDetailWithOptions(const Models::DescribeTransitRouteTableAggregationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration details of a specified aggregate route.
       *
       * @param request DescribeTransitRouteTableAggregationDetailRequest
       * @return DescribeTransitRouteTableAggregationDetailResponse
       */
      Models::DescribeTransitRouteTableAggregationDetailResponse describeTransitRouteTableAggregationDetail(const Models::DescribeTransitRouteTableAggregationDetailRequest &request);

      /**
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) transit router.
       *
       * @description The transit router must be a Basic Edition transit router.
       *
       * @param request DetachCenChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCenChildInstanceResponse
       */
      Models::DetachCenChildInstanceResponse detachCenChildInstanceWithOptions(const Models::DetachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) transit router.
       *
       * @description The transit router must be a Basic Edition transit router.
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
       * - If a route learning correlation is in the **Disabling** state, the route learning correlation is being deleted. You can query the route learning correlation but cannot perform other operations.
       * - If a route learning correlation cannot be found, the route learning correlation is deleted.
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
       * - If a route learning correlation is in the **Disabling** state, the route learning correlation is being deleted. You can query the route learning correlation but cannot perform other operations.
       * - If a route learning correlation cannot be found, the route learning correlation is deleted.
       *
       * @param request DisableTransitRouterRouteTablePropagationRequest
       * @return DisableTransitRouterRouteTablePropagationResponse
       */
      Models::DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagation(const Models::DisableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Call the DisassociateTransitRouterMulticastDomain operation to dissociate a vSwitch from a multicast domain.
       *
       * @description - Before you dissociate a vSwitch from a multicast domain, make sure that no multicast source or member exists on the vSwitch. For more information about how to delete a multicast source and a multicast member, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * - If you provide invalid parameters, the system returns a request ID but does not dissociate the vSwitch from the multicast domain.
       * - **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the vSwitch is not immediately dissociated from the multicast domain. The system runs the dissociation task in the background. You can call the **ListTransitRouterMulticastDomainAssociations** operation to query the association status of the vSwitch and the multicast domain.
       *   - If the association status is **Dissociating**, the vSwitch is being dissociated from the multicast domain. In this state, you can only query the vSwitch. You cannot perform other operations.
       *   - If the vSwitch cannot be found in the multicast domain, the vSwitch has been successfully dissociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomainWithOptions(const Models::DisassociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DisassociateTransitRouterMulticastDomain operation to dissociate a vSwitch from a multicast domain.
       *
       * @description - Before you dissociate a vSwitch from a multicast domain, make sure that no multicast source or member exists on the vSwitch. For more information about how to delete a multicast source and a multicast member, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * - If you provide invalid parameters, the system returns a request ID but does not dissociate the vSwitch from the multicast domain.
       * - **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the vSwitch is not immediately dissociated from the multicast domain. The system runs the dissociation task in the background. You can call the **ListTransitRouterMulticastDomainAssociations** operation to query the association status of the vSwitch and the multicast domain.
       *   - If the association status is **Dissociating**, the vSwitch is being dissociated from the multicast domain. In this state, you can only query the vSwitch. You cannot perform other operations.
       *   - If the vSwitch cannot be found in the multicast domain, the vSwitch has been successfully dissociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomain(const Models::DisassociateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Dissociates a network instance connection from a route table.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation runs in the background. The network instance connection is not immediately dissociated from the route table. To query the status of the association, call the **ListTransitRouterRouteTableAssociations** operation.
       * - If the association status is **Dissociating**, the network instance connection is being dissociated from the route table. In this state, you can only query the association. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return information about the association, the network instance connection has been dissociated.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTableWithOptions(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a network instance connection from a route table.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation runs in the background. The network instance connection is not immediately dissociated from the route table. To query the status of the association, call the **ListTransitRouterRouteTableAssociations** operation.
       * - If the association status is **Dissociating**, the network instance connection is being dissociated from the route table. In this state, you can only query the association. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return information about the association, the network instance connection has been dissociated.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTable(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) or modifies the health check configuration of a VBR. Health checks help you promptly detect faulty Express Connect circuits.
       *
       * @description You can configure a health check for a VBR instance to monitor the connection status of the Express Connect circuit between your data center and Alibaba Cloud. This helps you promptly identify issues.
       * Before you use the health check feature, note the following:
       * - If your VBR instance uses static routing, create a static route in the data center connected to the VBR instance after you configure the health check. Set the destination CIDR block of the static route to the source IP address of the health check, the subnet mask to 32 bits, and the next hop to the Alibaba Cloud-side IP address of the VBR instance.
       * - If your VBR instance uses the Border Gateway Protocol (BGP) dynamic routing protocol, you do not need to create a route in the data center.
       * - **EnableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the health check is not yet created or modified because the task is still running in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the health check configuration. If the configuration is returned, this indicates that the health check is created or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheckWithOptions(const Models::EnableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) or modifies the health check configuration of a VBR. Health checks help you promptly detect faulty Express Connect circuits.
       *
       * @description You can configure a health check for a VBR instance to monitor the connection status of the Express Connect circuit between your data center and Alibaba Cloud. This helps you promptly identify issues.
       * Before you use the health check feature, note the following:
       * - If your VBR instance uses static routing, create a static route in the data center connected to the VBR instance after you configure the health check. Set the destination CIDR block of the static route to the source IP address of the health check, the subnet mask to 32 bits, and the next hop to the Alibaba Cloud-side IP address of the VBR instance.
       * - If your VBR instance uses the Border Gateway Protocol (BGP) dynamic routing protocol, you do not need to create a route in the data center.
       * - **EnableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the health check is not yet created or modified because the task is still running in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the health check configuration. If the configuration is returned, this indicates that the health check is created or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheck(const Models::EnableCenVbrHealthCheckRequest &request);

      /**
       * @summary Creates a route learning correlation.
       *
       * @description After you establish a network instance connection on a transit router, you can create a route learning correlation for the network instance connection. Then, the routes of the connected network instance are automatically advertised to the route table of the transit router. Before you begin, we recommend that you take note of the following rules:
       * - You can create route learning correlations only on Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * - **EnableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning status between a network instance connection and a route table.
       *   - **Enabling** indicates that a route learning correlation is being created between the network instance connection and route table. You can query the route learning correlation but cannot perform other operations.
       *   - **Active** indicates that the route learning correlation is created between the network instance connection and route table.
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
       * - You can create route learning correlations only on Enterprise Edition transit routers. For more information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html)
       * - **EnableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning status between a network instance connection and a route table.
       *   - **Enabling** indicates that a route learning correlation is being created between the network instance connection and route table. You can query the route learning correlation but cannot perform other operations.
       *   - **Active** indicates that the route learning correlation is created between the network instance connection and route table.
       *
       * @param request EnableTransitRouterRouteTablePropagationRequest
       * @return EnableTransitRouterRouteTablePropagationResponse
       */
      Models::EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagation(const Models::EnableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Grants a transit router permissions on network instances that belong to another Alibaba Cloud account. To connect a transit router of Account B to a network instance of Account A, you must use Account A to grant permissions to the transit router of Account B.
       *
       * @description - The `GrantInstanceToTransitRouter` operation can be used to grant transit routers permissions on network instances that belong to other Alibaba Cloud accounts, including virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs).
       *   To grant transit routers permissions on Cloud Connect Network (CCN) instances, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * - Before you call `GrantInstanceToTransitRouter`, take note of the billing rules, permission limits, and prerequisites on permission management of transit routers. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * - Before you grant a transit router permissions on a network instance, make sure that the following requirements are met:
       *   The account to which the network instance belongs and the account to which the transit router belongs are of the same type.
       *   The ID of the Alibaba Cloud account to which the transit router belongs is obtained.
       *   The ID of the Cloud Enterprise Network (CEN) instance to which the Enterprise Edition transit router belongs is obtained.
       *   Before you grant a transit router permissions on a VBR, contact your account manager to acquire permissions on the VBR.
       *   Before you grant a transit router permissions on an IPsec-VPN connection, make sure that the IPsec-VPN connection is not associated with a resource.
       *   If the IPsec-VPN connection is attached to a VPN gateway, the IPsec-VPN connection cannot be attached to transit routers within the same account or different accounts.
       *   If the IPsec-VPN connection is attached to a transit router, detach the IPsec-VPN connection from the transit router. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouterWithOptions(const Models::GrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a transit router permissions on network instances that belong to another Alibaba Cloud account. To connect a transit router of Account B to a network instance of Account A, you must use Account A to grant permissions to the transit router of Account B.
       *
       * @description - The `GrantInstanceToTransitRouter` operation can be used to grant transit routers permissions on network instances that belong to other Alibaba Cloud accounts, including virtual private clouds (VPCs), virtual border routers (VBRs), IPsec-VPN connections, and Express Connect Router (ECRs).
       *   To grant transit routers permissions on Cloud Connect Network (CCN) instances, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * - Before you call `GrantInstanceToTransitRouter`, take note of the billing rules, permission limits, and prerequisites on permission management of transit routers. For more information, see [Acquire permissions to connect to a network instance that belongs to another account](https://help.aliyun.com/document_detail/181553.html).
       * - Before you grant a transit router permissions on a network instance, make sure that the following requirements are met:
       *   The account to which the network instance belongs and the account to which the transit router belongs are of the same type.
       *   The ID of the Alibaba Cloud account to which the transit router belongs is obtained.
       *   The ID of the Cloud Enterprise Network (CEN) instance to which the Enterprise Edition transit router belongs is obtained.
       *   Before you grant a transit router permissions on a VBR, contact your account manager to acquire permissions on the VBR.
       *   Before you grant a transit router permissions on an IPsec-VPN connection, make sure that the IPsec-VPN connection is not associated with a resource.
       *   If the IPsec-VPN connection is attached to a VPN gateway, the IPsec-VPN connection cannot be attached to transit routers within the same account or different accounts.
       *   If the IPsec-VPN connection is attached to a transit router, detach the IPsec-VPN connection from the transit router. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouter(const Models::GrantInstanceToTransitRouterRequest &request);

      /**
       * @summary Queries the routes that point to a network instance connection. The routes are retrieved from the route table of a network instance that is attached to an Enterprise Edition transit router.
       *
       * @description Ensure that you specify valid parameter values when you call the ListCenChildInstanceRouteEntriesToAttachment operation. If you specify an invalid parameter, the system returns a request ID but does not return the routes of the network instance that is connected to the Enterprise Edition transit router.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachmentWithOptions(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes that point to a network instance connection. The routes are retrieved from the route table of a network instance that is attached to an Enterprise Edition transit router.
       *
       * @description Ensure that you specify valid parameter values when you call the ListCenChildInstanceRouteEntriesToAttachment operation. If you specify an invalid parameter, the system returns a request ID but does not return the routes of the network instance that is connected to the Enterprise Edition transit router.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachment(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request);

      /**
       * @summary You can call the ListCenInterRegionTrafficQosPolicies operation to query Quality of Service (QoS) policies.
       *
       * @description Take note of the following items when you call the **ListCenInterRegionTrafficQosPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * - If you do not specify the **TrafficQosPolicyId** parameter, the operation returns information about the QoS policy based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. In this case, information about the queues in the policy is not returned, and the **TrafficQosQueues** field is not included in the response.
       * - If you specify the **TrafficQosPolicyId** parameter, the operation returns information about the QoS policy and its queues. The **TrafficQosQueues** field is included in the response. If the **TrafficQosQueues** field is an empty array, only the default queue exists in the QoS policy.
       * - Make sure that you enter valid parameter values. If you enter an invalid parameter, the system returns a RequestId but does not return information about the QoS policy.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPoliciesWithOptions(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListCenInterRegionTrafficQosPolicies operation to query Quality of Service (QoS) policies.
       *
       * @description Take note of the following items when you call the **ListCenInterRegionTrafficQosPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * - If you do not specify the **TrafficQosPolicyId** parameter, the operation returns information about the QoS policy based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. In this case, information about the queues in the policy is not returned, and the **TrafficQosQueues** field is not included in the response.
       * - If you specify the **TrafficQosPolicyId** parameter, the operation returns information about the QoS policy and its queues. The **TrafficQosQueues** field is included in the response. If the **TrafficQosQueues** field is an empty array, only the default queue exists in the QoS policy.
       * - Make sure that you enter valid parameter values. If you enter an invalid parameter, the system returns a RequestId but does not return information about the QoS policy.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPolicies(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request);

      /**
       * @summary Queries the queues of a Quality of Service (QoS) policy.
       *
       * @description When you call this operation, you must specify at least one of the **TransitRouterId**, **TrafficQosPolicyId**, or **TrafficQosQueueId** parameters.
       * Ensure that you specify valid parameter values. If you specify an invalid parameter, the system returns a **RequestId** but does not return information about the QoS policy.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueuesWithOptions(const Models::ListCenInterRegionTrafficQosQueuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queues of a Quality of Service (QoS) policy.
       *
       * @description When you call this operation, you must specify at least one of the **TransitRouterId**, **TrafficQosPolicyId**, or **TrafficQosQueueId** parameters.
       * Ensure that you specify valid parameter values. If you specify an invalid parameter, the system returns a **RequestId** but does not return information about the QoS policy.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueues(const Models::ListCenInterRegionTrafficQosQueuesRequest &request);

      /**
       * @summary You can call the ListGrantVSwitchEnis operation to query which elastic network interfaces (ENIs) in a virtual private cloud (VPC) can serve as multicast sources or members.
       *
       * @description Before you call the `ListGrantVSwitchEnis` operation, make sure that the VPC is connected to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnisWithOptions(const Models::ListGrantVSwitchEnisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListGrantVSwitchEnis operation to query which elastic network interfaces (ENIs) in a virtual private cloud (VPC) can serve as multicast sources or members.
       *
       * @description Before you call the `ListGrantVSwitchEnis` operation, make sure that the VPC is connected to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnis(const Models::ListGrantVSwitchEnisRequest &request);

      /**
       * @summary You can call the ListGrantVSwitchesToCen operation to query vSwitches in a cross-account VPC that is connected to a CEN instance.
       *
       * @description Before you call the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted permissions on the cross-account VPC. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCenWithOptions(const Models::ListGrantVSwitchesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListGrantVSwitchesToCen operation to query vSwitches in a cross-account VPC that is connected to a CEN instance.
       *
       * @description Before you call the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted permissions on the cross-account VPC. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCen(const Models::ListGrantVSwitchesToCenRequest &request);

      /**
       * @summary Queries the tags that are attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the ListTagResources operation, you must specify at least one of the **ResourceId.N** and **Tag.N.Key** request parameters.
       * - If you specify only **ResourceId.N**, the system queries the tags that are attached to the specified CEN instance.
       * - If you specify only **Tag.N.Key**, the system queries all CEN instances that are associated with the specified tag key.
       * - If you specify both **ResourceId.N** and **Tag.N.Key**, the system queries for tags that match the specified tag key and are attached to the specified CEN instance.
       *   - The specified CEN instance must be associated with the specified tag key. Otherwise, an empty result is returned.
       *   - If you specify multiple tag keys, the relationship between the tag keys is **AND**.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the ListTagResources operation, you must specify at least one of the **ResourceId.N** and **Tag.N.Key** request parameters.
       * - If you specify only **ResourceId.N**, the system queries the tags that are attached to the specified CEN instance.
       * - If you specify only **Tag.N.Key**, the system queries all CEN instances that are associated with the specified tag key.
       * - If you specify both **ResourceId.N** and **Tag.N.Key**, the system queries for tags that match the specified tag key and are attached to the specified CEN instance.
       *   - The specified CEN instance must be associated with the specified tag key. Otherwise, an empty result is returned.
       *   - If you specify multiple tag keys, the relationship between the tag keys is **AND**.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary You can call the ListTrafficMarkingPolicies operation to query details about traffic marking policies, such as their status and priority.
       *
       * @description When you call the **ListTrafficMarkingPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * - If you do not specify the **TrafficMarkingPolicyId** parameter, the operation returns only information about the traffic marking policy based on the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. Information about traffic classification rules is not returned. The **TrafficMatchRules** field is not included in the response.
       * - If you specify the **TrafficMarkingPolicyId** parameter, the operation returns information about the traffic marking policy and its traffic classification rules. The **TrafficMatchRules** field is included in the response. If the **TrafficMatchRules** field is an empty array, no traffic classification rules are configured for the policy.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPoliciesWithOptions(const Models::ListTrafficMarkingPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListTrafficMarkingPolicies operation to query details about traffic marking policies, such as their status and priority.
       *
       * @description When you call the **ListTrafficMarkingPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * - If you do not specify the **TrafficMarkingPolicyId** parameter, the operation returns only information about the traffic marking policy based on the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. Information about traffic classification rules is not returned. The **TrafficMatchRules** field is not included in the response.
       * - If you specify the **TrafficMarkingPolicyId** parameter, the operation returns information about the traffic marking policy and its traffic classification rules. The **TrafficMatchRules** field is included in the response. If the **TrafficMatchRules** field is an empty array, no traffic classification rules are configured for the policy.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPolicies(const Models::ListTrafficMarkingPoliciesRequest &request);

      /**
       * @summary Queries the zones that are available for an Enterprise Edition transit router in a specified region.
       *
       * @description - You can call the **ListTransitRouterAvailableResource** operation to query regular zones or zones that support the multicast feature for an Enterprise Edition transit router in a specified region.
       *   - If you do not set the **SupportMulticast** parameter to **true**, the system queries only the regular zones supported by the Enterprise Edition transit router.
       *   - If you set the **SupportMulticast** parameter to **true**, the system queries only the zones that support the multicast feature for the Enterprise Edition transit router.
       * - On May 31, 2022, Cloud Enterprise Network (CEN) upgraded the connection pattern for Enterprise Edition transit routers and Virtual Private Clouds (VPCs). After the upgrade, you do not need to specify a primary and a secondary zone when you connect an Enterprise Edition transit router to a VPC instance. Instead, you can specify one or more zones.
       *   - If your Enterprise Edition transit router has not been upgraded, you must specify a primary and a secondary zone when you connect the transit router to a VPC instance. After you call the **ListTransitRouterAvailableResource** operation, you can retrieve information about the primary and secondary zones from the **MasterZones** and **SlaveZones** parameters.
       *   - If your Enterprise Edition transit router has been upgraded, you can specify any zone when you connect the transit router to a VPC instance. After you call the **ListTransitRouterAvailableResource** operation, you can retrieve information about the supported zones from the **AvailableZones** parameter.
       * For more information about the upgrade for Enterprise Edition transit routers, see [Upgrade of the VPC connection pattern for Enterprise Edition transit routers](https://help.aliyun.com/document_detail/434191.html).
       *
       * @param request ListTransitRouterAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterAvailableResourceResponse
       */
      Models::ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResourceWithOptions(const Models::ListTransitRouterAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that are available for an Enterprise Edition transit router in a specified region.
       *
       * @description - You can call the **ListTransitRouterAvailableResource** operation to query regular zones or zones that support the multicast feature for an Enterprise Edition transit router in a specified region.
       *   - If you do not set the **SupportMulticast** parameter to **true**, the system queries only the regular zones supported by the Enterprise Edition transit router.
       *   - If you set the **SupportMulticast** parameter to **true**, the system queries only the zones that support the multicast feature for the Enterprise Edition transit router.
       * - On May 31, 2022, Cloud Enterprise Network (CEN) upgraded the connection pattern for Enterprise Edition transit routers and Virtual Private Clouds (VPCs). After the upgrade, you do not need to specify a primary and a secondary zone when you connect an Enterprise Edition transit router to a VPC instance. Instead, you can specify one or more zones.
       *   - If your Enterprise Edition transit router has not been upgraded, you must specify a primary and a secondary zone when you connect the transit router to a VPC instance. After you call the **ListTransitRouterAvailableResource** operation, you can retrieve information about the primary and secondary zones from the **MasterZones** and **SlaveZones** parameters.
       *   - If your Enterprise Edition transit router has been upgraded, you can specify any zone when you connect the transit router to a VPC instance. After you call the **ListTransitRouterAvailableResource** operation, you can retrieve information about the supported zones from the **AvailableZones** parameter.
       * For more information about the upgrade for Enterprise Edition transit routers, see [Upgrade of the VPC connection pattern for Enterprise Edition transit routers](https://help.aliyun.com/document_detail/434191.html).
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
       * @summary Queries the allocation details of a CIDR block.
       *
       * @param request ListTransitRouterCidrAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterCidrAllocationResponse
       */
      Models::ListTransitRouterCidrAllocationResponse listTransitRouterCidrAllocationWithOptions(const Models::ListTransitRouterCidrAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the allocation details of a CIDR block.
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
       * @summary You can call the ListTransitRouterMulticastDomainAssociations operation to query the associations between multicast domains and vSwitches.
       *
       * @description - When you call this operation, you must specify either the **TransitRouterMulticastDomainId** or **TransitRouterAttachmentId** request parameter. If you specify **TransitRouterAttachmentId**, the system queries the vSwitches that are associated with the multicast domain in the VPC. If you specify **TransitRouterMulticastDomainId**, the system queries the vSwitches that are associated with the specified multicast domain.
       * - When you call the **ListTransitRouterMulticastDomainAssociations** operation, you must provide valid parameter values. If you provide an invalid parameter, the system returns a **RequestId** but does not return the association between the multicast domain and the vSwitch.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociationsWithOptions(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListTransitRouterMulticastDomainAssociations operation to query the associations between multicast domains and vSwitches.
       *
       * @description - When you call this operation, you must specify either the **TransitRouterMulticastDomainId** or **TransitRouterAttachmentId** request parameter. If you specify **TransitRouterAttachmentId**, the system queries the vSwitches that are associated with the multicast domain in the VPC. If you specify **TransitRouterMulticastDomainId**, the system queries the vSwitches that are associated with the specified multicast domain.
       * - When you call the **ListTransitRouterMulticastDomainAssociations** operation, you must provide valid parameter values. If you provide an invalid parameter, the system returns a **RequestId** but does not return the association between the multicast domain and the vSwitch.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociations(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request);

      /**
       * @summary After a VPC instance is connected to an Enterprise Edition transit router, you can call the ListTransitRouterMulticastDomainVSwitches operation to query information about vSwitches that are attached to multicast domains in the virtual private cloud (VPC) instance.
       *
       * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, ensure that the parameter values are correct. If you enter incorrect parameter values, the operation returns a RequestId but does not display information about vSwitches that are attached to multicast domains in the VPC instance.
       *
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitchesWithOptions(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a VPC instance is connected to an Enterprise Edition transit router, you can call the ListTransitRouterMulticastDomainVSwitches operation to query information about vSwitches that are attached to multicast domains in the virtual private cloud (VPC) instance.
       *
       * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, ensure that the parameter values are correct. If you enter incorrect parameter values, the operation returns a RequestId but does not display information about vSwitches that are attached to multicast domains in the VPC instance.
       *
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitches(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request);

      /**
       * @summary Call the ListTransitRouterMulticastDomains operation to query information about multicast domains, such as their statuses, IDs, and descriptions.
       *
       * @description - You must specify both RegionId and CenId. If you specify only RegionId, no information about multicast domains is returned. You can also specify TransitRouterId or TransitRouterMulticastDomainId individually.
       * - Ensure that you specify valid parameter values. If you specify an invalid parameter, the system returns a **RequestId** but does not return the details of the multicast domain.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomainsWithOptions(const Models::ListTransitRouterMulticastDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListTransitRouterMulticastDomains operation to query information about multicast domains, such as their statuses, IDs, and descriptions.
       *
       * @description - You must specify both RegionId and CenId. If you specify only RegionId, no information about multicast domains is returned. You can also specify TransitRouterId or TransitRouterMulticastDomainId individually.
       * - Ensure that you specify valid parameter values. If you specify an invalid parameter, the system returns a **RequestId** but does not return the details of the multicast domain.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomains(const Models::ListTransitRouterMulticastDomainsRequest &request);

      /**
       * @summary Queries details about multicast members and sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query information about multicast members and sources. These are collectively referred to as multicast resources.
       * - If you specify the **GroupIpAddress** parameter, you can query information about the multicast resources in a specific multicast group.
       * - If you specify the **VSwitchIds** parameter, you can query information about the multicast resources on specific vSwitches.
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you can query information about cross-region multicast resources.
       * - If you specify the **ResourceType** parameter, you can query information about multicast resources of a specific resource type.
       * - If you specify the **ResourceId** parameter, you can query information about the multicast resources on a specific resource.
       * - If you specify only the **TransitRouterMulticastDomainId** parameter, you can query information about all multicast resources in the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroupsWithOptions(const Models::ListTransitRouterMulticastGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about multicast members and sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query information about multicast members and sources. These are collectively referred to as multicast resources.
       * - If you specify the **GroupIpAddress** parameter, you can query information about the multicast resources in a specific multicast group.
       * - If you specify the **VSwitchIds** parameter, you can query information about the multicast resources on specific vSwitches.
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you can query information about cross-region multicast resources.
       * - If you specify the **ResourceType** parameter, you can query information about multicast resources of a specific resource type.
       * - If you specify the **ResourceId** parameter, you can query information about the multicast resources on a specific resource.
       * - If you specify only the **TransitRouterMulticastDomainId** parameter, you can query information about all multicast resources in the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroups(const Models::ListTransitRouterMulticastGroupsRequest &request);

      /**
       * @summary Call the ListTransitRouterPeerAttachments operation to query details about the inter-region connections of an Enterprise Edition transit router.
       *
       * @description You can query information about the inter-region connections of an Enterprise Edition transit router in one of the following ways:
       * - Query by the ID of the Enterprise Edition transit router instance.
       * - Query by the ID of the Cloud Enterprise Network (CEN) instance and the region ID of the transit router instance.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachmentsWithOptions(const Models::ListTransitRouterPeerAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListTransitRouterPeerAttachments operation to query details about the inter-region connections of an Enterprise Edition transit router.
       *
       * @description You can query information about the inter-region connections of an Enterprise Edition transit router in one of the following ways:
       * - Query by the ID of the Enterprise Edition transit router instance.
       * - Query by the ID of the Cloud Enterprise Network (CEN) instance and the region ID of the transit router instance.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachments(const Models::ListTransitRouterPeerAttachmentsRequest &request);

      /**
       * @summary Queries the prefix list associations for the route table of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPrefixListAssociationResponse
       */
      Models::ListTransitRouterPrefixListAssociationResponse listTransitRouterPrefixListAssociationWithOptions(const Models::ListTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prefix list associations for the route table of an Enterprise Edition transit router.
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
       * @summary Call the ListTransitRouterRouteTableAssociations operation to query the forwarding associations for a route table of an Enterprise Edition transit router or for a network instance connection.
       *
       * @description When you call the **ListTransitRouterRouteTableAssociations** operation, you must specify at least one of the following request parameters: **TransitRouterRouteTableId** and **TransitRouterAttachmentId**.
       * - If you specify only **TransitRouterRouteTableId**, the operation queries the network instance connections that are associated with the specified route table of the Enterprise Edition transit router.
       * - If you specify only **TransitRouterAttachmentId**, the operation queries the route tables of the Enterprise Edition transit router that are associated with the specified network instance connection.
       * - If you specify both **TransitRouterRouteTableId** and **TransitRouterAttachmentId**, the operation queries the forwarding association between the network instance connection and the route table of the Enterprise Edition transit router.
       *   - If a forwarding association exists between the network instance connection and the route table, the details of the forwarding association are returned.
       *   - If no forwarding association exists between the network instance connection and the route table, the **TransitRouterAssociations** array is empty in the response.
       * Make sure that you provide valid parameter values when you call the **ListTransitRouterRouteTableAssociations** operation.
       * If you provide an invalid parameter, the system returns a **RequestId** but does not query the forwarding associations for the route table of the Enterprise Edition transit router or the network instance connection.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociationsWithOptions(const Models::ListTransitRouterRouteTableAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListTransitRouterRouteTableAssociations operation to query the forwarding associations for a route table of an Enterprise Edition transit router or for a network instance connection.
       *
       * @description When you call the **ListTransitRouterRouteTableAssociations** operation, you must specify at least one of the following request parameters: **TransitRouterRouteTableId** and **TransitRouterAttachmentId**.
       * - If you specify only **TransitRouterRouteTableId**, the operation queries the network instance connections that are associated with the specified route table of the Enterprise Edition transit router.
       * - If you specify only **TransitRouterAttachmentId**, the operation queries the route tables of the Enterprise Edition transit router that are associated with the specified network instance connection.
       * - If you specify both **TransitRouterRouteTableId** and **TransitRouterAttachmentId**, the operation queries the forwarding association between the network instance connection and the route table of the Enterprise Edition transit router.
       *   - If a forwarding association exists between the network instance connection and the route table, the details of the forwarding association are returned.
       *   - If no forwarding association exists between the network instance connection and the route table, the **TransitRouterAssociations** array is empty in the response.
       * Make sure that you provide valid parameter values when you call the **ListTransitRouterRouteTableAssociations** operation.
       * If you provide an invalid parameter, the system returns a **RequestId** but does not query the forwarding associations for the route table of the Enterprise Edition transit router or the network instance connection.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociations(const Models::ListTransitRouterRouteTableAssociationsRequest &request);

      /**
       * @summary Lists the route propagations for the route table of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagationsWithOptions(const Models::ListTransitRouterRouteTablePropagationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the route propagations for the route table of an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagations(const Models::ListTransitRouterRouteTablePropagationsRequest &request);

      /**
       * @summary Call the ListTransitRouterRouteTables operation to query the route tables associated with an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTablesWithOptions(const Models::ListTransitRouterRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListTransitRouterRouteTables operation to query the route tables associated with an Enterprise Edition transit router.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTables(const Models::ListTransitRouterRouteTablesRequest &request);

      /**
       * @summary Queries information about virtual border router (VBR) connections for an Enterprise Edition transit router. The returned information includes the total number of connections, connection status, connection ID, and the payer for the network instance.
       *
       * @description You can query the VBR connections of an Enterprise Edition transit router in one of the following ways:
       * - Query all VBR connections of an Enterprise Edition transit router by specifying the ID of the transit router.
       * - Query all VBR connections of an Enterprise Edition transit router by specifying the ID of the Cloud Enterprise Network (CEN) instance and the region ID of the transit router.
       * - Query a specific VBR connection by specifying the connection ID in the TransitRouterAttachmentId parameter.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachmentsWithOptions(const Models::ListTransitRouterVbrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about virtual border router (VBR) connections for an Enterprise Edition transit router. The returned information includes the total number of connections, connection status, connection ID, and the payer for the network instance.
       *
       * @description You can query the VBR connections of an Enterprise Edition transit router in one of the following ways:
       * - Query all VBR connections of an Enterprise Edition transit router by specifying the ID of the transit router.
       * - Query all VBR connections of an Enterprise Edition transit router by specifying the ID of the Cloud Enterprise Network (CEN) instance and the region ID of the transit router.
       * - Query a specific VBR connection by specifying the connection ID in the TransitRouterAttachmentId parameter.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachments(const Models::ListTransitRouterVbrAttachmentsRequest &request);

      /**
       * @summary Queries details about virtual private cloud (VPC) connections on an Enterprise Edition transit router, including the connection status, billing method, and zone, as well as the vSwitches and elastic network interfaces (ENIs) of the connected VPC.
       *
       * @description You can query the VPC connections of an Enterprise Edition transit router in one of the following ways:
       * - Specify the ID of an Enterprise Edition transit router to query all its VPC connections.
       * - Specify the ID of a Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router to query all its VPC connections.
       * - Specify the ID of a region that contains an Enterprise Edition transit router to query all VPC connections in that region.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachmentsWithOptions(const Models::ListTransitRouterVpcAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about virtual private cloud (VPC) connections on an Enterprise Edition transit router, including the connection status, billing method, and zone, as well as the vSwitches and elastic network interfaces (ENIs) of the connected VPC.
       *
       * @description You can query the VPC connections of an Enterprise Edition transit router in one of the following ways:
       * - Specify the ID of an Enterprise Edition transit router to query all its VPC connections.
       * - Specify the ID of a Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router to query all its VPC connections.
       * - Specify the ID of a region that contains an Enterprise Edition transit router to query all VPC connections in that region.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachments(const Models::ListTransitRouterVpcAttachmentsRequest &request);

      /**
       * @summary You can call the ListTransitRouterVpnAttachments operation to query information about VPN connections, such as their status, IPsec-VPN connection ID, and billing method.
       *
       * @description The ListTransitRouterVpnAttachments operation supports the following query methods:
       * - Enter only **TransitRouterAttachmentId** to query a specific VPN connection.
       * - Enter only **TransitRouterId** to query all VPN connections that are associated with the specified transit router.
       * - Enter **CenId** and **RegionId** to query VPN connections in a specific region of the specified Cloud Enterprise Network (CEN) instance.
       * When you call the **ListTransitRouterVpnAttachments** operation, make sure that you enter valid parameter values. If you enter invalid parameters, the system returns a **RequestId** but does not return the queried VPN connection information.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachmentsWithOptions(const Models::ListTransitRouterVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListTransitRouterVpnAttachments operation to query information about VPN connections, such as their status, IPsec-VPN connection ID, and billing method.
       *
       * @description The ListTransitRouterVpnAttachments operation supports the following query methods:
       * - Enter only **TransitRouterAttachmentId** to query a specific VPN connection.
       * - Enter only **TransitRouterId** to query all VPN connections that are associated with the specified transit router.
       * - Enter **CenId** and **RegionId** to query VPN connections in a specific region of the specified Cloud Enterprise Network (CEN) instance.
       * When you call the **ListTransitRouterVpnAttachments** operation, make sure that you enter valid parameter values. If you enter invalid parameters, the system returns a **RequestId** but does not return the queried VPN connection information.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachments(const Models::ListTransitRouterVpnAttachmentsRequest &request);

      /**
       * @summary You can call the ListTransitRouters operation to query information about transit routers in a Cloud Enterprise Network (CEN) instance, such as the instance type, status, instance ID, and whether the multicast feature is enabled.
       *
       * @description When you call this operation to query transit routers in a CEN instance, you can specify the **RegionId** and **TransitRouterId** parameters. Note the following information about these parameters:
       * - If you do not specify **RegionId** or **TransitRouterId**, all transit routers in the CEN instance are queried.
       * - If you specify only **RegionId**, the transit routers in the specified region are queried.
       * - If you specify only **TransitRouterId**, the specified transit router is queried.
       *
       * @param request ListTransitRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRoutersWithOptions(const Models::ListTransitRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListTransitRouters operation to query information about transit routers in a Cloud Enterprise Network (CEN) instance, such as the instance type, status, instance ID, and whether the multicast feature is enabled.
       *
       * @description When you call this operation to query transit routers in a CEN instance, you can specify the **RegionId** and **TransitRouterId** parameters. Note the following information about these parameters:
       * - If you do not specify **RegionId** or **TransitRouterId**, all transit routers in the CEN instance are queried.
       * - If you specify only **RegionId**, the transit routers in the specified region are queried.
       * - If you specify only **TransitRouterId**, the specified transit router is queried.
       *
       * @param request ListTransitRoutersRequest
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRouters(const Models::ListTransitRoutersRequest &request);

      /**
       * @summary The ModifyCenAttribute operation modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance is not modified immediately. The system modifies the instance in the background. You can call the **DescribeCens** operation to query the status of the CEN instance.
       * - If a CEN instance is in the **Modifying** state, the modification is in progress. In this state, you can only query the instance and cannot perform other operations.
       * - If a CEN instance is in the **Active** state, the modification is complete.
       *
       * @param request ModifyCenAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttributeWithOptions(const Models::ModifyCenAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ModifyCenAttribute operation modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance is not modified immediately. The system modifies the instance in the background. You can call the **DescribeCens** operation to query the status of the CEN instance.
       * - If a CEN instance is in the **Modifying** state, the modification is in progress. In this state, you can only query the instance and cannot perform other operations.
       * - If a CEN instance is in the **Active** state, the modification is complete.
       *
       * @param request ModifyCenAttributeRequest
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttribute(const Models::ModifyCenAttributeRequest &request);

      /**
       * @summary You can call the ModifyCenBandwidthPackageAttribute operation to modify the name and description of a bandwidth plan.
       *
       * @param request ModifyCenBandwidthPackageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenBandwidthPackageAttributeResponse
       */
      Models::ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttributeWithOptions(const Models::ModifyCenBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyCenBandwidthPackageAttribute operation to modify the name and description of a bandwidth plan.
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
       * - **Modifying**: indicates that the system is modifying the routing policy. You can only query the routing policy, but cannot perform other operations.
       * - **Active**: indicates that the routing policy is modified.
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
       * - **Modifying**: indicates that the system is modifying the routing policy. You can only query the routing policy, but cannot perform other operations.
       * - **Active**: indicates that the routing policy is modified.
       *
       * @param request ModifyCenRouteMapRequest
       * @return ModifyCenRouteMapResponse
       */
      Models::ModifyCenRouteMapResponse modifyCenRouteMap(const Models::ModifyCenRouteMapRequest &request);

      /**
       * @summary Modifies the name, description, and capture window of a flow log.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes modifying the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the task has been completed.
       * - If the flow log is in the **Modifying** state, it is still being modified. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the flow log is in the **Active** state, the modification task has been completed.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and capture window of a flow log.
       *
       * @description This operation is executed asynchronously. After receiving a request, the system returns a **request ID** before it finishes modifying the flow log. The task is continued in the backend. You can call `DescribeFlowlogs` to check whether the task has been completed.
       * - If the flow log is in the **Modifying** state, it is still being modified. In this case, you can query information about the flow log but cannot perform other operations on it.
       * - If the flow log is in the **Active** state, the modification task has been completed.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary This operation modifies the payer for a cross-account network instance connection to a transit router.
       *
       * @description You can use this operation to modify the payer for a cross-account connection to a transit router, but only if the connected network instance is a Virtual Private Cloud (VPC), virtual border router (VBR), or IPsec instance.
       *
       * @param request ModifyGrantInstanceToTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGrantInstanceToTransitRouterResponse
       */
      Models::ModifyGrantInstanceToTransitRouterResponse modifyGrantInstanceToTransitRouterWithOptions(const Models::ModifyGrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the payer for a cross-account network instance connection to a transit router.
       *
       * @description You can use this operation to modify the payer for a cross-account connection to a transit router, but only if the connected network instance is a Virtual Private Cloud (VPC), virtual border router (VBR), or IPsec instance.
       *
       * @param request ModifyGrantInstanceToTransitRouterRequest
       * @return ModifyGrantInstanceToTransitRouterResponse
       */
      Models::ModifyGrantInstanceToTransitRouterResponse modifyGrantInstanceToTransitRouter(const Models::ModifyGrantInstanceToTransitRouterRequest &request);

      /**
       * @summary Modifies the name and description of a stream classification rule.
       *
       * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse modifyTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a stream classification rule.
       *
       * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse modifyTrafficMatchRuleToTrafficMarkingPolicy(const Models::ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @summary Modifies an aggregate route.
       *
       * @param tmpReq ModifyTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouteTableAggregationResponse
       */
      Models::ModifyTransitRouteTableAggregationResponse modifyTransitRouteTableAggregationWithOptions(const Models::ModifyTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an aggregate route.
       *
       * @param request ModifyTransitRouteTableAggregationRequest
       * @return ModifyTransitRouteTableAggregationResponse
       */
      Models::ModifyTransitRouteTableAggregationResponse modifyTransitRouteTableAggregation(const Models::ModifyTransitRouteTableAggregationRequest &request);

      /**
       * @summary You can call the ModifyTransitRouterCidr operation to modify a CIDR block of a transit router.
       *
       * @description - Before you modify a CIDR block of a transit router, review the [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - You cannot modify a CIDR block if IP addresses have already been allocated from it.
       * - The **ModifyTransitRouterCidr** operation is synchronous if you do not change the **PublishCidrRoute** parameter. The modification takes effect immediately.
       * - The **ModifyTransitRouterCidr** operation is asynchronous if you change the **PublishCidrRoute** parameter. The system returns a **RequestId**, but the CIDR block is not immediately modified. The modification task runs in the background. You can call the **ListTransitRouterCidr** operation to query the status of the modification.
       *   - If the CIDR block information has not changed, the modification is in progress.
       *   - If the CIDR block information is updated, the modification is successful.
       *
       * @param request ModifyTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouterCidrResponse
       */
      Models::ModifyTransitRouterCidrResponse modifyTransitRouterCidrWithOptions(const Models::ModifyTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyTransitRouterCidr operation to modify a CIDR block of a transit router.
       *
       * @description - Before you modify a CIDR block of a transit router, review the [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - You cannot modify a CIDR block if IP addresses have already been allocated from it.
       * - The **ModifyTransitRouterCidr** operation is synchronous if you do not change the **PublishCidrRoute** parameter. The modification takes effect immediately.
       * - The **ModifyTransitRouterCidr** operation is asynchronous if you change the **PublishCidrRoute** parameter. The system returns a **RequestId**, but the CIDR block is not immediately modified. The modification task runs in the background. You can call the **ListTransitRouterCidr** operation to query the status of the modification.
       *   - If the CIDR block information has not changed, the modification is in progress.
       *   - If the CIDR block information is updated, the modification is successful.
       *
       * @param request ModifyTransitRouterCidrRequest
       * @return ModifyTransitRouterCidrResponse
       */
      Models::ModifyTransitRouterCidrResponse modifyTransitRouterCidr(const Models::ModifyTransitRouterCidrRequest &request);

      /**
       * @summary Modifies the name, description, and feature options of a multicast domain.
       *
       * @param request ModifyTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouterMulticastDomainResponse
       */
      Models::ModifyTransitRouterMulticastDomainResponse modifyTransitRouterMulticastDomainWithOptions(const Models::ModifyTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and feature options of a multicast domain.
       *
       * @param request ModifyTransitRouterMulticastDomainRequest
       * @return ModifyTransitRouterMulticastDomainResponse
       */
      Models::ModifyTransitRouterMulticastDomainResponse modifyTransitRouterMulticastDomain(const Models::ModifyTransitRouterMulticastDomainRequest &request);

      /**
       * @summary You can call the MoveResourceGroup operation to move a Cloud Enterprise Network (CEN) instance or a bandwidth plan to a different resource group.
       *
       * @description By default, Cloud Enterprise Network (CEN) instances and bandwidth plans belong to the default resource group. You can call the `MoveResourceGroup` operation to move a CEN instance or a bandwidth plan to a different resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the MoveResourceGroup operation to move a Cloud Enterprise Network (CEN) instance or a bandwidth plan to a different resource group.
       *
       * @description By default, Cloud Enterprise Network (CEN) instances and bandwidth plans belong to the default resource group. You can call the `MoveResourceGroup` operation to move a CEN instance or a bandwidth plan to a different resource group.
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
       * @summary You can call the PublishRouteEntries operation to advertise routes from a virtual private cloud (VPC) or a virtual border router (VBR) to a Cloud Enterprise Network (CEN) instance. If no route conflicts occur, other network instances attached to the CEN instance can learn the advertised routes.
       *
       * @description The following table lists the default advertising status for different types of routes in CEN. You can call the PublishRouteEntries operation to advertise routes that are not advertised to CEN by default.
       * | Route                                                | Instance of the route | Advertised to CEN by default |
       * | ---------------------------------------------------- | --------------------- | ---------------------------- |
       * | Route to an ECS instance                             | VPC                   | No                           |
       * | Route to a VPN Gateway                               | VPC                   | No                           |
       * | Route to a high availability (HA) virtual IP address | VPC                   | No                           |
       * | Route to a router interface                          | VPC                   | No                           |
       * | Route to an Elastic Network Interface (ENI)          | VPC                   | No                           |
       * | Route to an IPv6 Gateway                             | VPC                   | No                           |
       * | Route to a NAT Gateway                               | VPC                   | No                           |
       * | VPC system route                                     | VPC                   | Yes                          |
       * | Route to a data center                               | VBR                   | Yes                          |
       * | Border Gateway Protocol (BGP) route                  | VBR                   | Yes                          |
       *
       * @param request PublishRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntriesWithOptions(const Models::PublishRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the PublishRouteEntries operation to advertise routes from a virtual private cloud (VPC) or a virtual border router (VBR) to a Cloud Enterprise Network (CEN) instance. If no route conflicts occur, other network instances attached to the CEN instance can learn the advertised routes.
       *
       * @description The following table lists the default advertising status for different types of routes in CEN. You can call the PublishRouteEntries operation to advertise routes that are not advertised to CEN by default.
       * | Route                                                | Instance of the route | Advertised to CEN by default |
       * | ---------------------------------------------------- | --------------------- | ---------------------------- |
       * | Route to an ECS instance                             | VPC                   | No                           |
       * | Route to a VPN Gateway                               | VPC                   | No                           |
       * | Route to a high availability (HA) virtual IP address | VPC                   | No                           |
       * | Route to a router interface                          | VPC                   | No                           |
       * | Route to an Elastic Network Interface (ENI)          | VPC                   | No                           |
       * | Route to an IPv6 Gateway                             | VPC                   | No                           |
       * | Route to a NAT Gateway                               | VPC                   | No                           |
       * | VPC system route                                     | VPC                   | Yes                          |
       * | Route to a data center                               | VBR                   | Yes                          |
       * | Border Gateway Protocol (BGP) route                  | VBR                   | Yes                          |
       *
       * @param request PublishRouteEntriesRequest
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntries(const Models::PublishRouteEntriesRequest &request);

      /**
       * @summary Re-advertises an aggregate route.
       *
       * @description For aggregate routes that failed to be advertised or were partially advertised, fix the route issue and call the **RefreshTransitRouteTableAggregation** operation to re-advertise the aggregate routes to virtual private clouds (VPCs). If you use the following solutions, the aggregate route is automatically advertised without manual operations:
       * - Delete associated forwarding correlations
       * - Disable route synchronization
       * - Delete the VPC route table
       * - Delete the aggregate route
       * You can call the **DescribeTransitRouteTableAggregationDetail** operation to view the advertisement status of the aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregationWithOptions(const Models::RefreshTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-advertises an aggregate route.
       *
       * @description For aggregate routes that failed to be advertised or were partially advertised, fix the route issue and call the **RefreshTransitRouteTableAggregation** operation to re-advertise the aggregate routes to virtual private clouds (VPCs). If you use the following solutions, the aggregate route is automatically advertised without manual operations:
       * - Delete associated forwarding correlations
       * - Disable route synchronization
       * - Delete the VPC route table
       * - Delete the aggregate route
       * You can call the **DescribeTransitRouteTableAggregationDetail** operation to view the advertisement status of the aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregation(const Models::RefreshTransitRouteTableAggregationRequest &request);

      /**
       * @summary Creates or adds a multicast member.
       *
       * @description Enterprise Edition transit routers support only elastic network interfaces (ENIs) as multicast members. You can call the `RegisterTransitRouterMulticastGroupMembers` operation to specify an ENI in the current region or a different region as a multicast member.
       * - If you specify a value for the **NetworkInterfaceIds** parameter, an ENI in the current region is to be specified as a multicast member. Make sure that the ENI and vSwitch are associated with the multicast group. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * - If you specify a value for the **PeerTransitRouterMulticastDomains**, a multicast member in a multicast group that belongs to another region but has the same IP address as the current multicast group is to be specified as a multicast member for the current multicast group. Make sure that an inter-region connection is established between the regions. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *   For example, you created Multicast Group 1 in Multicast Domain 1, which is in the China (Hangzhou) region. You created Multicast Group 2 in Multicast Domain 2, which is in the China (Shanghai) region. Multicast Group 1 and Multicast Group 2 use the same multicast IP address, and Multicast Member 2 is in Multicast Group 2 in the China (Shanghai) region. If you call the `RegisterTransitRouterMulticastGroupMembers` operation to add multicast members to Multicast Group 1 in the China (Hangzhou) region and set **PeerTransitRouterMulticastDomains** to the ID of Multicast Group 2, which is in the China (Shanghai) region, Multicast Member 2, which is in Multicast Domain 2 in the China (Shanghai) region is added to Multicast Group 1 in the China (Hangzhou) region.
       * - `RegisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       *   - If the multicast member is in the **Registering**, the multicast member is being created. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       *   - If the multicast member is in the **Registered** state, the multicast member is created.
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
       * - If you specify a value for the **NetworkInterfaceIds** parameter, an ENI in the current region is to be specified as a multicast member. Make sure that the ENI and vSwitch are associated with the multicast group. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * - If you specify a value for the **PeerTransitRouterMulticastDomains**, a multicast member in a multicast group that belongs to another region but has the same IP address as the current multicast group is to be specified as a multicast member for the current multicast group. Make sure that an inter-region connection is established between the regions. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *   For example, you created Multicast Group 1 in Multicast Domain 1, which is in the China (Hangzhou) region. You created Multicast Group 2 in Multicast Domain 2, which is in the China (Shanghai) region. Multicast Group 1 and Multicast Group 2 use the same multicast IP address, and Multicast Member 2 is in Multicast Group 2 in the China (Shanghai) region. If you call the `RegisterTransitRouterMulticastGroupMembers` operation to add multicast members to Multicast Group 1 in the China (Hangzhou) region and set **PeerTransitRouterMulticastDomains** to the ID of Multicast Group 2, which is in the China (Shanghai) region, Multicast Member 2, which is in Multicast Domain 2 in the China (Shanghai) region is added to Multicast Group 1 in the China (Hangzhou) region.
       * - `RegisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of a multicast member.
       *   - If the multicast member is in the **Registering**, the multicast member is being created. In this case, you can query the multicast member but cannot perform other operations on the multicast member.
       *   - If the multicast member is in the **Registered** state, the multicast member is created.
       *
       * @param request RegisterTransitRouterMulticastGroupMembersRequest
       * @return RegisterTransitRouterMulticastGroupMembersResponse
       */
      Models::RegisterTransitRouterMulticastGroupMembersResponse registerTransitRouterMulticastGroupMembers(const Models::RegisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary Use the RegisterTransitRouterMulticastGroupSources operation to create a multicast source. A multicast source enables one-to-many communication.
       *
       * @description - You can specify only an Elastic Network Interface (ENI) as a multicast source.
       * - `RegisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you send a request, the system returns a **RequestId**. The multicast source is created in the background and is not immediately available. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source.
       *   - If a multicast source is in the **Registering** status, the multicast source is being created. In this status, you can only query the multicast source.
       *   - If a multicast source is in the **Registered** status, the multicast source is created.
       * ### Prerequisites
       * Before you call `RegisterTransitRouterMulticastGroupSources`, ensure that the vSwitch to which the ENI belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSourcesWithOptions(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the RegisterTransitRouterMulticastGroupSources operation to create a multicast source. A multicast source enables one-to-many communication.
       *
       * @description - You can specify only an Elastic Network Interface (ENI) as a multicast source.
       * - `RegisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you send a request, the system returns a **RequestId**. The multicast source is created in the background and is not immediately available. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source.
       *   - If a multicast source is in the **Registering** status, the multicast source is being created. In this status, you can only query the multicast source.
       *   - If a multicast source is in the **Registered** status, the multicast source is created.
       * ### Prerequisites
       * Before you call `RegisterTransitRouterMulticastGroupSources`, ensure that the vSwitch to which the ENI belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSources(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request);

      /**
       * @summary Deletes specified traffic classification rules from a traffic marking policy.
       *
       * @description - When you call **RemoveTrafficMatchRuleFromTrafficMarkingPolicy**, take note of the following rules:
       *   - If you specify the ID of a traffic classification rule in the **TrafficMarkRuleIds** parameter, the specified traffic classification rule is deleted.
       *   - If you do not specify a traffic classification rule ID in the **TrafficMarkRuleIds** parameter, no operation is performed after you call this operation.
       *   If you want to delete a traffic classification rule, you must specify the rule ID before you call this operation.
       * - **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       *   - If a traffic classification rule is in the **Deleting** state, the traffic classification rule is being deleted. In this case, you can query the traffic classification rule but cannot perform other operations.
       *   - If a traffic classification rule cannot be found, the traffic classification rule is deleted.
       *
       * @param request RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(const Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified traffic classification rules from a traffic marking policy.
       *
       * @description - When you call **RemoveTrafficMatchRuleFromTrafficMarkingPolicy**, take note of the following rules:
       *   - If you specify the ID of a traffic classification rule in the **TrafficMarkRuleIds** parameter, the specified traffic classification rule is deleted.
       *   - If you do not specify a traffic classification rule ID in the **TrafficMarkRuleIds** parameter, no operation is performed after you call this operation.
       *   If you want to delete a traffic classification rule, you must specify the rule ID before you call this operation.
       * - **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
       *   - If a traffic classification rule is in the **Deleting** state, the traffic classification rule is being deleted. In this case, you can query the traffic classification rule but cannot perform other operations.
       *   - If a traffic classification rule cannot be found, the traffic classification rule is deleted.
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
       * @summary Replaces the route table that is associated with a network instance connection.
       *
       * @description - You can replace the route table that is associated with a network instance connection only if the network instance connection is created by an Enterprise Edition transit router.
       * - **ReplaceTransitRouterRouteTableAssociation** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation continues to run in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of the association.
       *   - If the association status is **Replacing**, the route table is being replaced. In this state, you can only query the association and cannot perform other operations.
       *   - If the association status is **Active**, the route table has been replaced.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociationWithOptions(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the route table that is associated with a network instance connection.
       *
       * @description - You can replace the route table that is associated with a network instance connection only if the network instance connection is created by an Enterprise Edition transit router.
       * - **ReplaceTransitRouterRouteTableAssociation** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation continues to run in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query the status of the association.
       *   - If the association status is **Replacing**, the route table is being replaced. In this state, you can only query the association and cannot perform other operations.
       *   - If the association status is **Active**, the route table has been replaced.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociation(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request);

      /**
       * @summary Connects an on-premises network to a cloud service.
       *
       * @description Cloud services refer to Alibaba Cloud services that use the 100.64.0.0/10 CIDR block to provide services. These cloud services include Object Storage Service (OSS), Simple Log Service (SLS), and Data Transmission Service (DTS). If your on-premises network needs to access a cloud service, you must attach the virtual border router (VBR) or Cloud Connect Network (CCN) instance that is connected to your on-premises network to a Cloud Enterprise Network (CEN) instance. In addition, you must attach a virtual private cloud (VPC) that is deployed in the same region as the cloud service to the CEN instance. This way, your on-premises network can connect to the VPC that is deployed in the same region as the cloud service and access the cloud service through the VPC.
       * - This operation is supported only by Basic Edition transit routers. An on-premises network associated with a VBR can use CEN to access only a cloud service that is deployed in the same region.
       *   For example, if cloud services are deployed in the China (Beijing) region, only on-premises networks connected to VBRs in the China (Beijing) region can access the cloud services.
       * - **ResolveAndRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeRouteServicesInCen** to query the status of a cloud service.
       *   - If the cloud service is in the **Creating** state, the connection to the cloud service is being created. In this case, you can query the cloud service but cannot perform other operations.
       *   - If the cloud service is in the **Active** state, the connection to the cloud service is created.
       *   - If the cloud service is in the **Failed** state, the connection to the cloud service failed.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following conditions are met:
       * - The VBR or CCN instance to which your on-premises network is connected is attached to a CEN instance.
       * - A VPC that is deployed in the same region as the cloud service is attached to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
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
       * - This operation is supported only by Basic Edition transit routers. An on-premises network associated with a VBR can use CEN to access only a cloud service that is deployed in the same region.
       *   For example, if cloud services are deployed in the China (Beijing) region, only on-premises networks connected to VBRs in the China (Beijing) region can access the cloud services.
       * - **ResolveAndRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call **DescribeRouteServicesInCen** to query the status of a cloud service.
       *   - If the cloud service is in the **Creating** state, the connection to the cloud service is being created. In this case, you can query the cloud service but cannot perform other operations.
       *   - If the cloud service is in the **Active** state, the connection to the cloud service is created.
       *   - If the cloud service is in the **Failed** state, the connection to the cloud service failed.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following conditions are met:
       * - The VBR or CCN instance to which your on-premises network is connected is attached to a CEN instance.
       * - A VPC that is deployed in the same region as the cloud service is attached to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
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
       * - For more information about how to detach VPCs from Enterprise Edition transit routers, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * - For more information about how to detach VBRs from Enterprise Edition transit routers, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - For more information about how to detach IPsec-VPN connections from Enterprise Edition transit routers, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - For more information about how to detach ECRs from Enterprise Edition transit routers, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - For more information about how to detach network instances from Basic Edition transit routers, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
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
       * - For more information about how to detach VPCs from Enterprise Edition transit routers, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * - For more information about how to detach VBRs from Enterprise Edition transit routers, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - For more information about how to detach IPsec-VPN connections from Enterprise Edition transit routers, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - For more information about how to detach ECRs from Enterprise Edition transit routers, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - For more information about how to detach network instances from Basic Edition transit routers, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *
       * @param request RevokeInstanceFromTransitRouterRequest
       * @return RevokeInstanceFromTransitRouterResponse
       */
      Models::RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouter(const Models::RevokeInstanceFromTransitRouterRequest &request);

      /**
       * @summary Call the RoutePrivateZoneInCenToVpc operation to configure the PrivateZone service.
       *
       * @description Alibaba Cloud DNS PrivateZone is a private Domain Name System (DNS) resolution and management service that is based on a Virtual Private Cloud (VPC). After a virtual border router (VBR) instance or a Cloud Connect Network (CCN) instance is attached to a Cloud Enterprise Network (CEN) instance, the associated on-premises network can access the PrivateZone service through the CEN instance.
       * - An on-premises network that is associated with a VBR or CCN instance can access the PrivateZone service only in the same region.
       *   For example, if the PrivateZone service is in the China (Beijing) region, only on-premises networks that are associated with VBR instances in the China (Beijing) region or with CCN instances in the Chinese mainland can access the PrivateZone service.
       * - The **RoutePrivateZoneInCenToVpc** operation is asynchronous. After a request is sent, the system returns a **RequestId**. The configuration is then added in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service.
       *   - If the PrivateZone service is in the **Creating** state, the configuration is being added. In this state, you can only query the configuration and cannot perform other operations.
       *   - If the PrivateZone service is in the **Active** state, the configuration is complete.
       *   - If the PrivateZone service is in the **Failed** state, the configuration failed.
       * #### Prerequisites
       * Before you call the **RoutePrivateZoneInCenToVpc** operation, make sure that the following conditions are met:
       * - The PrivateZone service is deployed. For more information, see [Quick Start for Alibaba Cloud DNS PrivateZone](https://help.aliyun.com/document_detail/64627.html).
       * - The VPC instance associated with the PrivateZone service and the VBR or CCN instance in the access region are attached to the same CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       * - If an on-premises network connects to Alibaba Cloud through a CCN instance, and the CCN, VPC, and CEN instances belong to different accounts, the CCN instance must be authorized first. For more information, see [Cloud Connect Network authorization](https://help.aliyun.com/document_detail/106674.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpcWithOptions(const Models::RoutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the RoutePrivateZoneInCenToVpc operation to configure the PrivateZone service.
       *
       * @description Alibaba Cloud DNS PrivateZone is a private Domain Name System (DNS) resolution and management service that is based on a Virtual Private Cloud (VPC). After a virtual border router (VBR) instance or a Cloud Connect Network (CCN) instance is attached to a Cloud Enterprise Network (CEN) instance, the associated on-premises network can access the PrivateZone service through the CEN instance.
       * - An on-premises network that is associated with a VBR or CCN instance can access the PrivateZone service only in the same region.
       *   For example, if the PrivateZone service is in the China (Beijing) region, only on-premises networks that are associated with VBR instances in the China (Beijing) region or with CCN instances in the Chinese mainland can access the PrivateZone service.
       * - The **RoutePrivateZoneInCenToVpc** operation is asynchronous. After a request is sent, the system returns a **RequestId**. The configuration is then added in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service.
       *   - If the PrivateZone service is in the **Creating** state, the configuration is being added. In this state, you can only query the configuration and cannot perform other operations.
       *   - If the PrivateZone service is in the **Active** state, the configuration is complete.
       *   - If the PrivateZone service is in the **Failed** state, the configuration failed.
       * #### Prerequisites
       * Before you call the **RoutePrivateZoneInCenToVpc** operation, make sure that the following conditions are met:
       * - The PrivateZone service is deployed. For more information, see [Quick Start for Alibaba Cloud DNS PrivateZone](https://help.aliyun.com/document_detail/64627.html).
       * - The VPC instance associated with the PrivateZone service and the VBR or CCN instance in the access region are attached to the same CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       * - If an on-premises network connects to Alibaba Cloud through a CCN instance, and the CCN, VPC, and CEN instances belong to different accounts, the CCN instance must be authorized first. For more information, see [Cloud Connect Network authorization](https://help.aliyun.com/document_detail/106674.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpc(const Models::RoutePrivateZoneInCenToVpcRequest &request);

      /**
       * @summary You can call the SetCenInterRegionBandwidthLimit operation to set, modify, or delete the inter-region bandwidth between two regions in a bandwidth plan for a Basic Edition transit router.
       *
       * @description The target Cloud Enterprise Network (CEN) instance must be associated with a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * ### Limits
       * The target Cloud Enterprise Network (CEN) instance already has a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call the **SetCenInterRegionBandwidthLimit** API to set, modify, or delete the bandwidth for inter-region communication:
       * - The **SetCenInterRegionBandwidthLimit** operation supports setting, modifying, or deleting the inter-region communication bandwidth for Basic Edition transit routers only.
       * - You cannot modify the inter-region communication bandwidth if bandwidth multiplexing is enabled for the inter-region connection.
       * ### Limits
       * - The maximum bandwidth for an inter-region communication cannot exceed the peak bandwidth of the bandwidth plan.
       * - The total bandwidth of all inter-region communications in a bandwidth plan cannot exceed the peak bandwidth of the plan.
       * - You cannot modify the inter-region communication bandwidth if bandwidth multiplexing is enabled for the inter-region connection.
       * - You can use the **SetCenInterRegionBandwidthLimit** API operation to set, modify, or delete the inter-region communication bandwidth for Basic Edition transit routers only.
       *   To set, modify, or delete the inter-region communication bandwidth for an Enterprise Edition transit router, use the [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), and [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html) API operations.
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimitWithOptions(const Models::SetCenInterRegionBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the SetCenInterRegionBandwidthLimit operation to set, modify, or delete the inter-region bandwidth between two regions in a bandwidth plan for a Basic Edition transit router.
       *
       * @description The target Cloud Enterprise Network (CEN) instance must be associated with a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * ### Limits
       * The target Cloud Enterprise Network (CEN) instance already has a bandwidth plan. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call the **SetCenInterRegionBandwidthLimit** API to set, modify, or delete the bandwidth for inter-region communication:
       * - The **SetCenInterRegionBandwidthLimit** operation supports setting, modifying, or deleting the inter-region communication bandwidth for Basic Edition transit routers only.
       * - You cannot modify the inter-region communication bandwidth if bandwidth multiplexing is enabled for the inter-region connection.
       * ### Limits
       * - The maximum bandwidth for an inter-region communication cannot exceed the peak bandwidth of the bandwidth plan.
       * - The total bandwidth of all inter-region communications in a bandwidth plan cannot exceed the peak bandwidth of the plan.
       * - You cannot modify the inter-region communication bandwidth if bandwidth multiplexing is enabled for the inter-region connection.
       * - You can use the **SetCenInterRegionBandwidthLimit** API operation to set, modify, or delete the inter-region communication bandwidth for Basic Edition transit routers only.
       *   To set, modify, or delete the inter-region communication bandwidth for an Enterprise Edition transit router, use the [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), and [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html) API operations.
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimit(const Models::SetCenInterRegionBandwidthLimitRequest &request);

      /**
       * @summary Creates and attaches tags to resources.
       *
       * @description - A tag consists of a tag key and a tag value. Both the tag key and tag value are required.
       * - If you attach multiple tags to a Cloud Enterprise Network (CEN) instance, the tag keys must be unique for that instance.
       * - You can attach a maximum of 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to resources.
       *
       * @description - A tag consists of a tag key and a tag value. Both the tag key and tag value are required.
       * - If you attach multiple tags to a Cloud Enterprise Network (CEN) instance, the tag keys must be unique for that instance.
       * - You can attach a maximum of 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Temporarily upgrades a subscription bandwidth plan of Cloud Enterprise Network (CEN).
       *
       * @description Subscription bandwidth packages support temporary upgrade. You can increase the bandwidth for a specified period, responding to traffic fluctuations.
       * The minimum upgrade interval supported is 3 hours. After payment is completed, the bandwidth is immediately upgraded without affecting the service.
       * > After the specified time window ends, the bandwidth limit is restored to the original value. If the actual bandwidth exceeds the limit, packets may be dropped due to network traffic throttling. Plan your upgrade window and match the bandwidth peak to your needs.
       * - Currently, the temporary upgrade feature is not enabled by default. To use it, contact your account manager.
       * - Pay-as-you-go and expired subscription bandwidth packages do not support the temporary upgrade feature.
       * - The **TempUpgradeCenBandwidthPackageSpec** operation is asynchronous. The system first returns a **RequestId**, while running the upgrade task in the background. Call the **DescribeCenBandwidthPackages** API to query the bandwidth package specifications. When they match your request, the upgrade is complete.
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpecWithOptions(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Temporarily upgrades a subscription bandwidth plan of Cloud Enterprise Network (CEN).
       *
       * @description Subscription bandwidth packages support temporary upgrade. You can increase the bandwidth for a specified period, responding to traffic fluctuations.
       * The minimum upgrade interval supported is 3 hours. After payment is completed, the bandwidth is immediately upgraded without affecting the service.
       * > After the specified time window ends, the bandwidth limit is restored to the original value. If the actual bandwidth exceeds the limit, packets may be dropped due to network traffic throttling. Plan your upgrade window and match the bandwidth peak to your needs.
       * - Currently, the temporary upgrade feature is not enabled by default. To use it, contact your account manager.
       * - Pay-as-you-go and expired subscription bandwidth packages do not support the temporary upgrade feature.
       * - The **TempUpgradeCenBandwidthPackageSpec** operation is asynchronous. The system first returns a **RequestId**, while running the upgrade task in the background. Call the **DescribeCenBandwidthPackages** API to query the bandwidth package specifications. When they match your request, the upgrade is complete.
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpec(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request);

      /**
       * @summary You can call the UnassociateCenBandwidthPackage operation to detach a bandwidth plan from a Cloud Enterprise Network (CEN) instance. After you detach the bandwidth plan, you can attach it to another CEN instance.
       *
       * @description Before you call this operation, ensure that no cross-region bandwidth is configured for the bandwidth plan. To delete the cross-region bandwidth, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackageWithOptions(const Models::UnassociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UnassociateCenBandwidthPackage operation to detach a bandwidth plan from a Cloud Enterprise Network (CEN) instance. After you detach the bandwidth plan, you can attach it to another CEN instance.
       *
       * @description Before you call this operation, ensure that no cross-region bandwidth is configured for the bandwidth plan. To delete the cross-region bandwidth, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackage(const Models::UnassociateCenBandwidthPackageRequest &request);

      /**
       * @summary Deletes a connection to PrivateZone.
       *
       * @description The **UnroutePrivateZoneInCenToVpc** operation is asynchronous. The system returns a **RequestId**, while the system runs the deletion task in the background. Call the **DescribeCenPrivateZoneRoutes** operation to query the PrivateZone status.
       * - The **Deleting** state indicates the PrivateZone connection is being deleted. You can only perform the query operation.
       * - When the specified PrivateZone connection is not found, it has been deleted.
       * If the PrivateZone connection has an access region that is a Cloud Connect Network (CCN) region, you must first delete the PrivateZone connection for the CCN region before you delete the PrivateZone connections for other regions.
       *
       * @param request UnroutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnroutePrivateZoneInCenToVpcResponse
       */
      Models::UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpcWithOptions(const Models::UnroutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection to PrivateZone.
       *
       * @description The **UnroutePrivateZoneInCenToVpc** operation is asynchronous. The system returns a **RequestId**, while the system runs the deletion task in the background. Call the **DescribeCenPrivateZoneRoutes** operation to query the PrivateZone status.
       * - The **Deleting** state indicates the PrivateZone connection is being deleted. You can only perform the query operation.
       * - When the specified PrivateZone connection is not found, it has been deleted.
       * If the PrivateZone connection has an access region that is a Cloud Connect Network (CCN) region, you must first delete the PrivateZone connection for the CCN region before you delete the PrivateZone connections for other regions.
       *
       * @param request UnroutePrivateZoneInCenToVpcRequest
       * @return UnroutePrivateZoneInCenToVpcResponse
       */
      Models::UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpc(const Models::UnroutePrivateZoneInCenToVpcRequest &request);

      /**
       * @summary Remove tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove tags from resources.
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
       * @summary You can call the UpdateTransitRouter operation to modify the name and description of a TransitRouter instance.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId**. The TransitRouter instance is not immediately modified because the modification task runs in the background. You can call the **ListTransitRouters** operation to query the status of the TransitRouter instance.
       * - If a TransitRouter instance is in the **Modifying** state, the instance is being modified. In this state, you can only query the instance. You cannot perform other operations.
       * - If a TransitRouter instance is in the **Active** state, the modification is complete.
       *
       * @param request UpdateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouterWithOptions(const Models::UpdateTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateTransitRouter operation to modify the name and description of a TransitRouter instance.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId**. The TransitRouter instance is not immediately modified because the modification task runs in the background. You can call the **ListTransitRouters** operation to query the status of the TransitRouter instance.
       * - If a TransitRouter instance is in the **Modifying** state, the instance is being modified. In this state, you can only query the instance. You cannot perform other operations.
       * - If a TransitRouter instance is in the **Active** state, the modification is complete.
       *
       * @param request UpdateTransitRouterRequest
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouter(const Models::UpdateTransitRouterRequest &request);

      /**
       * @summary Modifies the name and description of an ECR attachment for an Enterprise Edition Transit Router.
       *
       * @description `UpdateTransitRouterEcrAttachmentAttribute` is an asynchronous call. After you send a request, the system returns a request ID, but the ECR attachment is not modified immediately. The modification task runs in the background. You can call `ListTransitRouterEcrAttachments` to query the status of the ECR attachment.
       * If an ECR attachment is in the `Modifying` state, you can only query the attachment and cannot perform other operations on it. When the attachment enters the `Attached` state, the modification is complete.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an ECR attachment for an Enterprise Edition Transit Router.
       *
       * @description `UpdateTransitRouterEcrAttachmentAttribute` is an asynchronous call. After you send a request, the system returns a request ID, but the ECR attachment is not modified immediately. The modification task runs in the background. You can call `ListTransitRouterEcrAttachments` to query the status of the ECR attachment.
       * If an ECR attachment is in the `Modifying` state, you can only query the attachment and cannot perform other operations on it. When the attachment enters the `Attached` state, the modification is complete.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttribute(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request);

      /**
       * @summary Modifies an inter-region connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
       * - If an inter-region connection is in the **Modifying** state, the inter-region connection is being modified. You can query the inter-region connection but cannot perform other operations.
       * - If an inter-region connection is in the **Attached** state, the inter-region connection is modified.
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
       * - If an inter-region connection is in the **Modifying** state, the inter-region connection is being modified. You can query the inter-region connection but cannot perform other operations.
       * - If an inter-region connection is in the **Attached** state, the inter-region connection is modified.
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
       * @summary You can call the UpdateTransitRouterRouteTable operation to modify the name and description of a route table for an Enterprise Edition transit router, or to enable or disable multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTableWithOptions(const Models::UpdateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateTransitRouterRouteTable operation to modify the name and description of a route table for an Enterprise Edition transit router, or to enable or disable multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTable(const Models::UpdateTransitRouterRouteTableRequest &request);

      /**
       * @summary Modifies the name, description, and automatic route advertising setting for a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation is still in progress in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of the VBR connection.
       * - If a VBR connection is in the **Modifying** state, you can only query the VBR connection and cannot perform other operations.
       * - If a VBR connection is in the **Attached** state, the modification is complete.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and automatic route advertising setting for a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the operation is still in progress in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of the VBR connection.
       * - If a VBR connection is in the **Modifying** state, you can only query the VBR connection and cannot perform other operations.
       * - If a VBR connection is in the **Attached** state, the modification is complete.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttribute(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a VPC connection on an Enterprise Edition transit router and to control automatic route advertising to the VPC.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** and completes the modification in the background. To query the status of the VPC connection, call **ListTransitRouterVpcAttachments**.
       * - If a VPC connection is in the **Modifying** state, you can only query it.
       * - If a VPC connection is in the **Attached** state, the modification is complete.
       *
       * @param tmpReq UpdateTransitRouterVpcAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpcAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpcAttachmentAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a VPC connection on an Enterprise Edition transit router and to control automatic route advertising to the VPC.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** and completes the modification in the background. To query the status of the VPC connection, call **ListTransitRouterVpcAttachments**.
       * - If a VPC connection is in the **Modifying** state, you can only query it.
       * - If a VPC connection is in the **Attached** state, the modification is complete.
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
       * @summary Modifies the attributes of a VPN connection attached to an Enterprise Edition Transit Router. You can modify the connection\\"s name, description, and automatic route publishing setting.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a VPN connection attached to an Enterprise Edition Transit Router. You can modify the connection\\"s name, description, and automatic route publishing setting.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttribute(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request);

      /**
       * @summary You can call the WithdrawPublishedRouteEntries operation to revoke routes published from a Virtual Private Cloud (VPC) or Virtual Border Router (VBR) instance to Cloud Enterprise Network.
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntriesWithOptions(const Models::WithdrawPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the WithdrawPublishedRouteEntries operation to revoke routes published from a Virtual Private Cloud (VPC) or Virtual Border Router (VBR) instance to Cloud Enterprise Network.
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntries(const Models::WithdrawPublishedRouteEntriesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
