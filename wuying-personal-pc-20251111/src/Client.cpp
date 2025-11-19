#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingPersonalPc20251111.hpp>
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
using namespace AlibabaCloud::WuyingPersonalPc20251111::Models;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{

AlibabaCloud::WuyingPersonalPc20251111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("wuying-personal-pc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建桌面镜像
 *
 * @param tmpReq CreateDesktopImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDesktopImageResponse
 */
CreateDesktopImageResponse Client::createDesktopImageWithOptions(const CreateDesktopImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDesktopImageShrinkRequest request = CreateDesktopImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStartUpFilePathList()) {
    request.setStartUpFilePathListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.startUpFilePathList(), "StartUpFilePathList", "json"));
  }

  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasAutoCleanUserData()) {
    query["AutoCleanUserData"] = request.autoCleanUserData();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.diskType();
  }

  if (!!request.hasEnableStartUpConfig()) {
    query["EnableStartUpConfig"] = request.enableStartUpConfig();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.imageName();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStartUpFilePathListShrink()) {
    query["StartUpFilePathList"] = request.startUpFilePathListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDesktopImage"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<CreateDesktopImageResponse>();
}

/**
 * @summary 创建桌面镜像
 *
 * @param request CreateDesktopImageRequest
 * @return CreateDesktopImageResponse
 */
CreateDesktopImageResponse Client::createDesktopImage(const CreateDesktopImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDesktopImageWithOptions(request, runtime);
}

/**
 * @summary 下单套餐包和核时包
 *
 * @param tmpReq CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrderShrinkRequest request = CreateOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDynamicProductParams()) {
    request.setDynamicProductParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dynamicProductParams(), "DynamicProductParams", "json"));
  }

  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasDynamicProductParamsShrink()) {
    query["DynamicProductParams"] = request.dynamicProductParamsShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasOrderFrom()) {
    query["OrderFrom"] = request.orderFrom();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<CreateOrderResponse>();
}

/**
 * @summary 下单套餐包和核时包
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary 删除云桌面
 *
 * @param request DeleteDesktopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDesktopResponse
 */
DeleteDesktopResponse Client::deleteDesktopWithOptions(const DeleteDesktopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDesktop"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DeleteDesktopResponse>();
}

/**
 * @summary 删除云桌面
 *
 * @param request DeleteDesktopRequest
 * @return DeleteDesktopResponse
 */
DeleteDesktopResponse Client::deleteDesktop(const DeleteDesktopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDesktopWithOptions(request, runtime);
}

/**
 * @summary 删除桌面镜像
 *
 * @param request DeleteDesktopImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDesktopImageResponse
 */
DeleteDesktopImageResponse Client::deleteDesktopImageWithOptions(const DeleteDesktopImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasIsCleanImageCode()) {
    query["IsCleanImageCode"] = request.isCleanImageCode();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDesktopImage"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DeleteDesktopImageResponse>();
}

/**
 * @summary 删除桌面镜像
 *
 * @param request DeleteDesktopImageRequest
 * @return DeleteDesktopImageResponse
 */
DeleteDesktopImageResponse Client::deleteDesktopImage(const DeleteDesktopImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDesktopImageWithOptions(request, runtime);
}

/**
 * @summary 查询用户可变更的镜像
 *
 * @param request DescribeAccessibleImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessibleImagesResponse
 */
DescribeAccessibleImagesResponse Client::describeAccessibleImagesWithOptions(const DescribeAccessibleImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasBizSource()) {
    query["BizSource"] = request.bizSource();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.desktopType();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessibleImages"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeAccessibleImagesResponse>();
}

/**
 * @summary 查询用户可变更的镜像
 *
 * @param request DescribeAccessibleImagesRequest
 * @return DescribeAccessibleImagesResponse
 */
DescribeAccessibleImagesResponse Client::describeAccessibleImages(const DescribeAccessibleImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessibleImagesWithOptions(request, runtime);
}

/**
 * @summary 查询核时包包列表
 *
 * @param request DescribeCorePackageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCorePackageListResponse
 */
DescribeCorePackageListResponse Client::describeCorePackageListWithOptions(const DescribeCorePackageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasQueryDeductionInstances()) {
    query["QueryDeductionInstances"] = request.queryDeductionInstances();
  }

  if (!!request.hasQueryScenario()) {
    query["QueryScenario"] = request.queryScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCorePackageList"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeCorePackageListResponse>();
}

/**
 * @summary 查询核时包包列表
 *
 * @param request DescribeCorePackageListRequest
 * @return DescribeCorePackageListResponse
 */
DescribeCorePackageListResponse Client::describeCorePackageList(const DescribeCorePackageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCorePackageListWithOptions(request, runtime);
}

/**
 * @summary 软终端分tab查询云桌面列表 & 组织信息
 *
 * @param request DescribeDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopsResponse
 */
DescribeDesktopsResponse Client::describeDesktopsWithOptions(const DescribeDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasDisplayType()) {
    query["DisplayType"] = request.displayType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktops"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeDesktopsResponse>();
}

/**
 * @summary 软终端分tab查询云桌面列表 & 组织信息
 *
 * @param request DescribeDesktopsRequest
 * @return DescribeDesktopsResponse
 */
