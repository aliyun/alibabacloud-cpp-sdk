#include <darabonba/Core.hpp>
#include <alibabacloud/Foasconsole20211028.hpp>
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
using namespace AlibabaCloud::Foasconsole20211028::Models;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{

AlibabaCloud::Foasconsole20211028::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("foasconsole", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 开通弹性计算
 *
 * @param tmpReq ConvertHybridInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertHybridInstanceResponse
 */
ConvertHybridInstanceResponse Client::convertHybridInstanceWithOptions(const ConvertHybridInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConvertHybridInstanceShrinkRequest request = ConvertHybridInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    query["ResourceSpec"] = request.getResourceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertHybridInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertHybridInstanceResponse>();
}

/**
 * @summary 开通弹性计算
 *
 * @param request ConvertHybridInstanceRequest
 * @return ConvertHybridInstanceResponse
 */
ConvertHybridInstanceResponse Client::convertHybridInstance(const ConvertHybridInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertHybridInstanceWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a workspace from pay-as-you-go to subscription.
 *
 * @param tmpReq ConvertInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstanceWithOptions(const ConvertInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConvertInstanceShrinkRequest request = ConvertInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNamespaceResourceSpecs()) {
    request.setNamespaceResourceSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNamespaceResourceSpecs(), "NamespaceResourceSpecs", "json"));
  }

  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsAutoRenew()) {
    body["IsAutoRenew"] = request.getIsAutoRenew();
  }

  if (!!request.hasNamespaceResourceSpecsShrink()) {
    body["NamespaceResourceSpecs"] = request.getNamespaceResourceSpecsShrink();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConvertInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertInstanceResponse>();
}

/**
 * @summary Changes the billing method of a workspace from pay-as-you-go to subscription.
 *
 * @param request ConvertInstanceRequest
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstance(const ConvertInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertInstanceWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a workspace from subscription to pay-as-you-go.
 *
 * @param request ConvertPrepayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertPrepayInstanceResponse
 */
ConvertPrepayInstanceResponse Client::convertPrepayInstanceWithOptions(const ConvertPrepayInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConvertPrepayInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertPrepayInstanceResponse>();
}

/**
 * @summary Changes the billing method of a workspace from subscription to pay-as-you-go.
 *
 * @param request ConvertPrepayInstanceRequest
 * @return ConvertPrepayInstanceResponse
 */
ConvertPrepayInstanceResponse Client::convertPrepayInstance(const ConvertPrepayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPrepayInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a subscription workspace or a pay-as-you-go workspace of Realtime Compute for Apache Flink.
 *
 * @param tmpReq CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateInstanceShrinkRequest request = CreateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaResourceSpec()) {
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  if (!!tmpReq.hasStorage()) {
    request.setStorageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStorage(), "Storage", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasArchitectureType()) {
    body["ArchitectureType"] = request.getArchitectureType();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.getExtra();
  }

  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.getHaResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.getHaVSwitchIdsShrink();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMonitorType()) {
    body["MonitorType"] = request.getMonitorType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  if (!!request.hasStorageShrink()) {
    body["Storage"] = request.getStorageShrink();
  }

  if (!!request.hasTagShrink()) {
    body["Tag"] = request.getTagShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.getVSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates a subscription workspace or a pay-as-you-go workspace of Realtime Compute for Apache Flink.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a namespace in a Realtime Compute for Apache Flink workspace.
 *
 * @param tmpReq CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNamespaceShrinkRequest request = CreateNamespaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Creates a namespace in a Realtime Compute for Apache Flink workspace.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go workspace of Realtime Compute for Apache Flink.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a pay-as-you-go workspace of Realtime Compute for Apache Flink.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more Realtime Compute for Apache Flink workspaces.
 *
 * @param tmpReq DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeInstancesShrinkRequest request = DescribeInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries the details of one or more Realtime Compute for Apache Flink workspaces.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a namespace that belongs to a workspace.
 *
 * @param tmpReq DescribeNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespacesWithOptions(const DescribeNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeNamespacesShrinkRequest request = DescribeNamespacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespaces"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespacesResponse>();
}

/**
 * @summary Queries the information about a namespace that belongs to a workspace.
 *
 * @param request DescribeNamespacesRequest
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespaces(const DescribeNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that are available in which Realtime Compute for Apache Flink is supported.
 *
 * @param request DescribeSupportedRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportedRegionsResponse
 */
DescribeSupportedRegionsResponse Client::describeSupportedRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeSupportedRegions"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportedRegionsResponse>();
}

/**
 * @summary Queries the regions that are available in which Realtime Compute for Apache Flink is supported.
 *
 * @return DescribeSupportedRegionsResponse
 */
DescribeSupportedRegionsResponse Client::describeSupportedRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedRegionsWithOptions(runtime);
}

