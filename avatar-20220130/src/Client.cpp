#include <darabonba/Core.hpp>
#include <alibabacloud/Avatar20220130.hpp>
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
using namespace AlibabaCloud::Avatar20220130::Models;
namespace AlibabaCloud
{
namespace Avatar20220130
{

AlibabaCloud::Avatar20220130::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("avatar", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 取消视频合成任务
 *
 * @param tmpReq CancelVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelVideoTaskResponse
 */
CancelVideoTaskResponse Client::cancelVideoTaskWithOptions(const CancelVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CancelVideoTaskShrinkRequest request = CancelVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasTaskUuid()) {
    query["TaskUuid"] = request.taskUuid();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelVideoTaskResponse>();
}

/**
 * @summary 取消视频合成任务
 *
 * @param request CancelVideoTaskRequest
 * @return CancelVideoTaskResponse
 */
CancelVideoTaskResponse Client::cancelVideoTask(const CancelVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 端渲染认证
 *
 * @param request ClientAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClientAuthResponse
 */
ClientAuthResponse Client::clientAuthWithOptions(const ClientAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDeviceInfo()) {
    query["DeviceInfo"] = request.deviceInfo();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.deviceType();
  }

  if (!!request.hasLicense()) {
    query["License"] = request.license();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClientAuth"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClientAuthResponse>();
}

/**
 * @summary 端渲染认证
 *
 * @param request ClientAuthRequest
 * @return ClientAuthResponse
 */
ClientAuthResponse Client::clientAuth(const ClientAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clientAuthWithOptions(request, runtime);
}

/**
 * @summary 端渲染开始工作
 *
 * @param request ClientStartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClientStartResponse
 */
ClientStartResponse Client::clientStartWithOptions(const ClientStartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClientStart"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClientStartResponse>();
}

/**
 * @summary 端渲染开始工作
 *
 * @param request ClientStartRequest
 * @return ClientStartResponse
 */
ClientStartResponse Client::clientStart(const ClientStartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clientStartWithOptions(request, runtime);
}

/**
 * @summary 端渲染解绑设备
 *
 * @param request ClientUnbindDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClientUnbindDeviceResponse
 */
ClientUnbindDeviceResponse Client::clientUnbindDeviceWithOptions(const ClientUnbindDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClientUnbindDevice"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClientUnbindDeviceResponse>();
}

/**
 * @summary 端渲染解绑设备
 *
 * @param request ClientUnbindDeviceRequest
 * @return ClientUnbindDeviceResponse
 */
ClientUnbindDeviceResponse Client::clientUnbindDevice(const ClientUnbindDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clientUnbindDeviceWithOptions(request, runtime);
}

/**
 * @summary 停复机关机操作
 *
 * @param request CloseTimedResetOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseTimedResetOperateResponse
 */
CloseTimedResetOperateResponse Client::closeTimedResetOperateWithOptions(const CloseTimedResetOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseTimedResetOperate"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseTimedResetOperateResponse>();
}

/**
 * @summary 停复机关机操作
 *
 * @param request CloseTimedResetOperateRequest
 * @return CloseTimedResetOperateResponse
 */
CloseTimedResetOperateResponse Client::closeTimedResetOperate(const CloseTimedResetOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeTimedResetOperateWithOptions(request, runtime);
}

/**
 * @summary 客户确认2d形象训练
 *
 * @param request ConfirmAvatar2dTrainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmAvatar2dTrainResponse
 */
ConfirmAvatar2dTrainResponse Client::confirmAvatar2dTrainWithOptions(const ConfirmAvatar2dTrainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasConfirm()) {
    query["Confirm"] = request.confirm();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmAvatar2dTrain"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmAvatar2dTrainResponse>();
}

/**
 * @summary 客户确认2d形象训练
 *
 * @param request ConfirmAvatar2dTrainRequest
 * @return ConfirmAvatar2dTrainResponse
 */
ConfirmAvatar2dTrainResponse Client::confirmAvatar2dTrain(const ConfirmAvatar2dTrainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmAvatar2dTrainWithOptions(request, runtime);
}

/**
 * @summary 提交一个创建2d人物的任务
 *
 * @param request Create2dAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Create2dAvatarResponse
 */
Create2dAvatarResponse Client::create2dAvatarWithOptions(const Create2dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.image();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrientation()) {
    query["Orientation"] = request.orientation();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.portrait();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.transparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Create2dAvatar"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Create2dAvatarResponse>();
}

/**
 * @summary 提交一个创建2d人物的任务
 *
 * @param request Create2dAvatarRequest
 * @return Create2dAvatarResponse
 */
Create2dAvatarResponse Client::create2dAvatar(const Create2dAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return create2dAvatarWithOptions(request, runtime);
}

/**
 * @summary 删除数字人人物
 *
 * @param request DeleteAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAvatarResponse
 */
DeleteAvatarResponse Client::deleteAvatarWithOptions(const DeleteAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAvatar"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAvatarResponse>();
}

/**
 * @summary 删除数字人人物
 *
 * @param request DeleteAvatarRequest
 * @return DeleteAvatarResponse
 */
DeleteAvatarResponse Client::deleteAvatar(const DeleteAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAvatarWithOptions(request, runtime);
}

/**
 * @summary 语音双工决策接口API
 *
 * @param tmpReq DuplexDecisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DuplexDecisionResponse
 */
DuplexDecisionResponse Client::duplexDecisionWithOptions(const DuplexDecisionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DuplexDecisionShrinkRequest request = DuplexDecisionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomKeywords()) {
    request.setCustomKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customKeywords(), "CustomKeywords", "json"));
  }

