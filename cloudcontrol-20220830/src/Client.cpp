#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudcontrol20220830.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Cloudcontrol20220830::Models;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{

AlibabaCloud::Cloudcontrol20220830::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-6" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-7" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing" , "cloudcontrol.aliyuncs.com"},
    {"cn-chengdu" , "cloudcontrol.aliyuncs.com"},
    {"cn-fuzhou" , "cloudcontrol.aliyuncs.com"},
    {"cn-guangzhou" , "cloudcontrol.aliyuncs.com"},
    {"cn-hangzhou" , "cloudcontrol.aliyuncs.com"},
    {"cn-heyuan" , "cloudcontrol.aliyuncs.com"},
    {"cn-hongkong" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"cn-huhehaote" , "cloudcontrol.aliyuncs.com"},
    {"cn-nanjing" , "cloudcontrol.aliyuncs.com"},
    {"cn-qingdao" , "cloudcontrol.aliyuncs.com"},
    {"cn-shanghai" , "cloudcontrol.aliyuncs.com"},
    {"cn-shenzhen" , "cloudcontrol.aliyuncs.com"},
    {"cn-wulanchabu" , "cloudcontrol.aliyuncs.com"},
    {"cn-zhangjiakou" , "cloudcontrol.aliyuncs.com"},
    {"us-west-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"me-central-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "cloudcontrol.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudcontrol", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Calls this operation to cancel a specified asynchronous task.
 *
 * @description Only tasks that are in the Pending or Running state can be canceled.
 * You can call the CancelTask operation to cancel a Cloud Control API task, but the tasks that have been started in the downstream Alibaba Cloud services cannot be canceled.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/operation/cancel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary Calls this operation to cancel a specified asynchronous task.
 *
 * @description Only tasks that are in the Pending or Running state can be canceled.
 * You can call the CancelTask operation to cancel a Cloud Control API task, but the tasks that have been started in the downstream Alibaba Cloud services cannot be canceled.
 *
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary Calls this operation to create resources.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
 *
 * @param requestPath the whole path of resource string
 * @param request CreateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const string &requestPath, const CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateResource"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceResponse>();
}

/**
 * @summary Calls this operation to create resources.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
 *
 * @param requestPath the whole path of resource string
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const string &requestPath, const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceWithOptions(requestPath, request, headers, runtime);
}

/**
 * @summary Deletes a resource.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view resource documentation and try Cloud Control API.
 *
 * @param requestPath the whole path of resource string
 * @param tmpReq DeleteResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const string &requestPath, const DeleteResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteResourceShrinkRequest request = DeleteResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasFilterShrink()) {
    query["filter"] = request.getFilterShrink();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResource"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceResponse>();
}

/**
 * @summary Deletes a resource.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view resource documentation and try Cloud Control API.
 *
 * @param requestPath the whole path of resource string
 * @param request DeleteResourceRequest
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const string &requestPath, const DeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceWithOptions(requestPath, request, headers, runtime);
}

/**
 * @summary Queries pricing based on an OpenAPI triplet and input parameters.
 *
 * @param request GetApiPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiPriceResponse
 */
GetApiPriceResponse Client::getApiPriceWithOptions(const GetApiPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "GetApiPrice"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/price/quote")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiPriceResponse>();
}

/**
 * @summary Queries pricing based on an OpenAPI triplet and input parameters.
 *
 * @param request GetApiPriceRequest
 * @return GetApiPriceResponse
 */
GetApiPriceResponse Client::getApiPrice(const GetApiPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiPriceWithOptions(request, headers, runtime);
}

/**
 * @summary An RFQ interface through which users can query resource prices.
 *
 * @param requestPath the whole path of resource string
 * @param tmpReq GetPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPriceResponse
 */
GetPriceResponse Client::getPriceWithOptions(const string &requestPath, const GetPriceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPriceShrinkRequest request = GetPriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceAttributes()) {
    request.setResourceAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceAttributes(), "resourceAttributes", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceAttributesShrink()) {
    query["resourceAttributes"] = request.getResourceAttributesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrice"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPriceResponse>();
}

