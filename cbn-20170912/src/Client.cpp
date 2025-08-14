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
ActiveFlowLogResponse Client::activeFlowLogWithOptions(const ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
ActiveFlowLogResponse Client::activeFlowLog(const ActiveFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeFlowLogWithOptions(request, runtime);
}

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
AddTrafficMatchRuleToTrafficMarkingPolicyResponse Client::addTrafficMatchRuleToTrafficMarkingPolicyWithOptions(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.trafficMatchRules();
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
 * @summary Adds a traffic classification rule to a traffic marking policy.
 *
 * @description **AddTrafficMatchRuleToTrafficMarkingPolicy** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTrafficMarkingPolicies** operation to query the status of a traffic classification rule.
 * *   If a traffic classification rule is in the **Creating** state, the traffic classification rule is being created. In this case, you can query the traffic classification rule but cannot perform other operations.
 * *   If a traffic classification rule is in the **Active** state, the traffic classification rule is added to the traffic marking policy.
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
 * @summary Adds a traffic classification rule to a traffic marking policy.
 *
 * @description ### Usage notes
 * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. If you need to add a traffic classification rule to a traffic marking policy, call the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation.
 *
 * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
 */
AddTraficMatchRuleToTrafficMarkingPolicyResponse Client::addTraficMatchRuleToTrafficMarkingPolicyWithOptions(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.trafficMatchRules();
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
 * @summary Adds a traffic classification rule to a traffic marking policy.
 *
 * @description ### Usage notes
 * The **AddTraficMatchRuleToTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. If you need to add a traffic classification rule to a traffic marking policy, call the [AddTrafficMatchRuleToTrafficMarkingPolicy](https://help.aliyun.com/document_detail/427602.html) operation.
 *
 * @param request AddTraficMatchRuleToTrafficMarkingPolicyRequest
 * @return AddTraficMatchRuleToTrafficMarkingPolicyResponse
 */
AddTraficMatchRuleToTrafficMarkingPolicyResponse Client::addTraficMatchRuleToTrafficMarkingPolicy(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTraficMatchRuleToTrafficMarkingPolicyWithOptions(request, runtime);
}

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
AssociateCenBandwidthPackageResponse Client::associateCenBandwidthPackageWithOptions(const AssociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Associates a bandwidth plan with a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can associate multiple bandwidth plans with a CEN instance. However, the pair of areas connected by each bandwidth plan must be unique.
 * For example, if a CEN instance is associated with a bandwidth plan that connects networks in the Chinese mainland, you cannot associate another bandwidth plan that also connects networks in the Chinese mainland with the CEN instance. However, you can associate a bandwidth plan that connects the Chinese mainland to North America with the CEN instance.
 *
 * @param request AssociateCenBandwidthPackageRequest
 * @return AssociateCenBandwidthPackageResponse
 */
AssociateCenBandwidthPackageResponse Client::associateCenBandwidthPackage(const AssociateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateCenBandwidthPackageWithOptions(request, runtime);
}

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
AssociateTransitRouterAttachmentWithRouteTableResponse Client::associateTransitRouterAttachmentWithRouteTableWithOptions(const AssociateTransitRouterAttachmentWithRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
AssociateTransitRouterAttachmentWithRouteTableResponse Client::associateTransitRouterAttachmentWithRouteTable(const AssociateTransitRouterAttachmentWithRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateTransitRouterAttachmentWithRouteTableWithOptions(request, runtime);
}

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
AssociateTransitRouterMulticastDomainResponse Client::associateTransitRouterMulticastDomainWithOptions(const AssociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
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
AssociateTransitRouterMulticastDomainResponse Client::associateTransitRouterMulticastDomain(const AssociateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
AttachCenChildInstanceResponse Client::attachCenChildInstanceWithOptions(const AttachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.childInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @description CEN allows you to attach a network instance that belongs to another Alibaba Cloud account to your CEN instance. Before you attach the network instance, CEN must acquire permissions to access the network instance that belongs to another Alibaba Cloud account.
 * *   For more information about how to grant CEN permissions on virtual private clouds (VPCs) that belong to another Alibaba Cloud account, see [GrantInstanceToCen](https://help.aliyun.com/document_detail/126224.html).
 * *   For more information about how to grant CEN permissions on Cloud Connect Network (CCN) instances that belong to another Alibaba Cloud account, see [GrantInstanceToCbn](https://help.aliyun.com/document_detail/126141.html).
 * *   By default, you cannot grant permissions on virtual border routers (VBRs) that belong to another Alibaba Cloud account to a CEN instance. If you need to use this feature, contact your account manager.
 *
 * @param request AttachCenChildInstanceRequest
 * @return AttachCenChildInstanceResponse
 */
AttachCenChildInstanceResponse Client::attachCenChildInstance(const AttachCenChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCenChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries whether your Alibaba Cloud account has the transit router feature activated.
 *
 * @param request CheckTransitRouterServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTransitRouterServiceResponse
 */
CheckTransitRouterServiceResponse Client::checkTransitRouterServiceWithOptions(const CheckTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries whether your Alibaba Cloud account has the transit router feature activated.
 *
 * @param request CheckTransitRouterServiceRequest
 * @return CheckTransitRouterServiceResponse
 */
CheckTransitRouterServiceResponse Client::checkTransitRouterService(const CheckTransitRouterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkTransitRouterServiceWithOptions(request, runtime);
}

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
CreateCenResponse Client::createCenWithOptions(const CreateCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.protectionLevel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Cloud Enterprise Network (CEN) instances are basic network resources that are used to manage interconnected networks. You can use a CEN instance to manage a network that covers one or multiple regions. Before you can connect network instances, you must first call the CreateCen operation to create a CEN instance.
 *
 * @description **CreateCen** is an asynchronous operation. After you a request is sent, the system returns a request ID and runs the task in the background. You can call **DescribeCens** to query the status of the task.
 * *   If a CEN instance is in the **Creating** state, the CEN instance is being created. You can query the CEN instance but cannot perform other operations.
 * *   If a CEN instance is in the **Active** state, the CEN instance is created.
 *
 * @param request CreateCenRequest
 * @return CreateCenResponse
 */
CreateCenResponse Client::createCen(const CreateCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenWithOptions(request, runtime);
}

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
CreateCenBandwidthPackageResponse Client::createCenBandwidthPackageWithOptions(const CreateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.autoRenewDuration();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBandwidthPackageChargeType()) {
    query["BandwidthPackageChargeType"] = request.bandwidthPackageChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGeographicRegionAId()) {
    query["GeographicRegionAId"] = request.geographicRegionAId();
  }

  if (!!request.hasGeographicRegionBId()) {
    query["GeographicRegionBId"] = request.geographicRegionBId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Creates a bandwidth plan.
 *
 * @description *   You must specify the areas to be connected when you create a bandwidth plan. An area contains one or more Alibaba Cloud regions. When you select areas for a bandwidth plan, make sure that the areas contain the regions that you want to connect. For more information about the supported areas and regions, see [Purchase a bandwidth plan](https://help.aliyun.com/document_detail/181560.html).
 * *   For more information about the billing rules, see [Billing](https://help.aliyun.com/document_detail/189836.html).
 * *   **CreateCenBandwidthPackage** is an asynchronous operation. After you send a request, the system returns a bandwidth plan instance ID and runs the task in the background. You can call the **DescribeCenBandwidthPackages** operation to query the status of a bandwidth plan. If a bandwidth plan is in the **Idle** or **InUse** state, the bandwidth plan is created.
 *
 * @param request CreateCenBandwidthPackageRequest
 * @return CreateCenBandwidthPackageResponse
 */
CreateCenBandwidthPackageResponse Client::createCenBandwidthPackage(const CreateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenBandwidthPackageWithOptions(request, runtime);
}

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
CreateCenChildInstanceRouteEntryToAttachmentResponse Client::createCenChildInstanceRouteEntryToAttachmentWithOptions(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.routeTableId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
CreateCenChildInstanceRouteEntryToAttachmentResponse Client::createCenChildInstanceRouteEntryToAttachment(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

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
CreateCenChildInstanceRouteEntryToCenResponse Client::createCenChildInstanceRouteEntryToCenWithOptions(const CreateCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceAliUid()) {
    query["ChildInstanceAliUid"] = request.childInstanceAliUid();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.routeTableId();
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
CreateCenChildInstanceRouteEntryToCenResponse Client::createCenChildInstanceRouteEntryToCen(const CreateCenChildInstanceRouteEntryToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

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
CreateCenInterRegionTrafficQosPolicyResponse Client::createCenInterRegionTrafficQosPolicyWithOptions(const CreateCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthGuaranteeMode()) {
    query["BandwidthGuaranteeMode"] = request.bandwidthGuaranteeMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.trafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.trafficQosPolicyName();
  }

  if (!!request.hasTrafficQosQueues()) {
    query["TrafficQosQueues"] = request.trafficQosQueues();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateCenInterRegionTrafficQosPolicyResponse Client::createCenInterRegionTrafficQosPolicy(const CreateCenInterRegionTrafficQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

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
CreateCenInterRegionTrafficQosQueueResponse Client::createCenInterRegionTrafficQosQueueWithOptions(const CreateCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDscps()) {
    query["Dscps"] = request.dscps();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQosQueueDescription()) {
    query["QosQueueDescription"] = request.qosQueueDescription();
  }

  if (!!request.hasQosQueueName()) {
    query["QosQueueName"] = request.qosQueueName();
  }

  if (!!request.hasRemainBandwidthPercent()) {
    query["RemainBandwidthPercent"] = request.remainBandwidthPercent();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.trafficQosPolicyId();
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
 * @summary Creates queues in a quality of service (QoS) policy to manage network traffic based on finer granularities, improve service performance, and meet service-level agreements (SLAs).
 *
 * @description The **CreateCenInterRegionTrafficQosQueue** operation is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of the QoS policy to determine the status of the queue. When you call this operation, you must set the **TrafficQosPolicyId** parameter.
 * - If a QoS policy is in the **Modifying** state, the queue is being created. In this case, you can query the QoS policy and queue but cannot perform other operations.
 * - If a QoS policy is in the **Active** state, the queue is created.
 *
 * @param request CreateCenInterRegionTrafficQosQueueRequest
 * @return CreateCenInterRegionTrafficQosQueueResponse
 */
CreateCenInterRegionTrafficQosQueueResponse Client::createCenInterRegionTrafficQosQueue(const CreateCenInterRegionTrafficQosQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenInterRegionTrafficQosQueueWithOptions(request, runtime);
}

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
CreateCenRouteMapResponse Client::createCenRouteMapWithOptions(const CreateCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsPathMatchMode()) {
    query["AsPathMatchMode"] = request.asPathMatchMode();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.cenRegionId();
  }

  if (!!request.hasCidrMatchMode()) {
    query["CidrMatchMode"] = request.cidrMatchMode();
  }

  if (!!request.hasCommunityMatchMode()) {
    query["CommunityMatchMode"] = request.communityMatchMode();
  }

  if (!!request.hasCommunityOperateMode()) {
    query["CommunityOperateMode"] = request.communityOperateMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestinationChildInstanceTypes()) {
    query["DestinationChildInstanceTypes"] = request.destinationChildInstanceTypes();
  }

  if (!!request.hasDestinationCidrBlocks()) {
    query["DestinationCidrBlocks"] = request.destinationCidrBlocks();
  }

  if (!!request.hasDestinationInstanceIds()) {
    query["DestinationInstanceIds"] = request.destinationInstanceIds();
  }

  if (!!request.hasDestinationInstanceIdsReverseMatch()) {
    query["DestinationInstanceIdsReverseMatch"] = request.destinationInstanceIdsReverseMatch();
  }

  if (!!request.hasDestinationRegionIds()) {
    query["DestinationRegionIds"] = request.destinationRegionIds();
  }

  if (!!request.hasDestinationRouteTableIds()) {
    query["DestinationRouteTableIds"] = request.destinationRouteTableIds();
  }

  if (!!request.hasMapResult()) {
    query["MapResult"] = request.mapResult();
  }

  if (!!request.hasMatchAddressType()) {
    query["MatchAddressType"] = request.matchAddressType();
  }

  if (!!request.hasMatchAsns()) {
    query["MatchAsns"] = request.matchAsns();
  }

  if (!!request.hasMatchCommunitySet()) {
    query["MatchCommunitySet"] = request.matchCommunitySet();
  }

  if (!!request.hasNextPriority()) {
    query["NextPriority"] = request.nextPriority();
  }

  if (!!request.hasOperateCommunitySet()) {
    query["OperateCommunitySet"] = request.operateCommunitySet();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreference()) {
    query["Preference"] = request.preference();
  }

  if (!!request.hasPrependAsPath()) {
    query["PrependAsPath"] = request.prependAsPath();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTypes()) {
    query["RouteTypes"] = request.routeTypes();
  }

  if (!!request.hasSourceChildInstanceTypes()) {
    query["SourceChildInstanceTypes"] = request.sourceChildInstanceTypes();
  }

  if (!!request.hasSourceInstanceIds()) {
    query["SourceInstanceIds"] = request.sourceInstanceIds();
  }

  if (!!request.hasSourceInstanceIdsReverseMatch()) {
    query["SourceInstanceIdsReverseMatch"] = request.sourceInstanceIdsReverseMatch();
  }

  if (!!request.hasSourceRegionIds()) {
    query["SourceRegionIds"] = request.sourceRegionIds();
  }

  if (!!request.hasSourceRouteTableIds()) {
    query["SourceRouteTableIds"] = request.sourceRouteTableIds();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
  }

  if (!!request.hasTransmitDirection()) {
    query["TransmitDirection"] = request.transmitDirection();
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
CreateCenRouteMapResponse Client::createCenRouteMap(const CreateCenRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenRouteMapWithOptions(request, runtime);
}

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
CreateFlowlogResponse Client::createFlowlogWithOptions(const CreateFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.flowLogName();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLogFormatString()) {
    query["LogFormatString"] = request.logFormatString();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateFlowlogResponse Client::createFlowlog(const CreateFlowlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowlogWithOptions(request, runtime);
}

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
CreateTrafficMarkingPolicyResponse Client::createTrafficMarkingPolicyWithOptions(const CreateTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasMarkingDscp()) {
    query["MarkingDscp"] = request.markingDscp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.trafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.trafficMarkingPolicyName();
  }

  if (!!request.hasTrafficMatchRules()) {
    query["TrafficMatchRules"] = request.trafficMatchRules();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateTrafficMarkingPolicyResponse Client::createTrafficMarkingPolicy(const CreateTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrafficMarkingPolicyWithOptions(request, runtime);
}

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
CreateTransitRouteTableAggregationResponse Client::createTransitRouteTableAggregationWithOptions(const CreateTransitRouteTableAggregationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouteTableAggregationShrinkRequest request = CreateTransitRouteTableAggregationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouteTableAggregationScopeList()) {
    request.setTransitRouteTableAggregationScopeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transitRouteTableAggregationScopeList(), "TransitRouteTableAggregationScopeList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableAggregationDescription()) {
    query["TransitRouteTableAggregationDescription"] = request.transitRouteTableAggregationDescription();
  }

  if (!!request.hasTransitRouteTableAggregationName()) {
    query["TransitRouteTableAggregationName"] = request.transitRouteTableAggregationName();
  }

  if (!!request.hasTransitRouteTableAggregationScope()) {
    query["TransitRouteTableAggregationScope"] = request.transitRouteTableAggregationScope();
  }

  if (!!request.hasTransitRouteTableAggregationScopeListShrink()) {
    query["TransitRouteTableAggregationScopeList"] = request.transitRouteTableAggregationScopeListShrink();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @description After you add an aggregate route to a route table of an Enterprise Edition transit router, the transit router advertises its routes only to route tables of associated virtual private clouds (VPCs) and have route synchronization enabled.
 * Perform the following operations before you create an aggregate route. Otherwise, the Enterprise Edition transit router does not advertise routes to VPC route tables:
 * *   Associated forwarding is enabled between the VPCs and the Enterprise Edition transit router. For more information, see [AssociateTransitRouterAttachmentWithRouteTable](https://help.aliyun.com/document_detail/261242.html).
 * *   Route synchronization is enabled for the VPCs. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/261358.html).
 *
 * @param request CreateTransitRouteTableAggregationRequest
 * @return CreateTransitRouteTableAggregationResponse
 */
CreateTransitRouteTableAggregationResponse Client::createTransitRouteTableAggregation(const CreateTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouteTableAggregationWithOptions(request, runtime);
}

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
CreateTransitRouterResponse Client::createTransitRouterWithOptions(const CreateTransitRouterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouterShrinkRequest request = CreateTransitRouterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouterCidrList()) {
    request.setTransitRouterCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transitRouterCidrList(), "TransitRouterCidrList", "json"));
  }

  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSupportMulticast()) {
    query["SupportMulticast"] = request.supportMulticast();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterCidrListShrink()) {
    query["TransitRouterCidrList"] = request.transitRouterCidrListShrink();
  }

  if (!!request.hasTransitRouterDescription()) {
    query["TransitRouterDescription"] = request.transitRouterDescription();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.transitRouterName();
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
CreateTransitRouterResponse Client::createTransitRouter(const CreateTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterWithOptions(request, runtime);
}

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
CreateTransitRouterCidrResponse Client::createTransitRouterCidrWithOptions(const CreateTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPublishCidrRoute()) {
    query["PublishCidrRoute"] = request.publishCidrRoute();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateTransitRouterCidrResponse Client::createTransitRouterCidr(const CreateTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterCidrWithOptions(request, runtime);
}

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
CreateTransitRouterEcrAttachmentResponse Client::createTransitRouterEcrAttachmentWithOptions(const CreateTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    query["EcrId"] = request.ecrId();
  }

  if (!!request.hasEcrOwnerId()) {
    query["EcrOwnerId"] = request.ecrOwnerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateTransitRouterEcrAttachmentResponse Client::createTransitRouterEcrAttachment(const CreateTransitRouterEcrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterEcrAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterMulticastDomainResponse Client::createTransitRouterMulticastDomainWithOptions(const CreateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterMulticastDomainDescription()) {
    query["TransitRouterMulticastDomainDescription"] = request.transitRouterMulticastDomainDescription();
  }

  if (!!request.hasTransitRouterMulticastDomainName()) {
    query["TransitRouterMulticastDomainName"] = request.transitRouterMulticastDomainName();
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
CreateTransitRouterMulticastDomainResponse Client::createTransitRouterMulticastDomain(const CreateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
CreateTransitRouterPeerAttachmentResponse Client::createTransitRouterPeerAttachmentWithOptions(const CreateTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.bandwidthType();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDefaultLinkType()) {
    query["DefaultLinkType"] = request.defaultLinkType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeerTransitRouterId()) {
    query["PeerTransitRouterId"] = request.peerTransitRouterId();
  }

  if (!!request.hasPeerTransitRouterRegionId()) {
    query["PeerTransitRouterRegionId"] = request.peerTransitRouterRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
CreateTransitRouterPeerAttachmentResponse Client::createTransitRouterPeerAttachment(const CreateTransitRouterPeerAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterPeerAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterPrefixListAssociationResponse Client::createTransitRouterPrefixListAssociationWithOptions(const CreateTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.nextHop();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.ownerUid();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.prefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.transitRouterTableId();
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
CreateTransitRouterPrefixListAssociationResponse Client::createTransitRouterPrefixListAssociation(const CreateTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

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
CreateTransitRouterRouteEntryResponse Client::createTransitRouterRouteEntryWithOptions(const CreateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDescription()) {
    query["TransitRouterRouteEntryDescription"] = request.transitRouterRouteEntryDescription();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.transitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryName()) {
    query["TransitRouterRouteEntryName"] = request.transitRouterRouteEntryName();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.transitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.transitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Adds a route to a route table of an Enterprise Edition transit router.
 *
 * @description **CreateTransitRouterRouteEntry** is an asynchronous operation. After you send a request, the route ID is returned but the operation is still being performed in the system background. You can call **ListTransitRouterRouteEntries** to query the status of a route.
 * *   If a route is in the **Creating** state, the route is being created. In this case, you can query the route but cannot perform other operations.
 * *   If a route is in the **Active** state, the route is created.
 *
 * @param request CreateTransitRouterRouteEntryRequest
 * @return CreateTransitRouterRouteEntryResponse
 */
CreateTransitRouterRouteEntryResponse Client::createTransitRouterRouteEntry(const CreateTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterRouteEntryWithOptions(request, runtime);
}

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
CreateTransitRouterRouteTableResponse Client::createTransitRouterRouteTableWithOptions(const CreateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.routeTableOptions();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterRouteTableDescription()) {
    query["TransitRouterRouteTableDescription"] = request.transitRouterRouteTableDescription();
  }

  if (!!request.hasTransitRouterRouteTableName()) {
    query["TransitRouterRouteTableName"] = request.transitRouterRouteTableName();
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
CreateTransitRouterRouteTableResponse Client::createTransitRouterRouteTable(const CreateTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterRouteTableWithOptions(request, runtime);
}

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
CreateTransitRouterVbrAttachmentResponse Client::createTransitRouterVbrAttachmentWithOptions(const CreateTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasVbrId()) {
    query["VbrId"] = request.vbrId();
  }

  if (!!request.hasVbrOwnerId()) {
    query["VbrOwnerId"] = request.vbrOwnerId();
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
CreateTransitRouterVbrAttachmentResponse Client::createTransitRouterVbrAttachment(const CreateTransitRouterVbrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVbrAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterVpcAttachmentResponse Client::createTransitRouterVpcAttachmentWithOptions(const CreateTransitRouterVpcAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransitRouterVpcAttachmentShrinkRequest request = CreateTransitRouterVpcAttachmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouterVPCAttachmentOptions()) {
    request.setTransitRouterVPCAttachmentOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transitRouterVPCAttachmentOptions(), "TransitRouterVPCAttachmentOptions", "json"));
  }

  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterVPCAttachmentOptionsShrink()) {
    query["TransitRouterVPCAttachmentOptions"] = request.transitRouterVPCAttachmentOptionsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    query["VpcOwnerId"] = request.vpcOwnerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
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
CreateTransitRouterVpcAttachmentResponse Client::createTransitRouterVpcAttachment(const CreateTransitRouterVpcAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVpcAttachmentWithOptions(request, runtime);
}

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
CreateTransitRouterVpnAttachmentResponse Client::createTransitRouterVpnAttachmentWithOptions(const CreateTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasVpnId()) {
    query["VpnId"] = request.vpnId();
  }

  if (!!request.hasVpnOwnerId()) {
    query["VpnOwnerId"] = request.vpnOwnerId();
  }

  if (!!request.hasZone()) {
    query["Zone"] = request.zone();
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
CreateTransitRouterVpnAttachmentResponse Client::createTransitRouterVpnAttachment(const CreateTransitRouterVpnAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitRouterVpnAttachmentWithOptions(request, runtime);
}

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
DeactiveFlowLogResponse Client::deactiveFlowLogWithOptions(const DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Disables a flow log. A disabled flow log no longer captures information about network traffic.
 *
 * @description `DeactiveFlowLog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
 * *   If a flow log is in the **Modifying** state, the flow log is being disabled. You can query the flow log but cannot perform other operations.
 * *   If a flow log is in the **Inactive** state, the flow log is disabled.
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
DeleteCenResponse Client::deleteCenWithOptions(const DeleteCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
DeleteCenResponse Client::deleteCen(const DeleteCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenWithOptions(request, runtime);
}

/**
 * @param request DeleteCenBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCenBandwidthPackageResponse
 */
DeleteCenBandwidthPackageResponse Client::deleteCenBandwidthPackageWithOptions(const DeleteCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @param request DeleteCenBandwidthPackageRequest
 * @return DeleteCenBandwidthPackageResponse
 */
DeleteCenBandwidthPackageResponse Client::deleteCenBandwidthPackage(const DeleteCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenBandwidthPackageWithOptions(request, runtime);
}

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
DeleteCenChildInstanceRouteEntryToAttachmentResponse Client::deleteCenChildInstanceRouteEntryToAttachmentWithOptions(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.routeTableId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
DeleteCenChildInstanceRouteEntryToAttachmentResponse Client::deleteCenChildInstanceRouteEntryToAttachment(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

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
DeleteCenChildInstanceRouteEntryToCenResponse Client::deleteCenChildInstanceRouteEntryToCenWithOptions(const DeleteCenChildInstanceRouteEntryToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceAliUid()) {
    query["ChildInstanceAliUid"] = request.childInstanceAliUid();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.routeTableId();
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
 * @summary Deletes a route from a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description ## Limits
 * *   By default, the DeleteCenChildInstanceRouteEntryToCen operation is unavailable. To call this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * *   You cannot delete a route entry from an Enterprise Edition transit router by calling the DeleteCenChildInstanceRouteEntryToCen operation.
 *
 * @param request DeleteCenChildInstanceRouteEntryToCenRequest
 * @return DeleteCenChildInstanceRouteEntryToCenResponse
 */
DeleteCenChildInstanceRouteEntryToCenResponse Client::deleteCenChildInstanceRouteEntryToCen(const DeleteCenChildInstanceRouteEntryToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

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
DeleteCenInterRegionTrafficQosPolicyResponse Client::deleteCenInterRegionTrafficQosPolicyWithOptions(const DeleteCenInterRegionTrafficQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.trafficQosPolicyId();
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
DeleteCenInterRegionTrafficQosPolicyResponse Client::deleteCenInterRegionTrafficQosPolicy(const DeleteCenInterRegionTrafficQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

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
DeleteCenInterRegionTrafficQosQueueResponse Client::deleteCenInterRegionTrafficQosQueueWithOptions(const DeleteCenInterRegionTrafficQosQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQosQueueId()) {
    query["QosQueueId"] = request.qosQueueId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Deletes a queue from a quality of service (QoS) policy.
 *
 * @description *   You cannot delete the default queue.
 * *   **DeleteCenInterRegionTrafficQosQueue** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListCenInterRegionTrafficQosPolicies** operation to query the status of a queue. If a queue cannot be found, the queue is deleted.
 *
 * @param request DeleteCenInterRegionTrafficQosQueueRequest
 * @return DeleteCenInterRegionTrafficQosQueueResponse
 */
DeleteCenInterRegionTrafficQosQueueResponse Client::deleteCenInterRegionTrafficQosQueue(const DeleteCenInterRegionTrafficQosQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenInterRegionTrafficQosQueueWithOptions(request, runtime);
}

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
DeleteCenRouteMapResponse Client::deleteCenRouteMapWithOptions(const DeleteCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.cenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.routeMapId();
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
 * @summary Deletes a routing policy.
 *
 * @description `DeleteCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
 * *   If a routing policy is in the **Deleting** state, the routing policy is being deleted. You can query the routing policy but cannot perform other operations.
 * *   If a routing policy cannot be found, it is deleted.
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
 * @description `DeleteFlowlog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
 * *   If a flow log is in the **Deleting** state, the flow log is being deleted. In this case, you can query the flow log but cannot perform other operations.
 * *   If a flow log cannot be found, the flow log is deleted.
 *
 * @param request DeleteFlowlogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowlogResponse
 */
DeleteFlowlogResponse Client::deleteFlowlogWithOptions(const DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @description `DeleteFlowlog` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
 * *   If a flow log is in the **Deleting** state, the flow log is being deleted. In this case, you can query the flow log but cannot perform other operations.
 * *   If a flow log cannot be found, the flow log is deleted.
 *
 * @param request DeleteFlowlogRequest
 * @return DeleteFlowlogResponse
 */
DeleteFlowlogResponse Client::deleteFlowlog(const DeleteFlowlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowlogWithOptions(request, runtime);
}

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
DeleteRouteServiceInCenResponse Client::deleteRouteServiceInCenWithOptions(const DeleteRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.accessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.hostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.hostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Deletes the configuration of a cloud service connected to a Basic Edition transit router.
 *
 * @description **DeleteRouteServiceInCen** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. If the request parameters are invalid, the system returns a request ID, but the cloud service configuration is not deleted. You can call **DescribeRouteServicesInCen** to query the status of the task.
 * *   If a cloud service is in the **Deleting** state, the cloud service configuration is being deleted. In this case, you can only query the cloud service configuration and cannot perform other operations.
 * *   If the specified cloud service configuration cannot be found, the cloud service configuration is deleted.
 *
 * @param request DeleteRouteServiceInCenRequest
 * @return DeleteRouteServiceInCenResponse
 */
DeleteRouteServiceInCenResponse Client::deleteRouteServiceInCen(const DeleteRouteServiceInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteServiceInCenWithOptions(request, runtime);
}

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
DeleteTrafficMarkingPolicyResponse Client::deleteTrafficMarkingPolicyWithOptions(const DeleteTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
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
DeleteTrafficMarkingPolicyResponse Client::deleteTrafficMarkingPolicy(const DeleteTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrafficMarkingPolicyWithOptions(request, runtime);
}

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
DeleteTransitRouteTableAggregationResponse Client::deleteTransitRouteTableAggregationWithOptions(const DeleteTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @description *   Before you delete an aggregate route, make sure that your network has a redundant route to prevent service interruptions.
 * *   After an aggregate route is deleted, the aggregate route is automatically withdrawn from virtual private clouds (VPCs). Specific routes that fall within the aggregate route are advertised to the VPCs.
 *
 * @param request DeleteTransitRouteTableAggregationRequest
 * @return DeleteTransitRouteTableAggregationResponse
 */
DeleteTransitRouteTableAggregationResponse Client::deleteTransitRouteTableAggregation(const DeleteTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouteTableAggregationWithOptions(request, runtime);
}

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
DeleteTransitRouterResponse Client::deleteTransitRouterWithOptions(const DeleteTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
DeleteTransitRouterResponse Client::deleteTransitRouter(const DeleteTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterWithOptions(request, runtime);
}

/**
 * @summary Deletes a CIDR block from a transit router.
 *
 * @description If IP addresses within the CIDR block have been allocated to network instances, the CIDR block cannot be deleted.
 *
 * @param request DeleteTransitRouterCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterCidrResponse
 */
DeleteTransitRouterCidrResponse Client::deleteTransitRouterCidrWithOptions(const DeleteTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.transitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @description If IP addresses within the CIDR block have been allocated to network instances, the CIDR block cannot be deleted.
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
 * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
 * If the ECR connection is in the Detaching state, the ECR connection is being deleted. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If the ECR connection cannot be found, the ECR connection is deleted. Before you call the DeleteTransitRouterEcrAttachment operation, make sure that all request parameters are valid. If a request is invalid, a request ID is returned but the ECR connection is not deleted.
 *
 * @param request DeleteTransitRouterEcrAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterEcrAttachmentResponse
 */
DeleteTransitRouterEcrAttachmentResponse Client::deleteTransitRouterEcrAttachmentWithOptions(const DeleteTransitRouterEcrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
 * @description DeleteTransitRouterEcrAttachment is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
 * If the ECR connection is in the Detaching state, the ECR connection is being deleted. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If the ECR connection cannot be found, the ECR connection is deleted. Before you call the DeleteTransitRouterEcrAttachment operation, make sure that all request parameters are valid. If a request is invalid, a request ID is returned but the ECR connection is not deleted.
 *
 * @param request DeleteTransitRouterEcrAttachmentRequest
 * @return DeleteTransitRouterEcrAttachmentResponse
 */
DeleteTransitRouterEcrAttachmentResponse Client::deleteTransitRouterEcrAttachment(const DeleteTransitRouterEcrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterEcrAttachmentWithOptions(request, runtime);
}

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
DeleteTransitRouterMulticastDomainResponse Client::deleteTransitRouterMulticastDomainWithOptions(const DeleteTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
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
DeleteTransitRouterMulticastDomainResponse Client::deleteTransitRouterMulticastDomain(const DeleteTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
DeleteTransitRouterPeerAttachmentResponse Client::deleteTransitRouterPeerAttachmentWithOptions(const DeleteTransitRouterPeerAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
DeleteTransitRouterPeerAttachmentResponse Client::deleteTransitRouterPeerAttachment(const DeleteTransitRouterPeerAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterPeerAttachmentWithOptions(request, runtime);
}

/**
 * @summary Disassociates the route table of an Enterprise Edition transit router from a prefix list.
 *
 * @description After you disassociate a route table of an Enterprise Edition transit router from a prefix list, the routes that point to the CIDR blocks in the prefix list are automatically withdrawn from the route table. Before you disassociate the route table of an Enterprise Edition transit router from a prefix list, you must migrate workloads that use the routes in case services are interrupted.
 *
 * @param request DeleteTransitRouterPrefixListAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterPrefixListAssociationResponse
 */
DeleteTransitRouterPrefixListAssociationResponse Client::deleteTransitRouterPrefixListAssociationWithOptions(const DeleteTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasNextHop()) {
    query["NextHop"] = request.nextHop();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.prefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.transitRouterTableId();
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
 * @summary Disassociates the route table of an Enterprise Edition transit router from a prefix list.
 *
 * @description After you disassociate a route table of an Enterprise Edition transit router from a prefix list, the routes that point to the CIDR blocks in the prefix list are automatically withdrawn from the route table. Before you disassociate the route table of an Enterprise Edition transit router from a prefix list, you must migrate workloads that use the routes in case services are interrupted.
 *
 * @param request DeleteTransitRouterPrefixListAssociationRequest
 * @return DeleteTransitRouterPrefixListAssociationResponse
 */
DeleteTransitRouterPrefixListAssociationResponse Client::deleteTransitRouterPrefixListAssociation(const DeleteTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

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
DeleteTransitRouterRouteEntryResponse Client::deleteTransitRouterRouteEntryWithOptions(const DeleteTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.transitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryId()) {
    query["TransitRouterRouteEntryId"] = request.transitRouterRouteEntryId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.transitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.transitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
DeleteTransitRouterRouteEntryResponse Client::deleteTransitRouterRouteEntry(const DeleteTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterRouteEntryWithOptions(request, runtime);
}

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
DeleteTransitRouterRouteTableResponse Client::deleteTransitRouterRouteTableWithOptions(const DeleteTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
DeleteTransitRouterRouteTableResponse Client::deleteTransitRouterRouteTable(const DeleteTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterRouteTableWithOptions(request, runtime);
}

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
DeleteTransitRouterVbrAttachmentResponse Client::deleteTransitRouterVbrAttachmentWithOptions(const DeleteTransitRouterVbrAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
DeleteTransitRouterVbrAttachmentResponse Client::deleteTransitRouterVbrAttachment(const DeleteTransitRouterVbrAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVbrAttachmentWithOptions(request, runtime);
}

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
DeleteTransitRouterVpcAttachmentResponse Client::deleteTransitRouterVpcAttachmentWithOptions(const DeleteTransitRouterVpcAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
DeleteTransitRouterVpcAttachmentResponse Client::deleteTransitRouterVpcAttachment(const DeleteTransitRouterVpcAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVpcAttachmentWithOptions(request, runtime);
}

/**
 * @summary Deletes a VPN attachment.
 *
 * @description Before you call the **DeleteTransitRouterVpnAttachment** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the VPN attachment is not deleted.
 *
 * @param request DeleteTransitRouterVpnAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransitRouterVpnAttachmentResponse
 */
DeleteTransitRouterVpnAttachmentResponse Client::deleteTransitRouterVpnAttachmentWithOptions(const DeleteTransitRouterVpnAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
 * @summary Deletes a VPN attachment.
 *
 * @description Before you call the **DeleteTransitRouterVpnAttachment** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the VPN attachment is not deleted.
 *
 * @param request DeleteTransitRouterVpnAttachmentRequest
 * @return DeleteTransitRouterVpnAttachmentResponse
 */
DeleteTransitRouterVpnAttachmentResponse Client::deleteTransitRouterVpnAttachment(const DeleteTransitRouterVpnAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransitRouterVpnAttachmentWithOptions(request, runtime);
}

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
DeregisterTransitRouterMulticastGroupMembersResponse Client::deregisterTransitRouterMulticastGroupMembersWithOptions(const DeregisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.groupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.networkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.peerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
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
DeregisterTransitRouterMulticastGroupMembersResponse Client::deregisterTransitRouterMulticastGroupMembers(const DeregisterTransitRouterMulticastGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterTransitRouterMulticastGroupMembersWithOptions(request, runtime);
}

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
DeregisterTransitRouterMulticastGroupSourcesResponse Client::deregisterTransitRouterMulticastGroupSourcesWithOptions(const DeregisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.groupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.networkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
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
DeregisterTransitRouterMulticastGroupSourcesResponse Client::deregisterTransitRouterMulticastGroupSources(const DeregisterTransitRouterMulticastGroupSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterTransitRouterMulticastGroupSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a network instance, such as a virtual private cloud (VPC), a virtual border router, or a Cloud Connect Network (CCN) instance, that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenAttachedChildInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenAttachedChildInstanceAttributeResponse
 */
DescribeCenAttachedChildInstanceAttributeResponse Client::describeCenAttachedChildInstanceAttributeWithOptions(const DescribeCenAttachedChildInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the information about a network instance, such as a virtual private cloud (VPC), a virtual border router, or a Cloud Connect Network (CCN) instance, that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenAttachedChildInstanceAttributeRequest
 * @return DescribeCenAttachedChildInstanceAttributeResponse
 */
DescribeCenAttachedChildInstanceAttributeResponse Client::describeCenAttachedChildInstanceAttribute(const DescribeCenAttachedChildInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenAttachedChildInstanceAttributeWithOptions(request, runtime);
}

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
DescribeCenAttachedChildInstancesResponse Client::describeCenAttachedChildInstancesWithOptions(const DescribeCenAttachedChildInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
DescribeCenAttachedChildInstancesResponse Client::describeCenAttachedChildInstances(const DescribeCenAttachedChildInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenAttachedChildInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about bandwidth plans.
 *
 * @param request DescribeCenBandwidthPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenBandwidthPackagesResponse
 */
DescribeCenBandwidthPackagesResponse Client::describeCenBandwidthPackagesWithOptions(const DescribeCenBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasIncludeReservationData()) {
    query["IncludeReservationData"] = request.includeReservationData();
  }

  if (!!request.hasIsOrKey()) {
    query["IsOrKey"] = request.isOrKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Queries the information about bandwidth plans.
 *
 * @param request DescribeCenBandwidthPackagesRequest
 * @return DescribeCenBandwidthPackagesResponse
 */
DescribeCenBandwidthPackagesResponse Client::describeCenBandwidthPackages(const DescribeCenBandwidthPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenBandwidthPackagesWithOptions(request, runtime);
}

/**
 * @summary Queries the routes of a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenChildInstanceRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenChildInstanceRouteEntriesResponse
 */
DescribeCenChildInstanceRouteEntriesResponse Client::describeCenChildInstanceRouteEntriesWithOptions(const DescribeCenChildInstanceRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary Queries the routes of a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenChildInstanceRouteEntriesRequest
 * @return DescribeCenChildInstanceRouteEntriesResponse
 */
DescribeCenChildInstanceRouteEntriesResponse Client::describeCenChildInstanceRouteEntries(const DescribeCenChildInstanceRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenChildInstanceRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the remaining bandwidth of a bandwidth plan.
 *
 * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenGeographicSpanRemainingBandwidthResponse
 */
DescribeCenGeographicSpanRemainingBandwidthResponse Client::describeCenGeographicSpanRemainingBandwidthWithOptions(const DescribeCenGeographicSpanRemainingBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasGeographicRegionAId()) {
    query["GeographicRegionAId"] = request.geographicRegionAId();
  }

  if (!!request.hasGeographicRegionBId()) {
    query["GeographicRegionBId"] = request.geographicRegionBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the remaining bandwidth of a bandwidth plan.
 *
 * @param request DescribeCenGeographicSpanRemainingBandwidthRequest
 * @return DescribeCenGeographicSpanRemainingBandwidthResponse
 */
DescribeCenGeographicSpanRemainingBandwidthResponse Client::describeCenGeographicSpanRemainingBandwidth(const DescribeCenGeographicSpanRemainingBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenGeographicSpanRemainingBandwidthWithOptions(request, runtime);
}

/**
 * @summary Queries the areas that a Cloud Enterprise Network (CEN) instance can connect.
 *
 * @param request DescribeCenGeographicSpansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenGeographicSpansResponse
 */
DescribeCenGeographicSpansResponse Client::describeCenGeographicSpansWithOptions(const DescribeCenGeographicSpansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGeographicSpanId()) {
    query["GeographicSpanId"] = request.geographicSpanId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the areas that a Cloud Enterprise Network (CEN) instance can connect.
 *
 * @param request DescribeCenGeographicSpansRequest
 * @return DescribeCenGeographicSpansResponse
 */
DescribeCenGeographicSpansResponse Client::describeCenGeographicSpans(const DescribeCenGeographicSpansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenGeographicSpansWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth of connections between regions.
 *
 * @param request DescribeCenInterRegionBandwidthLimitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenInterRegionBandwidthLimitsResponse
 */
DescribeCenInterRegionBandwidthLimitsResponse Client::describeCenInterRegionBandwidthLimitsWithOptions(const DescribeCenInterRegionBandwidthLimitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrRegionId()) {
    query["TrRegionId"] = request.trRegionId();
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
 * @summary Queries the bandwidth of connections between regions.
 *
 * @param request DescribeCenInterRegionBandwidthLimitsRequest
 * @return DescribeCenInterRegionBandwidthLimitsResponse
 */
DescribeCenInterRegionBandwidthLimitsResponse Client::describeCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenInterRegionBandwidthLimitsWithOptions(request, runtime);
}

/**
 * @summary Queries the connections to PrivateZone.
 *
 * @param request DescribeCenPrivateZoneRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenPrivateZoneRoutesResponse
 */
DescribeCenPrivateZoneRoutesResponse Client::describeCenPrivateZoneRoutesWithOptions(const DescribeCenPrivateZoneRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.accessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.hostRegionId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the connections to PrivateZone.
 *
 * @param request DescribeCenPrivateZoneRoutesRequest
 * @return DescribeCenPrivateZoneRoutesResponse
 */
DescribeCenPrivateZoneRoutesResponse Client::describeCenPrivateZoneRoutes(const DescribeCenPrivateZoneRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenPrivateZoneRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the details about routes in a region for a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenRegionDomainRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenRegionDomainRouteEntriesResponse
 */
DescribeCenRegionDomainRouteEntriesResponse Client::describeCenRegionDomainRouteEntriesWithOptions(const DescribeCenRegionDomainRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.cenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary Queries the details about routes in a region for a Cloud Enterprise Network (CEN) instance.
 *
 * @param request DescribeCenRegionDomainRouteEntriesRequest
 * @return DescribeCenRegionDomainRouteEntriesResponse
 */
DescribeCenRegionDomainRouteEntriesResponse Client::describeCenRegionDomainRouteEntries(const DescribeCenRegionDomainRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenRegionDomainRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries routing policies.
 *
 * @param request DescribeCenRouteMapsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenRouteMapsResponse
 */
DescribeCenRouteMapsResponse Client::describeCenRouteMapsWithOptions(const DescribeCenRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.cenRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.routeMapId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
  }

  if (!!request.hasTransmitDirection()) {
    query["TransmitDirection"] = request.transmitDirection();
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
 * @summary Queries routing policies.
 *
 * @param request DescribeCenRouteMapsRequest
 * @return DescribeCenRouteMapsResponse
 */
DescribeCenRouteMapsResponse Client::describeCenRouteMaps(const DescribeCenRouteMapsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenRouteMapsWithOptions(request, runtime);
}

/**
 * @summary Queries the health check configurations of virtual border routers (VBRs) in a region.
 *
 * @param request DescribeCenVbrHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenVbrHealthCheckResponse
 */
DescribeCenVbrHealthCheckResponse Client::describeCenVbrHealthCheckWithOptions(const DescribeCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.vbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.vbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.vbrInstanceRegionId();
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
 * @summary Queries the health check configurations of virtual border routers (VBRs) in a region.
 *
 * @param request DescribeCenVbrHealthCheckRequest
 * @return DescribeCenVbrHealthCheckResponse
 */
DescribeCenVbrHealthCheckResponse Client::describeCenVbrHealthCheck(const DescribeCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenVbrHealthCheckWithOptions(request, runtime);
}

/**
 * @summary Queries the information about your Cloud Enterprise Network (CEN) instances.
 *
 * @param request DescribeCensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCensWithOptions(const DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Queries the information about your Cloud Enterprise Network (CEN) instances.
 *
 * @param request DescribeCensRequest
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCens(const DescribeCensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCensWithOptions(request, runtime);
}

/**
 * @summary Queries the regions in which you can attach network instances to Cloud Enterprise Network (CEN) instances.
 *
 * @description The regions that support CEN vary based on the network instance type. To query the regions where you can attach a specified type of network instance to CEN, set the `ProductType` parameter. If you do not set the `ProductType` parameter, the system queries all regions in which you can attach network instances to CEN, regardless of the network instance type.
 *
 * @param request DescribeChildInstanceRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChildInstanceRegionsResponse
 */
DescribeChildInstanceRegionsResponse Client::describeChildInstanceRegionsWithOptions(const DescribeChildInstanceRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the regions in which you can attach network instances to Cloud Enterprise Network (CEN) instances.
 *
 * @description The regions that support CEN vary based on the network instance type. To query the regions where you can attach a specified type of network instance to CEN, set the `ProductType` parameter. If you do not set the `ProductType` parameter, the system queries all regions in which you can attach network instances to CEN, regardless of the network instance type.
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
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.flowLogName();
  }

  if (!!request.hasFlowLogVersion()) {
    query["FlowLogVersion"] = request.flowLogVersion();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries regions in an area.
 *
 * @param request DescribeGeographicRegionMembershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGeographicRegionMembershipResponse
 */
DescribeGeographicRegionMembershipResponse Client::describeGeographicRegionMembershipWithOptions(const DescribeGeographicRegionMembershipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGeographicRegionId()) {
    query["GeographicRegionId"] = request.geographicRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries regions in an area.
 *
 * @param request DescribeGeographicRegionMembershipRequest
 * @return DescribeGeographicRegionMembershipResponse
 */
DescribeGeographicRegionMembershipResponse Client::describeGeographicRegionMembership(const DescribeGeographicRegionMembershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGeographicRegionMembershipWithOptions(request, runtime);
}

/**
 * @summary Queries the network instances of other Alibaba Cloud accounts that have granted permissions to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Before you call the **DescribeGrantRulesToCen** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the network instances are not returned.
 *
 * @param request DescribeGrantRulesToCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantRulesToCenResponse
 */
DescribeGrantRulesToCenResponse Client::describeGrantRulesToCenWithOptions(const DescribeGrantRulesToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.childInstanceOwnerId();
  }

  if (!!request.hasEnabledIpv6()) {
    query["EnabledIpv6"] = request.enabledIpv6();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the network instances of other Alibaba Cloud accounts that have granted permissions to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Before you call the **DescribeGrantRulesToCen** operation, make sure that all request parameters are valid. If a request parameter is invalid, a **request ID** is returned, but the network instances are not returned.
 *
 * @param request DescribeGrantRulesToCenRequest
 * @return DescribeGrantRulesToCenResponse
 */
DescribeGrantRulesToCenResponse Client::describeGrantRulesToCen(const DescribeGrantRulesToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantRulesToCenWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the permissions that the Alibaba Cloud account of a network instance granted to a Cloud Enterprise Network (CEN) instance in a different Alibaba Cloud account, the ID of the CEN instance, and the Alibaba Cloud account that pays the fees of the network instance.
 *
 * @param request DescribeGrantRulesToResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGrantRulesToResourceResponse
 */
DescribeGrantRulesToResourceResponse Client::describeGrantRulesToResourceWithOptions(const DescribeGrantRulesToResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the information about the permissions that the Alibaba Cloud account of a network instance granted to a Cloud Enterprise Network (CEN) instance in a different Alibaba Cloud account, the ID of the CEN instance, and the Alibaba Cloud account that pays the fees of the network instance.
 *
 * @param request DescribeGrantRulesToResourceRequest
 * @return DescribeGrantRulesToResourceResponse
 */
DescribeGrantRulesToResourceResponse Client::describeGrantRulesToResource(const DescribeGrantRulesToResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGrantRulesToResourceWithOptions(request, runtime);
}

/**
 * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached.
 *
 * @param request DescribePublishedRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePublishedRouteEntriesResponse
 */
DescribePublishedRouteEntriesResponse Client::describePublishedRouteEntriesWithOptions(const DescribePublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries whether the routes of virtual private clouds (VPCs) and virtual border routers (VBRs) are advertised to the Cloud Enterprise Network (CEN) instance to which the VCPs and VBRs are attached.
 *
 * @param request DescribePublishedRouteEntriesRequest
 * @return DescribePublishedRouteEntriesResponse
 */
DescribePublishedRouteEntriesResponse Client::describePublishedRouteEntries(const DescribePublishedRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePublishedRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries overlapping routes.
 *
 * @param request DescribeRouteConflictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteConflictResponse
 */
DescribeRouteConflictResponse Client::describeRouteConflictWithOptions(const DescribeRouteConflictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries overlapping routes.
 *
 * @param request DescribeRouteConflictRequest
 * @return DescribeRouteConflictResponse
 */
DescribeRouteConflictResponse Client::describeRouteConflict(const DescribeRouteConflictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteConflictWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of cloud services, such as the cloud service status and the ID of the associated VPC.
 *
 * @param request DescribeRouteServicesInCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteServicesInCenResponse
 */
DescribeRouteServicesInCenResponse Client::describeRouteServicesInCenWithOptions(const DescribeRouteServicesInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.accessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.hostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.hostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the configurations of cloud services, such as the cloud service status and the ID of the associated VPC.
 *
 * @param request DescribeRouteServicesInCenRequest
 * @return DescribeRouteServicesInCenResponse
 */
DescribeRouteServicesInCenResponse Client::describeRouteServicesInCen(const DescribeRouteServicesInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteServicesInCenWithOptions(request, runtime);
}

/**
 * @summary Queries the aggregate routes on an Enterprise Edition transit router.
 *
 * @description You can specify the values of the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specified aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregated routes in the route table are queried.
 *
 * @param request DescribeTransitRouteTableAggregationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransitRouteTableAggregationResponse
 */
DescribeTransitRouteTableAggregationResponse Client::describeTransitRouteTableAggregationWithOptions(const DescribeTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @summary Queries the aggregate routes on an Enterprise Edition transit router.
 *
 * @description You can specify the values of the **TransitRouteTableId** and **TransitRouteTableAggregationCidr** parameters to query a specified aggregate route. If you specify only the **TransitRouteTableId** parameter, all aggregated routes in the route table are queried.
 *
 * @param request DescribeTransitRouteTableAggregationRequest
 * @return DescribeTransitRouteTableAggregationResponse
 */
DescribeTransitRouteTableAggregationResponse Client::describeTransitRouteTableAggregation(const DescribeTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransitRouteTableAggregationWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of an aggregate route.
 *
 * @param request DescribeTransitRouteTableAggregationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransitRouteTableAggregationDetailResponse
 */
DescribeTransitRouteTableAggregationDetailResponse Client::describeTransitRouteTableAggregationDetailWithOptions(const DescribeTransitRouteTableAggregationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @summary Queries the configuration of an aggregate route.
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
 * @param request DetachCenChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCenChildInstanceResponse
 */
DetachCenChildInstanceResponse Client::detachCenChildInstanceWithOptions(const DetachCenChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.cenOwnerId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    query["ChildInstanceOwnerId"] = request.childInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @param request DetachCenChildInstanceRequest
 * @return DetachCenChildInstanceResponse
 */
DetachCenChildInstanceResponse Client::detachCenChildInstance(const DetachCenChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCenChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables the health check feature for a virtual border router (VBR).
 *
 * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If the health check configurations cannot be found, the health check configurations are deleted.
 *
 * @param request DisableCenVbrHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCenVbrHealthCheckResponse
 */
DisableCenVbrHealthCheckResponse Client::disableCenVbrHealthCheckWithOptions(const DisableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.vbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.vbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.vbrInstanceRegionId();
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
 * @summary Disables the health check feature for a virtual border router (VBR).
 *
 * @description **DisableCenVbrHealthCheck** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **DescribeCenVbrHealthCheck** operation to query the status of health check configurations. If the health check configurations cannot be found, the health check configurations are deleted.
 *
 * @param request DisableCenVbrHealthCheckRequest
 * @return DisableCenVbrHealthCheckResponse
 */
DisableCenVbrHealthCheckResponse Client::disableCenVbrHealthCheck(const DisableCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCenVbrHealthCheckWithOptions(request, runtime);
}

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
DisableTransitRouterRouteTablePropagationResponse Client::disableTransitRouterRouteTablePropagationWithOptions(const DisableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Deletes a route learning correlation.
 *
 * @description **DisableTransitRouterRouteTablePropagation** is an synchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTablePropagations** operation to query the status of a route learning correlation.
 * *   If a route learning correlation is in the **Disabling** state, the route learning correlation is being deleted. You can query the route learning correlation but cannot perform other operations.
 * *   If a route learning correlation cannot be found, the route learning correlation is deleted.
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
DisassociateTransitRouterMulticastDomainResponse Client::disassociateTransitRouterMulticastDomainWithOptions(const DisassociateTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
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
 * @description *   Before you delete a vSwitch from a multicast domain, make sure that the vSwitch does not contain a multicast source or a multicast member. For more information about how to remove a multicast source or member from a vSwitch, see [DeregisterTransitRouterMulticastGroupSources](https://help.aliyun.com/document_detail/468416.html) and [DeregisterTransitRouterMulticastGroupMembers](https://help.aliyun.com/document_detail/468409.html).
 * *   If a request parameter is invalid, the system returns a request ID but does not disassociate the vSwitch from the multicast domain.
 * *   **DisassociateTransitRouterMulticastDomain** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterMulticastDomainAssociations** operation to query whether a vSwitch is disassociated from the specified multicast domain.
 *     *   If the status is **Dissociating**, it indicates that the vSwitch is being disassociated from the specified multicast domain. You can query the vSwitch but cannot perform other operations on the vSwitch.
 *     *   If the vSwitch cannot be found, the vSwitch is disassociated from the multicast domain.
 *
 * @param request DisassociateTransitRouterMulticastDomainRequest
 * @return DisassociateTransitRouterMulticastDomainResponse
 */
DisassociateTransitRouterMulticastDomainResponse Client::disassociateTransitRouterMulticastDomain(const DisassociateTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateTransitRouterMulticastDomainWithOptions(request, runtime);
}

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
DissociateTransitRouterAttachmentFromRouteTableResponse Client::dissociateTransitRouterAttachmentFromRouteTableWithOptions(const DissociateTransitRouterAttachmentFromRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Deletes an associated forwarding correlation.
 *
 * @description **DissociateTransitRouterAttachmentFromRouteTable** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterRouteTableAssociations** operation to query an associated forwarding correlation between a network instance connection and a route table.
 * *   If an associated forwarding correlation is in the **Dissociating** state, the associated forwarding correlation is being deleted. You can query the associated forwarding correlation but cannot perform other operations.
 * *   If an associated forwarding correlation cannot be found, the associated forwarding correlation is deleted.
 *
 * @param request DissociateTransitRouterAttachmentFromRouteTableRequest
 * @return DissociateTransitRouterAttachmentFromRouteTableResponse
 */
DissociateTransitRouterAttachmentFromRouteTableResponse Client::dissociateTransitRouterAttachmentFromRouteTable(const DissociateTransitRouterAttachmentFromRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateTransitRouterAttachmentFromRouteTableWithOptions(request, runtime);
}

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
EnableCenVbrHealthCheckResponse Client::enableCenVbrHealthCheckWithOptions(const EnableCenVbrHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckOnly()) {
    query["HealthCheckOnly"] = request.healthCheckOnly();
  }

  if (!!request.hasHealthCheckSourceIp()) {
    query["HealthCheckSourceIp"] = request.healthCheckSourceIp();
  }

  if (!!request.hasHealthCheckTargetIp()) {
    query["HealthCheckTargetIp"] = request.healthCheckTargetIp();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVbrInstanceId()) {
    query["VbrInstanceId"] = request.vbrInstanceId();
  }

  if (!!request.hasVbrInstanceOwnerId()) {
    query["VbrInstanceOwnerId"] = request.vbrInstanceOwnerId();
  }

  if (!!request.hasVbrInstanceRegionId()) {
    query["VbrInstanceRegionId"] = request.vbrInstanceRegionId();
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
EnableCenVbrHealthCheckResponse Client::enableCenVbrHealthCheck(const EnableCenVbrHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCenVbrHealthCheckWithOptions(request, runtime);
}

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
EnableTransitRouterRouteTablePropagationResponse Client::enableTransitRouterRouteTablePropagationWithOptions(const EnableTransitRouterRouteTablePropagationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
EnableTransitRouterRouteTablePropagationResponse Client::enableTransitRouterRouteTablePropagation(const EnableTransitRouterRouteTablePropagationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableTransitRouterRouteTablePropagationWithOptions(request, runtime);
}

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
GrantInstanceToTransitRouterResponse Client::grantInstanceToTransitRouterWithOptions(const GrantInstanceToTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.cenOwnerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
GrantInstanceToTransitRouterResponse Client::grantInstanceToTransitRouter(const GrantInstanceToTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantInstanceToTransitRouterWithOptions(request, runtime);
}

/**
 * @summary Queries routes in route tables of network instances that point to network instance connections on Enterprise Edition transit routers.
 *
 * @description Before you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that all request parameter values are valid. If a parameter is set to an invalid value, a request ID is returned, but the routes to the network instance are not returned.
 *
 * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
 */
ListCenChildInstanceRouteEntriesToAttachmentResponse Client::listCenChildInstanceRouteEntriesToAttachmentWithOptions(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteFilter()) {
    query["RouteFilter"] = request.routeFilter();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
 * @summary Queries routes in route tables of network instances that point to network instance connections on Enterprise Edition transit routers.
 *
 * @description Before you call the ListCenChildInstanceRouteEntriesToAttachment operation, make sure that all request parameter values are valid. If a parameter is set to an invalid value, a request ID is returned, but the routes to the network instance are not returned.
 *
 * @param request ListCenChildInstanceRouteEntriesToAttachmentRequest
 * @return ListCenChildInstanceRouteEntriesToAttachmentResponse
 */
ListCenChildInstanceRouteEntriesToAttachmentResponse Client::listCenChildInstanceRouteEntriesToAttachment(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenChildInstanceRouteEntriesToAttachmentWithOptions(request, runtime);
}

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
ListCenInterRegionTrafficQosPoliciesResponse Client::listCenInterRegionTrafficQosPoliciesWithOptions(const ListCenInterRegionTrafficQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.trafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.trafficQosPolicyId();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.trafficQosPolicyName();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
ListCenInterRegionTrafficQosPoliciesResponse Client::listCenInterRegionTrafficQosPolicies(const ListCenInterRegionTrafficQosPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenInterRegionTrafficQosPoliciesWithOptions(request, runtime);
}

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
ListCenInterRegionTrafficQosQueuesResponse Client::listCenInterRegionTrafficQosQueuesWithOptions(const ListCenInterRegionTrafficQosQueuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveBandwidthFilter()) {
    query["EffectiveBandwidthFilter"] = request.effectiveBandwidthFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.trafficQosPolicyId();
  }

  if (!!request.hasTrafficQosQueueDescription()) {
    query["TrafficQosQueueDescription"] = request.trafficQosQueueDescription();
  }

  if (!!request.hasTrafficQosQueueId()) {
    query["TrafficQosQueueId"] = request.trafficQosQueueId();
  }

  if (!!request.hasTrafficQosQueueName()) {
    query["TrafficQosQueueName"] = request.trafficQosQueueName();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries the information about quality of service (QoS) queues.
 *
 * @description You must specify at least one of the **TransitRouterId**, **TrafficQosPolicyId**, and **TrafficQosQueueId** parameters.
 * Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the QoS queue information is not returned.
 *
 * @param request ListCenInterRegionTrafficQosQueuesRequest
 * @return ListCenInterRegionTrafficQosQueuesResponse
 */
ListCenInterRegionTrafficQosQueuesResponse Client::listCenInterRegionTrafficQosQueues(const ListCenInterRegionTrafficQosQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCenInterRegionTrafficQosQueuesWithOptions(request, runtime);
}

/**
 * @summary Queries the elastic network interfaces (ENIs) that can be used as multicast sources or members in a specified virtual private cloud (VPC).
 *
 * @description Before you call `ListGrantVSwitchEnis`, make sure that the VPC is attached to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
 *
 * @param request ListGrantVSwitchEnisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGrantVSwitchEnisResponse
 */
ListGrantVSwitchEnisResponse Client::listGrantVSwitchEnisWithOptions(const ListGrantVSwitchEnisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.networkInterfaceId();
  }

  if (!!request.hasNetworkInterfaceName()) {
    query["NetworkInterfaceName"] = request.networkInterfaceName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrimaryIpAddress()) {
    query["PrimaryIpAddress"] = request.primaryIpAddress();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * @summary Queries the elastic network interfaces (ENIs) that can be used as multicast sources or members in a specified virtual private cloud (VPC).
 *
 * @description Before you call `ListGrantVSwitchEnis`, make sure that the VPC is attached to a Cloud Enterprise Network (CEN) instance. For more information, see [CreateTransitRouterVpcAttachment](https://help.aliyun.com/document_detail/468237.html).
 *
 * @param request ListGrantVSwitchEnisRequest
 * @return ListGrantVSwitchEnisResponse
 */
ListGrantVSwitchEnisResponse Client::listGrantVSwitchEnis(const ListGrantVSwitchEnisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGrantVSwitchEnisWithOptions(request, runtime);
}

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
ListGrantVSwitchesToCenResponse Client::listGrantVSwitchesToCenWithOptions(const ListGrantVSwitchesToCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasEnabledIpv6()) {
    query["EnabledIpv6"] = request.enabledIpv6();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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
ListGrantVSwitchesToCenResponse Client::listGrantVSwitchesToCen(const ListGrantVSwitchesToCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGrantVSwitchesToCenWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

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
ListTrafficMarkingPoliciesResponse Client::listTrafficMarkingPoliciesWithOptions(const ListTrafficMarkingPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.trafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.trafficMarkingPolicyName();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
ListTrafficMarkingPoliciesResponse Client::listTrafficMarkingPolicies(const ListTrafficMarkingPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrafficMarkingPoliciesWithOptions(request, runtime);
}

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
ListTransitRouterAvailableResourceResponse Client::listTransitRouterAvailableResourceWithOptions(const ListTransitRouterAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSupportMulticast()) {
    query["SupportMulticast"] = request.supportMulticast();
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
ListTransitRouterAvailableResourceResponse Client::listTransitRouterAvailableResource(const ListTransitRouterAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the CIDR blocks of a transit router.
 *
 * @param request ListTransitRouterCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterCidrResponse
 */
ListTransitRouterCidrResponse Client::listTransitRouterCidrWithOptions(const ListTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.transitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries the CIDR blocks of a transit router.
 *
 * @param request ListTransitRouterCidrRequest
 * @return ListTransitRouterCidrResponse
 */
ListTransitRouterCidrResponse Client::listTransitRouterCidr(const ListTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterCidrWithOptions(request, runtime);
}

/**
 * @summary Queries how a CIDR block is allocated.
 *
 * @param request ListTransitRouterCidrAllocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterCidrAllocationResponse
 */
ListTransitRouterCidrAllocationResponse Client::listTransitRouterCidrAllocationWithOptions(const ListTransitRouterCidrAllocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachmentId()) {
    query["AttachmentId"] = request.attachmentId();
  }

  if (!!request.hasAttachmentName()) {
    query["AttachmentName"] = request.attachmentName();
  }

  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.cidrBlock();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedicatedOwnerId()) {
    query["DedicatedOwnerId"] = request.dedicatedOwnerId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.transitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries how a CIDR block is allocated.
 *
 * @param request ListTransitRouterCidrAllocationRequest
 * @return ListTransitRouterCidrAllocationResponse
 */
ListTransitRouterCidrAllocationResponse Client::listTransitRouterCidrAllocation(const ListTransitRouterCidrAllocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterCidrAllocationWithOptions(request, runtime);
}

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
ListTransitRouterEcrAttachmentsResponse Client::listTransitRouterEcrAttachmentsWithOptions(const ListTransitRouterEcrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
ListTransitRouterEcrAttachmentsResponse Client::listTransitRouterEcrAttachments(const ListTransitRouterEcrAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterEcrAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterMulticastDomainAssociationsResponse Client::listTransitRouterMulticastDomainAssociationsWithOptions(const ListTransitRouterMulticastDomainAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
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
 * @summary Queries whether a multicast domain is associated with a vSwitch.
 *
 * @description *   You must set at least **TransitRouterMulticastDomainId** and **TransitRouterAttachmentId**. If you set **TransitRouterAttachmentId**, the information about the vSwitches in a virtual private cloud (VPC) that are associated with a multicast domain is returned. If you set **TransitRouterMulticastDomainId**, the information about the vSwitches that are associated with a multicast domain is returned.
 * *   Before you call **ListTransitRouterMulticastDomainAssociations**, make sure that all the request parameters are valid. If a request parameter is invalid, the system returns a **request ID** but does not return the vSwitches that are associated with the multicast domain.
 *
 * @param request ListTransitRouterMulticastDomainAssociationsRequest
 * @return ListTransitRouterMulticastDomainAssociationsResponse
 */
ListTransitRouterMulticastDomainAssociationsResponse Client::listTransitRouterMulticastDomainAssociations(const ListTransitRouterMulticastDomainAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainAssociationsWithOptions(request, runtime);
}

/**
 * @param request ListTransitRouterMulticastDomainVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterMulticastDomainVSwitchesResponse
 */
ListTransitRouterMulticastDomainVSwitchesResponse Client::listTransitRouterMulticastDomainVSwitchesWithOptions(const ListTransitRouterMulticastDomainVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * @param request ListTransitRouterMulticastDomainVSwitchesRequest
 * @return ListTransitRouterMulticastDomainVSwitchesResponse
 */
ListTransitRouterMulticastDomainVSwitchesResponse Client::listTransitRouterMulticastDomainVSwitches(const ListTransitRouterMulticastDomainVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainVSwitchesWithOptions(request, runtime);
}

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
ListTransitRouterMulticastDomainsResponse Client::listTransitRouterMulticastDomainsWithOptions(const ListTransitRouterMulticastDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
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
 * @summary Queries the information about a multicast domain, such as the status, ID, and description.
 *
 * @description *   If you configure one of the RegionId and CenId parameters, you must configure the other parameter. Otherwise, no information about the multicast domain is returned. You can configure only one of the TransitRouterId and TransitRouterMulticastDomainId parameters.
 * *   Make sure that all the request parameters are valid. If a request parameter is invalid, a **request ID** is returned but the information about the multicast domain is not returned.
 *
 * @param request ListTransitRouterMulticastDomainsRequest
 * @return ListTransitRouterMulticastDomainsResponse
 */
ListTransitRouterMulticastDomainsResponse Client::listTransitRouterMulticastDomains(const ListTransitRouterMulticastDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastDomainsWithOptions(request, runtime);
}

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
ListTransitRouterMulticastGroupsResponse Client::listTransitRouterMulticastGroupsWithOptions(const ListTransitRouterMulticastGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.groupIpAddress();
  }

  if (!!request.hasIsGroupMember()) {
    query["IsGroupMember"] = request.isGroupMember();
  }

  if (!!request.hasIsGroupSource()) {
    query["IsGroupSource"] = request.isGroupSource();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.networkInterfaceIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.peerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
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
ListTransitRouterMulticastGroupsResponse Client::listTransitRouterMulticastGroups(const ListTransitRouterMulticastGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterMulticastGroupsWithOptions(request, runtime);
}

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
ListTransitRouterPeerAttachmentsResponse Client::listTransitRouterPeerAttachmentsWithOptions(const ListTransitRouterPeerAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries inter-region connections on an Enterprise Edition transit router.
 *
 * @description You can use the following methods to query inter-region connections on an Enterprise Edition transit router:
 * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Enterprise Edition transit router.
 * *   Query all inter-region connections on an Enterprise Edition transit router by specifying the ID of the Cloud Enterprise Network (CEN) instance and the ID of the region where the transit router is deployed.
 *
 * @param request ListTransitRouterPeerAttachmentsRequest
 * @return ListTransitRouterPeerAttachmentsResponse
 */
ListTransitRouterPeerAttachmentsResponse Client::listTransitRouterPeerAttachments(const ListTransitRouterPeerAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterPeerAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Queries the prefix lists that are associated with an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterPrefixListAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterPrefixListAssociationResponse
 */
ListTransitRouterPrefixListAssociationResponse Client::listTransitRouterPrefixListAssociationWithOptions(const ListTransitRouterPrefixListAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextHop()) {
    query["NextHop"] = request.nextHop();
  }

  if (!!request.hasNextHopInstanceId()) {
    query["NextHopInstanceId"] = request.nextHopInstanceId();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.nextHopType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.ownerUid();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.prefixListId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterTableId()) {
    query["TransitRouterTableId"] = request.transitRouterTableId();
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
 * @summary Queries the prefix lists that are associated with an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterPrefixListAssociationRequest
 * @return ListTransitRouterPrefixListAssociationResponse
 */
ListTransitRouterPrefixListAssociationResponse Client::listTransitRouterPrefixListAssociation(const ListTransitRouterPrefixListAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterPrefixListAssociationWithOptions(request, runtime);
}

/**
 * @summary Queries the details about routes in the route tables of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteEntriesResponse
 */
ListTransitRouterRouteEntriesResponse Client::listTransitRouterRouteEntriesWithOptions(const ListTransitRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrefixListId()) {
    query["PrefixListId"] = request.prefixListId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteFilter()) {
    query["RouteFilter"] = request.routeFilter();
  }

  if (!!request.hasTransitRouterRouteEntryDestinationCidrBlock()) {
    query["TransitRouterRouteEntryDestinationCidrBlock"] = request.transitRouterRouteEntryDestinationCidrBlock();
  }

  if (!!request.hasTransitRouterRouteEntryIds()) {
    query["TransitRouterRouteEntryIds"] = request.transitRouterRouteEntryIds();
  }

  if (!!request.hasTransitRouterRouteEntryNames()) {
    query["TransitRouterRouteEntryNames"] = request.transitRouterRouteEntryNames();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopId()) {
    query["TransitRouterRouteEntryNextHopId"] = request.transitRouterRouteEntryNextHopId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopResourceId()) {
    query["TransitRouterRouteEntryNextHopResourceId"] = request.transitRouterRouteEntryNextHopResourceId();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopResourceType()) {
    query["TransitRouterRouteEntryNextHopResourceType"] = request.transitRouterRouteEntryNextHopResourceType();
  }

  if (!!request.hasTransitRouterRouteEntryNextHopType()) {
    query["TransitRouterRouteEntryNextHopType"] = request.transitRouterRouteEntryNextHopType();
  }

  if (!!request.hasTransitRouterRouteEntryOriginResourceId()) {
    query["TransitRouterRouteEntryOriginResourceId"] = request.transitRouterRouteEntryOriginResourceId();
  }

  if (!!request.hasTransitRouterRouteEntryOriginResourceType()) {
    query["TransitRouterRouteEntryOriginResourceType"] = request.transitRouterRouteEntryOriginResourceType();
  }

  if (!!request.hasTransitRouterRouteEntryStatus()) {
    query["TransitRouterRouteEntryStatus"] = request.transitRouterRouteEntryStatus();
  }

  if (!!request.hasTransitRouterRouteEntryType()) {
    query["TransitRouterRouteEntryType"] = request.transitRouterRouteEntryType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Queries the details about routes in the route tables of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteEntriesRequest
 * @return ListTransitRouterRouteEntriesResponse
 */
ListTransitRouterRouteEntriesResponse Client::listTransitRouterRouteEntries(const ListTransitRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteEntriesWithOptions(request, runtime);
}

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
ListTransitRouterRouteTableAssociationsResponse Client::listTransitRouterRouteTableAssociationsWithOptions(const ListTransitRouterRouteTableAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentResourceId()) {
    query["TransitRouterAttachmentResourceId"] = request.transitRouterAttachmentResourceId();
  }

  if (!!request.hasTransitRouterAttachmentResourceType()) {
    query["TransitRouterAttachmentResourceType"] = request.transitRouterAttachmentResourceType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
ListTransitRouterRouteTableAssociationsResponse Client::listTransitRouterRouteTableAssociations(const ListTransitRouterRouteTableAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTableAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries the route learning correlations of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteTablePropagationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteTablePropagationsResponse
 */
ListTransitRouterRouteTablePropagationsResponse Client::listTransitRouterRouteTablePropagationsWithOptions(const ListTransitRouterRouteTablePropagationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentResourceId()) {
    query["TransitRouterAttachmentResourceId"] = request.transitRouterAttachmentResourceId();
  }

  if (!!request.hasTransitRouterAttachmentResourceType()) {
    query["TransitRouterAttachmentResourceType"] = request.transitRouterAttachmentResourceType();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Queries the route learning correlations of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteTablePropagationsRequest
 * @return ListTransitRouterRouteTablePropagationsResponse
 */
ListTransitRouterRouteTablePropagationsResponse Client::listTransitRouterRouteTablePropagations(const ListTransitRouterRouteTablePropagationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTablePropagationsWithOptions(request, runtime);
}

/**
 * @summary Queries the route tables of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransitRouterRouteTablesResponse
 */
ListTransitRouterRouteTablesResponse Client::listTransitRouterRouteTablesWithOptions(const ListTransitRouterRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.routeTableOptions();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterRouteTableIds()) {
    query["TransitRouterRouteTableIds"] = request.transitRouterRouteTableIds();
  }

  if (!!request.hasTransitRouterRouteTableNames()) {
    query["TransitRouterRouteTableNames"] = request.transitRouterRouteTableNames();
  }

  if (!!request.hasTransitRouterRouteTableStatus()) {
    query["TransitRouterRouteTableStatus"] = request.transitRouterRouteTableStatus();
  }

  if (!!request.hasTransitRouterRouteTableType()) {
    query["TransitRouterRouteTableType"] = request.transitRouterRouteTableType();
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
 * @summary Queries the route tables of an Enterprise Edition transit router.
 *
 * @param request ListTransitRouterRouteTablesRequest
 * @return ListTransitRouterRouteTablesResponse
 */
ListTransitRouterRouteTablesResponse Client::listTransitRouterRouteTables(const ListTransitRouterRouteTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterRouteTablesWithOptions(request, runtime);
}

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
ListTransitRouterVbrAttachmentsResponse Client::listTransitRouterVbrAttachmentsWithOptions(const ListTransitRouterVbrAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
 * @summary Queries the virtual border router (VBR) connections on an Enterprise Edition transit router.
 *
 * @description You can use the following methods to query VBR connections on an Enterprise Edition transit router:
 * *   Specify the ID of the Enterprise Edition transit router.
 * *   Specify the ID of the relevant Cloud Enterprise Network (CEN) instance and the region ID of the Enterprise Edition transit router.
 *
 * @param request ListTransitRouterVbrAttachmentsRequest
 * @return ListTransitRouterVbrAttachmentsResponse
 */
ListTransitRouterVbrAttachmentsResponse Client::listTransitRouterVbrAttachments(const ListTransitRouterVbrAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVbrAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterVpcAttachmentsResponse Client::listTransitRouterVpcAttachmentsWithOptions(const ListTransitRouterVpcAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
ListTransitRouterVpcAttachmentsResponse Client::listTransitRouterVpcAttachments(const ListTransitRouterVpcAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVpcAttachmentsWithOptions(request, runtime);
}

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
ListTransitRouterVpnAttachmentsResponse Client::listTransitRouterVpnAttachmentsWithOptions(const ListTransitRouterVpnAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
ListTransitRouterVpnAttachmentsResponse Client::listTransitRouterVpnAttachments(const ListTransitRouterVpnAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRouterVpnAttachmentsWithOptions(request, runtime);
}

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
ListTransitRoutersResponse Client::listTransitRoutersWithOptions(const ListTransitRoutersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasFeatureFilter()) {
    query["FeatureFilter"] = request.featureFilter();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.transitRouterName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
ListTransitRoutersResponse Client::listTransitRouters(const ListTransitRoutersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransitRoutersWithOptions(request, runtime);
}

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
ModifyCenAttributeResponse Client::modifyCenAttributeWithOptions(const ModifyCenAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.protectionLevel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @description **ModifyCenAttribute** is an asynchronous operation. After you send a request, the system returns the **request ID** but the operation is still being performed in the system background. You can call **DescribeCens** to query the status of a CEN instance.
 * *   If a CEN instance is in the **Modifying** state, the CEN instance is being modified. You can query the CEN instance but cannot perform other operations.
 * *   If a CEN instance is in the **Active** state, the CEN instance is modified.
 *
 * @param request ModifyCenAttributeRequest
 * @return ModifyCenAttributeResponse
 */
ModifyCenAttributeResponse Client::modifyCenAttribute(const ModifyCenAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a bandwidth plan.
 *
 * @param request ModifyCenBandwidthPackageAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCenBandwidthPackageAttributeResponse
 */
ModifyCenBandwidthPackageAttributeResponse Client::modifyCenBandwidthPackageAttributeWithOptions(const ModifyCenBandwidthPackageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Modifies the name and description of a bandwidth plan.
 *
 * @param request ModifyCenBandwidthPackageAttributeRequest
 * @return ModifyCenBandwidthPackageAttributeResponse
 */
ModifyCenBandwidthPackageAttributeResponse Client::modifyCenBandwidthPackageAttribute(const ModifyCenBandwidthPackageAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenBandwidthPackageAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the maximum bandwidth of a bandwidth plan.
 *
 * @param request ModifyCenBandwidthPackageSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCenBandwidthPackageSpecResponse
 */
ModifyCenBandwidthPackageSpecResponse Client::modifyCenBandwidthPackageSpecWithOptions(const ModifyCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Modifies the maximum bandwidth of a bandwidth plan.
 *
 * @param request ModifyCenBandwidthPackageSpecRequest
 * @return ModifyCenBandwidthPackageSpecResponse
 */
ModifyCenBandwidthPackageSpecResponse Client::modifyCenBandwidthPackageSpec(const ModifyCenBandwidthPackageSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenBandwidthPackageSpecWithOptions(request, runtime);
}

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
ModifyCenRouteMapResponse Client::modifyCenRouteMapWithOptions(const ModifyCenRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsPathMatchMode()) {
    query["AsPathMatchMode"] = request.asPathMatchMode();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenRegionId()) {
    query["CenRegionId"] = request.cenRegionId();
  }

  if (!!request.hasCidrMatchMode()) {
    query["CidrMatchMode"] = request.cidrMatchMode();
  }

  if (!!request.hasCommunityMatchMode()) {
    query["CommunityMatchMode"] = request.communityMatchMode();
  }

  if (!!request.hasCommunityOperateMode()) {
    query["CommunityOperateMode"] = request.communityOperateMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestinationChildInstanceTypes()) {
    query["DestinationChildInstanceTypes"] = request.destinationChildInstanceTypes();
  }

  if (!!request.hasDestinationCidrBlocks()) {
    query["DestinationCidrBlocks"] = request.destinationCidrBlocks();
  }

  if (!!request.hasDestinationInstanceIds()) {
    query["DestinationInstanceIds"] = request.destinationInstanceIds();
  }

  if (!!request.hasDestinationInstanceIdsReverseMatch()) {
    query["DestinationInstanceIdsReverseMatch"] = request.destinationInstanceIdsReverseMatch();
  }

  if (!!request.hasDestinationRegionIds()) {
    query["DestinationRegionIds"] = request.destinationRegionIds();
  }

  if (!!request.hasDestinationRouteTableIds()) {
    query["DestinationRouteTableIds"] = request.destinationRouteTableIds();
  }

  if (!!request.hasMapResult()) {
    query["MapResult"] = request.mapResult();
  }

  if (!!request.hasMatchAddressType()) {
    query["MatchAddressType"] = request.matchAddressType();
  }

  if (!!request.hasMatchAsns()) {
    query["MatchAsns"] = request.matchAsns();
  }

  if (!!request.hasMatchCommunitySet()) {
    query["MatchCommunitySet"] = request.matchCommunitySet();
  }

  if (!!request.hasNextPriority()) {
    query["NextPriority"] = request.nextPriority();
  }

  if (!!request.hasOperateCommunitySet()) {
    query["OperateCommunitySet"] = request.operateCommunitySet();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreference()) {
    query["Preference"] = request.preference();
  }

  if (!!request.hasPrependAsPath()) {
    query["PrependAsPath"] = request.prependAsPath();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.routeMapId();
  }

  if (!!request.hasRouteTypes()) {
    query["RouteTypes"] = request.routeTypes();
  }

  if (!!request.hasSourceChildInstanceTypes()) {
    query["SourceChildInstanceTypes"] = request.sourceChildInstanceTypes();
  }

  if (!!request.hasSourceInstanceIds()) {
    query["SourceInstanceIds"] = request.sourceInstanceIds();
  }

  if (!!request.hasSourceInstanceIdsReverseMatch()) {
    query["SourceInstanceIdsReverseMatch"] = request.sourceInstanceIdsReverseMatch();
  }

  if (!!request.hasSourceRegionIds()) {
    query["SourceRegionIds"] = request.sourceRegionIds();
  }

  if (!!request.hasSourceRouteTableIds()) {
    query["SourceRouteTableIds"] = request.sourceRouteTableIds();
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
 * @summary Modifies a routing policy of a Cloud Enterprise Network (CEN) instance.
 *
 * @description `ModifyCenRouteMap` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeCenRouteMaps` operation to query the status of a routing policy.
 * *   **Modifying**: indicates that the system is modifying the routing policy. You can only query the routing policy, but cannot perform other operations.
 * *   **Active**: indicates that the routing policy is modified.
 *
 * @param request ModifyCenRouteMapRequest
 * @return ModifyCenRouteMapResponse
 */
ModifyCenRouteMapResponse Client::modifyCenRouteMap(const ModifyCenRouteMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenRouteMapWithOptions(request, runtime);
}

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
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttributeWithOptions(const ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.flowLogName();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Modifies the name, description, and capture window of a flow log.
 *
 * @description `ModifyFlowLogAttribute` is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the `DescribeFlowlogs` operation to query the status of a flow log.
 * *   If a flow log is in the **Modifying** state, the flow log is being modified. In this case, you can query the flow log but cannot perform other operations.
 * *   If a flow log is in the **Active** state, the flow log is modified.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowLogAttributeWithOptions(request, runtime);
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
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMatchRuleDescription()) {
    query["TrafficMatchRuleDescription"] = request.trafficMatchRuleDescription();
  }

  if (!!request.hasTrafficMatchRuleId()) {
    query["TrafficMatchRuleId"] = request.trafficMatchRuleId();
  }

  if (!!request.hasTrafficMatchRuleName()) {
    query["TrafficMatchRuleName"] = request.trafficMatchRuleName();
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
 * @summary Edit an aggregate route.
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
    request.setTransitRouteTableAggregationScopeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transitRouteTableAggregationScopeList(), "TransitRouteTableAggregationScopeList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableAggregationDescription()) {
    query["TransitRouteTableAggregationDescription"] = request.transitRouteTableAggregationDescription();
  }

  if (!!request.hasTransitRouteTableAggregationName()) {
    query["TransitRouteTableAggregationName"] = request.transitRouteTableAggregationName();
  }

  if (!!request.hasTransitRouteTableAggregationScope()) {
    query["TransitRouteTableAggregationScope"] = request.transitRouteTableAggregationScope();
  }

  if (!!request.hasTransitRouteTableAggregationScopeListShrink()) {
    query["TransitRouteTableAggregationScopeList"] = request.transitRouteTableAggregationScopeListShrink();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @summary Edit an aggregate route.
 *
 * @param request ModifyTransitRouteTableAggregationRequest
 * @return ModifyTransitRouteTableAggregationResponse
 */
ModifyTransitRouteTableAggregationResponse Client::modifyTransitRouteTableAggregation(const ModifyTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouteTableAggregationWithOptions(request, runtime);
}

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
ModifyTransitRouterCidrResponse Client::modifyTransitRouterCidrWithOptions(const ModifyTransitRouterCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPublishCidrRoute()) {
    query["PublishCidrRoute"] = request.publishCidrRoute();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterCidrId()) {
    query["TransitRouterCidrId"] = request.transitRouterCidrId();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
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
ModifyTransitRouterCidrResponse Client::modifyTransitRouterCidr(const ModifyTransitRouterCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouterCidrWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyTransitRouterMulticastDomain operation to modify the name, description, and feature options of a multicast domain.
 *
 * @param request ModifyTransitRouterMulticastDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTransitRouterMulticastDomainResponse
 */
ModifyTransitRouterMulticastDomainResponse Client::modifyTransitRouterMulticastDomainWithOptions(const ModifyTransitRouterMulticastDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainDescription()) {
    query["TransitRouterMulticastDomainDescription"] = request.transitRouterMulticastDomainDescription();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasTransitRouterMulticastDomainName()) {
    query["TransitRouterMulticastDomainName"] = request.transitRouterMulticastDomainName();
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
 * @summary You can call the ModifyTransitRouterMulticastDomain operation to modify the name, description, and feature options of a multicast domain.
 *
 * @param request ModifyTransitRouterMulticastDomainRequest
 * @return ModifyTransitRouterMulticastDomainResponse
 */
ModifyTransitRouterMulticastDomainResponse Client::modifyTransitRouterMulticastDomain(const ModifyTransitRouterMulticastDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTransitRouterMulticastDomainWithOptions(request, runtime);
}

/**
 * @summary Moves a Cloud Enterprise Network (CEN) instance or a bandwidth plan to another resource group.
 *
 * @description By default, CEN instances and bandwidth plans are in the default resource group. You can call the `MoveResourceGroup` operation to move CEN instances or bandwidth plans to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @summary Moves a Cloud Enterprise Network (CEN) instance or a bandwidth plan to another resource group.
 *
 * @description By default, CEN instances and bandwidth plans are in the default resource group. You can call the `MoveResourceGroup` operation to move CEN instances or bandwidth plans to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Activates the transit router feature.
 *
 * @description You can call the `OpenTransitRouterService` operation to activate the transit router feature free of charge. After the `OpenTransitRouterService` operation succeeds, an order is automatically generated. You can use the returned order ID to query the order information in [Alibaba Cloud User Center](https://usercenter2-intl.aliyun.com/billing/#/account/overview).
 *
 * @param request OpenTransitRouterServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenTransitRouterServiceResponse
 */
OpenTransitRouterServiceResponse Client::openTransitRouterServiceWithOptions(const OpenTransitRouterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Activates the transit router feature.
 *
 * @description You can call the `OpenTransitRouterService` operation to activate the transit router feature free of charge. After the `OpenTransitRouterService` operation succeeds, an order is automatically generated. You can use the returned order ID to query the order information in [Alibaba Cloud User Center](https://usercenter2-intl.aliyun.com/billing/#/account/overview).
 *
 * @param request OpenTransitRouterServiceRequest
 * @return OpenTransitRouterServiceResponse
 */
OpenTransitRouterServiceResponse Client::openTransitRouterService(const OpenTransitRouterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openTransitRouterServiceWithOptions(request, runtime);
}

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
PublishRouteEntriesResponse Client::publishRouteEntriesWithOptions(const PublishRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
PublishRouteEntriesResponse Client::publishRouteEntries(const PublishRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Re-advertises an aggregate route.
 *
 * @param request RefreshTransitRouteTableAggregationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshTransitRouteTableAggregationResponse
 */
RefreshTransitRouteTableAggregationResponse Client::refreshTransitRouteTableAggregationWithOptions(const RefreshTransitRouteTableAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouteTableAggregationCidr()) {
    query["TransitRouteTableAggregationCidr"] = request.transitRouteTableAggregationCidr();
  }

  if (!!request.hasTransitRouteTableId()) {
    query["TransitRouteTableId"] = request.transitRouteTableId();
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
 * @summary Re-advertises an aggregate route.
 *
 * @param request RefreshTransitRouteTableAggregationRequest
 * @return RefreshTransitRouteTableAggregationResponse
 */
RefreshTransitRouteTableAggregationResponse Client::refreshTransitRouteTableAggregation(const RefreshTransitRouteTableAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshTransitRouteTableAggregationWithOptions(request, runtime);
}

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
RegisterTransitRouterMulticastGroupMembersResponse Client::registerTransitRouterMulticastGroupMembersWithOptions(const RegisterTransitRouterMulticastGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.groupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.networkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeerTransitRouterMulticastDomains()) {
    query["PeerTransitRouterMulticastDomains"] = request.peerTransitRouterMulticastDomains();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
RegisterTransitRouterMulticastGroupMembersResponse Client::registerTransitRouterMulticastGroupMembers(const RegisterTransitRouterMulticastGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerTransitRouterMulticastGroupMembersWithOptions(request, runtime);
}

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
RegisterTransitRouterMulticastGroupSourcesResponse Client::registerTransitRouterMulticastGroupSourcesWithOptions(const RegisterTransitRouterMulticastGroupSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGroupIpAddress()) {
    query["GroupIpAddress"] = request.groupIpAddress();
  }

  if (!!request.hasNetworkInterfaceIds()) {
    query["NetworkInterfaceIds"] = request.networkInterfaceIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterMulticastDomainId()) {
    query["TransitRouterMulticastDomainId"] = request.transitRouterMulticastDomainId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
RegisterTransitRouterMulticastGroupSourcesResponse Client::registerTransitRouterMulticastGroupSources(const RegisterTransitRouterMulticastGroupSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerTransitRouterMulticastGroupSourcesWithOptions(request, runtime);
}

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
RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkRuleIds()) {
    query["TrafficMarkRuleIds"] = request.trafficMarkRuleIds();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
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
RemoveTrafficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTrafficMatchRuleFromTrafficMarkingPolicy(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTrafficMatchRuleFromTrafficMarkingPolicyWithOptions(request, runtime);
}

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
RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkRuleIds()) {
    query["TrafficMarkRuleIds"] = request.trafficMarkRuleIds();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
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
 * @summary Removes a traffic classification rule from a traffic marking policy.
 *
 * @description ### [](#)Precautions
 * The **RemoveTraficMatchRuleFromTrafficMarkingPolicy** operation is deprecated and will be discontinued soon. To delete a traffic classification rule, call the [RemoveTrafficMatchRuleFromTrafficMarkingPolicy](https://help.aliyun.com/document_detail/452726.html) operation. Maintenance on this document has stopped.
 *
 * @param request RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest
 * @return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse
 */
RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Client::removeTraficMatchRuleFromTrafficMarkingPolicy(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(request, runtime);
}

/**
 * @summary Associates a network instance connection with another route table of a transit router.
 *
 * @param request ReplaceTransitRouterRouteTableAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceTransitRouterRouteTableAssociationResponse
 */
ReplaceTransitRouterRouteTableAssociationResponse Client::replaceTransitRouterRouteTableAssociationWithOptions(const ReplaceTransitRouterRouteTableAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
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
 * @summary Associates a network instance connection with another route table of a transit router.
 *
 * @param request ReplaceTransitRouterRouteTableAssociationRequest
 * @return ReplaceTransitRouterRouteTableAssociationResponse
 */
ReplaceTransitRouterRouteTableAssociationResponse Client::replaceTransitRouterRouteTableAssociation(const ReplaceTransitRouterRouteTableAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceTransitRouterRouteTableAssociationWithOptions(request, runtime);
}

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
ResolveAndRouteServiceInCenResponse Client::resolveAndRouteServiceInCenWithOptions(const ResolveAndRouteServiceInCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionIds()) {
    query["AccessRegionIds"] = request.accessRegionIds();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.hostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.hostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
ResolveAndRouteServiceInCenResponse Client::resolveAndRouteServiceInCen(const ResolveAndRouteServiceInCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resolveAndRouteServiceInCenWithOptions(request, runtime);
}

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
RevokeInstanceFromTransitRouterResponse Client::revokeInstanceFromTransitRouterWithOptions(const RevokeInstanceFromTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.cenOwnerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
RevokeInstanceFromTransitRouterResponse Client::revokeInstanceFromTransitRouter(const RevokeInstanceFromTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromTransitRouterWithOptions(request, runtime);
}

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
RoutePrivateZoneInCenToVpcResponse Client::routePrivateZoneInCenToVpcWithOptions(const RoutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.accessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasHostRegionId()) {
    query["HostRegionId"] = request.hostRegionId();
  }

  if (!!request.hasHostVpcId()) {
    query["HostVpcId"] = request.hostVpcId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
RoutePrivateZoneInCenToVpcResponse Client::routePrivateZoneInCenToVpc(const RoutePrivateZoneInCenToVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return routePrivateZoneInCenToVpcWithOptions(request, runtime);
}

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
SetCenInterRegionBandwidthLimitResponse Client::setCenInterRegionBandwidthLimitWithOptions(const SetCenInterRegionBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthLimit()) {
    query["BandwidthLimit"] = request.bandwidthLimit();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.bandwidthType();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasLocalRegionId()) {
    query["LocalRegionId"] = request.localRegionId();
  }

  if (!!request.hasOppositeRegionId()) {
    query["OppositeRegionId"] = request.oppositeRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
SetCenInterRegionBandwidthLimitResponse Client::setCenInterRegionBandwidthLimit(const SetCenInterRegionBandwidthLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCenInterRegionBandwidthLimitWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Creates tags and adds them to a resource.
 *
 * @description *   Each tag consists of a tag key and a tag value. When you add a tag, you must specify the tag key and tag value.
 * *   If you want to add multiple tags to a Cloud Enterprise Network (CEN) instance, each tag key must be unique.
 * *   You can add at most 20 tags to a CEN instance.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 进行云企业网预付费带宽包临时升配
 *
 * @param request TempUpgradeCenBandwidthPackageSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempUpgradeCenBandwidthPackageSpecResponse
 */
TempUpgradeCenBandwidthPackageSpecResponse Client::tempUpgradeCenBandwidthPackageSpecWithOptions(const TempUpgradeCenBandwidthPackageSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 进行云企业网预付费带宽包临时升配
 *
 * @param request TempUpgradeCenBandwidthPackageSpecRequest
 * @return TempUpgradeCenBandwidthPackageSpecResponse
 */
TempUpgradeCenBandwidthPackageSpecResponse Client::tempUpgradeCenBandwidthPackageSpec(const TempUpgradeCenBandwidthPackageSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempUpgradeCenBandwidthPackageSpecWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Cloud Enterprise Network (CEN) from a bandwidth plan. After the disassociation, the bandwidth can be associated with another CEN instance.
 *
 * @description No inter-region connections are configured in the bandwidth plan. For more information about how to delete inter-region connections, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
 *
 * @param request UnassociateCenBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateCenBandwidthPackageResponse
 */
UnassociateCenBandwidthPackageResponse Client::unassociateCenBandwidthPackageWithOptions(const UnassociateCenBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Disassociates a Cloud Enterprise Network (CEN) from a bandwidth plan. After the disassociation, the bandwidth can be associated with another CEN instance.
 *
 * @description No inter-region connections are configured in the bandwidth plan. For more information about how to delete inter-region connections, see [SetCenInterRegionBandwidthLimit](https://help.aliyun.com/document_detail/65942.html).
 *
 * @param request UnassociateCenBandwidthPackageRequest
 * @return UnassociateCenBandwidthPackageResponse
 */
UnassociateCenBandwidthPackageResponse Client::unassociateCenBandwidthPackage(const UnassociateCenBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateCenBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary 删除PrivateZone
 *
 * @param request UnroutePrivateZoneInCenToVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnroutePrivateZoneInCenToVpcResponse
 */
UnroutePrivateZoneInCenToVpcResponse Client::unroutePrivateZoneInCenToVpcWithOptions(const UnroutePrivateZoneInCenToVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessRegionId()) {
    query["AccessRegionId"] = request.accessRegionId();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 删除PrivateZone
 *
 * @param request UnroutePrivateZoneInCenToVpcRequest
 * @return UnroutePrivateZoneInCenToVpcResponse
 */
UnroutePrivateZoneInCenToVpcResponse Client::unroutePrivateZoneInCenToVpc(const UnroutePrivateZoneInCenToVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unroutePrivateZoneInCenToVpcWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
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
 * @summary The ID of the request.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a quality of service (QoS) policy.
 *
 * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
 */
UpdateCenInterRegionTrafficQosPolicyAttributeResponse Client::updateCenInterRegionTrafficQosPolicyAttributeWithOptions(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficQosPolicyDescription()) {
    query["TrafficQosPolicyDescription"] = request.trafficQosPolicyDescription();
  }

  if (!!request.hasTrafficQosPolicyId()) {
    query["TrafficQosPolicyId"] = request.trafficQosPolicyId();
  }

  if (!!request.hasTrafficQosPolicyName()) {
    query["TrafficQosPolicyName"] = request.trafficQosPolicyName();
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
 * @summary Modifies the name and description of a quality of service (QoS) policy.
 *
 * @param request UpdateCenInterRegionTrafficQosPolicyAttributeRequest
 * @return UpdateCenInterRegionTrafficQosPolicyAttributeResponse
 */
UpdateCenInterRegionTrafficQosPolicyAttributeResponse Client::updateCenInterRegionTrafficQosPolicyAttribute(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCenInterRegionTrafficQosPolicyAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, inter-region bandwidth, and Differentiated Services Code Point (DSCP) value of a quality of service (QoS) queue.
 *
 * @param request UpdateCenInterRegionTrafficQosQueueAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCenInterRegionTrafficQosQueueAttributeResponse
 */
UpdateCenInterRegionTrafficQosQueueAttributeResponse Client::updateCenInterRegionTrafficQosQueueAttributeWithOptions(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDscps()) {
    query["Dscps"] = request.dscps();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQosQueueDescription()) {
    query["QosQueueDescription"] = request.qosQueueDescription();
  }

  if (!!request.hasQosQueueId()) {
    query["QosQueueId"] = request.qosQueueId();
  }

  if (!!request.hasQosQueueName()) {
    query["QosQueueName"] = request.qosQueueName();
  }

  if (!!request.hasRemainBandwidthPercent()) {
    query["RemainBandwidthPercent"] = request.remainBandwidthPercent();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Modifies the name, description, inter-region bandwidth, and Differentiated Services Code Point (DSCP) value of a quality of service (QoS) queue.
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
    query["AddTrafficMatchRules"] = request.addTrafficMatchRules();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeleteTrafficMatchRules()) {
    query["DeleteTrafficMatchRules"] = request.deleteTrafficMatchRules();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrafficMarkingPolicyDescription()) {
    query["TrafficMarkingPolicyDescription"] = request.trafficMarkingPolicyDescription();
  }

  if (!!request.hasTrafficMarkingPolicyId()) {
    query["TrafficMarkingPolicyId"] = request.trafficMarkingPolicyId();
  }

  if (!!request.hasTrafficMarkingPolicyName()) {
    query["TrafficMarkingPolicyName"] = request.trafficMarkingPolicyName();
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
UpdateTransitRouterResponse Client::updateTransitRouterWithOptions(const UpdateTransitRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterDescription()) {
    query["TransitRouterDescription"] = request.transitRouterDescription();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterName()) {
    query["TransitRouterName"] = request.transitRouterName();
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
 * @summary Modifies the name and description of a transit router.
 *
 * @description **UpdateTransitRouter** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouters** operation to query the status of a transit router.
 * *   If a transit router is in the **Modifying** state, the configuration of the transit router is being modified. You can query the transit router but cannot perform other operations.
 * *   If a transit router is in the **Active** state, the configuration of the transit router is modified.
 *
 * @param request UpdateTransitRouterRequest
 * @return UpdateTransitRouterResponse
 */
UpdateTransitRouterResponse Client::updateTransitRouter(const UpdateTransitRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterWithOptions(request, runtime);
}

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
UpdateTransitRouterEcrAttachmentAttributeResponse Client::updateTransitRouterEcrAttachmentAttributeWithOptions(const UpdateTransitRouterEcrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
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
 * @summary Modifies the name and description of an Express Connect Router (ECR) connection on a Enterprise Edition transit router.
 *
 * @description UpdateTransitRouterEcrAttachmentAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListTransitRouterEcrAttachments operation to query the status of an ECR connection.
 * If an ECR connection is in the Modifying state, the ECR connection is being modified. In this case, you can query the ECR connection but cannot perform other operations on the ECR connection. If an ECR connection is in the Attached state, the ECR connection is modified.
 *
 * @param request UpdateTransitRouterEcrAttachmentAttributeRequest
 * @return UpdateTransitRouterEcrAttachmentAttributeResponse
 */
UpdateTransitRouterEcrAttachmentAttributeResponse Client::updateTransitRouterEcrAttachmentAttribute(const UpdateTransitRouterEcrAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterEcrAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterPeerAttachmentAttributeResponse Client::updateTransitRouterPeerAttachmentAttributeWithOptions(const UpdateTransitRouterPeerAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.bandwidthType();
  }

  if (!!request.hasCenBandwidthPackageId()) {
    query["CenBandwidthPackageId"] = request.cenBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDefaultLinkType()) {
    query["DefaultLinkType"] = request.defaultLinkType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
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
 * @summary Modifies an inter-region connection on an Enterprise Edition transit router.
 *
 * @description **UpdateTransitRouterPeerAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterPeerAttachments** operation to query the status of an inter-region connection.
 * *   If an inter-region connection is in the **Modifying** state, the inter-region connection is being modified. You can query the inter-region connection but cannot perform other operations.
 * *   If an inter-region connection is in the **Attached** state, the inter-region connection is modified.
 *
 * @param request UpdateTransitRouterPeerAttachmentAttributeRequest
 * @return UpdateTransitRouterPeerAttachmentAttributeResponse
 */
UpdateTransitRouterPeerAttachmentAttributeResponse Client::updateTransitRouterPeerAttachmentAttribute(const UpdateTransitRouterPeerAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterPeerAttachmentAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a route in a route table of an Enterprise Edition transit router.
 *
 * @param request UpdateTransitRouterRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterRouteEntryResponse
 */
UpdateTransitRouterRouteEntryResponse Client::updateTransitRouterRouteEntryWithOptions(const UpdateTransitRouterRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterRouteEntryDescription()) {
    query["TransitRouterRouteEntryDescription"] = request.transitRouterRouteEntryDescription();
  }

  if (!!request.hasTransitRouterRouteEntryId()) {
    query["TransitRouterRouteEntryId"] = request.transitRouterRouteEntryId();
  }

  if (!!request.hasTransitRouterRouteEntryName()) {
    query["TransitRouterRouteEntryName"] = request.transitRouterRouteEntryName();
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
 * @summary Modifies the name and description of a route in a route table of an Enterprise Edition transit router.
 *
 * @param request UpdateTransitRouterRouteEntryRequest
 * @return UpdateTransitRouterRouteEntryResponse
 */
UpdateTransitRouterRouteEntryResponse Client::updateTransitRouterRouteEntry(const UpdateTransitRouterRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterRouteEntryWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a route table of an Enterprise Edition transit router and enables or disables multi-region equal-cost multi-path (ECMP) routing.
 *
 * @param request UpdateTransitRouterRouteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterRouteTableResponse
 */
UpdateTransitRouterRouteTableResponse Client::updateTransitRouterRouteTableWithOptions(const UpdateTransitRouterRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteTableOptions()) {
    query["RouteTableOptions"] = request.routeTableOptions();
  }

  if (!!request.hasTransitRouterRouteTableDescription()) {
    query["TransitRouterRouteTableDescription"] = request.transitRouterRouteTableDescription();
  }

  if (!!request.hasTransitRouterRouteTableId()) {
    query["TransitRouterRouteTableId"] = request.transitRouterRouteTableId();
  }

  if (!!request.hasTransitRouterRouteTableName()) {
    query["TransitRouterRouteTableName"] = request.transitRouterRouteTableName();
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
 * @summary Modifies the name and description of a route table of an Enterprise Edition transit router and enables or disables multi-region equal-cost multi-path (ECMP) routing.
 *
 * @param request UpdateTransitRouterRouteTableRequest
 * @return UpdateTransitRouterRouteTableResponse
 */
UpdateTransitRouterRouteTableResponse Client::updateTransitRouterRouteTable(const UpdateTransitRouterRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterRouteTableWithOptions(request, runtime);
}

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
UpdateTransitRouterVbrAttachmentAttributeResponse Client::updateTransitRouterVbrAttachmentAttributeWithOptions(const UpdateTransitRouterVbrAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
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
 * @summary Modifies the name, description, and enables or disables automatic route advertisement for a virtual border router (VBR) connection on an Enterprise Edition transit router.
 *
 * @description **UpdateTransitRouterVbrAttachmentAttribute** is an asynchronous operation. After a request is sent, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVbrAttachments** operation to query the status of a VBR connection.
 * *   If a VBR connection is in the **Modifying** state, the VBR connection is being modified. You can query the VBR connection but cannot perform other operations.
 * *   If the VBR connection is in the **Attached** state, the VBR connection is modified.
 *
 * @param request UpdateTransitRouterVbrAttachmentAttributeRequest
 * @return UpdateTransitRouterVbrAttachmentAttributeResponse
 */
UpdateTransitRouterVbrAttachmentAttributeResponse Client::updateTransitRouterVbrAttachmentAttribute(const UpdateTransitRouterVbrAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVbrAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterVpcAttachmentAttributeResponse Client::updateTransitRouterVpcAttachmentAttributeWithOptions(const UpdateTransitRouterVpcAttachmentAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTransitRouterVpcAttachmentAttributeShrinkRequest request = UpdateTransitRouterVpcAttachmentAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransitRouterVPCAttachmentOptions()) {
    request.setTransitRouterVPCAttachmentOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transitRouterVPCAttachmentOptions(), "TransitRouterVPCAttachmentOptions", "json"));
  }

  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
  }

  if (!!request.hasTransitRouterVPCAttachmentOptionsShrink()) {
    query["TransitRouterVPCAttachmentOptions"] = request.transitRouterVPCAttachmentOptionsShrink();
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
 * @summary Modifies the name and description of a virtual private cloud (VPC) connection on an Enterprise Edition transit router.
 *
 * @description **UpdateTransitRouterVpcAttachmentAttribute** is an asynchronous operation. After you send a request, the system returns a **request ID** and runs the task in the background. You can call the **ListTransitRouterVpcAttachments** operation to query the status of a VPC connection.
 * *   If a VPC connection is in the **Modifying** state, the VPC connection is being modified. You can query the VPC connection but cannot perform other operations.
 * *   If a VPC connection is in the **Attached** state, the VPC connection is modified.
 *
 * @param request UpdateTransitRouterVpcAttachmentAttributeRequest
 * @return UpdateTransitRouterVpcAttachmentAttributeResponse
 */
UpdateTransitRouterVpcAttachmentAttributeResponse Client::updateTransitRouterVpcAttachmentAttribute(const UpdateTransitRouterVpcAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpcAttachmentAttributeWithOptions(request, runtime);
}

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
UpdateTransitRouterVpcAttachmentZonesResponse Client::updateTransitRouterVpcAttachmentZonesWithOptions(const UpdateTransitRouterVpcAttachmentZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddZoneMappings()) {
    query["AddZoneMappings"] = request.addZoneMappings();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemoveZoneMappings()) {
    query["RemoveZoneMappings"] = request.removeZoneMappings();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
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
UpdateTransitRouterVpcAttachmentZonesResponse Client::updateTransitRouterVpcAttachmentZones(const UpdateTransitRouterVpcAttachmentZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpcAttachmentZonesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a VPN attachment.
 *
 * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransitRouterVpnAttachmentAttributeResponse
 */
UpdateTransitRouterVpnAttachmentAttributeResponse Client::updateTransitRouterVpnAttachmentAttributeWithOptions(const UpdateTransitRouterVpnAttachmentAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPublishRouteEnabled()) {
    query["AutoPublishRouteEnabled"] = request.autoPublishRouteEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransitRouterAttachmentDescription()) {
    query["TransitRouterAttachmentDescription"] = request.transitRouterAttachmentDescription();
  }

  if (!!request.hasTransitRouterAttachmentId()) {
    query["TransitRouterAttachmentId"] = request.transitRouterAttachmentId();
  }

  if (!!request.hasTransitRouterAttachmentName()) {
    query["TransitRouterAttachmentName"] = request.transitRouterAttachmentName();
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
 * @summary Modifies the configuration of a VPN attachment.
 *
 * @param request UpdateTransitRouterVpnAttachmentAttributeRequest
 * @return UpdateTransitRouterVpnAttachmentAttributeResponse
 */
UpdateTransitRouterVpnAttachmentAttributeResponse Client::updateTransitRouterVpnAttachmentAttribute(const UpdateTransitRouterVpnAttachmentAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransitRouterVpnAttachmentAttributeWithOptions(request, runtime);
}

/**
 * @summary Withdraws the routes of a virtual private cloud (VPC) or a virtual border router (VBR) from a Cloud Enterprise Network (CEN) instance.
 *
 * @param request WithdrawPublishedRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawPublishedRouteEntriesResponse
 */
WithdrawPublishedRouteEntriesResponse Client::withdrawPublishedRouteEntriesWithOptions(const WithdrawPublishedRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    query["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceRouteTableId()) {
    query["ChildInstanceRouteTableId"] = request.childInstanceRouteTableId();
  }

  if (!!request.hasChildInstanceType()) {
    query["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Withdraws the routes of a virtual private cloud (VPC) or a virtual border router (VBR) from a Cloud Enterprise Network (CEN) instance.
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