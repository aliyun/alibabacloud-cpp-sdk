#include <darabonba/Core.hpp>
#include <alibabacloud/Market20151101.hpp>
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
using namespace AlibabaCloud::Market20151101::Models;
namespace AlibabaCloud
{
namespace Market20151101
{

AlibabaCloud::Market20151101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "market.aliyuncs.com"},
    {"ap-northeast-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "market.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "market.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "market.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing" , "market.aliyuncs.com"},
    {"cn-chengdu" , "market.aliyuncs.com"},
    {"cn-hongkong" , "market.aliyuncs.com"},
    {"cn-huhehaote" , "market.aliyuncs.com"},
    {"cn-qingdao" , "market.aliyuncs.com"},
    {"cn-shanghai" , "market.aliyuncs.com"},
    {"cn-shenzhen" , "market.aliyuncs.com"},
    {"cn-zhangjiakou" , "market.aliyuncs.com"},
    {"eu-central-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "market.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "market.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "market.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "market.aliyuncs.com"},
    {"cn-north-2-gov-1" , "market.aliyuncs.com"}
  });
  checkConfig(config);
  this->_endpoint = getEndpoint("market", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 增加STS支持
 *
 * @param request ActivateLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicenseWithOptions(const ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentification()) {
    query["Identification"] = request.identification();
  }

  if (!!request.hasLicenseCode()) {
    query["LicenseCode"] = request.licenseCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ActivateLicense"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ActivateLicenseResponse>();
}

/**
 * @summary 增加STS支持
 *
 * @param request ActivateLicenseRequest
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicense(const ActivateLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateLicenseWithOptions(request, runtime);
}

/**
 * @param request AutoRenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AutoRenewInstanceResponse
 */
AutoRenewInstanceResponse Client::autoRenewInstanceWithOptions(const AutoRenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRenewCycle()) {
    body["AutoRenewCycle"] = request.autoRenewCycle();
  }

  if (!!request.hasAutoRenewDuration()) {
    body["AutoRenewDuration"] = request.autoRenewDuration();
  }

  if (!!request.hasOrderBizId()) {
    body["OrderBizId"] = request.orderBizId();
  }

  if (!!request.hasOwnerId()) {
    body["OwnerId"] = request.ownerId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AutoRenewInstance"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<AutoRenewInstanceResponse>();
}

/**
 * @param request AutoRenewInstanceRequest
 * @return AutoRenewInstanceResponse
 */
AutoRenewInstanceResponse Client::autoRenewInstance(const AutoRenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return autoRenewInstanceWithOptions(request, runtime);
}

/**
 * @summary 确认查收订阅通知
 *
 * @param request ConfirmNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmNotificationResponse
 */
ConfirmNotificationResponse Client::confirmNotificationWithOptions(const ConfirmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNotificationRequestId()) {
    query["NotificationRequestId"] = request.notificationRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ConfirmNotification"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ConfirmNotificationResponse>();
}

/**
 * @summary 确认查收订阅通知
 *
 * @param request ConfirmNotificationRequest
 * @return ConfirmNotificationResponse
 */
ConfirmNotificationResponse Client::confirmNotification(const ConfirmNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmNotificationWithOptions(request, runtime);
}

/**
 * @param request CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.commodity();
  }

  if (!!request.hasOrderSouce()) {
    query["OrderSouce"] = request.orderSouce();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateOrderResponse>();
}

/**
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @param request CrossAccountVerifyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CrossAccountVerifyTokenResponse
 */
CrossAccountVerifyTokenResponse Client::crossAccountVerifyTokenWithOptions(const CrossAccountVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CrossAccountVerifyToken"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CrossAccountVerifyTokenResponse>();
}

/**
 * @param request CrossAccountVerifyTokenRequest
 * @return CrossAccountVerifyTokenResponse
 */
CrossAccountVerifyTokenResponse Client::crossAccountVerifyToken(const CrossAccountVerifyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return crossAccountVerifyTokenWithOptions(request, runtime);
}

/**
 * @summary 查询API用量
 *
 * @param request DescribeApiMeteringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiMeteringResponse
 */
DescribeApiMeteringResponse Client::describeApiMeteringWithOptions(const DescribeApiMeteringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeApiMetering"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeApiMeteringResponse>();
}

/**
 * @summary 查询API用量
 *
 * @param request DescribeApiMeteringRequest
 * @return DescribeApiMeteringResponse
 */
DescribeApiMeteringResponse Client::describeApiMetering(const DescribeApiMeteringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiMeteringWithOptions(request, runtime);
}

/**
 * @param request DescribeCurrentNodeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCurrentNodeInfoResponse
 */
DescribeCurrentNodeInfoResponse Client::describeCurrentNodeInfoWithOptions(const DescribeCurrentNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeCurrentNodeInfo"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeCurrentNodeInfoResponse>();
}

/**
 * @param request DescribeCurrentNodeInfoRequest
 * @return DescribeCurrentNodeInfoResponse
 */
DescribeCurrentNodeInfoResponse Client::describeCurrentNodeInfo(const DescribeCurrentNodeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCurrentNodeInfoWithOptions(request, runtime);
}

/**
 * @summary 分页获取推广商品
 *
 * @param request DescribeDistributionProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDistributionProductsResponse
 */
DescribeDistributionProductsResponse Client::describeDistributionProductsWithOptions(const DescribeDistributionProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeDistributionProducts"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeDistributionProductsResponse>();
}

/**
 * @summary 分页获取推广商品
 *
 * @param request DescribeDistributionProductsRequest
 * @return DescribeDistributionProductsResponse
 */
DescribeDistributionProductsResponse Client::describeDistributionProducts(const DescribeDistributionProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributionProductsWithOptions(request, runtime);
}

/**
 * @summary 获取并生成推广商品-链接
 *
 * @param tmpReq DescribeDistributionProductsLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDistributionProductsLinkResponse
 */
DescribeDistributionProductsLinkResponse Client::describeDistributionProductsLinkWithOptions(const DescribeDistributionProductsLinkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeDistributionProductsLinkShrinkRequest request = DescribeDistributionProductsLinkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCodes()) {
    request.setCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.codes(), "Codes", "json"));
  }

  json query = {};
  if (!!request.hasCodesShrink()) {
    query["Codes"] = request.codesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeDistributionProductsLink"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeDistributionProductsLinkResponse>();
}