/**
 * @summary An RFQ interface through which users can query resource prices.
 *
 * @param requestPath the whole path of resource string
 * @param request GetPriceRequest
 * @return GetPriceResponse
 */
GetPriceResponse Client::getPrice(const string &requestPath, const GetPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPriceWithOptions(requestPath, request, headers, runtime);
}

/**
 * @summary Retrieves resource metadata.
 *
 * @param requestPath the whole path of resource string
 * @param headers GetResourceTypeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceTypeWithOptions(const string &requestPath, const GetResourceTypeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAcceptLanguage()) {
    realHeaders["x-acs-accept-language"] = Darabonba::Convert::stringVal(headers.getXAcsAcceptLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceType"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceTypeResponse>();
}

/**
 * @summary Retrieves resource metadata.
 *
 * @param requestPath the whole path of resource string
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceType(const string &requestPath) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetResourceTypeHeaders headers = GetResourceTypeHeaders();
  return getResourceTypeWithOptions(requestPath, headers, runtime);
}

/**
 * @summary Query resources.
 *
 * @description You can go to the [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the resource documentation and test the Cloud Control API.
 * This API provides Get and List operations for resources that you can invoke using different request URIs.
 *
 * @param requestPath the whole path of resource string
 * @param tmpReq GetResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourcesResponse
 */
GetResourcesResponse Client::getResourcesWithOptions(const string &requestPath, const GetResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourcesShrinkRequest request = GetResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["filter"] = request.getFilterShrink();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResources"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourcesResponse>();
}

/**
 * @summary Query resources.
 *
 * @description You can go to the [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the resource documentation and test the Cloud Control API.
 * This API provides Get and List operations for resources that you can invoke using different request URIs.
 *
 * @param requestPath the whole path of resource string
 * @param request GetResourcesRequest
 * @return GetResourcesResponse
 */
GetResourcesResponse Client::getResources(const string &requestPath, const GetResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourcesWithOptions(requestPath, request, headers, runtime);
}

/**
 * @summary Calls this operation to query a specified asynchronous task.
 *
 * @description GET /api/v1/tasks/{taskId}.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Calls this operation to query a specified asynchronous task.
 *
 * @description GET /api/v1/tasks/{taskId}.
 *
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary Retrieves pricing mapping catalogs in batches by Terraform resource type for cost estimation during the RunIaC plan phase.
 *
 * @description Retrieves the mappings between schema properties in the Terraform alicloud provider and OpenAPI parameters.
 *
 * @param request GetTerraformPricingMappingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTerraformPricingMappingsResponse
 */
GetTerraformPricingMappingsResponse Client::getTerraformPricingMappingsWithOptions(const GetTerraformPricingMappingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "GetTerraformPricingMappings"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/price/terraform-mappings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTerraformPricingMappingsResponse>();
}

/**
 * @summary Retrieves pricing mapping catalogs in batches by Terraform resource type for cost estimation during the RunIaC plan phase.
 *
 * @description Retrieves the mappings between schema properties in the Terraform alicloud provider and OpenAPI parameters.
 *
 * @param request GetTerraformPricingMappingsRequest
 * @return GetTerraformPricingMappingsResponse
 */
GetTerraformPricingMappingsResponse Client::getTerraformPricingMappings(const GetTerraformPricingMappingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTerraformPricingMappingsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the valid values of resource attributes, such as RegionID and ZoneId.
 *
 * @param requestPath the whole path of resource string
 * @param tmpReq ListDataSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const string &requestPath, const ListDataSourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSourcesShrinkRequest request = ListDataSourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasAttributeName()) {
    query["attributeName"] = request.getAttributeName();
  }

  if (!!request.hasFilterShrink()) {
    query["filter"] = request.getFilterShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary Queries the valid values of resource attributes, such as RegionID and ZoneId.
 *
 * @param requestPath the whole path of resource string
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const string &requestPath, const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourcesWithOptions(requestPath, request, headers, runtime);
}

