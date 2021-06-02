// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ons_mqtt_20200420.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_OnsMqtt20200420;

Alibabacloud_OnsMqtt20200420::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("onsmqtt"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_OnsMqtt20200420::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyTokenResponse Alibabacloud_OnsMqtt20200420::Client::applyTokenWithOptions(shared_ptr<ApplyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyTokenResponse(doRPCRequest(make_shared<string>("ApplyToken"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyTokenResponse Alibabacloud_OnsMqtt20200420::Client::applyToken(shared_ptr<ApplyTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyTokenWithOptions(request, runtime);
}

BatchQuerySessionByClientIdsResponse Alibabacloud_OnsMqtt20200420::Client::batchQuerySessionByClientIdsWithOptions(shared_ptr<BatchQuerySessionByClientIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchQuerySessionByClientIdsResponse(doRPCRequest(make_shared<string>("BatchQuerySessionByClientIds"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchQuerySessionByClientIdsResponse Alibabacloud_OnsMqtt20200420::Client::batchQuerySessionByClientIds(shared_ptr<BatchQuerySessionByClientIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchQuerySessionByClientIdsWithOptions(request, runtime);
}

CreateGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::createGroupIdWithOptions(shared_ptr<CreateGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupIdResponse(doRPCRequest(make_shared<string>("CreateGroupId"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::createGroupId(shared_ptr<CreateGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupIdWithOptions(request, runtime);
}

DeleteGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::deleteGroupIdWithOptions(shared_ptr<DeleteGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteGroupIdResponse(doRPCRequest(make_shared<string>("DeleteGroupId"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::deleteGroupId(shared_ptr<DeleteGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupIdWithOptions(request, runtime);
}

GetDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::getDeviceCredentialWithOptions(shared_ptr<GetDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceCredentialResponse(doRPCRequest(make_shared<string>("GetDeviceCredential"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::getDeviceCredential(shared_ptr<GetDeviceCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceCredentialWithOptions(request, runtime);
}

ListGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::listGroupIdWithOptions(shared_ptr<ListGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListGroupIdResponse(doRPCRequest(make_shared<string>("ListGroupId"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListGroupIdResponse Alibabacloud_OnsMqtt20200420::Client::listGroupId(shared_ptr<ListGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupIdWithOptions(request, runtime);
}

QueryMqttTraceDeviceResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceDeviceWithOptions(shared_ptr<QueryMqttTraceDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMqttTraceDeviceResponse(doRPCRequest(make_shared<string>("QueryMqttTraceDevice"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMqttTraceDeviceResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceDevice(shared_ptr<QueryMqttTraceDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMqttTraceDeviceWithOptions(request, runtime);
}

QueryMqttTraceMessageOfClientResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessageOfClientWithOptions(shared_ptr<QueryMqttTraceMessageOfClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMqttTraceMessageOfClientResponse(doRPCRequest(make_shared<string>("QueryMqttTraceMessageOfClient"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMqttTraceMessageOfClientResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessageOfClient(shared_ptr<QueryMqttTraceMessageOfClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMqttTraceMessageOfClientWithOptions(request, runtime);
}

QueryMqttTraceMessagePublishResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessagePublishWithOptions(shared_ptr<QueryMqttTraceMessagePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMqttTraceMessagePublishResponse(doRPCRequest(make_shared<string>("QueryMqttTraceMessagePublish"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMqttTraceMessagePublishResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessagePublish(shared_ptr<QueryMqttTraceMessagePublishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMqttTraceMessagePublishWithOptions(request, runtime);
}

QueryMqttTraceMessageSubscribeResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessageSubscribeWithOptions(shared_ptr<QueryMqttTraceMessageSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMqttTraceMessageSubscribeResponse(doRPCRequest(make_shared<string>("QueryMqttTraceMessageSubscribe"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMqttTraceMessageSubscribeResponse Alibabacloud_OnsMqtt20200420::Client::queryMqttTraceMessageSubscribe(shared_ptr<QueryMqttTraceMessageSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMqttTraceMessageSubscribeWithOptions(request, runtime);
}

QuerySessionByClientIdResponse Alibabacloud_OnsMqtt20200420::Client::querySessionByClientIdWithOptions(shared_ptr<QuerySessionByClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySessionByClientIdResponse(doRPCRequest(make_shared<string>("QuerySessionByClientId"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySessionByClientIdResponse Alibabacloud_OnsMqtt20200420::Client::querySessionByClientId(shared_ptr<QuerySessionByClientIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySessionByClientIdWithOptions(request, runtime);
}

QueryTokenResponse Alibabacloud_OnsMqtt20200420::Client::queryTokenWithOptions(shared_ptr<QueryTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTokenResponse(doRPCRequest(make_shared<string>("QueryToken"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTokenResponse Alibabacloud_OnsMqtt20200420::Client::queryToken(shared_ptr<QueryTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTokenWithOptions(request, runtime);
}

RefreshDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::refreshDeviceCredentialWithOptions(shared_ptr<RefreshDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshDeviceCredentialResponse(doRPCRequest(make_shared<string>("RefreshDeviceCredential"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::refreshDeviceCredential(shared_ptr<RefreshDeviceCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDeviceCredentialWithOptions(request, runtime);
}

RegisterDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::registerDeviceCredentialWithOptions(shared_ptr<RegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterDeviceCredentialResponse(doRPCRequest(make_shared<string>("RegisterDeviceCredential"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::registerDeviceCredential(shared_ptr<RegisterDeviceCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceCredentialWithOptions(request, runtime);
}

RevokeTokenResponse Alibabacloud_OnsMqtt20200420::Client::revokeTokenWithOptions(shared_ptr<RevokeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeTokenResponse(doRPCRequest(make_shared<string>("RevokeToken"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeTokenResponse Alibabacloud_OnsMqtt20200420::Client::revokeToken(shared_ptr<RevokeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeTokenWithOptions(request, runtime);
}

SendMessageResponse Alibabacloud_OnsMqtt20200420::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendMessageResponse(doRPCRequest(make_shared<string>("SendMessage"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendMessageResponse Alibabacloud_OnsMqtt20200420::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageWithOptions(request, runtime);
}

UnRegisterDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::unRegisterDeviceCredentialWithOptions(shared_ptr<UnRegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnRegisterDeviceCredentialResponse(doRPCRequest(make_shared<string>("UnRegisterDeviceCredential"), make_shared<string>("2020-04-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnRegisterDeviceCredentialResponse Alibabacloud_OnsMqtt20200420::Client::unRegisterDeviceCredential(shared_ptr<UnRegisterDeviceCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unRegisterDeviceCredentialWithOptions(request, runtime);
}