  if (!!tmpReq.hasDialogContext()) {
    request.setDialogContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dialogContext(), "DialogContext", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBizRequestId()) {
    query["BizRequestId"] = request.bizRequestId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.callTime();
  }

  if (!!request.hasCustomKeywordsShrink()) {
    query["CustomKeywords"] = request.customKeywordsShrink();
  }

  if (!!request.hasDialogContextShrink()) {
    query["DialogContext"] = request.dialogContextShrink();
  }

  if (!!request.hasDialogStatus()) {
    query["DialogStatus"] = request.dialogStatus();
  }

  if (!!request.hasInterruptType()) {
    query["InterruptType"] = request.interruptType();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DuplexDecision"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DuplexDecisionResponse>();
}

/**
 * @summary 语音双工决策接口API
 *
 * @param request DuplexDecisionRequest
 * @return DuplexDecisionResponse
 */
DuplexDecisionResponse Client::duplexDecision(const DuplexDecisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return duplexDecisionWithOptions(request, runtime);
}

/**
 * @summary 获取一个数字人离线视频生成任务的详情
 *
 * @param tmpReq GetVideoTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoTaskInfoResponse
 */
GetVideoTaskInfoResponse Client::getVideoTaskInfoWithOptions(const GetVideoTaskInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetVideoTaskInfoShrinkRequest request = GetVideoTaskInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoTaskInfo"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoTaskInfoResponse>();
}

/**
 * @summary 获取一个数字人离线视频生成任务的详情
 *
 * @param request GetVideoTaskInfoRequest
 * @return GetVideoTaskInfoResponse
 */
GetVideoTaskInfoResponse Client::getVideoTaskInfo(const GetVideoTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 端渲染license鉴权验证
 *
 * @param request LicenseAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LicenseAuthResponse
 */
LicenseAuthResponse Client::licenseAuthWithOptions(const LicenseAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasLicense()) {
    query["License"] = request.license();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LicenseAuth"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LicenseAuthResponse>();
}

/**
 * @summary 端渲染license鉴权验证
 *
 * @param request LicenseAuthRequest
 * @return LicenseAuthResponse
 */
LicenseAuthResponse Client::licenseAuth(const LicenseAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return licenseAuthWithOptions(request, runtime);
}

/**
 * @summary 资产服务-根据人物code查询人物详情
 *
 * @param request QueryAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvatarResponse
 */
QueryAvatarResponse Client::queryAvatarWithOptions(const QueryAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvatar"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvatarResponse>();
}

/**
 * @summary 资产服务-根据人物code查询人物详情
 *
 * @param request QueryAvatarRequest
 * @return QueryAvatarResponse
 */
QueryAvatarResponse Client::queryAvatar(const QueryAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvatarWithOptions(request, runtime);
}

/**
 * @summary 资产服务-查询人物列表
 *
 * @param request QueryAvatarListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvatarListResponse
 */
QueryAvatarListResponse Client::queryAvatarListWithOptions(const QueryAvatarListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelType()) {
    query["ModelType"] = request.modelType();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvatarList"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvatarListResponse>();
}

/**
 * @summary 资产服务-查询人物列表
 *
 * @param request QueryAvatarListRequest
 * @return QueryAvatarListResponse
 */
QueryAvatarListResponse Client::queryAvatarList(const QueryAvatarListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvatarListWithOptions(request, runtime);
}

/**
 * @summary 查询运行中instance列表，同时支持指定sessionId查询运行实例，查询列表时最多返回100条
 *
 * @param tmpReq QueryRunningInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRunningInstanceResponse
 */
QueryRunningInstanceResponse Client::queryRunningInstanceWithOptions(const QueryRunningInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryRunningInstanceShrinkRequest request = QueryRunningInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRunningInstance"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRunningInstanceResponse>();
}

/**
 * @summary 查询运行中instance列表，同时支持指定sessionId查询运行实例，查询列表时最多返回100条
 *
 * @param request QueryRunningInstanceRequest
 * @return QueryRunningInstanceResponse
 */
QueryRunningInstanceResponse Client::queryRunningInstance(const QueryRunningInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRunningInstanceWithOptions(request, runtime);
}

/**
 * @summary 定时停复机实例开关机状态查询接口
 *
 * @param request QueryTimedResetOperateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTimedResetOperateStatusResponse
 */
QueryTimedResetOperateStatusResponse Client::queryTimedResetOperateStatusWithOptions(const QueryTimedResetOperateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTimedResetOperateStatus"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTimedResetOperateStatusResponse>();
}

/**
 * @summary 定时停复机实例开关机状态查询接口
 *
 * @param request QueryTimedResetOperateStatusRequest
 * @return QueryTimedResetOperateStatusResponse
 */
QueryTimedResetOperateStatusResponse Client::queryTimedResetOperateStatus(const QueryTimedResetOperateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTimedResetOperateStatusWithOptions(request, runtime);
}

/**
 * @summary 分页查询视频合成任务
 *
 * @param tmpReq QueryVideoTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVideoTaskInfoResponse
 */
QueryVideoTaskInfoResponse Client::queryVideoTaskInfoWithOptions(const QueryVideoTaskInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryVideoTaskInfoShrinkRequest request = QueryVideoTaskInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasOrderById()) {
    query["OrderById"] = request.orderById();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskUuid()) {
    query["TaskUuid"] = request.taskUuid();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVideoTaskInfo"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVideoTaskInfoResponse>();
}

/**
 * @summary 分页查询视频合成任务
 *
 * @param request QueryVideoTaskInfoRequest
 * @return QueryVideoTaskInfoResponse
 */
QueryVideoTaskInfoResponse Client::queryVideoTaskInfo(const QueryVideoTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVideoTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 3d人物渲染信息
 *
 * @param request Render3dAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Render3dAvatarResponse
 */
Render3dAvatarResponse Client::render3dAvatarWithOptions(const Render3dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Render3dAvatar"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Render3dAvatarResponse>();
}

/**
 * @summary 3d人物渲染信息
 *
 * @param request Render3dAvatarRequest
 * @return Render3dAvatarResponse
 */
Render3dAvatarResponse Client::render3dAvatar(const Render3dAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return render3dAvatarWithOptions(request, runtime);
}

/**
 * @summary 发送指令
 *
 * @param tmpReq SendCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCommandResponse
 */
SendCommandResponse Client::sendCommandWithOptions(const SendCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendCommandShrinkRequest request = SendCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasContentShrink()) {
    query["Content"] = request.contentShrink();
  }

  if (!!request.hasFeedback()) {
    query["Feedback"] = request.feedback();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasUniqueCode()) {
    query["UniqueCode"] = request.uniqueCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendCommand"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCommandResponse>();
}

/**
 * @summary 发送指令
 *
 * @param request SendCommandRequest
 * @return SendCommandResponse
 */
SendCommandResponse Client::sendCommand(const SendCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCommandWithOptions(request, runtime);
}

/**
 * @summary 驱动一路流
 *
 * @param tmpReq SendMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessageWithOptions(const SendMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendMessageShrinkRequest request = SendMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamExtension()) {
    request.setStreamExtensionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamExtension(), "StreamExtension", "json"));
  }

  if (!!tmpReq.hasTextRequest()) {
    request.setTextRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textRequest(), "TextRequest", "json"));
  }

  if (!!tmpReq.hasVAMLRequest()) {
    request.setVAMLRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.VAMLRequest(), "VAMLRequest", "json"));
  }

  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.feedback();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStreamExtensionShrink()) {
    query["StreamExtension"] = request.streamExtensionShrink();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTextRequestShrink()) {
    query["TextRequest"] = request.textRequestShrink();
  }

  if (!!request.hasVAMLRequestShrink()) {
    query["VAMLRequest"] = request.VAMLRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageResponse>();
}

/**
 * @summary 驱动一路流
 *
 * @param request SendMessageRequest
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessage(const SendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageWithOptions(request, runtime);
}

/**
 * @summary 发送播报文本
 *
 * @param tmpReq SendTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTextResponse
 */
SendTextResponse Client::sendTextWithOptions(const SendTextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendTextShrinkRequest request = SendTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamExtension()) {
    request.setStreamExtensionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamExtension(), "StreamExtension", "json"));
  }

  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.feedback();
  }

