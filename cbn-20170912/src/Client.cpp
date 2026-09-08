#include <darabonba/Core.hpp>
#include <alibabacloud/Cbn20170912.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cbn20170912::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cbn20170912
{

AlibabaCloud::Cbn20170912::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("cbn", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

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
ActiveFlowLogResponse Client::activeFlowLogWithOptions(const ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveFlowLog"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveFlowLogResponse>();
}

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
ActiveFlowLogResponse Client::activeFlowLog(const ActiveFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeFlowLogWithOptions(request, runtime);
}

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
AddTrafficMatchRuleToTrafficMarkingPolicyResponse Client::addTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.getTrafficMatchRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTrafficMatchRuleToTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTrafficMatchRuleToTrafficMarkingPolicyResponse>();
}

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
AddTrafficMatchRuleToTrafficMarkingPolicyResponse Client::addTrafficMatchRuleToTrafficMarkingPolicy(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTrafficMatchRuleToTrafficMarkingPolicyWithOptions(request, runtime);
}

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
AddTraficMatchRuleToTrafficMarkingPolicyResponse Client::addTraficMatchRuleToTrafficMarkingPolicyWithOptions(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.getTrafficMatchRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTraficMatchRuleToTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTraficMatchRuleToTrafficMarkingPolicyResponse>();
}

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
AddTraficMatchRuleToTrafficMarkingPolicyResponse Client::addTraficMatchRuleToTrafficMarkingPolicy(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTraficMatchRuleToTrafficMarkingPolicyWithOptions(request, runtime);
}

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
AssociateCenBandwidthPackageResponse Client::associateCenBandwidthPackageWithOptions(const AssociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateCenBandwidthPackage"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateCenBandwidthPackageResponse>();
}

/**
 * @summary Associates a bandwidth package instance with a Cloud Enterprise Network (CEN) instance.
 *
 * @description A CEN instance supports binding multiple bandwidth packages, but does not support binding multiple bandwidth packages with the same connected areas.
 * For example, if a CEN instance already has a bandwidth package bound for the Chinese mainland-to-Chinese mainland connected areas, you cannot bind another bandwidth package for the Chinese mainland-to-Chinese mainland connected areas. However, you can bind a bandwidth package for the Chinese mainland-to-North America connected areas.
 *
 * @param request AssociateCenBandwidthPackageRequest
 * @return AssociateCenBandwidthPackageResponse
 */
AssociateCenBandwidthPackageResponse Client::associateCenBandwidthPackage(const AssociateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateCenBandwidthPackageWithOptions(request, runtime);
}

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
AssociateTransitRouterAttachmentWithRouteTableResponse Client::associateTransitRouterAttachmentWithRouteTableWithOptions(const AssociateTransitRouterAttachmentWithRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateTransitRouterAttachmentWithRouteTable"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateTransitRouterAttachmentWithRouteTableResponse>();
}

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
AssociateTransitRouterAttachmentWithRouteTableResponse Client::associateTransitRouterAttachmentWithRouteTable(const AssociateTransitRouterAttachmentWithRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateTransitRouterAttachmentWithRouteTableWithOptions(request, runtime);
}

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
AssociateTransitRouterMulticastDomainResponse Client::associateTransitRouterMulticastDomainWithOptions(const AssociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateTransitRouterMulticastDomain"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateTransitRouterMulticastDomainResponse>();
}

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
AssociateTransitRouterMulticastDomainResponse Client::associateTransitRouterMulticastDomain(const AssociateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
AttachCenChildInstanceResponse Client::attachCenChildInstanceWithOptions(const AttachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.getChildInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachCenChildInstance"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachCenChildInstanceResponse>();
}

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
AttachCenChildInstanceResponse Client::attachCenChildInstance(const AttachCenChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCenChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries whether the transit router service is activated for the current Alibaba Cloud account.
 *
 * @param request CheckTransitRouterServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTransitRouterServiceResponse
 */
CheckTransitRouterServiceResponse Client::checkTransitRouterServiceWithOptions(const CheckTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckTransitRouterService"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTransitRouterServiceResponse>();
}

/**
 * @summary Queries whether the transit router service is activated for the current Alibaba Cloud account.
 *
 * @param request CheckTransitRouterServiceRequest
 * @return CheckTransitRouterServiceResponse
 */
CheckTransitRouterServiceResponse Client::checkTransitRouterService(const CheckTransitRouterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkTransitRouterServiceWithOptions(request, runtime);
}

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
CreateCenResponse Client::createCenWithOptions(const CreateCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.getProtectionLevel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenResponse>();
}

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
CreateCenResponse Client::createCen(const CreateCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenWithOptions(request, runtime);
}

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
CreateCenBandwidthPackageResponse Client::createCenBandwidthPackageWithOptions(const CreateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthPackageChargeType()) {
    query["BandwidthPackageChargeType"] = request.getBandwidthPackageChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGeographicRegionAId()) {
    query["GeographicRegionAId"] = request.getGeographicRegionAId();
  }

  if (!!request.hasGeographicRegionBId()) {
    query["GeographicRegionBId"] = request.getGeographicRegionBId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenBandwidthPackage"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenBandwidthPackageResponse>();
}

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
CreateCenBandwidthPackageResponse Client::createCenBandwidthPackage(const CreateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenBandwidthPackageWithOptions(request, runtime);
}

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
CreateCenChildInstanceRouteEntryToAttachmentResponse Client::createCenChildInstanceRouteEntryToAttachmentWithOptions(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenChildInstanceRouteEntryToAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenChildInstanceRouteEntryToAttachmentResponse>();
}

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
CreateCenChildInstanceRouteEntryToAttachmentResponse Client::createCenChildInstanceRouteEntryToAttachment(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

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
CreateCenChildInstanceRouteEntryToCenResponse Client::createCenChildInstanceRouteEntryToCenWithOptions(const CreateCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceAliUid()) {
    query["ChildInstanceAliUid"] = request.getChildInstanceAliUid();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenChildInstanceRouteEntryToCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenChildInstanceRouteEntryToCenResponse>();
}

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
CreateCenChildInstanceRouteEntryToCenResponse Client::createCenChildInstanceRouteEntryToCen(const CreateCenChildInstanceRouteEntryToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

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
CreateCenInterRegionTrafficQosPolicyResponse Client::createCenInterRegionTrafficQosPolicyWithOptions(const CreateCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthGuaranteeMode()) {
    query["BandwidthGuaranteeMode"] = request.getBandwidthGuaranteeMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConsoleDryRun()) {
    query["ConsoleDryRun"] = request.getConsoleDryRun();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.getTrafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.getTrafficQosPolicyName();
  }

  if (!!request.hasTrafficQosQueues()) {
    query["TrafficQosQueues"] = request.getTrafficQosQueues();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenInterRegionTrafficQosPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenInterRegionTrafficQosPolicyResponse>();
}

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
CreateCenInterRegionTrafficQosPolicyResponse Client::createCenInterRegionTrafficQosPolicy(const CreateCenInterRegionTrafficQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

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
CreateCenInterRegionTrafficQosQueueResponse Client::createCenInterRegionTrafficQosQueueWithOptions(const CreateCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDscps()) {
    query["Dscps"] = request.getDscps();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosQueueDescription()) {
    query["QosQueueDescription"] = request.getQosQueueDescription();
  }

  if (!!request.hasQosQueueName()) {
    query["QosQueueName"] = request.getQosQueueName();
  }

  if (!!request.hasRemainBandwidthPercent()) {
    query["RemainBandwidthPercent"] = request.getRemainBandwidthPercent();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.getTrafficQosPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenInterRegionTrafficQosQueue"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenInterRegionTrafficQosQueueResponse>();
}

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
CreateCenInterRegionTrafficQosQueueResponse Client::createCenInterRegionTrafficQosQueue(const CreateCenInterRegionTrafficQosQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenInterRegionTrafficQosQueueWithOptions(request, runtime);
}

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
CreateCenRouteMapResponse Client::createCenRouteMapWithOptions(const CreateCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsPathMatchMode()) {
    query["AsPathMatchMode"] = request.getAsPathMatchMode();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.getCenRegionId();
  }

  if (!!request.hasCidrMatchMode()) {
    query["CidrMatchMode"] = request.getCidrMatchMode();
  }

  if (!!request.hasCommunityMatchMode()) {
    query["CommunityMatchMode"] = request.getCommunityMatchMode();
  }

  if (!!request.hasCommunityOperateMode()) {
    query["CommunityOperateMode"] = request.getCommunityOperateMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationChildInstanceTypes()) {
    query["DestinationChildInstanceTypes"] = request.getDestinationChildInstanceTypes();
  }

  if (!!request.hasDestinationCidrBlocks()) {
    query["DestinationCidrBlocks"] = request.getDestinationCidrBlocks();
  }

  if (!!request.hasDestinationInstanceIds()) {
    query["DestinationInstanceIds"] = request.getDestinationInstanceIds();
  }

  if (!!request.hasDestinationInstanceIdsReverseMatch()) {
    query["DestinationInstanceIdsReverseMatch"] = request.getDestinationInstanceIdsReverseMatch();
  }

  if (!!request.hasDestinationRegionIds()) {
    query["DestinationRegionIds"] = request.getDestinationRegionIds();
  }

  if (!!request.hasDestinationRouteTableIds()) {
    query["DestinationRouteTableIds"] = request.getDestinationRouteTableIds();
  }

  if (!!request.hasMapResult()) {
    query["MapResult"] = request.getMapResult();
  }

  if (!!request.hasMatchAddressType()) {
    query["MatchAddressType"] = request.getMatchAddressType();
  }

  if (!!request.hasMatchAsns()) {
    query["MatchAsns"] = request.getMatchAsns();
  }

  if (!!request.hasMatchCommunitySet()) {
    query["MatchCommunitySet"] = request.getMatchCommunitySet();
  }

  if (!!request.hasNextPriority()) {
    query["NextPriority"] = request.getNextPriority();
  }

  if (!!request.hasOperateCommunitySet()) {
    query["OperateCommunitySet"] = request.getOperateCommunitySet();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPreference()) {
    query["Preference"] = request.getPreference();
  }

  if (!!request.hasPrependAsPath()) {
    query["PrependAsPath"] = request.getPrependAsPath();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTypes()) {
    query["RouteTypes"] = request.getRouteTypes();
  }

  if (!!request.hasSourceChildInstanceTypes()) {
    query["SourceChildInstanceTypes"] = request.getSourceChildInstanceTypes();
  }

  if (!!request.hasSourceInstanceIds()) {
    query["SourceInstanceIds"] = request.getSourceInstanceIds();
  }

  if (!!request.hasSourceInstanceIdsReverseMatch()) {
    query["SourceInstanceIdsReverseMatch"] = request.getSourceInstanceIdsReverseMatch();
  }

  if (!!request.hasSourceRegionIds()) {
    query["SourceRegionIds"] = request.getSourceRegionIds();
  }

  if (!!request.hasSourceRouteTableIds()) {
    query["SourceRouteTableIds"] = request.getSourceRouteTableIds();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  if (!!request.hasTransmitDirection()) {
    query["TransmitDirection"] = request.getTransmitDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenRouteMap"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenRouteMapResponse>();
}

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
CreateCenRouteMapResponse Client::createCenRouteMap(const CreateCenRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenRouteMapWithOptions(request, runtime);
}

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
CreateFlowlogResponse Client::createFlowlogWithOptions(const CreateFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLogFormatString()) {
    query["LogFormatString"] = request.getLogFormatString();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowlog"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowlogResponse>();
}

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
CreateFlowlogResponse Client::createFlowlog(const CreateFlowlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowlogWithOptions(request, runtime);
}

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
CreateTrafficMarkingPolicyResponse Client::createTrafficMarkingPolicyWithOptions(const CreateTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasMarkingDscp()) {
    query["MarkingDscp"] = request.getMarkingDscp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.getTrafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.getTrafficMarkingPolicyName();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.getTrafficMatchRules();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficMarkingPolicyResponse>();
}

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
CreateTrafficMarkingPolicyResponse Client::createTrafficMarkingPolicy(const CreateTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrafficMarkingPolicyWithOptions(request, runtime);
}

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
CreateTransitRouteTableAggregationResponse Client::createTransitRouteTableAggregationWithOptions(const CreateTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouteTableAggregationShrinkRequest request = CreateTransitRouteTableAggregationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouteTableAggregationScopeList()) {
    request.setTransitRouteTableAggregationScopeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransitRouteTableAggregationScopeList(), "TransitRouteTableAggregationScopeList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableAggregationDescription()) {
    query["TransitRouteTableAggregationDescription"] = request.getTransitRouteTableAggregationDescription();
  }

  if (!!request.hasTransitRouteTableAggregationName()) {
    query["TransitRouteTableAggregationName"] = request.getTransitRouteTableAggregationName();
  }

  if (!!request.hasTransitRouteTableAggregationScope()) {
    query["TransitRouteTableAggregationScope"] = request.getTransitRouteTableAggregationScope();
  }

  if (!!request.hasTransitRouteTableAggregationScopeListShrink()) {
    query["TransitRouteTableAggregationScopeList"] = request.getTransitRouteTableAggregationScopeListShrink();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouteTableAggregation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouteTableAggregationResponse>();
}

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
CreateTransitRouteTableAggregationResponse Client::createTransitRouteTableAggregation(const CreateTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouteTableAggregationWithOptions(request, runtime);
}

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
CreateTransitRouterResponse Client::createTransitRouterWithOptions(const CreateTransitRouterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouterShrinkRequest request = CreateTransitRouterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouterCidrList()) {
    request.setTransitRouterCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransitRouterCidrList(), "TransitRouterCidrList", "json"));
  }

  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSupportMulticast()) {
    query["SupportMulticast"] = request.getSupportMulticast();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterCidrListShrink()) {
    query["TransitRouterCidrList"] = request.getTransitRouterCidrListShrink();
  }

  if (!!request.hasTransitRouterDescription()) {
    query["TransitRouterDescription"] = request.getTransitRouterDescription();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.getTransitRouterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterResponse>();
}

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
CreateTransitRouterResponse Client::createTransitRouter(const CreateTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterWithOptions(request, runtime);
}

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
CreateTransitRouterCidrResponse Client::createTransitRouterCidrWithOptions(const CreateTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPublishCidrRoute()) {
    query["PublishCidrRoute"] = request.getPublishCidrRoute();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterCidr"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterCidrResponse>();
}

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
CreateTransitRouterCidrResponse Client::createTransitRouterCidr(const CreateTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterCidrWithOptions(request, runtime);
}

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
CreateTransitRouterEcrAttachmentResponse Client::createTransitRouterEcrAttachmentWithOptions(const CreateTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    query["EcrId"] = request.getEcrId();
  }

  if (!!request.hasEcrOwnerId()) {
    query["EcrOwnerId"] = request.getEcrOwnerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterEcrAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterEcrAttachmentResponse>();
}

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
CreateTransitRouterEcrAttachmentResponse Client::createTransitRouterEcrAttachment(const CreateTransitRouterEcrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterEcrAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterMulticastDomainResponse Client::createTransitRouterMulticastDomainWithOptions(const CreateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.getOptions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterMulticastDomainDescription()) {
    query["TransitRouterMulticastDomainDescription"] = request.getTransitRouterMulticastDomainDescription();
  }

  if (!!request.hasTransitRouterMulticastDomainName()) {
    query["TransitRouterMulticastDomainName"] = request.getTransitRouterMulticastDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterMulticastDomain"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterMulticastDomainResponse>();
}

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
CreateTransitRouterMulticastDomainResponse Client::createTransitRouterMulticastDomain(const CreateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
CreateTransitRouterPeerAttachmentResponse Client::createTransitRouterPeerAttachmentWithOptions(const CreateTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.getBandwidthType();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDefaultLinkType()) {
    query["DefaultLinkType"] = request.getDefaultLinkType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeerTransitRouterId()) {
    query["PeerTransitRouterId"] = request.getPeerTransitRouterId();
  }

  if (!!request.hasPeerTransitRouterRegionId()) {
    query["PeerTransitRouterRegionId"] = request.getPeerTransitRouterRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterPeerAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterPeerAttachmentResponse>();
}

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
CreateTransitRouterPeerAttachmentResponse Client::createTransitRouterPeerAttachment(const CreateTransitRouterPeerAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterPeerAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterPrefixListAssociationResponse Client::createTransitRouterPrefixListAssociationWithOptions(const CreateTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.getNextHop();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.getOwnerUid();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.getPrefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.getTransitRouterTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterPrefixListAssociation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterPrefixListAssociationResponse>();
}

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
CreateTransitRouterPrefixListAssociationResponse Client::createTransitRouterPrefixListAssociation(const CreateTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

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
CreateTransitRouterRouteEntryResponse Client::createTransitRouterRouteEntryWithOptions(const CreateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDescription()) {
    query["TransitRouterRouteEntryDescription"] = request.getTransitRouterRouteEntryDescription();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.getTransitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryName()) {
    query["TransitRouterRouteEntryName"] = request.getTransitRouterRouteEntryName();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.getTransitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.getTransitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterRouteEntry"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterRouteEntryResponse>();
}

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
CreateTransitRouterRouteEntryResponse Client::createTransitRouterRouteEntry(const CreateTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterRouteEntryWithOptions(request, runtime);
}

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
CreateTransitRouterRouteTableResponse Client::createTransitRouterRouteTableWithOptions(const CreateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.getRouteTableOptions();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterRouteTableDescription()) {
    query["TransitRouterRouteTableDescription"] = request.getTransitRouterRouteTableDescription();
  }

  if (!!request.hasTransitRouterRouteTableName()) {
    query["TransitRouterRouteTableName"] = request.getTransitRouterRouteTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterRouteTable"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterRouteTableResponse>();
}

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
CreateTransitRouterRouteTableResponse Client::createTransitRouterRouteTable(const CreateTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterRouteTableWithOptions(request, runtime);
}

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
CreateTransitRouterVbrAttachmentResponse Client::createTransitRouterVbrAttachmentWithOptions(const CreateTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVbrId()) {
    query["VbrId"] = request.getVbrId();
  }

  if (!!request.hasVbrOwnerId()) {
    query["VbrOwnerId"] = request.getVbrOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterVbrAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterVbrAttachmentResponse>();
}

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
CreateTransitRouterVbrAttachmentResponse Client::createTransitRouterVbrAttachment(const CreateTransitRouterVbrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVbrAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterVpcAttachmentResponse Client::createTransitRouterVpcAttachmentWithOptions(const CreateTransitRouterVpcAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouterVpcAttachmentShrinkRequest request = CreateTransitRouterVpcAttachmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOptions(), "Options", "json"));
  }

  if (!!tmpReq.hasTransitRouterVPCAttachmentOptions()) {
    request.setTransitRouterVPCAttachmentOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransitRouterVPCAttachmentOptions(), "TransitRouterVPCAttachmentOptions", "json"));
  }

  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOptionsShrink()) {
    query["Options"] = request.getOptionsShrink();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterVPCAttachmentOptionsShrink()) {
    query["TransitRouterVPCAttachmentOptions"] = request.getTransitRouterVPCAttachmentOptionsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    query["VpcOwnerId"] = request.getVpcOwnerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.getZoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterVpcAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterVpcAttachmentResponse>();
}

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
CreateTransitRouterVpcAttachmentResponse Client::createTransitRouterVpcAttachment(const CreateTransitRouterVpcAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVpcAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterVpnAttachmentResponse Client::createTransitRouterVpnAttachmentWithOptions(const CreateTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpnId()) {
    query["VpnId"] = request.getVpnId();
  }

  if (!!request.hasVpnOwnerId()) {
    query["VpnOwnerId"] = request.getVpnOwnerId();
  }

  if (!!request.hasZone()) {
    query["Zone"] = request.getZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransitRouterVpnAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitRouterVpnAttachmentResponse>();
}

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
CreateTransitRouterVpnAttachmentResponse Client::createTransitRouterVpnAttachment(const CreateTransitRouterVpnAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVpnAttachmentWithOptions(request, runtime);
}

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
DeactiveFlowLogResponse Client::deactiveFlowLogWithOptions(const DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeactiveFlowLog"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactiveFlowLogResponse>();
}

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
DeactiveFlowLogResponse Client::deactiveFlowLog(const DeactiveFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveFlowLogWithOptions(request, runtime);
}

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
DeleteCenResponse Client::deleteCenWithOptions(const DeleteCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenResponse>();
}

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
DeleteCenResponse Client::deleteCen(const DeleteCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenWithOptions(request, runtime);
}

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
DeleteCenBandwidthPackageResponse Client::deleteCenBandwidthPackageWithOptions(const DeleteCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenBandwidthPackage"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenBandwidthPackageResponse>();
}

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
DeleteCenBandwidthPackageResponse Client::deleteCenBandwidthPackage(const DeleteCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenBandwidthPackageWithOptions(request, runtime);
}

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
DeleteCenChildInstanceRouteEntryToAttachmentResponse Client::deleteCenChildInstanceRouteEntryToAttachmentWithOptions(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenChildInstanceRouteEntryToAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenChildInstanceRouteEntryToAttachmentResponse>();
}

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
DeleteCenChildInstanceRouteEntryToAttachmentResponse Client::deleteCenChildInstanceRouteEntryToAttachment(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

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
DeleteCenChildInstanceRouteEntryToCenResponse Client::deleteCenChildInstanceRouteEntryToCenWithOptions(const DeleteCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceAliUid()) {
    query["ChildInstanceAliUid"] = request.getChildInstanceAliUid();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenChildInstanceRouteEntryToCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenChildInstanceRouteEntryToCenResponse>();
}

/**
 * @summary Deletes a route entry from a network instance by calling the DeleteCenChildInstanceRouteEntryToCen operation.
 *
 * @description - The DeleteCenChildInstanceRouteEntryToCen operation is not available by default. To use this operation, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cbn/today)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * - The DeleteCenChildInstanceRouteEntryToCen operation does not support deleting route entries from network instances attached to an Enterprise Edition transit router.
 *
 * @param request DeleteCenChildInstanceRouteEntryToCenRequest
 * @return DeleteCenChildInstanceRouteEntryToCenResponse
 */
DeleteCenChildInstanceRouteEntryToCenResponse Client::deleteCenChildInstanceRouteEntryToCen(const DeleteCenChildInstanceRouteEntryToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

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
DeleteCenInterRegionTrafficQosPolicyResponse Client::deleteCenInterRegionTrafficQosPolicyWithOptions(const DeleteCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.getTrafficQosPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenInterRegionTrafficQosPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenInterRegionTrafficQosPolicyResponse>();
}

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
DeleteCenInterRegionTrafficQosPolicyResponse Client::deleteCenInterRegionTrafficQosPolicy(const DeleteCenInterRegionTrafficQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

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
DeleteCenInterRegionTrafficQosQueueResponse Client::deleteCenInterRegionTrafficQosQueueWithOptions(const DeleteCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosQueueId()) {
    query["QosQueueId"] = request.getQosQueueId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenInterRegionTrafficQosQueue"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenInterRegionTrafficQosQueueResponse>();
}

/**
 * @summary Deletes a queue from a traffic scheduling policy by calling the DeleteCenInterRegionTrafficQosQueue operation.
 *
 * @description - The default queue cannot be deleted.
 * - **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **RequestId** but the queue is not yet deleted because the deletion task is still running in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the queue information. If the specified queue cannot be found, the queue is deleted.
 *
 * @param request DeleteCenInterRegionTrafficQosQueueRequest
 * @return DeleteCenInterRegionTrafficQosQueueResponse
 */
DeleteCenInterRegionTrafficQosQueueResponse Client::deleteCenInterRegionTrafficQosQueue(const DeleteCenInterRegionTrafficQosQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenInterRegionTrafficQosQueueWithOptions(request, runtime);
}

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
DeleteCenRouteMapResponse Client::deleteCenRouteMapWithOptions(const DeleteCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.getCenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.getRouteMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenRouteMap"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenRouteMapResponse>();
}

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
DeleteCenRouteMapResponse Client::deleteCenRouteMap(const DeleteCenRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenRouteMapWithOptions(request, runtime);
}

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
DeleteFlowlogResponse Client::deleteFlowlogWithOptions(const DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowlog"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowlogResponse>();
}

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
DeleteFlowlogResponse Client::deleteFlowlog(const DeleteFlowlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowlogWithOptions(request, runtime);
}

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
DeleteRouteServiceInCenResponse Client::deleteRouteServiceInCenWithOptions(const DeleteRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.getAccessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.getHostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.getHostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteServiceInCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteServiceInCenResponse>();
}

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
DeleteRouteServiceInCenResponse Client::deleteRouteServiceInCen(const DeleteRouteServiceInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteServiceInCenWithOptions(request, runtime);
}

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
DeleteTrafficMarkingPolicyResponse Client::deleteTrafficMarkingPolicyWithOptions(const DeleteTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficMarkingPolicyResponse>();
}

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
DeleteTrafficMarkingPolicyResponse Client::deleteTrafficMarkingPolicy(const DeleteTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrafficMarkingPolicyWithOptions(request, runtime);
}

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
DeleteTransitRouteTableAggregationResponse Client::deleteTransitRouteTableAggregationWithOptions(const DeleteTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouteTableAggregation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouteTableAggregationResponse>();
}

/**
 * @summary Deletes an aggregate route.
 *
 * @description - Before you delete an aggregate route, make sure that redundant routes exist in the current network. Otherwise, service breaks may occur.
 * - After you delete an aggregate route, the system automatically withdraws the aggregate routing that has been propagated to Virtual Private Cloud (VPC)-connected instances and re-propagates the specific routes within the destination CIDR block of the aggregation route to the VPC-connected instances.
 *
 * @param request DeleteTransitRouteTableAggregationRequest
 * @return DeleteTransitRouteTableAggregationResponse
 */
DeleteTransitRouteTableAggregationResponse Client::deleteTransitRouteTableAggregation(const DeleteTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouteTableAggregationWithOptions(request, runtime);
}

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
DeleteTransitRouterResponse Client::deleteTransitRouterWithOptions(const DeleteTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterResponse>();
}

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
DeleteTransitRouterResponse Client::deleteTransitRouter(const DeleteTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterWithOptions(request, runtime);
}

/**
 * @summary Deletes a CIDR block from a transit router.
 *
 * @description A transit router CIDR block that has allocated IP addresses cannot be deleted.
 *
 * @param request DeleteTransitRouterCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterCidrResponse
 */
DeleteTransitRouterCidrResponse Client::deleteTransitRouterCidrWithOptions(const DeleteTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.getTransitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterCidr"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterCidrResponse>();
}

/**
 * @summary Deletes a CIDR block from a transit router.
 *
 * @description A transit router CIDR block that has allocated IP addresses cannot be deleted.
 *
 * @param request DeleteTransitRouterCidrRequest
 * @return DeleteTransitRouterCidrResponse
 */
DeleteTransitRouterCidrResponse Client::deleteTransitRouterCidr(const DeleteTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterCidrWithOptions(request, runtime);
}

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
DeleteTransitRouterEcrAttachmentResponse Client::deleteTransitRouterEcrAttachmentWithOptions(const DeleteTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterEcrAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterEcrAttachmentResponse>();
}

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
DeleteTransitRouterEcrAttachmentResponse Client::deleteTransitRouterEcrAttachment(const DeleteTransitRouterEcrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterEcrAttachmentWithOptions(request, runtime);
}

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
DeleteTransitRouterMulticastDomainResponse Client::deleteTransitRouterMulticastDomainWithOptions(const DeleteTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterMulticastDomain"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterMulticastDomainResponse>();
}

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
DeleteTransitRouterMulticastDomainResponse Client::deleteTransitRouterMulticastDomain(const DeleteTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
DeleteTransitRouterPeerAttachmentResponse Client::deleteTransitRouterPeerAttachmentWithOptions(const DeleteTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterPeerAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterPeerAttachmentResponse>();
}

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
DeleteTransitRouterPeerAttachmentResponse Client::deleteTransitRouterPeerAttachment(const DeleteTransitRouterPeerAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterPeerAttachmentWithOptions(request, runtime);
}

/**
 * @summary Dissociates a prefix list from an Enterprise Edition transit router route table.
 *
 * @description >Warning: After a prefix list is dissociated from an Enterprise Edition transit router route table, the system automatically withdraws all route entries related to the prefix list from the Enterprise Edition transit router route table. Before dissociating the prefix list, make sure that redundant routes exist in the Enterprise Edition transit router route table. Otherwise, network interruptions may occur.
 *
 * @param request DeleteTransitRouterPrefixListAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterPrefixListAssociationResponse
 */
DeleteTransitRouterPrefixListAssociationResponse Client::deleteTransitRouterPrefixListAssociationWithOptions(const DeleteTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.getNextHop();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.getPrefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.getTransitRouterTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterPrefixListAssociation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterPrefixListAssociationResponse>();
}

/**
 * @summary Dissociates a prefix list from an Enterprise Edition transit router route table.
 *
 * @description >Warning: After a prefix list is dissociated from an Enterprise Edition transit router route table, the system automatically withdraws all route entries related to the prefix list from the Enterprise Edition transit router route table. Before dissociating the prefix list, make sure that redundant routes exist in the Enterprise Edition transit router route table. Otherwise, network interruptions may occur.
 *
 * @param request DeleteTransitRouterPrefixListAssociationRequest
 * @return DeleteTransitRouterPrefixListAssociationResponse
 */
DeleteTransitRouterPrefixListAssociationResponse Client::deleteTransitRouterPrefixListAssociation(const DeleteTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

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
DeleteTransitRouterRouteEntryResponse Client::deleteTransitRouterRouteEntryWithOptions(const DeleteTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.getTransitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryId()) {
    query["TransitRouterRouteEntryId"] = request.getTransitRouterRouteEntryId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.getTransitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.getTransitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterRouteEntry"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterRouteEntryResponse>();
}

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
DeleteTransitRouterRouteEntryResponse Client::deleteTransitRouterRouteEntry(const DeleteTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterRouteEntryWithOptions(request, runtime);
}

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
DeleteTransitRouterRouteTableResponse Client::deleteTransitRouterRouteTableWithOptions(const DeleteTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterRouteTable"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterRouteTableResponse>();
}

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
DeleteTransitRouterRouteTableResponse Client::deleteTransitRouterRouteTable(const DeleteTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterRouteTableWithOptions(request, runtime);
}

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
DeleteTransitRouterVbrAttachmentResponse Client::deleteTransitRouterVbrAttachmentWithOptions(const DeleteTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterVbrAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterVbrAttachmentResponse>();
}

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
DeleteTransitRouterVbrAttachmentResponse Client::deleteTransitRouterVbrAttachment(const DeleteTransitRouterVbrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVbrAttachmentWithOptions(request, runtime);
}

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
DeleteTransitRouterVpcAttachmentResponse Client::deleteTransitRouterVpcAttachmentWithOptions(const DeleteTransitRouterVpcAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterVpcAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterVpcAttachmentResponse>();
}

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
DeleteTransitRouterVpcAttachmentResponse Client::deleteTransitRouterVpcAttachment(const DeleteTransitRouterVpcAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVpcAttachmentWithOptions(request, runtime);
}

/**
 * @summary Deletes a VPN connection by calling the DeleteTransitRouterVpnAttachment operation.
 *
 * @description When you call the **DeleteTransitRouterVpnAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the VPN connection.
 *
 * @param request DeleteTransitRouterVpnAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterVpnAttachmentResponse
 */
DeleteTransitRouterVpnAttachmentResponse Client::deleteTransitRouterVpnAttachmentWithOptions(const DeleteTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransitRouterVpnAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransitRouterVpnAttachmentResponse>();
}

/**
 * @summary Deletes a VPN connection by calling the DeleteTransitRouterVpnAttachment operation.
 *
 * @description When you call the **DeleteTransitRouterVpnAttachment** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a **RequestId** but does not delete the VPN connection.
 *
 * @param request DeleteTransitRouterVpnAttachmentRequest
 * @return DeleteTransitRouterVpnAttachmentResponse
 */
DeleteTransitRouterVpnAttachmentResponse Client::deleteTransitRouterVpnAttachment(const DeleteTransitRouterVpnAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVpnAttachmentWithOptions(request, runtime);
}

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
DeregisterTransitRouterMulticastGroupMembersResponse Client::deregisterTransitRouterMulticastGroupMembersWithOptions(const DeregisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.getGroupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.getPeerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterTransitRouterMulticastGroupMembers"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeregisterTransitRouterMulticastGroupMembersResponse>();
}

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
DeregisterTransitRouterMulticastGroupMembersResponse Client::deregisterTransitRouterMulticastGroupMembers(const DeregisterTransitRouterMulticastGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterTransitRouterMulticastGroupMembersWithOptions(request, runtime);
}

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
DeregisterTransitRouterMulticastGroupSourcesResponse Client::deregisterTransitRouterMulticastGroupSourcesWithOptions(const DeregisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.getGroupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterTransitRouterMulticastGroupSources"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeregisterTransitRouterMulticastGroupSourcesResponse>();
}

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
DeregisterTransitRouterMulticastGroupSourcesResponse Client::deregisterTransitRouterMulticastGroupSources(const DeregisterTransitRouterMulticastGroupSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterTransitRouterMulticastGroupSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a network instance (VPC, VBR, or CCN) attached to a Cloud Enterprise Network (CEN) instance, including the attachment status and network instance type.
 *
 * @param request DescribeCenAttachedChildInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenAttachedChildInstanceAttributeResponse
 */
DescribeCenAttachedChildInstanceAttributeResponse Client::describeCenAttachedChildInstanceAttributeWithOptions(const DescribeCenAttachedChildInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenAttachedChildInstanceAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenAttachedChildInstanceAttributeResponse>();
}

/**
 * @summary Queries the details of a network instance (VPC, VBR, or CCN) attached to a Cloud Enterprise Network (CEN) instance, including the attachment status and network instance type.
 *
 * @param request DescribeCenAttachedChildInstanceAttributeRequest
 * @return DescribeCenAttachedChildInstanceAttributeResponse
 */
DescribeCenAttachedChildInstanceAttributeResponse Client::describeCenAttachedChildInstanceAttribute(const DescribeCenAttachedChildInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenAttachedChildInstanceAttributeWithOptions(request, runtime);
}

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
DescribeCenAttachedChildInstancesResponse Client::describeCenAttachedChildInstancesWithOptions(const DescribeCenAttachedChildInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenAttachedChildInstances"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenAttachedChildInstancesResponse>();
}

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
DescribeCenAttachedChildInstancesResponse Client::describeCenAttachedChildInstances(const DescribeCenAttachedChildInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenAttachedChildInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries information about bandwidth package instances by calling the DescribeCenBandwidthPackages operation.
 *
 * @param request DescribeCenBandwidthPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenBandwidthPackagesResponse
 */
DescribeCenBandwidthPackagesResponse Client::describeCenBandwidthPackagesWithOptions(const DescribeCenBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasIncludeReservationData()) {
    query["IncludeReservationData"] = request.getIncludeReservationData();
  }

  if (!!request.hasIsOrKey()) {
    query["IsOrKey"] = request.getIsOrKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenBandwidthPackages"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenBandwidthPackagesResponse>();
}

/**
 * @summary Queries information about bandwidth package instances by calling the DescribeCenBandwidthPackages operation.
 *
 * @param request DescribeCenBandwidthPackagesRequest
 * @return DescribeCenBandwidthPackagesResponse
 */
DescribeCenBandwidthPackagesResponse Client::describeCenBandwidthPackages(const DescribeCenBandwidthPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenBandwidthPackagesWithOptions(request, runtime);
}

/**
 * @summary Invokes the DescribeCenChildInstanceRouteEntries operation to query the route entries of a network instance in a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenChildInstanceRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenChildInstanceRouteEntriesResponse
 */
DescribeCenChildInstanceRouteEntriesResponse Client::describeCenChildInstanceRouteEntriesWithOptions(const DescribeCenChildInstanceRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenChildInstanceRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenChildInstanceRouteEntriesResponse>();
}

/**
 * @summary Invokes the DescribeCenChildInstanceRouteEntries operation to query the route entries of a network instance in a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenChildInstanceRouteEntriesRequest
 * @return DescribeCenChildInstanceRouteEntriesResponse
 */
DescribeCenChildInstanceRouteEntriesResponse Client::describeCenChildInstanceRouteEntries(const DescribeCenChildInstanceRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenChildInstanceRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the remaining bandwidth of a specified bandwidth plan instance.
 *
 * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenGeographicSpanRemainingBandwidthResponse
 */
DescribeCenGeographicSpanRemainingBandwidthResponse Client::describeCenGeographicSpanRemainingBandwidthWithOptions(const DescribeCenGeographicSpanRemainingBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasGeographicRegionAId()) {
    query["GeographicRegionAId"] = request.getGeographicRegionAId();
  }

  if (!!request.hasGeographicRegionBId()) {
    query["GeographicRegionBId"] = request.getGeographicRegionBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenGeographicSpanRemainingBandwidth"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenGeographicSpanRemainingBandwidthResponse>();
}

/**
 * @summary Queries the remaining bandwidth of a specified bandwidth plan instance.
 *
 * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
 * @return DescribeCenGeographicSpanRemainingBandwidthResponse
 */
DescribeCenGeographicSpanRemainingBandwidthResponse Client::describeCenGeographicSpanRemainingBandwidth(const DescribeCenGeographicSpanRemainingBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenGeographicSpanRemainingBandwidthWithOptions(request, runtime);
}

/**
 * @summary Queries information about connected areas supported by Cloud Enterprise Network (CEN) by calling the DescribeCenGeographicSpans operation.
 *
 * @param request DescribeCenGeographicSpansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenGeographicSpansResponse
 */
DescribeCenGeographicSpansResponse Client::describeCenGeographicSpansWithOptions(const DescribeCenGeographicSpansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGeographicSpanId()) {
    query["GeographicSpanId"] = request.getGeographicSpanId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenGeographicSpans"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenGeographicSpansResponse>();
}

/**
 * @summary Queries information about connected areas supported by Cloud Enterprise Network (CEN) by calling the DescribeCenGeographicSpans operation.
 *
 * @param request DescribeCenGeographicSpansRequest
 * @return DescribeCenGeographicSpansResponse
 */
DescribeCenGeographicSpansResponse Client::describeCenGeographicSpans(const DescribeCenGeographicSpansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenGeographicSpansWithOptions(request, runtime);
}

/**
 * @summary Queries the inter-region bandwidth information between regions by calling the DescribeCenInterRegionBandwidthLimits operation.
 *
 * @param request DescribeCenInterRegionBandwidthLimitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenInterRegionBandwidthLimitsResponse
 */
DescribeCenInterRegionBandwidthLimitsResponse Client::describeCenInterRegionBandwidthLimitsWithOptions(const DescribeCenInterRegionBandwidthLimitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrRegionId()) {
    query["TrRegionId"] = request.getTrRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenInterRegionBandwidthLimits"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenInterRegionBandwidthLimitsResponse>();
}

/**
 * @summary Queries the inter-region bandwidth information between regions by calling the DescribeCenInterRegionBandwidthLimits operation.
 *
 * @param request DescribeCenInterRegionBandwidthLimitsRequest
 * @return DescribeCenInterRegionBandwidthLimitsResponse
 */
DescribeCenInterRegionBandwidthLimitsResponse Client::describeCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenInterRegionBandwidthLimitsWithOptions(request, runtime);
}

/**
 * @summary Queries the PrivateZone service configuration of a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenPrivateZoneRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenPrivateZoneRoutesResponse
 */
DescribeCenPrivateZoneRoutesResponse Client::describeCenPrivateZoneRoutesWithOptions(const DescribeCenPrivateZoneRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.getAccessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.getHostRegionId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenPrivateZoneRoutes"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenPrivateZoneRoutesResponse>();
}

/**
 * @summary Queries the PrivateZone service configuration of a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenPrivateZoneRoutesRequest
 * @return DescribeCenPrivateZoneRoutesResponse
 */
DescribeCenPrivateZoneRoutesResponse Client::describeCenPrivateZoneRoutes(const DescribeCenPrivateZoneRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenPrivateZoneRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of route entries in a specific region of a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenRegionDomainRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenRegionDomainRouteEntriesResponse
 */
DescribeCenRegionDomainRouteEntriesResponse Client::describeCenRegionDomainRouteEntriesWithOptions(const DescribeCenRegionDomainRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.getCenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenRegionDomainRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenRegionDomainRouteEntriesResponse>();
}

/**
 * @summary Queries the details of route entries in a specific region of a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenRegionDomainRouteEntriesRequest
 * @return DescribeCenRegionDomainRouteEntriesResponse
 */
DescribeCenRegionDomainRouteEntriesResponse Client::describeCenRegionDomainRouteEntries(const DescribeCenRegionDomainRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenRegionDomainRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the configured information in route maps by calling the DescribeCenRouteMaps operation.
 *
 * @param request DescribeCenRouteMapsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenRouteMapsResponse
 */
DescribeCenRouteMapsResponse Client::describeCenRouteMapsWithOptions(const DescribeCenRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.getCenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.getRouteMapId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  if (!!request.hasTransmitDirection()) {
    query["TransmitDirection"] = request.getTransmitDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenRouteMaps"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenRouteMapsResponse>();
}

/**
 * @summary Queries the configured information in route maps by calling the DescribeCenRouteMaps operation.
 *
 * @param request DescribeCenRouteMapsRequest
 * @return DescribeCenRouteMapsResponse
 */
DescribeCenRouteMapsResponse Client::describeCenRouteMaps(const DescribeCenRouteMapsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenRouteMapsWithOptions(request, runtime);
}

/**
 * @summary Queries health check information about virtual border routers (VBRs) in a specified region.
 *
 * @param request DescribeCenVbrHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenVbrHealthCheckResponse
 */
DescribeCenVbrHealthCheckResponse Client::describeCenVbrHealthCheckWithOptions(const DescribeCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.getVbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.getVbrInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenVbrHealthCheck"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenVbrHealthCheckResponse>();
}

/**
 * @summary Queries health check information about virtual border routers (VBRs) in a specified region.
 *
 * @param request DescribeCenVbrHealthCheckRequest
 * @return DescribeCenVbrHealthCheckResponse
 */
DescribeCenVbrHealthCheckResponse Client::describeCenVbrHealthCheck(const DescribeCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenVbrHealthCheckWithOptions(request, runtime);
}

/**
 * @summary Queries information about Cloud Enterprise Network (CEN) instances under the current Alibaba Cloud account, including the instance status, whether IPv6 is enabled, and the list of bandwidth packages associated with the instances.
 *
 * @param request DescribeCensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCensWithOptions(const DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCens"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCensResponse>();
}

/**
 * @summary Queries information about Cloud Enterprise Network (CEN) instances under the current Alibaba Cloud account, including the instance status, whether IPv6 is enabled, and the list of bandwidth packages associated with the instances.
 *
 * @param request DescribeCensRequest
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCens(const DescribeCensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCensWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that support network instances loaded to Cloud Enterprise Network (CEN).
 *
 * @description CEN supports different regions for different network instance types. You can specify the ProductType parameter to query the regions supported by CEN for a specific network instance type. If you do not specify the ProductType parameter, the system queries the regions supported by CEN for all network instance types by default.
 *
 * @param request DescribeChildInstanceRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChildInstanceRegionsResponse
 */
DescribeChildInstanceRegionsResponse Client::describeChildInstanceRegionsWithOptions(const DescribeChildInstanceRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChildInstanceRegions"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChildInstanceRegionsResponse>();
}

/**
 * @summary Queries the regions that support network instances loaded to Cloud Enterprise Network (CEN).
 *
 * @description CEN supports different regions for different network instance types. You can specify the ProductType parameter to query the regions supported by CEN for a specific network instance type. If you do not specify the ProductType parameter, the system queries the regions supported by CEN for all network instance types by default.
 *
 * @param request DescribeChildInstanceRegionsRequest
 * @return DescribeChildInstanceRegionsResponse
 */
DescribeChildInstanceRegionsResponse Client::describeChildInstanceRegions(const DescribeChildInstanceRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChildInstanceRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries flow logs.
 *
 * @param request DescribeFlowlogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowlogsResponse
 */
DescribeFlowlogsResponse Client::describeFlowlogsWithOptions(const DescribeFlowlogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasFlowLogVersion()) {
    query["FlowLogVersion"] = request.getFlowLogVersion();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowlogs"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowlogsResponse>();
}

/**
 * @summary Queries flow logs.
 *
 * @param request DescribeFlowlogsRequest
 * @return DescribeFlowlogsResponse
 */
DescribeFlowlogsResponse Client::describeFlowlogs(const DescribeFlowlogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowlogsWithOptions(request, runtime);
}

/**
 * @summary Queries region information within a specified area.
 *
 * @param request DescribeGeographicRegionMembershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGeographicRegionMembershipResponse
 */
DescribeGeographicRegionMembershipResponse Client::describeGeographicRegionMembershipWithOptions(const DescribeGeographicRegionMembershipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGeographicRegionId()) {
    query["GeographicRegionId"] = request.getGeographicRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGeographicRegionMembership"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGeographicRegionMembershipResponse>();
}

/**
 * @summary Queries region information within a specified area.
 *
 * @param request DescribeGeographicRegionMembershipRequest
 * @return DescribeGeographicRegionMembershipResponse
 */
DescribeGeographicRegionMembershipResponse Client::describeGeographicRegionMembership(const DescribeGeographicRegionMembershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGeographicRegionMembershipWithOptions(request, runtime);
}

/**
 * @summary Queries information about cross-account network instances that are authorized to be associated with a Cloud Enterprise Network (CEN) instance.
 *
 * @description When you call the **DescribeGrantRulesToCen** operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, a **RequestId** is still returned, but information about the cross-account network instances authorized to the CEN instance is not returned.
 *
 * @param request DescribeGrantRulesToCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantRulesToCenResponse
 */
DescribeGrantRulesToCenResponse Client::describeGrantRulesToCenWithOptions(const DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.getChildInstanceOwnerId();
  }

  if (!!request.hasEnabledIpv6()) {
    query["EnabledIpv6"] = request.getEnabledIpv6();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGrantRulesToCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGrantRulesToCenResponse>();
}

/**
 * @summary Queries information about cross-account network instances that are authorized to be associated with a Cloud Enterprise Network (CEN) instance.
 *
 * @description When you call the **DescribeGrantRulesToCen** operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, a **RequestId** is still returned, but information about the cross-account network instances authorized to the CEN instance is not returned.
 *
 * @param request DescribeGrantRulesToCenRequest
 * @return DescribeGrantRulesToCenResponse
 */
DescribeGrantRulesToCenResponse Client::describeGrantRulesToCen(const DescribeGrantRulesToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantRulesToCenWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information of a network instance for a cross-account Cloud Enterprise Network (CEN) instance, including the Alibaba Cloud account ID of the CEN instance owner and the payer of the network instance.
 *
 * @param request DescribeGrantRulesToResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantRulesToResourceResponse
 */
DescribeGrantRulesToResourceResponse Client::describeGrantRulesToResourceWithOptions(const DescribeGrantRulesToResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGrantRulesToResource"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGrantRulesToResourceResponse>();
}

/**
 * @summary Queries the authorization information of a network instance for a cross-account Cloud Enterprise Network (CEN) instance, including the Alibaba Cloud account ID of the CEN instance owner and the payer of the network instance.
 *
 * @param request DescribeGrantRulesToResourceRequest
 * @return DescribeGrantRulesToResourceResponse
 */
DescribeGrantRulesToResourceResponse Client::describeGrantRulesToResource(const DescribeGrantRulesToResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantRulesToResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the publish status, next hop associated instance type, and whether publishing or withdrawing is allowed for route entries of network instances (VPCs and VBRs) that are loaded into a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribePublishedRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePublishedRouteEntriesResponse
 */
DescribePublishedRouteEntriesResponse Client::describePublishedRouteEntriesWithOptions(const DescribePublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePublishedRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePublishedRouteEntriesResponse>();
}

/**
 * @summary Queries the publish status, next hop associated instance type, and whether publishing or withdrawing is allowed for route entries of network instances (VPCs and VBRs) that are loaded into a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribePublishedRouteEntriesRequest
 * @return DescribePublishedRouteEntriesResponse
 */
DescribePublishedRouteEntriesResponse Client::describePublishedRouteEntries(const DescribePublishedRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePublishedRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries information about conflicting route entries in a network instance.
 *
 * @param request DescribeRouteConflictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteConflictResponse
 */
DescribeRouteConflictResponse Client::describeRouteConflictWithOptions(const DescribeRouteConflictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRouteConflict"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRouteConflictResponse>();
}

/**
 * @summary Queries information about conflicting route entries in a network instance.
 *
 * @param request DescribeRouteConflictRequest
 * @return DescribeRouteConflictResponse
 */
DescribeRouteConflictResponse Client::describeRouteConflict(const DescribeRouteConflictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteConflictWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud service configurations under a Basic Edition transit router by calling the DescribeRouteServicesInCen operation.
 *
 * @param request DescribeRouteServicesInCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteServicesInCenResponse
 */
DescribeRouteServicesInCenResponse Client::describeRouteServicesInCenWithOptions(const DescribeRouteServicesInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.getAccessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.getHostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.getHostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRouteServicesInCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRouteServicesInCenResponse>();
}

/**
 * @summary Queries the cloud service configurations under a Basic Edition transit router by calling the DescribeRouteServicesInCen operation.
 *
 * @param request DescribeRouteServicesInCenRequest
 * @return DescribeRouteServicesInCenResponse
 */
DescribeRouteServicesInCenResponse Client::describeRouteServicesInCen(const DescribeRouteServicesInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteServicesInCenWithOptions(request, runtime);
}

/**
 * @summary Queries aggregate routes in an Enterprise Edition transit router route table.
 *
 * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query information about a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, the system queries information about all aggregate routes in the specified Enterprise Edition transit router route table.
 *
 * @param request DescribeTransitRouteTableAggregationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransitRouteTableAggregationResponse
 */
DescribeTransitRouteTableAggregationResponse Client::describeTransitRouteTableAggregationWithOptions(const DescribeTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransitRouteTableAggregation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransitRouteTableAggregationResponse>();
}

/**
 * @summary Queries aggregate routes in an Enterprise Edition transit router route table.
 *
 * @description You can specify the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query information about a specific aggregate route. If you specify only the **TransitRouteTableId** parameter, the system queries information about all aggregate routes in the specified Enterprise Edition transit router route table.
 *
 * @param request DescribeTransitRouteTableAggregationRequest
 * @return DescribeTransitRouteTableAggregationResponse
 */
DescribeTransitRouteTableAggregationResponse Client::describeTransitRouteTableAggregation(const DescribeTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransitRouteTableAggregationWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration details of a specified aggregate route.
 *
 * @param request DescribeTransitRouteTableAggregationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransitRouteTableAggregationDetailResponse
 */
DescribeTransitRouteTableAggregationDetailResponse Client::describeTransitRouteTableAggregationDetailWithOptions(const DescribeTransitRouteTableAggregationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransitRouteTableAggregationDetail"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransitRouteTableAggregationDetailResponse>();
}

/**
 * @summary Queries the configuration details of a specified aggregate route.
 *
 * @param request DescribeTransitRouteTableAggregationDetailRequest
 * @return DescribeTransitRouteTableAggregationDetailResponse
 */
DescribeTransitRouteTableAggregationDetailResponse Client::describeTransitRouteTableAggregationDetail(const DescribeTransitRouteTableAggregationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransitRouteTableAggregationDetailWithOptions(request, runtime);
}

/**
 * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
 *
 * @description The **DetachCenChildInstance** operation supports detaching only network instances from a Basic Edition transit router.
 *
 * @param request DetachCenChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCenChildInstanceResponse
 */
DetachCenChildInstanceResponse Client::detachCenChildInstanceWithOptions(const DetachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.getChildInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachCenChildInstance"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachCenChildInstanceResponse>();
}

/**
 * @summary Detaches a network instance from a Cloud Enterprise Network (CEN) instance.
 *
 * @description The **DetachCenChildInstance** operation supports detaching only network instances from a Basic Edition transit router.
 *
 * @param request DetachCenChildInstanceRequest
 * @return DetachCenChildInstanceResponse
 */
DetachCenChildInstanceResponse Client::detachCenChildInstance(const DetachCenChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCenChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables health checks for a specified virtual border router (VBR).
 *
 * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you call this operation, the system returns a **RequestId**, but the health check configuration has not been deleted. The deletion task continues to run in the background. You can call **DescribeCenVbrHealthCheck** to query the health check configuration. If the specified health check configuration is not found, the deletion is complete.
 *
 * @param request DisableCenVbrHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCenVbrHealthCheckResponse
 */
DisableCenVbrHealthCheckResponse Client::disableCenVbrHealthCheckWithOptions(const DisableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.getVbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.getVbrInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCenVbrHealthCheck"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCenVbrHealthCheckResponse>();
}

/**
 * @summary Disables health checks for a specified virtual border router (VBR).
 *
 * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you call this operation, the system returns a **RequestId**, but the health check configuration has not been deleted. The deletion task continues to run in the background. You can call **DescribeCenVbrHealthCheck** to query the health check configuration. If the specified health check configuration is not found, the deletion is complete.
 *
 * @param request DisableCenVbrHealthCheckRequest
 * @return DisableCenVbrHealthCheckResponse
 */
DisableCenVbrHealthCheckResponse Client::disableCenVbrHealthCheck(const DisableCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCenVbrHealthCheckWithOptions(request, runtime);
}

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
DisableTransitRouterRouteTablePropagationResponse Client::disableTransitRouterRouteTablePropagationWithOptions(const DisableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableTransitRouterRouteTablePropagation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableTransitRouterRouteTablePropagationResponse>();
}

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
DisableTransitRouterRouteTablePropagationResponse Client::disableTransitRouterRouteTablePropagation(const DisableTransitRouterRouteTablePropagationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableTransitRouterRouteTablePropagationWithOptions(request, runtime);
}

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
DisassociateTransitRouterMulticastDomainResponse Client::disassociateTransitRouterMulticastDomainWithOptions(const DisassociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateTransitRouterMulticastDomain"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateTransitRouterMulticastDomainResponse>();
}

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
DisassociateTransitRouterMulticastDomainResponse Client::disassociateTransitRouterMulticastDomain(const DisassociateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
DissociateTransitRouterAttachmentFromRouteTableResponse Client::dissociateTransitRouterAttachmentFromRouteTableWithOptions(const DissociateTransitRouterAttachmentFromRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateTransitRouterAttachmentFromRouteTable"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateTransitRouterAttachmentFromRouteTableResponse>();
}

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
DissociateTransitRouterAttachmentFromRouteTableResponse Client::dissociateTransitRouterAttachmentFromRouteTable(const DissociateTransitRouterAttachmentFromRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateTransitRouterAttachmentFromRouteTableWithOptions(request, runtime);
}

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
EnableCenVbrHealthCheckResponse Client::enableCenVbrHealthCheckWithOptions(const EnableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckOnly()) {
    query["HealthCheckOnly"] = request.getHealthCheckOnly();
  }

  if (!!request.hasHealthCheckSourceIp()) {
    query["HealthCheckSourceIp"] = request.getHealthCheckSourceIp();
  }

  if (!!request.hasHealthCheckTargetIp()) {
    query["HealthCheckTargetIp"] = request.getHealthCheckTargetIp();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.getVbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.getVbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.getVbrInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCenVbrHealthCheck"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCenVbrHealthCheckResponse>();
}

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
EnableCenVbrHealthCheckResponse Client::enableCenVbrHealthCheck(const EnableCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCenVbrHealthCheckWithOptions(request, runtime);
}

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
EnableTransitRouterRouteTablePropagationResponse Client::enableTransitRouterRouteTablePropagationWithOptions(const EnableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableTransitRouterRouteTablePropagation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableTransitRouterRouteTablePropagationResponse>();
}

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
EnableTransitRouterRouteTablePropagationResponse Client::enableTransitRouterRouteTablePropagation(const EnableTransitRouterRouteTablePropagationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableTransitRouterRouteTablePropagationWithOptions(request, runtime);
}

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
GrantInstanceToTransitRouterResponse Client::grantInstanceToTransitRouterWithOptions(const GrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantInstanceToTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantInstanceToTransitRouterResponse>();
}

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
GrantInstanceToTransitRouterResponse Client::grantInstanceToTransitRouter(const GrantInstanceToTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantInstanceToTransitRouterWithOptions(request, runtime);
}

/**
 * @summary Queries route entries that forward traffic to a network instance connection in the route table of a network instance associated with an Enterprise Edition transit router.
 *
 * @description When you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the operation returns a RequestId but does not display the route entries of network instances connected to the Enterprise Edition transit router.
 *
 * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
 */
ListCenChildInstanceRouteEntriesToAttachmentResponse Client::listCenChildInstanceRouteEntriesToAttachmentWithOptions(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteFilter()) {
    query["RouteFilter"] = request.getRouteFilter();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCenChildInstanceRouteEntriesToAttachment"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCenChildInstanceRouteEntriesToAttachmentResponse>();
}

/**
 * @summary Queries route entries that forward traffic to a network instance connection in the route table of a network instance associated with an Enterprise Edition transit router.
 *
 * @description When you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that the parameter values you specify are valid. If you specify invalid parameter values, the operation returns a RequestId but does not display the route entries of network instances connected to the Enterprise Edition transit router.
 *
 * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
 * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
 */
ListCenChildInstanceRouteEntriesToAttachmentResponse Client::listCenChildInstanceRouteEntriesToAttachment(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenChildInstanceRouteEntriesToAttachmentWithOptions(request, runtime);
}

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
ListCenInterRegionTrafficQosPoliciesResponse Client::listCenInterRegionTrafficQosPoliciesWithOptions(const ListCenInterRegionTrafficQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.getTrafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.getTrafficQosPolicyId();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.getTrafficQosPolicyName();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCenInterRegionTrafficQosPolicies"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCenInterRegionTrafficQosPoliciesResponse>();
}

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
ListCenInterRegionTrafficQosPoliciesResponse Client::listCenInterRegionTrafficQosPolicies(const ListCenInterRegionTrafficQosPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenInterRegionTrafficQosPoliciesWithOptions(request, runtime);
}

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
ListCenInterRegionTrafficQosQueuesResponse Client::listCenInterRegionTrafficQosQueuesWithOptions(const ListCenInterRegionTrafficQosQueuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveBandwidthFilter()) {
    query["EffectiveBandwidthFilter"] = request.getEffectiveBandwidthFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.getTrafficQosPolicyId();
  }

  if (!!request.hasTrafficQosQueueDescription()) {
    query["TrafficQosQueueDescription"] = request.getTrafficQosQueueDescription();
  }

  if (!!request.hasTrafficQosQueueId()) {
    query["TrafficQosQueueId"] = request.getTrafficQosQueueId();
  }

  if (!!request.hasTrafficQosQueueName()) {
    query["TrafficQosQueueName"] = request.getTrafficQosQueueName();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCenInterRegionTrafficQosQueues"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCenInterRegionTrafficQosQueuesResponse>();
}

/**
 * @summary Queries information about traffic scheduling policy queues by calling the ListCenInterRegionTrafficQosQueues operation.
 *
 * @description When you call this operation, specify at least one of the following parameters: **TransitRouterId**, **TrafficQosPolicyId**, or **TrafficQosQueueId**.
 * Make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system returns a **RequestId** but does not return information about traffic scheduling policies.
 *
 * @param request ListCenInterRegionTrafficQosQueuesRequest
 * @return ListCenInterRegionTrafficQosQueuesResponse
 */
ListCenInterRegionTrafficQosQueuesResponse Client::listCenInterRegionTrafficQosQueues(const ListCenInterRegionTrafficQosQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenInterRegionTrafficQosQueuesWithOptions(request, runtime);
}

/**
 * @summary Queries the elastic network interfaces (ENIs) within a virtual private cloud (VPC) that can serve as multicast sources or multicast members for multicast communication.
 *
 * @description Before you invoke the `ListGrantVSwitchEnis` operation, make sure that the VPC-connected instance is connected to Cloud Enterprise Network (CEN). For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
 *
 * @param request ListGrantVSwitchEnisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGrantVSwitchEnisResponse
 */
ListGrantVSwitchEnisResponse Client::listGrantVSwitchEnisWithOptions(const ListGrantVSwitchEnisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasNetworkInterfaceName()) {
    query["NetworkInterfaceName"] = request.getNetworkInterfaceName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrimaryIpAddress()) {
    query["PrimaryIpAddress"] = request.getPrimaryIpAddress();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGrantVSwitchEnis"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGrantVSwitchEnisResponse>();
}

/**
 * @summary Queries the elastic network interfaces (ENIs) within a virtual private cloud (VPC) that can serve as multicast sources or multicast members for multicast communication.
 *
 * @description Before you invoke the `ListGrantVSwitchEnis` operation, make sure that the VPC-connected instance is connected to Cloud Enterprise Network (CEN). For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
 *
 * @param request ListGrantVSwitchEnisRequest
 * @return ListGrantVSwitchEnisResponse
 */
ListGrantVSwitchEnisResponse Client::listGrantVSwitchEnis(const ListGrantVSwitchEnisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGrantVSwitchEnisWithOptions(request, runtime);
}

/**
 * @summary Queries information about vSwitches in a cross-account virtual private cloud (VPC) that is connected to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Before you invoke the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted authorization to access the cross-account VPC-connected instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
 *
 * @param request ListGrantVSwitchesToCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGrantVSwitchesToCenResponse
 */
ListGrantVSwitchesToCenResponse Client::listGrantVSwitchesToCenWithOptions(const ListGrantVSwitchesToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasEnabledIpv6()) {
    query["EnabledIpv6"] = request.getEnabledIpv6();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGrantVSwitchesToCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGrantVSwitchesToCenResponse>();
}

/**
 * @summary Queries information about vSwitches in a cross-account virtual private cloud (VPC) that is connected to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Before you invoke the `ListGrantVSwitchesToCen` operation, make sure that the CEN instance has been granted authorization to access the cross-account VPC-connected instance. For more information, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
 *
 * @param request ListGrantVSwitchesToCenRequest
 * @return ListGrantVSwitchesToCenResponse
 */
ListGrantVSwitchesToCenResponse Client::listGrantVSwitchesToCen(const ListGrantVSwitchesToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGrantVSwitchesToCenWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

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
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

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
ListTrafficMarkingPoliciesResponse Client::listTrafficMarkingPoliciesWithOptions(const ListTrafficMarkingPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.getTrafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.getTrafficMarkingPolicyName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrafficMarkingPolicies"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficMarkingPoliciesResponse>();
}

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
ListTrafficMarkingPoliciesResponse Client::listTrafficMarkingPolicies(const ListTrafficMarkingPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrafficMarkingPoliciesWithOptions(request, runtime);
}

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
ListTransitRouterAvailableResourceResponse Client::listTransitRouterAvailableResourceWithOptions(const ListTransitRouterAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSupportMulticast()) {
    query["SupportMulticast"] = request.getSupportMulticast();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterAvailableResource"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterAvailableResourceResponse>();
}

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
ListTransitRouterAvailableResourceResponse Client::listTransitRouterAvailableResource(const ListTransitRouterAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries information about CIDR blocks of a transit router by calling the ListTransitRouterCidr operation.
 *
 * @param request ListTransitRouterCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterCidrResponse
 */
ListTransitRouterCidrResponse Client::listTransitRouterCidrWithOptions(const ListTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.getTransitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterCidr"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterCidrResponse>();
}

/**
 * @summary Queries information about CIDR blocks of a transit router by calling the ListTransitRouterCidr operation.
 *
 * @param request ListTransitRouterCidrRequest
 * @return ListTransitRouterCidrResponse
 */
ListTransitRouterCidrResponse Client::listTransitRouterCidr(const ListTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterCidrWithOptions(request, runtime);
}

/**
 * @summary Queries the allocation information of a CIDR block by calling the ListTransitRouterCidrAllocation operation.
 *
 * @param request ListTransitRouterCidrAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterCidrAllocationResponse
 */
ListTransitRouterCidrAllocationResponse Client::listTransitRouterCidrAllocationWithOptions(const ListTransitRouterCidrAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachmentId()) {
    query["AttachmentId"] = request.getAttachmentId();
  }

  if (!!request.hasAttachmentName()) {
    query["AttachmentName"] = request.getAttachmentName();
  }

  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDedicatedOwnerId()) {
    query["DedicatedOwnerId"] = request.getDedicatedOwnerId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.getTransitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterCidrAllocation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterCidrAllocationResponse>();
}

/**
 * @summary Queries the allocation information of a CIDR block by calling the ListTransitRouterCidrAllocation operation.
 *
 * @param request ListTransitRouterCidrAllocationRequest
 * @return ListTransitRouterCidrAllocationResponse
 */
ListTransitRouterCidrAllocationResponse Client::listTransitRouterCidrAllocation(const ListTransitRouterCidrAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterCidrAllocationWithOptions(request, runtime);
}

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
ListTransitRouterEcrAttachmentsResponse Client::listTransitRouterEcrAttachmentsWithOptions(const ListTransitRouterEcrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterEcrAttachments"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterEcrAttachmentsResponse>();
}

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
ListTransitRouterEcrAttachmentsResponse Client::listTransitRouterEcrAttachments(const ListTransitRouterEcrAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterEcrAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterMulticastDomainAssociationsResponse Client::listTransitRouterMulticastDomainAssociationsWithOptions(const ListTransitRouterMulticastDomainAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterMulticastDomainAssociations"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterMulticastDomainAssociationsResponse>();
}

/**
 * @summary Queries the associations between a multicast domain and vSwitches.
 *
 * @description - When calling this operation, you must specify at least one of the request parameters **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. Specifying **TransitRouterAttachmentId** queries the information about vSwitches that are associated with a multicast domain under a VPC-connected instance. Specifying **TransitRouterMulticastDomainId** queries the information about vSwitches that are associated with the multicast domain.
 * - When calling the **ListTransitRouterMulticastDomainAssociations** operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the operation still returns a **RequestId** but does not return the associations between the multicast domain and vSwitches.
 *
 * @param request ListTransitRouterMulticastDomainAssociationsRequest
 * @return ListTransitRouterMulticastDomainAssociationsResponse
 */
ListTransitRouterMulticastDomainAssociationsResponse Client::listTransitRouterMulticastDomainAssociations(const ListTransitRouterMulticastDomainAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries information about vSwitches that are associated with multicast domains in a VPC-connected instance after the VPC-connected instance is connected to an Enterprise Edition transit router.
 *
 * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not return information about vSwitches that are associated with multicast domains in the VPC-connected instance.
 *
 * @param request ListTransitRouterMulticastDomainVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterMulticastDomainVSwitchesResponse
 */
ListTransitRouterMulticastDomainVSwitchesResponse Client::listTransitRouterMulticastDomainVSwitchesWithOptions(const ListTransitRouterMulticastDomainVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterMulticastDomainVSwitches"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterMulticastDomainVSwitchesResponse>();
}

/**
 * @summary Queries information about vSwitches that are associated with multicast domains in a VPC-connected instance after the VPC-connected instance is connected to an Enterprise Edition transit router.
 *
 * @description When you call the ListTransitRouterMulticastDomainVSwitches operation, make sure that the parameter values you specify are correct. If you specify incorrect parameter values, the system still returns a RequestId but does not return information about vSwitches that are associated with multicast domains in the VPC-connected instance.
 *
 * @param request ListTransitRouterMulticastDomainVSwitchesRequest
 * @return ListTransitRouterMulticastDomainVSwitchesResponse
 */
ListTransitRouterMulticastDomainVSwitchesResponse Client::listTransitRouterMulticastDomainVSwitches(const ListTransitRouterMulticastDomainVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainVSwitchesWithOptions(request, runtime);
}

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
ListTransitRouterMulticastDomainsResponse Client::listTransitRouterMulticastDomainsWithOptions(const ListTransitRouterMulticastDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterMulticastDomains"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterMulticastDomainsResponse>();
}

/**
 * @summary Queries information about multicast domains, such as the status, multicast domain ID, and description of multicast domains.
 *
 * @description - RegionId must be used together with CenId and cannot be used alone. Otherwise, multicast domain information is not displayed. However, TransitRouterId and TransitRouterMulticastDomainId can be used independently.
 * - Ensure that the parameter values you specify are correct when you call this operation. If you specify invalid parameter values, the system still returns a **RequestId** but does not display detailed multicast domain information.
 *
 * @param request ListTransitRouterMulticastDomainsRequest
 * @return ListTransitRouterMulticastDomainsResponse
 */
ListTransitRouterMulticastDomainsResponse Client::listTransitRouterMulticastDomains(const ListTransitRouterMulticastDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainsWithOptions(request, runtime);
}

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
ListTransitRouterMulticastGroupsResponse Client::listTransitRouterMulticastGroupsWithOptions(const ListTransitRouterMulticastGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.getGroupIpAddress();
  }

  if (!!request.hasIsGroupMember()) {
    query["IsGroupMember"] = request.getIsGroupMember();
  }

  if (!!request.hasIsGroupSource()) {
    query["IsGroupSource"] = request.getIsGroupSource();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.getPeerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterMulticastGroups"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterMulticastGroupsResponse>();
}

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
ListTransitRouterMulticastGroupsResponse Client::listTransitRouterMulticastGroups(const ListTransitRouterMulticastGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastGroupsWithOptions(request, runtime);
}

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
ListTransitRouterPeerAttachmentsResponse Client::listTransitRouterPeerAttachmentsWithOptions(const ListTransitRouterPeerAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterPeerAttachments"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterPeerAttachmentsResponse>();
}

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
ListTransitRouterPeerAttachmentsResponse Client::listTransitRouterPeerAttachments(const ListTransitRouterPeerAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterPeerAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Queries information about prefix lists associated with an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterPrefixListAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterPrefixListAssociationResponse
 */
ListTransitRouterPrefixListAssociationResponse Client::listTransitRouterPrefixListAssociationWithOptions(const ListTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextHop()) {
    query["NextHop"] = request.getNextHop();
  }

  if (!!request.hasNextHopInstanceId()) {
    query["NextHopInstanceId"] = request.getNextHopInstanceId();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.getOwnerUid();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.getPrefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.getTransitRouterTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterPrefixListAssociation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterPrefixListAssociationResponse>();
}

/**
 * @summary Queries information about prefix lists associated with an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterPrefixListAssociationRequest
 * @return ListTransitRouterPrefixListAssociationResponse
 */
ListTransitRouterPrefixListAssociationResponse Client::listTransitRouterPrefixListAssociation(const ListTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

/**
 * @summary Calls the ListTransitRouterRouteEntries operation to query the details of route entries in an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteEntriesResponse
 */
ListTransitRouterRouteEntriesResponse Client::listTransitRouterRouteEntriesWithOptions(const ListTransitRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.getPrefixListId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteFilter()) {
    query["RouteFilter"] = request.getRouteFilter();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.getTransitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryIds()) {
    query["TransitRouterRouteEntryIds"] = request.getTransitRouterRouteEntryIds();
  }

  if (!!request.hasTransitRouterRouteEntryNames()) {
    query["TransitRouterRouteEntryNames"] = request.getTransitRouterRouteEntryNames();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.getTransitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopResourceId()) {
    query["TransitRouterRouteEntryNextHopResourceId"] = request.getTransitRouterRouteEntryNextHopResourceId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopResourceType()) {
    query["TransitRouterRouteEntryNextHopResourceType"] = request.getTransitRouterRouteEntryNextHopResourceType();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.getTransitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteEntryOriginResourceId()) {
    query["TransitRouterRouteEntryOriginResourceId"] = request.getTransitRouterRouteEntryOriginResourceId();
  }

  if (!!request.hasTransitRouterRouteEntryOriginResourceType()) {
    query["TransitRouterRouteEntryOriginResourceType"] = request.getTransitRouterRouteEntryOriginResourceType();
  }

  if (!!request.hasTransitRouterRouteEntryStatus()) {
    query["TransitRouterRouteEntryStatus"] = request.getTransitRouterRouteEntryStatus();
  }

  if (!!request.hasTransitRouterRouteEntryType()) {
    query["TransitRouterRouteEntryType"] = request.getTransitRouterRouteEntryType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterRouteEntriesResponse>();
}

/**
 * @summary Calls the ListTransitRouterRouteEntries operation to query the details of route entries in an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterRouteEntriesRequest
 * @return ListTransitRouterRouteEntriesResponse
 */
ListTransitRouterRouteEntriesResponse Client::listTransitRouterRouteEntries(const ListTransitRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteEntriesWithOptions(request, runtime);
}

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
ListTransitRouterRouteTableAssociationsResponse Client::listTransitRouterRouteTableAssociationsWithOptions(const ListTransitRouterRouteTableAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentResourceId()) {
    query["TransitRouterAttachmentResourceId"] = request.getTransitRouterAttachmentResourceId();
  }

  if (!!request.hasTransitRouterAttachmentResourceType()) {
    query["TransitRouterAttachmentResourceType"] = request.getTransitRouterAttachmentResourceType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterRouteTableAssociations"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterRouteTableAssociationsResponse>();
}

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
ListTransitRouterRouteTableAssociationsResponse Client::listTransitRouterRouteTableAssociations(const ListTransitRouterRouteTableAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTableAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries the route learning relationships of an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterRouteTablePropagationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteTablePropagationsResponse
 */
ListTransitRouterRouteTablePropagationsResponse Client::listTransitRouterRouteTablePropagationsWithOptions(const ListTransitRouterRouteTablePropagationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentResourceId()) {
    query["TransitRouterAttachmentResourceId"] = request.getTransitRouterAttachmentResourceId();
  }

  if (!!request.hasTransitRouterAttachmentResourceType()) {
    query["TransitRouterAttachmentResourceType"] = request.getTransitRouterAttachmentResourceType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterRouteTablePropagations"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterRouteTablePropagationsResponse>();
}

/**
 * @summary Queries the route learning relationships of an Enterprise Edition transit router route table.
 *
 * @param request ListTransitRouterRouteTablePropagationsRequest
 * @return ListTransitRouterRouteTablePropagationsResponse
 */
ListTransitRouterRouteTablePropagationsResponse Client::listTransitRouterRouteTablePropagations(const ListTransitRouterRouteTablePropagationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTablePropagationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of route tables of an Enterprise Edition transit router by calling the ListTransitRouterRouteTables operation.
 *
 * @param request ListTransitRouterRouteTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteTablesResponse
 */
ListTransitRouterRouteTablesResponse Client::listTransitRouterRouteTablesWithOptions(const ListTransitRouterRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.getRouteTableOptions();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterRouteTableIds()) {
    query["TransitRouterRouteTableIds"] = request.getTransitRouterRouteTableIds();
  }

  if (!!request.hasTransitRouterRouteTableNames()) {
    query["TransitRouterRouteTableNames"] = request.getTransitRouterRouteTableNames();
  }

  if (!!request.hasTransitRouterRouteTableStatus()) {
    query["TransitRouterRouteTableStatus"] = request.getTransitRouterRouteTableStatus();
  }

  if (!!request.hasTransitRouterRouteTableType()) {
    query["TransitRouterRouteTableType"] = request.getTransitRouterRouteTableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterRouteTables"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterRouteTablesResponse>();
}

/**
 * @summary Queries the details of route tables of an Enterprise Edition transit router by calling the ListTransitRouterRouteTables operation.
 *
 * @param request ListTransitRouterRouteTablesRequest
 * @return ListTransitRouterRouteTablesResponse
 */
ListTransitRouterRouteTablesResponse Client::listTransitRouterRouteTables(const ListTransitRouterRouteTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTablesWithOptions(request, runtime);
}

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
ListTransitRouterVbrAttachmentsResponse Client::listTransitRouterVbrAttachmentsWithOptions(const ListTransitRouterVbrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterVbrAttachments"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterVbrAttachmentsResponse>();
}

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
ListTransitRouterVbrAttachmentsResponse Client::listTransitRouterVbrAttachments(const ListTransitRouterVbrAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVbrAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterVpcAttachmentsResponse Client::listTransitRouterVpcAttachmentsWithOptions(const ListTransitRouterVpcAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterVpcAttachments"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterVpcAttachmentsResponse>();
}

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
ListTransitRouterVpcAttachmentsResponse Client::listTransitRouterVpcAttachments(const ListTransitRouterVpcAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVpcAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterVpnAttachmentsResponse Client::listTransitRouterVpnAttachmentsWithOptions(const ListTransitRouterVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouterVpnAttachments"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRouterVpnAttachmentsResponse>();
}

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
ListTransitRouterVpnAttachmentsResponse Client::listTransitRouterVpnAttachments(const ListTransitRouterVpnAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVpnAttachmentsWithOptions(request, runtime);
}

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
ListTransitRoutersResponse Client::listTransitRoutersWithOptions(const ListTransitRoutersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasFeatureFilter()) {
    query["FeatureFilter"] = request.getFeatureFilter();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.getTransitRouterName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransitRouters"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransitRoutersResponse>();
}

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
ListTransitRoutersResponse Client::listTransitRouters(const ListTransitRoutersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRoutersWithOptions(request, runtime);
}

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
ModifyCenAttributeResponse Client::modifyCenAttributeWithOptions(const ModifyCenAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.getProtectionLevel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCenAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCenAttributeResponse>();
}

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
ModifyCenAttributeResponse Client::modifyCenAttribute(const ModifyCenAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a bandwidth plan instance by calling the ModifyCenBandwidthPackageAttribute operation.
 *
 * @param request ModifyCenBandwidthPackageAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCenBandwidthPackageAttributeResponse
 */
ModifyCenBandwidthPackageAttributeResponse Client::modifyCenBandwidthPackageAttributeWithOptions(const ModifyCenBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCenBandwidthPackageAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCenBandwidthPackageAttributeResponse>();
}

/**
 * @summary Modifies the name and description of a bandwidth plan instance by calling the ModifyCenBandwidthPackageAttribute operation.
 *
 * @param request ModifyCenBandwidthPackageAttributeRequest
 * @return ModifyCenBandwidthPackageAttributeResponse
 */
ModifyCenBandwidthPackageAttributeResponse Client::modifyCenBandwidthPackageAttribute(const ModifyCenBandwidthPackageAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenBandwidthPackageAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the peak bandwidth of a bandwidth plan instance by calling the ModifyCenBandwidthPackageSpec operation.
 *
 * @param request ModifyCenBandwidthPackageSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCenBandwidthPackageSpecResponse
 */
ModifyCenBandwidthPackageSpecResponse Client::modifyCenBandwidthPackageSpecWithOptions(const ModifyCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCenBandwidthPackageSpec"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCenBandwidthPackageSpecResponse>();
}

/**
 * @summary Modifies the peak bandwidth of a bandwidth plan instance by calling the ModifyCenBandwidthPackageSpec operation.
 *
 * @param request ModifyCenBandwidthPackageSpecRequest
 * @return ModifyCenBandwidthPackageSpecResponse
 */
ModifyCenBandwidthPackageSpecResponse Client::modifyCenBandwidthPackageSpec(const ModifyCenBandwidthPackageSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenBandwidthPackageSpecWithOptions(request, runtime);
}

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
ModifyCenRouteMapResponse Client::modifyCenRouteMapWithOptions(const ModifyCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsPathMatchMode()) {
    query["AsPathMatchMode"] = request.getAsPathMatchMode();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.getCenRegionId();
  }

  if (!!request.hasCidrMatchMode()) {
    query["CidrMatchMode"] = request.getCidrMatchMode();
  }

  if (!!request.hasCommunityMatchMode()) {
    query["CommunityMatchMode"] = request.getCommunityMatchMode();
  }

  if (!!request.hasCommunityOperateMode()) {
    query["CommunityOperateMode"] = request.getCommunityOperateMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationChildInstanceTypes()) {
    query["DestinationChildInstanceTypes"] = request.getDestinationChildInstanceTypes();
  }

  if (!!request.hasDestinationCidrBlocks()) {
    query["DestinationCidrBlocks"] = request.getDestinationCidrBlocks();
  }

  if (!!request.hasDestinationInstanceIds()) {
    query["DestinationInstanceIds"] = request.getDestinationInstanceIds();
  }

  if (!!request.hasDestinationInstanceIdsReverseMatch()) {
    query["DestinationInstanceIdsReverseMatch"] = request.getDestinationInstanceIdsReverseMatch();
  }

  if (!!request.hasDestinationRegionIds()) {
    query["DestinationRegionIds"] = request.getDestinationRegionIds();
  }

  if (!!request.hasDestinationRouteTableIds()) {
    query["DestinationRouteTableIds"] = request.getDestinationRouteTableIds();
  }

  if (!!request.hasMapResult()) {
    query["MapResult"] = request.getMapResult();
  }

  if (!!request.hasMatchAddressType()) {
    query["MatchAddressType"] = request.getMatchAddressType();
  }

  if (!!request.hasMatchAsns()) {
    query["MatchAsns"] = request.getMatchAsns();
  }

  if (!!request.hasMatchCommunitySet()) {
    query["MatchCommunitySet"] = request.getMatchCommunitySet();
  }

  if (!!request.hasNextPriority()) {
    query["NextPriority"] = request.getNextPriority();
  }

  if (!!request.hasOperateCommunitySet()) {
    query["OperateCommunitySet"] = request.getOperateCommunitySet();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPreference()) {
    query["Preference"] = request.getPreference();
  }

  if (!!request.hasPrependAsPath()) {
    query["PrependAsPath"] = request.getPrependAsPath();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.getRouteMapId();
  }

  if (!!request.hasRouteTypes()) {
    query["RouteTypes"] = request.getRouteTypes();
  }

  if (!!request.hasSourceChildInstanceTypes()) {
    query["SourceChildInstanceTypes"] = request.getSourceChildInstanceTypes();
  }

  if (!!request.hasSourceInstanceIds()) {
    query["SourceInstanceIds"] = request.getSourceInstanceIds();
  }

  if (!!request.hasSourceInstanceIdsReverseMatch()) {
    query["SourceInstanceIdsReverseMatch"] = request.getSourceInstanceIdsReverseMatch();
  }

  if (!!request.hasSourceRegionIds()) {
    query["SourceRegionIds"] = request.getSourceRegionIds();
  }

  if (!!request.hasSourceRouteTableIds()) {
    query["SourceRouteTableIds"] = request.getSourceRouteTableIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCenRouteMap"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCenRouteMapResponse>();
}

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
ModifyCenRouteMapResponse Client::modifyCenRouteMap(const ModifyCenRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenRouteMapWithOptions(request, runtime);
}

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
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttributeWithOptions(const ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFlowLogAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFlowLogAttributeResponse>();
}

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
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the payer for a cross-account network instance connection of a transit router instance.
 *
 * @description The ModifyGrantInstanceToTransitRouter operation supports modifying only the payer for cross-account virtual private cloud (VPC), virtual border router (VBR), and IPsec connection instances connected to a transit router instance.
 *
 * @param request ModifyGrantInstanceToTransitRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGrantInstanceToTransitRouterResponse
 */
ModifyGrantInstanceToTransitRouterResponse Client::modifyGrantInstanceToTransitRouterWithOptions(const ModifyGrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyGrantInstanceToTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGrantInstanceToTransitRouterResponse>();
}

/**
 * @summary Modifies the payer for a cross-account network instance connection of a transit router instance.
 *
 * @description The ModifyGrantInstanceToTransitRouter operation supports modifying only the payer for cross-account virtual private cloud (VPC), virtual border router (VBR), and IPsec connection instances connected to a transit router instance.
 *
 * @param request ModifyGrantInstanceToTransitRouterRequest
 * @return ModifyGrantInstanceToTransitRouterResponse
 */
ModifyGrantInstanceToTransitRouterResponse Client::modifyGrantInstanceToTransitRouter(const ModifyGrantInstanceToTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGrantInstanceToTransitRouterWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a traffic classification rule.
 *
 * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
 */
ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse Client::modifyTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRuleDescription()) {
    query["TrafficMatchRuleDescription"] = request.getTrafficMatchRuleDescription();
  }

  if (!!request.hasTrafficMatchRuleId()) {
    query["TrafficMatchRuleId"] = request.getTrafficMatchRuleId();
  }

  if (!!request.hasTrafficMatchRuleName()) {
    query["TrafficMatchRuleName"] = request.getTrafficMatchRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTrafficMatchRuleToTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse>();
}

/**
 * @summary Modifies the name and description of a traffic classification rule.
 *
 * @param request ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest
 * @return ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse
 */
ModifyTrafficMatchRuleToTrafficMarkingPolicyResponse Client::modifyTrafficMatchRuleToTrafficMarkingPolicy(const ModifyTrafficMatchRuleToTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrafficMatchRuleToTrafficMarkingPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies an aggregate route.
 *
 * @param tmpReq ModifyTransitRouteTableAggregationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTransitRouteTableAggregationResponse
 */
ModifyTransitRouteTableAggregationResponse Client::modifyTransitRouteTableAggregationWithOptions(const ModifyTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyTransitRouteTableAggregationShrinkRequest request = ModifyTransitRouteTableAggregationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouteTableAggregationScopeList()) {
    request.setTransitRouteTableAggregationScopeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransitRouteTableAggregationScopeList(), "TransitRouteTableAggregationScopeList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableAggregationDescription()) {
    query["TransitRouteTableAggregationDescription"] = request.getTransitRouteTableAggregationDescription();
  }

  if (!!request.hasTransitRouteTableAggregationName()) {
    query["TransitRouteTableAggregationName"] = request.getTransitRouteTableAggregationName();
  }

  if (!!request.hasTransitRouteTableAggregationScope()) {
    query["TransitRouteTableAggregationScope"] = request.getTransitRouteTableAggregationScope();
  }

  if (!!request.hasTransitRouteTableAggregationScopeListShrink()) {
    query["TransitRouteTableAggregationScopeList"] = request.getTransitRouteTableAggregationScopeListShrink();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTransitRouteTableAggregation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTransitRouteTableAggregationResponse>();
}

/**
 * @summary Modifies an aggregate route.
 *
 * @param request ModifyTransitRouteTableAggregationRequest
 * @return ModifyTransitRouteTableAggregationResponse
 */
ModifyTransitRouteTableAggregationResponse Client::modifyTransitRouteTableAggregation(const ModifyTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouteTableAggregationWithOptions(request, runtime);
}

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
ModifyTransitRouterCidrResponse Client::modifyTransitRouterCidrWithOptions(const ModifyTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.getCidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPublishCidrRoute()) {
    query["PublishCidrRoute"] = request.getPublishCidrRoute();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.getTransitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTransitRouterCidr"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTransitRouterCidrResponse>();
}

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
ModifyTransitRouterCidrResponse Client::modifyTransitRouterCidr(const ModifyTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouterCidrWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, and feature options of a multicast domain.
 *
 * @param request ModifyTransitRouterMulticastDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTransitRouterMulticastDomainResponse
 */
ModifyTransitRouterMulticastDomainResponse Client::modifyTransitRouterMulticastDomainWithOptions(const ModifyTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.getOptions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainDescription()) {
    query["TransitRouterMulticastDomainDescription"] = request.getTransitRouterMulticastDomainDescription();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasTransitRouterMulticastDomainName()) {
    query["TransitRouterMulticastDomainName"] = request.getTransitRouterMulticastDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTransitRouterMulticastDomain"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTransitRouterMulticastDomainResponse>();
}

/**
 * @summary Modifies the name, description, and feature options of a multicast domain.
 *
 * @param request ModifyTransitRouterMulticastDomainRequest
 * @return ModifyTransitRouterMulticastDomainResponse
 */
ModifyTransitRouterMulticastDomainResponse Client::modifyTransitRouterMulticastDomain(const ModifyTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouterMulticastDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which a Cloud Enterprise Network (CEN) instance or a bandwidth plan instance belongs.
 *
 * @description CEN instances and bandwidth plan instances belong to the default resource group by default. You can call the `MoveResourceGroup` operation to modify the resource group to which a CEN instance or a bandwidth plan instance belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Modifies the resource group to which a Cloud Enterprise Network (CEN) instance or a bandwidth plan instance belongs.
 *
 * @description CEN instances and bandwidth plan instances belong to the default resource group by default. You can call the `MoveResourceGroup` operation to modify the resource group to which a CEN instance or a bandwidth plan instance belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

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
OpenTransitRouterServiceResponse Client::openTransitRouterServiceWithOptions(const OpenTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenTransitRouterService"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenTransitRouterServiceResponse>();
}

/**
 * @summary Activates the transit router service.
 *
 * @description You can call the `OpenTransitRouterService` operation to activate the transit router service free of charge. After the transit router service is activated, the system automatically generates an order. You can use the order ID returned by the `OpenTransitRouterService` operation to query order information in the <props="china">[Alibaba Cloud Management Console Order Center](https://usercenter2.aliyun.com/order/list?pageIndex=1&pageSize=20)<props="intl">[Alibaba Cloud Management Console Order Center](https://usercenter2-intl.aliyun.com/order/list).
 * > Before calling this operation, call [CheckTransitRouterService](~~CheckTransitRouterService~~) to check whether the transit router service is already activated for the current account. If it is already activated, you do not need to call this operation again.
 *
 * @param request OpenTransitRouterServiceRequest
 * @return OpenTransitRouterServiceResponse
 */
OpenTransitRouterServiceResponse Client::openTransitRouterService(const OpenTransitRouterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openTransitRouterServiceWithOptions(request, runtime);
}

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
PublishRouteEntriesResponse Client::publishRouteEntriesWithOptions(const PublishRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRouteEntriesResponse>();
}

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
PublishRouteEntriesResponse Client::publishRouteEntries(const PublishRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishRouteEntriesWithOptions(request, runtime);
}

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
RefreshTransitRouteTableAggregationResponse Client::refreshTransitRouteTableAggregationWithOptions(const RefreshTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.getTransitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.getTransitRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshTransitRouteTableAggregation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshTransitRouteTableAggregationResponse>();
}

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
RefreshTransitRouteTableAggregationResponse Client::refreshTransitRouteTableAggregation(const RefreshTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshTransitRouteTableAggregationWithOptions(request, runtime);
}

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
RegisterTransitRouterMulticastGroupMembersResponse Client::registerTransitRouterMulticastGroupMembersWithOptions(const RegisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.getGroupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.getPeerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterTransitRouterMulticastGroupMembers"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterTransitRouterMulticastGroupMembersResponse>();
}

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
RegisterTransitRouterMulticastGroupMembersResponse Client::registerTransitRouterMulticastGroupMembers(const RegisterTransitRouterMulticastGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerTransitRouterMulticastGroupMembersWithOptions(request, runtime);
}

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
RegisterTransitRouterMulticastGroupSourcesResponse Client::registerTransitRouterMulticastGroupSourcesWithOptions(const RegisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.getGroupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.getNetworkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.getTransitRouterMulticastDomainId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterTransitRouterMulticastGroupSources"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterTransitRouterMulticastGroupSourcesResponse>();
}

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
RegisterTransitRouterMulticastGroupSourcesResponse Client::registerTransitRouterMulticastGroupSources(const RegisterTransitRouterMulticastGroupSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerTransitRouterMulticastGroupSourcesWithOptions(request, runtime);
}

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
RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkRuleIds()) {
    query["TrafficMarkRuleIds"] = request.getTrafficMarkRuleIds();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTrafficMatchRuleFromTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse>();
}

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
RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTrafficMatchRuleFromTrafficMarkingPolicy(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(request, runtime);
}

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
RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkRuleIds()) {
    query["TrafficMarkRuleIds"] = request.getTrafficMarkRuleIds();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTraficMatchRuleFromTrafficMarkingPolicy"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse>();
}

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
RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTraficMatchRuleFromTrafficMarkingPolicy(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(request, runtime);
}

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
ReplaceTransitRouterRouteTableAssociationResponse Client::replaceTransitRouterRouteTableAssociationWithOptions(const ReplaceTransitRouterRouteTableAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceTransitRouterRouteTableAssociation"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceTransitRouterRouteTableAssociationResponse>();
}

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
ReplaceTransitRouterRouteTableAssociationResponse Client::replaceTransitRouterRouteTableAssociation(const ReplaceTransitRouterRouteTableAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceTransitRouterRouteTableAssociationWithOptions(request, runtime);
}

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
ResolveAndRouteServiceInCenResponse Client::resolveAndRouteServiceInCenWithOptions(const ResolveAndRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionIds()) {
    query["AccessRegionIds"] = request.getAccessRegionIds();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.getHostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.getHostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResolveAndRouteServiceInCen"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResolveAndRouteServiceInCenResponse>();
}

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
ResolveAndRouteServiceInCenResponse Client::resolveAndRouteServiceInCen(const ResolveAndRouteServiceInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resolveAndRouteServiceInCenWithOptions(request, runtime);
}

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
RevokeInstanceFromTransitRouterResponse Client::revokeInstanceFromTransitRouterWithOptions(const RevokeInstanceFromTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeInstanceFromTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeInstanceFromTransitRouterResponse>();
}

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
RevokeInstanceFromTransitRouterResponse Client::revokeInstanceFromTransitRouter(const RevokeInstanceFromTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromTransitRouterWithOptions(request, runtime);
}

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
RoutePrivateZoneInCenToVpcResponse Client::routePrivateZoneInCenToVpcWithOptions(const RoutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.getAccessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.getHostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.getHostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RoutePrivateZoneInCenToVpc"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RoutePrivateZoneInCenToVpcResponse>();
}

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
RoutePrivateZoneInCenToVpcResponse Client::routePrivateZoneInCenToVpc(const RoutePrivateZoneInCenToVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return routePrivateZoneInCenToVpcWithOptions(request, runtime);
}

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
SetCenInterRegionBandwidthLimitResponse Client::setCenInterRegionBandwidthLimitWithOptions(const SetCenInterRegionBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthLimit()) {
    query["BandwidthLimit"] = request.getBandwidthLimit();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.getBandwidthType();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasLocalRegionId()) {
    query["LocalRegionId"] = request.getLocalRegionId();
  }

  if (!!request.hasOppositeRegionId()) {
    query["OppositeRegionId"] = request.getOppositeRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCenInterRegionBandwidthLimit"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCenInterRegionBandwidthLimitResponse>();
}

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
SetCenInterRegionBandwidthLimitResponse Client::setCenInterRegionBandwidthLimit(const SetCenInterRegionBandwidthLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCenInterRegionBandwidthLimitWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

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
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

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
TempUpgradeCenBandwidthPackageSpecResponse Client::tempUpgradeCenBandwidthPackageSpecWithOptions(const TempUpgradeCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TempUpgradeCenBandwidthPackageSpec"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempUpgradeCenBandwidthPackageSpecResponse>();
}

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
TempUpgradeCenBandwidthPackageSpecResponse Client::tempUpgradeCenBandwidthPackageSpec(const TempUpgradeCenBandwidthPackageSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempUpgradeCenBandwidthPackageSpecWithOptions(request, runtime);
}

/**
 * @summary Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. After the disassociation, the bandwidth package can be associated with another CEN instance.
 *
 * @description Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. Before you call this operation, make sure that no inter-region bandwidth is configured for the bandwidth package. You can call [DescribeCenInterRegionBandwidthLimits](https://help.aliyun.com/document_detail/468275.html) to query inter-region bandwidth, and then call [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html) to set BandwidthLimit to 0 to delete the configured inter-region bandwidth.
 *
 * @param request UnassociateCenBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateCenBandwidthPackageResponse
 */
UnassociateCenBandwidthPackageResponse Client::unassociateCenBandwidthPackageWithOptions(const UnassociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnassociateCenBandwidthPackage"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassociateCenBandwidthPackageResponse>();
}

/**
 * @summary Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. After the disassociation, the bandwidth package can be associated with another CEN instance.
 *
 * @description Disassociates a bandwidth package from a Cloud Enterprise Network (CEN) instance. Before you call this operation, make sure that no inter-region bandwidth is configured for the bandwidth package. You can call [DescribeCenInterRegionBandwidthLimits](https://help.aliyun.com/document_detail/468275.html) to query inter-region bandwidth, and then call [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html) to set BandwidthLimit to 0 to delete the configured inter-region bandwidth.
 *
 * @param request UnassociateCenBandwidthPackageRequest
 * @return UnassociateCenBandwidthPackageResponse
 */
UnassociateCenBandwidthPackageResponse Client::unassociateCenBandwidthPackage(const UnassociateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateCenBandwidthPackageWithOptions(request, runtime);
}

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
UnroutePrivateZoneInCenToVpcResponse Client::unroutePrivateZoneInCenToVpcWithOptions(const UnroutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.getAccessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnroutePrivateZoneInCenToVpc"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnroutePrivateZoneInCenToVpcResponse>();
}

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
UnroutePrivateZoneInCenToVpcResponse Client::unroutePrivateZoneInCenToVpc(const UnroutePrivateZoneInCenToVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unroutePrivateZoneInCenToVpcWithOptions(request, runtime);
}

/**
 * @summary Remove tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Remove tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a traffic scheduling policy.
 *
 * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
 */
UpdateCenInterRegionTrafficQosPolicyAttributeResponse Client::updateCenInterRegionTrafficQosPolicyAttributeWithOptions(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.getTrafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.getTrafficQosPolicyId();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.getTrafficQosPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCenInterRegionTrafficQosPolicyAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCenInterRegionTrafficQosPolicyAttributeResponse>();
}

/**
 * @summary Modifies the name and description of a traffic scheduling policy.
 *
 * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
 * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
 */
UpdateCenInterRegionTrafficQosPolicyAttributeResponse Client::updateCenInterRegionTrafficQosPolicyAttribute(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCenInterRegionTrafficQosPolicyAttributeWithOptions(request, runtime);
}

/**
 * @summary Calls the UpdateCenInterRegionTrafficQosQueueAttribute operation to modify the name, description, cross-region bandwidth, and DSCP value configurations of a queue in a traffic scheduling policy.
 *
 * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
 */
UpdateCenInterRegionTrafficQosQueueAttributeResponse Client::updateCenInterRegionTrafficQosQueueAttributeWithOptions(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDscps()) {
    query["Dscps"] = request.getDscps();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQosQueueDescription()) {
    query["QosQueueDescription"] = request.getQosQueueDescription();
  }

  if (!!request.hasQosQueueId()) {
    query["QosQueueId"] = request.getQosQueueId();
  }

  if (!!request.hasQosQueueName()) {
    query["QosQueueName"] = request.getQosQueueName();
  }

  if (!!request.hasRemainBandwidthPercent()) {
    query["RemainBandwidthPercent"] = request.getRemainBandwidthPercent();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCenInterRegionTrafficQosQueueAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCenInterRegionTrafficQosQueueAttributeResponse>();
}

/**
 * @summary Calls the UpdateCenInterRegionTrafficQosQueueAttribute operation to modify the name, description, cross-region bandwidth, and DSCP value configurations of a queue in a traffic scheduling policy.
 *
 * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
 * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
 */
UpdateCenInterRegionTrafficQosQueueAttributeResponse Client::updateCenInterRegionTrafficQosQueueAttribute(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCenInterRegionTrafficQosQueueAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, and traffic classification rules of a traffic marking policy.
 *
 * @param request UpdateTrafficMarkingPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficMarkingPolicyAttributeResponse
 */
UpdateTrafficMarkingPolicyAttributeResponse Client::updateTrafficMarkingPolicyAttributeWithOptions(const UpdateTrafficMarkingPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTrafficMatchRules()) {
    query["AddTrafficMatchRules"] = request.getAddTrafficMatchRules();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteTrafficMatchRules()) {
    query["DeleteTrafficMatchRules"] = request.getDeleteTrafficMatchRules();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.getTrafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.getTrafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.getTrafficMarkingPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTrafficMarkingPolicyAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficMarkingPolicyAttributeResponse>();
}

/**
 * @summary Modifies the name, description, and traffic classification rules of a traffic marking policy.
 *
 * @param request UpdateTrafficMarkingPolicyAttributeRequest
 * @return UpdateTrafficMarkingPolicyAttributeResponse
 */
UpdateTrafficMarkingPolicyAttributeResponse Client::updateTrafficMarkingPolicyAttribute(const UpdateTrafficMarkingPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTrafficMarkingPolicyAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterResponse Client::updateTransitRouterWithOptions(const UpdateTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterDescription()) {
    query["TransitRouterDescription"] = request.getTransitRouterDescription();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.getTransitRouterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouter"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterResponse>();
}

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
UpdateTransitRouterResponse Client::updateTransitRouter(const UpdateTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterWithOptions(request, runtime);
}

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
UpdateTransitRouterEcrAttachmentAttributeResponse Client::updateTransitRouterEcrAttachmentAttributeWithOptions(const UpdateTransitRouterEcrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterEcrAttachmentAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterEcrAttachmentAttributeResponse>();
}

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
UpdateTransitRouterEcrAttachmentAttributeResponse Client::updateTransitRouterEcrAttachmentAttribute(const UpdateTransitRouterEcrAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterEcrAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterPeerAttachmentAttributeResponse Client::updateTransitRouterPeerAttachmentAttributeWithOptions(const UpdateTransitRouterPeerAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.getBandwidthType();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.getCenBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDefaultLinkType()) {
    query["DefaultLinkType"] = request.getDefaultLinkType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterPeerAttachmentAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterPeerAttachmentAttributeResponse>();
}

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
UpdateTransitRouterPeerAttachmentAttributeResponse Client::updateTransitRouterPeerAttachmentAttribute(const UpdateTransitRouterPeerAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterPeerAttachmentAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a route entry in an Enterprise Edition transit router route table.
 *
 * @param request UpdateTransitRouterRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterRouteEntryResponse
 */
UpdateTransitRouterRouteEntryResponse Client::updateTransitRouterRouteEntryWithOptions(const UpdateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDescription()) {
    query["TransitRouterRouteEntryDescription"] = request.getTransitRouterRouteEntryDescription();
  }

  if (!!request.hasTransitRouterRouteEntryId()) {
    query["TransitRouterRouteEntryId"] = request.getTransitRouterRouteEntryId();
  }

  if (!!request.hasTransitRouterRouteEntryName()) {
    query["TransitRouterRouteEntryName"] = request.getTransitRouterRouteEntryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterRouteEntry"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterRouteEntryResponse>();
}

/**
 * @summary Modifies the name and description of a route entry in an Enterprise Edition transit router route table.
 *
 * @param request UpdateTransitRouterRouteEntryRequest
 * @return UpdateTransitRouterRouteEntryResponse
 */
UpdateTransitRouterRouteEntryResponse Client::updateTransitRouterRouteEntry(const UpdateTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Calls the UpdateTransitRouterRouteTable operation to modify the name and description of an Enterprise Edition transit router route table and to enable or disable multi-region equal-cost multi-path (ECMP) routing.
 *
 * @param request UpdateTransitRouterRouteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterRouteTableResponse
 */
UpdateTransitRouterRouteTableResponse Client::updateTransitRouterRouteTableWithOptions(const UpdateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.getRouteTableOptions();
  }

  if (!!request.hasTransitRouterRouteTableDescription()) {
    query["TransitRouterRouteTableDescription"] = request.getTransitRouterRouteTableDescription();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.getTransitRouterRouteTableId();
  }

  if (!!request.hasTransitRouterRouteTableName()) {
    query["TransitRouterRouteTableName"] = request.getTransitRouterRouteTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterRouteTable"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterRouteTableResponse>();
}

/**
 * @summary Calls the UpdateTransitRouterRouteTable operation to modify the name and description of an Enterprise Edition transit router route table and to enable or disable multi-region equal-cost multi-path (ECMP) routing.
 *
 * @param request UpdateTransitRouterRouteTableRequest
 * @return UpdateTransitRouterRouteTableResponse
 */
UpdateTransitRouterRouteTableResponse Client::updateTransitRouterRouteTable(const UpdateTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterRouteTableWithOptions(request, runtime);
}

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
UpdateTransitRouterVbrAttachmentAttributeResponse Client::updateTransitRouterVbrAttachmentAttributeWithOptions(const UpdateTransitRouterVbrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterVbrAttachmentAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterVbrAttachmentAttributeResponse>();
}

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
UpdateTransitRouterVbrAttachmentAttributeResponse Client::updateTransitRouterVbrAttachmentAttribute(const UpdateTransitRouterVbrAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVbrAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterVpcAttachmentAttributeResponse Client::updateTransitRouterVpcAttachmentAttributeWithOptions(const UpdateTransitRouterVpcAttachmentAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTransitRouterVpcAttachmentAttributeShrinkRequest request = UpdateTransitRouterVpcAttachmentAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOptions(), "Options", "json"));
  }

  if (!!tmpReq.hasTransitRouterVPCAttachmentOptions()) {
    request.setTransitRouterVPCAttachmentOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransitRouterVPCAttachmentOptions(), "TransitRouterVPCAttachmentOptions", "json"));
  }

  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOptionsShrink()) {
    query["Options"] = request.getOptionsShrink();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterVPCAttachmentOptionsShrink()) {
    query["TransitRouterVPCAttachmentOptions"] = request.getTransitRouterVPCAttachmentOptionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterVpcAttachmentAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterVpcAttachmentAttributeResponse>();
}

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
UpdateTransitRouterVpcAttachmentAttributeResponse Client::updateTransitRouterVpcAttachmentAttribute(const UpdateTransitRouterVpcAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpcAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterVpcAttachmentZonesResponse Client::updateTransitRouterVpcAttachmentZonesWithOptions(const UpdateTransitRouterVpcAttachmentZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddZoneMappings()) {
    query["AddZoneMappings"] = request.getAddZoneMappings();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemoveZoneMappings()) {
    query["RemoveZoneMappings"] = request.getRemoveZoneMappings();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterVpcAttachmentZones"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterVpcAttachmentZonesResponse>();
}

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
UpdateTransitRouterVpcAttachmentZonesResponse Client::updateTransitRouterVpcAttachmentZones(const UpdateTransitRouterVpcAttachmentZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpcAttachmentZonesWithOptions(request, runtime);
}

/**
 * @summary Calls the UpdateTransitRouterVpnAttachmentAttribute operation to modify the name, description, and whether to automatically publish route entries for a VPN connection under an Enterprise Edition transit router.
 *
 * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterVpnAttachmentAttributeResponse
 */
UpdateTransitRouterVpnAttachmentAttributeResponse Client::updateTransitRouterVpnAttachmentAttributeWithOptions(const UpdateTransitRouterVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.getAutoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.getTransitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.getTransitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.getTransitRouterAttachmentName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransitRouterVpnAttachmentAttribute"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransitRouterVpnAttachmentAttributeResponse>();
}

/**
 * @summary Calls the UpdateTransitRouterVpnAttachmentAttribute operation to modify the name, description, and whether to automatically publish route entries for a VPN connection under an Enterprise Edition transit router.
 *
 * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
 * @return UpdateTransitRouterVpnAttachmentAttributeResponse
 */
UpdateTransitRouterVpnAttachmentAttributeResponse Client::updateTransitRouterVpnAttachmentAttribute(const UpdateTransitRouterVpnAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpnAttachmentAttributeWithOptions(request, runtime);
}

/**
 * @summary Calls the WithdrawPublishedRouteEntries operation to withdraw routing entries that have been published from a virtual private cloud (VPC) or virtual border router (VBR) instance to Cloud Enterprise Network (CEN).
 *
 * @param request WithdrawPublishedRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawPublishedRouteEntriesResponse
 */
WithdrawPublishedRouteEntriesResponse Client::withdrawPublishedRouteEntriesWithOptions(const WithdrawPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.getChildInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawPublishedRouteEntries"},
    {"version" , "2017-09-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawPublishedRouteEntriesResponse>();
}

/**
 * @summary Calls the WithdrawPublishedRouteEntries operation to withdraw routing entries that have been published from a virtual private cloud (VPC) or virtual border router (VBR) instance to Cloud Enterprise Network (CEN).
 *
 * @param request WithdrawPublishedRouteEntriesRequest
 * @return WithdrawPublishedRouteEntriesResponse
 */
WithdrawPublishedRouteEntriesResponse Client::withdrawPublishedRouteEntries(const WithdrawPublishedRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawPublishedRouteEntriesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cbn20170912