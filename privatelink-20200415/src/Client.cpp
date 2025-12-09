#include <darabonba/Core.hpp>
#include <alibabacloud/Privatelink20200415.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Privatelink20200415::Models;
namespace AlibabaCloud
{
namespace Privatelink20200415
{

AlibabaCloud::Privatelink20200415::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("privatelink", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds an account ID to the whitelist of an endpoint service.
 *
 * @description *   Before you add an account ID to the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **AddUserToVpcEndpointService** operation to add the ID of an Alibaba Cloud account to the whitelist of an endpoint service within a specified period of time.
 *
 * @param request AddUserToVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToVpcEndpointServiceResponse
 */
AddUserToVpcEndpointServiceResponse Client::addUserToVpcEndpointServiceWithOptions(const AddUserToVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasUserARN()) {
    query["UserARN"] = request.userARN();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToVpcEndpointServiceResponse>();
}

/**
 * @summary Adds an account ID to the whitelist of an endpoint service.
 *
 * @description *   Before you add an account ID to the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **AddUserToVpcEndpointService** operation to add the ID of an Alibaba Cloud account to the whitelist of an endpoint service within a specified period of time.
 *
 * @param request AddUserToVpcEndpointServiceRequest
 * @return AddUserToVpcEndpointServiceResponse
 */
AddUserToVpcEndpointServiceResponse Client::addUserToVpcEndpointService(const AddUserToVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Adds a zone to an endpoint.
 *
 * @description *   **AddZoneToVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the state of the zone.
 *     *   If the zone is in the **Creating** state, the zone is being added.
 *     *   If the zone is in the Wait state, the zone is added.
 * *   You cannot repeatedly call the **AddZoneToVpcEndpoint** operation to add a zone to an endpoint within a specified period of time.
 *
 * @param request AddZoneToVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddZoneToVpcEndpointResponse
 */
AddZoneToVpcEndpointResponse Client::addZoneToVpcEndpointWithOptions(const AddZoneToVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasIpv6Address()) {
    query["Ipv6Address"] = request.ipv6Address();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.ip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddZoneToVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddZoneToVpcEndpointResponse>();
}

/**
 * @summary Adds a zone to an endpoint.
 *
 * @description *   **AddZoneToVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the state of the zone.
 *     *   If the zone is in the **Creating** state, the zone is being added.
 *     *   If the zone is in the Wait state, the zone is added.
 * *   You cannot repeatedly call the **AddZoneToVpcEndpoint** operation to add a zone to an endpoint within a specified period of time.
 *
 * @param request AddZoneToVpcEndpointRequest
 * @return AddZoneToVpcEndpointResponse
 */
AddZoneToVpcEndpointResponse Client::addZoneToVpcEndpoint(const AddZoneToVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addZoneToVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Adds a service resource to an endpoint service.
 *
 * @description *   Before you add a service resource to an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **AttachResourceToVpcEndpointService** operation to add a service resource to an endpoint service within a specified period of time.
 *
 * @param request AttachResourceToVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachResourceToVpcEndpointServiceResponse
 */
AttachResourceToVpcEndpointServiceResponse Client::attachResourceToVpcEndpointServiceWithOptions(const AttachResourceToVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachResourceToVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachResourceToVpcEndpointServiceResponse>();
}

/**
 * @summary Adds a service resource to an endpoint service.
 *
 * @description *   Before you add a service resource to an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **AttachResourceToVpcEndpointService** operation to add a service resource to an endpoint service within a specified period of time.
 *
 * @param request AttachResourceToVpcEndpointServiceRequest
 * @return AttachResourceToVpcEndpointServiceResponse
 */
AttachResourceToVpcEndpointServiceResponse Client::attachResourceToVpcEndpointService(const AttachResourceToVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachResourceToVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Associates an endpoint with a security group.
 *
 * @description *   **AttachSecurityGroupToVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) operation to query the state of the endpoint.
 *     *   If the endpoint is in the **Pending** state, the endpoint is being associated with the security group.
 *     *   If the endpoint is in the **Active** state, the endpoint is associated with the security group.
 * *   You cannot repeatedly call the **AttachSecurityGroupToVpcEndpoint** operation to associate an endpoint with a security group within a specified period of time.
 *
 * @param request AttachSecurityGroupToVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachSecurityGroupToVpcEndpointResponse
 */
AttachSecurityGroupToVpcEndpointResponse Client::attachSecurityGroupToVpcEndpointWithOptions(const AttachSecurityGroupToVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachSecurityGroupToVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachSecurityGroupToVpcEndpointResponse>();
}

/**
 * @summary Associates an endpoint with a security group.
 *
 * @description *   **AttachSecurityGroupToVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) operation to query the state of the endpoint.
 *     *   If the endpoint is in the **Pending** state, the endpoint is being associated with the security group.
 *     *   If the endpoint is in the **Active** state, the endpoint is associated with the security group.
 * *   You cannot repeatedly call the **AttachSecurityGroupToVpcEndpoint** operation to associate an endpoint with a security group within a specified period of time.
 *
 * @param request AttachSecurityGroupToVpcEndpointRequest
 * @return AttachSecurityGroupToVpcEndpointResponse
 */
AttachSecurityGroupToVpcEndpointResponse Client::attachSecurityGroupToVpcEndpoint(const AttachSecurityGroupToVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachSecurityGroupToVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies a resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Modifies a resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries whether PrivateLink is activated.
 *
 * @param request CheckProductOpenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckProductOpenResponse
 */
CheckProductOpenResponse Client::checkProductOpenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckProductOpen"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckProductOpenResponse>();
}

/**
 * @summary Queries whether PrivateLink is activated.
 *
 * @return CheckProductOpenResponse
 */
CheckProductOpenResponse Client::checkProductOpen() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkProductOpenWithOptions(runtime);
}

/**
 * @summary Creates an endpoint.
 *
 * @description **CreateVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to check whether the endpoint is created.
 * *   If the endpoint is in the **Creating** state, the endpoint is being created.
 * *   If the endpoint is in the **Active** state, the endpoint is created.
 *
 * @param request CreateVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcEndpointResponse
 */
CreateVpcEndpointResponse Client::createVpcEndpointWithOptions(const CreateVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointDescription()) {
    query["EndpointDescription"] = request.endpointDescription();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.endpointName();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.policyDocument();
  }

  if (!!request.hasProtectedEnabled()) {
    query["ProtectedEnabled"] = request.protectedEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZone()) {
    query["Zone"] = request.zone();
  }

  if (!!request.hasZoneAffinityEnabled()) {
    query["ZoneAffinityEnabled"] = request.zoneAffinityEnabled();
  }

  if (!!request.hasZonePrivateIpAddressCount()) {
    query["ZonePrivateIpAddressCount"] = request.zonePrivateIpAddressCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcEndpointResponse>();
}

/**
 * @summary Creates an endpoint.
 *
 * @description **CreateVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to check whether the endpoint is created.
 * *   If the endpoint is in the **Creating** state, the endpoint is being created.
 * *   If the endpoint is in the **Active** state, the endpoint is created.
 *
 * @param request CreateVpcEndpointRequest
 * @return CreateVpcEndpointResponse
 */
CreateVpcEndpointResponse Client::createVpcEndpoint(const CreateVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates an endpoint service.
 *
 * @description *   Before you create an endpoint service, make sure that you have created a Server Load Balancer (SLB) instance that supports PrivateLink. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/174064.html).
 * *   **CreateVpcEndpointService** is an asynchronous operation. After a request is sent, the system returns a request ID and an instance ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to query the status of the endpoint service.
 *     *   If the endpoint service is in the **Creating** state, the endpoint service is being created.
 *     *   If the endpoint service is in the **Active** state, the endpoint service is created.
 *
 * @param request CreateVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcEndpointServiceResponse
 */
CreateVpcEndpointServiceResponse Client::createVpcEndpointServiceWithOptions(const CreateVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasAutoAcceptEnabled()) {
    query["AutoAcceptEnabled"] = request.autoAcceptEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasPayer()) {
    query["Payer"] = request.payer();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceResourceType()) {
    query["ServiceResourceType"] = request.serviceResourceType();
  }

  if (!!request.hasServiceSupportIPv6()) {
    query["ServiceSupportIPv6"] = request.serviceSupportIPv6();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasZoneAffinityEnabled()) {
    query["ZoneAffinityEnabled"] = request.zoneAffinityEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcEndpointServiceResponse>();
}

/**
 * @summary Creates an endpoint service.
 *
 * @description *   Before you create an endpoint service, make sure that you have created a Server Load Balancer (SLB) instance that supports PrivateLink. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/174064.html).
 * *   **CreateVpcEndpointService** is an asynchronous operation. After a request is sent, the system returns a request ID and an instance ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to query the status of the endpoint service.
 *     *   If the endpoint service is in the **Creating** state, the endpoint service is being created.
 *     *   If the endpoint service is in the **Active** state, the endpoint service is created.
 *
 * @param request CreateVpcEndpointServiceRequest
 * @return CreateVpcEndpointServiceResponse
 */
CreateVpcEndpointServiceResponse Client::createVpcEndpointService(const CreateVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint.
 *
 * @description *   Before you delete an endpoint, you must delete the zones that are added to the endpoint.
 * *   **DeleteVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to check whether the endpoint is deleted.
 *     *   If the endpoint is in the **Deleting** state, the endpoint is being deleted.
 *     *   If the endpoint cannot be queried, the endpoint is deleted.
 *
 * @param request DeleteVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcEndpointResponse
 */
DeleteVpcEndpointResponse Client::deleteVpcEndpointWithOptions(const DeleteVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcEndpointResponse>();
}

/**
 * @summary Deletes an endpoint.
 *
 * @description *   Before you delete an endpoint, you must delete the zones that are added to the endpoint.
 * *   **DeleteVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to check whether the endpoint is deleted.
 *     *   If the endpoint is in the **Deleting** state, the endpoint is being deleted.
 *     *   If the endpoint cannot be queried, the endpoint is deleted.
 *
 * @param request DeleteVpcEndpointRequest
 * @return DeleteVpcEndpointResponse
 */
DeleteVpcEndpointResponse Client::deleteVpcEndpoint(const DeleteVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint service.
 *
 * @description *   Before you delete an endpoint service, you must disconnect the endpoint from the endpoint service and remove the service resources.
 * *   **DeleteVpcEndpointService** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to check whether the endpoint service is deleted.
 *     *   If the endpoint service is in the **Deleting** state, the endpoint service is being deleted.
 *     *   If the endpoint service cannot be queried, the endpoint service is deleted.
 * *   You cannot repeatedly call the **DeleteVpcEndpointService** operation to delete an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request DeleteVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcEndpointServiceResponse
 */
DeleteVpcEndpointServiceResponse Client::deleteVpcEndpointServiceWithOptions(const DeleteVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcEndpointServiceResponse>();
}

/**
 * @summary Deletes an endpoint service.
 *
 * @description *   Before you delete an endpoint service, you must disconnect the endpoint from the endpoint service and remove the service resources.
 * *   **DeleteVpcEndpointService** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/183542.html) operation to check whether the endpoint service is deleted.
 *     *   If the endpoint service is in the **Deleting** state, the endpoint service is being deleted.
 *     *   If the endpoint service cannot be queried, the endpoint service is deleted.
 * *   You cannot repeatedly call the **DeleteVpcEndpointService** operation to delete an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request DeleteVpcEndpointServiceRequest
 * @return DeleteVpcEndpointServiceResponse
 */
DeleteVpcEndpointServiceResponse Client::deleteVpcEndpointService(const DeleteVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Queries available regions and zones.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceResourceType()) {
    query["ServiceResourceType"] = request.serviceResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions and zones.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of zones in a specified region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceResourceType()) {
    query["ServiceResourceType"] = request.serviceResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries a list of zones in a specified region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Removes a service resource from an endpoint service.
 *
 * @description *   Before you remove a service resource from an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **DetachResourceFromVpcEndpointService** operation to remove a service resource from an endpoint service within a specified period of time.
 *
 * @param request DetachResourceFromVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachResourceFromVpcEndpointServiceResponse
 */
DetachResourceFromVpcEndpointServiceResponse Client::detachResourceFromVpcEndpointServiceWithOptions(const DetachResourceFromVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachResourceFromVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachResourceFromVpcEndpointServiceResponse>();
}

/**
 * @summary Removes a service resource from an endpoint service.
 *
 * @description *   Before you remove a service resource from an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **DetachResourceFromVpcEndpointService** operation to remove a service resource from an endpoint service within a specified period of time.
 *
 * @param request DetachResourceFromVpcEndpointServiceRequest
 * @return DetachResourceFromVpcEndpointServiceResponse
 */
DetachResourceFromVpcEndpointServiceResponse Client::detachResourceFromVpcEndpointService(const DetachResourceFromVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachResourceFromVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Disassociates an endpoint from a security group.
 *
 * @description *   **DetachSecurityGroupFromVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) to check whether the endpoint is disassociated from the security group.
 *     *   If the endpoint is in the **Pending** state, the endpoint is being disassociated from the security group.
 *     *   If you cannot query the endpoint in the security group, the endpoint is disassociated from the security group.
 * *   You cannot repeatedly call the **DetachSecurityGroupFromVpcEndpoint** operation to disassociate an endpoint from a security group within a specified period of time.
 *
 * @param request DetachSecurityGroupFromVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachSecurityGroupFromVpcEndpointResponse
 */
DetachSecurityGroupFromVpcEndpointResponse Client::detachSecurityGroupFromVpcEndpointWithOptions(const DetachSecurityGroupFromVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachSecurityGroupFromVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachSecurityGroupFromVpcEndpointResponse>();
}

/**
 * @summary Disassociates an endpoint from a security group.
 *
 * @description *   **DetachSecurityGroupFromVpcEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpoints](https://help.aliyun.com/document_detail/183558.html) to check whether the endpoint is disassociated from the security group.
 *     *   If the endpoint is in the **Pending** state, the endpoint is being disassociated from the security group.
 *     *   If you cannot query the endpoint in the security group, the endpoint is disassociated from the security group.
 * *   You cannot repeatedly call the **DetachSecurityGroupFromVpcEndpoint** operation to disassociate an endpoint from a security group within a specified period of time.
 *
 * @param request DetachSecurityGroupFromVpcEndpointRequest
 * @return DetachSecurityGroupFromVpcEndpointResponse
 */
DetachSecurityGroupFromVpcEndpointResponse Client::detachSecurityGroupFromVpcEndpoint(const DetachSecurityGroupFromVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachSecurityGroupFromVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Rejects a connection request from an endpoint.
 *
 * @description *   **DisableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
 *     *   If the endpoint connection is in the **Disconnecting** state, the endpoint is being disconnected from the endpoint service.
 *     *   If the endpoint connection is in the **Disconnected** state, the endpoint is disconnected from the endpoint service.
 * *   You cannot repeatedly call the **DisableVpcEndpointConnection** operation to allow an endpoint service to reject a connection request from an endpoint within a specified period of time.
 *
 * @param request DisableVpcEndpointConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableVpcEndpointConnectionResponse
 */
DisableVpcEndpointConnectionResponse Client::disableVpcEndpointConnectionWithOptions(const DisableVpcEndpointConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableVpcEndpointConnection"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableVpcEndpointConnectionResponse>();
}

/**
 * @summary Rejects a connection request from an endpoint.
 *
 * @description *   **DisableVpcEndpointConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
 *     *   If the endpoint connection is in the **Disconnecting** state, the endpoint is being disconnected from the endpoint service.
 *     *   If the endpoint connection is in the **Disconnected** state, the endpoint is disconnected from the endpoint service.
 * *   You cannot repeatedly call the **DisableVpcEndpointConnection** operation to allow an endpoint service to reject a connection request from an endpoint within a specified period of time.
 *
 * @param request DisableVpcEndpointConnectionRequest
 * @return DisableVpcEndpointConnectionResponse
 */
DisableVpcEndpointConnectionResponse Client::disableVpcEndpointConnection(const DisableVpcEndpointConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableVpcEndpointConnectionWithOptions(request, runtime);
}

/**
 * @summary Closes connections in an endpoint zone.
 *
 * @description *   You can call this operation only when the state of the endpoint is **Connected** and the state of the zone associated with the endpoint is **Connected** or **Migrated**.
 * *   **DisableVpcEndpointZoneConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the status of the task.
 *     *   If the zone is in the **Disconnecting** state, the task is running.
 *     *   If the zone is in the **Disconnected** state, the task is successful.
 * *   You cannot repeatedly call the **DisableVpcEndpointZoneConnection** operation to allow an endpoint service to reject a connection request from the endpoint in the zone within a specified period of time.
 *
 * @param request DisableVpcEndpointZoneConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableVpcEndpointZoneConnectionResponse
 */
DisableVpcEndpointZoneConnectionResponse Client::disableVpcEndpointZoneConnectionWithOptions(const DisableVpcEndpointZoneConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplacedResource()) {
    query["ReplacedResource"] = request.replacedResource();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableVpcEndpointZoneConnection"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableVpcEndpointZoneConnectionResponse>();
}

/**
 * @summary Closes connections in an endpoint zone.
 *
 * @description *   You can call this operation only when the state of the endpoint is **Connected** and the state of the zone associated with the endpoint is **Connected** or **Migrated**.
 * *   **DisableVpcEndpointZoneConnection** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to query the status of the task.
 *     *   If the zone is in the **Disconnecting** state, the task is running.
 *     *   If the zone is in the **Disconnected** state, the task is successful.
 * *   You cannot repeatedly call the **DisableVpcEndpointZoneConnection** operation to allow an endpoint service to reject a connection request from the endpoint in the zone within a specified period of time.
 *
 * @param request DisableVpcEndpointZoneConnectionRequest
 * @return DisableVpcEndpointZoneConnectionResponse
 */
DisableVpcEndpointZoneConnectionResponse Client::disableVpcEndpointZoneConnection(const DisableVpcEndpointZoneConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableVpcEndpointZoneConnectionWithOptions(request, runtime);
}

/**
 * @summary Accepts connection requests from an endpoint.
 *
 * @description *   **EnableVpcEndpointConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
 *     *   If the state is **Connecting**, the endpoint connection is being established.
 *     *   If the state is **Connected**, the endpoint connection is established.
 * *   You cannot repeatedly call the **EnableVpcEndpointConnection** operation to allow an endpoint service of an Alibaba Cloud account to accept a connection request from an endpoint within a specified period of time.
 *
 * @param request EnableVpcEndpointConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableVpcEndpointConnectionResponse
 */
EnableVpcEndpointConnectionResponse Client::enableVpcEndpointConnectionWithOptions(const EnableVpcEndpointConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasTrafficControlMode()) {
    query["TrafficControlMode"] = request.trafficControlMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableVpcEndpointConnection"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableVpcEndpointConnectionResponse>();
}

/**
 * @summary Accepts connection requests from an endpoint.
 *
 * @description *   **EnableVpcEndpointConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointAttribute](https://help.aliyun.com/document_detail/183568.html) operation to query the state of the endpoint connection.
 *     *   If the state is **Connecting**, the endpoint connection is being established.
 *     *   If the state is **Connected**, the endpoint connection is established.
 * *   You cannot repeatedly call the **EnableVpcEndpointConnection** operation to allow an endpoint service of an Alibaba Cloud account to accept a connection request from an endpoint within a specified period of time.
 *
 * @param request EnableVpcEndpointConnectionRequest
 * @return EnableVpcEndpointConnectionResponse
 */
EnableVpcEndpointConnectionResponse Client::enableVpcEndpointConnection(const EnableVpcEndpointConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableVpcEndpointConnectionWithOptions(request, runtime);
}

/**
 * @summary Allows connections to endpoint zones.
 *
 * @description *   You can call this operation only when the state of the endpoint is **Connected** and the state of the associated zone is **Disconnected**.
 * *   **EnableVpcEndpointZoneConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the endpoint service accepts a connection request from the endpoint in the associated zone.
 *     *   If the zone is in the **Connecting** state, the endpoint service is accepting the connection request from the endpoint.
 *     *   If the zone is in the **Connected** state, the endpoint service has accepted the connection request from the endpoint.
 * *   You cannot repeatedly call the **EnableVpcEndpointZoneConnection** operation to allow an endpoint service to accept a connection request from an endpoint in the associated zone within a specified period of time.
 *
 * @param request EnableVpcEndpointZoneConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableVpcEndpointZoneConnectionResponse
 */
EnableVpcEndpointZoneConnectionResponse Client::enableVpcEndpointZoneConnectionWithOptions(const EnableVpcEndpointZoneConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableVpcEndpointZoneConnection"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableVpcEndpointZoneConnectionResponse>();
}

/**
 * @summary Allows connections to endpoint zones.
 *
 * @description *   You can call this operation only when the state of the endpoint is **Connected** and the state of the associated zone is **Disconnected**.
 * *   **EnableVpcEndpointZoneConnection** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the endpoint service accepts a connection request from the endpoint in the associated zone.
 *     *   If the zone is in the **Connecting** state, the endpoint service is accepting the connection request from the endpoint.
 *     *   If the zone is in the **Connected** state, the endpoint service has accepted the connection request from the endpoint.
 * *   You cannot repeatedly call the **EnableVpcEndpointZoneConnection** operation to allow an endpoint service to accept a connection request from an endpoint in the associated zone within a specified period of time.
 *
 * @param request EnableVpcEndpointZoneConnectionRequest
 * @return EnableVpcEndpointZoneConnectionResponse
 */
EnableVpcEndpointZoneConnectionResponse Client::enableVpcEndpointZoneConnection(const EnableVpcEndpointZoneConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableVpcEndpointZoneConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an endpoint.
 *
 * @param request GetVpcEndpointAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcEndpointAttributeResponse
 */
GetVpcEndpointAttributeResponse Client::getVpcEndpointAttributeWithOptions(const GetVpcEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVpcEndpointAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpcEndpointAttributeResponse>();
}

/**
 * @summary Queries the attributes of an endpoint.
 *
 * @param request GetVpcEndpointAttributeRequest
 * @return GetVpcEndpointAttributeResponse
 */
GetVpcEndpointAttributeResponse Client::getVpcEndpointAttribute(const GetVpcEndpointAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcEndpointAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an endpoint service.
 *
 * @param request GetVpcEndpointServiceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVpcEndpointServiceAttributeResponse
 */
GetVpcEndpointServiceAttributeResponse Client::getVpcEndpointServiceAttributeWithOptions(const GetVpcEndpointServiceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVpcEndpointServiceAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVpcEndpointServiceAttributeResponse>();
}

/**
 * @summary Queries the attributes of an endpoint service.
 *
 * @param request GetVpcEndpointServiceAttributeRequest
 * @return GetVpcEndpointServiceAttributeResponse
 */
GetVpcEndpointServiceAttributeResponse Client::getVpcEndpointServiceAttribute(const GetVpcEndpointServiceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVpcEndpointServiceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources.
 *
 * @description *   You must specify **ResourceId.N** or **Tag.N** in the request to specify the object that you want to query.
 * *   **Tag.N** is a resource tag that consists of a key-value pair (Tag.N.Key and Tag.N.Value). If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
 * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2020-04-15"},
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
 * @summary Queries the tags that are added to resources.
 *
 * @description *   You must specify **ResourceId.N** or **Tag.N** in the request to specify the object that you want to query.
 * *   **Tag.N** is a resource tag that consists of a key-value pair (Tag.N.Key and Tag.N.Value). If you specify only **Tag.N.Key**, all tag values that are associated with the specified key are returned. If you specify only **Tag.N.Value**, an error message is returned.
 * *   If you specify **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries endpoint connections.
 *
 * @param request ListVpcEndpointConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointConnectionsResponse
 */
ListVpcEndpointConnectionsResponse Client::listVpcEndpointConnectionsWithOptions(const ListVpcEndpointConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStatus()) {
    query["ConnectionStatus"] = request.connectionStatus();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasEndpointOwnerId()) {
    query["EndpointOwnerId"] = request.endpointOwnerId();
  }

  if (!!request.hasEniId()) {
    query["EniId"] = request.eniId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplacedResourceId()) {
    query["ReplacedResourceId"] = request.replacedResourceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointConnections"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointConnectionsResponse>();
}

/**
 * @summary Queries endpoint connections.
 *
 * @param request ListVpcEndpointConnectionsRequest
 * @return ListVpcEndpointConnectionsResponse
 */
ListVpcEndpointConnectionsResponse Client::listVpcEndpointConnections(const ListVpcEndpointConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointConnectionsWithOptions(request, runtime);
}

/**
 * @summary Queries the security groups that are associated with an endpoint.
 *
 * @param request ListVpcEndpointSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointSecurityGroupsResponse
 */
ListVpcEndpointSecurityGroupsResponse Client::listVpcEndpointSecurityGroupsWithOptions(const ListVpcEndpointSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointSecurityGroups"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointSecurityGroupsResponse>();
}

/**
 * @summary Queries the security groups that are associated with an endpoint.
 *
 * @param request ListVpcEndpointSecurityGroupsRequest
 * @return ListVpcEndpointSecurityGroupsResponse
 */
ListVpcEndpointSecurityGroupsResponse Client::listVpcEndpointSecurityGroups(const ListVpcEndpointSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the service resources that are added to an endpoint service.
 *
 * @param request ListVpcEndpointServiceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointServiceResourcesResponse
 */
ListVpcEndpointServiceResourcesResponse Client::listVpcEndpointServiceResourcesWithOptions(const ListVpcEndpointServiceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointServiceResources"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointServiceResourcesResponse>();
}

/**
 * @summary Queries the service resources that are added to an endpoint service.
 *
 * @param request ListVpcEndpointServiceResourcesRequest
 * @return ListVpcEndpointServiceResourcesResponse
 */
ListVpcEndpointServiceResourcesResponse Client::listVpcEndpointServiceResources(const ListVpcEndpointServiceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointServiceResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist of an endpoint service.
 *
 * @param request ListVpcEndpointServiceUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointServiceUsersResponse
 */
ListVpcEndpointServiceUsersResponse Client::listVpcEndpointServiceUsersWithOptions(const ListVpcEndpointServiceUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserListType()) {
    query["UserListType"] = request.userListType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointServiceUsers"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointServiceUsersResponse>();
}

/**
 * @summary Queries the whitelist of an endpoint service.
 *
 * @param request ListVpcEndpointServiceUsersRequest
 * @return ListVpcEndpointServiceUsersResponse
 */
ListVpcEndpointServiceUsersResponse Client::listVpcEndpointServiceUsers(const ListVpcEndpointServiceUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointServiceUsersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of endpoint services.
 *
 * @param request ListVpcEndpointServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointServicesResponse
 */
ListVpcEndpointServicesResponse Client::listVpcEndpointServicesWithOptions(const ListVpcEndpointServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasAutoAcceptEnabled()) {
    query["AutoAcceptEnabled"] = request.autoAcceptEnabled();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasServiceBusinessStatus()) {
    query["ServiceBusinessStatus"] = request.serviceBusinessStatus();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceResourceType()) {
    query["ServiceResourceType"] = request.serviceResourceType();
  }

  if (!!request.hasServiceStatus()) {
    query["ServiceStatus"] = request.serviceStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasZoneAffinityEnabled()) {
    query["ZoneAffinityEnabled"] = request.zoneAffinityEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointServices"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointServicesResponse>();
}

/**
 * @summary Queries a list of endpoint services.
 *
 * @param request ListVpcEndpointServicesRequest
 * @return ListVpcEndpointServicesResponse
 */
ListVpcEndpointServicesResponse Client::listVpcEndpointServices(const ListVpcEndpointServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointServicesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of endpoint services that can be associated with the endpoint created within the current account.
 *
 * @param request ListVpcEndpointServicesByEndUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointServicesByEndUserResponse
 */
ListVpcEndpointServicesByEndUserResponse Client::listVpcEndpointServicesByEndUserWithOptions(const ListVpcEndpointServicesByEndUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointServicesByEndUser"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointServicesByEndUserResponse>();
}

/**
 * @summary Queries a list of endpoint services that can be associated with the endpoint created within the current account.
 *
 * @param request ListVpcEndpointServicesByEndUserRequest
 * @return ListVpcEndpointServicesByEndUserResponse
 */
ListVpcEndpointServicesByEndUserResponse Client::listVpcEndpointServicesByEndUser(const ListVpcEndpointServicesByEndUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointServicesByEndUserWithOptions(request, runtime);
}

/**
 * @summary Queries the zones of an endpoint.
 *
 * @param request ListVpcEndpointZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointZonesResponse
 */
ListVpcEndpointZonesResponse Client::listVpcEndpointZonesWithOptions(const ListVpcEndpointZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpointZones"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointZonesResponse>();
}

/**
 * @summary Queries the zones of an endpoint.
 *
 * @param request ListVpcEndpointZonesRequest
 * @return ListVpcEndpointZonesResponse
 */
ListVpcEndpointZonesResponse Client::listVpcEndpointZones(const ListVpcEndpointZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointZonesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of endpoints.
 *
 * @param request ListVpcEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointsResponse
 */
ListVpcEndpointsResponse Client::listVpcEndpointsWithOptions(const ListVpcEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasConnectionStatus()) {
    query["ConnectionStatus"] = request.connectionStatus();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.endpointName();
  }

  if (!!request.hasEndpointStatus()) {
    query["EndpointStatus"] = request.endpointStatus();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpoints"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointsResponse>();
}

/**
 * @summary Queries a list of endpoints.
 *
 * @param request ListVpcEndpointsRequest
 * @return ListVpcEndpointsResponse
 */
ListVpcEndpointsResponse Client::listVpcEndpoints(const ListVpcEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcEndpointsWithOptions(request, runtime);
}

/**
 * @summary Activates PrivateLink.
 *
 * @param request OpenPrivateLinkServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenPrivateLinkServiceResponse
 */
OpenPrivateLinkServiceResponse Client::openPrivateLinkServiceWithOptions(const OpenPrivateLinkServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenPrivateLinkService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenPrivateLinkServiceResponse>();
}

/**
 * @summary Activates PrivateLink.
 *
 * @param request OpenPrivateLinkServiceRequest
 * @return OpenPrivateLinkServiceResponse
 */
OpenPrivateLinkServiceResponse Client::openPrivateLinkService(const OpenPrivateLinkServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openPrivateLinkServiceWithOptions(request, runtime);
}

/**
 * @summary Removes an account ID from the whitelist of an endpoint service.
 *
 * @description *   Before you remove an account ID from the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **RemoveUserFromVpcEndpointService** operation to remove the ID of an Alibaba Cloud account from the whitelist of an endpoint service within a specified period of time.
 *
 * @param request RemoveUserFromVpcEndpointServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromVpcEndpointServiceResponse
 */
RemoveUserFromVpcEndpointServiceResponse Client::removeUserFromVpcEndpointServiceWithOptions(const RemoveUserFromVpcEndpointServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasUserARN()) {
    query["UserARN"] = request.userARN();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromVpcEndpointService"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromVpcEndpointServiceResponse>();
}

/**
 * @summary Removes an account ID from the whitelist of an endpoint service.
 *
 * @description *   Before you remove an account ID from the whitelist of an endpoint service, make sure that the endpoint service is in the **Active** state. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to query the status of the endpoint service.
 * *   You cannot repeatedly call the **RemoveUserFromVpcEndpointService** operation to remove the ID of an Alibaba Cloud account from the whitelist of an endpoint service within a specified period of time.
 *
 * @param request RemoveUserFromVpcEndpointServiceRequest
 * @return RemoveUserFromVpcEndpointServiceResponse
 */
RemoveUserFromVpcEndpointServiceResponse Client::removeUserFromVpcEndpointService(const RemoveUserFromVpcEndpointServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromVpcEndpointServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a zone of an endpoint.
 *
 * @description *   **RemoveZoneFromVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the zone of the endpoint is deleted.
 *     *   If the zone of the endpoint is in the **Deleting** state, the zone is being deleted.
 *     *   If the zone cannot be queried, the zone is deleted.
 * *   You cannot repeatedly call the **RemoveZoneFromVpcEndpoint** operation to delete a zone of an endpoint within a specified period of time.
 *
 * @param request RemoveZoneFromVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveZoneFromVpcEndpointResponse
 */
RemoveZoneFromVpcEndpointResponse Client::removeZoneFromVpcEndpointWithOptions(const RemoveZoneFromVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveZoneFromVpcEndpoint"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveZoneFromVpcEndpointResponse>();
}

/**
 * @summary Deletes a zone of an endpoint.
 *
 * @description *   **RemoveZoneFromVpcEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListVpcEndpointZones](https://help.aliyun.com/document_detail/183560.html) operation to check whether the zone of the endpoint is deleted.
 *     *   If the zone of the endpoint is in the **Deleting** state, the zone is being deleted.
 *     *   If the zone cannot be queried, the zone is deleted.
 * *   You cannot repeatedly call the **RemoveZoneFromVpcEndpoint** operation to delete a zone of an endpoint within a specified period of time.
 *
 * @param request RemoveZoneFromVpcEndpointRequest
 * @return RemoveZoneFromVpcEndpointResponse
 */
RemoveZoneFromVpcEndpointResponse Client::removeZoneFromVpcEndpoint(const RemoveZoneFromVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeZoneFromVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Adds tags to resources. You can call this API operation to add tags to one or more endpoints or endpoint services.
 *
 * @description > You can add up to 20 tags to an instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.tag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-04-15"},
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
 * @summary Adds tags to resources. You can call this API operation to add tags to one or more endpoints or endpoint services.
 *
 * @description > You can add up to 20 tags to an instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from one or more endpoints or endpoint services at a time.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.all();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    bodyFlat["TagKey"] = request.tagKey();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-04-15"},
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
 * @summary Removes tags from one or more endpoints or endpoint services at a time.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an endpoint.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointAttribute** operation to modify the attributes of an endpoint that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpcEndpointAttributeResponse
 */
UpdateVpcEndpointAttributeResponse Client::updateVpcEndpointAttributeWithOptions(const UpdateVpcEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointDescription()) {
    query["EndpointDescription"] = request.endpointDescription();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.endpointName();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.policyDocument();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResetPolicy()) {
    query["ResetPolicy"] = request.resetPolicy();
  }

  if (!!request.hasZoneAffinityEnabled()) {
    query["ZoneAffinityEnabled"] = request.zoneAffinityEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVpcEndpointAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpcEndpointAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an endpoint.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointAttribute** operation to modify the attributes of an endpoint that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointAttributeRequest
 * @return UpdateVpcEndpointAttributeResponse
 */
UpdateVpcEndpointAttributeResponse Client::updateVpcEndpointAttribute(const UpdateVpcEndpointAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpcEndpointAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an endpoint connection.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointConnectionAttribute** operation to modify the bandwidth of an endpoint connection that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointConnectionAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpcEndpointConnectionAttributeResponse
 */
UpdateVpcEndpointConnectionAttributeResponse Client::updateVpcEndpointConnectionAttributeWithOptions(const UpdateVpcEndpointConnectionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasTrafficControlMode()) {
    query["TrafficControlMode"] = request.trafficControlMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVpcEndpointConnectionAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpcEndpointConnectionAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an endpoint connection.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointConnectionAttribute** operation to modify the bandwidth of an endpoint connection that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointConnectionAttributeRequest
 * @return UpdateVpcEndpointConnectionAttributeResponse
 */
UpdateVpcEndpointConnectionAttributeResponse Client::updateVpcEndpointConnectionAttribute(const UpdateVpcEndpointConnectionAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpcEndpointConnectionAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an endpoint service.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointServiceAttribute** operation to modify the attributes of an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointServiceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpcEndpointServiceAttributeResponse
 */
UpdateVpcEndpointServiceAttributeResponse Client::updateVpcEndpointServiceAttributeWithOptions(const UpdateVpcEndpointServiceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasAutoAcceptEnabled()) {
    query["AutoAcceptEnabled"] = request.autoAcceptEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectBandwidth()) {
    query["ConnectBandwidth"] = request.connectBandwidth();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceSupportIPv6()) {
    query["ServiceSupportIPv6"] = request.serviceSupportIPv6();
  }

  if (!!request.hasZoneAffinityEnabled()) {
    query["ZoneAffinityEnabled"] = request.zoneAffinityEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVpcEndpointServiceAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpcEndpointServiceAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an endpoint service.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointServiceAttribute** operation to modify the attributes of an endpoint service that belongs to an Alibaba Cloud account within a specified period of time.
 *
 * @param request UpdateVpcEndpointServiceAttributeRequest
 * @return UpdateVpcEndpointServiceAttributeResponse
 */
UpdateVpcEndpointServiceAttributeResponse Client::updateVpcEndpointServiceAttribute(const UpdateVpcEndpointServiceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpcEndpointServiceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a service resource that is added to an endpoint service.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointServiceResourceAttribute** operation to modify the attributes of a service resource that is added to an endpoint service within a specified period of time.
 *
 * @param request UpdateVpcEndpointServiceResourceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpcEndpointServiceResourceAttributeResponse
 */
UpdateVpcEndpointServiceResourceAttributeResponse Client::updateVpcEndpointServiceResourceAttributeWithOptions(const UpdateVpcEndpointServiceResourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAllocatedEnabled()) {
    query["AutoAllocatedEnabled"] = request.autoAllocatedEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVpcEndpointServiceResourceAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpcEndpointServiceResourceAttributeResponse>();
}

/**
 * @summary Modifies the attributes of a service resource that is added to an endpoint service.
 *
 * @description You cannot repeatedly call the **UpdateVpcEndpointServiceResourceAttribute** operation to modify the attributes of a service resource that is added to an endpoint service within a specified period of time.
 *
 * @param request UpdateVpcEndpointServiceResourceAttributeRequest
 * @return UpdateVpcEndpointServiceResourceAttributeResponse
 */
UpdateVpcEndpointServiceResourceAttributeResponse Client::updateVpcEndpointServiceResourceAttribute(const UpdateVpcEndpointServiceResourceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpcEndpointServiceResourceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies a service resource of a zone to which an endpoint connection belongs.
 *
 * @description ### Prerequisites
 * By default, the feature of modifying a service resource of a zone to which an endpoint connection belongs is unavailable. To use this feature, log on to the [Quota Center console](https://quotas.console.aliyun.com/white-list-products/privatelink/quotas). Click Whitelist Quotas in the left-side navigation pane and click PrivateLink in the Networking section. On the page that appears, search for `privatelink_whitelist/svc_res_mgt_uat` and click Apply in the Actions column.
 * ### Usage notes
 * *   If the endpoint connection is in the **Disconnected** state, you can manually allocate the service resource in the zone.
 * *   If the endpoint connection is in the **Connected** state, you can manually migrate the service resource in the zone. In this case, the connection might be interrupted.
 * *   **UpdateVpcEndpointZoneConnectionResourceAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check whether the service resource is modified.
 *     *   If the endpoint service is in the **Pending** state, the service resource is being modified.
 *     *   If the endpoint service is in the **Active** state, the service resource is modified.
 * *   You cannot repeatedly call the **UpdateVpcEndpointZoneConnectionResourceAttribute** operation to modify a service resource in the zone to which an endpoint connection belongs within a specified period of time.
 *
 * @param request UpdateVpcEndpointZoneConnectionResourceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVpcEndpointZoneConnectionResourceAttributeResponse
 */
UpdateVpcEndpointZoneConnectionResourceAttributeResponse Client::updateVpcEndpointZoneConnectionResourceAttributeWithOptions(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.endpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceAllocateMode()) {
    query["ResourceAllocateMode"] = request.resourceAllocateMode();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceReplaceMode()) {
    query["ResourceReplaceMode"] = request.resourceReplaceMode();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVpcEndpointZoneConnectionResourceAttribute"},
    {"version" , "2020-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVpcEndpointZoneConnectionResourceAttributeResponse>();
}

/**
 * @summary Modifies a service resource of a zone to which an endpoint connection belongs.
 *
 * @description ### Prerequisites
 * By default, the feature of modifying a service resource of a zone to which an endpoint connection belongs is unavailable. To use this feature, log on to the [Quota Center console](https://quotas.console.aliyun.com/white-list-products/privatelink/quotas). Click Whitelist Quotas in the left-side navigation pane and click PrivateLink in the Networking section. On the page that appears, search for `privatelink_whitelist/svc_res_mgt_uat` and click Apply in the Actions column.
 * ### Usage notes
 * *   If the endpoint connection is in the **Disconnected** state, you can manually allocate the service resource in the zone.
 * *   If the endpoint connection is in the **Connected** state, you can manually migrate the service resource in the zone. In this case, the connection might be interrupted.
 * *   **UpdateVpcEndpointZoneConnectionResourceAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetVpcEndpointServiceAttribute](https://help.aliyun.com/document_detail/469330.html) operation to check whether the service resource is modified.
 *     *   If the endpoint service is in the **Pending** state, the service resource is being modified.
 *     *   If the endpoint service is in the **Active** state, the service resource is modified.
 * *   You cannot repeatedly call the **UpdateVpcEndpointZoneConnectionResourceAttribute** operation to modify a service resource in the zone to which an endpoint connection belongs within a specified period of time.
 *
 * @param request UpdateVpcEndpointZoneConnectionResourceAttributeRequest
 * @return UpdateVpcEndpointZoneConnectionResourceAttributeResponse
 */
UpdateVpcEndpointZoneConnectionResourceAttributeResponse Client::updateVpcEndpointZoneConnectionResourceAttribute(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVpcEndpointZoneConnectionResourceAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Privatelink20200415