DescribeDesktopsResponse Client::describeDesktops(const DescribeDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopsWithOptions(request, runtime);
}

/**
 * @summary 根据分享码查询镜像
 *
 * @param request DescribeImageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageDetailResponse
 */
DescribeImageDetailResponse Client::describeImageDetailWithOptions(const DescribeImageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasShareCode()) {
    query["ShareCode"] = request.shareCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImageDetail"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeImageDetailResponse>();
}

/**
 * @summary 根据分享码查询镜像
 *
 * @param request DescribeImageDetailRequest
 * @return DescribeImageDetailResponse
 */
DescribeImageDetailResponse Client::describeImageDetail(const DescribeImageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageDetailWithOptions(request, runtime);
}

/**
 * @summary 查询套餐包订单列表
 *
 * @param tmpReq DescribePackageOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackageOrdersResponse
 */
DescribePackageOrdersResponse Client::describePackageOrdersWithOptions(const DescribePackageOrdersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePackageOrdersShrinkRequest request = DescribePackageOrdersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDesktopIdList()) {
    request.setDesktopIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.desktopIdList(), "DesktopIdList", "json"));
  }

  if (!!tmpReq.hasOrderIdList()) {
    request.setOrderIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.orderIdList(), "OrderIdList", "json"));
  }

  if (!!tmpReq.hasOrderStatusList()) {
    request.setOrderStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.orderStatusList(), "OrderStatusList", "json"));
  }

  if (!!tmpReq.hasProductTypeList()) {
    request.setProductTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.productTypeList(), "ProductTypeList", "json"));
  }

  if (!!tmpReq.hasResourceIdList()) {
    request.setResourceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceIdList(), "ResourceIdList", "json"));
  }

  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDesktopIdListShrink()) {
    query["DesktopIdList"] = request.desktopIdListShrink();
  }

  if (!!request.hasOrderIdListShrink()) {
    query["OrderIdList"] = request.orderIdListShrink();
  }

  if (!!request.hasOrderStatusListShrink()) {
    query["OrderStatusList"] = request.orderStatusListShrink();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductTypeListShrink()) {
    query["ProductTypeList"] = request.productTypeListShrink();
  }

  if (!!request.hasResourceIdListShrink()) {
    query["ResourceIdList"] = request.resourceIdListShrink();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackageOrders"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribePackageOrdersResponse>();
}

/**
 * @summary 查询套餐包订单列表
 *
 * @param request DescribePackageOrdersRequest
 * @return DescribePackageOrdersResponse
 */
DescribePackageOrdersResponse Client::describePackageOrders(const DescribePackageOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackageOrdersWithOptions(request, runtime);
}

/**
 * @summary 生成无影工作站的场景url
 *
 * @param request GenerateWuyingServerSceneUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWuyingServerSceneUrlResponse
 */
GenerateWuyingServerSceneUrlResponse Client::generateWuyingServerSceneUrlWithOptions(const GenerateWuyingServerSceneUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientType()) {
    body["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateWuyingServerSceneUrl"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GenerateWuyingServerSceneUrlResponse>();
}

/**
 * @summary 生成无影工作站的场景url
 *
 * @param request GenerateWuyingServerSceneUrlRequest
 * @return GenerateWuyingServerSceneUrlResponse
 */
GenerateWuyingServerSceneUrlResponse Client::generateWuyingServerSceneUrl(const GenerateWuyingServerSceneUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateWuyingServerSceneUrlWithOptions(request, runtime);
}

/**
 * @summary 查询展示商品列表
 *
 * @param request GetProductListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductListResponse
 */
GetProductListResponse Client::getProductListWithOptions(const GetProductListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasConfigVersion()) {
    query["ConfigVersion"] = request.configVersion();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductList"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetProductListResponse>();
}

/**
 * @summary 查询展示商品列表
 *
 * @param request GetProductListRequest
 * @return GetProductListResponse
 */
GetProductListResponse Client::getProductList(const GetProductListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductListWithOptions(request, runtime);
}

/**
 * @summary 获取用户信息
 *
 * @param request GetUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfoWithOptions(const GetUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInfo"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetUserInfoResponse>();
}

/**
 * @summary 获取用户信息
 *
 * @param request GetUserInfoRequest
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfo(const GetUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserInfoWithOptions(request, runtime);
}

/**
 * @summary 开机
 *
 * @param request StartDesktopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDesktopResponse
 */
StartDesktopResponse Client::startDesktopWithOptions(const StartDesktopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDesktop"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StartDesktopResponse>();
}

/**
 * @summary 开机
 *
 * @param request StartDesktopRequest
 * @return StartDesktopResponse
 */
StartDesktopResponse Client::startDesktop(const StartDesktopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDesktopWithOptions(request, runtime);
}

/**
 * @summary 关机
 *
 * @param request StopDesktopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDesktopResponse
 */
StopDesktopResponse Client::stopDesktopWithOptions(const StopDesktopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.apiKey();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDesktop"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StopDesktopResponse>();
}

/**
 * @summary 关机
 *
 * @param request StopDesktopRequest
 * @return StopDesktopResponse
 */
StopDesktopResponse Client::stopDesktop(const StopDesktopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDesktopWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111