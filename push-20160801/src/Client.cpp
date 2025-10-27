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
 * @summary 绑定别名
 *
 * @param request BindAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAliasResponse
 */
BindAliasResponse Client::bindAliasWithOptions(const BindAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.aliasName();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
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
 * @summary 绑定别名
 *
 * @param request BindAliasRequest
 * @return BindAliasResponse
 */
BindAliasResponse Client::bindAlias(const BindAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAliasWithOptions(request, runtime);
}

/**
 * @summary 绑定手机号码
 *
 * @param request BindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPhoneResponse
 */
BindPhoneResponse Client::bindPhoneWithOptions(const BindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
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
 * @summary 绑定手机号码
 *
 * @param request BindPhoneRequest
 * @return BindPhoneResponse
 */
BindPhoneResponse Client::bindPhone(const BindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPhoneWithOptions(request, runtime);
}

/**
 * @summary 绑定标签
 *
 * @param request BindTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindTagResponse
 */
BindTagResponse Client::bindTagWithOptions(const BindTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.clientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.keyType();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
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
 * @summary 绑定标签
 *
 * @param request BindTagRequest
 * @return BindTagResponse
 */
BindTagResponse Client::bindTag(const BindTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindTagWithOptions(request, runtime);
}

/**
 * @summary 取消定时推送任务
 *
 * @param request CancelPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPushResponse
 */
CancelPushResponse Client::cancelPushWithOptions(const CancelPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
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
 * @summary 取消定时推送任务
 *
 * @param request CancelPushRequest
 * @return CancelPushResponse
 */
CancelPushResponse Client::cancelPush(const CancelPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPushWithOptions(request, runtime);
}

/**
 * @param request CheckCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCertificateResponse
 */
CheckCertificateResponse Client::checkCertificateWithOptions(const CheckCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
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
 * @summary 【废弃】验证设备有效性
 *
 * @param request CheckDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDeviceResponse
 */
CheckDeviceResponse Client::checkDeviceWithOptions(const CheckDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
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
 * @summary 【废弃】验证设备有效性
 *
 * @param request CheckDeviceRequest
 * @return CheckDeviceResponse
 */
CheckDeviceResponse Client::checkDevice(const CheckDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDeviceWithOptions(request, runtime);
}

/**
 * @summary 批量检查设备有效性
 *
 * @param request CheckDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDevicesResponse
 */
CheckDevicesResponse Client::checkDevicesWithOptions(const CheckDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceIds()) {
    query["DeviceIds"] = request.deviceIds();
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
 * @summary 批量检查设备有效性
 *
 * @param request CheckDevicesRequest
 * @return CheckDevicesResponse
 */
CheckDevicesResponse Client::checkDevices(const CheckDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDevicesWithOptions(request, runtime);
}

/**
 * @summary 完成持续推送任务
 *
 * @param request CompleteContinuouslyPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteContinuouslyPushResponse
 */
CompleteContinuouslyPushResponse Client::completeContinuouslyPushWithOptions(const CompleteContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
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
 * @summary 完成持续推送任务
 *
 * @param request CompleteContinuouslyPushRequest
 * @return CompleteContinuouslyPushResponse
 */
CompleteContinuouslyPushResponse Client::completeContinuouslyPush(const CompleteContinuouslyPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeContinuouslyPushWithOptions(request, runtime);
}

/**
 * @summary 持续推送
 *
 * @param request ContinuouslyPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuouslyPushResponse
 */
ContinuouslyPushResponse Client::continuouslyPushWithOptions(const ContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
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
 * @summary 持续推送
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
 * @summary 【废弃】查询用户已创建的app列表
 *
 * @param request ListSummaryAppsRequest
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
 * @summary 【废弃】查询用户已创建的app列表
 *
 * @return ListSummaryAppsResponse
 */
ListSummaryAppsResponse Client::listSummaryApps() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSummaryAppsWithOptions(runtime);
}

/**
 * @summary 获取标签列表
 *
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
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
 * @summary 获取标签列表
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @summary 批量推送
 *
 * @param request MassPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MassPushResponse
 */
MassPushResponse Client::massPushWithOptions(const MassPushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.idempotentToken();
  }

  json body = {};
  if (!!request.hasPushTask()) {
    body["PushTask"] = request.pushTask();
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
 * @summary 批量推送
 *
 * @param request MassPushRequest
 * @return MassPushResponse
 */
MassPushResponse Client::massPush(const MassPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return massPushWithOptions(request, runtime);
}

/**
 * @summary 新版高级推送接口
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
    request.setPushTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.pushTasks(), "PushTasks", "json"));
  }

  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.idempotentToken();
  }

  if (!!request.hasPushTasksShrink()) {
    query["PushTasks"] = request.pushTasksShrink();
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
 * @summary 新版高级推送接口
 *
 * @param request MassPushV2Request
 * @return MassPushV2Response
 */
MassPushV2Response Client::massPushV2(const MassPushV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return massPushV2WithOptions(request, runtime);
}

/**
 * @summary 高级推送接口
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
    request.setAndroidOppoPrivateContentParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidOppoPrivateContentParameters(), "AndroidOppoPrivateContentParameters", "json"));
  }

  if (!!tmpReq.hasAndroidOppoPrivateTitleParameters()) {
    request.setAndroidOppoPrivateTitleParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidOppoPrivateTitleParameters(), "AndroidOppoPrivateTitleParameters", "json"));
  }

  json query = {};
  if (!!request.hasAndroidActivity()) {
    query["AndroidActivity"] = request.androidActivity();
  }

  if (!!request.hasAndroidBadgeAddNum()) {
    query["AndroidBadgeAddNum"] = request.androidBadgeAddNum();
  }

  if (!!request.hasAndroidBadgeClass()) {
    query["AndroidBadgeClass"] = request.androidBadgeClass();
  }

  if (!!request.hasAndroidBadgeSetNum()) {
    query["AndroidBadgeSetNum"] = request.androidBadgeSetNum();
  }

  if (!!request.hasAndroidBigBody()) {
    query["AndroidBigBody"] = request.androidBigBody();
  }

  if (!!request.hasAndroidBigPictureUrl()) {
    query["AndroidBigPictureUrl"] = request.androidBigPictureUrl();
  }

  if (!!request.hasAndroidBigTitle()) {
    query["AndroidBigTitle"] = request.androidBigTitle();
  }

  if (!!request.hasAndroidExtParameters()) {
    query["AndroidExtParameters"] = request.androidExtParameters();
  }

  if (!!request.hasAndroidHonorTargetUserType()) {
    query["AndroidHonorTargetUserType"] = request.androidHonorTargetUserType();
  }

  if (!!request.hasAndroidHuaweiLiveNotificationPayload()) {
    query["AndroidHuaweiLiveNotificationPayload"] = request.androidHuaweiLiveNotificationPayload();
  }

  if (!!request.hasAndroidHuaweiReceiptId()) {
    query["AndroidHuaweiReceiptId"] = request.androidHuaweiReceiptId();
  }

  if (!!request.hasAndroidHuaweiTargetUserType()) {
    query["AndroidHuaweiTargetUserType"] = request.androidHuaweiTargetUserType();
  }

  if (!!request.hasAndroidImageUrl()) {
    query["AndroidImageUrl"] = request.androidImageUrl();
  }

  if (!!request.hasAndroidInboxBody()) {
    query["AndroidInboxBody"] = request.androidInboxBody();
  }

  if (!!request.hasAndroidMeizuNoticeMsgType()) {
    query["AndroidMeizuNoticeMsgType"] = request.androidMeizuNoticeMsgType();
  }

  if (!!request.hasAndroidMessageHuaweiCategory()) {
    query["AndroidMessageHuaweiCategory"] = request.androidMessageHuaweiCategory();
  }

  if (!!request.hasAndroidMessageHuaweiUrgency()) {
    query["AndroidMessageHuaweiUrgency"] = request.androidMessageHuaweiUrgency();
  }

  if (!!request.hasAndroidMessageOppoCategory()) {
    query["AndroidMessageOppoCategory"] = request.androidMessageOppoCategory();
  }

  if (!!request.hasAndroidMessageOppoNotifyLevel()) {
    query["AndroidMessageOppoNotifyLevel"] = request.androidMessageOppoNotifyLevel();
  }

  if (!!request.hasAndroidMessageVivoCategory()) {
    query["AndroidMessageVivoCategory"] = request.androidMessageVivoCategory();
  }

  if (!!request.hasAndroidMusic()) {
    query["AndroidMusic"] = request.androidMusic();
  }

  if (!!request.hasAndroidNotificationBarPriority()) {
    query["AndroidNotificationBarPriority"] = request.androidNotificationBarPriority();
  }

  if (!!request.hasAndroidNotificationBarType()) {
    query["AndroidNotificationBarType"] = request.androidNotificationBarType();
  }

  if (!!request.hasAndroidNotificationChannel()) {
    query["AndroidNotificationChannel"] = request.androidNotificationChannel();
  }

  if (!!request.hasAndroidNotificationGroup()) {
    query["AndroidNotificationGroup"] = request.androidNotificationGroup();
  }

  if (!!request.hasAndroidNotificationHonorChannel()) {
    query["AndroidNotificationHonorChannel"] = request.androidNotificationHonorChannel();
  }

  if (!!request.hasAndroidNotificationHuaweiChannel()) {
    query["AndroidNotificationHuaweiChannel"] = request.androidNotificationHuaweiChannel();
  }

  if (!!request.hasAndroidNotificationNotifyId()) {
    query["AndroidNotificationNotifyId"] = request.androidNotificationNotifyId();
  }

  if (!!request.hasAndroidNotificationThreadId()) {
    query["AndroidNotificationThreadId"] = request.androidNotificationThreadId();
  }

  if (!!request.hasAndroidNotificationVivoChannel()) {
    query["AndroidNotificationVivoChannel"] = request.androidNotificationVivoChannel();
  }

  if (!!request.hasAndroidNotificationXiaomiChannel()) {
    query["AndroidNotificationXiaomiChannel"] = request.androidNotificationXiaomiChannel();
  }

  if (!!request.hasAndroidNotifyType()) {
    query["AndroidNotifyType"] = request.androidNotifyType();
  }

  if (!!request.hasAndroidOpenType()) {
    query["AndroidOpenType"] = request.androidOpenType();
  }

  if (!!request.hasAndroidOpenUrl()) {
    query["AndroidOpenUrl"] = request.androidOpenUrl();
  }

  if (!!request.hasAndroidOppoPrivateContentParametersShrink()) {
    query["AndroidOppoPrivateContentParameters"] = request.androidOppoPrivateContentParametersShrink();
  }

  if (!!request.hasAndroidOppoPrivateMsgTemplateId()) {
    query["AndroidOppoPrivateMsgTemplateId"] = request.androidOppoPrivateMsgTemplateId();
  }

  if (!!request.hasAndroidOppoPrivateTitleParametersShrink()) {
    query["AndroidOppoPrivateTitleParameters"] = request.androidOppoPrivateTitleParametersShrink();
  }

  if (!!request.hasAndroidPopupActivity()) {
    query["AndroidPopupActivity"] = request.androidPopupActivity();
  }

  if (!!request.hasAndroidPopupBody()) {
    query["AndroidPopupBody"] = request.androidPopupBody();
  }

  if (!!request.hasAndroidPopupTitle()) {
    query["AndroidPopupTitle"] = request.androidPopupTitle();
  }

  if (!!request.hasAndroidRemind()) {
    query["AndroidRemind"] = request.androidRemind();
  }

  if (!!request.hasAndroidRenderStyle()) {
    query["AndroidRenderStyle"] = request.androidRenderStyle();
  }

  if (!!request.hasAndroidTargetUserType()) {
    query["AndroidTargetUserType"] = request.androidTargetUserType();
  }

  if (!!request.hasAndroidVivoPushMode()) {
    query["AndroidVivoPushMode"] = request.androidVivoPushMode();
  }

  if (!!request.hasAndroidVivoReceiptId()) {
    query["AndroidVivoReceiptId"] = request.androidVivoReceiptId();
  }

  if (!!request.hasAndroidXiaoMiActivity()) {
    query["AndroidXiaoMiActivity"] = request.androidXiaoMiActivity();
  }

  if (!!request.hasAndroidXiaoMiNotifyBody()) {
    query["AndroidXiaoMiNotifyBody"] = request.androidXiaoMiNotifyBody();
  }

  if (!!request.hasAndroidXiaoMiNotifyTitle()) {
    query["AndroidXiaoMiNotifyTitle"] = request.androidXiaoMiNotifyTitle();
  }

  if (!!request.hasAndroidXiaomiBigPictureUrl()) {
    query["AndroidXiaomiBigPictureUrl"] = request.androidXiaomiBigPictureUrl();
  }

  if (!!request.hasAndroidXiaomiImageUrl()) {
    query["AndroidXiaomiImageUrl"] = request.androidXiaomiImageUrl();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.deviceType();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasHarmonyAction()) {
    query["HarmonyAction"] = request.harmonyAction();
  }

  if (!!request.hasHarmonyActionType()) {
    query["HarmonyActionType"] = request.harmonyActionType();
  }

  if (!!request.hasHarmonyBadgeAddNum()) {
    query["HarmonyBadgeAddNum"] = request.harmonyBadgeAddNum();
  }

  if (!!request.hasHarmonyBadgeSetNum()) {
    query["HarmonyBadgeSetNum"] = request.harmonyBadgeSetNum();
  }

  if (!!request.hasHarmonyCategory()) {
    query["HarmonyCategory"] = request.harmonyCategory();
  }

  if (!!request.hasHarmonyExtParameters()) {
    query["HarmonyExtParameters"] = request.harmonyExtParameters();
  }

  if (!!request.hasHarmonyExtensionExtraData()) {
    query["HarmonyExtensionExtraData"] = request.harmonyExtensionExtraData();
  }

  if (!!request.hasHarmonyExtensionPush()) {
    query["HarmonyExtensionPush"] = request.harmonyExtensionPush();
  }

  if (!!request.hasHarmonyImageUrl()) {
    query["HarmonyImageUrl"] = request.harmonyImageUrl();
  }

  if (!!request.hasHarmonyInboxContent()) {
    query["HarmonyInboxContent"] = request.harmonyInboxContent();
  }

  if (!!request.hasHarmonyLiveViewPayload()) {
    query["HarmonyLiveViewPayload"] = request.harmonyLiveViewPayload();
  }

  if (!!request.hasHarmonyNotificationSlotType()) {
    query["HarmonyNotificationSlotType"] = request.harmonyNotificationSlotType();
  }

  if (!!request.hasHarmonyNotifyId()) {
    query["HarmonyNotifyId"] = request.harmonyNotifyId();
  }

  if (!!request.hasHarmonyReceiptId()) {
    query["HarmonyReceiptId"] = request.harmonyReceiptId();
  }

  if (!!request.hasHarmonyRemind()) {
    query["HarmonyRemind"] = request.harmonyRemind();
  }

  if (!!request.hasHarmonyRemindBody()) {
    query["HarmonyRemindBody"] = request.harmonyRemindBody();
  }

  if (!!request.hasHarmonyRemindTitle()) {
    query["HarmonyRemindTitle"] = request.harmonyRemindTitle();
  }

  if (!!request.hasHarmonyRenderStyle()) {
    query["HarmonyRenderStyle"] = request.harmonyRenderStyle();
  }

  if (!!request.hasHarmonyTestMessage()) {
    query["HarmonyTestMessage"] = request.harmonyTestMessage();
  }

  if (!!request.hasHarmonyUri()) {
    query["HarmonyUri"] = request.harmonyUri();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.idempotentToken();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.jobKey();
  }

  if (!!request.hasPushTime()) {
    query["PushTime"] = request.pushTime();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.pushType();
  }

  if (!!request.hasSendChannels()) {
    query["SendChannels"] = request.sendChannels();
  }

  if (!!request.hasSendSpeed()) {
    query["SendSpeed"] = request.sendSpeed();
  }

  if (!!request.hasSmsDelaySecs()) {
    query["SmsDelaySecs"] = request.smsDelaySecs();
  }

  if (!!request.hasSmsParams()) {
    query["SmsParams"] = request.smsParams();
  }

  if (!!request.hasSmsSendPolicy()) {
    query["SmsSendPolicy"] = request.smsSendPolicy();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.smsSignName();
  }

  if (!!request.hasSmsTemplateName()) {
    query["SmsTemplateName"] = request.smsTemplateName();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.storeOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasTrim()) {
    query["Trim"] = request.trim();
  }

  if (!!request.hasIOSApnsEnv()) {
    query["iOSApnsEnv"] = request.iOSApnsEnv();
  }

  if (!!request.hasIOSBadge()) {
    query["iOSBadge"] = request.iOSBadge();
  }

  if (!!request.hasIOSBadgeAutoIncrement()) {
    query["iOSBadgeAutoIncrement"] = request.iOSBadgeAutoIncrement();
  }

  if (!!request.hasIOSExtParameters()) {
    query["iOSExtParameters"] = request.iOSExtParameters();
  }

  if (!!request.hasIOSInterruptionLevel()) {
    query["iOSInterruptionLevel"] = request.iOSInterruptionLevel();
  }

  if (!!request.hasIOSLiveActivityAttributes()) {
    query["iOSLiveActivityAttributes"] = request.iOSLiveActivityAttributes();
  }

  if (!!request.hasIOSLiveActivityAttributesType()) {
    query["iOSLiveActivityAttributesType"] = request.iOSLiveActivityAttributesType();
  }

  if (!!request.hasIOSLiveActivityContentState()) {
    query["iOSLiveActivityContentState"] = request.iOSLiveActivityContentState();
  }

  if (!!request.hasIOSLiveActivityDismissalDate()) {
    query["iOSLiveActivityDismissalDate"] = request.iOSLiveActivityDismissalDate();
  }

  if (!!request.hasIOSLiveActivityEvent()) {
    query["iOSLiveActivityEvent"] = request.iOSLiveActivityEvent();
  }

  if (!!request.hasIOSLiveActivityId()) {
    query["iOSLiveActivityId"] = request.iOSLiveActivityId();
  }

  if (!!request.hasIOSLiveActivityStaleDate()) {
    query["iOSLiveActivityStaleDate"] = request.iOSLiveActivityStaleDate();
  }

  if (!!request.hasIOSMusic()) {
    query["iOSMusic"] = request.iOSMusic();
  }

  if (!!request.hasIOSMutableContent()) {
    query["iOSMutableContent"] = request.iOSMutableContent();
  }

  if (!!request.hasIOSNotificationCategory()) {
    query["iOSNotificationCategory"] = request.iOSNotificationCategory();
  }

  if (!!request.hasIOSNotificationCollapseId()) {
    query["iOSNotificationCollapseId"] = request.iOSNotificationCollapseId();
  }

  if (!!request.hasIOSNotificationThreadId()) {
    query["iOSNotificationThreadId"] = request.iOSNotificationThreadId();
  }

  if (!!request.hasIOSRelevanceScore()) {
    query["iOSRelevanceScore"] = request.iOSRelevanceScore();
  }

  if (!!request.hasIOSRemind()) {
    query["iOSRemind"] = request.iOSRemind();
  }

  if (!!request.hasIOSRemindBody()) {
    query["iOSRemindBody"] = request.iOSRemindBody();
  }

  if (!!request.hasIOSSilentNotification()) {
    query["iOSSilentNotification"] = request.iOSSilentNotification();
  }

  if (!!request.hasIOSSubtitle()) {
    query["iOSSubtitle"] = request.iOSSubtitle();
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
 * @summary 高级推送接口
 *
 * @param request PushRequest
 * @return PushResponse
 */
PushResponse Client::push(const PushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushWithOptions(request, runtime);
}

/**
 * @summary 推送消息给Android设备
 *
 * @param request PushMessageToAndroidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMessageToAndroidResponse
 */
PushMessageToAndroidResponse Client::pushMessageToAndroidWithOptions(const PushMessageToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.jobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.storeOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 推送消息给Android设备
 *
 * @param request PushMessageToAndroidRequest
 * @return PushMessageToAndroidResponse
 */
PushMessageToAndroidResponse Client::pushMessageToAndroid(const PushMessageToAndroidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMessageToAndroidWithOptions(request, runtime);
}

/**
 * @summary 推送消息给iOS设备
 *
 * @param request PushMessageToiOSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMessageToiOSResponse
 */
PushMessageToiOSResponse Client::pushMessageToiOSWithOptions(const PushMessageToiOSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.jobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.storeOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 推送消息给iOS设备
 *
 * @param request PushMessageToiOSRequest
 * @return PushMessageToiOSResponse
 */
PushMessageToiOSResponse Client::pushMessageToiOS(const PushMessageToiOSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMessageToiOSWithOptions(request, runtime);
}

/**
 * @summary 推送通知给Android设备
 *
 * @param request PushNoticeToAndroidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushNoticeToAndroidResponse
 */
PushNoticeToAndroidResponse Client::pushNoticeToAndroidWithOptions(const PushNoticeToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasExtParameters()) {
    query["ExtParameters"] = request.extParameters();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.jobKey();
  }

  if (!!request.hasStoreOffline()) {
    query["StoreOffline"] = request.storeOffline();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 推送通知给Android设备
 *
 * @param request PushNoticeToAndroidRequest
 * @return PushNoticeToAndroidResponse
 */
PushNoticeToAndroidResponse Client::pushNoticeToAndroid(const PushNoticeToAndroidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushNoticeToAndroidWithOptions(request, runtime);
}

/**
 * @summary 推送通知给iOS设备
 *
 * @param request PushNoticeToiOSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushNoticeToiOSResponse
 */
PushNoticeToiOSResponse Client::pushNoticeToiOSWithOptions(const PushNoticeToiOSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApnsEnv()) {
    query["ApnsEnv"] = request.apnsEnv();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasExtParameters()) {
    query["ExtParameters"] = request.extParameters();
  }

  if (!!request.hasJobKey()) {
    query["JobKey"] = request.jobKey();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.targetValue();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 推送通知给iOS设备
 *
 * @param request PushNoticeToiOSRequest
 * @return PushNoticeToiOSResponse
 */
PushNoticeToiOSResponse Client::pushNoticeToiOS(const PushNoticeToiOSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushNoticeToiOSWithOptions(request, runtime);
}

/**
 * @summary 新版高级推送接口
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
    request.setPushTaskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.pushTask(), "PushTask", "json"));
  }

  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasIdempotentToken()) {
    query["IdempotentToken"] = request.idempotentToken();
  }

  if (!!request.hasPushTaskShrink()) {
    query["PushTask"] = request.pushTaskShrink();
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
 * @summary 新版高级推送接口
 *
 * @param request PushV2Request
 * @return PushV2Response
 */
PushV2Response Client::pushV2(const PushV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushV2WithOptions(request, runtime);
}

/**
 * @summary 查询别名
 *
 * @param request QueryAliasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAliasesResponse
 */
QueryAliasesResponse Client::queryAliasesWithOptions(const QueryAliasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
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
 * @summary 查询别名
 *
 * @param request QueryAliasesRequest
 * @return QueryAliasesResponse
 */
QueryAliasesResponse Client::queryAliases(const QueryAliasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAliasesWithOptions(request, runtime);
}

/**
 * @summary 查询设备详情
 *
 * @param request QueryDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceInfoResponse
 */
QueryDeviceInfoResponse Client::queryDeviceInfoWithOptions(const QueryDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
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
 * @summary 查询设备详情
 *
 * @param request QueryDeviceInfoRequest
 * @return QueryDeviceInfoResponse
 */
QueryDeviceInfoResponse Client::queryDeviceInfo(const QueryDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary 设备新增与留存
 *
 * @param request QueryDeviceStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceStatResponse
 */
QueryDeviceStatResponse Client::queryDeviceStatWithOptions(const QueryDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.deviceType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
 * @summary 设备新增与留存
 *
 * @param request QueryDeviceStatRequest
 * @return QueryDeviceStatResponse
 */
QueryDeviceStatResponse Client::queryDeviceStat(const QueryDeviceStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceStatWithOptions(request, runtime);
}

/**
 * @summary 通过账户查询设备列表
 *
 * @param request QueryDevicesByAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicesByAccountResponse
 */
QueryDevicesByAccountResponse Client::queryDevicesByAccountWithOptions(const QueryDevicesByAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
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
 * @summary 通过账户查询设备列表
 *
 * @param request QueryDevicesByAccountRequest
 * @return QueryDevicesByAccountResponse
 */
QueryDevicesByAccountResponse Client::queryDevicesByAccount(const QueryDevicesByAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicesByAccountWithOptions(request, runtime);
}

/**
 * @summary 通过别名查询设备列表
 *
 * @param request QueryDevicesByAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicesByAliasResponse
 */
QueryDevicesByAliasResponse Client::queryDevicesByAliasWithOptions(const QueryDevicesByAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.alias();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
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
 * @summary 通过别名查询设备列表
 *
 * @param request QueryDevicesByAliasRequest
 * @return QueryDevicesByAliasResponse
 */
QueryDevicesByAliasResponse Client::queryDevicesByAlias(const QueryDevicesByAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicesByAliasWithOptions(request, runtime);
}

/**
 * @param request QueryPushRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushRecordsResponse
 */
QueryPushRecordsResponse Client::queryPushRecordsWithOptions(const QueryPushRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.pushType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
 * @param request QueryPushRecordsRequest
 * @return QueryPushRecordsResponse
 */
QueryPushRecordsResponse Client::queryPushRecords(const QueryPushRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushRecordsWithOptions(request, runtime);
}

/**
 * @summary App维度推送统计
 *
 * @param request QueryPushStatByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushStatByAppResponse
 */
QueryPushStatByAppResponse Client::queryPushStatByAppWithOptions(const QueryPushStatByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
 * @summary App维度推送统计
 *
 * @param request QueryPushStatByAppRequest
 * @return QueryPushStatByAppResponse
 */
QueryPushStatByAppResponse Client::queryPushStatByApp(const QueryPushStatByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushStatByAppWithOptions(request, runtime);
}

/**
 * @summary 任务维度推送统计
 *
 * @param request QueryPushStatByMsgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushStatByMsgResponse
 */
QueryPushStatByMsgResponse Client::queryPushStatByMsgWithOptions(const QueryPushStatByMsgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
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
 * @summary 任务维度推送统计
 *
 * @param request QueryPushStatByMsgRequest
 * @return QueryPushStatByMsgResponse
 */
QueryPushStatByMsgResponse Client::queryPushStatByMsg(const QueryPushStatByMsgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushStatByMsgWithOptions(request, runtime);
}

/**
 * @summary 查询标签列表
 *
 * @param request QueryTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagsResponse
 */
QueryTagsResponse Client::queryTagsWithOptions(const QueryTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.clientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.keyType();
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
 * @summary 查询标签列表
 *
 * @param request QueryTagsRequest
 * @return QueryTagsResponse
 */
QueryTagsResponse Client::queryTags(const QueryTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagsWithOptions(request, runtime);
}

/**
 * @summary 去重设备统计
 *
 * @param request QueryUniqueDeviceStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUniqueDeviceStatResponse
 */
QueryUniqueDeviceStatResponse Client::queryUniqueDeviceStatWithOptions(const QueryUniqueDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
 * @summary 去重设备统计
 *
 * @param request QueryUniqueDeviceStatRequest
 * @return QueryUniqueDeviceStatResponse
 */
QueryUniqueDeviceStatResponse Client::queryUniqueDeviceStat(const QueryUniqueDeviceStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUniqueDeviceStatWithOptions(request, runtime);
}

/**
 * @summary 删除标签
 *
 * @param request RemoveTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagResponse
 */
RemoveTagResponse Client::removeTagWithOptions(const RemoveTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
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
 * @summary 删除标签
 *
 * @param request RemoveTagRequest
 * @return RemoveTagResponse
 */
RemoveTagResponse Client::removeTag(const RemoveTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTagWithOptions(request, runtime);
}

/**
 * @summary 解绑别名
 *
 * @param request UnbindAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAliasResponse
 */
UnbindAliasResponse Client::unbindAliasWithOptions(const UnbindAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.aliasName();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasUnbindAll()) {
    query["UnbindAll"] = request.unbindAll();
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
 * @summary 解绑别名
 *
 * @param request UnbindAliasRequest
 * @return UnbindAliasResponse
 */
UnbindAliasResponse Client::unbindAlias(const UnbindAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAliasWithOptions(request, runtime);
}

/**
 * @summary 解绑手机号码
 *
 * @param request UnbindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPhoneResponse
 */
UnbindPhoneResponse Client::unbindPhoneWithOptions(const UnbindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
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
 * @summary 解绑手机号码
 *
 * @param request UnbindPhoneRequest
 * @return UnbindPhoneResponse
 */
UnbindPhoneResponse Client::unbindPhone(const UnbindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPhoneWithOptions(request, runtime);
}

/**
 * @summary 绑定标签
 *
 * @param request UnbindTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindTagResponse
 */
UnbindTagResponse Client::unbindTagWithOptions(const UnbindTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasClientKey()) {
    query["ClientKey"] = request.clientKey();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.keyType();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
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
 * @summary 绑定标签
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