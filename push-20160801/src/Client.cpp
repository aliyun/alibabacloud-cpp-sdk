#include <darabonba/Core.hpp>
#include <alibabacloud/Push20160801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Push20160801::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Push20160801
{

AlibabaCloud::Push20160801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "cloudpush.aliyuncs.com"},
    {"ap-northeast-2-pop" , "cloudpush.aliyuncs.com"},
    {"ap-south-1" , "cloudpush.aliyuncs.com"},
    {"ap-southeast-1" , "cloudpush.aliyuncs.com"},
    {"ap-southeast-2" , "cloudpush.aliyuncs.com"},
    {"ap-southeast-3" , "cloudpush.aliyuncs.com"},
    {"ap-southeast-5" , "cloudpush.aliyuncs.com"},
    {"cn-beijing" , "cloudpush.aliyuncs.com"},
    {"cn-beijing-finance-1" , "cloudpush.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "cloudpush.aliyuncs.com"},
    {"cn-beijing-gov-1" , "cloudpush.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "cloudpush.aliyuncs.com"},
    {"cn-chengdu" , "cloudpush.aliyuncs.com"},
    {"cn-edge-1" , "cloudpush.aliyuncs.com"},
    {"cn-fujian" , "cloudpush.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-finance" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "cloudpush.aliyuncs.com"},
    {"cn-hongkong" , "cloudpush.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "cloudpush.aliyuncs.com"},
    {"cn-huhehaote" , "cloudpush.aliyuncs.com"},
    {"cn-north-2-gov-1" , "cloudpush.aliyuncs.com"},
    {"cn-qingdao" , "cloudpush.aliyuncs.com"},
    {"cn-qingdao-nebula" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai-inner" , "cloudpush.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "cloudpush.aliyuncs.com"},
    {"cn-shenzhen" , "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-inner" , "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "cloudpush.aliyuncs.com"},
    {"cn-wuhan" , "cloudpush.aliyuncs.com"},
    {"cn-yushanfang" , "cloudpush.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "cloudpush.aliyuncs.com"},
    {"cn-zhangjiakou" , "cloudpush.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "cloudpush.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "cloudpush.aliyuncs.com"},
    {"eu-central-1" , "cloudpush.aliyuncs.com"},
    {"eu-west-1" , "cloudpush.aliyuncs.com"},
    {"eu-west-1-oxs" , "cloudpush.aliyuncs.com"},
    {"me-east-1" , "cloudpush.aliyuncs.com"},
    {"rus-west-1-pop" , "cloudpush.aliyuncs.com"},
    {"us-east-1" , "cloudpush.aliyuncs.com"},
    {"us-west-1" , "cloudpush.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("push", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Attach an alias to a device.
 *
 * @description You can attach up to 10 aliases in a single request. The attachment takes effect immediately.
 *
 * @param request BindAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAliasResponse
 */
BindAliasResponse Client::bindAliasWithOptions(const BindAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.getAliasName();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAlias"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAliasResponse>();
}

/**
 * @summary Attach an alias to a device.
 *
 * @description You can attach up to 10 aliases in a single request. The attachment takes effect immediately.
 *
 * @param request BindAliasRequest
 * @return BindAliasResponse
 */
BindAliasResponse Client::bindAlias(const BindAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAliasWithOptions(request, runtime);
}

/**
 * @summary Attaches a device to a phone number.
 *
 * @param request BindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPhoneResponse
 */
BindPhoneResponse Client::bindPhoneWithOptions(const BindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindPhone"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPhoneResponse>();
}

/**
 * @summary Attaches a device to a phone number.
 *
 * @param request BindPhoneRequest
 * @return BindPhoneResponse
 */
BindPhoneResponse Client::bindPhone(const BindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPhoneWithOptions(request, runtime);
}

/**
 * @summary Binds tags to specified device targets. Tag bindings take effect within 10 minutes.
 *
 * @param request BindTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindTagResponse
 */
BindTagResponse Client::bindTagWithOptions(const BindTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.getClientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindTag"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindTagResponse>();
}

/**
 * @summary Binds tags to specified device targets. Tag bindings take effect within 10 minutes.
 *
 * @param request BindTagRequest
 * @return BindTagResponse
 */
BindTagResponse Client::bindTag(const BindTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindTagWithOptions(request, runtime);
}

/**
 * @summary Cancels a scheduled push task that has not yet been executed.
 *
 * @param request CancelPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPushResponse
 */
CancelPushResponse Client::cancelPushWithOptions(const CancelPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPush"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPushResponse>();
}

/**
 * @summary Cancels a scheduled push task that has not yet been executed.
 *
 * @param request CancelPushRequest
 * @return CancelPushResponse
 */
CancelPushResponse Client::cancelPush(const CancelPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPushWithOptions(request, runtime);
}

/**
 * @summary Checks the expiration time and current status of the iOS certificate for a specified app.
 *
 * @description - If the returned ExpireTime value is later than the current timestamp, the certificate is not necessarily valid. Also verify that the Status is OK.
 * - The REVOKED status originates from the Apple Push Notification service (APNs) server. If a certificate has a REVOKED status, at least one push notification to APNs has failed in the corresponding environment.
 *
 * @param request CheckCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCertificateResponse
 */
CheckCertificateResponse Client::checkCertificateWithOptions(const CheckCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCertificate"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCertificateResponse>();
}

/**
 * @summary Checks the expiration time and current status of the iOS certificate for a specified app.
 *
 * @description - If the returned ExpireTime value is later than the current timestamp, the certificate is not necessarily valid. Also verify that the Status is OK.
 * - The REVOKED status originates from the Apple Push Notification service (APNs) server. If a certificate has a REVOKED status, at least one push notification to APNs has failed in the corresponding environment.
 *
 * @param request CheckCertificateRequest
 * @return CheckCertificateResponse
 */
CheckCertificateResponse Client::checkCertificate(const CheckCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCertificateWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
 *
 * @summary Validates the specified (device).
 *
 * @param request CheckDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDeviceResponse
 */
CheckDeviceResponse Client::checkDeviceWithOptions(const CheckDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDevice"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDeviceResponse>();
}

/**
 * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
 *
 * @summary Validates the specified (device).
 *
 * @param request CheckDeviceRequest
 * @return CheckDeviceResponse
 */
CheckDeviceResponse Client::checkDevice(const CheckDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDeviceWithOptions(request, runtime);
}

/**
 * @summary Validate a specified group of devices.
 *
 * @param request CheckDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDevicesResponse
 */
CheckDevicesResponse Client::checkDevicesWithOptions(const CheckDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceIds()) {
    query["DeviceIds"] = request.getDeviceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDevices"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDevicesResponse>();
}

/**
 * @summary Validate a specified group of devices.
 *
 * @param request CheckDevicesRequest
 * @return CheckDevicesResponse
 */
CheckDevicesResponse Client::checkDevices(const CheckDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDevicesWithOptions(request, runtime);
}

/**
 * @summary Manually ends a continuous push task.
 *
 * @description If you do not call this operation, the continuous push task automatically ends when it reaches its time-to-live (TTL).
 *
 * @param request CompleteContinuouslyPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteContinuouslyPushResponse
 */
CompleteContinuouslyPushResponse Client::completeContinuouslyPushWithOptions(const CompleteContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteContinuouslyPush"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteContinuouslyPushResponse>();
}

/**
 * @summary Manually ends a continuous push task.
 *
 * @description If you do not call this operation, the continuous push task automatically ends when it reaches its time-to-live (TTL).
 *
 * @param request CompleteContinuouslyPushRequest
 * @return CompleteContinuouslyPushResponse
 */
CompleteContinuouslyPushResponse Client::completeContinuouslyPush(const CompleteContinuouslyPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeContinuouslyPushWithOptions(request, runtime);
}

/**
 * @summary Executes a predefined continuous push task.
 *
 * @description This API addresses the limitations of the [Push Advanced Push API](https://help.aliyun.com/document_detail/2249916.html), where push-by-device, push-by-account, and push-by-alias operations each have a maximum target count per single call.
 * - You can use continuous push when your scenario requires sending the same message to many devices. In this case, you can call the continuous push API repeatedly, each time specifying a group of targets for aggregation (the current limit is 1,000 targets per call for device, account, or alias pushes). The total number of pushes for the same MessageId is restricted to 10,000. If you need a higher limit, contact technical support to evaluate your specific scenario.
 * - Before using this API, you must first call the Push API with Target set to TBD (To Be Determined) and include your message content. This returns a MessageId from the push system. You can then use this MessageId to repeatedly call the continuous push API, specifying different target groups to deliver the same message.
 * - After calling the Push API with Target set to TBD and obtaining a MessageId, the message is stored in the push system for 24 hours by default. You can use this API to push to specified targets at any time before expiration. Pushes are not allowed after expiration or after reaching the total push limit.
 * - Each call to this API sends the message immediately. Scheduled pushes are not supported.
 *
 * @param request ContinuouslyPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuouslyPushResponse
 */
ContinuouslyPushResponse Client::continuouslyPushWithOptions(const ContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinuouslyPush"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinuouslyPushResponse>();
}

/**
 * @summary Executes a predefined continuous push task.
 *
 * @description This API addresses the limitations of the [Push Advanced Push API](https://help.aliyun.com/document_detail/2249916.html), where push-by-device, push-by-account, and push-by-alias operations each have a maximum target count per single call.
 * - You can use continuous push when your scenario requires sending the same message to many devices. In this case, you can call the continuous push API repeatedly, each time specifying a group of targets for aggregation (the current limit is 1,000 targets per call for device, account, or alias pushes). The total number of pushes for the same MessageId is restricted to 10,000. If you need a higher limit, contact technical support to evaluate your specific scenario.
 * - Before using this API, you must first call the Push API with Target set to TBD (To Be Determined) and include your message content. This returns a MessageId from the push system. You can then use this MessageId to repeatedly call the continuous push API, specifying different target groups to deliver the same message.
 * - After calling the Push API with Target set to TBD and obtaining a MessageId, the message is stored in the push system for 24 hours by default. You can use this API to push to specified targets at any time before expiration. Pushes are not allowed after expiration or after reaching the total push limit.
 * - Each call to this API sends the message immediately. Scheduled pushes are not supported.
 *
 * @param request ContinuouslyPushRequest
 * @return ContinuouslyPushResponse
 */
ContinuouslyPushResponse Client::continuouslyPush(const ContinuouslyPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continuouslyPushWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
 *
 * @summary Retrieve the list of all applications associated with your Alibaba Cloud account.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSummaryAppsResponse
 */
ListSummaryAppsResponse Client::listSummaryAppsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListSummaryApps"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSummaryAppsResponse>();
}

/**
 * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
 *
 * @summary Retrieve the list of all applications associated with your Alibaba Cloud account.
 *
 * @return ListSummaryAppsResponse
 */
ListSummaryAppsResponse Client::listSummaryApps() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSummaryAppsWithOptions(runtime);
}

/**
 * @summary Queries the tags of an app. A maximum of 100 records are returned.
 *
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary Queries the tags of an app. A maximum of 100 records are returned.
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @summary Sends different messages or notifications to multiple devices in batches.
 *
 * @description **Before you use this API, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.**
 * Some business scenarios require you to send many different messages to many devices in a short period. This can generate a high number of Queries Per Second (QPS) and cause requests to exceed the QPS limit for a single source IP address, resulting in push failures.
 * This API is designed to solve this issue. You can include up to 100 independent push tasks in a single call. This request aggregation reduces the QPS and improves the stability and success rate of individual pushes. A single account is limited to 500 batch push calls per second.
 * Each independent push task supports pushes to devices, accounts, or aliases. SMS integration is not supported.
 * > You must upgrade the SDK to version 3.11.0 or later.
 * ## PushTask properties
 * - The format for PushTask properties is PushTask.N.Property. These properties include the following:
 *   - Push target (destination)
 *   - Push configuration (config)
 *   - iOS notification task configuration
 *   - Android notification task configuration
 *   - Android auxiliary pop-up configuration
 *   - HarmonyOS notification task configuration
 *   - Push control
 * - Each PushTask represents an independent push task. A maximum of 100 tasks are supported per call. The push configurations are the same as those for the Push API.
 * - The PushTask.N.Target parameter supports only the DEVICE, ACCOUNT, and ALIAS types.
 * - PushTask does not support SMS filter interaction.
 * - The product of the parent node and child nodes cannot exceed 10,000. If this limit is exceeded, the parameters are considered invalid.
 *
 * @param request MassPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MassPushResponse
 */
MassPushResponse Client::massPushWithOptions(const MassPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.getIdempotentToken();
  }

  json body = {};
  if (!!request.hasPushTask()) {
    body["PushTask"] = request.getPushTask();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MassPush"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MassPushResponse>();
}

/**
 * @summary Sends different messages or notifications to multiple devices in batches.
 *
 * @description **Before you use this API, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.**
 * Some business scenarios require you to send many different messages to many devices in a short period. This can generate a high number of Queries Per Second (QPS) and cause requests to exceed the QPS limit for a single source IP address, resulting in push failures.
 * This API is designed to solve this issue. You can include up to 100 independent push tasks in a single call. This request aggregation reduces the QPS and improves the stability and success rate of individual pushes. A single account is limited to 500 batch push calls per second.
 * Each independent push task supports pushes to devices, accounts, or aliases. SMS integration is not supported.
 * > You must upgrade the SDK to version 3.11.0 or later.
 * ## PushTask properties
 * - The format for PushTask properties is PushTask.N.Property. These properties include the following:
 *   - Push target (destination)
 *   - Push configuration (config)
 *   - iOS notification task configuration
 *   - Android notification task configuration
 *   - Android auxiliary pop-up configuration
 *   - HarmonyOS notification task configuration
 *   - Push control
 * - Each PushTask represents an independent push task. A maximum of 100 tasks are supported per call. The push configurations are the same as those for the Push API.
 * - The PushTask.N.Target parameter supports only the DEVICE, ACCOUNT, and ALIAS types.
 * - PushTask does not support SMS filter interaction.
 * - The product of the parent node and child nodes cannot exceed 10,000. If this limit is exceeded, the parameters are considered invalid.
 *
 * @param request MassPushRequest
 * @return MassPushResponse
 */
MassPushResponse Client::massPush(const MassPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return massPushWithOptions(request, runtime);
}

/**
 * @summary Advanced push API v2.
 *
 * @description Before using this API, review the [pricing and billing details](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.
 *
 * @param tmpReq MassPushV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return MassPushV2Response
 */
MassPushV2Response Client::massPushV2WithOptions(const MassPushV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MassPushV2ShrinkRequest request = MassPushV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPushTasks()) {
    request.setPushTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPushTasks(), "PushTasks", "json"));
  }

  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.getIdempotentToken();
  }

  if (!!request.hasPushTasksShrink()) {
    query["PushTasks"] = request.getPushTasksShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MassPushV2"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MassPushV2Response>();
}

/**
 * @summary Advanced push API v2.
 *
 * @description Before using this API, review the [pricing and billing details](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.
 *
 * @param request MassPushV2Request
 * @return MassPushV2Response
 */
MassPushV2Response Client::massPushV2(const MassPushV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return massPushV2WithOptions(request, runtime);
}

/**
 * @summary This advanced push API sends notifications or messages to various devices. It provides a rich set of custom parameters to implement push behaviors for various scenarios.
 *
 * @description **Before you use this API, make sure you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.**
 * This API supports pushes to Android, iOS, and HarmonyOS devices. For each platform, you must provide the corresponding AppKey.
 *
 * @param tmpReq PushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushResponse
 */
PushResponse Client::pushWithOptions(const PushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushShrinkRequest request = PushShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidOppoPrivateContentParameters()) {
    request.setAndroidOppoPrivateContentParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAndroidOppoPrivateContentParameters(), "AndroidOppoPrivateContentParameters", "json"));
  }

  if (!!tmpReq.hasAndroidOppoPrivateTitleParameters()) {
    request.setAndroidOppoPrivateTitleParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAndroidOppoPrivateTitleParameters(), "AndroidOppoPrivateTitleParameters", "json"));
  }

  json query = {};
  if (!!request.hasAndroidActivity()) {
    query["AndroidActivity"] = request.getAndroidActivity();
  }

  if (!!request.hasAndroidBadgeAddNum()) {
    query["AndroidBadgeAddNum"] = request.getAndroidBadgeAddNum();
  }

  if (!!request.hasAndroidBadgeClass()) {
    query["AndroidBadgeClass"] = request.getAndroidBadgeClass();
  }

  if (!!request.hasAndroidBadgeSetNum()) {
    query["AndroidBadgeSetNum"] = request.getAndroidBadgeSetNum();
  }

  if (!!request.hasAndroidBigBody()) {
    query["AndroidBigBody"] = request.getAndroidBigBody();
  }

  if (!!request.hasAndroidBigPictureUrl()) {
    query["AndroidBigPictureUrl"] = request.getAndroidBigPictureUrl();
  }

  if (!!request.hasAndroidBigTitle()) {
    query["AndroidBigTitle"] = request.getAndroidBigTitle();
  }

  if (!!request.hasAndroidExtParameters()) {
    query["AndroidExtParameters"] = request.getAndroidExtParameters();
  }

  if (!!request.hasAndroidHonorTargetUserType()) {
    query["AndroidHonorTargetUserType"] = request.getAndroidHonorTargetUserType();
  }

  if (!!request.hasAndroidHuaweiBusinessType()) {
    query["AndroidHuaweiBusinessType"] = request.getAndroidHuaweiBusinessType();
  }

  if (!!request.hasAndroidHuaweiLiveNotificationPayload()) {
    query["AndroidHuaweiLiveNotificationPayload"] = request.getAndroidHuaweiLiveNotificationPayload();
  }

  if (!!request.hasAndroidHuaweiReceiptId()) {
    query["AndroidHuaweiReceiptId"] = request.getAndroidHuaweiReceiptId();
  }

  if (!!request.hasAndroidHuaweiTargetUserType()) {
    query["AndroidHuaweiTargetUserType"] = request.getAndroidHuaweiTargetUserType();
  }

  if (!!request.hasAndroidImageUrl()) {
    query["AndroidImageUrl"] = request.getAndroidImageUrl();
  }

  if (!!request.hasAndroidInboxBody()) {
    query["AndroidInboxBody"] = request.getAndroidInboxBody();
  }

  if (!!request.hasAndroidMeizuNoticeMsgType()) {
    query["AndroidMeizuNoticeMsgType"] = request.getAndroidMeizuNoticeMsgType();
  }

  if (!!request.hasAndroidMessageHuaweiCategory()) {
    query["AndroidMessageHuaweiCategory"] = request.getAndroidMessageHuaweiCategory();
  }

  if (!!request.hasAndroidMessageHuaweiUrgency()) {
    query["AndroidMessageHuaweiUrgency"] = request.getAndroidMessageHuaweiUrgency();
  }

  if (!!request.hasAndroidMessageOppoCategory()) {
    query["AndroidMessageOppoCategory"] = request.getAndroidMessageOppoCategory();
  }

  if (!!request.hasAndroidMessageOppoNotifyLevel()) {
    query["AndroidMessageOppoNotifyLevel"] = request.getAndroidMessageOppoNotifyLevel();
  }

  if (!!request.hasAndroidMessageVivoCategory()) {
    query["AndroidMessageVivoCategory"] = request.getAndroidMessageVivoCategory();
  }

  if (!!request.hasAndroidMusic()) {
    query["AndroidMusic"] = request.getAndroidMusic();
  }

  if (!!request.hasAndroidNotificationBarPriority()) {
    query["AndroidNotificationBarPriority"] = request.getAndroidNotificationBarPriority();
  }

  if (!!request.hasAndroidNotificationBarType()) {
    query["AndroidNotificationBarType"] = request.getAndroidNotificationBarType();
  }

  if (!!request.hasAndroidNotificationChannel()) {
    query["AndroidNotificationChannel"] = request.getAndroidNotificationChannel();
  }

  if (!!request.hasAndroidNotificationGroup()) {
    query["AndroidNotificationGroup"] = request.getAndroidNotificationGroup();
  }

  if (!!request.hasAndroidNotificationHonorChannel()) {
    query["AndroidNotificationHonorChannel"] = request.getAndroidNotificationHonorChannel();
  }

  if (!!request.hasAndroidNotificationHuaweiChannel()) {
    query["AndroidNotificationHuaweiChannel"] = request.getAndroidNotificationHuaweiChannel();
  }

  if (!!request.hasAndroidNotificationNotifyId()) {
    query["AndroidNotificationNotifyId"] = request.getAndroidNotificationNotifyId();
  }

  if (!!request.hasAndroidNotificationThreadId()) {
    query["AndroidNotificationThreadId"] = request.getAndroidNotificationThreadId();
  }

  if (!!request.hasAndroidNotificationVivoChannel()) {
    query["AndroidNotificationVivoChannel"] = request.getAndroidNotificationVivoChannel();
  }

  if (!!request.hasAndroidNotificationXiaomiChannel()) {
    query["AndroidNotificationXiaomiChannel"] = request.getAndroidNotificationXiaomiChannel();
  }

  if (!!request.hasAndroidNotifyType()) {
    query["AndroidNotifyType"] = request.getAndroidNotifyType();
  }

  if (!!request.hasAndroidOpenType()) {
    query["AndroidOpenType"] = request.getAndroidOpenType();
  }

  if (!!request.hasAndroidOpenUrl()) {
    query["AndroidOpenUrl"] = request.getAndroidOpenUrl();
  }

  if (!!request.hasAndroidOppoDeleteIntentData()) {
    query["AndroidOppoDeleteIntentData"] = request.getAndroidOppoDeleteIntentData();
  }

  if (!!request.hasAndroidOppoIntelligentIntent()) {
    query["AndroidOppoIntelligentIntent"] = request.getAndroidOppoIntelligentIntent();
  }

  if (!!request.hasAndroidOppoIntentEnv()) {
    query["AndroidOppoIntentEnv"] = request.getAndroidOppoIntentEnv();
  }

  if (!!request.hasAndroidOppoPrivateContentParametersShrink()) {
    query["AndroidOppoPrivateContentParameters"] = request.getAndroidOppoPrivateContentParametersShrink();
  }

  if (!!request.hasAndroidOppoPrivateMsgTemplateId()) {
    query["AndroidOppoPrivateMsgTemplateId"] = request.getAndroidOppoPrivateMsgTemplateId();
  }

  if (!!request.hasAndroidOppoPrivateTitleParametersShrink()) {
    query["AndroidOppoPrivateTitleParameters"] = request.getAndroidOppoPrivateTitleParametersShrink();
  }

  if (!!request.hasAndroidPopupActivity()) {
    query["AndroidPopupActivity"] = request.getAndroidPopupActivity();
  }

  if (!!request.hasAndroidPopupBody()) {
    query["AndroidPopupBody"] = request.getAndroidPopupBody();
  }

  if (!!request.hasAndroidPopupTitle()) {
    query["AndroidPopupTitle"] = request.getAndroidPopupTitle();
  }

  if (!!request.hasAndroidRemind()) {
    query["AndroidRemind"] = request.getAndroidRemind();
  }

  if (!!request.hasAndroidRenderStyle()) {
    query["AndroidRenderStyle"] = request.getAndroidRenderStyle();
  }

  if (!!request.hasAndroidTargetUserType()) {
    query["AndroidTargetUserType"] = request.getAndroidTargetUserType();
  }

  if (!!request.hasAndroidVivoLiveMessage()) {
    query["AndroidVivoLiveMessage"] = request.getAndroidVivoLiveMessage();
  }

  if (!!request.hasAndroidVivoPushMode()) {
    query["AndroidVivoPushMode"] = request.getAndroidVivoPushMode();
  }

  if (!!request.hasAndroidVivoReceiptId()) {
    query["AndroidVivoReceiptId"] = request.getAndroidVivoReceiptId();
  }

  if (!!request.hasAndroidXiaoMiActivity()) {
    query["AndroidXiaoMiActivity"] = request.getAndroidXiaoMiActivity();
  }

  if (!!request.hasAndroidXiaoMiNotifyBody()) {
    query["AndroidXiaoMiNotifyBody"] = request.getAndroidXiaoMiNotifyBody();
  }

  if (!!request.hasAndroidXiaoMiNotifyTitle()) {
    query["AndroidXiaoMiNotifyTitle"] = request.getAndroidXiaoMiNotifyTitle();
  }

  if (!!request.hasAndroidXiaomiBigPictureUrl()) {
    query["AndroidXiaomiBigPictureUrl"] = request.getAndroidXiaomiBigPictureUrl();
  }

  if (!!request.hasAndroidXiaomiFocusParam()) {
    query["AndroidXiaomiFocusParam"] = request.getAndroidXiaomiFocusParam();
  }

  if (!!request.hasAndroidXiaomiFocusPics()) {
    query["AndroidXiaomiFocusPics"] = request.getAndroidXiaomiFocusPics();
  }

  if (!!request.hasAndroidXiaomiImageUrl()) {
    query["AndroidXiaomiImageUrl"] = request.getAndroidXiaomiImageUrl();
  }

  if (!!request.hasAndroidXiaomiTemplateId()) {
    query["AndroidXiaomiTemplateId"] = request.getAndroidXiaomiTemplateId();
  }

  if (!!request.hasAndroidXiaomiTemplateParams()) {
    query["AndroidXiaomiTemplateParams"] = request.getAndroidXiaomiTemplateParams();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasHarmonyAction()) {
    query["HarmonyAction"] = request.getHarmonyAction();
  }

  if (!!request.hasHarmonyActionType()) {
    query["HarmonyActionType"] = request.getHarmonyActionType();
  }

  if (!!request.hasHarmonyBadgeAddNum()) {
    query["HarmonyBadgeAddNum"] = request.getHarmonyBadgeAddNum();
  }

  if (!!request.hasHarmonyBadgeSetNum()) {
    query["HarmonyBadgeSetNum"] = request.getHarmonyBadgeSetNum();
  }

  if (!!request.hasHarmonyCategory()) {
    query["HarmonyCategory"] = request.getHarmonyCategory();
  }

  if (!!request.hasHarmonyExtParameters()) {
    query["HarmonyExtParameters"] = request.getHarmonyExtParameters();
  }

  if (!!request.hasHarmonyExtensionExtraData()) {
    query["HarmonyExtensionExtraData"] = request.getHarmonyExtensionExtraData();
  }

  if (!!request.hasHarmonyExtensionPush()) {
    query["HarmonyExtensionPush"] = request.getHarmonyExtensionPush();
  }

  if (!!request.hasHarmonyImageUrl()) {
    query["HarmonyImageUrl"] = request.getHarmonyImageUrl();
  }

  if (!!request.hasHarmonyInboxContent()) {
    query["HarmonyInboxContent"] = request.getHarmonyInboxContent();
  }

  if (!!request.hasHarmonyLiveViewPayload()) {
    query["HarmonyLiveViewPayload"] = request.getHarmonyLiveViewPayload();
  }

  if (!!request.hasHarmonyNotificationSlotType()) {
    query["HarmonyNotificationSlotType"] = request.getHarmonyNotificationSlotType();
  }

  if (!!request.hasHarmonyNotifyId()) {
    query["HarmonyNotifyId"] = request.getHarmonyNotifyId();
  }

  if (!!request.hasHarmonyReceiptId()) {
    query["HarmonyReceiptId"] = request.getHarmonyReceiptId();
  }

  if (!!request.hasHarmonyRemind()) {
    query["HarmonyRemind"] = request.getHarmonyRemind();
  }

  if (!!request.hasHarmonyRemindBody()) {
    query["HarmonyRemindBody"] = request.getHarmonyRemindBody();
  }

  if (!!request.hasHarmonyRemindTitle()) {
    query["HarmonyRemindTitle"] = request.getHarmonyRemindTitle();
  }

  if (!!request.hasHarmonyRenderStyle()) {
    query["HarmonyRenderStyle"] = request.getHarmonyRenderStyle();
  }

  if (!!request.hasHarmonyTestMessage()) {
    query["HarmonyTestMessage"] = request.getHarmonyTestMessage();
  }

  if (!!request.hasHarmonyUri()) {
    query["HarmonyUri"] = request.getHarmonyUri();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.getIdempotentToken();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasPushTime()) {
    query["PushTime"] = request.getPushTime();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.getPushType();
  }

  if (!!request.hasSendChannels()) {
    query["SendChannels"] = request.getSendChannels();
  }

  if (!!request.hasSendSpeed()) {
    query["SendSpeed"] = request.getSendSpeed();
  }

  if (!!request.hasSmsDelaySecs()) {
    query["SmsDelaySecs"] = request.getSmsDelaySecs();
  }

  if (!!request.hasSmsParams()) {
    query["SmsParams"] = request.getSmsParams();
  }

  if (!!request.hasSmsSendPolicy()) {
    query["SmsSendPolicy"] = request.getSmsSendPolicy();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.getSmsSignName();
  }

  if (!!request.hasSmsTemplateName()) {
    query["SmsTemplateName"] = request.getSmsTemplateName();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.getStoreOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasTrim()) {
    query["Trim"] = request.getTrim();
  }

  if (!!request.hasIOSApnsEnv()) {
    query["iOSApnsEnv"] = request.getIOSApnsEnv();
  }

  if (!!request.hasIOSBadge()) {
    query["iOSBadge"] = request.getIOSBadge();
  }

  if (!!request.hasIOSBadgeAutoIncrement()) {
    query["iOSBadgeAutoIncrement"] = request.getIOSBadgeAutoIncrement();
  }

  if (!!request.hasIOSExtParameters()) {
    query["iOSExtParameters"] = request.getIOSExtParameters();
  }

  if (!!request.hasIOSInterruptionLevel()) {
    query["iOSInterruptionLevel"] = request.getIOSInterruptionLevel();
  }

  if (!!request.hasIOSLiveActivityAttributes()) {
    query["iOSLiveActivityAttributes"] = request.getIOSLiveActivityAttributes();
  }

  if (!!request.hasIOSLiveActivityAttributesType()) {
    query["iOSLiveActivityAttributesType"] = request.getIOSLiveActivityAttributesType();
  }

  if (!!request.hasIOSLiveActivityContentState()) {
    query["iOSLiveActivityContentState"] = request.getIOSLiveActivityContentState();
  }

  if (!!request.hasIOSLiveActivityDismissalDate()) {
    query["iOSLiveActivityDismissalDate"] = request.getIOSLiveActivityDismissalDate();
  }

  if (!!request.hasIOSLiveActivityEvent()) {
    query["iOSLiveActivityEvent"] = request.getIOSLiveActivityEvent();
  }

  if (!!request.hasIOSLiveActivityId()) {
    query["iOSLiveActivityId"] = request.getIOSLiveActivityId();
  }

  if (!!request.hasIOSLiveActivityStaleDate()) {
    query["iOSLiveActivityStaleDate"] = request.getIOSLiveActivityStaleDate();
  }

  if (!!request.hasIOSMusic()) {
    query["iOSMusic"] = request.getIOSMusic();
  }

  if (!!request.hasIOSMutableContent()) {
    query["iOSMutableContent"] = request.getIOSMutableContent();
  }

  if (!!request.hasIOSNotificationCategory()) {
    query["iOSNotificationCategory"] = request.getIOSNotificationCategory();
  }

  if (!!request.hasIOSNotificationCollapseId()) {
    query["iOSNotificationCollapseId"] = request.getIOSNotificationCollapseId();
  }

  if (!!request.hasIOSNotificationThreadId()) {
    query["iOSNotificationThreadId"] = request.getIOSNotificationThreadId();
  }

  if (!!request.hasIOSRelevanceScore()) {
    query["iOSRelevanceScore"] = request.getIOSRelevanceScore();
  }

  if (!!request.hasIOSRemind()) {
    query["iOSRemind"] = request.getIOSRemind();
  }

  if (!!request.hasIOSRemindBody()) {
    query["iOSRemindBody"] = request.getIOSRemindBody();
  }

  if (!!request.hasIOSSilentNotification()) {
    query["iOSSilentNotification"] = request.getIOSSilentNotification();
  }

  if (!!request.hasIOSSubtitle()) {
    query["iOSSubtitle"] = request.getIOSSubtitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Push"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushResponse>();
}

