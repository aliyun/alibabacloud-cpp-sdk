// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/notifications_20241225.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Notifications20241225;

Alibabacloud_Notifications20241225::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("notifications"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Notifications20241225::Client::getEndpoint(shared_ptr<string> productId,
                                                               shared_ptr<string> regionId,
                                                               shared_ptr<string> endpointRule,
                                                               shared_ptr<string> network,
                                                               shared_ptr<string> suffix,
                                                               shared_ptr<map<string, string>> endpointMap,
                                                               shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

DelMessageResponse Alibabacloud_Notifications20241225::Client::delMessageWithOptions(shared_ptr<DelMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgId)) {
    body->insert(pair<string, string>("MsgId", *request->msgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelMessage"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DelMessageResponse(callApi(params, req, runtime));
}

DelMessageResponse Alibabacloud_Notifications20241225::Client::delMessage(shared_ptr<DelMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delMessageWithOptions(request, runtime);
}

DeleteAllMessageResponse Alibabacloud_Notifications20241225::Client::deleteAllMessageWithOptions(shared_ptr<DeleteAllMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->classId)) {
    body->insert(pair<string, long>("ClassId", *request->classId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAllMessage"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAllMessageResponse(callApi(params, req, runtime));
}

DeleteAllMessageResponse Alibabacloud_Notifications20241225::Client::deleteAllMessage(shared_ptr<DeleteAllMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllMessageWithOptions(request, runtime);
}

ReadAllMessageResponse Alibabacloud_Notifications20241225::Client::readAllMessageWithOptions(shared_ptr<ReadAllMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->classId)) {
    body->insert(pair<string, long>("ClassId", *request->classId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadAllMessage"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadAllMessageResponse(callApi(params, req, runtime));
}

ReadAllMessageResponse Alibabacloud_Notifications20241225::Client::readAllMessage(shared_ptr<ReadAllMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readAllMessageWithOptions(request, runtime);
}

ReadClassNameResponse Alibabacloud_Notifications20241225::Client::readClassNameWithOptions(shared_ptr<ReadClassNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadClassName"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadClassNameResponse(callApi(params, req, runtime));
}

ReadClassNameResponse Alibabacloud_Notifications20241225::Client::readClassName(shared_ptr<ReadClassNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readClassNameWithOptions(request, runtime);
}

ReadMessageResponse Alibabacloud_Notifications20241225::Client::readMessageWithOptions(shared_ptr<ReadMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgId)) {
    body->insert(pair<string, string>("MsgId", *request->msgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadMessage"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadMessageResponse(callApi(params, req, runtime));
}

ReadMessageResponse Alibabacloud_Notifications20241225::Client::readMessage(shared_ptr<ReadMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readMessageWithOptions(request, runtime);
}

ReadMessageContentResponse Alibabacloud_Notifications20241225::Client::readMessageContentWithOptions(shared_ptr<ReadMessageContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->classId)) {
    body->insert(pair<string, long>("ClassId", *request->classId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgId)) {
    body->insert(pair<string, string>("MsgId", *request->msgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadMessageContent"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadMessageContentResponse(callApi(params, req, runtime));
}

ReadMessageContentResponse Alibabacloud_Notifications20241225::Client::readMessageContent(shared_ptr<ReadMessageContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readMessageContentWithOptions(request, runtime);
}

ReadMessageListResponse Alibabacloud_Notifications20241225::Client::readMessageListWithOptions(shared_ptr<ReadMessageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->classId)) {
    body->insert(pair<string, long>("ClassId", *request->classId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loc)) {
    body->insert(pair<string, string>("Loc", *request->loc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadMessageList"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadMessageListResponse(callApi(params, req, runtime));
}

ReadMessageListResponse Alibabacloud_Notifications20241225::Client::readMessageList(shared_ptr<ReadMessageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readMessageListWithOptions(request, runtime);
}

ReadMessageNewTotalResponse Alibabacloud_Notifications20241225::Client::readMessageNewTotalWithOptions(shared_ptr<ReadMessageNewTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadMessageNewTotal"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadMessageNewTotalResponse(callApi(params, req, runtime));
}

ReadMessageNewTotalResponse Alibabacloud_Notifications20241225::Client::readMessageNewTotal(shared_ptr<ReadMessageNewTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readMessageNewTotalWithOptions(request, runtime);
}

ReadNumGroupByClassResponse Alibabacloud_Notifications20241225::Client::readNumGroupByClassWithOptions(shared_ptr<ReadNumGroupByClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadNumGroupByClass"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadNumGroupByClassResponse(callApi(params, req, runtime));
}

ReadNumGroupByClassResponse Alibabacloud_Notifications20241225::Client::readNumGroupByClass(shared_ptr<ReadNumGroupByClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readNumGroupByClassWithOptions(request, runtime);
}

ReadNumGroupTotalResponse Alibabacloud_Notifications20241225::Client::readNumGroupTotalWithOptions(shared_ptr<ReadNumGroupTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerProtocol)) {
    body->insert(pair<string, string>("CallerProtocol", *request->callerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSource)) {
    body->insert(pair<string, string>("ClientSource", *request->clientSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookies)) {
    body->insert(pair<string, string>("Cookies", *request->cookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUrl)) {
    body->insert(pair<string, string>("SrcUrl", *request->srcUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantCode)) {
    body->insert(pair<string, string>("TenantCode", *request->tenantCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidType)) {
    body->insert(pair<string, string>("UidType", *request->uidType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadNumGroupTotal"))},
    {"version", boost::any(string("2024-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadNumGroupTotalResponse(callApi(params, req, runtime));
}

ReadNumGroupTotalResponse Alibabacloud_Notifications20241225::Client::readNumGroupTotal(shared_ptr<ReadNumGroupTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readNumGroupTotalWithOptions(request, runtime);
}

