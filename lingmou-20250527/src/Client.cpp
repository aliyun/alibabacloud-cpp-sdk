#include <darabonba/Core.hpp>
#include <alibabacloud/LingMou20250527.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::LingMou20250527::Models;
namespace AlibabaCloud
{
namespace LingMou20250527
{

AlibabaCloud::LingMou20250527::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("lingmou", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 关闭会话实例session
 *
 * @param tmpReq CloseChatInstanceSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseChatInstanceSessionsResponse
 */
CloseChatInstanceSessionsResponse Client::closeChatInstanceSessionsWithOptions(const string &instanceId, const CloseChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloseChatInstanceSessionsShrinkRequest request = CloseChatInstanceSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionIds()) {
    request.setSessionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionIds(), "sessionIds", "json"));
  }

  json body = {};
  if (!!request.hasSessionIdsShrink()) {
    body["sessionIds"] = request.sessionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseChatInstanceSessions"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/sessions/close")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseChatInstanceSessionsResponse>();
}

/**
 * @summary 关闭会话实例session
 *
 * @param request CloseChatInstanceSessionsRequest
 * @return CloseChatInstanceSessionsResponse
 */
CloseChatInstanceSessionsResponse Client::closeChatInstanceSessions(const string &instanceId, const CloseChatInstanceSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeChatInstanceSessionsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 用户确认
 *
 * @param request ConfirmTrainPicAvatarRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmTrainPicAvatarResponse
 */
ConfirmTrainPicAvatarResponse Client::confirmTrainPicAvatarWithOptions(const ConfirmTrainPicAvatarRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarId()) {
    query["avatarId"] = request.avatarId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmTrainPicAvatar"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/train/confirmTrainPicAvatar")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmTrainPicAvatarResponse>();
}

/**
 * @summary 用户确认
 *
 * @param request ConfirmTrainPicAvatarRequest
 * @return ConfirmTrainPicAvatarResponse
 */
ConfirmTrainPicAvatarResponse Client::confirmTrainPicAvatar(const ConfirmTrainPicAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return confirmTrainPicAvatarWithOptions(request, headers, runtime);
}

/**
 * @summary 创建背景素材
 *
 * @param request CreateBackgroundPicRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackgroundPicResponse
 */
CreateBackgroundPicResponse Client::createBackgroundPicWithOptions(const CreateBackgroundPicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilename()) {
    query["filename"] = request.filename();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.ossKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackgroundPic"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/createBackgroundPic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackgroundPicResponse>();
}

/**
 * @summary 创建背景素材
 *
 * @param request CreateBackgroundPicRequest
 * @return CreateBackgroundPicResponse
 */
CreateBackgroundPicResponse Client::createBackgroundPic(const CreateBackgroundPicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBackgroundPicWithOptions(request, headers, runtime);
}

/**
 * @summary 创建播报贴图
 *
 * @param request CreateBroadcastStickerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBroadcastStickerResponse
 */
CreateBroadcastStickerResponse Client::createBroadcastStickerWithOptions(const CreateBroadcastStickerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.fileName();
  }

  if (!!request.hasOssKey()) {
    body["ossKey"] = request.ossKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBroadcastSticker"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/customer/broadcast/material/sticker/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBroadcastStickerResponse>();
}

/**
 * @summary 创建播报贴图
 *
 * @param request CreateBroadcastStickerRequest
 * @return CreateBroadcastStickerResponse
 */
CreateBroadcastStickerResponse Client::createBroadcastSticker(const CreateBroadcastStickerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBroadcastStickerWithOptions(request, headers, runtime);
}

/**
 * @summary 基于模板创建播报视频
 *
 * @param request CreateBroadcastVideoFromTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBroadcastVideoFromTemplateResponse
 */
