// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/chatbot_20171011.hpp>
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

using namespace Alibabacloud_Chatbot20171011;

Alibabacloud_Chatbot20171011::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("chatbot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Chatbot20171011::Client::getEndpoint(shared_ptr<string> productId,
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

ActivatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::activatePerspectiveWithOptions(shared_ptr<ActivatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveId)) {
    query->insert(pair<string, string>("PerspectiveId", *request->perspectiveId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivatePerspective"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivatePerspectiveResponse(callApi(params, req, runtime));
}

ActivatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::activatePerspective(shared_ptr<ActivatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activatePerspectiveWithOptions(request, runtime);
}

AddSynonymResponse Alibabacloud_Chatbot20171011::Client::addSynonymWithOptions(shared_ptr<AddSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synonym)) {
    query->insert(pair<string, string>("Synonym", *request->synonym));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSynonym"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSynonymResponse(callApi(params, req, runtime));
}

AddSynonymResponse Alibabacloud_Chatbot20171011::Client::addSynonym(shared_ptr<AddSynonymRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSynonymWithOptions(request, runtime);
}

AppendEntityMemberResponse Alibabacloud_Chatbot20171011::Client::appendEntityMemberWithOptions(shared_ptr<AppendEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AppendEntityMemberShrinkRequest> request = make_shared<AppendEntityMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AppendEntityMemberRequestMember>(tmpReq->member)) {
    request->memberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->member->toMap()), make_shared<string>("Member"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyType)) {
    query->insert(pair<string, string>("ApplyType", *request->applyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    query->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberShrink)) {
    query->insert(pair<string, string>("Member", *request->memberShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AppendEntityMember"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AppendEntityMemberResponse(callApi(params, req, runtime));
}

AppendEntityMemberResponse Alibabacloud_Chatbot20171011::Client::appendEntityMember(shared_ptr<AppendEntityMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return appendEntityMemberWithOptions(request, runtime);
}

AssociateResponse Alibabacloud_Chatbot20171011::Client::associateWithOptions(shared_ptr<AssociateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->perspective)) {
    query->insert(pair<string, vector<string>>("Perspective", *request->perspective));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recommendNum)) {
    query->insert(pair<string, long>("RecommendNum", *request->recommendNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterance)) {
    query->insert(pair<string, string>("Utterance", *request->utterance));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Associate"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateResponse(callApi(params, req, runtime));
}

AssociateResponse Alibabacloud_Chatbot20171011::Client::associate(shared_ptr<AssociateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateWithOptions(request, runtime);
}

ChatResponse Alibabacloud_Chatbot20171011::Client::chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentName)) {
    query->insert(pair<string, string>("IntentName", *request->intentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledgeId)) {
    query->insert(pair<string, string>("KnowledgeId", *request->knowledgeId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->perspective)) {
    query->insert(pair<string, vector<string>>("Perspective", *request->perspective));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderId)) {
    query->insert(pair<string, string>("SenderId", *request->senderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderNick)) {
    query->insert(pair<string, string>("SenderNick", *request->senderNick));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterance)) {
    query->insert(pair<string, string>("Utterance", *request->utterance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorParam)) {
    query->insert(pair<string, string>("VendorParam", *request->vendorParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Chat"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatResponse(callApi(params, req, runtime));
}

ChatResponse Alibabacloud_Chatbot20171011::Client::chat(shared_ptr<ChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatWithOptions(request, runtime);
}

CreateBotResponse Alibabacloud_Chatbot20171011::Client::createBotWithOptions(shared_ptr<CreateBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatar)) {
    query->insert(pair<string, string>("Avatar", *request->avatar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->introduction)) {
    query->insert(pair<string, string>("Introduction", *request->introduction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    query->insert(pair<string, string>("LanguageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotType)) {
    query->insert(pair<string, string>("RobotType", *request->robotType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBot"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBotResponse(callApi(params, req, runtime));
}

CreateBotResponse Alibabacloud_Chatbot20171011::Client::createBot(shared_ptr<CreateBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBotWithOptions(request, runtime);
}

CreateCategoryResponse Alibabacloud_Chatbot20171011::Client::createCategoryWithOptions(shared_ptr<CreateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCode)) {
    query->insert(pair<string, string>("BizCode", *request->bizCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeType)) {
    query->insert(pair<string, long>("KnowledgeType", *request->knowledgeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentCategoryId)) {
    query->insert(pair<string, long>("ParentCategoryId", *request->parentCategoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCategory"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCategoryResponse(callApi(params, req, runtime));
}

CreateCategoryResponse Alibabacloud_Chatbot20171011::Client::createCategory(shared_ptr<CreateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCategoryWithOptions(request, runtime);
}

CreateCoreWordResponse Alibabacloud_Chatbot20171011::Client::createCoreWordWithOptions(shared_ptr<CreateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCoreWord"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCoreWordResponse(callApi(params, req, runtime));
}

CreateCoreWordResponse Alibabacloud_Chatbot20171011::Client::createCoreWord(shared_ptr<CreateCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCoreWordWithOptions(request, runtime);
}

CreateDSEntityResponse Alibabacloud_Chatbot20171011::Client::createDSEntityWithOptions(shared_ptr<CreateDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDSEntity"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDSEntityResponse(callApi(params, req, runtime));
}

CreateDSEntityResponse Alibabacloud_Chatbot20171011::Client::createDSEntity(shared_ptr<CreateDSEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDSEntityWithOptions(request, runtime);
}

CreateDialogResponse Alibabacloud_Chatbot20171011::Client::createDialogWithOptions(shared_ptr<CreateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogName)) {
    query->insert(pair<string, string>("DialogName", *request->dialogName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDialog"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDialogResponse(callApi(params, req, runtime));
}

CreateDialogResponse Alibabacloud_Chatbot20171011::Client::createDialog(shared_ptr<CreateDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDialogWithOptions(request, runtime);
}

CreateEntityResponse Alibabacloud_Chatbot20171011::Client::createEntityWithOptions(shared_ptr<CreateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEntityShrinkRequest> request = make_shared<CreateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEntityRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    query->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regex)) {
    query->insert(pair<string, string>("Regex", *request->regex));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEntity"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEntityResponse(callApi(params, req, runtime));
}

CreateEntityResponse Alibabacloud_Chatbot20171011::Client::createEntity(shared_ptr<CreateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEntityWithOptions(request, runtime);
}

CreateIntentResponse Alibabacloud_Chatbot20171011::Client::createIntentWithOptions(shared_ptr<CreateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateIntentShrinkRequest> request = make_shared<CreateIntentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IntentCreateDTO>(tmpReq->intentDefinition)) {
    request->intentDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->intentDefinition->toMap()), make_shared<string>("IntentDefinition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentDefinitionShrink)) {
    query->insert(pair<string, string>("IntentDefinition", *request->intentDefinitionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntent"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntentResponse(callApi(params, req, runtime));
}

CreateIntentResponse Alibabacloud_Chatbot20171011::Client::createIntent(shared_ptr<CreateIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntentWithOptions(request, runtime);
}

CreateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::createKnowledgeWithOptions(shared_ptr<CreateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateKnowledgeShrinkRequest> request = make_shared<CreateKnowledgeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateKnowledgeRequestKnowledge>(tmpReq->knowledge)) {
    request->knowledgeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->knowledge->toMap()), make_shared<string>("Knowledge"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledgeShrink)) {
    body->insert(pair<string, string>("Knowledge", *request->knowledgeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKnowledgeResponse(callApi(params, req, runtime));
}

CreateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::createKnowledge(shared_ptr<CreateKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKnowledgeWithOptions(request, runtime);
}

CreatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::createPerspectiveWithOptions(shared_ptr<CreatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePerspective"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePerspectiveResponse(callApi(params, req, runtime));
}

CreatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::createPerspective(shared_ptr<CreatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPerspectiveWithOptions(request, runtime);
}

DeleteBotResponse Alibabacloud_Chatbot20171011::Client::deleteBotWithOptions(shared_ptr<DeleteBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBot"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBotResponse(callApi(params, req, runtime));
}

DeleteBotResponse Alibabacloud_Chatbot20171011::Client::deleteBot(shared_ptr<DeleteBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBotWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_Chatbot20171011::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCategoryResponse(callApi(params, req, runtime));
}

DeleteCategoryResponse Alibabacloud_Chatbot20171011::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteCoreWordResponse Alibabacloud_Chatbot20171011::Client::deleteCoreWordWithOptions(shared_ptr<DeleteCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCoreWord"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCoreWordResponse(callApi(params, req, runtime));
}

DeleteCoreWordResponse Alibabacloud_Chatbot20171011::Client::deleteCoreWord(shared_ptr<DeleteCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCoreWordWithOptions(request, runtime);
}

DeleteDialogResponse Alibabacloud_Chatbot20171011::Client::deleteDialogWithOptions(shared_ptr<DeleteDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDialog"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDialogResponse(callApi(params, req, runtime));
}

DeleteDialogResponse Alibabacloud_Chatbot20171011::Client::deleteDialog(shared_ptr<DeleteDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDialogWithOptions(request, runtime);
}

DeleteEntityResponse Alibabacloud_Chatbot20171011::Client::deleteEntityWithOptions(shared_ptr<DeleteEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    query->insert(pair<string, long>("EntityId", *request->entityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEntity"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEntityResponse(callApi(params, req, runtime));
}

DeleteEntityResponse Alibabacloud_Chatbot20171011::Client::deleteEntity(shared_ptr<DeleteEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEntityWithOptions(request, runtime);
}

DeleteIntentResponse Alibabacloud_Chatbot20171011::Client::deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intentId)) {
    query->insert(pair<string, long>("IntentId", *request->intentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIntent"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIntentResponse(callApi(params, req, runtime));
}

DeleteIntentResponse Alibabacloud_Chatbot20171011::Client::deleteIntent(shared_ptr<DeleteIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIntentWithOptions(request, runtime);
}

DeleteKnowledgeResponse Alibabacloud_Chatbot20171011::Client::deleteKnowledgeWithOptions(shared_ptr<DeleteKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeId)) {
    query->insert(pair<string, long>("KnowledgeId", *request->knowledgeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteKnowledgeResponse(callApi(params, req, runtime));
}

DeleteKnowledgeResponse Alibabacloud_Chatbot20171011::Client::deleteKnowledge(shared_ptr<DeleteKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKnowledgeWithOptions(request, runtime);
}

DescribeBotResponse Alibabacloud_Chatbot20171011::Client::describeBotWithOptions(shared_ptr<DescribeBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBot"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBotResponse(callApi(params, req, runtime));
}

DescribeBotResponse Alibabacloud_Chatbot20171011::Client::describeBot(shared_ptr<DescribeBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBotWithOptions(request, runtime);
}

DescribeCategoryResponse Alibabacloud_Chatbot20171011::Client::describeCategoryWithOptions(shared_ptr<DescribeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCategory"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCategoryResponse(callApi(params, req, runtime));
}

DescribeCategoryResponse Alibabacloud_Chatbot20171011::Client::describeCategory(shared_ptr<DescribeCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCategoryWithOptions(request, runtime);
}

DescribeCoreWordResponse Alibabacloud_Chatbot20171011::Client::describeCoreWordWithOptions(shared_ptr<DescribeCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCoreWord"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCoreWordResponse(callApi(params, req, runtime));
}

DescribeCoreWordResponse Alibabacloud_Chatbot20171011::Client::describeCoreWord(shared_ptr<DescribeCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCoreWordWithOptions(request, runtime);
}

DescribeDialogResponse Alibabacloud_Chatbot20171011::Client::describeDialogWithOptions(shared_ptr<DescribeDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDialog"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDialogResponse(callApi(params, req, runtime));
}

DescribeDialogResponse Alibabacloud_Chatbot20171011::Client::describeDialog(shared_ptr<DescribeDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogWithOptions(request, runtime);
}

DescribeDialogFlowResponse Alibabacloud_Chatbot20171011::Client::describeDialogFlowWithOptions(shared_ptr<DescribeDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDialogFlow"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDialogFlowResponse(callApi(params, req, runtime));
}

DescribeDialogFlowResponse Alibabacloud_Chatbot20171011::Client::describeDialogFlow(shared_ptr<DescribeDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogFlowWithOptions(request, runtime);
}

DescribeEntitiesResponse Alibabacloud_Chatbot20171011::Client::describeEntitiesWithOptions(shared_ptr<DescribeEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    query->insert(pair<string, long>("EntityId", *request->entityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEntities"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEntitiesResponse(callApi(params, req, runtime));
}

DescribeEntitiesResponse Alibabacloud_Chatbot20171011::Client::describeEntities(shared_ptr<DescribeEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEntitiesWithOptions(request, runtime);
}

DescribeIntentResponse Alibabacloud_Chatbot20171011::Client::describeIntentWithOptions(shared_ptr<DescribeIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intentId)) {
    query->insert(pair<string, long>("IntentId", *request->intentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIntent"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIntentResponse(callApi(params, req, runtime));
}

DescribeIntentResponse Alibabacloud_Chatbot20171011::Client::describeIntent(shared_ptr<DescribeIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIntentWithOptions(request, runtime);
}

DescribeKnowledgeResponse Alibabacloud_Chatbot20171011::Client::describeKnowledgeWithOptions(shared_ptr<DescribeKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeId)) {
    query->insert(pair<string, long>("KnowledgeId", *request->knowledgeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKnowledgeResponse(callApi(params, req, runtime));
}

DescribeKnowledgeResponse Alibabacloud_Chatbot20171011::Client::describeKnowledge(shared_ptr<DescribeKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKnowledgeWithOptions(request, runtime);
}

DescribePerspectiveResponse Alibabacloud_Chatbot20171011::Client::describePerspectiveWithOptions(shared_ptr<DescribePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveId)) {
    query->insert(pair<string, string>("PerspectiveId", *request->perspectiveId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePerspective"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePerspectiveResponse(callApi(params, req, runtime));
}

DescribePerspectiveResponse Alibabacloud_Chatbot20171011::Client::describePerspective(shared_ptr<DescribePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePerspectiveWithOptions(request, runtime);
}

DisableDialogFlowResponse Alibabacloud_Chatbot20171011::Client::disableDialogFlowWithOptions(shared_ptr<DisableDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDialogFlow"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableDialogFlowResponse(callApi(params, req, runtime));
}

DisableDialogFlowResponse Alibabacloud_Chatbot20171011::Client::disableDialogFlow(shared_ptr<DisableDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDialogFlowWithOptions(request, runtime);
}

DisableKnowledgeResponse Alibabacloud_Chatbot20171011::Client::disableKnowledgeWithOptions(shared_ptr<DisableKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeId)) {
    query->insert(pair<string, long>("KnowledgeId", *request->knowledgeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableKnowledgeResponse(callApi(params, req, runtime));
}

DisableKnowledgeResponse Alibabacloud_Chatbot20171011::Client::disableKnowledge(shared_ptr<DisableKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableKnowledgeWithOptions(request, runtime);
}

FeedbackResponse Alibabacloud_Chatbot20171011::Client::feedbackWithOptions(shared_ptr<FeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feedback)) {
    query->insert(pair<string, string>("Feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Feedback"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FeedbackResponse(callApi(params, req, runtime));
}

FeedbackResponse Alibabacloud_Chatbot20171011::Client::feedback(shared_ptr<FeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return feedbackWithOptions(request, runtime);
}

GetAsyncResultResponse Alibabacloud_Chatbot20171011::Client::getAsyncResultWithOptions(shared_ptr<GetAsyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncResult"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncResultResponse(callApi(params, req, runtime));
}

GetAsyncResultResponse Alibabacloud_Chatbot20171011::Client::getAsyncResult(shared_ptr<GetAsyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncResultWithOptions(request, runtime);
}

GetBotChatDataResponse Alibabacloud_Chatbot20171011::Client::getBotChatDataWithOptions(shared_ptr<GetBotChatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBotChatData"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBotChatDataResponse(callApi(params, req, runtime));
}

GetBotChatDataResponse Alibabacloud_Chatbot20171011::Client::getBotChatData(shared_ptr<GetBotChatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotChatDataWithOptions(request, runtime);
}

GetBotDsStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotDsStatDataWithOptions(shared_ptr<GetBotDsStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBotDsStatData"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBotDsStatDataResponse(callApi(params, req, runtime));
}

GetBotDsStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotDsStatData(shared_ptr<GetBotDsStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotDsStatDataWithOptions(request, runtime);
}

GetBotKnowledgeStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotKnowledgeStatDataWithOptions(shared_ptr<GetBotKnowledgeStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBotKnowledgeStatData"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBotKnowledgeStatDataResponse(callApi(params, req, runtime));
}

GetBotKnowledgeStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotKnowledgeStatData(shared_ptr<GetBotKnowledgeStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotKnowledgeStatDataWithOptions(request, runtime);
}

GetBotSessionDataResponse Alibabacloud_Chatbot20171011::Client::getBotSessionDataWithOptions(shared_ptr<GetBotSessionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBotSessionData"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBotSessionDataResponse(callApi(params, req, runtime));
}

GetBotSessionDataResponse Alibabacloud_Chatbot20171011::Client::getBotSessionData(shared_ptr<GetBotSessionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotSessionDataWithOptions(request, runtime);
}

GetConversationListResponse Alibabacloud_Chatbot20171011::Client::getConversationListWithOptions(shared_ptr<GetConversationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderId)) {
    query->insert(pair<string, string>("SenderId", *request->senderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConversationList"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConversationListResponse(callApi(params, req, runtime));
}

GetConversationListResponse Alibabacloud_Chatbot20171011::Client::getConversationList(shared_ptr<GetConversationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConversationListWithOptions(request, runtime);
}

ListBotChatHistorysResponse Alibabacloud_Chatbot20171011::Client::listBotChatHistorysWithOptions(shared_ptr<ListBotChatHistorysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotChatHistorys"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotChatHistorysResponse(callApi(params, req, runtime));
}

ListBotChatHistorysResponse Alibabacloud_Chatbot20171011::Client::listBotChatHistorys(shared_ptr<ListBotChatHistorysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotChatHistorysWithOptions(request, runtime);
}

ListBotColdDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotColdDsDatasWithOptions(shared_ptr<ListBotColdDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotColdDsDatas"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotColdDsDatasResponse(callApi(params, req, runtime));
}

ListBotColdDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotColdDsDatas(shared_ptr<ListBotColdDsDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotColdDsDatasWithOptions(request, runtime);
}

ListBotColdKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotColdKnowledgesWithOptions(shared_ptr<ListBotColdKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotColdKnowledges"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotColdKnowledgesResponse(callApi(params, req, runtime));
}

ListBotColdKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotColdKnowledges(shared_ptr<ListBotColdKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotColdKnowledgesWithOptions(request, runtime);
}

ListBotDsDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotDsDetailsWithOptions(shared_ptr<ListBotDsDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotDsDetails"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotDsDetailsResponse(callApi(params, req, runtime));
}

ListBotDsDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotDsDetails(shared_ptr<ListBotDsDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotDsDetailsWithOptions(request, runtime);
}

ListBotHotDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotHotDsDatasWithOptions(shared_ptr<ListBotHotDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotHotDsDatas"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotHotDsDatasResponse(callApi(params, req, runtime));
}

ListBotHotDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotHotDsDatas(shared_ptr<ListBotHotDsDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotHotDsDatasWithOptions(request, runtime);
}

ListBotHotKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotHotKnowledgesWithOptions(shared_ptr<ListBotHotKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotHotKnowledges"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotHotKnowledgesResponse(callApi(params, req, runtime));
}

ListBotHotKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotHotKnowledges(shared_ptr<ListBotHotKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotHotKnowledgesWithOptions(request, runtime);
}

ListBotKnowledgeDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotKnowledgeDetailsWithOptions(shared_ptr<ListBotKnowledgeDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    query->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotKnowledgeDetails"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotKnowledgeDetailsResponse(callApi(params, req, runtime));
}

ListBotKnowledgeDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotKnowledgeDetails(shared_ptr<ListBotKnowledgeDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotKnowledgeDetailsWithOptions(request, runtime);
}

ListBotReceptionDetailDatasResponse Alibabacloud_Chatbot20171011::Client::listBotReceptionDetailDatasWithOptions(shared_ptr<ListBotReceptionDetailDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotInstanceId)) {
    query->insert(pair<string, string>("RobotInstanceId", *request->robotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBotReceptionDetailDatas"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBotReceptionDetailDatasResponse(callApi(params, req, runtime));
}

ListBotReceptionDetailDatasResponse Alibabacloud_Chatbot20171011::Client::listBotReceptionDetailDatas(shared_ptr<ListBotReceptionDetailDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotReceptionDetailDatasWithOptions(request, runtime);
}

ListConversationLogsResponse Alibabacloud_Chatbot20171011::Client::listConversationLogsWithOptions(shared_ptr<ListConversationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConversationLogs"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConversationLogsResponse(callApi(params, req, runtime));
}

ListConversationLogsResponse Alibabacloud_Chatbot20171011::Client::listConversationLogs(shared_ptr<ListConversationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConversationLogsWithOptions(request, runtime);
}

ListDSEntityResponse Alibabacloud_Chatbot20171011::Client::listDSEntityWithOptions(shared_ptr<ListDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDSEntity"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDSEntityResponse(callApi(params, req, runtime));
}

ListDSEntityResponse Alibabacloud_Chatbot20171011::Client::listDSEntity(shared_ptr<ListDSEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDSEntityWithOptions(request, runtime);
}

MoveKnowledgeCategoryResponse Alibabacloud_Chatbot20171011::Client::moveKnowledgeCategoryWithOptions(shared_ptr<MoveKnowledgeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeId)) {
    query->insert(pair<string, long>("KnowledgeId", *request->knowledgeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveKnowledgeCategory"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveKnowledgeCategoryResponse(callApi(params, req, runtime));
}

MoveKnowledgeCategoryResponse Alibabacloud_Chatbot20171011::Client::moveKnowledgeCategory(shared_ptr<MoveKnowledgeCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveKnowledgeCategoryWithOptions(request, runtime);
}

PublishDialogFlowResponse Alibabacloud_Chatbot20171011::Client::publishDialogFlowWithOptions(shared_ptr<PublishDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishDialogFlow"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishDialogFlowResponse(callApi(params, req, runtime));
}

PublishDialogFlowResponse Alibabacloud_Chatbot20171011::Client::publishDialogFlow(shared_ptr<PublishDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDialogFlowWithOptions(request, runtime);
}

PublishKnowledgeResponse Alibabacloud_Chatbot20171011::Client::publishKnowledgeWithOptions(shared_ptr<PublishKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->async)) {
    query->insert(pair<string, bool>("Async", *request->async));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeId)) {
    query->insert(pair<string, long>("KnowledgeId", *request->knowledgeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishKnowledgeResponse(callApi(params, req, runtime));
}

PublishKnowledgeResponse Alibabacloud_Chatbot20171011::Client::publishKnowledge(shared_ptr<PublishKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishKnowledgeWithOptions(request, runtime);
}

QueryBotsResponse Alibabacloud_Chatbot20171011::Client::queryBotsWithOptions(shared_ptr<QueryBotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBots"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBotsResponse(callApi(params, req, runtime));
}

QueryBotsResponse Alibabacloud_Chatbot20171011::Client::queryBots(shared_ptr<QueryBotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBotsWithOptions(request, runtime);
}

QueryCategoriesResponse Alibabacloud_Chatbot20171011::Client::queryCategoriesWithOptions(shared_ptr<QueryCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->knowledgeType)) {
    query->insert(pair<string, long>("KnowledgeType", *request->knowledgeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentCategoryId)) {
    query->insert(pair<string, long>("ParentCategoryId", *request->parentCategoryId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showChildrens)) {
    query->insert(pair<string, bool>("ShowChildrens", *request->showChildrens));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCategories"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCategoriesResponse(callApi(params, req, runtime));
}

QueryCategoriesResponse Alibabacloud_Chatbot20171011::Client::queryCategories(shared_ptr<QueryCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCategoriesWithOptions(request, runtime);
}

QueryCoreWordsResponse Alibabacloud_Chatbot20171011::Client::queryCoreWordsWithOptions(shared_ptr<QueryCoreWordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synonym)) {
    query->insert(pair<string, string>("Synonym", *request->synonym));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCoreWords"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCoreWordsResponse(callApi(params, req, runtime));
}

QueryCoreWordsResponse Alibabacloud_Chatbot20171011::Client::queryCoreWords(shared_ptr<QueryCoreWordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCoreWordsWithOptions(request, runtime);
}

QueryDialogsResponse Alibabacloud_Chatbot20171011::Client::queryDialogsWithOptions(shared_ptr<QueryDialogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogName)) {
    query->insert(pair<string, string>("DialogName", *request->dialogName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDialogs"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDialogsResponse(callApi(params, req, runtime));
}

QueryDialogsResponse Alibabacloud_Chatbot20171011::Client::queryDialogs(shared_ptr<QueryDialogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDialogsWithOptions(request, runtime);
}

QueryEntitiesResponse Alibabacloud_Chatbot20171011::Client::queryEntitiesWithOptions(shared_ptr<QueryEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEntities"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEntitiesResponse(callApi(params, req, runtime));
}

QueryEntitiesResponse Alibabacloud_Chatbot20171011::Client::queryEntities(shared_ptr<QueryEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEntitiesWithOptions(request, runtime);
}

QueryIntentsResponse Alibabacloud_Chatbot20171011::Client::queryIntentsWithOptions(shared_ptr<QueryIntentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentName)) {
    query->insert(pair<string, string>("IntentName", *request->intentName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIntents"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIntentsResponse(callApi(params, req, runtime));
}

QueryIntentsResponse Alibabacloud_Chatbot20171011::Client::queryIntents(shared_ptr<QueryIntentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentsWithOptions(request, runtime);
}

QueryKnowledgesResponse Alibabacloud_Chatbot20171011::Client::queryKnowledgesWithOptions(shared_ptr<QueryKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledgeTitle)) {
    query->insert(pair<string, string>("KnowledgeTitle", *request->knowledgeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryKnowledges"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryKnowledgesResponse(callApi(params, req, runtime));
}

QueryKnowledgesResponse Alibabacloud_Chatbot20171011::Client::queryKnowledges(shared_ptr<QueryKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryKnowledgesWithOptions(request, runtime);
}

QueryPerspectivesResponse Alibabacloud_Chatbot20171011::Client::queryPerspectivesWithOptions(shared_ptr<QueryPerspectivesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPerspectives"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPerspectivesResponse(callApi(params, req, runtime));
}

QueryPerspectivesResponse Alibabacloud_Chatbot20171011::Client::queryPerspectives(shared_ptr<QueryPerspectivesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPerspectivesWithOptions(request, runtime);
}

QuerySystemEntitiesResponse Alibabacloud_Chatbot20171011::Client::querySystemEntitiesWithOptions(shared_ptr<QuerySystemEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySystemEntities"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySystemEntitiesResponse(callApi(params, req, runtime));
}

QuerySystemEntitiesResponse Alibabacloud_Chatbot20171011::Client::querySystemEntities(shared_ptr<QuerySystemEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySystemEntitiesWithOptions(request, runtime);
}

RemoveEntityMemberResponse Alibabacloud_Chatbot20171011::Client::removeEntityMemberWithOptions(shared_ptr<RemoveEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveEntityMemberShrinkRequest> request = make_shared<RemoveEntityMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveEntityMemberRequestMember>(tmpReq->member)) {
    request->memberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->member->toMap()), make_shared<string>("Member"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    query->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberShrink)) {
    query->insert(pair<string, string>("Member", *request->memberShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removeType)) {
    query->insert(pair<string, string>("RemoveType", *request->removeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEntityMember"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveEntityMemberResponse(callApi(params, req, runtime));
}

RemoveEntityMemberResponse Alibabacloud_Chatbot20171011::Client::removeEntityMember(shared_ptr<RemoveEntityMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntityMemberWithOptions(request, runtime);
}

RemoveSynonymResponse Alibabacloud_Chatbot20171011::Client::removeSynonymWithOptions(shared_ptr<RemoveSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synonym)) {
    query->insert(pair<string, string>("Synonym", *request->synonym));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSynonym"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSynonymResponse(callApi(params, req, runtime));
}

RemoveSynonymResponse Alibabacloud_Chatbot20171011::Client::removeSynonym(shared_ptr<RemoveSynonymRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSynonymWithOptions(request, runtime);
}

TestDialogFlowResponse Alibabacloud_Chatbot20171011::Client::testDialogFlowWithOptions(shared_ptr<TestDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestDialogFlow"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestDialogFlowResponse(callApi(params, req, runtime));
}

TestDialogFlowResponse Alibabacloud_Chatbot20171011::Client::testDialogFlow(shared_ptr<TestDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testDialogFlowWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_Chatbot20171011::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCategory"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCategoryResponse(callApi(params, req, runtime));
}

UpdateCategoryResponse Alibabacloud_Chatbot20171011::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateCoreWordResponse Alibabacloud_Chatbot20171011::Client::updateCoreWordWithOptions(shared_ptr<UpdateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordCode)) {
    query->insert(pair<string, string>("CoreWordCode", *request->coreWordCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreWordName)) {
    query->insert(pair<string, string>("CoreWordName", *request->coreWordName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCoreWord"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCoreWordResponse(callApi(params, req, runtime));
}

UpdateCoreWordResponse Alibabacloud_Chatbot20171011::Client::updateCoreWord(shared_ptr<UpdateCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCoreWordWithOptions(request, runtime);
}

UpdateDialogResponse Alibabacloud_Chatbot20171011::Client::updateDialogWithOptions(shared_ptr<UpdateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogName)) {
    query->insert(pair<string, string>("DialogName", *request->dialogName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDialog"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDialogResponse(callApi(params, req, runtime));
}

UpdateDialogResponse Alibabacloud_Chatbot20171011::Client::updateDialog(shared_ptr<UpdateDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDialogWithOptions(request, runtime);
}

UpdateDialogFlowResponse Alibabacloud_Chatbot20171011::Client::updateDialogFlowWithOptions(shared_ptr<UpdateDialogFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDialogFlowShrinkRequest> request = make_shared<UpdateDialogFlowShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDialogFlowRequestModuleDefinition>(tmpReq->moduleDefinition)) {
    request->moduleDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->moduleDefinition->toMap()), make_shared<string>("ModuleDefinition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogId)) {
    query->insert(pair<string, long>("DialogId", *request->dialogId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleDefinitionShrink)) {
    body->insert(pair<string, string>("ModuleDefinition", *request->moduleDefinitionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDialogFlow"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDialogFlowResponse(callApi(params, req, runtime));
}

UpdateDialogFlowResponse Alibabacloud_Chatbot20171011::Client::updateDialogFlow(shared_ptr<UpdateDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDialogFlowWithOptions(request, runtime);
}

UpdateEntityResponse Alibabacloud_Chatbot20171011::Client::updateEntityWithOptions(shared_ptr<UpdateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEntityShrinkRequest> request = make_shared<UpdateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEntityRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    query->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regex)) {
    query->insert(pair<string, string>("Regex", *request->regex));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEntity"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEntityResponse(callApi(params, req, runtime));
}

UpdateEntityResponse Alibabacloud_Chatbot20171011::Client::updateEntity(shared_ptr<UpdateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEntityWithOptions(request, runtime);
}

UpdateIntentResponse Alibabacloud_Chatbot20171011::Client::updateIntentWithOptions(shared_ptr<UpdateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateIntentShrinkRequest> request = make_shared<UpdateIntentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IntentCreateDTO>(tmpReq->intentDefinition)) {
    request->intentDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->intentDefinition->toMap()), make_shared<string>("IntentDefinition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentDefinitionShrink)) {
    query->insert(pair<string, string>("IntentDefinition", *request->intentDefinitionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intentId)) {
    query->insert(pair<string, long>("IntentId", *request->intentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIntent"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIntentResponse(callApi(params, req, runtime));
}

UpdateIntentResponse Alibabacloud_Chatbot20171011::Client::updateIntent(shared_ptr<UpdateIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIntentWithOptions(request, runtime);
}

UpdateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::updateKnowledgeWithOptions(shared_ptr<UpdateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateKnowledgeShrinkRequest> request = make_shared<UpdateKnowledgeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateKnowledgeRequestKnowledge>(tmpReq->knowledge)) {
    request->knowledgeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->knowledge->toMap()), make_shared<string>("Knowledge"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledgeShrink)) {
    body->insert(pair<string, string>("Knowledge", *request->knowledgeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateKnowledge"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateKnowledgeResponse(callApi(params, req, runtime));
}

UpdateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::updateKnowledge(shared_ptr<UpdateKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateKnowledgeWithOptions(request, runtime);
}

UpdatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::updatePerspectiveWithOptions(shared_ptr<UpdatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveId)) {
    query->insert(pair<string, string>("PerspectiveId", *request->perspectiveId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePerspective"))},
    {"version", boost::any(string("2017-10-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePerspectiveResponse(callApi(params, req, runtime));
}

UpdatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::updatePerspective(shared_ptr<UpdatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePerspectiveWithOptions(request, runtime);
}

