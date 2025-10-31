#include <darabonba/Core.hpp>
#include <alibabacloud/Eipanycast20200309.hpp>
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
using namespace AlibabaCloud::Eipanycast20200309::Models;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{

AlibabaCloud::Eipanycast20200309::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("eipanycast", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an Anycast elastic IP address (Anycast EIP).
 *
 * @param request AllocateAnycastEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateAnycastEipAddressResponse
 */
AllocateAnycastEipAddressResponse Client::allocateAnycastEipAddressWithOptions(const AllocateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceLocation()) {
    query["ServiceLocation"] = request.serviceLocation();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateAnycastEipAddress"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateAnycastEipAddressResponse>();
}

/**
 * @summary Creates an Anycast elastic IP address (Anycast EIP).
 *
 * @param request AllocateAnycastEipAddressRequest
 * @return AllocateAnycastEipAddressResponse
 */
AllocateAnycastEipAddressResponse Client::allocateAnycastEipAddress(const AllocateAnycastEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateAnycastEipAddressWithOptions(request, runtime);
}

/**
 * @summary Associates an Anycast elastic IP address (Anycast EIP) with an endpoint.
 *
 * @param request AssociateAnycastEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAnycastEipAddressResponse
 */
AssociateAnycastEipAddressResponse Client::associateAnycastEipAddressWithOptions(const AssociateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasAssociationMode()) {
    query["AssociationMode"] = request.associationMode();
  }

  if (!!request.hasBindInstanceId()) {
    query["BindInstanceId"] = request.bindInstanceId();
  }

  if (!!request.hasBindInstanceRegionId()) {
    query["BindInstanceRegionId"] = request.bindInstanceRegionId();
  }

  if (!!request.hasBindInstanceType()) {
    query["BindInstanceType"] = request.bindInstanceType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasPopLocations()) {
    query["PopLocations"] = request.popLocations();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.privateIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateAnycastEipAddress"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateAnycastEipAddressResponse>();
}

/**
 * @summary Associates an Anycast elastic IP address (Anycast EIP) with an endpoint.
 *
 * @param request AssociateAnycastEipAddressRequest
 * @return AssociateAnycastEipAddressResponse
 */
AssociateAnycastEipAddressResponse Client::associateAnycastEipAddress(const AssociateAnycastEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAnycastEipAddressWithOptions(request, runtime);
}

/**
 * @summary 修改AnycastEIp实例资源组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
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
    {"version" , "2020-03-09"},
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
 * @summary 修改AnycastEIp实例资源组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries Anycast elastic IP addresses (Anycast EIPs) associated with specified instance IP addresses or instance IDs, including instance status, maximum bandwidth, and associated resources.
 *
 * @param request DescribeAnycastEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnycastEipAddressResponse
 */
DescribeAnycastEipAddressResponse Client::describeAnycastEipAddressWithOptions(const DescribeAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasBindInstanceId()) {
    query["BindInstanceId"] = request.bindInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnycastEipAddress"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnycastEipAddressResponse>();
}

/**
 * @summary Queries Anycast elastic IP addresses (Anycast EIPs) associated with specified instance IP addresses or instance IDs, including instance status, maximum bandwidth, and associated resources.
 *
 * @param request DescribeAnycastEipAddressRequest
 * @return DescribeAnycastEipAddressResponse
 */
DescribeAnycastEipAddressResponse Client::describeAnycastEipAddress(const DescribeAnycastEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnycastEipAddressWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the access points in an area.
 *
 * @param request DescribeAnycastPopLocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnycastPopLocationsResponse
 */
DescribeAnycastPopLocationsResponse Client::describeAnycastPopLocationsWithOptions(const DescribeAnycastPopLocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceLocation()) {
    query["ServiceLocation"] = request.serviceLocation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnycastPopLocations"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnycastPopLocationsResponse>();
}

/**
 * @summary Queries the information about the access points in an area.
 *
 * @param request DescribeAnycastPopLocationsRequest
 * @return DescribeAnycastPopLocationsResponse
 */
DescribeAnycastPopLocationsResponse Client::describeAnycastPopLocations(const DescribeAnycastPopLocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnycastPopLocationsWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where you can associate Anycast elastic IP addresses (Anycast EIPs) with endpoints.
 *
 * @param request DescribeAnycastServerRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnycastServerRegionsResponse
 */
DescribeAnycastServerRegionsResponse Client::describeAnycastServerRegionsWithOptions(const DescribeAnycastServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceLocation()) {
    query["ServiceLocation"] = request.serviceLocation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnycastServerRegions"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnycastServerRegionsResponse>();
}

/**
 * @summary Queries the regions where you can associate Anycast elastic IP addresses (Anycast EIPs) with endpoints.
 *
 * @param request DescribeAnycastServerRegionsRequest
 * @return DescribeAnycastServerRegionsResponse
 */
DescribeAnycastServerRegionsResponse Client::describeAnycastServerRegions(const DescribeAnycastServerRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnycastServerRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries information about Anycast elastic IP addresses (Anycast EIPs) in an access area, including instance status, maximum bandwidth, and associated resources.
 *
 * @param request ListAnycastEipAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnycastEipAddressesResponse
 */
ListAnycastEipAddressesResponse Client::listAnycastEipAddressesWithOptions(const ListAnycastEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastEipAddress()) {
    query["AnycastEipAddress"] = request.anycastEipAddress();
  }

  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasAnycastIds()) {
    query["AnycastIds"] = request.anycastIds();
  }

  if (!!request.hasBindInstanceIds()) {
    query["BindInstanceIds"] = request.bindInstanceIds();
  }

  if (!!request.hasBusinessStatus()) {
    query["BusinessStatus"] = request.businessStatus();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceLocation()) {
    query["ServiceLocation"] = request.serviceLocation();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnycastEipAddresses"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnycastEipAddressesResponse>();
}

/**
 * @summary Queries information about Anycast elastic IP addresses (Anycast EIPs) in an access area, including instance status, maximum bandwidth, and associated resources.
 *
 * @param request ListAnycastEipAddressesRequest
 * @return ListAnycastEipAddressesResponse
 */
ListAnycastEipAddressesResponse Client::listAnycastEipAddresses(const ListAnycastEipAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnycastEipAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
    {"version" , "2020-03-09"},
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
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ModifyAnycastEipAddressAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAnycastEipAddressAttributeResponse
 */
ModifyAnycastEipAddressAttributeResponse Client::modifyAnycastEipAddressAttributeWithOptions(const ModifyAnycastEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAnycastEipAddressAttribute"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAnycastEipAddressAttributeResponse>();
}

/**
 * @summary Modifies the name and description of an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ModifyAnycastEipAddressAttributeRequest
 * @return ModifyAnycastEipAddressAttributeResponse
 */
ModifyAnycastEipAddressAttributeResponse Client::modifyAnycastEipAddressAttribute(const ModifyAnycastEipAddressAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAnycastEipAddressAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the maximum bandwidth of an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ModifyAnycastEipAddressSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAnycastEipAddressSpecResponse
 */
ModifyAnycastEipAddressSpecResponse Client::modifyAnycastEipAddressSpecWithOptions(const ModifyAnycastEipAddressSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAnycastEipAddressSpec"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAnycastEipAddressSpecResponse>();
}

/**
 * @summary Modifies the maximum bandwidth of an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ModifyAnycastEipAddressSpecRequest
 * @return ModifyAnycastEipAddressSpecResponse
 */
ModifyAnycastEipAddressSpecResponse Client::modifyAnycastEipAddressSpec(const ModifyAnycastEipAddressSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAnycastEipAddressSpecWithOptions(request, runtime);
}

/**
 * @summary Releases an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ReleaseAnycastEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseAnycastEipAddressResponse
 */
ReleaseAnycastEipAddressResponse Client::releaseAnycastEipAddressWithOptions(const ReleaseAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseAnycastEipAddress"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseAnycastEipAddressResponse>();
}

/**
 * @summary Releases an Anycast elastic IP address (Anycast EIP).
 *
 * @param request ReleaseAnycastEipAddressRequest
 * @return ReleaseAnycastEipAddressResponse
 */
ReleaseAnycastEipAddressResponse Client::releaseAnycastEipAddress(const ReleaseAnycastEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseAnycastEipAddressWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "TagResources"},
    {"version" , "2020-03-09"},
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
 * @summary Creates and adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Disassociates an Anycast elastic IP address (Anycast EIP) from an endpoint.
 *
 * @param request UnassociateAnycastEipAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateAnycastEipAddressResponse
 */
UnassociateAnycastEipAddressResponse Client::unassociateAnycastEipAddressWithOptions(const UnassociateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasBindInstanceId()) {
    query["BindInstanceId"] = request.bindInstanceId();
  }

  if (!!request.hasBindInstanceRegionId()) {
    query["BindInstanceRegionId"] = request.bindInstanceRegionId();
  }

  if (!!request.hasBindInstanceType()) {
    query["BindInstanceType"] = request.bindInstanceType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.privateIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnassociateAnycastEipAddress"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassociateAnycastEipAddressResponse>();
}

/**
 * @summary Disassociates an Anycast elastic IP address (Anycast EIP) from an endpoint.
 *
 * @param request UnassociateAnycastEipAddressRequest
 * @return UnassociateAnycastEipAddressResponse
 */
UnassociateAnycastEipAddressResponse Client::unassociateAnycastEipAddress(const UnassociateAnycastEipAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateAnycastEipAddressWithOptions(request, runtime);
}

/**
 * @summary Removes tags from Anycast EIPs.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2020-03-09"},
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
 * @summary Removes tags from Anycast EIPs.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary If an Anycast EIP is associated with endpoints in different regions, you can change the access points that are mapped to an endpoint. You can call UpdateAnycastEipAddressAssociations to add or delete endpoints to modify the mappings between endpoints and access points.
 *
 * @param request UpdateAnycastEipAddressAssociationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAnycastEipAddressAssociationsResponse
 */
UpdateAnycastEipAddressAssociationsResponse Client::updateAnycastEipAddressAssociationsWithOptions(const UpdateAnycastEipAddressAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnycastId()) {
    query["AnycastId"] = request.anycastId();
  }

  if (!!request.hasAssociationMode()) {
    query["AssociationMode"] = request.associationMode();
  }

  if (!!request.hasBindInstanceId()) {
    query["BindInstanceId"] = request.bindInstanceId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasPopLocationAddList()) {
    query["PopLocationAddList"] = request.popLocationAddList();
  }

  if (!!request.hasPopLocationDeleteList()) {
    query["PopLocationDeleteList"] = request.popLocationDeleteList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAnycastEipAddressAssociations"},
    {"version" , "2020-03-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAnycastEipAddressAssociationsResponse>();
}

/**
 * @summary If an Anycast EIP is associated with endpoints in different regions, you can change the access points that are mapped to an endpoint. You can call UpdateAnycastEipAddressAssociations to add or delete endpoints to modify the mappings between endpoints and access points.
 *
 * @param request UpdateAnycastEipAddressAssociationsRequest
 * @return UpdateAnycastEipAddressAssociationsResponse
 */
UpdateAnycastEipAddressAssociationsResponse Client::updateAnycastEipAddressAssociations(const UpdateAnycastEipAddressAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAnycastEipAddressAssociationsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eipanycast20200309