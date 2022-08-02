// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_game_api20200728.hpp>
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

using namespace Alibabacloud_CloudGameAPI20200728;

Alibabacloud_CloudGameAPI20200728::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudgameapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CloudGameAPI20200728::Client::getEndpoint(shared_ptr<string> productId,
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

AdaptGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::adaptGameVersionWithOptions(shared_ptr<AdaptGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->frameRate)) {
    query->insert(pair<string, string>("FrameRate", *request->frameRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resolution)) {
    query->insert(pair<string, string>("Resolution", *request->resolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AdaptGameVersion"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AdaptGameVersionResponse(callApi(params, req, runtime));
}

AdaptGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::adaptGameVersion(shared_ptr<AdaptGameVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return adaptGameVersionWithOptions(request, runtime);
}

AddGameToProjectResponse Alibabacloud_CloudGameAPI20200728::Client::addGameToProjectWithOptions(shared_ptr<AddGameToProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGameToProject"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGameToProjectResponse(callApi(params, req, runtime));
}

AddGameToProjectResponse Alibabacloud_CloudGameAPI20200728::Client::addGameToProject(shared_ptr<AddGameToProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGameToProjectWithOptions(request, runtime);
}

BatchDispatchGameSlotResponse Alibabacloud_CloudGameAPI20200728::Client::batchDispatchGameSlotWithOptions(shared_ptr<BatchDispatchGameSlotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueUserList)) {
    body->insert(pair<string, string>("QueueUserList", *request->queueUserList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDispatchGameSlot"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDispatchGameSlotResponse(callApi(params, req, runtime));
}

BatchDispatchGameSlotResponse Alibabacloud_CloudGameAPI20200728::Client::batchDispatchGameSlot(shared_ptr<BatchDispatchGameSlotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDispatchGameSlotWithOptions(request, runtime);
}

BatchStopGameSessionsResponse Alibabacloud_CloudGameAPI20200728::Client::batchStopGameSessionsWithOptions(shared_ptr<BatchStopGameSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trackInfo)) {
    query->insert(pair<string, string>("TrackInfo", *request->trackInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchStopGameSessions"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchStopGameSessionsResponse(callApi(params, req, runtime));
}

BatchStopGameSessionsResponse Alibabacloud_CloudGameAPI20200728::Client::batchStopGameSessions(shared_ptr<BatchStopGameSessionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopGameSessionsWithOptions(request, runtime);
}

CancelGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::cancelGameHangWithOptions(shared_ptr<CancelGameHangRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelGameHang"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelGameHangResponse(callApi(params, req, runtime));
}

CancelGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::cancelGameHang(shared_ptr<CancelGameHangRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelGameHangWithOptions(request, runtime);
}

CloseOrderResponse Alibabacloud_CloudGameAPI20200728::Client::closeOrderWithOptions(shared_ptr<CloseOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerAccountId)) {
    query->insert(pair<string, string>("BuyerAccountId", *request->buyerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseOrder"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseOrderResponse(callApi(params, req, runtime));
}

CloseOrderResponse Alibabacloud_CloudGameAPI20200728::Client::closeOrder(shared_ptr<CloseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeOrderWithOptions(request, runtime);
}

CreateGameResponse Alibabacloud_CloudGameAPI20200728::Client::createGameWithOptions(shared_ptr<CreateGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameName)) {
    query->insert(pair<string, string>("GameName", *request->gameName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->platformType)) {
    query->insert(pair<string, long>("PlatformType", *request->platformType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGame"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGameResponse(callApi(params, req, runtime));
}

CreateGameResponse Alibabacloud_CloudGameAPI20200728::Client::createGame(shared_ptr<CreateGameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGameWithOptions(request, runtime);
}

CreateGameDeployWorkflowResponse Alibabacloud_CloudGameAPI20200728::Client::createGameDeployWorkflowWithOptions(shared_ptr<CreateGameDeployWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadType)) {
    query->insert(pair<string, string>("DownloadType", *request->downloadType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frameRate)) {
    query->insert(pair<string, string>("FrameRate", *request->frameRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameVersion)) {
    query->insert(pair<string, string>("GameVersion", *request->gameVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    query->insert(pair<string, string>("Hash", *request->hash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("Instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resolution)) {
    query->insert(pair<string, string>("Resolution", *request->resolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGameDeployWorkflow"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGameDeployWorkflowResponse(callApi(params, req, runtime));
}

CreateGameDeployWorkflowResponse Alibabacloud_CloudGameAPI20200728::Client::createGameDeployWorkflow(shared_ptr<CreateGameDeployWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGameDeployWorkflowWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_CloudGameAPI20200728::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerAccountId)) {
    query->insert(pair<string, string>("BuyerAccountId", *request->buyerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentCode)) {
    query->insert(pair<string, string>("IdempotentCode", *request->idempotentCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    query->insert(pair<string, string>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->originPrice)) {
    query->insert(pair<string, long>("OriginPrice", *request->originPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->settlementPrice)) {
    query->insert(pair<string, long>("SettlementPrice", *request->settlementPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    query->insert(pair<string, string>("SkuId", *request->skuId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrder"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderResponse(callApi(params, req, runtime));
}

CreateOrderResponse Alibabacloud_CloudGameAPI20200728::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_CloudGameAPI20200728::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_CloudGameAPI20200728::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

CreateTokenResponse Alibabacloud_CloudGameAPI20200728::Client::createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentToken)) {
    query->insert(pair<string, string>("CurrentToken", *request->currentToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->session)) {
    query->insert(pair<string, string>("Session", *request->session));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateToken"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTokenResponse(callApi(params, req, runtime));
}

CreateTokenResponse Alibabacloud_CloudGameAPI20200728::Client::createToken(shared_ptr<CreateTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTokenWithOptions(request, runtime);
}

DeleteGameResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGameWithOptions(shared_ptr<DeleteGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGame"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGameResponse(callApi(params, req, runtime));
}

DeleteGameResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGame(shared_ptr<DeleteGameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGameWithOptions(request, runtime);
}

DeleteGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGameArchiveWithOptions(shared_ptr<DeleteGameArchiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archiveId)) {
    query->insert(pair<string, string>("ArchiveId", *request->archiveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGameArchive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGameArchiveResponse(callApi(params, req, runtime));
}

DeleteGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGameArchive(shared_ptr<DeleteGameArchiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGameArchiveWithOptions(request, runtime);
}

DeleteGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGameVersionWithOptions(shared_ptr<DeleteGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGameVersion"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGameVersionResponse(callApi(params, req, runtime));
}

DeleteGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::deleteGameVersion(shared_ptr<DeleteGameVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGameVersionWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_CloudGameAPI20200728::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_CloudGameAPI20200728::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeliveryOrderResponse Alibabacloud_CloudGameAPI20200728::Client::deliveryOrderWithOptions(shared_ptr<DeliveryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerAccountId)) {
    query->insert(pair<string, string>("BuyerAccountId", *request->buyerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeliveryOrder"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeliveryOrderResponse(callApi(params, req, runtime));
}

DeliveryOrderResponse Alibabacloud_CloudGameAPI20200728::Client::deliveryOrder(shared_ptr<DeliveryOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deliveryOrderWithOptions(request, runtime);
}

DispatchGameSlotResponse Alibabacloud_CloudGameAPI20200728::Client::dispatchGameSlotWithOptions(shared_ptr<DispatchGameSlotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizParam)) {
    body->insert(pair<string, string>("BizParam", *request->bizParam));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancel)) {
    body->insert(pair<string, bool>("Cancel", *request->cancel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    body->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameCommand)) {
    body->insert(pair<string, string>("GameCommand", *request->gameCommand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    body->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameStartParam)) {
    body->insert(pair<string, string>("GameStartParam", *request->gameStartParam));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reconnect)) {
    body->insert(pair<string, bool>("Reconnect", *request->reconnect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    body->insert(pair<string, string>("RegionName", *request->regionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemInfo)) {
    body->insert(pair<string, string>("SystemInfo", *request->systemInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userLevel)) {
    body->insert(pair<string, long>("UserLevel", *request->userLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DispatchGameSlot"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DispatchGameSlotResponse(callApi(params, req, runtime));
}

DispatchGameSlotResponse Alibabacloud_CloudGameAPI20200728::Client::dispatchGameSlot(shared_ptr<DispatchGameSlotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dispatchGameSlotWithOptions(request, runtime);
}

GetGameCcuResponse Alibabacloud_CloudGameAPI20200728::Client::getGameCcuWithOptions(shared_ptr<GetGameCcuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    query->insert(pair<string, string>("RegionName", *request->regionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameCcu"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameCcuResponse(callApi(params, req, runtime));
}

GetGameCcuResponse Alibabacloud_CloudGameAPI20200728::Client::getGameCcu(shared_ptr<GetGameCcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameCcuWithOptions(request, runtime);
}

GetGameStatusResponse Alibabacloud_CloudGameAPI20200728::Client::getGameStatusWithOptions(shared_ptr<GetGameStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    query->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameStatus"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameStatusResponse(callApi(params, req, runtime));
}

GetGameStatusResponse Alibabacloud_CloudGameAPI20200728::Client::getGameStatus(shared_ptr<GetGameStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameStatusWithOptions(request, runtime);
}

GetGameStockResponse Alibabacloud_CloudGameAPI20200728::Client::getGameStockWithOptions(shared_ptr<GetGameStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameStock"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameStockResponse(callApi(params, req, runtime));
}

GetGameStockResponse Alibabacloud_CloudGameAPI20200728::Client::getGameStock(shared_ptr<GetGameStockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameStockWithOptions(request, runtime);
}

GetGameTrialSurplusDurationResponse Alibabacloud_CloudGameAPI20200728::Client::getGameTrialSurplusDurationWithOptions(shared_ptr<GetGameTrialSurplusDurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameTrialSurplusDuration"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameTrialSurplusDurationResponse(callApi(params, req, runtime));
}

GetGameTrialSurplusDurationResponse Alibabacloud_CloudGameAPI20200728::Client::getGameTrialSurplusDuration(shared_ptr<GetGameTrialSurplusDurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameTrialSurplusDurationWithOptions(request, runtime);
}

GetGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::getGameVersionWithOptions(shared_ptr<GetGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameVersion"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameVersionResponse(callApi(params, req, runtime));
}

GetGameVersionResponse Alibabacloud_CloudGameAPI20200728::Client::getGameVersion(shared_ptr<GetGameVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameVersionWithOptions(request, runtime);
}

GetGameVersionProgressResponse Alibabacloud_CloudGameAPI20200728::Client::getGameVersionProgressWithOptions(shared_ptr<GetGameVersionProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGameVersionProgress"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGameVersionProgressResponse(callApi(params, req, runtime));
}

GetGameVersionProgressResponse Alibabacloud_CloudGameAPI20200728::Client::getGameVersionProgress(shared_ptr<GetGameVersionProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGameVersionProgressWithOptions(request, runtime);
}

GetItemResponse Alibabacloud_CloudGameAPI20200728::Client::getItemWithOptions(shared_ptr<GetItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    query->insert(pair<string, string>("ItemId", *request->itemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetItem"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetItemResponse(callApi(params, req, runtime));
}

GetItemResponse Alibabacloud_CloudGameAPI20200728::Client::getItem(shared_ptr<GetItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getItemWithOptions(request, runtime);
}

GetOutAccountBindDetailResponse Alibabacloud_CloudGameAPI20200728::Client::getOutAccountBindDetailWithOptions(shared_ptr<GetOutAccountBindDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outAccountType)) {
    query->insert(pair<string, string>("OutAccountType", *request->outAccountType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOutAccountBindDetail"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOutAccountBindDetailResponse(callApi(params, req, runtime));
}

GetOutAccountBindDetailResponse Alibabacloud_CloudGameAPI20200728::Client::getOutAccountBindDetail(shared_ptr<GetOutAccountBindDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOutAccountBindDetailWithOptions(request, runtime);
}

GetQueuingSizeResponse Alibabacloud_CloudGameAPI20200728::Client::getQueuingSizeWithOptions(shared_ptr<GetQueuingSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userLevel)) {
    query->insert(pair<string, long>("UserLevel", *request->userLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueuingSize"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueuingSizeResponse(callApi(params, req, runtime));
}

GetQueuingSizeResponse Alibabacloud_CloudGameAPI20200728::Client::getQueuingSize(shared_ptr<GetQueuingSizeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueuingSizeWithOptions(request, runtime);
}

GetSessionResponse Alibabacloud_CloudGameAPI20200728::Client::getSessionWithOptions(shared_ptr<GetSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSession"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSessionResponse(callApi(params, req, runtime));
}

GetSessionResponse Alibabacloud_CloudGameAPI20200728::Client::getSession(shared_ptr<GetSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSessionWithOptions(request, runtime);
}

GetStopGameTokenResponse Alibabacloud_CloudGameAPI20200728::Client::getStopGameTokenWithOptions(shared_ptr<GetStopGameTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStopGameToken"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStopGameTokenResponse(callApi(params, req, runtime));
}

GetStopGameTokenResponse Alibabacloud_CloudGameAPI20200728::Client::getStopGameToken(shared_ptr<GetStopGameTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStopGameTokenWithOptions(request, runtime);
}

KickPlayerResponse Alibabacloud_CloudGameAPI20200728::Client::kickPlayerWithOptions(shared_ptr<KickPlayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    query->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kickedAccountId)) {
    query->insert(pair<string, string>("KickedAccountId", *request->kickedAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KickPlayer"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KickPlayerResponse(callApi(params, req, runtime));
}

KickPlayerResponse Alibabacloud_CloudGameAPI20200728::Client::kickPlayer(shared_ptr<KickPlayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return kickPlayerWithOptions(request, runtime);
}

ListBoughtGamesResponse Alibabacloud_CloudGameAPI20200728::Client::listBoughtGamesWithOptions(shared_ptr<ListBoughtGamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
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
    {"action", boost::any(string("ListBoughtGames"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBoughtGamesResponse(callApi(params, req, runtime));
}

ListBoughtGamesResponse Alibabacloud_CloudGameAPI20200728::Client::listBoughtGames(shared_ptr<ListBoughtGamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBoughtGamesWithOptions(request, runtime);
}

ListContainerStatusResponse Alibabacloud_CloudGameAPI20200728::Client::listContainerStatusWithOptions(shared_ptr<ListContainerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListContainerStatusRequestGameSessionIdList>>(request->gameSessionIdList)) {
    query->insert(pair<string, vector<ListContainerStatusRequestGameSessionIdList>>("GameSessionIdList", *request->gameSessionIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListContainerStatus"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListContainerStatusResponse(callApi(params, req, runtime));
}

ListContainerStatusResponse Alibabacloud_CloudGameAPI20200728::Client::listContainerStatus(shared_ptr<ListContainerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContainerStatusWithOptions(request, runtime);
}

ListDeployableInstancesResponse Alibabacloud_CloudGameAPI20200728::Client::listDeployableInstancesWithOptions(shared_ptr<ListDeployableInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeployableInstances"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeployableInstancesResponse(callApi(params, req, runtime));
}

ListDeployableInstancesResponse Alibabacloud_CloudGameAPI20200728::Client::listDeployableInstances(shared_ptr<ListDeployableInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeployableInstancesWithOptions(request, runtime);
}

ListGameServerIpResponse Alibabacloud_CloudGameAPI20200728::Client::listGameServerIpWithOptions(shared_ptr<ListGameServerIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListGameServerIp"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGameServerIpResponse(callApi(params, req, runtime));
}

ListGameServerIpResponse Alibabacloud_CloudGameAPI20200728::Client::listGameServerIp(shared_ptr<ListGameServerIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGameServerIpWithOptions(request, runtime);
}

ListGameVersionsResponse Alibabacloud_CloudGameAPI20200728::Client::listGameVersionsWithOptions(shared_ptr<ListGameVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGameVersions"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGameVersionsResponse(callApi(params, req, runtime));
}

ListGameVersionsResponse Alibabacloud_CloudGameAPI20200728::Client::listGameVersions(shared_ptr<ListGameVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGameVersionsWithOptions(request, runtime);
}

ListGamesResponse Alibabacloud_CloudGameAPI20200728::Client::listGamesWithOptions(shared_ptr<ListGamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGames"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGamesResponse(callApi(params, req, runtime));
}

ListGamesResponse Alibabacloud_CloudGameAPI20200728::Client::listGames(shared_ptr<ListGamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGamesWithOptions(request, runtime);
}

ListHistoryContainerStatusResponse Alibabacloud_CloudGameAPI20200728::Client::listHistoryContainerStatusWithOptions(shared_ptr<ListHistoryContainerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastGameSessionId)) {
    query->insert(pair<string, string>("LastGameSessionId", *request->lastGameSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHistoryContainerStatus"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHistoryContainerStatusResponse(callApi(params, req, runtime));
}

ListHistoryContainerStatusResponse Alibabacloud_CloudGameAPI20200728::Client::listHistoryContainerStatus(shared_ptr<ListHistoryContainerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHistoryContainerStatusWithOptions(request, runtime);
}

ListLatestGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::listLatestGameArchiveWithOptions(shared_ptr<ListLatestGameArchiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagStatus)) {
    query->insert(pair<string, long>("TagStatus", *request->tagStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLatestGameArchive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLatestGameArchiveResponse(callApi(params, req, runtime));
}

ListLatestGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::listLatestGameArchive(shared_ptr<ListLatestGameArchiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLatestGameArchiveWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_CloudGameAPI20200728::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_CloudGameAPI20200728::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

QueryGameResponse Alibabacloud_CloudGameAPI20200728::Client::queryGameWithOptions(shared_ptr<QueryGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGame"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGameResponse(callApi(params, req, runtime));
}

QueryGameResponse Alibabacloud_CloudGameAPI20200728::Client::queryGame(shared_ptr<QueryGameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGameWithOptions(request, runtime);
}

QueryGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::queryGameHangWithOptions(shared_ptr<QueryGameHangRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGameHang"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGameHangResponse(callApi(params, req, runtime));
}

QueryGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::queryGameHang(shared_ptr<QueryGameHangRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGameHangWithOptions(request, runtime);
}

QueryItemsResponse Alibabacloud_CloudGameAPI20200728::Client::queryItemsWithOptions(shared_ptr<QueryItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("QueryItems"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemsResponse(callApi(params, req, runtime));
}

QueryItemsResponse Alibabacloud_CloudGameAPI20200728::Client::queryItems(shared_ptr<QueryItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemsWithOptions(request, runtime);
}

QueryOrderResponse Alibabacloud_CloudGameAPI20200728::Client::queryOrderWithOptions(shared_ptr<QueryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerAccountId)) {
    query->insert(pair<string, string>("BuyerAccountId", *request->buyerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrder"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderResponse(callApi(params, req, runtime));
}

QueryOrderResponse Alibabacloud_CloudGameAPI20200728::Client::queryOrder(shared_ptr<QueryOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderWithOptions(request, runtime);
}

QueryOutAccountBindStatusResponse Alibabacloud_CloudGameAPI20200728::Client::queryOutAccountBindStatusWithOptions(shared_ptr<QueryOutAccountBindStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDomain)) {
    query->insert(pair<string, string>("AccountDomain", *request->accountDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOutAccountBindStatus"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOutAccountBindStatusResponse(callApi(params, req, runtime));
}

QueryOutAccountBindStatusResponse Alibabacloud_CloudGameAPI20200728::Client::queryOutAccountBindStatus(shared_ptr<QueryOutAccountBindStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOutAccountBindStatusWithOptions(request, runtime);
}

QueryProjectResponse Alibabacloud_CloudGameAPI20200728::Client::queryProjectWithOptions(shared_ptr<QueryProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProject"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProjectResponse(callApi(params, req, runtime));
}

QueryProjectResponse Alibabacloud_CloudGameAPI20200728::Client::queryProject(shared_ptr<QueryProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProjectWithOptions(request, runtime);
}

QueryTenantResponse Alibabacloud_CloudGameAPI20200728::Client::queryTenantWithOptions(shared_ptr<QueryTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTenant"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTenantResponse(callApi(params, req, runtime));
}

QueryTenantResponse Alibabacloud_CloudGameAPI20200728::Client::queryTenant(shared_ptr<QueryTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTenantWithOptions(request, runtime);
}

RemoveGameFromProjectResponse Alibabacloud_CloudGameAPI20200728::Client::removeGameFromProjectWithOptions(shared_ptr<RemoveGameFromProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveGameFromProject"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveGameFromProjectResponse(callApi(params, req, runtime));
}

RemoveGameFromProjectResponse Alibabacloud_CloudGameAPI20200728::Client::removeGameFromProject(shared_ptr<RemoveGameFromProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGameFromProjectWithOptions(request, runtime);
}

RestoreGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::restoreGameArchiveWithOptions(shared_ptr<RestoreGameArchiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archiveId)) {
    query->insert(pair<string, string>("ArchiveId", *request->archiveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestoreGameArchive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestoreGameArchiveResponse(callApi(params, req, runtime));
}

RestoreGameArchiveResponse Alibabacloud_CloudGameAPI20200728::Client::restoreGameArchive(shared_ptr<RestoreGameArchiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreGameArchiveWithOptions(request, runtime);
}

SetGameAliveResponse Alibabacloud_CloudGameAPI20200728::Client::setGameAliveWithOptions(shared_ptr<SetGameAliveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keepAlive)) {
    body->insert(pair<string, long>("KeepAlive", *request->keepAlive));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGameAlive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGameAliveResponse(callApi(params, req, runtime));
}

SetGameAliveResponse Alibabacloud_CloudGameAPI20200728::Client::setGameAlive(shared_ptr<SetGameAliveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGameAliveWithOptions(request, runtime);
}

SetGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::setGameHangWithOptions(shared_ptr<SetGameHangRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGameHang"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGameHangResponse(callApi(params, req, runtime));
}

SetGameHangResponse Alibabacloud_CloudGameAPI20200728::Client::setGameHang(shared_ptr<SetGameHangRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGameHangWithOptions(request, runtime);
}

SkipTrialPolicyResponse Alibabacloud_CloudGameAPI20200728::Client::skipTrialPolicyWithOptions(shared_ptr<SkipTrialPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSessionId)) {
    query->insert(pair<string, string>("GameSessionId", *request->gameSessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipTrialPolicy"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipTrialPolicyResponse(callApi(params, req, runtime));
}

SkipTrialPolicyResponse Alibabacloud_CloudGameAPI20200728::Client::skipTrialPolicy(shared_ptr<SkipTrialPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return skipTrialPolicyWithOptions(request, runtime);
}

StartGameLiveResponse Alibabacloud_CloudGameAPI20200728::Client::startGameLiveWithOptions(shared_ptr<StartGameLiveRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartGameLiveShrinkRequest> request = make_shared<StartGameLiveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionShrink)) {
    query->insert(pair<string, string>("Extension", *request->extensionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    query->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoPushAddress)) {
    query->insert(pair<string, string>("VideoPushAddress", *request->videoPushAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartGameLive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartGameLiveResponse(callApi(params, req, runtime));
}

StartGameLiveResponse Alibabacloud_CloudGameAPI20200728::Client::startGameLive(shared_ptr<StartGameLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startGameLiveWithOptions(request, runtime);
}

StopGameLiveResponse Alibabacloud_CloudGameAPI20200728::Client::stopGameLiveWithOptions(shared_ptr<StopGameLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    query->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopGameLive"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopGameLiveResponse(callApi(params, req, runtime));
}

StopGameLiveResponse Alibabacloud_CloudGameAPI20200728::Client::stopGameLive(shared_ptr<StopGameLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopGameLiveWithOptions(request, runtime);
}

StopGameSessionResponse Alibabacloud_CloudGameAPI20200728::Client::stopGameSessionWithOptions(shared_ptr<StopGameSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizParam)) {
    body->insert(pair<string, string>("BizParam", *request->bizParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    body->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameSession)) {
    body->insert(pair<string, string>("GameSession", *request->gameSession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopGameSession"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopGameSessionResponse(callApi(params, req, runtime));
}

StopGameSessionResponse Alibabacloud_CloudGameAPI20200728::Client::stopGameSession(shared_ptr<StopGameSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopGameSessionWithOptions(request, runtime);
}

SubmitDeploymentResponse Alibabacloud_CloudGameAPI20200728::Client::submitDeploymentWithOptions(shared_ptr<SubmitDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudGameInstanceIds)) {
    query->insert(pair<string, string>("CloudGameInstanceIds", *request->cloudGameInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    query->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDeployment"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDeploymentResponse(callApi(params, req, runtime));
}

SubmitDeploymentResponse Alibabacloud_CloudGameAPI20200728::Client::submitDeployment(shared_ptr<SubmitDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDeploymentWithOptions(request, runtime);
}

SubmitInternalPurchaseChargeDataResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseChargeDataWithOptions(shared_ptr<SubmitInternalPurchaseChargeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->activeUserRetentionRateOneDay)) {
    query->insert(pair<string, double>("ActiveUserRetentionRateOneDay", *request->activeUserRetentionRateOneDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->activeUserRetentionRateSevenDay)) {
    query->insert(pair<string, double>("ActiveUserRetentionRateSevenDay", *request->activeUserRetentionRateSevenDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->activeUserRetentionRateThirtyDay)) {
    query->insert(pair<string, double>("ActiveUserRetentionRateThirtyDay", *request->activeUserRetentionRateThirtyDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->arpu)) {
    query->insert(pair<string, double>("Arpu", *request->arpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeDate)) {
    query->insert(pair<string, string>("ChargeDate", *request->chargeDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dau)) {
    query->insert(pair<string, long>("Dau", *request->dau));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mau)) {
    query->insert(pair<string, long>("Mau", *request->mau));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->newUserRetentionRateOneDay)) {
    query->insert(pair<string, double>("NewUserRetentionRateOneDay", *request->newUserRetentionRateOneDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->newUserRetentionRateSevenDay)) {
    query->insert(pair<string, double>("NewUserRetentionRateSevenDay", *request->newUserRetentionRateSevenDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->newUserRetentionRateThirtyDay)) {
    query->insert(pair<string, double>("NewUserRetentionRateThirtyDay", *request->newUserRetentionRateThirtyDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->paymentConversionRate)) {
    query->insert(pair<string, double>("PaymentConversionRate", *request->paymentConversionRate));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->playTimeAverageOneDay)) {
    query->insert(pair<string, double>("PlayTimeAverageOneDay", *request->playTimeAverageOneDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->playTimeAverageThirtyDay)) {
    query->insert(pair<string, double>("PlayTimeAverageThirtyDay", *request->playTimeAverageThirtyDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->playTimeNinetyPointsOneDay)) {
    query->insert(pair<string, double>("PlayTimeNinetyPointsOneDay", *request->playTimeNinetyPointsOneDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->playTimeNinetyPointsThirtyDay)) {
    query->insert(pair<string, double>("PlayTimeNinetyPointsThirtyDay", *request->playTimeNinetyPointsThirtyDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playTimeRangeOneDay)) {
    query->insert(pair<string, string>("PlayTimeRangeOneDay", *request->playTimeRangeOneDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playTimeRangeThirtyDay)) {
    query->insert(pair<string, string>("PlayTimeRangeThirtyDay", *request->playTimeRangeThirtyDay));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->userActivationRate)) {
    query->insert(pair<string, double>("UserActivationRate", *request->userActivationRate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitInternalPurchaseChargeData"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitInternalPurchaseChargeDataResponse(callApi(params, req, runtime));
}

SubmitInternalPurchaseChargeDataResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseChargeData(shared_ptr<SubmitInternalPurchaseChargeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitInternalPurchaseChargeDataWithOptions(request, runtime);
}

SubmitInternalPurchaseOrdersResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseOrdersWithOptions(shared_ptr<SubmitInternalPurchaseOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SubmitInternalPurchaseOrdersRequestOrderList>>(request->orderList)) {
    query->insert(pair<string, vector<SubmitInternalPurchaseOrdersRequestOrderList>>("OrderList", *request->orderList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitInternalPurchaseOrders"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitInternalPurchaseOrdersResponse(callApi(params, req, runtime));
}

SubmitInternalPurchaseOrdersResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseOrders(shared_ptr<SubmitInternalPurchaseOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitInternalPurchaseOrdersWithOptions(request, runtime);
}

SubmitInternalPurchaseReadyFlagResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseReadyFlagWithOptions(shared_ptr<SubmitInternalPurchaseReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SubmitInternalPurchaseReadyFlagRequestBatchInfoList>>(request->batchInfoList)) {
    query->insert(pair<string, vector<SubmitInternalPurchaseReadyFlagRequestBatchInfoList>>("BatchInfoList", *request->batchInfoList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeDate)) {
    query->insert(pair<string, string>("ChargeDate", *request->chargeDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderTotalCount)) {
    query->insert(pair<string, long>("OrderTotalCount", *request->orderTotalCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitInternalPurchaseReadyFlag"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitInternalPurchaseReadyFlagResponse(callApi(params, req, runtime));
}

SubmitInternalPurchaseReadyFlagResponse Alibabacloud_CloudGameAPI20200728::Client::submitInternalPurchaseReadyFlag(shared_ptr<SubmitInternalPurchaseReadyFlagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitInternalPurchaseReadyFlagWithOptions(request, runtime);
}

UpdateGameArchiveTagStatusResponse Alibabacloud_CloudGameAPI20200728::Client::updateGameArchiveTagStatusWithOptions(shared_ptr<UpdateGameArchiveTagStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archiveId)) {
    query->insert(pair<string, string>("ArchiveId", *request->archiveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagStatus)) {
    query->insert(pair<string, long>("TagStatus", *request->tagStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGameArchiveTagStatus"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGameArchiveTagStatusResponse(callApi(params, req, runtime));
}

UpdateGameArchiveTagStatusResponse Alibabacloud_CloudGameAPI20200728::Client::updateGameArchiveTagStatus(shared_ptr<UpdateGameArchiveTagStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGameArchiveTagStatusWithOptions(request, runtime);
}

UploadGameVersionByDownloadResponse Alibabacloud_CloudGameAPI20200728::Client::uploadGameVersionByDownloadWithOptions(shared_ptr<UploadGameVersionByDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadType)) {
    query->insert(pair<string, string>("DownloadType", *request->downloadType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameVersion)) {
    query->insert(pair<string, string>("GameVersion", *request->gameVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    query->insert(pair<string, string>("Hash", *request->hash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadGameVersionByDownload"))},
    {"version", boost::any(string("2020-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadGameVersionByDownloadResponse(callApi(params, req, runtime));
}

UploadGameVersionByDownloadResponse Alibabacloud_CloudGameAPI20200728::Client::uploadGameVersionByDownload(shared_ptr<UploadGameVersionByDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadGameVersionByDownloadWithOptions(request, runtime);
}