/**
 * @summary This advanced push API sends notifications or messages to various devices. It provides a rich set of custom parameters to implement push behaviors for various scenarios.
 *
 * @description **Before you use this API, make sure you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.**
 * This API supports pushes to Android, iOS, and HarmonyOS devices. For each platform, you must provide the corresponding AppKey.
 *
 * @param request PushRequest
 * @return PushResponse
 */
PushResponse Client::push(const PushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushWithOptions(request, runtime);
}

/**
 * @summary Sends a message to an Android device through the Alibaba Cloud Mobile Push proprietary channel. After the app on the device receives the message, it must handle subsequent actions, such as implementing business logic or displaying a local notification.
 *
 * @description **This operation will be deprecated soon. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html), which provides enhanced push capabilities. To achieve the same result, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `MESSAGE` in the advanced push API.**
 * **Before using this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * By default, this operation sends messages only to online devices. If a device is offline, set the `StoreOffline` parameter. The push system then stores the message and delivers it automatically when the device comes online.
 *
 * @param request PushMessageToAndroidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMessageToAndroidResponse
 */
PushMessageToAndroidResponse Client::pushMessageToAndroidWithOptions(const PushMessageToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.getStoreOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushMessageToAndroid"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMessageToAndroidResponse>();
}

/**
 * @summary Sends a message to an Android device through the Alibaba Cloud Mobile Push proprietary channel. After the app on the device receives the message, it must handle subsequent actions, such as implementing business logic or displaying a local notification.
 *
 * @description **This operation will be deprecated soon. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html), which provides enhanced push capabilities. To achieve the same result, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `MESSAGE` in the advanced push API.**
 * **Before using this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * By default, this operation sends messages only to online devices. If a device is offline, set the `StoreOffline` parameter. The push system then stores the message and delivers it automatically when the device comes online.
 *
 * @param request PushMessageToAndroidRequest
 * @return PushMessageToAndroidResponse
 */