/**
 * @summary 获取并生成推广商品-链接
 *
 * @param request DescribeDistributionProductsLinkRequest
 * @return DescribeDistributionProductsLinkResponse
 */
DescribeDistributionProductsLinkResponse Client::describeDistributionProductsLink(const DescribeDistributionProductsLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributionProductsLinkWithOptions(request, runtime);
}

/**
 * @summary 查询订阅通知失败列表
 *
 * @param request DescribeFailedNotificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFailedNotificationsResponse
 */
DescribeFailedNotificationsResponse Client::describeFailedNotificationsWithOptions(const DescribeFailedNotificationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeFailedNotifications"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeFailedNotificationsResponse>();
}

/**
 * @summary 查询订阅通知失败列表
 *
 * @param request DescribeFailedNotificationsRequest
 * @return DescribeFailedNotificationsResponse
 */
DescribeFailedNotificationsResponse Client::describeFailedNotifications(const DescribeFailedNotificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFailedNotificationsWithOptions(request, runtime);
}

/**
 * @summary 服务商侧查询镜像实例信息
 *
 * @param request DescribeImageInstanceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageInstanceForIsvResponse
 */
DescribeImageInstanceForIsvResponse Client::describeImageInstanceForIsvWithOptions(const DescribeImageInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerPk()) {
    query["CustomerPk"] = request.customerPk();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.ecsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeImageInstanceForIsv"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeImageInstanceForIsvResponse>();
}

/**
 * @summary 服务商侧查询镜像实例信息
 *
 * @param request DescribeImageInstanceForIsvRequest
 * @return DescribeImageInstanceForIsvResponse
 */
DescribeImageInstanceForIsvResponse Client::describeImageInstanceForIsv(const DescribeImageInstanceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageInstanceForIsvWithOptions(request, runtime);
}

/**
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary 服务商侧查询实例信息
 *
 * @param request DescribeInstanceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceForIsvResponse
 */
DescribeInstanceForIsvResponse Client::describeInstanceForIsvWithOptions(const DescribeInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeInstanceForIsv"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeInstanceForIsvResponse>();
}

/**
 * @summary 服务商侧查询实例信息
 *
 * @param request DescribeInstanceForIsvRequest
 * @return DescribeInstanceForIsvResponse
 */
DescribeInstanceForIsvResponse Client::describeInstanceForIsv(const DescribeInstanceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceForIsvWithOptions(request, runtime);
}

/**
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCodes()) {
    query["Codes"] = request.codes();
  }

  if (!!request.hasExceptCodes()) {
    query["ExceptCodes"] = request.exceptCodes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询供应商下的发票信息
 *
 * @param request DescribeInvoiceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvoiceForIsvResponse
 */
