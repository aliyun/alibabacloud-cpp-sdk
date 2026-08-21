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
    {"cn-north-2-gov-1" , "market.aliyuncs.com"},
    {"ap-southeast-1" , "market.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Activates an authorization code by calling ActivateLicense.
 *
 * @param request ActivateLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicenseWithOptions(const ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentification()) {
    query["Identification"] = request.getIdentification();
  }

  if (!!request.hasLicenseCode()) {
    query["LicenseCode"] = request.getLicenseCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateLicenseResponse>();
}

/**
 * @summary Activates an authorization code by calling ActivateLicense.
 *
 * @param request ActivateLicenseRequest
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicense(const ActivateLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateLicenseWithOptions(request, runtime);
}

/**
 * @summary Sets auto-renewal.
 *
 * @param request AutoRenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AutoRenewInstanceResponse
 */
AutoRenewInstanceResponse Client::autoRenewInstanceWithOptions(const AutoRenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRenewCycle()) {
    body["AutoRenewCycle"] = request.getAutoRenewCycle();
  }

  if (!!request.hasAutoRenewDuration()) {
    body["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasOrderBizId()) {
    body["OrderBizId"] = request.getOrderBizId();
  }

  if (!!request.hasOwnerId()) {
    body["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AutoRenewInstanceResponse>();
}

/**
 * @summary Sets auto-renewal.
 *
 * @param request AutoRenewInstanceRequest
 * @return AutoRenewInstanceResponse
 */
AutoRenewInstanceResponse Client::autoRenewInstance(const AutoRenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return autoRenewInstanceWithOptions(request, runtime);
}

/**
 * @summary Confirms that the merchant has received and processed a notification message. After this call, the message will no longer be returned in subsequent queries.
 *
 * @description Confirms the receipt of a subscription notification failure message.
 * - After a successful call, the message will no longer be returned in subsequent queries. The platform considers that the merchant has correctly processed the message.
 *
 * @param request ConfirmNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmNotificationResponse
 */
ConfirmNotificationResponse Client::confirmNotificationWithOptions(const ConfirmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNotificationRequestId()) {
    query["NotificationRequestId"] = request.getNotificationRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmNotificationResponse>();
}

/**
 * @summary Confirms that the merchant has received and processed a notification message. After this call, the message will no longer be returned in subsequent queries.
 *
 * @description Confirms the receipt of a subscription notification failure message.
 * - After a successful call, the message will no longer be returned in subsequent queries. The platform considers that the merchant has correctly processed the message.
 *
 * @param request ConfirmNotificationRequest
 * @return ConfirmNotificationResponse
 */
ConfirmNotificationResponse Client::confirmNotification(const ConfirmNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmNotificationWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateOrder operation to create an order.
 * Before calling this operation, make sure that you fully understand the billing method and pricing of Alibaba Cloud Marketplace products.
 * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
 *
 * @description Before calling this operation, make sure that you fully understand the billing method and [pricing](https://market.aliyun.com/) of Alibaba Cloud Marketplace products.
 * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
 *
 * @param request CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasOrderSouce()) {
    query["OrderSouce"] = request.getOrderSouce();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderResponse>();
}

/**
 * @summary Calls the CreateOrder operation to create an order.
 * Before calling this operation, make sure that you fully understand the billing method and pricing of Alibaba Cloud Marketplace products.
 * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
 *
 * @description Before calling this operation, make sure that you fully understand the billing method and [pricing](https://market.aliyun.com/) of Alibaba Cloud Marketplace products.
 * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary Query cross-account role authorization information, including the authorized user\\"s Alibaba Cloud account UID, name, authorization time, and authorized role name.
 *
 * @param request CrossAccountVerifyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CrossAccountVerifyTokenResponse
 */
CrossAccountVerifyTokenResponse Client::crossAccountVerifyTokenWithOptions(const CrossAccountVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasToken()) {
    body["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CrossAccountVerifyTokenResponse>();
}

/**
 * @summary Query cross-account role authorization information, including the authorized user\\"s Alibaba Cloud account UID, name, authorization time, and authorized role name.
 *
 * @param request CrossAccountVerifyTokenRequest
 * @return CrossAccountVerifyTokenResponse
 */
CrossAccountVerifyTokenResponse Client::crossAccountVerifyToken(const CrossAccountVerifyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return crossAccountVerifyTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves the API quota data of a user, including the remaining quota, total quota, and usage.
 *
 * @description ### **Note: This operation supports both Alibaba Cloud accounts and RAM users to retrieve API remaining quota, total quota, and usage information.**.
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
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiMeteringResponse>();
}

/**
 * @summary Retrieves the API quota data of a user, including the remaining quota, total quota, and usage.
 *
 * @description ### **Note: This operation supports both Alibaba Cloud accounts and RAM users to retrieve API remaining quota, total quota, and usage information.**.
 *
 * @param request DescribeApiMeteringRequest
 * @return DescribeApiMeteringResponse
 */
DescribeApiMeteringResponse Client::describeApiMetering(const DescribeApiMeteringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiMeteringWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeCurrentNodeInfo to retrieve the process information of the current node.
 *
 * @description **
 * **.
 *
 * @param request DescribeCurrentNodeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCurrentNodeInfoResponse
 */
DescribeCurrentNodeInfoResponse Client::describeCurrentNodeInfoWithOptions(const DescribeCurrentNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCurrentNodeInfoResponse>();
}

/**
 * @summary Calls DescribeCurrentNodeInfo to retrieve the process information of the current node.
 *
 * @description **
 * **.
 *
 * @param request DescribeCurrentNodeInfoRequest
 * @return DescribeCurrentNodeInfoResponse
 */
DescribeCurrentNodeInfoResponse Client::describeCurrentNodeInfo(const DescribeCurrentNodeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCurrentNodeInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of promotional products with detailed information.
 *
 * @description Call this operation by using a promotion service provider account.
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
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDistributionProductsResponse>();
}

/**
 * @summary Retrieves a paginated list of promotional products with detailed information.
 *
 * @description Call this operation by using a promotion service provider account.
 *
 * @param request DescribeDistributionProductsRequest
 * @return DescribeDistributionProductsResponse
 */
DescribeDistributionProductsResponse Client::describeDistributionProducts(const DescribeDistributionProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributionProductsWithOptions(request, runtime);
}

/**
 * @summary Retrieves promotion links for promoted products.
 *
 * @description Call this operation by using a promotion service provider account. Calls from non-promotion service provider accounts will fail.
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
    request.setCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCodes(), "Codes", "json"));
  }

  json query = {};
  if (!!request.hasCodesShrink()) {
    query["Codes"] = request.getCodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDistributionProductsLinkResponse>();
}

/**
 * @summary Retrieves promotion links for promoted products.
 *
 * @description Call this operation by using a promotion service provider account. Calls from non-promotion service provider accounts will fail.
 *
 * @param request DescribeDistributionProductsLinkRequest
 * @return DescribeDistributionProductsLinkResponse
 */
DescribeDistributionProductsLinkResponse Client::describeDistributionProductsLink(const DescribeDistributionProductsLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributionProductsLinkWithOptions(request, runtime);
}

/**
 * @summary Queries the list of failed subscription notifications. After Alibaba Cloud Marketplace fails to call a service provider\\"s message SPI, the service provider can use this operation to proactively query the failed notification information.
 *
 * @description Queries the information about failed subscription notifications for a service provider.
 * - If no unconfirmed failed notifications exist, TotalCount returns 0.
 *
 * @param request DescribeFailedNotificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFailedNotificationsResponse
 */
DescribeFailedNotificationsResponse Client::describeFailedNotificationsWithOptions(const DescribeFailedNotificationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFailedNotificationsResponse>();
}

/**
 * @summary Queries the list of failed subscription notifications. After Alibaba Cloud Marketplace fails to call a service provider\\"s message SPI, the service provider can use this operation to proactively query the failed notification information.
 *
 * @description Queries the information about failed subscription notifications for a service provider.
 * - If no unconfirmed failed notifications exist, TotalCount returns 0.
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
    query["CustomerPk"] = request.getCustomerPk();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
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
 * @summary Calls the DescribeInstance operation to query instance information.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Calls the DescribeInstance operation to query instance information.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries instance information from the service provider side.
 *
 * @param request DescribeInstanceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceForIsvResponse
 */
DescribeInstanceForIsvResponse Client::describeInstanceForIsvWithOptions(const DescribeInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceForIsvResponse>();
}

/**
 * @summary Queries instance information from the service provider side.
 *
 * @param request DescribeInstanceForIsvRequest
 * @return DescribeInstanceForIsvResponse
 */
DescribeInstanceForIsvResponse Client::describeInstanceForIsv(const DescribeInstanceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceForIsvWithOptions(request, runtime);
}

/**
 * @summary Queries the list of services purchased by the user.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCodes()) {
    query["Codes"] = request.getCodes();
  }

  if (!!request.hasExceptCodes()) {
    query["ExceptCodes"] = request.getExceptCodes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries the list of services purchased by the user.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the invoice information of a supplier store in Alibaba Cloud Marketplace.
 *
 * @description Queries business information based on an authorization code. The system first verifies whether the authorization code is valid.
 * - If the authorization code is invalid, an error message is returned.
 * - If the authorization code is valid, the authorization information is returned.
 *
 * @param request DescribeInvoiceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvoiceForIsvResponse
 */
DescribeInvoiceForIsvResponse Client::describeInvoiceForIsvWithOptions(const DescribeInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasInvoiceId()) {
    query["InvoiceId"] = request.getInvoiceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvoiceForIsvResponse>();
}

/**
 * @summary Queries the invoice information of a supplier store in Alibaba Cloud Marketplace.
 *
 * @description Queries business information based on an authorization code. The system first verifies whether the authorization code is valid.
 * - If the authorization code is invalid, an error message is returned.
 * - If the authorization code is valid, the authorization information is returned.
 *
 * @param request DescribeInvoiceForIsvRequest
 * @return DescribeInvoiceForIsvResponse
 */
DescribeInvoiceForIsvResponse Client::describeInvoiceForIsv(const DescribeInvoiceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvoiceForIsvWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeLicense to query license information.
 *
 * @param request DescribeLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLicenseResponse
 */
DescribeLicenseResponse Client::describeLicenseWithOptions(const DescribeLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLicenseCode()) {
    query["LicenseCode"] = request.getLicenseCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLicenseResponse>();
}

/**
 * @summary Calls DescribeLicense to query license information.
 *
 * @param request DescribeLicenseRequest
 * @return DescribeLicenseResponse
 */
DescribeLicenseResponse Client::describeLicense(const DescribeLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified order.
 *
 * @param request DescribeOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrderResponse
 */
DescribeOrderResponse Client::describeOrderWithOptions(const DescribeOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOrderResponse>();
}

/**
 * @summary Queries the details of a specified order.
 *
 * @param request DescribeOrderRequest
 * @return DescribeOrderResponse
 */
DescribeOrderResponse Client::describeOrder(const DescribeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrderWithOptions(request, runtime);
}

/**
 * @summary Queries order details from the service provider side.
 *
 * @param request DescribeOrderForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrderForIsvResponse
 */
DescribeOrderForIsvResponse Client::describeOrderForIsvWithOptions(const DescribeOrderForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOrderForIsvResponse>();
}

/**
 * @summary Queries order details from the service provider side.
 *
 * @param request DescribeOrderForIsvRequest
 * @return DescribeOrderForIsvResponse
 */
DescribeOrderForIsvResponse Client::describeOrderForIsv(const DescribeOrderForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrderForIsvWithOptions(request, runtime);
}

/**
 * @summary Calls DescribePrice to query the price information of the corresponding product.
 *
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary Calls DescribePrice to query the price information of the corresponding product.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified product by calling DescribeProduct.
 *
 * @param request DescribeProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductResponse
 */
DescribeProductResponse Client::describeProductWithOptions(const DescribeProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasQueryDraft()) {
    query["QueryDraft"] = request.getQueryDraft();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductResponse>();
}

/**
 * @summary Queries the details of a specified product by calling DescribeProduct.
 *
 * @param request DescribeProductRequest
 * @return DescribeProductResponse
 */
DescribeProductResponse Client::describeProduct(const DescribeProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of products that meet the specified conditions along with their details.
 *
 * @param request DescribeProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProductsWithOptions(const DescribeProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchTerm()) {
    query["SearchTerm"] = request.getSearchTerm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductsResponse>();
}

/**
 * @summary Retrieves a list of products that meet the specified conditions along with their details.
 *
 * @param request DescribeProductsRequest
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProducts(const DescribeProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductsWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeProjectAttachments to retrieve the list of project attachments.
 *
 * @param request DescribeProjectAttachmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectAttachmentsResponse
 */
DescribeProjectAttachmentsResponse Client::describeProjectAttachmentsWithOptions(const DescribeProjectAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectAttachmentsResponse>();
}

/**
 * @summary Calls DescribeProjectAttachments to retrieve the list of project attachments.
 *
 * @param request DescribeProjectAttachmentsRequest
 * @return DescribeProjectAttachmentsResponse
 */
DescribeProjectAttachmentsResponse Client::describeProjectAttachments(const DescribeProjectAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeProjectInfo to query project information.
 *
 * @param request DescribeProjectInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectInfoResponse
 */
DescribeProjectInfoResponse Client::describeProjectInfoWithOptions(const DescribeProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectInfoResponse>();
}

/**
 * @summary Calls DescribeProjectInfo to query project information.
 *
 * @param request DescribeProjectInfoRequest
 * @return DescribeProjectInfoResponse
 */
DescribeProjectInfoResponse Client::describeProjectInfo(const DescribeProjectInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectInfoWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeProjectMessages to retrieve the list of project workflow messages.
 *
 * @param request DescribeProjectMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectMessagesResponse
 */
DescribeProjectMessagesResponse Client::describeProjectMessagesWithOptions(const DescribeProjectMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectMessagesResponse>();
}

/**
 * @summary Calls DescribeProjectMessages to retrieve the list of project workflow messages.
 *
 * @param request DescribeProjectMessagesRequest
 * @return DescribeProjectMessagesResponse
 */
DescribeProjectMessagesResponse Client::describeProjectMessages(const DescribeProjectMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectMessagesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of project flow nodes by calling DescribeProjectNodes.
 *
 * @description **
 * **.
 *
 * @param request DescribeProjectNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectNodesResponse
 */
DescribeProjectNodesResponse Client::describeProjectNodesWithOptions(const DescribeProjectNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectNodesResponse>();
}

/**
 * @summary Queries the list of project flow nodes by calling DescribeProjectNodes.
 *
 * @description **
 * **.
 *
 * @param request DescribeProjectNodesRequest
 * @return DescribeProjectNodesResponse
 */
DescribeProjectNodesResponse Client::describeProjectNodes(const DescribeProjectNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectNodesWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeProjectOperateLogs to retrieve the operation logs of a project flow.
 *
 * @description **
 * **.
 *
 * @param request DescribeProjectOperateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectOperateLogsResponse
 */
DescribeProjectOperateLogsResponse Client::describeProjectOperateLogsWithOptions(const DescribeProjectOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectOperateLogsResponse>();
}

/**
 * @summary Calls DescribeProjectOperateLogs to retrieve the operation logs of a project flow.
 *
 * @description **
 * **.
 *
 * @param request DescribeProjectOperateLogsRequest
 * @return DescribeProjectOperateLogsResponse
 */
DescribeProjectOperateLogsResponse Client::describeProjectOperateLogs(const DescribeProjectOperateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectOperateLogsWithOptions(request, runtime);
}

/**
 * @summary Completes the current process by calling FinishCurrentProjectNode.
 *
 * @description **
 * **.
 *
 * @param request FinishCurrentProjectNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishCurrentProjectNodeResponse
 */
FinishCurrentProjectNodeResponse Client::finishCurrentProjectNodeWithOptions(const FinishCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTemplateForm()) {
    query["TemplateForm"] = request.getTemplateForm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishCurrentProjectNodeResponse>();
}

/**
 * @summary Completes the current process by calling FinishCurrentProjectNode.
 *
 * @description **
 * **.
 *
 * @param request FinishCurrentProjectNodeRequest
 * @return FinishCurrentProjectNodeResponse
 */
FinishCurrentProjectNodeResponse Client::finishCurrentProjectNode(const FinishCurrentProjectNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishCurrentProjectNodeWithOptions(request, runtime);
}

/**
 * @summary Processes invoice acceptance requests.
 *
 * @description Queries information about failed subscription notifications for merchants.
 * - If no unconfirmed notification failure information exists, TotalCount returns 0.
 *
 * @param request ModifyInvoiceForIsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInvoiceForIsvResponse
 */
ModifyInvoiceForIsvResponse Client::modifyInvoiceForIsvWithOptions(const ModifyInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckNotice()) {
    query["CheckNotice"] = request.getCheckNotice();
  }

  if (!!request.hasElectronUrl()) {
    query["ElectronUrl"] = request.getElectronUrl();
  }

  if (!!request.hasInvoiceId()) {
    query["InvoiceId"] = request.getInvoiceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInvoiceForIsvResponse>();
}

/**
 * @summary Processes invoice acceptance requests.
 *
 * @description Queries information about failed subscription notifications for merchants.
 * - If no unconfirmed notification failure information exists, TotalCount returns 0.
 *
 * @param request ModifyInvoiceForIsvRequest
 * @return ModifyInvoiceForIsvResponse
 */
ModifyInvoiceForIsvResponse Client::modifyInvoiceForIsv(const ModifyInvoiceForIsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInvoiceForIsvWithOptions(request, runtime);
}

/**
 * @summary Calls PauseProject to pause a project.
 *
 * @description **
 * **.
 *
 * @param request PauseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseProjectResponse
 */
PauseProjectResponse Client::pauseProjectWithOptions(const PauseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseProjectResponse>();
}

/**
 * @summary Calls PauseProject to pause a project.
 *
 * @description **
 * **.
 *
 * @param request PauseProjectRequest
 * @return PauseProjectResponse
 */
PauseProjectResponse Client::pauseProject(const PauseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseProjectWithOptions(request, runtime);
}

/**
 * @summary Call PushMeteringData to push metering data.
 *
 * @description ### Encoding and Format Requirements
 * - All request parameters must be URLEncoded.
 * - The Metering field in the parameters must strictly follow the format in the example in this document. It has been found that many submissions are not valid JSON. Please verify the format with a JSON formatting tool before submission, otherwise the API call will fail.
 * ### Request Frequency and Single Write Volume Limits
 * - For hourly/daily metering: Cloud Marketplace limits requests for each InstanceId to once per 60 seconds, and each request supports writing up to 100 metering data entries.
 * - For real-time metering (for large model usage scenarios): Cloud Marketplace has no frequency limit for each InstanceId, and each request supports writing up to 10 metering data entries.
 * ### Batch Push Limits for Metering Data
 * - Cross-product InstanceId batch pushing is not supported. When batch pushing, ensure all InstanceIds belong to the same product.
 * - When batch pushing metering data, the "InstanceId" attribute must belong to instances generated by the same product. Pushing instances from multiple products simultaneously is currently not supported.
 * ### Time Requirements for Metering Data Push
 * - For products billed by the hour, the billing deadline is the next hour, and metering data must be pushed on time. For example, if the metering data is for 8:10-08:20, it must be pushed before 9:59, otherwise billing will not occur. The rule for daily billing is similar: the previous day\\"s data must be pushed before 1:59 of the next day, otherwise the metering push will return an error and billing will not occur.
 * - For products billed by the minute, real-time pushed data is aggregated by the minute and billed by the minute.
 * - If the product is set to real-time billing, StartTime and EndTime can have any time span, but EndTime must be greater than StartTime.
 * - If the product is set to non-real-time billing (i.e., hourly, daily, etc.), the interval between StartTime and EndTime must be greater than 5 minutes.
 * ### Timeliness of Pushing and Billing
 * - If the instance status has expired, metering data pushed after the instance expiration will not be billed. For example, if the instance expired at 2025-07-09 12:20:00, metering data pushed for the period 2025-07-09 13:00:00-2025-07-09 14:00:00 will not be billed. Metering data for the period 2025-07-09 12:00:00-2025-07-09 13:00:00 can still be billed normally.
 * - After pushing metering data, billing does not occur immediately. For hourly billing, bills are generated in the next time interval. For example, for hourly billing, the bill for 8:00-9:00 is generated after 10:00. For daily billing, bills are generated the next day. After billing, customers can view the bills in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
 * ### Amount Rounding to Zero
 * - If the bill amount is too small and the single bill amount is less than 0.01 CNY, the bill amount on the buyer\\"s side will be 0. For example, if the product unit price is 0.001 CNY/count and is billed by the minute with 9 uses per minute, the bill amount per minute is 0. If billed by the hour and the single hourly bill amount is less than 0.01, the buyer\\"s bill amount will be 0. The probability of minute-level billing amounts being rounded to zero may be higher than that of hourly billing.
 *
 * @param request PushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringDataWithOptions(const PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetering()) {
    query["Metering"] = request.getMetering();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMeteringDataResponse>();
}

/**
 * @summary Call PushMeteringData to push metering data.
 *
 * @description ### Encoding and Format Requirements
 * - All request parameters must be URLEncoded.
 * - The Metering field in the parameters must strictly follow the format in the example in this document. It has been found that many submissions are not valid JSON. Please verify the format with a JSON formatting tool before submission, otherwise the API call will fail.
 * ### Request Frequency and Single Write Volume Limits
 * - For hourly/daily metering: Cloud Marketplace limits requests for each InstanceId to once per 60 seconds, and each request supports writing up to 100 metering data entries.
 * - For real-time metering (for large model usage scenarios): Cloud Marketplace has no frequency limit for each InstanceId, and each request supports writing up to 10 metering data entries.
 * ### Batch Push Limits for Metering Data
 * - Cross-product InstanceId batch pushing is not supported. When batch pushing, ensure all InstanceIds belong to the same product.
 * - When batch pushing metering data, the "InstanceId" attribute must belong to instances generated by the same product. Pushing instances from multiple products simultaneously is currently not supported.
 * ### Time Requirements for Metering Data Push
 * - For products billed by the hour, the billing deadline is the next hour, and metering data must be pushed on time. For example, if the metering data is for 8:10-08:20, it must be pushed before 9:59, otherwise billing will not occur. The rule for daily billing is similar: the previous day\\"s data must be pushed before 1:59 of the next day, otherwise the metering push will return an error and billing will not occur.
 * - For products billed by the minute, real-time pushed data is aggregated by the minute and billed by the minute.
 * - If the product is set to real-time billing, StartTime and EndTime can have any time span, but EndTime must be greater than StartTime.
 * - If the product is set to non-real-time billing (i.e., hourly, daily, etc.), the interval between StartTime and EndTime must be greater than 5 minutes.
 * ### Timeliness of Pushing and Billing
 * - If the instance status has expired, metering data pushed after the instance expiration will not be billed. For example, if the instance expired at 2025-07-09 12:20:00, metering data pushed for the period 2025-07-09 13:00:00-2025-07-09 14:00:00 will not be billed. Metering data for the period 2025-07-09 12:00:00-2025-07-09 13:00:00 can still be billed normally.
 * - After pushing metering data, billing does not occur immediately. For hourly billing, bills are generated in the next time interval. For example, for hourly billing, the bill for 8:00-9:00 is generated after 10:00. For daily billing, bills are generated the next day. After billing, customers can view the bills in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
 * ### Amount Rounding to Zero
 * - If the bill amount is too small and the single bill amount is less than 0.01 CNY, the bill amount on the buyer\\"s side will be 0. For example, if the product unit price is 0.001 CNY/count and is billed by the minute with 9 uses per minute, the bill amount per minute is 0. If billed by the hour and the single hourly bill amount is less than 0.01, the buyer\\"s bill amount will be 0. The probability of minute-level billing amounts being rounded to zero may be higher than that of hourly billing.
 *
 * @param request PushMeteringDataRequest
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringData(const PushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMeteringDataWithOptions(request, runtime);
}

/**
 * @summary Pushes usage deduction for a prepaid per-use product to Alibaba Cloud Marketplace on behalf of a service provider.
 *
 * @description ## Operation description
 * - This operation applies to prepaid per-use products. Service providers can call this operation to push usage deductions to Alibaba Cloud Marketplace.
 * - The operation uses a forced update mode that directly deducts the specified number of uses. The caller must determine whether the user\\"s usage exceeds the quota.
 * - All request parameters must be URL-encoded.
 * - Use the `ClientToken` parameter for idempotency control. The same `ClientToken` cannot be submitted more than once within 24 hours.
 * - Retries for the same deduction operation must use the same `ClientToken`. Use a new `ClientToken` for new business operations.
 * - If the previous request succeeded (even if no response was received due to a gateway timeout), retrying with the same `ClientToken` returns a success response idempotently without duplicate deductions.
 * - If the result of the previous request is undetermined (in PROCESSING state), retrying with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
 * - Only one operation can be executed at a time for the same `InstanceId`. Concurrent requests return a `Throttling` error. Retry later.
 * - You can run this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without calculating signatures.
 *
 * @param request PushTimesUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushTimesUsageResponse
 */
PushTimesUsageResponse Client::pushTimesUsageWithOptions(const PushTimesUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjust()) {
    query["Adjust"] = request.getAdjust();
  }

  if (!!request.hasAdjustDate()) {
    query["AdjustDate"] = request.getAdjustDate();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMark()) {
    query["Mark"] = request.getMark();
  }

  if (!!request.hasTimes()) {
    query["Times"] = request.getTimes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushTimesUsage"},
    {"version" , "2015-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushTimesUsageResponse>();
}

/**
 * @summary Pushes usage deduction for a prepaid per-use product to Alibaba Cloud Marketplace on behalf of a service provider.
 *
 * @description ## Operation description
 * - This operation applies to prepaid per-use products. Service providers can call this operation to push usage deductions to Alibaba Cloud Marketplace.
 * - The operation uses a forced update mode that directly deducts the specified number of uses. The caller must determine whether the user\\"s usage exceeds the quota.
 * - All request parameters must be URL-encoded.
 * - Use the `ClientToken` parameter for idempotency control. The same `ClientToken` cannot be submitted more than once within 24 hours.
 * - Retries for the same deduction operation must use the same `ClientToken`. Use a new `ClientToken` for new business operations.
 * - If the previous request succeeded (even if no response was received due to a gateway timeout), retrying with the same `ClientToken` returns a success response idempotently without duplicate deductions.
 * - If the result of the previous request is undetermined (in PROCESSING state), retrying with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
 * - Only one operation can be executed at a time for the same `InstanceId`. Concurrent requests return a `Throttling` error. Retry later.
 * - You can run this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without calculating signatures.
 *
 * @param request PushTimesUsageRequest
 * @return PushTimesUsageResponse
 */
PushTimesUsageResponse Client::pushTimesUsage(const PushTimesUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushTimesUsageWithOptions(request, runtime);
}

/**
 * @summary Calls ResumeProject to resume a paused project.
 *
 * @description **
 * **.
 *
 * @param request ResumeProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeProjectResponse
 */
ResumeProjectResponse Client::resumeProjectWithOptions(const ResumeProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeProjectResponse>();
}

/**
 * @summary Calls ResumeProject to resume a paused project.
 *
 * @description **
 * **.
 *
 * @param request ResumeProjectRequest
 * @return ResumeProjectResponse
 */
ResumeProjectResponse Client::resumeProject(const ResumeProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeProjectWithOptions(request, runtime);
}

/**
 * @summary Triggers a rejection of the current process node by calling RollbackCurrentProjectNode.
 *
 * @description **
 * **.
 *
 * @param request RollbackCurrentProjectNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackCurrentProjectNodeResponse
 */
RollbackCurrentProjectNodeResponse Client::rollbackCurrentProjectNodeWithOptions(const RollbackCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackCurrentProjectNodeResponse>();
}

/**
 * @summary Triggers a rejection of the current process node by calling RollbackCurrentProjectNode.
 *
 * @description **
 * **.
 *
 * @param request RollbackCurrentProjectNodeRequest
 * @return RollbackCurrentProjectNodeResponse
 */
RollbackCurrentProjectNodeResponse Client::rollbackCurrentProjectNode(const RollbackCurrentProjectNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackCurrentProjectNodeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Market20151101