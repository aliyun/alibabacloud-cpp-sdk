// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cams_20200606.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Cams20200606;

Alibabacloud_Cams20200606::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cams"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cams20200606::Client::getEndpoint(shared_ptr<string> productId,
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

BeeBotAssociateResponse Alibabacloud_Cams20200606::Client::beeBotAssociateWithOptions(shared_ptr<BeeBotAssociateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BeeBotAssociateShrinkRequest> request = make_shared<BeeBotAssociateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->perspective)) {
    request->perspectiveShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->perspective, make_shared<string>("Perspective"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chatBotInstanceId)) {
    body->insert(pair<string, string>("ChatBotInstanceId", *request->chatBotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveShrink)) {
    body->insert(pair<string, string>("Perspective", *request->perspectiveShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recommendNum)) {
    body->insert(pair<string, long>("RecommendNum", *request->recommendNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterance)) {
    body->insert(pair<string, string>("Utterance", *request->utterance));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BeeBotAssociate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BeeBotAssociateResponse(callApi(params, req, runtime));
}

BeeBotAssociateResponse Alibabacloud_Cams20200606::Client::beeBotAssociate(shared_ptr<BeeBotAssociateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return beeBotAssociateWithOptions(request, runtime);
}

BeeBotChatResponse Alibabacloud_Cams20200606::Client::beeBotChatWithOptions(shared_ptr<BeeBotChatRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BeeBotChatShrinkRequest> request = make_shared<BeeBotChatShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->perspective)) {
    request->perspectiveShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->perspective, make_shared<string>("Perspective"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->vendorParam)) {
    request->vendorParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->vendorParam, make_shared<string>("VendorParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chatBotInstanceId)) {
    body->insert(pair<string, string>("ChatBotInstanceId", *request->chatBotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentName)) {
    body->insert(pair<string, string>("IntentName", *request->intentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledgeId)) {
    body->insert(pair<string, string>("KnowledgeId", *request->knowledgeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveShrink)) {
    body->insert(pair<string, string>("Perspective", *request->perspectiveShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderId)) {
    body->insert(pair<string, string>("SenderId", *request->senderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderNick)) {
    body->insert(pair<string, string>("SenderNick", *request->senderNick));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterance)) {
    body->insert(pair<string, string>("Utterance", *request->utterance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorParamShrink)) {
    body->insert(pair<string, string>("VendorParam", *request->vendorParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BeeBotChat"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BeeBotChatResponse(callApi(params, req, runtime));
}

BeeBotChatResponse Alibabacloud_Cams20200606::Client::beeBotChat(shared_ptr<BeeBotChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return beeBotChatWithOptions(request, runtime);
}

CreateChatappTemplateResponse Alibabacloud_Cams20200606::Client::createChatappTemplateWithOptions(shared_ptr<CreateChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateChatappTemplateShrinkRequest> request = make_shared<CreateChatappTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateChatappTemplateRequestComponents>>(tmpReq->components)) {
    request->componentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->components, make_shared<string>("Components"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->example)) {
    request->exampleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->example, make_shared<string>("Example"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentsShrink)) {
    body->insert(pair<string, string>("Components", *request->componentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exampleShrink)) {
    body->insert(pair<string, string>("Example", *request->exampleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChatappTemplate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChatappTemplateResponse(callApi(params, req, runtime));
}

CreateChatappTemplateResponse Alibabacloud_Cams20200606::Client::createChatappTemplate(shared_ptr<CreateChatappTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChatappTemplateWithOptions(request, runtime);
}

DeleteChatappTemplateResponse Alibabacloud_Cams20200606::Client::deleteChatappTemplateWithOptions(shared_ptr<DeleteChatappTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    query->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChatappTemplate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChatappTemplateResponse(callApi(params, req, runtime));
}

DeleteChatappTemplateResponse Alibabacloud_Cams20200606::Client::deleteChatappTemplate(shared_ptr<DeleteChatappTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChatappTemplateWithOptions(request, runtime);
}

GetChatappTemplateDetailResponse Alibabacloud_Cams20200606::Client::getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    query->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatappTemplateDetail"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatappTemplateDetailResponse(callApi(params, req, runtime));
}

GetChatappTemplateDetailResponse Alibabacloud_Cams20200606::Client::getChatappTemplateDetail(shared_ptr<GetChatappTemplateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChatappTemplateDetailWithOptions(request, runtime);
}

ListChatappTemplateResponse Alibabacloud_Cams20200606::Client::listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListChatappTemplateShrinkRequest> request = make_shared<ListChatappTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListChatappTemplateRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->page->toMap()), make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditStatus)) {
    query->insert(pair<string, string>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    query->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    query->insert(pair<string, string>("Page", *request->pageShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChatappTemplate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChatappTemplateResponse(callApi(params, req, runtime));
}

ListChatappTemplateResponse Alibabacloud_Cams20200606::Client::listChatappTemplate(shared_ptr<ListChatappTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChatappTemplateWithOptions(request, runtime);
}

ModifyChatappTemplateResponse Alibabacloud_Cams20200606::Client::modifyChatappTemplateWithOptions(shared_ptr<ModifyChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyChatappTemplateShrinkRequest> request = make_shared<ModifyChatappTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyChatappTemplateRequestComponents>>(tmpReq->components)) {
    request->componentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->components, make_shared<string>("Components"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->example)) {
    request->exampleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->example, make_shared<string>("Example"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentsShrink)) {
    body->insert(pair<string, string>("Components", *request->componentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exampleShrink)) {
    body->insert(pair<string, string>("Example", *request->exampleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyChatappTemplate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyChatappTemplateResponse(callApi(params, req, runtime));
}

ModifyChatappTemplateResponse Alibabacloud_Cams20200606::Client::modifyChatappTemplate(shared_ptr<ModifyChatappTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyChatappTemplateWithOptions(request, runtime);
}

SendChatappMassMessageResponse Alibabacloud_Cams20200606::Client::sendChatappMassMessageWithOptions(shared_ptr<SendChatappMassMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendChatappMassMessageShrinkRequest> request = make_shared<SendChatappMassMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SendChatappMassMessageRequestSenderList>>(tmpReq->senderList)) {
    request->senderListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->senderList, make_shared<string>("SenderList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelType)) {
    body->insert(pair<string, string>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackContent)) {
    body->insert(pair<string, string>("FallBackContent", *request->fallBackContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackId)) {
    body->insert(pair<string, string>("FallBackId", *request->fallBackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    body->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderListShrink)) {
    body->insert(pair<string, string>("SenderList", *request->senderListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendChatappMassMessage"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendChatappMassMessageResponse(callApi(params, req, runtime));
}

SendChatappMassMessageResponse Alibabacloud_Cams20200606::Client::sendChatappMassMessage(shared_ptr<SendChatappMassMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendChatappMassMessageWithOptions(request, runtime);
}

SendChatappMessageResponse Alibabacloud_Cams20200606::Client::sendChatappMessageWithOptions(shared_ptr<SendChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendChatappMessageShrinkRequest> request = make_shared<SendChatappMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->templateParams)) {
    request->templateParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateParams, make_shared<string>("TemplateParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelType)) {
    body->insert(pair<string, string>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackContent)) {
    body->insert(pair<string, string>("FallBackContent", *request->fallBackContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackId)) {
    body->insert(pair<string, string>("FallBackId", *request->fallBackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    body->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    body->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParamsShrink)) {
    body->insert(pair<string, string>("TemplateParams", *request->templateParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->to)) {
    body->insert(pair<string, string>("To", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendChatappMessage"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendChatappMessageResponse(callApi(params, req, runtime));
}

SendChatappMessageResponse Alibabacloud_Cams20200606::Client::sendChatappMessage(shared_ptr<SendChatappMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendChatappMessageWithOptions(request, runtime);
}

