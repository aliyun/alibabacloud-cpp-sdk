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
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    query["ResourceSpec"] = request.resourceSpecShrink();
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
 * @summary 按量付费转包年包月
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
    request.setNamespaceResourceSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.namespaceResourceSpecs(), "NamespaceResourceSpecs", "json"));
  }

  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsAutoRenew()) {
    body["IsAutoRenew"] = request.isAutoRenew();
  }

  if (!!request.hasNamespaceResourceSpecsShrink()) {
    body["NamespaceResourceSpecs"] = request.namespaceResourceSpecsShrink();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
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
 * @summary 按量付费转包年包月
 *
 * @param request ConvertInstanceRequest
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstance(const ConvertInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertInstanceWithOptions(request, runtime);
}

/**
 * @summary 包年包月转按量付费
 *
 * @param request ConvertPrepayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertPrepayInstanceResponse
 */
ConvertPrepayInstanceResponse Client::convertPrepayInstanceWithOptions(const ConvertPrepayInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
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
 * @summary 包年包月转按量付费
 *
 * @param request ConvertPrepayInstanceRequest
 * @return ConvertPrepayInstanceResponse
 */
ConvertPrepayInstanceResponse Client::convertPrepayInstance(const ConvertPrepayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPrepayInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建实例
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
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  if (!!tmpReq.hasStorage()) {
    request.setStorageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storage(), "Storage", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasArchitectureType()) {
    body["ArchitectureType"] = request.architectureType();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasHa()) {
    body["Ha"] = request.ha();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.haResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.haVSwitchIdsShrink();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasMonitorType()) {
    body["MonitorType"] = request.monitorType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
  }

  if (!!request.hasStorageShrink()) {
    body["Storage"] = request.storageShrink();
  }

  if (!!request.hasTagShrink()) {
    body["Tag"] = request.tagShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.vSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
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
 * @summary 创建实例
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建命名空间
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
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.ha();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
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
 * @summary 创建命名空间
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary 释放按量付费的实例
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
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
 * @summary 释放按量付费的实例
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除namespace
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
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
 * @summary 删除namespace
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary instance列表
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
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
 * @summary instance列表
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary namespace列表
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
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
 * @summary namespace列表
 *
 * @param request DescribeNamespacesRequest
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespaces(const DescribeNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNamespacesWithOptions(request, runtime);
}

/**
 * @summary 获取支持的region列表
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
 * @summary 获取支持的region列表
 *
 * @return DescribeSupportedRegionsResponse
 */
DescribeSupportedRegionsResponse Client::describeSupportedRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedRegionsWithOptions(runtime);
}

/**
 * @summary 获取支持的zoneId列表
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
 * @summary 获取支持的zoneId列表
 *
 * @param request DescribeSupportedZonesRequest
 * @return DescribeSupportedZonesResponse
 */
DescribeSupportedZonesResponse Client::describeSupportedZones(const DescribeSupportedZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedZonesWithOptions(request, runtime);
}

/**
 * @summary 列举flinkasi标签
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
 * @summary 列举flinkasi标签
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
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
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
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.haVSwitchIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.vSwitchIdsShrink();
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
    request.setElasticResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.elasticResourceSpec(), "ElasticResourceSpec", "json"));
  }

  if (!!tmpReq.hasGuaranteedResourceSpec()) {
    request.setGuaranteedResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.guaranteedResourceSpec(), "GuaranteedResourceSpec", "json"));
  }

  json query = {};
  if (!!request.hasHa()) {
    query["Ha"] = request.ha();
  }

  json body = {};
  if (!!request.hasElasticResourceSpecShrink()) {
    body["ElasticResourceSpec"] = request.elasticResourceSpecShrink();
  }

  if (!!request.hasGuaranteedResourceSpecShrink()) {
    body["GuaranteedResourceSpec"] = request.guaranteedResourceSpecShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
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
 * @summary 扩容/缩容
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
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.ha();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.haResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.haVSwitchIdsShrink();
  }

  if (!!request.hasHaZoneId()) {
    body["HaZoneId"] = request.haZoneId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
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
 * @summary 扩容/缩容
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
 * @summary 修改namespace资源分配
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
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
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
 * @summary 修改namespace资源分配
 *
 * @param request ModifyPrepayNamespaceSpecRequest
 * @return ModifyPrepayNamespaceSpecResponse
 */
ModifyPrepayNamespaceSpecResponse Client::modifyPrepayNamespaceSpec(const ModifyPrepayNamespaceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrepayNamespaceSpecWithOptions(request, runtime);
}

/**
 * @summary 按量付费转包年包月询价
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
    request.setNamespaceResourceSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.namespaceResourceSpecs(), "NamespaceResourceSpecs", "json"));
  }

  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsAutoRenew()) {
    body["IsAutoRenew"] = request.isAutoRenew();
  }

  if (!!request.hasNamespaceResourceSpecsShrink()) {
    body["NamespaceResourceSpecs"] = request.namespaceResourceSpecsShrink();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
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
 * @summary 按量付费转包年包月询价
 *
 * @param request QueryConvertInstancePriceRequest
 * @return QueryConvertInstancePriceResponse
 */
QueryConvertInstancePriceResponse Client::queryConvertInstancePrice(const QueryConvertInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertInstancePriceWithOptions(request, runtime);
}

/**
 * @summary 包年包月转按量付费询价
 *
 * @param request QueryConvertPrepayInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConvertPrepayInstancePriceResponse
 */
QueryConvertPrepayInstancePriceResponse Client::queryConvertPrepayInstancePriceWithOptions(const QueryConvertPrepayInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
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
 * @summary 包年包月转按量付费询价
 *
 * @param request QueryConvertPrepayInstancePriceRequest
 * @return QueryConvertPrepayInstancePriceResponse
 */
QueryConvertPrepayInstancePriceResponse Client::queryConvertPrepayInstancePrice(const QueryConvertPrepayInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertPrepayInstancePriceWithOptions(request, runtime);
}

/**
 * @summary 获取创建实例的价格
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
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  if (!!tmpReq.hasStorage()) {
    request.setStorageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storage(), "Storage", "json"));
  }

  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasArchitectureType()) {
    body["ArchitectureType"] = request.architectureType();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasHa()) {
    body["Ha"] = request.ha();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.haResourceSpecShrink();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
  }

  if (!!request.hasStorageShrink()) {
    body["Storage"] = request.storageShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.vSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
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
 * @summary 获取创建实例的价格
 *
 * @param request QueryCreateInstancePriceRequest
 * @return QueryCreateInstancePriceResponse
 */
QueryCreateInstancePriceResponse Client::queryCreateInstancePrice(const QueryCreateInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCreateInstancePriceWithOptions(request, runtime);
}

/**
 * @summary 查询付费类型为包年包月的实例修改资源规格的价格
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
    request.setHaResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haResourceSpec(), "HaResourceSpec", "json"));
  }

  if (!!tmpReq.hasHaVSwitchIds()) {
    request.setHaVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.haVSwitchIds(), "HaVSwitchIds", "json"));
  }

  if (!!tmpReq.hasResourceSpec()) {
    request.setResourceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSpec(), "ResourceSpec", "json"));
  }

  json body = {};
  if (!!request.hasHa()) {
    body["Ha"] = request.ha();
  }

  if (!!request.hasHaResourceSpecShrink()) {
    body["HaResourceSpec"] = request.haResourceSpecShrink();
  }

  if (!!request.hasHaVSwitchIdsShrink()) {
    body["HaVSwitchIds"] = request.haVSwitchIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceSpecShrink()) {
    body["ResourceSpec"] = request.resourceSpecShrink();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
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
 * @summary 查询付费类型为包年包月的实例修改资源规格的价格
 *
 * @param request QueryModifyInstancePriceRequest
 * @return QueryModifyInstancePriceResponse
 */
QueryModifyInstancePriceResponse Client::queryModifyInstancePrice(const QueryModifyInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryModifyInstancePriceWithOptions(request, runtime);
}

/**
 * @summary 查询付费类型为包年包月的实例续费价格
 *
 * @param request QueryRenewInstancePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRenewInstancePriceResponse
 */
QueryRenewInstancePriceResponse Client::queryRenewInstancePriceWithOptions(const QueryRenewInstancePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
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
 * @summary 查询付费类型为包年包月的实例续费价格
 *
 * @param request QueryRenewInstancePriceRequest
 * @return QueryRenewInstancePriceResponse
 */
QueryRenewInstancePriceResponse Client::queryRenewInstancePrice(const QueryRenewInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRenewInstancePriceWithOptions(request, runtime);
}

/**
 * @summary 续费
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionCode()) {
    body["PromotionCode"] = request.promotionCode();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasUsePromotionCode()) {
    body["UsePromotionCode"] = request.usePromotionCode();
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
 * @summary 续费
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary flinkasi去标签
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

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
 * @summary flinkasi去标签
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