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