/**
 * @summary Obtains the zones that are supported by Realtime Compute for Apache Flink.
 *
 * @param request DescribeSupportedZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportedZonesResponse
 */
DescribeSupportedZonesResponse Client::describeSupportedZonesWithOptions(const DescribeSupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportedZones"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportedZonesResponse>();
}

/**
 * @summary Obtains the zones that are supported by Realtime Compute for Apache Flink.
 *
 * @param request DescribeSupportedZonesRequest
 * @return DescribeSupportedZonesResponse
 */
DescribeSupportedZonesResponse Client::describeSupportedZones(const DescribeSupportedZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of specified resources. You can query the key of a tag by tag value, or query the value of a tag by tag key. You can also obtain information about all tags that you use in a workspace in the console of fully managed Flink.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
    {"version" , "2021-10-28"},
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
 * @summary Queries the tags of specified resources. You can query the key of a tag by tag value, or query the value of a tag by tag key. You can also obtain information about all tags that you use in a workspace in the console of fully managed Flink.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 对按量弹性实例修改resource quota
 *
 * @param tmpReq ModifyElasticResourceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticResourceSpecResponse
 */
ModifyElasticResourceSpecResponse Client::modifyElasticResourceSpecWithOptions(const ModifyElasticResourceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyElasticResourceSpecShrinkRequest request = ModifyElasticResourceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyElasticResourceSpec"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticResourceSpecResponse>();
}

/**
 * @summary 对按量弹性实例修改resource quota
 *
 * @param request ModifyElasticResourceSpecRequest
 * @return ModifyElasticResourceSpecResponse
 */
ModifyElasticResourceSpecResponse Client::modifyElasticResourceSpec(const ModifyElasticResourceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticResourceSpecWithOptions(request, runtime);
}

/**
 * @summary Scale in or out a workspace to reconfigure resources for the workspace.
 *
 * @param tmpReq ModifyInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpecWithOptions(const ModifyInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceSpecShrinkRequest request = ModifyInstanceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaResourceSpec()) {
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.getHaResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.getHaVSwitchIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceSpec"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceSpecResponse>();
}

/**
 * @summary Scale in or out a workspace to reconfigure resources for the workspace.
 *
 * @param request ModifyInstanceSpecRequest
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSpecWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
 *
 * @summary 修改集群交换机
 *
 * @param tmpReq ModifyInstanceVswitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceVswitchResponse
 */
ModifyInstanceVswitchResponse Client::modifyInstanceVswitchWithOptions(const ModifyInstanceVswitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceVswitchShrinkRequest request = ModifyInstanceVswitchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.getHaVSwitchIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.getVSwitchIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceVswitch"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceVswitchResponse>();
}

/**
 * @deprecated OpenAPI ModifyInstanceVswitch is deprecated
 *
 * @summary 修改集群交换机
 *
 * @param request ModifyInstanceVswitchRequest
 * @return ModifyInstanceVswitchResponse
 */
ModifyInstanceVswitchResponse Client::modifyInstanceVswitch(const ModifyInstanceVswitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVswitchWithOptions(request, runtime);
}

/**
 * @summary 修改namespace资源，包含按量和包年包月、混合计费
 *
 * @param tmpReq ModifyNamespaceSpecV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNamespaceSpecV2Response
 */
ModifyNamespaceSpecV2Response Client::modifyNamespaceSpecV2WithOptions(const ModifyNamespaceSpecV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyNamespaceSpecV2ShrinkRequest request = ModifyNamespaceSpecV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasElasticResourceSpec()) {
    request.setElasticResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getElasticResourceSpec(), "ElasticResourceSpec", "json"));
  }

  if (!!tmpReq.hasGuaranteedResourceSpec()) {
    request.setGuaranteedResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGuaranteedResourceSpec(), "GuaranteedResourceSpec", "json"));
  }

  json query = {};
  if (!!request.hasHa()) {
    query["Ha"] = request.getHa();
  }

  json body = {};
  if (!!request.hasElasticResourceSpecShrink()) {
    body["ElasticResourceSpec"] = request.getElasticResourceSpecShrink();
  }

  if (!!request.hasGuaranteedResourceSpecShrink()) {
    body["GuaranteedResourceSpec"] = request.getGuaranteedResourceSpecShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyNamespaceSpecV2"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNamespaceSpecV2Response>();
}