  if (!!request.hasInterrupt()) {
    query["Interrupt"] = request.interrupt();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStreamExtensionShrink()) {
    query["StreamExtension"] = request.streamExtensionShrink();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasUniqueCode()) {
    query["UniqueCode"] = request.uniqueCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendText"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendTextResponse>();
}

/**
 * @summary 发送播报文本
 *
 * @param request SendTextRequest
 * @return SendTextResponse
 */
SendTextResponse Client::sendText(const SendTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendTextWithOptions(request, runtime);
}

/**
 * @summary 发送vaml报表内容
 *
 * @param request SendVamlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVamlResponse
 */
SendVamlResponse Client::sendVamlWithOptions(const SendVamlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasVaml()) {
    query["Vaml"] = request.vaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVaml"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendVamlResponse>();
}

/**
 * @summary 发送vaml报表内容
 *
 * @param request SendVamlRequest
 * @return SendVamlResponse
 */
SendVamlResponse Client::sendVaml(const SendVamlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVamlWithOptions(request, runtime);
}

/**
 * @summary 启动一路流
 *
 * @param tmpReq StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartInstanceShrinkRequest request = StartInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  if (!!tmpReq.hasChannel()) {
    request.setChannelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channel(), "Channel", "json"));
  }

  if (!!tmpReq.hasCommandRequest()) {
    request.setCommandRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commandRequest(), "CommandRequest", "json"));
  }

  if (!!tmpReq.hasTextRequest()) {
    request.setTextRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textRequest(), "TextRequest", "json"));
  }

  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.user(), "User", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasChannelShrink()) {
    query["Channel"] = request.channelShrink();
  }

  if (!!request.hasCommandRequestShrink()) {
    query["CommandRequest"] = request.commandRequestShrink();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTextRequestShrink()) {
    query["TextRequest"] = request.textRequestShrink();
  }

  if (!!request.hasUserShrink()) {
    query["User"] = request.userShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 启动一路流
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary 停复机开机操作
 *
 * @param request StartTimedResetOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTimedResetOperateResponse
 */
StartTimedResetOperateResponse Client::startTimedResetOperateWithOptions(const StartTimedResetOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTimedResetOperate"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTimedResetOperateResponse>();
}

/**
 * @summary 停复机开机操作
 *
 * @param request StartTimedResetOperateRequest
 * @return StartTimedResetOperateResponse
 */
StartTimedResetOperateResponse Client::startTimedResetOperate(const StartTimedResetOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTimedResetOperateWithOptions(request, runtime);
}

/**
 * @summary 关闭一路流
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary 关闭一路流
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary 提交一个音频转2D数字人播报视频生成的任务
 *
 * @param tmpReq SubmitAudioTo2DAvatarVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAudioTo2DAvatarVideoTaskResponse
 */
SubmitAudioTo2DAvatarVideoTaskResponse Client::submitAudioTo2DAvatarVideoTaskWithOptions(const SubmitAudioTo2DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAudioTo2DAvatarVideoTaskShrinkRequest request = SubmitAudioTo2DAvatarVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  if (!!tmpReq.hasAudioInfo()) {
    request.setAudioInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioInfo(), "AudioInfo", "json"));
  }

  if (!!tmpReq.hasAvatarInfo()) {
    request.setAvatarInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.avatarInfo(), "AvatarInfo", "json"));
  }

  if (!!tmpReq.hasVideoInfo()) {
    request.setVideoInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoInfo(), "VideoInfo", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasAudioInfoShrink()) {
    query["AudioInfo"] = request.audioInfoShrink();
  }

  if (!!request.hasAvatarInfoShrink()) {
    query["AvatarInfo"] = request.avatarInfoShrink();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCallbackParams()) {
    query["CallbackParams"] = request.callbackParams();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasVideoInfoShrink()) {
    query["VideoInfo"] = request.videoInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAudioTo2DAvatarVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAudioTo2DAvatarVideoTaskResponse>();
}