PushMessageToAndroidResponse Client::pushMessageToAndroid(const PushMessageToAndroidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMessageToAndroidWithOptions(request, runtime);
}

/**
 * @summary Pushes messages to iOS devices. These messages are delivered through the proprietary channel of Alibaba Cloud Mobile Push. After the app on a device receives a message, it must handle subsequent actions, such as implementing business behaviors or creating local notifications.
 *
 * @description **This API is deprecated. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html) for more push capabilities. In that API, set the push platform `DeviceType` to `iOS` and the push type `PushType` to `MESSAGE` to achieve the same effect.**
 * **Before you use this API, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * By default, this API sends messages only to online devices. If a device is offline, you can set the `StoreOffline` parameter. The push system then saves the message and automatically delivers it when the device comes back online.
 *
 * @param request PushMessageToiOSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMessageToiOSResponse
 */
PushMessageToiOSResponse Client::pushMessageToiOSWithOptions(const PushMessageToiOSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.getStoreOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushMessageToiOS"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMessageToiOSResponse>();
}

/**
 * @summary Pushes messages to iOS devices. These messages are delivered through the proprietary channel of Alibaba Cloud Mobile Push. After the app on a device receives a message, it must handle subsequent actions, such as implementing business behaviors or creating local notifications.
 *
 * @description **This API is deprecated. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html) for more push capabilities. In that API, set the push platform `DeviceType` to `iOS` and the push type `PushType` to `MESSAGE` to achieve the same effect.**
 * **Before you use this API, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * By default, this API sends messages only to online devices. If a device is offline, you can set the `StoreOffline` parameter. The push system then saves the message and automatically delivers it when the device comes back online.
 *
 * @param request PushMessageToiOSRequest
 * @return PushMessageToiOSResponse
 */
