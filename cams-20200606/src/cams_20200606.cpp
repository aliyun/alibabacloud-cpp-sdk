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

AddChatappPhoneNumberResponse Alibabacloud_Cams20200606::Client::addChatappPhoneNumberWithOptions(shared_ptr<AddChatappPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cc)) {
    body->insert(pair<string, string>("Cc", *request->cc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preValidateId)) {
    body->insert(pair<string, string>("PreValidateId", *request->preValidateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifiedName)) {
    body->insert(pair<string, string>("VerifiedName", *request->verifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddChatappPhoneNumber"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddChatappPhoneNumberResponse(callApi(params, req, runtime));
}

AddChatappPhoneNumberResponse Alibabacloud_Cams20200606::Client::addChatappPhoneNumber(shared_ptr<AddChatappPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addChatappPhoneNumberWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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

ChatappBindWabaResponse Alibabacloud_Cams20200606::Client::chatappBindWabaWithOptions(shared_ptr<ChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->wabaId)) {
    body->insert(pair<string, string>("WabaId", *request->wabaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappBindWaba"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappBindWabaResponse(callApi(params, req, runtime));
}

ChatappBindWabaResponse Alibabacloud_Cams20200606::Client::chatappBindWaba(shared_ptr<ChatappBindWabaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappBindWabaWithOptions(request, runtime);
}

ChatappEmbedSignUpResponse Alibabacloud_Cams20200606::Client::chatappEmbedSignUpWithOptions(shared_ptr<ChatappEmbedSignUpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputToken)) {
    body->insert(pair<string, string>("InputToken", *request->inputToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappEmbedSignUp"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappEmbedSignUpResponse(callApi(params, req, runtime));
}

ChatappEmbedSignUpResponse Alibabacloud_Cams20200606::Client::chatappEmbedSignUp(shared_ptr<ChatappEmbedSignUpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappEmbedSignUpWithOptions(request, runtime);
}

ChatappMigrationRegisterResponse Alibabacloud_Cams20200606::Client::chatappMigrationRegisterWithOptions(shared_ptr<ChatappMigrationRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappMigrationRegister"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappMigrationRegisterResponse(callApi(params, req, runtime));
}

ChatappMigrationRegisterResponse Alibabacloud_Cams20200606::Client::chatappMigrationRegister(shared_ptr<ChatappMigrationRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappMigrationRegisterWithOptions(request, runtime);
}

ChatappMigrationVerifiedResponse Alibabacloud_Cams20200606::Client::chatappMigrationVerifiedWithOptions(shared_ptr<ChatappMigrationVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappMigrationVerified"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappMigrationVerifiedResponse(callApi(params, req, runtime));
}

ChatappMigrationVerifiedResponse Alibabacloud_Cams20200606::Client::chatappMigrationVerified(shared_ptr<ChatappMigrationVerifiedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappMigrationVerifiedWithOptions(request, runtime);
}

ChatappPhoneNumberDeregisterResponse Alibabacloud_Cams20200606::Client::chatappPhoneNumberDeregisterWithOptions(shared_ptr<ChatappPhoneNumberDeregisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappPhoneNumberDeregister"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappPhoneNumberDeregisterResponse(callApi(params, req, runtime));
}

ChatappPhoneNumberDeregisterResponse Alibabacloud_Cams20200606::Client::chatappPhoneNumberDeregister(shared_ptr<ChatappPhoneNumberDeregisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappPhoneNumberDeregisterWithOptions(request, runtime);
}

ChatappPhoneNumberRegisterResponse Alibabacloud_Cams20200606::Client::chatappPhoneNumberRegisterWithOptions(shared_ptr<ChatappPhoneNumberRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappPhoneNumberRegister"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappPhoneNumberRegisterResponse(callApi(params, req, runtime));
}

ChatappPhoneNumberRegisterResponse Alibabacloud_Cams20200606::Client::chatappPhoneNumberRegister(shared_ptr<ChatappPhoneNumberRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappPhoneNumberRegisterWithOptions(request, runtime);
}

ChatappSyncPhoneNumberResponse Alibabacloud_Cams20200606::Client::chatappSyncPhoneNumberWithOptions(shared_ptr<ChatappSyncPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappSyncPhoneNumber"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappSyncPhoneNumberResponse(callApi(params, req, runtime));
}

ChatappSyncPhoneNumberResponse Alibabacloud_Cams20200606::Client::chatappSyncPhoneNumber(shared_ptr<ChatappSyncPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappSyncPhoneNumberWithOptions(request, runtime);
}

ChatappVerifyAndRegisterResponse Alibabacloud_Cams20200606::Client::chatappVerifyAndRegisterWithOptions(shared_ptr<ChatappVerifyAndRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    body->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChatappVerifyAndRegister"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatappVerifyAndRegisterResponse(callApi(params, req, runtime));
}

ChatappVerifyAndRegisterResponse Alibabacloud_Cams20200606::Client::chatappVerifyAndRegister(shared_ptr<ChatappVerifyAndRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatappVerifyAndRegisterWithOptions(request, runtime);
}

CreateChatappMigrationInitiateResponse Alibabacloud_Cams20200606::Client::createChatappMigrationInitiateWithOptions(shared_ptr<CreateChatappMigrationInitiateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->countryCode)) {
    query->insert(pair<string, string>("CountryCode", *request->countryCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileNumber)) {
    query->insert(pair<string, string>("MobileNumber", *request->mobileNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChatappMigrationInitiate"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChatappMigrationInitiateResponse(callApi(params, req, runtime));
}

CreateChatappMigrationInitiateResponse Alibabacloud_Cams20200606::Client::createChatappMigrationInitiate(shared_ptr<CreateChatappMigrationInitiateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChatappMigrationInitiateWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowCategoryChange)) {
    body->insert(pair<string, bool>("AllowCategoryChange", *request->allowCategoryChange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentsShrink)) {
    body->insert(pair<string, string>("Components", *request->componentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->messageSendTtlSeconds)) {
    body->insert(pair<string, long>("MessageSendTtlSeconds", *request->messageSendTtlSeconds));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
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

EnableWhatsappROIMetricResponse Alibabacloud_Cams20200606::Client::enableWhatsappROIMetricWithOptions(shared_ptr<EnableWhatsappROIMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableWhatsappROIMetric"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableWhatsappROIMetricResponse(callApi(params, req, runtime));
}

EnableWhatsappROIMetricResponse Alibabacloud_Cams20200606::Client::enableWhatsappROIMetric(shared_ptr<EnableWhatsappROIMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableWhatsappROIMetricWithOptions(request, runtime);
}

GetChatappPhoneNumberMetricResponse Alibabacloud_Cams20200606::Client::getChatappPhoneNumberMetricWithOptions(shared_ptr<GetChatappPhoneNumberMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatappPhoneNumberMetric"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatappPhoneNumberMetricResponse(callApi(params, req, runtime));
}

GetChatappPhoneNumberMetricResponse Alibabacloud_Cams20200606::Client::getChatappPhoneNumberMetric(shared_ptr<GetChatappPhoneNumberMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChatappPhoneNumberMetricWithOptions(request, runtime);
}

GetChatappTemplateDetailResponse Alibabacloud_Cams20200606::Client::getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
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

GetChatappTemplateMetricResponse Alibabacloud_Cams20200606::Client::getChatappTemplateMetricWithOptions(shared_ptr<GetChatappTemplateMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatappTemplateMetric"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatappTemplateMetricResponse(callApi(params, req, runtime));
}

GetChatappTemplateMetricResponse Alibabacloud_Cams20200606::Client::getChatappTemplateMetric(shared_ptr<GetChatappTemplateMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChatappTemplateMetricWithOptions(request, runtime);
}

GetChatappUploadAuthorizationResponse Alibabacloud_Cams20200606::Client::getChatappUploadAuthorizationWithOptions(shared_ptr<GetChatappUploadAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatappUploadAuthorization"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatappUploadAuthorizationResponse(callApi(params, req, runtime));
}

GetChatappUploadAuthorizationResponse Alibabacloud_Cams20200606::Client::getChatappUploadAuthorization(shared_ptr<GetChatappUploadAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChatappUploadAuthorizationWithOptions(request, runtime);
}

GetChatappVerifyCodeResponse Alibabacloud_Cams20200606::Client::getChatappVerifyCodeWithOptions(shared_ptr<GetChatappVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    body->insert(pair<string, string>("Locale", *request->locale));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    body->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatappVerifyCode"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatappVerifyCodeResponse(callApi(params, req, runtime));
}

GetChatappVerifyCodeResponse Alibabacloud_Cams20200606::Client::getChatappVerifyCode(shared_ptr<GetChatappVerifyCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChatappVerifyCodeWithOptions(request, runtime);
}

GetCommerceSettingResponse Alibabacloud_Cams20200606::Client::getCommerceSettingWithOptions(shared_ptr<GetCommerceSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCommerceSetting"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCommerceSettingResponse(callApi(params, req, runtime));
}

GetCommerceSettingResponse Alibabacloud_Cams20200606::Client::getCommerceSetting(shared_ptr<GetCommerceSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommerceSettingWithOptions(request, runtime);
}

GetMigrationVerifyCodeResponse Alibabacloud_Cams20200606::Client::getMigrationVerifyCodeWithOptions(shared_ptr<GetMigrationVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    query->insert(pair<string, string>("Locale", *request->locale));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMigrationVerifyCode"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMigrationVerifyCodeResponse(callApi(params, req, runtime));
}

GetMigrationVerifyCodeResponse Alibabacloud_Cams20200606::Client::getMigrationVerifyCode(shared_ptr<GetMigrationVerifyCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMigrationVerifyCodeWithOptions(request, runtime);
}

GetPhoneNumberVerificationStatusResponse Alibabacloud_Cams20200606::Client::getPhoneNumberVerificationStatusWithOptions(shared_ptr<GetPhoneNumberVerificationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhoneNumberVerificationStatus"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhoneNumberVerificationStatusResponse(callApi(params, req, runtime));
}

GetPhoneNumberVerificationStatusResponse Alibabacloud_Cams20200606::Client::getPhoneNumberVerificationStatus(shared_ptr<GetPhoneNumberVerificationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhoneNumberVerificationStatusWithOptions(request, runtime);
}

GetPreValidatePhoneIdResponse Alibabacloud_Cams20200606::Client::getPreValidatePhoneIdWithOptions(shared_ptr<GetPreValidatePhoneIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    body->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPreValidatePhoneId"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPreValidatePhoneIdResponse(callApi(params, req, runtime));
}

GetPreValidatePhoneIdResponse Alibabacloud_Cams20200606::Client::getPreValidatePhoneId(shared_ptr<GetPreValidatePhoneIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPreValidatePhoneIdWithOptions(request, runtime);
}

GetWhatsappConnectionCatalogResponse Alibabacloud_Cams20200606::Client::getWhatsappConnectionCatalogWithOptions(shared_ptr<GetWhatsappConnectionCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wabaId)) {
    query->insert(pair<string, string>("WabaId", *request->wabaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWhatsappConnectionCatalog"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWhatsappConnectionCatalogResponse(callApi(params, req, runtime));
}

GetWhatsappConnectionCatalogResponse Alibabacloud_Cams20200606::Client::getWhatsappConnectionCatalog(shared_ptr<GetWhatsappConnectionCatalogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWhatsappConnectionCatalogWithOptions(request, runtime);
}

IsvGetAppIdResponse Alibabacloud_Cams20200606::Client::isvGetAppIdWithOptions(shared_ptr<IsvGetAppIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissions)) {
    body->insert(pair<string, string>("Permissions", *request->permissions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsvGetAppId"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsvGetAppIdResponse(callApi(params, req, runtime));
}

IsvGetAppIdResponse Alibabacloud_Cams20200606::Client::isvGetAppId(shared_ptr<IsvGetAppIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return isvGetAppIdWithOptions(request, runtime);
}

ListChatappTemplateResponse Alibabacloud_Cams20200606::Client::listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListChatappTemplateShrinkRequest> request = make_shared<ListChatappTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListChatappTemplateRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditStatus)) {
    query->insert(pair<string, string>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
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

ListProductResponse Alibabacloud_Cams20200606::Client::listProductWithOptions(shared_ptr<ListProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->after)) {
    query->insert(pair<string, string>("After", *request->after));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->before)) {
    query->insert(pair<string, string>("Before", *request->before));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->catalogId)) {
    query->insert(pair<string, string>("CatalogId", *request->catalogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fields)) {
    query->insert(pair<string, string>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wabaId)) {
    query->insert(pair<string, string>("WabaId", *request->wabaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProduct"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductResponse(callApi(params, req, runtime));
}

ListProductResponse Alibabacloud_Cams20200606::Client::listProduct(shared_ptr<ListProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductWithOptions(request, runtime);
}

ListProductCatalogResponse Alibabacloud_Cams20200606::Client::listProductCatalogWithOptions(shared_ptr<ListProductCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->after)) {
    query->insert(pair<string, string>("After", *request->after));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->before)) {
    query->insert(pair<string, string>("Before", *request->before));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    query->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fields)) {
    query->insert(pair<string, string>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductCatalog"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductCatalogResponse(callApi(params, req, runtime));
}

ListProductCatalogResponse Alibabacloud_Cams20200606::Client::listProductCatalog(shared_ptr<ListProductCatalogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductCatalogWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentsShrink)) {
    body->insert(pair<string, string>("Components", *request->componentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->messageSendTtlSeconds)) {
    body->insert(pair<string, long>("MessageSendTtlSeconds", *request->messageSendTtlSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
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

ModifyPhoneBusinessProfileResponse Alibabacloud_Cams20200606::Client::modifyPhoneBusinessProfileWithOptions(shared_ptr<ModifyPhoneBusinessProfileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyPhoneBusinessProfileShrinkRequest> request = make_shared<ModifyPhoneBusinessProfileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->websites)) {
    request->websitesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->websites, make_shared<string>("Websites"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profilePictureUrl)) {
    query->insert(pair<string, string>("ProfilePictureUrl", *request->profilePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vertical)) {
    query->insert(pair<string, string>("Vertical", *request->vertical));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->websitesShrink)) {
    query->insert(pair<string, string>("Websites", *request->websitesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPhoneBusinessProfile"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPhoneBusinessProfileResponse(callApi(params, req, runtime));
}

ModifyPhoneBusinessProfileResponse Alibabacloud_Cams20200606::Client::modifyPhoneBusinessProfile(shared_ptr<ModifyPhoneBusinessProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPhoneBusinessProfileWithOptions(request, runtime);
}

QueryChatappBindWabaResponse Alibabacloud_Cams20200606::Client::queryChatappBindWabaWithOptions(shared_ptr<QueryChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChatappBindWaba"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChatappBindWabaResponse(callApi(params, req, runtime));
}

QueryChatappBindWabaResponse Alibabacloud_Cams20200606::Client::queryChatappBindWaba(shared_ptr<QueryChatappBindWabaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChatappBindWabaWithOptions(request, runtime);
}

QueryChatappPhoneNumbersResponse Alibabacloud_Cams20200606::Client::queryChatappPhoneNumbersWithOptions(shared_ptr<QueryChatappPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    query->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChatappPhoneNumbers"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChatappPhoneNumbersResponse(callApi(params, req, runtime));
}

QueryChatappPhoneNumbersResponse Alibabacloud_Cams20200606::Client::queryChatappPhoneNumbers(shared_ptr<QueryChatappPhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChatappPhoneNumbersWithOptions(request, runtime);
}

QueryPhoneBusinessProfileResponse Alibabacloud_Cams20200606::Client::queryPhoneBusinessProfileWithOptions(shared_ptr<QueryPhoneBusinessProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPhoneBusinessProfile"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPhoneBusinessProfileResponse(callApi(params, req, runtime));
}

QueryPhoneBusinessProfileResponse Alibabacloud_Cams20200606::Client::queryPhoneBusinessProfile(shared_ptr<QueryPhoneBusinessProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPhoneBusinessProfileWithOptions(request, runtime);
}

QueryWabaBusinessInfoResponse Alibabacloud_Cams20200606::Client::queryWabaBusinessInfoWithOptions(shared_ptr<QueryWabaBusinessInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wabaId)) {
    query->insert(pair<string, string>("WabaId", *request->wabaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWabaBusinessInfo"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWabaBusinessInfoResponse(callApi(params, req, runtime));
}

QueryWabaBusinessInfoResponse Alibabacloud_Cams20200606::Client::queryWabaBusinessInfo(shared_ptr<QueryWabaBusinessInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWabaBusinessInfoWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackContent)) {
    body->insert(pair<string, string>("FallBackContent", *request->fallBackContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fallBackDuration)) {
    body->insert(pair<string, long>("FallBackDuration", *request->fallBackDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackId)) {
    body->insert(pair<string, string>("FallBackId", *request->fallBackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackRule)) {
    body->insert(pair<string, string>("FallBackRule", *request->fallBackRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    body->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderListShrink)) {
    body->insert(pair<string, string>("SenderList", *request->senderListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    body->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("Ttl", *request->ttl));
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
  if (!Darabonba_Util::Client::isUnset<SendChatappMessageRequestFlowAction>(tmpReq->flowAction)) {
    request->flowActionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->flowAction, make_shared<string>("FlowAction"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendChatappMessageRequestProductAction>(tmpReq->productAction)) {
    request->productActionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->productAction, make_shared<string>("ProductAction"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->contextMessageId)) {
    body->insert(pair<string, string>("ContextMessageId", *request->contextMessageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    body->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custWabaId)) {
    body->insert(pair<string, string>("CustWabaId", *request->custWabaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackContent)) {
    body->insert(pair<string, string>("FallBackContent", *request->fallBackContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fallBackDuration)) {
    body->insert(pair<string, long>("FallBackDuration", *request->fallBackDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackId)) {
    body->insert(pair<string, string>("FallBackId", *request->fallBackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallBackRule)) {
    body->insert(pair<string, string>("FallBackRule", *request->fallBackRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowActionShrink)) {
    body->insert(pair<string, string>("FlowAction", *request->flowActionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    body->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvCode)) {
    body->insert(pair<string, string>("IsvCode", *request->isvCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    body->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productActionShrink)) {
    body->insert(pair<string, string>("ProductAction", *request->productActionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    body->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->trackingData)) {
    body->insert(pair<string, string>("TrackingData", *request->trackingData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("Ttl", *request->ttl));
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

SubmitIsvCustomerTermsResponse Alibabacloud_Cams20200606::Client::submitIsvCustomerTermsWithOptions(shared_ptr<SubmitIsvCustomerTermsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessDesc)) {
    query->insert(pair<string, string>("BusinessDesc", *request->businessDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactMail)) {
    query->insert(pair<string, string>("ContactMail", *request->contactMail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custName)) {
    query->insert(pair<string, string>("CustName", *request->custName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvTerms)) {
    query->insert(pair<string, string>("IsvTerms", *request->isvTerms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeAddress)) {
    query->insert(pair<string, string>("OfficeAddress", *request->officeAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIsvCustomerTerms"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIsvCustomerTermsResponse(callApi(params, req, runtime));
}

SubmitIsvCustomerTermsResponse Alibabacloud_Cams20200606::Client::submitIsvCustomerTerms(shared_ptr<SubmitIsvCustomerTermsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIsvCustomerTermsWithOptions(request, runtime);
}

UpdateAccountWebhookResponse Alibabacloud_Cams20200606::Client::updateAccountWebhookWithOptions(shared_ptr<UpdateAccountWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpFlag)) {
    query->insert(pair<string, string>("HttpFlag", *request->httpFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueFlag)) {
    query->insert(pair<string, string>("QueueFlag", *request->queueFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCallbackUrl)) {
    query->insert(pair<string, string>("StatusCallbackUrl", *request->statusCallbackUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccountWebhook"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAccountWebhookResponse(callApi(params, req, runtime));
}

UpdateAccountWebhookResponse Alibabacloud_Cams20200606::Client::updateAccountWebhook(shared_ptr<UpdateAccountWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccountWebhookWithOptions(request, runtime);
}

UpdateCommerceSettingResponse Alibabacloud_Cams20200606::Client::updateCommerceSettingWithOptions(shared_ptr<UpdateCommerceSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cartEnable)) {
    query->insert(pair<string, bool>("CartEnable", *request->cartEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->catalogVisible)) {
    query->insert(pair<string, bool>("CatalogVisible", *request->catalogVisible));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCommerceSetting"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCommerceSettingResponse(callApi(params, req, runtime));
}

UpdateCommerceSettingResponse Alibabacloud_Cams20200606::Client::updateCommerceSetting(shared_ptr<UpdateCommerceSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCommerceSettingWithOptions(request, runtime);
}

UpdatePhoneWebhookResponse Alibabacloud_Cams20200606::Client::updatePhoneWebhookWithOptions(shared_ptr<UpdatePhoneWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->custSpaceId)) {
    query->insert(pair<string, string>("CustSpaceId", *request->custSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpFlag)) {
    query->insert(pair<string, string>("HttpFlag", *request->httpFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueFlag)) {
    query->insert(pair<string, string>("QueueFlag", *request->queueFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCallbackUrl)) {
    query->insert(pair<string, string>("StatusCallbackUrl", *request->statusCallbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upCallbackUrl)) {
    query->insert(pair<string, string>("UpCallbackUrl", *request->upCallbackUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePhoneWebhook"))},
    {"version", boost::any(string("2020-06-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePhoneWebhookResponse(callApi(params, req, runtime));
}

UpdatePhoneWebhookResponse Alibabacloud_Cams20200606::Client::updatePhoneWebhook(shared_ptr<UpdatePhoneWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePhoneWebhookWithOptions(request, runtime);
}