/**
 * @summary 提交一个音频转2D数字人播报视频生成的任务
 *
 * @param request SubmitAudioTo2DAvatarVideoTaskRequest
 * @return SubmitAudioTo2DAvatarVideoTaskResponse
 */
SubmitAudioTo2DAvatarVideoTaskResponse Client::submitAudioTo2DAvatarVideoTask(const SubmitAudioTo2DAvatarVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAudioTo2DAvatarVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 提交一个音频转3D数字人播报视频生成的任务
 *
 * @param tmpReq SubmitAudioTo3DAvatarVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAudioTo3DAvatarVideoTaskResponse
 */
SubmitAudioTo3DAvatarVideoTaskResponse Client::submitAudioTo3DAvatarVideoTaskWithOptions(const SubmitAudioTo3DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAudioTo3DAvatarVideoTaskShrinkRequest request = SubmitAudioTo3DAvatarVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  if (!!tmpReq.hasAudioInfo()) {
    request.setAudioInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioInfo(), "AudioInfo", "json"));
  }

  if (!!tmpReq.hasAvatarInfo()) {
    request.setAvatarInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.avatarInfo(), "AvatarInfo", "json"));
  }

  if (!!tmpReq.hasVideoInfo()) {
    request.setVideoInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoInfo(), "VideoInfo", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasAudioInfoShrink()) {
    query["AudioInfo"] = request.audioInfoShrink();
  }

  if (!!request.hasAvatarInfoShrink()) {
    query["AvatarInfo"] = request.avatarInfoShrink();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCallbackParams()) {
    query["CallbackParams"] = request.callbackParams();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasVideoInfoShrink()) {
    query["VideoInfo"] = request.videoInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAudioTo3DAvatarVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAudioTo3DAvatarVideoTaskResponse>();
}

