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
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceGroup/change")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
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
 * @summary 创建实例
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasAutoBackup()) {
    body["autoBackup"] = request.autoBackup();
  }

  if (!!request.hasComponents()) {
    body["components"] = request.components();
  }

  if (!!request.hasConfiguration()) {
    body["configuration"] = request.configuration();
  }

  if (!!request.hasDbAdminPassword()) {
    body["dbAdminPassword"] = request.dbAdminPassword();
  }

  if (!!request.hasDbVersion()) {
    body["dbVersion"] = request.dbVersion();
  }

  if (!!request.hasEncrypted()) {
    body["encrypted"] = request.encrypted();
  }

  if (!!request.hasHa()) {
    body["ha"] = request.ha();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  if (!!request.hasKmsKeyId()) {
    body["kmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasMultiZoneMode()) {
    body["multiZoneMode"] = request.multiZoneMode();
  }

  if (!!request.hasPaymentDuration()) {
    body["paymentDuration"] = request.paymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    body["paymentDurationUnit"] = request.paymentDurationUnit();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasVSwitchIds()) {
    body["vSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    body["zoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/instance/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/instance/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(request, headers, runtime);
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
 * @summary 获取实例详情
 *
 * @param request GetInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/instance/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(request, headers, runtime);
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
 * @summary 根据集群ID或者名称搜索集群
 *
 * @param tmpReq ListInstancesV2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesV2Response
 */
ListInstancesV2Response Client::listInstancesV2WithOptions(const ListInstancesV2Request &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesV2ShrinkRequest request = ListInstancesV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["instanceName"] = request.instanceName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancesV2"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/instance/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesV2Response>();
}

/**
 * @summary 根据集群ID或者名称搜索集群
 *
 * @param request ListInstancesV2Request
 * @return ListInstancesV2Response
 */
ListInstancesV2Response Client::listInstancesV2(const ListInstancesV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesV2WithOptions(request, headers, runtime);
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
 * @summary 打标
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 打标
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 删除标签
 *
 * @param tmpReq UnTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnTagResourcesShrinkRequest request = UnTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.tagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary 删除标签
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unTagResourcesWithOptions(request, headers, runtime);
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
 * @summary 更新实例
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasAutoBackup()) {
    body["autoBackup"] = request.autoBackup();
  }

  if (!!request.hasComponents()) {
    body["components"] = request.components();
  }

  if (!!request.hasConfiguration()) {
    body["configuration"] = request.configuration();
  }

  if (!!request.hasHa()) {
    body["ha"] = request.ha();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2023-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/instance/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceWithOptions(request, headers, runtime);
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