/**
 * @summary 修改namespace资源，包含按量和包年包月、混合计费
 *
 * @param request ModifyNamespaceSpecV2Request
 * @return ModifyNamespaceSpecV2Response
 */
ModifyNamespaceSpecV2Response Client::modifyNamespaceSpecV2(const ModifyNamespaceSpecV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNamespaceSpecV2WithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
 *
 * @summary Modifies the configuration of the computing resources of a subscription fully managed Flink workspace. If the number of computing resources after the modification is less than the current number of computing resources, the scale-in operation is performed. If the number of computing resources after the modification is larger than the current number of computing resources, the scale-out operation is performed.
 *
 * @param tmpReq ModifyPrepayInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPrepayInstanceSpecResponse
 */
ModifyPrepayInstanceSpecResponse Client::modifyPrepayInstanceSpecWithOptions(const ModifyPrepayInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPrepayInstanceSpecShrinkRequest request = ModifyPrepayInstanceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaResourceSpec()) {
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.getHaResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.getHaVSwitchIdsShrink();
  }

  if (!!request.hasHaZoneId()) {
    body["HaZoneId"] = request.getHaZoneId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPrepayInstanceSpec"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPrepayInstanceSpecResponse>();
}

/**
 * @deprecated OpenAPI ModifyPrepayInstanceSpec is deprecated, please use foasconsole::2021-10-28::ModifyInstanceSpec instead.
 *
 * @summary Modifies the configuration of the computing resources of a subscription fully managed Flink workspace. If the number of computing resources after the modification is less than the current number of computing resources, the scale-in operation is performed. If the number of computing resources after the modification is larger than the current number of computing resources, the scale-out operation is performed.
 *
 * @param request ModifyPrepayInstanceSpecRequest
 * @return ModifyPrepayInstanceSpecResponse
 */
ModifyPrepayInstanceSpecResponse Client::modifyPrepayInstanceSpec(const ModifyPrepayInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrepayInstanceSpecWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
 *
 * @summary Modifies the resource configurations of a namespace in a subscription workspace.
 *
 * @param tmpReq ModifyPrepayNamespaceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPrepayNamespaceSpecResponse
 */
ModifyPrepayNamespaceSpecResponse Client::modifyPrepayNamespaceSpecWithOptions(const ModifyPrepayNamespaceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPrepayNamespaceSpecShrinkRequest request = ModifyPrepayNamespaceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPrepayNamespaceSpec"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPrepayNamespaceSpecResponse>();
}

/**
 * @deprecated OpenAPI ModifyPrepayNamespaceSpec is deprecated, please use foasconsole::2021-10-28::ModifyNamespaceSpec instead.
 *
 * @summary Modifies the resource configurations of a namespace in a subscription workspace.
 *
 * @param request ModifyPrepayNamespaceSpecRequest
 * @return ModifyPrepayNamespaceSpecResponse
 */
ModifyPrepayNamespaceSpecResponse Client::modifyPrepayNamespaceSpec(const ModifyPrepayNamespaceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrepayNamespaceSpecWithOptions(request, runtime);
}

/**
 * @summary Queries the fee of switching the billing method of a workspace from pay-as-you-go to subscription.
 *
 * @param tmpReq QueryConvertInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConvertInstancePriceResponse
 */
QueryConvertInstancePriceResponse Client::queryConvertInstancePriceWithOptions(const QueryConvertInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryConvertInstancePriceShrinkRequest request = QueryConvertInstancePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNamespaceResourceSpecs()) {
    request.setNamespaceResourceSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNamespaceResourceSpecs(), "NamespaceResourceSpecs", "json"));
  }

  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsAutoRenew()) {
    body["IsAutoRenew"] = request.getIsAutoRenew();
  }

  if (!!request.hasNamespaceResourceSpecsShrink()) {
    body["NamespaceResourceSpecs"] = request.getNamespaceResourceSpecsShrink();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryConvertInstancePrice"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConvertInstancePriceResponse>();
}