/**
 * @summary 提交一个音频转3D数字人播报视频生成的任务
 *
 * @param request SubmitAudioTo3DAvatarVideoTaskRequest
 * @return SubmitAudioTo3DAvatarVideoTaskResponse
 */
SubmitAudioTo3DAvatarVideoTaskResponse Client::submitAudioTo3DAvatarVideoTask(const SubmitAudioTo3DAvatarVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAudioTo3DAvatarVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 提交一个数字人播报视频生成的任务
 *
 * @param tmpReq SubmitAvatarVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAvatarVideoTaskResponse
 */
SubmitAvatarVideoTaskResponse Client::submitAvatarVideoTaskWithOptions(const SubmitAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAvatarVideoTaskShrinkRequest request = SubmitAvatarVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCallbackParams()) {
    query["CallbackParams"] = request.callbackParams();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasVideoParams()) {
    query["VideoParams"] = request.videoParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAvatarVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAvatarVideoTaskResponse>();
}

/**
 * @summary 提交一个数字人播报视频生成的任务
 *
 * @param request SubmitAvatarVideoTaskRequest
 * @return SubmitAvatarVideoTaskResponse
 */
SubmitAvatarVideoTaskResponse Client::submitAvatarVideoTask(const SubmitAvatarVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAvatarVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 提交一个文本转2D数字人播报视频生成的任务
 *
 * @param tmpReq SubmitTextTo2DAvatarVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTextTo2DAvatarVideoTaskResponse
 */
SubmitTextTo2DAvatarVideoTaskResponse Client::submitTextTo2DAvatarVideoTaskWithOptions(const SubmitTextTo2DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTextTo2DAvatarVideoTaskShrinkRequest request = SubmitTextTo2DAvatarVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  if (!!tmpReq.hasAudioInfo()) {
    request.setAudioInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioInfo(), "AudioInfo", "json"));
  }

  if (!!tmpReq.hasAvatarInfo()) {
    request.setAvatarInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.avatarInfo(), "AvatarInfo", "json"));
  }

  if (!!tmpReq.hasVideoInfo()) {
    request.setVideoInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoInfo(), "VideoInfo", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasAudioInfoShrink()) {
    query["AudioInfo"] = request.audioInfoShrink();
  }

  if (!!request.hasAvatarInfoShrink()) {
    query["AvatarInfo"] = request.avatarInfoShrink();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCallbackParams()) {
    query["CallbackParams"] = request.callbackParams();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasVideoInfoShrink()) {
    query["VideoInfo"] = request.videoInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTextTo2DAvatarVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTextTo2DAvatarVideoTaskResponse>();
}

