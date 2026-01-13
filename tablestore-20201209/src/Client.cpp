#include <darabonba/Core.hpp>
#include <alibabacloud/Tablestore20201209.hpp>
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
using namespace AlibabaCloud::Tablestore20201209::Models;
namespace AlibabaCloud
{
namespace Tablestore20201209
{

AlibabaCloud::Tablestore20201209::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("tablestore", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 绑定vpc
 *
 * @param request BindInstance2VpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindInstance2VpcResponse
 */
BindInstance2VpcResponse Client::bindInstance2VpcWithOptions(const BindInstance2VpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceVpcName()) {
    body["InstanceVpcName"] = request.getInstanceVpcName();
  }

  if (!!request.hasVirtualSwitchId()) {
    body["VirtualSwitchId"] = request.getVirtualSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BindInstance2Vpc"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/bindinstance2vpc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindInstance2VpcResponse>();
}

/**
 * @summary 绑定vpc
 *
 * @param request BindInstance2VpcRequest
 * @return BindInstance2VpcResponse
 */
BindInstance2VpcResponse Client::bindInstance2Vpc(const BindInstance2VpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindInstance2VpcWithOptions(request, headers, runtime);
}

/**
 * @summary Changes the resource group to which an instance belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/changeresourcegroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which an instance belongs.
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
 * @summary Checks the validity of a Resource Access Management (RAM) policy for an instance.
 *
 * @param request CheckInstancePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstancePolicyResponse
 */
CheckInstancePolicyResponse Client::checkInstancePolicyWithOptions(const CheckInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstancePolicy"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/checkinstancepolicy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstancePolicyResponse>();
}

/**
 * @summary Checks the validity of a Resource Access Management (RAM) policy for an instance.
 *
 * @param request CheckInstancePolicyRequest
 * @return CheckInstancePolicyResponse
 */
CheckInstancePolicyResponse Client::checkInstancePolicy(const CheckInstancePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstancePolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
 * *   Each Alibaba Cloud account can create up to 10 instances. The name of an instance must be unique within the region in which the instance resides.
 * *   After you create an instance, you cannot change the type of the instance. Proceed with caution.
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasDisableReplication()) {
    body["DisableReplication"] = request.getDisableReplication();
  }

  if (!!request.hasInstanceDescription()) {
    body["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNetwork()) {
    body["Network"] = request.getNetwork();
  }

  if (!!request.hasNetworkSourceACL()) {
    body["NetworkSourceACL"] = request.getNetworkSourceACL();
  }

  if (!!request.hasNetworkTypeACL()) {
    body["NetworkTypeACL"] = request.getNetworkTypeACL();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/createinstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
 * *   Each Alibaba Cloud account can create up to 10 instances. The name of an instance must be unique within the region in which the instance resides.
 * *   After you create an instance, you cannot change the type of the instance. Proceed with caution.
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
 * @summary 创建VCU实例
 *
 * @param request CreateVCUInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVCUInstanceResponse
 */
CreateVCUInstanceResponse Client::createVCUInstanceWithOptions(const CreateVCUInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliasName()) {
    body["AliasName"] = request.getAliasName();
  }

  if (!!request.hasAutoRenewPeriodInMonth()) {
    body["AutoRenewPeriodInMonth"] = request.getAutoRenewPeriodInMonth();
  }

  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableAutoRenew()) {
    body["EnableAutoRenew"] = request.getEnableAutoRenew();
  }

  if (!!request.hasEnableElasticVCU()) {
    body["EnableElasticVCU"] = request.getEnableElasticVCU();
  }

  if (!!request.hasInstanceDescription()) {
    body["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasPeriodInMonth()) {
    body["PeriodInMonth"] = request.getPeriodInMonth();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasVCU()) {
    body["VCU"] = request.getVCU();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVCUInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/createvcuinstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVCUInstanceResponse>();
}

/**
 * @summary 创建VCU实例
 *
 * @param request CreateVCUInstanceRequest
 * @return CreateVCUInstanceResponse
 */
CreateVCUInstanceResponse Client::createVCUInstance(const CreateVCUInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVCUInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an instance.
 *
 * @description *   Before you delete an instance, make sure that all data tables and time series tables in the instance are deleted and virtual private clouds (VPCs) are unbound from the instance.
 * *   To prevent conflicts, do not create an instance that has the same name as the instance that is being deleted.
 * *   After an instance is deleted, the instance becomes unavailable and the tables, table data, and related indexes in the instance cannot be recovered. Proceed with caution.
 *
 * @param request DeleteInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/deleteinstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes an instance.
 *
 * @description *   Before you delete an instance, make sure that all data tables and time series tables in the instance are deleted and virtual private clouds (VPCs) are unbound from the instance.
 * *   To prevent conflicts, do not create an instance that has the same name as the instance that is being deleted.
 * *   After an instance is deleted, the instance becomes unavailable and the tables, table data, and related indexes in the instance cannot be recovered. Proceed with caution.
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
 * @summary Deletes a Resource Access Management (RAM) policy of an instance.
 *
 * @description *   You cannot recover a deleted instance policy. Proceed with caution.
 * *   After you delete an instance policy, the access control that is specified by the instance policy becomes invalid. Make sure that your instance is in a secure environment.
 *
 * @param request DeleteInstancePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstancePolicyResponse
 */
DeleteInstancePolicyResponse Client::deleteInstancePolicyWithOptions(const DeleteInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPolicyVersion()) {
    body["PolicyVersion"] = request.getPolicyVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInstancePolicy"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/deleteinstancepolicy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstancePolicyResponse>();
}

/**
 * @summary Deletes a Resource Access Management (RAM) policy of an instance.
 *
 * @description *   You cannot recover a deleted instance policy. Proceed with caution.
 * *   After you delete an instance policy, the access control that is specified by the instance policy becomes invalid. Make sure that your instance is in a secure environment.
 *
 * @param request DeleteInstancePolicyRequest
 * @return DeleteInstancePolicyResponse
 */
DeleteInstancePolicyResponse Client::deleteInstancePolicy(const DeleteInstancePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstancePolicyWithOptions(request, headers, runtime);
}

/**
 * @summary 删除VCU实例
 *
 * @param request DeleteVCUInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVCUInstanceResponse
 */
DeleteVCUInstanceResponse Client::deleteVCUInstanceWithOptions(const DeleteVCUInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVCUInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/deletevcuinstance")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVCUInstanceResponse>();
}

/**
 * @summary 删除VCU实例
 *
 * @param request DeleteVCUInstanceRequest
 * @return DeleteVCUInstanceResponse
 */
DeleteVCUInstanceResponse Client::deleteVCUInstance(const DeleteVCUInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVCUInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries supported regions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/region/DescribeRegions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries supported regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries instance information.
 *
 * @param request GetInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/getinstance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries instance information.
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
 * @summary 列举集群类型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterTypeResponse
 */
ListClusterTypeResponse Client::listClusterTypeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterType"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/listclustertype")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterTypeResponse>();
}

/**
 * @summary 列举集群类型
 *
 * @return ListClusterTypeResponse
 */
ListClusterTypeResponse Client::listClusterType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterTypeWithOptions(headers, runtime);
}

/**
 * @summary Queries instances.
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
  if (!!tmpReq.hasInstanceNameList()) {
    request.setInstanceNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceNameList(), "InstanceNameList", "simple"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceNameListShrink()) {
    query["InstanceNameList"] = request.getInstanceNameListShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/listinstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries instances.
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
 * @summary Queries tagged resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "ResourceIds", "simple"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.getResourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/listtagresources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries tagged resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例的vpcInfo列表
 *
 * @param request ListVpcInfoByInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcInfoByInstanceResponse
 */
ListVpcInfoByInstanceResponse Client::listVpcInfoByInstanceWithOptions(const ListVpcInfoByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcInfoByInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/listvpcinfobyinstance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcInfoByInstanceResponse>();
}

/**
 * @summary 获取实例的vpcInfo列表
 *
 * @param request ListVpcInfoByInstanceRequest
 * @return ListVpcInfoByInstanceResponse
 */
ListVpcInfoByInstanceResponse Client::listVpcInfoByInstance(const ListVpcInfoByInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcInfoByInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例的vpcInfo列表
 *
 * @param request ListVpcInfoByVpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcInfoByVpcResponse
 */
ListVpcInfoByVpcResponse Client::listVpcInfoByVpcWithOptions(const ListVpcInfoByVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcInfoByVpc"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/listvpcinfobyvpc")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcInfoByVpcResponse>();
}

/**
 * @summary 获取实例的vpcInfo列表
 *
 * @param request ListVpcInfoByVpcRequest
 * @return ListVpcInfoByVpcResponse
 */
ListVpcInfoByVpcResponse Client::listVpcInfoByVpc(const ListVpcInfoByVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcInfoByVpcWithOptions(request, headers, runtime);
}

/**
 * @summary Adds tags to instances.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/tagresources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to instances.
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
 * @summary 解绑vpc
 *
 * @param request UnbindInstance2VpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindInstance2VpcResponse
 */
UnbindInstance2VpcResponse Client::unbindInstance2VpcWithOptions(const UnbindInstance2VpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceVpcName()) {
    body["InstanceVpcName"] = request.getInstanceVpcName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnbindInstance2Vpc"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/unbindinstance2vpc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindInstance2VpcResponse>();
}

/**
 * @summary 解绑vpc
 *
 * @param request UnbindInstance2VpcRequest
 * @return UnbindInstance2VpcResponse
 */
UnbindInstance2VpcResponse Client::unbindInstance2Vpc(const UnbindInstance2VpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindInstance2VpcWithOptions(request, headers, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @description Removing tags from resources helps simplify resource management, optimize system performance, and mitigate potential security vulnerabilities. After a tag is removed from a resource, the system automatically deletes the tag if the tag is not added to other resources.
 *
 * @param request UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.getAll();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    body["TagKeys"] = request.getTagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/untagresources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @description Removing tags from resources helps simplify resource management, optimize system performance, and mitigate potential security vulnerabilities. After a tag is removed from a resource, the system automatically deletes the tag if the tag is not added to other resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates instance information.
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliasName()) {
    body["AliasName"] = request.getAliasName();
  }

  if (!!request.hasInstanceDescription()) {
    body["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNetwork()) {
    body["Network"] = request.getNetwork();
  }

  if (!!request.hasNetworkSourceACL()) {
    body["NetworkSourceACL"] = request.getNetworkSourceACL();
  }

  if (!!request.hasNetworkTypeACL()) {
    body["NetworkTypeACL"] = request.getNetworkTypeACL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/updateinstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates instance information.
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
 * @summary Modifies the upper limit for the VCUs of an instance in VCU mode (formerly reserved mode).
 *
 * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
 * *   After you enable scalability for an instance, the default upper limit for the VCUs of the instance is the sum of the scalability and the reserved VCUs.
 * *   To use more computing resources when your business grows, you can modify the upper limit for the VCUs of your instance. The new upper limit for the VCUs of your instance immediately takes effect.
 *
 * @param request UpdateInstanceElasticVCUUpperLimitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceElasticVCUUpperLimitResponse
 */
UpdateInstanceElasticVCUUpperLimitResponse Client::updateInstanceElasticVCUUpperLimitWithOptions(const UpdateInstanceElasticVCUUpperLimitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasElasticVCUUpperLimit()) {
    body["ElasticVCUUpperLimit"] = request.getElasticVCUUpperLimit();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceElasticVCUUpperLimit"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/updateinstanceelasticvcuupperlimit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceElasticVCUUpperLimitResponse>();
}

/**
 * @summary Modifies the upper limit for the VCUs of an instance in VCU mode (formerly reserved mode).
 *
 * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
 * *   After you enable scalability for an instance, the default upper limit for the VCUs of the instance is the sum of the scalability and the reserved VCUs.
 * *   To use more computing resources when your business grows, you can modify the upper limit for the VCUs of your instance. The new upper limit for the VCUs of your instance immediately takes effect.
 *
 * @param request UpdateInstanceElasticVCUUpperLimitRequest
 * @return UpdateInstanceElasticVCUUpperLimitResponse
 */
UpdateInstanceElasticVCUUpperLimitResponse Client::updateInstanceElasticVCUUpperLimit(const UpdateInstanceElasticVCUUpperLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceElasticVCUUpperLimitWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies a Resource Access Management (RAM) policy for an instance.
 *
 * @param request UpdateInstancePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstancePolicyResponse
 */
UpdateInstancePolicyResponse Client::updateInstancePolicyWithOptions(const UpdateInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  if (!!request.hasPolicyVersion()) {
    body["PolicyVersion"] = request.getPolicyVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstancePolicy"},
    {"version" , "2020-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/openapi/updateinstancepolicy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstancePolicyResponse>();
}

/**
 * @summary Modifies a Resource Access Management (RAM) policy for an instance.
 *
 * @param request UpdateInstancePolicyRequest
 * @return UpdateInstancePolicyResponse
 */
UpdateInstancePolicyResponse Client::updateInstancePolicy(const UpdateInstancePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstancePolicyWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Tablestore20201209