/**
 * @summary Queries the fee of switching the billing method of a workspace from pay-as-you-go to subscription.
 *
 * @param request QueryConvertInstancePriceRequest
 * @return QueryConvertInstancePriceResponse
 */
QueryConvertInstancePriceResponse Client::queryConvertInstancePrice(const QueryConvertInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Obtains the estimated refund after the billing method of your Realtime Compute for Apache Flink workspace is changed from subscription to pay-as-you-go. After you change the billing method of your workspace to pay-as-you-go, bills are generated on an hourly basis.
 *
 * @param request QueryConvertPrepayInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConvertPrepayInstancePriceResponse
 */
QueryConvertPrepayInstancePriceResponse Client::queryConvertPrepayInstancePriceWithOptions(const QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryConvertPrepayInstancePrice"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConvertPrepayInstancePriceResponse>();
}

/**
 * @summary Obtains the estimated refund after the billing method of your Realtime Compute for Apache Flink workspace is changed from subscription to pay-as-you-go. After you change the billing method of your workspace to pay-as-you-go, bills are generated on an hourly basis.
 *
 * @param request QueryConvertPrepayInstancePriceRequest
 * @return QueryConvertPrepayInstancePriceResponse
 */
QueryConvertPrepayInstancePriceResponse Client::queryConvertPrepayInstancePrice(const QueryConvertPrepayInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertPrepayInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the fee of creating a workspace.
 *
 * @param tmpReq QueryCreateInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCreateInstancePriceResponse
 */
QueryCreateInstancePriceResponse Client::queryCreateInstancePriceWithOptions(const QueryCreateInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCreateInstancePriceShrinkRequest request = QueryCreateInstancePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaResourceSpec()) {
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  if (!!tmpReq.hasStorage()) {
    request.setStorageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStorage(), "Storage", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasArchitectureType()) {
    body["ArchitectureType"] = request.getArchitectureType();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.getExtra();
  }

  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.getHaResourceSpecShrink();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  if (!!request.hasStorageShrink()) {
    body["Storage"] = request.getStorageShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.getVSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryCreateInstancePrice"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCreateInstancePriceResponse>();
}

/**
 * @summary Queries the fee of creating a workspace.
 *
 * @param request QueryCreateInstancePriceRequest
 * @return QueryCreateInstancePriceResponse
 */
QueryCreateInstancePriceResponse Client::queryCreateInstancePrice(const QueryCreateInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCreateInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the fee of modifying the resource configuration of a workspace.
 *
 * @param tmpReq QueryModifyInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyInstancePriceResponse
 */
QueryModifyInstancePriceResponse Client::queryModifyInstancePriceWithOptions(const QueryModifyInstancePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryModifyInstancePriceShrinkRequest request = QueryModifyInstancePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHaResourceSpec()) {
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHaVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.getHa();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.getHaResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.getHaVSwitchIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.getResourceSpecShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryModifyInstancePrice"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyInstancePriceResponse>();
}

/**
 * @summary Queries the fee of modifying the resource configuration of a workspace.
 *
 * @param request QueryModifyInstancePriceRequest
 * @return QueryModifyInstancePriceResponse
 */
QueryModifyInstancePriceResponse Client::queryModifyInstancePrice(const QueryModifyInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryModifyInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the fee of renewing a subscription workspace.
 *
 * @param request QueryRenewInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRenewInstancePriceResponse
 */
QueryRenewInstancePriceResponse Client::queryRenewInstancePriceWithOptions(const QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryRenewInstancePrice"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRenewInstancePriceResponse>();
}

/**
 * @summary Queries the fee of renewing a subscription workspace.
 *
 * @param request QueryRenewInstancePriceRequest
 * @return QueryRenewInstancePriceResponse
 */
QueryRenewInstancePriceResponse Client::queryRenewInstancePrice(const QueryRenewInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRenewInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription workspace of Realtime Compute for Apache Flink.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.getUsePromotionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a subscription workspace of Realtime Compute for Apache Flink.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds tags to specified resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
    {"version" , "2021-10-28"},
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
 * @summary Adds tags to specified resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified resources.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
    {"version" , "2021-10-28"},
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
 * @summary Removes tags from specified resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Foasconsole20211028