DescribeInvoiceForIsvResponse Client::describeInvoiceForIsvWithOptions(const DescribeInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasInvoiceId()) {
    query["InvoiceId"] = request.invoiceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeInvoiceForIsv"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeInvoiceForIsvResponse>();
}

/**
 * @summary 查询供应商下的发票信息
 *
 * @param request DescribeInvoiceForIsvRequest
 * @return DescribeInvoiceForIsvResponse
 */
DescribeInvoiceForIsvResponse Client::describeInvoiceForIsv(const DescribeInvoiceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvoiceForIsvWithOptions(request, runtime);
}

/**
 * @summary 获取License
 *
 * @param request DescribeLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLicenseResponse
 */
DescribeLicenseResponse Client::describeLicenseWithOptions(const DescribeLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLicenseCode()) {
    query["LicenseCode"] = request.licenseCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeLicense"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeLicenseResponse>();
}

/**
 * @summary 获取License
 *
 * @param request DescribeLicenseRequest
 * @return DescribeLicenseResponse
 */
DescribeLicenseResponse Client::describeLicense(const DescribeLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseWithOptions(request, runtime);
}

/**
 * @param request DescribeOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrderResponse
 */
DescribeOrderResponse Client::describeOrderWithOptions(const DescribeOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeOrder"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeOrderResponse>();
}

/**
 * @param request DescribeOrderRequest
 * @return DescribeOrderResponse
 */
DescribeOrderResponse Client::describeOrder(const DescribeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrderWithOptions(request, runtime);
}

/**
 * @summary 服务商侧查询订单详情
 *
 * @param request DescribeOrderForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrderForIsvResponse
 */
DescribeOrderForIsvResponse Client::describeOrderForIsvWithOptions(const DescribeOrderForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeOrderForIsv"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeOrderForIsvResponse>();
}

/**
 * @summary 服务商侧查询订单详情
 *
 * @param request DescribeOrderForIsvRequest
 * @return DescribeOrderForIsvResponse
 */
DescribeOrderForIsvResponse Client::describeOrderForIsv(const DescribeOrderForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrderForIsvWithOptions(request, runtime);
}

/**
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodity()) {
    query["Commodity"] = request.commodity();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @param request DescribeProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductResponse
 */
DescribeProductResponse Client::describeProductWithOptions(const DescribeProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.aliUid();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasQueryDraft()) {
    query["QueryDraft"] = request.queryDraft();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProduct"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProductResponse>();
}

/**
 * @param request DescribeProductRequest
 * @return DescribeProductResponse
 */
DescribeProductResponse Client::describeProduct(const DescribeProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductWithOptions(request, runtime);
}

/**
 * @param request DescribeProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProductsWithOptions(const DescribeProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchTerm()) {
    query["SearchTerm"] = request.searchTerm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProducts"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProductsResponse>();
}

/**
 * @param request DescribeProductsRequest
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProducts(const DescribeProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductsWithOptions(request, runtime);
}

/**
 * @param request DescribeProjectAttachmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectAttachmentsResponse
 */
DescribeProjectAttachmentsResponse Client::describeProjectAttachmentsWithOptions(const DescribeProjectAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProjectAttachments"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectAttachmentsResponse>();
}

/**
 * @param request DescribeProjectAttachmentsRequest
 * @return DescribeProjectAttachmentsResponse
 */
DescribeProjectAttachmentsResponse Client::describeProjectAttachments(const DescribeProjectAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectAttachmentsWithOptions(request, runtime);
}

/**
 * @param request DescribeProjectInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectInfoResponse
 */
DescribeProjectInfoResponse Client::describeProjectInfoWithOptions(const DescribeProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProjectInfo"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectInfoResponse>();
}

/**
 * @param request DescribeProjectInfoRequest
 * @return DescribeProjectInfoResponse
 */