/**
 * @summary Calls this operation to list the supported services.
 *
 * @description GET /api/v1/providers/{provider}/products.
 *
 * @param request ListProductsRequest
 * @param headers ListProductsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const string &provider, const ListProductsRequest &request, const ListProductsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAcceptLanguage()) {
    realHeaders["x-acs-accept-language"] = Darabonba::Convert::stringVal(headers.getXAcsAcceptLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/providers/" , Darabonba::Encode::Encoder::percentEncode(provider) , "/products")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary Calls this operation to list the supported services.
 *
 * @description GET /api/v1/providers/{provider}/products.
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const string &provider, const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListProductsHeaders headers = ListProductsHeaders();
  return listProductsWithOptions(provider, request, headers, runtime);
}

/**
 * @summary Calls this operation to list the resource types of a service.
 *
 * @description GET /api/v1/providers/{provider}/products/{product}/resourceTypes.
 *
 * @param tmpReq ListResourceTypesRequest
 * @param headers ListResourceTypesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypesWithOptions(const string &provider, const string &product, const ListResourceTypesRequest &tmpReq, const ListResourceTypesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourceTypesShrinkRequest request = ListResourceTypesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceTypes()) {
    request.setResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTypes(), "resourceTypes", "simple"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceTypesShrink()) {
    query["resourceTypes"] = request.getResourceTypesShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAcceptLanguage()) {
    realHeaders["x-acs-accept-language"] = Darabonba::Convert::stringVal(headers.getXAcsAcceptLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypes"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/providers/" , Darabonba::Encode::Encoder::percentEncode(provider) , "/products/" , Darabonba::Encode::Encoder::percentEncode(product) , "/resourceTypes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTypesResponse>();
}

/**
 * @summary Calls this operation to list the resource types of a service.
 *
 * @description GET /api/v1/providers/{provider}/products/{product}/resourceTypes.
 *
 * @param request ListResourceTypesRequest
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypes(const string &provider, const string &product, const ListResourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListResourceTypesHeaders headers = ListResourceTypesHeaders();
  return listResourceTypesWithOptions(provider, product, request, headers, runtime);
}

/**
 * @summary Lists the OpenAPI triplets that currently support price inquiry.
 *
 * @param request ListSupportedPricingApisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportedPricingApisResponse
 */
ListSupportedPricingApisResponse Client::listSupportedPricingApisWithOptions(const ListSupportedPricingApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupportedPricingApis"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/price/supported-apis")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportedPricingApisResponse>();
}

/**
 * @summary Lists the OpenAPI triplets that currently support price inquiry.
 *
 * @param request ListSupportedPricingApisRequest
 * @return ListSupportedPricingApisResponse
 */
ListSupportedPricingApisResponse Client::listSupportedPricingApis(const ListSupportedPricingApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSupportedPricingApisWithOptions(request, headers, runtime);
}

/**
 * @summary Calls this operation to update resources.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
 * If resources fail to be updated at any time, the Cloud Control API does not roll the resource back to the original status.
 * The resource APIs cannot be rolled back. If the API operation is partially failed to be called, you can call the GetResource operation to view the latest status of the resource. If necessary, you can call the UpdateResource or DeleteResource operation to manually compensate for the failure.
 *
 * @param requestPath the whole path of resource string
 * @param request UpdateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResourceWithOptions(const string &requestPath, const UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateResource"},
    {"version" , "2022-08-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("" , requestPath)},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceResponse>();
}

/**
 * @summary Calls this operation to update resources.
 *
 * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
 * If resources fail to be updated at any time, the Cloud Control API does not roll the resource back to the original status.
 * The resource APIs cannot be rolled back. If the API operation is partially failed to be called, you can call the GetResource operation to view the latest status of the resource. If necessary, you can call the UpdateResource or DeleteResource operation to manually compensate for the failure.
 *
 * @param requestPath the whole path of resource string
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const string &requestPath, const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceWithOptions(requestPath, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830