PushMessageToiOSResponse Client::pushMessageToiOS(const PushMessageToiOSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMessageToiOSWithOptions(request, runtime);
}

/**
 * @summary Sends a notification to Android devices. The notification appears directly in the device’s notification tray and may be delivered through Alibaba Cloud’s proprietary channel or the device manufacturer’s channel, depending on the scenario.
 *
 * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. In that API, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `NOTICE`.**
 * **Before using this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 *
 * @param request PushNoticeToAndroidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushNoticeToAndroidResponse
 */
PushNoticeToAndroidResponse Client::pushNoticeToAndroidWithOptions(const PushNoticeToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasExtParameters()) {
    query["ExtParameters"] = request.getExtParameters();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.getStoreOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushNoticeToAndroid"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushNoticeToAndroidResponse>();
}

/**
 * @summary Sends a notification to Android devices. The notification appears directly in the device’s notification tray and may be delivered through Alibaba Cloud’s proprietary channel or the device manufacturer’s channel, depending on the scenario.
 *
 * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. In that API, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `NOTICE`.**
 * **Before using this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 *
 * @param request PushNoticeToAndroidRequest
 * @return PushNoticeToAndroidResponse
 */
PushNoticeToAndroidResponse Client::pushNoticeToAndroid(const PushNoticeToAndroidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushNoticeToAndroidWithOptions(request, runtime);
}