/**
 * @summary 提交一个文本转2D数字人播报视频生成的任务
 *
 * @param request SubmitTextTo2DAvatarVideoTaskRequest
 * @return SubmitTextTo2DAvatarVideoTaskResponse
 */
SubmitTextTo2DAvatarVideoTaskResponse Client::submitTextTo2DAvatarVideoTask(const SubmitTextTo2DAvatarVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTextTo2DAvatarVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 提交一个文本转3D数字人播报视频生成的任务
 *
 * @param tmpReq SubmitTextTo3DAvatarVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTextTo3DAvatarVideoTaskResponse
 */
SubmitTextTo3DAvatarVideoTaskResponse Client::submitTextTo3DAvatarVideoTaskWithOptions(const SubmitTextTo3DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTextTo3DAvatarVideoTaskShrinkRequest request = SubmitTextTo3DAvatarVideoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApp()) {
    request.setAppShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.app(), "App", "json"));
  }

  if (!!tmpReq.hasAudioInfo()) {
    request.setAudioInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioInfo(), "AudioInfo", "json"));
  }

  if (!!tmpReq.hasAvatarInfo()) {
    request.setAvatarInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.avatarInfo(), "AvatarInfo", "json"));
  }

  if (!!tmpReq.hasVideoInfo()) {
    request.setVideoInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoInfo(), "VideoInfo", "json"));
  }

  json query = {};
  if (!!request.hasAppShrink()) {
    query["App"] = request.appShrink();
  }

  if (!!request.hasAudioInfoShrink()) {
    query["AudioInfo"] = request.audioInfoShrink();
  }

  if (!!request.hasAvatarInfoShrink()) {
    query["AvatarInfo"] = request.avatarInfoShrink();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCallbackParams()) {
    query["CallbackParams"] = request.callbackParams();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasVideoInfoShrink()) {
    query["VideoInfo"] = request.videoInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTextTo3DAvatarVideoTask"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTextTo3DAvatarVideoTaskResponse>();
}

/**
 * @summary 提交一个文本转3D数字人播报视频生成的任务
 *
 * @param request SubmitTextTo3DAvatarVideoTaskRequest
 * @return SubmitTextTo3DAvatarVideoTaskResponse
 */
SubmitTextTo3DAvatarVideoTaskResponse Client::submitTextTo3DAvatarVideoTask(const SubmitTextTo3DAvatarVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTextTo3DAvatarVideoTaskWithOptions(request, runtime);
}

/**
 * @summary 修改创建2d人物的任务
 *
 * @param request Update2dAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Update2dAvatarResponse
 */
Update2dAvatarResponse Client::update2dAvatarWithOptions(const Update2dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.image();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrientation()) {
    query["Orientation"] = request.orientation();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.portrait();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.transparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Update2dAvatar"},
    {"version" , "2022-01-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Update2dAvatarResponse>();
}

/**
 * @summary 修改创建2d人物的任务
 *
 * @param request Update2dAvatarRequest
 * @return Update2dAvatarResponse
 */
Update2dAvatarResponse Client::update2dAvatar(const Update2dAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return update2dAvatarWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Avatar20220130