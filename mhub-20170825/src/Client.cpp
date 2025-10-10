#include <darabonba/Core.hpp>
#include <alibabacloud/Mhub20170825.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Mhub20170825::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mhub20170825
{

AlibabaCloud::Mhub20170825::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("mhub", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request CreateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.bundleId();
  }

  if (!!request.hasEncodedIcon()) {
    query["EncodedIcon"] = request.encodedIcon();
  }

  if (!!request.hasIndustryId()) {
    query["IndustryId"] = request.industryId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPackageName()) {
    query["PackageName"] = request.packageName();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppWithOptions(request, runtime);
}

/**
 * @param request CreateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProductWithOptions(const CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "CreateProduct"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductResponse>();
}

/**
 * @param request CreateProductRequest
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProduct(const CreateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductWithOptions(request, runtime);
}

/**
 * @param request DeleteAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteAppWithOptions(const DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApp"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppResponse>();
}

/**
 * @param request DeleteAppRequest
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteApp(const DeleteAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppWithOptions(request, runtime);
}

/**
 * @param request DeleteProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProductWithOptions(const DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProduct"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProductResponse>();
}

/**
 * @param request DeleteProductRequest
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProduct(const DeleteProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProductWithOptions(request, runtime);
}

/**
 * @summary 获取emas dashboard
 *
 * @param request DescribeDashboardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDashboardResponse
 */
DescribeDashboardResponse Client::describeDashboardWithOptions(const DescribeDashboardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.appVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasProxyAction()) {
    query["ProxyAction"] = request.proxyAction();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDashboard"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDashboardResponse>();
}

/**
 * @summary 获取emas dashboard
 *
 * @param request DescribeDashboardRequest
 * @return DescribeDashboardResponse
 */
DescribeDashboardResponse Client::describeDashboard(const DescribeDashboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDashboardWithOptions(request, runtime);
}

/**
 * @summary 展示用户应用列表
 *
 * @param request ListAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppsResponse
 */
ListAppsResponse Client::listAppsWithOptions(const ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApps"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppsResponse>();
}

/**
 * @summary 展示用户应用列表
 *
 * @param request ListAppsRequest
 * @return ListAppsResponse
 */
ListAppsResponse Client::listApps(const ListAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppsWithOptions(request, runtime);
}

/**
 * @summary 分页获取产品(在基座中表达为项目)列表
 *
 * @param request ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasSearchKeyWord()) {
    query["SearchKeyWord"] = request.searchKeyWord();
  }

  if (!!request.hasSimple()) {
    query["Simple"] = request.simple();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary 分页获取产品(在基座中表达为项目)列表
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @param request ModifyAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyAppWithOptions(const ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBundleId()) {
    query["BundleId"] = request.bundleId();
  }

  if (!!request.hasEncodedIcon()) {
    query["EncodedIcon"] = request.encodedIcon();
  }

  if (!!request.hasIndustryId()) {
    query["IndustryId"] = request.industryId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPackageName()) {
    query["PackageName"] = request.packageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApp"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppResponse>();
}

/**
 * @param request ModifyAppRequest
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyApp(const ModifyAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppWithOptions(request, runtime);
}

/**
 * @param request ModifyProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProductResponse
 */
ModifyProductResponse Client::modifyProductWithOptions(const ModifyProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProduct"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProductResponse>();
}

/**
 * @param request ModifyProductRequest
 * @return ModifyProductResponse
 */
ModifyProductResponse Client::modifyProduct(const ModifyProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProductWithOptions(request, runtime);
}

/**
 * @param request OpenEmasServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenEmasServiceResponse
 */
OpenEmasServiceResponse Client::openEmasServiceWithOptions(const OpenEmasServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenEmasService"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenEmasServiceResponse>();
}

/**
 * @param request OpenEmasServiceRequest
 * @return OpenEmasServiceResponse
 */
OpenEmasServiceResponse Client::openEmasService(const OpenEmasServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openEmasServiceWithOptions(request, runtime);
}

/**
 * @param request QueryAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAppInfoResponse
 */
QueryAppInfoResponse Client::queryAppInfoWithOptions(const QueryAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAppInfo"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAppInfoResponse>();
}

/**
 * @param request QueryAppInfoRequest
 * @return QueryAppInfoResponse
 */
QueryAppInfoResponse Client::queryAppInfo(const QueryAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAppInfoWithOptions(request, runtime);
}

/**
 * @summary 查询应用对应的安全字段
 *
 * @param request QueryAppSecurityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAppSecurityInfoResponse
 */
QueryAppSecurityInfoResponse Client::queryAppSecurityInfoWithOptions(const QueryAppSecurityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAppSecurityInfo"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAppSecurityInfoResponse>();
}

/**
 * @summary 查询应用对应的安全字段
 *
 * @param request QueryAppSecurityInfoRequest
 * @return QueryAppSecurityInfoResponse
 */
QueryAppSecurityInfoResponse Client::queryAppSecurityInfo(const QueryAppSecurityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAppSecurityInfoWithOptions(request, runtime);
}

/**
 * @summary 查询基座的Product信息
 *
 * @param request QueryProductInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProductInfoResponse
 */
QueryProductInfoResponse Client::queryProductInfoWithOptions(const QueryProductInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProductInfo"},
    {"version" , "2017-08-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProductInfoResponse>();
}

/**
 * @summary 查询基座的Product信息
 *
 * @param request QueryProductInfoRequest
 * @return QueryProductInfoResponse
 */
QueryProductInfoResponse Client::queryProductInfo(const QueryProductInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProductInfoWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mhub20170825