CreateBroadcastVideoFromTemplateResponse Client::createBroadcastVideoFromTemplateWithOptions(const CreateBroadcastVideoFromTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.templateId();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  if (!!request.hasVideoOptions()) {
    body["videoOptions"] = request.videoOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBroadcastVideoFromTemplate"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/amp/customer/broadcast/video/createFromTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBroadcastVideoFromTemplateResponse>();
}

/**
 * @summary 基于模板创建播报视频
 *
 * @param request CreateBroadcastVideoFromTemplateRequest
 * @return CreateBroadcastVideoFromTemplateResponse
 */
CreateBroadcastVideoFromTemplateResponse Client::createBroadcastVideoFromTemplate(const CreateBroadcastVideoFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBroadcastVideoFromTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 背景配置
 *
 * @param request CreateChatConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatConfigResponse
 */
CreateChatConfigResponse Client::createChatConfigWithOptions(const CreateChatConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarId()) {
    query["avatarId"] = request.avatarId();
  }

  if (!!request.hasBackgroundId()) {
    query["backgroundId"] = request.backgroundId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatConfig"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/createChatConfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatConfigResponse>();
}

/**
 * @summary 背景配置
 *
 * @param request CreateChatConfigRequest
 * @return CreateChatConfigResponse
 */
CreateChatConfigResponse Client::createChatConfig(const CreateChatConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 创建数字人会话
 *
 * @param request CreateChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSessionWithOptions(const string &id, const CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasLicense()) {
    query["license"] = request.license();
  }

  if (!!request.hasPlatform()) {
    query["platform"] = request.platform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatSession"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/init/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatSessionResponse>();
}

/**
 * @summary 创建数字人会话
 *
 * @param request CreateChatSessionRequest
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSession(const string &id, const CreateChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatSessionWithOptions(id, request, headers, runtime);
}

/**
 * @summary 创建对话免训照片数字人
 *
 * @param request CreateNoTrainPicAvatarRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNoTrainPicAvatarResponse
 */
CreateNoTrainPicAvatarResponse Client::createNoTrainPicAvatarWithOptions(const CreateNoTrainPicAvatarRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpressiveness()) {
    query["expressiveness"] = request.expressiveness();
  }

  if (!!request.hasGender()) {
    query["gender"] = request.gender();
  }

  if (!!request.hasGenerateAssets()) {
    query["generateAssets"] = request.generateAssets();
  }

  if (!!request.hasImageOssPath()) {
    query["imageOssPath"] = request.imageOssPath();
  }

  if (!!request.hasJwtToken()) {
    query["jwtToken"] = request.jwtToken();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasTransparent()) {
    query["transparent"] = request.transparent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNoTrainPicAvatar"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/createNoTrainPicAvatar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNoTrainPicAvatarResponse>();
}

/**
 * @summary 创建对话免训照片数字人
 *
 * @param request CreateNoTrainPicAvatarRequest
 * @return CreateNoTrainPicAvatarResponse
 */
CreateNoTrainPicAvatarResponse Client::createNoTrainPicAvatar(const CreateNoTrainPicAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createNoTrainPicAvatarWithOptions(request, headers, runtime);
}

/**
 * @summary 创建TTS音色
 *
 * @param request CreateTTSVoiceCustomRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTTSVoiceCustomResponse
 */
CreateTTSVoiceCustomResponse Client::createTTSVoiceCustomWithOptions(const CreateTTSVoiceCustomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  if (!!request.hasGender()) {
    query["gender"] = request.gender();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.ossKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTTSVoiceCustom"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/voice/createTTSVoiceCustom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTTSVoiceCustomResponse>();
}

/**
 * @summary 创建TTS音色
 *
 * @param request CreateTTSVoiceCustomRequest
 * @return CreateTTSVoiceCustomResponse
 */
CreateTTSVoiceCustomResponse Client::createTTSVoiceCustom(const CreateTTSVoiceCustomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTTSVoiceCustomWithOptions(request, headers, runtime);
}

/**
 * @summary 创建图片训练数字人
 *
 * @param request CreateTrainPicAvatarRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrainPicAvatarResponse
 */
CreateTrainPicAvatarResponse Client::createTrainPicAvatarWithOptions(const CreateTrainPicAvatarRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGender()) {
    query["gender"] = request.gender();
  }

  if (!!request.hasGenerateAssets()) {
    query["generateAssets"] = request.generateAssets();
  }

  if (!!request.hasImageOssPath()) {
    query["imageOssPath"] = request.imageOssPath();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.templateId();
  }

  if (!!request.hasTransparent()) {
    query["transparent"] = request.transparent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrainPicAvatar"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/train/createTrainPicAvatar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrainPicAvatarResponse>();
}

/**
 * @summary 创建图片训练数字人
 *
 * @param request CreateTrainPicAvatarRequest
 * @return CreateTrainPicAvatarResponse
 */
CreateTrainPicAvatarResponse Client::createTrainPicAvatar(const CreateTrainPicAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrainPicAvatarWithOptions(request, headers, runtime);
}

/**
 * @summary 查询播报模板详情
 *
 * @param request GetBroadcastTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBroadcastTemplateResponse
 */
GetBroadcastTemplateResponse Client::getBroadcastTemplateWithOptions(const GetBroadcastTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["templateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBroadcastTemplate"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/customer/broadcast/template/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBroadcastTemplateResponse>();
}

/**
 * @summary 查询播报模板详情
 *
 * @param request GetBroadcastTemplateRequest
 * @return GetBroadcastTemplateResponse
 */
GetBroadcastTemplateResponse Client::getBroadcastTemplate(const GetBroadcastTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBroadcastTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 根据ID获取TTS音色
 *
 * @param request GetTTSVoiceByIdCustomRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTTSVoiceByIdCustomResponse
 */
GetTTSVoiceByIdCustomResponse Client::getTTSVoiceByIdCustomWithOptions(const GetTTSVoiceByIdCustomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVoiceId()) {
    query["voiceId"] = request.voiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTTSVoiceByIdCustom"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/voice/getTTSVoiceById")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTTSVoiceByIdCustomResponse>();
}

/**
 * @summary 根据ID获取TTS音色
 *
 * @param request GetTTSVoiceByIdCustomRequest
 * @return GetTTSVoiceByIdCustomResponse
 */
GetTTSVoiceByIdCustomResponse Client::getTTSVoiceByIdCustom(const GetTTSVoiceByIdCustomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTTSVoiceByIdCustomWithOptions(request, headers, runtime);
}

/**
 * @summary 查询图片训练数字人的状态
 *
 * @param request GetTrainPicAvatarStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrainPicAvatarStatusResponse
 */
GetTrainPicAvatarStatusResponse Client::getTrainPicAvatarStatusWithOptions(const GetTrainPicAvatarStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarId()) {
    query["avatarId"] = request.avatarId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrainPicAvatarStatus"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/train/getTrainPicAvatarStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrainPicAvatarStatusResponse>();
}

/**
 * @summary 查询图片训练数字人的状态
 *
 * @param request GetTrainPicAvatarStatusRequest
 * @return GetTrainPicAvatarStatusResponse
 */
GetTrainPicAvatarStatusResponse Client::getTrainPicAvatarStatus(const GetTrainPicAvatarStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrainPicAvatarStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 获取对话免训图片素材上传凭证
 *
 * @param request GetUploadPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadPolicyResponse
 */
GetUploadPolicyResponse Client::getUploadPolicyWithOptions(const GetUploadPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["jwtToken"] = request.jwtToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadPolicy"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/getUploadPolicy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadPolicyResponse>();
}

/**
 * @summary 获取对话免训图片素材上传凭证
 *
 * @param request GetUploadPolicyRequest
 * @return GetUploadPolicyResponse
 */
GetUploadPolicyResponse Client::getUploadPolicy(const GetUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUploadPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary 列举播报模板
 *
 * @param request ListBroadcastTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBroadcastTemplatesResponse
 */
ListBroadcastTemplatesResponse Client::listBroadcastTemplatesWithOptions(const ListBroadcastTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBroadcastTemplates"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/customer/broadcast/template/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBroadcastTemplatesResponse>();
}

/**
 * @summary 列举播报模板
 *
 * @param request ListBroadcastTemplatesRequest
 * @return ListBroadcastTemplatesResponse
 */
ListBroadcastTemplatesResponse Client::listBroadcastTemplates(const ListBroadcastTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBroadcastTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary 根据视频id批量查询播报视频（最多查询100个）
 *
 * @param tmpReq ListBroadcastVideosByIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBroadcastVideosByIdResponse
 */
ListBroadcastVideosByIdResponse Client::listBroadcastVideosByIdWithOptions(const ListBroadcastVideosByIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListBroadcastVideosByIdShrinkRequest request = ListBroadcastVideosByIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVideoIds()) {
    request.setVideoIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoIds(), "videoIds", "json"));
  }

  json query = {};
  if (!!request.hasVideoIdsShrink()) {
    query["videoIds"] = request.videoIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBroadcastVideosById"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/amp/customer/broadcast/video/batchQuery")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBroadcastVideosByIdResponse>();
}

/**
 * @summary 根据视频id批量查询播报视频（最多查询100个）
 *
 * @param request ListBroadcastVideosByIdRequest
 * @return ListBroadcastVideosByIdResponse
 */
ListBroadcastVideosByIdResponse Client::listBroadcastVideosById(const ListBroadcastVideosByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBroadcastVideosByIdWithOptions(request, headers, runtime);
}

/**
 * @summary 列举私有TTS音色
 *
 * @param request ListPrivateTTSVoicesCustomRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateTTSVoicesCustomResponse
 */
ListPrivateTTSVoicesCustomResponse Client::listPrivateTTSVoicesCustomWithOptions(const ListPrivateTTSVoicesCustomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateTTSVoicesCustom"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/voice/listPrivateTTSVoicesCustom")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateTTSVoicesCustomResponse>();
}

/**
 * @summary 列举私有TTS音色
 *
 * @param request ListPrivateTTSVoicesCustomRequest
 * @return ListPrivateTTSVoicesCustomResponse
 */
ListPrivateTTSVoicesCustomResponse Client::listPrivateTTSVoicesCustom(const ListPrivateTTSVoicesCustomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrivateTTSVoicesCustomWithOptions(request, headers, runtime);
}

/**
 * @summary 查询底板素材
 *
 * @param request ListTemplateMaterialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateMaterialResponse
 */
ListTemplateMaterialResponse Client::listTemplateMaterialWithOptions(const ListTemplateMaterialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasTemplateIds()) {
    query["templateIds"] = request.templateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplateMaterial"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/train/listTemplateMaterial")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateMaterialResponse>();
}

/**
 * @summary 查询底板素材
 *
 * @param request ListTemplateMaterialRequest
 * @return ListTemplateMaterialResponse
 */
ListTemplateMaterialResponse Client::listTemplateMaterial(const ListTemplateMaterialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplateMaterialWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会话实例session
 *
 * @param tmpReq QueryChatInstanceSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChatInstanceSessionsResponse
 */
QueryChatInstanceSessionsResponse Client::queryChatInstanceSessionsWithOptions(const string &instanceId, const QueryChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryChatInstanceSessionsShrinkRequest request = QueryChatInstanceSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionIds()) {
    request.setSessionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionIds(), "sessionIds", "json"));
  }

  json query = {};
  if (!!request.hasSessionIdsShrink()) {
    query["sessionIds"] = request.sessionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryChatInstanceSessions"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChatInstanceSessionsResponse>();
}

/**
 * @summary 查询会话实例session
 *
 * @param request QueryChatInstanceSessionsRequest
 * @return QueryChatInstanceSessionsResponse
 */
QueryChatInstanceSessionsResponse Client::queryChatInstanceSessions(const string &instanceId, const QueryChatInstanceSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryChatInstanceSessionsWithOptions(instanceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace LingMou20250527