DescribeProjectInfoResponse Client::describeProjectInfo(const DescribeProjectInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeProjectMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectMessagesResponse
 */
DescribeProjectMessagesResponse Client::describeProjectMessagesWithOptions(const DescribeProjectMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProjectMessages"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectMessagesResponse>();
}

/**
 * @param request DescribeProjectMessagesRequest
 * @return DescribeProjectMessagesResponse
 */
DescribeProjectMessagesResponse Client::describeProjectMessages(const DescribeProjectMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectMessagesWithOptions(request, runtime);
}

/**
 * @description **
 * **
 *
 * @param request DescribeProjectNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectNodesResponse
 */
DescribeProjectNodesResponse Client::describeProjectNodesWithOptions(const DescribeProjectNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProjectNodes"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectNodesResponse>();
}

/**
 * @description **
 * **
 *
 * @param request DescribeProjectNodesRequest
 * @return DescribeProjectNodesResponse
 */
DescribeProjectNodesResponse Client::describeProjectNodes(const DescribeProjectNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectNodesWithOptions(request, runtime);
}

/**
 * @param request DescribeProjectOperateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectOperateLogsResponse
 */
DescribeProjectOperateLogsResponse Client::describeProjectOperateLogsWithOptions(const DescribeProjectOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescribeProjectOperateLogs"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectOperateLogsResponse>();
}

/**
 * @param request DescribeProjectOperateLogsRequest
 * @return DescribeProjectOperateLogsResponse
 */
DescribeProjectOperateLogsResponse Client::describeProjectOperateLogs(const DescribeProjectOperateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectOperateLogsWithOptions(request, runtime);
}

/**
 * @param request FinishCurrentProjectNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishCurrentProjectNodeResponse
 */
FinishCurrentProjectNodeResponse Client::finishCurrentProjectNodeWithOptions(const FinishCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTemplateForm()) {
    query["TemplateForm"] = request.templateForm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "FinishCurrentProjectNode"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<FinishCurrentProjectNodeResponse>();
}

/**
 * @param request FinishCurrentProjectNodeRequest
 * @return FinishCurrentProjectNodeResponse
 */
FinishCurrentProjectNodeResponse Client::finishCurrentProjectNode(const FinishCurrentProjectNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishCurrentProjectNodeWithOptions(request, runtime);
}

/**
 * @summary 发票受理接口
 *
 * @param request ModifyInvoiceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInvoiceForIsvResponse
 */
ModifyInvoiceForIsvResponse Client::modifyInvoiceForIsvWithOptions(const ModifyInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckNotice()) {
    query["CheckNotice"] = request.checkNotice();
  }

  if (!!request.hasElectronUrl()) {
    query["ElectronUrl"] = request.electronUrl();
  }

  if (!!request.hasInvoiceId()) {
    query["InvoiceId"] = request.invoiceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ModifyInvoiceForIsv"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ModifyInvoiceForIsvResponse>();
}

/**
 * @summary 发票受理接口
 *
 * @param request ModifyInvoiceForIsvRequest
 * @return ModifyInvoiceForIsvResponse
 */
ModifyInvoiceForIsvResponse Client::modifyInvoiceForIsv(const ModifyInvoiceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInvoiceForIsvWithOptions(request, runtime);
}

/**
 * @param request PauseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseProjectResponse
 */
PauseProjectResponse Client::pauseProjectWithOptions(const PauseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "PauseProject"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PauseProjectResponse>();
}

/**
 * @param request PauseProjectRequest
 * @return PauseProjectResponse
 */
PauseProjectResponse Client::pauseProject(const PauseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseProjectWithOptions(request, runtime);
}

/**
 * @param request PushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringDataWithOptions(const PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetering()) {
    query["Metering"] = request.metering();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "PushMeteringData"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PushMeteringDataResponse>();
}

/**
 * @param request PushMeteringDataRequest
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringData(const PushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMeteringDataWithOptions(request, runtime);
}

/**
 * @param request ResumeProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeProjectResponse
 */
ResumeProjectResponse Client::resumeProjectWithOptions(const ResumeProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ResumeProject"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ResumeProjectResponse>();
}

/**
 * @param request ResumeProjectRequest
 * @return ResumeProjectResponse
 */
ResumeProjectResponse Client::resumeProject(const ResumeProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeProjectWithOptions(request, runtime);
}

/**
 * @param request RollbackCurrentProjectNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackCurrentProjectNodeResponse
 */
RollbackCurrentProjectNodeResponse Client::rollbackCurrentProjectNodeWithOptions(const RollbackCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "RollbackCurrentProjectNode"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<RollbackCurrentProjectNodeResponse>();
}

/**
 * @param request RollbackCurrentProjectNodeRequest
 * @return RollbackCurrentProjectNodeResponse
 */
RollbackCurrentProjectNodeResponse Client::rollbackCurrentProjectNode(const RollbackCurrentProjectNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackCurrentProjectNodeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Market20151101