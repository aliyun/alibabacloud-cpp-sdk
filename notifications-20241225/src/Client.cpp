#include <darabonba/Core.hpp>
#include <alibabacloud/Notifications20241225.hpp>
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
using namespace AlibabaCloud::Notifications20241225::Models;
namespace AlibabaCloud
{
namespace Notifications20241225
{

AlibabaCloud::Notifications20241225::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("notifications", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 方法描述：删除消息
 *
 * @param request DelMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelMessageResponse
 */
DelMessageResponse Client::delMessageWithOptions(const DelMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.msgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DelMessage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DelMessageResponse>();
}

/**
 * @summary 方法描述：删除消息
 *
 * @param request DelMessageRequest
 * @return DelMessageResponse
 */
DelMessageResponse Client::delMessage(const DelMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delMessageWithOptions(request, runtime);
}

/**
 * @summary 方法描述：站内信全部删除（逻辑删除）
 *
 * @param request DeleteAllMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllMessageResponse
 */
DeleteAllMessageResponse Client::deleteAllMessageWithOptions(const DeleteAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.classId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAllMessage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteAllMessageResponse>();
}

/**
 * @summary 方法描述：站内信全部删除（逻辑删除）
 *
 * @param request DeleteAllMessageRequest
 * @return DeleteAllMessageResponse
 */
DeleteAllMessageResponse Client::deleteAllMessage(const DeleteAllMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllMessageWithOptions(request, runtime);
}

/**
 * @summary 方法描述：分类全部标记为已读，不填则全部标记
 *
 * @param request ReadAllMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadAllMessageResponse
 */
ReadAllMessageResponse Client::readAllMessageWithOptions(const ReadAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.classId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadAllMessage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadAllMessageResponse>();
}

/**
 * @summary 方法描述：分类全部标记为已读，不填则全部标记
 *
 * @param request ReadAllMessageRequest
 * @return ReadAllMessageResponse
 */
ReadAllMessageResponse Client::readAllMessage(const ReadAllMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readAllMessageWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取各分类已读消息数
 *
 * @param request ReadClassNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadClassNameResponse
 */
ReadClassNameResponse Client::readClassNameWithOptions(const ReadClassNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadClassName"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadClassNameResponse>();
}

/**
 * @summary 方法描述：获取各分类已读消息数
 *
 * @param request ReadClassNameRequest
 * @return ReadClassNameResponse
 */
ReadClassNameResponse Client::readClassName(const ReadClassNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readClassNameWithOptions(request, runtime);
}

/**
 * @summary 方法描述：消息标记为已读
 *
 * @param request ReadMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessageWithOptions(const ReadMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.msgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadMessage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadMessageResponse>();
}

/**
 * @summary 方法描述：消息标记为已读
 *
 * @param request ReadMessageRequest
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessage(const ReadMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取消息正文
 *
 * @param request ReadMessageContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageContentResponse
 */
ReadMessageContentResponse Client::readMessageContentWithOptions(const ReadMessageContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.classId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.msgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadMessageContent"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadMessageContentResponse>();
}

/**
 * @summary 方法描述：获取消息正文
 *
 * @param request ReadMessageContentRequest
 * @return ReadMessageContentResponse
 */
ReadMessageContentResponse Client::readMessageContent(const ReadMessageContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageContentWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取消息列表
 *
 * @param request ReadMessageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageListResponse
 */
ReadMessageListResponse Client::readMessageListWithOptions(const ReadMessageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.classId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasLoc()) {
    body["Loc"] = request.loc();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasPage()) {
    body["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadMessageList"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadMessageListResponse>();
}

/**
 * @summary 方法描述：获取消息列表
 *
 * @param request ReadMessageListRequest
 * @return ReadMessageListResponse
 */
ReadMessageListResponse Client::readMessageList(const ReadMessageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageListWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取未读消息总数
 *
 * @param request ReadMessageNewTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageNewTotalResponse
 */
ReadMessageNewTotalResponse Client::readMessageNewTotalWithOptions(const ReadMessageNewTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadMessageNewTotal"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadMessageNewTotalResponse>();
}

/**
 * @summary 方法描述：获取未读消息总数
 *
 * @param request ReadMessageNewTotalRequest
 * @return ReadMessageNewTotalResponse
 */
ReadMessageNewTotalResponse Client::readMessageNewTotal(const ReadMessageNewTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageNewTotalWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取各分类已读消息数
 *
 * @param request ReadNumGroupByClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadNumGroupByClassResponse
 */
ReadNumGroupByClassResponse Client::readNumGroupByClassWithOptions(const ReadNumGroupByClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadNumGroupByClass"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadNumGroupByClassResponse>();
}

/**
 * @summary 方法描述：获取各分类已读消息数
 *
 * @param request ReadNumGroupByClassRequest
 * @return ReadNumGroupByClassResponse
 */
ReadNumGroupByClassResponse Client::readNumGroupByClass(const ReadNumGroupByClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readNumGroupByClassWithOptions(request, runtime);
}

/**
 * @summary 方法描述：获取所有分类下的信息
 *
 * @param request ReadNumGroupTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadNumGroupTotalResponse
 */
ReadNumGroupTotalResponse Client::readNumGroupTotalWithOptions(const ReadNumGroupTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.callerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.clientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.cookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.srcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.tenantCode();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.uidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReadNumGroupTotal"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ReadNumGroupTotalResponse>();
}

/**
 * @summary 方法描述：获取所有分类下的信息
 *
 * @param request ReadNumGroupTotalRequest
 * @return ReadNumGroupTotalResponse
 */
ReadNumGroupTotalResponse Client::readNumGroupTotal(const ReadNumGroupTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readNumGroupTotalWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Notifications20241225