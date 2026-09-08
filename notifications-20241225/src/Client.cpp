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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-southeast-1" , "notifications-intl.aliyuncs.com"},
    {"cn-zhangjiakou" , "notifications.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Creates a webhook contact.
 *
 * @param request CreateWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebhookContactResponse
 */
CreateWebhookContactResponse Client::createWebhookContactWithOptions(const CreateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasBotSecurityToken()) {
    body["BotSecurityToken"] = request.getBotSecurityToken();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSecurityToken()) {
    body["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServerUrl()) {
    body["ServerUrl"] = request.getServerUrl();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  if (!!request.hasVerificationCode()) {
    body["VerificationCode"] = request.getVerificationCode();
  }

  if (!!request.hasWebhookType()) {
    body["WebhookType"] = request.getWebhookType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWebhookContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebhookContactResponse>();
}

/**
 * @summary Creates a webhook contact.
 *
 * @param request CreateWebhookContactRequest
 * @return CreateWebhookContactResponse
 */
CreateWebhookContactResponse Client::createWebhookContact(const CreateWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Deletes a message.
 *
 * @param request DelMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelMessageResponse
 */
DelMessageResponse Client::delMessageWithOptions(const DelMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.getMsgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelMessageResponse>();
}

/**
 * @summary Deletes a message.
 *
 * @param request DelMessageRequest
 * @return DelMessageResponse
 */
DelMessageResponse Client::delMessage(const DelMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delMessageWithOptions(request, runtime);
}

/**
 * @summary Deletes all in-app messages (logical deletion).
 *
 * @param request DeleteAllMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllMessageResponse
 */
DeleteAllMessageResponse Client::deleteAllMessageWithOptions(const DeleteAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.getClassId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAllMessageResponse>();
}

/**
 * @summary Deletes all in-app messages (logical deletion).
 *
 * @param request DeleteAllMessageRequest
 * @return DeleteAllMessageResponse
 */
DeleteAllMessageResponse Client::deleteAllMessage(const DeleteAllMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllMessageWithOptions(request, runtime);
}

/**
 * @summary Deletes a webhook contact.
 *
 * @param request DeleteWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebhookContactResponse
 */
DeleteWebhookContactResponse Client::deleteWebhookContactWithOptions(const DeleteWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWebhookContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebhookContactResponse>();
}

/**
 * @summary Deletes a webhook contact.
 *
 * @param request DeleteWebhookContactRequest
 * @return DeleteWebhookContactResponse
 */
DeleteWebhookContactResponse Client::deleteWebhookContact(const DeleteWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Retrieves all common contacts across accounts.
 *
 * @param request ReadAllCommonContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadAllCommonContactsResponse
 */
ReadAllCommonContactsResponse Client::readAllCommonContactsWithOptions(const ReadAllCommonContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadAllCommonContacts"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadAllCommonContactsResponse>();
}

/**
 * @summary Retrieves all common contacts across accounts.
 *
 * @param request ReadAllCommonContactsRequest
 * @return ReadAllCommonContactsResponse
 */
ReadAllCommonContactsResponse Client::readAllCommonContacts(const ReadAllCommonContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readAllCommonContactsWithOptions(request, runtime);
}

/**
 * @summary Retrieves all marketing preference configurations.
 *
 * @param request ReadAllMarketingPreferencesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadAllMarketingPreferencesResponse
 */
ReadAllMarketingPreferencesResponse Client::readAllMarketingPreferencesWithOptions(const ReadAllMarketingPreferencesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadAllMarketingPreferences"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadAllMarketingPreferencesResponse>();
}

/**
 * @summary Retrieves all marketing preference configurations.
 *
 * @param request ReadAllMarketingPreferencesRequest
 * @return ReadAllMarketingPreferencesResponse
 */
ReadAllMarketingPreferencesResponse Client::readAllMarketingPreferences(const ReadAllMarketingPreferencesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readAllMarketingPreferencesWithOptions(request, runtime);
}

/**
 * @summary Marks all messages as read. If no category is specified, all messages are marked as read.
 *
 * @param request ReadAllMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadAllMessageResponse
 */
ReadAllMessageResponse Client::readAllMessageWithOptions(const ReadAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.getClassId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadAllMessageResponse>();
}

/**
 * @summary Marks all messages as read. If no category is specified, all messages are marked as read.
 *
 * @param request ReadAllMessageRequest
 * @return ReadAllMessageResponse
 */
ReadAllMessageResponse Client::readAllMessage(const ReadAllMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readAllMessageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the full list of webhooks.
 *
 * @param request ReadAllWebhookContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadAllWebhookContactsResponse
 */
ReadAllWebhookContactsResponse Client::readAllWebhookContactsWithOptions(const ReadAllWebhookContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadAllWebhookContacts"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadAllWebhookContactsResponse>();
}

/**
 * @summary Retrieves the full list of webhooks.
 *
 * @param request ReadAllWebhookContactsRequest
 * @return ReadAllWebhookContactsResponse
 */
ReadAllWebhookContactsResponse Client::readAllWebhookContacts(const ReadAllWebhookContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readAllWebhookContactsWithOptions(request, runtime);
}

/**
 * @summary Get category group list
 *
 * @param request ReadCategoryGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadCategoryGroupListResponse
 */
ReadCategoryGroupListResponse Client::readCategoryGroupListWithOptions(const ReadCategoryGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasChannelGroupCode()) {
    body["ChannelGroupCode"] = request.getChannelGroupCode();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadCategoryGroupList"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadCategoryGroupListResponse>();
}

/**
 * @summary Get category group list
 *
 * @param request ReadCategoryGroupListRequest
 * @return ReadCategoryGroupListResponse
 */
ReadCategoryGroupListResponse Client::readCategoryGroupList(const ReadCategoryGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readCategoryGroupListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the number of read messages for each category.
 *
 * @param request ReadClassNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadClassNameResponse
 */
ReadClassNameResponse Client::readClassNameWithOptions(const ReadClassNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadClassNameResponse>();
}

/**
 * @summary Retrieves the number of read messages for each category.
 *
 * @param request ReadClassNameRequest
 * @return ReadClassNameResponse
 */
ReadClassNameResponse Client::readClassName(const ReadClassNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readClassNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves a general contact.
 *
 * @param request ReadCommonContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadCommonContactResponse
 */
ReadCommonContactResponse Client::readCommonContactWithOptions(const ReadCommonContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadCommonContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadCommonContactResponse>();
}

/**
 * @summary Retrieves a general contact.
 *
 * @param request ReadCommonContactRequest
 * @return ReadCommonContactResponse
 */
ReadCommonContactResponse Client::readCommonContact(const ReadCommonContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readCommonContactWithOptions(request, runtime);
}

/**
 * @summary Retrieves the marketing preferences of a user.
 *
 * @param request ReadMarketingPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMarketingPreferenceResponse
 */
ReadMarketingPreferenceResponse Client::readMarketingPreferenceWithOptions(const ReadMarketingPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadMarketingPreference"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMarketingPreferenceResponse>();
}

/**
 * @summary Retrieves the marketing preferences of a user.
 *
 * @param request ReadMarketingPreferenceRequest
 * @return ReadMarketingPreferenceResponse
 */
ReadMarketingPreferenceResponse Client::readMarketingPreference(const ReadMarketingPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMarketingPreferenceWithOptions(request, runtime);
}

/**
 * @summary Marks a message as read.
 *
 * @param request ReadMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessageWithOptions(const ReadMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.getMsgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageResponse>();
}

/**
 * @summary Marks a message as read.
 *
 * @param request ReadMessageRequest
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessage(const ReadMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the body of a message.
 *
 * @param request ReadMessageContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageContentResponse
 */
ReadMessageContentResponse Client::readMessageContentWithOptions(const ReadMessageContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.getClassId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasHistory()) {
    body["History"] = request.getHistory();
  }

  if (!!request.hasMsgId()) {
    body["MsgId"] = request.getMsgId();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageContentResponse>();
}

/**
 * @summary Retrieves the body of a message.
 *
 * @param request ReadMessageContentRequest
 * @return ReadMessageContentResponse
 */
ReadMessageContentResponse Client::readMessageContent(const ReadMessageContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageContentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the message language.
 *
 * @param request ReadMessageLanguageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageLanguageResponse
 */
ReadMessageLanguageResponse Client::readMessageLanguageWithOptions(const ReadMessageLanguageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasReturnDefaultLang()) {
    body["ReturnDefaultLang"] = request.getReturnDefaultLang();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadMessageLanguage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageLanguageResponse>();
}

/**
 * @summary Retrieves the message language.
 *
 * @param request ReadMessageLanguageRequest
 * @return ReadMessageLanguageResponse
 */
ReadMessageLanguageResponse Client::readMessageLanguage(const ReadMessageLanguageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageLanguageWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of messages.
 *
 * @param request ReadMessageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageListResponse
 */
ReadMessageListResponse Client::readMessageListWithOptions(const ReadMessageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClassId()) {
    body["ClassId"] = request.getClassId();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasHistory()) {
    body["History"] = request.getHistory();
  }

  if (!!request.hasLoc()) {
    body["Loc"] = request.getLoc();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    body["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageListResponse>();
}

/**
 * @summary Retrieves a list of messages.
 *
 * @param request ReadMessageListRequest
 * @return ReadMessageListResponse
 */
ReadMessageListResponse Client::readMessageList(const ReadMessageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the total number of unread messages.
 *
 * @param request ReadMessageNewTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageNewTotalResponse
 */
ReadMessageNewTotalResponse Client::readMessageNewTotalWithOptions(const ReadMessageNewTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageNewTotalResponse>();
}

/**
 * @summary Retrieves the total number of unread messages.
 *
 * @param request ReadMessageNewTotalRequest
 * @return ReadMessageNewTotalResponse
 */
ReadMessageNewTotalResponse Client::readMessageNewTotal(const ReadMessageNewTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMessageNewTotalWithOptions(request, runtime);
}

/**
 * @summary Retrieves the metadata service.
 *
 * @param request ReadMetaConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMetaConfigResponse
 */
ReadMetaConfigResponse Client::readMetaConfigWithOptions(const ReadMetaConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadMetaConfig"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMetaConfigResponse>();
}

/**
 * @summary Retrieves the metadata service.
 *
 * @param request ReadMetaConfigRequest
 * @return ReadMetaConfigResponse
 */
ReadMetaConfigResponse Client::readMetaConfig(const ReadMetaConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readMetaConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the count of read messages for each category.
 *
 * @param request ReadNumGroupByClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadNumGroupByClassResponse
 */
ReadNumGroupByClassResponse Client::readNumGroupByClassWithOptions(const ReadNumGroupByClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadNumGroupByClassResponse>();
}

/**
 * @summary Retrieves the count of read messages for each category.
 *
 * @param request ReadNumGroupByClassRequest
 * @return ReadNumGroupByClassResponse
 */
ReadNumGroupByClassResponse Client::readNumGroupByClass(const ReadNumGroupByClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readNumGroupByClassWithOptions(request, runtime);
}

/**
 * @summary Method description: Get information under all categories
 *
 * @param request ReadNumGroupTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadNumGroupTotalResponse
 */
ReadNumGroupTotalResponse Client::readNumGroupTotalWithOptions(const ReadNumGroupTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadNumGroupTotalResponse>();
}

/**
 * @summary Method description: Get information under all categories
 *
 * @param request ReadNumGroupTotalRequest
 * @return ReadNumGroupTotalResponse
 */
ReadNumGroupTotalResponse Client::readNumGroupTotal(const ReadNumGroupTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readNumGroupTotalWithOptions(request, runtime);
}

/**
 * @summary Retrieves revision records.
 *
 * @param tmpReq ReadRevisionHistoryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadRevisionHistoryListResponse
 */
ReadRevisionHistoryListResponse Client::readRevisionHistoryListWithOptions(const ReadRevisionHistoryListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReadRevisionHistoryListShrinkRequest request = ReadRevisionHistoryListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPageInfo()) {
    request.setPageInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPageInfo(), "PageInfo", "json"));
  }

  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasCategoryCode()) {
    body["CategoryCode"] = request.getCategoryCode();
  }

  if (!!request.hasChannelGroupCode()) {
    body["ChannelGroupCode"] = request.getChannelGroupCode();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasPageInfoShrink()) {
    body["PageInfo"] = request.getPageInfoShrink();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadRevisionHistoryList"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadRevisionHistoryListResponse>();
}

/**
 * @summary Retrieves revision records.
 *
 * @param request ReadRevisionHistoryListRequest
 * @return ReadRevisionHistoryListResponse
 */
ReadRevisionHistoryListResponse Client::readRevisionHistoryList(const ReadRevisionHistoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readRevisionHistoryListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the subscription list of a user.
 *
 * @param request ReadUserSubscriptionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadUserSubscriptionListResponse
 */
ReadUserSubscriptionListResponse Client::readUserSubscriptionListWithOptions(const ReadUserSubscriptionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasCategoryGroupCode()) {
    body["CategoryGroupCode"] = request.getCategoryGroupCode();
  }

  if (!!request.hasChannelGroupCode()) {
    body["ChannelGroupCode"] = request.getChannelGroupCode();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadUserSubscriptionList"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadUserSubscriptionListResponse>();
}

/**
 * @summary Retrieves the subscription list of a user.
 *
 * @param request ReadUserSubscriptionListRequest
 * @return ReadUserSubscriptionListResponse
 */
ReadUserSubscriptionListResponse Client::readUserSubscriptionList(const ReadUserSubscriptionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readUserSubscriptionListWithOptions(request, runtime);
}

/**
 * @summary Retrieves a webhook contact.
 *
 * @param request ReadWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadWebhookContactResponse
 */
ReadWebhookContactResponse Client::readWebhookContactWithOptions(const ReadWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadWebhookContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadWebhookContactResponse>();
}

/**
 * @summary Retrieves a webhook contact.
 *
 * @param request ReadWebhookContactRequest
 * @return ReadWebhookContactResponse
 */
ReadWebhookContactResponse Client::readWebhookContact(const ReadWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of webhook send templates.
 *
 * @param request ReadWebhookContactSendTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadWebhookContactSendTemplateListResponse
 */
ReadWebhookContactSendTemplateListResponse Client::readWebhookContactSendTemplateListWithOptions(const ReadWebhookContactSendTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadWebhookContactSendTemplateList"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadWebhookContactSendTemplateListResponse>();
}

/**
 * @summary Retrieves the list of webhook send templates.
 *
 * @param request ReadWebhookContactSendTemplateListRequest
 * @return ReadWebhookContactSendTemplateListResponse
 */
ReadWebhookContactSendTemplateListResponse Client::readWebhookContactSendTemplateList(const ReadWebhookContactSendTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readWebhookContactSendTemplateListWithOptions(request, runtime);
}

/**
 * @summary Resets user subscriptions.
 *
 * @param tmpReq ResetUserSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserSubscriptionResponse
 */
ResetUserSubscriptionResponse Client::resetUserSubscriptionWithOptions(const ResetUserSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResetUserSubscriptionShrinkRequest request = ResetUserSubscriptionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryCodes()) {
    request.setCategoryCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryCodes(), "CategoryCodes", "json"));
  }

  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasCategoryCodesShrink()) {
    body["CategoryCodes"] = request.getCategoryCodesShrink();
  }

  if (!!request.hasChannelGroupCode()) {
    body["ChannelGroupCode"] = request.getChannelGroupCode();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.getRemarks();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetUserSubscription"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetUserSubscriptionResponse>();
}

/**
 * @summary Resets user subscriptions.
 *
 * @param request ResetUserSubscriptionRequest
 * @return ResetUserSubscriptionResponse
 */
ResetUserSubscriptionResponse Client::resetUserSubscription(const ResetUserSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Tests a webhook.
 *
 * @param request TestWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestWebhookContactResponse
 */
TestWebhookContactResponse Client::testWebhookContactWithOptions(const TestWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasBotSecurityToken()) {
    body["BotSecurityToken"] = request.getBotSecurityToken();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasServerUrl()) {
    body["ServerUrl"] = request.getServerUrl();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  if (!!request.hasWebhookType()) {
    body["WebhookType"] = request.getWebhookType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TestWebhookContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestWebhookContactResponse>();
}

/**
 * @summary Tests a webhook.
 *
 * @param request TestWebhookContactRequest
 * @return TestWebhookContactResponse
 */
TestWebhookContactResponse Client::testWebhookContact(const TestWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Updates marketing preferences.
 *
 * @param request UpdateMarketingPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMarketingPreferenceResponse
 */
UpdateMarketingPreferenceResponse Client::updateMarketingPreferenceWithOptions(const UpdateMarketingPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAllowMarketing()) {
    body["AllowMarketing"] = request.getAllowMarketing();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMarketingPreference"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMarketingPreferenceResponse>();
}

/**
 * @summary Updates marketing preferences.
 *
 * @param request UpdateMarketingPreferenceRequest
 * @return UpdateMarketingPreferenceResponse
 */
UpdateMarketingPreferenceResponse Client::updateMarketingPreference(const UpdateMarketingPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMarketingPreferenceWithOptions(request, runtime);
}

/**
 * @summary Updates the message language.
 *
 * @param request UpdateMessageLanguageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMessageLanguageResponse
 */
UpdateMessageLanguageResponse Client::updateMessageLanguageWithOptions(const UpdateMessageLanguageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasPreferLang()) {
    body["PreferLang"] = request.getPreferLang();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMessageLanguage"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMessageLanguageResponse>();
}

/**
 * @summary Updates the message language.
 *
 * @param request UpdateMessageLanguageRequest
 * @return UpdateMessageLanguageResponse
 */
UpdateMessageLanguageResponse Client::updateMessageLanguage(const UpdateMessageLanguageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMessageLanguageWithOptions(request, runtime);
}

/**
 * @summary Modifies a webhook contact.
 *
 * @param request UpdateWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebhookContactResponse
 */
UpdateWebhookContactResponse Client::updateWebhookContactWithOptions(const UpdateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.getBizName();
  }

  if (!!request.hasBotSecurityToken()) {
    body["BotSecurityToken"] = request.getBotSecurityToken();
  }

  if (!!request.hasCallerProtocol()) {
    body["CallerProtocol"] = request.getCallerProtocol();
  }

  if (!!request.hasClientSource()) {
    body["ClientSource"] = request.getClientSource();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasCookies()) {
    body["Cookies"] = request.getCookies();
  }

  if (!!request.hasSecurityToken()) {
    body["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServerUrl()) {
    body["ServerUrl"] = request.getServerUrl();
  }

  if (!!request.hasSrcUrl()) {
    body["SrcUrl"] = request.getSrcUrl();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTenantCode()) {
    body["TenantCode"] = request.getTenantCode();
  }

  if (!!request.hasUidType()) {
    body["UidType"] = request.getUidType();
  }

  if (!!request.hasVerificationCode()) {
    body["VerificationCode"] = request.getVerificationCode();
  }

  if (!!request.hasWebhookType()) {
    body["WebhookType"] = request.getWebhookType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWebhookContact"},
    {"version" , "2024-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebhookContactResponse>();
}

/**
 * @summary Modifies a webhook contact.
 *
 * @param request UpdateWebhookContactRequest
 * @return UpdateWebhookContactResponse
 */
UpdateWebhookContactResponse Client::updateWebhookContact(const UpdateWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebhookContactWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Notifications20241225