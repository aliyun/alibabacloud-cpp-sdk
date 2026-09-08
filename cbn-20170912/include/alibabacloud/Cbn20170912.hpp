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
       * @summary Activates a flow log to start capturing traffic of specified resources.
       *
       * @description - After a flow log is created, it is in the Active state by default. If you stopped a flow log, you can call this operation to reactivate it.
       * - `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **RequestId**, but activate flow log is not fully activated. The activation task is still running in the background. You can call the `DescribeFlowlogs` operation to query the status of activate flow log.
       *     
       *     - If activate flow log is in the **Modifying** state, activate flow log is being activated. In this state, you can only perform query operations.
       *     - If activate flow log is in the **Active** state, activate flow log is activated.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a flow log to start capturing traffic of specified resources.
       *
       * @description - After a flow log is created, it is in the Active state by default. If you stopped a flow log, you can call this operation to reactivate it.
       * - `ActiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **RequestId**, but activate flow log is not fully activated. The activation task is still running in the background. You can call the `DescribeFlowlogs` operation to query the status of activate flow log.
       *     
       *     - If activate flow log is in the **Modifying** state, activate flow log is being activated. In this state, you can only perform query operations.
       *     - If activate flow log is in the **Active** state, activate flow log is activated.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Adds traffic classification rules to a traffic marking policy by calling the AddTrafficMatchRuleToTrafficMarkingPolicy operation.
       *
       * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic classification rule is not yet created. The creation task continues to run in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of the traffic classification rule. 
       * - If the traffic classification rule is in the **Creating** state, the rule is being created. In this state, you can only query the rule and cannot perform other operations on it.
       * - If the traffic classification rule is in the **Active** state, the rule is created.
       *
       * @param request AddTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTrafficMatchRuleToTrafficMarkingPolicyResponse addTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds traffic classification rules to a traffic marking policy by calling the AddTrafficMatchRuleToTrafficMarkingPolicy operation.
       *
       * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic classification rule is not yet created. The creation task continues to run in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of the traffic classification rule. 
       * - If the traffic classification rule is in the **Creating** state, the rule is being created. In this state, you can only query the rule and cannot perform other operations on it.
       * - If the traffic classification rule is in the **Active** state, the rule is created.
       *
       * @param request AddTrafficMatchRuleToTrafficMarkingPolicyRequest
       * @return AddTrafficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTrafficMatchRuleToTrafficMarkingPolicyResponse addTrafficMatchRuleToTrafficMarkingPolicy(const Models::AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @deprecated OpenAPI AddTraficMatchRuleToTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::AddTrafficMatchRuleToTrafficMarkingPolicy instead.
       *
       * @summary Adds traffic classification rules to a traffic marking policy.
       *
       * @description ### Precautions
       * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued. To add traffic classification rules to a traffic marking policy, use the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation. This documentation is no longer maintained.
       *
       * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicyWithOptions(const Models::AddTraficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTraficMatchRuleToTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::AddTrafficMatchRuleToTrafficMarkingPolicy instead.
       *
       * @summary Adds traffic classification rules to a traffic marking policy.
       *
       * @description ### Precautions
       * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued. To add traffic classification rules to a traffic marking policy, use the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation. This documentation is no longer maintained.
       *
       * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
       * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
       */
      Models::AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicy(const Models::AddTraficMatchRuleToTrafficMarkingPolicyRequest &request);

      /**
       * @summary Associates a bandwidth package instance with a Cloud Enterprise Network (CEN) instance.
       *
       * @description A CEN instance supports binding multiple bandwidth packages, but does not support binding multiple bandwidth packages with the same connected areas.
       * For example, if a CEN instance already has a bandwidth package bound for the Chinese mainland-to-Chinese mainland connected areas, you cannot bind another bandwidth package for the Chinese mainland-to-Chinese mainland connected areas. However, you can bind a bandwidth package for the Chinese mainland-to-North America connected areas.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackageWithOptions(const Models::AssociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a bandwidth package instance with a Cloud Enterprise Network (CEN) instance.
       *
       * @description A CEN instance supports binding multiple bandwidth packages, but does not support binding multiple bandwidth packages with the same connected areas.
       * For example, if a CEN instance already has a bandwidth package bound for the Chinese mainland-to-Chinese mainland connected areas, you cannot bind another bandwidth package for the Chinese mainland-to-Chinese mainland connected areas. However, you can bind a bandwidth package for the Chinese mainland-to-North America connected areas.
       *
       * @param request AssociateCenBandwidthPackageRequest
       * @return AssociateCenBandwidthPackageResponse
       */
      Models::AssociateCenBandwidthPackageResponse associateCenBandwidthPackage(const Models::AssociateCenBandwidthPackageRequest &request);

      /**
       * @summary Creates a route table association.
       *
       * @description After you create a network instance connection, you must set the association and forwarding relationship for it by associating the network instance connection with an Enterprise Edition transit router route table. After the association is created, the Enterprise Edition transit router forwards traffic of the network instance based on the route entries in the route table. Before you invoke this operation, take note of the following information:
       * - Only Enterprise Edition transit router route tables support route table associations. For information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network (CEN)?](https://help.aliyun.com/document_detail/181681.html).
       * - Each network instance connection can be associated with only one Enterprise Edition transit router route table.
       * - **AssociateTransitRouterAttachmentWithRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the association between the network instance connection and the route table is not complete. The association task is still running in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association status between the network instance connection and the route table.
       *     - If the association status is **Associating**, the network instance connection is being associated with the route table. In this state, you can only query the association but cannot perform other operations.
       *     - If the association status is **Active**, the network instance connection is associated with the route table.
       *
       * @param request AssociateTransitRouterAttachmentWithRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTransitRouterAttachmentWithRouteTableResponse
       */
      Models::AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTableWithOptions(const Models::AssociateTransitRouterAttachmentWithRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route table association.
       *
       * @description After you create a network instance connection, you must set the association and forwarding relationship for it by associating the network instance connection with an Enterprise Edition transit router route table. After the association is created, the Enterprise Edition transit router forwards traffic of the network instance based on the route entries in the route table. Before you invoke this operation, take note of the following information:
       * - Only Enterprise Edition transit router route tables support route table associations. For information about the regions and zones that support Enterprise Edition transit routers, see [What is Cloud Enterprise Network (CEN)?](https://help.aliyun.com/document_detail/181681.html).
       * - Each network instance connection can be associated with only one Enterprise Edition transit router route table.
       * - **AssociateTransitRouterAttachmentWithRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the association between the network instance connection and the route table is not complete. The association task is still running in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association status between the network instance connection and the route table.
       *     - If the association status is **Associating**, the network instance connection is being associated with the route table. In this state, you can only query the association but cannot perform other operations.
       *     - If the association status is **Active**, the network instance connection is associated with the route table.
       *
       * @param request AssociateTransitRouterAttachmentWithRouteTableRequest
       * @return AssociateTransitRouterAttachmentWithRouteTableResponse
       */
      Models::AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTable(const Models::AssociateTransitRouterAttachmentWithRouteTableRequest &request);

      /**
       * @summary Associates a vSwitch in a virtual private cloud (VPC) with a multicast domain by calling the AssociateTransitRouterMulticastDomain operation so that resources in the VPC can communicate through multicast.
       *
       * @description - A vSwitch can be associated with only one multicast domain. Make sure that the vSwitch to be associated is not already associated with another multicast domain. To disassociate a vSwitch from a multicast domain, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - **AssociateTransitRouterMulticastDomain** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the association between the vSwitch and the multicast domain is not yet complete. The association task continues to run in the background. You can call **ListTransitRouterMulticastDomainAssociations** to query the association status between the vSwitch and the multicast domain.
       *     - If the association status is **Associating**, the association between the vSwitch and the multicast domain is being established. In this state, you can only query the vSwitch but cannot perform other operations.
       *     - If the association status is **Associated**, the association between the vSwitch and the multicast domain is established.
       * - The VPC to which the vSwitch belongs must be connected to an Enterprise Edition transit router. To create a VPC connection, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request AssociateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTransitRouterMulticastDomainResponse
       */
      Models::AssociateTransitRouterMulticastDomainResponse associateTransitRouterMulticastDomainWithOptions(const Models::AssociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a vSwitch in a virtual private cloud (VPC) with a multicast domain by calling the AssociateTransitRouterMulticastDomain operation so that resources in the VPC can communicate through multicast.
       *
       * @description - A vSwitch can be associated with only one multicast domain. Make sure that the vSwitch to be associated is not already associated with another multicast domain. To disassociate a vSwitch from a multicast domain, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - **AssociateTransitRouterMulticastDomain** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the association between the vSwitch and the multicast domain is not yet complete. The association task continues to run in the background. You can call **ListTransitRouterMulticastDomainAssociations** to query the association status between the vSwitch and the multicast domain.
       *     - If the association status is **Associating**, the association between the vSwitch and the multicast domain is being established. In this state, you can only query the vSwitch but cannot perform other operations.
       *     - If the association status is **Associated**, the association between the vSwitch and the multicast domain is established.
       * - The VPC to which the vSwitch belongs must be connected to an Enterprise Edition transit router. To create a VPC connection, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
       *
       * @param request AssociateTransitRouterMulticastDomainRequest
       * @return AssociateTransitRouterMulticastDomainResponse
       */
      Models::AssociateTransitRouterMulticastDomainResponse associateTransitRouterMulticastDomain(const Models::AssociateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Attaches a network instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description CEN supports attaching cross-account network instances. Before attaching a cross-account network instance, the CEN instance must be authorized by the cross-account network instance:
       * - For cross-account VPC instance authorization, refer to [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * - For cross-account Cloud Connect Network instance authorization, refer to [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * - Cross-account border router instance authorization is not available by default. To use this feature, contact your account manager.
       *
       * @param request AttachCenChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCenChildInstanceResponse
       */
      Models::AttachCenChildInstanceResponse attachCenChildInstanceWithOptions(const Models::AttachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a network instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description CEN supports attaching cross-account network instances. Before attaching a cross-account network instance, the CEN instance must be authorized by the cross-account network instance:
       * - For cross-account VPC instance authorization, refer to [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       * - For cross-account Cloud Connect Network instance authorization, refer to [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
       * - Cross-account border router instance authorization is not available by default. To use this feature, contact your account manager.
       *
       * @param request AttachCenChildInstanceRequest
       * @return AttachCenChildInstanceResponse
       */
      Models::AttachCenChildInstanceResponse attachCenChildInstance(const Models::AttachCenChildInstanceRequest &request);

      /**
       * @summary Queries whether the transit router service is activated for the current Alibaba Cloud account.
       *
       * @param request CheckTransitRouterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTransitRouterServiceResponse
       */
      Models::CheckTransitRouterServiceResponse checkTransitRouterServiceWithOptions(const Models::CheckTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the transit router service is activated for the current Alibaba Cloud account.
       *
       * @param request CheckTransitRouterServiceRequest
       * @return CheckTransitRouterServiceResponse
       */
      Models::CheckTransitRouterServiceResponse checkTransitRouterService(const Models::CheckTransitRouterServiceRequest &request);

      /**
       * @summary A Cloud Enterprise Network (CEN) instance is the fundamental resource for managing an integrated network. A CEN instance manages one network and can span one or more regions. Before enabling connectivity between network instances, call the CreateCen operation to create a CEN instance.
       *
       * @description The **CreateCen** operation is asynchronous. The system returns a CEN instance ID before the CEN instance is fully created, while the creation task continues in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Creating** state, the CEN instance is being created. In this state, you can only query the CEN instance but cannot perform other operations on it.
       * - If the CEN instance is in the **Active** state, the CEN instance is created.
       *
       * @param request CreateCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCenWithOptions(const Models::CreateCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A Cloud Enterprise Network (CEN) instance is the fundamental resource for managing an integrated network. A CEN instance manages one network and can span one or more regions. Before enabling connectivity between network instances, call the CreateCen operation to create a CEN instance.
       *
       * @description The **CreateCen** operation is asynchronous. The system returns a CEN instance ID before the CEN instance is fully created, while the creation task continues in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Creating** state, the CEN instance is being created. In this state, you can only query the CEN instance but cannot perform other operations on it.
       * - If the CEN instance is in the **Active** state, the CEN instance is created.
       *
       * @param request CreateCenRequest
       * @return CreateCenResponse
       */
      Models::CreateCenResponse createCen(const Models::CreateCenRequest &request);

      /**
       * @summary Creates a bandwidth plan for Cloud Enterprise Network (CEN) to enable cross-region connectivity between network instances.
       *
       * @description - When you create a bandwidth plan instance, you must specify the connected areas. An area of a bandwidth plan is a collection of regions. Each area contains one or more Alibaba Cloud regions. Select the connected areas based on the regions that you want to connect. For more information about the relationship between areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * - For more information about the billing details of bandwidth plans, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * - **CreateCenBandwidthPackage** is an asynchronous operation. After you invoke the operation, the system returns a bandwidth plan instance ID but the bandwidth plan is not yet created. The creation node is still running in the background. You can invoke the **DescribeCenBandwidthPackages** operation to query the status of the bandwidth plan. When the bandwidth plan is in the **Idle** or **InUse** state, the bandwidth plan is created.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackageWithOptions(const Models::CreateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a bandwidth plan for Cloud Enterprise Network (CEN) to enable cross-region connectivity between network instances.
       *
       * @description - When you create a bandwidth plan instance, you must specify the connected areas. An area of a bandwidth plan is a collection of regions. Each area contains one or more Alibaba Cloud regions. Select the connected areas based on the regions that you want to connect. For more information about the relationship between areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
       * - For more information about the billing details of bandwidth plans, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       * - **CreateCenBandwidthPackage** is an asynchronous operation. After you invoke the operation, the system returns a bandwidth plan instance ID but the bandwidth plan is not yet created. The creation node is still running in the background. You can invoke the **DescribeCenBandwidthPackages** operation to query the status of the bandwidth plan. When the bandwidth plan is in the **Idle** or **InUse** state, the bandwidth plan is created.
       *
       * @param request CreateCenBandwidthPackageRequest
       * @return CreateCenBandwidthPackageResponse
       */
      Models::CreateCenBandwidthPackageResponse createCenBandwidthPackage(const Models::CreateCenBandwidthPackageRequest &request);

      /**
       * @summary Adds a route entry to a network instance connected to an Enterprise Edition transit router. The destination CIDR block points to the transit router in the current region as the next hop.
       *
       * @description - You can add route entries only to Virtual Private Cloud (VPC) instances and Virtual Border Router (VBR) instances that are connected to an Enterprise Edition transit router.
       * - The next hop of the route entry defaults to the **transit router connection** (network instance connection) and cannot be modified.
       * - **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet created. The creation task continues to run in the background. You can call the **DescribeRouteEntryList** operation of VPC to query the status of the route entry. 
       *     - If the route entry is in the **Pending** state, the route entry is being created. In this state, you can only query the route entry but cannot perform other operations.
       *     - If the route entry is in the **Available** state, the route entry is created.
       *
       * @param request CreateCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::CreateCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a route entry to a network instance connected to an Enterprise Edition transit router. The destination CIDR block points to the transit router in the current region as the next hop.
       *
       * @description - You can add route entries only to Virtual Private Cloud (VPC) instances and Virtual Border Router (VBR) instances that are connected to an Enterprise Edition transit router.
       * - The next hop of the route entry defaults to the **transit router connection** (network instance connection) and cannot be modified.
       * - **CreateCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet created. The creation task continues to run in the background. You can call the **DescribeRouteEntryList** operation of VPC to query the status of the route entry. 
       *     - If the route entry is in the **Pending** state, the route entry is being created. In this state, you can only query the route entry but cannot perform other operations.
       *     - If the route entry is in the **Available** state, the route entry is created.
       *
       * @param request CreateCenChildInstanceRouteEntryToAttachmentRequest
       * @return CreateCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachment(const Models::CreateCenChildInstanceRouteEntryToAttachmentRequest &request);

      /**
       * @summary Adds a route entry to a network instance by calling the CreateCenChildInstanceRouteEntryToCen operation.
       *
       * @description - The CreateCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - The CreateCenChildInstanceRouteEntryToCen operation does not support adding route entries to network instances in an Enterprise Edition transit router.
       * - The next hop of the route entry defaults to the regional gateway of Cloud Enterprise Network (CEN) and cannot be modified.
       *
       * @param request CreateCenChildInstanceRouteEntryToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenChildInstanceRouteEntryToCenResponse
       */
      Models::CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCenWithOptions(const Models::CreateCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a route entry to a network instance by calling the CreateCenChildInstanceRouteEntryToCen operation.
       *
       * @description - The CreateCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - The CreateCenChildInstanceRouteEntryToCen operation does not support adding route entries to network instances in an Enterprise Edition transit router.
       * - The next hop of the route entry defaults to the regional gateway of Cloud Enterprise Network (CEN) and cannot be modified.
       *
       * @param request CreateCenChildInstanceRouteEntryToCenRequest
       * @return CreateCenChildInstanceRouteEntryToCenResponse
       */
      Models::CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCen(const Models::CreateCenChildInstanceRouteEntryToCenRequest &request);

      /**
       * @summary Creates a cross-region traffic scheduling policy for an Enterprise Edition transit router to optimize and control network traffic across regions.
       *
       * @description - Only inter-region connections of Enterprise Edition transit routers support the creation of cross-region traffic scheduling policies.
       * - The traffic scheduling feature takes effect only in the outbound direction of an Enterprise Edition transit router.
       *      For example, if you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions and configure the traffic scheduling feature on the transit router in the China (Hangzhou) region, the traffic scheduling feature can guarantee bandwidth for various services when traffic flows from the China (Hangzhou) region to the China (Qingdao) region. However, the traffic scheduling feature does not guarantee service bandwidth when traffic flows from the China (Qingdao) region to the China (Hangzhou) region.
       * - **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a traffic scheduling policy ID but the policy is not yet created. The creation task continues to run in the background. You can call **ListCenInterRegionTrafficQosPolicies** to query the status of the traffic scheduling policy. 
       *     - If the traffic scheduling policy is in the **Creating** state, the policy is being created. In this state, you can only query the policy but cannot perform other operations on it.
       *     - If the traffic scheduling policy is in the **Active** state, the policy is created.
       * ### Before you begin
       * Before you call **CreateCenInterRegionTrafficQosPolicy**, make sure that the following conditions are met:
       * - An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * - A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
       *
       * @param request CreateCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenInterRegionTrafficQosPolicyResponse
       */
      Models::CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicyWithOptions(const Models::CreateCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cross-region traffic scheduling policy for an Enterprise Edition transit router to optimize and control network traffic across regions.
       *
       * @description - Only inter-region connections of Enterprise Edition transit routers support the creation of cross-region traffic scheduling policies.
       * - The traffic scheduling feature takes effect only in the outbound direction of an Enterprise Edition transit router.
       *      For example, if you create an inter-region connection between the China (Hangzhou) and China (Qingdao) regions and configure the traffic scheduling feature on the transit router in the China (Hangzhou) region, the traffic scheduling feature can guarantee bandwidth for various services when traffic flows from the China (Hangzhou) region to the China (Qingdao) region. However, the traffic scheduling feature does not guarantee service bandwidth when traffic flows from the China (Qingdao) region to the China (Hangzhou) region.
       * - **CreateCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a traffic scheduling policy ID but the policy is not yet created. The creation task continues to run in the background. You can call **ListCenInterRegionTrafficQosPolicies** to query the status of the traffic scheduling policy. 
       *     - If the traffic scheduling policy is in the **Creating** state, the policy is being created. In this state, you can only query the policy but cannot perform other operations on it.
       *     - If the traffic scheduling policy is in the **Active** state, the policy is created.
       * ### Before you begin
       * Before you call **CreateCenInterRegionTrafficQosPolicy**, make sure that the following conditions are met:
       * - An inter-region connection is created. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       * - A traffic marking policy is created. For more information, see [CreateTrafficMarkingPolicy](https://help.aliyun.com/document_detail/419025.html).
       *
       * @param request CreateCenInterRegionTrafficQosPolicyRequest
       * @return CreateCenInterRegionTrafficQosPolicyResponse
       */
      Models::CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicy(const Models::CreateCenInterRegionTrafficQosPolicyRequest &request);

      /**
       * @summary Creates a queue configuration under a traffic scheduling policy. If you need to manage different types and priorities of network traffic to ensure the performance of critical service traffic and comply with Service-Level Agreements (SLAs), you can call the CreateCenInterRegionTrafficQosQueue operation.
       *
       * @description **CreateCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a queue ID but the queue is not yet created. The creation task continues to run in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the traffic scheduling policy to determine the creation status of the queue. When you call this operation, you must specify the **TrafficQosPolicyId** parameter.
       *     
       * - If the traffic scheduling policy is in the **Modifying** state, the queue is being created. In this state, you can only query the traffic scheduling policy and queue. You cannot perform other operations.
       * - If the traffic scheduling policy is in the **Active** state, the queue is created.
       *
       * @param request CreateCenInterRegionTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenInterRegionTrafficQosQueueResponse
       */
      Models::CreateCenInterRegionTrafficQosQueueResponse createCenInterRegionTrafficQosQueueWithOptions(const Models::CreateCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a queue configuration under a traffic scheduling policy. If you need to manage different types and priorities of network traffic to ensure the performance of critical service traffic and comply with Service-Level Agreements (SLAs), you can call the CreateCenInterRegionTrafficQosQueue operation.
       *
       * @description **CreateCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a queue ID but the queue is not yet created. The creation task continues to run in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the traffic scheduling policy to determine the creation status of the queue. When you call this operation, you must specify the **TrafficQosPolicyId** parameter.
       *     
       * - If the traffic scheduling policy is in the **Modifying** state, the queue is being created. In this state, you can only query the traffic scheduling policy and queue. You cannot perform other operations.
       * - If the traffic scheduling policy is in the **Active** state, the queue is created.
       *
       * @param request CreateCenInterRegionTrafficQosQueueRequest
       * @return CreateCenInterRegionTrafficQosQueueResponse
       */
      Models::CreateCenInterRegionTrafficQosQueueResponse createCenInterRegionTrafficQosQueue(const Models::CreateCenInterRegionTrafficQosQueueRequest &request);

      /**
       * @summary Creates a routing policy. The routing policy feature allows you to filter route information and customize the management of cloud network connectivity.
       *
       * @description Routing policies are sorted by priority. A smaller priority value indicates a higher priority. Each routing policy is a collection of conditional statements and execution statements. When a routing policy is executed, routes are matched against conditional statements starting from the routing policy with the highest priority. For routes that match all conditions, the routing policy either permits or denies the routes based on the policy action. Routes that are permitted can have their attributes modified. For routes that do not match all conditions, the system permits the routes by default. For more information, see [Routing policy overview](https://help.aliyun.com/document_detail/124157.html).
       * `CreateCenRouteMap` is an asynchronous operation. After you call this operation, a routing policy ID is returned, but the routing policy has not been created. The system continues to create the routing policy in the background. You can call `DescribeCenRouteMaps` to query the status of the routing policy.
       * - If the routing policy is in the **Creating** state, the routing policy is being created. In this state, you can only perform query operations.
       * - If the routing policy is in the **Active** state, the routing policy is created.
       *
       * @param request CreateCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenRouteMapResponse
       */
      Models::CreateCenRouteMapResponse createCenRouteMapWithOptions(const Models::CreateCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing policy. The routing policy feature allows you to filter route information and customize the management of cloud network connectivity.
       *
       * @description Routing policies are sorted by priority. A smaller priority value indicates a higher priority. Each routing policy is a collection of conditional statements and execution statements. When a routing policy is executed, routes are matched against conditional statements starting from the routing policy with the highest priority. For routes that match all conditions, the routing policy either permits or denies the routes based on the policy action. Routes that are permitted can have their attributes modified. For routes that do not match all conditions, the system permits the routes by default. For more information, see [Routing policy overview](https://help.aliyun.com/document_detail/124157.html).
       * `CreateCenRouteMap` is an asynchronous operation. After you call this operation, a routing policy ID is returned, but the routing policy has not been created. The system continues to create the routing policy in the background. You can call `DescribeCenRouteMaps` to query the status of the routing policy.
       * - If the routing policy is in the **Creating** state, the routing policy is being created. In this state, you can only perform query operations.
       * - If the routing policy is in the **Active** state, the routing policy is created.
       *
       * @param request CreateCenRouteMapRequest
       * @return CreateCenRouteMapResponse
       */
      Models::CreateCenRouteMapResponse createCenRouteMap(const Models::CreateCenRouteMapRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @description Flow logs help you catch traffic information transmitted by transit router instances and network instance connections (inter-region connections, VPC connections, VPN connections, ECR connections, and VBR connections). Before creating a flow log, note the following:
       * - Only Enterprise Edition transit routers support flow log creation.
       * - For traffic information of inter-region connections, flow logs catch only outbound traffic of the transit router. Inbound traffic of the transit router is not caught.
       *     
       *     For example, an Elastic Computing Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). After you configure a flow log for the transit router in the US (Virginia) region, you can view the packet information sent from the US (Virginia) ECS instance to the US (Silicon Valley) ECS instance in the Simple Log Service console. However, you cannot view the packet information sent from the US (Silicon Valley) ECS instance to the US (Virginia) ECS instance. To view the packet information sent from the US (Silicon Valley) ECS instance to the US (Virginia) ECS instance, configure a flow log on the transit router in the US (Silicon Valley) region.
       * - When a flow log catches traffic information of a VPC connection, it catches only the traffic transmitted by the transit router elastic network interface (ENI). To view traffic information of other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * - The `CreateFlowlog` operation is asynchronous. After you send a request, the system returns a flow log ID while the flow log is still being created in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       *     - If the flow log is in the **Creating** state, the flow log is being created. In this state, you can only perform query operations.
       *     - If the flow log is in the **Active** state, the flow log is created.
       * ### Before you begin
       * Before creating a flow log for a resource, make sure that you have created the required resources. For information about how to create each resource, see:
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
       * @description Flow logs help you catch traffic information transmitted by transit router instances and network instance connections (inter-region connections, VPC connections, VPN connections, ECR connections, and VBR connections). Before creating a flow log, note the following:
       * - Only Enterprise Edition transit routers support flow log creation.
       * - For traffic information of inter-region connections, flow logs catch only outbound traffic of the transit router. Inbound traffic of the transit router is not caught.
       *     
       *     For example, an Elastic Computing Service (ECS) instance in the US (Silicon Valley) region accesses an ECS instance in the US (Virginia) region through Cloud Enterprise Network (CEN). After you configure a flow log for the transit router in the US (Virginia) region, you can view the packet information sent from the US (Virginia) ECS instance to the US (Silicon Valley) ECS instance in the Simple Log Service console. However, you cannot view the packet information sent from the US (Silicon Valley) ECS instance to the US (Virginia) ECS instance. To view the packet information sent from the US (Silicon Valley) ECS instance to the US (Virginia) ECS instance, configure a flow log on the transit router in the US (Silicon Valley) region.
       * - When a flow log catches traffic information of a VPC connection, it catches only the traffic transmitted by the transit router elastic network interface (ENI). To view traffic information of other ENIs in the VPC, see [VPC flow log overview](https://help.aliyun.com/document_detail/127150.html).
       * - The `CreateFlowlog` operation is asynchronous. After you send a request, the system returns a flow log ID while the flow log is still being created in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       *     - If the flow log is in the **Creating** state, the flow log is being created. In this state, you can only perform query operations.
       *     - If the flow log is in the **Active** state, the flow log is created.
       * ### Before you begin
       * Before creating a flow log for a resource, make sure that you have created the required resources. For information about how to create each resource, see:
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
       * @summary A traffic marking policy captures traffic that matches traffic classification rules and adds a Differentiated Services Code Point (DSCP) value to the traffic as a mark. Creates a traffic marking policy by calling CreateTrafficMarkingPolicy.
       *
       * @description - Only Enterprise Edition transit routers support creating traffic marking policies.
       * - **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID but the traffic marking policy is not yet created. The system continues to create the traffic marking policy in the background. You can call **ListTrafficMarkingPolicies** to query the status of the traffic marking policy. 
       *     - If the traffic marking policy is in the **Creating** state, the traffic marking policy is being created. In this state, you can only query the traffic marking policy but cannot perform other operations.
       *     - If the traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicyWithOptions(const Models::CreateTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A traffic marking policy captures traffic that matches traffic classification rules and adds a Differentiated Services Code Point (DSCP) value to the traffic as a mark. Creates a traffic marking policy by calling CreateTrafficMarkingPolicy.
       *
       * @description - Only Enterprise Edition transit routers support creating traffic marking policies.
       * - **CreateTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a traffic marking policy ID but the traffic marking policy is not yet created. The system continues to create the traffic marking policy in the background. You can call **ListTrafficMarkingPolicies** to query the status of the traffic marking policy. 
       *     - If the traffic marking policy is in the **Creating** state, the traffic marking policy is being created. In this state, you can only query the traffic marking policy but cannot perform other operations.
       *     - If the traffic marking policy is in the **Active** state, the traffic marking policy is created.
       *
       * @param request CreateTrafficMarkingPolicyRequest
       * @return CreateTrafficMarkingPolicyResponse
       */
      Models::CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicy(const Models::CreateTrafficMarkingPolicyRequest &request);

      /**
       * @summary Creates an aggregate route.
       *
       * @description After you add an aggregate route to an Enterprise Edition transit router route table, the Enterprise Edition transit router propagates the aggregate route only to the route tables of VPC-connected instances that are associated with the current Enterprise Edition transit router route table and have route synchronization enabled.
       * Before creating an aggregate route, make sure that the following operations are completed. Otherwise, the Enterprise Edition transit router does not propagate the aggregate route to VPC instance route tables:
       * - The VPC instance is associated with the Enterprise Edition transit router route table. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
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
       * @description After you add an aggregate route to an Enterprise Edition transit router route table, the Enterprise Edition transit router propagates the aggregate route only to the route tables of VPC-connected instances that are associated with the current Enterprise Edition transit router route table and have route synchronization enabled.
       * Before creating an aggregate route, make sure that the following operations are completed. Otherwise, the Enterprise Edition transit router does not propagate the aggregate route to VPC instance route tables:
       * - The VPC instance is associated with the Enterprise Edition transit router route table. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
       * - Route synchronization is enabled for the VPC instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request CreateTransitRouteTableAggregationRequest
       * @return CreateTransitRouteTableAggregationResponse
       */
      Models::CreateTransitRouteTableAggregationResponse createTransitRouteTableAggregation(const Models::CreateTransitRouteTableAggregationRequest &request);

      /**
       * @summary Calls the CreateTransitRouter operation to create an Enterprise Edition transit router instance.
       *
       * @description - You can call the **CreateTransitRouter** operation to create an Enterprise Edition transit router instance. Enterprise Edition transit routers are available only in some regions. For more information about regions, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouter** is an asynchronous operation. After you send a request, the system returns an Enterprise Edition transit router instance ID but the instance is not yet created. The creation task is still running in the background. You can call the [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) operation to query the status of the Enterprise Edition transit router instance.
       *     - If the Enterprise Edition transit router instance is in the **Creating** state, the instance is being created. In this state, you can only query the instance but cannot perform other operations on it.
       *     - If the Enterprise Edition transit router instance is in the **Active** state, the instance is created.
       * - Only one transit router instance can be created in each region within a Cloud Enterprise Network (CEN) instance.
       *
       * @param tmpReq CreateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouterWithOptions(const Models::CreateTransitRouterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateTransitRouter operation to create an Enterprise Edition transit router instance.
       *
       * @description - You can call the **CreateTransitRouter** operation to create an Enterprise Edition transit router instance. Enterprise Edition transit routers are available only in some regions. For more information about regions, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouter** is an asynchronous operation. After you send a request, the system returns an Enterprise Edition transit router instance ID but the instance is not yet created. The creation task is still running in the background. You can call the [ListTransitRouters](https://help.aliyun.com/document_detail/261219.html) operation to query the status of the Enterprise Edition transit router instance.
       *     - If the Enterprise Edition transit router instance is in the **Creating** state, the instance is being created. In this state, you can only query the instance but cannot perform other operations on it.
       *     - If the Enterprise Edition transit router instance is in the **Active** state, the instance is created.
       * - Only one transit router instance can be created in each region within a Cloud Enterprise Network (CEN) instance.
       *
       * @param request CreateTransitRouterRequest
       * @return CreateTransitRouterResponse
       */
      Models::CreateTransitRouterResponse createTransitRouter(const Models::CreateTransitRouterRequest &request);

      /**
       * @summary A transit router CIDR block is a custom CIDR block that you define for a transit router, similar to a CIDR block used to assign IP addresses to a router loopback interface. Calls the CreateTransitRouterCidr operation to create a CIDR block for a transit router.
       *
       * @description A transit router CIDR block is a custom CIDR block that you define for a transit router, similar to a CIDR block used to assign IP addresses to a router loopback interface. Transit router CIDR blocks are used to assign addresses to network instance connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation is used only to add a CIDR block to a transit router after the transit router is created.
       * Before you create a transit router CIDR block, take note of the following information:
       * - Only Enterprise Edition transit routers support transit router CIDR blocks.
       * - For limits on transit router CIDR blocks, see [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A maximum of five CIDR blocks can be configured for a transit router. The subnet mask of each CIDR block must be 16 to 24 bits in length.
       * - CIDR blocks that fall within 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets are not supported.
       * - Each CIDR block cannot conflict with any CIDR block that needs to communicate within the Cloud Enterprise Network (CEN) instance.
       * - Each CIDR block must be unique within the same CEN instance.
       * - After you add a CIDR block to a transit router, the system automatically reserves three CIDR blocks from the CIDR block when you create the first VPN connection on the transit router. The reserved CIDR blocks are used by the system to create VPN connections in the background. The system assigns IP addresses to IPsec connections from the remaining CIDR blocks.
       *     You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query the CIDR blocks that are reserved by the system or from which IP addresses are allocated.
       *
       * @param request CreateTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidrWithOptions(const Models::CreateTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A transit router CIDR block is a custom CIDR block that you define for a transit router, similar to a CIDR block used to assign IP addresses to a router loopback interface. Calls the CreateTransitRouterCidr operation to create a CIDR block for a transit router.
       *
       * @description A transit router CIDR block is a custom CIDR block that you define for a transit router, similar to a CIDR block used to assign IP addresses to a router loopback interface. Transit router CIDR blocks are used to assign addresses to network instance connections. For more information, see [Transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * The **CreateTransitRouterCidr** operation is used only to add a CIDR block to a transit router after the transit router is created.
       * Before you create a transit router CIDR block, take note of the following information:
       * - Only Enterprise Edition transit routers support transit router CIDR blocks.
       * - For limits on transit router CIDR blocks, see [Limits on transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A maximum of five CIDR blocks can be configured for a transit router. The subnet mask of each CIDR block must be 16 to 24 bits in length.
       * - CIDR blocks that fall within 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets are not supported.
       * - Each CIDR block cannot conflict with any CIDR block that needs to communicate within the Cloud Enterprise Network (CEN) instance.
       * - Each CIDR block must be unique within the same CEN instance.
       * - After you add a CIDR block to a transit router, the system automatically reserves three CIDR blocks from the CIDR block when you create the first VPN connection on the transit router. The reserved CIDR blocks are used by the system to create VPN connections in the background. The system assigns IP addresses to IPsec connections from the remaining CIDR blocks.
       *     You can call the [ListTransitRouterCidrAllocation](https://help.aliyun.com/document_detail/464173.html) operation to query the CIDR blocks that are reserved by the system or from which IP addresses are allocated.
       *
       * @param request CreateTransitRouterCidrRequest
       * @return CreateTransitRouterCidrResponse
       */
      Models::CreateTransitRouterCidrResponse createTransitRouterCidr(const Models::CreateTransitRouterCidrRequest &request);

      /**
       * @summary Creates a connection between an Express Connect Router (ECR) instance and a transit router instance in the same region.
       *
       * @description - Only Enterprise Edition transit routers support ECR connections.
       * - You can create an ECR connection on an Enterprise Edition transit router in the following ways: 
       *   - If you have already created an Enterprise Edition transit router instance in the target region, you can create an ECR connection by specifying **EcrId**, **RegionId**, and **TransitRouterId**. 
       *   - If you do not have an Enterprise Edition transit router instance in the target region, you can create an ECR connection by specifying **EcrId**, **CenId**, and **RegionId**. The system performs automatic creation of an Enterprise Edition transit router instance when the ECR connection is created. 
       * - The CreateTransitRouterEcrAttachment operation is asynchronous. After you send a request, the system returns an ECR connection ID but the ECR connection is not yet created. The creation node runs in the background. You can invoke the ListTransitRouterEcrAttachments operation to query the status of the ECR connection. 
       *   - If the ECR connection is in the **Attaching** state, the ECR connection is being created. In this state, you can only execute query operations on the ECR connection but cannot execute other operations on it. 
       *   - If the ECR connection is in the **Attached** state, the ECR connection is created. 
       * - After an ECR connection is created, the ECR connection does not have a routing learning relationship or an associated forwarding relationship with any Enterprise Edition transit router route table by default. 
       *   After the ECR connection establishes a [routing learning relationship](https://help.aliyun.com/document_detail/468300.html) with an Enterprise Edition transit router route table, the system automatically propagates the routes of the ECR instance to the Enterprise Edition transit router route table.
       * - After an ECR connection is created, the system automatically propagates the routes in the Enterprise Edition transit router route table associated with the ECR connection to the route table of the ECR instance.
       * ### Before you begin 
       * - The Alibaba Cloud account that owns the Enterprise Edition transit router and the Alibaba Cloud account that owns the ECR instance must belong to the same enterprise. 
       * - Enterprise Edition transit routers support connections to ECR instances that belong to the same account or a different account. Before creating a cross-account ECR connection, obtain authorization from the cross-account ECR instance. For more information, see [Cross-account authorization for network instances](https://help.aliyun.com/document_detail/181553.html).
       * - **Before invoking this operation to create an ECR connection, invoke the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to associate the ECR instance with the Enterprise Edition transit router instance.**
       *   **When you invoke the DeleteTransitRouterEcrAttachment operation to force delete an ECR connection, the system also deletes the association between the ECR instance and the Enterprise Edition transit router instance. You do not need to delete the association separately.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachmentWithOptions(const Models::CreateTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connection between an Express Connect Router (ECR) instance and a transit router instance in the same region.
       *
       * @description - Only Enterprise Edition transit routers support ECR connections.
       * - You can create an ECR connection on an Enterprise Edition transit router in the following ways: 
       *   - If you have already created an Enterprise Edition transit router instance in the target region, you can create an ECR connection by specifying **EcrId**, **RegionId**, and **TransitRouterId**. 
       *   - If you do not have an Enterprise Edition transit router instance in the target region, you can create an ECR connection by specifying **EcrId**, **CenId**, and **RegionId**. The system performs automatic creation of an Enterprise Edition transit router instance when the ECR connection is created. 
       * - The CreateTransitRouterEcrAttachment operation is asynchronous. After you send a request, the system returns an ECR connection ID but the ECR connection is not yet created. The creation node runs in the background. You can invoke the ListTransitRouterEcrAttachments operation to query the status of the ECR connection. 
       *   - If the ECR connection is in the **Attaching** state, the ECR connection is being created. In this state, you can only execute query operations on the ECR connection but cannot execute other operations on it. 
       *   - If the ECR connection is in the **Attached** state, the ECR connection is created. 
       * - After an ECR connection is created, the ECR connection does not have a routing learning relationship or an associated forwarding relationship with any Enterprise Edition transit router route table by default. 
       *   After the ECR connection establishes a [routing learning relationship](https://help.aliyun.com/document_detail/468300.html) with an Enterprise Edition transit router route table, the system automatically propagates the routes of the ECR instance to the Enterprise Edition transit router route table.
       * - After an ECR connection is created, the system automatically propagates the routes in the Enterprise Edition transit router route table associated with the ECR connection to the route table of the ECR instance.
       * ### Before you begin 
       * - The Alibaba Cloud account that owns the Enterprise Edition transit router and the Alibaba Cloud account that owns the ECR instance must belong to the same enterprise. 
       * - Enterprise Edition transit routers support connections to ECR instances that belong to the same account or a different account. Before creating a cross-account ECR connection, obtain authorization from the cross-account ECR instance. For more information, see [Cross-account authorization for network instances](https://help.aliyun.com/document_detail/181553.html).
       * - **Before invoking this operation to create an ECR connection, invoke the [CreateExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712082.html) operation to associate the ECR instance with the Enterprise Edition transit router instance.**
       *   **When you invoke the DeleteTransitRouterEcrAttachment operation to force delete an ECR connection, the system also deletes the association between the ECR instance and the Enterprise Edition transit router instance. You do not need to delete the association separately.**
       *
       * @param request CreateTransitRouterEcrAttachmentRequest
       * @return CreateTransitRouterEcrAttachmentResponse
       */
      Models::CreateTransitRouterEcrAttachmentResponse createTransitRouterEcrAttachment(const Models::CreateTransitRouterEcrAttachmentRequest &request);

      /**
       * @summary Creates a multicast domain. A multicast domain defines the scope of a multicast network within a region. Only resources within the multicast domain can send and receive multicast traffic. Resources outside the multicast domain cannot send or receive multicast traffic.
       *
       * @description Before you begin:
       * - Make sure that you have created an Enterprise Edition transit router in the region where you want to establish a multicast network and that you have enabled the multicast feature for the Enterprise Edition transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *     If you created an Enterprise Edition transit router instance before applying for multicast resources, the Enterprise Edition transit router instance does not support the multicast feature. You can delete the current Enterprise Edition transit router instance and create a new one. For information about how to delete an Enterprise Edition transit router instance, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * - When you call the **CreateTransitRouterMulticastDomain** operation, if you specify the **CenId** and **RegionId** parameters, you do not need to specify the **TransitRouterId** parameter. If you specify the **TransitRouterId** parameter, you do not need to specify the **CenId** or **RegionId** parameter.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomainWithOptions(const Models::CreateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multicast domain. A multicast domain defines the scope of a multicast network within a region. Only resources within the multicast domain can send and receive multicast traffic. Resources outside the multicast domain cannot send or receive multicast traffic.
       *
       * @description Before you begin:
       * - Make sure that you have created an Enterprise Edition transit router in the region where you want to establish a multicast network and that you have enabled the multicast feature for the Enterprise Edition transit router. For more information, see [CreateTransitRouter](https://help.aliyun.com/document_detail/261169.html).
       *     If you created an Enterprise Edition transit router instance before applying for multicast resources, the Enterprise Edition transit router instance does not support the multicast feature. You can delete the current Enterprise Edition transit router instance and create a new one. For information about how to delete an Enterprise Edition transit router instance, see [DeleteTransitRouter](https://help.aliyun.com/document_detail/261218.html).
       * - When you call the **CreateTransitRouterMulticastDomain** operation, if you specify the **CenId** and **RegionId** parameters, you do not need to specify the **TransitRouterId** parameter. If you specify the **TransitRouterId** parameter, you do not need to specify the **CenId** or **RegionId** parameter.
       *
       * @param request CreateTransitRouterMulticastDomainRequest
       * @return CreateTransitRouterMulticastDomainResponse
       */
      Models::CreateTransitRouterMulticastDomainResponse createTransitRouterMulticastDomain(const Models::CreateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary After network instances (VPCs, VBRs, and IPsec connections) are connected to a transit router, you must create an inter-region connection between transit routers to enable communication between network instances in different regions. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection for an Enterprise Edition transit router instance.
       *
       * @description - Enterprise Edition transit routers support the following two bandwidth allocation methods:
       *   - **Allocate from bandwidth package**:
       *     To use this method, you must first purchase a bandwidth package and allocate bandwidth from the bandwidth package to the inter-region connection. For more information about how to purchase a bandwidth package, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *   - **Pay-by-data-transfer**:
       *     To use this method, you must set a bandwidth limit for the inter-region connection. The system charges you based on the actual traffic of the inter-region connection. For more information about billing, see [Inter-region data transfer](https://help.aliyun.com/document_detail/337827.html).
       * - **CreateTransitRouterPeerAttachment** is an asynchronous operation. After you send a request, the system returns an inter-region connection ID, but the inter-region connection is not yet created. The creation task still runs in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       *   - If the inter-region connection is in the **Attaching** state, the inter-region connection is being created. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       *   - If the inter-region connection is in the **Attached** state, the inter-region connection is created.
       *
       * @param request CreateTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterPeerAttachmentResponse
       */
      Models::CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachmentWithOptions(const Models::CreateTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After network instances (VPCs, VBRs, and IPsec connections) are connected to a transit router, you must create an inter-region connection between transit routers to enable communication between network instances in different regions. You can call the CreateTransitRouterPeerAttachment operation to create an inter-region connection for an Enterprise Edition transit router instance.
       *
       * @description - Enterprise Edition transit routers support the following two bandwidth allocation methods:
       *   - **Allocate from bandwidth package**:
       *     To use this method, you must first purchase a bandwidth package and allocate bandwidth from the bandwidth package to the inter-region connection. For more information about how to purchase a bandwidth package, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html).
       *   - **Pay-by-data-transfer**:
       *     To use this method, you must set a bandwidth limit for the inter-region connection. The system charges you based on the actual traffic of the inter-region connection. For more information about billing, see [Inter-region data transfer](https://help.aliyun.com/document_detail/337827.html).
       * - **CreateTransitRouterPeerAttachment** is an asynchronous operation. After you send a request, the system returns an inter-region connection ID, but the inter-region connection is not yet created. The creation task still runs in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       *   - If the inter-region connection is in the **Attaching** state, the inter-region connection is being created. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       *   - If the inter-region connection is in the **Attached** state, the inter-region connection is created.
       *
       * @param request CreateTransitRouterPeerAttachmentRequest
       * @return CreateTransitRouterPeerAttachmentResponse
       */
      Models::CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachment(const Models::CreateTransitRouterPeerAttachmentRequest &request);

      /**
       * @summary Associates a prefix list with an Enterprise Edition transit router route table.
       *
       * @description Before you associate a prefix list with an Enterprise Edition transit router route table, make sure that the following conditions are met:
       * - You have learned about the limits and routing compatibility information of prefix lists. For more information, see [Prefix lists](https://help.aliyun.com/document_detail/445605.html).
       * - You have created a prefix list. For more information, see [CreateVpcPrefixList](https://help.aliyun.com/document_detail/437367.html).
       * - If you want to associate a cross-account prefix list with an Enterprise Edition transit router route table, make sure that the prefix list has been shared with the Alibaba Cloud account that owns the Enterprise Edition transit router route table. For more information about how to share a prefix list, see [Overview of resource sharing](https://help.aliyun.com/document_detail/160622.html) and [API reference (Resource Sharing)](https://help.aliyun.com/document_detail/193445.html).
       *
       * @param request CreateTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterPrefixListAssociationResponse
       */
      Models::CreateTransitRouterPrefixListAssociationResponse createTransitRouterPrefixListAssociationWithOptions(const Models::CreateTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a prefix list with an Enterprise Edition transit router route table.
       *
       * @description Before you associate a prefix list with an Enterprise Edition transit router route table, make sure that the following conditions are met:
       * - You have learned about the limits and routing compatibility information of prefix lists. For more information, see [Prefix lists](https://help.aliyun.com/document_detail/445605.html).
       * - You have created a prefix list. For more information, see [CreateVpcPrefixList](https://help.aliyun.com/document_detail/437367.html).
       * - If you want to associate a cross-account prefix list with an Enterprise Edition transit router route table, make sure that the prefix list has been shared with the Alibaba Cloud account that owns the Enterprise Edition transit router route table. For more information about how to share a prefix list, see [Overview of resource sharing](https://help.aliyun.com/document_detail/160622.html) and [API reference (Resource Sharing)](https://help.aliyun.com/document_detail/193445.html).
       *
       * @param request CreateTransitRouterPrefixListAssociationRequest
       * @return CreateTransitRouterPrefixListAssociationResponse
       */
      Models::CreateTransitRouterPrefixListAssociationResponse createTransitRouterPrefixListAssociation(const Models::CreateTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Adds a route entry to a route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a route entry ID but the route entry is not yet created. The creation task continues to run in the background. You can call **ListTransitRouterRouteEntries** to query the status of the route entry. 
       * - If the route entry is in the **Creating** state, the route entry is being created. In this state, you can only query the route entry. You cannot perform other operations on the route entry.
       * - If the route entry is in the **Active** state, the route entry is created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntryWithOptions(const Models::CreateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a route entry to a route table of an Enterprise Edition transit router.
       *
       * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a route entry ID but the route entry is not yet created. The creation task continues to run in the background. You can call **ListTransitRouterRouteEntries** to query the status of the route entry. 
       * - If the route entry is in the **Creating** state, the route entry is being created. In this state, you can only query the route entry. You cannot perform other operations on the route entry.
       * - If the route entry is in the **Active** state, the route entry is created.
       *
       * @param request CreateTransitRouterRouteEntryRequest
       * @return CreateTransitRouterRouteEntryResponse
       */
      Models::CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntry(const Models::CreateTransitRouterRouteEntryRequest &request);

      /**
       * @summary Creates a custom route table for an Enterprise Edition transit router by calling the CreateTransitRouterRouteTable operation.
       *
       * @description - Only Enterprise Edition transit routers support custom route tables. For information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a route table ID but the route table is not yet created. The system continues to create the route table in the background. You can call **ListTransitRouterRouteTables** to query the status of the route table.
       *     - If the route table is in the **Creating** state, the route table is being created. In this state, you can only perform query operations.
       *     - If the route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTableWithOptions(const Models::CreateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route table for an Enterprise Edition transit router by calling the CreateTransitRouterRouteTable operation.
       *
       * @description - Only Enterprise Edition transit routers support custom route tables. For information about the regions and zones that support Enterprise Edition transit routers, see [What is CEN?](https://help.aliyun.com/document_detail/181681.html).
       * - **CreateTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a route table ID but the route table is not yet created. The system continues to create the route table in the background. You can call **ListTransitRouterRouteTables** to query the status of the route table.
       *     - If the route table is in the **Creating** state, the route table is being created. In this state, you can only perform query operations.
       *     - If the route table is in the **Active** state, the route table is created.
       *
       * @param request CreateTransitRouterRouteTableRequest
       * @return CreateTransitRouterRouteTableResponse
       */
      Models::CreateTransitRouterRouteTableResponse createTransitRouterRouteTable(const Models::CreateTransitRouterRouteTableRequest &request);

      /**
       * @summary Invokes the CreateTransitRouterVbrAttachment operation to connect a Virtual Border Router (VBR) network instance to a transit router instance in the same region. After the connection is established, the transit router can help you achieve private network peering.
       *
       * @description - For information about the regions and zones supported by Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - You can create a VBR connection on an Enterprise Edition transit router in the following ways:
       *     - If you have already created an Enterprise Edition transit router instance in the target region, you can create a VBR connection by specifying **VbrId**, **RegionId**, and **TransitRouterId**.
       *     - If you do not have an Enterprise Edition transit router instance in the target region, you can create a VBR connection by specifying **VbrId**, **CenId**, and **RegionId**. The system automatically creates an Enterprise Edition transit router instance when the VBR connection is created.
       * - **CreateTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a VBR connection ID but the VBR connection is not yet created. The creation task runs in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection.
       *     - If the VBR connection is in the **Attaching** state, the VBR connection is being created. In this state, you can only query the VBR connection and cannot perform other operations.
       *     - If the VBR connection is in the **Attached** state, the VBR connection is created.
       * - The Alibaba Cloud account that owns the transit router and the Alibaba Cloud account that owns the VBR instance must belong to the same enterprise.
       * - Transit routers support connecting to VBR instances that belong to the same account or a different account. Before creating a cross-account VBR connection, obtain authorization from the VBR instance owner. For more information, see [Grant permissions for cross-account network instances](https://help.aliyun.com/document_detail/181553.html).
       * - After a VBR connection is created, the VBR connection does not establish route learning or association forwarding relationships with any transit router route table by default.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachmentWithOptions(const Models::CreateTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateTransitRouterVbrAttachment operation to connect a Virtual Border Router (VBR) network instance to a transit router instance in the same region. After the connection is established, the transit router can help you achieve private network peering.
       *
       * @description - For information about the regions and zones supported by Enterprise Edition transit routers, see [What is Cloud Enterprise Network?](https://help.aliyun.com/document_detail/181681.html).
       * - You can create a VBR connection on an Enterprise Edition transit router in the following ways:
       *     - If you have already created an Enterprise Edition transit router instance in the target region, you can create a VBR connection by specifying **VbrId**, **RegionId**, and **TransitRouterId**.
       *     - If you do not have an Enterprise Edition transit router instance in the target region, you can create a VBR connection by specifying **VbrId**, **CenId**, and **RegionId**. The system automatically creates an Enterprise Edition transit router instance when the VBR connection is created.
       * - **CreateTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a VBR connection ID but the VBR connection is not yet created. The creation task runs in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection.
       *     - If the VBR connection is in the **Attaching** state, the VBR connection is being created. In this state, you can only query the VBR connection and cannot perform other operations.
       *     - If the VBR connection is in the **Attached** state, the VBR connection is created.
       * - The Alibaba Cloud account that owns the transit router and the Alibaba Cloud account that owns the VBR instance must belong to the same enterprise.
       * - Transit routers support connecting to VBR instances that belong to the same account or a different account. Before creating a cross-account VBR connection, obtain authorization from the VBR instance owner. For more information, see [Grant permissions for cross-account network instances](https://help.aliyun.com/document_detail/181553.html).
       * - After a VBR connection is created, the VBR connection does not establish route learning or association forwarding relationships with any transit router route table by default.
       *
       * @param request CreateTransitRouterVbrAttachmentRequest
       * @return CreateTransitRouterVbrAttachmentResponse
       */
      Models::CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachment(const Models::CreateTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Calls the CreateTransitRouterVpcAttachment operation to connect a Virtual Private Cloud (VPC) instance to a transit router instance for private network peering. After the connection is established, the transit router instance can help you achieve private network peering.
       *
       * @description - You can create a VPC connection on an Enterprise Edition transit router in the following two ways:
       *     - If you have already created an Enterprise Edition transit router instance in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId**.
       *     - If you do not have an Enterprise Edition transit router instance in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId**. The system performs automatic creation of an Enterprise Edition transit router instance when the VPC connection is created.
       * - The **CreateTransitRouterVpcAttachment** operation is asynchronous. After you send a request, the system returns a VPC connection ID, but the VPC connection is not yet created. The creation node is still running in the background. You can invoke the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of the VPC connection.
       *     - If the VPC connection is in the **Attaching** state, the VPC connection is being created. In this state, you can only execute query operations on the VPC connection but cannot execute other operations.
       *     - If the VPC connection is in the **Attached** state, the VPC connection is created.
       * - After a VPC connection is created, the VPC connection does not establish routing learning or associate forwarding relationships with any transit router routing table by default.
       * ### Before you begin
       * Before you call this operation to create a VPC connection, make sure that the following conditions are met:
       * - The VPC instance has at least one vSwitch instance in a zone supported by the Enterprise Edition transit router, and the vSwitch instance has at least one idle IP address. For information about the regions and zones supported by Enterprise Edition transit routers, see [Regions and zones supported by Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * - If you want to connect a cross-account VPC-connected instance, obtain the cross-account VPC-connected instance authorization first. For more information, see [Cross-account VPC-connected instance authorization](https://help.aliyun.com/document_detail/181553.html).
       * - Fees are incurred after a VPC connection is created. Make sure that you understand the billing rules. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param tmpReq CreateTransitRouterVpcAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachmentWithOptions(const Models::CreateTransitRouterVpcAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateTransitRouterVpcAttachment operation to connect a Virtual Private Cloud (VPC) instance to a transit router instance for private network peering. After the connection is established, the transit router instance can help you achieve private network peering.
       *
       * @description - You can create a VPC connection on an Enterprise Edition transit router in the following two ways:
       *     - If you have already created an Enterprise Edition transit router instance in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **TransitRouterId**, and **RegionId**.
       *     - If you do not have an Enterprise Edition transit router instance in the target region, you can create a VPC connection by specifying **VpcId**, **ZoneMappings.N.VSwitchId**, **ZoneMappings.N.ZoneId**, **CenId**, and **RegionId**. The system performs automatic creation of an Enterprise Edition transit router instance when the VPC connection is created.
       * - The **CreateTransitRouterVpcAttachment** operation is asynchronous. After you send a request, the system returns a VPC connection ID, but the VPC connection is not yet created. The creation node is still running in the background. You can invoke the [ListTransitRouterVpcAttachments](https://help.aliyun.com/document_detail/261222.html) operation to query the status of the VPC connection.
       *     - If the VPC connection is in the **Attaching** state, the VPC connection is being created. In this state, you can only execute query operations on the VPC connection but cannot execute other operations.
       *     - If the VPC connection is in the **Attached** state, the VPC connection is created.
       * - After a VPC connection is created, the VPC connection does not establish routing learning or associate forwarding relationships with any transit router routing table by default.
       * ### Before you begin
       * Before you call this operation to create a VPC connection, make sure that the following conditions are met:
       * - The VPC instance has at least one vSwitch instance in a zone supported by the Enterprise Edition transit router, and the vSwitch instance has at least one idle IP address. For information about the regions and zones supported by Enterprise Edition transit routers, see [Regions and zones supported by Enterprise Edition transit routers](https://help.aliyun.com/document_detail/181681.html).
       * - If you want to connect a cross-account VPC-connected instance, obtain the cross-account VPC-connected instance authorization first. For more information, see [Cross-account VPC-connected instance authorization](https://help.aliyun.com/document_detail/181553.html).
       * - Fees are incurred after a VPC connection is created. Make sure that you understand the billing rules. For more information, see [Billing](https://help.aliyun.com/document_detail/189836.html).
       *
       * @param request CreateTransitRouterVpcAttachmentRequest
       * @return CreateTransitRouterVpcAttachmentResponse
       */
      Models::CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachment(const Models::CreateTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary Transit routers support connections to IPsec connections of VPN gateways. An on-premises data center can directly connect to a transit router through an IPsec connection, and then communicate with other networks through the transit router. Calls the CreateTransitRouterVpnAttachment operation to create a VPN connection.
       *
       * @description - After a VPN connection is created, the VPN connection does not establish route learning or association forwarding relationships with any transit router route table by default.
       * - When you call the `CreateTransitRouterVpnAttachment` operation, if you specify values for the **CenId** and **RegionId** parameters, you do not need to specify the **TransitRouterId** parameter. If you specify values for the **TransitRouterId** and **RegionId** parameters, you do not need to specify the **CenId** parameter.
       * ### Before you begin
       * - Before you create a VPN connection, make sure that you have created an IPsec connection in the region where the transit router instance resides and that the IPsec connection is not bindeded to any resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * - If the transit router instance needs to connect to an IPsec connection that belongs to a different Alibaba Cloud account, make sure that the IPsec connection has been authorized to the transit router instance. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       * - Before you create a VPN connection, make sure that you have configured the TR CIDR block for the transit router. For more information, see [CreateTransitRouterCidr](https://help.aliyun.com/document_detail/468230.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachmentWithOptions(const Models::CreateTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transit routers support connections to IPsec connections of VPN gateways. An on-premises data center can directly connect to a transit router through an IPsec connection, and then communicate with other networks through the transit router. Calls the CreateTransitRouterVpnAttachment operation to create a VPN connection.
       *
       * @description - After a VPN connection is created, the VPN connection does not establish route learning or association forwarding relationships with any transit router route table by default.
       * - When you call the `CreateTransitRouterVpnAttachment` operation, if you specify values for the **CenId** and **RegionId** parameters, you do not need to specify the **TransitRouterId** parameter. If you specify values for the **TransitRouterId** and **RegionId** parameters, you do not need to specify the **CenId** parameter.
       * ### Before you begin
       * - Before you create a VPN connection, make sure that you have created an IPsec connection in the region where the transit router instance resides and that the IPsec connection is not bindeded to any resource. For more information, see [CreateVpnAttachment](https://help.aliyun.com/document_detail/442455.html).
       * - If the transit router instance needs to connect to an IPsec connection that belongs to a different Alibaba Cloud account, make sure that the IPsec connection has been authorized to the transit router instance. For more information, see [GrantInstanceToTransitRouter](https://help.aliyun.com/document_detail/417520.html).
       * - Before you create a VPN connection, make sure that you have configured the TR CIDR block for the transit router. For more information, see [CreateTransitRouterCidr](https://help.aliyun.com/document_detail/468230.html).
       *
       * @param request CreateTransitRouterVpnAttachmentRequest
       * @return CreateTransitRouterVpnAttachmentResponse
       */
      Models::CreateTransitRouterVpnAttachmentResponse createTransitRouterVpnAttachment(const Models::CreateTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary Deactivates a flow log. After the flow log is deactivated, traffic of the specified resource is no longer captured.
       *
       * @description The `DeactiveFlowLog` operation is asynchronous. After you send a request, the system returns a **RequestId** but the flow log is not completely deactivated. The deactivation task continues to run in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Modifying** state, the flow log is being deactivated. In this state, you can only perform query operations.
       * - If the flow log is in the **Inactive** state, the flow log is deactivated.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivates a flow log. After the flow log is deactivated, traffic of the specified resource is no longer captured.
       *
       * @description The `DeactiveFlowLog` operation is asynchronous. After you send a request, the system returns a **RequestId** but the flow log is not completely deactivated. The deactivation task continues to run in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Modifying** state, the flow log is being deactivated. In this state, you can only perform query operations.
       * - If the flow log is in the **Inactive** state, the flow log is deactivated.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes a Cloud Enterprise Network (CEN) instance.
       *
       * @description **DeleteCen** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance is not yet deleted. The deletion task continues to run in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this state, you can only query the CEN instance. You cannot perform other operations on it.
       * - If the CEN instance cannot be found, the CEN instance is deleted.
       * ### Before you begin
       * Before you delete a CEN instance, make sure that no bandwidth plans exist under the CEN instance, and that no network instance connections or custom route tables exist under the transit routers of the CEN instance:
       * - To delete network instance connections, see:
       *     - [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *     - [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *     - [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *     - [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *     > To delete network instance connections under a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * - To delete custom route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - To disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenResponse
       */
      Models::DeleteCenResponse deleteCenWithOptions(const Models::DeleteCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Enterprise Network (CEN) instance.
       *
       * @description **DeleteCen** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance is not yet deleted. The deletion task continues to run in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Deleting** state, the CEN instance is being deleted. In this state, you can only query the CEN instance. You cannot perform other operations on it.
       * - If the CEN instance cannot be found, the CEN instance is deleted.
       * ### Before you begin
       * Before you delete a CEN instance, make sure that no bandwidth plans exist under the CEN instance, and that no network instance connections or custom route tables exist under the transit routers of the CEN instance:
       * - To delete network instance connections, see:
       *     - [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html)
       *     - [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html)
       *     - [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html)
       *     - [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html)
       *     > To delete network instance connections under a Basic Edition transit router, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       * - To delete custom route tables of an Enterprise Edition transit router, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - To disassociate a bandwidth plan from a CEN instance, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenRequest
       * @return DeleteCenResponse
       */
      Models::DeleteCenResponse deleteCen(const Models::DeleteCenRequest &request);

      /**
       * @summary Deletes a bandwidth plan instance by calling the DeleteCenBandwidthPackage operation.
       *
       * @description <props="china">
       * - Before you delete a bandwidth plan instance, make sure that the bandwidth plan instance is disassociated from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       * - To delete a bandwidth plan instance whose billing method is PREPAY (subscription), go to the [Order Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe. If you have questions about unsubscription, see [Unsubscription rules](https://www.alibabacloud.com/help/en/user-center/user-guide/unsubscription-rules#p-1qo-3ce-m7z). This operation does not support deleting subscription bandwidth plan instances.
       * <props="intl">
       * Before you delete a bandwidth plan instance, make sure that the bandwidth plan instance is disassociated from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackageWithOptions(const Models::DeleteCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bandwidth plan instance by calling the DeleteCenBandwidthPackage operation.
       *
       * @description <props="china">
       * - Before you delete a bandwidth plan instance, make sure that the bandwidth plan instance is disassociated from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       * - To delete a bandwidth plan instance whose billing method is PREPAY (subscription), go to the [Order Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe. If you have questions about unsubscription, see [Unsubscription rules](https://www.alibabacloud.com/help/en/user-center/user-guide/unsubscription-rules#p-1qo-3ce-m7z). This operation does not support deleting subscription bandwidth plan instances.
       * <props="intl">
       * Before you delete a bandwidth plan instance, make sure that the bandwidth plan instance is disassociated from the Cloud Enterprise Network (CEN) instance. For more information, see [UnassociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65935.html).
       *
       * @param request DeleteCenBandwidthPackageRequest
       * @return DeleteCenBandwidthPackageResponse
       */
      Models::DeleteCenBandwidthPackageResponse deleteCenBandwidthPackage(const Models::DeleteCenBandwidthPackageRequest &request);

      /**
       * @summary Deletes a route entry from a network instance connected to an Enterprise Edition transit router.
       *
       * @description - Only route entries whose next hop is a **transit router connection** (network instance connection) in Virtual Private Cloud (VPC) instances and Virtual Border Router (VBR) instances can be deleted.
       * - **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet deleted. The deletion task runs in the background. You can call the **DescribeRouteEntryList** operation of VPC to query the status of the route entry. 
       *     - If the route entry is in the **Deleting** state, the route entry is being deleted. In this state, you can only query the route entry but cannot perform other operations on it.
       *     - If the specified route entry cannot be found, the route entry is deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachmentWithOptions(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route entry from a network instance connected to an Enterprise Edition transit router.
       *
       * @description - Only route entries whose next hop is a **transit router connection** (network instance connection) in Virtual Private Cloud (VPC) instances and Virtual Border Router (VBR) instances can be deleted.
       * - **DeleteCenChildInstanceRouteEntryToAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet deleted. The deletion task runs in the background. You can call the **DescribeRouteEntryList** operation of VPC to query the status of the route entry. 
       *     - If the route entry is in the **Deleting** state, the route entry is being deleted. In this state, you can only query the route entry but cannot perform other operations on it.
       *     - If the specified route entry cannot be found, the route entry is deleted.
       *
       * @param request DeleteCenChildInstanceRouteEntryToAttachmentRequest
       * @return DeleteCenChildInstanceRouteEntryToAttachmentResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachment(const Models::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request);

      /**
       * @summary Deletes a route entry from a network instance by calling the DeleteCenChildInstanceRouteEntryToCen operation.
       *
       * @description - The DeleteCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - The DeleteCenChildInstanceRouteEntryToCen operation does not support deleting route entries from network instances attached to an Enterprise Edition transit router.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCenWithOptions(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route entry from a network instance by calling the DeleteCenChildInstanceRouteEntryToCen operation.
       *
       * @description - The DeleteCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * - The DeleteCenChildInstanceRouteEntryToCen operation does not support deleting route entries from network instances attached to an Enterprise Edition transit router.
       *
       * @param request DeleteCenChildInstanceRouteEntryToCenRequest
       * @return DeleteCenChildInstanceRouteEntryToCenResponse
       */
      Models::DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCen(const Models::DeleteCenChildInstanceRouteEntryToCenRequest &request);

      /**
       * @summary Deletes a traffic scheduling policy by calling the DeleteCenInterRegionTrafficQosPolicy operation.
       *
       * @description - Before you delete a traffic scheduling policy, you must delete all queues except the default queue from the traffic scheduling policy. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * - **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic scheduling policy is not yet deleted. The deletion task runs in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the traffic scheduling policy. 
       *     - If the traffic scheduling policy is in the **Deleting** state, the traffic scheduling policy is being deleted. In this state, you can only query the traffic scheduling policy but cannot perform other operations on it.
       *     - If the traffic scheduling policy cannot be found, the traffic scheduling policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicyWithOptions(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic scheduling policy by calling the DeleteCenInterRegionTrafficQosPolicy operation.
       *
       * @description - Before you delete a traffic scheduling policy, you must delete all queues except the default queue from the traffic scheduling policy. For more information, see [DeleteCenInterRegionTrafficQosQueue](https://help.aliyun.com/document_detail/419062.html).
       * - **DeleteCenInterRegionTrafficQosPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic scheduling policy is not yet deleted. The deletion task runs in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the traffic scheduling policy. 
       *     - If the traffic scheduling policy is in the **Deleting** state, the traffic scheduling policy is being deleted. In this state, you can only query the traffic scheduling policy but cannot perform other operations on it.
       *     - If the traffic scheduling policy cannot be found, the traffic scheduling policy is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosPolicyRequest
       * @return DeleteCenInterRegionTrafficQosPolicyResponse
       */
      Models::DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicy(const Models::DeleteCenInterRegionTrafficQosPolicyRequest &request);

      /**
       * @summary Deletes a queue from a traffic scheduling policy by calling the DeleteCenInterRegionTrafficQosQueue operation.
       *
       * @description - The default queue cannot be deleted.
       * - **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the queue is not yet deleted because the deletion task is still running in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the queue information. If the specified queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueueWithOptions(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a queue from a traffic scheduling policy by calling the DeleteCenInterRegionTrafficQosQueue operation.
       *
       * @description - The default queue cannot be deleted.
       * - **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the queue is not yet deleted because the deletion task is still running in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the queue information. If the specified queue cannot be found, the queue is deleted.
       *
       * @param request DeleteCenInterRegionTrafficQosQueueRequest
       * @return DeleteCenInterRegionTrafficQosQueueResponse
       */
      Models::DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueue(const Models::DeleteCenInterRegionTrafficQosQueueRequest &request);

      /**
       * @summary Deletes a specified routing policy.
       *
       * @description DeleteCenRouteMap is an asynchronous operation. After you send a request, the system returns a **RequestId** but the routing policy is not yet fully deleted because the deletion task is still running in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If the routing policy is in the **Deleting** state, the routing policy is being deleted. In this state, you can only perform query operations.
       * - If the routing policy cannot be found by calling the `DescribeCenRouteMaps` operation, the routing policy is fully deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMapWithOptions(const Models::DeleteCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified routing policy.
       *
       * @description DeleteCenRouteMap is an asynchronous operation. After you send a request, the system returns a **RequestId** but the routing policy is not yet fully deleted because the deletion task is still running in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If the routing policy is in the **Deleting** state, the routing policy is being deleted. In this state, you can only perform query operations.
       * - If the routing policy cannot be found by calling the `DescribeCenRouteMaps` operation, the routing policy is fully deleted.
       *
       * @param request DeleteCenRouteMapRequest
       * @return DeleteCenRouteMapResponse
       */
      Models::DeleteCenRouteMapResponse deleteCenRouteMap(const Models::DeleteCenRouteMapRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @description The `DeleteFlowlog` operation is asynchronous. After you send a request, the system returns a **RequestId** but the flow log is not completely deleted. The deletion task continues to run in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Deleting** state, the flow log is being deleted. In this state, you can only perform query operations but cannot perform other operations.
       * - If the `DescribeFlowlogs` operation cannot find the flow log, the flow log is completely deleted.
       *
       * @param request DeleteFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlogWithOptions(const Models::DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @description The `DeleteFlowlog` operation is asynchronous. After you send a request, the system returns a **RequestId** but the flow log is not completely deleted. The deletion task continues to run in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Deleting** state, the flow log is being deleted. In this state, you can only perform query operations but cannot perform other operations.
       * - If the `DescribeFlowlogs` operation cannot find the flow log, the flow log is completely deleted.
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
       * @summary Deletes a traffic marking policy.
       *
       * @description - **DeleteTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic marking policy is not yet deleted. The deletion task continues to run in the background. You can call **ListTrafficMarkingPolicies** to query the status of the traffic marking policy. 
       *     - If the traffic marking policy is in the **Deleting** state, the traffic marking policy is being deleted. In this state, you can only query the traffic marking policy but cannot perform other operations on it.
       *     - If the specified traffic marking policy cannot be found, the traffic marking policy is deleted.
       * - Before you delete a traffic marking policy, delete all traffic classification rules from the traffic marking policy. For more information, see [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468330.html).
       *
       * @param request DeleteTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficMarkingPolicyResponse
       */
      Models::DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicyWithOptions(const Models::DeleteTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a traffic marking policy.
       *
       * @description - **DeleteTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the traffic marking policy is not yet deleted. The deletion task continues to run in the background. You can call **ListTrafficMarkingPolicies** to query the status of the traffic marking policy. 
       *     - If the traffic marking policy is in the **Deleting** state, the traffic marking policy is being deleted. In this state, you can only query the traffic marking policy but cannot perform other operations on it.
       *     - If the specified traffic marking policy cannot be found, the traffic marking policy is deleted.
       * - Before you delete a traffic marking policy, delete all traffic classification rules from the traffic marking policy. For more information, see [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468330.html).
       *
       * @param request DeleteTrafficMarkingPolicyRequest
       * @return DeleteTrafficMarkingPolicyResponse
       */
      Models::DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicy(const Models::DeleteTrafficMarkingPolicyRequest &request);

      /**
       * @summary Deletes an aggregate route.
       *
       * @description - Before you delete an aggregate route, make sure that redundant routes exist in the current network. Otherwise, service breaks may occur.
       * - After you delete an aggregate route, the system automatically withdraws the aggregate routing that has been propagated to Virtual Private Cloud (VPC)-connected instances and re-propagates the specific routes within the destination CIDR block of the aggregation route to the VPC-connected instances.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregationWithOptions(const Models::DeleteTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an aggregate route.
       *
       * @description - Before you delete an aggregate route, make sure that redundant routes exist in the current network. Otherwise, service breaks may occur.
       * - After you delete an aggregate route, the system automatically withdraws the aggregate routing that has been propagated to Virtual Private Cloud (VPC)-connected instances and re-propagates the specific routes within the destination CIDR block of the aggregation route to the VPC-connected instances.
       *
       * @param request DeleteTransitRouteTableAggregationRequest
       * @return DeleteTransitRouteTableAggregationResponse
       */
      Models::DeleteTransitRouteTableAggregationResponse deleteTransitRouteTableAggregation(const Models::DeleteTransitRouteTableAggregationRequest &request);

      /**
       * @summary Calls the DeleteTransitRouter operation to delete an Enterprise Edition transit router instance.
       *
       * @description **DeleteTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the transit router instance is not yet deleted. The deletion task continues to run in the background. You can call the **ListTransitRouters** operation to query the status of the transit router instance. 
       * - If the transit router instance is in the **Deleting** state, the transit router instance is being deleted. In this state, you can only query the transit router instance. You cannot perform other operations on the transit router instance.
       * - If the transit router instance cannot be found, the transit router instance is deleted.
       * ### Before you begin
       * Before you delete a transit router instance, make sure that the following conditions are met:
       * - No connections exist on the transit router instance.
       *     - To delete a Virtual Private Cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       *     - To delete an Express Connect Router (ECR) connection, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715447.html).
       *     - To delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *     - To delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *     - To delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
       *     - To delete a Virtual Border Router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - No custom route tables exist on the transit router instance. For more information, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - No custom route entries, route prefixes, or aggregate routes exist in the default route table of the transit router instance. For more information, see
       *     - To delete custom route entries of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/468291.html).
       *     - To disassociate a prefix list, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/468312.html).
       *     - To delete an aggregate route, see [DeleteTransitRouteTableAggregation](https://help.aliyun.com/document_detail/476070.html).
       * - No multicast domains exist on the transit router instance. To delete a multicast domain, see [DeleteTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/468386.html).
       * - No traffic marking policies exist on the transit router instance. To delete a traffic marking policy, see [DeleteTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468324.html).
       *
       * @param request DeleteTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterResponse
       */
      Models::DeleteTransitRouterResponse deleteTransitRouterWithOptions(const Models::DeleteTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteTransitRouter operation to delete an Enterprise Edition transit router instance.
       *
       * @description **DeleteTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the transit router instance is not yet deleted. The deletion task continues to run in the background. You can call the **ListTransitRouters** operation to query the status of the transit router instance. 
       * - If the transit router instance is in the **Deleting** state, the transit router instance is being deleted. In this state, you can only query the transit router instance. You cannot perform other operations on the transit router instance.
       * - If the transit router instance cannot be found, the transit router instance is deleted.
       * ### Before you begin
       * Before you delete a transit router instance, make sure that the following conditions are met:
       * - No connections exist on the transit router instance.
       *     - To delete a Virtual Private Cloud (VPC) connection, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       *     - To delete an Express Connect Router (ECR) connection, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/2715447.html).
       *     - To delete a Cloud Connect Network (CCN) connection, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *     - To delete a VPN connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       *     - To delete an inter-region connection, see [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
       *     - To delete a Virtual Border Router (VBR) connection, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - No custom route tables exist on the transit router instance. For more information, see [DeleteTransitRouterRouteTable](https://help.aliyun.com/document_detail/261235.html).
       * - No custom route entries, route prefixes, or aggregate routes exist in the default route table of the transit router instance. For more information, see
       *     - To delete custom route entries of an Enterprise Edition transit router, see [DeleteTransitRouterRouteEntry](https://help.aliyun.com/document_detail/468291.html).
       *     - To disassociate a prefix list, see [DeleteTransitRouterPrefixListAssociation](https://help.aliyun.com/document_detail/468312.html).
       *     - To delete an aggregate route, see [DeleteTransitRouteTableAggregation](https://help.aliyun.com/document_detail/476070.html).
       * - No multicast domains exist on the transit router instance. To delete a multicast domain, see [DeleteTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/468386.html).
       * - No traffic marking policies exist on the transit router instance. To delete a traffic marking policy, see [DeleteTrafficMarkingPolicy](https://help.aliyun.com/document_detail/468324.html).
       *
       * @param request DeleteTransitRouterRequest
       * @return DeleteTransitRouterResponse
       */
      Models::DeleteTransitRouterResponse deleteTransitRouter(const Models::DeleteTransitRouterRequest &request);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description A transit router CIDR block that has allocated IP addresses cannot be deleted.
       *
       * @param request DeleteTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterCidrResponse
       */
      Models::DeleteTransitRouterCidrResponse deleteTransitRouterCidrWithOptions(const Models::DeleteTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CIDR block from a transit router.
       *
       * @description A transit router CIDR block that has allocated IP addresses cannot be deleted.
       *
       * @param request DeleteTransitRouterCidrRequest
       * @return DeleteTransitRouterCidrResponse
       */
      Models::DeleteTransitRouterCidrResponse deleteTransitRouterCidr(const Models::DeleteTransitRouterCidrRequest &request);

      /**
       * @summary Deletes an Express Connect Router (ECR) connection from an Enterprise Edition transit router.
       *
       * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After you call this operation, the system returns a RequestId, but the ECR connection is not immediately deleted. The deletion task runs in the background. You can call the [ListTransitRouterEcrAttachments](~~2361China~~) operation to query the status of the ECR connection.
       * If the ECR connection is in the **Detaching** state, the ECR connection is being deleted. In this state, you can only query the ECR connection but cannot perform other operations on it.
       * If the specified ECR connection cannot be found, the ECR connection is deleted.
       * When you call the DeleteTransitRouterEcrAttachment operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the ECR connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterEcrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterEcrAttachmentResponse
       */
      Models::DeleteTransitRouterEcrAttachmentResponse deleteTransitRouterEcrAttachmentWithOptions(const Models::DeleteTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect Router (ECR) connection from an Enterprise Edition transit router.
       *
       * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After you call this operation, the system returns a RequestId, but the ECR connection is not immediately deleted. The deletion task runs in the background. You can call the [ListTransitRouterEcrAttachments](~~2361China~~) operation to query the status of the ECR connection.
       * If the ECR connection is in the **Detaching** state, the ECR connection is being deleted. In this state, you can only query the ECR connection but cannot perform other operations on it.
       * If the specified ECR connection cannot be found, the ECR connection is deleted.
       * When you call the DeleteTransitRouterEcrAttachment operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the ECR connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterEcrAttachmentRequest
       * @return DeleteTransitRouterEcrAttachmentResponse
       */
      Models::DeleteTransitRouterEcrAttachmentResponse deleteTransitRouterEcrAttachment(const Models::DeleteTransitRouterEcrAttachmentRequest &request);

      /**
       * @summary Deletes a multicast domain by calling the DeleteTransitRouterMulticastDomain operation.
       *
       * @description Before you delete a multicast domain, make sure that the following conditions are met:
       * - The multicast domain is not associated with any vSwitches. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - No multicast sources or multicast members exist in the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - The multicast domain is not associated with other multicast domains as a multicast member. You can delete the multicast member from other multicast domains to dissociate the other multicast domains from the current multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - Make sure that the parameter values you specify are valid when you call this operation. If you specify invalid parameter values, the system still returns a RequestId but does not delete the multicast domain.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomainWithOptions(const Models::DeleteTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multicast domain by calling the DeleteTransitRouterMulticastDomain operation.
       *
       * @description Before you delete a multicast domain, make sure that the following conditions are met:
       * - The multicast domain is not associated with any vSwitches. For more information, see [DisassociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429774.html).
       * - No multicast sources or multicast members exist in the multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/429776.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - The multicast domain is not associated with other multicast domains as a multicast member. You can delete the multicast member from other multicast domains to dissociate the other multicast domains from the current multicast domain. For more information, see [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/429779.html).
       * - Make sure that the parameter values you specify are valid when you call this operation. If you specify invalid parameter values, the system still returns a RequestId but does not delete the multicast domain.
       *
       * @param request DeleteTransitRouterMulticastDomainRequest
       * @return DeleteTransitRouterMulticastDomainResponse
       */
      Models::DeleteTransitRouterMulticastDomainResponse deleteTransitRouterMulticastDomain(const Models::DeleteTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Calls the DeleteTransitRouterPeerAttachment operation to delete an inter-region connection from an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterPeerAttachment** operation is asynchronous. After you send a request, the system returns a **RequestId** but the inter-region connection is not immediately deleted. The deletion task continues to run in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       * - If the inter-region connection is in the **Detaching** state, the inter-region connection is being deleted. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       * - If the specified inter-region connection cannot be found, the inter-region connection is deleted.
       * When calling the **DeleteTransitRouterPeerAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the inter-region connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterPeerAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterPeerAttachmentResponse
       */
      Models::DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachmentWithOptions(const Models::DeleteTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteTransitRouterPeerAttachment operation to delete an inter-region connection from an Enterprise Edition transit router.
       *
       * @description The **DeleteTransitRouterPeerAttachment** operation is asynchronous. After you send a request, the system returns a **RequestId** but the inter-region connection is not immediately deleted. The deletion task continues to run in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of the inter-region connection.
       * - If the inter-region connection is in the **Detaching** state, the inter-region connection is being deleted. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       * - If the specified inter-region connection cannot be found, the inter-region connection is deleted.
       * When calling the **DeleteTransitRouterPeerAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the inter-region connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterPeerAttachmentRequest
       * @return DeleteTransitRouterPeerAttachmentResponse
       */
      Models::DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachment(const Models::DeleteTransitRouterPeerAttachmentRequest &request);

      /**
       * @summary Dissociates a prefix list from an Enterprise Edition transit router route table.
       *
       * @description >Warning: After a prefix list is dissociated from an Enterprise Edition transit router route table, the system automatically withdraws all route entries related to the prefix list from the Enterprise Edition transit router route table. Before dissociating the prefix list, make sure that redundant routes exist in the Enterprise Edition transit router route table. Otherwise, network interruptions may occur.
       *
       * @param request DeleteTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterPrefixListAssociationResponse
       */
      Models::DeleteTransitRouterPrefixListAssociationResponse deleteTransitRouterPrefixListAssociationWithOptions(const Models::DeleteTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a prefix list from an Enterprise Edition transit router route table.
       *
       * @description >Warning: After a prefix list is dissociated from an Enterprise Edition transit router route table, the system automatically withdraws all route entries related to the prefix list from the Enterprise Edition transit router route table. Before dissociating the prefix list, make sure that redundant routes exist in the Enterprise Edition transit router route table. Otherwise, network interruptions may occur.
       *
       * @param request DeleteTransitRouterPrefixListAssociationRequest
       * @return DeleteTransitRouterPrefixListAssociationResponse
       */
      Models::DeleteTransitRouterPrefixListAssociationResponse deleteTransitRouterPrefixListAssociation(const Models::DeleteTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Calls the DeleteTransitRouterRouteEntry operation to delete static route entries of the blackhole or connection instance type from an Enterprise Edition transit router forward route table.
       *
       * @description Before you call this operation to delete a route entry, take note of the following information:
       * - If you specify **TransitRouterRouteEntryId** to delete a route entry, you do not need to specify **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock**. Otherwise, a parameter conflict error occurs.
       * - If you do not specify **TransitRouterRouteEntryId** to delete a route entry, specify the corresponding parameters based on the next hop type of the route entry:
       *     - To delete a blackhole route, specify **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType**.
       *     - To delete a non-blackhole route, specify **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId**.
       * - **DeleteTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet deleted. The deletion task runs in the background. You can call **ListTransitRouterRouteEntries** to query the status of the route entry. 
       *     - If the route entry is in the **Deleting** state, the route entry is being deleted. In this state, you can only query the route entry but cannot perform other operations on it.
       *     - If the route entry cannot be found, the route entry is deleted.
       * ### Limits
       * This operation can delete only static route entries. Automatically learned route entries cannot be deleted. You can call [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) to query the type of a route entry.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntryWithOptions(const Models::DeleteTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteTransitRouterRouteEntry operation to delete static route entries of the blackhole or connection instance type from an Enterprise Edition transit router forward route table.
       *
       * @description Before you call this operation to delete a route entry, take note of the following information:
       * - If you specify **TransitRouterRouteEntryId** to delete a route entry, you do not need to specify **TransitRouterRouteTableId** or **TransitRouterRouteEntryDestinationCidrBlock**. Otherwise, a parameter conflict error occurs.
       * - If you do not specify **TransitRouterRouteEntryId** to delete a route entry, specify the corresponding parameters based on the next hop type of the route entry:
       *     - To delete a blackhole route, specify **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, and **TransitRouterRouteEntryNextHopType**.
       *     - To delete a non-blackhole route, specify **TransitRouterRouteTableId**, **TransitRouterRouteEntryDestinationCidrBlock**, **TransitRouterRouteEntryNextHopType**, and **TransitRouterRouteEntryNextHopId**.
       * - **DeleteTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the route entry is not yet deleted. The deletion task runs in the background. You can call **ListTransitRouterRouteEntries** to query the status of the route entry. 
       *     - If the route entry is in the **Deleting** state, the route entry is being deleted. In this state, you can only query the route entry but cannot perform other operations on it.
       *     - If the route entry cannot be found, the route entry is deleted.
       * ### Limits
       * This operation can delete only static route entries. Automatically learned route entries cannot be deleted. You can call [ListTransitRouterRouteEntries](https://help.aliyun.com/document_detail/260941.html) to query the type of a route entry.
       *
       * @param request DeleteTransitRouterRouteEntryRequest
       * @return DeleteTransitRouterRouteEntryResponse
       */
      Models::DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntry(const Models::DeleteTransitRouterRouteEntryRequest &request);

      /**
       * @summary Deletes a custom route table from an Enterprise Edition transit router by calling the DeleteTransitRouterRouteTable operation.
       *
       * @description - The default route table of an Enterprise Edition transit router cannot be deleted.
       * - **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the custom route table is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterRouteTables** to query the status of the custom route table. 
       *     - If the custom route table is in the Deleting state, the custom route table is being deleted. In this state, you can only query the custom route table but cannot perform other operations on it.
       *     - If the custom route table cannot be found, the custom route table is deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTableWithOptions(const Models::DeleteTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom route table from an Enterprise Edition transit router by calling the DeleteTransitRouterRouteTable operation.
       *
       * @description - The default route table of an Enterprise Edition transit router cannot be deleted.
       * - **DeleteTransitRouterRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the custom route table is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterRouteTables** to query the status of the custom route table. 
       *     - If the custom route table is in the Deleting state, the custom route table is being deleted. In this state, you can only query the custom route table but cannot perform other operations on it.
       *     - If the custom route table cannot be found, the custom route table is deleted.
       *
       * @param request DeleteTransitRouterRouteTableRequest
       * @return DeleteTransitRouterRouteTableResponse
       */
      Models::DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTable(const Models::DeleteTransitRouterRouteTableRequest &request);

      /**
       * @summary Deletes a virtual border router (VBR) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VBR connection is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection. 
       * - If the VBR connection is in the **Detaching** state, the VBR connection is being deleted. In this state, you can only query the VBR connection but cannot perform other operations on it.
       * - If the specified VBR connection cannot be found, the VBR connection is deleted.
       * When calling the DeleteTransitRouterVbrAttachment operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the VBR connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachmentWithOptions(const Models::DeleteTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual border router (VBR) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVbrAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VBR connection is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection. 
       * - If the VBR connection is in the **Detaching** state, the VBR connection is being deleted. In this state, you can only query the VBR connection but cannot perform other operations on it.
       * - If the specified VBR connection cannot be found, the VBR connection is deleted.
       * When calling the DeleteTransitRouterVbrAttachment operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the VBR connection from the Enterprise Edition transit router.
       *
       * @param request DeleteTransitRouterVbrAttachmentRequest
       * @return DeleteTransitRouterVbrAttachmentResponse
       */
      Models::DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachment(const Models::DeleteTransitRouterVbrAttachmentRequest &request);

      /**
       * @summary Calls the DeleteTransitRouterVpcAttachment operation to delete a virtual private cloud (VPC) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VPC connection is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterVpcAttachments** to query the status of the VPC connection. 
       * - If the VPC connection is in the **Detaching** state, the VPC connection is being deleted. In this state, you can only query the VPC connection. You cannot perform other operations on the VPC connection.
       * - If the VPC connection cannot be found, the VPC connection is deleted.
       * When you call **DeleteTransitRouterVpcAttachment**, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the system still returns a **RequestId** but does not delete the VPC connection from the Enterprise Edition transit router.
       * ### Before you begin
       * Before you delete a VPC connection, make sure that you have not configured a routing rule to access PrivateZone by using the VPC-connected instance. To delete the routing rule to PrivateZone, see [UnroutePrivateZoneInCenToVpc](https://help.aliyun.com/document_detail/468375.html).
       *
       * @param request DeleteTransitRouterVpcAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVpcAttachmentResponse
       */
      Models::DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachmentWithOptions(const Models::DeleteTransitRouterVpcAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteTransitRouterVpcAttachment operation to delete a virtual private cloud (VPC) connection from an Enterprise Edition transit router.
       *
       * @description **DeleteTransitRouterVpcAttachment** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VPC connection is not yet deleted. The deletion task continues to run in the background. You can call **ListTransitRouterVpcAttachments** to query the status of the VPC connection. 
       * - If the VPC connection is in the **Detaching** state, the VPC connection is being deleted. In this state, you can only query the VPC connection. You cannot perform other operations on the VPC connection.
       * - If the VPC connection cannot be found, the VPC connection is deleted.
       * When you call **DeleteTransitRouterVpcAttachment**, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the system still returns a **RequestId** but does not delete the VPC connection from the Enterprise Edition transit router.
       * ### Before you begin
       * Before you delete a VPC connection, make sure that you have not configured a routing rule to access PrivateZone by using the VPC-connected instance. To delete the routing rule to PrivateZone, see [UnroutePrivateZoneInCenToVpc](https://help.aliyun.com/document_detail/468375.html).
       *
       * @param request DeleteTransitRouterVpcAttachmentRequest
       * @return DeleteTransitRouterVpcAttachmentResponse
       */
      Models::DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachment(const Models::DeleteTransitRouterVpcAttachmentRequest &request);

      /**
       * @summary Deletes a VPN connection by calling the DeleteTransitRouterVpnAttachment operation.
       *
       * @description When you call the **DeleteTransitRouterVpnAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the VPN connection.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachmentWithOptions(const Models::DeleteTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPN connection by calling the DeleteTransitRouterVpnAttachment operation.
       *
       * @description When you call the **DeleteTransitRouterVpnAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the VPN connection.
       *
       * @param request DeleteTransitRouterVpnAttachmentRequest
       * @return DeleteTransitRouterVpnAttachmentResponse
       */
      Models::DeleteTransitRouterVpnAttachmentResponse deleteTransitRouterVpnAttachment(const Models::DeleteTransitRouterVpnAttachmentRequest &request);

      /**
       * @summary Removes a multicast member from a multicast group if the member no longer needs to receive multicast traffic by calling the DeregisterTransitRouterMulticastGroupMembers operation.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the multicast member is not immediately removed. The removal task continues to run in the background. You can call `ListTransitRouterMulticastGroups` to query the status of the multicast member.
       * - If the multicast member is in the **Deregistering** state, the multicast member is being removed. In this state, you can only query the multicast member but cannot perform other operations on it.
       * - If the multicast member cannot be found in the multicast domain when you call the `ListTransitRouterMulticastGroups` operation, the multicast member has been removed.
       * When you call the DeregisterTransitRouterMulticastGroupMembers operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not remove the multicast member.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembersWithOptions(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a multicast member from a multicast group if the member no longer needs to receive multicast traffic by calling the DeregisterTransitRouterMulticastGroupMembers operation.
       *
       * @description `DeregisterTransitRouterMulticastGroupMembers` is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the multicast member is not immediately removed. The removal task continues to run in the background. You can call `ListTransitRouterMulticastGroups` to query the status of the multicast member.
       * - If the multicast member is in the **Deregistering** state, the multicast member is being removed. In this state, you can only query the multicast member but cannot perform other operations on it.
       * - If the multicast member cannot be found in the multicast domain when you call the `ListTransitRouterMulticastGroups` operation, the multicast member has been removed.
       * When you call the DeregisterTransitRouterMulticastGroupMembers operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not remove the multicast member.
       *
       * @param request DeregisterTransitRouterMulticastGroupMembersRequest
       * @return DeregisterTransitRouterMulticastGroupMembersResponse
       */
      Models::DeregisterTransitRouterMulticastGroupMembersResponse deregisterTransitRouterMulticastGroupMembers(const Models::DeregisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary Removes a multicast source from a multicast group if you no longer need the multicast source to send multicast traffic.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the multicast source is not immediately deleted. The deletion task continues to run in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source.
       * - If the multicast source is in the **Deregistering** state, the multicast source is being deleted. In this state, you can only query the multicast source but cannot perform other operations on it.
       * - If the `ListTransitRouterMulticastGroups` operation cannot find the multicast source in the multicast domain, the multicast source has been deleted.
       * When you call the DeregisterTransitRouterMulticastGroupSources operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the multicast source.
       *
       * @param request DeregisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::DeregisterTransitRouterMulticastGroupSourcesResponse deregisterTransitRouterMulticastGroupSourcesWithOptions(const Models::DeregisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a multicast source from a multicast group if you no longer need the multicast source to send multicast traffic.
       *
       * @description `DeregisterTransitRouterMulticastGroupSources` is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the multicast source is not immediately deleted. The deletion task continues to run in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source.
       * - If the multicast source is in the **Deregistering** state, the multicast source is being deleted. In this state, you can only query the multicast source but cannot perform other operations on it.
       * - If the `ListTransitRouterMulticastGroups` operation cannot find the multicast source in the multicast domain, the multicast source has been deleted.
       * When you call the DeregisterTransitRouterMulticastGroupSources operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not delete the multicast source.
       *
       * @param request DeregisterTransitRouterMulticastGroupSourcesRequest
       * @return DeregisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::DeregisterTransitRouterMulticastGroupSourcesResponse deregisterTransitRouterMulticastGroupSources(const Models::DeregisterTransitRouterMulticastGroupSourcesRequest &request);

      /**
       * @summary Queries the details of a network instance (VPC, VBR, or CCN) attached to a Cloud Enterprise Network (CEN) instance, including the attachment status and network instance type.
       *
       * @param request DescribeCenAttachedChildInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenAttachedChildInstanceAttributeResponse
       */
      Models::DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttributeWithOptions(const Models::DescribeCenAttachedChildInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a network instance (VPC, VBR, or CCN) attached to a Cloud Enterprise Network (CEN) instance, including the attachment status and network instance type.
       *
       * @param request DescribeCenAttachedChildInstanceAttributeRequest
       * @return DescribeCenAttachedChildInstanceAttributeResponse
       */
      Models::DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttribute(const Models::DescribeCenAttachedChildInstanceAttributeRequest &request);

      /**
       * @summary Queries information about network instances attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can use this operation to query network instances attached to a CEN instance in the following ways:
       * - Specify `CenId` to query all network instances attached to the CEN instance.
       * - Specify `CenId` and `ChildInstanceRegionId` to query network instances attached to the CEN instance in a specific region.
       * - Specify `CenId` and `ChildInstanceType` to query network instances of a specific type attached to the CEN instance.
       *
       * @param request DescribeCenAttachedChildInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenAttachedChildInstancesResponse
       */
      Models::DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstancesWithOptions(const Models::DescribeCenAttachedChildInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about network instances attached to a Cloud Enterprise Network (CEN) instance.
       *
       * @description You can use this operation to query network instances attached to a CEN instance in the following ways:
       * - Specify `CenId` to query all network instances attached to the CEN instance.
       * - Specify `CenId` and `ChildInstanceRegionId` to query network instances attached to the CEN instance in a specific region.
       * - Specify `CenId` and `ChildInstanceType` to query network instances of a specific type attached to the CEN instance.
       *
       * @param request DescribeCenAttachedChildInstancesRequest
       * @return DescribeCenAttachedChildInstancesResponse
       */
      Models::DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstances(const Models::DescribeCenAttachedChildInstancesRequest &request);

      /**
       * @summary Queries information about bandwidth package instances by calling the DescribeCenBandwidthPackages operation.
       *
       * @param request DescribeCenBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenBandwidthPackagesResponse
       */
      Models::DescribeCenBandwidthPackagesResponse describeCenBandwidthPackagesWithOptions(const Models::DescribeCenBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about bandwidth package instances by calling the DescribeCenBandwidthPackages operation.
       *
       * @param request DescribeCenBandwidthPackagesRequest
       * @return DescribeCenBandwidthPackagesResponse
       */
      Models::DescribeCenBandwidthPackagesResponse describeCenBandwidthPackages(const Models::DescribeCenBandwidthPackagesRequest &request);

      /**
       * @summary Invokes the DescribeCenChildInstanceRouteEntries operation to query the route entries of a network instance in a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenChildInstanceRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenChildInstanceRouteEntriesResponse
       */
      Models::DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntriesWithOptions(const Models::DescribeCenChildInstanceRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeCenChildInstanceRouteEntries operation to query the route entries of a network instance in a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenChildInstanceRouteEntriesRequest
       * @return DescribeCenChildInstanceRouteEntriesResponse
       */
      Models::DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntries(const Models::DescribeCenChildInstanceRouteEntriesRequest &request);

      /**
       * @summary Queries the remaining bandwidth of a specified bandwidth plan instance.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidthWithOptions(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining bandwidth of a specified bandwidth plan instance.
       *
       * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
       * @return DescribeCenGeographicSpanRemainingBandwidthResponse
       */
      Models::DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidth(const Models::DescribeCenGeographicSpanRemainingBandwidthRequest &request);

      /**
       * @summary Queries information about connected areas supported by Cloud Enterprise Network (CEN) by calling the DescribeCenGeographicSpans operation.
       *
       * @param request DescribeCenGeographicSpansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpansWithOptions(const Models::DescribeCenGeographicSpansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about connected areas supported by Cloud Enterprise Network (CEN) by calling the DescribeCenGeographicSpans operation.
       *
       * @param request DescribeCenGeographicSpansRequest
       * @return DescribeCenGeographicSpansResponse
       */
      Models::DescribeCenGeographicSpansResponse describeCenGeographicSpans(const Models::DescribeCenGeographicSpansRequest &request);

      /**
       * @summary Queries the inter-region bandwidth information between regions by calling the DescribeCenInterRegionBandwidthLimits operation.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimitsWithOptions(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the inter-region bandwidth information between regions by calling the DescribeCenInterRegionBandwidthLimits operation.
       *
       * @param request DescribeCenInterRegionBandwidthLimitsRequest
       * @return DescribeCenInterRegionBandwidthLimitsResponse
       */
      Models::DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimits(const Models::DescribeCenInterRegionBandwidthLimitsRequest &request);

      /**
       * @summary Queries the PrivateZone service configuration of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutesWithOptions(const Models::DescribeCenPrivateZoneRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PrivateZone service configuration of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenPrivateZoneRoutesRequest
       * @return DescribeCenPrivateZoneRoutesResponse
       */
      Models::DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutes(const Models::DescribeCenPrivateZoneRoutesRequest &request);

      /**
       * @summary Queries the details of route entries in a specific region of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntriesWithOptions(const Models::DescribeCenRegionDomainRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of route entries in a specific region of a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribeCenRegionDomainRouteEntriesRequest
       * @return DescribeCenRegionDomainRouteEntriesResponse
       */
      Models::DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntries(const Models::DescribeCenRegionDomainRouteEntriesRequest &request);

      /**
       * @summary Queries the configured information in route maps by calling the DescribeCenRouteMaps operation.
       *
       * @param request DescribeCenRouteMapsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMapsWithOptions(const Models::DescribeCenRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configured information in route maps by calling the DescribeCenRouteMaps operation.
       *
       * @param request DescribeCenRouteMapsRequest
       * @return DescribeCenRouteMapsResponse
       */
      Models::DescribeCenRouteMapsResponse describeCenRouteMaps(const Models::DescribeCenRouteMapsRequest &request);

      /**
       * @summary Queries health check information about virtual border routers (VBRs) in a specified region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheckWithOptions(const Models::DescribeCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries health check information about virtual border routers (VBRs) in a specified region.
       *
       * @param request DescribeCenVbrHealthCheckRequest
       * @return DescribeCenVbrHealthCheckResponse
       */
      Models::DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheck(const Models::DescribeCenVbrHealthCheckRequest &request);

      /**
       * @summary Queries information about Cloud Enterprise Network (CEN) instances under the current Alibaba Cloud account, including the instance status, whether IPv6 is enabled, and the list of bandwidth packages associated with the instances.
       *
       * @param request DescribeCensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCensWithOptions(const Models::DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Cloud Enterprise Network (CEN) instances under the current Alibaba Cloud account, including the instance status, whether IPv6 is enabled, and the list of bandwidth packages associated with the instances.
       *
       * @param request DescribeCensRequest
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCens(const Models::DescribeCensRequest &request);

      /**
       * @summary Queries the regions that support network instances loaded to Cloud Enterprise Network (CEN).
       *
       * @description CEN supports different regions for different network instance types. You can specify the ProductType parameter to query the regions supported by CEN for a specific network instance type. If you do not specify the ProductType parameter, the system queries the regions supported by CEN for all network instance types by default.
       *
       * @param request DescribeChildInstanceRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChildInstanceRegionsResponse
       */
      Models::DescribeChildInstanceRegionsResponse describeChildInstanceRegionsWithOptions(const Models::DescribeChildInstanceRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that support network instances loaded to Cloud Enterprise Network (CEN).
       *
       * @description CEN supports different regions for different network instance types. You can specify the ProductType parameter to query the regions supported by CEN for a specific network instance type. If you do not specify the ProductType parameter, the system queries the regions supported by CEN for all network instance types by default.
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
       * @summary Queries region information within a specified area.
       *
       * @param request DescribeGeographicRegionMembershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGeographicRegionMembershipResponse
       */
      Models::DescribeGeographicRegionMembershipResponse describeGeographicRegionMembershipWithOptions(const Models::DescribeGeographicRegionMembershipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries region information within a specified area.
       *
       * @param request DescribeGeographicRegionMembershipRequest
       * @return DescribeGeographicRegionMembershipResponse
       */
      Models::DescribeGeographicRegionMembershipResponse describeGeographicRegionMembership(const Models::DescribeGeographicRegionMembershipRequest &request);

      /**
       * @summary Queries information about cross-account network instances that are authorized to be associated with a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the **DescribeGrantRulesToCen** operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, a **RequestId** is still returned, but information about the cross-account network instances authorized to the CEN instance is not returned.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(const Models::DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about cross-account network instances that are authorized to be associated with a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the **DescribeGrantRulesToCen** operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, a **RequestId** is still returned, but information about the cross-account network instances authorized to the CEN instance is not returned.
       *
       * @param request DescribeGrantRulesToCenRequest
       * @return DescribeGrantRulesToCenResponse
       */
      Models::DescribeGrantRulesToCenResponse describeGrantRulesToCen(const Models::DescribeGrantRulesToCenRequest &request);

      /**
       * @summary Queries the authorization information of a network instance for a cross-account Cloud Enterprise Network (CEN) instance, including the Alibaba Cloud account ID of the CEN instance owner and the payer of the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResourceWithOptions(const Models::DescribeGrantRulesToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information of a network instance for a cross-account Cloud Enterprise Network (CEN) instance, including the Alibaba Cloud account ID of the CEN instance owner and the payer of the network instance.
       *
       * @param request DescribeGrantRulesToResourceRequest
       * @return DescribeGrantRulesToResourceResponse
       */
      Models::DescribeGrantRulesToResourceResponse describeGrantRulesToResource(const Models::DescribeGrantRulesToResourceRequest &request);

      /**
       * @summary Queries the publish status, next hop associated instance type, and whether publishing or withdrawing is allowed for route entries of network instances (VPCs and VBRs) that are loaded into a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntriesWithOptions(const Models::DescribePublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the publish status, next hop associated instance type, and whether publishing or withdrawing is allowed for route entries of network instances (VPCs and VBRs) that are loaded into a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DescribePublishedRouteEntriesRequest
       * @return DescribePublishedRouteEntriesResponse
       */
      Models::DescribePublishedRouteEntriesResponse describePublishedRouteEntries(const Models::DescribePublishedRouteEntriesRequest &request);

      /**
       * @summary Queries information about conflicting route entries in a network instance.
       *
       * @param request DescribeRouteConflictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflictWithOptions(const Models::DescribeRouteConflictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about conflicting route entries in a network instance.
       *
       * @param request DescribeRouteConflictRequest
       * @return DescribeRouteConflictResponse
       */
      Models::DescribeRouteConflictResponse describeRouteConflict(const Models::DescribeRouteConflictRequest &request);

      /**
       * @summary Queries the cloud service configurations under a Basic Edition transit router by calling the DescribeRouteServicesInCen operation.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCenWithOptions(const Models::DescribeRouteServicesInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud service configurations under a Basic Edition transit router by calling the DescribeRouteServicesInCen operation.
       *
       * @param request DescribeRouteServicesInCenRequest
       * @return DescribeRouteServicesInCenResponse
       */
      Models::DescribeRouteServicesInCenResponse describeRouteServicesInCen(const Models::DescribeRouteServicesInCenRequest &request);

      /**
       * @summary Queries aggregate routes in an Enterprise Edition transit router route table.
       *
       * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query information about a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, the system queries information about all aggregate routes in the specified Enterprise Edition transit router route table.
       *
       * @param request DescribeTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouteTableAggregationResponse
       */
      Models::DescribeTransitRouteTableAggregationResponse describeTransitRouteTableAggregationWithOptions(const Models::DescribeTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries aggregate routes in an Enterprise Edition transit router route table.
       *
       * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query information about a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, the system queries information about all aggregate routes in the specified Enterprise Edition transit router route table.
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
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
       *
       * @description The **DetachCenChildInstance** operation supports detaching only network instances from a Basic Edition transit router.
       *
       * @param request DetachCenChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCenChildInstanceResponse
       */
      Models::DetachCenChildInstanceResponse detachCenChildInstanceWithOptions(const Models::DetachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
       *
       * @description The **DetachCenChildInstance** operation supports detaching only network instances from a Basic Edition transit router.
       *
       * @param request DetachCenChildInstanceRequest
       * @return DetachCenChildInstanceResponse
       */
      Models::DetachCenChildInstanceResponse detachCenChildInstance(const Models::DetachCenChildInstanceRequest &request);

      /**
       * @summary Disables health checks for a specified virtual border router (VBR).
       *
       * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you call this operation, the system returns a **RequestId**, but the health check configuration has not been deleted. The deletion task continues to run in the background. You can call **DescribeCenVbrHealthCheck** to query the health check configuration. If the specified health check configuration is not found, the deletion is complete.
       *
       * @param request DisableCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCenVbrHealthCheckResponse
       */
      Models::DisableCenVbrHealthCheckResponse disableCenVbrHealthCheckWithOptions(const Models::DisableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables health checks for a specified virtual border router (VBR).
       *
       * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you call this operation, the system returns a **RequestId**, but the health check configuration has not been deleted. The deletion task continues to run in the background. You can call **DescribeCenVbrHealthCheck** to query the health check configuration. If the specified health check configuration is not found, the deletion is complete.
       *
       * @param request DisableCenVbrHealthCheckRequest
       * @return DisableCenVbrHealthCheckResponse
       */
      Models::DisableCenVbrHealthCheckResponse disableCenVbrHealthCheck(const Models::DisableCenVbrHealthCheckRequest &request);

      /**
       * @summary Disables route learning between a network instance connection and a transit router route table.
       *
       * @description **DisableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **RequestId** before the route learning relationship between the network instance connection and the route table is fully removed. The removal task continues to run in the background. You can call **ListTransitRouterRouteTablePropagations** to query the route learning relationship between the network instance connection and the route table. 
       * - If the route learning relationship is in the **Disabling** state, the network instance connection and the route table are being disassociated. In this state, you can only query the route learning relationship. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return the route learning relationship between the network instance connection and the route table, the route learning relationship is successfully removed.
       *
       * @param request DisableTransitRouterRouteTablePropagationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableTransitRouterRouteTablePropagationResponse
       */
      Models::DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagationWithOptions(const Models::DisableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables route learning between a network instance connection and a transit router route table.
       *
       * @description **DisableTransitRouterRouteTablePropagation** is an asynchronous operation. After you send a request, the system returns a **RequestId** before the route learning relationship between the network instance connection and the route table is fully removed. The removal task continues to run in the background. You can call **ListTransitRouterRouteTablePropagations** to query the route learning relationship between the network instance connection and the route table. 
       * - If the route learning relationship is in the **Disabling** state, the network instance connection and the route table are being disassociated. In this state, you can only query the route learning relationship. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return the route learning relationship between the network instance connection and the route table, the route learning relationship is successfully removed.
       *
       * @param request DisableTransitRouterRouteTablePropagationRequest
       * @return DisableTransitRouterRouteTablePropagationResponse
       */
      Models::DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagation(const Models::DisableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Disassociates a vSwitch from a multicast domain.
       *
       * @description - Before dissociating a vSwitch from a multicast domain, make sure that no multicast sources or multicast members exist under the vSwitch. To delete multicast sources and multicast members, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * - If you specify invalid parameters, the system still returns a RequestId but does not dissociate the vSwitch from the multicast domain.
       * - **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After you invoke this operation, the system returns a **RequestId** but the dissociation has not yet completed. The dissociation node continues to run in the background. You can invoke **ListTransitRouterMulticastDomainAssociations** to query the associate status between the vSwitch and the multicast domain.
       *     - If the associate status is **Dissociating**, the vSwitch is being dissociated from the multicast domain. In this state, you can only execute query operations on the vSwitch but cannot execute other operations.
       *     - If the vSwitch information cannot be found under the multicast domain, the vSwitch has been successfully dissociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomainWithOptions(const Models::DisassociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a vSwitch from a multicast domain.
       *
       * @description - Before dissociating a vSwitch from a multicast domain, make sure that no multicast sources or multicast members exist under the vSwitch. To delete multicast sources and multicast members, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
       * - If you specify invalid parameters, the system still returns a RequestId but does not dissociate the vSwitch from the multicast domain.
       * - **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After you invoke this operation, the system returns a **RequestId** but the dissociation has not yet completed. The dissociation node continues to run in the background. You can invoke **ListTransitRouterMulticastDomainAssociations** to query the associate status between the vSwitch and the multicast domain.
       *     - If the associate status is **Dissociating**, the vSwitch is being dissociated from the multicast domain. In this state, you can only execute query operations on the vSwitch but cannot execute other operations.
       *     - If the vSwitch information cannot be found under the multicast domain, the vSwitch has been successfully dissociated from the multicast domain.
       *
       * @param request DisassociateTransitRouterMulticastDomainRequest
       * @return DisassociateTransitRouterMulticastDomainResponse
       */
      Models::DisassociateTransitRouterMulticastDomainResponse disassociateTransitRouterMulticastDomain(const Models::DisassociateTransitRouterMulticastDomainRequest &request);

      /**
       * @summary Dissociates a network instance connection from a route table.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the dissociation between the network instance connection and the route table is not complete. The dissociation task continues to run in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association status between the network instance connection and the route table. 
       * - If the association status is **Dissociating**, the network instance connection is being dissociated from the route table. In this state, you can only query the forwarding association between the network instance connection and the route table. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return the forwarding association between the network instance connection and the route table, the dissociation is successful.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTableWithOptions(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a network instance connection from a route table.
       *
       * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the dissociation between the network instance connection and the route table is not complete. The dissociation task continues to run in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association status between the network instance connection and the route table. 
       * - If the association status is **Dissociating**, the network instance connection is being dissociated from the route table. In this state, you can only query the forwarding association between the network instance connection and the route table. You cannot perform other operations.
       * - If the **ListTransitRouterRouteTableAssociations** operation does not return the forwarding association between the network instance connection and the route table, the dissociation is successful.
       *
       * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
       * @return DissociateTransitRouterAttachmentFromRouteTableResponse
       */
      Models::DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTable(const Models::DissociateTransitRouterAttachmentFromRouteTableRequest &request);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) to detect faults on physical Express Connect circuits in a timely manner. You can also use this operation to modify the health check configuration of a VBR.
       *
       * @description You can configure health checks for a VBR instance to monitor the connectivity of the physical Express Connect circuit between your on-premises data center and Alibaba Cloud, so that issues can be detected promptly.
       * Before using the health check feature, note the following information:
       * - If your VBR instance uses static routing, after you configure the health check, you must add a static route entry in the on-premises data center connected to the VBR instance.
       *     The destination CIDR block of the static route is the source IP address of the health check with a 32-bit subnet mask, and the next hop is the Alibaba Cloud-side IP address of the VBR instance.
       * - If your border router instance uses the BGP dynamic routing protocol, you do not need to add a route entry in the on-premises data center.
       * - The **EnableCenVbrHealthCheck** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the health check instance is not yet created or modified. The creation or modification task continues to run in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the health check configuration. If the health check configuration is returned, the health check has been created or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheckWithOptions(const Models::EnableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the health check feature for a virtual border router (VBR) to detect faults on physical Express Connect circuits in a timely manner. You can also use this operation to modify the health check configuration of a VBR.
       *
       * @description You can configure health checks for a VBR instance to monitor the connectivity of the physical Express Connect circuit between your on-premises data center and Alibaba Cloud, so that issues can be detected promptly.
       * Before using the health check feature, note the following information:
       * - If your VBR instance uses static routing, after you configure the health check, you must add a static route entry in the on-premises data center connected to the VBR instance.
       *     The destination CIDR block of the static route is the source IP address of the health check with a 32-bit subnet mask, and the next hop is the Alibaba Cloud-side IP address of the VBR instance.
       * - If your border router instance uses the BGP dynamic routing protocol, you do not need to add a route entry in the on-premises data center.
       * - The **EnableCenVbrHealthCheck** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the health check instance is not yet created or modified. The creation or modification task continues to run in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the health check configuration. If the health check configuration is returned, the health check has been created or modified.
       *
       * @param request EnableCenVbrHealthCheckRequest
       * @return EnableCenVbrHealthCheckResponse
       */
      Models::EnableCenVbrHealthCheckResponse enableCenVbrHealthCheck(const Models::EnableCenVbrHealthCheckRequest &request);

      /**
       * @summary Creates a route learning relationship.
       *
       * @description After you create a network instance connection, you can set up a route learning relationship for it. Once configured, the network instance connection automatically propagates routes from the network instance to its associated route table. Before calling this operation to create a route learning relationship, note the following information:
       * - Only Enterprise Edition transit routers support creating route learning relationships. For information about the regions and zones supported by Enterprise Edition transit routers, see [What is Cloud Enterprise Network (CEN)?](https://help.aliyun.com/document_detail/181681.html).
       * - The **EnableTransitRouterRouteTablePropagation** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the route learning relationship between the network instance connection and the route table is not fully established. The creation task is still running in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning relationship between the network instance connection and the route table.
       *     - If the route learning relationship is in the **Enabling** state, the route learning relationship between the network instance connection and the route table is being established. In this state, you can only query the route learning relationship. You cannot perform other operations.
       *     - If the route learning relationship is in the **Active** state, the route learning relationship between the network instance connection and the route table is established.
       *
       * @param request EnableTransitRouterRouteTablePropagationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableTransitRouterRouteTablePropagationResponse
       */
      Models::EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagationWithOptions(const Models::EnableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route learning relationship.
       *
       * @description After you create a network instance connection, you can set up a route learning relationship for it. Once configured, the network instance connection automatically propagates routes from the network instance to its associated route table. Before calling this operation to create a route learning relationship, note the following information:
       * - Only Enterprise Edition transit routers support creating route learning relationships. For information about the regions and zones supported by Enterprise Edition transit routers, see [What is Cloud Enterprise Network (CEN)?](https://help.aliyun.com/document_detail/181681.html).
       * - The **EnableTransitRouterRouteTablePropagation** operation is asynchronous. After you send a request, the system returns a **RequestId**, but the route learning relationship between the network instance connection and the route table is not fully established. The creation task is still running in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the route learning relationship between the network instance connection and the route table.
       *     - If the route learning relationship is in the **Enabling** state, the route learning relationship between the network instance connection and the route table is being established. In this state, you can only query the route learning relationship. You cannot perform other operations.
       *     - If the route learning relationship is in the **Active** state, the route learning relationship between the network instance connection and the route table is established.
       *
       * @param request EnableTransitRouterRouteTablePropagationRequest
       * @return EnableTransitRouterRouteTablePropagationResponse
       */
      Models::EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagation(const Models::EnableTransitRouterRouteTablePropagationRequest &request);

      /**
       * @summary Grants permissions to a transit router instance to connect to a network instance that belongs to a different Alibaba Cloud account. Before a transit router instance can connect to a network instance that belongs to a different account, the network instance owner must authorize the transit router instance by calling the GrantInstanceToTransitRouter operation.
       *
       * @description - The GrantInstanceToTransitRouter operation only supports granting a transit router instance permissions to connect to cross-account Virtual Private Cloud (VPC) instances, Virtual Border Router (VBR) instances, IPsec connections, and Express Connect Router (ECR) instances.
       *         
       *     To grant a transit router instance permissions to connect to a Cloud Connect Network (CCN) instance, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * - Before you call the GrantInstanceToTransitRouter operation, make sure that you understand the billing rules of transit routers, the limits on authorization operations, and the prerequisites for authorization operations. For more information, see [Cross-account network instance authorization](https://help.aliyun.com/document_detail/181553.html).
       * - Before you authorize a network instance, make sure that the following operations are completed:
       *   Confirm that the account to which the network instance belongs and the account to which the transit router instance belongs are of the same type.
       *   Obtain the Alibaba Cloud account ID of the account to which the transit router instance belongs.
       *   Obtain the Cloud Enterprise Network (CEN) instance ID to which the transit router instance belongs.
       *   Before you authorize a VBR instance, contact your account manager to activate the VBR instance authorization feature.
       *   Before you authorize an IPsec connection, make sure that the IPsec connection is not associated with any resource:
       *   If the IPsec connection is already associated with a VPN gateway instance, it cannot be associated with a transit router instance in the same account or a different account.
       *   If the IPsec connection is already associated with a transit router instance, you must disassociate it first. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouterWithOptions(const Models::GrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a transit router instance to connect to a network instance that belongs to a different Alibaba Cloud account. Before a transit router instance can connect to a network instance that belongs to a different account, the network instance owner must authorize the transit router instance by calling the GrantInstanceToTransitRouter operation.
       *
       * @description - The GrantInstanceToTransitRouter operation only supports granting a transit router instance permissions to connect to cross-account Virtual Private Cloud (VPC) instances, Virtual Border Router (VBR) instances, IPsec connections, and Express Connect Router (ECR) instances.
       *         
       *     To grant a transit router instance permissions to connect to a Cloud Connect Network (CCN) instance, call the [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html) operation.
       * - Before you call the GrantInstanceToTransitRouter operation, make sure that you understand the billing rules of transit routers, the limits on authorization operations, and the prerequisites for authorization operations. For more information, see [Cross-account network instance authorization](https://help.aliyun.com/document_detail/181553.html).
       * - Before you authorize a network instance, make sure that the following operations are completed:
       *   Confirm that the account to which the network instance belongs and the account to which the transit router instance belongs are of the same type.
       *   Obtain the Alibaba Cloud account ID of the account to which the transit router instance belongs.
       *   Obtain the Cloud Enterprise Network (CEN) instance ID to which the transit router instance belongs.
       *   Before you authorize a VBR instance, contact your account manager to activate the VBR instance authorization feature.
       *   Before you authorize an IPsec connection, make sure that the IPsec connection is not associated with any resource:
       *   If the IPsec connection is already associated with a VPN gateway instance, it cannot be associated with a transit router instance in the same account or a different account.
       *   If the IPsec connection is already associated with a transit router instance, you must disassociate it first. For more information, see [Delete a network instance connection](https://help.aliyun.com/document_detail/181554.html).
       *
       * @param request GrantInstanceToTransitRouterRequest
       * @return GrantInstanceToTransitRouterResponse
       */
      Models::GrantInstanceToTransitRouterResponse grantInstanceToTransitRouter(const Models::GrantInstanceToTransitRouterRequest &request);

      /**
       * @summary Queries route entries that forward traffic to a network instance connection in the route table of a network instance associated with an Enterprise Edition transit router.
       *
       * @description When you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the operation returns a RequestId but does not display the route entries of network instances connected to the Enterprise Edition transit router.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachmentWithOptions(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries that forward traffic to a network instance connection in the route table of a network instance associated with an Enterprise Edition transit router.
       *
       * @description When you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the operation returns a RequestId but does not display the route entries of network instances connected to the Enterprise Edition transit router.
       *
       * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
       * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
       */
      Models::ListCenChildInstanceRouteEntriesToAttachmentResponse listCenChildInstanceRouteEntriesToAttachment(const Models::ListCenChildInstanceRouteEntriesToAttachmentRequest &request);

      /**
       * @summary Queries information about traffic scheduling policies by calling the ListCenInterRegionTrafficQosPolicies operation.
       *
       * @description When you call the **ListCenInterRegionTrafficQosPolicies** operation:
       * - Specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * - If you do not specify a traffic scheduling policy ID (that is, you do not specify the **TrafficQosPolicyId** parameter), the operation returns only the traffic scheduling policy information based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. The queue information under the traffic scheduling policy is not returned (that is, the response does not include the **TrafficQosQueues** field).
       * - If you specify a traffic scheduling policy ID (that is, you specify the **TrafficQosPolicyId** parameter), the operation returns the traffic scheduling policy information and the queue information under the traffic scheduling policy (that is, the response includes the **TrafficQosQueues** field). If the **TrafficQosQueues** field is an empty array, only the default queue exists under the traffic scheduling policy.
       * - Make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the operation still returns a RequestId but does not return traffic scheduling policy information.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPoliciesWithOptions(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about traffic scheduling policies by calling the ListCenInterRegionTrafficQosPolicies operation.
       *
       * @description When you call the **ListCenInterRegionTrafficQosPolicies** operation:
       * - Specify at least one of the **TransitRouterId** and **TrafficQosPolicyId** parameters.
       * - If you do not specify a traffic scheduling policy ID (that is, you do not specify the **TrafficQosPolicyId** parameter), the operation returns only the traffic scheduling policy information based on the values of the **TransitRouterId**, **TransitRouterAttachmentId**, **TrafficQosPolicyName**, and **TrafficQosPolicyDescription** parameters. The queue information under the traffic scheduling policy is not returned (that is, the response does not include the **TrafficQosQueues** field).
       * - If you specify a traffic scheduling policy ID (that is, you specify the **TrafficQosPolicyId** parameter), the operation returns the traffic scheduling policy information and the queue information under the traffic scheduling policy (that is, the response includes the **TrafficQosQueues** field). If the **TrafficQosQueues** field is an empty array, only the default queue exists under the traffic scheduling policy.
       * - Make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the operation still returns a RequestId but does not return traffic scheduling policy information.
       *
       * @param request ListCenInterRegionTrafficQosPoliciesRequest
       * @return ListCenInterRegionTrafficQosPoliciesResponse
       */
      Models::ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPolicies(const Models::ListCenInterRegionTrafficQosPoliciesRequest &request);

      /**
       * @summary Queries information about traffic scheduling policy queues by calling the ListCenInterRegionTrafficQosQueues operation.
       *
       * @description When you call this operation, specify at least one of the following parameters: **TransitRouterId**, **TrafficQosPolicyId**, or **TrafficQosQueueId**.
       * Make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system returns a **RequestId** but does not return information about traffic scheduling policies.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueuesWithOptions(const Models::ListCenInterRegionTrafficQosQueuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about traffic scheduling policy queues by calling the ListCenInterRegionTrafficQosQueues operation.
       *
       * @description When you call this operation, specify at least one of the following parameters: **TransitRouterId**, **TrafficQosPolicyId**, or **TrafficQosQueueId**.
       * Make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system returns a **RequestId** but does not return information about traffic scheduling policies.
       *
       * @param request ListCenInterRegionTrafficQosQueuesRequest
       * @return ListCenInterRegionTrafficQosQueuesResponse
       */
      Models::ListCenInterRegionTrafficQosQueuesResponse listCenInterRegionTrafficQosQueues(const Models::ListCenInterRegionTrafficQosQueuesRequest &request);

      /**
       * @summary Queries the elastic network interfaces (ENIs) within a virtual private cloud (VPC) that can serve as multicast sources or multicast members for multicast communication.
       *
       * @description Before you invoke the `ListGrantVSwitchEnis` operation, make sure that the VPC-connected instance is connected to Cloud Enterprise Network (CEN). For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnisWithOptions(const Models::ListGrantVSwitchEnisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the elastic network interfaces (ENIs) within a virtual private cloud (VPC) that can serve as multicast sources or multicast members for multicast communication.
       *
       * @description Before you invoke the `ListGrantVSwitchEnis` operation, make sure that the VPC-connected instance is connected to Cloud Enterprise Network (CEN). For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
       *
       * @param request ListGrantVSwitchEnisRequest
       * @return ListGrantVSwitchEnisResponse
       */
      Models::ListGrantVSwitchEnisResponse listGrantVSwitchEnis(const Models::ListGrantVSwitchEnisRequest &request);

      /**
       * @summary Queries information about vSwitches in a cross-account virtual private cloud (VPC) that is connected to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you invoke the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted authorization to access the cross-account VPC-connected instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCenWithOptions(const Models::ListGrantVSwitchesToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about vSwitches in a cross-account virtual private cloud (VPC) that is connected to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Before you invoke the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted authorization to access the cross-account VPC-connected instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
       *
       * @param request ListGrantVSwitchesToCenRequest
       * @return ListGrantVSwitchesToCenResponse
       */
      Models::ListGrantVSwitchesToCenResponse listGrantVSwitchesToCen(const Models::ListGrantVSwitchesToCenRequest &request);

      /**
       * @summary Queries the tags bound to a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the ListTagResources operation, you must specify at least one of the request parameters **ResourceId.N** and **Tag.N.Key**:
       * - If you specify only **ResourceId.N**, the tags bound to the specified CEN instance are queried.
       * - If you specify only **Tag.N.Key**, all CEN instances that have the specified tag key bound are queried.
       * - If you specify both **ResourceId.N** and **Tag.N.Key**, the specified tags bound to the specified CEN instance are queried.
       *     - Make sure that the values of **ResourceId.N** and **Tag.N.Key** correspond to each other. Otherwise, an empty result is returned.
       *     - If you specify multiple tag keys, the tag keys are evaluated by using the logical AND operator.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to a Cloud Enterprise Network (CEN) instance.
       *
       * @description When you call the ListTagResources operation, you must specify at least one of the request parameters **ResourceId.N** and **Tag.N.Key**:
       * - If you specify only **ResourceId.N**, the tags bound to the specified CEN instance are queried.
       * - If you specify only **Tag.N.Key**, all CEN instances that have the specified tag key bound are queried.
       * - If you specify both **ResourceId.N** and **Tag.N.Key**, the specified tags bound to the specified CEN instance are queried.
       *     - Make sure that the values of **ResourceId.N** and **Tag.N.Key** correspond to each other. Otherwise, an empty result is returned.
       *     - If you specify multiple tag keys, the tag keys are evaluated by using the logical AND operator.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries details about traffic marking policies, such as the status and priority of the traffic marking policies.
       *
       * @description When you call the **ListTrafficMarkingPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * - If you do not specify a traffic marking policy ID (that is, you do not specify a value for the **TrafficMarkingPolicyId** parameter), the operation returns only the traffic marking policy information based on the values of the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. The traffic classification rule information under the traffic marking policy is not returned (that is, the response does not contain the **TrafficMatchRules** field).
       * - If you specify a traffic marking policy ID (that is, you specify a value for the **TrafficMarkingPolicyId** parameter), the operation returns the traffic marking policy information and the traffic classification rule information under the traffic marking policy (that is, the response contains the **TrafficMatchRules** field).
       * If the **TrafficMatchRules** field is an empty array, no traffic classification rules exist under the current traffic marking policy.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPoliciesWithOptions(const Models::ListTrafficMarkingPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about traffic marking policies, such as the status and priority of the traffic marking policies.
       *
       * @description When you call the **ListTrafficMarkingPolicies** operation:
       * - You must specify at least one of the **TransitRouterId** and **TrafficMarkingPolicyId** parameters.
       * - If you do not specify a traffic marking policy ID (that is, you do not specify a value for the **TrafficMarkingPolicyId** parameter), the operation returns only the traffic marking policy information based on the values of the **TransitRouterId**, **TrafficMarkingPolicyName**, and **TrafficMarkingPolicyDescription** parameters. The traffic classification rule information under the traffic marking policy is not returned (that is, the response does not contain the **TrafficMatchRules** field).
       * - If you specify a traffic marking policy ID (that is, you specify a value for the **TrafficMarkingPolicyId** parameter), the operation returns the traffic marking policy information and the traffic classification rule information under the traffic marking policy (that is, the response contains the **TrafficMatchRules** field).
       * If the **TrafficMatchRules** field is an empty array, no traffic classification rules exist under the current traffic marking policy.
       *
       * @param request ListTrafficMarkingPoliciesRequest
       * @return ListTrafficMarkingPoliciesResponse
       */
      Models::ListTrafficMarkingPoliciesResponse listTrafficMarkingPolicies(const Models::ListTrafficMarkingPoliciesRequest &request);

      /**
       * @summary Queries the zones supported by Enterprise Edition transit routers in a specified region.
       *
       * @description - You can invoke **ListTransitRouterAvailableResource** to query information about regular zones or zones that support the multicast feature for Enterprise Edition transit routers in a specified region.
       *     - If you do not set **SupportMulticast** to **true**, the system queries only the regular zones supported by Enterprise Edition transit routers by default.
       *     - If you set **SupportMulticast** to **true**, the system queries only the zones that support the multicast feature for Enterprise Edition transit routers.
       * - On May 31, 2022, Cloud Enterprise Network (CEN) performed an optimization upgrade on the mode in which Enterprise Edition transit routers connect to virtual private clouds (VPCs). After the upgrade, you no longer need to specify primary and secondary zones when connecting an Enterprise Edition transit router to a VPC-connected instance. You can specify one or more zones.
       *     - If your Enterprise Edition transit router has not been upgraded, you must specify primary and secondary zones when connecting the Enterprise Edition transit router to a VPC-connected instance. After you invoke **ListTransitRouterAvailableResource**, you can obtain the primary and secondary zone information from the **MasterZones** and **SlaveZones** parameters.
       *     - If your Enterprise Edition transit router has been upgraded, you can specify any zones when connecting the Enterprise Edition transit router to a VPC-connected instance. After you invoke **ListTransitRouterAvailableResource**, you can obtain the zone information supported by the Enterprise Edition transit router from the **AvailableZones** parameter.
       * For more information about the Enterprise Edition transit router upgrade, see [Upgrade the mode in which an Enterprise Edition transit router connects to a VPC](https://help.aliyun.com/document_detail/434191.html).
       *
       * @param request ListTransitRouterAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterAvailableResourceResponse
       */
      Models::ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResourceWithOptions(const Models::ListTransitRouterAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones supported by Enterprise Edition transit routers in a specified region.
       *
       * @description - You can invoke **ListTransitRouterAvailableResource** to query information about regular zones or zones that support the multicast feature for Enterprise Edition transit routers in a specified region.
       *     - If you do not set **SupportMulticast** to **true**, the system queries only the regular zones supported by Enterprise Edition transit routers by default.
       *     - If you set **SupportMulticast** to **true**, the system queries only the zones that support the multicast feature for Enterprise Edition transit routers.
       * - On May 31, 2022, Cloud Enterprise Network (CEN) performed an optimization upgrade on the mode in which Enterprise Edition transit routers connect to virtual private clouds (VPCs). After the upgrade, you no longer need to specify primary and secondary zones when connecting an Enterprise Edition transit router to a VPC-connected instance. You can specify one or more zones.
       *     - If your Enterprise Edition transit router has not been upgraded, you must specify primary and secondary zones when connecting the Enterprise Edition transit router to a VPC-connected instance. After you invoke **ListTransitRouterAvailableResource**, you can obtain the primary and secondary zone information from the **MasterZones** and **SlaveZones** parameters.
       *     - If your Enterprise Edition transit router has been upgraded, you can specify any zones when connecting the Enterprise Edition transit router to a VPC-connected instance. After you invoke **ListTransitRouterAvailableResource**, you can obtain the zone information supported by the Enterprise Edition transit router from the **AvailableZones** parameter.
       * For more information about the Enterprise Edition transit router upgrade, see [Upgrade the mode in which an Enterprise Edition transit router connects to a VPC](https://help.aliyun.com/document_detail/434191.html).
       *
       * @param request ListTransitRouterAvailableResourceRequest
       * @return ListTransitRouterAvailableResourceResponse
       */
      Models::ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResource(const Models::ListTransitRouterAvailableResourceRequest &request);

      /**
       * @summary Queries information about CIDR blocks of a transit router by calling the ListTransitRouterCidr operation.
       *
       * @param request ListTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterCidrResponse
       */
      Models::ListTransitRouterCidrResponse listTransitRouterCidrWithOptions(const Models::ListTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about CIDR blocks of a transit router by calling the ListTransitRouterCidr operation.
       *
       * @param request ListTransitRouterCidrRequest
       * @return ListTransitRouterCidrResponse
       */
      Models::ListTransitRouterCidrResponse listTransitRouterCidr(const Models::ListTransitRouterCidrRequest &request);

      /**
       * @summary Queries the allocation information of a CIDR block by calling the ListTransitRouterCidrAllocation operation.
       *
       * @param request ListTransitRouterCidrAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterCidrAllocationResponse
       */
      Models::ListTransitRouterCidrAllocationResponse listTransitRouterCidrAllocationWithOptions(const Models::ListTransitRouterCidrAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the allocation information of a CIDR block by calling the ListTransitRouterCidrAllocation operation.
       *
       * @param request ListTransitRouterCidrAllocationRequest
       * @return ListTransitRouterCidrAllocationResponse
       */
      Models::ListTransitRouterCidrAllocationResponse listTransitRouterCidrAllocation(const Models::ListTransitRouterCidrAllocationRequest &request);

      /**
       * @summary Queries the connection information about Express Connect Router (ECR) instances under an Enterprise Edition transit router, including the total number of entries, connection status, connection IDs, and the payer of network instances.
       *
       * @description You can query the information about ECR connections under an Enterprise Edition transit router in the following three ways: 
       * - Query the information about all ECR connections under an Enterprise Edition transit router instance by specifying the transit router instance ID. 
       * - Query the information about all ECR connections under an Enterprise Edition transit router instance by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the transit router instance. 
       * - Query the information about a specific ECR connection by specifying only the **TransitRouterAttachmentId** parameter.
       *
       * @param request ListTransitRouterEcrAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterEcrAttachmentsResponse
       */
      Models::ListTransitRouterEcrAttachmentsResponse listTransitRouterEcrAttachmentsWithOptions(const Models::ListTransitRouterEcrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection information about Express Connect Router (ECR) instances under an Enterprise Edition transit router, including the total number of entries, connection status, connection IDs, and the payer of network instances.
       *
       * @description You can query the information about ECR connections under an Enterprise Edition transit router in the following three ways: 
       * - Query the information about all ECR connections under an Enterprise Edition transit router instance by specifying the transit router instance ID. 
       * - Query the information about all ECR connections under an Enterprise Edition transit router instance by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the transit router instance. 
       * - Query the information about a specific ECR connection by specifying only the **TransitRouterAttachmentId** parameter.
       *
       * @param request ListTransitRouterEcrAttachmentsRequest
       * @return ListTransitRouterEcrAttachmentsResponse
       */
      Models::ListTransitRouterEcrAttachmentsResponse listTransitRouterEcrAttachments(const Models::ListTransitRouterEcrAttachmentsRequest &request);

      /**
       * @summary Queries the associations between a multicast domain and vSwitches.
       *
       * @description - When calling this operation, you must specify at least one of the request parameters **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. Specifying **TransitRouterAttachmentId** queries the information about vSwitches that are associated with a multicast domain under a VPC-connected instance. Specifying **TransitRouterMulticastDomainId** queries the information about vSwitches that are associated with the multicast domain.
       * - When calling the **ListTransitRouterMulticastDomainAssociations** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the operation still returns a **RequestId** but does not return the associations between the multicast domain and vSwitches.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociationsWithOptions(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associations between a multicast domain and vSwitches.
       *
       * @description - When calling this operation, you must specify at least one of the request parameters **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. Specifying **TransitRouterAttachmentId** queries the information about vSwitches that are associated with a multicast domain under a VPC-connected instance. Specifying **TransitRouterMulticastDomainId** queries the information about vSwitches that are associated with the multicast domain.
       * - When calling the **ListTransitRouterMulticastDomainAssociations** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the operation still returns a **RequestId** but does not return the associations between the multicast domain and vSwitches.
       *
       * @param request ListTransitRouterMulticastDomainAssociationsRequest
       * @return ListTransitRouterMulticastDomainAssociationsResponse
       */
      Models::ListTransitRouterMulticastDomainAssociationsResponse listTransitRouterMulticastDomainAssociations(const Models::ListTransitRouterMulticastDomainAssociationsRequest &request);

      /**
       * @summary Queries information about vSwitches that are associated with multicast domains in a VPC-connected instance after the VPC-connected instance is connected to an Enterprise Edition transit router.
       *
       * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not return information about vSwitches that are associated with multicast domains in the VPC-connected instance.
       *
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitchesWithOptions(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about vSwitches that are associated with multicast domains in a VPC-connected instance after the VPC-connected instance is connected to an Enterprise Edition transit router.
       *
       * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not return information about vSwitches that are associated with multicast domains in the VPC-connected instance.
       *
       * @param request ListTransitRouterMulticastDomainVSwitchesRequest
       * @return ListTransitRouterMulticastDomainVSwitchesResponse
       */
      Models::ListTransitRouterMulticastDomainVSwitchesResponse listTransitRouterMulticastDomainVSwitches(const Models::ListTransitRouterMulticastDomainVSwitchesRequest &request);

      /**
       * @summary Queries information about multicast domains, such as the status, multicast domain ID, and description of multicast domains.
       *
       * @description - RegionId must be used together with CenId and cannot be used alone. Otherwise, multicast domain information is not displayed. However, TransitRouterId and TransitRouterMulticastDomainId can be used independently.
       * - Ensure that the parameter values you specify are correct when you call this operation. If you specify invalid parameter values, the system still returns a **RequestId** but does not display detailed multicast domain information.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomainsWithOptions(const Models::ListTransitRouterMulticastDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about multicast domains, such as the status, multicast domain ID, and description of multicast domains.
       *
       * @description - RegionId must be used together with CenId and cannot be used alone. Otherwise, multicast domain information is not displayed. However, TransitRouterId and TransitRouterMulticastDomainId can be used independently.
       * - Ensure that the parameter values you specify are correct when you call this operation. If you specify invalid parameter values, the system still returns a **RequestId** but does not display detailed multicast domain information.
       *
       * @param request ListTransitRouterMulticastDomainsRequest
       * @return ListTransitRouterMulticastDomainsResponse
       */
      Models::ListTransitRouterMulticastDomainsResponse listTransitRouterMulticastDomains(const Models::ListTransitRouterMulticastDomainsRequest &request);

      /**
       * @summary Queries the details of multicast members and multicast sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query information about multicast members and multicast sources (hereinafter referred to as multicast resources) in a multicast domain.
       * - If you specify the **GroupIpAddress** parameter, you can query multicast resources in a specified multicast group within the multicast domain.
       * - If you specify the **VSwitchIds** parameter, you can query multicast resources under a specified vSwitch within the multicast domain.
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you can query cross-region multicast resources within the multicast domain.
       * - If you specify the **ResourceType** parameter, you can query multicast resources of a specified resource type within the multicast domain.
       * - If you specify the **ResourceId** parameter, you can query multicast resources associated with a specified resource.
       * - If you specify only the **TransitRouterMulticastDomainId** parameter, you can query all multicast resources within the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroupsWithOptions(const Models::ListTransitRouterMulticastGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of multicast members and multicast sources in a multicast domain.
       *
       * @description You can call the `ListTransitRouterMulticastGroups` operation to query information about multicast members and multicast sources (hereinafter referred to as multicast resources) in a multicast domain.
       * - If you specify the **GroupIpAddress** parameter, you can query multicast resources in a specified multicast group within the multicast domain.
       * - If you specify the **VSwitchIds** parameter, you can query multicast resources under a specified vSwitch within the multicast domain.
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you can query cross-region multicast resources within the multicast domain.
       * - If you specify the **ResourceType** parameter, you can query multicast resources of a specified resource type within the multicast domain.
       * - If you specify the **ResourceId** parameter, you can query multicast resources associated with a specified resource.
       * - If you specify only the **TransitRouterMulticastDomainId** parameter, you can query all multicast resources within the multicast domain.
       *
       * @param request ListTransitRouterMulticastGroupsRequest
       * @return ListTransitRouterMulticastGroupsResponse
       */
      Models::ListTransitRouterMulticastGroupsResponse listTransitRouterMulticastGroups(const Models::ListTransitRouterMulticastGroupsRequest &request);

      /**
       * @summary Queries the details of inter-region connections under an Enterprise Edition transit router by calling the ListTransitRouterPeerAttachments operation.
       *
       * @description You can query inter-region connections under an Enterprise Edition transit router in the following ways:
       * - Query all inter-region connections under an Enterprise Edition transit router by specifying the transit router instance ID.
       * - Query all inter-region connections under an Enterprise Edition transit router by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the Enterprise Edition transit router instance.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachmentsWithOptions(const Models::ListTransitRouterPeerAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of inter-region connections under an Enterprise Edition transit router by calling the ListTransitRouterPeerAttachments operation.
       *
       * @description You can query inter-region connections under an Enterprise Edition transit router in the following ways:
       * - Query all inter-region connections under an Enterprise Edition transit router by specifying the transit router instance ID.
       * - Query all inter-region connections under an Enterprise Edition transit router by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the Enterprise Edition transit router instance.
       *
       * @param request ListTransitRouterPeerAttachmentsRequest
       * @return ListTransitRouterPeerAttachmentsResponse
       */
      Models::ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachments(const Models::ListTransitRouterPeerAttachmentsRequest &request);

      /**
       * @summary Queries information about prefix lists associated with an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterPrefixListAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterPrefixListAssociationResponse
       */
      Models::ListTransitRouterPrefixListAssociationResponse listTransitRouterPrefixListAssociationWithOptions(const Models::ListTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about prefix lists associated with an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterPrefixListAssociationRequest
       * @return ListTransitRouterPrefixListAssociationResponse
       */
      Models::ListTransitRouterPrefixListAssociationResponse listTransitRouterPrefixListAssociation(const Models::ListTransitRouterPrefixListAssociationRequest &request);

      /**
       * @summary Calls the ListTransitRouterRouteEntries operation to query the details of route entries in an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteEntriesResponse
       */
      Models::ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntriesWithOptions(const Models::ListTransitRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ListTransitRouterRouteEntries operation to query the details of route entries in an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterRouteEntriesRequest
       * @return ListTransitRouterRouteEntriesResponse
       */
      Models::ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntries(const Models::ListTransitRouterRouteEntriesRequest &request);

      /**
       * @summary Queries the route association relationships created for an Enterprise Edition transit router route table or a network instance connection.
       *
       * @description When you call the **ListTransitRouterRouteTableAssociations** operation, specify at least one of the request parameters **TransitRouterRouteTableId** and **TransitRouterAttachmentId**:
       * - If you specify only the **TransitRouterRouteTableId** parameter, the system queries the network instance connections that have route association relationships with the specified Enterprise Edition transit router route table.
       * - If you specify only the **TransitRouterAttachmentId** parameter, the system queries the Enterprise Edition transit router route tables that have route association relationships with the specified network instance connection.
       * - If you specify both the **TransitRouterRouteTableId** and **TransitRouterAttachmentId** parameters, the system queries the route association relationship between the specified network instance connection and the specified Enterprise Edition transit router route table.
       *     - If a route association relationship exists between the network instance connection and the Enterprise Edition transit router route table, the system returns the information about the route association relationship.
       *     - If no route association relationship exists between the network instance connection and the Enterprise Edition transit router route table, the **TransitRouterAssociations** array is empty.
       * When you call the **ListTransitRouterRouteTableAssociations** operation, make sure that the parameter values you specify are correct.
       * If you specify incorrect parameter values, the system still returns a **RequestId** but does not return the route association relationships created for the Enterprise Edition transit router route table or network instance connection.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociationsWithOptions(const Models::ListTransitRouterRouteTableAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route association relationships created for an Enterprise Edition transit router route table or a network instance connection.
       *
       * @description When you call the **ListTransitRouterRouteTableAssociations** operation, specify at least one of the request parameters **TransitRouterRouteTableId** and **TransitRouterAttachmentId**:
       * - If you specify only the **TransitRouterRouteTableId** parameter, the system queries the network instance connections that have route association relationships with the specified Enterprise Edition transit router route table.
       * - If you specify only the **TransitRouterAttachmentId** parameter, the system queries the Enterprise Edition transit router route tables that have route association relationships with the specified network instance connection.
       * - If you specify both the **TransitRouterRouteTableId** and **TransitRouterAttachmentId** parameters, the system queries the route association relationship between the specified network instance connection and the specified Enterprise Edition transit router route table.
       *     - If a route association relationship exists between the network instance connection and the Enterprise Edition transit router route table, the system returns the information about the route association relationship.
       *     - If no route association relationship exists between the network instance connection and the Enterprise Edition transit router route table, the **TransitRouterAssociations** array is empty.
       * When you call the **ListTransitRouterRouteTableAssociations** operation, make sure that the parameter values you specify are correct.
       * If you specify incorrect parameter values, the system still returns a **RequestId** but does not return the route association relationships created for the Enterprise Edition transit router route table or network instance connection.
       *
       * @param request ListTransitRouterRouteTableAssociationsRequest
       * @return ListTransitRouterRouteTableAssociationsResponse
       */
      Models::ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociations(const Models::ListTransitRouterRouteTableAssociationsRequest &request);

      /**
       * @summary Queries the route learning relationships of an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagationsWithOptions(const Models::ListTransitRouterRouteTablePropagationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route learning relationships of an Enterprise Edition transit router route table.
       *
       * @param request ListTransitRouterRouteTablePropagationsRequest
       * @return ListTransitRouterRouteTablePropagationsResponse
       */
      Models::ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagations(const Models::ListTransitRouterRouteTablePropagationsRequest &request);

      /**
       * @summary Queries the details of route tables of an Enterprise Edition transit router by calling the ListTransitRouterRouteTables operation.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTablesWithOptions(const Models::ListTransitRouterRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of route tables of an Enterprise Edition transit router by calling the ListTransitRouterRouteTables operation.
       *
       * @param request ListTransitRouterRouteTablesRequest
       * @return ListTransitRouterRouteTablesResponse
       */
      Models::ListTransitRouterRouteTablesResponse listTransitRouterRouteTables(const Models::ListTransitRouterRouteTablesRequest &request);

      /**
       * @summary Queries the connection information of virtual border routers (VBRs) under an Enterprise Edition transit router, including the total number of entries, connection status, connection IDs, and payers of network instances.
       *
       * @description You can query information about virtual border router (VBR) connections on an Enterprise Edition transit router in the following ways:
       * - Query information about all VBR connections on an Enterprise Edition transit router by specifying the transit router instance ID.
       * - Query information about all VBR connections on an Enterprise Edition transit router by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the transit router instance.
       * - Query information about a VBR connection by specifying only the TransitRouterAttachmentId parameter.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachmentsWithOptions(const Models::ListTransitRouterVbrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection information of virtual border routers (VBRs) under an Enterprise Edition transit router, including the total number of entries, connection status, connection IDs, and payers of network instances.
       *
       * @description You can query information about virtual border router (VBR) connections on an Enterprise Edition transit router in the following ways:
       * - Query information about all VBR connections on an Enterprise Edition transit router by specifying the transit router instance ID.
       * - Query information about all VBR connections on an Enterprise Edition transit router by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the transit router instance.
       * - Query information about a VBR connection by specifying only the TransitRouterAttachmentId parameter.
       *
       * @param request ListTransitRouterVbrAttachmentsRequest
       * @return ListTransitRouterVbrAttachmentsResponse
       */
      Models::ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachments(const Models::ListTransitRouterVbrAttachmentsRequest &request);

      /**
       * @summary Queries information about Virtual Private Cloud (VPC) connections under an Enterprise Edition transit router, including the status, billing type, zone information, and associated vSwitch and network interface controller (NIC) details of VPC connections that are active for forwarding and routing traffic.
       *
       * @description You can query information about VPC connections under an Enterprise Edition transit router in the following three ways:
       * - Query information about all VPC connections under an Enterprise Edition transit router instance by specifying the transit router instance ID.
       * - Query information about all VPC connections under an Enterprise Edition transit router instance by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the Enterprise Edition transit router instance.
       * - Query information about all VPC connections in a region by specifying the region ID of the Enterprise Edition transit router instance.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachmentsWithOptions(const Models::ListTransitRouterVpcAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Virtual Private Cloud (VPC) connections under an Enterprise Edition transit router, including the status, billing type, zone information, and associated vSwitch and network interface controller (NIC) details of VPC connections that are active for forwarding and routing traffic.
       *
       * @description You can query information about VPC connections under an Enterprise Edition transit router in the following three ways:
       * - Query information about all VPC connections under an Enterprise Edition transit router instance by specifying the transit router instance ID.
       * - Query information about all VPC connections under an Enterprise Edition transit router instance by specifying the Cloud Enterprise Network (CEN) instance ID and the region ID of the Enterprise Edition transit router instance.
       * - Query information about all VPC connections in a region by specifying the region ID of the Enterprise Edition transit router instance.
       *
       * @param request ListTransitRouterVpcAttachmentsRequest
       * @return ListTransitRouterVpcAttachmentsResponse
       */
      Models::ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachments(const Models::ListTransitRouterVpcAttachmentsRequest &request);

      /**
       * @summary Queries information about VPN connections, such as the status, IPsec connection ID, and billing method of VPN connections.
       *
       * @description The ListTransitRouterVpnAttachments operation supports the following three query methods:
       * - Specify only **TransitRouterAttachmentId** to query information about a specific VPN connection.
       * - Specify only **TransitRouterId** to query information about all VPN connections associated with the specified transit router.
       * - Specify **CenId** and **RegionId** to query information about VPN connections in a specific region of the Cloud Enterprise Network (CEN) instance.
       * When calling the **ListTransitRouterVpnAttachments** operation, make sure that the parameter values are correct. If you specify incorrect parameter values, the response still returns a **RequestId**, but does not include the information about the target VPN connections.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachmentsWithOptions(const Models::ListTransitRouterVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about VPN connections, such as the status, IPsec connection ID, and billing method of VPN connections.
       *
       * @description The ListTransitRouterVpnAttachments operation supports the following three query methods:
       * - Specify only **TransitRouterAttachmentId** to query information about a specific VPN connection.
       * - Specify only **TransitRouterId** to query information about all VPN connections associated with the specified transit router.
       * - Specify **CenId** and **RegionId** to query information about VPN connections in a specific region of the Cloud Enterprise Network (CEN) instance.
       * When calling the **ListTransitRouterVpnAttachments** operation, make sure that the parameter values are correct. If you specify incorrect parameter values, the response still returns a **RequestId**, but does not include the information about the target VPN connections.
       *
       * @param request ListTransitRouterVpnAttachmentsRequest
       * @return ListTransitRouterVpnAttachmentsResponse
       */
      Models::ListTransitRouterVpnAttachmentsResponse listTransitRouterVpnAttachments(const Models::ListTransitRouterVpnAttachmentsRequest &request);

      /**
       * @summary Queries information about transit router instances under a Cloud Enterprise Network (CEN) instance, including the instance type, instance status, transit router instance ID, and whether the multicast feature is enabled.
       *
       * @description When you call this operation to query information about transit router instances under a CEN instance, you can specify the **RegionId** and **TransitRouterId** parameters as needed. The following describes the relationship between these two parameters:
       * - If you do not specify **RegionId** or **TransitRouterId**, all transit router instances under the CEN instance are queried.
       * - If you specify only **RegionId**, transit router instances in the specified region under the CEN instance are queried.
       * - If you specify only **TransitRouterId**, the specified transit router instance under the CEN instance is queried.
       *
       * @param request ListTransitRoutersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRoutersWithOptions(const Models::ListTransitRoutersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about transit router instances under a Cloud Enterprise Network (CEN) instance, including the instance type, instance status, transit router instance ID, and whether the multicast feature is enabled.
       *
       * @description When you call this operation to query information about transit router instances under a CEN instance, you can specify the **RegionId** and **TransitRouterId** parameters as needed. The following describes the relationship between these two parameters:
       * - If you do not specify **RegionId** or **TransitRouterId**, all transit router instances under the CEN instance are queried.
       * - If you specify only **RegionId**, transit router instances in the specified region under the CEN instance are queried.
       * - If you specify only **TransitRouterId**, the specified transit router instance under the CEN instance is queried.
       *
       * @param request ListTransitRoutersRequest
       * @return ListTransitRoutersResponse
       */
      Models::ListTransitRoutersResponse listTransitRouters(const Models::ListTransitRoutersRequest &request);

      /**
       * @summary Modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance has not been modified yet. The modification task is still running in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Modifying** state, the CEN instance is being modified. In this state, you can only query the CEN instance but cannot perform other operations on it.
       * - If the CEN instance is in the **Active** state, the CEN instance has been modified.
       *
       * @param request ModifyCenAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttributeWithOptions(const Models::ModifyCenAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a Cloud Enterprise Network (CEN) instance.
       *
       * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the CEN instance has not been modified yet. The modification task is still running in the background. You can call the **DescribeCens** operation to query the status of the CEN instance. 
       * - If the CEN instance is in the **Modifying** state, the CEN instance is being modified. In this state, you can only query the CEN instance but cannot perform other operations on it.
       * - If the CEN instance is in the **Active** state, the CEN instance has been modified.
       *
       * @param request ModifyCenAttributeRequest
       * @return ModifyCenAttributeResponse
       */
      Models::ModifyCenAttributeResponse modifyCenAttribute(const Models::ModifyCenAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a bandwidth plan instance by calling the ModifyCenBandwidthPackageAttribute operation.
       *
       * @param request ModifyCenBandwidthPackageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenBandwidthPackageAttributeResponse
       */
      Models::ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttributeWithOptions(const Models::ModifyCenBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a bandwidth plan instance by calling the ModifyCenBandwidthPackageAttribute operation.
       *
       * @param request ModifyCenBandwidthPackageAttributeRequest
       * @return ModifyCenBandwidthPackageAttributeResponse
       */
      Models::ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttribute(const Models::ModifyCenBandwidthPackageAttributeRequest &request);

      /**
       * @summary Modifies the peak bandwidth of a bandwidth plan instance by calling the ModifyCenBandwidthPackageSpec operation.
       *
       * @param request ModifyCenBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenBandwidthPackageSpecResponse
       */
      Models::ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpecWithOptions(const Models::ModifyCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the peak bandwidth of a bandwidth plan instance by calling the ModifyCenBandwidthPackageSpec operation.
       *
       * @param request ModifyCenBandwidthPackageSpecRequest
       * @return ModifyCenBandwidthPackageSpecResponse
       */
      Models::ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpec(const Models::ModifyCenBandwidthPackageSpecRequest &request);

      /**
       * @summary Modifies a routing policy by calling the ModifyCenRouteMap operation.
       *
       * @description The `ModifyCenRouteMap` operation is asynchronous. After you send a request, the system returns a **RequestId** but the routing policy has not been modified yet. The modification task runs in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If the routing policy is in the **Modifying** state, the routing policy is being modified. In this state, you can only perform query operations.
       * - If the routing policy is in the **Active** state, the routing policy has been modified.
       *
       * @param request ModifyCenRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenRouteMapResponse
       */
      Models::ModifyCenRouteMapResponse modifyCenRouteMapWithOptions(const Models::ModifyCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a routing policy by calling the ModifyCenRouteMap operation.
       *
       * @description The `ModifyCenRouteMap` operation is asynchronous. After you send a request, the system returns a **RequestId** but the routing policy has not been modified yet. The modification task runs in the background. You can call the `DescribeCenRouteMaps` operation to query the status of the routing policy.
       * - If the routing policy is in the **Modifying** state, the routing policy is being modified. In this state, you can only perform query operations.
       * - If the routing policy is in the **Active** state, the routing policy has been modified.
       *
       * @param request ModifyCenRouteMapRequest
       * @return ModifyCenRouteMapResponse
       */
      Models::ModifyCenRouteMapResponse modifyCenRouteMap(const Models::ModifyCenRouteMapRequest &request);

      /**
       * @summary Modifies the name, description, and capture window duration of a flow log.
       *
       * @description The `ModifyFlowLogAttribute` operation is asynchronous. After you call this operation, the system returns a **RequestId**, but the modification has not been completed. The modification continues in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Modifying** state, the flow log is being modified. In this state, you can only perform query operations.
       * - If the flow log is in the **Active** state, the flow log has been modified.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and capture window duration of a flow log.
       *
       * @description The `ModifyFlowLogAttribute` operation is asynchronous. After you call this operation, the system returns a **RequestId**, but the modification has not been completed. The modification continues in the background. You can call the `DescribeFlowlogs` operation to query the status of the flow log.
       * - If the flow log is in the **Modifying** state, the flow log is being modified. In this state, you can only perform query operations.
       * - If the flow log is in the **Active** state, the flow log has been modified.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies the payer for a cross-account network instance connection of a transit router instance.
       *
       * @description The ModifyGrantInstanceToTransitRouter operation supports modifying only the payer for cross-account virtual private cloud (VPC), virtual border router (VBR), and IPsec connection instances connected to a transit router instance.
       *
       * @param request ModifyGrantInstanceToTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGrantInstanceToTransitRouterResponse
       */
      Models::ModifyGrantInstanceToTransitRouterResponse modifyGrantInstanceToTransitRouterWithOptions(const Models::ModifyGrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the payer for a cross-account network instance connection of a transit router instance.
       *
       * @description The ModifyGrantInstanceToTransitRouter operation supports modifying only the payer for cross-account virtual private cloud (VPC), virtual border router (VBR), and IPsec connection instances connected to a transit router instance.
       *
       * @param request ModifyGrantInstanceToTransitRouterRequest
       * @return ModifyGrantInstanceToTransitRouterResponse
       */
      Models::ModifyGrantInstanceToTransitRouterResponse modifyGrantInstanceToTransitRouter(const Models::ModifyGrantInstanceToTransitRouterRequest &request);

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
       * @summary Calls the ModifyTransitRouterCidr operation to modify a CIDR block of a transit router.
       *
       * @description - Before you modify a transit router CIDR block, we recommend that you familiarize yourself with the [usage limits of transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A transit router CIDR block that has allocated IP addresses cannot be modified.
       * - If you call the **ModifyTransitRouterCidr** operation without modifying the **PublishCidrRoute** parameter, this operation is synchronous and the modification takes effect immediately.
       * - If you call the **ModifyTransitRouterCidr** operation and modify the **PublishCidrRoute** parameter, this operation is asynchronous. After you send a request, the system returns a **RequestId** but the transit router CIDR block is not yet modified. The modification task runs in the background. You can call the **ListTransitRouterCidr** operation to query the modification status of the transit router CIDR block.
       *     - If the transit router CIDR block still shows the information before the modification, the transit router CIDR block is being modified.
       *     - If the transit router CIDR block shows the updated information, the transit router CIDR block has been modified.
       *
       * @param request ModifyTransitRouterCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTransitRouterCidrResponse
       */
      Models::ModifyTransitRouterCidrResponse modifyTransitRouterCidrWithOptions(const Models::ModifyTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyTransitRouterCidr operation to modify a CIDR block of a transit router.
       *
       * @description - Before you modify a transit router CIDR block, we recommend that you familiarize yourself with the [usage limits of transit router CIDR blocks](https://help.aliyun.com/document_detail/462635.html).
       * - A transit router CIDR block that has allocated IP addresses cannot be modified.
       * - If you call the **ModifyTransitRouterCidr** operation without modifying the **PublishCidrRoute** parameter, this operation is synchronous and the modification takes effect immediately.
       * - If you call the **ModifyTransitRouterCidr** operation and modify the **PublishCidrRoute** parameter, this operation is asynchronous. After you send a request, the system returns a **RequestId** but the transit router CIDR block is not yet modified. The modification task runs in the background. You can call the **ListTransitRouterCidr** operation to query the modification status of the transit router CIDR block.
       *     - If the transit router CIDR block still shows the information before the modification, the transit router CIDR block is being modified.
       *     - If the transit router CIDR block shows the updated information, the transit router CIDR block has been modified.
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
       * @summary Modifies the resource group to which a Cloud Enterprise Network (CEN) instance or a bandwidth plan instance belongs.
       *
       * @description CEN instances and bandwidth plan instances belong to the default resource group by default. You can call the `MoveResourceGroup` operation to modify the resource group to which a CEN instance or a bandwidth plan instance belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a Cloud Enterprise Network (CEN) instance or a bandwidth plan instance belongs.
       *
       * @description CEN instances and bandwidth plan instances belong to the default resource group by default. You can call the `MoveResourceGroup` operation to modify the resource group to which a CEN instance or a bandwidth plan instance belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Activates the transit router service.
       *
       * @description You can call the `OpenTransitRouterService` operation to activate the transit router service free of charge. After the transit router service is activated, the system automatically generates an order. You can use the order ID returned by the `OpenTransitRouterService` operation to query order information in the <props="china">[Alibaba Cloud Management Console Order Center](https://usercenter2.aliyun.com/order/list?pageIndex=1&pageSize=20)<props="intl">[Alibaba Cloud Management Console Order Center](https://usercenter2-intl.aliyun.com/order/list).
       * > Before calling this operation, call [CheckTransitRouterService](~~CheckTransitRouterService~~) to check whether the transit router service is already activated for the current account. If it is already activated, you do not need to call this operation again.
       *
       * @param request OpenTransitRouterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTransitRouterServiceResponse
       */
      Models::OpenTransitRouterServiceResponse openTransitRouterServiceWithOptions(const Models::OpenTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the transit router service.
       *
       * @description You can call the `OpenTransitRouterService` operation to activate the transit router service free of charge. After the transit router service is activated, the system automatically generates an order. You can use the order ID returned by the `OpenTransitRouterService` operation to query order information in the <props="china">[Alibaba Cloud Management Console Order Center](https://usercenter2.aliyun.com/order/list?pageIndex=1&pageSize=20)<props="intl">[Alibaba Cloud Management Console Order Center](https://usercenter2-intl.aliyun.com/order/list).
       * > Before calling this operation, call [CheckTransitRouterService](~~CheckTransitRouterService~~) to check whether the transit router service is already activated for the current account. If it is already activated, you do not need to call this operation again.
       *
       * @param request OpenTransitRouterServiceRequest
       * @return OpenTransitRouterServiceResponse
       */
      Models::OpenTransitRouterServiceResponse openTransitRouterService(const Models::OpenTransitRouterServiceRequest &request);

      /**
       * @summary Cloud Enterprise Network (CEN) supports the publish route entry feature. You can publish routing entries from a VPC or VBR loaded into CEN to CEN by invoking the PublishRouteEntries operation. If no route conflict exists, other network instances in CEN can learn the published routes.
       *
       * @description The following table lists the default publish status of each type of route entry in CEN. You can call the PublishRouteEntries operation to publish route entries that are not published to CEN.
       * | Route entry        | Instance to which the route entry belongs         |Published to CEN by default
       * |------------- |-----------------------|--------------------|
       * |Route entry that points to an ECS instance      |VPC       |No |
       * |Route entry that points to a VPN gateway      |VPC       |No |
       * |Route entry that points to a high availability (HA) virtual IP address    |VPC    |No |
       * |Route entry that points to a router interface    |VPC    |No |
       * |Route entry that points to an elastic network interfaces (ENIs)    |VPC    |No |
       * |Route entry that points to an IPv6 gateway    |VPC    |No |
       * |Route entry that points to a NAT gateway    |VPC    |No |
       * |VPC system route entry      | VPC       | Yes |
       * |Route entry that points to an on-premises data center      |VBR      |Yes |
       * |BGP route    |VBR    |Yes |
       *
       * @param request PublishRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntriesWithOptions(const Models::PublishRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cloud Enterprise Network (CEN) supports the publish route entry feature. You can publish routing entries from a VPC or VBR loaded into CEN to CEN by invoking the PublishRouteEntries operation. If no route conflict exists, other network instances in CEN can learn the published routes.
       *
       * @description The following table lists the default publish status of each type of route entry in CEN. You can call the PublishRouteEntries operation to publish route entries that are not published to CEN.
       * | Route entry        | Instance to which the route entry belongs         |Published to CEN by default
       * |------------- |-----------------------|--------------------|
       * |Route entry that points to an ECS instance      |VPC       |No |
       * |Route entry that points to a VPN gateway      |VPC       |No |
       * |Route entry that points to a high availability (HA) virtual IP address    |VPC    |No |
       * |Route entry that points to a router interface    |VPC    |No |
       * |Route entry that points to an elastic network interfaces (ENIs)    |VPC    |No |
       * |Route entry that points to an IPv6 gateway    |VPC    |No |
       * |Route entry that points to a NAT gateway    |VPC    |No |
       * |VPC system route entry      | VPC       | Yes |
       * |Route entry that points to an on-premises data center      |VBR      |Yes |
       * |BGP route    |VBR    |Yes |
       *
       * @param request PublishRouteEntriesRequest
       * @return PublishRouteEntriesResponse
       */
      Models::PublishRouteEntriesResponse publishRouteEntries(const Models::PublishRouteEntriesRequest &request);

      /**
       * @summary Republishes an aggregate route.
       *
       * @description For aggregate routes that failed to be published or were partially published, you can call the **RefreshTransitRouteTableAggregation** operation to republish the aggregate route to Virtual Private Cloud (VPC) instances after you resolve the route issue.
       * If you resolve the problematic route by using one of the following methods, the system automatically republishes the aggregate route and you do not need to manually republish it:
       * - Delete the association forwarding relationship.
       * - Disable the route synchronization feature.
       * - Delete the VPC route table.
       * - Delete the aggregate route.
       * You can call the **DescribeTransitRouteTableAggregationDetail** operation to query the propagation status of an aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregationWithOptions(const Models::RefreshTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Republishes an aggregate route.
       *
       * @description For aggregate routes that failed to be published or were partially published, you can call the **RefreshTransitRouteTableAggregation** operation to republish the aggregate route to Virtual Private Cloud (VPC) instances after you resolve the route issue.
       * If you resolve the problematic route by using one of the following methods, the system automatically republishes the aggregate route and you do not need to manually republish it:
       * - Delete the association forwarding relationship.
       * - Disable the route synchronization feature.
       * - Delete the VPC route table.
       * - Delete the aggregate route.
       * You can call the **DescribeTransitRouteTableAggregationDetail** operation to query the propagation status of an aggregate route.
       *
       * @param request RefreshTransitRouteTableAggregationRequest
       * @return RefreshTransitRouteTableAggregationResponse
       */
      Models::RefreshTransitRouteTableAggregationResponse refreshTransitRouteTableAggregation(const Models::RefreshTransitRouteTableAggregationRequest &request);

      /**
       * @summary Calls the RegisterTransitRouterMulticastGroupMembers operation to create or add multicast members.
       *
       * @description Currently, Enterprise Edition transit routers support only elastic network interfaces (ENIs) as multicast members. You can call the `RegisterTransitRouterMulticastGroupMembers` operation to specify ENIs in the same region or cross-region ENIs as multicast members.
       * - If you specify the **NetworkInterfaceIds** parameter, you want to specify ENIs in the current region as multicast members. Make sure that the vSwitch to which the ENI belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you want to specify multicast members in a multicast group with the same multicast IP address in a different region as multicast members of your current multicast group. Make sure that you have created an inter-region connection. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *   For example, you have Multicast Domain 1 in the China (Hangzhou) region with Multicast Group 1, and Multicast Domain 2 in the China (Shanghai) region with Multicast Group 2. Multicast Group 1 and Multicast Group 2 have the same multicast IP address, and Multicast Group 2 in the China (Shanghai) region has Multicast Member 2. When you call the `RegisterTransitRouterMulticastGroupMembers` operation to create multicast members for Multicast Group 1 in the China (Hangzhou) region, if you set **PeerTransitRouterMulticastDomains** to the ID of Multicast Domain 2 in the China (Shanghai) region, Multicast Member 2 in Multicast Group 2 in the China (Shanghai) region also becomes a multicast member of Multicast Group 1 in the China (Hangzhou) region.
       * - The `RegisterTransitRouterMulticastGroupMembers` operation is asynchronous. After you send a request, the system returns a **RequestId** but the multicast member is not completely created. The creation task continues to run in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast member.
       * 	- If the multicast member is in the **Registering** state, the multicast member is being created. In this state, you can only query the multicast member but cannot perform other operations.
       * 	- If the multicast member is in the **Registered** state, the multicast member is created.
       *
       * @param request RegisterTransitRouterMulticastGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterTransitRouterMulticastGroupMembersResponse
       */
      Models::RegisterTransitRouterMulticastGroupMembersResponse registerTransitRouterMulticastGroupMembersWithOptions(const Models::RegisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the RegisterTransitRouterMulticastGroupMembers operation to create or add multicast members.
       *
       * @description Currently, Enterprise Edition transit routers support only elastic network interfaces (ENIs) as multicast members. You can call the `RegisterTransitRouterMulticastGroupMembers` operation to specify ENIs in the same region or cross-region ENIs as multicast members.
       * - If you specify the **NetworkInterfaceIds** parameter, you want to specify ENIs in the current region as multicast members. Make sure that the vSwitch to which the ENI belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       * - If you specify the **PeerTransitRouterMulticastDomains** parameter, you want to specify multicast members in a multicast group with the same multicast IP address in a different region as multicast members of your current multicast group. Make sure that you have created an inter-region connection. For more information, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html).
       *   For example, you have Multicast Domain 1 in the China (Hangzhou) region with Multicast Group 1, and Multicast Domain 2 in the China (Shanghai) region with Multicast Group 2. Multicast Group 1 and Multicast Group 2 have the same multicast IP address, and Multicast Group 2 in the China (Shanghai) region has Multicast Member 2. When you call the `RegisterTransitRouterMulticastGroupMembers` operation to create multicast members for Multicast Group 1 in the China (Hangzhou) region, if you set **PeerTransitRouterMulticastDomains** to the ID of Multicast Domain 2 in the China (Shanghai) region, Multicast Member 2 in Multicast Group 2 in the China (Shanghai) region also becomes a multicast member of Multicast Group 1 in the China (Hangzhou) region.
       * - The `RegisterTransitRouterMulticastGroupMembers` operation is asynchronous. After you send a request, the system returns a **RequestId** but the multicast member is not completely created. The creation task continues to run in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast member.
       * 	- If the multicast member is in the **Registering** state, the multicast member is being created. In this state, you can only query the multicast member but cannot perform other operations.
       * 	- If the multicast member is in the **Registered** state, the multicast member is created.
       *
       * @param request RegisterTransitRouterMulticastGroupMembersRequest
       * @return RegisterTransitRouterMulticastGroupMembersResponse
       */
      Models::RegisterTransitRouterMulticastGroupMembersResponse registerTransitRouterMulticastGroupMembers(const Models::RegisterTransitRouterMulticastGroupMembersRequest &request);

      /**
       * @summary Creates multicast sources to implement one-to-many multicast communication.
       *
       * @description - Only elastic network interfaces (ENIs) can be specified as multicast sources.
       * - RegisterTransitRouterMulticastGroupSources is an asynchronous operation. After a request is sent, the system returns a **RequestId** but the multicast source is not completely created. The creation task still runs in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source. 
       *    
       *     - If the multicast source is in the **Registering** state, the multicast source is being created. In this state, you can only query the multicast source but cannot perform other operations.
       *     - If the multicast source is in the **Registered** state, the multicast source is created.
       * ### Before you begin
       * Before you invoke the `RegisterTransitRouterMulticastGroupSources` operation to create a multicast source, make sure that the vSwitch to which the network interface controller (NIC) of the elastic network interfaces (ENIs) belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSourcesWithOptions(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multicast sources to implement one-to-many multicast communication.
       *
       * @description - Only elastic network interfaces (ENIs) can be specified as multicast sources.
       * - RegisterTransitRouterMulticastGroupSources is an asynchronous operation. After a request is sent, the system returns a **RequestId** but the multicast source is not completely created. The creation task still runs in the background. You can call the `ListTransitRouterMulticastGroups` operation to query the status of the multicast source. 
       *    
       *     - If the multicast source is in the **Registering** state, the multicast source is being created. In this state, you can only query the multicast source but cannot perform other operations.
       *     - If the multicast source is in the **Registered** state, the multicast source is created.
       * ### Before you begin
       * Before you invoke the `RegisterTransitRouterMulticastGroupSources` operation to create a multicast source, make sure that the vSwitch to which the network interface controller (NIC) of the elastic network interfaces (ENIs) belongs is associated with the multicast domain. For more information, see [AssociateTransitRouterMulticastDomain](https://help.aliyun.com/document_detail/429778.html).
       *
       * @param request RegisterTransitRouterMulticastGroupSourcesRequest
       * @return RegisterTransitRouterMulticastGroupSourcesResponse
       */
      Models::RegisterTransitRouterMulticastGroupSourcesResponse registerTransitRouterMulticastGroupSources(const Models::RegisterTransitRouterMulticastGroupSourcesRequest &request);

      /**
       * @summary Removes traffic classification rules from a traffic marking policy by calling the RemoveTrafficMatchRuleFromTrafficMarkingPolicy operation.
       *
       * @description - When you call the **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** operation:
       *     - If you specify traffic classification rule IDs (the **TrafficMarkRuleIds** parameter), the operation deletes the specified traffic classification rules.
       *     - If you do not specify traffic classification rule IDs (the **TrafficMarkRuleIds** parameter), the operation does not perform any action.
       *     If you want to delete specific traffic classification rules, make sure that you have specified the IDs of the traffic classification rules before you call this operation.
       * - **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the traffic classification rules are not immediately deleted. The deletion task runs in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of traffic classification rules. 
       *     - If a traffic classification rule is in the **Deleting** state, the rule is being deleted. In this state, you can only query the traffic classification rule. You cannot perform other operations on it.
       *     - If the specified traffic classification rule cannot be found, the rule has been deleted.
       *
       * @param request RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(const Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes traffic classification rules from a traffic marking policy by calling the RemoveTrafficMatchRuleFromTrafficMarkingPolicy operation.
       *
       * @description - When you call the **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** operation:
       *     - If you specify traffic classification rule IDs (the **TrafficMarkRuleIds** parameter), the operation deletes the specified traffic classification rules.
       *     - If you do not specify traffic classification rule IDs (the **TrafficMarkRuleIds** parameter), the operation does not perform any action.
       *     If you want to delete specific traffic classification rules, make sure that you have specified the IDs of the traffic classification rules before you call this operation.
       * - **RemoveTrafficMatchRuleFromTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the traffic classification rules are not immediately deleted. The deletion task runs in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of traffic classification rules. 
       *     - If a traffic classification rule is in the **Deleting** state, the rule is being deleted. In this state, you can only query the traffic classification rule. You cannot perform other operations on it.
       *     - If the specified traffic classification rule cannot be found, the rule has been deleted.
       *
       * @param request RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest
       * @return RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse removeTrafficMatchRuleFromTrafficMarkingPolicy(const Models::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request);

      /**
       * @deprecated OpenAPI RemoveTraficMatchRuleFromTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::RemoveTrafficMatchRuleFromTrafficMarkingPolicy instead.
       *
       * @summary Deletes traffic classification rules from a traffic marking policy.
       *
       * @description ### Precautions
       * The **RemoveTraficMatchRuleFromTrafficMarkingPolicy** operation is deprecated and will be discontinued. To delete traffic classification rules from a traffic marking policy, use the [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/452726.html) operation. This API documentation is no longer maintained.
       *
       * @param request RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(const Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveTraficMatchRuleFromTrafficMarkingPolicy is deprecated, please use Cbn::2017-09-12::RemoveTrafficMatchRuleFromTrafficMarkingPolicy instead.
       *
       * @summary Deletes traffic classification rules from a traffic marking policy.
       *
       * @description ### Precautions
       * The **RemoveTraficMatchRuleFromTrafficMarkingPolicy** operation is deprecated and will be discontinued. To delete traffic classification rules from a traffic marking policy, use the [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/452726.html) operation. This API documentation is no longer maintained.
       *
       * @param request RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest
       * @return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse
       */
      Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicy(const Models::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request);

      /**
       * @summary Replaces the transit router route table associated with a network instance connection.
       *
       * @description - Only network instance connections under an Enterprise Edition transit router support changing the associated transit router route table.
       * - **ReplaceTransitRouterRouteTableAssociation** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the transit router route table associated with the network instance connection has not been replaced yet. The replacement task is still running in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association forwarding status between the network instance connection and the new transit router route table.
       *     - If the association forwarding status is **Replacing**, the network instance connection is changing the associated transit router route table. In this state, you can only query the association forwarding relationship between the network instance connection and the transit router route table. You cannot perform other operations.
       *     - If the association forwarding status is **Active**, the network instance connection has successfully changed the associated transit router route table.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociationWithOptions(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the transit router route table associated with a network instance connection.
       *
       * @description - Only network instance connections under an Enterprise Edition transit router support changing the associated transit router route table.
       * - **ReplaceTransitRouterRouteTableAssociation** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the transit router route table associated with the network instance connection has not been replaced yet. The replacement task is still running in the background. You can call **ListTransitRouterRouteTableAssociations** to query the association forwarding status between the network instance connection and the new transit router route table.
       *     - If the association forwarding status is **Replacing**, the network instance connection is changing the associated transit router route table. In this state, you can only query the association forwarding relationship between the network instance connection and the transit router route table. You cannot perform other operations.
       *     - If the association forwarding status is **Active**, the network instance connection has successfully changed the associated transit router route table.
       *
       * @param request ReplaceTransitRouterRouteTableAssociationRequest
       * @return ReplaceTransitRouterRouteTableAssociationResponse
       */
      Models::ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociation(const Models::ReplaceTransitRouterRouteTableAssociationRequest &request);

      /**
       * @summary Configures a cloud service to add access configurations for on-premises networks by calling the ResolveAndRouteServiceInCen operation.
       *
       * @description Cloud services refer to Alibaba Cloud services that use the 100.64.0.0/10 CIDR block, such as Object Storage Service (OSS), Simple Log Service (SLS), and Data Transmission Service (DTS). If your on-premises network needs to access cloud services, you must load the Virtual Border Router (VBR) instance or Cloud Connect Network (CCN) instance associated with your on-premises network to a Cloud Enterprise Network (CEN) instance. You must also load a VPC-connected instance in the region where the cloud service resides to the same CEN instance. After loading, your on-premises network can access the VPC-connected instance in the region of the cloud service through CEN, and then access the cloud service through the VPC by forwarding traffic. The CEN handles the routing accordingly.
       * - Limits: This operation applies only to Basic Edition transit routers. On-premises networks associated with VBR instances can access only cloud services in the same region through CEN.
       *     For example, if the cloud service resides in the China (Beijing) region, only on-premises networks associated with VBR instances in the China (Beijing) region can access the cloud service.
       * - The **ResolveAndRouteServiceInCen** operation is asynchronous. After you send a request, the system returns a **RequestId** but the cloud service configuration is not yet complete. The background node for adding the configuration continues to run. You can invoke the **DescribeRouteServicesInCen** operation to query the status of the cloud service. 
       *     - If the cloud service is in the **Creating** state, the cloud service configuration is being added. In this state, you can only execute a query on the cloud service configuration and cannot execute other operations.
       *     - If the cloud service is in the **Active** state, the cloud service configuration is added.
       *     - If the cloud service is in the **Failed** state, the cloud service configuration failed to be added.
       * ### Before you begin
       * Before you invoke the ResolveAndRouteServiceInCen operation, make sure that the following conditions are met:
       * - The VBR or CCN instance with network connectivity to your on-premises network is loaded to the CEN instance.
       * - A VPC-connected instance in the region where the cloud service resides is loaded to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ResolveAndRouteServiceInCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResolveAndRouteServiceInCenResponse
       */
      Models::ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCenWithOptions(const Models::ResolveAndRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a cloud service to add access configurations for on-premises networks by calling the ResolveAndRouteServiceInCen operation.
       *
       * @description Cloud services refer to Alibaba Cloud services that use the 100.64.0.0/10 CIDR block, such as Object Storage Service (OSS), Simple Log Service (SLS), and Data Transmission Service (DTS). If your on-premises network needs to access cloud services, you must load the Virtual Border Router (VBR) instance or Cloud Connect Network (CCN) instance associated with your on-premises network to a Cloud Enterprise Network (CEN) instance. You must also load a VPC-connected instance in the region where the cloud service resides to the same CEN instance. After loading, your on-premises network can access the VPC-connected instance in the region of the cloud service through CEN, and then access the cloud service through the VPC by forwarding traffic. The CEN handles the routing accordingly.
       * - Limits: This operation applies only to Basic Edition transit routers. On-premises networks associated with VBR instances can access only cloud services in the same region through CEN.
       *     For example, if the cloud service resides in the China (Beijing) region, only on-premises networks associated with VBR instances in the China (Beijing) region can access the cloud service.
       * - The **ResolveAndRouteServiceInCen** operation is asynchronous. After you send a request, the system returns a **RequestId** but the cloud service configuration is not yet complete. The background node for adding the configuration continues to run. You can invoke the **DescribeRouteServicesInCen** operation to query the status of the cloud service. 
       *     - If the cloud service is in the **Creating** state, the cloud service configuration is being added. In this state, you can only execute a query on the cloud service configuration and cannot execute other operations.
       *     - If the cloud service is in the **Active** state, the cloud service configuration is added.
       *     - If the cloud service is in the **Failed** state, the cloud service configuration failed to be added.
       * ### Before you begin
       * Before you invoke the ResolveAndRouteServiceInCen operation, make sure that the following conditions are met:
       * - The VBR or CCN instance with network connectivity to your on-premises network is loaded to the CEN instance.
       * - A VPC-connected instance in the region where the cloud service resides is loaded to the CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       *
       * @param request ResolveAndRouteServiceInCenRequest
       * @return ResolveAndRouteServiceInCenResponse
       */
      Models::ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCen(const Models::ResolveAndRouteServiceInCenRequest &request);

      /**
       * @summary Revokes the permissions that allow a transit router to connect to a cross-account network instance.
       *
       * @description The `RevokeInstanceFromTransitRouter` operation only supports revoking the permissions that allow a transit router to connect to cross-account Virtual Private Cloud (VPC) instances, Virtual Border Router (VBR) instances, IPsec connections, and Express Connect Router (ECR) instances.
       * To revoke the permissions that allow a transit router to connect to a cross-account Cloud Connect Network (CCN) instance, call the [RevokeInstanceFromCbn](https://help.aliyun.com/document_detail/126142.html) operation.
       * ### Before you begin
       * Before you call the `RevokeInstanceFromTransitRouter` operation, make sure that the connection between the transit router and the VPC-connected instance is deleted.
       * - To delete the connection between an Enterprise Edition transit router and a VPC instance, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * - To delete the connection between an Enterprise Edition transit router and a VBR instance, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - To delete the connection between an Enterprise Edition transit router and an IPsec connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - To delete the connection between an Enterprise Edition transit router and an ECR instance, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - To delete the connection between a Basic Edition transit router and a VPC-connected instance, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *
       * @param request RevokeInstanceFromTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromTransitRouterResponse
       */
      Models::RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouterWithOptions(const Models::RevokeInstanceFromTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions that allow a transit router to connect to a cross-account network instance.
       *
       * @description The `RevokeInstanceFromTransitRouter` operation only supports revoking the permissions that allow a transit router to connect to cross-account Virtual Private Cloud (VPC) instances, Virtual Border Router (VBR) instances, IPsec connections, and Express Connect Router (ECR) instances.
       * To revoke the permissions that allow a transit router to connect to a cross-account Cloud Connect Network (CCN) instance, call the [RevokeInstanceFromCbn](https://help.aliyun.com/document_detail/126142.html) operation.
       * ### Before you begin
       * Before you call the `RevokeInstanceFromTransitRouter` operation, make sure that the connection between the transit router and the VPC-connected instance is deleted.
       * - To delete the connection between an Enterprise Edition transit router and a VPC instance, see [DeleteTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261220.html).
       * - To delete the connection between an Enterprise Edition transit router and a VBR instance, see [DeleteTransitRouterVbrAttachment](https://help.aliyun.com/document_detail/261223.html).
       * - To delete the connection between an Enterprise Edition transit router and an IPsec connection, see [DeleteTransitRouterVpnAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - To delete the connection between an Enterprise Edition transit router and an ECR instance, see [DeleteTransitRouterEcrAttachment](https://help.aliyun.com/document_detail/443992.html).
       * - To delete the connection between a Basic Edition transit router and a VPC-connected instance, see [DetachCenChildInstance](https://help.aliyun.com/document_detail/65915.html).
       *
       * @param request RevokeInstanceFromTransitRouterRequest
       * @return RevokeInstanceFromTransitRouterResponse
       */
      Models::RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouter(const Models::RevokeInstanceFromTransitRouterRequest &request);

      /**
       * @summary Configures the PrivateZone service by calling the RoutePrivateZoneInCenToVpc operation.
       *
       * @description PrivateZone is a private DNS resolution and management service based on the Alibaba Cloud Virtual Private Cloud (VPC) environment. After a Virtual Border Router (VBR) instance or a Cloud Connect Network (CCN) instance is attached to a Cloud Enterprise Network (CEN) instance, the associated on-premises network can access the PrivateZone service through CEN.
       * - On-premises networks associated with VBR instances and CCN instances can access only the PrivateZone service in the same region.
       *     For example, if the PrivateZone service is deployed in the China (Beijing) region, only on-premises networks associated with VBR instances in the China (Beijing) region and CCN instances in the Chinese mainland can access the PrivateZone service.
       * - The **RoutePrivateZoneInCenToVpc** operation is asynchronous. After you send a request, the system returns a **RequestId** but the PrivateZone service configuration is not complete. The configuration task continues to run in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service. 
       *     - If the PrivateZone service is in the **Creating** state, the configuration is being added. In this state, you can only query the PrivateZone service configuration. You cannot perform other operations.
       *     - If the PrivateZone service is in the **Active** state, the configuration is complete.
       *     - If the PrivateZone service is in the **Failed** state, the configuration failed to be added.
       * #### Before you begin
       * Before you invoke the **RoutePrivateZoneInCenToVpc** operation, make sure that the following conditions are met:
       * - The PrivateZone service is deployed. For more information, see [Alibaba Cloud DNS PrivateZone Getting Started](https://help.aliyun.com/document_detail/64627.html).
       * - The VPC-connected instance associated with the PrivateZone service, and the VBR instance or CCN instance in the access region are attached to the same CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       * - If your on-premises network uses a CCN instance to connect to Alibaba Cloud, and the CCN instance belongs to a different account from the VPC-connected instance or the CEN instance, complete the authorization for the CCN instance first. For more information, see [Cloud Connect Network authorization](https://help.aliyun.com/document_detail/106674.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpcWithOptions(const Models::RoutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the PrivateZone service by calling the RoutePrivateZoneInCenToVpc operation.
       *
       * @description PrivateZone is a private DNS resolution and management service based on the Alibaba Cloud Virtual Private Cloud (VPC) environment. After a Virtual Border Router (VBR) instance or a Cloud Connect Network (CCN) instance is attached to a Cloud Enterprise Network (CEN) instance, the associated on-premises network can access the PrivateZone service through CEN.
       * - On-premises networks associated with VBR instances and CCN instances can access only the PrivateZone service in the same region.
       *     For example, if the PrivateZone service is deployed in the China (Beijing) region, only on-premises networks associated with VBR instances in the China (Beijing) region and CCN instances in the Chinese mainland can access the PrivateZone service.
       * - The **RoutePrivateZoneInCenToVpc** operation is asynchronous. After you send a request, the system returns a **RequestId** but the PrivateZone service configuration is not complete. The configuration task continues to run in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service. 
       *     - If the PrivateZone service is in the **Creating** state, the configuration is being added. In this state, you can only query the PrivateZone service configuration. You cannot perform other operations.
       *     - If the PrivateZone service is in the **Active** state, the configuration is complete.
       *     - If the PrivateZone service is in the **Failed** state, the configuration failed to be added.
       * #### Before you begin
       * Before you invoke the **RoutePrivateZoneInCenToVpc** operation, make sure that the following conditions are met:
       * - The PrivateZone service is deployed. For more information, see [Alibaba Cloud DNS PrivateZone Getting Started](https://help.aliyun.com/document_detail/64627.html).
       * - The VPC-connected instance associated with the PrivateZone service, and the VBR instance or CCN instance in the access region are attached to the same CEN instance. For more information, see [AttachCenChildInstance](https://help.aliyun.com/document_detail/65902.html).
       * - If your on-premises network uses a CCN instance to connect to Alibaba Cloud, and the CCN instance belongs to a different account from the VPC-connected instance or the CEN instance, complete the authorization for the CCN instance first. For more information, see [Cloud Connect Network authorization](https://help.aliyun.com/document_detail/106674.html).
       *
       * @param request RoutePrivateZoneInCenToVpcRequest
       * @return RoutePrivateZoneInCenToVpcResponse
       */
      Models::RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpc(const Models::RoutePrivateZoneInCenToVpcRequest &request);

      /**
       * @summary Sets, modifies, or deletes the inter-region bandwidth between two regions in a bandwidth package of a Basic Edition transit router.
       *
       * @description This operation supports setting the inter-region bandwidth between two regions only in bandwidth packages of Basic Edition transit routers.
       * ### Before you begin
       * A bandwidth package instance is already associated with the target Cloud Enterprise Network (CEN) instance. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call **SetCenInterRegionBandwidthLimit** to set, modify, or delete the inter-region bandwidth:
       * - If **BandwidthLimit** is not 0, the inter-region bandwidth is set or modified.
       * - If **BandwidthLimit** is 0, the inter-region bandwidth is deleted.
       * ### Settings
       * - The maximum inter-region bandwidth cannot exceed the peak bandwidth of the bandwidth package instance to which it belongs.
       * - The total inter-region bandwidth under a bandwidth package instance cannot exceed the peak bandwidth of that bandwidth package instance.
       * - If the bandwidth multiplexing feature is enabled for the inter-region connection, modifying the inter-region bandwidth is not supported.
       * - The **SetCenInterRegionBandwidthLimit** operation supports setting, modifying, or deleting inter-region bandwidth only for Basic Edition transit routers.
       *     To set, modify, or delete inter-region bandwidth for Enterprise Edition transit routers, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), and [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimitWithOptions(const Models::SetCenInterRegionBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets, modifies, or deletes the inter-region bandwidth between two regions in a bandwidth package of a Basic Edition transit router.
       *
       * @description This operation supports setting the inter-region bandwidth between two regions only in bandwidth packages of Basic Edition transit routers.
       * ### Before you begin
       * A bandwidth package instance is already associated with the target Cloud Enterprise Network (CEN) instance. For more information, see [CreateCenBandwidthPackage](https://help.aliyun.com/document_detail/65919.html) and [AssociateCenBandwidthPackage](https://help.aliyun.com/document_detail/65934.html).
       * You can call **SetCenInterRegionBandwidthLimit** to set, modify, or delete the inter-region bandwidth:
       * - If **BandwidthLimit** is not 0, the inter-region bandwidth is set or modified.
       * - If **BandwidthLimit** is 0, the inter-region bandwidth is deleted.
       * ### Settings
       * - The maximum inter-region bandwidth cannot exceed the peak bandwidth of the bandwidth package instance to which it belongs.
       * - The total inter-region bandwidth under a bandwidth package instance cannot exceed the peak bandwidth of that bandwidth package instance.
       * - If the bandwidth multiplexing feature is enabled for the inter-region connection, modifying the inter-region bandwidth is not supported.
       * - The **SetCenInterRegionBandwidthLimit** operation supports setting, modifying, or deleting inter-region bandwidth only for Basic Edition transit routers.
       *     To set, modify, or delete inter-region bandwidth for Enterprise Edition transit routers, see [CreateTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261363.html), [UpdateTransitRouterPeerAttachmentAttribute](https://help.aliyun.com/document_detail/261229.html), and [DeleteTransitRouterPeerAttachment](https://help.aliyun.com/document_detail/261227.html).
       *
       * @param request SetCenInterRegionBandwidthLimitRequest
       * @return SetCenInterRegionBandwidthLimitResponse
       */
      Models::SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimit(const Models::SetCenInterRegionBandwidthLimitRequest &request);

      /**
       * @summary Creates and attaches tags to resources.
       *
       * @description - A tag consists of a tag key and a tag value. Both the tag key and tag value are required when you add a tag.
       * - If you want to add multiple tags to a Cloud Enterprise Network (CEN) instance, the tag keys of the tags must be unique within the instance.
       * - You can attach up to 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to resources.
       *
       * @description - A tag consists of a tag key and a tag value. Both the tag key and tag value are required when you add a tag.
       * - If you want to add multiple tags to a Cloud Enterprise Network (CEN) instance, the tag keys of the tags must be unique within the instance.
       * - You can attach up to 20 tags to a CEN instance.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Calls the TempUpgradeCenBandwidthPackageSpec operation to temporarily upgrade the specifications of a subscription bandwidth plan for Cloud Enterprise Network (CEN).
       *
       * @description Subscription bandwidth plans support the temporary upgrade feature. You can use this feature to increase the bandwidth value of a bandwidth plan within a specified period to flexibly handle business bandwidth fluctuations.
       * The minimum interval for a temporary upgrade is 3 hours. After the payment is completed, the bandwidth is upgraded immediately without service interruptions.
       * > After a temporary upgrade expires, the subscription bandwidth plan reverts to the original peak bandwidth. If the service traffic on the instance exceeds the original peak bandwidth limit, the traffic may be dropped due to throttling. Plan the expiration time of the temporary upgrade properly and make sure that the peak bandwidth matches your business requirements.
       * - The temporary upgrade feature is not available by default. To use this feature, contact your account manager.
       * - Pay-as-you-go bandwidth plans and expired subscription bandwidth plans do not support the temporary upgrade feature.
       * - The **TempUpgradeCenBandwidthPackageSpec** operation is asynchronous. After you call this operation, the system returns a **RequestId** but the bandwidth plan is not yet upgraded. The upgrade task continues to run in the background. You can call the **DescribeCenBandwidthPackages** operation to query the specifications of the bandwidth plan. If the specifications meet your expectations, the upgrade is complete.
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpecWithOptions(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the TempUpgradeCenBandwidthPackageSpec operation to temporarily upgrade the specifications of a subscription bandwidth plan for Cloud Enterprise Network (CEN).
       *
       * @description Subscription bandwidth plans support the temporary upgrade feature. You can use this feature to increase the bandwidth value of a bandwidth plan within a specified period to flexibly handle business bandwidth fluctuations.
       * The minimum interval for a temporary upgrade is 3 hours. After the payment is completed, the bandwidth is upgraded immediately without service interruptions.
       * > After a temporary upgrade expires, the subscription bandwidth plan reverts to the original peak bandwidth. If the service traffic on the instance exceeds the original peak bandwidth limit, the traffic may be dropped due to throttling. Plan the expiration time of the temporary upgrade properly and make sure that the peak bandwidth matches your business requirements.
       * - The temporary upgrade feature is not available by default. To use this feature, contact your account manager.
       * - Pay-as-you-go bandwidth plans and expired subscription bandwidth plans do not support the temporary upgrade feature.
       * - The **TempUpgradeCenBandwidthPackageSpec** operation is asynchronous. After you call this operation, the system returns a **RequestId** but the bandwidth plan is not yet upgraded. The upgrade task continues to run in the background. You can call the **DescribeCenBandwidthPackages** operation to query the specifications of the bandwidth plan. If the specifications meet your expectations, the upgrade is complete.
       *
       * @param request TempUpgradeCenBandwidthPackageSpecRequest
       * @return TempUpgradeCenBandwidthPackageSpecResponse
       */
      Models::TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpec(const Models::TempUpgradeCenBandwidthPackageSpecRequest &request);

      /**
       * @summary Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. After the disassociation, the bandwidth package can be associated with another CEN instance.
       *
       * @description Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. Before you call this operation, make sure that no inter-region bandwidth is configured for the bandwidth package. You can call [DescribeCenInterRegionBandwidthLimits](https://help.aliyun.com/document_detail/468275.html) to query inter-region bandwidth, and then call [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html) to set BandwidthLimit to 0 to delete the configured inter-region bandwidth.
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackageWithOptions(const Models::UnassociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. After the disassociation, the bandwidth package can be associated with another CEN instance.
       *
       * @description Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. Before you call this operation, make sure that no inter-region bandwidth is configured for the bandwidth package. You can call [DescribeCenInterRegionBandwidthLimits](https://help.aliyun.com/document_detail/468275.html) to query inter-region bandwidth, and then call [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html) to set BandwidthLimit to 0 to delete the configured inter-region bandwidth.
       *
       * @param request UnassociateCenBandwidthPackageRequest
       * @return UnassociateCenBandwidthPackageResponse
       */
      Models::UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackage(const Models::UnassociateCenBandwidthPackageRequest &request);

      /**
       * @summary Deletes a PrivateZone service configuration by calling the UnroutePrivateZoneInCenToVpc operation.
       *
       * @description **UnroutePrivateZoneInCenToVpc** is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the PrivateZone service configuration is not immediately deleted. The deletion task continues to run in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service. 
       * - If the PrivateZone service is in the **Deleting** state, the PrivateZone service configuration is being deleted. In this state, you can only query the PrivateZone service configuration. You cannot perform other operations.
       * - If the specified PrivateZone service configuration cannot be found, the deletion is complete.
       * If a PrivateZone configuration exists with the access region set to a Cloud Connect Network region, delete the PrivateZone configuration for the Cloud Connect Network region first, and then delete the PrivateZone configurations for other access regions.
       *
       * @param request UnroutePrivateZoneInCenToVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnroutePrivateZoneInCenToVpcResponse
       */
      Models::UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpcWithOptions(const Models::UnroutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PrivateZone service configuration by calling the UnroutePrivateZoneInCenToVpc operation.
       *
       * @description **UnroutePrivateZoneInCenToVpc** is an asynchronous operation. After you call this operation, the system returns a **RequestId** but the PrivateZone service configuration is not immediately deleted. The deletion task continues to run in the background. You can call the **DescribeCenPrivateZoneRoutes** operation to query the status of the PrivateZone service. 
       * - If the PrivateZone service is in the **Deleting** state, the PrivateZone service configuration is being deleted. In this state, you can only query the PrivateZone service configuration. You cannot perform other operations.
       * - If the specified PrivateZone service configuration cannot be found, the deletion is complete.
       * If a PrivateZone configuration exists with the access region set to a Cloud Connect Network region, delete the PrivateZone configuration for the Cloud Connect Network region first, and then delete the PrivateZone configurations for other access regions.
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
       * @summary Modifies the name and description of a traffic scheduling policy.
       *
       * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttributeWithOptions(const Models::UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a traffic scheduling policy.
       *
       * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
       * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttribute(const Models::UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request);

      /**
       * @summary Calls the UpdateCenInterRegionTrafficQosQueueAttribute operation to modify the name, description, cross-region bandwidth, and DSCP value configurations of a queue in a traffic scheduling policy.
       *
       * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
       */
      Models::UpdateCenInterRegionTrafficQosQueueAttributeResponse updateCenInterRegionTrafficQosQueueAttributeWithOptions(const Models::UpdateCenInterRegionTrafficQosQueueAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateCenInterRegionTrafficQosQueueAttribute operation to modify the name, description, cross-region bandwidth, and DSCP value configurations of a queue in a traffic scheduling policy.
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
       * @summary Modifies the name and description of a transit router instance.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the modification of the transit router instance is not yet complete. The modification task continues to run in the background. You can call the **ListTransitRouters** operation to query the status of the transit router instance. 
       * - If the transit router instance is in the **Modifying** state, the transit router instance is being modified. In this state, you can only query the transit router instance but cannot perform other operations on it.
       * - If the transit router instance is in the **Active** state, the transit router instance has been modified.
       *
       * @param request UpdateTransitRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouterWithOptions(const Models::UpdateTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a transit router instance.
       *
       * @description **UpdateTransitRouter** is an asynchronous operation. After you send a request, the system returns a **RequestId**, but the modification of the transit router instance is not yet complete. The modification task continues to run in the background. You can call the **ListTransitRouters** operation to query the status of the transit router instance. 
       * - If the transit router instance is in the **Modifying** state, the transit router instance is being modified. In this state, you can only query the transit router instance but cannot perform other operations on it.
       * - If the transit router instance is in the **Active** state, the transit router instance has been modified.
       *
       * @param request UpdateTransitRouterRequest
       * @return UpdateTransitRouterResponse
       */
      Models::UpdateTransitRouterResponse updateTransitRouter(const Models::UpdateTransitRouterRequest &request);

      /**
       * @summary Calls the UpdateTransitRouterEcrAttachmentAttribute operation to modify the name and description of an Express Connect Router (ECR) connection under an Enterprise Edition transit router.
       *
       * @description UpdateTransitRouterEcrAttachmentAttribute is an asynchronous operation. The system returns a RequestId immediately, but the ECR connection has not been modified yet because the modification task is still running in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of the ECR connection.
       * If the ECR connection is in the Modifying state, the ECR connection is being modified. In this state, you can only query the ECR connection but cannot perform other operations on it.
       * If the ECR connection is in the Attached state, the ECR connection has been modified.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateTransitRouterEcrAttachmentAttribute operation to modify the name and description of an Express Connect Router (ECR) connection under an Enterprise Edition transit router.
       *
       * @description UpdateTransitRouterEcrAttachmentAttribute is an asynchronous operation. The system returns a RequestId immediately, but the ECR connection has not been modified yet because the modification task is still running in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of the ECR connection.
       * If the ECR connection is in the Modifying state, the ECR connection is being modified. In this state, you can only query the ECR connection but cannot perform other operations on it.
       * If the ECR connection is in the Attached state, the ECR connection has been modified.
       *
       * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
       * @return UpdateTransitRouterEcrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterEcrAttachmentAttributeResponse updateTransitRouterEcrAttachmentAttribute(const Models::UpdateTransitRouterEcrAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the configuration of an inter-region connection on an Enterprise Edition transit router by calling the UpdateTransitRouterPeerAttachmentAttribute operation.
       *
       * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the inter-region connection is not yet modified. The modification task continues to run in the background. You can call **ListTransitRouterPeerAttachments** to query the status of the inter-region connection.
       * - If the inter-region connection is in the **Modifying** state, the inter-region connection is being modified. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       * - If the inter-region connection is in the **Attached** state, the inter-region connection is modified.
       *
       * @param request UpdateTransitRouterPeerAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterPeerAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttributeWithOptions(const Models::UpdateTransitRouterPeerAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an inter-region connection on an Enterprise Edition transit router by calling the UpdateTransitRouterPeerAttachmentAttribute operation.
       *
       * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the inter-region connection is not yet modified. The modification task continues to run in the background. You can call **ListTransitRouterPeerAttachments** to query the status of the inter-region connection.
       * - If the inter-region connection is in the **Modifying** state, the inter-region connection is being modified. In this state, you can only query the inter-region connection but cannot perform other operations on it.
       * - If the inter-region connection is in the **Attached** state, the inter-region connection is modified.
       *
       * @param request UpdateTransitRouterPeerAttachmentAttributeRequest
       * @return UpdateTransitRouterPeerAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttribute(const Models::UpdateTransitRouterPeerAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a route entry in an Enterprise Edition transit router route table.
       *
       * @param request UpdateTransitRouterRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterRouteEntryResponse
       */
      Models::UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntryWithOptions(const Models::UpdateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a route entry in an Enterprise Edition transit router route table.
       *
       * @param request UpdateTransitRouterRouteEntryRequest
       * @return UpdateTransitRouterRouteEntryResponse
       */
      Models::UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntry(const Models::UpdateTransitRouterRouteEntryRequest &request);

      /**
       * @summary Calls the UpdateTransitRouterRouteTable operation to modify the name and description of an Enterprise Edition transit router route table and to enable or disable multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTableWithOptions(const Models::UpdateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateTransitRouterRouteTable operation to modify the name and description of an Enterprise Edition transit router route table and to enable or disable multi-region equal-cost multi-path (ECMP) routing.
       *
       * @param request UpdateTransitRouterRouteTableRequest
       * @return UpdateTransitRouterRouteTableResponse
       */
      Models::UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTable(const Models::UpdateTransitRouterRouteTableRequest &request);

      /**
       * @summary Modifies the name, description, and automatic route forwarding settings of a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VBR connection is not yet modified. The modification task continues to run in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection. 
       * - If the VBR connection is in the **Modifying** state, the VBR connection is being modified. In this state, you can only query the VBR connection but cannot perform other operations.
       * - If the VBR connection is in the **Attached** state, the VBR connection is modified.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and automatic route forwarding settings of a virtual border router (VBR) connection on an Enterprise Edition transit router.
       *
       * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VBR connection is not yet modified. The modification task continues to run in the background. You can call **ListTransitRouterVbrAttachments** to query the status of the VBR connection. 
       * - If the VBR connection is in the **Modifying** state, the VBR connection is being modified. In this state, you can only query the VBR connection but cannot perform other operations.
       * - If the VBR connection is in the **Attached** state, the VBR connection is modified.
       *
       * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
       * @return UpdateTransitRouterVbrAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttribute(const Models::UpdateTransitRouterVbrAttachmentAttributeRequest &request);

      /**
       * @summary Invokes the UpdateTransitRouterVpcAttachmentAttribute operation to modify the name and description of a VPC connection under an Enterprise Edition transit router and specifies whether the Enterprise Edition transit router automatically publishes routing to the VPC-connected instance.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VPC connection has not been modified. The modification task continues to run in the background. You can call **ListTransitRouterVpcAttachments** to query the status of the VPC connection. 
       * - If the VPC connection is in the **Modifying** state, the VPC connection is being modified. In this state, you can only query the VPC connection but cannot perform other operations.
       * - If the VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param tmpReq UpdateTransitRouterVpcAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpcAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpcAttachmentAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpdateTransitRouterVpcAttachmentAttribute operation to modify the name and description of a VPC connection under an Enterprise Edition transit router and specifies whether the Enterprise Edition transit router automatically publishes routing to the VPC-connected instance.
       *
       * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the VPC connection has not been modified. The modification task continues to run in the background. You can call **ListTransitRouterVpcAttachments** to query the status of the VPC connection. 
       * - If the VPC connection is in the **Modifying** state, the VPC connection is being modified. In this state, you can only query the VPC connection but cannot perform other operations.
       * - If the VPC connection is in the **Attached** state, the VPC connection is modified.
       *
       * @param request UpdateTransitRouterVpcAttachmentAttributeRequest
       * @return UpdateTransitRouterVpcAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttribute(const Models::UpdateTransitRouterVpcAttachmentAttributeRequest &request);

      /**
       * @summary Modifies the zones and vSwitches associated with a virtual private cloud (VPC) connection by calling the UpdateTransitRouterVpcAttachmentZones operation.
       *
       * @description - When you add zones and vSwitches to a VPC connection, make sure that the vSwitch has an idle IP address. During the modification procedure, the Enterprise Edition transit router creates an elastic network interfaces (ENIs) in the vSwitch (which occupies one IP address of the vSwitch) as the interface for routing traffic between the VPC-connected instance and the Enterprise Edition transit router.
       * - The **UpdateTransitRouterVpcAttachmentZones** operation is asynchronous. After you send a request, the system returns a **RequestId** but the VPC connection is not yet modified. The modification task continues to run in the background. You can invoke the **ListTransitRouterVpcAttachments** operation to query the status of the VPC connection.
       *     - If the VPC connection is in the **Modifying** state, the VPC connection is being modified. In this state, you can only query the VPC connection but cannot perform other operations.
       *     - If the VPC connection is in the **Attached** state, the VPC connection is modified.
       * - At least one zone and vSwitch mapping must be retained under a **VPC connection ID**. You cannot delete all zone and vSwitch mappings.
       *
       * @param request UpdateTransitRouterVpcAttachmentZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpcAttachmentZonesResponse
       */
      Models::UpdateTransitRouterVpcAttachmentZonesResponse updateTransitRouterVpcAttachmentZonesWithOptions(const Models::UpdateTransitRouterVpcAttachmentZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the zones and vSwitches associated with a virtual private cloud (VPC) connection by calling the UpdateTransitRouterVpcAttachmentZones operation.
       *
       * @description - When you add zones and vSwitches to a VPC connection, make sure that the vSwitch has an idle IP address. During the modification procedure, the Enterprise Edition transit router creates an elastic network interfaces (ENIs) in the vSwitch (which occupies one IP address of the vSwitch) as the interface for routing traffic between the VPC-connected instance and the Enterprise Edition transit router.
       * - The **UpdateTransitRouterVpcAttachmentZones** operation is asynchronous. After you send a request, the system returns a **RequestId** but the VPC connection is not yet modified. The modification task continues to run in the background. You can invoke the **ListTransitRouterVpcAttachments** operation to query the status of the VPC connection.
       *     - If the VPC connection is in the **Modifying** state, the VPC connection is being modified. In this state, you can only query the VPC connection but cannot perform other operations.
       *     - If the VPC connection is in the **Attached** state, the VPC connection is modified.
       * - At least one zone and vSwitch mapping must be retained under a **VPC connection ID**. You cannot delete all zone and vSwitch mappings.
       *
       * @param request UpdateTransitRouterVpcAttachmentZonesRequest
       * @return UpdateTransitRouterVpcAttachmentZonesResponse
       */
      Models::UpdateTransitRouterVpcAttachmentZonesResponse updateTransitRouterVpcAttachmentZones(const Models::UpdateTransitRouterVpcAttachmentZonesRequest &request);

      /**
       * @summary Calls the UpdateTransitRouterVpnAttachmentAttribute operation to modify the name, description, and whether to automatically publish route entries for a VPN connection under an Enterprise Edition transit router.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttributeWithOptions(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateTransitRouterVpnAttachmentAttribute operation to modify the name, description, and whether to automatically publish route entries for a VPN connection under an Enterprise Edition transit router.
       *
       * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
       * @return UpdateTransitRouterVpnAttachmentAttributeResponse
       */
      Models::UpdateTransitRouterVpnAttachmentAttributeResponse updateTransitRouterVpnAttachmentAttribute(const Models::UpdateTransitRouterVpnAttachmentAttributeRequest &request);

      /**
       * @summary Calls the WithdrawPublishedRouteEntries operation to withdraw routing entries that have been published from a virtual private cloud (VPC) or virtual border router (VBR) instance to Cloud Enterprise Network (CEN).
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntriesWithOptions(const Models::WithdrawPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the WithdrawPublishedRouteEntries operation to withdraw routing entries that have been published from a virtual private cloud (VPC) or virtual border router (VBR) instance to Cloud Enterprise Network (CEN).
       *
       * @param request WithdrawPublishedRouteEntriesRequest
       * @return WithdrawPublishedRouteEntriesResponse
       */
      Models::WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntries(const Models::WithdrawPublishedRouteEntriesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
