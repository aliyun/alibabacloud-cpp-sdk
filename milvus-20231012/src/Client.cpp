#include <darabonba/Core.hpp>
#include <alibabacloud/Milvus20231012.hpp>
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
using namespace AlibabaCloud::Milvus20231012::Models;
namespace AlibabaCloud
{
namespace Milvus20231012
{

AlibabaCloud::Milvus20231012::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("milvus", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Create a service role for Milvus to access other cloud products
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDefaultRoleResponse
 */
CreateDefaultRoleResponse Client::createDefaultRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDefaultRole"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/user/create_default_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDefaultRoleResponse>();
}

/**
 * @summary Create a service role for Milvus to access other cloud products
 *
 * @return CreateDefaultRoleResponse
 */
CreateDefaultRoleResponse Client::createDefaultRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDefaultRoleWithOptions(headers, runtime);
}

/**
 * @summary Get the public IP address whitelist of a Milvus instance.
 *
 * @param request DescribeAccessControlListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessControlListResponse
 */
DescribeAccessControlListResponse Client::describeAccessControlListWithOptions(const DescribeAccessControlListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessControlList"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/milvus/describe_access_control_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessControlListResponse>();
}

/**
 * @summary Get the public IP address whitelist of a Milvus instance.
 *
 * @param request DescribeAccessControlListRequest
 * @return DescribeAccessControlListResponse
 */
DescribeAccessControlListResponse Client::describeAccessControlList(const DescribeAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAccessControlListWithOptions(request, headers, runtime);
}

/**
 * @summary Get information about the custom configuration of each component of Milvus.
 *
 * @param request DescribeInstanceConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceConfigsResponse
 */
DescribeInstanceConfigsResponse Client::describeInstanceConfigsWithOptions(const DescribeInstanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceConfigs"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/describe_milvus_user_config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceConfigsResponse>();
}

/**
 * @summary Get information about the custom configuration of each component of Milvus.
 *
 * @param request DescribeInstanceConfigsRequest
 * @return DescribeInstanceConfigsResponse
 */
DescribeInstanceConfigsResponse Client::describeInstanceConfigs(const DescribeInstanceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Get the details of an instance.
 *
 * @param request GetInstanceDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceDetailResponse
 */
GetInstanceDetailResponse Client::getInstanceDetailWithOptions(const GetInstanceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceDetail"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceDetailResponse>();
}

/**
 * @summary Get the details of an instance.
 *
 * @param request GetInstanceDetailRequest
 * @return GetInstanceDetailResponse
 */
GetInstanceDetailResponse Client::getInstanceDetail(const GetInstanceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Get the list of Milvus instances under the current account.
 *
 * @param tmpReq ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/order/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Get the list of Milvus instances under the current account.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Update the configuration parameters of each component of Milvus.
 *
 * @param request ModifyInstanceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  if (!!request.hasUserConfig()) {
    query["UserConfig"] = request.userConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceConfig"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/modify_milvus_config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceConfigResponse>();
}

/**
 * @summary Update the configuration parameters of each component of Milvus.
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyInstanceConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Configure Public IP Address Whitelist
 *
 * @param request UpdateAccessControlListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccessControlListResponse
 */
UpdateAccessControlListResponse Client::updateAccessControlListWithOptions(const UpdateAccessControlListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccessControlList"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/milvus/update_access_control_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccessControlListResponse>();
}

/**
 * @summary Configure Public IP Address Whitelist
 *
 * @param request UpdateAccessControlListRequest
 * @return UpdateAccessControlListResponse
 */
UpdateAccessControlListResponse Client::updateAccessControlList(const UpdateAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAccessControlListWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the name of an instance.
 *
 * @param request UpdateInstanceNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceNameWithOptions(const UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceName"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/update_name")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNameResponse>();
}

/**
 * @summary Modifies the name of an instance.
 *
 * @param request UpdateInstanceNameRequest
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceName(const UpdateInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceNameWithOptions(request, headers, runtime);
}

/**
 * @summary Enable or disable Internet access for Milvus.
 *
 * @param request UpdatePublicNetworkStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePublicNetworkStatusResponse
 */
UpdatePublicNetworkStatusResponse Client::updatePublicNetworkStatusWithOptions(const UpdatePublicNetworkStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidr()) {
    query["Cidr"] = request.cidr();
  }

  if (!!request.hasComponentType()) {
    query["ComponentType"] = request.componentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPublicNetworkEnabled()) {
    query["PublicNetworkEnabled"] = request.publicNetworkEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePublicNetworkStatus"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/network/updatePublicNetworkStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicNetworkStatusResponse>();
}

/**
 * @summary Enable or disable Internet access for Milvus.
 *
 * @param request UpdatePublicNetworkStatusRequest
 * @return UpdatePublicNetworkStatusResponse
 */
UpdatePublicNetworkStatusResponse Client::updatePublicNetworkStatus(const UpdatePublicNetworkStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePublicNetworkStatusWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Milvus20231012