/**
 * @summary Send a notification to iOS devices. The notification uses Apple’s APNs channel and appears directly in the device notification center.
 *
 * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. Set the `DeviceType` parameter to `iOS` and the `PushType` parameter to `NOTICE`.**
 * **Before you use this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 *
 * @param request PushNoticeToiOSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushNoticeToiOSResponse
 */
PushNoticeToiOSResponse Client::pushNoticeToiOSWithOptions(const PushNoticeToiOSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApnsEnv()) {
    query["ApnsEnv"] = request.getApnsEnv();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasExtParameters()) {
    query["ExtParameters"] = request.getExtParameters();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushNoticeToiOS"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushNoticeToiOSResponse>();
}

/**
 * @summary Send a notification to iOS devices. The notification uses Apple’s APNs channel and appears directly in the device notification center.
 *
 * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. Set the `DeviceType` parameter to `iOS` and the `PushType` parameter to `NOTICE`.**
 * **Before you use this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 *
 * @param request PushNoticeToiOSRequest
 * @return PushNoticeToiOSResponse
 */
PushNoticeToiOSResponse Client::pushNoticeToiOS(const PushNoticeToiOSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushNoticeToiOSWithOptions(request, runtime);
}

/**
 * @summary This is the advanced push API v2.
 *
 * @description **Before using this API, review the [pricing and billing methods](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * This API supports Android, iOS, and HarmonyOS. For each platform, pass its assigned AppKey.
 *
 * @param tmpReq PushV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushV2Response
 */
