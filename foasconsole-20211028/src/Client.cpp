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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "foasconsole.cn-qingdao.aliyuncs.com"},
    {"cn-wulanchabu" , "foasconsole.cn-wulanchabu.aliyuncs.com"},
    {"cn-beijing" , "foasconsole.cn-beijing.aliyuncs.com"},
    {"cn-shanghai" , "foasconsole.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "foasconsole.cn-hongkong.aliyuncs.com"},
    {"cn-zhangjiakou" , "foasconsole.cn-zhangjiakou.aliyuncs.com"},
    {"cn-shenzhen" , "foasconsole.cn-shenzhen.aliyuncs.com"},
    {"ap-northeast-1" , "foasconsole.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "foasconsole.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "foasconsole.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "foasconsole.ap-southeast-5.aliyuncs.com"},
    {"cn-hangzhou" , "foasconsole.cn-hangzhou.aliyuncs.com"},
    {"us-east-1" , "foasconsole.us-east-1.aliyuncs.com"},
    {"eu-west-1" , "foasconsole.eu-west-1.aliyuncs.com"},
    {"us-west-1" , "foasconsole.us-west-1.aliyuncs.com"},
    {"eu-central-1" , "foasconsole.eu-central-1.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "foasconsole.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "foasconsole.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1" , "foasconsole.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Disables the Flink AI service.
 *
 * @param request CloseFlinkAiServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseFlinkAiServiceResponse
 */
CloseFlinkAiServiceResponse Client::closeFlinkAiServiceWithOptions(const CloseFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CloseFlinkAiService"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseFlinkAiServiceResponse>();
}

/**
 * @summary Disables the Flink AI service.
 *
 * @param request CloseFlinkAiServiceRequest
 * @return CloseFlinkAiServiceResponse
 */
CloseFlinkAiServiceResponse Client::closeFlinkAiService(const CloseFlinkAiServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeFlinkAiServiceWithOptions(request, runtime);
}

/**
 * @summary Converts a subscription instance to a hybrid billing instance.
 *
 * @description **Before using this API, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Realtime Compute for Apache Flink.**
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
 * @summary Converts a subscription instance to a hybrid billing instance.
 *
 * @description **Before using this API, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/hybrid-pricing) of hybrid billing for Realtime Compute for Apache Flink.**
 *
 * @param request ConvertHybridInstanceRequest
 * @return ConvertHybridInstanceResponse
 */
ConvertHybridInstanceResponse Client::convertHybridInstance(const ConvertHybridInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertHybridInstanceWithOptions(request, runtime);
}

/**
 * @summary Converts a pay-as-you-go workspace to a subscription workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink.**
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
 * @summary Converts a pay-as-you-go workspace to a subscription workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-pay-as-you-go-to-subscription) of fully managed Flink.**
 *
 * @param request ConvertInstanceRequest
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstance(const ConvertInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertInstanceWithOptions(request, runtime);
}

/**
 * @summary Converts a subscription instance to pay-as-you-go.
 *
 * @description Before using this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-subscription-to-pay-as-you-go) of Alibaba Cloud Realtime Compute for Apache Flink.
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
 * @summary Converts a subscription instance to pay-as-you-go.
 *
 * @description Before using this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/flink/product-overview/switch-from-subscription-to-pay-as-you-go) of Alibaba Cloud Realtime Compute for Apache Flink.
 *
 * @param request ConvertPrepayInstanceRequest
 * @return ConvertPrepayInstanceResponse
 */
ConvertPrepayInstanceResponse Client::convertPrepayInstance(const ConvertPrepayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPrepayInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a subscription or pay-as-you-go fully managed Flink workspace.
 *
 * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink before you call this operation.**
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
 * @summary Creates a subscription or pay-as-you-go fully managed Flink workspace.
 *
 * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/billing-overview) of fully managed Flink before you call this operation.**
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace in a fully managed Flink instance.
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
 * @summary Creates a workspace in a fully managed Flink instance.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go Realtime Compute for Apache Flink workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/refund-policy) of Realtime Compute for Apache Flink.**
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
 * @summary Releases a pay-as-you-go Realtime Compute for Apache Flink workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/refund-policy) of Realtime Compute for Apache Flink.**
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a project workspace.
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
 * @summary Deletes a project workspace.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more fully managed Flink workspaces.
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
 * @summary Queries the details of one or more fully managed Flink workspaces.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the namespace information of a specified instance.
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
 * @summary Queries the namespace information of a specified instance.
 *
 * @param request DescribeNamespacesRequest
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespaces(const DescribeNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNamespacesWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about regions that support purchases of fully managed Flink.
 *
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
 * @summary Retrieves information about regions that support purchases of fully managed Flink.
 *
 * @return DescribeSupportedRegionsResponse
 */
DescribeSupportedRegionsResponse Client::describeSupportedRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedRegionsWithOptions(runtime);
}

/**
 * @summary Retrieves information about zones that are available for purchase.
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
 * @summary Retrieves information about zones that are available for purchase.
 *
 * @param request DescribeSupportedZonesRequest
 * @return DescribeSupportedZonesResponse
 */
DescribeSupportedZonesResponse Client::describeSupportedZones(const DescribeSupportedZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportedZonesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of the Flink AI service.
 *
 * @param request GetFlinkAiServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlinkAiServiceResponse
 */
GetFlinkAiServiceResponse Client::getFlinkAiServiceWithOptions(const GetFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFlinkAiService"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlinkAiServiceResponse>();
}

/**
 * @summary Retrieves the status of the Flink AI service.
 *
 * @param request GetFlinkAiServiceRequest
 * @return GetFlinkAiServiceResponse
 */
GetFlinkAiServiceResponse Client::getFlinkAiService(const GetFlinkAiServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlinkAiServiceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the free quota usage of Flink AI services.
 *
 * @param request GetFlinkAiServiceFreeQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlinkAiServiceFreeQuotaResponse
 */
GetFlinkAiServiceFreeQuotaResponse Client::getFlinkAiServiceFreeQuotaWithOptions(const GetFlinkAiServiceFreeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFlinkAiServiceFreeQuota"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlinkAiServiceFreeQuotaResponse>();
}

/**
 * @summary Retrieves the free quota usage of Flink AI services.
 *
 * @param request GetFlinkAiServiceFreeQuotaRequest
 * @return GetFlinkAiServiceFreeQuotaResponse
 */
GetFlinkAiServiceFreeQuotaResponse Client::getFlinkAiServiceFreeQuota(const GetFlinkAiServiceFreeQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlinkAiServiceFreeQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries resource tags. You can query tag keys by tag values, query tag values by tag keys, or retrieve all tag information used in your Flink fully managed workspace.
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
 * @summary Queries resource tags. You can query tag keys by tag values, query tag values by tag keys, or retrieve all tag information used in your Flink fully managed workspace.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the shutdown protection setting for a Flink AI service.
 *
 * @param request ModifyAiServiceProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAiServiceProtectionResponse
 */
ModifyAiServiceProtectionResponse Client::modifyAiServiceProtectionWithOptions(const ModifyAiServiceProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeletionProtection()) {
    body["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyAiServiceProtection"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAiServiceProtectionResponse>();
}

/**
 * @summary Modifies the shutdown protection setting for a Flink AI service.
 *
 * @param request ModifyAiServiceProtectionRequest
 * @return ModifyAiServiceProtectionResponse
 */
ModifyAiServiceProtectionResponse Client::modifyAiServiceProtection(const ModifyAiServiceProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAiServiceProtectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the maximum pay-as-you-go resource limit for a hybrid billing instance.
 *
 * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
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
 * @summary Modifies the maximum pay-as-you-go resource limit for a hybrid billing instance.
 *
 * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
 *
 * @param request ModifyElasticResourceSpecRequest
 * @return ModifyElasticResourceSpecResponse
 */
ModifyElasticResourceSpecResponse Client::modifyElasticResourceSpec(const ModifyElasticResourceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticResourceSpecWithOptions(request, runtime);
}

/**
 * @summary Scales up or scales down the resources of a workspace.
 *
 * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
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
 * @summary Scales up or scales down the resources of a workspace.
 *
 * @description Make sure that you are familiar with the [billing methods](https://www.alibabacloud.com/help/en/flink/user-guide/reconfigure-resources#task-2507532) and pricing of Realtime Compute for Apache Flink before you call this operation.
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
 * @summary Modifies the vSwitches available to a Flink workspace.
 *
 * @description Before using this operation, make sure that you fully understand the restrictions on [modifying vSwitches](https://www.alibabacloud.com/help/en/flink/user-guide/modify-a-vswitch) in Realtime Compute for Apache Flink.
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
 * @summary Modifies the vSwitches available to a Flink workspace.
 *
 * @description Before using this operation, make sure that you fully understand the restrictions on [modifying vSwitches](https://www.alibabacloud.com/help/en/flink/user-guide/modify-a-vswitch) in Realtime Compute for Apache Flink.
 *
 * @param request ModifyInstanceVswitchRequest
 * @return ModifyInstanceVswitchResponse
 */
ModifyInstanceVswitchResponse Client::modifyInstanceVswitch(const ModifyInstanceVswitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVswitchWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource configurations of a project namespace in a pay-as-you-go, subscription, or hybrid billing workspace.
 *
 * @description >When calling this operation, note the following: - The order status must be normal, that is, OrderType=NORMAL. - When decreasing the quota, the specified resource specification quantity cannot be less than the quantity already in use. For details about the project resource specifications before and after the change, call [DescribeNamespaces](https://help.aliyun.com/document_detail/323441.html).
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
 * @summary Modifies the resource configurations of a project namespace in a pay-as-you-go, subscription, or hybrid billing workspace.
 *
 * @description >When calling this operation, note the following: - The order status must be normal, that is, OrderType=NORMAL. - When decreasing the quota, the specified resource specification quantity cannot be less than the quantity already in use. For details about the project resource specifications before and after the change, call [DescribeNamespaces](https://help.aliyun.com/document_detail/323441.html).
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
 * @summary Modifies the compute resource specifications of a subscription Realtime Compute for Apache Flink instance. If the new specifications are smaller than the current specifications, a scale-in operation is performed. If the new specifications are larger than the current specifications, a scale-out operation is performed.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of Realtime Compute for Apache Flink.**
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
 * @summary Modifies the compute resource specifications of a subscription Realtime Compute for Apache Flink instance. If the new specifications are smaller than the current specifications, a scale-in operation is performed. If the new specifications are larger than the current specifications, a scale-out operation is performed.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/subscription) of Realtime Compute for Apache Flink.**
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
 * @summary Modifies the specifications of a namespace in a subscription instance.
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
 * @summary Modifies the specifications of a namespace in a subscription instance.
 *
 * @param request ModifyPrepayNamespaceSpecRequest
 * @return ModifyPrepayNamespaceSpecResponse
 */
ModifyPrepayNamespaceSpecResponse Client::modifyPrepayNamespaceSpec(const ModifyPrepayNamespaceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrepayNamespaceSpecWithOptions(request, runtime);
}

/**
 * @summary Activates the Flink AI service.
 *
 * @param request OpenFlinkAiServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenFlinkAiServiceResponse
 */
OpenFlinkAiServiceResponse Client::openFlinkAiServiceWithOptions(const OpenFlinkAiServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OpenFlinkAiService"},
    {"version" , "2021-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenFlinkAiServiceResponse>();
}

/**
 * @summary Activates the Flink AI service.
 *
 * @param request OpenFlinkAiServiceRequest
 * @return OpenFlinkAiServiceResponse
 */
OpenFlinkAiServiceResponse Client::openFlinkAiService(const OpenFlinkAiServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openFlinkAiServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the price for converting a pay-as-you-go instance to a subscription instance.
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
 * @summary Queries the price for converting a pay-as-you-go instance to a subscription instance.
 *
 * @param request QueryConvertInstancePriceRequest
 * @return QueryConvertInstancePriceResponse
 */
QueryConvertInstancePriceResponse Client::queryConvertInstancePrice(const QueryConvertInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the estimated refund amount after converting your Flink instance from subscription to pay-as-you-go. After the conversion, your usage is metered hourly and bills are generated accordingly.
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
 * @summary Queries the estimated refund amount after converting your Flink instance from subscription to pay-as-you-go. After the conversion, your usage is metered hourly and bills are generated accordingly.
 *
 * @param request QueryConvertPrepayInstancePriceRequest
 * @return QueryConvertPrepayInstancePriceResponse
 */
QueryConvertPrepayInstancePriceResponse Client::queryConvertPrepayInstancePrice(const QueryConvertPrepayInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConvertPrepayInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the price of a workspace for the current account.
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
 * @summary Retrieves the price of a workspace for the current account.
 *
 * @param request QueryCreateInstancePriceRequest
 * @return QueryCreateInstancePriceResponse
 */
QueryCreateInstancePriceResponse Client::queryCreateInstancePrice(const QueryCreateInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCreateInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the price for upgrading or downgrading an instance.
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
 * @summary Queries the price for upgrading or downgrading an instance.
 *
 * @param request QueryModifyInstancePriceRequest
 * @return QueryModifyInstancePriceResponse
 */
QueryModifyInstancePriceResponse Client::queryModifyInstancePrice(const QueryModifyInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryModifyInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the renewal price of a subscription workspace.
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
 * @summary Queries the renewal price of a subscription workspace.
 *
 * @param request QueryRenewInstancePriceRequest
 * @return QueryRenewInstancePriceResponse
 */
QueryRenewInstancePriceResponse Client::queryRenewInstancePrice(const QueryRenewInstancePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRenewInstancePriceWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription Realtime Compute for Apache Flink workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of Realtime Compute for Apache Flink.**
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
 * @summary Renews a subscription Realtime Compute for Apache Flink workspace.
 *
 * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/flink/product-overview/renewal-policy) of Realtime Compute for Apache Flink.**
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Call this API to add tags to resources.
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
 * @summary Call this API to add tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Deletes resource tags.
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
 * @summary Deletes resource tags.
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