PushV2Response Client::pushV2WithOptions(const PushV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushV2ShrinkRequest request = PushV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPushTask()) {
    request.setPushTaskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPushTask(), "PushTask", "json"));
  }

  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.getIdempotentToken();
  }

  if (!!request.hasPushTaskShrink()) {
    query["PushTask"] = request.getPushTaskShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushV2"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushV2Response>();
}

/**
 * @summary This is the advanced push API v2.
 *
 * @description **Before using this API, review the [pricing and billing methods](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
 * This API supports Android, iOS, and HarmonyOS. For each platform, pass its assigned AppKey.
 *
 * @param request PushV2Request
 * @return PushV2Response
 */
PushV2Response Client::pushV2(const PushV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushV2WithOptions(request, runtime);
}

/**
 * @summary Query the list of aliases attached to a specified device.
 *
 * @param request QueryAliasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAliasesResponse
 */
QueryAliasesResponse Client::queryAliasesWithOptions(const QueryAliasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAliases"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAliasesResponse>();
}

/**
 * @summary Query the list of aliases attached to a specified device.
 *
 * @param request QueryAliasesRequest
 * @return QueryAliasesResponse
 */
QueryAliasesResponse Client::queryAliases(const QueryAliasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAliasesWithOptions(request, runtime);
}

/**
 * @summary Query details of a specified device.
 *
 * @param request QueryDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceInfoResponse
 */
QueryDeviceInfoResponse Client::queryDeviceInfoWithOptions(const QueryDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceInfo"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceInfoResponse>();
}

/**
 * @summary Query details of a specified device.
 *
 * @param request QueryDeviceInfoRequest
 * @return QueryDeviceInfoResponse
 */
QueryDeviceInfoResponse Client::queryDeviceInfo(const QueryDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries device statistics by application dimension.
 *
 * @description > Currently, this API supports only daily data. The daily dimension lets you query data for up to 31 days. Days are calculated based on UTC+8.
 *
 * @param request QueryDeviceStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceStatResponse
 */
QueryDeviceStatResponse Client::queryDeviceStatWithOptions(const QueryDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceStat"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceStatResponse>();
}

/**
 * @summary Queries device statistics by application dimension.
 *
 * @description > Currently, this API supports only daily data. The daily dimension lets you query data for up to 31 days. Days are calculated based on UTC+8.
 *
 * @param request QueryDeviceStatRequest
 * @return QueryDeviceStatResponse
 */
QueryDeviceStatResponse Client::queryDeviceStat(const QueryDeviceStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceStatWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of devices associated with an account using the account name.
 *
 * @param request QueryDevicesByAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicesByAccountResponse
 */
QueryDevicesByAccountResponse Client::queryDevicesByAccountWithOptions(const QueryDevicesByAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDevicesByAccount"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDevicesByAccountResponse>();
}

/**
 * @summary Retrieve the list of devices associated with an account using the account name.
 *
 * @param request QueryDevicesByAccountRequest
 * @return QueryDevicesByAccountResponse
 */
QueryDevicesByAccountResponse Client::queryDevicesByAccount(const QueryDevicesByAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicesByAccountWithOptions(request, runtime);
}

/**
 * @summary Query the list of devices by alias.
 *
 * @param request QueryDevicesByAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicesByAliasResponse
 */
QueryDevicesByAliasResponse Client::queryDevicesByAliasWithOptions(const QueryDevicesByAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDevicesByAlias"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDevicesByAliasResponse>();
}

/**
 * @summary Query the list of devices by alias.
 *
 * @param request QueryDevicesByAliasRequest
 * @return QueryDevicesByAliasResponse
 */
QueryDevicesByAliasResponse Client::queryDevicesByAlias(const QueryDevicesByAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicesByAliasWithOptions(request, runtime);
}

/**
 * @summary You can query push records with pagination and basic filtering.
 *
 * @param request QueryPushRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushRecordsResponse
 */
QueryPushRecordsResponse Client::queryPushRecordsWithOptions(const QueryPushRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.getPushType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPushRecords"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushRecordsResponse>();
}

/**
 * @summary You can query push records with pagination and basic filtering.
 *
 * @param request QueryPushRecordsRequest
 * @return QueryPushRecordsResponse
 */
QueryPushRecordsResponse Client::queryPushRecords(const QueryPushRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushRecordsWithOptions(request, runtime);
}

/**
 * @summary Query push statistics for an app.
 *
 * @param request QueryPushStatByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushStatByAppResponse
 */
QueryPushStatByAppResponse Client::queryPushStatByAppWithOptions(const QueryPushStatByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPushStatByApp"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushStatByAppResponse>();
}

/**
 * @summary Query push statistics for an app.
 *
 * @param request QueryPushStatByAppRequest
 * @return QueryPushStatByAppResponse
 */
QueryPushStatByAppResponse Client::queryPushStatByApp(const QueryPushStatByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushStatByAppWithOptions(request, runtime);
}

/**
 * @summary Queries push statistics for a message.
 *
 * @param request QueryPushStatByMsgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushStatByMsgResponse
 */
QueryPushStatByMsgResponse Client::queryPushStatByMsgWithOptions(const QueryPushStatByMsgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPushStatByMsg"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushStatByMsgResponse>();
}

/**
 * @summary Queries push statistics for a message.
 *
 * @param request QueryPushStatByMsgRequest
 * @return QueryPushStatByMsgResponse
 */
QueryPushStatByMsgResponse Client::queryPushStatByMsg(const QueryPushStatByMsgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushStatByMsgWithOptions(request, runtime);
}

/**
 * @summary Queries tags for a specified object, such as a device, account, or alias.
 *
 * @param request QueryTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagsResponse
 */
QueryTagsResponse Client::queryTagsWithOptions(const QueryTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.getClientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTags"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTagsResponse>();
}

/**
 * @summary Queries tags for a specified object, such as a device, account, or alias.
 *
 * @param request QueryTagsRequest
 * @return QueryTagsResponse
 */
QueryTagsResponse Client::queryTags(const QueryTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagsWithOptions(request, runtime);
}

/**
 * @summary Obtain deduplicated device statistics for an app.
 *
 * @description > This operation returns data only at the daily granularity. You can query up to 31 days of data. Deduplicated device counts reset on the first day of each month.
 *
 * @param request QueryUniqueDeviceStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUniqueDeviceStatResponse
 */
QueryUniqueDeviceStatResponse Client::queryUniqueDeviceStatWithOptions(const QueryUniqueDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUniqueDeviceStat"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUniqueDeviceStatResponse>();
}

/**
 * @summary Obtain deduplicated device statistics for an app.
 *
 * @description > This operation returns data only at the daily granularity. You can query up to 31 days of data. Deduplicated device counts reset on the first day of each month.
 *
 * @param request QueryUniqueDeviceStatRequest
 * @return QueryUniqueDeviceStatResponse
 */
QueryUniqueDeviceStatResponse Client::queryUniqueDeviceStat(const QueryUniqueDeviceStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUniqueDeviceStatWithOptions(request, runtime);
}

/**
 * @summary Removes a tag from an app.
 *
 * @description Deleting a tag takes time. The time required depends on the number of tagged resources. Do not immediately recreate a tag with the same name after you delete it. Wait at least 5 minutes before you recreate a tag in the same app. If you delete multiple tags, wait at least 5 minutes for each deleted tag before you recreate them.
 *
 * @param request RemoveTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagResponse
 */
RemoveTagResponse Client::removeTagWithOptions(const RemoveTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTag"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTagResponse>();
}

/**
 * @summary Removes a tag from an app.
 *
 * @description Deleting a tag takes time. The time required depends on the number of tagged resources. Do not immediately recreate a tag with the same name after you delete it. Wait at least 5 minutes before you recreate a tag in the same app. If you delete multiple tags, wait at least 5 minutes for each deleted tag before you recreate them.
 *
 * @param request RemoveTagRequest
 * @return RemoveTagResponse
 */
RemoveTagResponse Client::removeTag(const RemoveTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTagWithOptions(request, runtime);
}

/**
 * @summary Unbinds an alias. The change takes effect immediately.
 *
 * @param request UnbindAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAliasResponse
 */
UnbindAliasResponse Client::unbindAliasWithOptions(const UnbindAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.getAliasName();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasUnbindAll()) {
    query["UnbindAll"] = request.getUnbindAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindAlias"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindAliasResponse>();
}

/**
 * @summary Unbinds an alias. The change takes effect immediately.
 *
 * @param request UnbindAliasRequest
 * @return UnbindAliasResponse
 */
UnbindAliasResponse Client::unbindAlias(const UnbindAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAliasWithOptions(request, runtime);
}

/**
 * @summary Unbind the mobile phone number from a specified device.
 *
 * @param request UnbindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPhoneResponse
 */
UnbindPhoneResponse Client::unbindPhoneWithOptions(const UnbindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindPhone"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindPhoneResponse>();
}

/**
 * @summary Unbind the mobile phone number from a specified device.
 *
 * @param request UnbindPhoneRequest
 * @return UnbindPhoneResponse
 */
UnbindPhoneResponse Client::unbindPhone(const UnbindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPhoneWithOptions(request, runtime);
}

/**
 * @summary Unbinds one or more tags from a specified target.
 *
 * @param request UnbindTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindTagResponse
 */
UnbindTagResponse Client::unbindTagWithOptions(const UnbindTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.getClientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindTag"},
    {"version" , "2016-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindTagResponse>();
}

/**
 * @summary Unbinds one or more tags from a specified target.
 *
 * @param request UnbindTagRequest
 * @return UnbindTagResponse
 */
UnbindTagResponse Client::unbindTag(const UnbindTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindTagWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Push20160801